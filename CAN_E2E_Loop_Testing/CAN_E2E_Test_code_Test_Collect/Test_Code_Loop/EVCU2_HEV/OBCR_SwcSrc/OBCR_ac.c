/*
 * File: OBCR_ac.c
 *
 * Code generated for Simulink model 'OBCR_ac'.
 *
 * Model version                  : 9.571
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 14:35:24 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "OBCR_ac.h"
#include "look1_iflf_binlcapw.h"
#include "look2_iflf_binlcapw.h"

/* Named constants for Chart: '<S345>/Stateflow Chart' */
#if Rte_SysCon_Variant_OBCR_1 || Rte_SysCon_Variant_OBCR_2
#define OBCR_ac_IN_Budget              ((uint8)1U)
#endif

#if Rte_SysCon_Variant_OBCR_1 || Rte_SysCon_Variant_OBCR_2
#define OBCR_ac_IN_Budget1             ((uint8)2U)
#endif

/* Named constants for Chart: '<S15>/Charging_MainSF' */
#if Rte_SysCon_Variant_OBCR_1
#define OBCR_ac_IN_AC                  ((uint8)1U)
#endif

#if Rte_SysCon_Variant_OBCR_1
#define OBCR_ac_IN_BPCM_Ready          ((uint8)1U)
#endif

#if Rte_SysCon_Variant_OBCR_1
#define OBCR_ac_IN_ChargeTypeState     ((uint8)2U)
#endif

#if Rte_SysCon_Variant_OBCR_1
#define OBCR_ac_IN_Charge_Complete     ((uint8)3U)
#endif

#if Rte_SysCon_Variant_OBCR_1
#define OBCR_ac_IN_Charging            ((uint8)4U)
#endif

#if Rte_SysCon_Variant_OBCR_1
#define OBCR_ac_IN_CloseS2             ((uint8)1U)
#endif

#if Rte_SysCon_Variant_OBCR_1
#define OBCR_ac_IN_DC                  ((uint8)2U)
#endif

#if Rte_SysCon_Variant_OBCR_1
#define OBCR_ac_IN_Estop               ((uint8)5U)
#endif

#if Rte_SysCon_Variant_OBCR_1
#define OBCR_ac_IN_NO_ACTIVE_CHILD     ((uint8)0U)
#endif

#if Rte_SysCon_Variant_OBCR_1
#define OBCR_ac_IN_OBCM_Charge         ((uint8)2U)
#endif

#if Rte_SysCon_Variant_OBCR_1
#define OBCR_ac_IN_OBCM_EnblCharge     ((uint8)3U)
#endif

#if Rte_SysCon_Variant_OBCR_1
#define OBCR_ac_IN_OBCM_Idle           ((uint8)4U)
#endif

#if Rte_SysCon_Variant_OBCR_1
#define OBCR_ac_IN_PowerUp             ((uint8)6U)
#endif

#if Rte_SysCon_Variant_OBCR_1
#define OBCR_ac_IN_ShutDown            ((uint8)7U)
#endif

#if Rte_SysCon_Variant_OBCR_1
#define OBCR_ac_IN_Wireless            ((uint8)3U)
#endif

/* Named constants for Chart: '<S444>/ChargingLevelDet' */
#if Rte_SysCon_Variant_OBCR_1
#define IN_Good_Connection_Established ((uint8)2U)
#endif

#if Rte_SysCon_Variant_OBCR_1
#define IN_Partially_Connected_Drivin_i ((uint8)6U)
#endif

#if Rte_SysCon_Variant_OBCR_1
#define IN_Partially_Connected_Driving_ ((uint8)5U)
#endif

#if Rte_SysCon_Variant_OBCR_1
#define IN_S2_ClosedVoltageLevelDetermi ((uint8)7U)
#endif

#if Rte_SysCon_Variant_OBCR_1
#define OBCR_ac_IN_IrregularActivity   ((uint8)3U)
#endif

#if Rte_SysCon_Variant_OBCR_1
#define OBCR_ac_IN_NotConnected        ((uint8)4U)
#endif

#if Rte_SysCon_Variant_OBCR_1
#define OBC_IN_Connected_Not_Determined ((uint8)1U)
#endif

/* Named constants for Chart: '<S445>/ChrgingSysStsDet' */
#if Rte_SysCon_Variant_OBCR_1
#define OBCR_ac_IN_ChargingState       ((uint8)1U)
#endif

#if Rte_SysCon_Variant_OBCR_1
#define OBCR_ac_IN_ChrgComplete        ((uint8)2U)
#endif

#if Rte_SysCon_Variant_OBCR_1
#define OBCR_ac_IN_Init_Decision       ((uint8)3U)
#endif

#if Rte_SysCon_Variant_OBCR_1
#define OBCR_ac_IN_InterruptedState    ((uint8)4U)
#endif

#if Rte_SysCon_Variant_OBCR_1
#define OBCR_ac_IN_Unplug              ((uint8)5U)
#endif

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_OBCR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(boolean, OBCR_VAR_INIT) HeOBCR_b_EnableDCGBT = 0;/* Referenced by:
                                                                      * '<S873>/Calib'
                                                                      * '<S34>/Calib'
                                                                      */

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(boolean, OBCR_VAR_INIT) HeOBCR_b_LOCIDCMSecBus = 1;/* Referenced by: '<S449>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(boolean, OBCR_VAR_INIT) HeOBCR_b_LOC_BCCM = 0;/* Referenced by: '<S450>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KaOBCR_I_DefaultDCCurrent[7] =
{
    117.0F, 108.0F, 90.0F, 71.0F, 60.0F, 54.0F, 25.0F
} ;                                    /* Referenced by:
                                        * '<S195>/Calib'
                                        * '<S253>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KaOBCR_k_CurrentScalingFactor[7] =
{
    -0.05F, -0.1F, -0.0666666701F, -0.0666666701F, -0.2F, -0.2F, -0.1F
} ;                                    /* Referenced by:
                                        * '<S196>/Calib'
                                        * '<S254>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KaOBCR_k_CurrentScalingYIntrcpt[7]
    =
{
    1.5F, 4.0F, 3.66666675F, 4.66666651F, 15.0F, 16.0F, 9.0F
} ;                                    /* Referenced by:
                                        * '<S197>/Calib'
                                        * '<S255>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KaOBCR_k_LvlPerc[8] =
{
    0.0F, 0.2F, 0.4F, 0.6F, 0.8F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by:
                                        * '<S276>/Calib'
                                        * '<S231>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(uint16, OBCR_VAR_INIT) KeOBCR_Cnt_ACSwitchResponse = 2U;/* Referenced by: '<S100>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(uint16, OBCR_VAR_INIT) KeOBCR_Cnt_Cntctrbypass_Delay = 25U;/* Referenced by: '<S48>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(uint16, OBCR_VAR_INIT) KeOBCR_Cnt_ConChrgTimeEstDly = 200U;/* Referenced by: '<S145>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(uint16, OBCR_VAR_INIT) KeOBCR_Cnt_DCMaxCommTime = 800U;/* Referenced by: '<S36>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(uint16, OBCR_VAR_INIT) KeOBCR_Cnt_DbncInputVoltSigCnt = 7U;/* Referenced by: '<S483>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(uint16, OBCR_VAR_INIT) KeOBCR_Cnt_DbncPlugInLock = 48U;/* Referenced by: '<S502>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(uint16, OBCR_VAR_INIT) KeOBCR_Cnt_DbncPlugInReason = 10U;/* Referenced by: '<S559>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(uint16, OBCR_VAR_INIT) KeOBCR_Cnt_DbncRstChargLvl = 20U;/* Referenced by: '<S484>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(uint16, OBCR_VAR_INIT) KeOBCR_Cnt_DbncTimePlugInVldCn1 =
    10U;                               /* Referenced by: '<S518>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(uint16, OBCR_VAR_INIT) KeOBCR_Cnt_Dbnc_ChrgShpMdSOC = 200U;/* Referenced by: '<S72>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(uint16, OBCR_VAR_INIT) KeOBCR_Cnt_DlyPlugInLock = 8U;/* Referenced by: '<S503>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(uint16, OBCR_VAR_INIT) KeOBCR_Cnt_ECTPwrBdgtDbnc_PPMd =
    2400U;                             /* Referenced by: '<S348>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1 || Rte_SysCon_Variant_OBCR_2

static volatile CONST(uint16, OBCR_VAR_INIT) KeOBCR_Cnt_PwrBdgt_Dbnc_PSA = 400U;/* Referenced by:
                                                                      * '<S653>/Calib'
                                                                      * '<S418>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(uint16, OBCR_VAR_INIT) KeOBCR_Cnt_Rdy4ShtDwnDbnc = 4800U;/* Referenced by: '<S93>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(uint16, OBCR_VAR_INIT) KeOBCR_Cnt_SOCLoDbnc_ThrmlBdgt =
    60U;                               /* Referenced by: '<S368>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(uint16, OBCR_VAR_INIT) KeOBCR_Cnt_SecureConnV2L_Dbnc = 4U;/* Referenced by: '<S570>/Calib' */

#endif

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_I_AccCurrVal = 0.0F;/* Referenced by: '<S664>/Calib' */

#if Rte_SysCon_Variant_OBCR_1 || Rte_SysCon_Variant_OBCR_2

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_I_CurrOffset_EstPwrBdgt =
    0.0F;                              /* Referenced by:
                                        * '<S619>/Calib'
                                        * '<S360>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_I_DCCurrentThresh = 5.0F;/* Referenced by: '<S198>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_I_DfltLvlOneCrnt = 3.0F;/* Referenced by: '<S169>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_I_DfltLvlOneCrnt_NotConn =
    3.0F;                              /* Referenced by: '<S232>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_I_DfltLvlTwoCrnt = 16.0F;/* Referenced by: '<S170>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_I_DfltLvlTwoCrnt_NotConn =
    16.0F;                             /* Referenced by: '<S233>/Calib' */

#endif

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_I_EVSECurr_RegTolOvrdVal =
    0.0F;                              /* Referenced by: '<S665>/Calib' */
static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_I_EVSEOutputCurrOvrdVal =
    0.0F;                              /* Referenced by: '<S666>/Calib' */
static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_I_EVSEPeakCurrRipOvrdVal =
    0.0F;                              /* Referenced by: '<S667>/Calib' */

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_I_Lv1Crnt_NotConn_China =
    3.24F;                             /* Referenced by: '<S234>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_I_Lv1Crnt_NotConn_EMEA =
    3.24F;                             /* Referenced by: '<S235>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_I_Lv2Crnt_NotConn_China =
    12.79F;                            /* Referenced by: '<S236>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_I_Lv2Crnt_NotConn_EMEA =
    12.79F;                            /* Referenced by: '<S237>/Calib' */

#endif

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_I_MaxAlwdBatCurr = 20.0F;/* Referenced by: '<S758>/Calib' */

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_I_MaxAlwdCurrAC_China =
    32.0F;                             /* Referenced by: '<S596>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_I_MaxAlwdCurrAC_Def1 =
    30.0F;                             /* Referenced by: '<S597>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_I_MaxAlwdCurrAC_Def2 =
    30.0F;                             /* Referenced by: '<S598>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_I_MaxAlwdCurrAC_Eu = 30.0F;/* Referenced by: '<S599>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_I_MaxAlwdCurrAC_JA = 30.0F;/* Referenced by: '<S600>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_I_MaxAlwdCurrAC_NA = 30.0F;/* Referenced by: '<S601>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_I_MinChrgCurr = 3.0F;/* Referenced by:
                                                                      * '<S277>/Calib'
                                                                      * '<S238>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_I_MinDefaultDCCurrent =
    5.0F;                              /* Referenced by: '<S199>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_K_AddLevelOneFactorCap =
    1.0F;                              /* Referenced by:
                                        * '<S171>/Calib'
                                        * '<S239>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_K_AddLevelTwoFactorCap =
    1.0F;                              /* Referenced by:
                                        * '<S172>/Calib'
                                        * '<S240>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_K_BattTemp_FilterTimeConst1
    = 0.8F;                            /* Referenced by: '<S278>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_K_BattTemp_FilterTimeConst2
    = 0.01F;                           /* Referenced by: '<S279>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_K_CellVltHysLevel = 0.002F;/* Referenced by: '<S173>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_K_ChargTimeCalFactor = 1.0F;/* Referenced by: '<S301>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT)
    KeOBCR_K_ChrgCurrAval_FilterTimeConst_D = 0.8F;/* Referenced by: '<S280>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT)
    KeOBCR_K_ChrgCurrAval_FilterTimeConst_T = 0.1F;/* Referenced by: '<S281>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_K_ChrgTimeEst_NegGrd =
    -0.1F;                             /* Referenced by:
                                        * '<S200>/Calib'
                                        * '<S256>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_K_ChrgTimeEst_PosGrd = 0.1F;/* Referenced by:
                                                                      * '<S201>/Calib'
                                                                      * '<S257>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_K_ChrgTimeEst_TimeScale =
    60.0F;                             /* Referenced by:
                                        * '<S202>/Calib'
                                        * '<S258>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(uint16, OBCR_VAR_INIT) KeOBCR_K_DCCurr_FiltWindowSize = 1U;/* Referenced by: '<S282>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_K_SOC_FilterTimeConst1 =
    0.1F;                              /* Referenced by: '<S283>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_K_SOC_FilterTimeConst2 =
    0.8F;                              /* Referenced by: '<S284>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1 || Rte_SysCon_Variant_OBCR_2

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_P_AddnPwrtoBdgt = 300.0F;/* Referenced by:
                                                                      * '<S640>/Calib'
                                                                      * '<S404>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_OBCR_1 || Rte_SysCon_Variant_OBCR_2

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_P_AvalPwrForThmrNeg =
    -20.0F;                            /* Referenced by:
                                        * '<S644>/Calib'
                                        * '<S409>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_OBCR_1 || Rte_SysCon_Variant_OBCR_2

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_P_AvalPwrForThmrPos = 20.0F;/* Referenced by:
                                                                      * '<S645>/Calib'
                                                                      * '<S410>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_OBCR_1 || Rte_SysCon_Variant_OBCR_2

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_P_AvalPwrForThmrVal = 2.0F;/* Referenced by:
                                                                      * '<S608>/Calib'
                                                                      * '<S336>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_OBCR_1 || Rte_SysCon_Variant_OBCR_2

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_P_DfltEng_PwrBdgt =
    10000.0F;                          /* Referenced by:
                                        * '<S609>/Calib'
                                        * '<S337>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_P_ECTPwrBdgtTh_PPMd =
    3000.0F;                           /* Referenced by: '<S349>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1 || Rte_SysCon_Variant_OBCR_2

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_P_EngCrank = 6600.0F;/* Referenced by:
                                                                      * '<S610>/Calib'
                                                                      * '<S369>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_OBCR_1 || Rte_SysCon_Variant_OBCR_2

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_P_MaxPwr2ModBdgt = 900.0F;/* Referenced by:
                                                                      * '<S632>/Calib'
                                                                      * '<S396>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_OBCR_1 || Rte_SysCon_Variant_OBCR_2

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_P_MinPwr2ModBdgt = 500.0F;/* Referenced by:
                                                                      * '<S633>/Calib'
                                                                      * '<S397>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_P_MinThrmlBdgt = 3000.0F;/* Referenced by: '<S381>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_P_MtrGenThrsh = 0.0F;/* Referenced by: '<S382>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1 || Rte_SysCon_Variant_OBCR_2

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_P_NewHyst_MaxOut = 10000.0F;/* Referenced by:
                                                                      * '<S620>/Calib'
                                                                      * '<S657>/Calib'
                                                                      * '<S350>/Calib'
                                                                      * '<S361>/Calib'
                                                                      * '<S422>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_P_TestActChargeLim = 0.0F;/* Referenced by: '<S324>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_P_TestActChargePower = 0.0F;/* Referenced by: '<S325>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_P_TestEVSEPwr = 0.0F;/* Referenced by: '<S326>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_P_TestPowertoBattery = 0.0F;/* Referenced by: '<S327>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1 || Rte_SysCon_Variant_OBCR_2

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_P_Thermal_Hys_LD = -1.0F;/* Referenced by:
                                                                      * '<S658>/Calib'
                                                                      * '<S423>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_OBCR_1 || Rte_SysCon_Variant_OBCR_2

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_P_Thermal_Hys_LU = 0.15F;/* Referenced by:
                                                                      * '<S659>/Calib'
                                                                      * '<S424>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_OBCR_1 || Rte_SysCon_Variant_OBCR_2

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_P_Thermal_Offset = 100.0F;/* Referenced by:
                                                                      * '<S634>/Calib'
                                                                      * '<S398>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_P_ThrmlBdgt_LD_PPMd =
    -100.0F;                           /* Referenced by: '<S351>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_P_ThrmlBdgt_LU_PPMd = 50.0F;/* Referenced by: '<S352>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_Pct_DCChrg_80Thrsh = 80.0F;/* Referenced by: '<S146>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_Pct_IPSOCSetPt_HystTol =
    2.0F;                              /* Referenced by: '<S73>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_Pct_MaxSOC2StopChrgInit =
    100.0F;                            /* Referenced by: '<S74>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_Pct_NoInitChargeSOCMinHigh =
    22.5F;                             /* Referenced by: '<S75>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_Pct_NoInitChargeSOCMinLow =
    22.5F;                             /* Referenced by: '<S76>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_Pct_PSA_ThrmlBdgt_SOCThrsh =
    13.5F;                             /* Referenced by: '<S370>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_Pct_REMSOCSetPt_HystTol =
    2.0F;                              /* Referenced by: '<S77>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_Pct_RaceprepSOClimit =
    50.0F;                             /* Referenced by: '<S320>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_Pct_SOCSetPt_IP = 35.0F;/* Referenced by: '<S78>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_Pct_SOCSetPt_REMLogMode =
    35.0F;                             /* Referenced by: '<S79>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_Pct_TargetSOC = 98.0F;/* Referenced by: '<S309>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_Pct_UnusedUpperSOCBand =
    0.09F;                             /* Referenced by: '<S137>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1 || Rte_SysCon_Variant_OBCR_2

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_T_MinTemp2ModPwrBdgt =
    45.0F;                             /* Referenced by:
                                        * '<S635>/Calib'
                                        * '<S399>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_T_NoInitChargeTempMax =
    45.0F;                             /* Referenced by: '<S80>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_T_NoInitChargeTempMin =
    -25.0F;                            /* Referenced by: '<S81>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_U_HVBatt_NominalVolt =
    410.0F;                            /* Referenced by: '<S298>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_U_LSP_VoltageLvl = 150.0F;/* Referenced by: '<S485>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_U_LSP_VoltageLvl1 = 80.0F;/* Referenced by: '<S486>/Calib' */

#endif

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_U_MaxAllowableBattVolt =
    398.0F;                            /* Referenced by: '<S759>/Calib' */

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_U_MaxAlwdCellVltLvl1 =
    4.082F;                            /* Referenced by: '<S174>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_U_MaxVlt2StopChrgInit =
    4.11F;                             /* Referenced by: '<S82>/Calib' */

#endif

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_U_MinAllowableBattVolt =
    216.0F;                            /* Referenced by: '<S760>/Calib' */

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_U_RSP_VoltageLvl = 180.0F;/* Referenced by: '<S487>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_U_RSP_VoltageLvl1 = 95.0F;/* Referenced by: '<S488>/Calib' */

#endif

static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_AccCurrOvrd = 0;/* Referenced by: '<S668>/Calib' */

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_AddLevelOneFactorMul = 0;/* Referenced by:
                                                                      * '<S175>/Calib'
                                                                      * '<S241>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_Allw_PPMd_PwrBudgetBlend =
    0;                                 /* Referenced by: '<S353>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1 || Rte_SysCon_Variant_OBCR_2

static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_AvalPwrForThmrEnbl = 0;/* Referenced by:
                                                                      * '<S611>/Calib'
                                                                      * '<S338>/Calib'
                                                                      */

#endif

static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_BPCM_ChrgStatOvrd = 0;/* Referenced by: '<S669>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_CabPrecDny_BattCond_Ovrd =
    0;                                 /* Referenced by: '<S670>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_CabPrecDny_BattCond_Val =
    0;                                 /* Referenced by: '<S671>/Calib' */

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_ChargSysStsOvrd = 0;/* Referenced by: '<S533>/Calib' */

#endif

static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_ChargeReqOvrd = 0;/* Referenced by: '<S672>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_ChargeReqOvrdVal = 0;/* Referenced by: '<S673>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_ChargingLevelOvrd = 0;/* Referenced by: '<S847>/Calib' */

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_ChrgCmpltSecConn_Enbl = 1;/* Referenced by: '<S61>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_ChrgCrntFltRstSel = 0;/* Referenced by: '<S285>/Calib' */

#endif

static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_ChrgPort_BCM_Ovrd = 0;/* Referenced by: '<S848>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_ChrgPort_BCM_Val = 0;/* Referenced by: '<S849>/Calib' */

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_ChrgSysStsOvrdNtChrging =
    0;                                 /* Referenced by: '<S534>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_ChrgTypeEnblInfldMd = 1;/* Referenced by: '<S37>/Calib' */

#endif

static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_ChrgngCmpltOvrd = 0;/* Referenced by: '<S850>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_ChrgngCmpltOvrdVal = 0;/* Referenced by: '<S851>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_ChrgrModeReq = 0;/* Referenced by: '<S852>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_CloseS2Cntctr_Ovrd = 0;/* Referenced by: '<S853>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_CloseS2Cntctr_OvrdVal = 0;/* Referenced by: '<S854>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_DCEst100_Ovrd = 0;/* Referenced by: '<S855>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_DCEst80_Ovrd = 0;/* Referenced by: '<S856>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_DschrgOBCMdRq = 0;/* Referenced by: '<S674>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_DschrgS2CmdOvrd = 0;/* Referenced by: '<S675>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_DschrgS2CmdVal = 0;/* Referenced by: '<S676>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_DschrgSysSts = 0;/* Referenced by: '<S677>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_EVSECurr_RegTolOvrd = 0;/* Referenced by: '<S678>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_EVSEOutputCurrOvrd = 0;/* Referenced by: '<S679>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_EVSEPeakCurrRipOvrd = 0;/* Referenced by: '<S680>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_EVSE_PilotStat_Ovrd = 0;/* Referenced by: '<S681>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_EVSE_ProxStat_Ovrd = 0;/* Referenced by: '<S682>/Calib' */

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_EnableCANC_China = 1;/* Referenced by: '<S126>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_EnbPlugInChrgShipMd = 1;/* Referenced by: '<S83>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_EnblDlydShtDwn = 0;/* Referenced by: '<S94>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_EnblModThrmlBdgt = 1;/* Referenced by: '<S371>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_EnblPlgInFlg = 0;/* Referenced by: '<S438>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_EnblPlugInChrgPlantMd = 1;/* Referenced by: '<S84>/Calib' */

#endif

static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_FullAmpHrCap_Ovrd = 0;/* Referenced by: '<S683>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_HCP_DC_RetryOvrd = 0;/* Referenced by: '<S857>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_HVBat_DC_CntctrOpnOvrd =
    0;                                 /* Referenced by: '<S684>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_HVBat_DC_CntctrOpnOvrdVal
    = 0;                               /* Referenced by: '<S685>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_HVBat_DC_CntctrReqOvrd =
    0;                                 /* Referenced by: '<S686>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_HVBat_DC_CntctrReqOvrdVal
    = 0;                               /* Referenced by: '<S687>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_HVPerWUTherm_Ovrd = 0;/* Referenced by: '<S688>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_HVPerWUTherm_Val = 0;/* Referenced by: '<S689>/Calib' */

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_HVPerWUThermalEnbl = 1;/* Referenced by: '<S366>/Calib' */

#endif

static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_HV_AuxLoadOffReqovrd = 0;/* Referenced by: '<S690>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_HV_AuxLoadOffReqovrdVal =
    0;                                 /* Referenced by: '<S691>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT)
    KeOBCR_b_HV_BatCntctrOpenPendingOvrd = 0;/* Referenced by: '<S692>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT)
    KeOBCR_b_HV_BatCntctrOpenPendingVal = 0;/* Referenced by: '<S693>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_HV_BatCntctrOpnRqOvrd = 0;/* Referenced by: '<S694>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_HV_BatCntctrOpnRqOvrdVal =
    0;                                 /* Referenced by: '<S695>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT)
    KeOBCR_b_HV_TracBatCntctrConfigovrd = 0;/* Referenced by: '<S696>/Calib' */

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_HoodAjarNoCharge1 = 1;/* Referenced by: '<S49>/Calib' */

#endif

static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_HoodAjarOvrd = 0;/* Referenced by: '<S697>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_HoodAjarVal = 0;/* Referenced by: '<S698>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_IDCM_DCCAOvrd = 0;/* Referenced by: '<S699>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_IDCM_DCCAOvrdVal = 0;/* Referenced by: '<S700>/Calib' */

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_IgnoreFltVehSpd = 0;/* Referenced by: '<S521>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_IgnoreHoodAjarCond = 0;/* Referenced by: '<S50>/Calib' */

#endif

static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_InFieldMdOvrd = 0;/* Referenced by: '<S701>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_InFieldMdVal = 0;/* Referenced by: '<S702>/Calib' */

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_LOC_IDCM = 0;/* Referenced by: '<S451>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_LOC_OBCM = 1;/* Referenced by: '<S452>/Calib' */

#endif

static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_OBCM_ChrgEnblStsOvrd = 0;/* Referenced by: '<S703>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_OBCM_ChrgEnblStsVal = 0;/* Referenced by: '<S704>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_OBCM_EnblChrgOvrd = 0;/* Referenced by: '<S858>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_OBCM_EnblChrgOvrdValue =
    0;                                 /* Referenced by: '<S859>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_PSAOvrd = 0;/* Referenced by: '<S705>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_PSAVal = 0;/* Referenced by: '<S706>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_Prox_GBT = 0;/* Referenced by: '<S707>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_RacePrepBattLvlStsOvrd =
    0;                                 /* Referenced by: '<S860>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_RacePrepBattLvlStsOvrdVal
    = 0;                               /* Referenced by: '<S861>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_SLACStsOvrd = 0;/* Referenced by: '<S708>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_ShipMdOvrd = 0;/* Referenced by: '<S709>/Calib' */

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_SwtchblBttryPckEnbl = 0;/* Referenced by: '<S51>/Calib' */

#endif

static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_THMR_HoodCondOvrd = 0;/* Referenced by: '<S710>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_THMR_HoodCondVal = 0;/* Referenced by: '<S711>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_THMR_Rdy4ShtDwn = 0;/* Referenced by: '<S712>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_THMR_RdyOvrd = 0;/* Referenced by: '<S713>/Calib' */

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_TestActChargeLimFA = 0;/* Referenced by: '<S328>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_TestActChargePwrFA = 0;/* Referenced by: '<S329>/Calib' */

#endif

static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_TxGBTMsgRequest = 0;/* Referenced by: '<S714>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_TxGBTMsgResponse = 0;/* Referenced by: '<S715>/Calib' */

#if Rte_SysCon_Variant_OBCR_1 || Rte_SysCon_Variant_OBCR_2

static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_UseAccCurrent = 1;/* Referenced by:
                                                                      * '<S627>/Calib'
                                                                      * '<S390>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_UseBPLT_PwrBdgt = 1;/* Referenced by: '<S372>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1 || Rte_SysCon_Variant_OBCR_2

static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_UseECT_PwrBdgt = 0;/* Referenced by:
                                                                      * '<S612>/Calib'
                                                                      * '<S339>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_UseMinCurr_EstPwrBdgt = 0;/* Referenced by:
                                                                      * '<S362>/Calib'
                                                                      * '<S391>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_Use_IPSOCSetPt = 1;/* Referenced by: '<S85>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_Use_REMSOCSetPt = 1;/* Referenced by: '<S86>/Calib' */

#endif

static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_V2L_DetectedOvrd = 0;/* Referenced by: '<S716>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_V2L_DetectedVal = 0;/* Referenced by: '<S717>/Calib' */
static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_V2X_Selection = 0;/* Referenced by:
                                                                      * '<S862>/Calib'
                                                                      * '<S95>/Calib'
                                                                      */

#if Rte_SysCon_Variant_OBCR_1 || Rte_SysCon_Variant_OBCR_2

static volatile CONST(boolean, OBCR_VAR_INIT) KeOBCR_b_isBEV = 0;/* Referenced by:
                                                                  * '<S613>/Calib'
                                                                  * '<S340>/Calib'
                                                                  */

#endif

static volatile CONST(TeOBCR_e_ChargingStat_BPCM, OBCR_VAR_INIT)
    KeOBCR_e_BPCM_ChrgStatVal = CeOBCR_e_BattNotReady;/* Referenced by: '<S718>/Calib' */
static volatile CONST(TeOBCR_e_ChargingLevel, OBCR_VAR_INIT)
    KeOBCR_e_ChargingLevel = CeOBCR_e_ChargingLvlDefault;/* Referenced by: '<S863>/Calib' */
static volatile CONST(TeOBCR_e_ChrgrModeCmd_OBCM, OBCR_VAR_INIT)
    KeOBCR_e_ChrgrModeReq = CeOBCR_e_Idle_OBCMdRq;/* Referenced by: '<S864>/Calib' */
static volatile CONST(TeOBCR_e_ChrgrModeCmd_OBCM, OBCR_VAR_INIT)
    KeOBCR_e_DschrgOBCMdRq = CeOBCR_e_Idle_OBCMdRq;/* Referenced by: '<S719>/Calib' */
static volatile CONST(TeVTLR_e_DschrgSysSts, OBCR_VAR_INIT)
    KeOBCR_e_DschrgSysSts = CeVTLR_e_DschrgInactv;/* Referenced by: '<S720>/Calib' */
static volatile CONST(TeOBCR_e_EVSE_PilotStat_OBCM, OBCR_VAR_INIT)
    KeOBCR_e_EVSE_PilotStat_Val = CeOBCR_e_NO_EVSE_OBCM;/* Referenced by: '<S721>/Calib' */
static volatile CONST(TeOBCR_e_ProxStat_OBCM, OBCR_VAR_INIT)
    KeOBCR_e_EVSE_ProxStat_Val = CeOBCR_e_ProxLo_OBCM;/* Referenced by: '<S722>/Calib' */
static volatile CONST(TeOBCR_e_HCP_DC_Retry, OBCR_VAR_INIT)
    KeOBCR_e_HCP_DC_RetryOvrdVal = CeOBCR_e_No_Retry_Command;/* Referenced by: '<S865>/Calib' */
static volatile CONST(TeBPCR_e_HVTracBatCntctrConfig, OBCR_VAR_INIT)
    KeOBCR_e_HV_TracBatCntctrConfigovrdVal =
    CeBPCR_e_HVTracBatConfig_Closed_Parallel;/* Referenced by: '<S723>/Calib' */
static volatile CONST(TeOBCR_e_InterMarkets, OBCR_VAR_INIT)
    KeOBCR_e_InterMarketsSelection = CeOBCR_e_NorthAmerica;/* Referenced by:
                                                            * '<S874>/Calib'
                                                            * '<S127>/Calib'
                                                            * '<S602>/Calib'
                                                            * '<S38>/Calib'
                                                            * '<S52>/Calib'
                                                            * '<S242>/Calib'
                                                            */

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(TePMDR_e_PowerMode, OBCR_VAR_INIT)
    KeOBCR_e_PMMPowerMd_VldPlgIn = CePMDR_e_PowerMode_Off;/* Referenced by: '<S522>/Calib' */

#endif

static volatile CONST(TeIDCR_e_Prox_GBT, OBCR_VAR_INIT) KeOBCR_e_Prox_GBT =
    CeIDCR_e_CC_LO;                    /* Referenced by: '<S724>/Calib' */
static volatile CONST(TeIDCR_e_SLACSts, OBCR_VAR_INIT) KeOBCR_e_SLACStsOvrdVal =
    CeIDCR_e_SLACSts_EVSE_NtFnd;       /* Referenced by: '<S725>/Calib' */
static volatile CONST(TePLTR_e_ShipingMode, OBCR_VAR_INIT)
    KeOBCR_e_ShipMdOvrdVal = CePLTR_e_ShipingMode_CUST_MD;/* Referenced by: '<S726>/Calib' */
static volatile CONST(TeIDCR_e_TxGBTMessageRequest, OBCR_VAR_INIT)
    KeOBCR_e_TxGBTMsgRequest = CeIDCR_e_GBTReq_EVSE_Not_Connected;/* Referenced by: '<S727>/Calib' */
static volatile CONST(TeIDCR_e_TxGBTMessageResponse, OBCR_VAR_INIT)
    KeOBCR_e_TxGBTMsgResponse = CeIDCR_e_GBTRes_EVSE_Not_Connected;/* Referenced by: '<S728>/Calib' */

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_k_AddLevelOneFactorMul =
    1.0F;                              /* Referenced by:
                                        * '<S176>/Calib'
                                        * '<S243>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_k_DCChrgPrtPPI = 3.0F;/* Referenced by: '<S480>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_k_DCTempFactor_Default =
    1.0F;                              /* Referenced by: '<S267>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_k_DiffFactorMergeLvl1 =
    0.00025F;                          /* Referenced by: '<S147>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_k_DiffFactorMergeLvl2 =
    0.00025F;                          /* Referenced by: '<S148>/Calib' */

#endif

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_k_EstTmConvFactor = 60.0F;/* Referenced by: '<S866>/Calib' */

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_k_GradDropTargSOC = 0.0F;/* Referenced by: '<S310>/Calib' */

#endif

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_k_LPF_MaxCellVoltCoef =
    0.85F;                             /* Referenced by: '<S729>/Calib' */

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_k_ThrmlBdgtOfstFiltCoef =
    0.1F;                              /* Referenced by: '<S383>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_k_TimeFactorMergeLvl1 =
    8.0E-5F;                           /* Referenced by: '<S149>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_k_TimeFactorMergeLvl2 =
    8.0E-5F;                           /* Referenced by: '<S150>/Calib' */

#endif

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_q_FullAmpHrCap_Val = 0.0F;/* Referenced by: '<S730>/Calib' */

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_q_TestTotalBattCap = 0.0F;/* Referenced by: '<S330>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_t_AddLevelOneFactor1 = 0.0F;/* Referenced by: '<S177>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_t_AddLevelTwoFactor = 0.0F;/* Referenced by: '<S178>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_t_AddLv1Factor_NotConn =
    0.0F;                              /* Referenced by: '<S244>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_t_AddLvl2Factor_NotConn =
    0.0F;                              /* Referenced by: '<S245>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_t_CAN_CUpTime = 5.0F;/* Referenced by: '<S128>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1 || Rte_SysCon_Variant_OBCR_2

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_t_CondChrgCycTmPeriod =
    600.0F;                            /* Referenced by:
                                        * '<S641>/Calib'
                                        * '<S405>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_t_DCChargeTimeFinal100 =
    5.0F;                              /* Referenced by: '<S203>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_t_DCChargeTimeFinal80 =
    5.0F;                              /* Referenced by: '<S204>/Calib' */

#endif

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_t_DCEst100_Val = 0.0F;/* Referenced by: '<S867>/Calib' */
static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_t_DCEst80_Val = 0.0F;/* Referenced by: '<S868>/Calib' */

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_t_Level1TimeEstGradNeg =
    -2.5F;                             /* Referenced by: '<S179>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_t_Level1TimeEstGradPos =
    0.0F;                              /* Referenced by: '<S180>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_t_Level2TimeEstGradNeg =
    -2.5F;                             /* Referenced by: '<S181>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_t_Level2TimeEstGradPos =
    0.0F;                              /* Referenced by: '<S182>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_t_Lvl1ChrgTimeFinal = 5.0F;/* Referenced by: '<S183>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_t_Lvl2ChrgTimeFinal = 5.0F;/* Referenced by: '<S184>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_t_MaxEstTimeDC_100 = 253.0F;/* Referenced by: '<S151>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_t_MaxEstTimeDC_80 = 253.0F;/* Referenced by: '<S152>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_t_MinErrMergeCmptLvl1 =
    5.0F;                              /* Referenced by: '<S153>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_t_MinErrMergeCmptLvl2 =
    2.0F;                              /* Referenced by: '<S154>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_t_NotConnectedMinTime =
    1.0F;                              /* Referenced by: '<S246>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_t_RaceprepSOCChkDelay =
    3.0F;                              /* Referenced by: '<S321>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_t_SmrtEvse_DetDbncTime =
    8.0F;                              /* Referenced by: '<S578>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_t_UnplugDbncTimeRst = 1.25F;/* Referenced by: '<S579>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_t_UnplugFlgDbncTmr = 0.1F;/* Referenced by: '<S439>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_t_V2HMaxTime = 1.0F;
                                    /* Referenced by: '<S15>/Charging_MainSF' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KeOBCR_v_VehicleSpdPPI_Rprted =
    2.0F;                              /* Referenced by: '<S523>/Calib' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KtOBCR_K_SOC2TimeFactor[7] =
{
    1.0F, 1.2F, 1.3F, 1.5F, 1.6F, 1.75F, 2.0F
} ;                                    /* Referenced by: '<S299>/Vector' */

#endif

#if Rte_SysCon_Variant_OBCR_1 || Rte_SysCon_Variant_OBCR_2

static volatile CONST(float32, OBCR_VAR_INIT) KtOBCR_P_ECT_PwrBdgt[9] =
{
    0.0F, 0.0F, 100.0F, 1000.0F, 2000.0F, 5000.0F, 10000.0F, 10000.0F, 10000.0F
} ;                                    /* Referenced by:
                                        * '<S614>/Vector'
                                        * '<S341>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KtOBCR_P_ThrmlBdgt_OfstwMtr[11] =
{
    3700.0F, 3300.0F, 3000.0F, 2700.0F, 2400.0F, 1200.0F, 900.0F, 700.0F, 500.0F,
    300.0F, 0.0F
} ;                                    /* Referenced by: '<S384>/Vector' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KtOBCR_P_ThrmlBdgt_OfstwoMtr[11] =
{
    3700.0F, 3300.0F, 3000.0F, 2700.0F, 2400.0F, 1200.0F, 900.0F, 700.0F, 500.0F,
    300.0F, 0.0F
} ;                                    /* Referenced by: '<S385>/Vector' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KtOBCR_k_BattChrgCrntLimitTime[12]
    =
{
    0.0F, 0.0F, 0.075F, 0.49F, 0.5F, 0.93F, 0.99F, 0.99F, 1.0F, 1.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S302>/Vector' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KtOBCR_k_DCHighSOCFactor[6] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by:
                                        * '<S205>/Vector'
                                        * '<S259>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KtOBCR_k_DCTempFactor_Window[7] =
{
    0.1F, 0.3F, 0.7F, 1.0F, 1.0F, 1.0F, 0.0F
} ;                                    /* Referenced by: '<S268>/Vector' */

#endif

#if Rte_SysCon_Variant_OBCR_1 || Rte_SysCon_Variant_OBCR_2

static volatile CONST(float32, OBCR_VAR_INIT) KtOBCR_k_MaxPower_SOC[6] =
{
    0.0F, 0.0F, 0.4F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by:
                                        * '<S621>/Vector'
                                        * '<S363>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_OBCR_1 || Rte_SysCon_Variant_OBCR_2

static volatile CONST(float32, OBCR_VAR_INIT) KtOBCR_k_MaxPower_Temp[5] =
{
    0.0F, 0.7F, 1.0F, 1.0F, 0.0F
} ;                                    /* Referenced by:
                                        * '<S622>/Vector'
                                        * '<S364>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KtOBCR_k_SOCIndex_Select[7] =
{
    1.0F, 2.0F, 3.0F, 4.0F, 5.0F, 6.0F, 7.0F
} ;                                    /* Referenced by:
                                        * '<S269>/Vector'
                                        * '<S206>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_OBCR_1 || Rte_SysCon_Variant_OBCR_2

static volatile CONST(float32, OBCR_VAR_INIT) KtOBCR_k_ThermalProfile[6] =
{
    1.0F, 1.0F, 0.0F, 0.0F, 1.0F, 1.0F
} ;                                    /* Referenced by:
                                        * '<S646>/Vector'
                                        * '<S411>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_OBCR_1 || Rte_SysCon_Variant_OBCR_2

static volatile CONST(float32, OBCR_VAR_INIT) KtOBCR_r_ThermCondDutyCycle[77] =
{
    0.1F, 0.3F, 0.3F, 0.5F, 0.3F, 0.2F, 0.2F, 0.2F, 0.3F, 0.3F, 0.5F, 0.3F, 0.2F,
    0.2F, 0.2F, 0.3F, 0.3F, 0.5F, 0.3F, 0.2F, 0.2F, 0.3F, 0.3F, 0.3F, 0.5F, 0.3F,
    0.2F, 0.2F, 0.3F, 0.3F, 0.4F, 0.5F, 0.3F, 0.2F, 0.2F, 0.3F, 0.3F, 0.4F, 0.5F,
    0.3F, 0.2F, 0.2F, 0.4F, 0.4F, 0.4F, 0.5F, 0.3F, 0.2F, 0.2F, 0.4F, 0.4F, 0.4F,
    0.5F, 0.3F, 0.2F, 0.2F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.6F, 0.6F,
    0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.67F, 0.67F, 0.67F, 0.67F, 0.67F
} ;                                    /* Referenced by:
                                        * '<S642>/Vector'
                                        * '<S406>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KtOBCR_t_ChrgCurrAvlFacLvl1[6] =
{
    0.5F, 0.6F, 0.7F, 0.8F, 0.9F, 1.0F
} ;                                    /* Referenced by: '<S185>/Vector' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KtOBCR_t_ChrgCurrAvlFacLvl2[20] =
{
    0.3F, 0.35F, 0.4F, 0.45F, 0.5F, 0.52F, 0.55F, 0.57F, 0.6F, 0.62F, 0.66F,
    0.67F, 0.7F, 0.72F, 0.75F, 0.77F, 0.8F, 0.9F, 0.95F, 1.0F
} ;                                    /* Referenced by: '<S186>/Vector' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KxOBCR_K_SOC2TimeFactor[7] =
{
    0.0F, 80.0F, 85.0F, 90.0F, 92.0F, 94.0F, 96.0F
} ;                                    /* Referenced by: '<S299>/Vector' */

#endif

#if Rte_SysCon_Variant_OBCR_1 || Rte_SysCon_Variant_OBCR_2

static volatile CONST(float32, OBCR_VAR_INIT) KxOBCR_P_ECT_PwrBdgt[9] =
{
    -40.0F, -30.0F, -20.0F, -10.0F, -1.0F, 10.0F, 20.0F, 30.0F, 40.0F
} ;                                    /* Referenced by:
                                        * '<S614>/Vector'
                                        * '<S341>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KxOBCR_P_ThrmlBdgt_OfstwMtr[11] =
{
    -2500.0F, -2000.0F, -1000.0F, -700.0F, -500.0F, 0.0F, 500.0F, 700.0F,
    1000.0F, 2000.0F, 2100.0F
} ;                                    /* Referenced by: '<S384>/Vector' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KxOBCR_P_ThrmlBdgt_OfstwoMtr[11] =
{
    8.0F, 8.5F, 9.0F, 9.5F, 10.0F, 10.5F, 11.0F, 11.5F, 12.0F, 12.5F, 13.0F
} ;                                    /* Referenced by: '<S385>/Vector' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KxOBCR_k_BattChrgCrntLimitTime[12]
    =
{
    -40.0F, -30.0F, -25.0F, -10.5F, -10.0F, 0.0F, 5.0F, 10.0F, 10.5F, 40.0F,
    50.0F, 60.0F
} ;                                    /* Referenced by: '<S302>/Vector' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KxOBCR_k_DCHighSOCFactor[6] =
{
    0.0F, 50.0F, 60.0F, 80.0F, 85.0F, 90.0F
} ;                                    /* Referenced by:
                                        * '<S205>/Vector'
                                        * '<S259>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KxOBCR_k_DCTempFactor_Window[7] =
{
    -25.0F, -10.0F, 0.0F, 10.0F, 25.0F, 40.0F, 50.0F
} ;                                    /* Referenced by: '<S268>/Vector' */

#endif

#if Rte_SysCon_Variant_OBCR_1 || Rte_SysCon_Variant_OBCR_2

static volatile CONST(float32, OBCR_VAR_INIT) KxOBCR_k_MaxPower_SOC[6] =
{
    23.0F, 24.0F, 26.0F, 28.0F, 90.0F, 95.0F
} ;                                    /* Referenced by:
                                        * '<S621>/Vector'
                                        * '<S363>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_OBCR_1 || Rte_SysCon_Variant_OBCR_2

static volatile CONST(float32, OBCR_VAR_INIT) KxOBCR_k_MaxPower_Temp[5] =
{
    -50.0F, -30.0F, 0.0F, 15.0F, 50.0F
} ;                                    /* Referenced by:
                                        * '<S622>/Vector'
                                        * '<S364>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KxOBCR_k_SOCIndex_Select[7] =
{
    10.0F, 31.0F, 41.0F, 56.0F, 71.0F, 76.0F, 81.0F
} ;                                    /* Referenced by:
                                        * '<S269>/Vector'
                                        * '<S206>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_OBCR_1 || Rte_SysCon_Variant_OBCR_2

static volatile CONST(float32, OBCR_VAR_INIT) KxOBCR_k_ThermalProfile[6] =
{
    -30.0F, -5.0F, 0.0F, 10.0F, 15.0F, 50.0F
} ;                                    /* Referenced by:
                                        * '<S646>/Vector'
                                        * '<S411>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_OBCR_1 || Rte_SysCon_Variant_OBCR_2

static volatile CONST(float32, OBCR_VAR_INIT) KxOBCR_r_ThermCondDutyCycle[7] =
{
    23.0F, 24.0F, 26.0F, 50.0F, 75.0F, 85.0F, 90.0F
} ;                                    /* Referenced by:
                                        * '<S642>/Vector'
                                        * '<S406>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KxOBCR_t_ChrgCurrAvlFacLvl1[6] =
{
    0.0F, 0.5F, 1.0F, 2.0F, 3.0F, 4.0F
} ;                                    /* Referenced by: '<S185>/Vector' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static volatile CONST(float32, OBCR_VAR_INIT) KxOBCR_t_ChrgCurrAvlFacLvl2[20] =
{
    0.0F, 0.5F, 1.0F, 2.0F, 3.0F, 4.0F, 5.0F, 6.0F, 7.0F, 8.0F, 9.0F, 10.0F,
    11.0F, 12.0F, 13.0F, 14.0F, 15.0F, 16.0F, 17.0F, 18.0F
} ;                                    /* Referenced by: '<S186>/Vector' */

#endif

#if Rte_SysCon_Variant_OBCR_1 || Rte_SysCon_Variant_OBCR_2

static volatile CONST(float32, OBCR_VAR_INIT) KyOBCR_r_ThermCondDutyCycle[11] =
{
    41.0F, 41.5F, 42.0F, 43.0F, 44.0F, 45.0F, 46.0F, 47.0F, 48.0F, 49.0F, 50.0F
} ;                                    /* Referenced by:
                                        * '<S642>/Vector'
                                        * '<S406>/Vector'
                                        */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_OBCR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_OBCR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(boolean, OBCR_VAR_INIT) EeOBCR_b_PluggedIn;/* '<Root>/DSM_2' */
static VAR(sint16, OBCR_VAR_INIT) EeOBCR_e_ChargingLevel;/* '<Root>/DSM_6' */
static VAR(sint16, OBCR_VAR_INIT) EeOBCR_e_ChargingSystemSts;/* '<Root>/DSM_5' */
static VAR(float32, OBCR_VAR_INIT) EeOBCR_t_EstTimeofChrg_Lv1;/* '<Root>/DSM_3' */
static VAR(float32, OBCR_VAR_INIT) EeOBCR_t_EstTimeofChrg_Lv2;/* '<Root>/DSM_4' */

#if Rte_SysCon_Variant_OBCR_1

static VAR(float32, OBCR_VAR_INIT) VaOBCR_I_DCDefaulCrrnt[7];/* '<S165>/MinMax4' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(float32, OBCR_VAR_INIT) VaOBCR_I_WindowCurrent[7];/* '<S165>/IndexAssignment1' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(float32, OBCR_VAR_INIT) VaOBCR_K_WindowScalingFactor[7];/* '<S207>/Switch' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(float32, OBCR_VAR_INIT) VaOBCR_K_WndwSclFctr_NC[7];/* '<S260>/Switch' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(float32, OBCR_VAR_INIT) VaOBCR_Pct_SOCWndwWidth[7];/* '<S210>/Switch1' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(float32, OBCR_VAR_INIT) VaOBCR_Pct_SOCWndwWidthNC[7];/* '<S263>/Switch1' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(float32, OBCR_VAR_INIT) VaOBCR_q_WindowBattCapNC[7];/* '<S224>/Product1' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(float32, OBCR_VAR_INIT) VaOBCR_q_WindowBatteryCapacity[7];/* '<S165>/Product4' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(float32, OBCR_VAR_INIT) VaOBCR_t_WindowChargeTimes[7];/* '<S165>/Product2' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(float32, OBCR_VAR_INIT) VaOBCR_t_WndwChrgTimeNC[7];/* '<S224>/Product14' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(sint16, OBCR_VAR_INIT) VeOBCR_Cnt_ChrgPauseCount;/* '<S15>/Charging_MainSF' */

#endif

static VAR(float32, OBCR_VAR_INIT) VeOBCR_I_AccCurr;/* '<S6>/Switch5' */
static VAR(float32, OBCR_VAR_INIT) VeOBCR_I_EVSECurr_RegTol;/* '<S6>/Switch29' */
static VAR(float32, OBCR_VAR_INIT) VeOBCR_I_EVSEOutputCurr;/* '<S6>/Switch23' */
static VAR(float32, OBCR_VAR_INIT) VeOBCR_I_EVSEPeakCurrRip;/* '<S6>/Switch30' */

#if Rte_SysCon_Variant_OBCR_1

static VAR(float32, OBCR_VAR_INIT) VeOBCR_I_Lv2NotConn_test1;/* '<S223>/Switch1' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(float32, OBCR_VAR_INIT) VeOBCR_I_ThermalTestB;/* '<S387>/MinMax' */

#endif

#if Rte_SysCon_Variant_OBCR_2

static VAR(float32, OBCR_VAR_INIT) VeOBCR_I_ThermalTestB_HEV;/* '<S624>/MinMax' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(float32, OBCR_VAR_INIT) VeOBCR_P_APower_SOCOfst_Delta;/* '<S373>/Sum' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(float32, OBCR_VAR_INIT) VeOBCR_P_EstPwrBdgt;/* '<S333>/Sum' */

#endif

#if Rte_SysCon_Variant_OBCR_2

static VAR(float32, OBCR_VAR_INIT) VeOBCR_P_EstPwrBdgt_HEV;/* '<S605>/Sum' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(float32, OBCR_VAR_INIT) VeOBCR_P_OffsetTmp;/* '<S384>/Vector' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(float32, OBCR_VAR_INIT) VeOBCR_P_PwrBudgetPWMTest4;/* '<S395>/Switch1' */

#endif

#if Rte_SysCon_Variant_OBCR_2

static VAR(float32, OBCR_VAR_INIT) VeOBCR_P_PwrBudgetPWMTest4_HEV;/* '<S631>/Switch1' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(float32, OBCR_VAR_INIT) VeOBCR_P_SOC_Offset;/* '<S385>/Vector' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(float32, OBCR_VAR_INIT) VeOBCR_P_ThermHys_Out;/* '<S421>/Sum3' */

#endif

#if Rte_SysCon_Variant_OBCR_2

static VAR(float32, OBCR_VAR_INIT) VeOBCR_P_ThermHys_Out_HEV;/* '<S656>/Sum3' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(float32, OBCR_VAR_INIT) VeOBCR_P_ThermalTest2;/* '<S389>/Product2' */

#endif

#if Rte_SysCon_Variant_OBCR_2

static VAR(float32, OBCR_VAR_INIT) VeOBCR_P_ThermalTest2_HEV;/* '<S626>/Product2' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(float32, OBCR_VAR_INIT) VeOBCR_P_ThermalTest4;/* '<S408>/Sum3' */

#endif

#if Rte_SysCon_Variant_OBCR_2

static VAR(float32, OBCR_VAR_INIT) VeOBCR_P_ThermalTest4_HEV;/* '<S643>/Sum3' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(float32, OBCR_VAR_INIT) VeOBCR_P_ThermalTest5;/* '<S334>/Switch1' */

#endif

#if Rte_SysCon_Variant_OBCR_2

static VAR(float32, OBCR_VAR_INIT) VeOBCR_P_ThermalTest5_HEV;/* '<S606>/Switch1' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(float32, OBCR_VAR_INIT) VeOBCR_P_ThrmlBdgt_LoSOC;/* '<S342>/Merge' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(float32, OBCR_VAR_INIT) VeOBCR_P_ThrmlBdgt_b4Max;/* '<S373>/Add2' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(float32, OBCR_VAR_INIT) VeOBCR_P_ThrrmlBdgtOfstFilt;/* '<S380>/Switch1' */

#endif

static VAR(float32, OBCR_VAR_INIT) VeOBCR_U_HV_BatVoltModMaxArbFil;/* '<S663>/Switch1' */

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_ChargLvl1;/* '<S465>/Switch' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_ChargLvl2;/* '<S465>/Switch15' */

#endif

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_ChargeReq;/* '<S6>/Switch1' */

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_ChargingComplete_SF;/* '<S8>/Merge_7' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_ChargingLevelTestSig1;/* '<S493>/AND' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_ChargingLevelTestSig10;/* '<S491>/AND' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_ChargingLevelTestSig11;/* '<S492>/AND' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_ChargingLevelTestSig12;/* '<S465>/Comparison1' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_ChargingLevelTestSig2;/* '<S465>/Logical8' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_ChargingLevelTestSig3;/* '<S465>/Logical1' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_ChargingLevelTestSig6;/* '<S462>/Comparison5' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_ChargingLevelTestSig7;/* '<S462>/Logical2' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_ChargingLevelTestSig8;/* '<S462>/Comparison7' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_ChargingLevelTestSig9;/* '<S462>/Comparison9' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_ChrgStat_Ready;/* '<S23>/Logical22' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_ChrgTimeEstDebug8;/* '<S168>/Switch1' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_ChrgTypeDCSelect;/* '<S22>/Switch1' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_ChrgTypeSelDCDIN;/* '<S22>/Switch' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_ChrgTypeSelDCGBT;/* '<S40>/OR1' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_CloseS2CntctrI;/* '<S8>/Merge_2' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_DCCntctrOpnPdg;/* '<S25>/Logical' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_DCEstTemp1;/* '<S133>/Comparison4' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_DCEstTemp2;/* '<S133>/Comparison1' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_DCEstTemp3;/* '<S133>/Comparison2' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_DCEstTemp4;/* '<S133>/Comparison3' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_DCEstTemp5;/* '<S133>/Comparison5' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_DCEstTemp6;/* '<S133>/Comparison6' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_DCEstTemp7;/* '<S133>/Comparison7' */

#endif

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_DschrgS2Cmd;/* '<S6>/Switch57' */

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_GBTFlag;/* '<S467>/Gain' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_GBTValidPlugIn;/* '<S470>/Logical2' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_GoodConn_Test1;/* '<S466>/Logical Operator' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_GoodConn_Test2;/* '<S507>/AND' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_GoodConn_Test3;/* '<S466>/Switch1' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_HLC_DIN_DC;/* '<S39>/OR1' */

#endif

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_HVBatCntctrReq;/* '<S6>/Switch88' */
static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_HVBatPerWUThermal;/* '<S6>/Logical1' */
static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_HVBat_DC_CntctrOpn;/* '<S6>/Switch51' */
static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_HVBat_DC_CntctrReq;/* '<S6>/Switch52' */
static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_HV_AuxLoadOffReq;/* '<S6>/Switch107' */
static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_HV_BatCntctrOpnRq;/* '<S6>/Switch55' */
static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_HoodAjar;/* '<S6>/Switch9' */

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_HoodAjarCond;/* '<S23>/Logical8' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_HoodAjarCond1;/* '<S23>/Logical5' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_HoodAjarCond2;/* '<S23>/Logical9' */

#endif

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_IDCM_DCCA;/* '<S6>/Switch37' */
static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_InFieldMode;/* '<S6>/Switch12' */

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_KeepC_Up_China;/* '<S105>/Logical5' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_MainCntctrOpnPdg;/* '<S25>/Logical2' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_NoCP_PlugDet;/* '<S561>/AND' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_NoChrgInitNO1;/* '<S25>/Logical14' */

#endif

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_OBCM_ChrgEnblSts_In;/* '<S6>/Switch3' */

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_PPI2_LOC;/* '<S459>/Logical Operator' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_PlantMd_StpChrg;/* '<S25>/Logical6' */

#endif

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_PropSysActv;/* '<S6>/Switch4' */

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_ProxOut_PlugDet;/* '<S560>/AND' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_PwrBudgetPWMTest2;/* '<S402>/Comparison6' */

#endif

#if Rte_SysCon_Variant_OBCR_2

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_PwrBudgetPWMTest2_HEV;/* '<S638>/Comparison6' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(float32, OBCR_VAR_INIT) VeOBCR_b_PwrBudgetPWMTest3;/* '<S392>/Switch' */

#endif

#if Rte_SysCon_Variant_OBCR_2

static VAR(float32, OBCR_VAR_INIT) VeOBCR_b_PwrBudgetPWMTest3_HEV;/* '<S628>/Switch' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_RacePrepBattLvlSts_Test;/* '<S108>/Merge1' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_S2_Cmd_Test1;/* '<S96>/Switch' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_ShipMd_StpChrg;/* '<S25>/Logical8' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_Ship_Plant_StpChrg;/* '<S25>/Logical9' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_SmartEvse_Dtctd1;/* '<S582>/OR1' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_SmartEvse_Dtctd3;/* '<S585>/AND' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_SmartEvse_Dtctd4;/* '<S586>/AND' */

#endif

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_THMRHoodCond;/* '<S6>/Switch2' */
static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_THMR_RdyForShtDwn;/* '<S6>/Switch8' */

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_Thermal_A1;/* '<S344>/Logical' */

#endif

#if Rte_SysCon_Variant_OBCR_2

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_Thermal_A1_HEV;/* '<S616>/Logical' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_Thermal_A2;/* '<S344>/Logical5' */

#endif

#if Rte_SysCon_Variant_OBCR_2

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_Thermal_A2_HEV;/* '<S616>/Logical5' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_V2GnotEnable;/* '<S25>/Logical16' */

#endif

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_V2L_Detected;/* '<S6>/Switch50' */

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_battReady;/* '<S23>/Switch1' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_battReady_nobypass;/* '<S23>/Logical3' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_b_cntBypass;/* '<S23>/Logical7' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(float32, OBCR_VAR_INIT) VeOBCR_cmp_AvalBatCap1;/* '<S131>/Product4' */

#endif

static VAR(TeOBCR_e_ChargingStat_BPCM, OBCR_VAR_INIT) VeOBCR_e_BPCM_ChrgStat_In;/* '<S6>/Switch15' */

#if Rte_SysCon_Variant_OBCR_1

static VAR(sint16, OBCR_VAR_INIT) VeOBCR_e_BPCM_Reason;/* '<S47>/Switch1' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(TeOBCR_e_ChargingSystemSts, OBCR_VAR_INIT)
    VeOBCR_e_ChargingSysStsTest1;      /* '<S445>/Switch' */

#endif

static VAR(TeOBCR_e_ChrgrModeCmd_OBCM, OBCR_VAR_INIT) VeOBCR_e_DschrgOBCMdRq;/* '<S6>/Switch56' */
static VAR(TeVTLR_e_DschrgSysSts, OBCR_VAR_INIT) VeOBCR_e_DschrgSysSts;/* '<S6>/Switch87' */
static VAR(TeOBCR_e_EVSE_PilotStat_OBCM, OBCR_VAR_INIT)
    VeOBCR_e_EVSE_PilotStat_In;        /* '<S6>/Switch58' */
static VAR(TeOBCR_e_ProxStat_OBCM, OBCR_VAR_INIT) VeOBCR_e_EVSE_ProxStat_In;/* '<S6>/Switch59' */
static VAR(TeBPCR_e_HVTracBatCntctrConfig, OBCR_VAR_INIT)
    VeOBCR_e_HV_TracBatCntctrConfig;   /* '<S6>/Switch106' */

#if Rte_SysCon_Variant_OBCR_1

static VAR(sint16, OBCR_VAR_INIT) VeOBCR_e_InitChecks_Reason;/* '<S71>/Switch1' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(TeOBCR_e_ChrgrModeCmd_OBCM, OBCR_VAR_INIT) VeOBCR_e_MdRq_Test;/* '<S8>/Merge_24' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(sint16, OBCR_VAR_INIT) VeOBCR_e_NCR;/* '<S8>/Merge_5' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(sint16, OBCR_VAR_INIT) VeOBCR_e_PlugIn_Reason;/* '<S557>/Switch1' */

#endif

static VAR(TeIDCR_e_Prox_GBT, OBCR_VAR_INIT) VeOBCR_e_Prox_GBT;/* '<S6>/Switch33' */
static VAR(TeIDCR_e_SLACSts, OBCR_VAR_INIT) VeOBCR_e_SLACSts;/* '<S6>/Switch46' */
static VAR(TePLTR_e_ShipingMode, OBCR_VAR_INIT) VeOBCR_e_ShipMd;/* '<S6>/Switch89' */
static VAR(TeIDCR_e_TxGBTMessageRequest, OBCR_VAR_INIT) VeOBCR_e_TxGBTMsgRequest;/* '<S6>/Switch35' */
static VAR(TeIDCR_e_TxGBTMessageResponse, OBCR_VAR_INIT)
    VeOBCR_e_TxGBTMsgResponse;         /* '<S6>/Switch34' */

#if Rte_SysCon_Variant_OBCR_1

static VAR(float32, OBCR_VAR_INIT) VeOBCR_k_BatCapCalDbg1;/* '<S286>/Switch1' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(float32, OBCR_VAR_INIT) VeOBCR_k_ChrgTimeEstDebug09;/* '<S166>/Sum3' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(float32, OBCR_VAR_INIT) VeOBCR_k_ChrgTimeEstDebug3;/* '<S223>/Product10' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(float32, OBCR_VAR_INIT) VeOBCR_k_ChrgTimeEstDebug4;/* '<S223>/Product11' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(float32, OBCR_VAR_INIT) VeOBCR_k_ChrgTimeEstDebug5;/* '<S164>/Product10' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(float32, OBCR_VAR_INIT) VeOBCR_k_ChrgTimeEstDebug6;/* '<S164>/Product11' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(float32, OBCR_VAR_INIT) VeOBCR_k_ChrgTimeEstDebug7;/* '<S136>/Product13' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(float32, OBCR_VAR_INIT) VeOBCR_k_ChrgTimeEstDebug8;/* '<S167>/Sum3' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(float32, OBCR_VAR_INIT) VeOBCR_k_DCEstTempFactor1;/* '<S133>/Switch1' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(float32, OBCR_VAR_INIT) VeOBCR_k_DCEstTempFactor2;/* '<S133>/Switch3' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(float32, OBCR_VAR_INIT) VeOBCR_k_DCEstTempFactor3;/* '<S133>/Switch10' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(float32, OBCR_VAR_INIT) VeOBCR_k_DCEstTempFactor4;/* '<S133>/Switch11' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(float32, OBCR_VAR_INIT) VeOBCR_k_DCEstTempFactor5;/* '<S133>/Switch12' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(float32, OBCR_VAR_INIT) VeOBCR_k_DCEstTempFactor6;/* '<S133>/Switch13' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(float32, OBCR_VAR_INIT) VeOBCR_k_DCEstTempFactor7;/* '<S133>/Switch14' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(float32, OBCR_VAR_INIT) VeOBCR_k_TempSOCFactor;/* '<S333>/Product6' */

#endif

#if Rte_SysCon_Variant_OBCR_2

static VAR(float32, OBCR_VAR_INIT) VeOBCR_k_TempSOCFactor_HEV;/* '<S605>/Product6' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(float32, OBCR_VAR_INIT) VeOBCR_k_ThermalTest1;/* '<S389>/Rounding1' */

#endif

#if Rte_SysCon_Variant_OBCR_2

static VAR(float32, OBCR_VAR_INIT) VeOBCR_k_ThermalTest1_HEV;/* '<S626>/Rounding1' */

#endif

static VAR(float32, OBCR_VAR_INIT) VeOBCR_q_BatteryCapacity;/* '<S6>/Switch14' */

#if Rte_SysCon_Variant_OBCR_1

static VAR(float32, OBCR_VAR_INIT) VeOBCR_t_ChargeTimer;/* '<S15>/Charging_MainSF' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(float32, OBCR_VAR_INIT) VeOBCR_t_DCEstTime100_debug;/* '<S165>/Sum6' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(float32, OBCR_VAR_INIT) VeOBCR_t_DCEstTime100_debug_NConn;/* '<S224>/Sum3' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(float32, OBCR_VAR_INIT) VeOBCR_t_DCEstTime80_debug;/* '<S165>/Sum9' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(float32, OBCR_VAR_INIT) VeOBCR_t_DCEstTime80_debug_NConn;/* '<S224>/Sum2' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(float32, OBCR_VAR_INIT) VeOBCR_t_EstTimeDC80_Debug1;/* '<S132>/Merge4' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(boolean, OBCR_VAR_INIT) VeOBCR_t_EstTimeDC80_Debug2;/* '<S132>/Comparison6' */

#endif

#if Rte_SysCon_Variant_OBCR_1

static VAR(float32, OBCR_VAR_INIT) VeOBCR_t_StateTimer;/* '<S15>/Charging_MainSF' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_OBCR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_OBCR
#include "MemMap.h"

CONST(ConstB_OBCR_ac_T, OBCR_VAR_INIT) OBCR_ac_ConstB =
{
    1,                                 /* '<S870>/Const104' */
    0,                                 /* '<S870>/Const105' */
    0,                                 /* '<S870>/Const106' */
    0,                                 /* '<S870>/Const107' */
    0,                                 /* '<S870>/Const108' */
    0,                                 /* '<S870>/Const109' */
    0,                                 /* '<S870>/Const110' */
    0,                                 /* '<S870>/Const111' */
    0,                                 /* '<S870>/Const112' */
    0,                                 /* '<S870>/Const113' */
    0,                                 /* '<S870>/Const114' */
    0,                                 /* '<S870>/Const115' */
    0,                                 /* '<S870>/Const116' */
    0,                                 /* '<S870>/Const117' */
    0,                                 /* '<S870>/Const118' */
    0,                                 /* '<S870>/Const138' */
    0,                                 /* '<S870>/Const139' */
    0,                                 /* '<S870>/Const140' */
    0,                                 /* '<S870>/Const141' */
    0,                                 /* '<S870>/Const142' */
    0,                                 /* '<S870>/Const143' */
    0,                                 /* '<S870>/Const144' */

#if Rte_SysCon_Variant_OBCR_1

    0,                                 /* '<S25>/Switch2' */

#endif

    1,                                 /* '<S870>/Const121' */
    1,                                 /* '<S870>/Const122' */
    1,                                 /* '<S870>/Const123' */
    1,                                 /* '<S870>/Const124' */
    1,                                 /* '<S870>/Const125' */
    1,                                 /* '<S870>/Const126' */
    1,                                 /* '<S870>/Const127' */
    1,                                 /* '<S870>/Const128' */
    1,                                 /* '<S870>/Const129' */
    1,                                 /* '<S870>/Const130' */
    1,                                 /* '<S870>/Const131' */
    1,                                 /* '<S870>/Const132' */
    1,                                 /* '<S870>/Const133' */
    1,                                 /* '<S870>/Const134' */
    1,                                 /* '<S870>/Const135' */
    CeSRAR_e_NoFlt,                    /* '<S870>/Const13' */
    CeSRAR_e_NoFlt,                    /* '<S757>/Constant' */
    CeOBCR_e_SOC_NotReached,           /* '<S870>/Const80' */
    CeOBCR_e_PwrLimReq_SNA,            /* '<S870>/Const94' */
    CeOBCR_e_No_Protocol,              /* '<S870>/Const156' */
    CeOBCR_e_No_Protocol,              /* '<S870>/Const157' */
    CeOBCR_e_No_Protocol,              /* '<S870>/Const158' */
    CeOBCR_e_MaxCellVolt_NotReached,   /* '<S870>/Const83' */
    CeOBCR_e_NoPaymentSel,             /* '<S870>/Const52' */
    CeOBCR_e_DIN,                      /* '<S870>/Const96' */
    CeOBCR_e_NoRequest,                /* '<S870>/Const11' */
    CeOBCR_e_No_Retry_Command,         /* '<S870>/Const54' */
    CeOBCR_e_DC_ChrgType_Null,         /* '<S870>/Const99' */
    CeOBCR_e_DCCntctr_Open,            /* '<S870>/Const45' */
    CeOBCR_e_DCChrg_TestSts_NotInit,   /* '<S870>/Const56' */
    CeOBCR_e_Current,                  /* '<S870>/Const2' */
    CeOBCR_e_Current,                  /* '<S756>/Constant' */
    CeOBCR_e_Idle_OBCMdRq,             /* '<S870>/Const1' */
    CeOBCR_e_NoChrgrInterrupt,         /* '<S870>/Const91' */
    CeOBCR_e_PowerUp,                  /* '<S870>/Const67' */
    CeOBCR_e_PortNoRequest,            /* '<S870>/Const23' */
    CeOBCR_e_ChrgCurrStat_Normal,      /* '<S870>/Const71' */
    CeOBCR_e_ChrgMthd_Init,            /* '<S870>/Const90' */
    CeOBCR_e_PortLockSts_Default,      /* '<S870>/Const100' */
    CeOBCR_e_AC,                       /* '<S870>/Const55' */

#if Rte_SysCon_Variant_OBCR_1

    CeOBCR_e_AC,                       /* '<S35>/Switch3' */

#endif

    CeOBCR_e_No_Request,               /* '<S870>/Const98' */
    CeOBCR_e_CellVoltStat_Normal,      /* '<S870>/Const70' */
    CeOBCR_e_BattTempStat_Normal,      /* '<S870>/Const72' */
    CeOBCR_e_BattSOCStat_Normal,       /* '<S870>/Const73' */
    CeOBCR_e_BattPckVolt_NotReached    /* '<S870>/Const79' */
};

#define STOP_SEC_CONST_UNSPECIFIED_OBCR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_OBCR
#include "MemMap.h"

CONST(ConstP_OBCR_ac_T, OBCR_VAR_INIT) OBCR_ac_ConstP =
{

#if Rte_SysCon_Variant_OBCR_1 || Rte_SysCon_Variant_OBCR_2

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S642>/Vector'
     *   '<S406>/Vector'
     */
    {
        6U, 10U
    },

#endif

#ifndef CONSTP_OBCR_AC_T_VARIANT_EXISTS

    0
#endif
};

#define STOP_SEC_CONST_UNSPECIFIED_OBCR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_OBCR
#include "MemMap.h"

VAR(B_OBCR_ac_T, OBCR_VAR_INIT) OBCR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_OBCR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_OBCR
#include "MemMap.h"

VAR(DW_OBCR_ac_T, OBCR_VAR_INIT) OBCR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_OBCR
#include "MemMap.h"
#if Rte_SysCon_Variant_OBCR_1

static FUNC(void, OBCR_CODE_LOCAL) OBCR_ac_Subsystem(VAR(float32, AUTOMATIC)
    rtu_In1, P2VAR(float32, AUTOMATIC, OBCR_VAR_INIT) rty_Out1);

#endif

#if Rte_SysCon_Variant_OBCR_1 || Rte_SysCon_Variant_OBCR_2

static FUNC(void, OBCR_CODE_LOCAL) OBCR_ac_StateflowChart(VAR(float32, AUTOMATIC)
    rtu_P_In, P2VAR(B_StateflowChart_OBCR_ac_T, AUTOMATIC, OBCR_VAR_INIT) localB,
    P2VAR(DW_StateflowChart_OBCR_ac_T, AUTOMATIC, OBCR_VAR_INIT) localDW);

#endif

#if Rte_SysCon_Variant_OBCR_1

static FUNC(void, OBCR_CODE_LOCAL) OBCR_ac_SF(void);

#endif

#if Rte_SysCon_Variant_OBCR_1

static FUNC(void, OBCR_CODE_LOCAL) OBCR_ac_SF1(void);

#endif

/* Forward declaration for local functions */
static uint8 safe_cast_to_TeOBCR_e_ChrgrMode(uint8 input);

#if Rte_SysCon_Variant_OBCR_1

static void enter_internal_ChargeTypeState(void);

#endif

#if Rte_SysCon_Variant_OBCR_1

static void OBCR_ac_ChargeTypeState(const boolean *AND_m);

#endif

#if Rte_SysCon_Variant_OBCR_1

static boolean OBCR_ac_DIN_Charging(void);

#endif

#if Rte_SysCon_Variant_OBCR_1

static boolean OBCR_ac_GBT_Charging(void);

#endif

/* Forward declaration for local functions */
#if Rte_SysCon_Variant_OBCR_1

static boolean OBCR_ac_FullUnplug(void);

#endif

#if Rte_SysCon_Variant_OBCR_1

static boolean OBCR_ac_GoodConnEst(const boolean *Logical8_d);

#endif

#if Rte_SysCon_Variant_OBCR_1

static boolean OBCR_ac_PPI_Force2Park(boolean B3, const boolean *Logical8_d);

#endif

#if Rte_SysCon_Variant_OBCR_1

static boolean OBCR_ac_PPI_AllowDrive(boolean B3, boolean B0, const boolean
    *Logical8_d);

#endif

#if Rte_SysCon_Variant_OBCR_1

static void OBCR_ac_IrregularActivity(const boolean *Logical8_d);

#endif

#if Rte_SysCon_Variant_OBCR_1

static float32 OBCR_ac_Interrupted(const TeOBCR_e_ChrgSysStat *IntegerDelay1,
    const TeOBCR_e_ChargingLevel *Switch_c);

#endif

#if Rte_SysCon_Variant_OBCR_1

static boolean OBCR_ac_Complete(const TeOBCR_e_ChrgSysStat *IntegerDelay1);

#endif

#if Rte_SysCon_Variant_OBCR_1

static boolean OBCR_ac_Charging(const TeOBCR_e_ChrgSysStat *IntegerDelay1);

#endif

static uint8 safe_cast_to_TeOBCR_e_ChrgrMode(uint8 input)
{
    uint8 y;

    /* Initialize output value to default value for TeOBCR_e_ChrgrModeCmd_OBCM (CeOBCR_e_Idle_OBCMdRq) */
    y = 0U;
    if (((sint32)input) <= 7)
    {
        /* Set output value to input value if it is a member of TeOBCR_e_ChrgrModeCmd_OBCM */
        y = input;
    }

    return y;
}

/* Function for Chart: '<S15>/Charging_MainSF' */
#if Rte_SysCon_Variant_OBCR_1

static void enter_internal_ChargeTypeState(void)
{
    /* Entry Internal 'ChargeTypeState': '<S99>:5' */
    /* Transition: '<S99>:9' */
    VeOBCR_t_StateTimer = 0.0F;

    /* Switch: '<S35>/Switch1' */
    switch (OBCR_ac_B.Switch1_a)
    {
      case CeOBCR_e_AC:
        /* Transition: '<S99>:99' */
        OBCR_ac_DW.is_ChargeTypeState = OBCR_ac_IN_AC;

        /* Entry Internal 'AC': '<S99>:56' */
        /* Transition: '<S99>:63' */
        OBCR_ac_DW.is_AC = OBCR_ac_IN_OBCM_Idle;

        /* Entry 'OBCM_Idle': '<S99>:71' */
        OBCR_ac_B.ChrgSysStat = CeOBCR_e_OBCM_Idle;
        OBCR_ac_B.OBCM_MdRq = (TeOBCR_e_ChrgrModeCmd_OBCM)
            safe_cast_to_TeOBCR_e_ChrgrMode(CeOBCR_e_Idle_OBCM);
        break;

      case CeOBCR_e_DC:
        /* Transition: '<S99>:11' */
        /* Transition: '<S99>:101' */
        OBCR_ac_DW.is_ChargeTypeState = OBCR_ac_IN_DC;

        /* Entry 'DC': '<S99>:93' */
        OBCR_ac_B.ChrgSysStat = CeOBCR_e_DCChrg_Wait;
        break;

      case CeOBCR_e_WPT:
        /* Transition: '<S99>:13' */
        /* Transition: '<S99>:100' */
        OBCR_ac_DW.is_ChargeTypeState = OBCR_ac_IN_Wireless;
        break;

      default:
        /* no actions */
        break;
    }

    /* End of Switch: '<S35>/Switch1' */
}

#endif

/* Function for Chart: '<S15>/Charging_MainSF' */
#if Rte_SysCon_Variant_OBCR_1

static void OBCR_ac_ChargeTypeState(const boolean *AND_m)
{
    TeOBCR_e_ChrgrModeStat_OBCM tmpRead;
    TeOBCR_e_DCChrgStat tmpRead_0;
    TeOBCR_e_DCGBTChrgSysStat tmpRead_1;
    boolean guard1 = false;
    boolean tmpRead_2;
    boolean tmpRead_3;

    /* During 'ChargeTypeState': '<S99>:5' */
    if (!OBCR_ac_B.VeOBCR_b_EnableCharge)
    {
        /* Transition: '<S99>:123' */
        OBCR_ac_B.NCR = 20;

        /* Switch: '<S35>/Switch1' */
        /* Transition: '<S99>:131' */
        /* Transition: '<S99>:132' */
        /* Transition: '<S99>:133' */
        /* Transition: '<S99>:237' */
        /* Transition: '<S99>:253' */
        if (((uint32)OBCR_ac_B.Switch1_a) == CeOBCR_e_AC)
        {
            /* Transition: '<S99>:286' */
            OBCR_ac_B.S2_Cmd = false;
        }
        else
        {
            /* Transition: '<S99>:289' */
        }

        /* Exit Internal 'ChargeTypeState': '<S99>:5' */
        if (((uint32)OBCR_ac_DW.is_ChargeTypeState) == OBCR_ac_IN_AC)
        {
            /* Exit Internal 'AC': '<S99>:56' */
            switch (OBCR_ac_DW.is_AC)
            {
              case OBCR_ac_IN_CloseS2:
                /* Exit 'CloseS2': '<S99>:72' */
                OBCR_ac_DW.is_AC = OBCR_ac_IN_NO_ACTIVE_CHILD;
                break;

              case OBCR_ac_IN_OBCM_Charge:
                /* Exit 'OBCM_Charge': '<S99>:73' */
                OBCR_ac_DW.is_AC = OBCR_ac_IN_NO_ACTIVE_CHILD;
                break;

              case OBCR_ac_IN_OBCM_EnblCharge:
                /* Exit 'OBCM_EnblCharge': '<S99>:201' */
                OBCR_ac_DW.is_AC = OBCR_ac_IN_NO_ACTIVE_CHILD;
                break;

              case OBCR_ac_IN_OBCM_Idle:
                /* Exit 'OBCM_Idle': '<S99>:71' */
                OBCR_ac_DW.is_AC = OBCR_ac_IN_NO_ACTIVE_CHILD;
                break;

              default:
                OBCR_ac_DW.is_AC = OBCR_ac_IN_NO_ACTIVE_CHILD;
                break;
            }

            OBCR_ac_DW.is_ChargeTypeState = OBCR_ac_IN_NO_ACTIVE_CHILD;
        }
        else
        {
            OBCR_ac_DW.is_ChargeTypeState = OBCR_ac_IN_NO_ACTIVE_CHILD;
        }

        OBCR_ac_DW.is_c1_OBCR_ac = OBCR_ac_IN_Estop;

        /* Entry 'Estop': '<S99>:134' */
        OBCR_ac_B.ChrgSysStat = CeOBCR_e_EStop;
        VeOBCR_t_StateTimer = 0.0F;
        OBCR_ac_B.OBCM_MdRq = (TeOBCR_e_ChrgrModeCmd_OBCM)
            safe_cast_to_TeOBCR_e_ChrgrMode(CeOBCR_e_Idle_OBCM);
        OBCR_ac_B.OBCM_ChrgEnblRq = false;
    }
    else
    {
        /* Inport: '<Root>/VeDCCR_e_DCChrgSysStat_SF' */
        (void)Rte_Read_VeDCCR_e_DCChrgSysStat_SF_Value(&tmpRead_0);

        /* Inport: '<Root>/VeDCCR_e_DCGBTChrgSysStat' */
        (void)Rte_Read_VeDCCR_e_DCGBTChrgSysStat_Value(&tmpRead_1);

        /* Inport: '<Root>/VeVTHR_b_Rdy4shutdown' */
        (void)Rte_Read_VeVTHR_b_Rdy4shutdown_Value(&tmpRead_2);

        /* Inport: '<Root>/VeVTHR_b_V2H_Active' */
        (void)Rte_Read_VeVTHR_b_V2H_Active_Value(&tmpRead_3);
        guard1 = false;
        switch (OBCR_ac_DW.is_ChargeTypeState)
        {
          case OBCR_ac_IN_AC:
            /* Inport: '<Root>/VeIDCR_e_ChrgrModeStat_OBCM' */
            /* During 'AC': '<S99>:56' */
            (void)Rte_Read_VeIDCR_e_ChrgrModeStat_OBCM_Value(&tmpRead);
            switch (OBCR_ac_DW.is_AC)
            {
              case OBCR_ac_IN_CloseS2:
                OBCR_ac_B.ChrgSysStat = CeOBCR_e_CloseS2;

                /* During 'CloseS2': '<S99>:72' */
                if ((OBCR_ac_B.TmpSignalConversionAtVeIDCR_b_J) &&
                        (VeOBCR_t_StateTimer >= ((float32)
                        Rte_Prm_KeOBCR_t_CloseS2Delay_KeOBCR_t_CloseS2Delay())))
                {
                    /* Transition: '<S99>:69' */
                    /* Exit 'CloseS2': '<S99>:72' */
                    OBCR_ac_DW.is_AC = OBCR_ac_IN_OBCM_Charge;

                    /* Entry 'OBCM_Charge': '<S99>:73' */
                    VeOBCR_t_StateTimer = 0.0F;
                    OBCR_ac_B.ChrgSysStat = CeOBCR_e_OBCM_Charge;
                    OBCR_ac_B.OBCM_MdRq = (TeOBCR_e_ChrgrModeCmd_OBCM)
                        safe_cast_to_TeOBCR_e_ChrgrMode(CeOBCR_e_Charge_OBCM);
                }
                else if (VeOBCR_t_StateTimer > ((float32)
                          Rte_Prm_KeOBCR_t_CloseS2_KeOBCR_t_CloseS2()))
                {
                    /* Transition: '<S99>:67' */
                    OBCR_ac_B.NCR = 3;

                    /* Transition: '<S99>:68' */
                    /* Transition: '<S99>:206' */
                    /* Transition: '<S99>:58' */
                    OBCR_ac_B.S2_Cmd = false;

                    /* Switch: '<S35>/Switch1' */
                    /* Transition: '<S99>:95' */
                    /* Transition: '<S99>:97' */
                    /* Transition: '<S99>:132' */
                    /* Transition: '<S99>:133' */
                    /* Transition: '<S99>:237' */
                    /* Transition: '<S99>:253' */
                    if (((uint32)OBCR_ac_B.Switch1_a) == CeOBCR_e_AC)
                    {
                        /* Transition: '<S99>:286' */
                        OBCR_ac_B.S2_Cmd = false;
                    }
                    else
                    {
                        /* Transition: '<S99>:289' */
                    }

                    /* Exit 'CloseS2': '<S99>:72' */
                    OBCR_ac_DW.is_AC = OBCR_ac_IN_NO_ACTIVE_CHILD;
                    OBCR_ac_DW.is_ChargeTypeState = OBCR_ac_IN_NO_ACTIVE_CHILD;
                    OBCR_ac_DW.is_c1_OBCR_ac = OBCR_ac_IN_Estop;

                    /* Entry 'Estop': '<S99>:134' */
                    OBCR_ac_B.ChrgSysStat = CeOBCR_e_EStop;
                    VeOBCR_t_StateTimer = 0.0F;
                    OBCR_ac_B.OBCM_MdRq = (TeOBCR_e_ChrgrModeCmd_OBCM)
                        safe_cast_to_TeOBCR_e_ChrgrMode(CeOBCR_e_Idle_OBCM);
                    OBCR_ac_B.OBCM_ChrgEnblRq = false;
                }
                else
                {
                    VeOBCR_t_StateTimer = VeOBCR_t_StateTimer + ((float32)
                        Rte_Prm_HeOBCR_t_dT_HeOBCR_t_dT());
                }
                break;

              case OBCR_ac_IN_OBCM_Charge:
                OBCR_ac_B.ChrgSysStat = CeOBCR_e_OBCM_Charge;

                /* Inport: '<Root>/VeIDCR_e_ChrgrModeStat_OBCM' */
                /* During 'OBCM_Charge': '<S99>:73' */
                if ((((uint32)tmpRead) == CeOBCR_e_Charge_OBCM) &&
                        (VeOBCR_t_StateTimer >= ((float32)
                        Rte_Prm_KeOBCR_t_OBCM_ChargeDelay_KeOBCR_t_OBCM_ChargeDelay
                        ())))
                {
                    /* Transition: '<S99>:203' */
                    /* Exit 'OBCM_Charge': '<S99>:73' */
                    OBCR_ac_DW.is_AC = OBCR_ac_IN_OBCM_EnblCharge;

                    /* Entry 'OBCM_EnblCharge': '<S99>:201' */
                    VeOBCR_t_StateTimer = 0.0F;
                    OBCR_ac_B.ChrgSysStat = CeOBCR_e_OBCM_EnblCharge;
                    OBCR_ac_B.OBCM_ChrgEnblRq = true;
                }
                else if (VeOBCR_t_StateTimer > ((float32)
                          Rte_Prm_KeOBCR_t_OBCM_Charge_KeOBCR_t_OBCM_Charge()))
                {
                    /* Transition: '<S99>:70' */
                    OBCR_ac_B.NCR = 4;

                    /* Transition: '<S99>:206' */
                    /* Transition: '<S99>:58' */
                    OBCR_ac_B.S2_Cmd = false;

                    /* Switch: '<S35>/Switch1' */
                    /* Transition: '<S99>:95' */
                    /* Transition: '<S99>:97' */
                    /* Transition: '<S99>:132' */
                    /* Transition: '<S99>:133' */
                    /* Transition: '<S99>:237' */
                    /* Transition: '<S99>:253' */
                    if (((uint32)OBCR_ac_B.Switch1_a) == CeOBCR_e_AC)
                    {
                        /* Transition: '<S99>:286' */
                        OBCR_ac_B.S2_Cmd = false;
                    }
                    else
                    {
                        /* Transition: '<S99>:289' */
                    }

                    /* Exit 'OBCM_Charge': '<S99>:73' */
                    OBCR_ac_DW.is_AC = OBCR_ac_IN_NO_ACTIVE_CHILD;
                    OBCR_ac_DW.is_ChargeTypeState = OBCR_ac_IN_NO_ACTIVE_CHILD;
                    OBCR_ac_DW.is_c1_OBCR_ac = OBCR_ac_IN_Estop;

                    /* Entry 'Estop': '<S99>:134' */
                    OBCR_ac_B.ChrgSysStat = CeOBCR_e_EStop;
                    VeOBCR_t_StateTimer = 0.0F;
                    OBCR_ac_B.OBCM_MdRq = (TeOBCR_e_ChrgrModeCmd_OBCM)
                        safe_cast_to_TeOBCR_e_ChrgrMode(CeOBCR_e_Idle_OBCM);
                    OBCR_ac_B.OBCM_ChrgEnblRq = false;
                }
                else
                {
                    VeOBCR_t_StateTimer = VeOBCR_t_StateTimer + ((float32)
                        Rte_Prm_HeOBCR_t_dT_HeOBCR_t_dT());
                }
                break;

              case OBCR_ac_IN_OBCM_EnblCharge:
                OBCR_ac_B.ChrgSysStat = CeOBCR_e_OBCM_EnblCharge;

                /* During 'OBCM_EnblCharge': '<S99>:201' */
                if (VeOBCR_t_StateTimer > ((float32)
                                           Rte_Prm_KeOBCR_t_OBCM_EnblCharge_KeOBCR_t_OBCM_EnblCharge
                                           ()))
                {
                    /* Transition: '<S99>:205' */
                    OBCR_ac_B.NCR = 5;

                    /* Transition: '<S99>:58' */
                    OBCR_ac_B.S2_Cmd = false;

                    /* Switch: '<S35>/Switch1' */
                    /* Transition: '<S99>:95' */
                    /* Transition: '<S99>:97' */
                    /* Transition: '<S99>:132' */
                    /* Transition: '<S99>:133' */
                    /* Transition: '<S99>:237' */
                    /* Transition: '<S99>:253' */
                    if (((uint32)OBCR_ac_B.Switch1_a) == CeOBCR_e_AC)
                    {
                        /* Transition: '<S99>:286' */
                        OBCR_ac_B.S2_Cmd = false;
                    }
                    else
                    {
                        /* Transition: '<S99>:289' */
                    }

                    /* Exit 'OBCM_EnblCharge': '<S99>:201' */
                    OBCR_ac_DW.is_AC = OBCR_ac_IN_NO_ACTIVE_CHILD;
                    OBCR_ac_DW.is_ChargeTypeState = OBCR_ac_IN_NO_ACTIVE_CHILD;
                    OBCR_ac_DW.is_c1_OBCR_ac = OBCR_ac_IN_Estop;

                    /* Entry 'Estop': '<S99>:134' */
                    OBCR_ac_B.ChrgSysStat = CeOBCR_e_EStop;
                    VeOBCR_t_StateTimer = 0.0F;
                    OBCR_ac_B.OBCM_MdRq = (TeOBCR_e_ChrgrModeCmd_OBCM)
                        safe_cast_to_TeOBCR_e_ChrgrMode(CeOBCR_e_Idle_OBCM);
                    OBCR_ac_B.OBCM_ChrgEnblRq = false;
                }
                else if ((VeOBCR_b_OBCM_ChrgEnblSts_In) && (VeOBCR_t_StateTimer >=
                          ((float32)
                           Rte_Prm_KeOBCR_t_OBCM_EnblChargeDelay_KeOBCR_t_OBCM_EnblChargeDelay
                           ())))
                {
                    /* Transition: '<S99>:81' */
                    /* Exit 'OBCM_EnblCharge': '<S99>:201' */
                    OBCR_ac_DW.is_AC = OBCR_ac_IN_NO_ACTIVE_CHILD;
                    OBCR_ac_DW.is_ChargeTypeState = OBCR_ac_IN_NO_ACTIVE_CHILD;
                    OBCR_ac_DW.is_c1_OBCR_ac = OBCR_ac_IN_Charging;

                    /* Entry 'Charging': '<S99>:103' */
                    VeOBCR_t_ChargeTimer = 0.0F;
                    VeOBCR_t_StateTimer = 0.0F;
                    OBCR_ac_B.ChrgSysStat = CeOBCR_e_Charging;
                    OBCR_ac_B.ChargingComplete = false;
                    OBCR_ac_B.NCR = 9;
                }
                else
                {
                    VeOBCR_t_StateTimer = VeOBCR_t_StateTimer + ((float32)
                        Rte_Prm_HeOBCR_t_dT_HeOBCR_t_dT());
                }
                break;

              default:
                OBCR_ac_B.ChrgSysStat = CeOBCR_e_OBCM_Idle;

                /* Inport: '<Root>/VeIDCR_e_ChrgrModeStat_OBCM' */
                /* During 'OBCM_Idle': '<S99>:71' */
                if (((((uint32)tmpRead) == CeOBCR_e_Idle_OBCM) && (!(*AND_m))) &&
                    (VeOBCR_t_StateTimer >= ((float32)
                        Rte_Prm_KeOBCR_t_OBCM_IdleDelay_KeOBCR_t_OBCM_IdleDelay())))
                {
                    /* Transition: '<S99>:66' */
                    /* Exit 'OBCM_Idle': '<S99>:71' */
                    OBCR_ac_DW.is_AC = OBCR_ac_IN_CloseS2;

                    /* Entry 'CloseS2': '<S99>:72' */
                    VeOBCR_t_StateTimer = 0.0F;
                    OBCR_ac_B.ChrgSysStat = CeOBCR_e_CloseS2;
                    OBCR_ac_B.S2_Cmd = true;
                }
                else if (VeOBCR_t_StateTimer > ((float32)
                          Rte_Prm_KeOBCR_t_OBCM_Idle_KeOBCR_t_OBCM_Idle()))
                {
                    /* Transition: '<S99>:64' */
                    OBCR_ac_B.NCR = 2;

                    /* Transition: '<S99>:65' */
                    /* Transition: '<S99>:68' */
                    /* Transition: '<S99>:206' */
                    /* Transition: '<S99>:58' */
                    OBCR_ac_B.S2_Cmd = false;

                    /* Switch: '<S35>/Switch1' */
                    /* Transition: '<S99>:95' */
                    /* Transition: '<S99>:97' */
                    /* Transition: '<S99>:132' */
                    /* Transition: '<S99>:133' */
                    /* Transition: '<S99>:237' */
                    /* Transition: '<S99>:253' */
                    if (((uint32)OBCR_ac_B.Switch1_a) == CeOBCR_e_AC)
                    {
                        /* Transition: '<S99>:286' */
                        OBCR_ac_B.S2_Cmd = false;
                    }
                    else
                    {
                        /* Transition: '<S99>:289' */
                    }

                    /* Exit 'OBCM_Idle': '<S99>:71' */
                    OBCR_ac_DW.is_AC = OBCR_ac_IN_NO_ACTIVE_CHILD;
                    OBCR_ac_DW.is_ChargeTypeState = OBCR_ac_IN_NO_ACTIVE_CHILD;
                    OBCR_ac_DW.is_c1_OBCR_ac = OBCR_ac_IN_Estop;

                    /* Entry 'Estop': '<S99>:134' */
                    OBCR_ac_B.ChrgSysStat = CeOBCR_e_EStop;
                    VeOBCR_t_StateTimer = 0.0F;
                    OBCR_ac_B.OBCM_MdRq = (TeOBCR_e_ChrgrModeCmd_OBCM)
                        safe_cast_to_TeOBCR_e_ChrgrMode(CeOBCR_e_Idle_OBCM);
                    OBCR_ac_B.OBCM_ChrgEnblRq = false;
                }
                else
                {
                    VeOBCR_t_StateTimer = VeOBCR_t_StateTimer + ((float32)
                        Rte_Prm_HeOBCR_t_dT_HeOBCR_t_dT());
                }
                break;
            }
            break;

          case OBCR_ac_IN_DC:
            OBCR_ac_B.ChrgSysStat = CeOBCR_e_DCChrg_Wait;

            /* During 'DC': '<S99>:93' */
            if (((((uint32)tmpRead_0) == CeOBCR_e_DCCrntDmd) && (!tmpRead_3)) ||
                (((uint32)tmpRead_1) == CeOBCR_e_DCGBTCrntDmd))
            {
                /* Transition: '<S99>:255' */
                OBCR_ac_DW.is_ChargeTypeState = OBCR_ac_IN_NO_ACTIVE_CHILD;
                OBCR_ac_DW.is_c1_OBCR_ac = OBCR_ac_IN_Charging;

                /* Entry 'Charging': '<S99>:103' */
                VeOBCR_t_ChargeTimer = 0.0F;
                VeOBCR_t_StateTimer = 0.0F;
                OBCR_ac_B.ChrgSysStat = CeOBCR_e_Charging;
                OBCR_ac_B.ChargingComplete = false;
                OBCR_ac_B.NCR = 9;
            }
            else if ((((uint32)tmpRead_0) == CeOBCR_e_DCShtDwn) || (((uint32)
                       tmpRead_1) == CeOBCR_e_DCGBTShtDwn))
            {
                /* Transition: '<S99>:259' */
                OBCR_ac_B.NCR = 19;

                /* Transition: '<S99>:302' */
                /* Transition: '<S99>:319' */
                /* Transition: '<S99>:318' */
                /* Transition: '<S99>:369' */
                guard1 = true;
            }
            else if (!VeOBCR_b_battReady)
            {
                /* Transition: '<S99>:306' */
                OBCR_ac_B.NCR = 1;

                /* Transition: '<S99>:369' */
                guard1 = true;
            }
            else if (VeOBCR_t_StateTimer > ((float32)
                      Rte_Prm_KeOBCR_t_DCMaxTime_KeOBCR_t_DCMaxTime()))
            {
                /* Transition: '<S99>:300' */
                OBCR_ac_B.NCR = 15;

                /* Transition: '<S99>:299' */
                /* Transition: '<S99>:302' */
                /* Transition: '<S99>:319' */
                /* Transition: '<S99>:318' */
                /* Transition: '<S99>:369' */
                guard1 = true;
            }
            else if (((((uint32)tmpRead_0) == CeOBCR_e_DCinit) &&
                      ((VeOBCR_t_StateTimer > ((float32)
                         Rte_Prm_KeOBCR_t_DCInitWait_KeOBCR_t_DCInitWait())) ||
                       (!VeOBCR_b_IDCM_DCCA))) && (!OBCR_ac_B.Logical1_b))
            {
                /* Transition: '<S99>:303' */
                OBCR_ac_B.NCR = 16;

                /* Transition: '<S99>:319' */
                /* Transition: '<S99>:318' */
                /* Transition: '<S99>:369' */
                guard1 = true;
            }
            else if ((((((uint32)tmpRead_1) == CeOBCR_e_DCGBTinit) &&
                       (VeOBCR_t_StateTimer > ((float32)
                         Rte_Prm_KeOBCR_t_DCGBTInitWait_KeOBCR_t_DCGBTInitWait())))
                      && (((uint32)VeOBCR_e_TxGBTMsgResponse) ==
                          CeIDCR_e_CRM_BMS_NotRecognized)) &&
                     (OBCR_ac_B.Logical1_b))
            {
                /* Transition: '<S99>:320' */
                OBCR_ac_B.NCR = 16;

                /* Transition: '<S99>:318' */
                /* Transition: '<S99>:369' */
                guard1 = true;
            }
            else if (tmpRead_2 || (VeOBCR_t_StateTimer > KeOBCR_t_V2HMaxTime))
            {
                /* Transition: '<S99>:371' */
                guard1 = true;
            }
            else
            {
                VeOBCR_t_StateTimer = VeOBCR_t_StateTimer + ((float32)
                    Rte_Prm_HeOBCR_t_dT_HeOBCR_t_dT());
            }
            break;

          default:
            /* During 'Wireless': '<S99>:87' */
            break;
        }

        if (guard1)
        {
            /* Switch: '<S35>/Switch1' */
            /* Transition: '<S99>:370' */
            /* Transition: '<S99>:131' */
            /* Transition: '<S99>:132' */
            /* Transition: '<S99>:133' */
            /* Transition: '<S99>:237' */
            /* Transition: '<S99>:253' */
            if (((uint32)OBCR_ac_B.Switch1_a) == CeOBCR_e_AC)
            {
                /* Transition: '<S99>:286' */
                OBCR_ac_B.S2_Cmd = false;
            }
            else
            {
                /* Transition: '<S99>:289' */
            }

            OBCR_ac_DW.is_ChargeTypeState = OBCR_ac_IN_NO_ACTIVE_CHILD;
            OBCR_ac_DW.is_c1_OBCR_ac = OBCR_ac_IN_Estop;

            /* Entry 'Estop': '<S99>:134' */
            OBCR_ac_B.ChrgSysStat = CeOBCR_e_EStop;
            VeOBCR_t_StateTimer = 0.0F;
            OBCR_ac_B.OBCM_MdRq = (TeOBCR_e_ChrgrModeCmd_OBCM)
                safe_cast_to_TeOBCR_e_ChrgrMode(CeOBCR_e_Idle_OBCM);
            OBCR_ac_B.OBCM_ChrgEnblRq = false;
        }
    }
}

#endif

/* Function for Chart: '<S15>/Charging_MainSF' */
#if Rte_SysCon_Variant_OBCR_1

static boolean OBCR_ac_DIN_Charging(void)
{
    TeOBCR_e_DCChrgStat tmpRead;
    boolean DC_DIN;

    /* Graphical Function 'DIN_Charging': '<S99>:325' */
    DC_DIN = false;

    /* Inport: '<Root>/VeDCCR_e_DCChrgSysStat_SF' */
    /* Transition: '<S99>:327' */
    (void)Rte_Read_VeDCCR_e_DCChrgSysStat_SF_Value(&tmpRead);
    if (((((uint32)tmpRead) == CeOBCR_e_DCShtDwnCmplt) || (((uint32)tmpRead) ==
            CeOBCR_e_DCinit)) && (!OBCR_ac_B.Logical1_b))
    {
        /* Transition: '<S99>:332' */
        /* Transition: '<S99>:334' */
        DC_DIN = true;

        /* Transition: '<S99>:337' */
    }
    else
    {
        /* Transition: '<S99>:336' */
    }

    return DC_DIN;
}

#endif

/* Function for Chart: '<S15>/Charging_MainSF' */
#if Rte_SysCon_Variant_OBCR_1

static boolean OBCR_ac_GBT_Charging(void)
{
    TeOBCR_e_DCGBTChrgSysStat tmpRead;
    boolean DC_GBT;

    /* Graphical Function 'GBT_Charging': '<S99>:348' */
    DC_GBT = false;

    /* Inport: '<Root>/VeDCCR_e_DCGBTChrgSysStat' */
    /* Transition: '<S99>:342' */
    (void)Rte_Read_VeDCCR_e_DCGBTChrgSysStat_Value(&tmpRead);

    /* Inport: '<Root>/VeDCCR_e_DCGBTChrgSysStat' incorporates:
     *  Switch: '<S6>/Switch34'
     */
    if (((((uint32)tmpRead) == CeOBCR_e_DCGBTShtDwnCmplt) && ((((uint32)
            VeOBCR_e_TxGBTMsgResponse) == CeIDCR_e_CRM_BMS_NotRecognized) ||
            (((uint32)VeOBCR_e_TxGBTMsgResponse) == CeIDCR_e_CRM_BMS_Recognized)))
        && (OBCR_ac_B.Logical1_b))
    {
        /* Transition: '<S99>:340' */
        /* Transition: '<S99>:341' */
        DC_GBT = true;

        /* Transition: '<S99>:338' */
    }
    else
    {
        /* Transition: '<S99>:339' */
    }

    /* End of Inport: '<Root>/VeDCCR_e_DCGBTChrgSysStat' */
    return DC_GBT;
}

#endif

/* Output and update for action system: '<S8>/SF' */
#if Rte_SysCon_Variant_OBCR_1

static FUNC(void, OBCR_CODE_LOCAL) OBCR_ac_SF(void)
{
    sint32 tmp;
    uint16 rtb_Switch;
    TeOBCR_e_ChargeProgress tmp_1;
    TeOBCR_e_ChargeType tmp_0;
    TeOBCR_e_ChrgrModeStat_OBCM tmpRead;
    TeOBCR_e_DCChrgStat tmpRead_0;
    TeOBCR_e_DCGBTChrgSysStat tmpRead_2;
    boolean VeOBCR_b_GiveUp;
    boolean guard1 = false;
    boolean rtb_UnitDelay_h;
    boolean tmpRead_1;
    boolean tmpRead_3;

    /* UnitDelay: '<S15>/Unit Delay' */
    VeOBCR_b_GiveUp = OBCR_ac_DW.UnitDelay_DSTATE_le;

    /* Outputs for Atomic SubSystem: '<S15>/Turn Off Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S101>/EdgeFalling' */
    /* UnitDelay: '<S102>/Unit Delay' */
    rtb_UnitDelay_h = OBCR_ac_DW.UnitDelay_DSTATE_bd;

    /* Update for UnitDelay: '<S102>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_bd = OBCR_ac_B.TmpSignalConversionAtVeVTLR_b_A;

    /* Switch: '<S101>/Switch' incorporates:
     *  Logic: '<S102>/AND'
     *  Logic: '<S102>/OR1'
     */
    if ((!OBCR_ac_B.TmpSignalConversionAtVeVTLR_b_A) && rtb_UnitDelay_h)
    {
        /* Switch: '<S101>/Switch' incorporates:
         *  Constant: '<S100>/Calib'
         */
        rtb_Switch = KeOBCR_Cnt_ACSwitchResponse;
    }
    else
    {
        /* Sum: '<S101>/Summation' incorporates:
         *  Constant: '<S101>/Constant Value'
         *  UnitDelay: '<S101>/Unit Delay'
         */
        tmp = ((sint32)OBCR_ac_DW.UnitDelay_DSTATE_iw) - 1;
        if ((((sint32)OBCR_ac_DW.UnitDelay_DSTATE_iw) - 1) < 0)
        {
            tmp = 0;
        }

        /* Switch: '<S101>/Switch' incorporates:
         *  Sum: '<S101>/Summation'
         */
        rtb_Switch = (uint16)tmp;
    }

    /* End of Switch: '<S101>/Switch' */
    /* End of Outputs for SubSystem: '<S101>/EdgeFalling' */

    /* Logic: '<S101>/AND' incorporates:
     *  Constant: '<S101>/Constant Value2'
     *  RelationalOperator: '<S101>/Greater  Than'
     */
    rtb_UnitDelay_h = ((OBCR_ac_B.TmpSignalConversionAtVeVTLR_b_A) || (((sint32)
                         rtb_Switch) > 0));

    /* Update for UnitDelay: '<S101>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_iw = rtb_Switch;

    /* End of Outputs for SubSystem: '<S15>/Turn Off Delay Sample' */

    /* Chart: '<S15>/Charging_MainSF' incorporates:
     *  Inport: '<Root>/VeCCCR_b_ChrgCmplteCondtnMet'
     *  Inport: '<Root>/VeCHFR_b_Reset_Charging'
     *  Inport: '<Root>/VeDCCR_e_DCChrgSysStat_SF'
     *  Inport: '<Root>/VeDCCR_e_DCGBTChrgSysStat'
     *  Inport: '<Root>/VeIDCR_e_ChrgrModeStat_OBCM'
     *  SignalConversion generated from: '<S1>/VeDCCR_e_ChargeProgress'
     *  Switch: '<S35>/Switch1'
     *  UnitDelay: '<S15>/Unit Delay'
     */
    /* Gateway: OBCR_FUNC_MedTED/OBCC/Main_SF/SF/Charging_MainSF */
    /* During: OBCR_FUNC_MedTED/OBCC/Main_SF/SF/Charging_MainSF */
    if (((uint32)OBCR_ac_DW.is_active_c1_OBCR_ac) == 0U)
    {
        /* Entry: OBCR_FUNC_MedTED/OBCC/Main_SF/SF/Charging_MainSF */
        OBCR_ac_DW.is_active_c1_OBCR_ac = 1U;

        /* Entry Internal: OBCR_FUNC_MedTED/OBCC/Main_SF/SF/Charging_MainSF */
        /* Transition: '<S99>:3' */
        OBCR_ac_B.NCR = 0;
        OBCR_ac_DW.is_c1_OBCR_ac = OBCR_ac_IN_PowerUp;

        /* Entry 'PowerUp': '<S99>:1' */
        OBCR_ac_B.OBCM_MdRq = (TeOBCR_e_ChrgrModeCmd_OBCM)
            safe_cast_to_TeOBCR_e_ChrgrMode(CeOBCR_e_Idle_OBCM);
        OBCR_ac_B.ChrgSysStat = CeOBCR_e_PowerUp;
        VeOBCR_t_StateTimer = 0.0F;
        VeOBCR_t_ChargeTimer = 0.0F;
        OBCR_ac_B.RdyForShtDwn = false;
        OBCR_ac_B.OBCM_ChrgEnblRq = false;
        OBCR_ac_B.S2_Cmd = false;
        VeOBCR_Cnt_ChrgPauseCount = 0;
        OBCR_ac_B.ChargingComplete = false;
    }
    else
    {
        (void)Rte_Read_VeIDCR_e_ChrgrModeStat_OBCM_Value(&tmpRead);
        (void)Rte_Read_VeDCCR_e_DCChrgSysStat_SF_Value(&tmpRead_0);
        (void)Rte_Read_VeCHFR_b_Reset_Charging_Value(&tmpRead_1);
        (void)Rte_Read_VeDCCR_e_DCGBTChrgSysStat_Value(&tmpRead_2);
        (void)Rte_Read_VeCCCR_b_ChrgCmplteCondtnMet_Value(&tmpRead_3);
        guard1 = false;
        switch (OBCR_ac_DW.is_c1_OBCR_ac)
        {
          case OBCR_ac_IN_BPCM_Ready:
            OBCR_ac_B.ChrgSysStat = CeOBCR_e_BPCM_Ready;

            /* During 'BPCM_Ready': '<S99>:221' */
            if ((VeOBCR_b_battReady) && (VeOBCR_t_StateTimer >= ((float32)
                    Rte_Prm_KeOBCR_t_BPCM_ReadyDelay_KeOBCR_t_BPCM_ReadyDelay())))
            {
                /* Transition: '<S99>:222' */
                OBCR_ac_DW.is_c1_OBCR_ac = OBCR_ac_IN_ChargeTypeState;
                enter_internal_ChargeTypeState();
            }
            else if ((!VeOBCR_b_battReady) && (VeOBCR_t_StateTimer > ((float32)
                       Rte_Prm_KeOBCR_t_BPCM_Ready_KeOBCR_t_BPCM_Ready())))
            {
                /* Transition: '<S99>:224' */
                OBCR_ac_B.NCR = 1;

                /* Transition: '<S99>:226' */
                /* Transition: '<S99>:299' */
                /* Transition: '<S99>:302' */
                /* Transition: '<S99>:319' */
                /* Transition: '<S99>:318' */
                /* Transition: '<S99>:369' */
                /* Transition: '<S99>:370' */
                /* Transition: '<S99>:131' */
                /* Transition: '<S99>:132' */
                /* Transition: '<S99>:133' */
                /* Transition: '<S99>:237' */
                /* Transition: '<S99>:253' */
                if (((uint32)OBCR_ac_B.Switch1_a) == CeOBCR_e_AC)
                {
                    /* Transition: '<S99>:286' */
                    OBCR_ac_B.S2_Cmd = false;
                }
                else
                {
                    /* Transition: '<S99>:289' */
                }

                OBCR_ac_DW.is_c1_OBCR_ac = OBCR_ac_IN_Estop;

                /* Entry 'Estop': '<S99>:134' */
                OBCR_ac_B.ChrgSysStat = CeOBCR_e_EStop;
                VeOBCR_t_StateTimer = 0.0F;
                OBCR_ac_B.OBCM_MdRq = (TeOBCR_e_ChrgrModeCmd_OBCM)
                    safe_cast_to_TeOBCR_e_ChrgrMode(CeOBCR_e_Idle_OBCM);
                OBCR_ac_B.OBCM_ChrgEnblRq = false;
            }
            else
            {
                VeOBCR_t_StateTimer = VeOBCR_t_StateTimer + ((float32)
                    Rte_Prm_HeOBCR_t_dT_HeOBCR_t_dT());
            }
            break;

          case OBCR_ac_IN_ChargeTypeState:
            OBCR_ac_ChargeTypeState(&rtb_UnitDelay_h);
            break;

          case OBCR_ac_IN_Charge_Complete:
            OBCR_ac_B.ChrgSysStat = CeOBCR_e_ChargeComplete;
            OBCR_ac_B.ChargingComplete = true;

            /* During 'Charge_Complete': '<S99>:116' */
            if (tmpRead_1)
            {
                /* Transition: '<S99>:362' */
                OBCR_ac_B.NCR = 0;

                /* Transition: '<S99>:145' */
                /* Transition: '<S99>:147' */
                OBCR_ac_DW.is_c1_OBCR_ac = OBCR_ac_IN_PowerUp;

                /* Entry 'PowerUp': '<S99>:1' */
                OBCR_ac_B.OBCM_MdRq = (TeOBCR_e_ChrgrModeCmd_OBCM)
                    safe_cast_to_TeOBCR_e_ChrgrMode(CeOBCR_e_Idle_OBCM);
                OBCR_ac_B.ChrgSysStat = CeOBCR_e_PowerUp;
                VeOBCR_t_StateTimer = 0.0F;
                VeOBCR_t_ChargeTimer = 0.0F;
                OBCR_ac_B.RdyForShtDwn = false;
                OBCR_ac_B.OBCM_ChrgEnblRq = false;
                OBCR_ac_B.S2_Cmd = false;
                VeOBCR_Cnt_ChrgPauseCount = 0;
                OBCR_ac_B.ChargingComplete = false;
            }
            else
            {
                tmp_0 = OBCR_ac_B.Switch1_a;
                if (((((uint32)tmp_0) == CeOBCR_e_DC) && (((uint32)tmpRead_0) ==
                      CeOBCR_e_DCShtDwnCmplt)) || ((((uint32)tmp_0) ==
                        CeOBCR_e_AC) && ((((uint32)tmpRead) ==
                                          CeOBCR_e_Idle_OBCM) ||
                                         (VeOBCR_t_StateTimer > ((float32)
                        Rte_Prm_KeOBCR_t_StateShutDown_KeOBCR_t_StateShutDown())))))
                {
                    /* Transition: '<S99>:120' */
                    OBCR_ac_DW.is_c1_OBCR_ac = OBCR_ac_IN_ShutDown;

                    /* Entry 'ShutDown': '<S99>:119' */
                    OBCR_ac_B.ChrgSysStat = CeOBCR_e_ShutDown;
                    VeOBCR_t_StateTimer = 0.0F;
                    OBCR_ac_B.RdyForShtDwn = true;
                }
                else
                {
                    VeOBCR_t_StateTimer = VeOBCR_t_StateTimer + ((float32)
                        Rte_Prm_HeOBCR_t_dT_HeOBCR_t_dT());
                }
            }
            break;

          case OBCR_ac_IN_Charging:
            OBCR_ac_B.ChrgSysStat = CeOBCR_e_Charging;
            OBCR_ac_B.ChargingComplete = false;

            /* During 'Charging': '<S99>:103' */
            if (!OBCR_ac_B.VeOBCR_b_EnableCharge)
            {
                /* Transition: '<S99>:109' */
                OBCR_ac_B.NCR = 20;

                /* Transition: '<S99>:133' */
                /* Transition: '<S99>:237' */
                /* Transition: '<S99>:253' */
                guard1 = true;
            }
            else if (!VeOBCR_b_battReady)
            {
                /* Transition: '<S99>:117' */
                OBCR_ac_B.NCR = 1;

                /* Transition: '<S99>:253' */
                guard1 = true;
            }
            else if (tmpRead_3 && (VeOBCR_t_StateTimer >= ((float32)
                       Rte_Prm_KeOBCR_t_ChargeCompleteDelay_KeOBCR_t_ChargeCompleteDelay
                       ())))
            {
                /* Transition: '<S99>:118' */
                if (((uint32)OBCR_ac_B.Switch1_a) == CeOBCR_e_AC)
                {
                    /* Transition: '<S99>:280' */
                    OBCR_ac_B.S2_Cmd = false;
                }
                else
                {
                    /* Transition: '<S99>:290' */
                }

                OBCR_ac_DW.is_c1_OBCR_ac = OBCR_ac_IN_Charge_Complete;

                /* Entry 'Charge_Complete': '<S99>:116' */
                OBCR_ac_B.ChrgSysStat = CeOBCR_e_ChargeComplete;
                VeOBCR_t_StateTimer = 0.0F;
                OBCR_ac_B.OBCM_MdRq = (TeOBCR_e_ChrgrModeCmd_OBCM)
                    safe_cast_to_TeOBCR_e_ChrgrMode(CeOBCR_e_Idle_OBCM);
                OBCR_ac_B.OBCM_ChrgEnblRq = false;
                OBCR_ac_B.NCR = 11;
                OBCR_ac_B.ChargingComplete = true;
            }
            else
            {
                tmp_0 = OBCR_ac_B.Switch1_a;
                if ((((uint32)tmp_0) == CeOBCR_e_AC) && (((((uint32)tmpRead) !=
                        CeOBCR_e_Charge_OBCM) ||
                        (!OBCR_ac_B.TmpSignalConversionAtVeIDCR_b_J)) ||
                        (!VeOBCR_b_OBCM_ChrgEnblSts_In)))
                {
                    /* Transition: '<S99>:111' */
                    OBCR_ac_B.NCR = 6;

                    /* Transition: '<S99>:237' */
                    /* Transition: '<S99>:253' */
                    guard1 = true;
                }
                else
                {
                    tmp_1 = OBCR_ac_B.TmpSignalConversionAtVeDCCR_e_C;
                    if ((((uint32)tmp_0) == CeOBCR_e_DC) && ((((((uint32)tmp_1)
                            != CeOBCR_e_Renegotiation) && (((uint32)tmpRead_0)
                            != CeOBCR_e_DCCrntDmd)) && (!OBCR_ac_B.Logical1_b)) ||
                         ((((uint32)tmpRead_2) != CeOBCR_e_DCGBTCrntDmd) &&
                            (OBCR_ac_B.Logical1_b))))
                    {
                        /* Transition: '<S99>:254' */
                        OBCR_ac_B.NCR = 19;
                        guard1 = true;
                    }
                    else if (((uint32)tmp_1) == CeOBCR_e_Renegotiation)
                    {
                        /* Transition: '<S99>:364' */
                        OBCR_ac_DW.is_c1_OBCR_ac = OBCR_ac_IN_ChargeTypeState;
                        enter_internal_ChargeTypeState();
                    }
                    else
                    {
                        VeOBCR_t_StateTimer = VeOBCR_t_StateTimer + ((float32)
                            Rte_Prm_HeOBCR_t_dT_HeOBCR_t_dT());
                        VeOBCR_t_ChargeTimer = VeOBCR_t_ChargeTimer + ((float32)
                            Rte_Prm_HeOBCR_t_dT_HeOBCR_t_dT());
                    }
                }
            }
            break;

          case OBCR_ac_IN_Estop:
            OBCR_ac_B.ChrgSysStat = CeOBCR_e_EStop;

            /* During 'Estop': '<S99>:134' */
            tmp_0 = OBCR_ac_B.Switch1_a;
            if ((tmpRead_1 || ((!VeOBCR_b_GiveUp) && (VeOBCR_t_StateTimer >
                    ((float32)Rte_Prm_KeOBCR_t_RetryDelay_KeOBCR_t_RetryDelay()))))
                && ((((uint32)tmp_0) == CeOBCR_e_AC) || ((((uint32)tmp_0) ==
                    CeOBCR_e_DC) && ((OBCR_ac_DIN_Charging()) ||
                                     (OBCR_ac_GBT_Charging())))))
            {
                /* Transition: '<S99>:138' */
                /* Transition: '<S99>:140' */
                /* Transition: '<S99>:144' */
                /* Transition: '<S99>:361' */
                /* Transition: '<S99>:145' */
                /* Transition: '<S99>:147' */
                OBCR_ac_DW.is_c1_OBCR_ac = OBCR_ac_IN_PowerUp;

                /* Entry 'PowerUp': '<S99>:1' */
                OBCR_ac_B.OBCM_MdRq = (TeOBCR_e_ChrgrModeCmd_OBCM)
                    safe_cast_to_TeOBCR_e_ChrgrMode(CeOBCR_e_Idle_OBCM);
                OBCR_ac_B.ChrgSysStat = CeOBCR_e_PowerUp;
                VeOBCR_t_StateTimer = 0.0F;
                VeOBCR_t_ChargeTimer = 0.0F;
                OBCR_ac_B.RdyForShtDwn = false;
                OBCR_ac_B.OBCM_ChrgEnblRq = false;
                OBCR_ac_B.S2_Cmd = false;
                VeOBCR_Cnt_ChrgPauseCount = 0;
                OBCR_ac_B.ChargingComplete = false;
            }
            else if ((((OBCR_ac_DW.UnitDelay_DSTATE_le) && (((uint32)tmp_0) ==
                        CeOBCR_e_AC)) || ((((OBCR_ac_DW.UnitDelay_DSTATE_le) &&
                         (((uint32)tmp_0) == CeOBCR_e_DC)) &&
                        (!OBCR_ac_B.Logical1_b)) && ((((uint32)tmpRead_0) ==
                         CeOBCR_e_DCShtDwnCmplt) || (((uint32)tmpRead_0) ==
                         CeOBCR_e_DCinit)))) ||
                     ((((OBCR_ac_DW.UnitDelay_DSTATE_le) && (((uint32)tmp_0) ==
                         CeOBCR_e_DC)) && (OBCR_ac_B.Logical1_b)) && (((uint32)
                        tmpRead_2) == CeOBCR_e_DCGBTShtDwnCmplt)))
            {
                /* Transition: '<S99>:149' */
                /* Transition: '<S99>:150' */
                OBCR_ac_DW.is_c1_OBCR_ac = OBCR_ac_IN_ShutDown;

                /* Entry 'ShutDown': '<S99>:119' */
                OBCR_ac_B.ChrgSysStat = CeOBCR_e_ShutDown;
                VeOBCR_t_StateTimer = 0.0F;
                OBCR_ac_B.RdyForShtDwn = true;
            }
            else
            {
                VeOBCR_t_StateTimer = VeOBCR_t_StateTimer + ((float32)
                    Rte_Prm_HeOBCR_t_dT_HeOBCR_t_dT());
            }
            break;

          case OBCR_ac_IN_PowerUp:
            OBCR_ac_B.ChrgSysStat = CeOBCR_e_PowerUp;
            OBCR_ac_B.RdyForShtDwn = false;
            VeOBCR_Cnt_ChrgPauseCount = 0;
            OBCR_ac_B.ChargingComplete = false;

            /* During 'PowerUp': '<S99>:1' */
            if (OBCR_ac_B.Logical6)
            {
                /* Transition: '<S99>:357' */
                /* Transition: '<S99>:355' */
                /* Transition: '<S99>:356' */
                /* Transition: '<S99>:150' */
                OBCR_ac_DW.is_c1_OBCR_ac = OBCR_ac_IN_ShutDown;

                /* Entry 'ShutDown': '<S99>:119' */
                OBCR_ac_B.ChrgSysStat = CeOBCR_e_ShutDown;
                VeOBCR_t_StateTimer = 0.0F;
                OBCR_ac_B.RdyForShtDwn = true;
            }
            else if ((!OBCR_ac_B.VeOBCR_b_EnableCharge) && (VeOBCR_t_StateTimer >
                      ((float32)Rte_Prm_KeOBCR_t_PowerUp_KeOBCR_t_PowerUp())))
            {
                /* Transition: '<S99>:127' */
                OBCR_ac_B.NCR = 20;

                /* Transition: '<S99>:225' */
                /* Transition: '<S99>:226' */
                /* Transition: '<S99>:299' */
                /* Transition: '<S99>:302' */
                /* Transition: '<S99>:319' */
                /* Transition: '<S99>:318' */
                /* Transition: '<S99>:369' */
                /* Transition: '<S99>:370' */
                /* Transition: '<S99>:131' */
                /* Transition: '<S99>:132' */
                /* Transition: '<S99>:133' */
                /* Transition: '<S99>:237' */
                /* Transition: '<S99>:253' */
                if (((uint32)OBCR_ac_B.Switch1_a) == CeOBCR_e_AC)
                {
                    /* Transition: '<S99>:286' */
                    OBCR_ac_B.S2_Cmd = false;
                }
                else
                {
                    /* Transition: '<S99>:289' */
                }

                OBCR_ac_DW.is_c1_OBCR_ac = OBCR_ac_IN_Estop;

                /* Entry 'Estop': '<S99>:134' */
                OBCR_ac_B.ChrgSysStat = CeOBCR_e_EStop;
                VeOBCR_t_StateTimer = 0.0F;
                OBCR_ac_B.OBCM_MdRq = (TeOBCR_e_ChrgrModeCmd_OBCM)
                    safe_cast_to_TeOBCR_e_ChrgrMode(CeOBCR_e_Idle_OBCM);
                OBCR_ac_B.OBCM_ChrgEnblRq = false;
            }
            else if (((OBCR_ac_B.VeOBCR_b_EnableCharge) && (VeOBCR_t_StateTimer >=
                       ((float32)
                        Rte_Prm_KeOBCR_t_EnableChargeDelay_KeOBCR_t_EnableChargeDelay
                        ()))) && (!OBCR_ac_B.Logical6))
            {
                /* Transition: '<S99>:122' */
                OBCR_ac_DW.is_c1_OBCR_ac = OBCR_ac_IN_BPCM_Ready;

                /* Entry 'BPCM_Ready': '<S99>:221' */
                OBCR_ac_B.ChrgSysStat = CeOBCR_e_BPCM_Ready;
                VeOBCR_t_StateTimer = 0.0F;
            }
            else
            {
                VeOBCR_t_StateTimer = VeOBCR_t_StateTimer + ((float32)
                    Rte_Prm_HeOBCR_t_dT_HeOBCR_t_dT());
            }
            break;

          default:
            OBCR_ac_B.ChrgSysStat = CeOBCR_e_ShutDown;
            OBCR_ac_B.RdyForShtDwn = true;

            /* During 'ShutDown': '<S99>:119' */
            if (tmpRead_1)
            {
                /* Transition: '<S99>:141' */
                OBCR_ac_B.NCR = 0;

                /* Transition: '<S99>:144' */
                /* Transition: '<S99>:361' */
                /* Transition: '<S99>:145' */
                /* Transition: '<S99>:147' */
                OBCR_ac_DW.is_c1_OBCR_ac = OBCR_ac_IN_PowerUp;

                /* Entry 'PowerUp': '<S99>:1' */
                OBCR_ac_B.OBCM_MdRq = (TeOBCR_e_ChrgrModeCmd_OBCM)
                    safe_cast_to_TeOBCR_e_ChrgrMode(CeOBCR_e_Idle_OBCM);
                OBCR_ac_B.ChrgSysStat = CeOBCR_e_PowerUp;
                VeOBCR_t_StateTimer = 0.0F;
                VeOBCR_t_ChargeTimer = 0.0F;
                OBCR_ac_B.RdyForShtDwn = false;
                OBCR_ac_B.OBCM_ChrgEnblRq = false;
                OBCR_ac_B.S2_Cmd = false;
                VeOBCR_Cnt_ChrgPauseCount = 0;
                OBCR_ac_B.ChargingComplete = false;
            }
            else
            {
                VeOBCR_t_StateTimer = VeOBCR_t_StateTimer + ((float32)
                    Rte_Prm_HeOBCR_t_dT_HeOBCR_t_dT());
            }
            break;
        }

        if (guard1)
        {
            if (((uint32)OBCR_ac_B.Switch1_a) == CeOBCR_e_AC)
            {
                /* Transition: '<S99>:286' */
                OBCR_ac_B.S2_Cmd = false;
            }
            else
            {
                /* Transition: '<S99>:289' */
            }

            OBCR_ac_DW.is_c1_OBCR_ac = OBCR_ac_IN_Estop;

            /* Entry 'Estop': '<S99>:134' */
            OBCR_ac_B.ChrgSysStat = CeOBCR_e_EStop;
            VeOBCR_t_StateTimer = 0.0F;
            OBCR_ac_B.OBCM_MdRq = (TeOBCR_e_ChrgrModeCmd_OBCM)
                safe_cast_to_TeOBCR_e_ChrgrMode(CeOBCR_e_Idle_OBCM);
            OBCR_ac_B.OBCM_ChrgEnblRq = false;
        }
    }

    /* End of Chart: '<S15>/Charging_MainSF' */

    /* Update for UnitDelay: '<S15>/Unit Delay' incorporates:
     *  Inport: '<Root>/VeCHFR_b_GiveUp'
     */
    (void)Rte_Read_VeCHFR_b_GiveUp_Value(&OBCR_ac_DW.UnitDelay_DSTATE_le);

    /* Merge: '<S8>/Merge_7' incorporates:
     *  SignalConversion generated from: '<S15>/ChargingComplete_SF'
     */
    VeOBCR_b_ChargingComplete_SF = OBCR_ac_B.ChargingComplete;

    /* Merge: '<S8>/Merge_3' incorporates:
     *  SignalConversion generated from: '<S15>/ChrgSysStat'
     */
    OBCR_ac_B.Merge_3 = OBCR_ac_B.ChrgSysStat;

    /* Merge: '<S8>/Merge_5' incorporates:
     *  SignalConversion generated from: '<S15>/NCR'
     */
    VeOBCR_e_NCR = OBCR_ac_B.NCR;

    /* Gain: '<S18>/Gain' incorporates:
     *  SignalConversion generated from: '<S15>/OBCM_ChrgEnblRq'
     */
    OBCR_ac_B.Gain_eg = OBCR_ac_B.OBCM_ChrgEnblRq;

    /* Merge: '<S8>/Merge_24' incorporates:
     *  SignalConversion generated from: '<S15>/OBCM_MdRq'
     */
    VeOBCR_e_MdRq_Test = OBCR_ac_B.OBCM_MdRq;

    /* Gain: '<S17>/Gain' incorporates:
     *  SignalConversion generated from: '<S15>/OBCR_RdyForShtDwn'
     */
    OBCR_ac_B.Gain_k1 = OBCR_ac_B.RdyForShtDwn;

    /* Merge: '<S8>/Merge_2' incorporates:
     *  SignalConversion generated from: '<S15>/S2_Cmd'
     */
    VeOBCR_b_CloseS2CntctrI = OBCR_ac_B.S2_Cmd;
}

#endif

/* Output and update for action system: '<S8>/SF1' */
#if Rte_SysCon_Variant_OBCR_1

static FUNC(void, OBCR_CODE_LOCAL) OBCR_ac_SF1(void)
{
    /* SignalConversion generated from: '<S16>/OBCM_MdRq' incorporates:
     *  Constant: '<S103>/Constant'
     *  Merge: '<S8>/Merge_24'
     */
    VeOBCR_e_MdRq_Test = CeOBCR_e_Idle_OBCMdRq;

    /* SignalConversion generated from: '<S16>/OBCM_ChrgEnblRq' incorporates:
     *  Constant: '<S16>/Constant Value4'
     */
    OBCR_ac_B.Gain_eg = false;

    /* SignalConversion generated from: '<S16>/S2_Cmd' incorporates:
     *  Constant: '<S16>/Constant Value1'
     */
    VeOBCR_b_CloseS2CntctrI = false;

    /* SignalConversion generated from: '<S16>/ChrgSysStat' incorporates:
     *  Constant: '<S104>/Constant'
     *  Merge: '<S8>/Merge_3'
     */
    OBCR_ac_B.Merge_3 = CeOBCR_e_PowerUp;

    /* SignalConversion generated from: '<S16>/OBCR_RdyForShtDwn' incorporates:
     *  Constant: '<S16>/Constant Value2'
     */
    OBCR_ac_B.Gain_k1 = true;

    /* SignalConversion generated from: '<S16>/NCR' incorporates:
     *  Constant: '<S16>/Constant Value3'
     */
    VeOBCR_e_NCR = 20;

    /* SignalConversion generated from: '<S16>/ChargingComplete_SF' incorporates:
     *  Constant: '<S16>/Constant Value5'
     */
    VeOBCR_b_ChargingComplete_SF = false;
}

#endif

/*
 * Output and update for action system:
 *    '<S132>/Subsystem'
 *    '<S132>/Subsystem1'
 *    '<S132>/DCNotCon'
 *    '<S132>/DCCON'
 *    '<S132>/DCNC100'
 *    '<S132>/DCCON100'
 */
#if Rte_SysCon_Variant_OBCR_1

static FUNC(void, OBCR_CODE_LOCAL) OBCR_ac_Subsystem(VAR(float32, AUTOMATIC)
    rtu_In1, P2VAR(float32, AUTOMATIC, OBCR_VAR_INIT) rty_Out1)
{
    /* Inport: '<S161>/In1' */
    *rty_Out1 = rtu_In1;
}

#endif

/*
 * Output and update for atomic system:
 *    '<S345>/Stateflow Chart'
 *    '<S617>/Stateflow Chart'
 */
#if Rte_SysCon_Variant_OBCR_1 || Rte_SysCon_Variant_OBCR_2

static FUNC(void, OBCR_CODE_LOCAL) OBCR_ac_StateflowChart(VAR(float32, AUTOMATIC)
    rtu_P_In, P2VAR(B_StateflowChart_OBCR_ac_T, AUTOMATIC, OBCR_VAR_INIT) localB,
    P2VAR(DW_StateflowChart_OBCR_ac_T, AUTOMATIC, OBCR_VAR_INIT) localDW)
{
    float32 tmp;
    float32 tmp_0;

    /* Chart: '<S345>/Stateflow Chart' */
    /* Gateway: OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/Therm_Hyst/Stateflow
       Chart */
    /* During: OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/Therm_Hyst/Stateflow
       Chart */
    if (((uint32)localDW->is_active_c35_OBCR_ac) == 0U)
    {
        /* Entry: OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/Therm_Hyst/Stateflow
           Chart */
        localDW->is_active_c35_OBCR_ac = 1U;

        /* Entry Internal: OBCR_FUNC_MedTED/OBCC/Misc/ThermalBudget/Therm_Hyst/Stateflow
           Chart */
        /* Transition: '<S426>:6' */
        localDW->is_c35_OBCR_ac = OBCR_ac_IN_Budget;

        /* Entry 'Budget': '<S426>:5' */
        localB->P_out = (1.0F - ((float32)
                          Rte_Prm_KeOBCR_P_ThermalHys_Cal1_KeOBCR_P_ThermalHys_Cal1
                          ())) * rtu_P_In;
        localB->VeOBCR_t_Therm_StateTimer = 0.0F;
    }
    else if (((uint32)localDW->is_c35_OBCR_ac) == OBCR_ac_IN_Budget)
    {
        /* During 'Budget': '<S426>:5' */
        tmp = rtu_P_In - localB->P_out;
        if (((tmp < ((rtu_P_In * ((float32)
                                  Rte_Prm_KeOBCR_P_ThermalHys_Cal1_KeOBCR_P_ThermalHys_Cal1
                                  ())) * ((float32)
                Rte_Prm_KeOBCR_P_ThermalHys_Cal2_KeOBCR_P_ThermalHys_Cal2()))) ||
             ((tmp > ((rtu_P_In * ((float32)
                                   Rte_Prm_KeOBCR_P_ThermalHys_Cal1_KeOBCR_P_ThermalHys_Cal1
                                   ())) * ((float32)
                 Rte_Prm_KeOBCR_P_ThermalHys_Cal3_KeOBCR_P_ThermalHys_Cal3()))) &&
              (localB->VeOBCR_t_Therm_StateTimer > ((float32)
                Rte_Prm_KeOBCR_t_ThermHysDbnc_KeOBCR_t_ThermHysDbnc())))) ||
                (localB->VeOBCR_t_Therm_StateTimer > 10000.0F))
        {
            /* Transition: '<S426>:7' */
            /* Transition: '<S426>:8' */
            /* Transition: '<S426>:21' */
            localDW->is_c35_OBCR_ac = OBCR_ac_IN_Budget1;

            /* Entry 'Budget1': '<S426>:23' */
            localB->P_out = (1.0F - ((float32)
                              Rte_Prm_KeOBCR_P_ThermalHys_Cal1_KeOBCR_P_ThermalHys_Cal1
                              ())) * rtu_P_In;
            localB->VeOBCR_t_Therm_StateTimer = 0.0F;
        }
        else
        {
            localB->VeOBCR_t_Therm_StateTimer += 0.025F;
        }
    }
    else
    {
        /* During 'Budget1': '<S426>:23' */
        tmp = rtu_P_In * ((float32)
                          Rte_Prm_KeOBCR_P_ThermalHys_Cal1_KeOBCR_P_ThermalHys_Cal1
                          ());
        tmp_0 = rtu_P_In - localB->P_out;
        if (((tmp_0 < (tmp * ((float32)
                              Rte_Prm_KeOBCR_P_ThermalHys_Cal2_KeOBCR_P_ThermalHys_Cal2
                              ()))) || ((tmp_0 > (tmp * ((float32)
                 Rte_Prm_KeOBCR_P_ThermalHys_Cal3_KeOBCR_P_ThermalHys_Cal3()))) &&
              (localB->VeOBCR_t_Therm_StateTimer > ((float32)
                Rte_Prm_KeOBCR_t_ThermHysDbnc_KeOBCR_t_ThermHysDbnc())))) ||
                (localB->VeOBCR_t_Therm_StateTimer > 10000.0F))
        {
            /* Transition: '<S426>:24' */
            /* Transition: '<S426>:25' */
            /* Transition: '<S426>:26' */
            localDW->is_c35_OBCR_ac = OBCR_ac_IN_Budget;

            /* Entry 'Budget': '<S426>:5' */
            localB->P_out = (1.0F - ((float32)
                              Rte_Prm_KeOBCR_P_ThermalHys_Cal1_KeOBCR_P_ThermalHys_Cal1
                              ())) * rtu_P_In;
            localB->VeOBCR_t_Therm_StateTimer = 0.0F;
        }
        else
        {
            localB->VeOBCR_t_Therm_StateTimer += 0.025F;
        }
    }

    /* End of Chart: '<S345>/Stateflow Chart' */
}

#endif

/* Function for Chart: '<S444>/ChargingLevelDet' */
#if Rte_SysCon_Variant_OBCR_1

static boolean OBCR_ac_FullUnplug(void)
{
    boolean B2;

    /* Graphical Function 'FullUnplug': '<S461>:110' */
    B2 = false;

    /* Switch: '<S6>/Switch59' incorporates:
     *  Switch: '<S6>/Switch33'
     *  Switch: '<S6>/Switch34'
     *  Switch: '<S6>/Switch58'
     */
    /* Transition: '<S461>:112' */
    if ((((((((uint32)VeOBCR_e_EVSE_ProxStat_In) == CeOBCR_e_ProxOut_OBCM) &&
            (((uint32)VeOBCR_e_EVSE_PilotStat_In) == CeOBCR_e_NO_EVSE_OBCM)) &&
            (OBCR_ac_B.TmpSignalConversionAtVeIDCR_U_A < ((float32)
             Rte_Prm_KeOBCR_U_MinValue2TrgrPPI_KeOBCR_U_MinValue2TrgrPPI()))) &&
          (OBCR_ac_B.TmpSignalConversionAtVeIDCR_I_J < ((float32)
            Rte_Prm_KeOBCR_I_MinJ1772ICA_KeOBCR_I_MinJ1772ICA()))) &&
            (!OBCR_ac_B.Flag)) || ((((((uint32)VeOBCR_e_Prox_GBT) ==
            CeIDCR_e_CC_OUT) && (((uint32)VeOBCR_e_TxGBTMsgResponse) ==
            CeIDCR_e_GBTRes_EVSE_Not_Connected)) && (OBCR_ac_B.Logical1_b)) &&
            (OBCR_ac_B.Flag)))
    {
        /* Transition: '<S461>:117' */
        /* Transition: '<S461>:207' */
        B2 = true;

        /* Transition: '<S461>:213' */
    }
    else
    {
        /* Transition: '<S461>:313' */
        /* Transition: '<S461>:395' */
    }

    /* End of Switch: '<S6>/Switch59' */
    return B2;
}

#endif

/* Function for Chart: '<S444>/ChargingLevelDet' */
#if Rte_SysCon_Variant_OBCR_1

static boolean OBCR_ac_GoodConnEst(const boolean *Logical8_d)
{
    boolean B3;
    boolean tmpRead;
    boolean tmpRead_0;
    boolean tmpRead_1;

    /* Graphical Function 'GoodConnEst': '<S461>:155' */
    B3 = false;

    /* Inport: '<Root>/VeIDCR_b_AC_LnHi' */
    /* Transition: '<S461>:160' */
    (void)Rte_Read_VeIDCR_b_AC_LnHi_Value(&tmpRead);

    /* Inport: '<Root>/VeIDCR_b_AC_LnLow' */
    (void)Rte_Read_VeIDCR_b_AC_LnLow_Value(&tmpRead_0);

    /* Inport: '<Root>/VeCHFR_b_ACPrnt_S2Open' */
    (void)Rte_Read_VeCHFR_b_ACPrnt_S2Open_Value(&tmpRead_1);

    /* Switch: '<S6>/Switch59' incorporates:
     *  Switch: '<S6>/Switch33'
     *  Switch: '<S6>/Switch34'
     *  Switch: '<S6>/Switch58'
     */
    if ((((((((((uint32)VeOBCR_e_EVSE_ProxStat_In) == CeOBCR_e_ProxIn_OBCM) &&
              (((uint32)VeOBCR_e_EVSE_PilotStat_In) == CeOBCR_e_CP_DET_EVSE_OBCM))
             && ((OBCR_ac_B.TmpSignalConversionAtVeIDCR_I_J > ((float32)
                Rte_Prm_KeOBCR_I_MinJ1772ICA_KeOBCR_I_MinJ1772ICA())) ||
                 (VeOBCR_b_IDCM_DCCA))) && tmpRead) && tmpRead_0) &&
            (!(*Logical8_d))) && (!tmpRead_1)) || (((((uint32)VeOBCR_e_Prox_GBT)
           == CeIDCR_e_CC_IN) && ((((uint32)VeOBCR_e_TxGBTMsgResponse) !=
            CeIDCR_e_GBTRes_EVSE_Not_Connected) && (((uint32)
             VeOBCR_e_TxGBTMsgResponse) != CeIDCR_e_GBTRes_SNA))) &&
            (OBCR_ac_B.Logical1_b)))
    {
        /* Transition: '<S461>:161' */
        /* Transition: '<S461>:252' */
        B3 = true;

        /* Transition: '<S461>:376' */
    }
    else
    {
        /* Transition: '<S461>:366' */
        /* Transition: '<S461>:397' */
    }

    /* End of Switch: '<S6>/Switch59' */
    return B3;
}

#endif

/* Function for Chart: '<S444>/ChargingLevelDet' */
#if Rte_SysCon_Variant_OBCR_1

static boolean OBCR_ac_PPI_Force2Park(boolean B3, const boolean *Logical8_d)
{
    sint32 tmp;
    boolean B0;
    boolean tmp_0;

    /* Graphical Function 'PPI_Force2Park': '<S461>:94' */
    B0 = false;

    /* Transition: '<S461>:120' */
    tmp = ~((sint32)(B3 ? 1 : 0));
    tmp_0 = !(*Logical8_d);

    /* Switch: '<S6>/Switch58' incorporates:
     *  Switch: '<S6>/Switch33'
     *  Switch: '<S6>/Switch34'
     *  Switch: '<S6>/Switch59'
     */
    if (((((((((((((uint32)VeOBCR_e_EVSE_PilotStat_In) ==
                  CeOBCR_e_CP_DET_EVSE_OBCM) || (((uint32)
                   VeOBCR_e_EVSE_PilotStat_In) == CeOBCR_e_EVSE_NO_AC)) ||
                (((uint32)VeOBCR_e_EVSE_ProxStat_In) == CeOBCR_e_ProxUN_OBCM)) ||
               (((uint32)VeOBCR_e_EVSE_ProxStat_In) == CeOBCR_e_ProxIn_OBCM)) ||
              (((uint32)VeOBCR_e_EVSE_PilotStat_In) == CeOBCR_e_EVSE_Flt)) ||
             (OBCR_ac_B.TmpSignalConversionAtVeIDCR_I_J > ((float32)
               Rte_Prm_KeOBCR_I_MinJ1772ICA1_KeOBCR_I_MinJ1772ICA1()))) ||
            (OBCR_ac_B.TmpSignalConversionAtVeIDCR_U_A > ((float32)
              Rte_Prm_KeOBCR_U_MinValue2TrgrPPI_KeOBCR_U_MinValue2TrgrPPI()))) &&
           (tmp != 0)) && tmp_0) && (((((uint32)VeOBCR_e_EVSE_PilotStat_In) !=
            CeOBCR_e_CP_DET_EVSE_OBCM) || (((uint32)VeOBCR_e_EVSE_ProxStat_In)
            != CeOBCR_e_ProxIn_OBCM)) ||
            (OBCR_ac_B.TmpSignalConversionAtVeIDCR_I_J >= ((float32)
            Rte_Prm_KeOBCR_I_MinJ1772ICA_KeOBCR_I_MinJ1772ICA())))) ||
            (((((((((uint32)VeOBCR_e_Prox_GBT) == CeIDCR_e_CC_IN) && ((((uint32)
                 VeOBCR_e_TxGBTMsgResponse) ==
                CeIDCR_e_GBTRes_EVSE_Not_Connected) || (((uint32)
                 VeOBCR_e_TxGBTMsgResponse) == CeIDCR_e_GBTRes_SNA))) ||
                 ((((uint32)VeOBCR_e_TxGBTMsgResponse) !=
                   CeIDCR_e_GBTRes_EVSE_Not_Connected) && (((uint32)
                VeOBCR_e_Prox_GBT) != CeIDCR_e_CC_IN))) && (tmp != 0)) &&
               ((~((sint32)(OBCR_ac_DW.B1_l ? 1 : 0))) != 0)) && tmp_0) &&
             (OBCR_ac_B.Logical1_b)))
    {
        /* Transition: '<S461>:131' */
        /* Transition: '<S461>:222' */
        B0 = true;

        /* Transition: '<S461>:226' */
    }
    else
    {
        /* Transition: '<S461>:297' */
        /* Transition: '<S461>:394' */
    }

    /* End of Switch: '<S6>/Switch58' */
    return B0;
}

#endif

/* Function for Chart: '<S444>/ChargingLevelDet' */
#if Rte_SysCon_Variant_OBCR_1

static boolean OBCR_ac_PPI_AllowDrive(boolean B3, boolean B0, const boolean
    *Logical8_d)
{
    sint32 tmp;
    boolean B1;

    /* Graphical Function 'PPI_AllowDrive': '<S461>:104' */
    B1 = false;

    /* Transition: '<S461>:124' */
    tmp = ~((sint32)(B3 ? 1 : 0));

    /* Switch: '<S6>/Switch59' incorporates:
     *  Switch: '<S6>/Switch33'
     *  Switch: '<S6>/Switch34'
     *  Switch: '<S6>/Switch58'
     */
    if (((((((((((uint32)VeOBCR_e_EVSE_ProxStat_In) == CeOBCR_e_ProxHi_OBCM) ||
               (((uint32)VeOBCR_e_EVSE_ProxStat_In) == CeOBCR_e_ProxLo_OBCM)) ||
              ((((uint32)VeOBCR_e_EVSE_ProxStat_In) == CeOBCR_e_ProxOut_OBCM) &&
               (((uint32)VeOBCR_e_EVSE_PilotStat_In) == CeOBCR_e_EVSE_HW_Flt))) ||
             (((uint32)VeOBCR_e_EVSE_PilotStat_In) == CeOBCR_e_VOOR_EVSE_OBCM)) ||
            (((uint32)VeOBCR_e_EVSE_ProxStat_In) == CeOBCR_e_ProxVOOR_OBCM)) ||
            (*Logical8_d)) && (tmp != 0)) && ((~((sint32)(B0 ? 1 : 0))) != 0)) ||
        ((((((((uint32)VeOBCR_e_TxGBTMsgResponse) ==
              CeIDCR_e_GBTRes_EVSE_Not_Connected) && (((((uint32)
                 VeOBCR_e_Prox_GBT) == CeIDCR_e_CC_HI) || (((uint32)
                 VeOBCR_e_Prox_GBT) == CeIDCR_e_CC_LO)) || (((uint32)
                VeOBCR_e_Prox_GBT) == CeIDCR_e_CC_FAIL))) || ((((uint32)
               VeOBCR_e_TxGBTMsgResponse) == CeIDCR_e_GBTRes_SNA) && (((uint32)
               VeOBCR_e_Prox_GBT) != CeIDCR_e_CC_IN))) && (tmp != 0)) &&
            (!(*Logical8_d))) && (OBCR_ac_B.Logical1_b)))
    {
        /* Transition: '<S461>:137' */
        /* Transition: '<S461>:240' */
        B1 = true;

        /* Transition: '<S461>:342' */
    }
    else
    {
        /* Transition: '<S461>:339' */
        /* Transition: '<S461>:398' */
    }

    /* End of Switch: '<S6>/Switch59' */
    return B1;
}

#endif

/* Function for Chart: '<S444>/ChargingLevelDet' */
#if Rte_SysCon_Variant_OBCR_1

static void OBCR_ac_IrregularActivity(const boolean *Logical8_d)
{
    OBCR_ac_B.VeOBCR_k_ChargingLevelState = 6;

    /* During 'IrregularActivity': '<S461>:456' */
    if ((OBCR_ac_B.VeOBCR_t_InStateTimerCLSD > ((float32)
            Rte_Prm_KeOBCR_t_DbncTmPPI_KeOBCR_t_DbncTmPPI())) &&
            (OBCR_ac_DW.B1_l))
    {
        /* Transition: '<S461>:468' */
        OBCR_ac_DW.is_c55_OBCR_ac = IN_Partially_Connected_Driving_;

        /* Entry 'Partially_Connected_Driving_Allowed': '<S461>:12' */
        OBCR_ac_B.VeOBCR_k_ChargingLevelState = 2;
        OBCR_ac_B.VeOBCR_t_InStateTimerCLSD = 0.0F;
        OBCR_ac_DW.B2_c = false;
        OBCR_ac_DW.B3_c = false;
        OBCR_ac_DW.B0 = false;
    }
    else if ((OBCR_ac_B.VeOBCR_t_InStateTimerCLSD > ((float32)
               Rte_Prm_KeOBCR_t_DbncTmPPI_KeOBCR_t_DbncTmPPI())) &&
             (OBCR_ac_DW.B0))
    {
        /* Transition: '<S461>:469' */
        OBCR_ac_DW.is_c55_OBCR_ac = IN_Partially_Connected_Drivin_i;

        /* Entry 'Partially_Connected_Driving_not_Allowed': '<S461>:15' */
        OBCR_ac_B.VeOBCR_k_ChargingLevelState = 4;
        OBCR_ac_B.VeOBCR_t_InStateTimerCLSD = 0.0F;
        OBCR_ac_DW.B2_c = false;
        OBCR_ac_DW.B3_c = false;
        OBCR_ac_DW.B1_l = false;
    }
    else if (OBCR_ac_DW.B2_c)
    {
        /* Transition: '<S461>:474' */
        /* Transition: '<S461>:472' */
        /* Transition: '<S461>:39' */
        /* Transition: '<S461>:36' */
        OBCR_ac_DW.is_c55_OBCR_ac = OBCR_ac_IN_NotConnected;

        /* Entry 'NotConnected': '<S461>:6' */
        OBCR_ac_B.VeOBCR_k_ChargingLevelState = 0;
        OBCR_ac_DW.B2_c = false;
        OBCR_ac_DW.B3_c = false;
        OBCR_ac_DW.B0 = false;
        OBCR_ac_DW.B1_l = false;
        OBCR_ac_B.Flag = false;
    }
    else if (OBCR_ac_DW.B3_c)
    {
        /* Transition: '<S461>:479' */
        OBCR_ac_DW.is_c55_OBCR_ac = IN_Good_Connection_Established;

        /* Entry 'Good_Connection_Established': '<S461>:14' */
        OBCR_ac_B.VeOBCR_k_ChargingLevelState = 3;
        OBCR_ac_B.VeOBCR_t_InStateTimerCLSD = 0.0F;
        OBCR_ac_DW.B2_c = false;
        OBCR_ac_DW.B3_c = false;
        OBCR_ac_DW.B0 = false;
        OBCR_ac_DW.B1_l = false;
    }
    else
    {
        OBCR_ac_DW.B2_c = OBCR_ac_FullUnplug();
        OBCR_ac_DW.B3_c = OBCR_ac_GoodConnEst(Logical8_d);
        OBCR_ac_DW.B0 = OBCR_ac_PPI_Force2Park(OBCR_ac_DW.B3_c, Logical8_d);
        OBCR_ac_DW.B1_l = OBCR_ac_PPI_AllowDrive(OBCR_ac_DW.B3_c, OBCR_ac_DW.B0,
            Logical8_d);
        OBCR_ac_B.VeOBCR_t_InStateTimerCLSD += (float32)
            Rte_Prm_HeOBCR_t_FnctRate_HeOBCR_t_FnctRate();
    }
}

#endif

/* Function for Chart: '<S445>/ChrgingSysStsDet' */
#if Rte_SysCon_Variant_OBCR_1

static float32 OBCR_ac_Interrupted(const TeOBCR_e_ChrgSysStat *IntegerDelay1,
    const TeOBCR_e_ChargingLevel *Switch_c)
{
    /* Delay: '<S10>/Integer Delay1' */
    /* Graphical Function 'Interrupted': '<S527>:1525' */
    /* Transition: '<S527>:1560' */
    if (((uint32)(*IntegerDelay1)) == CeOBCR_e_Charging)
    {
        /* Transition: '<S527>:1658' */
        /* Transition: '<S527>:1661' */
        OBCR_ac_DW.temp = 0.0F;

        /* Transition: '<S527>:1664' */
    }
    else
    {
        /* Transition: '<S527>:1666' */
    }

    /* Transition: '<S527>:1665' */
    if (((uint32)(*IntegerDelay1)) == CeOBCR_e_EStop)
    {
        /* Transition: '<S527>:1565' */
        /* Transition: '<S527>:1566' */
        OBCR_ac_DW.temp = 1.0F;

        /* Transition: '<S527>:1567' */
    }
    else
    {
        /* Transition: '<S527>:1564' */
    }

    /* End of Delay: '<S10>/Integer Delay1' */

    /* Switch: '<S462>/Switch' */
    /* Transition: '<S527>:1638' */
    if (((sint32)(*Switch_c)) == 0)
    {
        /* Transition: '<S527>:1645' */
        /* Transition: '<S527>:1650' */
        OBCR_ac_DW.temp = 2.0F;

        /* Transition: '<S527>:1649' */
    }
    else
    {
        /* Transition: '<S527>:1648' */
    }

    /* End of Switch: '<S462>/Switch' */
    /* Transition: '<S527>:1652' */
    return OBCR_ac_DW.temp;
}

#endif

/* Function for Chart: '<S445>/ChrgingSysStsDet' */
#if Rte_SysCon_Variant_OBCR_1

static boolean OBCR_ac_Complete(const TeOBCR_e_ChrgSysStat *IntegerDelay1)
{
    boolean B3;

    /* Graphical Function 'Complete': '<S527>:1523' */
    B3 = false;

    /* Delay: '<S10>/Integer Delay1' */
    /* Transition: '<S527>:1573' */
    if (((uint32)(*IntegerDelay1)) == CeOBCR_e_ChargeComplete)
    {
        /* Transition: '<S527>:1579' */
        /* Transition: '<S527>:1580' */
        B3 = true;

        /* Transition: '<S527>:1581' */
    }
    else
    {
        /* Transition: '<S527>:1578' */
    }

    /* End of Delay: '<S10>/Integer Delay1' */
    return B3;
}

#endif

/* Function for Chart: '<S445>/ChrgingSysStsDet' */
#if Rte_SysCon_Variant_OBCR_1

static boolean OBCR_ac_Charging(const TeOBCR_e_ChrgSysStat *IntegerDelay1)
{
    boolean B1;

    /* Graphical Function 'Charging': '<S527>:1527' */
    B1 = false;

    /* Delay: '<S10>/Integer Delay1' */
    /* Transition: '<S527>:1549' */
    if ((((uint32)(*IntegerDelay1)) == CeOBCR_e_Charging) || (((uint32)
            (*IntegerDelay1)) == CeOBCR_e_ChargingPaused))
    {
        /* Transition: '<S527>:1551' */
        /* Transition: '<S527>:1553' */
        B1 = true;

        /* Transition: '<S527>:1556' */
    }
    else
    {
        /* Transition: '<S527>:1555' */
    }

    /* End of Delay: '<S10>/Integer Delay1' */
    return B1;
}

#endif

/* Model step function for TID1 */
FUNC(void, OBCR_CODE) OBCR_MedTED(void) /* Explicit Task: MedTED */
{
    float32 tmpRead_3;
    TeOBCR_e_ChargingStat_BPCM tmpRead_2;
    TeOBCR_e_EVSE_PilotStat_OBCM tmpRead;
    TeOBCR_e_ProxStat_OBCM tmpRead_0;
    boolean tmpRead_1;
    boolean tmpRead_4;

#if Rte_SysCon_Variant_OBCR_1

    TeESSR_e_EngStartStopSt tmpRead_5;

#endif

    boolean tmpRead_6;
    boolean tmpRead_7;
    boolean tmpRead_8;
    boolean tmpRead_9;
    boolean tmpRead_a;

#if Rte_SysCon_Variant_OBCR_1

    TeHVTR_e_HV_BatCntctrStat tmpRead_b;

#endif

    TeIDCR_e_Prox_GBT tmpRead_e;
    TeIDCR_e_SLACSts tmpRead_c;
    TeIDCR_e_TxGBTMessageRequest tmpRead_g;
    TeIDCR_e_TxGBTMessageResponse tmpRead_f;
    TeOBCR_e_ChrgrModeCmd_OBCM tmpRead_h;
    TeOBCR_e_ChrgrModeCmd_OBCM tmpRead_j;
    TePLTR_e_ShipingMode tmpRead_d;
    TeVTLR_e_DschrgSysSts tmpRead_i;

#if Rte_SysCon_Variant_OBCR_1

    TeTIMR_e_RaceTypeSts tmpRead_k;

#endif

    TeBPCR_e_HVTracBatCntctrConfig tmpRead_l;
    boolean tmpRead_m;

#if Rte_SysCon_Variant_OBCR_1

    float32 tmpRead_n;

#endif

    float32 tmpRead_10;
    float32 tmpRead_11;
    float32 tmpRead_12;
    float32 tmpRead_13;
    float32 tmpRead_14;
    float32 tmpRead_15;
    float32 tmpRead_17;
    float32 tmpRead_1m;
    float32 tmpRead_1n;
    float32 tmpRead_1o;
    float32 tmpRead_1p;
    float32 tmpRead_1s;
    float32 tmpRead_26;
    float32 tmpRead_2b;
    float32 tmpRead_v;
    sint16 tmpRead_16;
    sint16 tmpRead_1d;
    sint16 tmpRead_1e;
    sint16 tmpRead_1f;
    sint16 tmpRead_1g;
    sint16 tmpRead_1h;
    sint16 tmpRead_1i;
    sint16 tmpRead_1j;
    sint16 tmpRead_1l;
    uint16 tmpRead_1v;
    uint16 tmpRead_2m;
    TeOBCR_e_BattPckVoltRchdBST tmpRead_x;
    TeOBCR_e_BattSOCStatus tmpRead_23;
    TeOBCR_e_BattTempStatus tmpRead_22;
    TeOBCR_e_CellVoltageStatus tmpRead_20;
    TeOBCR_e_ChargeportLock_Sts tmpRead_u;
    TeOBCR_e_ChrgCntrlMthd tmpRead_2c;
    TeOBCR_e_ChrgCurrStatus tmpRead_21;
    TeOBCR_e_ChrgrInterruptBST tmpRead_2d;
    TeOBCR_e_DCChrg_TestSts tmpRead_1y;
    TeOBCR_e_DCCntctrCmd tmpRead_1r;
    TeOBCR_e_DC_ChrgTypeCmd tmpRead_2g;
    TeOBCR_e_HVBattBalReq tmpRead_w;
    TeOBCR_e_HVCM_SelAppProtocol tmpRead_2e;
    TeOBCR_e_HVCM_SelPaymentOptn tmpRead_1w;
    TeOBCR_e_MaxCellVoltRchdBST tmpRead_z;
    TeOBCR_e_ProtocolPriority tmpRead_2j;
    TeOBCR_e_ProtocolPriority tmpRead_2k;
    TeOBCR_e_ProtocolPriority tmpRead_2l;
    TeOBCR_e_SOCReachedBST tmpRead_y;
    uint8 tmpRead_q;
    boolean rtb_Logical3_oh;
    boolean tmpRead_18;
    boolean tmpRead_19;
    boolean tmpRead_1a;
    boolean tmpRead_1b;
    boolean tmpRead_1c;
    boolean tmpRead_1k;
    boolean tmpRead_1q;
    boolean tmpRead_1t;
    boolean tmpRead_1u;
    boolean tmpRead_1x;
    boolean tmpRead_1z;
    boolean tmpRead_24;
    boolean tmpRead_25;
    boolean tmpRead_27;
    boolean tmpRead_28;
    boolean tmpRead_29;
    boolean tmpRead_2a;
    boolean tmpRead_2f;
    boolean tmpRead_2h;
    boolean tmpRead_2i;
    boolean tmpRead_o;
    boolean tmpRead_p;
    boolean tmpRead_r;
    boolean tmpRead_s;
    boolean tmpRead_t;

#if Rte_SysCon_Variant_OBCR_1

    boolean rtb_Logical23;

#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean rtb_Logical1_o;

#endif

    boolean rtb_OR1_oy;

#if Rte_SysCon_Variant_OBCR_1

    boolean rtb_TmpSignalConversionAtVeVD_o;

#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean rtb_TmpSignalConversionAtVeIDCR;

#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean rtb_TmpSignalConversionAtVeVDVR;

#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean rtb_Logical26;

#endif

#if Rte_SysCon_Variant_OBCR_1 || Rte_SysCon_Variant_OBCR_2

    float32 rtb_TmpSignalConversionAtVeBP_a;

#endif

#if Rte_SysCon_Variant_OBCR_1 || Rte_SysCon_Variant_OBCR_2

    float32 rtb_TmpSignalConversionAtVeBP_e;

#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean rtb_TmpSignalConversionAtVeFCPR;

#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean rtb_Logical2_bu;

#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean rtb_Switch;

#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean rtb_Logical11_i;

#endif

#if Rte_SysCon_Variant_OBCR_1 || Rte_SysCon_Variant_OBCR_2

    boolean rtb_TmpSignalConversionAtVeHPMR;

#endif

#if Rte_SysCon_Variant_OBCR_1

    sint8 rtPrevAction;

#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 rtb_TmpSignalConversionAtVeHMIR;

#endif

    boolean rtb_TmpSignalConversionAtVeCHFR;

#if Rte_SysCon_Variant_OBCR_1

    boolean rtb_Logical3_f;

#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean rtb_Logical_m;

#endif

#if Rte_SysCon_Variant_OBCR_1 || Rte_SysCon_Variant_OBCR_2

    boolean rtb_UnitDelay_mg;

#endif

    float32 rtb_Switch2_na;
    float32 rtb_Switch37;
    float32 rtb_Switch_nt;
    float32 rtb_TmpSignalConversionAtVeCCCR;
    float32 rtb_VM_Conditional_Signal_ChrgC;
    sint16 rtb_VM_Conditional_Signal_PlugI[15];
    sint16 rtb_VM_Conditional_Signal_InitC[7];
    sint16 rtb_VM_Conditional_Signal_NCR_4;
    boolean rtb_VM_Conditional_Signal_NCR_S[15];
    boolean rtb_AND_ps;
    boolean rtb_VM_Conditional_Signal_ProxP;

#if Rte_SysCon_Variant_OBCR_1 || Rte_SysCon_Variant_OBCR_2

    uint16 rtb_Switch1_jd;

#endif

    boolean rtb_OR1_ei;

#if Rte_SysCon_Variant_OBCR_1

    float32 rtb_Switch7;

#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean rtb_OR1_hj;

#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 rtb_Switch6;

#endif

    boolean rtb_AND_ny;

#if Rte_SysCon_Variant_OBCR_1

    boolean rtb_TmpSignalConversionAtVeCC_h;

#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 rtb_TmpSignalConversionAtVeCC_k;

#endif

    boolean rtb_AND_mk;

#if Rte_SysCon_Variant_OBCR_1

    float32 rtb_Switch1_o2[7];

#endif

    boolean rtb_AND_hc;

#if Rte_SysCon_Variant_OBCR_1 || Rte_SysCon_Variant_OBCR_2

    boolean rtb_TmpSignalConversionAtVeEN_n;

#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 rtb_TmpSignalConversionAtVeHVTR;

#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 rtb_Product1_l;

#endif

#if Rte_SysCon_Variant_OBCR_1 || Rte_SysCon_Variant_OBCR_2

    float32 rtb_Product2;

#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 rtb_Switch2_o;

#endif

    boolean rtb_AND_k3;

#if Rte_SysCon_Variant_OBCR_2

    float32 rtb_TmpSignalConversionAtVeBPCR;

#endif

    boolean rtb_AND_dq;

#if Rte_SysCon_Variant_OBCR_1

    uint16 rtb_Switch1_b5;

#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean rtb_AND_me;

#endif

    float32 rtb_Product21;
    float32 rtb_Product3_b;
    float32 rtb_Sum2_n1;
    float32 rtb_Switch3_oxd;

#if Rte_SysCon_Variant_OBCR_1

    float32 rtb_Sum2_d;

#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 rtb_Multiplication1;

#endif

    float32 rtb_Multiplication1_l;

#if Rte_SysCon_Variant_OBCR_1 || Rte_SysCon_Variant_OBCR_2

    float32 rtb_TmpSignalConversionAtVeENGR;

#endif

#if Rte_SysCon_Variant_OBCR_1 || Rte_SysCon_Variant_OBCR_2

    TePMDR_e_PowerMode rtb_TmpSignalConversionAtVePMDR;

#endif

    TeOBCR_e_ChargingSystemSts rtb_VM_Conditional_Signal_Charg;

#if Rte_SysCon_Variant_OBCR_1

    TeOBCR_e_ChargingSystemSts rtb_Merge_6;

#endif

    TeOBCR_e_ChargeType rtb_VeOBCR_e_ChargeType_Test;
    TeOBCR_e_ChargingLevel rtb_Switch1_ov;
    TeOBCR_e_ChargingLevel rtb_VM_Conditional_Signal_Cha_p;
    TeOBCR_e_ChrgPort_Req rtb_TmpSignalConversionAtVeCPLR;
    TeOBCR_e_ChrgSysStat rtb_VM_Conditional_Signal_ChrgS;
    TeOBCR_e_ChrgrModeCmd_OBCM rtb_VM_Conditional_Signal_OBCM_;
    TeOBCR_e_PwrLimReq rtb_TmpSignalConversionAtVeCC_i;

#if Rte_SysCon_Variant_OBCR_1

    TeTIMR_e_RacePrep rtb_TmpSignalConversionAtVeTIMR;

#endif

#if Rte_SysCon_Variant_OBCR_1 || Rte_SysCon_Variant_OBCR_2

    float32 rtb_TmpSignalConversionAtVeESMR;

#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 rtb_TmpSignalConversionAtVeCC_j;

#endif

#if Rte_SysCon_Variant_OBCR_1

    float32 rtb_TmpSignalConversionAtVeOFCR;

#endif

    boolean IntegerDelay;
    boolean VeOBCR_b_CloseS2Cntctr;

#if Rte_SysCon_Variant_OBCR_1

    TeOBCR_e_ChrgSysStat IntegerDelay1;

#endif

#if Rte_SysCon_Variant_OBCR_1

    TeOBCR_e_ChargingLevel Switch_c;

#endif

    sint32 i;
    TeOBCR_e_HCP_DC_Retry tmp;

#if Rte_SysCon_Variant_OBCR_1

    TeOBCR_e_ChargeType VeOBCR_b_SecureConnEstI_tmp;

#endif

#if Rte_SysCon_Variant_OBCR_1

    TeOBCR_e_ChargingSystemSts rtb_Logical3_n_tmp;

#endif

#if Rte_SysCon_Variant_OBCR_1

    boolean guard1 = false;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/OBCR_FUNC_MedTED'
     */
    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostComm_IDCM_CANC11' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostComm_IDCM_CANC11'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostComm_IDCM_CANC11_Value
        (&OBCR_ac_DW.StatusByte_LostComm_IDCM_CANC11);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommOBCM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommOBCM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommOBCM_Value
        (&OBCR_ac_DW.StatusByte_LostCommOBCM);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommIDCM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommIDCM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommIDCM_Value
        (&OBCR_ac_DW.StatusByte_LostCommIDCM);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommBCCM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommBCCM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommBCCM_Value
        (&OBCR_ac_DW.StatusByte_LostCommBCCM);

    /* SignalConversion generated from: '<S1>/VeCPLR_e_ChrgPort_Req' incorporates:
     *  Inport: '<Root>/VeCPLR_e_ChrgPort_Req'
     */
    (void)Rte_Read_VeCPLR_e_ChrgPort_Req_Value(&rtb_TmpSignalConversionAtVeCPLR);

    /* SignalConversion generated from: '<S1>/VeCCCR_I_MaxAllowedCurr' incorporates:
     *  Inport: '<Root>/VeCCCR_I_MaxAllowedCurr'
     */
    (void)Rte_Read_VeCCCR_I_MaxAllowedCurr_Value
        (&rtb_TmpSignalConversionAtVeCCCR);

    /* SignalConversion generated from: '<S1>/VeCCCR_e_PwrLevSet' incorporates:
     *  Inport: '<Root>/VeCCCR_e_PwrLevSet'
     */
    (void)Rte_Read_VeCCCR_e_PwrLevSet_Value(&rtb_TmpSignalConversionAtVeCC_i);

    /* SignalConversion generated from: '<S1>/VeCHFR_b_ChrgSysFault' incorporates:
     *  Inport: '<Root>/VeCHFR_b_ChrgSysFault'
     */
    (void)Rte_Read_VeCHFR_b_ChrgSysFault_Value(&rtb_TmpSignalConversionAtVeCHFR);

    /* SignalConversion generated from: '<S1>/VeDCCR_e_ChargeProgress' incorporates:
     *  Inport: '<Root>/VeDCCR_e_ChargeProgress'
     */
    (void)Rte_Read_VeDCCR_e_ChargeProgress_Value
        (&OBCR_ac_B.TmpSignalConversionAtVeDCCR_e_C);

    /* SignalConversion generated from: '<S1>/VeBPCR_U_HV_BatVolt' */
#if Rte_SysCon_Variant_OBCR_2

    /* SignalConversion generated from: '<S1>/VeBPCR_U_HV_BatVolt' incorporates:
     *  Inport: '<Root>/VeBPCR_U_HV_BatVolt'
     */
    (void)Rte_Read_VeBPCR_U_HV_BatVolt_Value(&rtb_TmpSignalConversionAtVeBPCR);

#endif

    /* End of SignalConversion generated from: '<S1>/VeBPCR_U_HV_BatVolt' */

    /* SignalConversion generated from: '<S1>/VePMDR_e_PMM_PowerMode' incorporates:
     *  SignalConversion generated from: '<S1>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     *  SignalConversion generated from: '<S1>/VeBPCR_T_BatModTmp'
     *  SignalConversion generated from: '<S1>/VeENGR_T_EngCoolantTemp'
     *  SignalConversion generated from: '<S1>/VeENGR_b_ECT_Sgnl_Rcvd'
     *  SignalConversion generated from: '<S1>/VeESMR_P_BattLTMaxLim'
     */
#if Rte_SysCon_Variant_OBCR_1 || Rte_SysCon_Variant_OBCR_2

    /* SignalConversion generated from: '<S1>/VePMDR_e_PMM_PowerMode' incorporates:
     *  Inport: '<Root>/VePMDR_e_PMM_PowerMode'
     */
    (void)Rte_Read_VePMDR_e_PMM_PowerMode_Value(&rtb_TmpSignalConversionAtVePMDR);

    /* SignalConversion generated from: '<S1>/VeESMR_P_BattLTMaxLim' incorporates:
     *  Inport: '<Root>/VeESMR_P_BattLTMaxLim'
     */
    (void)Rte_Read_VeESMR_P_BattLTMaxLim_Value(&rtb_TmpSignalConversionAtVeESMR);

    /* SignalConversion generated from: '<S1>/VeBPCR_T_BatModTmp' incorporates:
     *  Inport: '<Root>/VeBPCR_T_BatModTmp'
     */
    (void)Rte_Read_VeBPCR_T_BatModTmp_Value(&rtb_TmpSignalConversionAtVeBP_e);

    /* SignalConversion generated from: '<S1>/VeBPCR_Pct_HV_BatPackSOC_Arb' incorporates:
     *  Inport: '<Root>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     */
    (void)Rte_Read_VeBPCR_Pct_HV_BatPackSOC_Arb_Value
        (&rtb_TmpSignalConversionAtVeBP_a);

    /* SignalConversion generated from: '<S1>/VeENGR_T_EngCoolantTemp' incorporates:
     *  Inport: '<Root>/VeENGR_T_EngCoolantTemp'
     */
    (void)Rte_Read_VeENGR_T_EngCoolantTemp_Value
        (&rtb_TmpSignalConversionAtVeENGR);

    /* SignalConversion generated from: '<S1>/VeENGR_b_ECT_Sgnl_Rcvd' incorporates:
     *  Inport: '<Root>/VeENGR_b_ECT_Sgnl_Rcvd'
     */
    (void)Rte_Read_VeENGR_b_ECT_Sgnl_Rcvd_Value(&rtb_TmpSignalConversionAtVeEN_n);

#endif

    /* End of SignalConversion generated from: '<S1>/VePMDR_e_PMM_PowerMode' */

    /* SignalConversion generated from: '<S1>/VeIDCR_b_J1772_S2_Status' incorporates:
     *  Inport: '<Root>/VeIDCR_b_J1772_S2_Status'
     *  Inport: '<Root>/VeVTLR_b_ACSwSts'
     *  SignalConversion generated from: '<S1>/VeCCCR_I_ChrgTypeHWLim'
     *  SignalConversion generated from: '<S1>/VeCCCR_I_PLS_ReducedCurr'
     *  SignalConversion generated from: '<S1>/VeCCCR_b_PwrLevActive'
     *  SignalConversion generated from: '<S1>/VeFCPR_b_FCPS_H2_RefuelSts'
     *  SignalConversion generated from: '<S1>/VeHMIR_Pct_HVBatSOC_HCP'
     *  SignalConversion generated from: '<S1>/VeHPMR_b_BattCntctrOpenPndg'
     *  SignalConversion generated from: '<S1>/VeHVTR_U_HvBattVolt_Min'
     *  SignalConversion generated from: '<S1>/VeIDCR_I_J1772InputCrntAval'
     *  SignalConversion generated from: '<S1>/VeIDCR_U_AC_InputVltOBCM'
     *  SignalConversion generated from: '<S1>/VeIDCR_b_V2XSts'
     *  SignalConversion generated from: '<S1>/VeOFCR_I_ChrgPortOTCrnt'
     *  SignalConversion generated from: '<S1>/VeTIMR_e_RacePrep'
     *  SignalConversion generated from: '<S1>/VeVDVR_b_Secure_V2LConnected'
     *  SignalConversion generated from: '<S1>/VeVDVR_b_Secure_V2VConnected'
     *  SignalConversion generated from: '<S1>/VeVTLR_b_ACSwSts'
     */
#if Rte_SysCon_Variant_OBCR_1

    (void)Rte_Read_VeIDCR_b_J1772_S2_Status_Value
        (&OBCR_ac_B.TmpSignalConversionAtVeIDCR_b_J);

    /* SignalConversion generated from: '<S1>/VeIDCR_I_J1772InputCrntAval' incorporates:
     *  Inport: '<Root>/VeIDCR_I_J1772InputCrntAval'
     *  Inport: '<Root>/VeIDCR_b_J1772_S2_Status'
     */
    (void)Rte_Read_VeIDCR_I_J1772InputCrntAval_Value
        (&OBCR_ac_B.TmpSignalConversionAtVeIDCR_I_J);

    /* SignalConversion generated from: '<S1>/VeIDCR_U_AC_InputVltOBCM' incorporates:
     *  Inport: '<Root>/VeIDCR_U_AC_InputVltOBCM'
     */
    (void)Rte_Read_VeIDCR_U_AC_InputVltOBCM_Value
        (&OBCR_ac_B.TmpSignalConversionAtVeIDCR_U_A);

    /* SignalConversion generated from: '<S1>/VeHPMR_b_BattCntctrOpenPndg' incorporates:
     *  Inport: '<Root>/VeHPMR_b_BattCntctrOpenPndg'
     */
    (void)Rte_Read_VeHPMR_b_BattCntctrOpenPndg_Value
        (&rtb_TmpSignalConversionAtVeHPMR);

    /* SignalConversion generated from: '<S1>/VeOFCR_I_ChrgPortOTCrnt' incorporates:
     *  Inport: '<Root>/VeOFCR_I_ChrgPortOTCrnt'
     */
    (void)Rte_Read_VeOFCR_I_ChrgPortOTCrnt_Value
        (&rtb_TmpSignalConversionAtVeOFCR);

    /* SignalConversion generated from: '<S1>/VeHMIR_Pct_HVBatSOC_HCP' incorporates:
     *  Inport: '<Root>/VeHMIR_Pct_HVBatSOC_HCP'
     */
    (void)Rte_Read_VeHMIR_Pct_HVBatSOC_HCP_Value
        (&rtb_TmpSignalConversionAtVeHMIR);

    /* SignalConversion generated from: '<S1>/VeFCPR_b_FCPS_H2_RefuelSts' incorporates:
     *  Inport: '<Root>/VeFCPR_b_FCPS_H2_RefuelSts'
     */
    (void)Rte_Read_VeFCPR_b_FCPS_H2_RefuelSts_Value
        (&rtb_TmpSignalConversionAtVeFCPR);

    /* SignalConversion generated from: '<S1>/VeIDCR_b_V2XSts' incorporates:
     *  Inport: '<Root>/VeIDCR_b_V2X_Sts'
     */
    (void)Rte_Read_VeIDCR_b_V2X_Sts_Value(&rtb_TmpSignalConversionAtVeIDCR);
    (void)Rte_Read_VeVTLR_b_ACSwSts_Value
        (&OBCR_ac_B.TmpSignalConversionAtVeVTLR_b_A);

    /* SignalConversion generated from: '<S1>/VeHVTR_U_HvBattVolt_Min' incorporates:
     *  Inport: '<Root>/VeHVTR_U_HvBattVolt_Min'
     *  Inport: '<Root>/VeVTLR_b_ACSwSts'
     */
    (void)Rte_Read_VeHVTR_U_HvBattVolt_Min_Value
        (&rtb_TmpSignalConversionAtVeHVTR);

    /* SignalConversion generated from: '<S1>/VeTIMR_e_RacePrep' incorporates:
     *  Inport: '<Root>/VeTIMR_e_RacePrep'
     */
    (void)Rte_Read_VeTIMR_e_RacePrep_Value(&rtb_TmpSignalConversionAtVeTIMR);

    /* SignalConversion generated from: '<S1>/VeCCCR_I_ChrgTypeHWLim' incorporates:
     *  Inport: '<Root>/VeCCCR_I_ChrgTypeHWLim'
     */
    (void)Rte_Read_VeCCCR_I_ChrgTypeHWLim_Value(&rtb_TmpSignalConversionAtVeCC_k);

    /* SignalConversion generated from: '<S1>/VeCCCR_b_PwrLevActive' incorporates:
     *  Inport: '<Root>/VeCCCR_b_PwrLevActive'
     */
    (void)Rte_Read_VeCCCR_b_PwrLevActive_Value(&rtb_TmpSignalConversionAtVeCC_h);

    /* SignalConversion generated from: '<S1>/VeCCCR_I_PLS_ReducedCurr' incorporates:
     *  Inport: '<Root>/VeCCCR_I_PLS_ReducedCurr'
     */
    (void)Rte_Read_VeCCCR_I_PLS_ReducedCurr_Value
        (&rtb_TmpSignalConversionAtVeCC_j);

    /* SignalConversion generated from: '<S1>/VeVDVR_b_Secure_V2VConnected' incorporates:
     *  Inport: '<Root>/VeVDVR_b_Secure_V2VConnected'
     */
    (void)Rte_Read_VeVDVR_b_Secure_V2VConnected_Value
        (&rtb_TmpSignalConversionAtVeVDVR);

    /* SignalConversion generated from: '<S1>/VeVDVR_b_Secure_V2LConnected' incorporates:
     *  Inport: '<Root>/VeVDVR_b_Secure_V2LConnected'
     */
    (void)Rte_Read_VeVDVR_b_Secure_V2LConnected_Value
        (&rtb_TmpSignalConversionAtVeVD_o);

#endif

    /* End of SignalConversion generated from: '<S1>/VeIDCR_b_J1772_S2_Status' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeBPCR_b_HV_AuxLoadOffReq' */
    (void)Rte_Read_VeBPCR_b_HV_AuxLoadOffReq_Value(&rtb_Logical3_oh);

    /* Inport: '<Root>/VeBPCR_e_HVTracBatCntctrConfig' */
    (void)Rte_Read_VeBPCR_e_HVTracBatCntctrConfig_Value(&tmpRead_l);

    /* Inport: '<Root>/VeVTLR_e_DschrgSysSts' */
    (void)Rte_Read_VeVTLR_e_DschrgSysSts_Value(&tmpRead_i);

    /* Inport: '<Root>/VeVTLR_b_DschrgS2Cmd' */
    (void)Rte_Read_VeVTLR_b_DschrgS2Cmd_Value(&rtb_AND_dq);

    /* Inport: '<Root>/VeVTLR_e_DschrgOBCMdRq' */
    (void)Rte_Read_VeVTLR_e_DschrgOBCMdRq_Value(&tmpRead_h);

    /* Inport: '<Root>/VeIDCR_b_V2L_Detected' */
    (void)Rte_Read_VeIDCR_b_V2L_Detected_Value(&rtb_OR1_oy);

    /* Inport: '<Root>/VeIDCR_e_TxGBTMsgRequest' */
    (void)Rte_Read_VeIDCR_e_TxGBTMsgRequest_Value(&tmpRead_g);

    /* Inport: '<Root>/VeIDCR_e_TxGBTMsgResponse' */
    (void)Rte_Read_VeIDCR_e_TxGBTMsgResponse_Value(&tmpRead_f);

    /* Inport: '<Root>/VeIDCR_e_Prox_GBT' */
    (void)Rte_Read_VeIDCR_e_Prox_GBT_Value(&tmpRead_e);

    /* Inport: '<Root>/VePLTR_e_ShippingMode' */
    (void)Rte_Read_VePLTR_e_ShippingMode_Value(&tmpRead_d);

    /* Inport: '<Root>/VeBPCR_b_HV_BatCntctrOpenPending' */
    (void)Rte_Read_VeBPCR_b_HV_BatCntctrOpenPending_Value(&IntegerDelay);

    /* Inport: '<Root>/VeSSDR_b_CabPrecDny_BattCond' */
    (void)Rte_Read_VeSSDR_b_CabPrecDny_BattCond_Value(&rtb_AND_ps);

    /* Inport: '<Root>/VeBPCR_b_HV_BatCntctrOpenReq' */
    (void)Rte_Read_VeBPCR_b_HV_BatCntctrOpenReq_Value(&rtb_OR1_ei);

    /* Inport: '<Root>/VeBPCR_b_HVBat_DC_CntctrReq' */
    (void)Rte_Read_VeBPCR_b_HVBat_DC_CntctrReq_Value(&rtb_AND_ny);

    /* Inport: '<Root>/VeBPCR_b_HVBat_DC_CntctrOpn' */
    (void)Rte_Read_VeBPCR_b_HVBat_DC_CntctrOpn_Value(&rtb_AND_mk);

    /* Inport: '<Root>/VeIDCR_e_SLACSts' */
    (void)Rte_Read_VeIDCR_e_SLACSts_Value(&tmpRead_c);

    /* Inport: '<Root>/VeIDCR_b_IDCM_DCCA' */
    (void)Rte_Read_VeIDCR_b_IDCM_DCCA_Value(&rtb_AND_hc);

    /* Inport: '<Root>/VeIDCR_I_EVSEPeakCurrRip' */
    (void)Rte_Read_VeIDCR_I_EVSEPeakCurrRip_Value(&rtb_Switch_nt);

    /* Inport: '<Root>/VeIDCR_I_EVSECurr_RegTol' */
    (void)Rte_Read_VeIDCR_I_EVSECurr_RegTol_Value(&rtb_Switch3_oxd);

    /* Inport: '<Root>/VeIDCR_I_EVSEOutputCurr' */
    (void)Rte_Read_VeIDCR_I_EVSEOutputCurr_Value(&rtb_Multiplication1_l);

    /* Inport: '<Root>/VeFSCR_b_HoodAjarBatCrit' */
    (void)Rte_Read_VeFSCR_b_HoodAjarBatCrit_Value(&rtb_AND_k3);

    /* Inport: '<Root>/VeBPCR_q_FullAmpHrCap' */
    (void)Rte_Read_VeBPCR_q_FullAmpHrCap_Value(&rtb_Product21);

    /* Inport: '<Root>/VePLTR_b_InFieldMode' */
    (void)Rte_Read_VePLTR_b_InFieldMode_Value(&tmpRead_a);

    /* Inport: '<Root>/VeHSWR_b_HoodOpen' */
    (void)Rte_Read_VeHSWR_b_HoodOpen_Value(&tmpRead_9);

    /* Inport: '<Root>/VeTHMR_b_RdyForShtDwn' */
    (void)Rte_Read_VeTHMR_b_RdyForShtDwn_Value(&tmpRead_8);

    /* Inport: '<Root>/VeSSDR_b_HVBatPerWUThermal' */
    (void)Rte_Read_VeSSDR_b_HVBatPerWUThermal_Value(&tmpRead_7);

    /* Inport: '<Root>/VeHVTR_I_AccPwrModCurr' */
    (void)Rte_Read_VeHVTR_I_AccPwrModCurr_Value(&rtb_Product3_b);

    /* Inport: '<Root>/VeHPMR_b_PropSysActv' */
    (void)Rte_Read_VeHPMR_b_PropSysActv_Value(&tmpRead_6);

    /* Inport: '<Root>/VeSCPR_b_ChargeReq' */
    (void)Rte_Read_VeSCPR_b_ChargeReq_Value(&tmpRead_4);

    /* Inport: '<Root>/VeHVTR_U_HV_BatVoltModMaxArb' */
    (void)Rte_Read_VeHVTR_U_HV_BatVoltModMaxArb_Value(&tmpRead_3);

    /* Inport: '<Root>/VeBPCR_e_ChargingStat_BPCM' */
    (void)Rte_Read_VeBPCR_e_ChargingStat_BPCM_Value(&tmpRead_2);

    /* Inport: '<Root>/VeIDCR_b_ChrgEnblOBCM' */
    (void)Rte_Read_VeIDCR_b_ChrgEnblOBCM_Value(&tmpRead_1);

    /* Inport: '<Root>/VeIDCR_e_ProxStat' */
    (void)Rte_Read_VeIDCR_e_ProxStat_Value(&tmpRead_0);

    /* Inport: '<Root>/VeIDCR_e_EVSE_PilotStat_OBCM' */
    (void)Rte_Read_VeIDCR_e_EVSE_PilotStat_OBCM_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/OBCR_FUNC_MedTED'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/OBCI'
     */
    /* Switch: '<S6>/Switch58' incorporates:
     *  Constant: '<S681>/Calib'
     */
    if (KeOBCR_b_EVSE_PilotStat_Ovrd)
    {
        /* Switch: '<S6>/Switch58' incorporates:
         *  Constant: '<S721>/Calib'
         */
        VeOBCR_e_EVSE_PilotStat_In = KeOBCR_e_EVSE_PilotStat_Val;
    }
    else
    {
        /* Switch: '<S6>/Switch58' incorporates:
         *  Inport: '<Root>/VeIDCR_e_EVSE_PilotStat_OBCM'
         */
        VeOBCR_e_EVSE_PilotStat_In = tmpRead;
    }

    /* End of Switch: '<S6>/Switch58' */

    /* Switch: '<S6>/Switch59' incorporates:
     *  Constant: '<S682>/Calib'
     */
    if (KeOBCR_b_EVSE_ProxStat_Ovrd)
    {
        /* Switch: '<S6>/Switch59' incorporates:
         *  Constant: '<S722>/Calib'
         */
        VeOBCR_e_EVSE_ProxStat_In = KeOBCR_e_EVSE_ProxStat_Val;
    }
    else
    {
        /* Switch: '<S6>/Switch59' incorporates:
         *  Inport: '<Root>/VeIDCR_e_ProxStat'
         */
        VeOBCR_e_EVSE_ProxStat_In = tmpRead_0;
    }

    /* End of Switch: '<S6>/Switch59' */

    /* Switch: '<S6>/Switch3' incorporates:
     *  Constant: '<S703>/Calib'
     *  Constant: '<S704>/Calib'
     */
    if (KeOBCR_b_OBCM_ChrgEnblStsOvrd)
    {
        VeOBCR_b_OBCM_ChrgEnblSts_In = KeOBCR_b_OBCM_ChrgEnblStsVal;
    }
    else
    {
        VeOBCR_b_OBCM_ChrgEnblSts_In = tmpRead_1;
    }

    /* End of Switch: '<S6>/Switch3' */

    /* Switch: '<S6>/Switch15' incorporates:
     *  Constant: '<S669>/Calib'
     */
    if (KeOBCR_b_BPCM_ChrgStatOvrd)
    {
        /* Switch: '<S6>/Switch15' incorporates:
         *  Constant: '<S718>/Calib'
         */
        VeOBCR_e_BPCM_ChrgStat_In = KeOBCR_e_BPCM_ChrgStatVal;
    }
    else
    {
        /* Switch: '<S6>/Switch15' incorporates:
         *  Inport: '<Root>/VeBPCR_e_ChargingStat_BPCM'
         */
        VeOBCR_e_BPCM_ChrgStat_In = tmpRead_2;
    }

    /* End of Switch: '<S6>/Switch15' */

    /* Outputs for Atomic SubSystem: '<S6>/Digital Lowpass Reset Enabled' */
    /* Switch: '<S663>/Switch2' incorporates:
     *  UnitDelay: '<S663>/Unit Delay'
     */
    rtb_Switch2_na = OBCR_ac_DW.UnitDelay_DSTATE_mf;

    /* Switch: '<S663>/Switch1' incorporates:
     *  Constant: '<S729>/Calib'
     *  Product: '<S663>/Multiplication'
     *  Sum: '<S663>/Subtraction'
     *  Sum: '<S663>/Summation'
     */
    VeOBCR_U_HV_BatVoltModMaxArbFil = ((tmpRead_3 - rtb_Switch2_na) *
        KeOBCR_k_LPF_MaxCellVoltCoef) + rtb_Switch2_na;

    /* Update for UnitDelay: '<S663>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_mf = VeOBCR_U_HV_BatVoltModMaxArbFil;

    /* End of Outputs for SubSystem: '<S6>/Digital Lowpass Reset Enabled' */

    /* Switch: '<S6>/Switch1' incorporates:
     *  Constant: '<S672>/Calib'
     */
    if (KeOBCR_b_ChargeReqOvrd)
    {
        /* Switch: '<S6>/Switch1' incorporates:
         *  Constant: '<S673>/Calib'
         */
        VeOBCR_b_ChargeReq = KeOBCR_b_ChargeReqOvrdVal;
    }
    else
    {
        /* Switch: '<S6>/Switch1' */
        VeOBCR_b_ChargeReq = tmpRead_4;
    }

    /* End of Switch: '<S6>/Switch1' */

    /* Switch: '<S6>/Switch4' incorporates:
     *  Constant: '<S705>/Calib'
     */
    if (KeOBCR_b_PSAOvrd)
    {
        /* Switch: '<S6>/Switch4' incorporates:
         *  Constant: '<S706>/Calib'
         */
        VeOBCR_b_PropSysActv = KeOBCR_b_PSAVal;
    }
    else
    {
        /* Switch: '<S6>/Switch4' */
        VeOBCR_b_PropSysActv = tmpRead_6;
    }

    /* End of Switch: '<S6>/Switch4' */

    /* Switch: '<S6>/Switch5' incorporates:
     *  Constant: '<S668>/Calib'
     */
    if (KeOBCR_b_AccCurrOvrd)
    {
        /* Switch: '<S6>/Switch5' incorporates:
         *  Constant: '<S664>/Calib'
         */
        VeOBCR_I_AccCurr = KeOBCR_I_AccCurrVal;
    }
    else
    {
        /* Switch: '<S6>/Switch5' */
        VeOBCR_I_AccCurr = rtb_Product3_b;
    }

    /* End of Switch: '<S6>/Switch5' */

    /* Switch: '<S6>/Switch6' incorporates:
     *  Constant: '<S688>/Calib'
     *  Constant: '<S689>/Calib'
     */
    if (KeOBCR_b_HVPerWUTherm_Ovrd)
    {
        tmpRead_7 = KeOBCR_b_HVPerWUTherm_Val;
    }

    /* End of Switch: '<S6>/Switch6' */

    /* Switch: '<S6>/Switch7' incorporates:
     *  Constant: '<S670>/Calib'
     *  Constant: '<S671>/Calib'
     */
    if (KeOBCR_b_CabPrecDny_BattCond_Ovrd)
    {
        rtb_AND_ps = KeOBCR_b_CabPrecDny_BattCond_Val;
    }

    /* End of Switch: '<S6>/Switch7' */

    /* Logic: '<S6>/Logical1' */
    VeOBCR_b_HVBatPerWUThermal = (tmpRead_7 || rtb_AND_ps);

    /* Switch: '<S6>/Switch8' incorporates:
     *  Constant: '<S713>/Calib'
     */
    if (KeOBCR_b_THMR_RdyOvrd)
    {
        /* Switch: '<S6>/Switch8' incorporates:
         *  Constant: '<S712>/Calib'
         */
        VeOBCR_b_THMR_RdyForShtDwn = KeOBCR_b_THMR_Rdy4ShtDwn;
    }
    else
    {
        /* Switch: '<S6>/Switch8' */
        VeOBCR_b_THMR_RdyForShtDwn = tmpRead_8;
    }

    /* End of Switch: '<S6>/Switch8' */

    /* Switch: '<S6>/Switch9' incorporates:
     *  Constant: '<S697>/Calib'
     */
    if (KeOBCR_b_HoodAjarOvrd)
    {
        /* Switch: '<S6>/Switch9' incorporates:
         *  Constant: '<S698>/Calib'
         */
        VeOBCR_b_HoodAjar = KeOBCR_b_HoodAjarVal;
    }
    else
    {
        /* Switch: '<S6>/Switch9' */
        VeOBCR_b_HoodAjar = tmpRead_9;
    }

    /* End of Switch: '<S6>/Switch9' */

    /* Switch: '<S6>/Switch12' incorporates:
     *  Constant: '<S701>/Calib'
     */
    if (KeOBCR_b_InFieldMdOvrd)
    {
        /* Switch: '<S6>/Switch12' incorporates:
         *  Constant: '<S702>/Calib'
         */
        VeOBCR_b_InFieldMode = KeOBCR_b_InFieldMdVal;
    }
    else
    {
        /* Switch: '<S6>/Switch12' */
        VeOBCR_b_InFieldMode = tmpRead_a;
    }

    /* End of Switch: '<S6>/Switch12' */

    /* Switch: '<S6>/Switch14' incorporates:
     *  Constant: '<S683>/Calib'
     */
    if (KeOBCR_b_FullAmpHrCap_Ovrd)
    {
        /* Switch: '<S6>/Switch14' incorporates:
         *  Constant: '<S730>/Calib'
         */
        VeOBCR_q_BatteryCapacity = KeOBCR_q_FullAmpHrCap_Val;
    }
    else
    {
        /* Switch: '<S6>/Switch14' */
        VeOBCR_q_BatteryCapacity = rtb_Product21;
    }

    /* End of Switch: '<S6>/Switch14' */

    /* Switch: '<S6>/Switch2' incorporates:
     *  Constant: '<S710>/Calib'
     */
    if (KeOBCR_b_THMR_HoodCondOvrd)
    {
        /* Switch: '<S6>/Switch2' incorporates:
         *  Constant: '<S711>/Calib'
         */
        VeOBCR_b_THMRHoodCond = KeOBCR_b_THMR_HoodCondVal;
    }
    else
    {
        /* Switch: '<S6>/Switch2' */
        VeOBCR_b_THMRHoodCond = rtb_AND_k3;
    }

    /* End of Switch: '<S6>/Switch2' */

    /* Switch: '<S6>/Switch23' incorporates:
     *  Constant: '<S679>/Calib'
     */
    if (KeOBCR_b_EVSEOutputCurrOvrd)
    {
        /* Switch: '<S6>/Switch23' incorporates:
         *  Constant: '<S666>/Calib'
         */
        VeOBCR_I_EVSEOutputCurr = KeOBCR_I_EVSEOutputCurrOvrdVal;
    }
    else
    {
        /* Switch: '<S6>/Switch23' */
        VeOBCR_I_EVSEOutputCurr = rtb_Multiplication1_l;
    }

    /* End of Switch: '<S6>/Switch23' */

    /* Switch: '<S6>/Switch29' incorporates:
     *  Constant: '<S678>/Calib'
     */
    if (KeOBCR_b_EVSECurr_RegTolOvrd)
    {
        /* Switch: '<S6>/Switch29' incorporates:
         *  Constant: '<S665>/Calib'
         */
        VeOBCR_I_EVSECurr_RegTol = KeOBCR_I_EVSECurr_RegTolOvrdVal;
    }
    else
    {
        /* Switch: '<S6>/Switch29' */
        VeOBCR_I_EVSECurr_RegTol = rtb_Switch3_oxd;
    }

    /* End of Switch: '<S6>/Switch29' */

    /* Switch: '<S6>/Switch30' incorporates:
     *  Constant: '<S680>/Calib'
     */
    if (KeOBCR_b_EVSEPeakCurrRipOvrd)
    {
        /* Switch: '<S6>/Switch30' incorporates:
         *  Constant: '<S667>/Calib'
         */
        VeOBCR_I_EVSEPeakCurrRip = KeOBCR_I_EVSEPeakCurrRipOvrdVal;
    }
    else
    {
        /* Switch: '<S6>/Switch30' */
        VeOBCR_I_EVSEPeakCurrRip = rtb_Switch_nt;
    }

    /* End of Switch: '<S6>/Switch30' */

    /* Switch: '<S6>/Switch37' incorporates:
     *  Constant: '<S699>/Calib'
     *  Constant: '<S700>/Calib'
     */
    if (KeOBCR_b_IDCM_DCCAOvrd)
    {
        VeOBCR_b_IDCM_DCCA = KeOBCR_b_IDCM_DCCAOvrdVal;
    }
    else
    {
        VeOBCR_b_IDCM_DCCA = rtb_AND_hc;
    }

    /* End of Switch: '<S6>/Switch37' */

    /* Switch: '<S6>/Switch46' incorporates:
     *  Constant: '<S708>/Calib'
     */
    if (KeOBCR_b_SLACStsOvrd)
    {
        /* Switch: '<S6>/Switch46' incorporates:
         *  Constant: '<S725>/Calib'
         */
        VeOBCR_e_SLACSts = KeOBCR_e_SLACStsOvrdVal;
    }
    else
    {
        /* Switch: '<S6>/Switch46' incorporates:
         *  Inport: '<Root>/VeIDCR_e_SLACSts'
         */
        VeOBCR_e_SLACSts = tmpRead_c;
    }

    /* End of Switch: '<S6>/Switch46' */

    /* Switch: '<S6>/Switch51' incorporates:
     *  Constant: '<S684>/Calib'
     */
    if (KeOBCR_b_HVBat_DC_CntctrOpnOvrd)
    {
        /* Switch: '<S6>/Switch51' incorporates:
         *  Constant: '<S685>/Calib'
         */
        VeOBCR_b_HVBat_DC_CntctrOpn = KeOBCR_b_HVBat_DC_CntctrOpnOvrdVal;
    }
    else
    {
        /* Switch: '<S6>/Switch51' */
        VeOBCR_b_HVBat_DC_CntctrOpn = rtb_AND_mk;
    }

    /* End of Switch: '<S6>/Switch51' */

    /* Switch: '<S6>/Switch52' incorporates:
     *  Constant: '<S686>/Calib'
     */
    if (KeOBCR_b_HVBat_DC_CntctrReqOvrd)
    {
        /* Switch: '<S6>/Switch52' incorporates:
         *  Constant: '<S687>/Calib'
         */
        VeOBCR_b_HVBat_DC_CntctrReq = KeOBCR_b_HVBat_DC_CntctrReqOvrdVal;
    }
    else
    {
        /* Switch: '<S6>/Switch52' */
        VeOBCR_b_HVBat_DC_CntctrReq = rtb_AND_ny;
    }

    /* End of Switch: '<S6>/Switch52' */

    /* Switch: '<S6>/Switch55' incorporates:
     *  Constant: '<S694>/Calib'
     */
    if (KeOBCR_b_HV_BatCntctrOpnRqOvrd)
    {
        /* Switch: '<S6>/Switch55' incorporates:
         *  Constant: '<S695>/Calib'
         */
        VeOBCR_b_HV_BatCntctrOpnRq = KeOBCR_b_HV_BatCntctrOpnRqOvrdVal;
    }
    else
    {
        /* Switch: '<S6>/Switch55' */
        VeOBCR_b_HV_BatCntctrOpnRq = rtb_OR1_ei;
    }

    /* End of Switch: '<S6>/Switch55' */

    /* Switch: '<S6>/Switch88' incorporates:
     *  Constant: '<S692>/Calib'
     */
    if (KeOBCR_b_HV_BatCntctrOpenPendingOvrd)
    {
        /* Switch: '<S6>/Switch88' incorporates:
         *  Constant: '<S693>/Calib'
         */
        VeOBCR_b_HVBatCntctrReq = KeOBCR_b_HV_BatCntctrOpenPendingVal;
    }
    else
    {
        /* Switch: '<S6>/Switch88' */
        VeOBCR_b_HVBatCntctrReq = IntegerDelay;
    }

    /* End of Switch: '<S6>/Switch88' */

    /* Switch: '<S6>/Switch89' incorporates:
     *  Constant: '<S709>/Calib'
     */
    if (KeOBCR_b_ShipMdOvrd)
    {
        /* Switch: '<S6>/Switch89' incorporates:
         *  Constant: '<S726>/Calib'
         */
        VeOBCR_e_ShipMd = KeOBCR_e_ShipMdOvrdVal;
    }
    else
    {
        /* Switch: '<S6>/Switch89' incorporates:
         *  Inport: '<Root>/VePLTR_e_ShippingMode'
         */
        VeOBCR_e_ShipMd = tmpRead_d;
    }

    /* End of Switch: '<S6>/Switch89' */

    /* Switch: '<S6>/Switch33' incorporates:
     *  Constant: '<S707>/Calib'
     */
    if (KeOBCR_b_Prox_GBT)
    {
        /* Switch: '<S6>/Switch33' incorporates:
         *  Constant: '<S724>/Calib'
         */
        VeOBCR_e_Prox_GBT = KeOBCR_e_Prox_GBT;
    }
    else
    {
        /* Switch: '<S6>/Switch33' incorporates:
         *  Inport: '<Root>/VeIDCR_e_Prox_GBT'
         */
        VeOBCR_e_Prox_GBT = tmpRead_e;
    }

    /* End of Switch: '<S6>/Switch33' */

    /* Switch: '<S6>/Switch34' incorporates:
     *  Constant: '<S715>/Calib'
     *  Constant: '<S728>/Calib'
     *  Inport: '<Root>/VeIDCR_e_TxGBTMsgResponse'
     */
    if (KeOBCR_b_TxGBTMsgResponse)
    {
        VeOBCR_e_TxGBTMsgResponse = KeOBCR_e_TxGBTMsgResponse;
    }
    else
    {
        VeOBCR_e_TxGBTMsgResponse = tmpRead_f;
    }

    /* End of Switch: '<S6>/Switch34' */

    /* Switch: '<S6>/Switch35' incorporates:
     *  Constant: '<S714>/Calib'
     */
    if (KeOBCR_b_TxGBTMsgRequest)
    {
        /* Switch: '<S6>/Switch35' incorporates:
         *  Constant: '<S727>/Calib'
         */
        VeOBCR_e_TxGBTMsgRequest = KeOBCR_e_TxGBTMsgRequest;
    }
    else
    {
        /* Switch: '<S6>/Switch35' incorporates:
         *  Inport: '<Root>/VeIDCR_e_TxGBTMsgRequest'
         */
        VeOBCR_e_TxGBTMsgRequest = tmpRead_g;
    }

    /* End of Switch: '<S6>/Switch35' */

    /* Switch: '<S6>/Switch50' incorporates:
     *  Constant: '<S716>/Calib'
     */
    if (KeOBCR_b_V2L_DetectedOvrd)
    {
        /* Switch: '<S6>/Switch50' incorporates:
         *  Constant: '<S717>/Calib'
         */
        VeOBCR_b_V2L_Detected = KeOBCR_b_V2L_DetectedVal;
    }
    else
    {
        /* Switch: '<S6>/Switch50' */
        VeOBCR_b_V2L_Detected = rtb_OR1_oy;
    }

    /* End of Switch: '<S6>/Switch50' */

    /* Switch: '<S6>/Switch56' incorporates:
     *  Constant: '<S674>/Calib'
     */
    if (KeOBCR_b_DschrgOBCMdRq)
    {
        /* Switch: '<S6>/Switch56' incorporates:
         *  Constant: '<S719>/Calib'
         */
        VeOBCR_e_DschrgOBCMdRq = KeOBCR_e_DschrgOBCMdRq;
    }
    else
    {
        /* Switch: '<S6>/Switch56' incorporates:
         *  Inport: '<Root>/VeVTLR_e_DschrgOBCMdRq'
         */
        VeOBCR_e_DschrgOBCMdRq = tmpRead_h;
    }

    /* End of Switch: '<S6>/Switch56' */

    /* Switch: '<S6>/Switch57' incorporates:
     *  Constant: '<S675>/Calib'
     */
    if (KeOBCR_b_DschrgS2CmdOvrd)
    {
        /* Switch: '<S6>/Switch57' incorporates:
         *  Constant: '<S676>/Calib'
         */
        VeOBCR_b_DschrgS2Cmd = KeOBCR_b_DschrgS2CmdVal;
    }
    else
    {
        /* Switch: '<S6>/Switch57' */
        VeOBCR_b_DschrgS2Cmd = rtb_AND_dq;
    }

    /* End of Switch: '<S6>/Switch57' */

    /* Switch: '<S6>/Switch87' incorporates:
     *  Constant: '<S677>/Calib'
     */
    if (KeOBCR_b_DschrgSysSts)
    {
        /* Switch: '<S6>/Switch87' incorporates:
         *  Constant: '<S720>/Calib'
         */
        VeOBCR_e_DschrgSysSts = KeOBCR_e_DschrgSysSts;
    }
    else
    {
        /* Switch: '<S6>/Switch87' incorporates:
         *  Inport: '<Root>/VeVTLR_e_DschrgSysSts'
         */
        VeOBCR_e_DschrgSysSts = tmpRead_i;
    }

    /* End of Switch: '<S6>/Switch87' */

    /* Switch: '<S6>/Switch106' incorporates:
     *  Constant: '<S696>/Calib'
     */
    if (KeOBCR_b_HV_TracBatCntctrConfigovrd)
    {
        /* Switch: '<S6>/Switch106' incorporates:
         *  Constant: '<S723>/Calib'
         */
        VeOBCR_e_HV_TracBatCntctrConfig = KeOBCR_e_HV_TracBatCntctrConfigovrdVal;
    }
    else
    {
        /* Switch: '<S6>/Switch106' incorporates:
         *  Inport: '<Root>/VeBPCR_e_HVTracBatCntctrConfig'
         */
        VeOBCR_e_HV_TracBatCntctrConfig = tmpRead_l;
    }

    /* End of Switch: '<S6>/Switch106' */

    /* Switch: '<S6>/Switch107' incorporates:
     *  Constant: '<S690>/Calib'
     */
    if (KeOBCR_b_HV_AuxLoadOffReqovrd)
    {
        /* Switch: '<S6>/Switch107' incorporates:
         *  Constant: '<S691>/Calib'
         */
        VeOBCR_b_HV_AuxLoadOffReq = KeOBCR_b_HV_AuxLoadOffReqovrdVal;
    }
    else
    {
        /* Switch: '<S6>/Switch107' */
        VeOBCR_b_HV_AuxLoadOffReq = rtb_Logical3_oh;
    }

    /* End of Switch: '<S6>/Switch107' */
#if Rte_SysCon_Variant_OBCR_1

    /* Outputs for Function Call SubSystem: '<S1>/OBCC' */
    /* Logic: '<S10>/Logical3' incorporates:
     *  Constant: '<S435>/Constant'
     *  Constant: '<S436>/Constant'
     *  Constant: '<S438>/Calib'
     *  RelationalOperator: '<S10>/Comparison1'
     *  RelationalOperator: '<S10>/Comparison14'
     *  Switch: '<S6>/Switch58'
     *  Switch: '<S6>/Switch59'
     */
    rtb_Logical3_oh = (((((uint32)VeOBCR_e_EVSE_PilotStat_In) !=
                         CeOBCR_e_NO_EVSE_OBCM) || (((uint32)
                          VeOBCR_e_EVSE_ProxStat_In) != CeOBCR_e_ProxOut_OBCM)) ||
                       (KeOBCR_b_EnblPlgInFlg));

    /* Outputs for Atomic SubSystem: '<S10>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S442>/EdgeFalling' */
    /* Logic: '<S589>/AND' incorporates:
     *  Logic: '<S589>/OR1'
     *  UnitDelay: '<S589>/Unit Delay'
     */
    rtb_AND_dq = ((!rtb_Logical3_oh) && (OBCR_ac_DW.UnitDelay_DSTATE_l1));

    /* Update for UnitDelay: '<S589>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_l1 = rtb_Logical3_oh;

    /* End of Outputs for SubSystem: '<S442>/EdgeFalling' */

    /* Switch: '<S442>/Switch' */
    if (rtb_AND_dq)
    {
        /* Switch: '<S442>/Switch' incorporates:
         *  Constant: '<S439>/Calib'
         */
        rtb_Switch_nt = KeOBCR_t_UnplugFlgDbncTmr;
    }
    else
    {
        /* Switch: '<S442>/Switch' incorporates:
         *  Constant: '<S437>/Calib'
         *  Constant: '<S442>/Constant Value1'
         *  MinMax: '<S442>/Minimum'
         *  Sum: '<S442>/Summation'
         *  UnitDelay: '<S442>/Unit Delay'
         */
        rtb_Switch_nt = fmaxf(OBCR_ac_DW.UnitDelay_DSTATE_f - ((float32)
                               Rte_Prm_HeOBCR_t_dT_HeOBCR_t_dT()), 0.0F);
    }

    /* End of Switch: '<S442>/Switch' */
    /* End of Outputs for SubSystem: '<S10>/Turn Off Delay Time' */
    /* End of Outputs for SubSystem: '<S1>/OBCC' */

    /* Inport: '<Root>/VeSSDR_b_DsblHVBattChrg' */
    (void)Rte_Read_VeSSDR_b_DsblHVBattChrg_Value(&rtb_Logical23);

    /* Inport: '<Root>/VeSRAR_b_StpCharging' */
    (void)Rte_Read_VeSRAR_b_StpCharging_Value(&rtb_Logical1_o);

    /* Outputs for Function Call SubSystem: '<S1>/OBCC' */
    /* Outputs for Atomic SubSystem: '<S10>/Turn Off Delay Time' */
    /* Logic: '<S442>/AND' incorporates:
     *  Constant: '<S442>/Constant Value2'
     *  RelationalOperator: '<S442>/Greater  Than'
     */
    OBCR_ac_B.AND_i = (rtb_Logical3_oh || (rtb_Switch_nt > 0.0F));

    /* Update for UnitDelay: '<S442>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_f = rtb_Switch_nt;

    /* End of Outputs for SubSystem: '<S10>/Turn Off Delay Time' */

    /* Logic: '<S24>/Logical23' */
    rtb_Logical23 = !rtb_Logical23;

    /* Logic: '<S24>/Logical1' */
    rtb_Logical1_o = !rtb_Logical1_o;

    /* Outputs for Atomic SubSystem: '<S24>/EdgeRising3' */
    /* Logic: '<S56>/OR1' incorporates:
     *  UnitDelay: '<S56>/Unit Delay'
     */
    rtb_Logical3_oh = !OBCR_ac_DW.UnitDelay_DSTATE_bll;

    /* Update for UnitDelay: '<S56>/Unit Delay' incorporates:
     *  UnitDelay: '<S24>/Unit Delay1'
     */
    OBCR_ac_DW.UnitDelay_DSTATE_bll = OBCR_ac_DW.UnitDelay1_DSTATE_j;

    /* Outputs for Atomic SubSystem: '<S24>/Signal Latch On With Reset' */
    /* Logic: '<S62>/OR1' incorporates:
     *  Constant: '<S57>/Constant'
     *  Logic: '<S56>/AND'
     *  Logic: '<S62>/NOT'
     *  Logic: '<S62>/OR'
     *  RelationalOperator: '<S10>/Comparison1'
     *  RelationalOperator: '<S24>/Comparison4'
     *  Switch: '<S6>/Switch59'
     *  UnitDelay: '<S24>/Unit Delay1'
     *  UnitDelay: '<S62>/Unit Delay'
     */
    rtb_OR1_oy = (((OBCR_ac_DW.UnitDelay1_DSTATE_j) && rtb_Logical3_oh) ||
                  ((((uint32)VeOBCR_e_EVSE_ProxStat_In) == CeOBCR_e_ProxIn_OBCM)
                   && (OBCR_ac_DW.UnitDelay_DSTATE_j2)));

    /* End of Outputs for SubSystem: '<S24>/EdgeRising3' */

    /* Update for UnitDelay: '<S62>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_j2 = rtb_OR1_oy;

    /* End of Outputs for SubSystem: '<S24>/Signal Latch On With Reset' */

    /* Logic: '<S22>/Logical1' incorporates:
     *  Constant: '<S27>/Constant'
     *  Constant: '<S34>/Calib'
     *  Constant: '<S38>/Calib'
     *  RelationalOperator: '<S22>/Comparison2'
     */
    OBCR_ac_B.Logical1_b = ((((uint32)KeOBCR_e_InterMarketsSelection) ==
        CeOBCR_e_China) && (HeOBCR_b_EnableDCGBT));

    /* Logic: '<S4>/Logical2' */
    rtb_Logical3_oh = ((VeOBCR_b_V2L_Detected) ||
                       rtb_TmpSignalConversionAtVeVD_o);

    /* Logic: '<S4>/Logical1' */
    rtb_AND_dq = (rtb_TmpSignalConversionAtVeIDCR ||
                  rtb_TmpSignalConversionAtVeVDVR);

    /* Delay: '<S10>/Integer Delay' */
    IntegerDelay = OBCR_ac_DW.IntegerDelay_DSTATE;

    /* Delay: '<S10>/Integer Delay1' */
    IntegerDelay1 = OBCR_ac_DW.IntegerDelay1_DSTATE;

    /* Logic: '<S541>/Logical5' incorporates:
     *  Constant: '<S566>/Constant'
     *  Constant: '<S567>/Constant'
     *  Logic: '<S541>/Logical7'
     *  RelationalOperator: '<S10>/Comparison1'
     *  RelationalOperator: '<S10>/Comparison14'
     *  RelationalOperator: '<S541>/Comparison1'
     *  RelationalOperator: '<S541>/Comparison5'
     *  Switch: '<S6>/Switch58'
     *  Switch: '<S6>/Switch59'
     */
    rtb_TmpSignalConversionAtVeIDCR = (((((uint32)VeOBCR_e_EVSE_PilotStat_In) ==
        CeOBCR_e_CP_DET_EVSE_OBCM) && (((uint32)VeOBCR_e_EVSE_ProxStat_In) ==
        CeOBCR_e_ProxIn_OBCM)) && ((VeOBCR_b_V2L_Detected) ||
        rtb_TmpSignalConversionAtVeIDCR));

    /* Outputs for Atomic SubSystem: '<S541>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S572>/EdgeRising' */
    /* Logic: '<S573>/AND' incorporates:
     *  Logic: '<S573>/OR1'
     *  UnitDelay: '<S573>/Unit Delay'
     */
    rtb_AND_ps = (rtb_TmpSignalConversionAtVeIDCR &&
                  (!OBCR_ac_DW.UnitDelay_DSTATE_as));

    /* Update for UnitDelay: '<S573>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_as = rtb_TmpSignalConversionAtVeIDCR;

    /* End of Outputs for SubSystem: '<S572>/EdgeRising' */

    /* Switch: '<S572>/Switch1' incorporates:
     *  Constant: '<S570>/Calib'
     *  Constant: '<S572>/Constant Value'
     *  Logic: '<S572>/OR'
     *  Logic: '<S572>/OR1'
     *  MinMax: '<S572>/Minimum'
     *  Sum: '<S572>/Summation'
     *  UnitDelay: '<S572>/Unit Delay'
     */
    if ((!rtb_TmpSignalConversionAtVeIDCR) || rtb_AND_ps)
    {
        /* Switch: '<S572>/Switch1' incorporates:
         *  Constant: '<S572>/Constant Value1'
         */
        rtb_Switch1_jd = 0U;
    }
    else if (KeOBCR_Cnt_SecureConnV2L_Dbnc < ((uint16)(((uint32)
                OBCR_ac_DW.UnitDelay_DSTATE_e) + 1U)))
    {
        /* MinMax: '<S572>/Minimum' incorporates:
         *  Constant: '<S570>/Calib'
         *  Switch: '<S572>/Switch1'
         */
        rtb_Switch1_jd = KeOBCR_Cnt_SecureConnV2L_Dbnc;
    }
    else
    {
        /* Switch: '<S572>/Switch1' incorporates:
         *  Constant: '<S572>/Constant Value'
         *  MinMax: '<S572>/Minimum'
         *  Sum: '<S572>/Summation'
         *  UnitDelay: '<S572>/Unit Delay'
         */
        rtb_Switch1_jd = (uint16)(((uint32)OBCR_ac_DW.UnitDelay_DSTATE_e) + 1U);
    }

    /* End of Switch: '<S572>/Switch1' */

    /* Update for UnitDelay: '<S572>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_e = rtb_Switch1_jd;

    /* Logic: '<S541>/Logical6' incorporates:
     *  Constant: '<S570>/Calib'
     *  Logic: '<S572>/AND'
     *  RelationalOperator: '<S572>/Greater  Than'
     */
    OBCR_ac_B.Logical6 = (((rtb_TmpSignalConversionAtVeIDCR && (rtb_Switch1_jd >=
        KeOBCR_Cnt_SecureConnV2L_Dbnc)) || rtb_TmpSignalConversionAtVeVDVR) ||
                          rtb_TmpSignalConversionAtVeVD_o);

    /* End of Outputs for SubSystem: '<S541>/Turn On Delay Sample' */

    /* If: '<S10>/If' incorporates:
     *  Inport: '<Root>/VeCHFR_v_ModifiedVehSpeed'
     */
    if (OBCR_ac_B.AND_i)
    {
        /* Outputs for IfAction SubSystem: '<S10>/ChrgSysSts_Lev' incorporates:
         *  ActionPort: '<S428>/Action Port'
         */
        /* RelationalOperator: '<S462>/Comparison7' incorporates:
         *  Constant: '<S462>/Constant Value9'
         *  UnitDelay: '<S444>/Unit Delay7'
         */
        VeOBCR_b_ChargingLevelTestSig8 = (2 == OBCR_ac_DW.UnitDelay7_DSTATE);

        /* RelationalOperator: '<S462>/Comparison9' incorporates:
         *  Constant: '<S462>/Constant Value2'
         *  UnitDelay: '<S444>/Unit Delay7'
         */
        VeOBCR_b_ChargingLevelTestSig9 = (4 == OBCR_ac_DW.UnitDelay7_DSTATE);

        /* Outputs for Atomic SubSystem: '<S465>/Hysteresis' */
        /* Switch: '<S481>/Switch1' incorporates:
         *  Constant: '<S487>/Calib'
         *  RelationalOperator: '<S481>/Greater  Than'
         */
        if (OBCR_ac_B.TmpSignalConversionAtVeIDCR_U_A > KeOBCR_U_RSP_VoltageLvl)
        {
            /* Switch: '<S481>/Switch1' incorporates:
             *  Constant: '<S481>/Constant Value'
             */
            rtb_TmpSignalConversionAtVeVDVR = true;
        }
        else
        {
            /* Switch: '<S481>/Switch1' incorporates:
             *  Constant: '<S485>/Calib'
             *  RelationalOperator: '<S481>/Greater  Than1'
             *  UnitDelay: '<S481>/Unit Delay'
             */
            rtb_TmpSignalConversionAtVeVDVR =
                ((OBCR_ac_B.TmpSignalConversionAtVeIDCR_U_A >=
                  KeOBCR_U_LSP_VoltageLvl) && (OBCR_ac_DW.UnitDelay_DSTATE_pa));
        }

        /* End of Switch: '<S481>/Switch1' */

        /* Update for UnitDelay: '<S481>/Unit Delay' */
        OBCR_ac_DW.UnitDelay_DSTATE_pa = rtb_TmpSignalConversionAtVeVDVR;

        /* End of Outputs for SubSystem: '<S465>/Hysteresis' */

        /* Outputs for Atomic SubSystem: '<S465>/Turn On Delay Sample' */
        /* Outputs for Atomic SubSystem: '<S491>/EdgeRising' */
        /* Logic: '<S494>/AND' incorporates:
         *  Logic: '<S494>/OR1'
         *  UnitDelay: '<S494>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeVD_o = (rtb_TmpSignalConversionAtVeVDVR &&
            (!OBCR_ac_DW.UnitDelay_DSTATE_gz));

        /* Update for UnitDelay: '<S494>/Unit Delay' */
        OBCR_ac_DW.UnitDelay_DSTATE_gz = rtb_TmpSignalConversionAtVeVDVR;

        /* End of Outputs for SubSystem: '<S491>/EdgeRising' */

        /* Switch: '<S491>/Switch1' incorporates:
         *  Constant: '<S483>/Calib'
         *  Constant: '<S491>/Constant Value'
         *  Logic: '<S491>/OR'
         *  Logic: '<S491>/OR1'
         *  MinMax: '<S491>/Minimum'
         *  Sum: '<S491>/Summation'
         *  UnitDelay: '<S491>/Unit Delay'
         */
        if ((!rtb_TmpSignalConversionAtVeVDVR) ||
                rtb_TmpSignalConversionAtVeVD_o)
        {
            /* Switch: '<S491>/Switch1' incorporates:
             *  Constant: '<S491>/Constant Value1'
             */
            rtb_Switch1_jd = 0U;
        }
        else if (KeOBCR_Cnt_DbncInputVoltSigCnt < ((uint16)(((uint32)
                    OBCR_ac_DW.UnitDelay_DSTATE_nk) + 1U)))
        {
            /* MinMax: '<S491>/Minimum' incorporates:
             *  Constant: '<S483>/Calib'
             *  Switch: '<S491>/Switch1'
             */
            rtb_Switch1_jd = KeOBCR_Cnt_DbncInputVoltSigCnt;
        }
        else
        {
            /* Switch: '<S491>/Switch1' incorporates:
             *  Constant: '<S491>/Constant Value'
             *  MinMax: '<S491>/Minimum'
             *  Sum: '<S491>/Summation'
             *  UnitDelay: '<S491>/Unit Delay'
             */
            rtb_Switch1_jd = (uint16)(((uint32)OBCR_ac_DW.UnitDelay_DSTATE_nk) +
                1U);
        }

        /* End of Switch: '<S491>/Switch1' */

        /* Logic: '<S491>/AND' incorporates:
         *  Constant: '<S483>/Calib'
         *  RelationalOperator: '<S491>/Greater  Than'
         */
        VeOBCR_b_ChargingLevelTestSig10 = (rtb_TmpSignalConversionAtVeVDVR &&
            (rtb_Switch1_jd >= KeOBCR_Cnt_DbncInputVoltSigCnt));

        /* Update for UnitDelay: '<S491>/Unit Delay' */
        OBCR_ac_DW.UnitDelay_DSTATE_nk = rtb_Switch1_jd;

        /* End of Outputs for SubSystem: '<S465>/Turn On Delay Sample' */

        /* RelationalOperator: '<S465>/Comparison1' incorporates:
         *  Constant: '<S465>/Constant Value14'
         *  UnitDelay: '<S444>/Unit Delay7'
         */
        VeOBCR_b_ChargingLevelTestSig12 = (OBCR_ac_DW.UnitDelay7_DSTATE == 0);

        /* Outputs for Atomic SubSystem: '<S465>/Turn On Delay Sample2' */
        /* Outputs for Atomic SubSystem: '<S493>/EdgeRising' */
        /* UnitDelay: '<S524>/Unit Delay' incorporates:
         *  UnitDelay: '<S496>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeVDVR = OBCR_ac_DW.UnitDelay_DSTATE_ei;

        /* Update for UnitDelay: '<S496>/Unit Delay' */
        OBCR_ac_DW.UnitDelay_DSTATE_ei = VeOBCR_b_ChargingLevelTestSig12;

        /* Switch: '<S493>/Switch1' incorporates:
         *  Constant: '<S484>/Calib'
         *  Constant: '<S493>/Constant Value'
         *  Logic: '<S493>/OR'
         *  Logic: '<S493>/OR1'
         *  Logic: '<S496>/AND'
         *  Logic: '<S496>/OR1'
         *  MinMax: '<S493>/Minimum'
         *  Sum: '<S493>/Summation'
         *  UnitDelay: '<S493>/Unit Delay'
         */
        if ((!VeOBCR_b_ChargingLevelTestSig12) ||
                ((VeOBCR_b_ChargingLevelTestSig12) &&
                 (!rtb_TmpSignalConversionAtVeVDVR)))
        {
            /* Switch: '<S493>/Switch1' incorporates:
             *  Constant: '<S493>/Constant Value1'
             */
            rtb_Switch1_jd = 0U;
        }
        else if (KeOBCR_Cnt_DbncRstChargLvl < ((uint16)(((uint32)
                    OBCR_ac_DW.UnitDelay_DSTATE_h3) + 1U)))
        {
            /* MinMax: '<S493>/Minimum' incorporates:
             *  Constant: '<S484>/Calib'
             *  Switch: '<S493>/Switch1'
             */
            rtb_Switch1_jd = KeOBCR_Cnt_DbncRstChargLvl;
        }
        else
        {
            /* Switch: '<S493>/Switch1' incorporates:
             *  Constant: '<S493>/Constant Value'
             *  MinMax: '<S493>/Minimum'
             *  Sum: '<S493>/Summation'
             *  UnitDelay: '<S493>/Unit Delay'
             */
            rtb_Switch1_jd = (uint16)(((uint32)OBCR_ac_DW.UnitDelay_DSTATE_h3) +
                1U);
        }

        /* End of Switch: '<S493>/Switch1' */
        /* End of Outputs for SubSystem: '<S493>/EdgeRising' */

        /* Logic: '<S493>/AND' incorporates:
         *  Constant: '<S484>/Calib'
         *  RelationalOperator: '<S493>/Greater  Than'
         */
        VeOBCR_b_ChargingLevelTestSig1 = ((VeOBCR_b_ChargingLevelTestSig12) &&
            (rtb_Switch1_jd >= KeOBCR_Cnt_DbncRstChargLvl));

        /* Update for UnitDelay: '<S493>/Unit Delay' */
        OBCR_ac_DW.UnitDelay_DSTATE_h3 = rtb_Switch1_jd;

        /* End of Outputs for SubSystem: '<S465>/Turn On Delay Sample2' */

        /* Outputs for Atomic SubSystem: '<S465>/Signal Latch On With Reset2' */
        /* Outputs for Atomic SubSystem: '<S465>/Signal Latch On With Reset' */
        /* Logic: '<S489>/NOT' incorporates:
         *  Logic: '<S490>/NOT'
         */
        rtb_AND_ps = !VeOBCR_b_ChargingLevelTestSig1;

        /* End of Outputs for SubSystem: '<S465>/Signal Latch On With Reset2' */

        /* Logic: '<S489>/OR1' incorporates:
         *  Logic: '<S489>/NOT'
         *  Logic: '<S489>/OR'
         *  UnitDelay: '<S489>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeVDVR = ((VeOBCR_b_ChargingLevelTestSig10) ||
            (rtb_AND_ps && (OBCR_ac_DW.UnitDelay_DSTATE_ab)));

        /* Update for UnitDelay: '<S489>/Unit Delay' */
        OBCR_ac_DW.UnitDelay_DSTATE_ab = rtb_TmpSignalConversionAtVeVDVR;

        /* End of Outputs for SubSystem: '<S465>/Signal Latch On With Reset' */

        /* Logic: '<S465>/Logical1' incorporates:
         *  Constant: '<S465>/Constant Value10'
         *  RelationalOperator: '<S465>/Comparison2'
         *  UnitDelay: '<S444>/Unit Delay7'
         */
        VeOBCR_b_ChargingLevelTestSig3 = (rtb_TmpSignalConversionAtVeVDVR && (5 ==
            OBCR_ac_DW.UnitDelay7_DSTATE));

        /* Logic: '<S465>/Logical9' incorporates:
         *  DataStoreRead: '<S465>/Data Store Read4'
         */
        rtb_TmpSignalConversionAtVeIDCR = ((VeOBCR_b_ChargingLevelTestSig3) ||
            (OBCR_ac_DW.NeOBCR_b_Lvl2Latch));

        /* Outputs for Atomic SubSystem: '<S465>/Hysteresis1' */
        /* Switch: '<S482>/Switch1' incorporates:
         *  Constant: '<S488>/Calib'
         *  RelationalOperator: '<S482>/Greater  Than'
         */
        if (OBCR_ac_B.TmpSignalConversionAtVeIDCR_U_A > KeOBCR_U_RSP_VoltageLvl1)
        {
            /* Switch: '<S482>/Switch1' incorporates:
             *  Constant: '<S482>/Constant Value'
             */
            rtb_TmpSignalConversionAtVeVDVR = true;
        }
        else
        {
            /* Switch: '<S482>/Switch1' incorporates:
             *  Constant: '<S486>/Calib'
             *  RelationalOperator: '<S482>/Greater  Than1'
             *  UnitDelay: '<S482>/Unit Delay'
             */
            rtb_TmpSignalConversionAtVeVDVR =
                ((OBCR_ac_B.TmpSignalConversionAtVeIDCR_U_A >=
                  KeOBCR_U_LSP_VoltageLvl1) && (OBCR_ac_DW.UnitDelay_DSTATE_oe));
        }

        /* End of Switch: '<S482>/Switch1' */

        /* Update for UnitDelay: '<S482>/Unit Delay' */
        OBCR_ac_DW.UnitDelay_DSTATE_oe = rtb_TmpSignalConversionAtVeVDVR;

        /* End of Outputs for SubSystem: '<S465>/Hysteresis1' */

        /* Outputs for Atomic SubSystem: '<S465>/Turn On Delay Sample1' */
        /* Outputs for Atomic SubSystem: '<S492>/EdgeRising' */
        /* Logic: '<S495>/AND' incorporates:
         *  Logic: '<S495>/OR1'
         *  UnitDelay: '<S495>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeVD_o = (rtb_TmpSignalConversionAtVeVDVR &&
            (!OBCR_ac_DW.UnitDelay_DSTATE_gj));

        /* Update for UnitDelay: '<S495>/Unit Delay' */
        OBCR_ac_DW.UnitDelay_DSTATE_gj = rtb_TmpSignalConversionAtVeVDVR;

        /* End of Outputs for SubSystem: '<S492>/EdgeRising' */

        /* Switch: '<S492>/Switch1' incorporates:
         *  Constant: '<S483>/Calib'
         *  Constant: '<S492>/Constant Value'
         *  Logic: '<S492>/OR'
         *  Logic: '<S492>/OR1'
         *  MinMax: '<S492>/Minimum'
         *  Sum: '<S492>/Summation'
         *  UnitDelay: '<S492>/Unit Delay'
         */
        if ((!rtb_TmpSignalConversionAtVeVDVR) ||
                rtb_TmpSignalConversionAtVeVD_o)
        {
            /* Switch: '<S492>/Switch1' incorporates:
             *  Constant: '<S492>/Constant Value1'
             */
            rtb_Switch1_jd = 0U;
        }
        else if (KeOBCR_Cnt_DbncInputVoltSigCnt < ((uint16)(((uint32)
                    OBCR_ac_DW.UnitDelay_DSTATE_j5) + 1U)))
        {
            /* MinMax: '<S492>/Minimum' incorporates:
             *  Constant: '<S483>/Calib'
             *  Switch: '<S492>/Switch1'
             */
            rtb_Switch1_jd = KeOBCR_Cnt_DbncInputVoltSigCnt;
        }
        else
        {
            /* Switch: '<S492>/Switch1' incorporates:
             *  Constant: '<S492>/Constant Value'
             *  MinMax: '<S492>/Minimum'
             *  Sum: '<S492>/Summation'
             *  UnitDelay: '<S492>/Unit Delay'
             */
            rtb_Switch1_jd = (uint16)(((uint32)OBCR_ac_DW.UnitDelay_DSTATE_j5) +
                1U);
        }

        /* End of Switch: '<S492>/Switch1' */

        /* Logic: '<S492>/AND' incorporates:
         *  Constant: '<S483>/Calib'
         *  RelationalOperator: '<S492>/Greater  Than'
         */
        VeOBCR_b_ChargingLevelTestSig11 = (rtb_TmpSignalConversionAtVeVDVR &&
            (rtb_Switch1_jd >= KeOBCR_Cnt_DbncInputVoltSigCnt));

        /* Update for UnitDelay: '<S492>/Unit Delay' */
        OBCR_ac_DW.UnitDelay_DSTATE_j5 = rtb_Switch1_jd;

        /* End of Outputs for SubSystem: '<S465>/Turn On Delay Sample1' */

        /* Outputs for Atomic SubSystem: '<S465>/Signal Latch On With Reset2' */
        /* Logic: '<S490>/OR1' incorporates:
         *  Logic: '<S490>/OR'
         *  UnitDelay: '<S490>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeVDVR = ((VeOBCR_b_ChargingLevelTestSig11) ||
            (rtb_AND_ps && (OBCR_ac_DW.UnitDelay_DSTATE_by)));

        /* Update for UnitDelay: '<S490>/Unit Delay' */
        OBCR_ac_DW.UnitDelay_DSTATE_by = rtb_TmpSignalConversionAtVeVDVR;

        /* End of Outputs for SubSystem: '<S465>/Signal Latch On With Reset2' */

        /* Logic: '<S465>/Logical8' incorporates:
         *  Constant: '<S465>/Constant Value11'
         *  RelationalOperator: '<S465>/Comparison10'
         *  UnitDelay: '<S444>/Unit Delay7'
         */
        VeOBCR_b_ChargingLevelTestSig2 = (rtb_TmpSignalConversionAtVeVDVR && (5 ==
            OBCR_ac_DW.UnitDelay7_DSTATE));

        /* Logic: '<S465>/Logical7' incorporates:
         *  DataStoreRead: '<S465>/Data Store Read6'
         */
        rtb_TmpSignalConversionAtVeVDVR = ((VeOBCR_b_ChargingLevelTestSig2) ||
            (OBCR_ac_DW.NeOBCR_b_Lvl1Latch));

        /* Logic: '<S459>/Logical Operator' incorporates:
         *  Constant: '<S459>/Constant1'
         *  Constant: '<S459>/Constant2'
         *  DataStoreRead: '<S459>/StatusByte_LostCommOBCM'
         *  RelationalOperator: '<S459>/Relational Operator1'
         *  RelationalOperator: '<S459>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S459>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S459>/Bitwise Operator2'
         */
        VeOBCR_b_PPI2_LOC = (((((sint32)OBCR_ac_DW.StatusByte_LostCommOBCM) & 1)
                              > 0) && ((((uint32)
                                OBCR_ac_DW.StatusByte_LostCommOBCM) & 64U) == 0U));

        /* Logic: '<S428>/Logical8' incorporates:
         *  Constant: '<S449>/Calib'
         *  Constant: '<S450>/Calib'
         *  Constant: '<S451>/Calib'
         *  Constant: '<S452>/Calib'
         *  Constant: '<S457>/Constant1'
         *  Constant: '<S457>/Constant2'
         *  Constant: '<S458>/Constant1'
         *  Constant: '<S458>/Constant2'
         *  Constant: '<S460>/Constant1'
         *  Constant: '<S460>/Constant2'
         *  DataStoreRead: '<S457>/StatusByte_LostCommIDCM'
         *  DataStoreRead: '<S458>/StatusByte_LostComm_IDCM_CANC11'
         *  DataStoreRead: '<S460>/StatusByte_LostCommBCCM'
         *  Logic: '<S428>/Logical1'
         *  Logic: '<S428>/Logical2'
         *  Logic: '<S428>/Logical3'
         *  Logic: '<S428>/Logical4'
         *  Logic: '<S428>/Logical5'
         *  Logic: '<S457>/Logical Operator'
         *  Logic: '<S458>/Logical Operator'
         *  Logic: '<S460>/Logical Operator'
         *  RelationalOperator: '<S457>/Relational Operator1'
         *  RelationalOperator: '<S457>/Relational Operator2'
         *  RelationalOperator: '<S458>/Relational Operator1'
         *  RelationalOperator: '<S458>/Relational Operator2'
         *  RelationalOperator: '<S460>/Relational Operator1'
         *  RelationalOperator: '<S460>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S457>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S457>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S458>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S458>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S460>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S460>/Bitwise Operator2'
         */
        rtb_TmpSignalConversionAtVeVD_o = (((((((((sint32)
            OBCR_ac_DW.StatusByte_LostCommIDCM) & 1) > 0) && ((((uint32)
            OBCR_ac_DW.StatusByte_LostCommIDCM) & 64U) == 0U)) &&
            (KeOBCR_b_LOC_IDCM)) && ((((((sint32)
            OBCR_ac_DW.StatusByte_LostComm_IDCM_CANC11) & 1) > 0) && ((((uint32)
            OBCR_ac_DW.StatusByte_LostComm_IDCM_CANC11) & 64U) == 0U)) !=
            HeOBCR_b_LOCIDCMSecBus)) || ((VeOBCR_b_PPI2_LOC) &&
            (KeOBCR_b_LOC_OBCM))) || ((((((sint32)
            OBCR_ac_DW.StatusByte_LostCommBCCM) & 1) > 0) && ((((uint32)
            OBCR_ac_DW.StatusByte_LostCommBCCM) & 64U) == 0U)) &&
            (HeOBCR_b_LOC_BCCM)));

        /* Chart: '<S444>/ChargingLevelDet' incorporates:
         *  Switch: '<S6>/Switch34'
         */
        /* Gateway: OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/ChargingLevelDet */
        /* During: OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/ChargingLevelDet */
        if (((uint32)OBCR_ac_DW.is_active_c55_OBCR_ac) == 0U)
        {
            /* Entry: OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/ChargingLevelDet */
            OBCR_ac_DW.is_active_c55_OBCR_ac = 1U;

            /* Entry Internal: OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChargingLevDet/ChargingLevelDet */
            /* Transition: '<S461>:87' */
            OBCR_ac_DW.is_c55_OBCR_ac = OBCR_ac_IN_NotConnected;

            /* Entry 'NotConnected': '<S461>:6' */
            OBCR_ac_B.VeOBCR_k_ChargingLevelState = 0;
            OBCR_ac_DW.B2_c = false;
            OBCR_ac_DW.B3_c = false;
            OBCR_ac_DW.B0 = false;
            OBCR_ac_DW.B1_l = false;
            OBCR_ac_B.Flag = false;
        }
        else
        {
            guard1 = false;
            switch (OBCR_ac_DW.is_c55_OBCR_ac)
            {
              case OBC_IN_Connected_Not_Determined:
                OBCR_ac_B.VeOBCR_k_ChargingLevelState = 1;

                /* During 'Connected_Not_Determined': '<S461>:11' */
                if (OBCR_ac_DW.B3_c)
                {
                    /* Transition: '<S461>:55' */
                    OBCR_ac_DW.is_c55_OBCR_ac = IN_Good_Connection_Established;

                    /* Entry 'Good_Connection_Established': '<S461>:14' */
                    OBCR_ac_B.VeOBCR_k_ChargingLevelState = 3;
                    OBCR_ac_B.VeOBCR_t_InStateTimerCLSD = 0.0F;
                    OBCR_ac_DW.B2_c = false;
                    OBCR_ac_DW.B3_c = false;
                    OBCR_ac_DW.B0 = false;
                    OBCR_ac_DW.B1_l = false;
                }
                else if ((OBCR_ac_DW.B0) || (OBCR_ac_DW.B1_l))
                {
                    /* Transition: '<S461>:465' */
                    /* Transition: '<S461>:466' */
                    OBCR_ac_DW.is_c55_OBCR_ac = OBCR_ac_IN_IrregularActivity;

                    /* Entry 'IrregularActivity': '<S461>:456' */
                    OBCR_ac_B.VeOBCR_k_ChargingLevelState = 6;
                    OBCR_ac_B.VeOBCR_t_InStateTimerCLSD = 0.0F;
                    OBCR_ac_DW.B2_c = false;
                    OBCR_ac_DW.B3_c = false;
                    OBCR_ac_DW.B0 = false;
                    OBCR_ac_DW.B1_l = false;
                }
                else if (OBCR_ac_DW.B2_c)
                {
                    /* Transition: '<S461>:38' */
                    /* Transition: '<S461>:39' */
                    /* Transition: '<S461>:36' */
                    OBCR_ac_DW.is_c55_OBCR_ac = OBCR_ac_IN_NotConnected;

                    /* Entry 'NotConnected': '<S461>:6' */
                    OBCR_ac_B.VeOBCR_k_ChargingLevelState = 0;
                    OBCR_ac_DW.B2_c = false;
                    OBCR_ac_DW.B3_c = false;
                    OBCR_ac_DW.B0 = false;
                    OBCR_ac_DW.B1_l = false;
                    OBCR_ac_B.Flag = false;
                }
                else
                {
                    OBCR_ac_DW.B2_c = OBCR_ac_FullUnplug();
                    OBCR_ac_DW.B3_c = OBCR_ac_GoodConnEst
                        (&rtb_TmpSignalConversionAtVeVD_o);
                    OBCR_ac_DW.B0 = OBCR_ac_PPI_Force2Park(OBCR_ac_DW.B3_c,
                        &rtb_TmpSignalConversionAtVeVD_o);
                    OBCR_ac_DW.B1_l = OBCR_ac_PPI_AllowDrive(OBCR_ac_DW.B3_c,
                        OBCR_ac_DW.B0, &rtb_TmpSignalConversionAtVeVD_o);
                    OBCR_ac_B.VeOBCR_t_InStateTimerCLSD += (float32)
                        Rte_Prm_HeOBCR_t_FnctRate_HeOBCR_t_FnctRate();
                }
                break;

              case IN_Good_Connection_Established:
                OBCR_ac_B.VeOBCR_k_ChargingLevelState = 3;

                /* During 'Good_Connection_Established': '<S461>:14' */
                if ((OBCR_ac_B.TmpSignalConversionAtVeIDCR_b_J) || (((uint32)
                        VeOBCR_e_TxGBTMsgResponse) !=
                        CeIDCR_e_GBTRes_EVSE_Not_Connected))
                {
                    /* Transition: '<S461>:80' */
                    OBCR_ac_DW.is_c55_OBCR_ac = IN_S2_ClosedVoltageLevelDetermi;

                    /* Entry 'S2_ClosedVoltageLevelDetermination': '<S461>:13' */
                    OBCR_ac_B.VeOBCR_k_ChargingLevelState = 5;
                    OBCR_ac_B.VeOBCR_t_InStateTimerCLSD = 0.0F;
                    OBCR_ac_DW.B2_c = false;
                    OBCR_ac_DW.B3_c = false;
                    OBCR_ac_DW.B0 = false;
                    OBCR_ac_DW.B1_l = false;
                }
                else if ((OBCR_ac_DW.B0) || (OBCR_ac_DW.B1_l))
                {
                    /* Transition: '<S461>:457' */
                    OBCR_ac_DW.is_c55_OBCR_ac = OBCR_ac_IN_IrregularActivity;

                    /* Entry 'IrregularActivity': '<S461>:456' */
                    OBCR_ac_B.VeOBCR_k_ChargingLevelState = 6;
                    OBCR_ac_B.VeOBCR_t_InStateTimerCLSD = 0.0F;
                    OBCR_ac_DW.B2_c = false;
                    OBCR_ac_DW.B3_c = false;
                    OBCR_ac_DW.B0 = false;
                    OBCR_ac_DW.B1_l = false;
                }
                else if (OBCR_ac_DW.B2_c)
                {
                    /* Transition: '<S461>:51' */
                    /* Transition: '<S461>:52' */
                    OBCR_ac_DW.is_c55_OBCR_ac = OBCR_ac_IN_NotConnected;

                    /* Entry 'NotConnected': '<S461>:6' */
                    OBCR_ac_B.VeOBCR_k_ChargingLevelState = 0;
                    OBCR_ac_DW.B2_c = false;
                    OBCR_ac_DW.B3_c = false;
                    OBCR_ac_DW.B0 = false;
                    OBCR_ac_DW.B1_l = false;
                    OBCR_ac_B.Flag = false;
                }
                else
                {
                    OBCR_ac_DW.B2_c = OBCR_ac_FullUnplug();
                    OBCR_ac_DW.B3_c = OBCR_ac_GoodConnEst
                        (&rtb_TmpSignalConversionAtVeVD_o);
                    OBCR_ac_DW.B0 = OBCR_ac_PPI_Force2Park(OBCR_ac_DW.B3_c,
                        &rtb_TmpSignalConversionAtVeVD_o);
                    OBCR_ac_DW.B1_l = OBCR_ac_PPI_AllowDrive(OBCR_ac_DW.B3_c,
                        OBCR_ac_DW.B0, &rtb_TmpSignalConversionAtVeVD_o);
                    OBCR_ac_B.VeOBCR_t_InStateTimerCLSD += (float32)
                        Rte_Prm_HeOBCR_t_FnctRate_HeOBCR_t_FnctRate();
                }
                break;

              case OBCR_ac_IN_IrregularActivity:
                OBCR_ac_IrregularActivity(&rtb_TmpSignalConversionAtVeVD_o);
                break;

              case OBCR_ac_IN_NotConnected:
                OBCR_ac_B.VeOBCR_k_ChargingLevelState = 0;

                /* During 'NotConnected': '<S461>:6' */
                if ((((OBCR_ac_B.TmpSignalConversionAtVeIDCR_I_J >= ((float32)
                        Rte_Prm_KeOBCR_I_MinJ1772ICA_KeOBCR_I_MinJ1772ICA())) ||
                      (OBCR_ac_B.TmpSignalConversionAtVeIDCR_U_A >= ((float32)
                        Rte_Prm_KeOBCR_U_MinValue2TrgrPPI_KeOBCR_U_MinValue2TrgrPPI
                        ()))) || (((uint32)VeOBCR_e_EVSE_PilotStat_In) !=
                                  CeOBCR_e_NO_EVSE_OBCM)) || (((uint32)
                        VeOBCR_e_EVSE_ProxStat_In) != CeOBCR_e_ProxOut_OBCM))
                {
                    /* Transition: '<S461>:17' */
                    /* Transition: '<S461>:401' */
                    /* Transition: '<S461>:402' */
                    /* Transition: '<S461>:403' */
                    guard1 = true;
                }
                else
                {
                    if (((((uint32)VeOBCR_e_Prox_GBT) != CeIDCR_e_CC_OUT) ||
                            (((uint32)VeOBCR_e_TxGBTMsgResponse) !=
                             CeIDCR_e_GBTRes_EVSE_Not_Connected)) &&
                            (OBCR_ac_B.Logical1_b))
                    {
                        /* Transition: '<S461>:554' */
                        OBCR_ac_B.Flag = true;
                        guard1 = true;
                    }
                }
                break;

              case IN_Partially_Connected_Driving_:
                OBCR_ac_B.VeOBCR_k_ChargingLevelState = 2;

                /* During 'Partially_Connected_Driving_Allowed': '<S461>:12' */
                if (OBCR_ac_DW.B2_c)
                {
                    /* Transition: '<S461>:44' */
                    /* Transition: '<S461>:47' */
                    /* Transition: '<S461>:473' */
                    /* Transition: '<S461>:472' */
                    /* Transition: '<S461>:39' */
                    /* Transition: '<S461>:36' */
                    OBCR_ac_DW.is_c55_OBCR_ac = OBCR_ac_IN_NotConnected;

                    /* Entry 'NotConnected': '<S461>:6' */
                    OBCR_ac_B.VeOBCR_k_ChargingLevelState = 0;
                    OBCR_ac_DW.B2_c = false;
                    OBCR_ac_DW.B3_c = false;
                    OBCR_ac_DW.B0 = false;
                    OBCR_ac_DW.B1_l = false;
                    OBCR_ac_B.Flag = false;
                }
                else if (OBCR_ac_DW.B0)
                {
                    /* Transition: '<S461>:502' */
                    OBCR_ac_DW.is_c55_OBCR_ac = IN_Partially_Connected_Drivin_i;

                    /* Entry 'Partially_Connected_Driving_not_Allowed': '<S461>:15' */
                    OBCR_ac_B.VeOBCR_k_ChargingLevelState = 4;
                    OBCR_ac_B.VeOBCR_t_InStateTimerCLSD = 0.0F;
                    OBCR_ac_DW.B2_c = false;
                    OBCR_ac_DW.B3_c = false;
                    OBCR_ac_DW.B1_l = false;
                }
                else if (OBCR_ac_DW.B3_c)
                {
                    /* Transition: '<S461>:496' */
                    /* Transition: '<S461>:493' */
                    OBCR_ac_DW.is_c55_OBCR_ac = OBCR_ac_IN_IrregularActivity;

                    /* Entry 'IrregularActivity': '<S461>:456' */
                    OBCR_ac_B.VeOBCR_k_ChargingLevelState = 6;
                    OBCR_ac_B.VeOBCR_t_InStateTimerCLSD = 0.0F;
                    OBCR_ac_DW.B2_c = false;
                    OBCR_ac_DW.B3_c = false;
                    OBCR_ac_DW.B0 = false;
                    OBCR_ac_DW.B1_l = false;
                }
                else
                {
                    OBCR_ac_DW.B2_c = OBCR_ac_FullUnplug();
                    OBCR_ac_DW.B3_c = OBCR_ac_GoodConnEst
                        (&rtb_TmpSignalConversionAtVeVD_o);
                    OBCR_ac_DW.B0 = OBCR_ac_PPI_Force2Park(OBCR_ac_DW.B3_c,
                        &rtb_TmpSignalConversionAtVeVD_o);
                    OBCR_ac_B.VeOBCR_t_InStateTimerCLSD += (float32)
                        Rte_Prm_HeOBCR_t_FnctRate_HeOBCR_t_FnctRate();
                }
                break;

              case IN_Partially_Connected_Drivin_i:
                OBCR_ac_B.VeOBCR_k_ChargingLevelState = 4;

                /* During 'Partially_Connected_Driving_not_Allowed': '<S461>:15' */
                if (OBCR_ac_DW.B2_c)
                {
                    /* Transition: '<S461>:43' */
                    /* Transition: '<S461>:45' */
                    /* Transition: '<S461>:47' */
                    /* Transition: '<S461>:473' */
                    /* Transition: '<S461>:472' */
                    /* Transition: '<S461>:39' */
                    /* Transition: '<S461>:36' */
                    OBCR_ac_DW.is_c55_OBCR_ac = OBCR_ac_IN_NotConnected;

                    /* Entry 'NotConnected': '<S461>:6' */
                    OBCR_ac_B.VeOBCR_k_ChargingLevelState = 0;
                    OBCR_ac_DW.B2_c = false;
                    OBCR_ac_DW.B3_c = false;
                    OBCR_ac_DW.B0 = false;
                    OBCR_ac_DW.B1_l = false;
                    OBCR_ac_B.Flag = false;
                }
                else if (OBCR_ac_DW.B3_c)
                {
                    /* Transition: '<S461>:490' */
                    /* Transition: '<S461>:489' */
                    OBCR_ac_DW.is_c55_OBCR_ac = OBCR_ac_IN_IrregularActivity;

                    /* Entry 'IrregularActivity': '<S461>:456' */
                    OBCR_ac_B.VeOBCR_k_ChargingLevelState = 6;
                    OBCR_ac_B.VeOBCR_t_InStateTimerCLSD = 0.0F;
                    OBCR_ac_DW.B2_c = false;
                    OBCR_ac_DW.B3_c = false;
                    OBCR_ac_DW.B0 = false;
                    OBCR_ac_DW.B1_l = false;
                }
                else if (OBCR_ac_DW.B1_l)
                {
                    /* Transition: '<S461>:497' */
                    OBCR_ac_DW.is_c55_OBCR_ac = IN_Partially_Connected_Driving_;

                    /* Entry 'Partially_Connected_Driving_Allowed': '<S461>:12' */
                    OBCR_ac_B.VeOBCR_k_ChargingLevelState = 2;
                    OBCR_ac_B.VeOBCR_t_InStateTimerCLSD = 0.0F;
                    OBCR_ac_DW.B2_c = false;
                    OBCR_ac_DW.B3_c = false;
                    OBCR_ac_DW.B0 = false;
                }
                else
                {
                    OBCR_ac_DW.B2_c = OBCR_ac_FullUnplug();
                    OBCR_ac_DW.B3_c = OBCR_ac_GoodConnEst
                        (&rtb_TmpSignalConversionAtVeVD_o);
                    OBCR_ac_DW.B0 = OBCR_ac_PPI_Force2Park(OBCR_ac_DW.B3_c,
                        &rtb_TmpSignalConversionAtVeVD_o);
                    OBCR_ac_DW.B1_l = OBCR_ac_PPI_AllowDrive(OBCR_ac_DW.B3_c,
                        OBCR_ac_DW.B0, &rtb_TmpSignalConversionAtVeVD_o);
                    OBCR_ac_B.VeOBCR_t_InStateTimerCLSD += (float32)
                        Rte_Prm_HeOBCR_t_FnctRate_HeOBCR_t_FnctRate();
                }
                break;

              default:
                OBCR_ac_B.VeOBCR_k_ChargingLevelState = 5;

                /* During 'S2_ClosedVoltageLevelDetermination': '<S461>:13' */
                if ((OBCR_ac_DW.B0) || (OBCR_ac_DW.B1_l))
                {
                    /* Transition: '<S461>:467' */
                    /* Transition: '<S461>:462' */
                    OBCR_ac_DW.is_c55_OBCR_ac = OBCR_ac_IN_IrregularActivity;

                    /* Entry 'IrregularActivity': '<S461>:456' */
                    OBCR_ac_B.VeOBCR_k_ChargingLevelState = 6;
                    OBCR_ac_B.VeOBCR_t_InStateTimerCLSD = 0.0F;
                    OBCR_ac_DW.B2_c = false;
                    OBCR_ac_DW.B3_c = false;
                    OBCR_ac_DW.B0 = false;
                    OBCR_ac_DW.B1_l = false;
                }
                else if (OBCR_ac_DW.B2_c)
                {
                    /* Transition: '<S461>:83' */
                    /* Transition: '<S461>:82' */
                    /* Transition: '<S461>:52' */
                    OBCR_ac_DW.is_c55_OBCR_ac = OBCR_ac_IN_NotConnected;

                    /* Entry 'NotConnected': '<S461>:6' */
                    OBCR_ac_B.VeOBCR_k_ChargingLevelState = 0;
                    OBCR_ac_DW.B2_c = false;
                    OBCR_ac_DW.B3_c = false;
                    OBCR_ac_DW.B0 = false;
                    OBCR_ac_DW.B1_l = false;
                    OBCR_ac_B.Flag = false;
                }
                else
                {
                    OBCR_ac_DW.B2_c = OBCR_ac_FullUnplug();
                    OBCR_ac_DW.B3_c = OBCR_ac_GoodConnEst
                        (&rtb_TmpSignalConversionAtVeVD_o);
                    OBCR_ac_DW.B0 = OBCR_ac_PPI_Force2Park(OBCR_ac_DW.B3_c,
                        &rtb_TmpSignalConversionAtVeVD_o);
                    OBCR_ac_DW.B1_l = OBCR_ac_PPI_AllowDrive(OBCR_ac_DW.B3_c,
                        OBCR_ac_DW.B0, &rtb_TmpSignalConversionAtVeVD_o);
                    OBCR_ac_B.VeOBCR_t_InStateTimerCLSD += (float32)
                        Rte_Prm_HeOBCR_t_FnctRate_HeOBCR_t_FnctRate();
                }
                break;
            }

            if (guard1)
            {
                OBCR_ac_DW.is_c55_OBCR_ac = OBC_IN_Connected_Not_Determined;

                /* Entry 'Connected_Not_Determined': '<S461>:11' */
                OBCR_ac_B.VeOBCR_k_ChargingLevelState = 1;
                OBCR_ac_B.VeOBCR_t_InStateTimerCLSD = 0.0F;
                OBCR_ac_DW.B2_c = false;
                OBCR_ac_DW.B3_c = false;
                OBCR_ac_DW.B0 = false;
                OBCR_ac_DW.B1_l = false;
            }
        }

        /* End of Chart: '<S444>/ChargingLevelDet' */

        /* Gain: '<S467>/Gain' */
        VeOBCR_b_GBTFlag = OBCR_ac_B.Flag;

        /* RelationalOperator: '<S462>/Comparison5' incorporates:
         *  Constant: '<S462>/Constant Value3'
         *  UnitDelay: '<S444>/Unit Delay7'
         */
        VeOBCR_b_ChargingLevelTestSig6 = (0 == OBCR_ac_DW.UnitDelay7_DSTATE);

        /* Logic: '<S462>/Logical2' incorporates:
         *  Constant: '<S462>/Constant Value1'
         *  Constant: '<S462>/Constant Value5'
         *  Constant: '<S462>/Constant Value7'
         *  RelationalOperator: '<S462>/Comparison3'
         *  RelationalOperator: '<S462>/Comparison4'
         *  RelationalOperator: '<S462>/Comparison6'
         *  UnitDelay: '<S444>/Unit Delay7'
         */
        VeOBCR_b_ChargingLevelTestSig7 = (((3 == OBCR_ac_DW.UnitDelay7_DSTATE) ||
            (1 == OBCR_ac_DW.UnitDelay7_DSTATE)) ||
            (OBCR_ac_DW.UnitDelay7_DSTATE == 6));

        /* Switch: '<S479>/Switch1' incorporates:
         *  Constant: '<S480>/Calib'
         *  Logic: '<S462>/Logical1'
         *  Logic: '<S462>/Logical12'
         *  RelationalOperator: '<S462>/Comparison8'
         *  Switch: '<S479>/Switch2'
         *  Switch: '<S479>/Switch3'
         *  Switch: '<S479>/Switch4'
         *  Switch: '<S479>/Switch5'
         *  Switch: '<S479>/Switch6'
         *  Switch: '<S479>/Switch7'
         *  UnitDelay: '<S444>/Unit Delay7'
         */
        if (VeOBCR_b_ChargingLevelTestSig8)
        {
            /* Switch: '<S479>/Switch1' incorporates:
             *  Constant: '<S474>/Constant'
             */
            rtb_Switch1_ov = CeOBCR_e_PartialPlugDrvAlwd;
        }
        else if (VeOBCR_b_ChargingLevelTestSig9)
        {
            /* Switch: '<S479>/Switch2' incorporates:
             *  Constant: '<S475>/Constant'
             *  Switch: '<S479>/Switch1'
             */
            rtb_Switch1_ov = CeOBCR_e_PartialPlugInPrkF;
        }
        else if (rtb_TmpSignalConversionAtVeIDCR)
        {
            /* Switch: '<S479>/Switch3' incorporates:
             *  Constant: '<S473>/Constant'
             *  Switch: '<S479>/Switch1'
             *  Switch: '<S479>/Switch2'
             */
            rtb_Switch1_ov = CeOBCR_e_ChargingLvlAC2;
        }
        else if (rtb_TmpSignalConversionAtVeVDVR)
        {
            /* Switch: '<S479>/Switch5' incorporates:
             *  Constant: '<S472>/Constant'
             *  Switch: '<S479>/Switch1'
             *  Switch: '<S479>/Switch2'
             *  Switch: '<S479>/Switch3'
             */
            rtb_Switch1_ov = CeOBCR_e_ChargingLvlAC1;
        }
        else if (((VeOBCR_b_GBTFlag) || (VeOBCR_b_IDCM_DCCA)) &&
                 (KeOBCR_k_DCChrgPrtPPI == ((float32)
                   OBCR_ac_DW.UnitDelay7_DSTATE)))
        {
            /* Switch: '<S479>/Switch6' incorporates:
             *  Constant: '<S477>/Constant'
             *  Switch: '<S479>/Switch1'
             *  Switch: '<S479>/Switch2'
             *  Switch: '<S479>/Switch3'
             *  Switch: '<S479>/Switch5'
             */
            rtb_Switch1_ov = CeOBCR_e_ChargingLvlDC2;
        }
        else if (VeOBCR_b_ChargingLevelTestSig6)
        {
            /* Switch: '<S479>/Switch4' incorporates:
             *  Constant: '<S471>/Constant'
             *  Switch: '<S479>/Switch1'
             *  Switch: '<S479>/Switch2'
             *  Switch: '<S479>/Switch3'
             *  Switch: '<S479>/Switch5'
             *  Switch: '<S479>/Switch6'
             */
            rtb_Switch1_ov = CeOBCR_e_ChargingLvlDefault;
        }
        else if (VeOBCR_b_ChargingLevelTestSig7)
        {
            /* Switch: '<S479>/Switch7' incorporates:
             *  Constant: '<S476>/Constant'
             *  Switch: '<S479>/Switch1'
             *  Switch: '<S479>/Switch2'
             *  Switch: '<S479>/Switch3'
             *  Switch: '<S479>/Switch4'
             *  Switch: '<S479>/Switch5'
             *  Switch: '<S479>/Switch6'
             */
            rtb_Switch1_ov = CeOBCR_e_PlugInNotDetermined;
        }
        else
        {
            /* Switch: '<S479>/Switch1' incorporates:
             *  Switch: '<S479>/Switch2'
             *  Switch: '<S479>/Switch3'
             *  Switch: '<S479>/Switch4'
             *  Switch: '<S479>/Switch5'
             *  Switch: '<S479>/Switch6'
             *  UnitDelay: '<S479>/Unit Delay'
             */
            rtb_Switch1_ov = OBCR_ac_DW.UnitDelay_DSTATE_iir;
        }

        /* End of Switch: '<S479>/Switch1' */

        /* Switch: '<S462>/Switch' */
        if (OBCR_ac_B.Logical6)
        {
            /* Switch: '<S462>/Switch' incorporates:
             *  Constant: '<S478>/Constant'
             */
            Switch_c = CeOBCR_e_ChargingLvlDefault;
        }
        else
        {
            /* Switch: '<S462>/Switch' incorporates:
             *  Switch: '<S479>/Switch1'
             */
            Switch_c = rtb_Switch1_ov;
        }

        /* End of Switch: '<S462>/Switch' */

        /* DataTypeConversion: '<S462>/Data Type Conversion' incorporates:
         *  DataStoreWrite: '<S462>/Data Store Write'
         *  Switch: '<S462>/Switch'
         */
        EeOBCR_e_ChargingLevel = Switch_c;

        /* Switch: '<S465>/Switch15' */
        VeOBCR_b_ChargLvl2 = (rtb_AND_ps && rtb_TmpSignalConversionAtVeIDCR);

        /* DataStoreWrite: '<S465>/Data Store Write1' */
        OBCR_ac_DW.NeOBCR_b_Lvl2Latch = VeOBCR_b_ChargLvl2;

        /* Switch: '<S465>/Switch' */
        VeOBCR_b_ChargLvl1 = (rtb_AND_ps && rtb_TmpSignalConversionAtVeVDVR);

        /* DataStoreWrite: '<S465>/Data Store Write2' */
        OBCR_ac_DW.NeOBCR_b_Lvl1Latch = VeOBCR_b_ChargLvl1;

        /* Outputs for Atomic SubSystem: '<S466>/Turn On Delay Sample3' */
        /* Outputs for Atomic SubSystem: '<S507>/EdgeRising' */
        /* Logic: '<S509>/AND' incorporates:
         *  Logic: '<S509>/OR1'
         *  UnitDelay: '<S509>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeIDCR = !OBCR_ac_DW.UnitDelay_DSTATE_cr;

        /* Update for UnitDelay: '<S509>/Unit Delay' incorporates:
         *  Constant: '<S466>/TRUE Constant'
         */
        OBCR_ac_DW.UnitDelay_DSTATE_cr = true;

        /* End of Outputs for SubSystem: '<S507>/EdgeRising' */

        /* Switch: '<S507>/Switch1' incorporates:
         *  Constant: '<S502>/Calib'
         *  Constant: '<S507>/Constant Value'
         *  Logic: '<S507>/OR'
         *  MinMax: '<S507>/Minimum'
         *  Sum: '<S507>/Summation'
         *  UnitDelay: '<S507>/Unit Delay'
         */
        if (rtb_TmpSignalConversionAtVeIDCR)
        {
            /* Switch: '<S507>/Switch1' incorporates:
             *  Constant: '<S507>/Constant Value1'
             */
            rtb_Switch1_jd = 0U;
        }
        else if (KeOBCR_Cnt_DbncPlugInLock < ((uint16)(((uint32)
                    OBCR_ac_DW.UnitDelay_DSTATE_hk) + 1U)))
        {
            /* MinMax: '<S507>/Minimum' incorporates:
             *  Constant: '<S502>/Calib'
             *  Switch: '<S507>/Switch1'
             */
            rtb_Switch1_jd = KeOBCR_Cnt_DbncPlugInLock;
        }
        else
        {
            /* Switch: '<S507>/Switch1' incorporates:
             *  Constant: '<S507>/Constant Value'
             *  MinMax: '<S507>/Minimum'
             *  Sum: '<S507>/Summation'
             *  UnitDelay: '<S507>/Unit Delay'
             */
            rtb_Switch1_jd = (uint16)(((uint32)OBCR_ac_DW.UnitDelay_DSTATE_hk) +
                1U);
        }

        /* End of Switch: '<S507>/Switch1' */

        /* Logic: '<S507>/AND' incorporates:
         *  Constant: '<S502>/Calib'
         *  RelationalOperator: '<S507>/Greater  Than'
         */
        VeOBCR_b_GoodConn_Test2 = (rtb_Switch1_jd >= KeOBCR_Cnt_DbncPlugInLock);

        /* Update for UnitDelay: '<S507>/Unit Delay' */
        OBCR_ac_DW.UnitDelay_DSTATE_hk = rtb_Switch1_jd;

        /* End of Outputs for SubSystem: '<S466>/Turn On Delay Sample3' */

        /* Switch: '<S466>/Switch1' */
        if (VeOBCR_b_GoodConn_Test2)
        {
            /* Switch: '<S466>/Switch1' incorporates:
             *  Constant: '<S466>/FALSE Constant'
             */
            VeOBCR_b_GoodConn_Test3 = false;
        }
        else
        {
            /* Switch: '<S466>/Switch1' incorporates:
             *  DataStoreRead: '<S466>/Data Store Read'
             */
            VeOBCR_b_GoodConn_Test3 = OBCR_ac_DW.NeOBCR_b_GoodConnEst;
        }

        /* End of Switch: '<S466>/Switch1' */

        /* Logic: '<S466>/Logical Operator' incorporates:
         *  Constant: '<S497>/Constant'
         *  Constant: '<S498>/Constant'
         *  Constant: '<S499>/Constant'
         *  Constant: '<S500>/Constant'
         *  Constant: '<S501>/Constant'
         *  Constant: '<S504>/Calib'
         *  Constant: '<S505>/Calib'
         *  RelationalOperator: '<S10>/Comparison1'
         *  RelationalOperator: '<S10>/Comparison14'
         *  RelationalOperator: '<S466>/Comparison11'
         *  RelationalOperator: '<S466>/Comparison12'
         *  RelationalOperator: '<S466>/Comparison13'
         *  RelationalOperator: '<S466>/Comparison14'
         *  RelationalOperator: '<S466>/Comparison15'
         *  RelationalOperator: '<S466>/Comparison16'
         *  RelationalOperator: '<S466>/Comparison17'
         *  Switch: '<S6>/Switch58'
         *  Switch: '<S6>/Switch59'
         */
        VeOBCR_b_GoodConn_Test1 = ((((((((((uint32)VeOBCR_e_EVSE_ProxStat_In) ==
            CeOBCR_e_ProxIn_OBCM) || (((uint32)VeOBCR_e_EVSE_ProxStat_In) ==
            CeOBCR_e_ProxUN_OBCM)) || (((uint32)VeOBCR_e_EVSE_PilotStat_In) ==
            CeOBCR_e_CP_DET_EVSE_OBCM)) || (((uint32)VeOBCR_e_EVSE_PilotStat_In)
            == CeOBCR_e_EVSE_Flt)) || (((uint32)VeOBCR_e_EVSE_PilotStat_In) ==
            CeOBCR_e_EVSE_NO_AC)) || (OBCR_ac_B.TmpSignalConversionAtVeIDCR_I_J >
            ((float32)Rte_Prm_KeOBCR_I_MinJ1772ICA_KeOBCR_I_MinJ1772ICA()))) ||
            (OBCR_ac_B.TmpSignalConversionAtVeIDCR_U_A > ((float32)
            Rte_Prm_KeOBCR_U_MinValue2TrgrPPI_KeOBCR_U_MinValue2TrgrPPI()))) ||
            (VeOBCR_b_GoodConn_Test3));

        /* Logic: '<S466>/Logical13' incorporates:
         *  Logic: '<S470>/Logical1'
         */
        rtb_AND_ps = !rtb_TmpSignalConversionAtVeVD_o;

        /* Logic: '<S466>/Logical Operator1' incorporates:
         *  DataStoreWrite: '<S466>/Data Store Write'
         *  Logic: '<S466>/Logical13'
         */
        OBCR_ac_DW.NeOBCR_b_GoodConnEst = ((VeOBCR_b_GoodConn_Test1) &&
            rtb_AND_ps);

        /* Outputs for Atomic SubSystem: '<S466>/Turn Off Delay Sample1' */
        /* Outputs for Atomic SubSystem: '<S506>/EdgeFalling1' */
        /* Logic: '<S508>/AND' incorporates:
         *  DataStoreWrite: '<S466>/Data Store Write'
         *  Logic: '<S508>/OR1'
         *  UnitDelay: '<S508>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeIDCR = ((!OBCR_ac_DW.NeOBCR_b_GoodConnEst) &&
            (OBCR_ac_DW.UnitDelay_DSTATE_ii));

        /* Update for UnitDelay: '<S508>/Unit Delay' incorporates:
         *  DataStoreWrite: '<S466>/Data Store Write'
         */
        OBCR_ac_DW.UnitDelay_DSTATE_ii = OBCR_ac_DW.NeOBCR_b_GoodConnEst;

        /* End of Outputs for SubSystem: '<S506>/EdgeFalling1' */

        /* Switch: '<S506>/Switch' */
        if (rtb_TmpSignalConversionAtVeIDCR)
        {
            /* Switch: '<S506>/Switch' incorporates:
             *  Constant: '<S503>/Calib'
             */
            rtb_Switch1_jd = KeOBCR_Cnt_DlyPlugInLock;
        }
        else
        {
            /* Sum: '<S506>/Summation' incorporates:
             *  Constant: '<S506>/Constant Value'
             *  UnitDelay: '<S506>/Unit Delay'
             */
            i = ((sint32)OBCR_ac_DW.UnitDelay_DSTATE_n) - 1;
            if ((((sint32)OBCR_ac_DW.UnitDelay_DSTATE_n) - 1) < 0)
            {
                i = 0;
            }

            /* Switch: '<S506>/Switch' incorporates:
             *  Sum: '<S506>/Summation'
             */
            rtb_Switch1_jd = (uint16)i;
        }

        /* End of Switch: '<S506>/Switch' */
        /* End of Outputs for SubSystem: '<S466>/Turn Off Delay Sample1' */
        /* End of Outputs for SubSystem: '<S10>/ChrgSysSts_Lev' */
        (void)Rte_Read_VeCHFR_v_ModifiedVehSpeed_Value(&rtb_Switch7);

        /* Outputs for IfAction SubSystem: '<S10>/ChrgSysSts_Lev' incorporates:
         *  ActionPort: '<S428>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S466>/Turn Off Delay Sample1' */
        /* Update for UnitDelay: '<S506>/Unit Delay' incorporates:
         *  Inport: '<Root>/VeCHFR_v_ModifiedVehSpeed'
         */
        OBCR_ac_DW.UnitDelay_DSTATE_n = rtb_Switch1_jd;

        /* End of Outputs for SubSystem: '<S466>/Turn Off Delay Sample1' */

        /* Logic: '<S470>/Logical2' incorporates:
         *  Constant: '<S512>/Constant'
         *  Constant: '<S516>/Constant'
         *  Constant: '<S517>/Constant'
         *  Logic: '<S470>/Logical'
         *  RelationalOperator: '<S470>/Comparison1'
         *  RelationalOperator: '<S470>/Comparison4'
         *  RelationalOperator: '<S470>/Comparison5'
         *  Switch: '<S6>/Switch33'
         *  Switch: '<S6>/Switch34'
         */
        VeOBCR_b_GBTValidPlugIn = (((((uint32)VeOBCR_e_Prox_GBT) ==
            CeIDCR_e_CC_IN) && (OBCR_ac_B.Logical1_b)) && ((((uint32)
            VeOBCR_e_TxGBTMsgResponse) != CeIDCR_e_GBTRes_EVSE_Not_Connected) &&
            (((uint32)VeOBCR_e_TxGBTMsgResponse) != CeIDCR_e_GBTRes_SNA)));

        /* Logic: '<S470>/Logical Operator1' incorporates:
         *  Constant: '<S510>/Constant'
         *  Constant: '<S511>/Constant'
         *  Constant: '<S513>/Constant'
         *  Constant: '<S514>/Constant'
         *  Constant: '<S515>/Constant'
         *  Constant: '<S519>/Calib'
         *  Constant: '<S520>/Calib'
         *  Logic: '<S470>/Logical Operator'
         *  RelationalOperator: '<S10>/Comparison1'
         *  RelationalOperator: '<S10>/Comparison14'
         *  RelationalOperator: '<S470>/Comparison11'
         *  RelationalOperator: '<S470>/Comparison12'
         *  RelationalOperator: '<S470>/Comparison13'
         *  RelationalOperator: '<S470>/Comparison14'
         *  RelationalOperator: '<S470>/Comparison15'
         *  RelationalOperator: '<S470>/Comparison16'
         *  RelationalOperator: '<S470>/Comparison8'
         *  Switch: '<S6>/Switch58'
         *  Switch: '<S6>/Switch59'
         */
        rtb_TmpSignalConversionAtVeIDCR = (((((((((((uint32)
            VeOBCR_e_EVSE_ProxStat_In) == CeOBCR_e_ProxIn_OBCM) || (((uint32)
            VeOBCR_e_EVSE_ProxStat_In) == CeOBCR_e_ProxUN_OBCM)) || (((uint32)
            VeOBCR_e_EVSE_PilotStat_In) == CeOBCR_e_CP_DET_EVSE_OBCM)) ||
            (((uint32)VeOBCR_e_EVSE_PilotStat_In) == CeOBCR_e_EVSE_Flt)) ||
            (((uint32)VeOBCR_e_EVSE_PilotStat_In) == CeOBCR_e_EVSE_NO_AC)) ||
            (OBCR_ac_B.TmpSignalConversionAtVeIDCR_I_J > ((float32)
            Rte_Prm_KeOBCR_I_MinJ1772ICA_KeOBCR_I_MinJ1772ICA()))) ||
            (OBCR_ac_B.TmpSignalConversionAtVeIDCR_U_A > ((float32)
            Rte_Prm_KeOBCR_U_MinValue2TrgrPPI_KeOBCR_U_MinValue2TrgrPPI()))) ||
            (VeOBCR_b_GBTValidPlugIn)) && rtb_AND_ps);

        /* UnitDelay: '<S526>/Unit Delay' incorporates:
         *  Constant: '<S521>/Calib'
         *  Constant: '<S523>/Calib'
         *  Logic: '<S470>/Logical10'
         *  Logic: '<S470>/Logical12'
         *  RelationalOperator: '<S470>/Comparison'
         */
        rtb_AND_ps = ((rtb_Switch7 > KeOBCR_v_VehicleSpdPPI_Rprted) &&
                      (!KeOBCR_b_IgnoreFltVehSpd));

        /* Outputs for Atomic SubSystem: '<S470>/Signal Latch On With Reset1' */
        /* Logic: '<S524>/OR1' incorporates:
         *  Constant: '<S522>/Calib'
         *  Logic: '<S470>/Logical17'
         *  Logic: '<S524>/NOT'
         *  Logic: '<S524>/OR'
         *  RelationalOperator: '<S470>/Comparison18'
         *  SignalConversion generated from: '<S1>/VePMDR_e_PMM_PowerMode'
         *  UnitDelay: '<S524>/Unit Delay'
         */
        rtb_OR1_ei = ((rtb_TmpSignalConversionAtVeIDCR && rtb_AND_ps) ||
                      ((rtb_TmpSignalConversionAtVePMDR !=
                        KeOBCR_e_PMMPowerMd_VldPlgIn) &&
                       (OBCR_ac_DW.UnitDelay_DSTATE_pd)));

        /* Update for UnitDelay: '<S524>/Unit Delay' */
        OBCR_ac_DW.UnitDelay_DSTATE_pd = rtb_OR1_ei;

        /* End of Outputs for SubSystem: '<S470>/Signal Latch On With Reset1' */

        /* Logic: '<S470>/Logical13' incorporates:
         *  Logic: '<S470>/Logical14'
         *  Logic: '<S470>/Logical15'
         */
        rtb_TmpSignalConversionAtVeIDCR = (((!rtb_OR1_ei) && (!rtb_AND_ps)) &&
            rtb_TmpSignalConversionAtVeIDCR);

        /* Outputs for Atomic SubSystem: '<S470>/Turn On Delay Sample3' */
        /* Outputs for Atomic SubSystem: '<S525>/EdgeRising' */
        /* Logic: '<S526>/AND' incorporates:
         *  Logic: '<S526>/OR1'
         *  UnitDelay: '<S526>/Unit Delay'
         */
        rtb_AND_ps = (rtb_TmpSignalConversionAtVeIDCR &&
                      (!OBCR_ac_DW.UnitDelay_DSTATE_od));

        /* Update for UnitDelay: '<S526>/Unit Delay' */
        OBCR_ac_DW.UnitDelay_DSTATE_od = rtb_TmpSignalConversionAtVeIDCR;

        /* End of Outputs for SubSystem: '<S525>/EdgeRising' */

        /* Switch: '<S525>/Switch1' incorporates:
         *  Constant: '<S518>/Calib'
         *  Constant: '<S525>/Constant Value'
         *  Logic: '<S525>/OR'
         *  Logic: '<S525>/OR1'
         *  MinMax: '<S525>/Minimum'
         *  Sum: '<S525>/Summation'
         *  UnitDelay: '<S525>/Unit Delay'
         */
        if ((!rtb_TmpSignalConversionAtVeIDCR) || rtb_AND_ps)
        {
            /* Switch: '<S525>/Switch1' incorporates:
             *  Constant: '<S525>/Constant Value1'
             */
            rtb_Switch1_b5 = 0U;
        }
        else if (KeOBCR_Cnt_DbncTimePlugInVldCn1 < ((uint16)(((uint32)
                    OBCR_ac_DW.UnitDelay_DSTATE_i) + 1U)))
        {
            /* MinMax: '<S525>/Minimum' incorporates:
             *  Constant: '<S518>/Calib'
             *  Switch: '<S525>/Switch1'
             */
            rtb_Switch1_b5 = KeOBCR_Cnt_DbncTimePlugInVldCn1;
        }
        else
        {
            /* Switch: '<S525>/Switch1' incorporates:
             *  Constant: '<S525>/Constant Value'
             *  MinMax: '<S525>/Minimum'
             *  Sum: '<S525>/Summation'
             *  UnitDelay: '<S525>/Unit Delay'
             */
            rtb_Switch1_b5 = (uint16)(((uint32)OBCR_ac_DW.UnitDelay_DSTATE_i) +
                1U);
        }

        /* End of Switch: '<S525>/Switch1' */

        /* Update for UnitDelay: '<S525>/Unit Delay' */
        OBCR_ac_DW.UnitDelay_DSTATE_i = rtb_Switch1_b5;

        /* End of Outputs for SubSystem: '<S470>/Turn On Delay Sample3' */

        /* Chart: '<S445>/ChrgingSysStsDet' incorporates:
         *  Delay: '<S10>/Integer Delay1'
         */
        /* Gateway: OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChrgingSysStsDet/ChrgingSysStsDet */
        /* During: OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChrgingSysStsDet/ChrgingSysStsDet */
        if (((uint32)OBCR_ac_DW.is_active_c44_OBCR_ac) == 0U)
        {
            /* Entry: OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChrgingSysStsDet/ChrgingSysStsDet */
            OBCR_ac_DW.is_active_c44_OBCR_ac = 1U;

            /* Entry Internal: OBCR_FUNC_MedTED/OBCC/PlugInStat/ChrgSysSts_Lev/ChrgingSysStsDet/ChrgingSysStsDet */
            /* Transition: '<S527>:1536' */
            OBCR_ac_DW.is_c44_OBCR_ac = OBCR_ac_IN_Init_Decision;

            /* Entry 'Init_Decision': '<S527>:1531' */
            OBCR_ac_DW.B1 = false;
            OBCR_ac_DW.B2 = 0.0F;
            OBCR_ac_DW.B3 = false;
            OBCR_ac_B.VeOBCR_e_ChargingSystemStsO = CeOBCR_e_NotCharging;
        }
        else
        {
            guard1 = false;
            switch (OBCR_ac_DW.is_c44_OBCR_ac)
            {
              case OBCR_ac_IN_ChargingState:
                OBCR_ac_B.VeOBCR_e_ChargingSystemStsO =
                    CeOBCR_e_ChargingSts_Charging;

                /* During 'ChargingState': '<S527>:1532' */
                if (OBCR_ac_DW.B3)
                {
                    /* Transition: '<S527>:1534' */
                    OBCR_ac_DW.is_c44_OBCR_ac = OBCR_ac_IN_ChrgComplete;

                    /* Entry 'ChrgComplete': '<S527>:1530' */
                    OBCR_ac_DW.B1 = false;
                    OBCR_ac_DW.B2 = 0.0F;
                    OBCR_ac_B.VeOBCR_e_ChargingSystemStsO =
                        CeOBCR_e_ChargingSts_Complete;
                }
                else if (OBCR_ac_DW.B2 == 1.0F)
                {
                    /* Transition: '<S527>:1546' */
                    OBCR_ac_DW.is_c44_OBCR_ac = OBCR_ac_IN_InterruptedState;

                    /* Entry 'InterruptedState': '<S527>:1533' */
                    OBCR_ac_DW.B1 = false;
                    OBCR_ac_DW.B3 = false;
                    OBCR_ac_B.VeOBCR_e_ChargingSystemStsO =
                        CeOBCR_e_ChargingSts_Interrupted;
                }
                else if (!IntegerDelay)
                {
                    /* Transition: '<S527>:1603' */
                    OBCR_ac_DW.is_c44_OBCR_ac = OBCR_ac_IN_Unplug;

                    /* Entry 'Unplug': '<S527>:1593' */
                    OBCR_ac_B.VeOBCR_e_ChargingSystemStsO =
                        CeOBCR_e_ChargingSts_Interrupted;
                    OBCR_ac_DW.VeOBCR_t_InStateTime = 0.0F;
                }
                else if (((uint32)OBCR_ac_DW.IntegerDelay1_DSTATE) ==
                         CeOBCR_e_PowerUp)
                {
                    /* Transition: '<S527>:1626' */
                    OBCR_ac_DW.is_c44_OBCR_ac = OBCR_ac_IN_Init_Decision;

                    /* Entry 'Init_Decision': '<S527>:1531' */
                    OBCR_ac_DW.B1 = false;
                    OBCR_ac_DW.B2 = 0.0F;
                    OBCR_ac_DW.B3 = false;
                    OBCR_ac_B.VeOBCR_e_ChargingSystemStsO = CeOBCR_e_NotCharging;
                }
                else
                {
                    OBCR_ac_DW.B2 = OBCR_ac_Interrupted(&IntegerDelay1,
                        &Switch_c);
                    OBCR_ac_DW.B3 = OBCR_ac_Complete(&IntegerDelay1);
                }
                break;

              case OBCR_ac_IN_ChrgComplete:
                OBCR_ac_B.VeOBCR_e_ChargingSystemStsO =
                    CeOBCR_e_ChargingSts_Complete;

                /* During 'ChrgComplete': '<S527>:1530' */
                if (!IntegerDelay)
                {
                    /* Transition: '<S527>:1539' */
                    guard1 = true;
                }
                else if (OBCR_ac_DW.B1)
                {
                    /* Transition: '<S527>:1535' */
                    OBCR_ac_DW.is_c44_OBCR_ac = OBCR_ac_IN_ChargingState;

                    /* Entry 'ChargingState': '<S527>:1532' */
                    OBCR_ac_DW.B2 = 0.0F;
                    OBCR_ac_DW.B3 = false;
                    OBCR_ac_B.VeOBCR_e_ChargingSystemStsO =
                        CeOBCR_e_ChargingSts_Charging;
                }
                else if (((uint32)OBCR_ac_DW.IntegerDelay1_DSTATE) ==
                         CeOBCR_e_PowerUp)
                {
                    /* Transition: '<S527>:1667' */
                    guard1 = true;
                }
                else
                {
                    OBCR_ac_DW.B1 = OBCR_ac_Charging(&IntegerDelay1);
                }
                break;

              case OBCR_ac_IN_Init_Decision:
                OBCR_ac_B.VeOBCR_e_ChargingSystemStsO = CeOBCR_e_NotCharging;

                /* During 'Init_Decision': '<S527>:1531' */
                if (OBCR_ac_DW.B1)
                {
                    /* Transition: '<S527>:1537' */
                    OBCR_ac_DW.is_c44_OBCR_ac = OBCR_ac_IN_ChargingState;

                    /* Entry 'ChargingState': '<S527>:1532' */
                    OBCR_ac_DW.B2 = 0.0F;
                    OBCR_ac_DW.B3 = false;
                    OBCR_ac_B.VeOBCR_e_ChargingSystemStsO =
                        CeOBCR_e_ChargingSts_Charging;
                }
                else
                {
                    OBCR_ac_DW.B1 = OBCR_ac_Charging(&IntegerDelay1);
                }
                break;

              case OBCR_ac_IN_InterruptedState:
                OBCR_ac_B.VeOBCR_e_ChargingSystemStsO =
                    CeOBCR_e_ChargingSts_Interrupted;

                /* During 'InterruptedState': '<S527>:1533' */
                if (OBCR_ac_DW.B1)
                {
                    /* Transition: '<S527>:1545' */
                    OBCR_ac_DW.is_c44_OBCR_ac = OBCR_ac_IN_ChargingState;

                    /* Entry 'ChargingState': '<S527>:1532' */
                    OBCR_ac_DW.B2 = 0.0F;
                    OBCR_ac_DW.B3 = false;
                    OBCR_ac_B.VeOBCR_e_ChargingSystemStsO =
                        CeOBCR_e_ChargingSts_Charging;
                }
                else if (OBCR_ac_DW.B2 == 2.0F)
                {
                    /* Transition: '<S527>:1616' */
                    OBCR_ac_DW.is_c44_OBCR_ac = OBCR_ac_IN_Init_Decision;

                    /* Entry 'Init_Decision': '<S527>:1531' */
                    OBCR_ac_DW.B1 = false;
                    OBCR_ac_DW.B2 = 0.0F;
                    OBCR_ac_DW.B3 = false;
                    OBCR_ac_B.VeOBCR_e_ChargingSystemStsO = CeOBCR_e_NotCharging;
                }
                else
                {
                    OBCR_ac_DW.B1 = OBCR_ac_Charging(&IntegerDelay1);
                    OBCR_ac_DW.B2 = OBCR_ac_Interrupted(&IntegerDelay1,
                        &Switch_c);
                }
                break;

              default:
                OBCR_ac_B.VeOBCR_e_ChargingSystemStsO =
                    CeOBCR_e_ChargingSts_Interrupted;

                /* During 'Unplug': '<S527>:1593' */
                if (OBCR_ac_DW.VeOBCR_t_InStateTime > ((float32)
                        Rte_Prm_KeOBCR_Cnt_LatchUnplugInterupCnt_KeOBCR_Cnt_LatchUnplugInterupCnt
                        ()))
                {
                    /* Transition: '<S527>:1604' */
                    OBCR_ac_DW.is_c44_OBCR_ac = OBCR_ac_IN_Init_Decision;

                    /* Entry 'Init_Decision': '<S527>:1531' */
                    OBCR_ac_DW.B1 = false;
                    OBCR_ac_DW.B2 = 0.0F;
                    OBCR_ac_DW.B3 = false;
                    OBCR_ac_B.VeOBCR_e_ChargingSystemStsO = CeOBCR_e_NotCharging;
                }
                else
                {
                    OBCR_ac_DW.VeOBCR_t_InStateTime += (float32)
                        Rte_Prm_HeOBCR_t_FnctRate_HeOBCR_t_FnctRate();
                }
                break;
            }

            if (guard1)
            {
                OBCR_ac_DW.is_c44_OBCR_ac = OBCR_ac_IN_Init_Decision;

                /* Entry 'Init_Decision': '<S527>:1531' */
                OBCR_ac_DW.B1 = false;
                OBCR_ac_DW.B2 = 0.0F;
                OBCR_ac_DW.B3 = false;
                OBCR_ac_B.VeOBCR_e_ChargingSystemStsO = CeOBCR_e_NotCharging;
            }
        }

        /* End of Chart: '<S445>/ChrgingSysStsDet' */

        /* Switch: '<S445>/Switch' incorporates:
         *  Constant: '<S533>/Calib'
         */
        if (KeOBCR_b_ChargSysStsOvrd)
        {
            /* Switch: '<S445>/Switch' incorporates:
             *  Constant: '<S535>/Calib'
             *  DataTypeConversion: '<S530>/DataTypeConversion'
             */
            VeOBCR_e_ChargingSysStsTest1 = (TeOBCR_e_ChargingSystemSts)
                Rte_Prm_KeOBCR_k_ChargingSts_KeOBCR_k_ChargingSts();
        }
        else
        {
            /* Switch: '<S445>/Switch' */
            VeOBCR_e_ChargingSysStsTest1 = OBCR_ac_B.VeOBCR_e_ChargingSystemStsO;
        }

        /* End of Switch: '<S445>/Switch' */

        /* Switch: '<S445>/Switch1' incorporates:
         *  Constant: '<S531>/Constant'
         *  Constant: '<S534>/Calib'
         *  Logic: '<S445>/Logical1'
         *  RelationalOperator: '<S445>/Comparison4'
         *  Switch: '<S445>/Switch'
         */
        if ((((uint32)VeOBCR_e_ChargingSysStsTest1) ==
                CeOBCR_e_ChargingSts_Interrupted) &&
                (KeOBCR_b_ChrgSysStsOvrdNtChrging))
        {
            /* Switch: '<S445>/Switch1' incorporates:
             *  Constant: '<S532>/Constant'
             */
            rtb_Merge_6 = CeOBCR_e_NotCharging;
        }
        else
        {
            /* Switch: '<S445>/Switch1' */
            rtb_Merge_6 = VeOBCR_e_ChargingSysStsTest1;
        }

        /* End of Switch: '<S445>/Switch1' */

        /* DataTypeConversion: '<S445>/Data Type Conversion' incorporates:
         *  DataStoreWrite: '<S445>/Data Store Write'
         *  Switch: '<S445>/Switch1'
         */
        EeOBCR_e_ChargingSystemSts = rtb_Merge_6;

        /* Merge: '<S10>/Merge_1' incorporates:
         *  DataTypeConversion: '<S446>/DataTypeConversion'
         *  Switch: '<S462>/Switch'
         */
        OBCR_ac_B.Merge_1_p = Switch_c;

        /* Merge: '<S10>/Merge_24' incorporates:
         *  DataTypeConversion: '<S447>/DataTypeConversion'
         *  Switch: '<S445>/Switch1'
         */
        OBCR_ac_B.Merge_24 = rtb_Merge_6;

        /* Merge: '<S10>/Merge_6' incorporates:
         *  DataTypeConversion: '<S448>/DataTypeConversion'
         *  Switch: '<S445>/Switch'
         */
        rtb_Merge_6 = VeOBCR_e_ChargingSysStsTest1;

        /* Merge: '<S10>/Merge_4' incorporates:
         *  Gain: '<S453>/Gain'
         */
        OBCR_ac_B.Merge_4_m = rtb_TmpSignalConversionAtVeVD_o;

        /* Logic: '<S25>/Logical1' incorporates:
         *  Gain: '<S454>/Gain'
         */
        rtb_TmpSignalConversionAtVeVD_o = rtb_TmpSignalConversionAtVeVDVR;

        /* Outputs for Atomic SubSystem: '<S470>/Turn On Delay Sample3' */
        /* Merge: '<S10>/Merge_2' incorporates:
         *  Constant: '<S518>/Calib'
         *  Gain: '<S455>/Gain'
         *  Logic: '<S525>/AND'
         *  RelationalOperator: '<S525>/Greater  Than'
         */
        OBCR_ac_B.Merge_2_l = (rtb_TmpSignalConversionAtVeIDCR &&
                               (rtb_Switch1_b5 >=
                                KeOBCR_Cnt_DbncTimePlugInVldCn1));

        /* End of Outputs for SubSystem: '<S470>/Turn On Delay Sample3' */

        /* Outputs for Atomic SubSystem: '<S466>/Turn Off Delay Sample1' */
        /* Merge: '<S10>/Merge_5' incorporates:
         *  Constant: '<S506>/Constant Value2'
         *  DataStoreWrite: '<S466>/Data Store Write'
         *  Gain: '<S456>/Gain'
         *  Logic: '<S506>/AND'
         *  RelationalOperator: '<S506>/Greater  Than'
         */
        OBCR_ac_B.Merge_5_a = ((OBCR_ac_DW.NeOBCR_b_GoodConnEst) || (((sint32)
            rtb_Switch1_jd) > 0));

        /* End of Outputs for SubSystem: '<S466>/Turn Off Delay Sample1' */

        /* Update for UnitDelay: '<S444>/Unit Delay7' */
        OBCR_ac_DW.UnitDelay7_DSTATE = OBCR_ac_B.VeOBCR_k_ChargingLevelState;

        /* Update for UnitDelay: '<S479>/Unit Delay' incorporates:
         *  Switch: '<S479>/Switch1'
         */
        OBCR_ac_DW.UnitDelay_DSTATE_iir = rtb_Switch1_ov;

        /* End of Outputs for SubSystem: '<S10>/ChrgSysSts_Lev' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S10>/ChrgSysSts_Lev1' incorporates:
         *  ActionPort: '<S429>/Action Port'
         */
        /* Merge: '<S10>/Merge_24' incorporates:
         *  Constant: '<S536>/Constant'
         *  SignalConversion generated from: '<S429>/ChargingSystemSts'
         */
        OBCR_ac_B.Merge_24 = CeOBCR_e_NotCharging;

        /* Merge: '<S10>/Merge_1' incorporates:
         *  Constant: '<S537>/Constant'
         *  SignalConversion generated from: '<S429>/ChargingLevel'
         */
        OBCR_ac_B.Merge_1_p = CeOBCR_e_ChargingLvlDefault;

        /* Merge: '<S10>/Merge_2' incorporates:
         *  Constant: '<S429>/Constant Value4'
         *  SignalConversion generated from: '<S429>/ValidPluginDetected'
         */
        OBCR_ac_B.Merge_2_l = false;

        /* Logic: '<S25>/Logical1' incorporates:
         *  Constant: '<S429>/Constant Value1'
         *  SignalConversion generated from: '<S429>/Level1Act'
         */
        rtb_TmpSignalConversionAtVeVD_o = false;

        /* Merge: '<S10>/Merge_4' incorporates:
         *  Constant: '<S429>/Constant Value2'
         *  SignalConversion generated from: '<S429>/Chrgr_LOC'
         */
        OBCR_ac_B.Merge_4_m = false;

        /* Merge: '<S10>/Merge_5' incorporates:
         *  Constant: '<S429>/Constant Value3'
         *  SignalConversion generated from: '<S429>/PlugIn_Lock'
         */
        OBCR_ac_B.Merge_5_a = false;

        /* Merge: '<S10>/Merge_6' incorporates:
         *  Constant: '<S538>/Constant'
         *  SignalConversion generated from: '<S429>/ChargingSystemSts_Int'
         */
        rtb_Merge_6 = CeOBCR_e_NotCharging;

        /* End of Outputs for SubSystem: '<S10>/ChrgSysSts_Lev1' */
    }

    /* End of If: '<S10>/If' */

    /* RelationalOperator: '<S10>/Comparison6' incorporates:
     *  Merge: '<S10>/Merge_1'
     *  RelationalOperator: '<S10>/Comparison2'
     *  RelationalOperator: '<S10>/Comparison3'
     *  RelationalOperator: '<S10>/Comparison4'
     *  RelationalOperator: '<S10>/Comparison7'
     */
    rtb_Switch1_ov = OBCR_ac_B.Merge_1_p;

    /* Logic: '<S10>/Logical14' incorporates:
     *  Logic: '<S540>/Logical4'
     */
    IntegerDelay = !OBCR_ac_B.Logical6;

    /* Logic: '<S10>/Logical13' incorporates:
     *  Constant: '<S430>/Constant'
     *  Constant: '<S431>/Constant'
     *  Constant: '<S432>/Constant'
     *  Constant: '<S433>/Constant'
     *  Constant: '<S434>/Constant'
     *  Logic: '<S10>/Logical14'
     *  Logic: '<S10>/Logical5'
     *  RelationalOperator: '<S10>/Comparison2'
     *  RelationalOperator: '<S10>/Comparison3'
     *  RelationalOperator: '<S10>/Comparison4'
     *  RelationalOperator: '<S10>/Comparison6'
     *  RelationalOperator: '<S10>/Comparison7'
     */
    OBCR_ac_B.Logical13 = ((((((CeOBCR_e_ChargingLvlAC1 == ((uint32)
        rtb_Switch1_ov)) || (CeOBCR_e_ChargingLvlAC2 == ((uint32)rtb_Switch1_ov)))
        || (CeOBCR_e_PlugInNotDetermined == ((uint32)rtb_Switch1_ov))) ||
        (CeOBCR_e_PartialPlugInPrkF == ((uint32)rtb_Switch1_ov))) ||
                            (CeOBCR_e_ChargingLvlDC2 == ((uint32)rtb_Switch1_ov)))
                           && IntegerDelay);

    /* Outputs for Atomic SubSystem: '<S22>/Signal Latch On With Reset1' */
    /* Logic: '<S40>/OR1' incorporates:
     *  Constant: '<S29>/Constant'
     *  Logic: '<S22>/Logical2'
     *  Logic: '<S40>/OR'
     *  RelationalOperator: '<S22>/Comparison1'
     *  Switch: '<S6>/Switch34'
     *  UnitDelay: '<S40>/Unit Delay'
     */
    VeOBCR_b_ChrgTypeSelDCGBT = ((((uint32)VeOBCR_e_TxGBTMsgResponse) ==
        CeIDCR_e_CHM) || ((OBCR_ac_B.Logical13) &&
                          (OBCR_ac_DW.UnitDelay_DSTATE_abv)));

    /* Update for UnitDelay: '<S40>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_abv = VeOBCR_b_ChrgTypeSelDCGBT;

    /* End of Outputs for SubSystem: '<S22>/Signal Latch On With Reset1' */

    /* Outputs for Atomic SubSystem: '<S22>/Counter Reset  Enabled ' */
    /* Switch: '<S26>/Switch2' incorporates:
     *  Logic: '<S22>/Logical31'
     *  Switch: '<S26>/Switch1'
     */
    if (!VeOBCR_b_IDCM_DCCA)
    {
        /* Switch: '<S26>/Switch1' incorporates:
         *  Constant: '<S26>/Constant Value2'
         */
        rtb_Switch1_jd = 0U;
    }
    else
    {
        /* Switch: '<S26>/Switch1' incorporates:
         *  Constant: '<S26>/Constant Value1'
         *  Sum: '<S26>/Subtraction'
         *  Switch: '<S26>/Switch2'
         *  UnitDelay: '<S26>/Unit Delay'
         */
        rtb_Switch1_jd = (uint16)(((uint32)OBCR_ac_DW.UnitDelay_DSTATE_nq) + 1U);
    }

    /* End of Switch: '<S26>/Switch2' */

    /* Update for UnitDelay: '<S26>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_nq = rtb_Switch1_jd;

    /* End of Outputs for SubSystem: '<S22>/Counter Reset  Enabled ' */

    /* Logic: '<S22>/Logical32' incorporates:
     *  Logic: '<S25>/Logical5'
     */
    rtb_AND_ps = !VeOBCR_b_InFieldMode;

    /* Outputs for Atomic SubSystem: '<S22>/Signal Latch On With Reset' */
    /* Logic: '<S39>/OR1' incorporates:
     *  Constant: '<S33>/Constant'
     *  Constant: '<S36>/Calib'
     *  Constant: '<S37>/Calib'
     *  Logic: '<S22>/Logical27'
     *  Logic: '<S22>/Logical28'
     *  Logic: '<S22>/Logical29'
     *  Logic: '<S22>/Logical30'
     *  Logic: '<S22>/Logical32'
     *  Logic: '<S39>/OR'
     *  RelationalOperator: '<S22>/Comparison4'
     *  RelationalOperator: '<S22>/Comparison5'
     *  Switch: '<S6>/Switch46'
     *  UnitDelay: '<S39>/Unit Delay'
     */
    VeOBCR_b_HLC_DIN_DC = (((((VeOBCR_b_IDCM_DCCA) && rtb_AND_ps) &&
        (KeOBCR_b_ChrgTypeEnblInfldMd)) || ((((uint32)VeOBCR_e_SLACSts) ==
        CeIDCR_e_SLACSts_EVSE_Fnd) && (rtb_Switch1_jd <=
        KeOBCR_Cnt_DCMaxCommTime))) || ((OBCR_ac_B.Logical13) &&
                            (OBCR_ac_DW.UnitDelay_DSTATE_ot)));

    /* Update for UnitDelay: '<S39>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_ot = VeOBCR_b_HLC_DIN_DC;

    /* End of Outputs for SubSystem: '<S22>/Signal Latch On With Reset' */

    /* Switch: '<S22>/Switch' */
    VeOBCR_b_ChrgTypeSelDCDIN = ((VeOBCR_b_HLC_DIN_DC) || (VeOBCR_b_IDCM_DCCA));

    /* Switch: '<S22>/Switch1' */
    if (OBCR_ac_B.Logical1_b)
    {
        /* Switch: '<S22>/Switch1' */
        VeOBCR_b_ChrgTypeDCSelect = VeOBCR_b_ChrgTypeSelDCGBT;
    }
    else
    {
        /* Switch: '<S22>/Switch1' */
        VeOBCR_b_ChrgTypeDCSelect = VeOBCR_b_ChrgTypeSelDCDIN;
    }

    /* End of Switch: '<S22>/Switch1' */

    /* Switch: '<S35>/Switch1' incorporates:
     *  Constant: '<S28>/Constant'
     *  Logic: '<S22>/Logical Operator'
     *  Switch: '<S35>/Switch2'
     *  Switch: '<S35>/Switch3'
     */
    if (rtb_Logical3_oh || rtb_AND_dq)
    {
        OBCR_ac_B.Switch1_a = CeOBCR_e_Discharge;
    }
    else if (VeOBCR_b_ChrgTypeDCSelect)
    {
        /* Switch: '<S35>/Switch2' incorporates:
         *  Constant: '<S30>/Constant'
         *  Switch: '<S35>/Switch1'
         */
        OBCR_ac_B.Switch1_a = CeOBCR_e_DC;
    }
    else
    {
        OBCR_ac_B.Switch1_a = OBCR_ac_ConstB.Switch3_k;
    }

    /* End of Switch: '<S35>/Switch1' */
    /* End of Outputs for SubSystem: '<S1>/OBCC' */

    /* Inport: '<Root>/VeCHFR_b_ChargingFault' */
    (void)Rte_Read_VeCHFR_b_ChargingFault_Value(&rtb_Logical26);

    /* Inport: '<Root>/VeESMR_Pct_Logistics_SOCSetPt' */
    (void)Rte_Read_VeESMR_Pct_Logistics_SOCSetPt_Value(&rtb_Multiplication1);

    /* Outputs for Function Call SubSystem: '<S1>/OBCC' */
    /* RelationalOperator: '<S541>/Comparison7' incorporates:
     *  RelationalOperator: '<S110>/Comparison1'
     *  RelationalOperator: '<S14>/Comparison2'
     *  RelationalOperator: '<S14>/Comparison3'
     *  RelationalOperator: '<S14>/Comparison5'
     *  RelationalOperator: '<S24>/Comparison1'
     *  RelationalOperator: '<S24>/Comparison3'
     *  RelationalOperator: '<S25>/Comparison10'
     *  RelationalOperator: '<S25>/Comparison4'
     *  RelationalOperator: '<S389>/Comparison4'
     *  RelationalOperator: '<S542>/Comparison8'
     *  Switch: '<S35>/Switch1'
     *  Switch: '<S96>/Switch'
     *  Switch: '<S96>/Switch1'
     */
    VeOBCR_b_SecureConnEstI_tmp = OBCR_ac_B.Switch1_a;

    /* Logic: '<S541>/Logical8' incorporates:
     *  Logic: '<S542>/Logical8'
     */
    rtb_AND_k3 = ((!rtb_Logical3_oh) && (!rtb_AND_dq));

    /* Logic: '<S541>/Logical1' incorporates:
     *  Constant: '<S564>/Constant'
     *  Constant: '<S565>/Constant'
     *  Constant: '<S568>/Constant'
     *  Constant: '<S569>/Constant'
     *  Constant: '<S571>/Calib'
     *  Logic: '<S541>/Logical2'
     *  Logic: '<S541>/Logical3'
     *  Logic: '<S541>/Logical4'
     *  Logic: '<S541>/Logical8'
     *  RelationalOperator: '<S10>/Comparison1'
     *  RelationalOperator: '<S10>/Comparison14'
     *  RelationalOperator: '<S541>/Comparison'
     *  RelationalOperator: '<S541>/Comparison2'
     *  RelationalOperator: '<S541>/Comparison3'
     *  RelationalOperator: '<S541>/Comparison4'
     *  RelationalOperator: '<S541>/Comparison7'
     *  Switch: '<S6>/Switch33'
     *  Switch: '<S6>/Switch58'
     *  Switch: '<S6>/Switch59'
     */
    OBCR_ac_B.VeOBCR_b_SecureConnEstI = (((((((uint32)VeOBCR_e_EVSE_PilotStat_In)
        == CeOBCR_e_CP_DET_EVSE_OBCM) || (OBCR_ac_B.Logical1_b)) && ((((uint32)
        VeOBCR_e_EVSE_ProxStat_In) == CeOBCR_e_ProxIn_OBCM) || (((uint32)
        VeOBCR_e_Prox_GBT) == CeIDCR_e_CC_IN))) &&
        ((OBCR_ac_B.TmpSignalConversionAtVeIDCR_I_J > ((float32)
        Rte_Prm_KeOBCR_I_MinJ1772ICA_KeOBCR_I_MinJ1772ICA())) || (((uint32)
        VeOBCR_b_SecureConnEstI_tmp) == CeOBCR_e_DC))) && rtb_AND_k3);

    /* Logic: '<S24>/Logical4' incorporates:
     *  Constant: '<S60>/Constant'
     *  Constant: '<S61>/Calib'
     *  Logic: '<S24>/Logical27'
     *  Logic: '<S24>/Logical28'
     *  RelationalOperator: '<S24>/Comparison1'
     */
    rtb_TmpSignalConversionAtVeVDVR = (((((KeOBCR_b_ChrgCmpltSecConn_Enbl) &&
        rtb_OR1_oy) || (OBCR_ac_B.VeOBCR_b_SecureConnEstI)) || (((uint32)
        VeOBCR_b_SecureConnEstI_tmp) == CeOBCR_e_WPT)) || (OBCR_ac_B.Logical6));

    /* Logic: '<S24>/Logical26' */
    rtb_Logical26 = !rtb_Logical26;

    /* Logic: '<S25>/Logical4' incorporates:
     *  Logic: '<S25>/Logical10'
     */
    rtb_OR1_oy = !VeOBCR_b_HVBatPerWUThermal;

    /* Logic: '<S25>/Logical15' incorporates:
     *  Constant: '<S63>/Constant'
     *  Constant: '<S74>/Calib'
     *  Constant: '<S82>/Calib'
     *  Logic: '<S25>/Logical17'
     *  Logic: '<S25>/Logical4'
     *  Logic: '<S25>/Logical7'
     *  RelationalOperator: '<S25>/Comparison1'
     *  RelationalOperator: '<S25>/Comparison3'
     *  RelationalOperator: '<S25>/Comparison5'
     */
    rtb_TmpSignalConversionAtVeIDCR = (((VeOBCR_U_HV_BatVoltModMaxArbFil >
        KeOBCR_U_MaxVlt2StopChrgInit) && (rtb_TmpSignalConversionAtVeBP_a >=
        KeOBCR_Pct_MaxSOC2StopChrgInit)) && (rtb_OR1_oy && (((uint32)
        rtb_TmpSignalConversionAtVePMDR) == CePMDR_e_PowerMode_Off)));

    /* Logic: '<S25>/Logical14' incorporates:
     *  Constant: '<S75>/Calib'
     *  Constant: '<S76>/Calib'
     *  Constant: '<S80>/Calib'
     *  Constant: '<S81>/Calib'
     *  Logic: '<S25>/Logical11'
     *  Logic: '<S25>/Logical13'
     *  RelationalOperator: '<S25>/Comparison6'
     *  RelationalOperator: '<S25>/Comparison7'
     *  RelationalOperator: '<S25>/Comparison8'
     *  RelationalOperator: '<S25>/Comparison9'
     */
    VeOBCR_b_NoChrgInitNO1 = (((rtb_TmpSignalConversionAtVeBP_e <
        KeOBCR_T_NoInitChargeTempMin) && (rtb_TmpSignalConversionAtVeBP_a <
        KeOBCR_Pct_NoInitChargeSOCMinLow)) || ((rtb_TmpSignalConversionAtVeBP_e >
        KeOBCR_T_NoInitChargeTempMax) && (rtb_TmpSignalConversionAtVeBP_a <
        KeOBCR_Pct_NoInitChargeSOCMinHigh)));

    /* Logic: '<S25>/Logical12' incorporates:
     *  Constant: '<S67>/Constant'
     *  Logic: '<S25>/Logical20'
     *  RelationalOperator: '<S25>/Comparison12'
     */
    rtb_OR1_oy = ((((((uint32)rtb_TmpSignalConversionAtVePMDR) ==
                     CePMDR_e_PowerMode_Off) && rtb_OR1_oy) &&
                   rtb_TmpSignalConversionAtVeVD_o) && (VeOBCR_b_NoChrgInitNO1));

    /* Switch: '<S25>/Switch7' incorporates:
     *  Constant: '<S86>/Calib'
     */
    if (KeOBCR_b_Use_REMSOCSetPt)
    {
        /* Switch: '<S25>/Switch7' */
        rtb_Switch7 = rtb_Multiplication1;
    }
    else
    {
        /* Switch: '<S25>/Switch7' incorporates:
         *  Constant: '<S79>/Calib'
         */
        rtb_Switch7 = KeOBCR_Pct_SOCSetPt_REMLogMode;
    }

    /* End of Switch: '<S25>/Switch7' */

    /* Outputs for Atomic SubSystem: '<S25>/Hysteresis' */
    /* Switch: '<S69>/Switch1' incorporates:
     *  RelationalOperator: '<S69>/Greater  Than'
     */
    if (rtb_TmpSignalConversionAtVeBP_a > rtb_Switch7)
    {
        /* Switch: '<S69>/Switch1' incorporates:
         *  Constant: '<S69>/Constant Value'
         */
        rtb_TmpSignalConversionAtVeVD_o = true;
    }
    else
    {
        /* Switch: '<S69>/Switch1' incorporates:
         *  Constant: '<S77>/Calib'
         *  RelationalOperator: '<S69>/Greater  Than1'
         *  Sum: '<S25>/Sum2'
         *  UnitDelay: '<S69>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeVD_o = ((rtb_TmpSignalConversionAtVeBP_a >=
            (rtb_Switch7 - KeOBCR_Pct_REMSOCSetPt_HystTol)) &&
            (OBCR_ac_DW.UnitDelay_DSTATE_pb));
    }

    /* End of Switch: '<S69>/Switch1' */
    /* End of Outputs for SubSystem: '<S25>/Hysteresis' */
    /* End of Outputs for SubSystem: '<S1>/OBCC' */

    /* Inport: '<Root>/VeDCCR_b_V2GPilotEnable' */
    (void)Rte_Read_VeDCCR_b_V2GPilotEnable_Value(&rtb_OR1_hj);

    /* Outputs for Function Call SubSystem: '<S1>/OBCC' */
    /* Outputs for Atomic SubSystem: '<S25>/Hysteresis' */
    /* Update for UnitDelay: '<S69>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_pb = rtb_TmpSignalConversionAtVeVD_o;

    /* End of Outputs for SubSystem: '<S25>/Hysteresis' */

    /* Logic: '<S25>/Logical16' incorporates:
     *  Constant: '<S66>/Constant'
     *  Logic: '<S25>/Logical18'
     *  RelationalOperator: '<S25>/Comparison11'
     *  UnitDelay: '<S25>/Unit Delay3'
     */
    VeOBCR_b_V2GnotEnable = ((((uint32)OBCR_ac_DW.UnitDelay3_DSTATE_h) ==
        CeOBCR_e_Charging) && (!rtb_OR1_hj));

    /* Outputs for Atomic SubSystem: '<S25>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S88>/EdgeRising' */
    /* Switch: '<S14>/Switch' incorporates:
     *  UnitDelay: '<S89>/Unit Delay'
     */
    rtb_OR1_ei = OBCR_ac_DW.UnitDelay_DSTATE_ao;

    /* Update for UnitDelay: '<S89>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_ao = VeOBCR_b_V2GnotEnable;

    /* Switch: '<S88>/Switch1' incorporates:
     *  Constant: '<S72>/Calib'
     *  Constant: '<S88>/Constant Value'
     *  Logic: '<S88>/OR'
     *  Logic: '<S88>/OR1'
     *  Logic: '<S89>/AND'
     *  Logic: '<S89>/OR1'
     *  MinMax: '<S88>/Minimum'
     *  Sum: '<S88>/Summation'
     *  UnitDelay: '<S88>/Unit Delay'
     */
    if ((!VeOBCR_b_V2GnotEnable) || ((VeOBCR_b_V2GnotEnable) && (!rtb_OR1_ei)))
    {
        /* Switch: '<S88>/Switch1' incorporates:
         *  Constant: '<S88>/Constant Value1'
         */
        rtb_Switch1_jd = 0U;
    }
    else if (KeOBCR_Cnt_Dbnc_ChrgShpMdSOC < ((uint16)(((uint32)
                OBCR_ac_DW.UnitDelay_DSTATE_gr) + 1U)))
    {
        /* MinMax: '<S88>/Minimum' incorporates:
         *  Constant: '<S72>/Calib'
         *  Switch: '<S88>/Switch1'
         */
        rtb_Switch1_jd = KeOBCR_Cnt_Dbnc_ChrgShpMdSOC;
    }
    else
    {
        /* Switch: '<S88>/Switch1' incorporates:
         *  Constant: '<S88>/Constant Value'
         *  MinMax: '<S88>/Minimum'
         *  Sum: '<S88>/Summation'
         *  UnitDelay: '<S88>/Unit Delay'
         */
        rtb_Switch1_jd = (uint16)(((uint32)OBCR_ac_DW.UnitDelay_DSTATE_gr) + 1U);
    }

    /* End of Switch: '<S88>/Switch1' */
    /* End of Outputs for SubSystem: '<S88>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S25>/Turn On Delay Sample1' */
    /* End of Outputs for SubSystem: '<S1>/OBCC' */

    /* Inport: '<Root>/VeESMR_Pct_IP_SOCSetPt' */
    (void)Rte_Read_VeESMR_Pct_IP_SOCSetPt_Value(&rtb_Switch6);

    /* Outputs for Function Call SubSystem: '<S1>/OBCC' */
    /* Outputs for Atomic SubSystem: '<S25>/Turn On Delay Sample1' */
    /* Update for UnitDelay: '<S88>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_gr = rtb_Switch1_jd;

    /* Outputs for Atomic SubSystem: '<S25>/Signal Latch On With Reset1' */
    /* Logic: '<S87>/OR1' incorporates:
     *  Constant: '<S72>/Calib'
     *  Logic: '<S25>/Logical19'
     *  Logic: '<S87>/OR'
     *  Logic: '<S88>/AND'
     *  RelationalOperator: '<S88>/Greater  Than'
     *  UnitDelay: '<S87>/Unit Delay'
     */
    rtb_OR1_hj = (((VeOBCR_b_V2GnotEnable) && (rtb_Switch1_jd >=
                    KeOBCR_Cnt_Dbnc_ChrgShpMdSOC)) || ((OBCR_ac_B.Logical13) &&
                   (OBCR_ac_DW.UnitDelay_DSTATE_pg)));

    /* End of Outputs for SubSystem: '<S25>/Turn On Delay Sample1' */

    /* Update for UnitDelay: '<S87>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_pg = rtb_OR1_hj;

    /* End of Outputs for SubSystem: '<S25>/Signal Latch On With Reset1' */

    /* Logic: '<S25>/Logical8' incorporates:
     *  Constant: '<S65>/Constant'
     *  Constant: '<S68>/Constant'
     *  Constant: '<S83>/Calib'
     *  RelationalOperator: '<S25>/Comparison10'
     *  RelationalOperator: '<S25>/Comparison2'
     *  Switch: '<S25>/Switch8'
     *  Switch: '<S6>/Switch89'
     */
    VeOBCR_b_ShipMd_StpChrg = ((((((uint32)VeOBCR_e_ShipMd) ==
        CePLTR_e_ShipingMode_SHIP_MD) && rtb_TmpSignalConversionAtVeVD_o) &&
        (KeOBCR_b_EnbPlugInChrgShipMd)) && ((((uint32)
        VeOBCR_b_SecureConnEstI_tmp) != CeOBCR_e_DC) || rtb_OR1_hj));

    /* Switch: '<S25>/Switch6' incorporates:
     *  Constant: '<S85>/Calib'
     */
    if (!KeOBCR_b_Use_IPSOCSetPt)
    {
        /* Switch: '<S25>/Switch6' incorporates:
         *  Constant: '<S78>/Calib'
         */
        rtb_Switch6 = KeOBCR_Pct_SOCSetPt_IP;
    }

    /* End of Switch: '<S25>/Switch6' */

    /* Outputs for Atomic SubSystem: '<S25>/Hysteresis1' */
    /* Switch: '<S70>/Switch1' incorporates:
     *  RelationalOperator: '<S70>/Greater  Than'
     */
    if (rtb_TmpSignalConversionAtVeBP_a > rtb_Switch6)
    {
        /* Switch: '<S70>/Switch1' incorporates:
         *  Constant: '<S70>/Constant Value'
         */
        rtb_TmpSignalConversionAtVeVD_o = true;
    }
    else
    {
        /* Switch: '<S70>/Switch1' incorporates:
         *  Constant: '<S73>/Calib'
         *  RelationalOperator: '<S70>/Greater  Than1'
         *  Sum: '<S25>/Sum1'
         *  UnitDelay: '<S70>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeVD_o = ((rtb_TmpSignalConversionAtVeBP_a >=
            (rtb_Switch6 - KeOBCR_Pct_IPSOCSetPt_HystTol)) &&
            (OBCR_ac_DW.UnitDelay_DSTATE_mi));
    }

    /* End of Switch: '<S70>/Switch1' */
    /* End of Outputs for SubSystem: '<S25>/Hysteresis1' */
    /* End of Outputs for SubSystem: '<S1>/OBCC' */

    /* Inport: '<Root>/VeCPLR_b_InternalLockReq' */
    (void)Rte_Read_VeCPLR_b_InternalLockReq_Value(&rtb_Switch);

    /* Inport: '<Root>/VeVDVR_b_V2V_Detected' */
    (void)Rte_Read_VeVDVR_b_V2V_Detected_Value(&rtb_Logical11_i);

    /* Inport: '<Root>/VeVDVR_b_V2VChrgPortReq' */
    (void)Rte_Read_VeVDVR_b_V2VChrgPortReq_Value(&rtb_AND_me);

    /* Inport: '<Root>/VeFSCR_b_HVFuncRejHdAjar' */
    (void)Rte_Read_VeFSCR_b_HVFuncRejHdAjar_Value(&rtb_Logical2_bu);

    /* Outputs for Function Call SubSystem: '<S1>/OBCC' */
    /* Outputs for Atomic SubSystem: '<S25>/Hysteresis1' */
    /* Update for UnitDelay: '<S70>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_mi = rtb_TmpSignalConversionAtVeVD_o;

    /* End of Outputs for SubSystem: '<S25>/Hysteresis1' */

    /* Logic: '<S25>/Logical6' incorporates:
     *  Constant: '<S84>/Calib'
     */
    VeOBCR_b_PlantMd_StpChrg = ((rtb_AND_ps && rtb_TmpSignalConversionAtVeVD_o) &&
        (KeOBCR_b_EnblPlugInChrgPlantMd));

    /* Logic: '<S25>/Logical9' */
    VeOBCR_b_Ship_Plant_StpChrg = ((VeOBCR_b_ShipMd_StpChrg) ||
        (VeOBCR_b_PlantMd_StpChrg));

    /* Logic: '<S25>/Logical2' */
    VeOBCR_b_MainCntctrOpnPdg = ((VeOBCR_b_HVBatCntctrReq) ||
        (VeOBCR_b_HV_BatCntctrOpnRq));

    /* Logic: '<S25>/Logical' incorporates:
     *  Constant: '<S64>/Constant'
     *  Logic: '<S25>/Logical3'
     *  RelationalOperator: '<S25>/Comparison4'
     */
    VeOBCR_b_DCCntctrOpnPdg = (((VeOBCR_b_HVBat_DC_CntctrOpn) ||
        (VeOBCR_b_HVBat_DC_CntctrReq)) && (((uint32)VeOBCR_b_SecureConnEstI_tmp)
        == CeOBCR_e_DC));

    /* Logic: '<S25>/Logical1' */
    rtb_TmpSignalConversionAtVeVD_o = ((((((!rtb_TmpSignalConversionAtVeIDCR) &&
        (!rtb_OR1_oy)) && (!VeOBCR_b_Ship_Plant_StpChrg)) &&
        (!VeOBCR_b_MainCntctrOpnPdg)) && (!VeOBCR_b_DCCntctrOpnPdg)) &&
        (!rtb_TmpSignalConversionAtVeFCPR));

    /* Logic: '<S24>/Logical25' */
    rtb_OR1_hj = (((VeOBCR_b_ChargeReq) || rtb_Logical3_oh) || rtb_AND_dq);

    /* Logic: '<S23>/Logical5' incorporates:
     *  Constant: '<S38>/Calib'
     *  Constant: '<S45>/Constant'
     *  Constant: '<S49>/Calib'
     *  RelationalOperator: '<S22>/Comparison2'
     *  RelationalOperator: '<S23>/Comparison9'
     */
    VeOBCR_b_HoodAjarCond1 = (((VeOBCR_b_HoodAjar) && (((uint32)
        KeOBCR_e_InterMarketsSelection) == CeOBCR_e_China)) &&
        (KeOBCR_b_HoodAjarNoCharge1));

    /* Logic: '<S23>/Logical9' incorporates:
     *  Constant: '<S50>/Calib'
     *  Logic: '<S23>/Logical10'
     *  Logic: '<S23>/Logical6'
     */
    VeOBCR_b_HoodAjarCond2 = (rtb_Logical2_bu && (!KeOBCR_b_IgnoreHoodAjarCond));

    /* Logic: '<S23>/Logical8' */
    VeOBCR_b_HoodAjarCond = ((VeOBCR_b_HoodAjarCond1) || (VeOBCR_b_HoodAjarCond2));

    /* Logic: '<S24>/Logical2' */
    rtb_Logical2_bu = !VeOBCR_b_HoodAjarCond;

    /* Logic: '<S24>/Logical20' incorporates:
     *  Constant: '<S59>/Constant'
     *  Logic: '<S24>/Logical21'
     *  RelationalOperator: '<S24>/Comparison3'
     */
    rtb_AND_ps = (((uint32)VeOBCR_b_SecureConnEstI_tmp) != CeOBCR_e_WPT);

    /* Switch: '<S24>/Switch' */
    if (rtb_Logical11_i)
    {
        /* Switch: '<S24>/Switch' */
        rtb_Switch = rtb_AND_me;
    }

    /* End of Switch: '<S24>/Switch' */

    /* Logic: '<S24>/Logical' */
    OBCR_ac_B.VeOBCR_b_EnableCharge = ((((((((rtb_Logical23 && rtb_Logical1_o) &&
        rtb_TmpSignalConversionAtVeVDVR) && rtb_Logical26) &&
        rtb_TmpSignalConversionAtVeVD_o) && rtb_OR1_hj) && rtb_Logical2_bu) &&
        rtb_AND_ps) && rtb_Switch);

    /* Logic: '<S23>/Logical11' incorporates:
     *  Constant: '<S46>/Constant'
     *  RelationalOperator: '<S23>/Comparison7'
     *  Switch: '<S6>/Switch106'
     */
    rtb_Logical11_i = ((VeOBCR_b_HV_AuxLoadOffReq) || (((uint32)
                         VeOBCR_e_HV_TracBatCntctrConfig) ==
                        CeBPCR_e_HVTracBatConfig_Closed_SNA));

    /* Outputs for Atomic SubSystem: '<S23>/Turn Off Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S53>/EdgeFalling' */
    /* Logic: '<S55>/AND' incorporates:
     *  Logic: '<S55>/OR1'
     *  UnitDelay: '<S55>/Unit Delay'
     */
    rtb_AND_me = ((!rtb_Logical11_i) && (OBCR_ac_DW.UnitDelay_DSTATE_jz));

    /* Update for UnitDelay: '<S55>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_jz = rtb_Logical11_i;

    /* End of Outputs for SubSystem: '<S53>/EdgeFalling' */

    /* Switch: '<S53>/Switch' */
    if (rtb_AND_me)
    {
        /* Switch: '<S53>/Switch' incorporates:
         *  Constant: '<S48>/Calib'
         */
        rtb_Switch1_jd = KeOBCR_Cnt_Cntctrbypass_Delay;
    }
    else
    {
        /* Sum: '<S53>/Summation' incorporates:
         *  Constant: '<S53>/Constant Value'
         *  UnitDelay: '<S53>/Unit Delay'
         */
        i = ((sint32)OBCR_ac_DW.UnitDelay_DSTATE_p) - 1;
        if ((((sint32)OBCR_ac_DW.UnitDelay_DSTATE_p) - 1) < 0)
        {
            i = 0;
        }

        /* Switch: '<S53>/Switch' incorporates:
         *  Sum: '<S53>/Summation'
         */
        rtb_Switch1_jd = (uint16)i;
    }

    /* End of Switch: '<S53>/Switch' */
    /* End of Outputs for SubSystem: '<S23>/Turn Off Delay Sample' */
    /* End of Outputs for SubSystem: '<S1>/OBCC' */

    /* Inport: '<Root>/VeBPCR_e_HV_BatCntctrStat' */
    (void)Rte_Read_VeBPCR_e_HV_BatCntctrStat_Value(&tmpRead_b);

    /* Outputs for Function Call SubSystem: '<S1>/OBCC' */
    /* Outputs for Atomic SubSystem: '<S23>/Turn Off Delay Sample' */
    /* Update for UnitDelay: '<S53>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_p = rtb_Switch1_jd;

    /* Logic: '<S23>/Logical7' incorporates:
     *  Constant: '<S51>/Calib'
     *  Constant: '<S53>/Constant Value2'
     *  Logic: '<S53>/AND'
     *  RelationalOperator: '<S53>/Greater  Than'
     */
    VeOBCR_b_cntBypass = ((rtb_Logical11_i || (((sint32)rtb_Switch1_jd) > 0)) &&
                          (KeOBCR_b_SwtchblBttryPckEnbl));

    /* End of Outputs for SubSystem: '<S23>/Turn Off Delay Sample' */

    /* RelationalOperator: '<S23>/Not Equal' incorporates:
     *  Constant: '<S54>/Constant'
     *  Inport: '<Root>/VeBPCR_e_HV_BatCntctrStat'
     */
    rtb_Logical11_i = (((uint32)tmpRead_b) == CeHVTR_e_Closed);

    /* Logic: '<S23>/Logical22' incorporates:
     *  Constant: '<S41>/Constant'
     *  Constant: '<S42>/Constant'
     *  Constant: '<S43>/Constant'
     *  Constant: '<S44>/Constant'
     *  RelationalOperator: '<S23>/Comparison1'
     *  RelationalOperator: '<S23>/Comparison4'
     *  RelationalOperator: '<S23>/Comparison5'
     *  RelationalOperator: '<S23>/Comparison6'
     *  Switch: '<S6>/Switch15'
     */
    VeOBCR_b_ChrgStat_Ready = ((((((uint32)VeOBCR_e_BPCM_ChrgStat_In) ==
        CeOBCR_e_ReadyForCommand) || (((uint32)VeOBCR_e_BPCM_ChrgStat_In) ==
        CeOBCR_e_Chrg_CurntAllow)) || (((uint32)VeOBCR_e_BPCM_ChrgStat_In) ==
        CeOBCR_e_Chrg_CurntDisAllow)) || (((uint32)VeOBCR_e_BPCM_ChrgStat_In) ==
        CeOBCR_e_Complete));

    /* Logic: '<S23>/Logical3' incorporates:
     *  Logic: '<S23>/Logical2'
     */
    VeOBCR_b_battReady_nobypass = ((rtb_Logical11_i && (VeOBCR_b_ChrgStat_Ready))
        && (!rtb_TmpSignalConversionAtVeHPMR));

    /* Switch: '<S23>/Switch1' */
    VeOBCR_b_battReady = ((VeOBCR_b_cntBypass) || (VeOBCR_b_battReady_nobypass));

    /* If: '<S8>/If' */
    if (OBCR_ac_B.AND_i)
    {
        /* Outputs for IfAction SubSystem: '<S8>/SF' incorporates:
         *  ActionPort: '<S15>/Action Port'
         */
        OBCR_ac_SF();

        /* End of Outputs for SubSystem: '<S8>/SF' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S8>/SF1' incorporates:
         *  ActionPort: '<S16>/Action Port'
         */
        OBCR_ac_SF1();

        /* End of Outputs for SubSystem: '<S8>/SF1' */
    }

    /* End of If: '<S8>/If' */

    /* DataTypeConversion: '<S12>/DataTypeConversion' incorporates:
     *  Merge: '<S8>/Merge_3'
     */
    OBCR_ac_B.DataTypeConversion_ch = OBCR_ac_B.Merge_3;

    /* RelationalOperator: '<S135>/Comparison5' incorporates:
     *  Constant: '<S297>/Constant'
     *  RelationalOperator: '<S10>/Comparison1'
     *  Switch: '<S6>/Switch59'
     */
    rtb_AND_me = (((uint32)VeOBCR_e_EVSE_ProxStat_In) == CeOBCR_e_ProxIn_OBCM);

    /* Outputs for Atomic SubSystem: '<S135>/EdgeFalling' */
    /* Logic: '<S292>/AND' incorporates:
     *  Logic: '<S292>/OR1'
     *  UnitDelay: '<S292>/Unit Delay'
     */
    rtb_OR1_ei = ((!rtb_AND_me) && (OBCR_ac_DW.UnitDelay_DSTATE_c1));

    /* Update for UnitDelay: '<S292>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_c1 = rtb_AND_me;

    /* End of Outputs for SubSystem: '<S135>/EdgeFalling' */

    /* RelationalOperator: '<S135>/Comparison2' incorporates:
     *  DataTypeConversion: '<S12>/DataTypeConversion'
     *  RelationalOperator: '<S135>/Comparison1'
     *  RelationalOperator: '<S135>/Comparison3'
     *  RelationalOperator: '<S135>/Comparison4'
     */
    IntegerDelay1 = OBCR_ac_B.DataTypeConversion_ch;

    /* Outputs for Atomic SubSystem: '<S135>/Signal Latch On With Reset' */
    /* Logic: '<S300>/OR1' incorporates:
     *  Constant: '<S295>/Constant'
     *  Constant: '<S296>/Constant'
     *  Logic: '<S135>/Logical2'
     *  Logic: '<S300>/NOT'
     *  Logic: '<S300>/OR'
     *  RelationalOperator: '<S135>/Comparison2'
     *  RelationalOperator: '<S135>/Comparison3'
     *  UnitDelay: '<S300>/Unit Delay'
     */
    rtb_AND_me = ((CeOBCR_e_ChargeComplete == ((uint32)IntegerDelay1)) ||
                  (((((uint32)IntegerDelay1) != CeOBCR_e_PowerUp) &&
                    (!rtb_OR1_ei)) && (OBCR_ac_DW.UnitDelay_DSTATE_nn)));

    /* Update for UnitDelay: '<S300>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_nn = rtb_AND_me;

    /* End of Outputs for SubSystem: '<S135>/Signal Latch On With Reset' */

    /* Logic: '<S135>/Logical1' incorporates:
     *  Constant: '<S293>/Constant'
     *  Constant: '<S294>/Constant'
     *  RelationalOperator: '<S135>/Comparison1'
     *  RelationalOperator: '<S135>/Comparison4'
     */
    rtb_OR1_ei = ((CeOBCR_e_Charging == ((uint32)IntegerDelay1)) || (((uint32)
                    IntegerDelay1) == CeOBCR_e_ChargingPaused));

    /* Outputs for Atomic SubSystem: '<S134>/EdgeRising' */
    /* Logic: '<S271>/AND' incorporates:
     *  Logic: '<S271>/OR1'
     *  UnitDelay: '<S271>/Unit Delay'
     */
    rtb_AND_ny = !OBCR_ac_DW.UnitDelay_DSTATE_pn;

    /* Update for UnitDelay: '<S271>/Unit Delay' incorporates:
     *  Constant: '<S134>/TRUE Constant1'
     */
    OBCR_ac_DW.UnitDelay_DSTATE_pn = true;

    /* End of Outputs for SubSystem: '<S134>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S134>/Lowpass Second Order Enabled' */
    /* Switch: '<S286>/Switch3' incorporates:
     *  Switch: '<S286>/Switch1'
     */
    if (rtb_AND_ny)
    {
        /* Switch: '<S286>/Switch3' */
        rtb_Switch6 = rtb_TmpSignalConversionAtVeBP_a;

        /* Switch: '<S286>/Switch1' */
        VeOBCR_k_BatCapCalDbg1 = rtb_TmpSignalConversionAtVeBP_a;
    }
    else
    {
        /* Switch: '<S286>/Switch3' incorporates:
         *  UnitDelay: '<S286>/x2'
         */
        rtb_Switch6 = OBCR_ac_DW.x2_DSTATE_n;

        /* Product: '<S286>/Multiplication1' incorporates:
         *  Constant: '<S275>/Calib'
         *  Constant: '<S283>/Calib'
         *  MinMax: '<S286>/Maximum'
         */
        rtb_Switch7 = (1.0F / fmaxf(KeOBCR_K_SOC_FilterTimeConst1, (float32)
                        Rte_Prm_HeOBCR_t_dT_HeOBCR_t_dT())) * ((float32)
            Rte_Prm_HeOBCR_t_dT_HeOBCR_t_dT());

        /* Switch: '<S286>/Switch1' incorporates:
         *  Constant: '<S284>/Calib'
         *  Gain: '<S286>/Gain'
         *  Gain: '<S286>/Gain1'
         *  Math: '<S286>/Square'
         *  Product: '<S286>/Multiplication2'
         *  Product: '<S286>/Multiplication3'
         *  Sum: '<S286>/Subtraction'
         *  Sum: '<S286>/Subtraction1'
         *  Sum: '<S286>/Summation'
         *  UnitDelay: '<S286>/temp'
         */
        VeOBCR_k_BatCapCalDbg1 = (((((OBCR_ac_DW.temp_DSTATE_h - rtb_Switch6) *
            (2.0F * KeOBCR_K_SOC_FilterTimeConst2)) * rtb_Switch7) +
            ((rtb_Switch7 * rtb_Switch7) * (rtb_TmpSignalConversionAtVeBP_a -
            OBCR_ac_DW.temp_DSTATE_h))) - OBCR_ac_DW.temp_DSTATE_h) + (2.0F *
            rtb_Switch6);
    }

    /* End of Switch: '<S286>/Switch3' */

    /* Update for UnitDelay: '<S286>/x2' */
    OBCR_ac_DW.x2_DSTATE_n = VeOBCR_k_BatCapCalDbg1;

    /* Update for UnitDelay: '<S286>/temp' */
    OBCR_ac_DW.temp_DSTATE_h = rtb_Switch6;

    /* End of Outputs for SubSystem: '<S134>/Lowpass Second Order Enabled' */

    /* Product: '<S131>/Product4' incorporates:
     *  Constant: '<S131>/Constant Value7'
     *  Constant: '<S131>/Constant Value8'
     *  Product: '<S131>/Product3'
     *  Sum: '<S131>/Sum2'
     */
    VeOBCR_cmp_AvalBatCap1 = (1.0F - (VeOBCR_k_BatCapCalDbg1 * 0.01F)) *
        VeOBCR_q_BatteryCapacity;

    /* MinMax: '<S131>/MinMax1' incorporates:
     *  Constant: '<S131>/Constant Value1'
     *  Constant: '<S137>/Calib'
     *  Product: '<S131>/Product1'
     *  Sum: '<S131>/Sum'
     */
    rtb_Switch6 = fmaxf(VeOBCR_cmp_AvalBatCap1 - (VeOBCR_q_BatteryCapacity *
                         KeOBCR_Pct_UnusedUpperSOCBand), 0.0F);

    /* Lookup_n-D: '<S299>/Vector' incorporates:
     *  Switch: '<S286>/Switch1'
     */
    rtb_Switch7 = look1_iflf_binlcapw(VeOBCR_k_BatCapCalDbg1, ((const float32 *)
        &(KxOBCR_K_SOC2TimeFactor[0])), ((const float32 *)
        &(KtOBCR_K_SOC2TimeFactor[0])), 6U);

    /* Outputs for Atomic SubSystem: '<S134>/EdgeRising2' */
    /* Logic: '<S273>/AND' incorporates:
     *  Logic: '<S273>/OR1'
     *  UnitDelay: '<S273>/Unit Delay'
     */
    rtb_AND_ny = !OBCR_ac_DW.UnitDelay_DSTATE_nr;

    /* Update for UnitDelay: '<S273>/Unit Delay' incorporates:
     *  Constant: '<S134>/TRUE Constant5'
     */
    OBCR_ac_DW.UnitDelay_DSTATE_nr = true;

    /* End of Outputs for SubSystem: '<S134>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S134>/Lowpass Second Order Enabled2' */
    /* Switch: '<S288>/Switch3' incorporates:
     *  Switch: '<S288>/Switch1'
     */
    if (rtb_AND_ny)
    {
        /* Switch: '<S288>/Switch3' */
        rtb_Switch_nt = rtb_TmpSignalConversionAtVeBP_e;

        /* Switch: '<S288>/Switch1' */
        rtb_Multiplication1 = rtb_TmpSignalConversionAtVeBP_e;
    }
    else
    {
        /* Switch: '<S288>/Switch3' incorporates:
         *  UnitDelay: '<S288>/x2'
         */
        rtb_Switch_nt = OBCR_ac_DW.x2_DSTATE;

        /* Product: '<S288>/Multiplication1' incorporates:
         *  Constant: '<S275>/Calib'
         *  Constant: '<S278>/Calib'
         *  MinMax: '<S288>/Maximum'
         */
        rtb_Multiplication1 = (1.0F / fmaxf(KeOBCR_K_BattTemp_FilterTimeConst1,
                                (float32)Rte_Prm_HeOBCR_t_dT_HeOBCR_t_dT())) *
            ((float32)Rte_Prm_HeOBCR_t_dT_HeOBCR_t_dT());

        /* Switch: '<S288>/Switch1' incorporates:
         *  Constant: '<S279>/Calib'
         *  Gain: '<S288>/Gain'
         *  Gain: '<S288>/Gain1'
         *  Math: '<S288>/Square'
         *  Product: '<S288>/Multiplication2'
         *  Product: '<S288>/Multiplication3'
         *  Sum: '<S288>/Subtraction'
         *  Sum: '<S288>/Subtraction1'
         *  Sum: '<S288>/Summation'
         *  UnitDelay: '<S288>/temp'
         *  UnitDelay: '<S288>/x2'
         */
        rtb_Multiplication1 = (((((OBCR_ac_DW.temp_DSTATE - OBCR_ac_DW.x2_DSTATE)
            * (2.0F * KeOBCR_K_BattTemp_FilterTimeConst2)) * rtb_Multiplication1)
                                + ((rtb_Multiplication1 * rtb_Multiplication1) *
            (rtb_TmpSignalConversionAtVeBP_e - OBCR_ac_DW.temp_DSTATE))) -
                               OBCR_ac_DW.temp_DSTATE) + (2.0F *
            OBCR_ac_DW.x2_DSTATE);
    }

    /* End of Switch: '<S288>/Switch3' */

    /* Update for UnitDelay: '<S288>/x2' */
    OBCR_ac_DW.x2_DSTATE = rtb_Multiplication1;

    /* Update for UnitDelay: '<S288>/temp' */
    OBCR_ac_DW.temp_DSTATE = rtb_Switch_nt;

    /* End of Outputs for SubSystem: '<S134>/Lowpass Second Order Enabled2' */

    /* Sum: '<S136>/Sum4' incorporates:
     *  Constant: '<S136>/Constant Value13'
     *  Lookup_n-D: '<S302>/Vector'
     *  Switch: '<S288>/Switch1'
     */
    rtb_Switch_nt = look1_iflf_binlcapw(rtb_Multiplication1, ((const float32 *)
        &(KxOBCR_k_BattChrgCrntLimitTime[0])), ((const float32 *)
        &(KtOBCR_k_BattChrgCrntLimitTime[0])), 11U) + 1.0F;

    /* Outputs for Atomic SubSystem: '<S136>/Protected Division' */
    /* Switch: '<S304>/Switch1' incorporates:
     *  Constant: '<S304>/Constant Value'
     *  RelationalOperator: '<S304>/Not Equal'
     */
    if (rtb_Switch_nt != 0.0F)
    {
        /* Switch: '<S304>/Switch1' incorporates:
         *  Constant: '<S136>/Constant Value14'
         *  Product: '<S304>/Division'
         */
        rtb_Switch_nt /= 2.0F;
    }
    else
    {
        /* Switch: '<S304>/Switch1' incorporates:
         *  Constant: '<S304>/Constant Value4'
         *  Switch: '<S304>/Switch2'
         *  Switch: '<S304>/Switch3'
         */
        rtb_Switch_nt = 0.0F;
    }

    /* End of Switch: '<S304>/Switch1' */
    /* End of Outputs for SubSystem: '<S136>/Protected Division' */

    /* Outputs for Atomic SubSystem: '<S136>/Limiter' */
    /* Switch: '<S303>/Switch1' incorporates:
     *  Constant: '<S136>/Constant Value16'
     *  RelationalOperator: '<S303>/Relational Operator'
     */
    if (1.0F < rtb_Switch_nt)
    {
        /* Switch: '<S355>/Switch1' */
        rtb_Switch_nt = 1.0F;
    }

    /* End of Switch: '<S303>/Switch1' */

    /* Switch: '<S303>/Switch' incorporates:
     *  Constant: '<S136>/Constant Value15'
     *  RelationalOperator: '<S303>/Relational Operator1'
     */
    if (rtb_Switch_nt <= 0.5F)
    {
        rtb_Switch_nt = 0.5F;
    }

    /* End of Switch: '<S303>/Switch' */
    /* End of Outputs for SubSystem: '<S136>/Limiter' */

    /* Product: '<S136>/Product13' incorporates:
     *  Constant: '<S301>/Calib'
     */
    VeOBCR_k_ChrgTimeEstDebug7 = KeOBCR_K_ChargTimeCalFactor * rtb_Switch_nt;

    /* Switch: '<S134>/Switch4' */
    if (rtb_TmpSignalConversionAtVeCC_h)
    {
        /* Switch: '<S134>/Switch4' incorporates:
         *  Constant: '<S276>/Calib'
         *  Constant: '<S277>/Calib'
         *  DataTypeConversion: '<S134>/Data Type Conversion'
         *  MinMax: '<S134>/MinMax1'
         *  Product: '<S134>/Product1'
         *  Selector: '<S134>/Selector1'
         *  SignalConversion generated from: '<S1>/VeCCCR_e_PwrLevSet'
         */
        rtb_Switch_nt = fmaxf(rtb_TmpSignalConversionAtVeCC_k *
                              KaOBCR_k_LvlPerc[(rtb_TmpSignalConversionAtVeCC_i)],
                              KeOBCR_I_MinChrgCurr);
    }
    else
    {
        /* Switch: '<S134>/Switch4' */
        rtb_Switch_nt = rtb_TmpSignalConversionAtVeCC_k;
    }

    /* End of Switch: '<S134>/Switch4' */

    /* Switch: '<S134>/Switch1' incorporates:
     *  Constant: '<S285>/Calib'
     */
    rtb_AND_ny = ((KeOBCR_b_ChrgCrntFltRstSel) || rtb_OR1_ei);

    /* Outputs for Atomic SubSystem: '<S134>/EdgeRising1' */
    /* Logic: '<S272>/AND' incorporates:
     *  Logic: '<S272>/OR1'
     *  UnitDelay: '<S272>/Unit Delay'
     */
    rtb_AND_mk = (rtb_AND_ny && (!OBCR_ac_DW.UnitDelay_DSTATE_ng));

    /* Update for UnitDelay: '<S272>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_ng = rtb_AND_ny;

    /* End of Outputs for SubSystem: '<S134>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S134>/Lowpass Second Order Enabled1' */
    /* Switch: '<S287>/Switch3' incorporates:
     *  Switch: '<S287>/Switch1'
     */
    if (rtb_AND_mk)
    {
        /* Switch: '<S287>/Switch3' */
        rtb_Switch3_oxd = rtb_Switch_nt;
    }
    else
    {
        /* Switch: '<S287>/Switch3' incorporates:
         *  UnitDelay: '<S287>/x2'
         */
        rtb_Switch3_oxd = OBCR_ac_DW.x2_DSTATE_a;

        /* Product: '<S287>/Multiplication1' incorporates:
         *  Constant: '<S275>/Calib'
         *  Constant: '<S281>/Calib'
         *  MinMax: '<S287>/Maximum'
         */
        rtb_Multiplication1_l = (1.0F / fmaxf
            (KeOBCR_K_ChrgCurrAval_FilterTimeConst_T, (float32)
             Rte_Prm_HeOBCR_t_dT_HeOBCR_t_dT())) * ((float32)
            Rte_Prm_HeOBCR_t_dT_HeOBCR_t_dT());

        /* Switch: '<S287>/Switch1' incorporates:
         *  Constant: '<S280>/Calib'
         *  Gain: '<S287>/Gain'
         *  Gain: '<S287>/Gain1'
         *  Math: '<S287>/Square'
         *  Product: '<S287>/Multiplication2'
         *  Product: '<S287>/Multiplication3'
         *  Sum: '<S287>/Subtraction'
         *  Sum: '<S287>/Subtraction1'
         *  Sum: '<S287>/Summation'
         *  UnitDelay: '<S287>/temp'
         *  UnitDelay: '<S287>/x2'
         */
        rtb_Switch_nt = (((((OBCR_ac_DW.temp_DSTATE_e - OBCR_ac_DW.x2_DSTATE_a) *
                            (2.0F * KeOBCR_K_ChrgCurrAval_FilterTimeConst_D)) *
                           rtb_Multiplication1_l) + ((rtb_Multiplication1_l *
                            rtb_Multiplication1_l) * (rtb_Switch_nt -
                            OBCR_ac_DW.temp_DSTATE_e))) -
                         OBCR_ac_DW.temp_DSTATE_e) + (2.0F *
            OBCR_ac_DW.x2_DSTATE_a);
    }

    /* End of Switch: '<S287>/Switch3' */

    /* Update for UnitDelay: '<S287>/x2' */
    OBCR_ac_DW.x2_DSTATE_a = rtb_Switch_nt;

    /* Update for UnitDelay: '<S287>/temp' */
    OBCR_ac_DW.temp_DSTATE_e = rtb_Switch3_oxd;

    /* End of Outputs for SubSystem: '<S134>/Lowpass Second Order Enabled1' */

    /* Outputs for Atomic SubSystem: '<S134>/EdgeRising3' */
    /* Logic: '<S274>/OR1' incorporates:
     *  UnitDelay: '<S274>/Unit Delay'
     */
    rtb_AND_ny = !OBCR_ac_DW.UnitDelay_DSTATE_ag;

    /* Update for UnitDelay: '<S274>/Unit Delay' incorporates:
     *  Constant: '<S134>/TRUE Constant6'
     */
    OBCR_ac_DW.UnitDelay_DSTATE_ag = true;

    /* End of Outputs for SubSystem: '<S134>/EdgeRising3' */

    /* Outputs for Atomic SubSystem: '<S134>/Windowed Average' */
    /* Outputs for Atomic SubSystem: '<S289>/Limiter' */
    /* Switch: '<S291>/Switch1' incorporates:
     *  Constant: '<S282>/Calib'
     *  Constant: '<S289>/Constant Value1'
     *  RelationalOperator: '<S291>/Relational Operator'
     */
    if (500 < ((sint32)KeOBCR_K_DCCurr_FiltWindowSize))
    {
        /* Switch: '<S291>/Switch1' */
        rtb_Switch1_jd = 500U;
    }
    else
    {
        /* Switch: '<S291>/Switch1' */
        rtb_Switch1_jd = KeOBCR_K_DCCurr_FiltWindowSize;
    }

    /* End of Switch: '<S291>/Switch1' */

    /* Switch: '<S291>/Switch' incorporates:
     *  Constant: '<S289>/Constant Value'
     *  RelationalOperator: '<S291>/Relational Operator1'
     */
    if (((sint32)rtb_Switch1_jd) <= 1)
    {
        /* Switch: '<S291>/Switch' */
        rtb_Switch1_jd = 1U;
    }

    /* End of Switch: '<S291>/Switch' */
    /* End of Outputs for SubSystem: '<S289>/Limiter' */

    /* Outputs for Atomic SubSystem: '<S134>/EdgeRising3' */
    /* Chart: '<S289>/Chart' incorporates:
     *  Logic: '<S274>/AND'
     */
    /* Gateway: OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/InputFiltering/Windowed
       Average/Chart */
    /* During: OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/InputFiltering/Windowed
       Average/Chart */
    /* Entry Internal: OBCR_FUNC_MedTED/OBCC/Misc/ChrgTimeCalc/InputFiltering/Windowed
       Average/Chart */
    /* Transition: '<S290>:1' */
    if (rtb_AND_ny || ((rtb_Switch1_jd != OBCR_ac_DW.prior_window_size) &&
                       (OBCR_ac_DW.first_pass_complete)))
    {
        /* Transition: '<S290>:2' */
        /* Transition: '<S290>:4' */
        OBCR_ac_DW.count = 0U;
        OBCR_ac_DW.sum = 0.0F;
        OBCR_ac_DW.average = 0.0F;

        /* Transition: '<S290>:10' */
        /* Transition: '<S290>:7' */
    }
    else
    {
        /* Transition: '<S290>:9' */
        OBCR_ac_DW.sum += rtb_TmpSignalConversionAtVeCCCR;
        OBCR_ac_DW.count = (uint16)((sint32)(((sint32)OBCR_ac_DW.count) + 1));
        if (OBCR_ac_DW.count >= rtb_Switch1_jd)
        {
            /* Transition: '<S290>:3' */
            /* Transition: '<S290>:5' */
            OBCR_ac_DW.average = OBCR_ac_DW.sum / ((float32)OBCR_ac_DW.count);
            OBCR_ac_DW.sum = 0.0F;
            OBCR_ac_DW.count = 0U;

            /* Transition: '<S290>:7' */
        }
        else
        {
            /* Transition: '<S290>:6' */
        }
    }

    /* End of Outputs for SubSystem: '<S134>/EdgeRising3' */
    /* Transition: '<S290>:8' */
    OBCR_ac_DW.prior_window_size = rtb_Switch1_jd;
    OBCR_ac_DW.first_pass_complete = true;

    /* End of Outputs for SubSystem: '<S134>/Windowed Average' */

    /* Sum: '<S387>/Sum3' incorporates:
     *  Lookup_n-D: '<S268>/Vector'
     *  Switch: '<S288>/Switch1'
     */
    rtb_Switch3_oxd = look1_iflf_binlcapw(rtb_Multiplication1, ((const float32 *)
        &(KxOBCR_k_DCTempFactor_Window[0])), ((const float32 *)
        &(KtOBCR_k_DCTempFactor_Window[0])), 6U);

    /* Outputs for IfAction SubSystem: '<S132>/ConChrgTimeEst' incorporates:
     *  ActionPort: '<S138>/Action Port'
     */
    /* If: '<S132>/If' incorporates:
     *  Lookup_n-D: '<S269>/Vector'
     *  Rounding: '<S133>/Rounding'
     *  Rounding: '<S165>/Rounding1'
     *  Switch: '<S286>/Switch1'
     */
    rtb_Multiplication1 = floorf(look1_iflf_binlcapw(VeOBCR_k_BatCapCalDbg1, ((
        const float32 *)&(KxOBCR_k_SOCIndex_Select[0])), ((const float32 *)
        &(KtOBCR_k_SOCIndex_Select[0])), 6U));

    /* End of Outputs for SubSystem: '<S132>/ConChrgTimeEst' */

    /* RelationalOperator: '<S133>/Comparison4' incorporates:
     *  Constant: '<S133>/Constant Value'
     *  Rounding: '<S133>/Rounding'
     */
    VeOBCR_b_DCEstTemp1 = (rtb_Multiplication1 == 1.0F);

    /* Switch: '<S133>/Switch1' */
    if (VeOBCR_b_DCEstTemp1)
    {
        /* Switch: '<S133>/Switch1' */
        VeOBCR_k_DCEstTempFactor1 = rtb_Switch3_oxd;
    }
    else
    {
        /* Switch: '<S133>/Switch1' incorporates:
         *  Constant: '<S267>/Calib'
         */
        VeOBCR_k_DCEstTempFactor1 = KeOBCR_k_DCTempFactor_Default;
    }

    /* End of Switch: '<S133>/Switch1' */

    /* RelationalOperator: '<S133>/Comparison1' incorporates:
     *  Constant: '<S133>/Constant Value1'
     *  Rounding: '<S133>/Rounding'
     */
    VeOBCR_b_DCEstTemp2 = (rtb_Multiplication1 == 2.0F);

    /* Switch: '<S133>/Switch3' */
    if (VeOBCR_b_DCEstTemp2)
    {
        /* Switch: '<S133>/Switch3' */
        VeOBCR_k_DCEstTempFactor2 = rtb_Switch3_oxd;
    }
    else
    {
        /* Switch: '<S133>/Switch3' incorporates:
         *  Constant: '<S267>/Calib'
         */
        VeOBCR_k_DCEstTempFactor2 = KeOBCR_k_DCTempFactor_Default;
    }

    /* End of Switch: '<S133>/Switch3' */

    /* RelationalOperator: '<S133>/Comparison2' incorporates:
     *  Constant: '<S133>/Constant Value2'
     *  Rounding: '<S133>/Rounding'
     */
    VeOBCR_b_DCEstTemp3 = (rtb_Multiplication1 == 3.0F);

    /* Switch: '<S133>/Switch10' */
    if (VeOBCR_b_DCEstTemp3)
    {
        /* Switch: '<S133>/Switch10' */
        VeOBCR_k_DCEstTempFactor3 = rtb_Switch3_oxd;
    }
    else
    {
        /* Switch: '<S133>/Switch10' incorporates:
         *  Constant: '<S267>/Calib'
         */
        VeOBCR_k_DCEstTempFactor3 = KeOBCR_k_DCTempFactor_Default;
    }

    /* End of Switch: '<S133>/Switch10' */

    /* RelationalOperator: '<S133>/Comparison3' incorporates:
     *  Constant: '<S133>/Constant Value3'
     *  Rounding: '<S133>/Rounding'
     */
    VeOBCR_b_DCEstTemp4 = (rtb_Multiplication1 == 4.0F);

    /* Switch: '<S133>/Switch11' */
    if (VeOBCR_b_DCEstTemp4)
    {
        /* Switch: '<S133>/Switch11' */
        VeOBCR_k_DCEstTempFactor4 = rtb_Switch3_oxd;
    }
    else
    {
        /* Switch: '<S133>/Switch11' incorporates:
         *  Constant: '<S267>/Calib'
         */
        VeOBCR_k_DCEstTempFactor4 = KeOBCR_k_DCTempFactor_Default;
    }

    /* End of Switch: '<S133>/Switch11' */

    /* RelationalOperator: '<S133>/Comparison5' incorporates:
     *  Constant: '<S133>/Constant Value4'
     *  Rounding: '<S133>/Rounding'
     */
    VeOBCR_b_DCEstTemp5 = (rtb_Multiplication1 == 5.0F);

    /* Switch: '<S133>/Switch12' */
    if (VeOBCR_b_DCEstTemp5)
    {
        /* Switch: '<S133>/Switch12' */
        VeOBCR_k_DCEstTempFactor5 = rtb_Switch3_oxd;
    }
    else
    {
        /* Switch: '<S133>/Switch12' incorporates:
         *  Constant: '<S267>/Calib'
         */
        VeOBCR_k_DCEstTempFactor5 = KeOBCR_k_DCTempFactor_Default;
    }

    /* End of Switch: '<S133>/Switch12' */

    /* RelationalOperator: '<S133>/Comparison6' incorporates:
     *  Constant: '<S133>/Constant Value9'
     *  Rounding: '<S133>/Rounding'
     */
    VeOBCR_b_DCEstTemp6 = (rtb_Multiplication1 == 6.0F);

    /* Switch: '<S133>/Switch13' */
    if (VeOBCR_b_DCEstTemp6)
    {
        /* Switch: '<S133>/Switch13' */
        VeOBCR_k_DCEstTempFactor6 = rtb_Switch3_oxd;
    }
    else
    {
        /* Switch: '<S133>/Switch13' incorporates:
         *  Constant: '<S267>/Calib'
         */
        VeOBCR_k_DCEstTempFactor6 = KeOBCR_k_DCTempFactor_Default;
    }

    /* End of Switch: '<S133>/Switch13' */

    /* RelationalOperator: '<S133>/Comparison7' incorporates:
     *  Constant: '<S133>/Constant Value10'
     *  Rounding: '<S133>/Rounding'
     */
    VeOBCR_b_DCEstTemp7 = (rtb_Multiplication1 == 7.0F);

    /* Switch: '<S133>/Switch14' */
    if (VeOBCR_b_DCEstTemp7)
    {
        /* Switch: '<S133>/Switch14' */
        VeOBCR_k_DCEstTempFactor7 = rtb_Switch3_oxd;
    }
    else
    {
        /* Switch: '<S133>/Switch14' incorporates:
         *  Constant: '<S267>/Calib'
         */
        VeOBCR_k_DCEstTempFactor7 = KeOBCR_k_DCTempFactor_Default;
    }

    /* End of Switch: '<S133>/Switch14' */

    /* Outputs for Atomic SubSystem: '<S133>/Limiter' */
    /* Switch: '<S270>/Switch1' incorporates:
     *  Constant: '<S133>/Constant Value5'
     *  RelationalOperator: '<S270>/Relational Operator'
     */
    if (1.0F < VeOBCR_k_DCEstTempFactor1)
    {
        /* Switch: '<S270>/Switch1' */
        rtb_Switch1_o2[0] = 1.0F;
    }
    else
    {
        /* Switch: '<S270>/Switch1' */
        rtb_Switch1_o2[0] = VeOBCR_k_DCEstTempFactor1;
    }

    if (1.0F < VeOBCR_k_DCEstTempFactor2)
    {
        /* Switch: '<S270>/Switch1' */
        rtb_Switch1_o2[1] = 1.0F;
    }
    else
    {
        /* Switch: '<S270>/Switch1' */
        rtb_Switch1_o2[1] = VeOBCR_k_DCEstTempFactor2;
    }

    if (1.0F < VeOBCR_k_DCEstTempFactor3)
    {
        /* Switch: '<S270>/Switch1' */
        rtb_Switch1_o2[2] = 1.0F;
    }
    else
    {
        /* Switch: '<S270>/Switch1' */
        rtb_Switch1_o2[2] = VeOBCR_k_DCEstTempFactor3;
    }

    if (1.0F < VeOBCR_k_DCEstTempFactor4)
    {
        /* Switch: '<S270>/Switch1' */
        rtb_Switch1_o2[3] = 1.0F;
    }
    else
    {
        /* Switch: '<S270>/Switch1' */
        rtb_Switch1_o2[3] = VeOBCR_k_DCEstTempFactor4;
    }

    if (1.0F < VeOBCR_k_DCEstTempFactor5)
    {
        /* Switch: '<S270>/Switch1' */
        rtb_Switch1_o2[4] = 1.0F;
    }
    else
    {
        /* Switch: '<S270>/Switch1' */
        rtb_Switch1_o2[4] = VeOBCR_k_DCEstTempFactor5;
    }

    if (1.0F < VeOBCR_k_DCEstTempFactor6)
    {
        /* Switch: '<S270>/Switch1' */
        rtb_Switch1_o2[5] = 1.0F;
    }
    else
    {
        /* Switch: '<S270>/Switch1' */
        rtb_Switch1_o2[5] = VeOBCR_k_DCEstTempFactor6;
    }

    if (1.0F < VeOBCR_k_DCEstTempFactor7)
    {
        /* Switch: '<S270>/Switch1' */
        rtb_Switch1_o2[6] = 1.0F;
    }
    else
    {
        /* Switch: '<S270>/Switch1' */
        rtb_Switch1_o2[6] = VeOBCR_k_DCEstTempFactor7;
    }

    /* End of Switch: '<S270>/Switch1' */
    /* End of Outputs for SubSystem: '<S133>/Limiter' */

    /* Outputs for Atomic SubSystem: '<S132>/EdgeRising2' */
    /* Logic: '<S144>/AND' incorporates:
     *  Logic: '<S144>/OR1'
     *  UnitDelay: '<S144>/Unit Delay'
     */
    rtb_AND_ny = (rtb_OR1_ei && (!OBCR_ac_DW.UnitDelay_DSTATE_ad));

    /* Update for UnitDelay: '<S144>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_ad = rtb_OR1_ei;

    /* End of Outputs for SubSystem: '<S132>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S132>/EdgeRising1' */
    /* Logic: '<S143>/OR1' incorporates:
     *  UnitDelay: '<S143>/Unit Delay'
     */
    rtb_AND_mk = !OBCR_ac_DW.UnitDelay_DSTATE_e2;

    /* Update for UnitDelay: '<S143>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_e2 = rtb_OR1_ei;

    /* Outputs for Atomic SubSystem: '<S132>/Signal Latch On With Reset' */
    /* Logic: '<S160>/OR1' incorporates:
     *  Logic: '<S132>/Logical Operator'
     *  Logic: '<S143>/AND'
     *  Logic: '<S160>/OR'
     *  UnitDelay: '<S160>/Unit Delay'
     */
    rtb_AND_mk = ((rtb_OR1_ei && rtb_AND_mk) || (rtb_OR1_ei &&
                   (OBCR_ac_DW.UnitDelay_DSTATE_pk)));

    /* End of Outputs for SubSystem: '<S132>/EdgeRising1' */

    /* Update for UnitDelay: '<S160>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_pk = rtb_AND_mk;

    /* End of Outputs for SubSystem: '<S132>/Signal Latch On With Reset' */

    /* Outputs for Atomic SubSystem: '<S132>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S163>/EdgeRising' */
    /* Logic: '<S266>/AND' incorporates:
     *  Logic: '<S266>/OR1'
     *  UnitDelay: '<S266>/Unit Delay'
     */
    rtb_AND_hc = (rtb_AND_mk && (!OBCR_ac_DW.UnitDelay_DSTATE_dd));

    /* Update for UnitDelay: '<S266>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_dd = rtb_AND_mk;

    /* End of Outputs for SubSystem: '<S163>/EdgeRising' */

    /* Switch: '<S163>/Switch1' incorporates:
     *  Constant: '<S145>/Calib'
     *  Constant: '<S163>/Constant Value'
     *  Logic: '<S163>/OR'
     *  Logic: '<S163>/OR1'
     *  MinMax: '<S163>/Minimum'
     *  Sum: '<S163>/Summation'
     *  UnitDelay: '<S163>/Unit Delay'
     */
    if ((!rtb_AND_mk) || rtb_AND_hc)
    {
        /* Switch: '<S163>/Switch1' incorporates:
         *  Constant: '<S163>/Constant Value1'
         */
        rtb_Switch1_jd = 0U;
    }
    else if (KeOBCR_Cnt_ConChrgTimeEstDly < ((uint16)(((uint32)
                OBCR_ac_DW.UnitDelay_DSTATE_i5) + 1U)))
    {
        /* MinMax: '<S163>/Minimum' incorporates:
         *  Constant: '<S145>/Calib'
         *  Switch: '<S163>/Switch1'
         */
        rtb_Switch1_jd = KeOBCR_Cnt_ConChrgTimeEstDly;
    }
    else
    {
        /* Switch: '<S163>/Switch1' incorporates:
         *  Constant: '<S163>/Constant Value'
         *  MinMax: '<S163>/Minimum'
         *  Sum: '<S163>/Summation'
         *  UnitDelay: '<S163>/Unit Delay'
         */
        rtb_Switch1_jd = (uint16)(((uint32)OBCR_ac_DW.UnitDelay_DSTATE_i5) + 1U);
    }

    /* End of Switch: '<S163>/Switch1' */

    /* Update for UnitDelay: '<S163>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_i5 = rtb_Switch1_jd;

    /* End of Outputs for SubSystem: '<S132>/Turn On Delay Sample' */

    /* If: '<S132>/If' incorporates:
     *  Inport: '<Root>/VeCCCR_I_HWCurrentBound'
     *  Switch: '<S164>/Switch2'
     *  Switch: '<S164>/Switch4'
     */
    if (!rtb_OR1_ei)
    {
        /* Outputs for IfAction SubSystem: '<S132>/NConn_ChrgTimeEst' incorporates:
         *  ActionPort: '<S159>/Action Port'
         */
        /* Switch: '<S229>/Switch1' incorporates:
         *  Constant: '<S225>/Constant'
         *  Constant: '<S226>/Constant'
         *  Constant: '<S38>/Calib'
         *  RelationalOperator: '<S223>/Comparison1'
         *  RelationalOperator: '<S223>/Comparison3'
         *  RelationalOperator: '<S22>/Comparison2'
         *  Switch: '<S229>/Switch3'
         *  Switch: '<S230>/Switch1'
         *  Switch: '<S230>/Switch3'
         */
        if (((uint32)KeOBCR_e_InterMarketsSelection) == CeOBCR_e_China)
        {
            /* Switch: '<S229>/Switch1' incorporates:
             *  Constant: '<S236>/Calib'
             */
            rtb_Sum2_d = KeOBCR_I_Lv2Crnt_NotConn_China;

            /* Switch: '<S230>/Switch1' incorporates:
             *  Constant: '<S234>/Calib'
             */
            rtb_Multiplication1 = KeOBCR_I_Lv1Crnt_NotConn_China;
        }
        else if (((uint32)KeOBCR_e_InterMarketsSelection) ==
                 CeOBCR_e_EuropeAfricaMiddleEast)
        {
            /* Switch: '<S229>/Switch3' incorporates:
             *  Constant: '<S237>/Calib'
             *  Switch: '<S229>/Switch1'
             */
            rtb_Sum2_d = KeOBCR_I_Lv2Crnt_NotConn_EMEA;

            /* Switch: '<S230>/Switch3' incorporates:
             *  Constant: '<S235>/Calib'
             *  Switch: '<S230>/Switch1'
             */
            rtb_Multiplication1 = KeOBCR_I_Lv1Crnt_NotConn_EMEA;
        }
        else
        {
            /* Switch: '<S229>/Switch1' incorporates:
             *  Constant: '<S233>/Calib'
             *  Switch: '<S229>/Switch3'
             */
            rtb_Sum2_d = KeOBCR_I_DfltLvlTwoCrnt_NotConn;

            /* Switch: '<S230>/Switch1' incorporates:
             *  Constant: '<S232>/Calib'
             *  Switch: '<S230>/Switch3'
             */
            rtb_Multiplication1 = KeOBCR_I_DfltLvlOneCrnt_NotConn;
        }

        /* End of Switch: '<S229>/Switch1' */

        /* Product: '<S223>/Product21' incorporates:
         *  Constant: '<S239>/Calib'
         */
        rtb_Switch_nt = rtb_Switch6 * KeOBCR_K_AddLevelOneFactorCap;

        /* Switch: '<S223>/Switch2' */
        if (rtb_TmpSignalConversionAtVeCC_h)
        {
            /* Switch: '<S223>/Switch2' incorporates:
             *  Constant: '<S231>/Calib'
             *  Constant: '<S238>/Calib'
             *  DataTypeConversion: '<S223>/Data Type Conversion'
             *  MinMax: '<S223>/MinMax3'
             *  Product: '<S223>/Product3'
             *  Selector: '<S223>/Selector1'
             *  SignalConversion generated from: '<S1>/VeCCCR_e_PwrLevSet'
             */
            OBCR_ac_B.Switch2 = fmaxf(rtb_Multiplication1 * KaOBCR_k_LvlPerc
                [(sint16)rtb_TmpSignalConversionAtVeCC_i], KeOBCR_I_MinChrgCurr);
        }
        else
        {
            /* Switch: '<S223>/Switch2' */
            OBCR_ac_B.Switch2 = rtb_Multiplication1;
        }

        /* End of Switch: '<S223>/Switch2' */

        /* Outputs for Atomic SubSystem: '<S223>/Protected Division' */
        /* Switch: '<S247>/Switch1' incorporates:
         *  Constant: '<S247>/Constant Value'
         *  Constant: '<S247>/Constant Value1'
         *  Constant: '<S247>/Constant Value2'
         *  Constant: '<S247>/Constant Value3'
         *  Logic: '<S247>/AND'
         *  RelationalOperator: '<S247>/Greater Than or Equal '
         *  RelationalOperator: '<S247>/Greater Than or Equal 1'
         *  RelationalOperator: '<S247>/Not Equal'
         *  RelationalOperator: '<S247>/Not Equal1'
         *  Switch: '<S247>/Switch2'
         *  Switch: '<S247>/Switch3'
         */
        if ((rtb_Switch_nt != 0.0F) && (OBCR_ac_B.Switch2 != 0.0F))
        {
            /* Switch: '<S247>/Switch1' incorporates:
             *  Product: '<S247>/Division'
             */
            rtb_Multiplication1 = rtb_Switch_nt / OBCR_ac_B.Switch2;
        }
        else if (rtb_Switch_nt > 0.0F)
        {
            /* Switch: '<S247>/Switch2' incorporates:
             *  Constant: '<S247>/MAXFLOAT'
             *  Switch: '<S247>/Switch1'
             */
            rtb_Multiplication1 = 3.402823466E+38F;
        }
        else if (rtb_Switch_nt < 0.0F)
        {
            /* Switch: '<S247>/Switch3' incorporates:
             *  Constant: '<S247>/MINFLOAT'
             *  Switch: '<S247>/Switch1'
             *  Switch: '<S247>/Switch2'
             */
            rtb_Multiplication1 = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S247>/Switch1' incorporates:
             *  Constant: '<S247>/Constant Value4'
             *  Switch: '<S247>/Switch2'
             *  Switch: '<S247>/Switch3'
             */
            rtb_Multiplication1 = 0.0F;
        }

        /* End of Switch: '<S247>/Switch1' */
        /* End of Outputs for SubSystem: '<S223>/Protected Division' */

        /* Outputs for Atomic SubSystem: '<S223>/Protected Division1' */
        /* Switch: '<S248>/Switch1' incorporates:
         *  Constant: '<S248>/Constant Value'
         *  Constant: '<S248>/Constant Value1'
         *  Constant: '<S248>/Constant Value2'
         *  Constant: '<S248>/Constant Value3'
         *  Logic: '<S248>/AND'
         *  RelationalOperator: '<S248>/Greater Than or Equal '
         *  RelationalOperator: '<S248>/Greater Than or Equal 1'
         *  RelationalOperator: '<S248>/Not Equal'
         *  RelationalOperator: '<S248>/Not Equal1'
         *  Switch: '<S248>/Switch2'
         *  Switch: '<S248>/Switch3'
         */
        if ((rtb_Multiplication1 != 0.0F) && (VeOBCR_k_ChrgTimeEstDebug7 != 0.0F))
        {
            /* Switch: '<S248>/Switch1' incorporates:
             *  Product: '<S248>/Division'
             */
            rtb_Multiplication1 /= VeOBCR_k_ChrgTimeEstDebug7;
        }
        else if (rtb_Multiplication1 > 0.0F)
        {
            /* Switch: '<S248>/Switch2' incorporates:
             *  Constant: '<S248>/MAXFLOAT'
             *  Switch: '<S248>/Switch1'
             */
            rtb_Multiplication1 = 3.402823466E+38F;
        }
        else if (rtb_Multiplication1 < 0.0F)
        {
            /* Switch: '<S248>/Switch3' incorporates:
             *  Constant: '<S248>/MINFLOAT'
             *  Switch: '<S248>/Switch1'
             *  Switch: '<S248>/Switch2'
             */
            rtb_Multiplication1 = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S248>/Switch1' incorporates:
             *  Constant: '<S248>/Constant Value4'
             *  Switch: '<S248>/Switch2'
             *  Switch: '<S248>/Switch3'
             */
            rtb_Multiplication1 = 0.0F;
        }

        /* End of Switch: '<S248>/Switch1' */
        /* End of Outputs for SubSystem: '<S223>/Protected Division1' */

        /* Switch: '<S223>/Switch13' incorporates:
         *  Constant: '<S241>/Calib'
         *  Constant: '<S243>/Calib'
         */
        if (KeOBCR_b_AddLevelOneFactorMul)
        {
            rtb_Product3_b = KeOBCR_k_AddLevelOneFactorMul;
        }
        else
        {
            rtb_Product3_b = rtb_Switch7;
        }

        /* End of Switch: '<S223>/Switch13' */

        /* Product: '<S223>/Product10' incorporates:
         *  Constant: '<S223>/Constant Value4'
         *  Constant: '<S244>/Calib'
         *  Product: '<S223>/Product2'
         *  Sum: '<S223>/Sum3'
         */
        VeOBCR_k_ChrgTimeEstDebug3 = ((rtb_Multiplication1 * 60.0F) +
            KeOBCR_t_AddLv1Factor_NotConn) * rtb_Product3_b;

        /* MinMax: '<S223>/MinMax1' incorporates:
         *  Constant: '<S246>/Calib'
         */
        OBCR_ac_B.MinMax1_i = fmaxf(VeOBCR_k_ChrgTimeEstDebug3,
            KeOBCR_t_NotConnectedMinTime);

        /* Product: '<S223>/Product22' incorporates:
         *  Constant: '<S240>/Calib'
         */
        rtb_Multiplication1 = KeOBCR_K_AddLevelTwoFactorCap * rtb_Switch6;

        /* Switch: '<S223>/Switch1' */
        if (rtb_TmpSignalConversionAtVeCC_h)
        {
            /* Switch: '<S223>/Switch1' incorporates:
             *  Constant: '<S231>/Calib'
             *  Constant: '<S238>/Calib'
             *  DataTypeConversion: '<S223>/Data Type Conversion'
             *  MinMax: '<S223>/MinMax4'
             *  Product: '<S223>/Product4'
             *  Selector: '<S223>/Selector1'
             *  SignalConversion generated from: '<S1>/VeCCCR_e_PwrLevSet'
             */
            VeOBCR_I_Lv2NotConn_test1 = fmaxf(KeOBCR_I_MinChrgCurr, rtb_Sum2_d *
                KaOBCR_k_LvlPerc[(sint16)rtb_TmpSignalConversionAtVeCC_i]);
        }
        else
        {
            /* Switch: '<S223>/Switch1' */
            VeOBCR_I_Lv2NotConn_test1 = rtb_Sum2_d;
        }

        /* End of Switch: '<S223>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S223>/Protected Division2' */
        /* Switch: '<S249>/Switch1' incorporates:
         *  Constant: '<S249>/Constant Value'
         *  Constant: '<S249>/Constant Value1'
         *  Constant: '<S249>/Constant Value2'
         *  Constant: '<S249>/Constant Value3'
         *  Logic: '<S249>/AND'
         *  RelationalOperator: '<S249>/Greater Than or Equal '
         *  RelationalOperator: '<S249>/Greater Than or Equal 1'
         *  RelationalOperator: '<S249>/Not Equal'
         *  RelationalOperator: '<S249>/Not Equal1'
         *  Switch: '<S249>/Switch2'
         *  Switch: '<S249>/Switch3'
         */
        if ((rtb_Multiplication1 != 0.0F) && (VeOBCR_I_Lv2NotConn_test1 != 0.0F))
        {
            /* Switch: '<S249>/Switch1' incorporates:
             *  Product: '<S249>/Division'
             */
            rtb_Sum2_d = rtb_Multiplication1 / VeOBCR_I_Lv2NotConn_test1;
        }
        else if (rtb_Multiplication1 > 0.0F)
        {
            /* Switch: '<S249>/Switch2' incorporates:
             *  Constant: '<S249>/MAXFLOAT'
             *  Switch: '<S249>/Switch1'
             */
            rtb_Sum2_d = 3.402823466E+38F;
        }
        else if (rtb_Multiplication1 < 0.0F)
        {
            /* Switch: '<S249>/Switch3' incorporates:
             *  Constant: '<S249>/MINFLOAT'
             *  Switch: '<S249>/Switch1'
             *  Switch: '<S249>/Switch2'
             */
            rtb_Sum2_d = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S249>/Switch1' incorporates:
             *  Constant: '<S249>/Constant Value4'
             *  Switch: '<S249>/Switch2'
             *  Switch: '<S249>/Switch3'
             */
            rtb_Sum2_d = 0.0F;
        }

        /* End of Switch: '<S249>/Switch1' */
        /* End of Outputs for SubSystem: '<S223>/Protected Division2' */

        /* Outputs for Atomic SubSystem: '<S223>/Protected Division3' */
        /* Switch: '<S250>/Switch1' incorporates:
         *  Constant: '<S250>/Constant Value'
         *  Constant: '<S250>/Constant Value1'
         *  Constant: '<S250>/Constant Value2'
         *  Constant: '<S250>/Constant Value3'
         *  Logic: '<S250>/AND'
         *  RelationalOperator: '<S250>/Greater Than or Equal '
         *  RelationalOperator: '<S250>/Greater Than or Equal 1'
         *  RelationalOperator: '<S250>/Not Equal'
         *  RelationalOperator: '<S250>/Not Equal1'
         *  Switch: '<S250>/Switch2'
         *  Switch: '<S250>/Switch3'
         */
        if ((rtb_Sum2_d != 0.0F) && (VeOBCR_k_ChrgTimeEstDebug7 != 0.0F))
        {
            /* Switch: '<S250>/Switch1' incorporates:
             *  Product: '<S250>/Division'
             */
            rtb_Sum2_d /= VeOBCR_k_ChrgTimeEstDebug7;
        }
        else if (rtb_Sum2_d > 0.0F)
        {
            /* Switch: '<S250>/Switch2' incorporates:
             *  Constant: '<S250>/MAXFLOAT'
             *  Switch: '<S250>/Switch1'
             */
            rtb_Sum2_d = 3.402823466E+38F;
        }
        else if (rtb_Sum2_d < 0.0F)
        {
            /* Switch: '<S250>/Switch3' incorporates:
             *  Constant: '<S250>/MINFLOAT'
             *  Switch: '<S250>/Switch1'
             *  Switch: '<S250>/Switch2'
             */
            rtb_Sum2_d = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S250>/Switch1' incorporates:
             *  Constant: '<S250>/Constant Value4'
             *  Switch: '<S250>/Switch2'
             *  Switch: '<S250>/Switch3'
             */
            rtb_Sum2_d = 0.0F;
        }

        /* End of Switch: '<S250>/Switch1' */
        /* End of Outputs for SubSystem: '<S223>/Protected Division3' */

        /* Product: '<S223>/Product11' incorporates:
         *  Constant: '<S223>/Constant Value5'
         *  Constant: '<S245>/Calib'
         *  Product: '<S223>/Product1'
         *  Sum: '<S223>/Sum11'
         */
        VeOBCR_k_ChrgTimeEstDebug4 = ((rtb_Sum2_d * 60.0F) +
            KeOBCR_t_AddLvl2Factor_NotConn) * rtb_Switch7;

        /* MinMax: '<S223>/MinMax2' incorporates:
         *  Constant: '<S246>/Calib'
         */
        OBCR_ac_B.MinMax2_m = fmaxf(KeOBCR_t_NotConnectedMinTime,
            VeOBCR_k_ChrgTimeEstDebug4);

        /* Outputs for Atomic SubSystem: '<S224>/Protected Division5' */
        /* Outputs for Atomic SubSystem: '<S224>/Protected Division4' */
        /* Outputs for Atomic SubSystem: '<S224>/Limiter3' */
        for (i = 0; i < 7; i++)
        {
            /* Sum: '<S224>/Sum4' incorporates:
             *  Constant: '<S254>/Calib'
             *  Constant: '<S255>/Calib'
             *  Product: '<S224>/Product12'
             */
            rtb_Switch7 = (VeOBCR_k_BatCapCalDbg1 *
                           KaOBCR_k_CurrentScalingFactor[(i)]) +
                KaOBCR_k_CurrentScalingYIntrcpt[(i)];

            /* Switch: '<S260>/Switch1' incorporates:
             *  Constant: '<S224>/Constant Value8'
             *  RelationalOperator: '<S260>/Relational Operator'
             */
            if (1.0F < rtb_Switch7)
            {
                /* Product: '<S224>/Product2' */
                rtb_Switch7 = 1.0F;
            }

            /* End of Switch: '<S260>/Switch1' */

            /* Switch: '<S260>/Switch' incorporates:
             *  Constant: '<S224>/Constant Value9'
             *  RelationalOperator: '<S260>/Relational Operator1'
             */
            if (rtb_Switch7 > 0.0F)
            {
                /* Switch: '<S260>/Switch' */
                VaOBCR_K_WndwSclFctr_NC[(i)] = rtb_Switch7;
            }
            else
            {
                /* Switch: '<S260>/Switch' */
                VaOBCR_K_WndwSclFctr_NC[(i)] = 0.0F;
            }

            /* End of Switch: '<S260>/Switch' */

            /* Switch: '<S262>/Switch1' incorporates:
             *  Constant: '<S254>/Calib'
             *  Constant: '<S262>/Constant Value1'
             *  RelationalOperator: '<S262>/Not Equal1'
             */
            if (KaOBCR_k_CurrentScalingFactor[(i)] != 0.0F)
            {
                /* Switch: '<S262>/Switch1' incorporates:
                 *  Constant: '<S224>/Constant Value10'
                 *  Product: '<S262>/Division'
                 */
                rtb_Switch7 = -1.0F / KaOBCR_k_CurrentScalingFactor[(i)];
            }
            else
            {
                /* Switch: '<S262>/Switch1' */
                rtb_Switch7 = -3.402823466E+38F;
            }

            /* End of Switch: '<S262>/Switch1' */

            /* Switch: '<S263>/Switch1' incorporates:
             *  Constant: '<S263>/Constant Value'
             *  RelationalOperator: '<S263>/Not Equal'
             */
            if (rtb_Switch7 != 0.0F)
            {
                /* Switch: '<S263>/Switch1' incorporates:
                 *  Constant: '<S224>/Constant Value1'
                 *  Product: '<S263>/Division'
                 */
                VaOBCR_Pct_SOCWndwWidthNC[(i)] = rtb_Switch7 / 100.0F;
            }
            else
            {
                /* Switch: '<S263>/Switch1' incorporates:
                 *  Constant: '<S263>/Constant Value4'
                 *  Switch: '<S263>/Switch3'
                 */
                VaOBCR_Pct_SOCWndwWidthNC[(i)] = 0.0F;
            }

            /* End of Switch: '<S263>/Switch1' */

            /* Product: '<S224>/Product1' */
            VaOBCR_q_WindowBattCapNC[(i)] = rtb_Switch6 *
                VaOBCR_Pct_SOCWndwWidthNC[(i)];

            /* Outputs for Atomic SubSystem: '<S224>/Protected Division3' */
            /* Switch: '<S261>/Switch1' incorporates:
             *  Constant: '<S253>/Calib'
             *  Constant: '<S261>/Constant Value'
             *  Constant: '<S261>/Constant Value1'
             *  Constant: '<S261>/Constant Value2'
             *  Constant: '<S261>/Constant Value3'
             *  Constant: '<S261>/Constant Value4'
             *  Logic: '<S261>/AND'
             *  Product: '<S261>/Division'
             *  RelationalOperator: '<S261>/Greater Than or Equal '
             *  RelationalOperator: '<S261>/Greater Than or Equal 1'
             *  RelationalOperator: '<S261>/Not Equal'
             *  RelationalOperator: '<S261>/Not Equal1'
             *  Switch: '<S261>/Switch2'
             *  Switch: '<S261>/Switch3'
             */
            if ((VaOBCR_q_WindowBattCapNC[(i)] != 0.0F) &&
                    (KaOBCR_I_DefaultDCCurrent[(i)] != 0.0F))
            {
                rtb_Product3_b = VaOBCR_q_WindowBattCapNC[(i)] /
                    KaOBCR_I_DefaultDCCurrent[(i)];
            }
            else if (VaOBCR_q_WindowBattCapNC[(i)] > 0.0F)
            {
                /* Switch: '<S261>/Switch2' incorporates:
                 *  Constant: '<S261>/MAXFLOAT'
                 */
                rtb_Product3_b = 3.402823466E+38F;
            }
            else if (VaOBCR_q_WindowBattCapNC[(i)] < 0.0F)
            {
                /* Switch: '<S261>/Switch3' incorporates:
                 *  Constant: '<S261>/MINFLOAT'
                 */
                rtb_Product3_b = -3.402823466E+38F;
            }
            else
            {
                rtb_Product3_b = 0.0F;
            }

            /* End of Switch: '<S261>/Switch1' */
            /* End of Outputs for SubSystem: '<S224>/Protected Division3' */

            /* Product: '<S224>/Product14' */
            VaOBCR_t_WndwChrgTimeNC[(i)] = VaOBCR_K_WndwSclFctr_NC[(i)] *
                rtb_Product3_b;
            rtb_Switch1_o2[i] = KeOBCR_K_ChrgTimeEst_TimeScale *
                VaOBCR_t_WndwChrgTimeNC[(i)];
        }

        /* End of Outputs for SubSystem: '<S224>/Limiter3' */
        /* End of Outputs for SubSystem: '<S224>/Protected Division4' */
        /* End of Outputs for SubSystem: '<S224>/Protected Division5' */

        /* Sum: '<S224>/Sum2' incorporates:
         *  Constant: '<S258>/Calib'
         *  Product: '<S224>/Product2'
         *  Sum: '<S224>/Sum3'
         *  Sum: '<S224>/Sum4'
         */
        rtb_Multiplication1 = ((((rtb_Switch1_o2[0] + rtb_Switch1_o2[1]) +
            rtb_Switch1_o2[2]) + rtb_Switch1_o2[3]) + rtb_Switch1_o2[4]) +
            rtb_Switch1_o2[5];

        /* Sum: '<S224>/Sum2' */
        VeOBCR_t_DCEstTime80_debug_NConn = rtb_Multiplication1;

        /* Outputs for Atomic SubSystem: '<S224>/GradientLimiter2' */
        /* Switch: '<S265>/Switch1' incorporates:
         *  UnitDelay: '<S251>/Unit Delay'
         */
        rtb_Sum2_d = OBCR_ac_DW.UnitDelay_DSTATE_kc;

        /* Sum: '<S251>/Sum2' */
        rtb_Switch7 = VeOBCR_t_DCEstTime80_debug_NConn - rtb_Sum2_d;

        /* Outputs for Atomic SubSystem: '<S251>/Limiter' */
        /* Switch: '<S264>/Switch1' incorporates:
         *  Constant: '<S257>/Calib'
         *  RelationalOperator: '<S264>/Relational Operator'
         */
        if (KeOBCR_K_ChrgTimeEst_PosGrd < rtb_Switch7)
        {
            /* UnitDelay: '<S252>/Unit Delay' */
            rtb_Switch7 = KeOBCR_K_ChrgTimeEst_PosGrd;
        }

        /* End of Switch: '<S264>/Switch1' */

        /* Switch: '<S264>/Switch' incorporates:
         *  Constant: '<S256>/Calib'
         *  RelationalOperator: '<S264>/Relational Operator1'
         */
        if (rtb_Switch7 <= KeOBCR_K_ChrgTimeEst_NegGrd)
        {
            rtb_Switch7 = KeOBCR_K_ChrgTimeEst_NegGrd;
        }

        /* End of Switch: '<S264>/Switch' */
        /* End of Outputs for SubSystem: '<S251>/Limiter' */

        /* Sum: '<S251>/Sum3' */
        OBCR_ac_B.Sum3_j = rtb_Switch7 + rtb_Sum2_d;

        /* Update for UnitDelay: '<S251>/Unit Delay' */
        OBCR_ac_DW.UnitDelay_DSTATE_kc = OBCR_ac_B.Sum3_j;

        /* End of Outputs for SubSystem: '<S224>/GradientLimiter2' */

        /* Sum: '<S224>/Sum3' incorporates:
         *  Lookup_n-D: '<S259>/Vector'
         *  Product: '<S224>/Product4'
         *  Switch: '<S286>/Switch1'
         */
        VeOBCR_t_DCEstTime100_debug_NConn = rtb_Multiplication1 +
            (rtb_Switch1_o2[6] * look1_iflf_binlcapw(VeOBCR_k_BatCapCalDbg1, ((
                const float32 *)&(KxOBCR_k_DCHighSOCFactor[0])), ((const float32
                *)&(KtOBCR_k_DCHighSOCFactor[0])), 5U));

        /* Outputs for Atomic SubSystem: '<S224>/GradientLimiter3' */
        /* UnitDelay: '<S252>/Unit Delay' */
        rtb_Switch7 = OBCR_ac_DW.UnitDelay_DSTATE_cf;

        /* Sum: '<S252>/Sum2' */
        rtb_Sum2_d = VeOBCR_t_DCEstTime100_debug_NConn - rtb_Switch7;

        /* Outputs for Atomic SubSystem: '<S252>/Limiter' */
        /* Switch: '<S265>/Switch1' incorporates:
         *  Constant: '<S257>/Calib'
         *  RelationalOperator: '<S265>/Relational Operator'
         */
        if (KeOBCR_K_ChrgTimeEst_PosGrd < rtb_Sum2_d)
        {
            /* Switch: '<S265>/Switch1' */
            rtb_Sum2_d = KeOBCR_K_ChrgTimeEst_PosGrd;
        }

        /* End of Switch: '<S265>/Switch1' */

        /* Switch: '<S265>/Switch' incorporates:
         *  Constant: '<S256>/Calib'
         *  RelationalOperator: '<S265>/Relational Operator1'
         */
        if (rtb_Sum2_d <= KeOBCR_K_ChrgTimeEst_NegGrd)
        {
            rtb_Sum2_d = KeOBCR_K_ChrgTimeEst_NegGrd;
        }

        /* End of Switch: '<S265>/Switch' */
        /* End of Outputs for SubSystem: '<S252>/Limiter' */

        /* Sum: '<S252>/Sum3' */
        OBCR_ac_B.Sum3 = rtb_Sum2_d + rtb_Switch7;

        /* Update for UnitDelay: '<S252>/Unit Delay' */
        OBCR_ac_DW.UnitDelay_DSTATE_cf = OBCR_ac_B.Sum3;

        /* End of Outputs for SubSystem: '<S224>/GradientLimiter3' */
        /* End of Outputs for SubSystem: '<S132>/NConn_ChrgTimeEst' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S132>/ConChrgTimeEst' incorporates:
         *  ActionPort: '<S138>/Action Port'
         */
        if (rtb_AND_ny)
        {
            /* Switch: '<S164>/Switch2' incorporates:
             *  Constant: '<S164>/Constant Value1'
             */
            rtb_Multiplication1_l = 5000.0F;

            /* Switch: '<S164>/Switch4' incorporates:
             *  Constant: '<S164>/Constant Value9'
             */
            rtb_Switch3_oxd = -5000.0F;
        }
        else
        {
            /* Switch: '<S164>/Switch2' incorporates:
             *  Constant: '<S180>/Calib'
             */
            rtb_Multiplication1_l = KeOBCR_t_Level1TimeEstGradPos;

            /* Switch: '<S164>/Switch4' incorporates:
             *  Constant: '<S179>/Calib'
             */
            rtb_Switch3_oxd = KeOBCR_t_Level1TimeEstGradNeg;
        }

        /* Outputs for Atomic SubSystem: '<S164>/Hysteresis' */
        /* Switch: '<S168>/Switch1' incorporates:
         *  Constant: '<S174>/Calib'
         *  RelationalOperator: '<S168>/Greater  Than'
         */
        if (VeOBCR_U_HV_BatVoltModMaxArbFil > KeOBCR_U_MaxAlwdCellVltLvl1)
        {
            /* Switch: '<S168>/Switch1' incorporates:
             *  Constant: '<S168>/Constant Value'
             */
            VeOBCR_b_ChrgTimeEstDebug8 = true;
        }
        else
        {
            /* Switch: '<S168>/Switch1' incorporates:
             *  Constant: '<S173>/Calib'
             *  RelationalOperator: '<S168>/Greater  Than1'
             *  Sum: '<S164>/Sum1'
             *  UnitDelay: '<S168>/Unit Delay'
             */
            VeOBCR_b_ChrgTimeEstDebug8 = ((VeOBCR_U_HV_BatVoltModMaxArbFil >=
                (KeOBCR_U_MaxAlwdCellVltLvl1 - KeOBCR_K_CellVltHysLevel)) &&
                (OBCR_ac_DW.UnitDelay_DSTATE_hu));
        }

        /* End of Switch: '<S168>/Switch1' */

        /* Update for UnitDelay: '<S168>/Unit Delay' */
        OBCR_ac_DW.UnitDelay_DSTATE_hu = VeOBCR_b_ChrgTimeEstDebug8;

        /* End of Outputs for SubSystem: '<S164>/Hysteresis' */

        /* Product: '<S164>/Product21' incorporates:
         *  Constant: '<S171>/Calib'
         */
        rtb_Product21 = rtb_Switch6 * KeOBCR_K_AddLevelOneFactorCap;

        /* Product: '<S164>/Product3' incorporates:
         *  Constant: '<S169>/Calib'
         *  Lookup_n-D: '<S185>/Vector'
         *  Switch: '<S287>/Switch1'
         */
        rtb_Product3_b = KeOBCR_I_DfltLvlOneCrnt * look1_iflf_binlcapw
            (rtb_Switch_nt, ((const float32 *)&(KxOBCR_t_ChrgCurrAvlFacLvl1[0])),
             ((const float32 *)&(KtOBCR_t_ChrgCurrAvlFacLvl1[0])), 5U);

        /* Outputs for Atomic SubSystem: '<S164>/Protected Division2' */
        /* Switch: '<S189>/Switch1' incorporates:
         *  Constant: '<S189>/Constant Value'
         *  Constant: '<S189>/Constant Value1'
         *  Constant: '<S189>/Constant Value2'
         *  Constant: '<S189>/Constant Value3'
         *  Logic: '<S189>/AND'
         *  RelationalOperator: '<S189>/Greater Than or Equal '
         *  RelationalOperator: '<S189>/Greater Than or Equal 1'
         *  RelationalOperator: '<S189>/Not Equal'
         *  RelationalOperator: '<S189>/Not Equal1'
         *  Switch: '<S189>/Switch2'
         *  Switch: '<S189>/Switch3'
         */
        if ((rtb_Product21 != 0.0F) && (rtb_Product3_b != 0.0F))
        {
            /* Switch: '<S189>/Switch1' incorporates:
             *  Product: '<S189>/Division'
             */
            rtb_Product21 /= rtb_Product3_b;
        }
        else if (rtb_Product21 > 0.0F)
        {
            /* Switch: '<S189>/Switch2' incorporates:
             *  Constant: '<S189>/MAXFLOAT'
             *  Switch: '<S189>/Switch1'
             */
            rtb_Product21 = 3.402823466E+38F;
        }
        else if (rtb_Product21 < 0.0F)
        {
            /* Switch: '<S189>/Switch3' incorporates:
             *  Constant: '<S189>/MINFLOAT'
             *  Switch: '<S189>/Switch1'
             *  Switch: '<S189>/Switch2'
             */
            rtb_Product21 = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S189>/Switch1' incorporates:
             *  Constant: '<S189>/Constant Value4'
             *  Switch: '<S189>/Switch2'
             *  Switch: '<S189>/Switch3'
             */
            rtb_Product21 = 0.0F;
        }

        /* End of Switch: '<S189>/Switch1' */
        /* End of Outputs for SubSystem: '<S164>/Protected Division2' */

        /* Outputs for Atomic SubSystem: '<S164>/Protected Division3' */
        /* Switch: '<S190>/Switch1' incorporates:
         *  Constant: '<S190>/Constant Value'
         *  Constant: '<S190>/Constant Value1'
         *  Constant: '<S190>/Constant Value2'
         *  Constant: '<S190>/Constant Value3'
         *  Logic: '<S190>/AND'
         *  RelationalOperator: '<S190>/Greater Than or Equal '
         *  RelationalOperator: '<S190>/Greater Than or Equal 1'
         *  RelationalOperator: '<S190>/Not Equal'
         *  RelationalOperator: '<S190>/Not Equal1'
         *  Switch: '<S190>/Switch2'
         *  Switch: '<S190>/Switch3'
         */
        if ((rtb_Product21 != 0.0F) && (VeOBCR_k_ChrgTimeEstDebug7 != 0.0F))
        {
            /* Switch: '<S190>/Switch1' incorporates:
             *  Product: '<S190>/Division'
             */
            rtb_Product21 /= VeOBCR_k_ChrgTimeEstDebug7;
        }
        else if (rtb_Product21 > 0.0F)
        {
            /* Switch: '<S190>/Switch2' incorporates:
             *  Constant: '<S190>/MAXFLOAT'
             *  Switch: '<S190>/Switch1'
             */
            rtb_Product21 = 3.402823466E+38F;
        }
        else if (rtb_Product21 < 0.0F)
        {
            /* Switch: '<S190>/Switch3' incorporates:
             *  Constant: '<S190>/MINFLOAT'
             *  Switch: '<S190>/Switch1'
             *  Switch: '<S190>/Switch2'
             */
            rtb_Product21 = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S190>/Switch1' incorporates:
             *  Constant: '<S190>/Constant Value4'
             *  Switch: '<S190>/Switch2'
             *  Switch: '<S190>/Switch3'
             */
            rtb_Product21 = 0.0F;
        }

        /* End of Switch: '<S190>/Switch1' */
        /* End of Outputs for SubSystem: '<S164>/Protected Division3' */

        /* Switch: '<S164>/Switch13' incorporates:
         *  Constant: '<S175>/Calib'
         *  Constant: '<S176>/Calib'
         */
        if (KeOBCR_b_AddLevelOneFactorMul)
        {
            rtb_Product3_b = KeOBCR_k_AddLevelOneFactorMul;
        }
        else
        {
            rtb_Product3_b = rtb_Switch7;
        }

        /* End of Switch: '<S164>/Switch13' */

        /* Product: '<S164>/Product10' incorporates:
         *  Constant: '<S164>/Constant Value4'
         *  Constant: '<S177>/Calib'
         *  Product: '<S164>/Product2'
         *  Sum: '<S164>/Sum3'
         */
        VeOBCR_k_ChrgTimeEstDebug5 = ((rtb_Product21 * 60.0F) +
            KeOBCR_t_AddLevelOneFactor1) * rtb_Product3_b;

        /* Outputs for Atomic SubSystem: '<S164>/GradientLimiter' */
        /* UnitDelay: '<S194>/Unit Delay' incorporates:
         *  UnitDelay: '<S166>/Unit Delay'
         */
        rtb_Product21 = OBCR_ac_DW.UnitDelay_DSTATE_k;

        /* End of Outputs for SubSystem: '<S164>/GradientLimiter' */

        /* Switch: '<S164>/Switch1' incorporates:
         *  Constant: '<S183>/Calib'
         */
        if (VeOBCR_b_ChrgTimeEstDebug8)
        {
            rtb_Product3_b = KeOBCR_t_Lvl1ChrgTimeFinal;
        }
        else
        {
            rtb_Product3_b = VeOBCR_k_ChrgTimeEstDebug5;
        }

        /* End of Switch: '<S164>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S164>/GradientLimiter' */
        /* Sum: '<S166>/Sum2' */
        rtb_Product3_b -= rtb_Product21;

        /* Outputs for Atomic SubSystem: '<S166>/Limiter' */
        /* Switch: '<S191>/Switch1' incorporates:
         *  RelationalOperator: '<S191>/Relational Operator'
         */
        if (rtb_Multiplication1_l < rtb_Product3_b)
        {
            /* Switch: '<S212>/Switch1' */
            rtb_Product3_b = rtb_Multiplication1_l;
        }

        /* End of Switch: '<S191>/Switch1' */

        /* Switch: '<S191>/Switch' incorporates:
         *  RelationalOperator: '<S191>/Relational Operator1'
         */
        if (rtb_Product3_b > rtb_Switch3_oxd)
        {
            rtb_Switch3_oxd = rtb_Product3_b;
        }

        /* End of Switch: '<S191>/Switch' */
        /* End of Outputs for SubSystem: '<S166>/Limiter' */

        /* Sum: '<S166>/Sum3' */
        VeOBCR_k_ChrgTimeEstDebug09 = rtb_Switch3_oxd + rtb_Product21;

        /* Update for UnitDelay: '<S166>/Unit Delay' */
        OBCR_ac_DW.UnitDelay_DSTATE_k = VeOBCR_k_ChrgTimeEstDebug09;

        /* End of Outputs for SubSystem: '<S164>/GradientLimiter' */

        /* Switch: '<S164>/Switch' incorporates:
         *  Switch: '<S164>/Switch3'
         */
        if (rtb_AND_ny)
        {
            /* Switch: '<S164>/Switch' incorporates:
             *  Constant: '<S164>/Constant Value7'
             */
            rtb_Switch3_oxd = 5000.0F;

            /* Switch: '<S164>/Switch3' incorporates:
             *  Constant: '<S164>/Constant Value8'
             */
            rtb_Multiplication1_l = -5000.0F;
        }
        else
        {
            /* Switch: '<S164>/Switch' incorporates:
             *  Constant: '<S182>/Calib'
             */
            rtb_Switch3_oxd = KeOBCR_t_Level2TimeEstGradPos;

            /* Switch: '<S164>/Switch3' incorporates:
             *  Constant: '<S181>/Calib'
             */
            rtb_Multiplication1_l = KeOBCR_t_Level2TimeEstGradNeg;
        }

        /* End of Switch: '<S164>/Switch' */

        /* Product: '<S164>/Product22' incorporates:
         *  Constant: '<S172>/Calib'
         */
        rtb_Product21 = KeOBCR_K_AddLevelTwoFactorCap * rtb_Switch6;

        /* Outputs for Atomic SubSystem: '<S132>/Turn On Delay Sample' */
        /* Switch: '<S164>/Switch5' incorporates:
         *  Constant: '<S145>/Calib'
         *  Logic: '<S163>/AND'
         *  Lookup_n-D: '<S186>/Vector'
         *  RelationalOperator: '<S163>/Greater  Than'
         *  Switch: '<S287>/Switch1'
         */
        if (rtb_AND_mk && (rtb_Switch1_jd >= KeOBCR_Cnt_ConChrgTimeEstDly))
        {
            rtb_Switch_nt = look1_iflf_binlcapw(rtb_Switch_nt, ((const float32 *)
                &(KxOBCR_t_ChrgCurrAvlFacLvl2[0])), ((const float32 *)
                &(KtOBCR_t_ChrgCurrAvlFacLvl2[0])), 19U);
        }
        else
        {
            rtb_Switch_nt = VeOBCR_I_Lv2NotConn_test1;
        }

        /* End of Switch: '<S164>/Switch5' */
        /* End of Outputs for SubSystem: '<S132>/Turn On Delay Sample' */

        /* Product: '<S164>/Product4' incorporates:
         *  Constant: '<S170>/Calib'
         */
        rtb_Switch_nt *= KeOBCR_I_DfltLvlTwoCrnt;

        /* Outputs for Atomic SubSystem: '<S164>/Protected Division' */
        /* Switch: '<S187>/Switch1' incorporates:
         *  Constant: '<S187>/Constant Value'
         *  Constant: '<S187>/Constant Value1'
         *  Constant: '<S187>/Constant Value2'
         *  Constant: '<S187>/Constant Value3'
         *  Logic: '<S187>/AND'
         *  RelationalOperator: '<S187>/Greater Than or Equal '
         *  RelationalOperator: '<S187>/Greater Than or Equal 1'
         *  RelationalOperator: '<S187>/Not Equal'
         *  RelationalOperator: '<S187>/Not Equal1'
         *  Switch: '<S187>/Switch2'
         *  Switch: '<S187>/Switch3'
         */
        if ((rtb_Product21 != 0.0F) && (rtb_Switch_nt != 0.0F))
        {
            /* Switch: '<S187>/Switch1' incorporates:
             *  Product: '<S187>/Division'
             */
            rtb_Switch_nt = rtb_Product21 / rtb_Switch_nt;
        }
        else if (rtb_Product21 > 0.0F)
        {
            /* Switch: '<S187>/Switch2' incorporates:
             *  Constant: '<S187>/MAXFLOAT'
             *  Switch: '<S187>/Switch1'
             */
            rtb_Switch_nt = 3.402823466E+38F;
        }
        else if (rtb_Product21 < 0.0F)
        {
            /* Switch: '<S187>/Switch3' incorporates:
             *  Constant: '<S187>/MINFLOAT'
             *  Switch: '<S187>/Switch1'
             *  Switch: '<S187>/Switch2'
             */
            rtb_Switch_nt = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S187>/Switch1' incorporates:
             *  Constant: '<S187>/Constant Value4'
             *  Switch: '<S187>/Switch2'
             *  Switch: '<S187>/Switch3'
             */
            rtb_Switch_nt = 0.0F;
        }

        /* End of Switch: '<S187>/Switch1' */
        /* End of Outputs for SubSystem: '<S164>/Protected Division' */

        /* Outputs for Atomic SubSystem: '<S164>/Protected Division1' */
        /* Switch: '<S188>/Switch1' incorporates:
         *  Constant: '<S188>/Constant Value'
         *  Constant: '<S188>/Constant Value1'
         *  Constant: '<S188>/Constant Value2'
         *  Constant: '<S188>/Constant Value3'
         *  Logic: '<S188>/AND'
         *  RelationalOperator: '<S188>/Greater Than or Equal '
         *  RelationalOperator: '<S188>/Greater Than or Equal 1'
         *  RelationalOperator: '<S188>/Not Equal'
         *  RelationalOperator: '<S188>/Not Equal1'
         *  Switch: '<S188>/Switch2'
         *  Switch: '<S188>/Switch3'
         */
        if ((rtb_Switch_nt != 0.0F) && (VeOBCR_k_ChrgTimeEstDebug7 != 0.0F))
        {
            /* Switch: '<S188>/Switch1' incorporates:
             *  Product: '<S188>/Division'
             */
            rtb_Switch_nt /= VeOBCR_k_ChrgTimeEstDebug7;
        }
        else if (rtb_Switch_nt > 0.0F)
        {
            /* Switch: '<S188>/Switch2' incorporates:
             *  Constant: '<S188>/MAXFLOAT'
             *  Switch: '<S188>/Switch1'
             */
            rtb_Switch_nt = 3.402823466E+38F;
        }
        else if (rtb_Switch_nt < 0.0F)
        {
            /* Switch: '<S188>/Switch3' incorporates:
             *  Constant: '<S188>/MINFLOAT'
             *  Switch: '<S188>/Switch1'
             *  Switch: '<S188>/Switch2'
             */
            rtb_Switch_nt = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S188>/Switch1' incorporates:
             *  Constant: '<S188>/Constant Value4'
             *  Switch: '<S188>/Switch2'
             *  Switch: '<S188>/Switch3'
             */
            rtb_Switch_nt = 0.0F;
        }

        /* End of Switch: '<S188>/Switch1' */
        /* End of Outputs for SubSystem: '<S164>/Protected Division1' */
        /* End of Outputs for SubSystem: '<S132>/ConChrgTimeEst' */
        (void)Rte_Read_VeCCCR_I_HWCurrentBound_Value(&rtb_Sum2_d);

        /* Outputs for IfAction SubSystem: '<S132>/ConChrgTimeEst' incorporates:
         *  ActionPort: '<S138>/Action Port'
         */
        /* Product: '<S164>/Product11' incorporates:
         *  Constant: '<S164>/Constant Value5'
         *  Constant: '<S178>/Calib'
         *  Inport: '<Root>/VeCCCR_I_HWCurrentBound'
         *  Product: '<S164>/Product1'
         *  Sum: '<S164>/Sum11'
         */
        VeOBCR_k_ChrgTimeEstDebug6 = ((rtb_Switch_nt * 60.0F) +
            KeOBCR_t_AddLevelTwoFactor) * rtb_Switch7;

        /* Outputs for Atomic SubSystem: '<S164>/GradientLimiter1' */
        /* UnitDelay: '<S194>/Unit Delay' incorporates:
         *  UnitDelay: '<S167>/Unit Delay'
         */
        rtb_Product21 = OBCR_ac_DW.UnitDelay_DSTATE_gi;

        /* Sum: '<S167>/Sum2' */
        rtb_Switch7 = VeOBCR_k_ChrgTimeEstDebug6 - rtb_Product21;

        /* Outputs for Atomic SubSystem: '<S167>/Limiter' */
        /* Switch: '<S192>/Switch1' incorporates:
         *  RelationalOperator: '<S192>/Relational Operator'
         */
        if (rtb_Switch3_oxd < rtb_Switch7)
        {
            /* Switch: '<S212>/Switch1' */
            rtb_Product3_b = rtb_Switch3_oxd;
        }
        else
        {
            /* Switch: '<S212>/Switch1' */
            rtb_Product3_b = rtb_Switch7;
        }

        /* End of Switch: '<S192>/Switch1' */

        /* Switch: '<S192>/Switch' incorporates:
         *  RelationalOperator: '<S192>/Relational Operator1'
         */
        if (rtb_Product3_b > rtb_Multiplication1_l)
        {
            rtb_Multiplication1_l = rtb_Product3_b;
        }

        /* End of Switch: '<S192>/Switch' */
        /* End of Outputs for SubSystem: '<S167>/Limiter' */

        /* Sum: '<S167>/Sum3' */
        VeOBCR_k_ChrgTimeEstDebug8 = rtb_Multiplication1_l + rtb_Product21;

        /* Update for UnitDelay: '<S167>/Unit Delay' */
        OBCR_ac_DW.UnitDelay_DSTATE_gi = VeOBCR_k_ChrgTimeEstDebug8;

        /* End of Outputs for SubSystem: '<S164>/GradientLimiter1' */

        /* MinMax: '<S164>/MinMax1' incorporates:
         *  Constant: '<S183>/Calib'
         */
        OBCR_ac_B.MinMax1 = fmaxf(KeOBCR_t_Lvl1ChrgTimeFinal,
            VeOBCR_k_ChrgTimeEstDebug09);

        /* MinMax: '<S164>/MinMax2' incorporates:
         *  Constant: '<S184>/Calib'
         */
        OBCR_ac_B.MinMax2 = fmaxf(VeOBCR_k_ChrgTimeEstDebug8,
            KeOBCR_t_Lvl2ChrgTimeFinal);

        /* Outputs for Atomic SubSystem: '<S165>/Protected Division5' */
        /* Outputs for Atomic SubSystem: '<S165>/Protected Division2' */
        /* Outputs for Atomic SubSystem: '<S165>/Limiter1' */
        for (i = 0; i < 7; i++)
        {
            /* Outputs for Atomic SubSystem: '<S133>/Limiter' */
            rtb_Switch7 = rtb_Switch1_o2[i];

            /* End of Outputs for SubSystem: '<S133>/Limiter' */

            /* Sum: '<S165>/Sum18' incorporates:
             *  Constant: '<S196>/Calib'
             *  Constant: '<S197>/Calib'
             *  Product: '<S165>/Product35'
             *  RelationalOperator: '<S270>/Relational Operator1'
             */
            rtb_Switch3_oxd = (VeOBCR_k_BatCapCalDbg1 *
                               KaOBCR_k_CurrentScalingFactor[(i)]) +
                KaOBCR_k_CurrentScalingYIntrcpt[(i)];

            /* Switch: '<S207>/Switch1' incorporates:
             *  Constant: '<S165>/Constant Value12'
             *  RelationalOperator: '<S207>/Relational Operator'
             */
            if (1.0F < rtb_Switch3_oxd)
            {
                /* Product: '<S165>/Product6' */
                rtb_Switch3_oxd = 1.0F;
            }

            /* End of Switch: '<S207>/Switch1' */

            /* Switch: '<S207>/Switch' incorporates:
             *  Constant: '<S165>/Constant Value13'
             *  RelationalOperator: '<S207>/Relational Operator1'
             */
            if (rtb_Switch3_oxd > 0.0F)
            {
                /* Switch: '<S207>/Switch' */
                VaOBCR_K_WindowScalingFactor[(i)] = rtb_Switch3_oxd;
            }
            else
            {
                /* Switch: '<S207>/Switch' */
                VaOBCR_K_WindowScalingFactor[(i)] = 0.0F;
            }

            /* End of Switch: '<S207>/Switch' */

            /* Switch: '<S209>/Switch1' incorporates:
             *  Constant: '<S196>/Calib'
             *  Constant: '<S209>/Constant Value1'
             *  RelationalOperator: '<S209>/Not Equal1'
             */
            if (KaOBCR_k_CurrentScalingFactor[(i)] != 0.0F)
            {
                /* Switch: '<S209>/Switch1' incorporates:
                 *  Constant: '<S165>/Constant Value3'
                 *  Product: '<S209>/Division'
                 */
                rtb_Switch3_oxd = -1.0F / KaOBCR_k_CurrentScalingFactor[(i)];
            }
            else
            {
                /* Switch: '<S209>/Switch1' */
                rtb_Switch3_oxd = -3.402823466E+38F;
            }

            /* End of Switch: '<S209>/Switch1' */

            /* Switch: '<S210>/Switch1' incorporates:
             *  Constant: '<S210>/Constant Value'
             *  RelationalOperator: '<S210>/Not Equal'
             */
            if (rtb_Switch3_oxd != 0.0F)
            {
                /* Switch: '<S210>/Switch1' incorporates:
                 *  Constant: '<S165>/Constant Value2'
                 *  Product: '<S210>/Division'
                 */
                VaOBCR_Pct_SOCWndwWidth[(i)] = rtb_Switch3_oxd / 100.0F;
            }
            else
            {
                /* Switch: '<S210>/Switch1' incorporates:
                 *  Constant: '<S210>/Constant Value4'
                 *  Switch: '<S210>/Switch3'
                 */
                VaOBCR_Pct_SOCWndwWidth[(i)] = 0.0F;
            }

            /* End of Switch: '<S210>/Switch1' */

            /* Product: '<S165>/Product4' */
            VaOBCR_q_WindowBatteryCapacity[(i)] = VeOBCR_q_BatteryCapacity *
                VaOBCR_Pct_SOCWndwWidth[(i)];

            /* Outputs for Atomic SubSystem: '<S133>/Limiter' */
            /* Switch: '<S270>/Switch' incorporates:
             *  Constant: '<S133>/Constant Value6'
             *  RelationalOperator: '<S270>/Relational Operator1'
             */
            if (rtb_Switch7 <= 0.0F)
            {
                rtb_Switch7 = 0.0F;
            }

            /* End of Switch: '<S270>/Switch' */
            /* End of Outputs for SubSystem: '<S133>/Limiter' */

            /* MinMax: '<S165>/MinMax4' incorporates:
             *  Constant: '<S195>/Calib'
             *  Product: '<S165>/Product5'
             */
            VaOBCR_I_DCDefaulCrrnt[(i)] = fminf(KaOBCR_I_DefaultDCCurrent[(i)] *
                rtb_Switch7, rtb_Sum2_d);

            /* Assignment: '<S165>/IndexAssignment1' */
            VaOBCR_I_WindowCurrent[(i)] = VaOBCR_I_DCDefaulCrrnt[(i)];
        }

        /* End of Outputs for SubSystem: '<S165>/Limiter1' */
        /* End of Outputs for SubSystem: '<S165>/Protected Division2' */
        /* End of Outputs for SubSystem: '<S165>/Protected Division5' */

        /* Outputs for Atomic SubSystem: '<S134>/Windowed Average' */
        /* Switch: '<S165>/Switch1' incorporates:
         *  Chart: '<S289>/Chart'
         *  Constant: '<S198>/Calib'
         *  RelationalOperator: '<S165>/Comparison1'
         *  RelationalOperator: '<S270>/Relational Operator1'
         */
        if (OBCR_ac_DW.average > KeOBCR_I_DCCurrentThresh)
        {
            /* Assignment: '<S165>/IndexAssignment1' */
            VaOBCR_I_WindowCurrent[((sint32)rtb_Multiplication1) - 1] =
                OBCR_ac_DW.average;
        }
        else
        {
            /* Assignment: '<S165>/IndexAssignment1' incorporates:
             *  Constant: '<S199>/Calib'
             */
            VaOBCR_I_WindowCurrent[((sint32)rtb_Multiplication1) - 1] =
                KeOBCR_I_MinDefaultDCCurrent;
        }

        /* End of Switch: '<S165>/Switch1' */
        /* End of Outputs for SubSystem: '<S134>/Windowed Average' */
        for (i = 0; i < 7; i++)
        {
            /* Outputs for Atomic SubSystem: '<S165>/Protected Division1' */
            /* Switch: '<S208>/Switch1' incorporates:
             *  Constant: '<S208>/Constant Value'
             *  Constant: '<S208>/Constant Value1'
             *  Constant: '<S208>/Constant Value2'
             *  Constant: '<S208>/Constant Value3'
             *  Constant: '<S208>/Constant Value4'
             *  Logic: '<S208>/AND'
             *  Product: '<S208>/Division'
             *  RelationalOperator: '<S208>/Greater Than or Equal '
             *  RelationalOperator: '<S208>/Greater Than or Equal 1'
             *  RelationalOperator: '<S208>/Not Equal'
             *  RelationalOperator: '<S208>/Not Equal1'
             *  Switch: '<S208>/Switch2'
             *  Switch: '<S208>/Switch3'
             */
            if ((VaOBCR_q_WindowBatteryCapacity[(i)] != 0.0F) &&
                    (VaOBCR_I_WindowCurrent[(i)] != 0.0F))
            {
                rtb_Product3_b = VaOBCR_q_WindowBatteryCapacity[(i)] /
                    VaOBCR_I_WindowCurrent[(i)];
            }
            else if (VaOBCR_q_WindowBatteryCapacity[(i)] > 0.0F)
            {
                /* Switch: '<S208>/Switch2' incorporates:
                 *  Constant: '<S208>/MAXFLOAT'
                 */
                rtb_Product3_b = 3.402823466E+38F;
            }
            else if (VaOBCR_q_WindowBatteryCapacity[(i)] < 0.0F)
            {
                /* Switch: '<S208>/Switch3' incorporates:
                 *  Constant: '<S208>/MINFLOAT'
                 */
                rtb_Product3_b = -3.402823466E+38F;
            }
            else
            {
                rtb_Product3_b = 0.0F;
            }

            /* End of Switch: '<S208>/Switch1' */
            /* End of Outputs for SubSystem: '<S165>/Protected Division1' */

            /* Product: '<S165>/Product2' incorporates:
             *  Constant: '<S202>/Calib'
             */
            VaOBCR_t_WindowChargeTimes[(i)] = KeOBCR_K_ChrgTimeEst_TimeScale *
                rtb_Product3_b;

            /* Product: '<S165>/Product6' */
            rtb_Switch1_o2[i] = VaOBCR_K_WindowScalingFactor[(i)] *
                VaOBCR_t_WindowChargeTimes[(i)];
        }

        /* Sum: '<S165>/Sum6' incorporates:
         *  Sum: '<S165>/Sum9'
         */
        rtb_Multiplication1 = ((((rtb_Switch1_o2[0] + rtb_Switch1_o2[1]) +
            rtb_Switch1_o2[2]) + rtb_Switch1_o2[3]) + rtb_Switch1_o2[4]) +
            rtb_Switch1_o2[5];

        /* Sum: '<S165>/Sum6' incorporates:
         *  Lookup_n-D: '<S205>/Vector'
         *  Product: '<S165>/Product17'
         *  Switch: '<S286>/Switch1'
         */
        VeOBCR_t_DCEstTime100_debug = rtb_Multiplication1 + (rtb_Switch1_o2[6] *
            look1_iflf_binlcapw(VeOBCR_k_BatCapCalDbg1, ((const float32 *)
            &(KxOBCR_k_DCHighSOCFactor[0])), ((const float32 *)
            &(KtOBCR_k_DCHighSOCFactor[0])), 5U));

        /* Outputs for Atomic SubSystem: '<S165>/GradientLimiter' */
        /* Sum: '<S193>/Sum2' incorporates:
         *  UnitDelay: '<S193>/Unit Delay'
         */
        rtb_Sum2_d = VeOBCR_t_DCEstTime100_debug -
            OBCR_ac_DW.UnitDelay_DSTATE_bl;

        /* Outputs for Atomic SubSystem: '<S193>/Limiter' */
        /* Switch: '<S211>/Switch1' incorporates:
         *  Constant: '<S201>/Calib'
         *  RelationalOperator: '<S211>/Relational Operator'
         */
        if (KeOBCR_K_ChrgTimeEst_PosGrd < rtb_Sum2_d)
        {
            /* Switch: '<S212>/Switch1' */
            rtb_Product3_b = KeOBCR_K_ChrgTimeEst_PosGrd;
        }
        else
        {
            /* Switch: '<S212>/Switch1' */
            rtb_Product3_b = rtb_Sum2_d;
        }

        /* End of Switch: '<S211>/Switch1' */

        /* Switch: '<S211>/Switch' incorporates:
         *  Constant: '<S200>/Calib'
         *  RelationalOperator: '<S211>/Relational Operator1'
         */
        if (rtb_Product3_b <= KeOBCR_K_ChrgTimeEst_NegGrd)
        {
            rtb_Product3_b = KeOBCR_K_ChrgTimeEst_NegGrd;
        }

        /* End of Switch: '<S211>/Switch' */
        /* End of Outputs for SubSystem: '<S193>/Limiter' */

        /* Sum: '<S193>/Sum3' incorporates:
         *  UnitDelay: '<S193>/Unit Delay'
         */
        rtb_Sum2_d = rtb_Product3_b + OBCR_ac_DW.UnitDelay_DSTATE_bl;

        /* Update for UnitDelay: '<S193>/Unit Delay' */
        OBCR_ac_DW.UnitDelay_DSTATE_bl = rtb_Sum2_d;

        /* End of Outputs for SubSystem: '<S165>/GradientLimiter' */

        /* Sum: '<S165>/Sum9' */
        VeOBCR_t_DCEstTime80_debug = rtb_Multiplication1;

        /* Outputs for Atomic SubSystem: '<S165>/GradientLimiter1' */
        /* Sum: '<S194>/Sum2' incorporates:
         *  UnitDelay: '<S194>/Unit Delay'
         */
        rtb_Switch7 = VeOBCR_t_DCEstTime80_debug - OBCR_ac_DW.UnitDelay_DSTATE_o;

        /* Outputs for Atomic SubSystem: '<S194>/Limiter' */
        /* Switch: '<S212>/Switch1' incorporates:
         *  Constant: '<S201>/Calib'
         *  RelationalOperator: '<S212>/Relational Operator'
         */
        if (KeOBCR_K_ChrgTimeEst_PosGrd < rtb_Switch7)
        {
            /* Switch: '<S212>/Switch1' */
            rtb_Product3_b = KeOBCR_K_ChrgTimeEst_PosGrd;
        }
        else
        {
            /* Switch: '<S212>/Switch1' */
            rtb_Product3_b = rtb_Switch7;
        }

        /* End of Switch: '<S212>/Switch1' */

        /* Switch: '<S212>/Switch' incorporates:
         *  Constant: '<S200>/Calib'
         *  RelationalOperator: '<S212>/Relational Operator1'
         */
        if (rtb_Product3_b <= KeOBCR_K_ChrgTimeEst_NegGrd)
        {
            rtb_Product3_b = KeOBCR_K_ChrgTimeEst_NegGrd;
        }

        /* End of Switch: '<S212>/Switch' */
        /* End of Outputs for SubSystem: '<S194>/Limiter' */

        /* Sum: '<S194>/Sum3' incorporates:
         *  UnitDelay: '<S194>/Unit Delay'
         */
        rtb_Switch7 = rtb_Product3_b + OBCR_ac_DW.UnitDelay_DSTATE_o;

        /* Update for UnitDelay: '<S194>/Unit Delay' */
        OBCR_ac_DW.UnitDelay_DSTATE_o = rtb_Switch7;

        /* End of Outputs for SubSystem: '<S165>/GradientLimiter1' */

        /* MinMax: '<S165>/MinMax1' incorporates:
         *  Constant: '<S203>/Calib'
         */
        OBCR_ac_B.MinMax1_c = fmaxf(KeOBCR_t_DCChargeTimeFinal100, rtb_Sum2_d);

        /* MinMax: '<S165>/MinMax2' incorporates:
         *  Constant: '<S204>/Calib'
         */
        OBCR_ac_B.MinMax2_o = fmaxf(KeOBCR_t_DCChargeTimeFinal80, rtb_Switch7);

        /* End of Outputs for SubSystem: '<S132>/ConChrgTimeEst' */
    }

    /* If: '<S132>/If2' */
    rtPrevAction = OBCR_ac_DW.If2_ActiveSubsystem;
    OBCR_ac_DW.If2_ActiveSubsystem = (sint8)(rtb_OR1_ei ? 1 : 0);
    if (!rtb_OR1_ei)
    {
        /* Outputs for IfAction SubSystem: '<S132>/Subsystem1' incorporates:
         *  ActionPort: '<S162>/Action Port'
         */
        OBCR_ac_Subsystem(OBCR_ac_B.MinMax2_m, &rtb_Multiplication1_l);

        /* End of Outputs for SubSystem: '<S132>/Subsystem1' */
    }
    else
    {
        if (1 != rtPrevAction)
        {
            /* InitializeConditions for IfAction SubSystem: '<S132>/Merge3' incorporates:
             *  ActionPort: '<S158>/Action Port'
             */
            /* InitializeConditions for If: '<S132>/If2' incorporates:
             *  UnitDelay: '<S158>/Unit Delay'
             *  UnitDelay: '<S158>/Unit Delay1'
             *  UnitDelay: '<S158>/Unit Delay3'
             *  UnitDelay: '<S158>/Unit Delay4'
             */
            OBCR_ac_DW.UnitDelay1_DSTATE_n = false;
            OBCR_ac_DW.UnitDelay4_DSTATE = 0.0F;
            OBCR_ac_DW.UnitDelay3_DSTATE = 0.0F;
            OBCR_ac_DW.UnitDelay_DSTATE_j = 0.0F;

            /* End of InitializeConditions for SubSystem: '<S132>/Merge3' */

            /* SystemReset for IfAction SubSystem: '<S132>/Merge3' incorporates:
             *  ActionPort: '<S158>/Action Port'
             */
            /* SystemReset for Atomic SubSystem: '<S158>/EdgeRising' */
            /* SystemReset for If: '<S132>/If2' incorporates:
             *  UnitDelay: '<S218>/Unit Delay'
             *  UnitDelay: '<S219>/Unit Delay'
             *  UnitDelay: '<S220>/Unit Delay'
             *  UnitDelay: '<S221>/Unit Delay'
             *  UnitDelay: '<S222>/Unit Delay'
             */
            OBCR_ac_DW.UnitDelay_DSTATE_ec = false;

            /* End of SystemReset for SubSystem: '<S158>/EdgeRising' */

            /* SystemReset for Atomic SubSystem: '<S158>/EdgeRising1' */
            OBCR_ac_DW.UnitDelay_DSTATE_ej = false;

            /* End of SystemReset for SubSystem: '<S158>/EdgeRising1' */

            /* SystemReset for Atomic SubSystem: '<S158>/Turn On Delay Sample' */
            OBCR_ac_DW.UnitDelay_DSTATE_iq = 0U;

            /* SystemReset for Atomic SubSystem: '<S221>/EdgeRising' */
            OBCR_ac_DW.UnitDelay_DSTATE_a4q = false;

            /* End of SystemReset for SubSystem: '<S221>/EdgeRising' */
            /* End of SystemReset for SubSystem: '<S158>/Turn On Delay Sample' */

            /* SystemReset for Atomic SubSystem: '<S158>/Signal Latch On With Reset' */
            OBCR_ac_DW.UnitDelay_DSTATE_d1 = false;

            /* End of SystemReset for SubSystem: '<S158>/Signal Latch On With Reset' */
            /* End of SystemReset for SubSystem: '<S132>/Merge3' */
        }

        /* Outputs for IfAction SubSystem: '<S132>/Merge3' incorporates:
         *  ActionPort: '<S158>/Action Port'
         */
        /* Switch: '<S158>/Switch2' incorporates:
         *  UnitDelay: '<S158>/Unit Delay1'
         */
        if (OBCR_ac_DW.UnitDelay1_DSTATE_n)
        {
            /* Switch: '<S158>/Switch2' incorporates:
             *  Constant: '<S158>/Constant Value1'
             */
            rtb_Multiplication1_l = 0.0F;
        }
        else
        {
            /* Switch: '<S158>/Switch2' incorporates:
             *  Sum: '<S158>/Sum1'
             *  UnitDelay: '<S158>/Unit Delay4'
             */
            rtb_Multiplication1_l = OBCR_ac_B.MinMax2 -
                OBCR_ac_DW.UnitDelay4_DSTATE;
        }

        /* End of Switch: '<S158>/Switch2' */

        /* RelationalOperator: '<S158>/Comparison4' incorporates:
         *  Abs: '<S158>/Abs'
         *  Constant: '<S154>/Calib'
         */
        rtb_AND_ny = (fabsf(rtb_Multiplication1_l) <=
                      KeOBCR_t_MinErrMergeCmptLvl2);

        /* Outputs for Atomic SubSystem: '<S158>/EdgeRising' */
        /* Logic: '<S218>/OR1' incorporates:
         *  UnitDelay: '<S218>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeCC_h = !OBCR_ac_DW.UnitDelay_DSTATE_ec;

        /* Update for UnitDelay: '<S218>/Unit Delay' incorporates:
         *  Constant: '<S158>/TRUE Constant'
         */
        OBCR_ac_DW.UnitDelay_DSTATE_ec = true;

        /* End of Outputs for SubSystem: '<S158>/EdgeRising' */

        /* Outputs for Atomic SubSystem: '<S158>/EdgeRising1' */
        /* Logic: '<S219>/OR1' incorporates:
         *  UnitDelay: '<S219>/Unit Delay'
         */
        rtb_AND_mk = !OBCR_ac_DW.UnitDelay_DSTATE_ej;

        /* Update for UnitDelay: '<S219>/Unit Delay' incorporates:
         *  Constant: '<S158>/TRUE Constant1'
         */
        OBCR_ac_DW.UnitDelay_DSTATE_ej = true;

        /* End of Outputs for SubSystem: '<S158>/EdgeRising1' */

        /* Outputs for Atomic SubSystem: '<S158>/Turn On Delay Sample' */
        /* Outputs for Atomic SubSystem: '<S221>/EdgeRising' */
        /* Logic: '<S222>/AND' incorporates:
         *  Logic: '<S222>/OR1'
         *  UnitDelay: '<S222>/Unit Delay'
         */
        rtb_AND_hc = (rtb_AND_ny && (!OBCR_ac_DW.UnitDelay_DSTATE_a4q));

        /* Update for UnitDelay: '<S222>/Unit Delay' */
        OBCR_ac_DW.UnitDelay_DSTATE_a4q = rtb_AND_ny;

        /* End of Outputs for SubSystem: '<S221>/EdgeRising' */

        /* Switch: '<S221>/Switch1' incorporates:
         *  Constant: '<S221>/Constant Value'
         *  Logic: '<S221>/OR'
         *  Logic: '<S221>/OR1'
         *  MinMax: '<S221>/Minimum'
         *  Sum: '<S221>/Summation'
         *  UnitDelay: '<S221>/Unit Delay'
         */
        if ((!rtb_AND_ny) || rtb_AND_hc)
        {
            /* Switch: '<S221>/Switch1' incorporates:
             *  Constant: '<S221>/Constant Value1'
             */
            rtb_Switch1_jd = 0U;
        }
        else if (2 < ((sint32)((uint16)(((uint32)OBCR_ac_DW.UnitDelay_DSTATE_iq)
                    + 1U))))
        {
            /* MinMax: '<S221>/Minimum' incorporates:
             *  Switch: '<S221>/Switch1'
             */
            rtb_Switch1_jd = 2U;
        }
        else
        {
            /* Switch: '<S221>/Switch1' incorporates:
             *  Constant: '<S221>/Constant Value'
             *  MinMax: '<S221>/Minimum'
             *  Sum: '<S221>/Summation'
             *  UnitDelay: '<S221>/Unit Delay'
             */
            rtb_Switch1_jd = (uint16)(((uint32)OBCR_ac_DW.UnitDelay_DSTATE_iq) +
                1U);
        }

        /* End of Switch: '<S221>/Switch1' */

        /* Update for UnitDelay: '<S221>/Unit Delay' */
        OBCR_ac_DW.UnitDelay_DSTATE_iq = rtb_Switch1_jd;

        /* Outputs for Atomic SubSystem: '<S158>/Signal Latch On With Reset' */
        /* Outputs for Atomic SubSystem: '<S158>/EdgeRising1' */
        /* Logic: '<S220>/OR1' incorporates:
         *  Constant: '<S158>/Constant Value2'
         *  Logic: '<S219>/AND'
         *  Logic: '<S220>/OR'
         *  Logic: '<S221>/AND'
         *  RelationalOperator: '<S221>/Greater  Than'
         *  UnitDelay: '<S220>/Unit Delay'
         */
        rtb_AND_ny = ((rtb_AND_ny && (((sint32)rtb_Switch1_jd) >= 2)) ||
                      ((!rtb_AND_mk) && (OBCR_ac_DW.UnitDelay_DSTATE_d1)));

        /* End of Outputs for SubSystem: '<S158>/EdgeRising1' */
        /* End of Outputs for SubSystem: '<S158>/Turn On Delay Sample' */

        /* Update for UnitDelay: '<S220>/Unit Delay' */
        OBCR_ac_DW.UnitDelay_DSTATE_d1 = rtb_AND_ny;

        /* End of Outputs for SubSystem: '<S158>/Signal Latch On With Reset' */

        /* Sum: '<S158>/Sum3' incorporates:
         *  UnitDelay: '<S158>/Unit Delay3'
         */
        rtb_Sum2_d = rtb_Multiplication1_l + OBCR_ac_DW.UnitDelay3_DSTATE;

        /* Outputs for Atomic SubSystem: '<S158>/EdgeRising' */
        /* Switch: '<S158>/Switch' incorporates:
         *  Logic: '<S218>/AND'
         */
        if (rtb_TmpSignalConversionAtVeCC_h)
        {
            /* Switch: '<S158>/Switch' */
            rtb_Switch7 = OBCR_ac_B.MinMax2_m;
        }
        else
        {
            /* Switch: '<S158>/Switch' incorporates:
             *  UnitDelay: '<S158>/Unit Delay'
             */
            rtb_Switch7 = OBCR_ac_DW.UnitDelay_DSTATE_j;
        }

        /* End of Switch: '<S158>/Switch' */
        /* End of Outputs for SubSystem: '<S158>/EdgeRising' */

        /* Sum: '<S158>/Sum4' incorporates:
         *  Constant: '<S148>/Calib'
         *  Constant: '<S150>/Calib'
         *  Product: '<S158>/Product1'
         *  Product: '<S158>/Product2'
         *  Sum: '<S158>/Sum5'
         */
        rtb_Multiplication1 = ((rtb_Multiplication1_l *
                                KeOBCR_k_TimeFactorMergeLvl2) + (rtb_Sum2_d *
                                KeOBCR_k_DiffFactorMergeLvl2)) + rtb_Switch7;

        /* Switch: '<S158>/Switch1' */
        if (rtb_AND_ny)
        {
            rtb_Switch3_oxd = OBCR_ac_B.MinMax2;
        }
        else
        {
            rtb_Switch3_oxd = rtb_Multiplication1;
        }

        /* End of Switch: '<S158>/Switch1' */

        /* Merge: '<S132>/Merge1' incorporates:
         *  Constant: '<S158>/Constant Value3'
         *  MinMax: '<S158>/MinMax1'
         */
        rtb_Multiplication1_l = fmaxf(rtb_Switch3_oxd, 0.0F);

        /* Update for UnitDelay: '<S158>/Unit Delay1' */
        OBCR_ac_DW.UnitDelay1_DSTATE_n = rtb_AND_ny;

        /* Update for UnitDelay: '<S158>/Unit Delay4' */
        OBCR_ac_DW.UnitDelay4_DSTATE = rtb_Multiplication1;

        /* Update for UnitDelay: '<S158>/Unit Delay3' */
        OBCR_ac_DW.UnitDelay3_DSTATE = rtb_Sum2_d;

        /* Update for UnitDelay: '<S158>/Unit Delay' */
        OBCR_ac_DW.UnitDelay_DSTATE_j = rtb_Switch7;

        /* End of Outputs for SubSystem: '<S132>/Merge3' */
    }

    /* End of If: '<S132>/If2' */

    /* Switch: '<S132>/Switch1' */
    if (rtb_AND_me)
    {
        /* Switch: '<S132>/Switch1' incorporates:
         *  Constant: '<S132>/Constant Value1'
         */
        OBCR_ac_B.Switch1_e = 0.0F;
    }
    else
    {
        /* Switch: '<S132>/Switch1' */
        OBCR_ac_B.Switch1_e = rtb_Multiplication1_l;
    }

    /* End of Switch: '<S132>/Switch1' */

    /* DataStoreWrite: '<S132>/Data Store Write' */
    EeOBCR_t_EstTimeofChrg_Lv2 = OBCR_ac_B.Switch1_e;

    /* If: '<S132>/If1' */
    rtPrevAction = OBCR_ac_DW.If1_ActiveSubsystem;
    OBCR_ac_DW.If1_ActiveSubsystem = (sint8)(rtb_OR1_ei ? 1 : 0);
    if (!rtb_OR1_ei)
    {
        /* Outputs for IfAction SubSystem: '<S132>/Subsystem' incorporates:
         *  ActionPort: '<S161>/Action Port'
         */
        OBCR_ac_Subsystem(OBCR_ac_B.MinMax1_i, &rtb_Product21);

        /* End of Outputs for SubSystem: '<S132>/Subsystem' */
    }
    else
    {
        if (1 != rtPrevAction)
        {
            /* InitializeConditions for IfAction SubSystem: '<S132>/Merge2' incorporates:
             *  ActionPort: '<S157>/Action Port'
             */
            /* InitializeConditions for If: '<S132>/If1' incorporates:
             *  UnitDelay: '<S157>/Unit Delay'
             *  UnitDelay: '<S157>/Unit Delay1'
             *  UnitDelay: '<S157>/Unit Delay3'
             *  UnitDelay: '<S157>/Unit Delay4'
             */
            OBCR_ac_DW.UnitDelay1_DSTATE_nz = false;
            OBCR_ac_DW.UnitDelay4_DSTATE_i = 0.0F;
            OBCR_ac_DW.UnitDelay3_DSTATE_c = 0.0F;
            OBCR_ac_DW.UnitDelay_DSTATE_b = 0.0F;

            /* End of InitializeConditions for SubSystem: '<S132>/Merge2' */

            /* SystemReset for IfAction SubSystem: '<S132>/Merge2' incorporates:
             *  ActionPort: '<S157>/Action Port'
             */
            /* SystemReset for Atomic SubSystem: '<S157>/EdgeRising' */
            /* SystemReset for If: '<S132>/If1' incorporates:
             *  UnitDelay: '<S213>/Unit Delay'
             *  UnitDelay: '<S214>/Unit Delay'
             *  UnitDelay: '<S215>/Unit Delay'
             *  UnitDelay: '<S216>/Unit Delay'
             *  UnitDelay: '<S217>/Unit Delay'
             */
            OBCR_ac_DW.UnitDelay_DSTATE_jm = false;

            /* End of SystemReset for SubSystem: '<S157>/EdgeRising' */

            /* SystemReset for Atomic SubSystem: '<S157>/EdgeRising1' */
            OBCR_ac_DW.UnitDelay_DSTATE_f3 = false;

            /* End of SystemReset for SubSystem: '<S157>/EdgeRising1' */

            /* SystemReset for Atomic SubSystem: '<S157>/Turn On Delay Sample' */
            OBCR_ac_DW.UnitDelay_DSTATE_os = 0U;

            /* SystemReset for Atomic SubSystem: '<S216>/EdgeRising' */
            OBCR_ac_DW.UnitDelay_DSTATE_aiy = false;

            /* End of SystemReset for SubSystem: '<S216>/EdgeRising' */
            /* End of SystemReset for SubSystem: '<S157>/Turn On Delay Sample' */

            /* SystemReset for Atomic SubSystem: '<S157>/Signal Latch On With Reset' */
            OBCR_ac_DW.UnitDelay_DSTATE_n2 = false;

            /* End of SystemReset for SubSystem: '<S157>/Signal Latch On With Reset' */
            /* End of SystemReset for SubSystem: '<S132>/Merge2' */
        }

        /* Outputs for IfAction SubSystem: '<S132>/Merge2' incorporates:
         *  ActionPort: '<S157>/Action Port'
         */
        /* Switch: '<S157>/Switch2' incorporates:
         *  UnitDelay: '<S157>/Unit Delay1'
         */
        if (OBCR_ac_DW.UnitDelay1_DSTATE_nz)
        {
            /* Switch: '<S157>/Switch2' incorporates:
             *  Constant: '<S157>/Constant Value1'
             */
            rtb_Product21 = 0.0F;
        }
        else
        {
            /* Switch: '<S157>/Switch2' incorporates:
             *  Sum: '<S157>/Sum1'
             *  UnitDelay: '<S157>/Unit Delay4'
             */
            rtb_Product21 = OBCR_ac_B.MinMax1 - OBCR_ac_DW.UnitDelay4_DSTATE_i;
        }

        /* End of Switch: '<S157>/Switch2' */

        /* RelationalOperator: '<S157>/Comparison4' incorporates:
         *  Abs: '<S157>/Abs'
         *  Constant: '<S153>/Calib'
         */
        rtb_AND_ny = (fabsf(rtb_Product21) <= KeOBCR_t_MinErrMergeCmptLvl1);

        /* Outputs for Atomic SubSystem: '<S157>/EdgeRising' */
        /* Logic: '<S213>/OR1' incorporates:
         *  UnitDelay: '<S213>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeCC_h = !OBCR_ac_DW.UnitDelay_DSTATE_jm;

        /* Update for UnitDelay: '<S213>/Unit Delay' incorporates:
         *  Constant: '<S157>/TRUE Constant'
         */
        OBCR_ac_DW.UnitDelay_DSTATE_jm = true;

        /* End of Outputs for SubSystem: '<S157>/EdgeRising' */

        /* Outputs for Atomic SubSystem: '<S157>/EdgeRising1' */
        /* Logic: '<S214>/OR1' incorporates:
         *  UnitDelay: '<S214>/Unit Delay'
         */
        rtb_AND_mk = !OBCR_ac_DW.UnitDelay_DSTATE_f3;

        /* Update for UnitDelay: '<S214>/Unit Delay' incorporates:
         *  Constant: '<S157>/TRUE Constant1'
         */
        OBCR_ac_DW.UnitDelay_DSTATE_f3 = true;

        /* End of Outputs for SubSystem: '<S157>/EdgeRising1' */

        /* Outputs for Atomic SubSystem: '<S157>/Turn On Delay Sample' */
        /* Outputs for Atomic SubSystem: '<S216>/EdgeRising' */
        /* Logic: '<S217>/AND' incorporates:
         *  Logic: '<S217>/OR1'
         *  UnitDelay: '<S217>/Unit Delay'
         */
        rtb_AND_hc = (rtb_AND_ny && (!OBCR_ac_DW.UnitDelay_DSTATE_aiy));

        /* Update for UnitDelay: '<S217>/Unit Delay' */
        OBCR_ac_DW.UnitDelay_DSTATE_aiy = rtb_AND_ny;

        /* End of Outputs for SubSystem: '<S216>/EdgeRising' */

        /* Switch: '<S216>/Switch1' incorporates:
         *  Constant: '<S216>/Constant Value'
         *  Logic: '<S216>/OR'
         *  Logic: '<S216>/OR1'
         *  MinMax: '<S216>/Minimum'
         *  Sum: '<S216>/Summation'
         *  UnitDelay: '<S216>/Unit Delay'
         */
        if ((!rtb_AND_ny) || rtb_AND_hc)
        {
            /* Switch: '<S216>/Switch1' incorporates:
             *  Constant: '<S216>/Constant Value1'
             */
            rtb_Switch1_jd = 0U;
        }
        else if (2 < ((sint32)((uint16)(((uint32)OBCR_ac_DW.UnitDelay_DSTATE_os)
                    + 1U))))
        {
            /* MinMax: '<S216>/Minimum' incorporates:
             *  Switch: '<S216>/Switch1'
             */
            rtb_Switch1_jd = 2U;
        }
        else
        {
            /* Switch: '<S216>/Switch1' incorporates:
             *  Constant: '<S216>/Constant Value'
             *  MinMax: '<S216>/Minimum'
             *  Sum: '<S216>/Summation'
             *  UnitDelay: '<S216>/Unit Delay'
             */
            rtb_Switch1_jd = (uint16)(((uint32)OBCR_ac_DW.UnitDelay_DSTATE_os) +
                1U);
        }

        /* End of Switch: '<S216>/Switch1' */

        /* Update for UnitDelay: '<S216>/Unit Delay' */
        OBCR_ac_DW.UnitDelay_DSTATE_os = rtb_Switch1_jd;

        /* Outputs for Atomic SubSystem: '<S157>/Signal Latch On With Reset' */
        /* Outputs for Atomic SubSystem: '<S157>/EdgeRising1' */
        /* Logic: '<S215>/OR1' incorporates:
         *  Constant: '<S157>/Constant Value2'
         *  Logic: '<S214>/AND'
         *  Logic: '<S215>/OR'
         *  Logic: '<S216>/AND'
         *  RelationalOperator: '<S216>/Greater  Than'
         *  UnitDelay: '<S215>/Unit Delay'
         */
        rtb_AND_ny = ((rtb_AND_ny && (((sint32)rtb_Switch1_jd) >= 2)) ||
                      ((!rtb_AND_mk) && (OBCR_ac_DW.UnitDelay_DSTATE_n2)));

        /* End of Outputs for SubSystem: '<S157>/EdgeRising1' */
        /* End of Outputs for SubSystem: '<S157>/Turn On Delay Sample' */

        /* Update for UnitDelay: '<S215>/Unit Delay' */
        OBCR_ac_DW.UnitDelay_DSTATE_n2 = rtb_AND_ny;

        /* End of Outputs for SubSystem: '<S157>/Signal Latch On With Reset' */

        /* Sum: '<S157>/Sum3' incorporates:
         *  UnitDelay: '<S157>/Unit Delay3'
         */
        rtb_Sum2_d = rtb_Product21 + OBCR_ac_DW.UnitDelay3_DSTATE_c;

        /* Outputs for Atomic SubSystem: '<S157>/EdgeRising' */
        /* Switch: '<S157>/Switch' incorporates:
         *  Logic: '<S213>/AND'
         */
        if (rtb_TmpSignalConversionAtVeCC_h)
        {
            /* Switch: '<S157>/Switch' */
            rtb_Switch7 = OBCR_ac_B.MinMax1_i;
        }
        else
        {
            /* Switch: '<S157>/Switch' incorporates:
             *  UnitDelay: '<S157>/Unit Delay'
             */
            rtb_Switch7 = OBCR_ac_DW.UnitDelay_DSTATE_b;
        }

        /* End of Switch: '<S157>/Switch' */
        /* End of Outputs for SubSystem: '<S157>/EdgeRising' */

        /* Sum: '<S157>/Sum4' incorporates:
         *  Constant: '<S147>/Calib'
         *  Constant: '<S149>/Calib'
         *  Product: '<S157>/Product1'
         *  Product: '<S157>/Product2'
         *  Sum: '<S157>/Sum5'
         */
        rtb_Multiplication1 = ((rtb_Product21 * KeOBCR_k_TimeFactorMergeLvl1) +
                               (rtb_Sum2_d * KeOBCR_k_DiffFactorMergeLvl1)) +
            rtb_Switch7;

        /* Switch: '<S157>/Switch1' */
        if (rtb_AND_ny)
        {
            rtb_Switch3_oxd = OBCR_ac_B.MinMax1;
        }
        else
        {
            rtb_Switch3_oxd = rtb_Multiplication1;
        }

        /* End of Switch: '<S157>/Switch1' */

        /* Merge: '<S132>/Merge' incorporates:
         *  Constant: '<S157>/Constant Value3'
         *  MinMax: '<S157>/MinMax1'
         */
        rtb_Product21 = fmaxf(rtb_Switch3_oxd, 0.0F);

        /* Update for UnitDelay: '<S157>/Unit Delay1' */
        OBCR_ac_DW.UnitDelay1_DSTATE_nz = rtb_AND_ny;

        /* Update for UnitDelay: '<S157>/Unit Delay4' */
        OBCR_ac_DW.UnitDelay4_DSTATE_i = rtb_Multiplication1;

        /* Update for UnitDelay: '<S157>/Unit Delay3' */
        OBCR_ac_DW.UnitDelay3_DSTATE_c = rtb_Sum2_d;

        /* Update for UnitDelay: '<S157>/Unit Delay' */
        OBCR_ac_DW.UnitDelay_DSTATE_b = rtb_Switch7;

        /* End of Outputs for SubSystem: '<S132>/Merge2' */
    }

    /* End of If: '<S132>/If1' */

    /* Switch: '<S132>/Switch' */
    if (rtb_AND_me)
    {
        /* Switch: '<S132>/Switch' incorporates:
         *  Constant: '<S132>/Constant Value'
         */
        OBCR_ac_B.Switch = 0.0F;
    }
    else
    {
        /* Switch: '<S132>/Switch' incorporates:
         *  MinMax: '<S132>/MinMax17'
         */
        OBCR_ac_B.Switch = fmaxf(rtb_Product21, rtb_Multiplication1_l);
    }

    /* End of Switch: '<S132>/Switch' */

    /* DataStoreWrite: '<S132>/Data Store Write1' */
    EeOBCR_t_EstTimeofChrg_Lv1 = OBCR_ac_B.Switch;

    /* RelationalOperator: '<S132>/Comparison6' incorporates:
     *  Constant: '<S146>/Calib'
     */
    VeOBCR_t_EstTimeDC80_Debug2 = (KeOBCR_Pct_DCChrg_80Thrsh <=
        rtb_TmpSignalConversionAtVeHMIR);

    /* If: '<S132>/If3' incorporates:
     *  If: '<S132>/If4'
     */
    if (!rtb_OR1_ei)
    {
        /* Outputs for IfAction SubSystem: '<S132>/DCNotCon' incorporates:
         *  ActionPort: '<S142>/Action Port'
         */
        OBCR_ac_Subsystem(OBCR_ac_B.Sum3_j, (&(VeOBCR_t_EstTimeDC80_Debug1)));

        /* End of Outputs for SubSystem: '<S132>/DCNotCon' */

        /* Outputs for IfAction SubSystem: '<S132>/DCNC100' incorporates:
         *  ActionPort: '<S141>/Action Port'
         */
        OBCR_ac_Subsystem(OBCR_ac_B.Sum3, &rtb_Multiplication1);

        /* End of Outputs for SubSystem: '<S132>/DCNC100' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S132>/DCCON' incorporates:
         *  ActionPort: '<S139>/Action Port'
         */
        OBCR_ac_Subsystem(OBCR_ac_B.MinMax2_o, (&(VeOBCR_t_EstTimeDC80_Debug1)));

        /* End of Outputs for SubSystem: '<S132>/DCCON' */

        /* Outputs for IfAction SubSystem: '<S132>/DCCON100' incorporates:
         *  ActionPort: '<S140>/Action Port'
         */
        OBCR_ac_Subsystem(OBCR_ac_B.MinMax1_c, &rtb_Multiplication1);

        /* End of Outputs for SubSystem: '<S132>/DCCON100' */
    }

    /* End of If: '<S132>/If3' */
    /* End of Outputs for SubSystem: '<S1>/OBCC' */

    /* Inport: '<Root>/VeCHFR_b_CANC_WU_NCV' */
    (void)Rte_Read_VeCHFR_b_CANC_WU_NCV_Value(&rtb_Logical3_f);

    /* Outputs for Function Call SubSystem: '<S1>/OBCC' */
    /* Switch: '<S132>/Switch4' */
    if (VeOBCR_t_EstTimeDC80_Debug2)
    {
        /* Switch: '<S132>/Switch4' incorporates:
         *  Constant: '<S132>/Constant Value4'
         */
        rtb_Multiplication1_l = 0.0F;
    }
    else
    {
        /* Switch: '<S132>/Switch4' */
        rtb_Multiplication1_l = VeOBCR_t_EstTimeDC80_Debug1;
    }

    /* End of Switch: '<S132>/Switch4' */

    /* Outputs for Atomic SubSystem: '<S132>/Limiter1' */
    /* Switch: '<S155>/Switch1' incorporates:
     *  Constant: '<S152>/Calib'
     *  RelationalOperator: '<S155>/Relational Operator'
     */
    if (KeOBCR_t_MaxEstTimeDC_80 < rtb_Multiplication1_l)
    {
        /* Switch: '<S355>/Switch1' */
        rtb_Switch_nt = KeOBCR_t_MaxEstTimeDC_80;
    }
    else
    {
        /* Switch: '<S355>/Switch1' */
        rtb_Switch_nt = rtb_Multiplication1_l;
    }

    /* End of Switch: '<S155>/Switch1' */

    /* Switch: '<S155>/Switch' incorporates:
     *  Constant: '<S132>/Constant Value2'
     *  RelationalOperator: '<S155>/Relational Operator1'
     */
    if (rtb_Switch_nt > 0.0F)
    {
        /* Switch: '<S155>/Switch' */
        OBCR_ac_B.Switch_n = rtb_Switch_nt;
    }
    else
    {
        /* Switch: '<S155>/Switch' */
        OBCR_ac_B.Switch_n = 0.0F;
    }

    /* End of Switch: '<S155>/Switch' */
    /* End of Outputs for SubSystem: '<S132>/Limiter1' */

    /* Switch: '<S132>/Switch3' */
    if (rtb_AND_me)
    {
        /* Switch: '<S132>/Switch3' incorporates:
         *  Constant: '<S132>/Constant Value3'
         */
        rtb_Multiplication1_l = 0.0F;
    }
    else
    {
        /* Switch: '<S132>/Switch3' */
        rtb_Multiplication1_l = rtb_Multiplication1;
    }

    /* End of Switch: '<S132>/Switch3' */

    /* Outputs for Atomic SubSystem: '<S132>/Limiter2' */
    /* Switch: '<S156>/Switch1' incorporates:
     *  Constant: '<S151>/Calib'
     *  RelationalOperator: '<S156>/Relational Operator'
     */
    if (KeOBCR_t_MaxEstTimeDC_100 < rtb_Multiplication1_l)
    {
        /* Switch: '<S355>/Switch1' */
        rtb_Switch_nt = KeOBCR_t_MaxEstTimeDC_100;
    }
    else
    {
        /* Switch: '<S355>/Switch1' */
        rtb_Switch_nt = rtb_Multiplication1_l;
    }

    /* End of Switch: '<S156>/Switch1' */

    /* Switch: '<S156>/Switch' incorporates:
     *  Constant: '<S132>/Constant Value5'
     *  RelationalOperator: '<S156>/Relational Operator1'
     */
    if (rtb_Switch_nt > 0.0F)
    {
        /* Switch: '<S156>/Switch' */
        OBCR_ac_B.Switch_p = rtb_Switch_nt;
    }
    else
    {
        /* Switch: '<S156>/Switch' */
        OBCR_ac_B.Switch_p = 0.0F;
    }

    /* End of Switch: '<S156>/Switch' */
    /* End of Outputs for SubSystem: '<S132>/Limiter2' */

    /* Product: '<S135>/Product' incorporates:
     *  Constant: '<S298>/Calib'
     */
    OBCR_ac_B.VeOBCR_E_EVEnergyReq = KeOBCR_U_HVBatt_NominalVolt * rtb_Switch6;

    /* RelationalOperator: '<S105>/Comparison8' incorporates:
     *  Constant: '<S118>/Constant'
     *  SignalConversion generated from: '<S1>/VeCPLR_e_ChrgPort_Req'
     */
    rtb_TmpSignalConversionAtVeCC_h = (((uint32)rtb_TmpSignalConversionAtVeCPLR)
        == CeOBCR_e_LockInlet);

    /* Outputs for Atomic SubSystem: '<S105>/EdgeRising2' */
    /* Logic: '<S113>/OR1' incorporates:
     *  UnitDelay: '<S113>/Unit Delay'
     */
    rtb_AND_me = !OBCR_ac_DW.UnitDelay_DSTATE_blf;

    /* Update for UnitDelay: '<S113>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_blf = rtb_TmpSignalConversionAtVeCC_h;

    /* End of Outputs for SubSystem: '<S105>/EdgeRising2' */

    /* Outputs for IfAction SubSystem: '<S108>/Racc_Prep_Active' incorporates:
     *  ActionPort: '<S314>/Action Port'
     */
    /* If: '<S108>/If' incorporates:
     *  Merge: '<S10>/Merge_1'
     *  Merge: '<S10>/Merge_24'
     *  RelationalOperator: '<S105>/Comparison10'
     *  RelationalOperator: '<S105>/Comparison3'
     *  RelationalOperator: '<S105>/Comparison4'
     *  RelationalOperator: '<S105>/Comparison6'
     *  RelationalOperator: '<S107>/Comparison5'
     *  RelationalOperator: '<S314>/Comparison3'
     *  RelationalOperator: '<S314>/Comparison4'
     *  RelationalOperator: '<S344>/Comparison6'
     *  RelationalOperator: '<S388>/Comparison8'
     *  RelationalOperator: '<S540>/Comparison1'
     *  RelationalOperator: '<S540>/Comparison5'
     */
    rtb_Switch1_ov = OBCR_ac_B.Merge_1_p;
    rtb_Logical3_n_tmp = OBCR_ac_B.Merge_24;

    /* End of Outputs for SubSystem: '<S108>/Racc_Prep_Active' */

    /* Outputs for Atomic SubSystem: '<S105>/EdgeRising2' */
    /* Logic: '<S105>/Logical3' incorporates:
     *  Constant: '<S114>/Constant'
     *  Constant: '<S115>/Constant'
     *  Constant: '<S116>/Constant'
     *  Constant: '<S117>/Constant'
     *  Constant: '<S122>/Constant'
     *  Constant: '<S124>/Constant'
     *  Logic: '<S105>/Logical'
     *  Logic: '<S105>/Logical1'
     *  Logic: '<S105>/Logical2'
     *  Logic: '<S105>/Logical6'
     *  Logic: '<S105>/Logical8'
     *  Logic: '<S113>/AND'
     *  Merge: '<S10>/Merge_6'
     *  RelationalOperator: '<S105>/Comparison1'
     *  RelationalOperator: '<S105>/Comparison11'
     *  RelationalOperator: '<S105>/Comparison13'
     *  RelationalOperator: '<S105>/Comparison2'
     *  RelationalOperator: '<S105>/Comparison3'
     *  RelationalOperator: '<S105>/Comparison4'
     *  RelationalOperator: '<S105>/Comparison5'
     *  RelationalOperator: '<S105>/Comparison6'
     *  Switch: '<S6>/Switch87'
     *  UnitDelay: '<S105>/Unit Delay'
     *  UnitDelay: '<S105>/Unit Delay1'
     *  UnitDelay: '<S105>/Unit Delay3'
     */
    rtb_Logical3_f = (((((((CeOBCR_e_ChargingLvlDefault == ((uint32)
        rtb_Switch1_ov)) && (((uint32)OBCR_ac_DW.UnitDelay_DSTATE_lx) !=
                            CeOBCR_e_ChargingLvlDefault)) ||
                          ((CeOBCR_e_ChargingLvlDefault != ((uint32)
        rtb_Switch1_ov)) && (((uint32)OBCR_ac_DW.UnitDelay1_DSTATE_a) ==
                            CeOBCR_e_ChargingLvlDefault))) ||
                         ((CeOBCR_e_ChargingSts_Interrupted == ((uint32)
                            rtb_Merge_6)) || (((uint32)rtb_Logical3_n_tmp) ==
                           CeOBCR_e_ChargingSts_Complete))) ||
                        (rtb_TmpSignalConversionAtVeCC_h && rtb_AND_me)) ||
                       (rtb_Logical3_f || rtb_TmpSignalConversionAtVeCHFR)) ||
                      ((CeVTLR_e_DschrgInactv == ((uint32)VeOBCR_e_DschrgSysSts))
                       && (((uint32)OBCR_ac_DW.UnitDelay3_DSTATE_hp) ==
                           CeVTLR_e_DschrgActv)));

    /* End of Outputs for SubSystem: '<S105>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S105>/EdgeRising' */
    /* Logic: '<S111>/OR1' incorporates:
     *  UnitDelay: '<S111>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCC_h = !OBCR_ac_DW.UnitDelay_DSTATE_ln;

    /* Update for UnitDelay: '<S111>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_ln = rtb_Logical3_f;

    /* Outputs for Atomic SubSystem: '<S105>/Signal Latch On With Reset' */
    /* Logic: '<S129>/OR1' incorporates:
     *  Logic: '<S111>/AND'
     *  Logic: '<S129>/NOT'
     *  Logic: '<S129>/OR'
     *  UnitDelay: '<S105>/Unit Delay2'
     *  UnitDelay: '<S129>/Unit Delay'
     */
    rtb_Logical3_f = ((rtb_Logical3_f && rtb_TmpSignalConversionAtVeCC_h) ||
                      ((!OBCR_ac_DW.UnitDelay2_DSTATE) &&
                       (OBCR_ac_DW.UnitDelay_DSTATE_kl)));

    /* End of Outputs for SubSystem: '<S105>/EdgeRising' */

    /* Update for UnitDelay: '<S129>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_kl = rtb_Logical3_f;

    /* End of Outputs for SubSystem: '<S105>/Signal Latch On With Reset' */

    /* Outputs for Atomic SubSystem: '<S105>/EdgeRising1' */
    /* Logic: '<S112>/OR1' incorporates:
     *  UnitDelay: '<S112>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCC_h = !OBCR_ac_DW.UnitDelay_DSTATE_hj;

    /* Update for UnitDelay: '<S112>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_hj = rtb_Logical3_f;

    /* Outputs for Atomic SubSystem: '<S105>/Stop Watch Reset Enabled' */
    /* Switch: '<S130>/Switch1' incorporates:
     *  Logic: '<S112>/AND'
     *  Switch: '<S130>/Switch2'
     */
    if (rtb_Logical3_f && rtb_TmpSignalConversionAtVeCC_h)
    {
        /* Switch: '<S130>/Switch1' incorporates:
         *  Constant: '<S130>/Constant Value2'
         */
        rtb_Multiplication1_l = 0.0F;
    }
    else if (rtb_Logical3_f)
    {
        /* Switch: '<S130>/Switch2' incorporates:
         *  Constant: '<S125>/Calib'
         *  Sum: '<S130>/Subtraction'
         *  Switch: '<S130>/Switch1'
         *  UnitDelay: '<S130>/Unit Delay'
         */
        rtb_Multiplication1_l = ((float32)Rte_Prm_HeOBCR_t_dT_HeOBCR_t_dT()) +
            OBCR_ac_DW.UnitDelay_DSTATE_a;
    }
    else
    {
        /* Switch: '<S130>/Switch1' incorporates:
         *  Switch: '<S130>/Switch2'
         *  UnitDelay: '<S130>/Unit Delay'
         */
        rtb_Multiplication1_l = OBCR_ac_DW.UnitDelay_DSTATE_a;
    }

    /* End of Switch: '<S130>/Switch1' */
    /* End of Outputs for SubSystem: '<S105>/EdgeRising1' */

    /* Update for UnitDelay: '<S130>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_a = rtb_Multiplication1_l;

    /* End of Outputs for SubSystem: '<S105>/Stop Watch Reset Enabled' */

    /* Logic: '<S105>/Logical5' incorporates:
     *  Constant: '<S119>/Constant'
     *  Constant: '<S120>/Constant'
     *  Constant: '<S121>/Constant'
     *  Constant: '<S123>/Constant'
     *  Constant: '<S126>/Calib'
     *  Constant: '<S38>/Calib'
     *  Logic: '<S105>/Logical7'
     *  RelationalOperator: '<S105>/Comparison10'
     *  RelationalOperator: '<S105>/Comparison11'
     *  RelationalOperator: '<S105>/Comparison12'
     *  RelationalOperator: '<S105>/Comparison7'
     *  RelationalOperator: '<S105>/Comparison9'
     *  RelationalOperator: '<S22>/Comparison2'
     *  Switch: '<S6>/Switch87'
     */
    VeOBCR_b_KeepC_Up_China = ((((KeOBCR_b_EnableCANC_China) && (((uint32)
        KeOBCR_e_InterMarketsSelection) == CeOBCR_e_China)) && (((uint32)
        rtb_TmpSignalConversionAtVePMDR) == CePMDR_e_PowerMode_Off)) &&
        ((((uint32)rtb_Logical3_n_tmp) == CeOBCR_e_ChargingSts_Charging) ||
         (((uint32)VeOBCR_e_DschrgSysSts) == CeVTLR_e_DschrgActv)));

    /* Logic: '<S105>/Logical4' */
    OBCR_ac_B.Logical4 = ((VeOBCR_b_KeepC_Up_China) || rtb_Logical3_f);

    /* RelationalOperator: '<S107>/Comparison5' incorporates:
     *  Constant: '<S306>/Constant'
     */
    rtb_Logical3_f = (((uint32)rtb_Switch1_ov) != CeOBCR_e_ChargingLvlDefault);

    /* Outputs for Atomic SubSystem: '<S107>/EdgeRising' */
    /* Logic: '<S305>/OR1' incorporates:
     *  UnitDelay: '<S305>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCC_h = !OBCR_ac_DW.UnitDelay_DSTATE_oe0;

    /* Update for UnitDelay: '<S305>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_oe0 = rtb_Logical3_f;

    /* Switch: '<S107>/Switch1' incorporates:
     *  Logic: '<S305>/AND'
     */
    if (rtb_Logical3_f && rtb_TmpSignalConversionAtVeCC_h)
    {
        /* Switch: '<S107>/Switch1' incorporates:
         *  Constant: '<S107>/Constant Value3'
         */
        rtb_Switch6 = -101.0F;
    }
    else
    {
        /* Switch: '<S107>/Switch1' incorporates:
         *  Constant: '<S310>/Calib'
         */
        rtb_Switch6 = KeOBCR_k_GradDropTargSOC;
    }

    /* End of Switch: '<S107>/Switch1' */
    /* End of Outputs for SubSystem: '<S107>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S107>/GradientLimiter' */
    /* Sum: '<S307>/Sum2' incorporates:
     *  UnitDelay: '<S307>/Unit Delay'
     */
    rtb_Product21 = rtb_TmpSignalConversionAtVeBP_a -
        OBCR_ac_DW.UnitDelay_DSTATE_h2;

    /* Outputs for Atomic SubSystem: '<S307>/Limiter' */
    /* Switch: '<S311>/Switch1' incorporates:
     *  Constant: '<S107>/Constant Value2'
     *  RelationalOperator: '<S311>/Relational Operator'
     */
    if (2.0F < rtb_Product21)
    {
        /* UnitDelay: '<S421>/Unit Delay' */
        rtb_Product21 = 2.0F;
    }

    /* End of Switch: '<S311>/Switch1' */

    /* Switch: '<S311>/Switch' incorporates:
     *  RelationalOperator: '<S311>/Relational Operator1'
     */
    if (rtb_Product21 > rtb_Switch6)
    {
        rtb_Switch6 = rtb_Product21;
    }

    /* End of Switch: '<S311>/Switch' */
    /* End of Outputs for SubSystem: '<S307>/Limiter' */

    /* Sum: '<S307>/Sum3' incorporates:
     *  UnitDelay: '<S307>/Unit Delay'
     */
    rtb_Product21 = rtb_Switch6 + OBCR_ac_DW.UnitDelay_DSTATE_h2;

    /* Update for UnitDelay: '<S307>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_h2 = rtb_Product21;

    /* End of Outputs for SubSystem: '<S107>/GradientLimiter' */

    /* Switch: '<S107>/Switch' */
    if (rtb_Logical3_f)
    {
        /* Switch: '<S308>/Switch1' incorporates:
         *  Constant: '<S309>/Calib'
         *  RelationalOperator: '<S107>/Comparison1'
         */
        if (rtb_TmpSignalConversionAtVeBP_a >= KeOBCR_Pct_TargetSOC)
        {
            rtb_Product21 = KeOBCR_Pct_TargetSOC;
        }

        /* End of Switch: '<S308>/Switch1' */

        /* Switch: '<S107>/Switch' incorporates:
         *  Constant: '<S309>/Calib'
         *  MinMax: '<S107>/MinMax'
         */
        OBCR_ac_B.Switch_k = fminf(KeOBCR_Pct_TargetSOC, rtb_Product21);
    }
    else
    {
        /* Switch: '<S107>/Switch' incorporates:
         *  Constant: '<S107>/Constant Value'
         */
        OBCR_ac_B.Switch_k = 0.0F;
    }

    /* End of Switch: '<S107>/Switch' */

    /* If: '<S108>/If' incorporates:
     *  Constant: '<S312>/Constant'
     *  Constant: '<S313>/Constant'
     *  Inport: '<Root>/VeTIMR_e_RacePrepRaceTypeSts'
     *  Logic: '<S108>/Logical14'
     *  RelationalOperator: '<S108>/Comparison1'
     *  RelationalOperator: '<S108>/Comparison2'
     */
    if ((((uint32)rtb_TmpSignalConversionAtVeTIMR) == CeTIMR_e_RacePrep_Enabled)
        || (((uint32)rtb_TmpSignalConversionAtVeTIMR) ==
            CeTIMR_e_RacePrep_Active))
    {
        (void)Rte_Read_VeTIMR_e_RacePrepRaceTypeSts_Value(&tmpRead_k);

        /* Outputs for IfAction SubSystem: '<S108>/Racc_Prep_Active' incorporates:
         *  ActionPort: '<S314>/Action Port'
         */
        /* RelationalOperator: '<S314>/Comparison9' incorporates:
         *  Constant: '<S320>/Calib'
         *  Inport: '<Root>/VeTIMR_e_RacePrepRaceTypeSts'
         */
        rtb_Logical3_f = (rtb_TmpSignalConversionAtVeHMIR >
                          KeOBCR_Pct_RaceprepSOClimit);

        /* Outputs for Atomic SubSystem: '<S314>/Turn On Delay Time' */
        /* Outputs for Atomic SubSystem: '<S322>/EdgeRising' */
        /* Logic: '<S323>/AND' incorporates:
         *  Logic: '<S323>/OR1'
         *  UnitDelay: '<S323>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeCC_h = (rtb_Logical3_f &&
            (!OBCR_ac_DW.UnitDelay_DSTATE_cf2));

        /* Update for UnitDelay: '<S323>/Unit Delay' */
        OBCR_ac_DW.UnitDelay_DSTATE_cf2 = rtb_Logical3_f;

        /* End of Outputs for SubSystem: '<S322>/EdgeRising' */

        /* Switch: '<S322>/Switch1' incorporates:
         *  Logic: '<S322>/OR'
         *  Logic: '<S322>/OR1'
         */
        if ((!rtb_Logical3_f) || rtb_TmpSignalConversionAtVeCC_h)
        {
            /* Switch: '<S322>/Switch1' incorporates:
             *  Constant: '<S322>/Constant Value1'
             */
            rtb_TmpSignalConversionAtVeHMIR = 0.0F;
        }
        else
        {
            /* Switch: '<S322>/Switch1' incorporates:
             *  Constant: '<S319>/Calib'
             *  Constant: '<S321>/Calib'
             *  MinMax: '<S322>/Minimum'
             *  Sum: '<S322>/Summation'
             *  UnitDelay: '<S322>/Unit Delay'
             */
            rtb_TmpSignalConversionAtVeHMIR = fminf(KeOBCR_t_RaceprepSOCChkDelay,
                ((float32)Rte_Prm_HeOBCR_t_dT_HeOBCR_t_dT()) +
                OBCR_ac_DW.UnitDelay_DSTATE_ml);
        }

        /* End of Switch: '<S322>/Switch1' */

        /* Update for UnitDelay: '<S322>/Unit Delay' */
        OBCR_ac_DW.UnitDelay_DSTATE_ml = rtb_TmpSignalConversionAtVeHMIR;

        /* End of Outputs for SubSystem: '<S314>/Turn On Delay Time' */

        /* Switch: '<S314>/Switch2' incorporates:
         *  Constant: '<S317>/Constant'
         *  Inport: '<Root>/VeTIMR_e_RacePrepRaceTypeSts'
         *  RelationalOperator: '<S314>/Comparison1'
         */
        if (((uint32)tmpRead_k) == CeTIMR_e_RaceType_Track)
        {
            /* Merge: '<S108>/Merge1' incorporates:
             *  Constant: '<S316>/Constant'
             *  Constant: '<S318>/Constant'
             *  Logic: '<S314>/Logical2'
             *  RelationalOperator: '<S314>/Comparison3'
             *  RelationalOperator: '<S314>/Comparison4'
             */
            VeOBCR_b_RacePrepBattLvlSts_Test = (((OBCR_ac_B.Logical13) &&
                (((uint32)rtb_Switch1_ov) != CeOBCR_e_ChargingLvlAC1)) &&
                (((uint32)rtb_Logical3_n_tmp) == CeOBCR_e_ChargingSts_Charging));
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S314>/Turn On Delay Time' */
            /* Merge: '<S108>/Merge1' incorporates:
             *  Constant: '<S316>/Constant'
             *  Constant: '<S318>/Constant'
             *  Constant: '<S321>/Calib'
             *  Logic: '<S314>/Logical1'
             *  Logic: '<S314>/Logical2'
             *  Logic: '<S322>/AND'
             *  RelationalOperator: '<S314>/Comparison3'
             *  RelationalOperator: '<S314>/Comparison4'
             *  RelationalOperator: '<S322>/Greater  Than'
             */
            VeOBCR_b_RacePrepBattLvlSts_Test = ((((OBCR_ac_B.Logical13) &&
                (((uint32)rtb_Switch1_ov) != CeOBCR_e_ChargingLvlAC1)) &&
                (((uint32)rtb_Logical3_n_tmp) == CeOBCR_e_ChargingSts_Charging))
                || (rtb_Logical3_f && (rtb_TmpSignalConversionAtVeHMIR >=
                KeOBCR_t_RaceprepSOCChkDelay)));

            /* End of Outputs for SubSystem: '<S314>/Turn On Delay Time' */
        }

        /* End of Switch: '<S314>/Switch2' */
        /* End of Outputs for SubSystem: '<S108>/Racc_Prep_Active' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S108>/Race_Prep_Inactive' incorporates:
         *  ActionPort: '<S315>/Action Port'
         */
        /* Merge: '<S108>/Merge1' incorporates:
         *  Constant: '<S315>/FALSE Constant'
         *  SignalConversion generated from: '<S315>/Battery_Lvl_Sts_Inactive'
         */
        VeOBCR_b_RacePrepBattLvlSts_Test = false;

        /* End of Outputs for SubSystem: '<S108>/Race_Prep_Inactive' */
    }

    /* Switch: '<S110>/Switch1' */
    if (rtb_TmpSignalConversionAtVeEN_n)
    {
        /* Switch: '<S110>/Switch1' incorporates:
         *  Lookup_n-D: '<S341>/Vector'
         *  SignalConversion generated from: '<S1>/VeENGR_T_EngCoolantTemp'
         */
        rtb_TmpSignalConversionAtVeHMIR = look1_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeENGR, ((const float32 *)
              &(KxOBCR_P_ECT_PwrBdgt[0])), ((const float32 *)
              &(KtOBCR_P_ECT_PwrBdgt[0])), 8U);
    }
    else
    {
        /* Switch: '<S110>/Switch1' incorporates:
         *  Constant: '<S337>/Calib'
         */
        rtb_TmpSignalConversionAtVeHMIR = KeOBCR_P_DfltEng_PwrBdgt;
    }

    /* End of Switch: '<S110>/Switch1' */

    /* RelationalOperator: '<S331>/Relational Operator2' incorporates:
     *  Constant: '<S349>/Calib'
     */
    rtb_TmpSignalConversionAtVeCC_h = (rtb_TmpSignalConversionAtVeHMIR >
        KeOBCR_P_ECTPwrBdgtTh_PPMd);

    /* Outputs for Atomic SubSystem: '<S331>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S354>/EdgeRising' */
    /* Logic: '<S356>/AND' incorporates:
     *  Logic: '<S356>/OR1'
     *  UnitDelay: '<S356>/Unit Delay'
     */
    rtb_Logical3_f = (rtb_TmpSignalConversionAtVeCC_h &&
                      (!OBCR_ac_DW.UnitDelay_DSTATE_lq));

    /* Update for UnitDelay: '<S356>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_lq = rtb_TmpSignalConversionAtVeCC_h;

    /* End of Outputs for SubSystem: '<S354>/EdgeRising' */

    /* Switch: '<S354>/Switch1' incorporates:
     *  Constant: '<S348>/Calib'
     *  Constant: '<S354>/Constant Value'
     *  Logic: '<S354>/OR'
     *  Logic: '<S354>/OR1'
     *  MinMax: '<S354>/Minimum'
     *  Sum: '<S354>/Summation'
     *  UnitDelay: '<S354>/Unit Delay'
     */
    if ((!rtb_TmpSignalConversionAtVeCC_h) || rtb_Logical3_f)
    {
        /* Switch: '<S354>/Switch1' incorporates:
         *  Constant: '<S354>/Constant Value1'
         */
        rtb_Switch1_jd = 0U;
    }
    else if (KeOBCR_Cnt_ECTPwrBdgtDbnc_PPMd < ((uint16)(((uint32)
                OBCR_ac_DW.UnitDelay_DSTATE_gk) + 1U)))
    {
        /* MinMax: '<S354>/Minimum' incorporates:
         *  Constant: '<S348>/Calib'
         *  Switch: '<S354>/Switch1'
         */
        rtb_Switch1_jd = KeOBCR_Cnt_ECTPwrBdgtDbnc_PPMd;
    }
    else
    {
        /* Switch: '<S354>/Switch1' incorporates:
         *  Constant: '<S354>/Constant Value'
         *  MinMax: '<S354>/Minimum'
         *  Sum: '<S354>/Summation'
         *  UnitDelay: '<S354>/Unit Delay'
         */
        rtb_Switch1_jd = (uint16)(((uint32)OBCR_ac_DW.UnitDelay_DSTATE_gk) + 1U);
    }

    /* End of Switch: '<S354>/Switch1' */

    /* Update for UnitDelay: '<S354>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_gk = rtb_Switch1_jd;

    /* End of Outputs for SubSystem: '<S331>/Turn On Delay Sample' */

    /* Switch: '<S387>/Switch1' incorporates:
     *  Constant: '<S390>/Calib'
     */
    if (KeOBCR_b_UseAccCurrent)
    {
        /* Switch: '<S387>/Switch1' */
        rtb_Multiplication1 = VeOBCR_I_AccCurr;
    }
    else
    {
        /* Switch: '<S387>/Switch1' incorporates:
         *  Constant: '<S387>/Constant Value2'
         */
        rtb_Multiplication1 = 0.0F;
    }

    /* End of Switch: '<S387>/Switch1' */

    /* RelationalOperator: '<S344>/Comparison6' incorporates:
     *  Constant: '<S366>/Calib'
     *  Logic: '<S333>/Logical1'
     */
    rtb_Logical3_f = ((VeOBCR_b_HVBatPerWUThermal) &&
                      (KeOBCR_b_HVPerWUThermalEnbl));

    /* Product: '<S333>/Product6' incorporates:
     *  Abs: '<S333>/Abs'
     *  Abs: '<S333>/Abs1'
     *  Lookup_n-D: '<S363>/Vector'
     *  Lookup_n-D: '<S364>/Vector'
     *  SignalConversion generated from: '<S1>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     *  SignalConversion generated from: '<S1>/VeBPCR_T_BatModTmp'
     */
    VeOBCR_k_TempSOCFactor = fabsf(look1_iflf_binlcapw
        (rtb_TmpSignalConversionAtVeBP_a, ((const float32 *)
        &(KxOBCR_k_MaxPower_SOC[0])), ((const float32 *)&(KtOBCR_k_MaxPower_SOC
        [0])), 5U)) * fabsf(look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeBP_e,
        ((const float32 *)&(KxOBCR_k_MaxPower_Temp[0])), ((const float32 *)
        &(KtOBCR_k_MaxPower_Temp[0])), 4U));

    /* Switch: '<S333>/Switch3' incorporates:
     *  Constant: '<S358>/Constant'
     *  Logic: '<S333>/Logical3'
     *  RelationalOperator: '<S105>/Comparison11'
     *  RelationalOperator: '<S333>/Comparison1'
     *  Switch: '<S6>/Switch87'
     */
    if ((((uint32)VeOBCR_e_DschrgSysSts) == CeVTLR_e_DschrgActv) ||
            rtb_Logical3_f)
    {
        /* Switch: '<S333>/Switch3' incorporates:
         *  Constant: '<S333>/Constant Value3'
         *  Constant: '<S333>/Constant Value5'
         *  MinMax: '<S333>/MinMax1'
         *  Product: '<S333>/Product5'
         */
        rtb_Sum2_d = fmaxf(0.0F, rtb_TmpSignalConversionAtVeESMR) * 1000.0F;
    }
    else
    {
        /* Switch: '<S333>/Switch3' incorporates:
         *  Constant: '<S333>/Constant Value3'
         *  Constant: '<S333>/Constant Value5'
         *  Constant: '<S361>/Calib'
         *  MinMax: '<S333>/MinMax1'
         *  MinMax: '<S333>/MinMax2'
         *  Product: '<S333>/Product5'
         *  Product: '<S333>/Product7'
         */
        rtb_Sum2_d = fminf(KeOBCR_P_NewHyst_MaxOut, (fmaxf(0.0F,
                             rtb_TmpSignalConversionAtVeESMR) * 1000.0F) *
                           VeOBCR_k_TempSOCFactor);
    }

    /* End of Switch: '<S333>/Switch3' */
    /* End of Outputs for SubSystem: '<S1>/OBCC' */

    /* Inport: '<Root>/VeSSDR_b_KeepHotCold_PCC' */
    (void)Rte_Read_VeSSDR_b_KeepHotCold_PCC_Value(&rtb_Logical_m);

    /* Outputs for Function Call SubSystem: '<S1>/OBCC' */
    /* Switch: '<S333>/Switch1' incorporates:
     *  Constant: '<S357>/Constant'
     *  Constant: '<S359>/Constant'
     *  Logic: '<S333>/Logical'
     *  RelationalOperator: '<S105>/Comparison11'
     *  RelationalOperator: '<S333>/Comparison2'
     *  RelationalOperator: '<S333>/Comparison3'
     *  Switch: '<S6>/Switch87'
     */
    if ((((CePMDR_e_PowerMode_Off != ((uint32)rtb_TmpSignalConversionAtVePMDR)) ||
          (((uint32)VeOBCR_e_DschrgSysSts) == CeVTLR_e_DschrgActv)) ||
            rtb_Logical_m) || rtb_Logical3_f)
    {
        /* Outputs for Atomic SubSystem: '<S333>/Protected Division' */
        /* Switch: '<S365>/Switch1' incorporates:
         *  Constant: '<S365>/Constant Value'
         *  Constant: '<S365>/Constant Value1'
         *  Constant: '<S365>/Constant Value2'
         *  Constant: '<S365>/Constant Value3'
         *  Logic: '<S365>/AND'
         *  RelationalOperator: '<S365>/Greater Than or Equal '
         *  RelationalOperator: '<S365>/Greater Than or Equal 1'
         *  RelationalOperator: '<S365>/Not Equal'
         *  RelationalOperator: '<S365>/Not Equal1'
         *  Switch: '<S365>/Switch2'
         *  Switch: '<S365>/Switch3'
         */
        if ((rtb_Sum2_d != 0.0F) && (rtb_TmpSignalConversionAtVeHVTR != 0.0F))
        {
            /* Switch: '<S427>/Switch1' incorporates:
             *  Product: '<S365>/Division'
             *  Switch: '<S365>/Switch1'
             */
            rtb_Switch7 = rtb_Sum2_d / rtb_TmpSignalConversionAtVeHVTR;
        }
        else if (rtb_Sum2_d > 0.0F)
        {
            /* Switch: '<S365>/Switch2' incorporates:
             *  Constant: '<S365>/MAXFLOAT'
             *  Switch: '<S427>/Switch1'
             */
            rtb_Switch7 = 3.402823466E+38F;
        }
        else if (rtb_Sum2_d < 0.0F)
        {
            /* Switch: '<S365>/Switch3' incorporates:
             *  Constant: '<S365>/MINFLOAT'
             *  Switch: '<S365>/Switch2'
             *  Switch: '<S427>/Switch1'
             */
            rtb_Switch7 = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S427>/Switch1' incorporates:
             *  Constant: '<S365>/Constant Value4'
             *  Switch: '<S365>/Switch2'
             *  Switch: '<S365>/Switch3'
             */
            rtb_Switch7 = 0.0F;
        }

        /* End of Switch: '<S365>/Switch1' */
        /* End of Outputs for SubSystem: '<S333>/Protected Division' */
    }
    else
    {
        /* Switch: '<S427>/Switch1' incorporates:
         *  Constant: '<S333>/Constant Value1'
         */
        rtb_Switch7 = 0.0F;
    }

    /* End of Switch: '<S333>/Switch1' */

    /* Switch: '<S110>/Switch2' incorporates:
     *  Constant: '<S332>/Constant'
     *  RelationalOperator: '<S110>/Comparison1'
     */
    if (((uint32)VeOBCR_b_SecureConnEstI_tmp) == CeOBCR_e_DC)
    {
        /* Switch: '<S110>/Switch2' */
        rtb_Product21 = VeOBCR_I_EVSEOutputCurr;
    }
    else
    {
        /* Switch: '<S110>/Switch2' */
        rtb_Product21 = rtb_TmpSignalConversionAtVeCC_k;
    }

    /* End of Switch: '<S110>/Switch2' */

    /* Switch: '<S387>/Switch2' incorporates:
     *  Constant: '<S391>/Calib'
     */
    if (KeOBCR_b_UseMinCurr_EstPwrBdgt)
    {
        /* Sum: '<S387>/Sum3' incorporates:
         *  MinMax: '<S387>/MinMax3'
         */
        rtb_Switch3_oxd = fminf(fminf(rtb_TmpSignalConversionAtVeCC_j,
            rtb_TmpSignalConversionAtVeOFCR), rtb_Product21);
    }
    else
    {
        /* Sum: '<S387>/Sum3' */
        rtb_Switch3_oxd = rtb_Product21;
    }

    /* End of Switch: '<S387>/Switch2' */

    /* Switch: '<S427>/Switch1' incorporates:
     *  Constant: '<S387>/Constant Value4'
     *  MinMax: '<S387>/MinMax1'
     *  Sum: '<S387>/Sum2'
     */
    rtb_Switch7 = (rtb_Switch7 - rtb_Multiplication1) + rtb_Switch3_oxd;
    rtb_Switch7 = fmaxf(0.0F, rtb_Switch7);

    /* Product: '<S387>/Product5' */
    rtb_TmpSignalConversionAtVeCC_k = rtb_Switch7 *
        rtb_TmpSignalConversionAtVeHVTR;

    /* Outputs for Atomic SubSystem: '<S331>/Turn On Delay Sample' */
    /* Switch: '<S331>/Switch' incorporates:
     *  Constant: '<S348>/Calib'
     *  Constant: '<S350>/Calib'
     *  Logic: '<S354>/AND'
     *  MinMax: '<S331>/MinMax1'
     *  RelationalOperator: '<S354>/Greater  Than'
     */
    if (rtb_TmpSignalConversionAtVeCC_h && (rtb_Switch1_jd >=
            KeOBCR_Cnt_ECTPwrBdgtDbnc_PPMd))
    {
        rtb_Switch6 = rtb_TmpSignalConversionAtVeHMIR;
    }
    else
    {
        rtb_Switch6 = fminf(rtb_TmpSignalConversionAtVeCC_k,
                            KeOBCR_P_NewHyst_MaxOut);
    }

    /* End of Switch: '<S331>/Switch' */
    /* End of Outputs for SubSystem: '<S331>/Turn On Delay Sample' */

    /* Outputs for Atomic SubSystem: '<S331>/GradientLimiter' */
    /* Sum: '<S347>/Sum2' incorporates:
     *  UnitDelay: '<S347>/Unit Delay'
     */
    rtb_Switch6 -= OBCR_ac_DW.UnitDelay_DSTATE_g;

    /* Outputs for Atomic SubSystem: '<S347>/Limiter' */
    /* Switch: '<S355>/Switch1' incorporates:
     *  Constant: '<S352>/Calib'
     *  RelationalOperator: '<S355>/Relational Operator'
     */
    if (KeOBCR_P_ThrmlBdgt_LU_PPMd < rtb_Switch6)
    {
        /* Switch: '<S355>/Switch1' */
        rtb_Switch_nt = KeOBCR_P_ThrmlBdgt_LU_PPMd;
    }
    else
    {
        /* Switch: '<S355>/Switch1' */
        rtb_Switch_nt = rtb_Switch6;
    }

    /* End of Switch: '<S355>/Switch1' */

    /* Switch: '<S355>/Switch' incorporates:
     *  Constant: '<S351>/Calib'
     *  RelationalOperator: '<S355>/Relational Operator1'
     */
    if (rtb_Switch_nt <= KeOBCR_P_ThrmlBdgt_LD_PPMd)
    {
        rtb_Switch_nt = KeOBCR_P_ThrmlBdgt_LD_PPMd;
    }

    /* End of Switch: '<S355>/Switch' */
    /* End of Outputs for SubSystem: '<S347>/Limiter' */

    /* Sum: '<S347>/Sum3' incorporates:
     *  UnitDelay: '<S347>/Unit Delay'
     */
    rtb_Switch6 = rtb_Switch_nt + OBCR_ac_DW.UnitDelay_DSTATE_g;

    /* Update for UnitDelay: '<S347>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_g = rtb_Switch6;

    /* End of Outputs for SubSystem: '<S331>/GradientLimiter' */

    /* Switch: '<S333>/Switch2' incorporates:
     *  Constant: '<S362>/Calib'
     */
    if (KeOBCR_b_UseMinCurr_EstPwrBdgt)
    {
        /* UnitDelay: '<S421>/Unit Delay' incorporates:
         *  MinMax: '<S333>/MinMax3'
         */
        rtb_Product21 = fminf(fminf(rtb_TmpSignalConversionAtVeCC_j,
                               rtb_TmpSignalConversionAtVeOFCR), rtb_Product21);
    }

    /* End of Switch: '<S333>/Switch2' */
    /* End of Outputs for SubSystem: '<S1>/OBCC' */

    /* Inport: '<Root>/VeCCCR_I_BattCommandedCurr' */
    (void)Rte_Read_VeCCCR_I_BattCommandedCurr_Value(&tmpRead_n);

    /* Outputs for Function Call SubSystem: '<S1>/OBCC' */
    /* Sum: '<S333>/Sum' incorporates:
     *  Constant: '<S360>/Calib'
     *  Product: '<S333>/Product'
     *  Sum: '<S333>/Sum5'
     */
    VeOBCR_P_EstPwrBdgt = ((rtb_Product21 - KeOBCR_I_CurrOffset_EstPwrBdgt) *
                           rtb_TmpSignalConversionAtVeHVTR) + rtb_Sum2_d;

    /* Rounding: '<S389>/Rounding1' incorporates:
     *  Abs: '<S389>/Abs'
     *  Lookup_n-D: '<S411>/Vector'
     *  SignalConversion generated from: '<S1>/VeBPCR_T_BatModTmp'
     */
    VeOBCR_k_ThermalTest1 = ceilf(fabsf(look1_iflf_binlcapw
        (rtb_TmpSignalConversionAtVeBP_e, ((const float32 *)
        &(KxOBCR_k_ThermalProfile[0])), ((const float32 *)
        &(KtOBCR_k_ThermalProfile[0])), 5U)));

    /* Switch: '<S389>/Switch' incorporates:
     *  Constant: '<S407>/Constant'
     *  Logic: '<S389>/Logical1'
     *  Logic: '<S389>/Logical12'
     *  Logic: '<S389>/Logical13'
     *  RelationalOperator: '<S389>/Comparison4'
     */
    if (((VeOBCR_b_HVBatPerWUThermal) && (!VeOBCR_b_THMR_RdyForShtDwn)) ||
            (((uint32)VeOBCR_b_SecureConnEstI_tmp) == CeOBCR_e_DC))
    {
        /* UnitDelay: '<S421>/Unit Delay' incorporates:
         *  Constant: '<S389>/Constant Value6'
         */
        rtb_Product21 = 1.0F;
    }
    else
    {
        /* UnitDelay: '<S421>/Unit Delay' */
        rtb_Product21 = VeOBCR_k_ThermalTest1;
    }

    /* End of Switch: '<S389>/Switch' */

    /* Sum: '<S387>/Sum3' */
    rtb_Switch3_oxd = (rtb_Switch3_oxd - tmpRead_n) - rtb_Multiplication1;

    /* MinMax: '<S387>/MinMax' incorporates:
     *  Constant: '<S387>/Constant Value1'
     */
    VeOBCR_I_ThermalTestB = fmaxf(0.0F, rtb_Switch3_oxd);

    /* Product: '<S389>/Product2' incorporates:
     *  Constant: '<S389>/Constant Value'
     *  Product: '<S389>/Product1'
     *  Product: '<S389>/Product3'
     *  Sum: '<S389>/Sum1'
     *  Sum: '<S389>/Sum4'
     */
    VeOBCR_P_ThermalTest2 = (((1.0F - rtb_Product21) * VeOBCR_I_ThermalTestB) +
        (rtb_Switch7 * rtb_Product21)) * rtb_TmpSignalConversionAtVeHVTR;

    /* Outputs for Atomic SubSystem: '<S389>/GradientLimiter2' */
    /* UnitDelay: '<S421>/Unit Delay' incorporates:
     *  UnitDelay: '<S408>/Unit Delay'
     */
    rtb_Product21 = OBCR_ac_DW.UnitDelay_DSTATE_h4;

    /* Sum: '<S408>/Sum2' */
    rtb_TmpSignalConversionAtVeOFCR = VeOBCR_P_ThermalTest2 - rtb_Product21;

    /* Outputs for Atomic SubSystem: '<S408>/Limiter' */
    /* Switch: '<S412>/Switch1' incorporates:
     *  Constant: '<S410>/Calib'
     *  RelationalOperator: '<S412>/Relational Operator'
     */
    if (KeOBCR_P_AvalPwrForThmrPos < rtb_TmpSignalConversionAtVeOFCR)
    {
        /* Switch: '<S427>/Switch1' */
        rtb_Switch7 = KeOBCR_P_AvalPwrForThmrPos;
    }
    else
    {
        /* Switch: '<S427>/Switch1' */
        rtb_Switch7 = rtb_TmpSignalConversionAtVeOFCR;
    }

    /* End of Switch: '<S412>/Switch1' */

    /* Switch: '<S412>/Switch' incorporates:
     *  Constant: '<S409>/Calib'
     *  RelationalOperator: '<S412>/Relational Operator1'
     */
    if (rtb_Switch7 <= KeOBCR_P_AvalPwrForThmrNeg)
    {
        rtb_Switch7 = KeOBCR_P_AvalPwrForThmrNeg;
    }

    /* End of Switch: '<S412>/Switch' */
    /* End of Outputs for SubSystem: '<S408>/Limiter' */

    /* Sum: '<S408>/Sum3' */
    VeOBCR_P_ThermalTest4 = rtb_Switch7 + rtb_Product21;

    /* Update for UnitDelay: '<S408>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_h4 = VeOBCR_P_ThermalTest4;

    /* End of Outputs for SubSystem: '<S389>/GradientLimiter2' */

    /* Sum: '<S388>/Sum9' incorporates:
     *  Constant: '<S398>/Calib'
     */
    rtb_TmpSignalConversionAtVeOFCR = VeOBCR_P_ThermalTest4 -
        KeOBCR_P_Thermal_Offset;

    /* Outputs for Atomic SubSystem: '<S388>/OpenInterval' */
    /* Logic: '<S388>/Logical' incorporates:
     *  Constant: '<S394>/Constant'
     *  Constant: '<S396>/Calib'
     *  Constant: '<S397>/Calib'
     *  Constant: '<S399>/Calib'
     *  Logic: '<S400>/Logical Operator'
     *  RelationalOperator: '<S388>/Comparison1'
     *  RelationalOperator: '<S388>/Comparison8'
     *  RelationalOperator: '<S400>/Relatonal Operator'
     *  RelationalOperator: '<S400>/Relatonal Operator1'
     */
    rtb_Logical_m = (((((uint32)rtb_Switch1_ov) == CeOBCR_e_ChargingLvlAC1) &&
                      (rtb_TmpSignalConversionAtVeBP_e >=
                       KeOBCR_T_MinTemp2ModPwrBdgt)) &&
                     ((rtb_TmpSignalConversionAtVeOFCR > KeOBCR_P_MinPwr2ModBdgt)
                      && (rtb_TmpSignalConversionAtVeOFCR <
                          KeOBCR_P_MaxPwr2ModBdgt)));

    /* End of Outputs for SubSystem: '<S388>/OpenInterval' */

    /* Outputs for Atomic SubSystem: '<S388>/EdgeRising' */
    /* Logic: '<S393>/AND' incorporates:
     *  Logic: '<S393>/OR1'
     *  UnitDelay: '<S393>/Unit Delay'
     */
    rtb_Logical3_f = (rtb_Logical_m && (!OBCR_ac_DW.UnitDelay_DSTATE_nkp));

    /* Update for UnitDelay: '<S393>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_nkp = rtb_Logical_m;

    /* End of Outputs for SubSystem: '<S388>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S388>/Cond_Chrg_Cycling' */
    /* Switch: '<S402>/Switch1' incorporates:
     *  Logic: '<S402>/Logical1'
     *  UnitDelay: '<S402>/Unit Delay1'
     */
    if (rtb_Logical3_f || (OBCR_ac_DW.UnitDelay1_DSTATE_e))
    {
        /* Switch: '<S402>/Switch1' incorporates:
         *  Constant: '<S403>/Calib'
         */
        rtb_TmpSignalConversionAtVeHVTR = Rte_Prm_HeOBCR_t_dT_HeOBCR_t_dT();
    }
    else
    {
        /* Switch: '<S402>/Switch1' incorporates:
         *  Constant: '<S403>/Calib'
         *  Sum: '<S402>/Subtraction'
         *  UnitDelay: '<S402>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeHVTR = ((float32)
            Rte_Prm_HeOBCR_t_dT_HeOBCR_t_dT()) + OBCR_ac_DW.UnitDelay_DSTATE_fa;
    }

    /* End of Switch: '<S402>/Switch1' */

    /* RelationalOperator: '<S402>/Comparison6' incorporates:
     *  Constant: '<S405>/Calib'
     *  Lookup_n-D: '<S406>/Vector'
     *  Product: '<S402>/Product'
     *  SignalConversion generated from: '<S1>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     *  SignalConversion generated from: '<S1>/VeBPCR_T_BatModTmp'
     */
    VeOBCR_b_PwrBudgetPWMTest2 = (rtb_TmpSignalConversionAtVeHVTR <=
        (KeOBCR_t_CondChrgCycTmPeriod * look2_iflf_binlcapw
         (rtb_TmpSignalConversionAtVeBP_a, rtb_TmpSignalConversionAtVeBP_e, ((
        const float32 *)&(KxOBCR_r_ThermCondDutyCycle[0])), ((const float32 *)
        &(KyOBCR_r_ThermCondDutyCycle[0])), ((const float32 *)
        &(KtOBCR_r_ThermCondDutyCycle[0])), OBCR_ac_ConstP.pooled12, 7U)));

    /* Switch: '<S392>/Switch' */
    if (VeOBCR_b_PwrBudgetPWMTest2)
    {
        /* Switch: '<S392>/Switch' incorporates:
         *  Constant: '<S404>/Calib'
         *  Sum: '<S392>/Sum'
         */
        VeOBCR_b_PwrBudgetPWMTest3 = rtb_TmpSignalConversionAtVeOFCR +
            KeOBCR_P_AddnPwrtoBdgt;
    }
    else
    {
        /* Switch: '<S392>/Switch' incorporates:
         *  Constant: '<S392>/Constant Value2'
         */
        VeOBCR_b_PwrBudgetPWMTest3 = 0.0F;
    }

    /* End of Switch: '<S392>/Switch' */

    /* Update for UnitDelay: '<S402>/Unit Delay1' incorporates:
     *  Constant: '<S403>/Calib'
     *  Constant: '<S405>/Calib'
     *  RelationalOperator: '<S402>/Comparison5'
     *  Sum: '<S402>/Sum1'
     */
    OBCR_ac_DW.UnitDelay1_DSTATE_e = (rtb_TmpSignalConversionAtVeHVTR >=
        (KeOBCR_t_CondChrgCycTmPeriod - ((float32)
        Rte_Prm_HeOBCR_t_dT_HeOBCR_t_dT())));

    /* Update for UnitDelay: '<S402>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_fa = rtb_TmpSignalConversionAtVeHVTR;

    /* End of Outputs for SubSystem: '<S388>/Cond_Chrg_Cycling' */

    /* Switch: '<S395>/Switch1' */
    if (rtb_Logical_m)
    {
        /* Switch: '<S395>/Switch1' */
        VeOBCR_P_PwrBudgetPWMTest4 = VeOBCR_b_PwrBudgetPWMTest3;
    }
    else
    {
        /* Switch: '<S395>/Switch1' */
        VeOBCR_P_PwrBudgetPWMTest4 = rtb_TmpSignalConversionAtVeOFCR;
    }

    /* End of Switch: '<S395>/Switch1' */

    /* RelationalOperator: '<S344>/Comparison6' incorporates:
     *  Constant: '<S417>/Constant'
     */
    rtb_Logical3_f = (((uint32)rtb_Logical3_n_tmp) ==
                      CeOBCR_e_ChargingSts_Charging);

    /* Logic: '<S344>/Logical1' incorporates:
     *  Constant: '<S413>/Constant'
     *  Constant: '<S415>/Constant'
     *  Logic: '<S344>/Logical3'
     *  RelationalOperator: '<S344>/Comparison2'
     *  RelationalOperator: '<S344>/Comparison4'
     */
    rtb_TmpSignalConversionAtVeCC_h = ((((uint32)rtb_TmpSignalConversionAtVePMDR)
        == CePMDR_e_PowerMode_Off) || (((uint32)rtb_TmpSignalConversionAtVePMDR)
        == CePMDR_e_PowerMode_Acc));

    /* Logic: '<S344>/Logical' incorporates:
     *  Logic: '<S344>/Logical1'
     */
    VeOBCR_b_Thermal_A1 = (rtb_Logical3_f && rtb_TmpSignalConversionAtVeCC_h);

    /* Switch: '<S14>/Switch' incorporates:
     *  Constant: '<S414>/Constant'
     *  RelationalOperator: '<S344>/Comparison1'
     */
    rtb_OR1_ei = (((uint32)rtb_TmpSignalConversionAtVePMDR) ==
                  CePMDR_e_PowerMode_Run);

    /* Logic: '<S344>/Logical5' incorporates:
     *  Constant: '<S416>/Constant'
     *  Logic: '<S344>/Logical2'
     *  Logic: '<S344>/Logical3'
     *  Logic: '<S344>/Logical4'
     *  Logic: '<S344>/Logical7'
     *  RelationalOperator: '<S344>/Comparison7'
     */
    VeOBCR_b_Thermal_A2 = (((!rtb_Logical3_f) &&
                            ((rtb_TmpSignalConversionAtVeCC_h || rtb_OR1_ei) ||
        (((uint32)rtb_TmpSignalConversionAtVePMDR) == CePMDR_e_PowerMode_Crank)))
                           || (rtb_Logical3_f && rtb_OR1_ei));

    /* Switch: '<S334>/Switch1' incorporates:
     *  Switch: '<S334>/Switch2'
     */
    if (VeOBCR_b_Thermal_A1)
    {
        /* Switch: '<S334>/Switch1' */
        VeOBCR_P_ThermalTest5 = VeOBCR_P_PwrBudgetPWMTest4;
    }
    else if (VeOBCR_b_Thermal_A2)
    {
        /* Switch: '<S334>/Switch2' incorporates:
         *  Switch: '<S334>/Switch1'
         */
        VeOBCR_P_ThermalTest5 = rtb_TmpSignalConversionAtVeCC_k;
    }
    else
    {
        /* Switch: '<S334>/Switch1' incorporates:
         *  Switch: '<S334>/Switch2'
         */
        VeOBCR_P_ThermalTest5 = VeOBCR_P_PwrBudgetPWMTest4;
    }

    /* End of Switch: '<S334>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S344>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S419>/EdgeRising' */
    /* Switch: '<S14>/Switch' incorporates:
     *  UnitDelay: '<S420>/Unit Delay'
     */
    rtb_OR1_ei = OBCR_ac_DW.UnitDelay_DSTATE_eg;

    /* Update for UnitDelay: '<S420>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_eg = VeOBCR_b_PropSysActv;

    /* Switch: '<S419>/Switch1' incorporates:
     *  Constant: '<S418>/Calib'
     *  Constant: '<S419>/Constant Value'
     *  Logic: '<S419>/OR'
     *  Logic: '<S419>/OR1'
     *  Logic: '<S420>/AND'
     *  Logic: '<S420>/OR1'
     *  MinMax: '<S419>/Minimum'
     *  Sum: '<S419>/Summation'
     *  UnitDelay: '<S419>/Unit Delay'
     */
    if ((!VeOBCR_b_PropSysActv) || ((VeOBCR_b_PropSysActv) && (!rtb_OR1_ei)))
    {
        /* Switch: '<S419>/Switch1' incorporates:
         *  Constant: '<S419>/Constant Value1'
         */
        rtb_Switch1_jd = 0U;
    }
    else if (KeOBCR_Cnt_PwrBdgt_Dbnc_PSA < ((uint16)(((uint32)
                OBCR_ac_DW.UnitDelay_DSTATE_a5) + 1U)))
    {
        /* MinMax: '<S419>/Minimum' incorporates:
         *  Constant: '<S418>/Calib'
         *  Switch: '<S419>/Switch1'
         */
        rtb_Switch1_jd = KeOBCR_Cnt_PwrBdgt_Dbnc_PSA;
    }
    else
    {
        /* Switch: '<S419>/Switch1' incorporates:
         *  Constant: '<S419>/Constant Value'
         *  MinMax: '<S419>/Minimum'
         *  Sum: '<S419>/Summation'
         *  UnitDelay: '<S419>/Unit Delay'
         */
        rtb_Switch1_jd = (uint16)(((uint32)OBCR_ac_DW.UnitDelay_DSTATE_a5) + 1U);
    }

    /* End of Switch: '<S419>/Switch1' */
    /* End of Outputs for SubSystem: '<S419>/EdgeRising' */

    /* Logic: '<S419>/AND' incorporates:
     *  Constant: '<S418>/Calib'
     *  RelationalOperator: '<S419>/Greater  Than'
     */
    rtb_Logical_m = ((VeOBCR_b_PropSysActv) && (rtb_Switch1_jd >=
                      KeOBCR_Cnt_PwrBdgt_Dbnc_PSA));

    /* Update for UnitDelay: '<S419>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_a5 = rtb_Switch1_jd;

    /* End of Outputs for SubSystem: '<S344>/Turn On Delay Sample' */
    /* End of Outputs for SubSystem: '<S1>/OBCC' */

    /* Inport: '<Root>/VeESSR_e_EngStartStopSt' */
    (void)Rte_Read_VeESSR_e_EngStartStopSt_Value(&tmpRead_5);

    /* Outputs for Function Call SubSystem: '<S1>/OBCC' */
    /* Switch: '<S14>/Switch' incorporates:
     *  Constant: '<S370>/Calib'
     *  RelationalOperator: '<S342>/Relational Operator2'
     */
    rtb_OR1_ei = (rtb_TmpSignalConversionAtVeBP_a >
                  KeOBCR_Pct_PSA_ThrmlBdgt_SOCThrsh);

    /* RelationalOperator: '<S342>/Relational Operator3' incorporates:
     *  Constant: '<S370>/Calib'
     */
    rtb_Logical3_f = (rtb_TmpSignalConversionAtVeBP_a <=
                      KeOBCR_Pct_PSA_ThrmlBdgt_SOCThrsh);

    /* Outputs for Atomic SubSystem: '<S342>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S376>/EdgeRising' */
    /* Logic: '<S386>/AND' incorporates:
     *  Logic: '<S386>/OR1'
     *  UnitDelay: '<S386>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCC_h = (rtb_Logical3_f &&
        (!OBCR_ac_DW.UnitDelay_DSTATE_bc));

    /* Update for UnitDelay: '<S386>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_bc = rtb_Logical3_f;

    /* End of Outputs for SubSystem: '<S376>/EdgeRising' */

    /* Switch: '<S376>/Switch1' incorporates:
     *  Constant: '<S368>/Calib'
     *  Constant: '<S376>/Constant Value'
     *  Logic: '<S376>/OR'
     *  Logic: '<S376>/OR1'
     *  MinMax: '<S376>/Minimum'
     *  Sum: '<S376>/Summation'
     *  UnitDelay: '<S376>/Unit Delay'
     */
    if ((!rtb_Logical3_f) || rtb_TmpSignalConversionAtVeCC_h)
    {
        /* Switch: '<S376>/Switch1' incorporates:
         *  Constant: '<S376>/Constant Value1'
         */
        rtb_Switch1_jd = 0U;
    }
    else if (KeOBCR_Cnt_SOCLoDbnc_ThrmlBdgt < ((uint16)(((uint32)
                OBCR_ac_DW.UnitDelay_DSTATE_br) + 1U)))
    {
        /* MinMax: '<S376>/Minimum' incorporates:
         *  Constant: '<S368>/Calib'
         *  Switch: '<S376>/Switch1'
         */
        rtb_Switch1_jd = KeOBCR_Cnt_SOCLoDbnc_ThrmlBdgt;
    }
    else
    {
        /* Switch: '<S376>/Switch1' incorporates:
         *  Constant: '<S376>/Constant Value'
         *  MinMax: '<S376>/Minimum'
         *  Sum: '<S376>/Summation'
         *  UnitDelay: '<S376>/Unit Delay'
         */
        rtb_Switch1_jd = (uint16)(((uint32)OBCR_ac_DW.UnitDelay_DSTATE_br) + 1U);
    }

    /* End of Switch: '<S376>/Switch1' */
    /* End of Outputs for SubSystem: '<S342>/Turn On Delay Sample1' */
    /* End of Outputs for SubSystem: '<S1>/OBCC' */

    /* Inport: '<Root>/VeHVTR_P_AccPwrModPwr' */
    (void)Rte_Read_VeHVTR_P_AccPwrModPwr_Value(&rtb_Sum2_n1);

    /* Inport: '<Root>/VeINVR_U_MtrA_DC_Volt' */
    (void)Rte_Read_VeINVR_U_MtrA_DC_Volt_Value(&rtb_Product1_l);

    /* Inport: '<Root>/VeHVTR_P_HV_AccPwr' */
    (void)Rte_Read_VeHVTR_P_HV_AccPwr_Value(&rtb_Product2);

    /* Inport: '<Root>/VeINVR_I_MtrA_DC_Crnt' */
    (void)Rte_Read_VeINVR_I_MtrA_DC_Crnt_Value(&rtb_Switch2_o);

    /* Outputs for Function Call SubSystem: '<S1>/OBCC' */
    /* Outputs for Atomic SubSystem: '<S342>/Turn On Delay Sample1' */
    /* Update for UnitDelay: '<S376>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_br = rtb_Switch1_jd;

    /* End of Outputs for SubSystem: '<S342>/Turn On Delay Sample1' */

    /* Product: '<S4>/Product1' */
    rtb_Product1_l *= rtb_Switch2_o;

    /* Product: '<S4>/Product2' incorporates:
     *  Constant: '<S4>/Constant'
     */
    rtb_Product2 *= 1000.0F;

    /* If: '<S342>/If' incorporates:
     *  Constant: '<S368>/Calib'
     *  Constant: '<S372>/Calib'
     *  Inport: '<Root>/VeESSR_e_EngStartStopSt'
     *  Logic: '<S342>/Logical'
     *  Logic: '<S376>/AND'
     *  RelationalOperator: '<S342>/Relational Operator1'
     *  RelationalOperator: '<S376>/Greater  Than'
     */
    if (((KeOBCR_b_UseBPLT_PwrBdgt) && (((uint32)tmpRead_5) !=
            CeESSR_e_EngRunning)) && rtb_OR1_ei)
    {
        /* Outputs for IfAction SubSystem: '<S342>/Pass_APower_EVMode' incorporates:
         *  ActionPort: '<S375>/Action Port'
         */
        /* Merge: '<S342>/Merge' incorporates:
         *  Inport: '<S375>/APower'
         */
        VeOBCR_P_ThrmlBdgt_LoSOC = rtb_TmpSignalConversionAtVeCC_k;

        /* End of Outputs for SubSystem: '<S342>/Pass_APower_EVMode' */
    }
    else if (rtb_OR1_ei)
    {
        /* Outputs for IfAction SubSystem: '<S342>/PassThrough' incorporates:
         *  ActionPort: '<S374>/Action Port'
         */
        /* Merge: '<S342>/Merge' incorporates:
         *  Constant: '<S369>/Calib'
         *  Inport: '<S374>/PassThrough_Bdgt'
         */
        VeOBCR_P_ThrmlBdgt_LoSOC = KeOBCR_P_EngCrank;

        /* End of Outputs for SubSystem: '<S342>/PassThrough' */
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S342>/Turn On Delay Sample1' */
        if (rtb_Logical3_f && (rtb_Switch1_jd >= KeOBCR_Cnt_SOCLoDbnc_ThrmlBdgt))
        {
            /* Outputs for IfAction SubSystem: '<S342>/Modify_ThrmlBudget' incorporates:
             *  ActionPort: '<S373>/Action Port'
             */
            /* Lookup_n-D: '<S385>/Vector' incorporates:
             *  SignalConversion generated from: '<S1>/VeBPCR_Pct_HV_BatPackSOC_Arb'
             */
            VeOBCR_P_SOC_Offset = look1_iflf_binlcapw
                (rtb_TmpSignalConversionAtVeBP_a, ((const float32 *)
                  &(KxOBCR_P_ThrmlBdgt_OfstwoMtr[0])), ((const float32 *)
                  &(KtOBCR_P_ThrmlBdgt_OfstwoMtr[0])), 10U);

            /* Sum: '<S373>/Sum' */
            VeOBCR_P_APower_SOCOfst_Delta = rtb_TmpSignalConversionAtVeCC_k -
                VeOBCR_P_SOC_Offset;

            /* Lookup_n-D: '<S384>/Vector' incorporates:
             *  Abs: '<S373>/Abs2'
             *  Sum: '<S373>/Sum1'
             */
            VeOBCR_P_OffsetTmp = look1_iflf_binlcapw(fabsf(rtb_Product1_l) -
                rtb_Product2, ((const float32 *)&(KxOBCR_P_ThrmlBdgt_OfstwMtr[0])),
                ((const float32 *)&(KtOBCR_P_ThrmlBdgt_OfstwMtr[0])), 10U);

            /* Switch: '<S373>/Switch' incorporates:
             *  Constant: '<S382>/Calib'
             *  RelationalOperator: '<S373>/Relational Operator2'
             */
            if (rtb_Product1_l > KeOBCR_P_MtrGenThrsh)
            {
                /* Switch: '<S373>/Switch' incorporates:
                 *  Abs: '<S373>/Abs1'
                 */
                rtb_Product1_l = fabsf(VeOBCR_P_APower_SOCOfst_Delta);
            }
            else
            {
                /* Switch: '<S373>/Switch' */
                rtb_Product1_l = VeOBCR_P_OffsetTmp;
            }

            /* End of Switch: '<S373>/Switch' */

            /* Outputs for Atomic SubSystem: '<S373>/Digital Lowpass Reset Enabled1' */
            /* Switch: '<S380>/Switch2' incorporates:
             *  UnitDelay: '<S380>/Unit Delay'
             */
            rtb_Switch2_o = OBCR_ac_DW.UnitDelay_DSTATE_m;

            /* Switch: '<S380>/Switch1' incorporates:
             *  Constant: '<S383>/Calib'
             *  Product: '<S380>/Multiplication'
             *  Sum: '<S380>/Subtraction'
             *  Sum: '<S380>/Summation'
             */
            VeOBCR_P_ThrrmlBdgtOfstFilt = ((rtb_Product1_l - rtb_Switch2_o) *
                KeOBCR_k_ThrmlBdgtOfstFiltCoef) + rtb_Switch2_o;

            /* Update for UnitDelay: '<S380>/Unit Delay' */
            OBCR_ac_DW.UnitDelay_DSTATE_m = VeOBCR_P_ThrrmlBdgtOfstFilt;

            /* End of Outputs for SubSystem: '<S373>/Digital Lowpass Reset Enabled1' */

            /* Sum: '<S373>/Add2' incorporates:
             *  Constant: '<S4>/Constant1'
             *  Product: '<S4>/Product3'
             */
            VeOBCR_P_ThrmlBdgt_b4Max = (rtb_Product2 - (rtb_Sum2_n1 * 1000.0F))
                - VeOBCR_P_ThrrmlBdgtOfstFilt;

            /* Merge: '<S342>/Merge' incorporates:
             *  Constant: '<S381>/Calib'
             *  MinMax: '<S373>/MinMax'
             */
            VeOBCR_P_ThrmlBdgt_LoSOC = fmaxf(KeOBCR_P_MinThrmlBdgt,
                VeOBCR_P_ThrmlBdgt_b4Max);

            /* End of Outputs for SubSystem: '<S342>/Modify_ThrmlBudget' */
        }

        /* End of Outputs for SubSystem: '<S342>/Turn On Delay Sample1' */
    }

    /* End of If: '<S342>/If' */

    /* Chart: '<S345>/Stateflow Chart' incorporates:
     *  Constant: '<S345>/Constant Value3'
     *  MinMax: '<S345>/MinMax'
     */
    OBCR_ac_StateflowChart(fmaxf(0.0F, VeOBCR_P_ThermalTest5),
                           &OBCR_ac_B.sf_StateflowChart,
                           &OBCR_ac_DW.sf_StateflowChart);

    /* Outputs for Atomic SubSystem: '<S345>/GradientLimiter' */
    /* UnitDelay: '<S421>/Unit Delay' */
    rtb_Product21 = OBCR_ac_DW.UnitDelay_DSTATE_d;

    /* Sum: '<S421>/Sum2' incorporates:
     *  Constant: '<S345>/Constant Value1'
     *  Constant: '<S422>/Calib'
     *  MinMax: '<S345>/MinMax1'
     *  MinMax: '<S345>/MinMax2'
     */
    rtb_Sum2_n1 = fminf(KeOBCR_P_NewHyst_MaxOut, fmaxf
                        (OBCR_ac_B.sf_StateflowChart.P_out, 0.0F)) -
        rtb_Product21;

    /* Outputs for Atomic SubSystem: '<S421>/Limiter' */
    /* Switch: '<S427>/Switch1' incorporates:
     *  Constant: '<S424>/Calib'
     *  RelationalOperator: '<S427>/Relational Operator'
     */
    if (KeOBCR_P_Thermal_Hys_LU < rtb_Sum2_n1)
    {
        /* Switch: '<S427>/Switch1' */
        rtb_Switch7 = KeOBCR_P_Thermal_Hys_LU;
    }
    else
    {
        /* Switch: '<S427>/Switch1' */
        rtb_Switch7 = rtb_Sum2_n1;
    }

    /* End of Switch: '<S427>/Switch1' */

    /* Switch: '<S427>/Switch' incorporates:
     *  Constant: '<S423>/Calib'
     *  RelationalOperator: '<S427>/Relational Operator1'
     */
    if (rtb_Switch7 <= KeOBCR_P_Thermal_Hys_LD)
    {
        rtb_Switch7 = KeOBCR_P_Thermal_Hys_LD;
    }

    /* End of Switch: '<S427>/Switch' */
    /* End of Outputs for SubSystem: '<S421>/Limiter' */

    /* Sum: '<S421>/Sum3' */
    VeOBCR_P_ThermHys_Out = rtb_Switch7 + rtb_Product21;

    /* Update for UnitDelay: '<S421>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_d = VeOBCR_P_ThermHys_Out;

    /* End of Outputs for SubSystem: '<S345>/GradientLimiter' */

    /* Switch: '<S335>/Switch1' incorporates:
     *  Constant: '<S338>/Calib'
     *  Constant: '<S339>/Calib'
     *  Constant: '<S340>/Calib'
     *  Logic: '<S110>/Logical'
     *  Logic: '<S110>/Logical1'
     *  Switch: '<S335>/Switch2'
     *  Switch: '<S335>/Switch3'
     *  Switch: '<S335>/Switch4'
     */
    if (KeOBCR_b_AvalPwrForThmrEnbl)
    {
        /* Switch: '<S335>/Switch1' incorporates:
         *  Constant: '<S336>/Calib'
         */
        OBCR_ac_B.Switch1_m = KeOBCR_P_AvalPwrForThmrVal;
    }
    else if (rtb_Logical_m && (KeOBCR_b_isBEV))
    {
        /* Switch: '<S335>/Switch2' incorporates:
         *  Switch: '<S335>/Switch1'
         */
        OBCR_ac_B.Switch1_m = rtb_TmpSignalConversionAtVeCC_k;
    }
    else if (rtb_Logical_m && (KeOBCR_b_UseECT_PwrBdgt))
    {
        /* Switch: '<S331>/Switch1' incorporates:
         *  Constant: '<S346>/Constant'
         *  Constant: '<S353>/Calib'
         *  Logic: '<S331>/Logical3'
         *  RelationalOperator: '<S105>/Comparison11'
         *  RelationalOperator: '<S331>/Comparison3'
         *  Switch: '<S335>/Switch2'
         *  Switch: '<S335>/Switch3'
         *  Switch: '<S6>/Switch87'
         */
        if ((((uint32)VeOBCR_e_DschrgSysSts) == CeVTLR_e_DschrgActv) ||
                (KeOBCR_b_Allw_PPMd_PwrBudgetBlend))
        {
            /* Switch: '<S335>/Switch1' incorporates:
             *  Switch: '<S335>/Switch3'
             */
            OBCR_ac_B.Switch1_m = rtb_Switch6;
        }
        else
        {
            /* Switch: '<S335>/Switch1' incorporates:
             *  Switch: '<S335>/Switch3'
             */
            OBCR_ac_B.Switch1_m = rtb_TmpSignalConversionAtVeHMIR;
        }

        /* End of Switch: '<S331>/Switch1' */
    }
    else if (rtb_Logical_m)
    {
        /* Switch: '<S342>/Switch' incorporates:
         *  Constant: '<S371>/Calib'
         *  Switch: '<S335>/Switch2'
         *  Switch: '<S335>/Switch3'
         *  Switch: '<S335>/Switch4'
         */
        if (KeOBCR_b_EnblModThrmlBdgt)
        {
            /* Switch: '<S335>/Switch1' incorporates:
             *  Switch: '<S335>/Switch3'
             *  Switch: '<S335>/Switch4'
             */
            OBCR_ac_B.Switch1_m = VeOBCR_P_ThrmlBdgt_LoSOC;
        }
        else
        {
            /* Switch: '<S335>/Switch1' incorporates:
             *  Constant: '<S369>/Calib'
             *  Switch: '<S335>/Switch3'
             *  Switch: '<S335>/Switch4'
             */
            OBCR_ac_B.Switch1_m = KeOBCR_P_EngCrank;
        }

        /* End of Switch: '<S342>/Switch' */
    }
    else
    {
        /* Switch: '<S335>/Switch1' incorporates:
         *  Switch: '<S335>/Switch2'
         *  Switch: '<S335>/Switch3'
         *  Switch: '<S335>/Switch4'
         */
        OBCR_ac_B.Switch1_m = VeOBCR_P_ThermHys_Out;
    }

    /* End of Switch: '<S335>/Switch1' */

    /* DataStoreWrite: '<S10>/Data Store Write' */
    EeOBCR_b_PluggedIn = OBCR_ac_B.Logical13;

    /* Outputs for Atomic SubSystem: '<S542>/Protected Division' */
    /* Switch: '<S580>/Switch1' incorporates:
     *  Constant: '<S539>/Calib'
     *  Constant: '<S578>/Calib'
     *  Constant: '<S580>/Constant Value'
     *  Constant: '<S580>/Constant Value1'
     *  Constant: '<S580>/Constant Value2'
     *  Constant: '<S580>/Constant Value3'
     *  Logic: '<S580>/AND'
     *  RelationalOperator: '<S580>/Greater Than or Equal '
     *  RelationalOperator: '<S580>/Greater Than or Equal 1'
     *  RelationalOperator: '<S580>/Not Equal'
     *  RelationalOperator: '<S580>/Not Equal1'
     *  Switch: '<S580>/Switch2'
     *  Switch: '<S580>/Switch3'
     */
    if ((KeOBCR_t_SmrtEvse_DetDbncTime != 0.0F) && (((float32)
            Rte_Prm_HeOBCR_t_dT_HeOBCR_t_dT()) != 0.0F))
    {
        /* Switch: '<S580>/Switch1' incorporates:
         *  Product: '<S580>/Division'
         */
        rtb_Sum2_n1 = KeOBCR_t_SmrtEvse_DetDbncTime / ((float32)
            Rte_Prm_HeOBCR_t_dT_HeOBCR_t_dT());
    }
    else if (KeOBCR_t_SmrtEvse_DetDbncTime > 0.0F)
    {
        /* Switch: '<S580>/Switch2' incorporates:
         *  Constant: '<S580>/MAXFLOAT'
         *  Switch: '<S580>/Switch1'
         */
        rtb_Sum2_n1 = 3.402823466E+38F;
    }
    else if (KeOBCR_t_SmrtEvse_DetDbncTime < 0.0F)
    {
        /* Switch: '<S580>/Switch3' incorporates:
         *  Constant: '<S580>/MINFLOAT'
         *  Switch: '<S580>/Switch1'
         *  Switch: '<S580>/Switch2'
         */
        rtb_Sum2_n1 = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S580>/Switch1' incorporates:
         *  Constant: '<S580>/Constant Value4'
         *  Switch: '<S580>/Switch2'
         *  Switch: '<S580>/Switch3'
         */
        rtb_Sum2_n1 = 0.0F;
    }

    /* End of Switch: '<S580>/Switch1' */
    /* End of Outputs for SubSystem: '<S542>/Protected Division' */

    /* DataTypeConversion: '<S542>/FloatToFix' */
    rtb_Product3_b = fmodf(floorf(rtb_Sum2_n1), 65536.0F);

    /* DataTypeConversion: '<S542>/FloatToFix' */
    rtb_Switch1_jd = (uint16)((sint32)((rtb_Product3_b < 0.0F) ? ((sint32)
        ((uint16)((sint32)(-((sint32)((sint16)((uint16)((float32)
        (-rtb_Product3_b))))))))) : ((sint32)((uint16)rtb_Product3_b))));

    /* Logic: '<S542>/Logical2' incorporates:
     *  Constant: '<S571>/Calib'
     *  Constant: '<S575>/Constant'
     *  Constant: '<S576>/Constant'
     *  Constant: '<S577>/Constant'
     *  RelationalOperator: '<S10>/Comparison1'
     *  RelationalOperator: '<S10>/Comparison14'
     *  RelationalOperator: '<S542>/Comparison1'
     *  RelationalOperator: '<S542>/Comparison4'
     *  RelationalOperator: '<S542>/Comparison5'
     *  RelationalOperator: '<S542>/Comparison8'
     *  Switch: '<S6>/Switch58'
     *  Switch: '<S6>/Switch59'
     */
    rtb_Logical_m = (((((((uint32)VeOBCR_e_EVSE_PilotStat_In) ==
                         CeOBCR_e_CP_DET_EVSE_OBCM) && (((uint32)
                          VeOBCR_e_EVSE_ProxStat_In) == CeOBCR_e_ProxIn_OBCM)) &&
                       (OBCR_ac_B.TmpSignalConversionAtVeIDCR_I_J <= ((float32)
                         Rte_Prm_KeOBCR_I_MinJ1772ICA_KeOBCR_I_MinJ1772ICA()))) &&
                      (((uint32)VeOBCR_b_SecureConnEstI_tmp) == CeOBCR_e_AC)) &&
                     rtb_AND_k3);

    /* Outputs for Atomic SubSystem: '<S542>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S585>/EdgeRising' */
    /* Logic: '<S587>/AND' incorporates:
     *  Logic: '<S587>/OR1'
     *  UnitDelay: '<S587>/Unit Delay'
     */
    rtb_Logical3_f = (rtb_Logical_m && (!OBCR_ac_DW.UnitDelay_DSTATE_ck));

    /* Update for UnitDelay: '<S587>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_ck = rtb_Logical_m;

    /* End of Outputs for SubSystem: '<S585>/EdgeRising' */

    /* Switch: '<S585>/Switch1' incorporates:
     *  Constant: '<S585>/Constant Value'
     *  Logic: '<S585>/OR'
     *  Logic: '<S585>/OR1'
     *  MinMax: '<S585>/Minimum'
     *  Sum: '<S585>/Summation'
     *  UnitDelay: '<S585>/Unit Delay'
     */
    if ((!rtb_Logical_m) || rtb_Logical3_f)
    {
        /* Switch: '<S585>/Switch1' incorporates:
         *  Constant: '<S585>/Constant Value1'
         */
        rtb_Switch1_b5 = 0U;
    }
    else if (rtb_Switch1_jd < ((uint16)(((uint32)OBCR_ac_DW.UnitDelay_DSTATE_hf)
               + 1U)))
    {
        /* MinMax: '<S585>/Minimum' incorporates:
         *  Switch: '<S585>/Switch1'
         */
        rtb_Switch1_b5 = rtb_Switch1_jd;
    }
    else
    {
        /* Switch: '<S585>/Switch1' incorporates:
         *  Constant: '<S585>/Constant Value'
         *  MinMax: '<S585>/Minimum'
         *  Sum: '<S585>/Summation'
         *  UnitDelay: '<S585>/Unit Delay'
         */
        rtb_Switch1_b5 = (uint16)(((uint32)OBCR_ac_DW.UnitDelay_DSTATE_hf) + 1U);
    }

    /* End of Switch: '<S585>/Switch1' */

    /* Logic: '<S585>/AND' incorporates:
     *  RelationalOperator: '<S585>/Greater  Than'
     */
    VeOBCR_b_SmartEvse_Dtctd3 = (rtb_Logical_m && (rtb_Switch1_b5 >=
        rtb_Switch1_jd));

    /* Update for UnitDelay: '<S585>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_hf = rtb_Switch1_b5;

    /* End of Outputs for SubSystem: '<S542>/Turn On Delay Sample' */

    /* Outputs for Atomic SubSystem: '<S542>/Protected Division1' */
    /* Switch: '<S581>/Switch1' incorporates:
     *  Constant: '<S539>/Calib'
     *  Constant: '<S579>/Calib'
     *  Constant: '<S581>/Constant Value'
     *  Constant: '<S581>/Constant Value1'
     *  Constant: '<S581>/Constant Value2'
     *  Constant: '<S581>/Constant Value3'
     *  Logic: '<S581>/AND'
     *  RelationalOperator: '<S581>/Greater Than or Equal '
     *  RelationalOperator: '<S581>/Greater Than or Equal 1'
     *  RelationalOperator: '<S581>/Not Equal'
     *  RelationalOperator: '<S581>/Not Equal1'
     *  Switch: '<S581>/Switch2'
     *  Switch: '<S581>/Switch3'
     */
    if ((KeOBCR_t_UnplugDbncTimeRst != 0.0F) && (((float32)
            Rte_Prm_HeOBCR_t_dT_HeOBCR_t_dT()) != 0.0F))
    {
        /* Switch: '<S581>/Switch1' incorporates:
         *  Product: '<S581>/Division'
         */
        rtb_Sum2_n1 = KeOBCR_t_UnplugDbncTimeRst / ((float32)
            Rte_Prm_HeOBCR_t_dT_HeOBCR_t_dT());
    }
    else if (KeOBCR_t_UnplugDbncTimeRst > 0.0F)
    {
        /* Switch: '<S581>/Switch2' incorporates:
         *  Constant: '<S581>/MAXFLOAT'
         *  Switch: '<S581>/Switch1'
         */
        rtb_Sum2_n1 = 3.402823466E+38F;
    }
    else if (KeOBCR_t_UnplugDbncTimeRst < 0.0F)
    {
        /* Switch: '<S581>/Switch3' incorporates:
         *  Constant: '<S581>/MINFLOAT'
         *  Switch: '<S581>/Switch1'
         *  Switch: '<S581>/Switch2'
         */
        rtb_Sum2_n1 = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S581>/Switch1' incorporates:
         *  Constant: '<S581>/Constant Value4'
         *  Switch: '<S581>/Switch2'
         *  Switch: '<S581>/Switch3'
         */
        rtb_Sum2_n1 = 0.0F;
    }

    /* End of Switch: '<S581>/Switch1' */
    /* End of Outputs for SubSystem: '<S542>/Protected Division1' */

    /* DataTypeConversion: '<S542>/FloatToFix1' */
    rtb_Product3_b = fmodf(floorf(rtb_Sum2_n1), 65536.0F);

    /* DataTypeConversion: '<S542>/FloatToFix1' */
    rtb_Switch1_jd = (uint16)((sint32)((rtb_Product3_b < 0.0F) ? ((sint32)
        ((uint16)((sint32)(-((sint32)((sint16)((uint16)((float32)
        (-rtb_Product3_b))))))))) : ((sint32)((uint16)rtb_Product3_b))));

    /* RelationalOperator: '<S542>/Comparison6' incorporates:
     *  Constant: '<S574>/Constant'
     *  RelationalOperator: '<S10>/Comparison1'
     *  Switch: '<S6>/Switch59'
     */
    rtb_Logical_m = (((uint32)VeOBCR_e_EVSE_ProxStat_In) ==
                     CeOBCR_e_ProxOut_OBCM);

    /* Outputs for Atomic SubSystem: '<S542>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S586>/EdgeRising' */
    /* Logic: '<S588>/AND' incorporates:
     *  Logic: '<S588>/OR1'
     *  UnitDelay: '<S588>/Unit Delay'
     */
    rtb_Logical3_f = (rtb_Logical_m && (!OBCR_ac_DW.UnitDelay_DSTATE_ai));

    /* Update for UnitDelay: '<S588>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_ai = rtb_Logical_m;

    /* End of Outputs for SubSystem: '<S586>/EdgeRising' */

    /* Switch: '<S586>/Switch1' incorporates:
     *  Constant: '<S586>/Constant Value'
     *  Logic: '<S586>/OR'
     *  Logic: '<S586>/OR1'
     *  MinMax: '<S586>/Minimum'
     *  Sum: '<S586>/Summation'
     *  UnitDelay: '<S586>/Unit Delay'
     */
    if ((!rtb_Logical_m) || rtb_Logical3_f)
    {
        /* Switch: '<S586>/Switch1' incorporates:
         *  Constant: '<S586>/Constant Value1'
         */
        rtb_Switch1_b5 = 0U;
    }
    else if (rtb_Switch1_jd < ((uint16)(((uint32)OBCR_ac_DW.UnitDelay_DSTATE_h1)
               + 1U)))
    {
        /* MinMax: '<S586>/Minimum' incorporates:
         *  Switch: '<S586>/Switch1'
         */
        rtb_Switch1_b5 = rtb_Switch1_jd;
    }
    else
    {
        /* Switch: '<S586>/Switch1' incorporates:
         *  Constant: '<S586>/Constant Value'
         *  MinMax: '<S586>/Minimum'
         *  Sum: '<S586>/Summation'
         *  UnitDelay: '<S586>/Unit Delay'
         */
        rtb_Switch1_b5 = (uint16)(((uint32)OBCR_ac_DW.UnitDelay_DSTATE_h1) + 1U);
    }

    /* End of Switch: '<S586>/Switch1' */

    /* Logic: '<S586>/AND' incorporates:
     *  RelationalOperator: '<S586>/Greater  Than'
     */
    VeOBCR_b_SmartEvse_Dtctd4 = (rtb_Logical_m && (rtb_Switch1_b5 >=
        rtb_Switch1_jd));

    /* Update for UnitDelay: '<S586>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_h1 = rtb_Switch1_b5;

    /* End of Outputs for SubSystem: '<S542>/Turn On Delay Sample1' */

    /* Outputs for Atomic SubSystem: '<S542>/Signal Latch On With Reset' */
    /* Logic: '<S582>/NOT' incorporates:
     *  Switch: '<S584>/Switch1'
     */
    rtb_Logical3_f = !VeOBCR_b_SmartEvse_Dtctd4;

    /* Logic: '<S582>/OR1' incorporates:
     *  Logic: '<S582>/NOT'
     *  Logic: '<S582>/OR'
     *  UnitDelay: '<S582>/Unit Delay'
     */
    VeOBCR_b_SmartEvse_Dtctd1 = ((VeOBCR_b_SmartEvse_Dtctd3) || (rtb_Logical3_f &&
        (OBCR_ac_DW.UnitDelay_DSTATE_af)));

    /* Update for UnitDelay: '<S582>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_af = VeOBCR_b_SmartEvse_Dtctd1;

    /* End of Outputs for SubSystem: '<S542>/Signal Latch On With Reset' */

    /* Logic: '<S583>/Logical3' incorporates:
     *  DataStoreRead: '<S583>/Data Store Read'
     */
    OBCR_ac_B.VeOBCR_b_SmartEVSE = ((VeOBCR_b_SmartEvse_Dtctd1) ||
        (OBCR_ac_DW.NeOBCR_b_SmartEvse_Detected));

    /* DataStoreWrite: '<S583>/Data Store Write2' */
    OBCR_ac_DW.NeOBCR_b_SmartEvse_Detected = OBCR_ac_B.VeOBCR_b_SmartEVSE;

    /* Switch: '<S584>/Switch1' incorporates:
     *  DataStoreWrite: '<S584>/Data Store Write1'
     */
    OBCR_ac_DW.NeOBCR_b_SmartEvse_Detected = (rtb_Logical3_f &&
        (OBCR_ac_DW.NeOBCR_b_SmartEvse_Detected));

    /* RelationalOperator: '<S540>/Comparison10' incorporates:
     *  Constant: '<S544>/Constant'
     *  RelationalOperator: '<S10>/Comparison14'
     *  Switch: '<S6>/Switch58'
     */
    rtb_Logical_m = (((uint32)VeOBCR_e_EVSE_PilotStat_In) == CeOBCR_e_EVSE_Flt);

    /* RelationalOperator: '<S540>/Comparison11' incorporates:
     *  Constant: '<S545>/Constant'
     *  RelationalOperator: '<S10>/Comparison1'
     *  Switch: '<S6>/Switch59'
     */
    rtb_Logical3_f = (((uint32)VeOBCR_e_EVSE_ProxStat_In) ==
                      CeOBCR_e_ProxLo_OBCM);

    /* RelationalOperator: '<S540>/Comparison12' incorporates:
     *  Constant: '<S546>/Constant'
     *  RelationalOperator: '<S10>/Comparison1'
     *  Switch: '<S6>/Switch59'
     */
    rtb_Logical3_oh = (((uint32)VeOBCR_e_EVSE_ProxStat_In) ==
                       CeOBCR_e_ProxHi_OBCM);

    /* RelationalOperator: '<S540>/Comparison3' incorporates:
     *  Constant: '<S549>/Constant'
     *  RelationalOperator: '<S10>/Comparison1'
     *  Switch: '<S6>/Switch59'
     */
    rtb_AND_dq = (((uint32)VeOBCR_e_EVSE_ProxStat_In) == CeOBCR_e_ProxUN_OBCM);

    /* RelationalOperator: '<S540>/Comparison4' incorporates:
     *  Constant: '<S550>/Constant'
     *  RelationalOperator: '<S10>/Comparison1'
     *  Switch: '<S6>/Switch59'
     */
    rtb_TmpSignalConversionAtVeCC_h = (((uint32)VeOBCR_e_EVSE_ProxStat_In) ==
        CeOBCR_e_ProxVOOR_OBCM);

    /* RelationalOperator: '<S540>/Comparison7' incorporates:
     *  Constant: '<S554>/Constant'
     *  RelationalOperator: '<S10>/Comparison14'
     *  Switch: '<S6>/Switch58'
     */
    rtb_AND_me = (((uint32)VeOBCR_e_EVSE_PilotStat_In) ==
                  CeOBCR_e_VOOR_EVSE_OBCM);

    /* RelationalOperator: '<S540>/Comparison8' incorporates:
     *  Constant: '<S555>/Constant'
     *  RelationalOperator: '<S10>/Comparison14'
     *  Switch: '<S6>/Switch58'
     */
    rtb_AND_ny = (((uint32)VeOBCR_e_EVSE_PilotStat_In) == CeOBCR_e_EVSE_NO_AC);

    /* RelationalOperator: '<S540>/Comparison9' incorporates:
     *  Constant: '<S556>/Constant'
     *  RelationalOperator: '<S10>/Comparison14'
     *  Switch: '<S6>/Switch58'
     */
    rtb_AND_mk = (((uint32)VeOBCR_e_EVSE_PilotStat_In) == CeOBCR_e_EVSE_HW_Flt);

    /* Switch: '<S14>/Switch' incorporates:
     *  Constant: '<S540>/Constant Value'
     *  Constant: '<S547>/Constant'
     *  Constant: '<S548>/Constant'
     *  Logic: '<S540>/Logical3'
     *  RelationalOperator: '<S10>/Comparison1'
     *  RelationalOperator: '<S10>/Comparison14'
     *  RelationalOperator: '<S540>/Comparison'
     *  RelationalOperator: '<S540>/Comparison13'
     *  RelationalOperator: '<S540>/Comparison14'
     *  Switch: '<S6>/Switch58'
     *  Switch: '<S6>/Switch59'
     */
    rtb_OR1_ei = ((((((uint32)VeOBCR_e_EVSE_PilotStat_In) ==
                     CeOBCR_e_NO_EVSE_OBCM) && (((uint32)
                      VeOBCR_e_EVSE_ProxStat_In) == CeOBCR_e_ProxOut_OBCM)) &&
                   (OBCR_ac_B.TmpSignalConversionAtVeIDCR_I_J <= 0.05F)) &&
                  IntegerDelay);

    /* Logic: '<S540>/Logical1' incorporates:
     *  Constant: '<S543>/Constant'
     *  Constant: '<S552>/Constant'
     *  RelationalOperator: '<S10>/Comparison1'
     *  RelationalOperator: '<S540>/Comparison1'
     *  RelationalOperator: '<S540>/Comparison2'
     *  Switch: '<S6>/Switch59'
     */
    rtb_AND_hc = ((((uint32)rtb_Switch1_ov) != CeOBCR_e_ChargingLvlDefault) &&
                  (((uint32)VeOBCR_e_EVSE_ProxStat_In) == CeOBCR_e_ProxOut_OBCM));

    /* Outputs for Atomic SubSystem: '<S540>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S560>/EdgeRising' */
    /* Logic: '<S562>/AND' incorporates:
     *  Logic: '<S562>/OR1'
     *  UnitDelay: '<S562>/Unit Delay'
     */
    rtb_AND_k3 = (rtb_AND_hc && (!OBCR_ac_DW.UnitDelay_DSTATE_df));

    /* Update for UnitDelay: '<S562>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_df = rtb_AND_hc;

    /* End of Outputs for SubSystem: '<S560>/EdgeRising' */

    /* Switch: '<S560>/Switch1' incorporates:
     *  Constant: '<S559>/Calib'
     *  Constant: '<S560>/Constant Value'
     *  Logic: '<S560>/OR'
     *  Logic: '<S560>/OR1'
     *  MinMax: '<S560>/Minimum'
     *  Sum: '<S560>/Summation'
     *  UnitDelay: '<S560>/Unit Delay'
     */
    if ((!rtb_AND_hc) || rtb_AND_k3)
    {
        /* Switch: '<S560>/Switch1' incorporates:
         *  Constant: '<S560>/Constant Value1'
         */
        rtb_Switch1_jd = 0U;
    }
    else if (KeOBCR_Cnt_DbncPlugInReason < ((uint16)(((uint32)
                OBCR_ac_DW.UnitDelay_DSTATE_ok) + 1U)))
    {
        /* MinMax: '<S560>/Minimum' incorporates:
         *  Constant: '<S559>/Calib'
         *  Switch: '<S560>/Switch1'
         */
        rtb_Switch1_jd = KeOBCR_Cnt_DbncPlugInReason;
    }
    else
    {
        /* Switch: '<S560>/Switch1' incorporates:
         *  Constant: '<S560>/Constant Value'
         *  MinMax: '<S560>/Minimum'
         *  Sum: '<S560>/Summation'
         *  UnitDelay: '<S560>/Unit Delay'
         */
        rtb_Switch1_jd = (uint16)(((uint32)OBCR_ac_DW.UnitDelay_DSTATE_ok) + 1U);
    }

    /* End of Switch: '<S560>/Switch1' */

    /* Logic: '<S560>/AND' incorporates:
     *  Constant: '<S559>/Calib'
     *  RelationalOperator: '<S560>/Greater  Than'
     */
    VeOBCR_b_ProxOut_PlugDet = (rtb_AND_hc && (rtb_Switch1_jd >=
        KeOBCR_Cnt_DbncPlugInReason));

    /* Update for UnitDelay: '<S560>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_ok = rtb_Switch1_jd;

    /* End of Outputs for SubSystem: '<S540>/Turn On Delay Sample' */

    /* Logic: '<S540>/Logical2' incorporates:
     *  Constant: '<S551>/Constant'
     *  Constant: '<S553>/Constant'
     *  RelationalOperator: '<S10>/Comparison14'
     *  RelationalOperator: '<S540>/Comparison5'
     *  RelationalOperator: '<S540>/Comparison6'
     *  Switch: '<S6>/Switch58'
     */
    rtb_AND_hc = ((((uint32)rtb_Switch1_ov) != CeOBCR_e_ChargingLvlDefault) &&
                  (((uint32)VeOBCR_e_EVSE_PilotStat_In) == CeOBCR_e_NO_EVSE_OBCM));

    /* Outputs for Atomic SubSystem: '<S540>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S561>/EdgeRising' */
    /* Logic: '<S563>/AND' incorporates:
     *  Logic: '<S563>/OR1'
     *  UnitDelay: '<S563>/Unit Delay'
     */
    rtb_AND_k3 = (rtb_AND_hc && (!OBCR_ac_DW.UnitDelay_DSTATE_or));

    /* Update for UnitDelay: '<S563>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_or = rtb_AND_hc;

    /* End of Outputs for SubSystem: '<S561>/EdgeRising' */

    /* Switch: '<S561>/Switch1' incorporates:
     *  Constant: '<S559>/Calib'
     *  Constant: '<S561>/Constant Value'
     *  Logic: '<S561>/OR'
     *  Logic: '<S561>/OR1'
     *  MinMax: '<S561>/Minimum'
     *  Sum: '<S561>/Summation'
     *  UnitDelay: '<S561>/Unit Delay'
     */
    if ((!rtb_AND_hc) || rtb_AND_k3)
    {
        /* Switch: '<S561>/Switch1' incorporates:
         *  Constant: '<S561>/Constant Value1'
         */
        rtb_Switch1_jd = 0U;
    }
    else if (KeOBCR_Cnt_DbncPlugInReason < ((uint16)(((uint32)
                OBCR_ac_DW.UnitDelay_DSTATE_l) + 1U)))
    {
        /* MinMax: '<S561>/Minimum' incorporates:
         *  Constant: '<S559>/Calib'
         *  Switch: '<S561>/Switch1'
         */
        rtb_Switch1_jd = KeOBCR_Cnt_DbncPlugInReason;
    }
    else
    {
        /* Switch: '<S561>/Switch1' incorporates:
         *  Constant: '<S561>/Constant Value'
         *  MinMax: '<S561>/Minimum'
         *  Sum: '<S561>/Summation'
         *  UnitDelay: '<S561>/Unit Delay'
         */
        rtb_Switch1_jd = (uint16)(((uint32)OBCR_ac_DW.UnitDelay_DSTATE_l) + 1U);
    }

    /* End of Switch: '<S561>/Switch1' */

    /* Logic: '<S561>/AND' incorporates:
     *  Constant: '<S559>/Calib'
     *  RelationalOperator: '<S561>/Greater  Than'
     */
    VeOBCR_b_NoCP_PlugDet = (rtb_AND_hc && (rtb_Switch1_jd >=
        KeOBCR_Cnt_DbncPlugInReason));

    /* Update for UnitDelay: '<S561>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_l = rtb_Switch1_jd;

    /* End of Outputs for SubSystem: '<S540>/Turn On Delay Sample1' */

    /* Switch: '<S557>/Switch1' incorporates:
     *  Switch: '<S557>/Switch10'
     *  Switch: '<S557>/Switch11'
     *  Switch: '<S557>/Switch12'
     *  Switch: '<S557>/Switch2'
     *  Switch: '<S557>/Switch3'
     *  Switch: '<S557>/Switch4'
     *  Switch: '<S557>/Switch5'
     *  Switch: '<S557>/Switch6'
     *  Switch: '<S557>/Switch7'
     *  Switch: '<S557>/Switch8'
     *  Switch: '<S557>/Switch9'
     */
    if (rtb_OR1_ei)
    {
        /* Switch: '<S557>/Switch1' incorporates:
         *  Constant: '<S557>/Constant Value'
         */
        VeOBCR_e_PlugIn_Reason = 1;
    }
    else if (VeOBCR_b_ProxOut_PlugDet)
    {
        /* Switch: '<S557>/Switch2' incorporates:
         *  Constant: '<S557>/Constant Value1'
         *  Switch: '<S557>/Switch1'
         */
        VeOBCR_e_PlugIn_Reason = 2;
    }
    else if (rtb_AND_dq)
    {
        /* Switch: '<S557>/Switch3' incorporates:
         *  Constant: '<S557>/Constant Value2'
         *  Switch: '<S557>/Switch1'
         *  Switch: '<S557>/Switch2'
         */
        VeOBCR_e_PlugIn_Reason = 3;
    }
    else if (rtb_TmpSignalConversionAtVeCC_h)
    {
        /* Switch: '<S557>/Switch5' incorporates:
         *  Constant: '<S557>/Constant Value3'
         *  Switch: '<S557>/Switch1'
         *  Switch: '<S557>/Switch2'
         *  Switch: '<S557>/Switch3'
         */
        VeOBCR_e_PlugIn_Reason = 4;
    }
    else if (rtb_Logical3_f)
    {
        /* Switch: '<S557>/Switch6' incorporates:
         *  Constant: '<S557>/Constant Value4'
         *  Switch: '<S557>/Switch1'
         *  Switch: '<S557>/Switch2'
         *  Switch: '<S557>/Switch3'
         *  Switch: '<S557>/Switch5'
         */
        VeOBCR_e_PlugIn_Reason = 5;
    }
    else if (rtb_Logical3_oh)
    {
        /* Switch: '<S557>/Switch4' incorporates:
         *  Constant: '<S557>/Constant Value5'
         *  Switch: '<S557>/Switch1'
         *  Switch: '<S557>/Switch2'
         *  Switch: '<S557>/Switch3'
         *  Switch: '<S557>/Switch5'
         *  Switch: '<S557>/Switch6'
         */
        VeOBCR_e_PlugIn_Reason = 6;
    }
    else if (VeOBCR_b_NoCP_PlugDet)
    {
        /* Switch: '<S557>/Switch7' incorporates:
         *  Constant: '<S557>/Constant Value6'
         *  Switch: '<S557>/Switch1'
         *  Switch: '<S557>/Switch2'
         *  Switch: '<S557>/Switch3'
         *  Switch: '<S557>/Switch4'
         *  Switch: '<S557>/Switch5'
         *  Switch: '<S557>/Switch6'
         */
        VeOBCR_e_PlugIn_Reason = 7;
    }
    else if (rtb_AND_me)
    {
        /* Switch: '<S557>/Switch8' incorporates:
         *  Constant: '<S557>/Constant Value7'
         *  Switch: '<S557>/Switch1'
         *  Switch: '<S557>/Switch2'
         *  Switch: '<S557>/Switch3'
         *  Switch: '<S557>/Switch4'
         *  Switch: '<S557>/Switch5'
         *  Switch: '<S557>/Switch6'
         *  Switch: '<S557>/Switch7'
         */
        VeOBCR_e_PlugIn_Reason = 8;
    }
    else if (rtb_AND_ny)
    {
        /* Switch: '<S557>/Switch10' incorporates:
         *  Constant: '<S557>/Constant Value8'
         *  Switch: '<S557>/Switch1'
         *  Switch: '<S557>/Switch2'
         *  Switch: '<S557>/Switch3'
         *  Switch: '<S557>/Switch4'
         *  Switch: '<S557>/Switch5'
         *  Switch: '<S557>/Switch6'
         *  Switch: '<S557>/Switch7'
         *  Switch: '<S557>/Switch8'
         */
        VeOBCR_e_PlugIn_Reason = 9;
    }
    else if (rtb_AND_mk)
    {
        /* Switch: '<S557>/Switch9' incorporates:
         *  Constant: '<S557>/Constant Value9'
         *  Switch: '<S557>/Switch1'
         *  Switch: '<S557>/Switch10'
         *  Switch: '<S557>/Switch2'
         *  Switch: '<S557>/Switch3'
         *  Switch: '<S557>/Switch4'
         *  Switch: '<S557>/Switch5'
         *  Switch: '<S557>/Switch6'
         *  Switch: '<S557>/Switch7'
         *  Switch: '<S557>/Switch8'
         */
        VeOBCR_e_PlugIn_Reason = 10;
    }
    else if (rtb_Logical_m)
    {
        /* Switch: '<S557>/Switch11' incorporates:
         *  Constant: '<S557>/Constant Value10'
         *  Switch: '<S557>/Switch1'
         *  Switch: '<S557>/Switch10'
         *  Switch: '<S557>/Switch2'
         *  Switch: '<S557>/Switch3'
         *  Switch: '<S557>/Switch4'
         *  Switch: '<S557>/Switch5'
         *  Switch: '<S557>/Switch6'
         *  Switch: '<S557>/Switch7'
         *  Switch: '<S557>/Switch8'
         *  Switch: '<S557>/Switch9'
         */
        VeOBCR_e_PlugIn_Reason = 11;
    }
    else if (OBCR_ac_B.VeOBCR_b_SmartEVSE)
    {
        /* Switch: '<S557>/Switch12' incorporates:
         *  Constant: '<S557>/Constant Value11'
         *  Switch: '<S557>/Switch1'
         *  Switch: '<S557>/Switch10'
         *  Switch: '<S557>/Switch11'
         *  Switch: '<S557>/Switch2'
         *  Switch: '<S557>/Switch3'
         *  Switch: '<S557>/Switch4'
         *  Switch: '<S557>/Switch5'
         *  Switch: '<S557>/Switch6'
         *  Switch: '<S557>/Switch7'
         *  Switch: '<S557>/Switch8'
         *  Switch: '<S557>/Switch9'
         */
        VeOBCR_e_PlugIn_Reason = 12;
    }
    else
    {
        /* Switch: '<S557>/Switch1' incorporates:
         *  Switch: '<S557>/Switch10'
         *  Switch: '<S557>/Switch11'
         *  Switch: '<S557>/Switch12'
         *  Switch: '<S557>/Switch2'
         *  Switch: '<S557>/Switch3'
         *  Switch: '<S557>/Switch4'
         *  Switch: '<S557>/Switch5'
         *  Switch: '<S557>/Switch6'
         *  Switch: '<S557>/Switch7'
         *  Switch: '<S557>/Switch8'
         *  Switch: '<S557>/Switch9'
         */
        VeOBCR_e_PlugIn_Reason = 0;
    }

    /* End of Switch: '<S557>/Switch1' */

    /* Switch: '<S558>/Switch1' */
    OBCR_ac_B.Switch1_e1 = rtb_OR1_ei ? 1 : 0;

    /* Switch: '<S558>/Switch10' */
    if (rtb_AND_ny)
    {
        /* Switch: '<S558>/Switch10' incorporates:
         *  Constant: '<S558>/Constant Value8'
         */
        OBCR_ac_B.Switch10 = 9;
    }
    else
    {
        /* Switch: '<S558>/Switch10' incorporates:
         *  Constant: '<S558>/Constant Value24'
         */
        OBCR_ac_B.Switch10 = 0;
    }

    /* End of Switch: '<S558>/Switch10' */

    /* Switch: '<S558>/Switch12' */
    if (OBCR_ac_B.VeOBCR_b_SmartEVSE)
    {
        /* Switch: '<S558>/Switch12' incorporates:
         *  Constant: '<S558>/Constant Value11'
         */
        OBCR_ac_B.Switch12 = 12;
    }
    else
    {
        /* Switch: '<S558>/Switch12' incorporates:
         *  Constant: '<S558>/Constant Value10'
         */
        OBCR_ac_B.Switch12 = 0;
    }

    /* End of Switch: '<S558>/Switch12' */

    /* Switch: '<S558>/Switch13' incorporates:
     *  Constant: '<S558>/Constant Value29'
     */
    OBCR_ac_B.Switch13 = 0;

    /* Switch: '<S558>/Switch14' incorporates:
     *  Constant: '<S558>/Constant Value15'
     */
    OBCR_ac_B.Switch14 = 0;

    /* Switch: '<S558>/Switch15' incorporates:
     *  Constant: '<S558>/Constant Value28'
     */
    OBCR_ac_B.Switch15 = 0;

    /* Switch: '<S558>/Switch16' */
    if (rtb_AND_me)
    {
        /* Switch: '<S558>/Switch16' incorporates:
         *  Constant: '<S558>/Constant Value23'
         */
        OBCR_ac_B.Switch16 = 8;
    }
    else
    {
        /* Switch: '<S558>/Switch16' incorporates:
         *  Constant: '<S558>/Constant Value7'
         */
        OBCR_ac_B.Switch16 = 0;
    }

    /* End of Switch: '<S558>/Switch16' */

    /* Switch: '<S558>/Switch2' */
    if (VeOBCR_b_ProxOut_PlugDet)
    {
        /* Switch: '<S558>/Switch2' incorporates:
         *  Constant: '<S558>/Constant Value1'
         */
        OBCR_ac_B.Switch2_f = 2;
    }
    else
    {
        /* Switch: '<S558>/Switch2' incorporates:
         *  Constant: '<S558>/Constant Value17'
         */
        OBCR_ac_B.Switch2_f = 0;
    }

    /* End of Switch: '<S558>/Switch2' */

    /* Switch: '<S558>/Switch3' */
    if (rtb_AND_dq)
    {
        /* Switch: '<S558>/Switch3' incorporates:
         *  Constant: '<S558>/Constant Value2'
         */
        OBCR_ac_B.Switch3 = 3;
    }
    else
    {
        /* Switch: '<S558>/Switch3' incorporates:
         *  Constant: '<S558>/Constant Value18'
         */
        OBCR_ac_B.Switch3 = 0;
    }

    /* End of Switch: '<S558>/Switch3' */

    /* Switch: '<S558>/Switch4' */
    if (rtb_Logical3_oh)
    {
        /* Switch: '<S558>/Switch4' incorporates:
         *  Constant: '<S558>/Constant Value5'
         */
        OBCR_ac_B.Switch4 = 6;
    }
    else
    {
        /* Switch: '<S558>/Switch4' incorporates:
         *  Constant: '<S558>/Constant Value21'
         */
        OBCR_ac_B.Switch4 = 0;
    }

    /* End of Switch: '<S558>/Switch4' */

    /* Switch: '<S558>/Switch5' */
    if (rtb_TmpSignalConversionAtVeCC_h)
    {
        /* Switch: '<S558>/Switch5' incorporates:
         *  Constant: '<S558>/Constant Value3'
         */
        OBCR_ac_B.Switch5 = 4;
    }
    else
    {
        /* Switch: '<S558>/Switch5' incorporates:
         *  Constant: '<S558>/Constant Value19'
         */
        OBCR_ac_B.Switch5 = 0;
    }

    /* End of Switch: '<S558>/Switch5' */

    /* Switch: '<S558>/Switch6' */
    if (rtb_Logical3_f)
    {
        /* Switch: '<S558>/Switch6' incorporates:
         *  Constant: '<S558>/Constant Value4'
         */
        OBCR_ac_B.Switch6 = 5;
    }
    else
    {
        /* Switch: '<S558>/Switch6' incorporates:
         *  Constant: '<S558>/Constant Value20'
         */
        OBCR_ac_B.Switch6 = 0;
    }

    /* End of Switch: '<S558>/Switch6' */

    /* Switch: '<S558>/Switch7' */
    if (VeOBCR_b_NoCP_PlugDet)
    {
        /* Switch: '<S558>/Switch7' incorporates:
         *  Constant: '<S558>/Constant Value6'
         */
        OBCR_ac_B.Switch7 = 7;
    }
    else
    {
        /* Switch: '<S558>/Switch7' incorporates:
         *  Constant: '<S558>/Constant Value22'
         */
        OBCR_ac_B.Switch7 = 0;
    }

    /* End of Switch: '<S558>/Switch7' */

    /* Switch: '<S558>/Switch8' */
    if (rtb_Logical_m)
    {
        /* Switch: '<S558>/Switch8' incorporates:
         *  Constant: '<S558>/Constant Value26'
         */
        OBCR_ac_B.Switch8 = 11;
    }
    else
    {
        /* Switch: '<S558>/Switch8' incorporates:
         *  Constant: '<S558>/Constant Value27'
         */
        OBCR_ac_B.Switch8 = 0;
    }

    /* End of Switch: '<S558>/Switch8' */

    /* Switch: '<S558>/Switch9' */
    if (rtb_AND_mk)
    {
        /* Switch: '<S558>/Switch9' incorporates:
         *  Constant: '<S558>/Constant Value9'
         */
        OBCR_ac_B.Switch9 = 10;
    }
    else
    {
        /* Switch: '<S558>/Switch9' incorporates:
         *  Constant: '<S558>/Constant Value25'
         */
        OBCR_ac_B.Switch9 = 0;
    }

    /* End of Switch: '<S558>/Switch9' */

    /* Switch: '<S595>/Switch1' incorporates:
     *  Constant: '<S38>/Calib'
     *  Constant: '<S590>/Constant'
     *  Constant: '<S591>/Constant'
     *  Constant: '<S592>/Constant'
     *  Constant: '<S593>/Constant'
     *  Constant: '<S594>/Constant'
     *  RelationalOperator: '<S22>/Comparison2'
     *  RelationalOperator: '<S443>/Comparison1'
     *  RelationalOperator: '<S443>/Comparison2'
     *  RelationalOperator: '<S443>/Comparison3'
     *  RelationalOperator: '<S443>/Comparison4'
     *  RelationalOperator: '<S443>/Comparison5'
     *  Switch: '<S595>/Switch2'
     *  Switch: '<S595>/Switch3'
     *  Switch: '<S595>/Switch5'
     *  Switch: '<S595>/Switch6'
     */
    if (((uint32)KeOBCR_e_InterMarketsSelection) == CeOBCR_e_NorthAmerica)
    {
        /* Switch: '<S595>/Switch1' incorporates:
         *  Constant: '<S601>/Calib'
         */
        OBCR_ac_B.Switch1_h = KeOBCR_I_MaxAlwdCurrAC_NA;
    }
    else if (((uint32)KeOBCR_e_InterMarketsSelection) ==
             CeOBCR_e_EuropeAfricaMiddleEast)
    {
        /* Switch: '<S595>/Switch2' incorporates:
         *  Constant: '<S599>/Calib'
         *  Switch: '<S595>/Switch1'
         */
        OBCR_ac_B.Switch1_h = KeOBCR_I_MaxAlwdCurrAC_Eu;
    }
    else if (((uint32)KeOBCR_e_InterMarketsSelection) == CeOBCR_e_Japan)
    {
        /* Switch: '<S595>/Switch3' incorporates:
         *  Constant: '<S600>/Calib'
         *  Switch: '<S595>/Switch1'
         *  Switch: '<S595>/Switch2'
         */
        OBCR_ac_B.Switch1_h = KeOBCR_I_MaxAlwdCurrAC_JA;
    }
    else if (((uint32)KeOBCR_e_InterMarketsSelection) == CeOBCR_e_Default)
    {
        /* Switch: '<S595>/Switch5' incorporates:
         *  Constant: '<S597>/Calib'
         *  Switch: '<S595>/Switch1'
         *  Switch: '<S595>/Switch2'
         *  Switch: '<S595>/Switch3'
         */
        OBCR_ac_B.Switch1_h = KeOBCR_I_MaxAlwdCurrAC_Def1;
    }
    else if (((uint32)KeOBCR_e_InterMarketsSelection) == CeOBCR_e_China)
    {
        /* Switch: '<S595>/Switch6' incorporates:
         *  Constant: '<S596>/Calib'
         *  Switch: '<S595>/Switch1'
         *  Switch: '<S595>/Switch2'
         *  Switch: '<S595>/Switch3'
         *  Switch: '<S595>/Switch5'
         */
        OBCR_ac_B.Switch1_h = KeOBCR_I_MaxAlwdCurrAC_China;
    }
    else
    {
        /* Switch: '<S595>/Switch1' incorporates:
         *  Constant: '<S598>/Calib'
         *  Switch: '<S595>/Switch2'
         *  Switch: '<S595>/Switch3'
         *  Switch: '<S595>/Switch5'
         *  Switch: '<S595>/Switch6'
         */
        OBCR_ac_B.Switch1_h = KeOBCR_I_MaxAlwdCurrAC_Def2;
    }

    /* End of Switch: '<S595>/Switch1' */

    /* Gain: '<S441>/Gain' */
    OBCR_ac_B.Gain_o = OBCR_ac_B.Logical13;

    /* Switch: '<S47>/Switch1' incorporates:
     *  Logic: '<S23>/Logical1'
     *  Logic: '<S23>/Logical4'
     *  Switch: '<S47>/Switch2'
     *  Switch: '<S47>/Switch3'
     */
    if (rtb_TmpSignalConversionAtVeHPMR)
    {
        /* Switch: '<S47>/Switch1' incorporates:
         *  Constant: '<S23>/Constant Value'
         */
        VeOBCR_e_BPCM_Reason = 1;
    }
    else if (!rtb_Logical11_i)
    {
        /* Switch: '<S47>/Switch2' incorporates:
         *  Constant: '<S23>/Constant Value1'
         *  Switch: '<S47>/Switch1'
         */
        VeOBCR_e_BPCM_Reason = 2;
    }
    else if (!VeOBCR_b_ChrgStat_Ready)
    {
        /* Switch: '<S47>/Switch3' incorporates:
         *  Constant: '<S23>/Constant Value2'
         *  Switch: '<S47>/Switch1'
         *  Switch: '<S47>/Switch2'
         */
        VeOBCR_e_BPCM_Reason = 3;
    }
    else
    {
        /* Switch: '<S47>/Switch1' incorporates:
         *  Constant: '<S23>/Constant Value3'
         *  Switch: '<S47>/Switch2'
         *  Switch: '<S47>/Switch3'
         */
        VeOBCR_e_BPCM_Reason = 0;
    }

    /* End of Switch: '<S47>/Switch1' */

    /* Logic: '<S24>/Logical10' */
    OBCR_ac_B.Logical10 = !rtb_Logical2_bu;

    /* Logic: '<S24>/Logical11' */
    OBCR_ac_B.Logical11 = false;

    /* Logic: '<S24>/Logical12' */
    OBCR_ac_B.Logical12 = !rtb_OR1_hj;

    /* Logic: '<S24>/Logical13' */
    OBCR_ac_B.Logical13_c = !rtb_TmpSignalConversionAtVeVD_o;

    /* Logic: '<S24>/Logical14' */
    OBCR_ac_B.Logical14 = !rtb_Logical1_o;

    /* Logic: '<S24>/Logical15' */
    OBCR_ac_B.Logical15 = !rtb_Logical26;

    /* Logic: '<S24>/Logical16' */
    OBCR_ac_B.Logical16 = !rtb_TmpSignalConversionAtVeVDVR;

    /* Logic: '<S24>/Logical17' */
    OBCR_ac_B.Logical17 = !rtb_Logical23;

    /* Logic: '<S24>/Logical22' */
    OBCR_ac_B.Logical22 = false;

    /* Logic: '<S24>/Logical24' */
    OBCR_ac_B.Logical24 = false;

    /* Logic: '<S24>/Logical5' */
    OBCR_ac_B.Logical5 = !rtb_AND_ps;

    /* Logic: '<S24>/Logical6' */
    OBCR_ac_B.Logical6_e = false;

    /* Logic: '<S24>/Logical7' */
    OBCR_ac_B.Logical7 = !rtb_Switch;

    /* Logic: '<S24>/Logical8' */
    OBCR_ac_B.Logical8 = false;

    /* Logic: '<S24>/Logical9' */
    OBCR_ac_B.Logical9 = false;

    /* UnitDelay: '<S24>/Unit Delay' */
    OBCR_ac_B.UnitDelay = OBCR_ac_DW.UnitDelay_DSTATE_ci;

    /* Switch: '<S71>/Switch1' incorporates:
     *  Switch: '<S71>/Switch2'
     *  Switch: '<S71>/Switch3'
     *  Switch: '<S71>/Switch5'
     *  Switch: '<S71>/Switch6'
     *  Switch: '<S71>/Switch7'
     */
    if (rtb_TmpSignalConversionAtVeIDCR)
    {
        /* Switch: '<S71>/Switch1' incorporates:
         *  Constant: '<S25>/Constant Value'
         */
        VeOBCR_e_InitChecks_Reason = 1;
    }
    else if (rtb_OR1_oy)
    {
        /* Switch: '<S71>/Switch2' incorporates:
         *  Constant: '<S25>/Constant Value1'
         *  Switch: '<S71>/Switch1'
         */
        VeOBCR_e_InitChecks_Reason = 2;
    }
    else if (VeOBCR_b_Ship_Plant_StpChrg)
    {
        /* Switch: '<S71>/Switch3' incorporates:
         *  Constant: '<S25>/Constant Value7'
         *  Switch: '<S71>/Switch1'
         *  Switch: '<S71>/Switch2'
         */
        VeOBCR_e_InitChecks_Reason = 3;
    }
    else if (VeOBCR_b_MainCntctrOpnPdg)
    {
        /* Switch: '<S71>/Switch5' incorporates:
         *  Constant: '<S25>/Constant Value9'
         *  Switch: '<S71>/Switch1'
         *  Switch: '<S71>/Switch2'
         *  Switch: '<S71>/Switch3'
         */
        VeOBCR_e_InitChecks_Reason = 5;
    }
    else if (VeOBCR_b_DCCntctrOpnPdg)
    {
        /* Switch: '<S71>/Switch6' incorporates:
         *  Constant: '<S25>/Constant Value18'
         *  Switch: '<S71>/Switch1'
         *  Switch: '<S71>/Switch2'
         *  Switch: '<S71>/Switch3'
         *  Switch: '<S71>/Switch5'
         */
        VeOBCR_e_InitChecks_Reason = 6;
    }
    else if (rtb_TmpSignalConversionAtVeFCPR)
    {
        /* Switch: '<S71>/Switch7' incorporates:
         *  Constant: '<S25>/Constant Value19'
         *  Switch: '<S71>/Switch1'
         *  Switch: '<S71>/Switch2'
         *  Switch: '<S71>/Switch3'
         *  Switch: '<S71>/Switch5'
         *  Switch: '<S71>/Switch6'
         */
        VeOBCR_e_InitChecks_Reason = 7;
    }
    else
    {
        /* Switch: '<S71>/Switch1' incorporates:
         *  Constant: '<S25>/Constant Value2'
         *  Switch: '<S71>/Switch2'
         *  Switch: '<S71>/Switch3'
         *  Switch: '<S71>/Switch5'
         *  Switch: '<S71>/Switch6'
         *  Switch: '<S71>/Switch7'
         */
        VeOBCR_e_InitChecks_Reason = 0;
    }

    /* End of Switch: '<S71>/Switch1' */

    /* SignalConversion: '<S25>/Signal Conversion' incorporates:
     *  Switch: '<S25>/Switch'
     */
    OBCR_ac_B.SignalConversion[0] = rtb_TmpSignalConversionAtVeIDCR ? 1 : 0;

    /* Switch: '<S25>/Switch1' */
    if (rtb_OR1_oy)
    {
        /* SignalConversion: '<S25>/Signal Conversion' incorporates:
         *  Constant: '<S25>/Constant Value5'
         */
        OBCR_ac_B.SignalConversion[1] = 2;
    }
    else
    {
        /* SignalConversion: '<S25>/Signal Conversion' incorporates:
         *  Constant: '<S25>/Constant Value6'
         */
        OBCR_ac_B.SignalConversion[1] = 0;
    }

    /* End of Switch: '<S25>/Switch1' */

    /* Switch: '<S25>/Switch5' */
    if (VeOBCR_b_Ship_Plant_StpChrg)
    {
        /* SignalConversion: '<S25>/Signal Conversion' incorporates:
         *  Constant: '<S25>/Constant Value10'
         */
        OBCR_ac_B.SignalConversion[2] = 3;
    }
    else
    {
        /* SignalConversion: '<S25>/Signal Conversion' incorporates:
         *  Constant: '<S25>/Constant Value16'
         */
        OBCR_ac_B.SignalConversion[2] = 0;
    }

    /* End of Switch: '<S25>/Switch5' */

    /* SignalConversion: '<S25>/Signal Conversion' */
    OBCR_ac_B.SignalConversion[3] = OBCR_ac_ConstB.Switch2_n;

    /* Switch: '<S25>/Switch3' */
    if (VeOBCR_b_MainCntctrOpnPdg)
    {
        /* SignalConversion: '<S25>/Signal Conversion' incorporates:
         *  Constant: '<S25>/Constant Value17'
         */
        OBCR_ac_B.SignalConversion[4] = 5;
    }
    else
    {
        /* SignalConversion: '<S25>/Signal Conversion' incorporates:
         *  Constant: '<S25>/Constant Value13'
         */
        OBCR_ac_B.SignalConversion[4] = 0;
    }

    /* End of Switch: '<S25>/Switch3' */

    /* Switch: '<S25>/Switch4' */
    if (VeOBCR_b_DCCntctrOpnPdg)
    {
        /* SignalConversion: '<S25>/Signal Conversion' incorporates:
         *  Constant: '<S25>/Constant Value14'
         */
        OBCR_ac_B.SignalConversion[5] = 6;
    }
    else
    {
        /* SignalConversion: '<S25>/Signal Conversion' incorporates:
         *  Constant: '<S25>/Constant Value15'
         */
        OBCR_ac_B.SignalConversion[5] = 0;
    }

    /* End of Switch: '<S25>/Switch4' */

    /* Switch: '<S25>/Switch9' */
    if (rtb_TmpSignalConversionAtVeFCPR)
    {
        /* SignalConversion: '<S25>/Signal Conversion' incorporates:
         *  Constant: '<S25>/Constant Value20'
         */
        OBCR_ac_B.SignalConversion[6] = 7;
    }
    else
    {
        /* SignalConversion: '<S25>/Signal Conversion' incorporates:
         *  Constant: '<S25>/Constant Value21'
         */
        OBCR_ac_B.SignalConversion[6] = 0;
    }

    /* End of Switch: '<S25>/Switch9' */

    /* DataTypeConversion: '<S13>/DataTypeConversion' incorporates:
     *  Merge: '<S8>/Merge_24'
     */
    OBCR_ac_B.DataTypeConversion_ko = VeOBCR_e_MdRq_Test;

    /* Switch: '<S96>/Switch' incorporates:
     *  Constant: '<S90>/Constant'
     *  Constant: '<S92>/Constant'
     *  Inport: '<Root>/VeVDVR_b_DschrgS2Cmd'
     *  RelationalOperator: '<S14>/Comparison2'
     *  RelationalOperator: '<S14>/Comparison3'
     *  Switch: '<S96>/Switch1'
     */
    if (((uint32)VeOBCR_b_SecureConnEstI_tmp) == CeOBCR_e_Discharge)
    {
        (void)Rte_Read_VeVDVR_b_DschrgS2Cmd_Value(&rtb_UnitDelay_mg);

        /* Switch: '<S14>/Switch1' incorporates:
         *  Constant: '<S95>/Calib'
         *  Inport: '<Root>/VeVDVR_b_DschrgS2Cmd'
         */
        if (KeOBCR_b_V2X_Selection)
        {
            /* Switch: '<S96>/Switch' */
            VeOBCR_b_S2_Cmd_Test1 = rtb_UnitDelay_mg;
        }
        else
        {
            /* Switch: '<S96>/Switch' */
            VeOBCR_b_S2_Cmd_Test1 = VeOBCR_b_DschrgS2Cmd;
        }

        /* End of Switch: '<S14>/Switch1' */
    }
    else if (((uint32)VeOBCR_b_SecureConnEstI_tmp) == CeOBCR_e_DC)
    {
        /* Switch: '<S96>/Switch' incorporates:
         *  Inport: '<Root>/VeDCCR_b_J1772_S2_Close_DC_SF'
         *  Switch: '<S96>/Switch1'
         */
        (void)Rte_Read_VeDCCR_b_J1772_S2_Close_DC_SF_Value
            ((&(VeOBCR_b_S2_Cmd_Test1)));
    }
    else
    {
        /* Switch: '<S96>/Switch' incorporates:
         *  Constant: '<S91>/Constant'
         *  RelationalOperator: '<S14>/Comparison5'
         *  Switch: '<S96>/Switch1'
         *  Switch: '<S96>/Switch2'
         */
        VeOBCR_b_S2_Cmd_Test1 = ((((uint32)VeOBCR_b_SecureConnEstI_tmp) ==
            CeOBCR_e_AC) && (VeOBCR_b_CloseS2CntctrI));
    }

    /* Outputs for Atomic SubSystem: '<S14>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S97>/EdgeRising' */
    /* Switch: '<S14>/Switch' incorporates:
     *  UnitDelay: '<S98>/Unit Delay'
     */
    rtb_OR1_ei = OBCR_ac_DW.UnitDelay_DSTATE_lo;

    /* Update for UnitDelay: '<S98>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_lo = OBCR_ac_B.Gain_k1;

    /* Switch: '<S97>/Switch1' incorporates:
     *  Constant: '<S93>/Calib'
     *  Constant: '<S97>/Constant Value'
     *  Logic: '<S97>/OR'
     *  Logic: '<S97>/OR1'
     *  Logic: '<S98>/AND'
     *  Logic: '<S98>/OR1'
     *  MinMax: '<S97>/Minimum'
     *  Sum: '<S97>/Summation'
     *  UnitDelay: '<S97>/Unit Delay'
     */
    if ((!OBCR_ac_B.Gain_k1) || ((OBCR_ac_B.Gain_k1) && (!rtb_OR1_ei)))
    {
        /* Switch: '<S97>/Switch1' incorporates:
         *  Constant: '<S97>/Constant Value1'
         */
        rtb_Switch1_jd = 0U;
    }
    else if (KeOBCR_Cnt_Rdy4ShtDwnDbnc < ((uint16)(((uint32)
                OBCR_ac_DW.UnitDelay_DSTATE_ms) + 1U)))
    {
        /* MinMax: '<S97>/Minimum' incorporates:
         *  Constant: '<S93>/Calib'
         *  Switch: '<S97>/Switch1'
         */
        rtb_Switch1_jd = KeOBCR_Cnt_Rdy4ShtDwnDbnc;
    }
    else
    {
        /* Switch: '<S97>/Switch1' incorporates:
         *  Constant: '<S97>/Constant Value'
         *  MinMax: '<S97>/Minimum'
         *  Sum: '<S97>/Summation'
         *  UnitDelay: '<S97>/Unit Delay'
         */
        rtb_Switch1_jd = (uint16)(((uint32)OBCR_ac_DW.UnitDelay_DSTATE_ms) + 1U);
    }

    /* End of Switch: '<S97>/Switch1' */
    /* End of Outputs for SubSystem: '<S97>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S14>/Turn On Delay Sample' */
    /* End of Outputs for SubSystem: '<S1>/OBCC' */

    /* Inport: '<S4>/ChrgPort_BCM_Cmd_In' incorporates:
     *  Inport: '<Root>/VeCITR_b_ChrgPort_BCM_Cmd_Out'
     */
    (void)Rte_Read_VeCITR_b_ChrgPort_BCM_Cmd_Out_Value
        (&OBCR_ac_B.ChrgPort_BCM_Cmd_In);

    /* Outputs for Function Call SubSystem: '<S1>/OBCC' */
    /* Outputs for Atomic SubSystem: '<S14>/Turn On Delay Sample' */
    /* Update for UnitDelay: '<S97>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_ms = rtb_Switch1_jd;

    /* End of Outputs for SubSystem: '<S14>/Turn On Delay Sample' */

    /* Switch: '<S14>/Switch' incorporates:
     *  Constant: '<S94>/Calib'
     *  Logic: '<S14>/Logical'
     */
    if (((OBCR_ac_B.Gain_k1) && (VeOBCR_b_ChargingComplete_SF)) &&
            (KeOBCR_b_EnblDlydShtDwn))
    {
        /* Outputs for Atomic SubSystem: '<S14>/Turn On Delay Sample' */
        /* Gain: '<S21>/Gain' incorporates:
         *  Constant: '<S93>/Calib'
         *  Logic: '<S97>/AND'
         *  RelationalOperator: '<S97>/Greater  Than'
         *  Switch: '<S14>/Switch'
         */
        OBCR_ac_B.Gain_jv = ((OBCR_ac_B.Gain_k1) && (rtb_Switch1_jd >=
                              KeOBCR_Cnt_Rdy4ShtDwnDbnc));

        /* End of Outputs for SubSystem: '<S14>/Turn On Delay Sample' */
    }
    else
    {
        /* Gain: '<S21>/Gain' incorporates:
         *  Switch: '<S14>/Switch'
         */
        OBCR_ac_B.Gain_jv = OBCR_ac_B.Gain_k1;
    }

    /* End of Switch: '<S14>/Switch' */

    /* Gain: '<S17>/Gain' */
    OBCR_ac_B.Gain_k1 = OBCR_ac_B.Gain_eg;

    /* Gain: '<S18>/Gain' */
    OBCR_ac_B.Gain_eg = VeOBCR_b_ChargingComplete_SF;

    /* Gain: '<S19>/Gain' */
    OBCR_ac_B.Gain_ah = VeOBCR_b_S2_Cmd_Test1;

    /* Gain: '<S20>/Gain' */
    OBCR_ac_B.Gain_e3 = VeOBCR_e_NCR;

    /* SignalConversion generated from: '<S4>/ActChargeLim' incorporates:
     *  Constant: '<S324>/Calib'
     */
    OBCR_ac_B.OutportBufferForActChargeLim = KeOBCR_P_TestActChargeLim;

    /* SignalConversion generated from: '<S4>/ActChargeLimFA' incorporates:
     *  Constant: '<S328>/Calib'
     */
    OBCR_ac_B.OutportBufferForActChargeLimFA = KeOBCR_b_TestActChargeLimFA;

    /* SignalConversion generated from: '<S4>/ActChargePwr' incorporates:
     *  Constant: '<S325>/Calib'
     */
    OBCR_ac_B.OutportBufferForActChargePwr = KeOBCR_P_TestActChargePower;

    /* SignalConversion generated from: '<S4>/ActChargePwrFA' incorporates:
     *  Constant: '<S329>/Calib'
     */
    OBCR_ac_B.OutportBufferForActChargePwrFA = KeOBCR_b_TestActChargePwrFA;

    /* SignalConversion generated from: '<S4>/EVSEPwr' incorporates:
     *  Constant: '<S326>/Calib'
     */
    OBCR_ac_B.OutportBufferForEVSEPwr = KeOBCR_P_TestEVSEPwr;

    /* SignalConversion generated from: '<S4>/EnergyToBatt' incorporates:
     *  Constant: '<S327>/Calib'
     */
    OBCR_ac_B.OutportBufferForEnergyToBatt = KeOBCR_P_TestPowertoBattery;

    /* SignalConversion generated from: '<S4>/TotalBattCap' incorporates:
     *  Constant: '<S330>/Calib'
     */
    OBCR_ac_B.OutportBufferForTotalBattCap = KeOBCR_q_TestTotalBattCap;

    /* Update for UnitDelay: '<S24>/Unit Delay1' */
    OBCR_ac_DW.UnitDelay1_DSTATE_j = VeOBCR_b_ChargingComplete_SF;

    /* Update for Delay: '<S10>/Integer Delay' */
    OBCR_ac_DW.IntegerDelay_DSTATE = OBCR_ac_B.VeOBCR_b_SecureConnEstI;

    /* Update for Delay: '<S10>/Integer Delay1' incorporates:
     *  DataTypeConversion: '<S12>/DataTypeConversion'
     */
    OBCR_ac_DW.IntegerDelay1_DSTATE = OBCR_ac_B.DataTypeConversion_ch;

    /* Update for UnitDelay: '<S25>/Unit Delay3' incorporates:
     *  Merge: '<S8>/Merge_3'
     */
    OBCR_ac_DW.UnitDelay3_DSTATE_h = OBCR_ac_B.Merge_3;

    /* Update for UnitDelay: '<S105>/Unit Delay' incorporates:
     *  Merge: '<S10>/Merge_1'
     */
    OBCR_ac_DW.UnitDelay_DSTATE_lx = OBCR_ac_B.Merge_1_p;

    /* Update for UnitDelay: '<S105>/Unit Delay1' incorporates:
     *  Merge: '<S10>/Merge_1'
     */
    OBCR_ac_DW.UnitDelay1_DSTATE_a = OBCR_ac_B.Merge_1_p;

    /* Update for UnitDelay: '<S105>/Unit Delay3' incorporates:
     *  Switch: '<S6>/Switch87'
     */
    OBCR_ac_DW.UnitDelay3_DSTATE_hp = VeOBCR_e_DschrgSysSts;

    /* Update for UnitDelay: '<S105>/Unit Delay2' incorporates:
     *  Constant: '<S128>/Calib'
     *  RelationalOperator: '<S105>/Comparison'
     */
    OBCR_ac_DW.UnitDelay2_DSTATE = (rtb_Multiplication1_l > KeOBCR_t_CAN_CUpTime);

    /* Update for UnitDelay: '<S24>/Unit Delay' incorporates:
     *  Logic: '<S24>/Logical3'
     */
    OBCR_ac_DW.UnitDelay_DSTATE_ci = ((OBCR_ac_B.VeOBCR_b_EnableCharge) &&
        (VeOBCR_b_battReady));

    /* End of Outputs for SubSystem: '<S1>/OBCC' */
#endif

#if Rte_SysCon_Variant_OBCR_2

    /* Outputs for Function Call SubSystem: '<S1>/OBCC_HEV' */
    /* Product: '<S605>/Product6' incorporates:
     *  Abs: '<S605>/Abs'
     *  Abs: '<S605>/Abs1'
     *  Lookup_n-D: '<S621>/Vector'
     *  Lookup_n-D: '<S622>/Vector'
     *  SignalConversion generated from: '<S1>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     *  SignalConversion generated from: '<S1>/VeBPCR_T_BatModTmp'
     */
    VeOBCR_k_TempSOCFactor_HEV = fabsf(look1_iflf_binlcapw
        (rtb_TmpSignalConversionAtVeBP_a, ((const float32 *)
        &(KxOBCR_k_MaxPower_SOC[0])), ((const float32 *)&(KtOBCR_k_MaxPower_SOC
        [0])), 5U)) * fabsf(look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeBP_e,
        ((const float32 *)&(KxOBCR_k_MaxPower_Temp[0])), ((const float32 *)
        &(KtOBCR_k_MaxPower_Temp[0])), 4U));

    /* MinMax: '<S605>/MinMax2' incorporates:
     *  Constant: '<S605>/Constant Value3'
     *  Constant: '<S605>/Constant Value5'
     *  Constant: '<S620>/Calib'
     *  MinMax: '<S605>/MinMax1'
     *  Product: '<S605>/Product5'
     *  Product: '<S605>/Product7'
     */
    rtb_TmpSignalConversionAtVeESMR = fminf(KeOBCR_P_NewHyst_MaxOut, (fmaxf(0.0F,
        rtb_TmpSignalConversionAtVeESMR) * 1000.0F) * VeOBCR_k_TempSOCFactor_HEV);

    /* Sum: '<S605>/Sum' incorporates:
     *  Constant: '<S605>/Constant Value2'
     *  Constant: '<S619>/Calib'
     *  Product: '<S605>/Product'
     *  Sum: '<S605>/Sum5'
     */
    VeOBCR_P_EstPwrBdgt_HEV = ((0.0F - KeOBCR_I_CurrOffset_EstPwrBdgt) *
        rtb_TmpSignalConversionAtVeBPCR) + rtb_TmpSignalConversionAtVeESMR;

    /* Switch: '<S605>/Switch1' incorporates:
     *  Constant: '<S618>/Constant'
     *  Constant: '<S623>/Constant Value'
     *  Constant: '<S623>/Constant Value1'
     *  Constant: '<S623>/Constant Value2'
     *  Constant: '<S623>/Constant Value3'
     *  Logic: '<S623>/AND'
     *  RelationalOperator: '<S605>/Comparison2'
     *  RelationalOperator: '<S623>/Greater Than or Equal '
     *  RelationalOperator: '<S623>/Greater Than or Equal 1'
     *  RelationalOperator: '<S623>/Not Equal'
     *  RelationalOperator: '<S623>/Not Equal1'
     *  Switch: '<S623>/Switch1'
     *  Switch: '<S623>/Switch2'
     *  Switch: '<S623>/Switch3'
     */
    if (CePMDR_e_PowerMode_Off == ((uint32)rtb_TmpSignalConversionAtVePMDR))
    {
        /* Switch: '<S662>/Switch1' incorporates:
         *  Constant: '<S605>/Constant Value1'
         */
        rtb_TmpSignalConversionAtVeESMR = 0.0F;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S605>/Protected Division' */
        if ((rtb_TmpSignalConversionAtVeESMR != 0.0F) &&
                (rtb_TmpSignalConversionAtVeBPCR != 0.0F))
        {
            /* Switch: '<S662>/Switch1' incorporates:
             *  Product: '<S623>/Division'
             *  Switch: '<S623>/Switch1'
             */
            rtb_TmpSignalConversionAtVeESMR /= rtb_TmpSignalConversionAtVeBPCR;
        }
        else if (rtb_TmpSignalConversionAtVeESMR > 0.0F)
        {
            /* Switch: '<S623>/Switch2' incorporates:
             *  Constant: '<S623>/MAXFLOAT'
             *  Switch: '<S623>/Switch1'
             *  Switch: '<S662>/Switch1'
             */
            rtb_TmpSignalConversionAtVeESMR = 3.402823466E+38F;
        }
        else if (rtb_TmpSignalConversionAtVeESMR < 0.0F)
        {
            /* Switch: '<S623>/Switch3' incorporates:
             *  Constant: '<S623>/MINFLOAT'
             *  Switch: '<S623>/Switch1'
             *  Switch: '<S623>/Switch2'
             *  Switch: '<S662>/Switch1'
             */
            rtb_TmpSignalConversionAtVeESMR = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S662>/Switch1' incorporates:
             *  Constant: '<S623>/Constant Value4'
             *  Switch: '<S623>/Switch1'
             *  Switch: '<S623>/Switch2'
             *  Switch: '<S623>/Switch3'
             */
            rtb_TmpSignalConversionAtVeESMR = 0.0F;
        }

        /* End of Outputs for SubSystem: '<S605>/Protected Division' */
    }

    /* End of Switch: '<S605>/Switch1' */

    /* Switch: '<S624>/Switch1' incorporates:
     *  Constant: '<S627>/Calib'
     */
    if (KeOBCR_b_UseAccCurrent)
    {
        /* Switch: '<S647>/Switch1' */
        rtb_Product2 = VeOBCR_I_AccCurr;
    }
    else
    {
        /* Switch: '<S647>/Switch1' incorporates:
         *  Constant: '<S624>/Constant Value2'
         */
        rtb_Product2 = 0.0F;
    }

    /* End of Switch: '<S624>/Switch1' */

    /* Switch: '<S662>/Switch1' incorporates:
     *  Constant: '<S624>/Constant Value4'
     *  MinMax: '<S624>/MinMax1'
     *  Sum: '<S624>/Sum2'
     */
    rtb_TmpSignalConversionAtVeESMR -= rtb_Product2;
    rtb_TmpSignalConversionAtVeESMR = fmaxf(0.0F,
        rtb_TmpSignalConversionAtVeESMR);

    /* Rounding: '<S626>/Rounding1' incorporates:
     *  Abs: '<S626>/Abs'
     *  Lookup_n-D: '<S646>/Vector'
     *  SignalConversion generated from: '<S1>/VeBPCR_T_BatModTmp'
     */
    VeOBCR_k_ThermalTest1_HEV = ceilf(fabsf(look1_iflf_binlcapw
        (rtb_TmpSignalConversionAtVeBP_e, ((const float32 *)
        &(KxOBCR_k_ThermalProfile[0])), ((const float32 *)
        &(KtOBCR_k_ThermalProfile[0])), 5U)));

    /* Switch: '<S626>/Switch' incorporates:
     *  Logic: '<S626>/Logical12'
     *  Logic: '<S626>/Logical13'
     */
    if ((VeOBCR_b_HVBatPerWUThermal) && (!VeOBCR_b_THMR_RdyForShtDwn))
    {
        /* UnitDelay: '<S656>/Unit Delay' incorporates:
         *  Constant: '<S626>/Constant Value6'
         */
        rtb_Sum2_n1 = 1.0F;
    }
    else
    {
        /* UnitDelay: '<S656>/Unit Delay' */
        rtb_Sum2_n1 = VeOBCR_k_ThermalTest1_HEV;
    }

    /* End of Switch: '<S626>/Switch' */

    /* Switch: '<S647>/Switch1' incorporates:
     *  Sum: '<S624>/Sum3'
     */
    rtb_Product2 = 0.0F - rtb_Product2;

    /* MinMax: '<S624>/MinMax' incorporates:
     *  Constant: '<S624>/Constant Value1'
     */
    VeOBCR_I_ThermalTestB_HEV = fmaxf(0.0F, rtb_Product2);

    /* Product: '<S626>/Product2' incorporates:
     *  Constant: '<S626>/Constant Value'
     *  Product: '<S626>/Product1'
     *  Product: '<S626>/Product3'
     *  Sum: '<S626>/Sum1'
     *  Sum: '<S626>/Sum4'
     */
    VeOBCR_P_ThermalTest2_HEV = (((1.0F - rtb_Sum2_n1) *
        VeOBCR_I_ThermalTestB_HEV) + (rtb_TmpSignalConversionAtVeESMR *
        rtb_Sum2_n1)) * rtb_TmpSignalConversionAtVeBPCR;

    /* Outputs for Atomic SubSystem: '<S626>/GradientLimiter2' */
    /* UnitDelay: '<S656>/Unit Delay' incorporates:
     *  UnitDelay: '<S643>/Unit Delay'
     */
    rtb_Sum2_n1 = OBCR_ac_DW.UnitDelay_DSTATE_h;

    /* Sum: '<S643>/Sum2' */
    rtb_Product2 = VeOBCR_P_ThermalTest2_HEV - rtb_Sum2_n1;

    /* Outputs for Atomic SubSystem: '<S643>/Limiter' */
    /* Switch: '<S647>/Switch1' incorporates:
     *  Constant: '<S645>/Calib'
     *  RelationalOperator: '<S647>/Relational Operator'
     */
    if (KeOBCR_P_AvalPwrForThmrPos < rtb_Product2)
    {
        /* Switch: '<S647>/Switch1' */
        rtb_Product2 = KeOBCR_P_AvalPwrForThmrPos;
    }

    /* End of Switch: '<S647>/Switch1' */

    /* Switch: '<S647>/Switch' incorporates:
     *  Constant: '<S644>/Calib'
     *  RelationalOperator: '<S647>/Relational Operator1'
     */
    if (rtb_Product2 <= KeOBCR_P_AvalPwrForThmrNeg)
    {
        rtb_Product2 = KeOBCR_P_AvalPwrForThmrNeg;
    }

    /* End of Switch: '<S647>/Switch' */
    /* End of Outputs for SubSystem: '<S643>/Limiter' */

    /* Sum: '<S643>/Sum3' */
    VeOBCR_P_ThermalTest4_HEV = rtb_Product2 + rtb_Sum2_n1;

    /* Update for UnitDelay: '<S643>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_h = VeOBCR_P_ThermalTest4_HEV;

    /* End of Outputs for SubSystem: '<S626>/GradientLimiter2' */

    /* Sum: '<S625>/Sum9' incorporates:
     *  Constant: '<S634>/Calib'
     */
    rtb_Sum2_n1 = VeOBCR_P_ThermalTest4_HEV - KeOBCR_P_Thermal_Offset;

    /* Outputs for Atomic SubSystem: '<S625>/EdgeRising' */
    /* Update for UnitDelay: '<S629>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_kw = false;

    /* End of Outputs for SubSystem: '<S625>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S625>/Cond_Chrg_Cycling' */
    /* Switch: '<S638>/Switch1' incorporates:
     *  UnitDelay: '<S638>/Unit Delay1'
     */
    if (OBCR_ac_DW.UnitDelay1_DSTATE)
    {
        /* Switch: '<S638>/Switch1' incorporates:
         *  Constant: '<S639>/Calib'
         */
        rtb_Product2 = Rte_Prm_HeOBCR_t_dT_HeOBCR_t_dT();
    }
    else
    {
        /* Switch: '<S638>/Switch1' incorporates:
         *  Constant: '<S639>/Calib'
         *  Sum: '<S638>/Subtraction'
         *  UnitDelay: '<S638>/Unit Delay'
         */
        rtb_Product2 = ((float32)Rte_Prm_HeOBCR_t_dT_HeOBCR_t_dT()) +
            OBCR_ac_DW.UnitDelay_DSTATE_c;
    }

    /* End of Switch: '<S638>/Switch1' */

    /* RelationalOperator: '<S638>/Comparison6' incorporates:
     *  Constant: '<S641>/Calib'
     *  Lookup_n-D: '<S642>/Vector'
     *  Product: '<S638>/Product'
     *  SignalConversion generated from: '<S1>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     *  SignalConversion generated from: '<S1>/VeBPCR_T_BatModTmp'
     */
    VeOBCR_b_PwrBudgetPWMTest2_HEV = (rtb_Product2 <=
        (KeOBCR_t_CondChrgCycTmPeriod * look2_iflf_binlcapw
         (rtb_TmpSignalConversionAtVeBP_a, rtb_TmpSignalConversionAtVeBP_e, ((
        const float32 *)&(KxOBCR_r_ThermCondDutyCycle[0])), ((const float32 *)
        &(KyOBCR_r_ThermCondDutyCycle[0])), ((const float32 *)
        &(KtOBCR_r_ThermCondDutyCycle[0])), OBCR_ac_ConstP.pooled12, 7U)));

    /* Switch: '<S628>/Switch' */
    if (VeOBCR_b_PwrBudgetPWMTest2_HEV)
    {
        /* Switch: '<S628>/Switch' incorporates:
         *  Constant: '<S640>/Calib'
         *  Sum: '<S628>/Sum'
         */
        VeOBCR_b_PwrBudgetPWMTest3_HEV = rtb_Sum2_n1 + KeOBCR_P_AddnPwrtoBdgt;
    }
    else
    {
        /* Switch: '<S628>/Switch' incorporates:
         *  Constant: '<S628>/Constant Value2'
         */
        VeOBCR_b_PwrBudgetPWMTest3_HEV = 0.0F;
    }

    /* End of Switch: '<S628>/Switch' */

    /* Update for UnitDelay: '<S638>/Unit Delay1' incorporates:
     *  Constant: '<S639>/Calib'
     *  Constant: '<S641>/Calib'
     *  RelationalOperator: '<S638>/Comparison5'
     *  Sum: '<S638>/Sum1'
     */
    OBCR_ac_DW.UnitDelay1_DSTATE = (rtb_Product2 >=
        (KeOBCR_t_CondChrgCycTmPeriod - ((float32)
        Rte_Prm_HeOBCR_t_dT_HeOBCR_t_dT())));

    /* Update for UnitDelay: '<S638>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_c = rtb_Product2;

    /* End of Outputs for SubSystem: '<S625>/Cond_Chrg_Cycling' */

    /* Switch: '<S631>/Switch1' */
    VeOBCR_P_PwrBudgetPWMTest4_HEV = rtb_Sum2_n1;

    /* Logic: '<S616>/Logical' */
    VeOBCR_b_Thermal_A1_HEV = false;

    /* Product: '<S624>/Product5' */
    rtb_TmpSignalConversionAtVeBPCR *= rtb_TmpSignalConversionAtVeESMR;

    /* Logic: '<S616>/Logical5' incorporates:
     *  Constant: '<S648>/Constant'
     *  Constant: '<S649>/Constant'
     *  Constant: '<S650>/Constant'
     *  Constant: '<S651>/Constant'
     *  Logic: '<S616>/Logical3'
     *  RelationalOperator: '<S616>/Comparison1'
     *  RelationalOperator: '<S616>/Comparison2'
     *  RelationalOperator: '<S616>/Comparison4'
     *  RelationalOperator: '<S616>/Comparison7'
     */
    VeOBCR_b_Thermal_A2_HEV = ((((((uint32)rtb_TmpSignalConversionAtVePMDR) ==
        CePMDR_e_PowerMode_Off) || (((uint32)rtb_TmpSignalConversionAtVePMDR) ==
        CePMDR_e_PowerMode_Acc)) || (((uint32)rtb_TmpSignalConversionAtVePMDR) ==
        CePMDR_e_PowerMode_Run)) || (((uint32)rtb_TmpSignalConversionAtVePMDR) ==
        CePMDR_e_PowerMode_Crank));

    /* Switch: '<S606>/Switch1' incorporates:
     *  Switch: '<S606>/Switch2'
     */
    if (VeOBCR_b_Thermal_A1_HEV)
    {
        /* Switch: '<S606>/Switch1' */
        VeOBCR_P_ThermalTest5_HEV = VeOBCR_P_PwrBudgetPWMTest4_HEV;
    }
    else if (VeOBCR_b_Thermal_A2_HEV)
    {
        /* Switch: '<S606>/Switch2' incorporates:
         *  Switch: '<S606>/Switch1'
         */
        VeOBCR_P_ThermalTest5_HEV = rtb_TmpSignalConversionAtVeBPCR;
    }
    else
    {
        /* Switch: '<S606>/Switch1' incorporates:
         *  Switch: '<S606>/Switch2'
         */
        VeOBCR_P_ThermalTest5_HEV = VeOBCR_P_PwrBudgetPWMTest4_HEV;
    }

    /* End of Switch: '<S606>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S616>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S654>/EdgeRising' */
    /* UnitDelay: '<S655>/Unit Delay' */
    rtb_UnitDelay_mg = OBCR_ac_DW.UnitDelay_DSTATE_h1p;

    /* Update for UnitDelay: '<S655>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_h1p = VeOBCR_b_PropSysActv;

    /* Switch: '<S654>/Switch1' incorporates:
     *  Constant: '<S653>/Calib'
     *  Constant: '<S654>/Constant Value'
     *  Logic: '<S654>/OR'
     *  Logic: '<S654>/OR1'
     *  Logic: '<S655>/AND'
     *  Logic: '<S655>/OR1'
     *  MinMax: '<S654>/Minimum'
     *  Sum: '<S654>/Summation'
     *  UnitDelay: '<S654>/Unit Delay'
     */
    if ((!VeOBCR_b_PropSysActv) || ((VeOBCR_b_PropSysActv) && (!rtb_UnitDelay_mg)))
    {
        /* Switch: '<S654>/Switch1' incorporates:
         *  Constant: '<S654>/Constant Value1'
         */
        rtb_Switch1_jd = 0U;
    }
    else if (KeOBCR_Cnt_PwrBdgt_Dbnc_PSA < ((uint16)(((uint32)
                OBCR_ac_DW.UnitDelay_DSTATE_a4) + 1U)))
    {
        /* MinMax: '<S654>/Minimum' incorporates:
         *  Constant: '<S653>/Calib'
         *  Switch: '<S654>/Switch1'
         */
        rtb_Switch1_jd = KeOBCR_Cnt_PwrBdgt_Dbnc_PSA;
    }
    else
    {
        /* Switch: '<S654>/Switch1' incorporates:
         *  Constant: '<S654>/Constant Value'
         *  MinMax: '<S654>/Minimum'
         *  Sum: '<S654>/Summation'
         *  UnitDelay: '<S654>/Unit Delay'
         */
        rtb_Switch1_jd = (uint16)(((uint32)OBCR_ac_DW.UnitDelay_DSTATE_a4) + 1U);
    }

    /* End of Switch: '<S654>/Switch1' */
    /* End of Outputs for SubSystem: '<S654>/EdgeRising' */

    /* Logic: '<S654>/AND' incorporates:
     *  Constant: '<S653>/Calib'
     *  RelationalOperator: '<S654>/Greater  Than'
     */
    rtb_TmpSignalConversionAtVeHPMR = ((VeOBCR_b_PropSysActv) && (rtb_Switch1_jd
        >= KeOBCR_Cnt_PwrBdgt_Dbnc_PSA));

    /* Update for UnitDelay: '<S654>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE_a4 = rtb_Switch1_jd;

    /* End of Outputs for SubSystem: '<S616>/Turn On Delay Sample' */

    /* Chart: '<S617>/Stateflow Chart' incorporates:
     *  Constant: '<S617>/Constant Value3'
     *  MinMax: '<S617>/MinMax'
     */
    OBCR_ac_StateflowChart(fmaxf(0.0F, VeOBCR_P_ThermalTest5_HEV),
                           &OBCR_ac_B.sf_StateflowChart_j,
                           &OBCR_ac_DW.sf_StateflowChart_j);

    /* Outputs for Atomic SubSystem: '<S617>/GradientLimiter' */
    /* UnitDelay: '<S656>/Unit Delay' */
    rtb_Sum2_n1 = OBCR_ac_DW.UnitDelay_DSTATE;

    /* Sum: '<S656>/Sum2' incorporates:
     *  Constant: '<S617>/Constant Value1'
     *  Constant: '<S657>/Calib'
     *  MinMax: '<S617>/MinMax1'
     *  MinMax: '<S617>/MinMax2'
     */
    rtb_TmpSignalConversionAtVeBP_e = fminf(KeOBCR_P_NewHyst_MaxOut, fmaxf
        (OBCR_ac_B.sf_StateflowChart_j.P_out, 0.0F)) - rtb_Sum2_n1;

    /* Outputs for Atomic SubSystem: '<S656>/Limiter' */
    /* Switch: '<S662>/Switch1' incorporates:
     *  Constant: '<S659>/Calib'
     *  RelationalOperator: '<S662>/Relational Operator'
     */
    if (KeOBCR_P_Thermal_Hys_LU < rtb_TmpSignalConversionAtVeBP_e)
    {
        /* Switch: '<S662>/Switch1' */
        rtb_TmpSignalConversionAtVeESMR = KeOBCR_P_Thermal_Hys_LU;
    }
    else
    {
        /* Switch: '<S662>/Switch1' */
        rtb_TmpSignalConversionAtVeESMR = rtb_TmpSignalConversionAtVeBP_e;
    }

    /* End of Switch: '<S662>/Switch1' */

    /* Switch: '<S662>/Switch' incorporates:
     *  Constant: '<S658>/Calib'
     *  RelationalOperator: '<S662>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtVeESMR <= KeOBCR_P_Thermal_Hys_LD)
    {
        rtb_TmpSignalConversionAtVeESMR = KeOBCR_P_Thermal_Hys_LD;
    }

    /* End of Switch: '<S662>/Switch' */
    /* End of Outputs for SubSystem: '<S656>/Limiter' */

    /* Sum: '<S656>/Sum3' */
    VeOBCR_P_ThermHys_Out_HEV = rtb_TmpSignalConversionAtVeESMR + rtb_Sum2_n1;

    /* Update for UnitDelay: '<S656>/Unit Delay' */
    OBCR_ac_DW.UnitDelay_DSTATE = VeOBCR_P_ThermHys_Out_HEV;

    /* End of Outputs for SubSystem: '<S617>/GradientLimiter' */

    /* Switch: '<S607>/Switch1' incorporates:
     *  Constant: '<S611>/Calib'
     *  Constant: '<S612>/Calib'
     *  Constant: '<S613>/Calib'
     *  Logic: '<S5>/Logical'
     *  Logic: '<S5>/Logical1'
     *  Switch: '<S607>/Switch2'
     *  Switch: '<S607>/Switch3'
     *  Switch: '<S607>/Switch4'
     */
    if (KeOBCR_b_AvalPwrForThmrEnbl)
    {
        /* Switch: '<S607>/Switch1' incorporates:
         *  Constant: '<S608>/Calib'
         */
        OBCR_ac_B.Switch1 = KeOBCR_P_AvalPwrForThmrVal;
    }
    else if (rtb_TmpSignalConversionAtVeHPMR && (KeOBCR_b_isBEV))
    {
        /* Switch: '<S607>/Switch2' incorporates:
         *  Switch: '<S607>/Switch1'
         */
        OBCR_ac_B.Switch1 = rtb_TmpSignalConversionAtVeBPCR;
    }
    else if (rtb_TmpSignalConversionAtVeHPMR && (KeOBCR_b_UseECT_PwrBdgt))
    {
        /* Switch: '<S5>/Switch1' incorporates:
         *  Switch: '<S607>/Switch2'
         *  Switch: '<S607>/Switch3'
         */
        if (rtb_TmpSignalConversionAtVeEN_n)
        {
            /* Switch: '<S607>/Switch1' incorporates:
             *  Lookup_n-D: '<S614>/Vector'
             *  SignalConversion generated from: '<S1>/VeENGR_T_EngCoolantTemp'
             *  Switch: '<S5>/Switch1'
             *  Switch: '<S607>/Switch3'
             */
            OBCR_ac_B.Switch1 = look1_iflf_binlcapw
                (rtb_TmpSignalConversionAtVeENGR, ((const float32 *)
                  &(KxOBCR_P_ECT_PwrBdgt[0])), ((const float32 *)
                  &(KtOBCR_P_ECT_PwrBdgt[0])), 8U);
        }
        else
        {
            /* Switch: '<S607>/Switch1' incorporates:
             *  Constant: '<S609>/Calib'
             *  Switch: '<S5>/Switch1'
             *  Switch: '<S607>/Switch3'
             */
            OBCR_ac_B.Switch1 = KeOBCR_P_DfltEng_PwrBdgt;
        }

        /* End of Switch: '<S5>/Switch1' */
    }
    else if (rtb_TmpSignalConversionAtVeHPMR)
    {
        /* Switch: '<S607>/Switch4' incorporates:
         *  Constant: '<S610>/Calib'
         *  Switch: '<S607>/Switch1'
         *  Switch: '<S607>/Switch2'
         *  Switch: '<S607>/Switch3'
         */
        OBCR_ac_B.Switch1 = KeOBCR_P_EngCrank;
    }
    else
    {
        /* Switch: '<S607>/Switch1' incorporates:
         *  Switch: '<S607>/Switch2'
         *  Switch: '<S607>/Switch3'
         *  Switch: '<S607>/Switch4'
         */
        OBCR_ac_B.Switch1 = VeOBCR_P_ThermHys_Out_HEV;
    }

    /* End of Switch: '<S607>/Switch1' */
    /* End of Outputs for SubSystem: '<S1>/OBCC_HEV' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
#endif

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output_Proc'
     */
    /* SignalConversion generated from: '<S7>/VeOBCR_e_ChrgrTrsfMethodReq' incorporates:
     *  Constant: '<S756>/Constant'
     */
    OBCR_ac_B.VeOBCR_e_ChrgrTrsfMethodReq = OBCR_ac_ConstB.Constant_h;

    /* SignalConversion generated from: '<S7>/MaxAC_CurrAlwd' */
#if Rte_SysCon_Variant_OBCR_1

    /* Switch: '<S761>/Switch37' */
    rtb_Switch37 = OBCR_ac_B.Switch1_h;

#else

    /* Switch: '<S761>/Switch37' incorporates:
     *  SignalConversion generated from: '<S7>/MaxAC_CurrAlwd'
     */
    rtb_Switch37 = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S7>/MaxAC_CurrAlwd' */

    /* SignalConversion generated from: '<S1>/VeOBCR_I_MaxAllowableCrntAC' incorporates:
     *  Gain: '<S773>/Gain'
     *  Outport: '<Root>/VeOBCR_I_MaxAllowableCrntAC'
     */
    (void)Rte_Write_VeOBCR_I_MaxAllowableCrntAC_Value(rtb_Switch37);

    /* SignalConversion generated from: '<S7>/VeOBCR_U_MinAllowableBattVolt' incorporates:
     *  Constant: '<S760>/Calib'
     */
    OBCR_ac_B.VeOBCR_U_MinAllowableBattVolt = KeOBCR_U_MinAllowableBattVolt;

    /* SignalConversion generated from: '<S7>/VeOBCR_U_MaxAllowableBattVolt' incorporates:
     *  Constant: '<S759>/Calib'
     */
    OBCR_ac_B.VeOBCR_U_MaxAllowableBattVolt = KeOBCR_U_MaxAllowableBattVolt;

    /* SignalConversion generated from: '<S7>/VeOBCR_I_MaxAllowableCrntBatt' incorporates:
     *  Constant: '<S758>/Calib'
     */
    OBCR_ac_B.VeOBCR_I_MaxAllowableCrntBatt = KeOBCR_I_MaxAlwdBatCurr;

    /* SignalConversion generated from: '<S7>/ChargingSystemsSts' incorporates:
     *  SignalConversion generated from: '<S7>/EstTimeofChrg_Lv2'
     * */
#if Rte_SysCon_Variant_OBCR_1

    /* VariantMerge generated from: '<S7>/ChargingSystemsSts' incorporates:
     *  Merge: '<S10>/Merge_24'
     */
    rtb_VM_Conditional_Signal_Charg = OBCR_ac_B.Merge_24;

    /* Switch: '<S761>/Switch37' */
    rtb_Switch37 = OBCR_ac_B.Switch1_e;

#else

    /* VariantMerge generated from: '<S7>/ChargingSystemsSts' incorporates:
     *  SignalConversion generated from: '<S7>/ChargingSystemsSts'
     */
    rtb_VM_Conditional_Signal_Charg = CeOBCR_e_NotCharging;

    /* Switch: '<S761>/Switch37' incorporates:
     *  SignalConversion generated from: '<S7>/EstTimeofChrg_Lv2'
     */
    rtb_Switch37 = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S7>/ChargingSystemsSts' */

    /* SignalConversion generated from: '<S1>/VeOBCR_t_EstTimeofChrg_Lv2_Out' incorporates:
     *  Gain: '<S764>/Gain'
     *  Outport: '<Root>/VeOBCR_t_EstTimeofChrg_Lv2'
     */
    (void)Rte_Write_VeOBCR_t_EstTimeofChrg_Lv2_Value(rtb_Switch37);

    /* SignalConversion generated from: '<S7>/EstTimeofChrg_Lv1' */
#if Rte_SysCon_Variant_OBCR_1

    /* Switch: '<S761>/Switch37' */
    rtb_Switch37 = OBCR_ac_B.Switch;

#else

    /* Switch: '<S761>/Switch37' incorporates:
     *  SignalConversion generated from: '<S7>/EstTimeofChrg_Lv1'
     */
    rtb_Switch37 = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S7>/EstTimeofChrg_Lv1' */

    /* SignalConversion generated from: '<S1>/VeOBCR_t_EstTimeofChrg_Lv1_Out' incorporates:
     *  Gain: '<S765>/Gain'
     *  Outport: '<Root>/VeOBCR_t_EstTimeofChrg_Lv1'
     */
    (void)Rte_Write_VeOBCR_t_EstTimeofChrg_Lv1_Value(rtb_Switch37);

    /* SignalConversion generated from: '<S7>/OBCR_RdyForShtDwn' */
#if Rte_SysCon_Variant_OBCR_1

    /* VariantMerge generated from: '<S7>/ProxPlugDtctd' */
    rtb_VM_Conditional_Signal_ProxP = OBCR_ac_B.Gain_jv;

#else

    /* VariantMerge generated from: '<S7>/ProxPlugDtctd' incorporates:
     *  SignalConversion generated from: '<S7>/OBCR_RdyForShtDwn'
     */
    rtb_VM_Conditional_Signal_ProxP = false;

#endif

    /* End of SignalConversion generated from: '<S7>/OBCR_RdyForShtDwn' */

    /* SignalConversion generated from: '<S1>/VeOBCR_b_RdyForShtDwn' incorporates:
     *  Gain: '<S766>/Gain'
     *  Outport: '<Root>/VeOBCR_b_RdyForShtDwn'
     */
    (void)Rte_Write_VeOBCR_b_RdyForShtDwn_Value(rtb_VM_Conditional_Signal_ProxP);

    /* SignalConversion generated from: '<S7>/VeOBCR_e_ChrgSysShtDwnFlt' incorporates:
     *  Constant: '<S757>/Constant'
     */
    OBCR_ac_B.VeOBCR_e_ChrgSysShtDwnFlt = OBCR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S7>/AvailPwrForThmr' */
#if !Rte_SysCon_Variant_OBCR_2 && Rte_SysCon_Variant_OBCR_1

    /* Switch: '<S761>/Switch37' */
    rtb_Switch37 = OBCR_ac_B.Switch1_m;

#elif !(!Rte_SysCon_Variant_OBCR_2) || !Rte_SysCon_Variant_OBCR_1

    /* Switch: '<S761>/Switch37' incorporates:
     *  SignalConversion generated from: '<S7>/AvailPwrForThmr'
     */
    rtb_Switch37 = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S7>/AvailPwrForThmr' */

    /* SignalConversion generated from: '<S7>/VariantSource1' */
#if Rte_SysCon_Variant_OBCR_2

    /* Switch: '<S761>/Switch37' */
    rtb_Switch37 = OBCR_ac_B.Switch1;

#endif

    /* End of SignalConversion generated from: '<S7>/VariantSource1' */

    /* SignalConversion generated from: '<S1>/VeOBCR_P_AvalPwrForThmr' incorporates:
     *  Gain: '<S767>/Gain'
     *  Outport: '<Root>/VeOBCR_P_AvalPwrForThmr'
     */
    (void)Rte_Write_VeOBCR_P_AvalPwrForThmr_Value(rtb_Switch37);

    /* SignalConversion generated from: '<S7>/BACR_TargetSOC' */
#if Rte_SysCon_Variant_OBCR_1

    /* Switch: '<S761>/Switch37' */
    rtb_Switch37 = OBCR_ac_B.Switch_k;

#else

    /* Switch: '<S761>/Switch37' incorporates:
     *  SignalConversion generated from: '<S7>/BACR_TargetSOC'
     */
    rtb_Switch37 = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S7>/BACR_TargetSOC' */

    /* SignalConversion generated from: '<S1>/VeOBCR_Pct_TargetSOC' incorporates:
     *  Gain: '<S768>/Gain'
     *  Outport: '<Root>/VeOBCR_Pct_TargetSOC'
     */
    (void)Rte_Write_VeOBCR_Pct_TargetSOC_Value(rtb_Switch37);

    /* SignalConversion generated from: '<S7>/EnableCANC' */
#if Rte_SysCon_Variant_OBCR_1

    /* VariantMerge generated from: '<S7>/ProxPlugDtctd' */
    rtb_VM_Conditional_Signal_ProxP = OBCR_ac_B.Logical4;

#else

    /* VariantMerge generated from: '<S7>/ProxPlugDtctd' incorporates:
     *  SignalConversion generated from: '<S7>/EnableCANC'
     */
    rtb_VM_Conditional_Signal_ProxP = false;

#endif

    /* End of SignalConversion generated from: '<S7>/EnableCANC' */

    /* SignalConversion generated from: '<S1>/VeOBCR_b_EnableCANC' incorporates:
     *  Gain: '<S813>/Gain'
     *  Outport: '<Root>/VeOBCR_b_EnableCANC'
     */
    (void)Rte_Write_VeOBCR_b_EnableCANC_Value(rtb_VM_Conditional_Signal_ProxP);

    /* SignalConversion generated from: '<S7>/SecureConnEst' */
#if Rte_SysCon_Variant_OBCR_1

    /* VariantMerge generated from: '<S7>/ProxPlugDtctd' */
    rtb_VM_Conditional_Signal_ProxP = OBCR_ac_B.VeOBCR_b_SecureConnEstI;

#else

    /* VariantMerge generated from: '<S7>/ProxPlugDtctd' incorporates:
     *  SignalConversion generated from: '<S7>/SecureConnEst'
     */
    rtb_VM_Conditional_Signal_ProxP = false;

#endif

    /* End of SignalConversion generated from: '<S7>/SecureConnEst' */

    /* SignalConversion generated from: '<S1>/VeOBCR_b_SecureConnEst' incorporates:
     *  Gain: '<S772>/Gain'
     *  Outport: '<Root>/VeOBCR_b_SecureConEst'
     */
    (void)Rte_Write_VeOBCR_b_SecureConEst_Value(rtb_VM_Conditional_Signal_ProxP);

    /* SignalConversion generated from: '<S7>/SmartEVSE' */
#if Rte_SysCon_Variant_OBCR_1

    /* VariantMerge generated from: '<S7>/ProxPlugDtctd' */
    rtb_VM_Conditional_Signal_ProxP = OBCR_ac_B.VeOBCR_b_SmartEVSE;

#else

    /* VariantMerge generated from: '<S7>/ProxPlugDtctd' incorporates:
     *  SignalConversion generated from: '<S7>/SmartEVSE'
     */
    rtb_VM_Conditional_Signal_ProxP = false;

#endif

    /* End of SignalConversion generated from: '<S7>/SmartEVSE' */

    /* SignalConversion generated from: '<S1>/VeOBCR_b_SmartEvse_Dtctd' incorporates:
     *  Gain: '<S762>/Gain'
     *  Outport: '<Root>/VeOBCR_b_SmartEvse_Dtctd'
     */
    (void)Rte_Write_VeOBCR_b_SmartEvse_Dtctd_Value
        (rtb_VM_Conditional_Signal_ProxP);

    /* SignalConversion generated from: '<S7>/ValidPluginDetected' */
#if Rte_SysCon_Variant_OBCR_1

    /* VariantMerge generated from: '<S7>/ProxPlugDtctd' */
    rtb_VM_Conditional_Signal_ProxP = OBCR_ac_B.Merge_2_l;

#else

    /* VariantMerge generated from: '<S7>/ProxPlugDtctd' incorporates:
     *  SignalConversion generated from: '<S7>/ValidPluginDetected'
     */
    rtb_VM_Conditional_Signal_ProxP = false;

#endif

    /* End of SignalConversion generated from: '<S7>/ValidPluginDetected' */

    /* SignalConversion generated from: '<S1>/VeOBCR_b_ValidPluginDetected' incorporates:
     *  Gain: '<S805>/Gain'
     *  Outport: '<Root>/VeOBCR_b_ValidPluginDetected'
     */
    (void)Rte_Write_VeOBCR_b_ValidPluginDetected_Value
        (rtb_VM_Conditional_Signal_ProxP);

    /* SignalConversion generated from: '<S7>/ChargeType' incorporates:
     *  SignalConversion generated from: '<S7>/ChargingLevel'
     */
#if Rte_SysCon_Variant_OBCR_1

    /* VariantMerge generated from: '<S7>/ChargeType' incorporates:
     *  Switch: '<S35>/Switch1'
     */
    rtb_VeOBCR_e_ChargeType_Test = OBCR_ac_B.Switch1_a;

    /* VariantMerge generated from: '<S7>/ChargingLevel' incorporates:
     *  Merge: '<S10>/Merge_1'
     */
    rtb_VM_Conditional_Signal_Cha_p = OBCR_ac_B.Merge_1_p;

#else

    /* VariantMerge generated from: '<S7>/ChargeType' incorporates:
     *  SignalConversion generated from: '<S7>/ChargeType'
     */
    rtb_VeOBCR_e_ChargeType_Test = CeOBCR_e_AC;

#endif

    /* End of SignalConversion generated from: '<S7>/ChargeType' */

    /* SignalConversion generated from: '<S7>/OBCM_ChrgEnblRq' incorporates:
     *  SignalConversion generated from: '<S7>/ChargingLevel'
     */
#if Rte_SysCon_Variant_OBCR_1

    /* VariantMerge generated from: '<S7>/ProxPlugDtctd' */
    rtb_VM_Conditional_Signal_ProxP = OBCR_ac_B.Gain_k1;

#else

    /* VariantMerge generated from: '<S7>/ChargingLevel' incorporates:
     *  SignalConversion generated from: '<S7>/ChargingLevel'
     */
    rtb_VM_Conditional_Signal_Cha_p = CeOBCR_e_ChargingLvlDefault;

    /* VariantMerge generated from: '<S7>/ProxPlugDtctd' incorporates:
     *  SignalConversion generated from: '<S7>/OBCM_ChrgEnblRq'
     */
    rtb_VM_Conditional_Signal_ProxP = false;

#endif

    /* End of SignalConversion generated from: '<S7>/OBCM_ChrgEnblRq' */

    /* Switch: '<S761>/Switch5' incorporates:
     *  Constant: '<S858>/Calib'
     */
    if (KeOBCR_b_OBCM_EnblChrgOvrd)
    {
        /* SignalConversion generated from: '<S1>/VeOBCR_b_EnblChrg' incorporates:
         *  Constant: '<S859>/Calib'
         *  Outport: '<Root>/VeOBCR_b_EnblChrg'
         */
        (void)Rte_Write_VeOBCR_b_EnblChrg_Value(KeOBCR_b_OBCM_EnblChrgOvrdValue);
    }
    else
    {
        /* SignalConversion generated from: '<S1>/VeOBCR_b_EnblChrg' incorporates:
         *  Outport: '<Root>/VeOBCR_b_EnblChrg'
         */
        (void)Rte_Write_VeOBCR_b_EnblChrg_Value(rtb_VM_Conditional_Signal_ProxP);
    }

    /* End of Switch: '<S761>/Switch5' */

    /* SignalConversion generated from: '<S7>/ChrgPort_BCM_Cmd' */
#if Rte_SysCon_Variant_OBCR_1

    /* VariantMerge generated from: '<S7>/ProxPlugDtctd' */
    rtb_VM_Conditional_Signal_ProxP = OBCR_ac_B.ChrgPort_BCM_Cmd_In;

#else

    /* VariantMerge generated from: '<S7>/ProxPlugDtctd' incorporates:
     *  SignalConversion generated from: '<S7>/ChrgPort_BCM_Cmd'
     */
    rtb_VM_Conditional_Signal_ProxP = false;

#endif

    /* End of SignalConversion generated from: '<S7>/ChrgPort_BCM_Cmd' */

    /* Switch: '<S761>/Switch9' incorporates:
     *  Constant: '<S848>/Calib'
     */
    if (KeOBCR_b_ChrgPort_BCM_Ovrd)
    {
        /* SignalConversion generated from: '<S1>/VeOBCR_b_ChrgPort_BCM_Cmd' incorporates:
         *  Constant: '<S849>/Calib'
         *  Outport: '<Root>/VeOBCR_b_ChrgPort_BCM_Cmd'
         */
        (void)Rte_Write_VeOBCR_b_ChrgPort_BCM_Cmd_Value
            (KeOBCR_b_ChrgPort_BCM_Val);
    }
    else
    {
        /* SignalConversion generated from: '<S1>/VeOBCR_b_ChrgPort_BCM_Cmd' incorporates:
         *  Outport: '<Root>/VeOBCR_b_ChrgPort_BCM_Cmd'
         */
        (void)Rte_Write_VeOBCR_b_ChrgPort_BCM_Cmd_Value
            (rtb_VM_Conditional_Signal_ProxP);
    }

    /* End of Switch: '<S761>/Switch9' */

    /* SignalConversion generated from: '<S7>/OBCM_MdRq' incorporates:
     *  SignalConversion generated from: '<S7>/PluggedIn'
     * */
#if Rte_SysCon_Variant_OBCR_1

    /* VariantMerge generated from: '<S7>/OBCM_MdRq' incorporates:
     *  DataTypeConversion: '<S13>/DataTypeConversion'
     */
    rtb_VM_Conditional_Signal_OBCM_ = OBCR_ac_B.DataTypeConversion_ko;

    /* VariantMerge generated from: '<S7>/ProxPlugDtctd' */
    rtb_VM_Conditional_Signal_ProxP = OBCR_ac_B.Logical13;

#else

    /* VariantMerge generated from: '<S7>/OBCM_MdRq' incorporates:
     *  SignalConversion generated from: '<S7>/OBCM_MdRq'
     */
    rtb_VM_Conditional_Signal_OBCM_ = CeOBCR_e_Idle_OBCMdRq;

    /* VariantMerge generated from: '<S7>/ProxPlugDtctd' incorporates:
     *  SignalConversion generated from: '<S7>/PluggedIn'
     */
    rtb_VM_Conditional_Signal_ProxP = false;

#endif

    /* End of SignalConversion generated from: '<S7>/OBCM_MdRq' */

    /* SignalConversion generated from: '<S1>/VeOBCR_b_PluggedIn' incorporates:
     *  Gain: '<S777>/Gain'
     *  Outport: '<Root>/VeOBCR_b_PluggedIn'
     */
    (void)Rte_Write_VeOBCR_b_PluggedIn_Value(rtb_VM_Conditional_Signal_ProxP);

    /* Switch: '<S761>/Switch' incorporates:
     *  Constant: '<S845>/Constant'
     *  Constant: '<S852>/Calib'
     *  DataTypeConversion: '<S750>/DataTypeConversion'
     *  Gain: '<S777>/Gain'
     *  Inport: '<Root>/VeVDVR_e_DschrgOBCMdRq'
     *  Inport: '<Root>/VeVTLR_b_OnboardPP1_Dtctd'
     *  Inport: '<Root>/VeVTLR_e_DschrgOBCMdRq_Onboard'
     *  RelationalOperator: '<S761>/Relational Operator'
     *  Switch: '<S761>/Switch31'
     *  Switch: '<S761>/Switch33'
     *  VariantMerge generated from: '<S7>/ChargeType'
     */
    if (KeOBCR_b_ChrgrModeReq)
    {
        /* SignalConversion generated from: '<S1>/VeOBCR_e_ChrgrModeReq' incorporates:
         *  Constant: '<S864>/Calib'
         *  Outport: '<Root>/VeOBCR_e_ChrgrModeReq'
         *  Switch: '<S761>/Switch'
         */
        (void)Rte_Write_VeOBCR_e_ChrgrModeReq_Value(KeOBCR_e_ChrgrModeReq);
    }
    else
    {
        if (((uint32)rtb_VeOBCR_e_ChargeType_Test) == CeOBCR_e_Discharge)
        {
            (void)Rte_Read_VeVDVR_e_DschrgOBCMdRq_Value(&tmpRead_j);

            /* Switch: '<S761>/Switch32' incorporates:
             *  Constant: '<S862>/Calib'
             *  Inport: '<Root>/VeVDVR_e_DschrgOBCMdRq'
             *  Switch: '<S761>/Switch31'
             */
            if (KeOBCR_b_V2X_Selection)
            {
                /* Switch: '<S761>/Switch31' incorporates:
                 *  Inport: '<Root>/VeVDVR_e_DschrgOBCMdRq'
                 */
                rtb_VM_Conditional_Signal_OBCM_ = tmpRead_j;
            }
            else
            {
                /* Switch: '<S761>/Switch31' incorporates:
                 *  Switch: '<S6>/Switch56'
                 */
                rtb_VM_Conditional_Signal_OBCM_ = VeOBCR_e_DschrgOBCMdRq;
            }

            /* End of Switch: '<S761>/Switch32' */
        }
        else
        {
            if (!rtb_VM_Conditional_Signal_ProxP)
            {
                (void)Rte_Read_VeVTLR_e_DschrgOBCMdRq_Onboard_Value(&tmpRead_j);
                (void)Rte_Read_VeVTLR_b_OnboardPP1_Dtctd_Value
                    (&VeOBCR_b_CloseS2Cntctr);

                /* Switch: '<S761>/Switch34' incorporates:
                 *  Inport: '<Root>/VeVTLR_b_OnboardPP1_Dtctd'
                 *  Inport: '<Root>/VeVTLR_e_DschrgOBCMdRq_Onboard'
                 *  Switch: '<S761>/Switch31'
                 *  Switch: '<S761>/Switch33'
                 */
                if (VeOBCR_b_CloseS2Cntctr)
                {
                    /* Switch: '<S761>/Switch31' incorporates:
                     *  Inport: '<Root>/VeVTLR_e_DschrgOBCMdRq_Onboard'
                     *  Switch: '<S761>/Switch33'
                     */
                    rtb_VM_Conditional_Signal_OBCM_ = tmpRead_j;
                }
                else
                {
                    /* Switch: '<S761>/Switch31' incorporates:
                     *  Constant: '<S846>/Constant'
                     *  Switch: '<S761>/Switch33'
                     */
                    rtb_VM_Conditional_Signal_OBCM_ = CeOBCR_e_Idle_OBCMdRq;
                }

                /* End of Switch: '<S761>/Switch34' */
            }
        }

        /* SignalConversion generated from: '<S1>/VeOBCR_e_ChrgrModeReq' incorporates:
         *  Gain: '<S777>/Gain'
         *  Inport: '<Root>/VeVDVR_e_DschrgOBCMdRq'
         *  Inport: '<Root>/VeVTLR_b_OnboardPP1_Dtctd'
         *  Inport: '<Root>/VeVTLR_e_DschrgOBCMdRq_Onboard'
         *  Outport: '<Root>/VeOBCR_e_ChrgrModeReq'
         *  Switch: '<S761>/Switch'
         *  Switch: '<S761>/Switch31'
         *  Switch: '<S761>/Switch33'
         */
        (void)Rte_Write_VeOBCR_e_ChrgrModeReq_Value
            (rtb_VM_Conditional_Signal_OBCM_);
    }

    /* End of Switch: '<S761>/Switch' */

    /* SignalConversion generated from: '<S7>/S2_Cmd' */
#if Rte_SysCon_Variant_OBCR_1

    /* VariantMerge generated from: '<S7>/ProxPlugDtctd' */
    rtb_VM_Conditional_Signal_ProxP = OBCR_ac_B.Gain_ah;

#else

    /* VariantMerge generated from: '<S7>/ProxPlugDtctd' incorporates:
     *  SignalConversion generated from: '<S7>/S2_Cmd'
     */
    rtb_VM_Conditional_Signal_ProxP = false;

#endif

    /* End of SignalConversion generated from: '<S7>/S2_Cmd' */

    /* Switch: '<S761>/Switch13' incorporates:
     *  Constant: '<S853>/Calib'
     */
    if (KeOBCR_b_CloseS2Cntctr_Ovrd)
    {
        /* SignalConversion generated from: '<S1>/VeOBCR_b_CloseS2Cntctr' incorporates:
         *  Constant: '<S854>/Calib'
         *  Outport: '<Root>/VeOBCR_b_CloseS2Cntctr'
         */
        (void)Rte_Write_VeOBCR_b_CloseS2Cntctr_Value
            (KeOBCR_b_CloseS2Cntctr_OvrdVal);
    }
    else
    {
        /* SignalConversion generated from: '<S1>/VeOBCR_b_CloseS2Cntctr' incorporates:
         *  Outport: '<Root>/VeOBCR_b_CloseS2Cntctr'
         */
        (void)Rte_Write_VeOBCR_b_CloseS2Cntctr_Value
            (rtb_VM_Conditional_Signal_ProxP);
    }

    /* End of Switch: '<S761>/Switch13' */

    /* SignalConversion generated from: '<S7>/ChargingComplete' */
#if Rte_SysCon_Variant_OBCR_1

    /* VariantMerge generated from: '<S7>/ProxPlugDtctd' */
    rtb_VM_Conditional_Signal_ProxP = OBCR_ac_B.Gain_eg;

#else

    /* VariantMerge generated from: '<S7>/ProxPlugDtctd' incorporates:
     *  SignalConversion generated from: '<S7>/ChargingComplete'
     */
    rtb_VM_Conditional_Signal_ProxP = false;

#endif

    /* End of SignalConversion generated from: '<S7>/ChargingComplete' */

    /* Switch: '<S761>/Switch19' incorporates:
     *  Constant: '<S850>/Calib'
     */
    if (KeOBCR_b_ChrgngCmpltOvrd)
    {
        /* SignalConversion generated from: '<S1>/VeOBCR_b_ChargingComplete' incorporates:
         *  Constant: '<S851>/Calib'
         *  Outport: '<Root>/VeOBCR_b_ChargingComplete'
         */
        (void)Rte_Write_VeOBCR_b_ChargingComplete_Value
            (KeOBCR_b_ChrgngCmpltOvrdVal);
    }
    else
    {
        /* SignalConversion generated from: '<S1>/VeOBCR_b_ChargingComplete' incorporates:
         *  Outport: '<Root>/VeOBCR_b_ChargingComplete'
         */
        (void)Rte_Write_VeOBCR_b_ChargingComplete_Value
            (rtb_VM_Conditional_Signal_ProxP);
    }

    /* End of Switch: '<S761>/Switch19' */

    /* SignalConversion generated from: '<S7>/VeOBCR_t_EstTimeDCFastChrg_100in' */
#if Rte_SysCon_Variant_OBCR_1

    /* Switch: '<S761>/Switch37' */
    rtb_Switch37 = OBCR_ac_B.Switch_p;

#else

    /* Switch: '<S761>/Switch37' incorporates:
     *  SignalConversion generated from: '<S7>/VeOBCR_t_EstTimeDCFastChrg_100in'
     */
    rtb_Switch37 = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S7>/VeOBCR_t_EstTimeDCFastChrg_100in' */

    /* Switch: '<S761>/Switch28' incorporates:
     *  Constant: '<S855>/Calib'
     */
    if (KeOBCR_b_DCEst100_Ovrd)
    {
        /* Switch: '<S761>/Switch28' incorporates:
         *  Constant: '<S867>/Calib'
         */
        rtb_Sum2_n1 = KeOBCR_t_DCEst100_Val;
    }
    else
    {
        /* Switch: '<S761>/Switch28' */
        rtb_Sum2_n1 = rtb_Switch37;
    }

    /* End of Switch: '<S761>/Switch28' */

    /* SignalConversion generated from: '<S7>/VeOBCR_t_EstTimeDCFastChrg_80in' */
#if Rte_SysCon_Variant_OBCR_1

    /* Switch: '<S761>/Switch37' */
    rtb_Switch37 = OBCR_ac_B.Switch_n;

#else

    /* Switch: '<S761>/Switch37' incorporates:
     *  SignalConversion generated from: '<S7>/VeOBCR_t_EstTimeDCFastChrg_80in'
     */
    rtb_Switch37 = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S7>/VeOBCR_t_EstTimeDCFastChrg_80in' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeCCCR_b_SOC_LvlSet_80' */
    (void)Rte_Read_VeCCCR_b_SOC_LvlSet_80_Value(&tmpRead_m);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/OBCR_FUNC_MedTED'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output_Proc'
     */
    /* Switch: '<S761>/Switch29' incorporates:
     *  Constant: '<S856>/Calib'
     */
    if (KeOBCR_b_DCEst80_Ovrd)
    {
        /* Switch: '<S761>/Switch29' incorporates:
         *  Constant: '<S868>/Calib'
         */
        rtb_Switch37 = KeOBCR_t_DCEst80_Val;
    }

    /* End of Switch: '<S761>/Switch29' */

    /* SignalConversion generated from: '<S7>/BattLvlSts' */
#if Rte_SysCon_Variant_OBCR_1

    /* VariantMerge generated from: '<S7>/ProxPlugDtctd' */
    rtb_VM_Conditional_Signal_ProxP = VeOBCR_b_RacePrepBattLvlSts_Test;

#else

    /* VariantMerge generated from: '<S7>/ProxPlugDtctd' incorporates:
     *  SignalConversion generated from: '<S7>/BattLvlSts'
     */
    rtb_VM_Conditional_Signal_ProxP = false;

#endif

    /* End of SignalConversion generated from: '<S7>/BattLvlSts' */

    /* Switch: '<S761>/Switch36' incorporates:
     *  Constant: '<S860>/Calib'
     */
    if (KeOBCR_b_RacePrepBattLvlStsOvrd)
    {
        /* SignalConversion generated from: '<S1>/VeOBCR_b_RacePrepBattLvlSts' incorporates:
         *  Constant: '<S861>/Calib'
         *  Outport: '<Root>/VeOBCR_b_RacePrepBattLvlSts'
         */
        (void)Rte_Write_VeOBCR_b_RacePrepBattLvlSts_Value
            (KeOBCR_b_RacePrepBattLvlStsOvrdVal);
    }
    else
    {
        /* SignalConversion generated from: '<S1>/VeOBCR_b_RacePrepBattLvlSts' incorporates:
         *  Outport: '<Root>/VeOBCR_b_RacePrepBattLvlSts'
         */
        (void)Rte_Write_VeOBCR_b_RacePrepBattLvlSts_Value
            (rtb_VM_Conditional_Signal_ProxP);
    }

    /* End of Switch: '<S761>/Switch36' */

    /* SignalConversion generated from: '<S7>/Est_PowerBudget' */
#if !Rte_SysCon_Variant_OBCR_2 && Rte_SysCon_Variant_OBCR_1

    /* VariantMerge generated from: '<S7>/ChrgCurrEstSOC' */
    rtb_VM_Conditional_Signal_ChrgC = VeOBCR_P_EstPwrBdgt;

#elif !(!Rte_SysCon_Variant_OBCR_2) || !Rte_SysCon_Variant_OBCR_1

    /* VariantMerge generated from: '<S7>/ChrgCurrEstSOC' incorporates:
     *  SignalConversion generated from: '<S7>/Est_PowerBudget'
     */
    rtb_VM_Conditional_Signal_ChrgC = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S7>/Est_PowerBudget' */

    /* SignalConversion generated from: '<S7>/VariantSource2' */
#if Rte_SysCon_Variant_OBCR_2

    /* VariantMerge generated from: '<S7>/ChrgCurrEstSOC' */
    rtb_VM_Conditional_Signal_ChrgC = VeOBCR_P_EstPwrBdgt_HEV;

#endif

    /* End of SignalConversion generated from: '<S7>/VariantSource2' */

    /* SignalConversion generated from: '<S1>/VeOBCR_P_Est_PowerBudget' incorporates:
     *  Gain: '<S776>/Gain'
     *  Outport: '<Root>/VeOBCR_P_Est_PowerBudget'
     */
    (void)Rte_Write_VeOBCR_P_Est_PowerBudget_Value
        (rtb_VM_Conditional_Signal_ChrgC);

    /* SignalConversion generated from: '<S7>/EVEnergyRequest' */
#if Rte_SysCon_Variant_OBCR_1

    /* VariantMerge generated from: '<S7>/ChrgCurrEstSOC' */
    rtb_VM_Conditional_Signal_ChrgC = OBCR_ac_B.VeOBCR_E_EVEnergyReq;

#else

    /* VariantMerge generated from: '<S7>/ChrgCurrEstSOC' incorporates:
     *  SignalConversion generated from: '<S7>/EVEnergyRequest'
     */
    rtb_VM_Conditional_Signal_ChrgC = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S7>/EVEnergyRequest' */

    /* SignalConversion generated from: '<S1>/VeOBCR_E_EVEnergyRequest' incorporates:
     *  Gain: '<S782>/Gain'
     *  Outport: '<Root>/VeOBCR_E_EVEnergyRequest'
     */
    (void)Rte_Write_VeOBCR_E_EVEnergyRequest_Value
        (rtb_VM_Conditional_Signal_ChrgC);

    /* SignalConversion generated from: '<S7>/ChrgSysStat' incorporates:
     *  SignalConversion generated from: '<S7>/ChrgCurrEstSOC'
     */
#if Rte_SysCon_Variant_OBCR_1

    /* VariantMerge generated from: '<S7>/ChrgSysStat' incorporates:
     *  DataTypeConversion: '<S12>/DataTypeConversion'
     */
    rtb_VM_Conditional_Signal_ChrgS = OBCR_ac_B.DataTypeConversion_ch;

    /* VariantMerge generated from: '<S7>/ChrgCurrEstSOC' */
    rtb_VM_Conditional_Signal_ChrgC = OBCR_ac_B.Switch2;

#else

    /* VariantMerge generated from: '<S7>/ChrgSysStat' incorporates:
     *  SignalConversion generated from: '<S7>/ChrgSysStat'
     */
    rtb_VM_Conditional_Signal_ChrgS = CeOBCR_e_PowerUp;

#endif

    /* End of SignalConversion generated from: '<S7>/ChrgSysStat' */

    /* SignalConversion generated from: '<S7>/EnablePowerTransfer' incorporates:
     *  SignalConversion generated from: '<S7>/ChrgCurrEstSOC'
     */
#if Rte_SysCon_Variant_OBCR_1

    /* VariantMerge generated from: '<S7>/ProxPlugDtctd' */
    rtb_VM_Conditional_Signal_ProxP = OBCR_ac_B.VeOBCR_b_EnableCharge;

#else

    /* VariantMerge generated from: '<S7>/ChrgCurrEstSOC' incorporates:
     *  SignalConversion generated from: '<S7>/ChrgCurrEstSOC'
     */
    rtb_VM_Conditional_Signal_ChrgC = 0.0F;

    /* VariantMerge generated from: '<S7>/ProxPlugDtctd' incorporates:
     *  SignalConversion generated from: '<S7>/EnablePowerTransfer'
     */
    rtb_VM_Conditional_Signal_ProxP = false;

#endif

    /* End of SignalConversion generated from: '<S7>/EnablePowerTransfer' */

    /* SignalConversion generated from: '<S1>/VeOBCR_b_EnablePowerTransfer' incorporates:
     *  Gain: '<S795>/Gain'
     *  Outport: '<Root>/VeOBCR_b_EnablePowerTransfer'
     */
    (void)Rte_Write_VeOBCR_b_EnablePowerTransfer_Value
        (rtb_VM_Conditional_Signal_ProxP);

    /* SignalConversion generated from: '<S7>/SecureConnV2L' */
#if Rte_SysCon_Variant_OBCR_1

    /* VariantMerge generated from: '<S7>/ProxPlugDtctd' */
    rtb_VM_Conditional_Signal_ProxP = OBCR_ac_B.Logical6;

#else

    /* VariantMerge generated from: '<S7>/ProxPlugDtctd' incorporates:
     *  SignalConversion generated from: '<S7>/SecureConnV2L'
     */
    rtb_VM_Conditional_Signal_ProxP = false;

#endif

    /* End of SignalConversion generated from: '<S7>/SecureConnV2L' */

    /* SignalConversion generated from: '<S1>/VeOBCR_b_SecureConnV2L' incorporates:
     *  Gain: '<S796>/Gain'
     *  Outport: '<Root>/VeOBCR_b_SecureConnV2L'
     */
    (void)Rte_Write_VeOBCR_b_SecureConnV2L_Value(rtb_VM_Conditional_Signal_ProxP);

    /* SignalConversion generated from: '<S7>/BPCM_Ready' */
#if Rte_SysCon_Variant_OBCR_1

    /* VariantMerge generated from: '<S7>/ProxPlugDtctd' */
    rtb_VM_Conditional_Signal_ProxP = VeOBCR_b_battReady;

#else

    /* VariantMerge generated from: '<S7>/ProxPlugDtctd' incorporates:
     *  SignalConversion generated from: '<S7>/BPCM_Ready'
     */
    rtb_VM_Conditional_Signal_ProxP = false;

#endif

    /* End of SignalConversion generated from: '<S7>/BPCM_Ready' */

    /* SignalConversion generated from: '<S1>/VeOBCR_b_BPCM_Rdy' incorporates:
     *  Gain: '<S797>/Gain'
     *  Outport: '<Root>/VeOBCR_b_BPCM_Rdy'
     */
    (void)Rte_Write_VeOBCR_b_BPCM_Rdy_Value(rtb_VM_Conditional_Signal_ProxP);

    /* SignalConversion generated from: '<S7>/PlugIn_Reason' */
#if Rte_SysCon_Variant_OBCR_1

    /* VariantMerge generated from: '<S7>/NCR' */
    rtb_VM_Conditional_Signal_NCR_4 = VeOBCR_e_PlugIn_Reason;

#else

    /* VariantMerge generated from: '<S7>/NCR' incorporates:
     *  SignalConversion generated from: '<S7>/PlugIn_Reason'
     */
    rtb_VM_Conditional_Signal_NCR_4 = 0;

#endif

    /* End of SignalConversion generated from: '<S7>/PlugIn_Reason' */

    /* SignalConversion generated from: '<S1>/VeOBCR_Cnt_PlugIn_Reason' incorporates:
     *  Gain: '<S832>/Gain'
     *  Outport: '<Root>/VeOBCR_Cnt_PlugIn_Reason'
     */
    (void)Rte_Write_VeOBCR_Cnt_PlugIn_Reason_Value
        (rtb_VM_Conditional_Signal_NCR_4);

    /* SignalConversion generated from: '<S7>/PlugIn_Vector' incorporates:
     *  SignalConversion generated from: '<S7>/Chrgr_LOC'
     * */
#if Rte_SysCon_Variant_OBCR_1

    /* VariantMerge generated from: '<S7>/PlugIn_Vector' */
    rtb_VM_Conditional_Signal_PlugI[0] = OBCR_ac_B.Switch1_e1;
    rtb_VM_Conditional_Signal_PlugI[1] = OBCR_ac_B.Switch2_f;
    rtb_VM_Conditional_Signal_PlugI[2] = OBCR_ac_B.Switch3;
    rtb_VM_Conditional_Signal_PlugI[3] = OBCR_ac_B.Switch5;
    rtb_VM_Conditional_Signal_PlugI[4] = OBCR_ac_B.Switch6;
    rtb_VM_Conditional_Signal_PlugI[5] = OBCR_ac_B.Switch4;
    rtb_VM_Conditional_Signal_PlugI[6] = OBCR_ac_B.Switch7;
    rtb_VM_Conditional_Signal_PlugI[7] = OBCR_ac_B.Switch16;
    rtb_VM_Conditional_Signal_PlugI[8] = OBCR_ac_B.Switch10;
    rtb_VM_Conditional_Signal_PlugI[9] = OBCR_ac_B.Switch9;
    rtb_VM_Conditional_Signal_PlugI[10] = OBCR_ac_B.Switch8;
    rtb_VM_Conditional_Signal_PlugI[11] = OBCR_ac_B.Switch12;
    rtb_VM_Conditional_Signal_PlugI[12] = OBCR_ac_B.Switch15;
    rtb_VM_Conditional_Signal_PlugI[13] = OBCR_ac_B.Switch13;
    rtb_VM_Conditional_Signal_PlugI[14] = OBCR_ac_B.Switch14;

    /* VariantMerge generated from: '<S7>/ProxPlugDtctd' */
    rtb_VM_Conditional_Signal_ProxP = OBCR_ac_B.Merge_4_m;

#else

    for (i = 0; i < 15; i++)
    {
        /* VariantMerge generated from: '<S7>/PlugIn_Vector' incorporates:
         *  SignalConversion generated from: '<S7>/PlugIn_Vector'
         */
        rtb_VM_Conditional_Signal_PlugI[i] = 0;
    }

    /* VariantMerge generated from: '<S7>/ProxPlugDtctd' incorporates:
     *  SignalConversion generated from: '<S7>/Chrgr_LOC'
     */
    rtb_VM_Conditional_Signal_ProxP = false;

#endif

    /* End of SignalConversion generated from: '<S7>/PlugIn_Vector' */

    /* SignalConversion generated from: '<S1>/VeOBCR_b_ChrgrLOC' incorporates:
     *  Gain: '<S835>/Gain'
     *  Outport: '<Root>/VeOBCR_b_ChrgrLOC'
     */
    (void)Rte_Write_VeOBCR_b_ChrgrLOC_Value(rtb_VM_Conditional_Signal_ProxP);

    /* SignalConversion generated from: '<S7>/PlugIn_Lock' */
#if Rte_SysCon_Variant_OBCR_1

    /* VariantMerge generated from: '<S7>/ProxPlugDtctd' */
    rtb_VM_Conditional_Signal_ProxP = OBCR_ac_B.Merge_5_a;

#else

    /* VariantMerge generated from: '<S7>/ProxPlugDtctd' incorporates:
     *  SignalConversion generated from: '<S7>/PlugIn_Lock'
     */
    rtb_VM_Conditional_Signal_ProxP = false;

#endif

    /* End of SignalConversion generated from: '<S7>/PlugIn_Lock' */

    /* SignalConversion generated from: '<S1>/VeOBCR_b_PlugInLock' incorporates:
     *  Gain: '<S836>/Gain'
     *  Outport: '<Root>/VeOBCR_b_PlugInLock'
     */
    (void)Rte_Write_VeOBCR_b_PlugInLock_Value(rtb_VM_Conditional_Signal_ProxP);

    /* SignalConversion generated from: '<S7>/NCR_Signals' incorporates:
     *  SignalConversion generated from: '<S7>/InitChecks_Reason'
     * */
#if Rte_SysCon_Variant_OBCR_1

    /* VariantMerge generated from: '<S7>/NCR_Signals' */
    rtb_VM_Conditional_Signal_NCR_S[0] = OBCR_ac_B.Logical17;
    rtb_VM_Conditional_Signal_NCR_S[1] = OBCR_ac_B.Logical14;
    rtb_VM_Conditional_Signal_NCR_S[2] = OBCR_ac_B.Logical16;
    rtb_VM_Conditional_Signal_NCR_S[3] = OBCR_ac_B.Logical15;
    rtb_VM_Conditional_Signal_NCR_S[4] = OBCR_ac_B.Logical11;
    rtb_VM_Conditional_Signal_NCR_S[5] = OBCR_ac_B.Logical13_c;
    rtb_VM_Conditional_Signal_NCR_S[6] = OBCR_ac_B.Logical12;
    rtb_VM_Conditional_Signal_NCR_S[7] = OBCR_ac_B.Logical10;
    rtb_VM_Conditional_Signal_NCR_S[8] = OBCR_ac_B.Logical9;
    rtb_VM_Conditional_Signal_NCR_S[9] = OBCR_ac_B.Logical8;
    rtb_VM_Conditional_Signal_NCR_S[10] = OBCR_ac_B.Logical5;
    rtb_VM_Conditional_Signal_NCR_S[11] = OBCR_ac_B.Logical7;
    rtb_VM_Conditional_Signal_NCR_S[12] = OBCR_ac_B.Logical6_e;
    rtb_VM_Conditional_Signal_NCR_S[13] = OBCR_ac_B.Logical22;
    rtb_VM_Conditional_Signal_NCR_S[14] = OBCR_ac_B.Logical24;

    /* VariantMerge generated from: '<S7>/NCR' */
    rtb_VM_Conditional_Signal_NCR_4 = VeOBCR_e_InitChecks_Reason;

#else

    for (i = 0; i < 15; i++)
    {
        /* VariantMerge generated from: '<S7>/NCR_Signals' incorporates:
         *  SignalConversion generated from: '<S7>/NCR_Signals'
         */
        rtb_VM_Conditional_Signal_NCR_S[i] = false;
    }

    /* VariantMerge generated from: '<S7>/NCR' incorporates:
     *  SignalConversion generated from: '<S7>/InitChecks_Reason'
     */
    rtb_VM_Conditional_Signal_NCR_4 = 0;

#endif

    /* End of SignalConversion generated from: '<S7>/NCR_Signals' */

    /* SignalConversion generated from: '<S1>/VeOBCR_Cnt_InitChecks_Reason' incorporates:
     *  Gain: '<S838>/Gain'
     *  Outport: '<Root>/VeOBCR_Cnt_InitChecks_Reason'
     */
    (void)Rte_Write_VeOBCR_Cnt_InitChecks_Reason_Value
        (rtb_VM_Conditional_Signal_NCR_4);

    /* SignalConversion generated from: '<S7>/EnableChargeDC' */
#if Rte_SysCon_Variant_OBCR_1

    /* VariantMerge generated from: '<S7>/ProxPlugDtctd' */
    rtb_VM_Conditional_Signal_ProxP = OBCR_ac_B.UnitDelay;

#else

    /* VariantMerge generated from: '<S7>/ProxPlugDtctd' incorporates:
     *  SignalConversion generated from: '<S7>/EnableChargeDC'
     */
    rtb_VM_Conditional_Signal_ProxP = false;

#endif

    /* End of SignalConversion generated from: '<S7>/EnableChargeDC' */

    /* SignalConversion generated from: '<S1>/VeOBCR_b_EnableChargeDC' incorporates:
     *  Gain: '<S839>/Gain'
     *  Outport: '<Root>/VeOBCR_b_EnableChargeDC'
     */
    (void)Rte_Write_VeOBCR_b_EnableChargeDC_Value
        (rtb_VM_Conditional_Signal_ProxP);
    for (i = 0; i < 7; i++)
    {
        /* SignalConversion generated from: '<S7>/InitChecks_Vector' */
#if Rte_SysCon_Variant_OBCR_1

        /* VariantMerge generated from: '<S7>/InitChecks_Vector' */
        rtb_VM_Conditional_Signal_InitC[i] = OBCR_ac_B.SignalConversion[i];

#else

        /* VariantMerge generated from: '<S7>/InitChecks_Vector' incorporates:
         *  SignalConversion generated from: '<S7>/InitChecks_Vector'
         */
        rtb_VM_Conditional_Signal_InitC[i] = 0;

#endif

        /* End of SignalConversion generated from: '<S7>/InitChecks_Vector' */
    }

    /* SignalConversion generated from: '<S7>/NCR' incorporates:
     *  SignalConversion generated from: '<S7>/EnableDCGBT'
     * */
#if Rte_SysCon_Variant_OBCR_1

    /* VariantMerge generated from: '<S7>/NCR' */
    rtb_VM_Conditional_Signal_NCR_4 = OBCR_ac_B.Gain_e3;

    /* VariantMerge generated from: '<S7>/ProxPlugDtctd' */
    rtb_VM_Conditional_Signal_ProxP = OBCR_ac_B.Logical1_b;

#else

    /* VariantMerge generated from: '<S7>/NCR' incorporates:
     *  SignalConversion generated from: '<S7>/NCR'
     */
    rtb_VM_Conditional_Signal_NCR_4 = 0;

    /* VariantMerge generated from: '<S7>/ProxPlugDtctd' incorporates:
     *  SignalConversion generated from: '<S7>/EnableDCGBT'
     */
    rtb_VM_Conditional_Signal_ProxP = false;

#endif

    /* End of SignalConversion generated from: '<S7>/NCR' */

    /* SignalConversion generated from: '<S1>/VeOBCR_b_EnblDC_GBT' incorporates:
     *  Gain: '<S842>/Gain'
     *  Outport: '<Root>/VeOBCR_b_EnblDC_GBT'
     */
    (void)Rte_Write_VeOBCR_b_EnblDC_GBT_Value(rtb_VM_Conditional_Signal_ProxP);

    /* SignalConversion generated from: '<S7>/ProxPlugDtctd' */
#if Rte_SysCon_Variant_OBCR_1

    /* VariantMerge generated from: '<S7>/ProxPlugDtctd' */
    rtb_VM_Conditional_Signal_ProxP = OBCR_ac_B.AND_i;

#else

    /* VariantMerge generated from: '<S7>/ProxPlugDtctd' incorporates:
     *  SignalConversion generated from: '<S7>/ProxPlugDtctd'
     */
    rtb_VM_Conditional_Signal_ProxP = false;

#endif

    /* End of SignalConversion generated from: '<S7>/ProxPlugDtctd' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeDCCR_k_MaxEntriesSASScheduleTuple' */
    (void)Rte_Read_VeDCCR_k_MaxEntriesSASScheduleTuple_Value(&tmpRead_2m);

    /* Inport: '<Root>/VeDCCR_e_Protocol_Priority3' */
    (void)Rte_Read_VeDCCR_e_Protocol_Priority3_Value(&tmpRead_2l);

    /* Inport: '<Root>/VeDCCR_e_Protocol_Priority2' */
    (void)Rte_Read_VeDCCR_e_Protocol_Priority2_Value(&tmpRead_2k);

    /* Inport: '<Root>/VeDCCR_e_Protocol_Priority1' */
    (void)Rte_Read_VeDCCR_e_Protocol_Priority1_Value(&tmpRead_2j);

    /* Inport: '<Root>/VeDCCR_b_PnCRetryFail' */
    (void)Rte_Read_VeDCCR_b_PnCRetryFail_Value(&tmpRead_2i);

    /* Inport: '<Root>/VeDCCR_b_PnCFailure' */
    (void)Rte_Read_VeDCCR_b_PnCFailure_Value(&tmpRead_2h);

    /* Inport: '<Root>/VeDCCR_e_DC_ChrgTypeCmd' */
    (void)Rte_Read_VeDCCR_e_DC_ChrgTypeCmd_Value(&tmpRead_2g);

    /* Inport: '<Root>/VeDCCR_b_SelectSecProtocol' */
    (void)Rte_Read_VeDCCR_b_SelectSecProtocol_Value(&tmpRead_2f);

    /* Inport: '<Root>/VeDCCR_e_SelectAppProtocol' */
    (void)Rte_Read_VeDCCR_e_SelectAppProtocol_Value(&tmpRead_2e);

    /* Inport: '<Root>/VeDCCR_e_GBT_ChrgrInterrupt' */
    (void)Rte_Read_VeDCCR_e_GBT_ChrgrInterrupt_Value(&tmpRead_2d);

    /* Inport: '<Root>/VeDCCR_e_GBT_ChrgCntrolMethod' */
    (void)Rte_Read_VeDCCR_e_GBT_ChrgCntrolMethod_Value(&tmpRead_2c);

    /* Inport: '<Root>/VeDCCR_T_GBT_MaxBattTempAllwd' */
    (void)Rte_Read_VeDCCR_T_GBT_MaxBattTempAllwd_Value(&tmpRead_2b);

    /* Inport: '<Root>/VeDCCR_b_DCGBTEVChrgPermit' */
    (void)Rte_Read_VeDCCR_b_DCGBTEVChrgPermit_Value(&tmpRead_2a);

    /* Inport: '<Root>/VeDCCR_b_DCGBTReadyToCharge' */
    (void)Rte_Read_VeDCCR_b_DCGBTReadyToCharge_Value(&tmpRead_29);

    /* Inport: '<Root>/VeDCCR_b_BattUnderVolt' */
    (void)Rte_Read_VeDCCR_b_BattUnderVolt_Value(&tmpRead_28);

    /* Inport: '<Root>/VeDCCR_b_BattOverVolt' */
    (void)Rte_Read_VeDCCR_b_BattOverVolt_Value(&tmpRead_27);

    /* Inport: '<Root>/VeDCCR_Pct_BattFullSOC' */
    (void)Rte_Read_VeDCCR_Pct_BattFullSOC_Value(&tmpRead_26);

    /* Inport: '<Root>/VeDCCR_b_CPIM_OT' */
    (void)Rte_Read_VeDCCR_b_CPIM_OT_Value(&tmpRead_25);

    /* Inport: '<Root>/VeDCCR_b_CPIM_Error' */
    (void)Rte_Read_VeDCCR_b_CPIM_Error_Value(&tmpRead_24);

    /* Inport: '<Root>/VeDCCR_e_SOC_OOR' */
    (void)Rte_Read_VeDCCR_e_SOC_OOR_Value(&tmpRead_23);

    /* Inport: '<Root>/VeDCCR_e_BattTemp_OOR' */
    (void)Rte_Read_VeDCCR_e_BattTemp_OOR_Value(&tmpRead_22);

    /* Inport: '<Root>/VeDCCR_e_ChrgCurr_OOR' */
    (void)Rte_Read_VeDCCR_e_ChrgCurr_OOR_Value(&tmpRead_21);

    /* Inport: '<Root>/VeDCCR_e_CellVolt_OOR' */
    (void)Rte_Read_VeDCCR_e_CellVolt_OOR_Value(&tmpRead_20);

    /* Inport: '<Root>/VeDCCR_b_DCChrgInitialization' */
    (void)Rte_Read_VeDCCR_b_DCChrgInitialization_Value(&tmpRead_1z);

    /* Inport: '<Root>/VeDCCR_e_DCChrg_TestSts' */
    (void)Rte_Read_VeDCCR_e_DCChrg_TestSts_Value(&tmpRead_1y);

    /* Inport: '<Root>/VeDCCR_b_HCP_SessionStpCmd' */
    (void)Rte_Read_VeDCCR_b_HCP_SessionStpCmd_Value(&tmpRead_1x);

    /* Inport: '<Root>/VeDCCR_e_SelPayOptn' */
    (void)Rte_Read_VeDCCR_e_SelPayOptn_Value(&tmpRead_1w);

    /* Inport: '<Root>/VeDCCR_K_SelectedServiceID' */
    (void)Rte_Read_VeDCCR_K_SelectedServiceID_Value(&tmpRead_1v);

    /* Inport: '<Root>/VeDCCR_b_RdyToChrgSt' */
    (void)Rte_Read_VeDCCR_b_RdyToChrgSt_Value(&tmpRead_1u);

    /* Inport: '<Root>/VeDCCR_b_WeldChkComplete' */
    (void)Rte_Read_VeDCCR_b_WeldChkComplete_Value(&tmpRead_1t);

    /* Inport: '<Root>/VeDCCR_U_EV_DCTargetVolt' */
    (void)Rte_Read_VeDCCR_U_EV_DCTargetVolt_Value(&tmpRead_1s);

    /* Inport: '<Root>/VeDCCR_e_DC_CntctrCmd' */
    (void)Rte_Read_VeDCCR_e_DC_CntctrCmd_Value(&tmpRead_1r);

    /* Inport: '<Root>/VeDCCR_b_DC_Isolation_Cmd' */
    (void)Rte_Read_VeDCCR_b_DC_Isolation_Cmd_Value(&tmpRead_1q);

    /* Inport: '<Root>/VeDCCR_E_EVEnergyCapacity' */
    (void)Rte_Read_VeDCCR_E_EVEnergyCapacity_Value(&tmpRead_1p);

    /* Inport: '<Root>/VeDCCR_U_EVMax_V_Limit' */
    (void)Rte_Read_VeDCCR_U_EVMax_V_Limit_Value(&tmpRead_1o);

    /* Inport: '<Root>/VeDCCR_P_EVMax_P_Limit' */
    (void)Rte_Read_VeDCCR_P_EVMax_P_Limit_Value(&tmpRead_1n);

    /* Inport: '<Root>/VeDCCR_I_EVMax_I_Limit' */
    (void)Rte_Read_VeDCCR_I_EVMax_I_Limit_Value(&tmpRead_1m);

    /* Inport: '<Root>/VeDCCR_e_HCP_EVErrorCode' */
    (void)Rte_Read_VeDCCR_e_HCP_EVErrorCode_Value(&tmpRead_1l);

    /* Inport: '<Root>/VeDCCR_b_EVReady' */
    (void)Rte_Read_VeDCCR_b_EVReady_Value(&tmpRead_1k);

    /* Inport: '<Root>/VeDCCR_e_SelEnrgyTxType' */
    (void)Rte_Read_VeDCCR_e_SelEnrgyTxType_Value(&tmpRead_1j);

    /* Inport: '<Root>/VeDCCR_e_Service_Category' */
    (void)Rte_Read_VeDCCR_e_Service_Category_Value(&tmpRead_1i);

    /* Inport: '<Root>/VeCHFR_K_ChargingFailure5' */
    (void)Rte_Read_VeCHFR_K_ChargingFailure5_Value(&tmpRead_1h);

    /* Inport: '<Root>/VeCHFR_K_ChargingFailure4' */
    (void)Rte_Read_VeCHFR_K_ChargingFailure4_Value(&tmpRead_1g);

    /* Inport: '<Root>/VeCHFR_K_ChargingFailure3' */
    (void)Rte_Read_VeCHFR_K_ChargingFailure3_Value(&tmpRead_1f);

    /* Inport: '<Root>/VeCHFR_K_ChargingFailure2' */
    (void)Rte_Read_VeCHFR_K_ChargingFailure2_Value(&tmpRead_1e);

    /* Inport: '<Root>/VeCHFR_K_ChargingFailure1' */
    (void)Rte_Read_VeCHFR_K_ChargingFailure1_Value(&tmpRead_1d);

    /* Inport: '<Root>/VeCHFR_b_ChrgSysFaultBPCM' */
    (void)Rte_Read_VeCHFR_b_ChrgSysFaultBPCM_Value(&tmpRead_1c);

    /* Inport: '<Root>/VeCHFR_b_HMIR_MSG8' */
    (void)Rte_Read_VeCHFR_b_HMIR_MSG8_Value(&tmpRead_1b);

    /* Inport: '<Root>/VeCHFR_b_HMIR_MSG6' */
    (void)Rte_Read_VeCHFR_b_HMIR_MSG6_Value(&tmpRead_1a);

    /* Inport: '<Root>/VeCHFR_b_HMIR_MSG5' */
    (void)Rte_Read_VeCHFR_b_HMIR_MSG5_Value(&tmpRead_19);

    /* Inport: '<Root>/VeCHFR_b_ChargeReq_ToBPCM' */
    (void)Rte_Read_VeCHFR_b_ChargeReq_ToBPCM_Value(&tmpRead_18);

    /* Inport: '<Root>/VeCHFR_I_BattSideCurr' */
    (void)Rte_Read_VeCHFR_I_BattSideCurr_Value(&tmpRead_17);

    /* Inport: '<Root>/VeCHFR_k_ChrgSysFault_Reason' */
    (void)Rte_Read_VeCHFR_k_ChrgSysFault_Reason_Value(&tmpRead_16);

    /* Inport: '<Root>/VeCHFR_U_ChrgVltReqDelta' */
    (void)Rte_Read_VeCHFR_U_ChrgVltReqDelta_Value(&tmpRead_15);

    /* Inport: '<Root>/VeCCCR_P_PLS_PwrLev5' */
    (void)Rte_Read_VeCCCR_P_PLS_PwrLev5_Value(&tmpRead_14);

    /* Inport: '<Root>/VeCCCR_P_PLS_PwrLev4' */
    (void)Rte_Read_VeCCCR_P_PLS_PwrLev4_Value(&tmpRead_13);

    /* Inport: '<Root>/VeCCCR_P_PLS_PwrLev3' */
    (void)Rte_Read_VeCCCR_P_PLS_PwrLev3_Value(&tmpRead_12);

    /* Inport: '<Root>/VeCCCR_P_PLS_PwrLev2' */
    (void)Rte_Read_VeCCCR_P_PLS_PwrLev2_Value(&tmpRead_11);

    /* Inport: '<Root>/VeCCCR_P_PLS_PwrLev1' */
    (void)Rte_Read_VeCCCR_P_PLS_PwrLev1_Value(&tmpRead_10);

    /* Inport: '<Root>/VeCCCR_e_MaxCellVoltRchd_BST' */
    (void)Rte_Read_VeCCCR_e_MaxCellVoltRchd_BST_Value(&tmpRead_z);

    /* Inport: '<Root>/VeCCCR_e_SOCRchd_BST' */
    (void)Rte_Read_VeCCCR_e_SOCRchd_BST_Value(&tmpRead_y);

    /* Inport: '<Root>/VeCCCR_e_BattPckVoltRchd_BST' */
    (void)Rte_Read_VeCCCR_e_BattPckVoltRchd_BST_Value(&tmpRead_x);

    /* Inport: '<Root>/VeCCCR_e_HVBattBalReq' */
    (void)Rte_Read_VeCCCR_e_HVBattBalReq_Value(&tmpRead_w);

    /* Inport: '<Root>/VeCCCR_I_ChrgCrntReqDelta' */
    (void)Rte_Read_VeCCCR_I_ChrgCrntReqDelta_Value(&tmpRead_v);

    /* Inport: '<Root>/VeCPLR_e_ChargePortLock_Sts' */
    (void)Rte_Read_VeCPLR_e_ChargePortLock_Sts_Value(&tmpRead_u);

    /* Inport: '<Root>/VeCPLR_b_HMIR_MSG13' */
    (void)Rte_Read_VeCPLR_b_HMIR_MSG13_Value(&tmpRead_t);

    /* Inport: '<Root>/VeCPLR_b_DVC_ChrgPort_Req' */
    (void)Rte_Read_VeCPLR_b_DVC_ChrgPort_Req_Value(&tmpRead_s);

    /* Inport: '<Root>/VeCPLR_b_ChrgPortReq_BSW' */
    (void)Rte_Read_VeCPLR_b_ChrgPortReq_BSW_Value(&tmpRead_r);

    /* Inport: '<Root>/VeCPLR_k_ChrgPortEnbl_BSW' */
    (void)Rte_Read_VeCPLR_k_ChrgPortEnbl_BSW_Value(&tmpRead_q);

    /* Inport: '<Root>/VeCPLR_b_Lock_Status' */
    (void)Rte_Read_VeCPLR_b_Lock_Status_Value(&tmpRead_p);

    /* Inport: '<Root>/VeCPLR_b_RelockTimerActive' */
    (void)Rte_Read_VeCPLR_b_RelockTimerActive_Value(&tmpRead_o);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/OBCR_FUNC_MedTED'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output_Proc'
     */
    /* SignalConversion generated from: '<S7>/VeOBCR_d_ServiceScope' */
    OBCR_ac_B.VeOBCR_d_ServiceScope = 0U;

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* SignalConversion generated from: '<S1>/PluggedIn_ForEE' */
#if Rte_SysCon_Variant_OBCR_1

    /* Outport: '<Root>/VeOBCR_b_PluggedIn_EEPROM' */
    (void)Rte_Write_VeOBCR_b_PluggedIn_EEPROM_Value(OBCR_ac_B.Gain_o);

#endif

    /* End of SignalConversion generated from: '<S1>/PluggedIn_ForEE' */

    /* Outport: '<Root>/VaOBCR_Cnt_PlugIn_Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VaOBCR_Cnt_PlugIn_Vector'
     */
    (void)Rte_Write_VaOBCR_Cnt_PlugIn_Vector_Value
        (rtb_VM_Conditional_Signal_PlugI);

    /* Outport: '<Root>/VaOBCR_b_NCR_Signals' incorporates:
     *  SignalConversion generated from: '<S1>/VaOBCR_b_NCR_Signals'
     */
    (void)Rte_Write_VaOBCR_b_NCR_Signals_Value(rtb_VM_Conditional_Signal_NCR_S);

    /* Outport: '<Root>/VaOBCR_k_InitChecks_Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VaOBCR_k_InitChecks_Vector'
     */
    (void)Rte_Write_VaOBCR_k_InitChecks_Vector_Value
        (rtb_VM_Conditional_Signal_InitC);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output_Proc'
     */
    /* Outport: '<Root>/VeOBCR_Cnt_NCR' incorporates:
     *  Gain: '<S841>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_Cnt_NCR'
     */
    (void)Rte_Write_VeOBCR_Cnt_NCR_Value(rtb_VM_Conditional_Signal_NCR_4);

    /* Outport: '<Root>/VeOBCR_E_EVEnergyCapacity' incorporates:
     *  Gain: '<S812>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_E_EVEnergyCapacity'
     */
    (void)Rte_Write_VeOBCR_E_EVEnergyCapacity_Value(tmpRead_1p);

    /* Outport: '<Root>/VeOBCR_I_BattSideCurr' incorporates:
     *  Gain: '<S793>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_I_BattSideCurr'
     */
    (void)Rte_Write_VeOBCR_I_BattSideCurr_Value(tmpRead_17);

    /* Outport: '<Root>/VeOBCR_I_ChrgCrntReqDelta' incorporates:
     *  Gain: '<S775>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_I_ChrgCrntReqDelta'
     */
    (void)Rte_Write_VeOBCR_I_ChrgCrntReqDelta_Value(tmpRead_v);

    /* Outport: '<Root>/VeOBCR_I_ChrgCurrEstSOC' incorporates:
     *  Gain: '<S770>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_I_ChrgCurrEstSOC'
     */
    (void)Rte_Write_VeOBCR_I_ChrgCurrEstSOC_Value
        (rtb_VM_Conditional_Signal_ChrgC);

    /* Outport: '<Root>/VeOBCR_I_EVMax_I_Limit' incorporates:
     *  Gain: '<S809>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_I_EVMax_I_Limit'
     */
    (void)Rte_Write_VeOBCR_I_EVMax_I_Limit_Value(tmpRead_1m);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeOBCR_I_MaxAllowableCrntBatt' incorporates:
     *  SignalConversion generated from: '<S1>/VeOBCR_I_MaxAllowableCrntBatt'
     */
    (void)Rte_Write_VeOBCR_I_MaxAllowableCrntBatt_Value
        (OBCR_ac_B.VeOBCR_I_MaxAllowableCrntBatt);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output_Proc'
     */
    /* Outport: '<Root>/VeOBCR_I_MaxAllowedCurr' incorporates:
     *  Gain: '<S781>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_I_MaxAllowedCurr'
     */
    (void)Rte_Write_VeOBCR_I_MaxAllowedCurr_Value
        (rtb_TmpSignalConversionAtVeCCCR);

    /* Outport: '<Root>/VeOBCR_K_ChargingFailure1' incorporates:
     *  Gain: '<S802>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_K_ChargingFailure1'
     */
    (void)Rte_Write_VeOBCR_K_ChargingFailure1_Value(tmpRead_1d);

    /* Outport: '<Root>/VeOBCR_K_ChargingFailure2' incorporates:
     *  Gain: '<S803>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_K_ChargingFailure2'
     */
    (void)Rte_Write_VeOBCR_K_ChargingFailure2_Value(tmpRead_1e);

    /* Outport: '<Root>/VeOBCR_K_ChargingFailure3' incorporates:
     *  Gain: '<S804>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_K_ChargingFailure3'
     */
    (void)Rte_Write_VeOBCR_K_ChargingFailure3_Value(tmpRead_1f);

    /* Outport: '<Root>/VeOBCR_K_ChargingFailure4' incorporates:
     *  Gain: '<S806>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_K_ChargingFailure4'
     */
    (void)Rte_Write_VeOBCR_K_ChargingFailure4_Value(tmpRead_1g);

    /* Outport: '<Root>/VeOBCR_K_ChargingFailure5' incorporates:
     *  Gain: '<S807>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_K_ChargingFailure5'
     */
    (void)Rte_Write_VeOBCR_K_ChargingFailure5_Value(tmpRead_1h);

    /* Outport: '<Root>/VeOBCR_K_SelectedServiceID' incorporates:
     *  Gain: '<S818>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_K_SelectedServiceID'
     */
    (void)Rte_Write_VeOBCR_K_SelectedServiceID_Value(tmpRead_1v);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* SignalConversion generated from: '<S1>/VeOBCR_P_ActChargePower' incorporates:
     *  SignalConversion generated from: '<S1>/VeOBCR_P_ActChargePowerLim'
     */
#if Rte_SysCon_Variant_OBCR_1

    /* Outport: '<Root>/VeOBCR_P_ActChargePower' */
    (void)Rte_Write_VeOBCR_P_ActChargePower_Value
        (OBCR_ac_B.OutportBufferForActChargePwr);

    /* Outport: '<Root>/VeOBCR_P_ActChargePowerLim' */
    (void)Rte_Write_VeOBCR_P_ActChargePowerLim_Value
        (OBCR_ac_B.OutportBufferForActChargeLim);

#endif

    /* End of SignalConversion generated from: '<S1>/VeOBCR_P_ActChargePower' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output_Proc'
     */
    /* Outport: '<Root>/VeOBCR_P_EVMax_P_Limit' incorporates:
     *  Gain: '<S810>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_P_EVMax_P_Limit'
     */
    (void)Rte_Write_VeOBCR_P_EVMax_P_Limit_Value(tmpRead_1n);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* SignalConversion generated from: '<S1>/VeOBCR_P_EVSEPwr' */
#if Rte_SysCon_Variant_OBCR_1

    /* Outport: '<Root>/VeOBCR_P_EVSEPwr' */
    (void)Rte_Write_VeOBCR_P_EVSEPwr_Value(OBCR_ac_B.OutportBufferForEVSEPwr);

#endif

    /* End of SignalConversion generated from: '<S1>/VeOBCR_P_EVSEPwr' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output_Proc'
     */
    /* Outport: '<Root>/VeOBCR_P_PLS_PwrLev1' incorporates:
     *  Gain: '<S785>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_P_PLS_PwrLev1'
     */
    (void)Rte_Write_VeOBCR_P_PLS_PwrLev1_Value(tmpRead_10);

    /* Outport: '<Root>/VeOBCR_P_PLS_PwrLev2' incorporates:
     *  Gain: '<S786>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_P_PLS_PwrLev2'
     */
    (void)Rte_Write_VeOBCR_P_PLS_PwrLev2_Value(tmpRead_11);

    /* Outport: '<Root>/VeOBCR_P_PLS_PwrLev3' incorporates:
     *  Gain: '<S787>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_P_PLS_PwrLev3'
     */
    (void)Rte_Write_VeOBCR_P_PLS_PwrLev3_Value(tmpRead_12);

    /* Outport: '<Root>/VeOBCR_P_PLS_PwrLev4' incorporates:
     *  Gain: '<S788>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_P_PLS_PwrLev4'
     */
    (void)Rte_Write_VeOBCR_P_PLS_PwrLev4_Value(tmpRead_13);

    /* Outport: '<Root>/VeOBCR_P_PLS_PwrLev5' incorporates:
     *  Gain: '<S789>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_P_PLS_PwrLev5'
     */
    (void)Rte_Write_VeOBCR_P_PLS_PwrLev5_Value(tmpRead_14);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* SignalConversion generated from: '<S1>/VeOBCR_P_PowertoBattery' */
#if Rte_SysCon_Variant_OBCR_1

    /* Outport: '<Root>/VeOBCR_P_PowertoBattery' */
    (void)Rte_Write_VeOBCR_P_PowertoBattery_Value
        (OBCR_ac_B.OutportBufferForEnergyToBatt);

#endif

    /* End of SignalConversion generated from: '<S1>/VeOBCR_P_PowertoBattery' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output_Proc'
     */
    /* Outport: '<Root>/VeOBCR_Pct_BattFullSOC' incorporates:
     *  Gain: '<S824>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_Pct_BattFullSOC'
     */
    (void)Rte_Write_VeOBCR_Pct_BattFullSOC_Value(tmpRead_26);

    /* Outport: '<Root>/VeOBCR_T_GBT_MaxBattTempAllwd' incorporates:
     *  Gain: '<S830>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_T_GBT_MaxBattTempAllwd'
     */
    (void)Rte_Write_VeOBCR_T_GBT_MaxBattTempAllwd_Value(tmpRead_2b);

    /* Outport: '<Root>/VeOBCR_U_ChrgVltReqDelta' incorporates:
     *  Gain: '<S791>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_U_ChrgVltReqDelta'
     */
    (void)Rte_Write_VeOBCR_U_ChrgVltReqDelta_Value(tmpRead_15);

    /* Outport: '<Root>/VeOBCR_U_EVMax_V_Limit' incorporates:
     *  Gain: '<S811>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_U_EVMax_V_Limit'
     */
    (void)Rte_Write_VeOBCR_U_EVMax_V_Limit_Value(tmpRead_1o);

    /* Outport: '<Root>/VeOBCR_U_EV_DCTargetVolt' incorporates:
     *  Gain: '<S815>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_U_EV_DCTargetVolt'
     */
    (void)Rte_Write_VeOBCR_U_EV_DCTargetVolt_Value(tmpRead_1s);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeOBCR_U_MaxAllowableBattVolt' incorporates:
     *  SignalConversion generated from: '<S1>/VeOBCR_U_MaxAllowableBattVolt'
     */
    (void)Rte_Write_VeOBCR_U_MaxAllowableBattVolt_Value
        (OBCR_ac_B.VeOBCR_U_MaxAllowableBattVolt);

    /* Outport: '<Root>/VeOBCR_U_MinAllowableBattVolt' incorporates:
     *  SignalConversion generated from: '<S1>/VeOBCR_U_MinAllowableBattVolt'
     */
    (void)Rte_Write_VeOBCR_U_MinAllowableBattVolt_Value
        (OBCR_ac_B.VeOBCR_U_MinAllowableBattVolt);

    /* SignalConversion generated from: '<S1>/VeOBCR_b_ActChargePowerFA' incorporates:
     *  SignalConversion generated from: '<S1>/VeOBCR_b_ActChargePowerLimFA'
     */
#if Rte_SysCon_Variant_OBCR_1

    /* Outport: '<Root>/VeOBCR_b_ActChargePowerFA' */
    (void)Rte_Write_VeOBCR_b_ActChargePowerFA_Value
        (OBCR_ac_B.OutportBufferForActChargePwrFA);

    /* Outport: '<Root>/VeOBCR_b_ActChargePowerLimFA' */
    (void)Rte_Write_VeOBCR_b_ActChargePowerLimFA_Value
        (OBCR_ac_B.OutportBufferForActChargeLimFA);

#endif

    /* End of SignalConversion generated from: '<S1>/VeOBCR_b_ActChargePowerFA' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output_Proc'
     */
    /* Outport: '<Root>/VeOBCR_b_BattOverVolt' incorporates:
     *  Gain: '<S825>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_b_BattOverVolt'
     */
    (void)Rte_Write_VeOBCR_b_BattOverVolt_Value(tmpRead_27);

    /* Outport: '<Root>/VeOBCR_b_BattUnderVolt' incorporates:
     *  Gain: '<S826>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_b_BattUnderVolt'
     */
    (void)Rte_Write_VeOBCR_b_BattUnderVolt_Value(tmpRead_28);

    /* Outport: '<Root>/VeOBCR_b_CPIM_Error' incorporates:
     *  Gain: '<S822>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_b_CPIM_Error'
     */
    (void)Rte_Write_VeOBCR_b_CPIM_Error_Value(tmpRead_24);

    /* Outport: '<Root>/VeOBCR_b_CPIM_OT' incorporates:
     *  Gain: '<S823>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_b_CPIM_OT'
     */
    (void)Rte_Write_VeOBCR_b_CPIM_OT_Value(tmpRead_25);

    /* Outport: '<Root>/VeOBCR_b_ChargeReq_ToBPCM' incorporates:
     *  Gain: '<S798>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_b_ChargeReq_ToBPCM'
     */
    (void)Rte_Write_VeOBCR_b_ChargeReq_ToBPCM_Value(tmpRead_18);

    /* Outport: '<Root>/VeOBCR_b_ChrgPortReq_BSW' incorporates:
     *  Gain: '<S821>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_b_ChrgPortReq_BSW'
     */
    (void)Rte_Write_VeOBCR_b_ChrgPortReq_BSW_Value(tmpRead_r);

    /* Outport: '<Root>/VeOBCR_b_ChrgSysFault' incorporates:
     *  Gain: '<S790>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_b_ChrgSysFault'
     */
    (void)Rte_Write_VeOBCR_b_ChrgSysFault_Value(rtb_TmpSignalConversionAtVeCHFR);

    /* Outport: '<Root>/VeOBCR_b_ChrgSysFaultBPCM' incorporates:
     *  Gain: '<S801>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_b_ChrgSysFaultBPCM'
     */
    (void)Rte_Write_VeOBCR_b_ChrgSysFaultBPCM_Value(tmpRead_1c);

    /* Outport: '<Root>/VeOBCR_b_DCChrgInitialization' incorporates:
     *  Gain: '<S820>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_b_DCChrgInitialization'
     */
    (void)Rte_Write_VeOBCR_b_DCChrgInitialization_Value(tmpRead_1z);

    /* Outport: '<Root>/VeOBCR_b_DCGBTEVChrgPermit' incorporates:
     *  Gain: '<S829>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_b_DCGBTEVChrgPermit'
     */
    (void)Rte_Write_VeOBCR_b_DCGBTEVChrgPermit_Value(tmpRead_2a);

    /* Outport: '<Root>/VeOBCR_b_DCGBTReadyToCharge' incorporates:
     *  Gain: '<S827>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_b_DCGBTReadyToCharge'
     */
    (void)Rte_Write_VeOBCR_b_DCGBTReadyToCharge_Value(tmpRead_29);

    /* Outport: '<Root>/VeOBCR_b_DC_Isolation_Cmd' incorporates:
     *  Gain: '<S814>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_b_DC_Isolation_Cmd'
     */
    (void)Rte_Write_VeOBCR_b_DC_Isolation_Cmd_Value(tmpRead_1q);

    /* Outport: '<Root>/VeOBCR_b_DVC_ChrgPort_Req' incorporates:
     *  Gain: '<S833>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_b_DVC_ChrgPort_Req'
     */
    (void)Rte_Write_VeOBCR_b_DVC_ChrgPort_Req_Value(tmpRead_s);

    /* Outport: '<Root>/VeOBCR_b_EVReady' incorporates:
     *  Gain: '<S808>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_b_EVReady'
     */
    (void)Rte_Write_VeOBCR_b_EVReady_Value(tmpRead_1k);

    /* Outport: '<Root>/VeOBCR_b_EnblDsblProxPlg' incorporates:
     *  Gain: '<S843>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_b_EnblDsblProxPlg'
     */
    (void)Rte_Write_VeOBCR_b_EnblDsblProxPlg_Value
        (rtb_VM_Conditional_Signal_ProxP);

    /* Outport: '<Root>/VeOBCR_b_HCP_SessionStpCmd' incorporates:
     *  Gain: '<S819>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_b_HCP_SessionStpCmd'
     */
    (void)Rte_Write_VeOBCR_b_HCP_SessionStpCmd_Value(tmpRead_1x);

    /* Outport: '<Root>/VeOBCR_b_HMIR_MSG13' incorporates:
     *  Gain: '<S769>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_b_HMIR_MSG13'
     */
    (void)Rte_Write_VeOBCR_b_HMIR_MSG13_Value(tmpRead_t);

    /* Outport: '<Root>/VeOBCR_b_HMIR_MSG5' incorporates:
     *  Gain: '<S828>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_b_HMIR_MSG5'
     */
    (void)Rte_Write_VeOBCR_b_HMIR_MSG5_Value(tmpRead_19);

    /* Outport: '<Root>/VeOBCR_b_HMIR_MSG6' incorporates:
     *  Gain: '<S799>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_b_HMIR_MSG6'
     */
    (void)Rte_Write_VeOBCR_b_HMIR_MSG6_Value(tmpRead_1a);

    /* Outport: '<Root>/VeOBCR_b_HMIR_MSG8' incorporates:
     *  Gain: '<S800>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_b_HMIR_MSG8'
     */
    (void)Rte_Write_VeOBCR_b_HMIR_MSG8_Value(tmpRead_1b);

    /* Outport: '<Root>/VeOBCR_b_Lock_Status' incorporates:
     *  Gain: '<S784>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_b_Lock_Status'
     */
    (void)Rte_Write_VeOBCR_b_Lock_Status_Value(tmpRead_p);

    /* Outport: '<Root>/VeOBCR_b_PnCFailure' incorporates:
     *  Gain: '<S779>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_b_PnCFailure'
     */
    (void)Rte_Write_VeOBCR_b_PnCFailure_Value(tmpRead_2h);

    /* Outport: '<Root>/VeOBCR_b_PnCRetryFail' incorporates:
     *  Gain: '<S780>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_b_PnCRetryFail'
     */
    (void)Rte_Write_VeOBCR_b_PnCRetryFail_Value(tmpRead_2i);

    /* Outport: '<Root>/VeOBCR_b_RdyToChrgSt' incorporates:
     *  Gain: '<S817>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_b_RdyToChrgSt'
     */
    (void)Rte_Write_VeOBCR_b_RdyToChrgSt_Value(tmpRead_1u);

    /* Outport: '<Root>/VeOBCR_b_RelockTimerActive' incorporates:
     *  Gain: '<S774>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_b_RelockTimerActive'
     */
    (void)Rte_Write_VeOBCR_b_RelockTimerActive_Value(tmpRead_o);

    /* Outport: '<Root>/VeOBCR_b_SelectSecProtocol' incorporates:
     *  Gain: '<S831>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_b_SelectSecProtocol'
     */
    (void)Rte_Write_VeOBCR_b_SelectSecProtocol_Value(tmpRead_2f);

    /* Outport: '<Root>/VeOBCR_b_WeldChkComplete' incorporates:
     *  Gain: '<S816>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_b_WeldChkComplete'
     */
    (void)Rte_Write_VeOBCR_b_WeldChkComplete_Value(tmpRead_1t);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeOBCR_k_MaxEntriesSASScheduleTuple' incorporates:
     *  SignalConversion generated from: '<S1>/VeOBCR_d_ServiceScope'
     */
    (void)Rte_Write_VeOBCR_k_MaxEntriesSASScheduleTuple_Value
        (OBCR_ac_B.VeOBCR_d_ServiceScope);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output_Proc'
     */
    /* Outport: '<Root>/VeOBCR_e_BattPckVoltRchd_BST' incorporates:
     *  DataTypeConversion: '<S749>/DataTypeConversion'
     *  Inport: '<Root>/VeCCCR_e_BattPckVoltRchd_BST'
     *  SignalConversion generated from: '<S1>/VeOBCR_e_BattPckVoltRchd_BST'
     */
    (void)Rte_Write_VeOBCR_e_BattPckVoltRchd_BST_Value(tmpRead_x);

    /* Outport: '<Root>/VeOBCR_e_BattTemp_OOR' incorporates:
     *  DataTypeConversion: '<S738>/DataTypeConversion'
     *  Inport: '<Root>/VeDCCR_e_BattTemp_OOR'
     *  SignalConversion generated from: '<S1>/VeOBCR_e_BattTemp_OOR'
     */
    (void)Rte_Write_VeOBCR_e_BattTemp_OOR_Value(tmpRead_22);

    /* Outport: '<Root>/VeOBCR_e_CellVolt_OOR' incorporates:
     *  DataTypeConversion: '<S736>/DataTypeConversion'
     *  Inport: '<Root>/VeDCCR_e_CellVolt_OOR'
     *  SignalConversion generated from: '<S1>/VeOBCR_e_CellVolt_OOR'
     */
    (void)Rte_Write_VeOBCR_e_CellVolt_OOR_Value(tmpRead_20);

    /* Outport: '<Root>/VeOBCR_e_ChargeportLock_Sts' incorporates:
     *  DataTypeConversion: '<S732>/DataTypeConversion'
     *  Inport: '<Root>/VeCPLR_e_ChargePortLock_Sts'
     *  SignalConversion generated from: '<S1>/VeOBCR_e_ChargePortLock_Sts'
     */
    (void)Rte_Write_VeOBCR_e_ChargeportLock_Sts_Value(tmpRead_u);

    /* Outport: '<Root>/VeOBCR_e_ChargeProgress' incorporates:
     *  DataTypeConversion: '<S744>/DataTypeConversion'
     *  SignalConversion generated from: '<S1>/VeOBCR_e_ChargeProgress'
     *  SignalConversion generated from: '<S1>/VeDCCR_e_ChargeProgress'
     */
    (void)Rte_Write_VeOBCR_e_ChargeProgress_Value
        (OBCR_ac_B.TmpSignalConversionAtVeDCCR_e_C);

    /* Outport: '<Root>/VeOBCR_e_ChargeType' incorporates:
     *  DataTypeConversion: '<S750>/DataTypeConversion'
     *  SignalConversion generated from: '<S1>/VeOBCR_e_ChargeType'
     *  VariantMerge generated from: '<S7>/ChargeType'
     */
    (void)Rte_Write_VeOBCR_e_ChargeType_Value(rtb_VeOBCR_e_ChargeType_Test);

    /* Switch: '<S761>/Switch6' incorporates:
     *  Constant: '<S847>/Calib'
     *  Constant: '<S863>/Calib'
     *  VariantMerge generated from: '<S7>/ChargingLevel'
     */
    if (KeOBCR_b_ChargingLevelOvrd)
    {
        rtb_Switch1_ov = KeOBCR_e_ChargingLevel;
    }
    else
    {
        rtb_Switch1_ov = rtb_VM_Conditional_Signal_Cha_p;
    }

    /* Outport: '<Root>/VeOBCR_e_ChargingLevel' incorporates:
     *  SignalConversion generated from: '<S1>/VeOBCR_e_ChargingLevel'
     *  Switch: '<S761>/Switch6'
     */
    (void)Rte_Write_VeOBCR_e_ChargingLevel_Value(rtb_Switch1_ov);

    /* Outport: '<Root>/VeOBCR_e_ChargingSystemSts' incorporates:
     *  DataTypeConversion: '<S755>/DataTypeConversion'
     *  SignalConversion generated from: '<S1>/VeOBCR_e_ChargingSystemSts_Out'
     *  VariantMerge generated from: '<S7>/ChargingSystemsSts'
     */
    (void)Rte_Write_VeOBCR_e_ChargingSystemSts_Value
        (rtb_VM_Conditional_Signal_Charg);

    /* Outport: '<Root>/VeOBCR_e_ChrgCurr_OOR' incorporates:
     *  DataTypeConversion: '<S737>/DataTypeConversion'
     *  Inport: '<Root>/VeDCCR_e_ChrgCurr_OOR'
     *  SignalConversion generated from: '<S1>/VeOBCR_e_ChrgCurr_OOR'
     */
    (void)Rte_Write_VeOBCR_e_ChrgCurr_OOR_Value(tmpRead_21);

    /* Outport: '<Root>/VeOBCR_e_ChrgPort_Req' incorporates:
     *  DataTypeConversion: '<S731>/DataTypeConversion'
     *  SignalConversion generated from: '<S1>/VeOBCR_e_ChrgPort_Req'
     *  SignalConversion generated from: '<S1>/VeCPLR_e_ChrgPort_Req'
     */
    (void)Rte_Write_VeOBCR_e_ChrgPort_Req_Value(rtb_TmpSignalConversionAtVeCPLR);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeOBCR_e_ChrgSysShtDwnFlt' incorporates:
     *  SignalConversion generated from: '<S1>/VeOBCR_e_ChrgSysShtDwnFlt'
     *  SignalConversion generated from: '<S7>/VeOBCR_e_ChrgSysShtDwnFlt'
     */
    (void)Rte_Write_VeOBCR_e_ChrgSysShtDwnFlt_Value
        (OBCR_ac_B.VeOBCR_e_ChrgSysShtDwnFlt);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output_Proc'
     */
    /* Outport: '<Root>/VeOBCR_e_ChrgSysStat_SF' incorporates:
     *  DataTypeConversion: '<S752>/DataTypeConversion'
     *  SignalConversion generated from: '<S1>/VeOBCR_e_ChrgSysStat_SF'
     *  VariantMerge generated from: '<S7>/ChrgSysStat'
     */
    (void)Rte_Write_VeOBCR_e_ChrgSysStat_SF_Value
        (rtb_VM_Conditional_Signal_ChrgS);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeOBCR_e_ChrgrTrsfMethodReq' incorporates:
     *  SignalConversion generated from: '<S1>/VeOBCR_e_ChrgrTrsfMethodReq'
     *  SignalConversion generated from: '<S7>/VeOBCR_e_ChrgrTrsfMethodReq'
     */
    (void)Rte_Write_VeOBCR_e_ChrgrTrsfMethodReq_Value
        (OBCR_ac_B.VeOBCR_e_ChrgrTrsfMethodReq);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output_Proc'
     */
    /* Outport: '<Root>/VeOBCR_e_DCChrg_TestSts' incorporates:
     *  DataTypeConversion: '<S735>/DataTypeConversion'
     *  Inport: '<Root>/VeDCCR_e_DCChrg_TestSts'
     *  SignalConversion generated from: '<S1>/VeOBCR_e_DCChrg_TestSts'
     */
    (void)Rte_Write_VeOBCR_e_DCChrg_TestSts_Value(tmpRead_1y);

    /* Outport: '<Root>/VeOBCR_e_DC_ChrgTypeCmd' incorporates:
     *  DataTypeConversion: '<S745>/DataTypeConversion'
     *  Inport: '<Root>/VeDCCR_e_DC_ChrgTypeCmd'
     *  SignalConversion generated from: '<S1>/VeOBCR_e_DC_ChrgTypeCmd'
     */
    (void)Rte_Write_VeOBCR_e_DC_ChrgTypeCmd_Value(tmpRead_2g);

    /* Outport: '<Root>/VeOBCR_e_DC_CntctrCmd' incorporates:
     *  DataTypeConversion: '<S733>/DataTypeConversion'
     *  Inport: '<Root>/VeDCCR_e_DC_CntctrCmd'
     *  SignalConversion generated from: '<S1>/VeOBCR_e_DC_CntctrCmd'
     */
    (void)Rte_Write_VeOBCR_e_DC_CntctrCmd_Value(tmpRead_1r);

    /* Outport: '<Root>/VeOBCR_e_GBT_ChrgCntrolMethod' incorporates:
     *  DataTypeConversion: '<S740>/DataTypeConversion'
     *  Inport: '<Root>/VeDCCR_e_GBT_ChrgCntrolMethod'
     *  SignalConversion generated from: '<S1>/VeOBCR_e_GBT_ChrgCntrolMethod'
     */
    (void)Rte_Write_VeOBCR_e_GBT_ChrgCntrolMethod_Value(tmpRead_2c);

    /* Outport: '<Root>/VeOBCR_e_GBT_ChrgrInterrupt' incorporates:
     *  DataTypeConversion: '<S741>/DataTypeConversion'
     *  Inport: '<Root>/VeDCCR_e_GBT_ChrgrInterrupt'
     *  SignalConversion generated from: '<S1>/VeOBCR_e_GBT_ChrgrInterrupt'
     */
    (void)Rte_Write_VeOBCR_e_GBT_ChrgrInterrupt_Value(tmpRead_2d);

    /* Switch: '<S761>/Switch27' incorporates:
     *  Constant: '<S844>/Constant'
     *  Constant: '<S857>/Calib'
     *  Constant: '<S865>/Calib'
     */
    if (KeOBCR_b_HCP_DC_RetryOvrd)
    {
        tmp = KeOBCR_e_HCP_DC_RetryOvrdVal;
    }
    else
    {
        tmp = CeOBCR_e_No_Retry_Command;
    }

    /* Outport: '<Root>/VeOBCR_e_HCP_DC_Retry' incorporates:
     *  SignalConversion generated from: '<S1>/VeOBCR_e_HCP_DC_Retry'
     *  Switch: '<S761>/Switch27'
     */
    (void)Rte_Write_VeOBCR_e_HCP_DC_Retry_Value(tmp);

    /* Outport: '<Root>/VeOBCR_e_HCP_EVErrorCode' incorporates:
     *  Gain: '<S778>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_e_HCP_EVErrorCode'
     */
    (void)Rte_Write_VeOBCR_e_HCP_EVErrorCode_Value(tmpRead_1l);

    /* Outport: '<Root>/VeOBCR_e_HVBattBalReq' incorporates:
     *  DataTypeConversion: '<S743>/DataTypeConversion'
     *  Inport: '<Root>/VeCCCR_e_HVBattBalReq'
     *  SignalConversion generated from: '<S1>/VeOBCR_e_HVBattBalReq'
     */
    (void)Rte_Write_VeOBCR_e_HVBattBalReq_Value(tmpRead_w);

    /* Outport: '<Root>/VeOBCR_e_MaxCellVoltRchd_BST' incorporates:
     *  DataTypeConversion: '<S753>/DataTypeConversion'
     *  Inport: '<Root>/VeCCCR_e_MaxCellVoltRchd_BST'
     *  SignalConversion generated from: '<S1>/VeOBCR_e_MaxCellVoltRchd_BST'
     */
    (void)Rte_Write_VeOBCR_e_MaxCellVoltRchd_BST_Value(tmpRead_z);

    /* Outport: '<Root>/VeOBCR_e_Protocol_Priority1' incorporates:
     *  DataTypeConversion: '<S746>/DataTypeConversion'
     *  Inport: '<Root>/VeDCCR_e_Protocol_Priority1'
     *  SignalConversion generated from: '<S1>/VeOBCR_e_Protocol_Priority1'
     */
    (void)Rte_Write_VeOBCR_e_Protocol_Priority1_Value(tmpRead_2j);

    /* Outport: '<Root>/VeOBCR_e_Protocol_Priority2' incorporates:
     *  DataTypeConversion: '<S747>/DataTypeConversion'
     *  Inport: '<Root>/VeDCCR_e_Protocol_Priority2'
     *  SignalConversion generated from: '<S1>/VeOBCR_e_Protocol_Priority2'
     */
    (void)Rte_Write_VeOBCR_e_Protocol_Priority2_Value(tmpRead_2k);

    /* Outport: '<Root>/VeOBCR_e_Protocol_Priority3' incorporates:
     *  DataTypeConversion: '<S748>/DataTypeConversion'
     *  Inport: '<Root>/VeDCCR_e_Protocol_Priority3'
     *  SignalConversion generated from: '<S1>/VeOBCR_e_Protocol_Priority3'
     */
    (void)Rte_Write_VeOBCR_e_Protocol_Priority3_Value(tmpRead_2l);

    /* Outport: '<Root>/VeOBCR_e_PwrLevSet' incorporates:
     *  DataTypeConversion: '<S754>/DataTypeConversion'
     *  SignalConversion generated from: '<S1>/VeOBCR_e_PwrLevSet'
     *  SignalConversion generated from: '<S1>/VeCCCR_e_PwrLevSet'
     */
    (void)Rte_Write_VeOBCR_e_PwrLevSet_Value(rtb_TmpSignalConversionAtVeCC_i);

    /* Outport: '<Root>/VeOBCR_e_SOCRchd_BST' incorporates:
     *  DataTypeConversion: '<S751>/DataTypeConversion'
     *  Inport: '<Root>/VeCCCR_e_SOCRchd_BST'
     *  SignalConversion generated from: '<S1>/VeOBCR_e_SOCRchd_BST'
     */
    (void)Rte_Write_VeOBCR_e_SOCRchd_BST_Value(tmpRead_y);

    /* Outport: '<Root>/VeOBCR_e_SOC_OOR' incorporates:
     *  DataTypeConversion: '<S739>/DataTypeConversion'
     *  Inport: '<Root>/VeDCCR_e_SOC_OOR'
     *  SignalConversion generated from: '<S1>/VeOBCR_e_SOC_OOR'
     */
    (void)Rte_Write_VeOBCR_e_SOC_OOR_Value(tmpRead_23);

    /* Outport: '<Root>/VeOBCR_e_SelEnrgyTxType' incorporates:
     *  Gain: '<S771>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_e_SelEnrgyTxType'
     */
    (void)Rte_Write_VeOBCR_e_SelEnrgyTxType_Value(tmpRead_1j);

    /* Outport: '<Root>/VeOBCR_e_SelPayOptn' incorporates:
     *  DataTypeConversion: '<S734>/DataTypeConversion'
     *  Inport: '<Root>/VeDCCR_e_SelPayOptn'
     *  SignalConversion generated from: '<S1>/VeOBCR_e_SelPayOptn'
     */
    (void)Rte_Write_VeOBCR_e_SelPayOptn_Value(tmpRead_1w);

    /* Outport: '<Root>/VeOBCR_e_SelectAppProtocol' incorporates:
     *  DataTypeConversion: '<S742>/DataTypeConversion'
     *  Inport: '<Root>/VeDCCR_e_SelectAppProtocol'
     *  SignalConversion generated from: '<S1>/VeOBCR_e_SelectAppProtocol'
     */
    (void)Rte_Write_VeOBCR_e_SelectAppProtocol_Value(tmpRead_2e);

    /* Outport: '<Root>/VeOBCR_e_Service_Category' incorporates:
     *  Gain: '<S763>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_e_Service_Category'
     */
    (void)Rte_Write_VeOBCR_e_Service_Category_Value(tmpRead_1i);

    /* Outport: '<Root>/VeOBCR_k_ChrgPortEnbl_BSW' incorporates:
     *  Gain: '<S794>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_k_ChrgPortEnbl_BSW'
     */
    (void)Rte_Write_VeOBCR_k_ChrgPortEnbl_BSW_Value(tmpRead_q);

    /* Outport: '<Root>/VeOBCR_k_ChrgSysFault_Reason' incorporates:
     *  Gain: '<S792>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_k_ChrgSysFault_Reason'
     */
    (void)Rte_Write_VeOBCR_k_ChrgSysFault_Reason_Value(tmpRead_16);

    /* Outport: '<Root>/VeOBCR_d_ServiceScope' incorporates:
     *  Gain: '<S783>/Gain'
     *  SignalConversion generated from: '<S1>/VeOBCR_k_MaxEntriesSASScheduleTuple'
     */
    (void)Rte_Write_VeOBCR_d_ServiceScope_Value(tmpRead_2m);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* SignalConversion generated from: '<S1>/VeOBCR_q_BatteryAmpHrCap' */
#if Rte_SysCon_Variant_OBCR_1

    /* Outport: '<Root>/VeOBCR_q_BatteryAmpHrCap' */
    (void)Rte_Write_VeOBCR_q_BatteryAmpHrCap_Value
        (OBCR_ac_B.OutportBufferForTotalBattCap);

#endif

    /* End of SignalConversion generated from: '<S1>/VeOBCR_q_BatteryAmpHrCap' */

    /* Outport: '<Root>/VeOBCR_t_EstTimeDCFastChrg_100' incorporates:
     *  SignalConversion generated from: '<S1>/VeOBCR_t_EstTimeDCFastChrg_100'
     */
    (void)Rte_Write_VeOBCR_t_EstTimeDCFastChrg_100_Value(rtb_Sum2_n1);

    /* Outport: '<Root>/VeOBCR_t_EstTimeDCFastChrg_80' incorporates:
     *  SignalConversion generated from: '<S1>/VeOBCR_t_EstTimeDCFastChrg_80'
     */
    (void)Rte_Write_VeOBCR_t_EstTimeDCFastChrg_80_Value(rtb_Switch37);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output_Proc'
     */
    /* Outport: '<Root>/VeOBCR_t_RemTimeToBulkSOC' incorporates:
     *  Constant: '<S866>/Calib'
     *  Product: '<S761>/Product1'
     *  SignalConversion generated from: '<S1>/VeOBCR_t_RemTimeToBulkSOC'
     */
    (void)Rte_Write_VeOBCR_t_RemTimeToBulkSOC_Value(KeOBCR_k_EstTmConvFactor *
        rtb_Switch37);

    /* Switch: '<S761>/Switch37' */
    if (tmpRead_m)
    {
        rtb_Switch37 = rtb_Sum2_n1;
    }

    /* End of Switch: '<S761>/Switch37' */

    /* Outport: '<Root>/VeOBCR_t_RemTimeToFullSOC' incorporates:
     *  Constant: '<S866>/Calib'
     *  Product: '<S761>/Product'
     *  SignalConversion generated from: '<S1>/VeOBCR_t_RemTimeToFullSOC'
     */
    (void)Rte_Write_VeOBCR_t_RemTimeToFullSOC_Value(rtb_Switch37 *
        KeOBCR_k_EstTmConvFactor);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
}

/* Output function */
FUNC(void, OBCR_CODE) OBCR_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/OBCR_FUNC_PwrOff'
     */
    /* Outport: '<Root>/EeOBCR_b_PluggedIn_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/EeOBCR_b_PluggedIn'
     */
    (void)Rte_Write_EeOBCR_b_PluggedIn_EeOBCR_b_PluggedIn(EeOBCR_b_PluggedIn);

    /* Outport: '<Root>/EeOBCR_t_EstTimeofChrg_Lv1_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/EeOBCR_t_EstTimeofChrg_Lv1'
     */
    (void)Rte_Write_EeOBCR_t_EstTimeofChrg_Lv1_EeOBCR_t_EstTimeofChrg_Lv1
        (EeOBCR_t_EstTimeofChrg_Lv1);

    /* Outport: '<Root>/EeOBCR_t_EstTimeofChrg_Lv2_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/EeOBCR_t_EstTimeofChrg_Lv2'
     */
    (void)Rte_Write_EeOBCR_t_EstTimeofChrg_Lv2_EeOBCR_t_EstTimeofChrg_Lv2
        (EeOBCR_t_EstTimeofChrg_Lv2);

    /* Outport: '<Root>/EeOBCR_e_ChargingSystemSts_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/EeOBCR_e_ChargingSystemSts'
     */
    (void)Rte_Write_EeOBCR_e_ChargingSystemSts_EeOBCR_e_ChargingSystemSts
        (EeOBCR_e_ChargingSystemSts);

    /* Outport: '<Root>/EeOBCR_e_ChargingLevel_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/EeOBCR_e_ChargingLevel'
     */
    (void)Rte_Write_EeOBCR_e_ChargingLevel_EeOBCR_e_ChargingLevel
        (EeOBCR_e_ChargingLevel);

    /* Outport: '<Root>/NeOBCR_b_GoodConnEst_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeOBCR_b_GoodConnEst'
     */
    (void)Rte_Write_NeOBCR_b_GoodConnEst_NeOBCR_b_GoodConnEst
        (OBCR_ac_DW.NeOBCR_b_GoodConnEst);

    /* Outport: '<Root>/NeOBCR_b_Lvl1Latch_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeOBCR_b_Lvl1Latch'
     */
    (void)Rte_Write_NeOBCR_b_Lvl1Latch_NeOBCR_b_Lvl1Latch
        (OBCR_ac_DW.NeOBCR_b_Lvl1Latch);

    /* Outport: '<Root>/NeOBCR_b_Lvl2Latch_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeOBCR_b_Lvl2Latch'
     */
    (void)Rte_Write_NeOBCR_b_Lvl2Latch_NeOBCR_b_Lvl2Latch
        (OBCR_ac_DW.NeOBCR_b_Lvl2Latch);

    /* Outport: '<Root>/NeOBCR_b_SmartEvse_Detected_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeOBCR_b_SmartEvse_Detected'
     */
    (void)Rte_Write_NeOBCR_b_SmartEvse_Detected_NeOBCR_b_SmartEvse_Detected
        (OBCR_ac_DW.NeOBCR_b_SmartEvse_Detected);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Output function */
FUNC(void, OBCR_CODE) OBCR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/OBCR_FUNC_PwrOn'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/DSM_Init'
     */
    /* DataStoreWrite: '<S869>/NeOBCR_b_SmartEvse_Detected' incorporates:
     *  Inport: '<Root>/NeOBCR_b_SmartEvse_Detected_PM_In'
     */
    (void)Rte_Read_NeOBCR_b_SmartEvse_Detected_Rx_NeOBCR_b_SmartEvse_Detected
        (&OBCR_ac_DW.NeOBCR_b_SmartEvse_Detected);

    /* DataStoreWrite: '<S869>/NeOBCR_b_Lvl2Latch' incorporates:
     *  Inport: '<Root>/NeOBCR_b_Lvl2Latch_PM_In'
     */
    (void)Rte_Read_NeOBCR_b_Lvl2Latch_Rx_NeOBCR_b_Lvl2Latch
        (&OBCR_ac_DW.NeOBCR_b_Lvl2Latch);

    /* DataStoreWrite: '<S869>/NeOBCR_b_Lvl1Latch' incorporates:
     *  Inport: '<Root>/NeOBCR_b_Lvl1Latch_PM_In'
     */
    (void)Rte_Read_NeOBCR_b_Lvl1Latch_Rx_NeOBCR_b_Lvl1Latch
        (&OBCR_ac_DW.NeOBCR_b_Lvl1Latch);

    /* DataStoreWrite: '<S869>/NeOBCR_b_GoodConnEst' incorporates:
     *  Inport: '<Root>/NeOBCR_b_GoodConnEst_PM_In'
     */
    (void)Rte_Read_NeOBCR_b_GoodConnEst_Rx_NeOBCR_b_GoodConnEst
        (&OBCR_ac_DW.NeOBCR_b_GoodConnEst);

    /* DataStoreWrite: '<S869>/EeOBCR_e_ChargingLevel' incorporates:
     *  Inport: '<Root>/EeOBCR_e_ChargingLevel_PM_In'
     */
    (void)Rte_Read_EeOBCR_e_ChargingLevel_Rx_EeOBCR_e_ChargingLevel
        ((&(EeOBCR_e_ChargingLevel)));

    /* DataStoreWrite: '<S869>/EeOBCR_e_ChargingSystemSts' incorporates:
     *  Inport: '<Root>/EeOBCR_e_ChargingSystemSts_PM_In'
     */
    (void)Rte_Read_EeOBCR_e_ChargingSystemSts_Rx_EeOBCR_e_ChargingSystemSts
        ((&(EeOBCR_e_ChargingSystemSts)));

    /* DataStoreWrite: '<S869>/EeOBCR_t_EstTimeofChrg_Lv2' incorporates:
     *  Inport: '<Root>/EeOBCR_t_EstTimeofChrg_Lv2_PM_In'
     */
    (void)Rte_Read_EeOBCR_t_EstTimeofChrg_Lv2_Rx_EeOBCR_t_EstTimeofChrg_Lv2
        ((&(EeOBCR_t_EstTimeofChrg_Lv2)));

    /* DataStoreWrite: '<S869>/EeOBCR_t_EstTimeofChrg_Lv1' incorporates:
     *  Inport: '<Root>/EeOBCR_t_EstTimeofChrg_Lv1_PM_In'
     */
    (void)Rte_Read_EeOBCR_t_EstTimeofChrg_Lv1_Rx_EeOBCR_t_EstTimeofChrg_Lv1
        ((&(EeOBCR_t_EstTimeofChrg_Lv1)));

    /* DataStoreWrite: '<S869>/EeOBCR_b_PluggedIn' incorporates:
     *  Inport: '<Root>/EeOBCR_b_PluggedIn_PM_In'
     */
    (void)Rte_Read_EeOBCR_b_PluggedIn_Rx_EeOBCR_b_PluggedIn
        ((&(EeOBCR_b_PluggedIn)));

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Subsystem1'
     */
    /* SignalConversion generated from: '<S871>/ChrgSysFault_EEPROM' */
    OBCR_ac_B.OutportBufferForChrgSysFault_EE = false;

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S870>/VeOBCR_e_ChrgrModeReq_Out_Init' incorporates:
     *  Constant: '<S870>/Const1'
     */
    OBCR_ac_B.OutportBufferForVeOBCR_e_ChrgrM = OBCR_ac_ConstB.Const1;

    /* SignalConversion generated from: '<S870>/VeOBCR_e_ChrgrTrsfMethodReq_Out_Init' incorporates:
     *  Constant: '<S870>/Const2'
     */
    OBCR_ac_B.OutportBufferForVeOBCR_e_ChrgrT = OBCR_ac_ConstB.Const2;

    /* SignalConversion generated from: '<S870>/VeOBCR_I_MaxAllowableCrntAC_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_I_MaxAll = 0.0F;

    /* SignalConversion generated from: '<S870>/VeOBCR_U_MinAllowableBattVolt_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_U_MinAll = 0.0F;

    /* SignalConversion generated from: '<S870>/VeOBCR_U_MaxAllowableBattVolt_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_U_MaxAll = 0.0F;

    /* SignalConversion generated from: '<S870>/VeOBCR_I_MaxAllowableCrntBatt_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_I_MaxA_p = 0.0F;

    /* SignalConversion generated from: '<S870>/VeOBCR_I_ChrgCrntReqDelta_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_I_ChrgCr = 0.0F;

    /* SignalConversion generated from: '<S870>/VeOBCR_U_ChrgVltReqDelta_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_U_ChrgVl = 0.0F;

    /* SignalConversion generated from: '<S870>/VeOBCR_b_EnblChrg_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_b_EnblCh = false;

    /* SignalConversion generated from: '<S870>/VeOBCR_b_CloseS2Cntctr_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_b_CloseS = false;

    /* SignalConversion generated from: '<S870>/VeOBCR_e_HVBattBalReq_Out_Init' incorporates:
     *  Constant: '<S870>/Const11'
     */
    OBCR_ac_B.OutportBufferForVeOBCR_e_HVBatt = OBCR_ac_ConstB.Const11;

    /* SignalConversion generated from: '<S870>/VeOBCR_b_RdyForShtDwn_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_b_RdyFor = false;

    /* SignalConversion generated from: '<S870>/VeOBCR_e_ChrgSysShtDwnFlt_Out_Init' incorporates:
     *  Constant: '<S870>/Const13'
     */
    OBCR_ac_B.OutportBufferForVeOBCR_e_ChrgSy = OBCR_ac_ConstB.Const13;

    /* SignalConversion generated from: '<S870>/VeOBCR_P_AvalPwrForThmr_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_P_AvalPw = 0.0F;

    /* SignalConversion generated from: '<S870>/VeOBCR_Pct_TargetSOC_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_Pct_Targ = 0.0F;

    /* SignalConversion generated from: '<S870>/VeOBCR_k_ChrgSysFault_Reason_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_k_ChrgSy = 0;

    /* SignalConversion generated from: '<S870>/VeOBCR_b_EnableCANC_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_b_Enable = false;

    /* SignalConversion generated from: '<S870>/VeOBCR_I_BattSideCurr_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_I_BattSi = 0.0F;

    /* SignalConversion generated from: '<S870>/VeOBCR_b_ChargeReq_ToBPCM_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_b_Charge = false;

    /* SignalConversion generated from: '<S870>/VeOBCR_b_HMIR_MSG5_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_b_HMIR_M = false;

    /* SignalConversion generated from: '<S870>/VeOBCR_b_HMIR_MSG6_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_b_HMIR_i = false;

    /* SignalConversion generated from: '<S870>/VeOBCR_b_SecureConEst_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_b_Secure = false;

    /* SignalConversion generated from: '<S870>/VeOBCR_e_ChrgPort_Req_Out_Init' incorporates:
     *  Constant: '<S870>/Const23'
     */
    OBCR_ac_B.OutportBufferForVeOBCR_e_ChrgPo = OBCR_ac_ConstB.Const23;

    /* SignalConversion generated from: '<S870>/VeOBCR_b_HMIR_MSG8_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_b_HMIR_b = false;

    /* SignalConversion generated from: '<S870>/VeOBCR_b_DVC_ChrgPort_Req_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_b_DVC_Ch = false;

    /* SignalConversion generated from: '<S870>/VeOBCR_b_Lock_Status_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_b_Lock_S = false;

    /* SignalConversion generated from: '<S870>/VeOBCR_b_ChrgPort_BCM_Cmd_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_b_ChrgPo = false;

    /* SignalConversion generated from: '<S870>/VeOBCR_b_SmartEvse_Dtctd_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_b_SmartE = false;

    /* SignalConversion generated from: '<S870>/VeOBCR_b_ValidPluginDetected_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_b_ValidP = false;

    /* SignalConversion generated from: '<S870>/VeOBCR_b_RelockTimerActive_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_b_Relock = false;

    /* SignalConversion generated from: '<S870>/VeOBCR_b_ChrgSysFaultBPCM_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_b_ChrgSy = false;

    /* SignalConversion generated from: '<S870>/VeOBCR_b_PluggedIn_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_b_Plugge = false;

    /* SignalConversion generated from: '<S870>/VeOBCR_P_Est_PowerBudget_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_P_Est_Po = 0.0F;

    /* SignalConversion generated from: '<S870>/VeOBCR_b_HMIR_MSG13_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_b_HMI_iv = false;

    /* SignalConversion generated from: '<S870>/VeOBCR_e_Service_Category_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_e_Servic = 0;

    /* SignalConversion generated from: '<S870>/VeOBCR_e_SelEnrgyTxType_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_e_SelEnr = 0;

    /* SignalConversion generated from: '<S870>/VeOBCR_b_EVReady_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_b_EVRead = false;

    /* SignalConversion generated from: '<S870>/VeOBCR_e_HCP_EVErrorCode_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_e_HCP_EV = 0;

    /* SignalConversion generated from: '<S870>/VeOBCR_I_EVMax_I_Limit_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_I_EVMax_ = 0.0F;

    /* SignalConversion generated from: '<S870>/VeOBCR_P_EVMax_P_Limit_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_P_EVMax_ = 0.0F;

    /* SignalConversion generated from: '<S870>/VeOBCR_U_EVMax_V_Limit_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_U_EVMax_ = 0.0F;

    /* SignalConversion generated from: '<S870>/VeOBCR_E_EVEnergyCapacity_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_E_EVEner = 0.0F;

    /* SignalConversion generated from: '<S870>/VeOBCR_E_EVEnergyRequest_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_E_EVEn_d = 0.0F;

    /* SignalConversion generated from: '<S870>/VeOBCR_b_DC_Isolation_Cmd_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_b_DC_Iso = false;

    /* SignalConversion generated from: '<S870>/VeOBCR_e_DC_CntctrCmd_Out_Init' incorporates:
     *  Constant: '<S870>/Const45'
     */
    OBCR_ac_B.OutportBufferForVeOBCR_e_DC_Cnt = OBCR_ac_ConstB.Const45;

    /* SignalConversion generated from: '<S870>/VeOBCR_U_EV_DCTargetVolt_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_U_EV_DCT = 0.0F;

    /* SignalConversion generated from: '<S870>/VeOBCR_b_WeldChkComplete_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_b_WeldCh = false;

    /* SignalConversion generated from: '<S870>/VeOBCR_b_RdyToChrgSt_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_b_RdyToC = false;

    /* SignalConversion generated from: '<S870>/VeOBCR_b_ChargingComplete_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_b_Chargi = false;

    /* SignalConversion generated from: '<S870>/VeOBCR_t_RemTimeToFullSOC_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_t_RemTim = 0.0F;

    /* SignalConversion generated from: '<S870>/VeOBCR_K_SelectedServiceID_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_K_Select = 0U;

    /* SignalConversion generated from: '<S870>/VeOBCR_e_SelPayOptn_Out_Init' incorporates:
     *  Constant: '<S870>/Const52'
     */
    OBCR_ac_B.OutportBufferForVeOBCR_e_SelPay = OBCR_ac_ConstB.Const52;

    /* SignalConversion generated from: '<S870>/VeOBCR_b_HCP_SessionStpCmd_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_b_HCP_Se = false;

    /* SignalConversion generated from: '<S870>/VeOBCR_e_HCP_DC_Retry_Out_Init' incorporates:
     *  Constant: '<S870>/Const54'
     */
    OBCR_ac_B.OutportBufferForVeOBCR_e_HCP_DC = OBCR_ac_ConstB.Const54;

    /* SignalConversion generated from: '<S870>/VeOBCR_e_ChargeType_Out_Init' incorporates:
     *  Constant: '<S870>/Const55'
     */
    OBCR_ac_B.OutportBufferForVeOBCR_e_Char_n = OBCR_ac_ConstB.Const55;

    /* SignalConversion generated from: '<S870>/VeOBCR_e_DCChrg_TestSts_Out_Init' incorporates:
     *  Constant: '<S870>/Const56'
     */
    OBCR_ac_B.OutportBufferForVeOBCR_e_DCChrg = OBCR_ac_ConstB.Const56;

    /* SignalConversion generated from: '<S870>/VeOBCR_K_ChargingFailure1_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_K_Chargi = 0;

    /* SignalConversion generated from: '<S870>/VeOBCR_K_ChargingFailure2_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_K_Char_p = 0;

    /* SignalConversion generated from: '<S870>/VeOBCR_K_ChargingFailure3_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_K_Char_c = 0;

    /* SignalConversion generated from: '<S870>/VeOBCR_K_ChargingFailure4_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_K_Char_d = 0;

    /* SignalConversion generated from: '<S870>/VeOBCR_K_ChargingFailure5_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_K_Char_m = 0;

    /* SignalConversion generated from: '<S870>/VeOBCR_b_ChrgPortReq_BSW_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_b_Chrg_e = false;

    /* SignalConversion generated from: '<S870>/VeOBCR_k_ChrgPortEnbl_BSW_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_k_ChrgPo = 0U;

    /* SignalConversion generated from: '<S870>/VeOBCR_t_EstTimeDCFastChrg_100_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_t_EstTim = 0.0F;

    /* SignalConversion generated from: '<S870>/VeOBCR_t_EstTimeDCFastChrg_80_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_t_EstT_f = 0.0F;

    /* SignalConversion generated from: '<S870>/VeOBCR_I_MaxAllowedCurr_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_I_MaxA_d = 0.0F;

    /* SignalConversion generated from: '<S870>/VeOBCR_e_ChrgSysStat_SF_Out_Init' incorporates:
     *  Constant: '<S870>/Const67'
     */
    OBCR_ac_B.OutportBufferForVeOBCR_e_Chrg_a = OBCR_ac_ConstB.Const67;

    /* SignalConversion generated from: '<S870>/VeOBCR_I_ChrgCurrEstSOC_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_I_ChrgCu = 0.0F;

    /* SignalConversion generated from: '<S870>/VeOBCR_b_DCChrgInitialization_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_b_DCChrg = false;

    /* SignalConversion generated from: '<S870>/VeOBCR_e_CellVolt_OOR_Out_Init' incorporates:
     *  Constant: '<S870>/Const70'
     */
    OBCR_ac_B.OutportBufferForVeOBCR_e_CellVo = OBCR_ac_ConstB.Const70;

    /* SignalConversion generated from: '<S870>/VeOBCR_e_ChrgCurr_OOR_Out_Init' incorporates:
     *  Constant: '<S870>/Const71'
     */
    OBCR_ac_B.OutportBufferForVeOBCR_e_ChrgCu = OBCR_ac_ConstB.Const71;

    /* SignalConversion generated from: '<S870>/VeOBCR_e_BattTemp_OOR_Out_Init' incorporates:
     *  Constant: '<S870>/Const72'
     */
    OBCR_ac_B.OutportBufferForVeOBCR_e_BattTe = OBCR_ac_ConstB.Const72;

    /* SignalConversion generated from: '<S870>/VeOBCR_e_SOC_OOR_Out_Init' incorporates:
     *  Constant: '<S870>/Const73'
     */
    OBCR_ac_B.OutportBufferForVeOBCR_e_SOC_OO = OBCR_ac_ConstB.Const73;

    /* SignalConversion generated from: '<S870>/VeOBCR_b_CPIM_Error_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_b_CPIM_E = false;

    /* SignalConversion generated from: '<S870>/VeOBCR_b_CPIM_OT_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_b_CPIM_O = false;

    /* SignalConversion generated from: '<S870>/VeOBCR_Pct_BattFullSOC_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_Pct_Batt = 0.0F;

    /* SignalConversion generated from: '<S870>/VeOBCR_b_BattOverVolt_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_b_BattOv = false;

    /* SignalConversion generated from: '<S870>/VeOBCR_b_BattUnderVolt_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_b_BattUn = false;

    /* SignalConversion generated from: '<S870>/VeOBCR_e_BattPckVoltRchd_BST_Out_Init' incorporates:
     *  Constant: '<S870>/Const79'
     */
    OBCR_ac_B.OutportBufferForVeOBCR_e_BattPc = OBCR_ac_ConstB.Const79;

    /* SignalConversion generated from: '<S870>/VeOBCR_e_SOCRchd_BST_Out_Init' incorporates:
     *  Constant: '<S870>/Const80'
     */
    OBCR_ac_B.OutportBufferForVeOBCR_e_SOCRch = OBCR_ac_ConstB.Const80;

    /* SignalConversion generated from: '<S870>/VeOBCR_b_DCGBTReadyToCharge_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_b_DCGBTR = false;

    /* SignalConversion generated from: '<S870>/VeOBCR_b_DCGBTEVChrgPermit_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_b_DCGBTE = false;

    /* SignalConversion generated from: '<S870>/VeOBCR_e_MaxCellVoltRchd_BST_Out_Init' incorporates:
     *  Constant: '<S870>/Const83'
     */
    OBCR_ac_B.OutportBufferForVeOBCR_e_MaxCel = OBCR_ac_ConstB.Const83;

    /* SignalConversion generated from: '<S870>/VeOBCR_P_PLS_PwrLev1_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_P_PLS_Pw = 0.0F;

    /* SignalConversion generated from: '<S870>/VeOBCR_P_PLS_PwrLev2_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_P_PLS__k = 0.0F;

    /* SignalConversion generated from: '<S870>/VeOBCR_P_PLS_PwrLev3_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_P_PLS__h = 0.0F;

    /* SignalConversion generated from: '<S870>/VeOBCR_P_PLS_PwrLev4_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_P_PLS__b = 0.0F;

    /* SignalConversion generated from: '<S870>/VeOBCR_P_PLS_PwrLev5_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_P_PLS_ks = 0.0F;

    /* SignalConversion generated from: '<S870>/VeOBCR_T_GBT_MaxBattTempAllwd_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_T_GBT_Ma = 0.0F;

    /* SignalConversion generated from: '<S870>/VeOBCR_e_GBT_ChrgCntrolMethod_Out_Init' incorporates:
     *  Constant: '<S870>/Const90'
     */
    OBCR_ac_B.OutportBufferForVeOBCR_e_GBT__a = OBCR_ac_ConstB.Const90;

    /* SignalConversion generated from: '<S870>/VeOBCR_e_GBT_ChrgrInterrupt_Out_Init' incorporates:
     *  Constant: '<S870>/Const91'
     */
    OBCR_ac_B.OutportBufferForVeOBCR_e_GBT_Ch = OBCR_ac_ConstB.Const91;

    /* SignalConversion generated from: '<S870>/VeOBCR_b_EnablePowerTransfer_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_b_Enab_o = false;

    /* SignalConversion generated from: '<S870>/VeOBCR_b_SecureConnV2L_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_b_Secu_o = false;

    /* SignalConversion generated from: '<S870>/VeOBCR_e_PwrLevSet_Out_Init' incorporates:
     *  Constant: '<S870>/Const94'
     */
    OBCR_ac_B.OutportBufferForVeOBCR_e_PwrLev = OBCR_ac_ConstB.Const94;

    /* SignalConversion generated from: '<S870>/VeOBCR_b_BPCM_Rdy_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_b_BPCM_R = false;

    /* SignalConversion generated from: '<S870>/VeOBCR_e_SelectAppProtocol_Out_Init' incorporates:
     *  Constant: '<S870>/Const96'
     */
    OBCR_ac_B.OutportBufferForVeOBCR_e_Select = OBCR_ac_ConstB.Const96;

    /* SignalConversion generated from: '<S870>/VeOBCR_b_SelectSecProtocol_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_b_Select = false;

    /* SignalConversion generated from: '<S870>/VeOBCR_e_ChargeProgress_Out_Init' incorporates:
     *  Constant: '<S870>/Const98'
     */
    OBCR_ac_B.OutportBufferForVeOBCR_e_Char_f = OBCR_ac_ConstB.Const98;

    /* SignalConversion generated from: '<S870>/VeOBCR_e_DC_ChrgTyprCmd_Out_Init' incorporates:
     *  Constant: '<S870>/Const99'
     */
    OBCR_ac_B.OutportBufferForVeOBCR_e_DC_Chr = OBCR_ac_ConstB.Const99;

    /* SignalConversion generated from: '<S870>/VeOBCR_e_ChargeportLock_Sts_Out_Init' incorporates:
     *  Constant: '<S870>/Const100'
     */
    OBCR_ac_B.OutportBufferForVeOBCR_e_Charge = OBCR_ac_ConstB.Const100;

    /* SignalConversion generated from: '<S870>/VeOBCR_b_RacePrepBattLvlSts_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_b_RacePr = false;

    /* SignalConversion generated from: '<S870>/VeOBCR_t_RemTimeToBulkSOC_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_t_RemT_h = 0.0F;

    /* SignalConversion generated from: '<S870>/VeOBCR_Cnt_PlugIn_Reason_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_Cnt_Plug = 1;

    /* SignalConversion generated from: '<S870>/VaOBCR_Cnt_PlugIn_Vector_Out_Init' */
    OBCR_ac_B.OutportBufferForVaOBCR_Cnt_Plug[0] = OBCR_ac_ConstB.Const104;
    OBCR_ac_B.OutportBufferForVaOBCR_Cnt_Plug[1] = OBCR_ac_ConstB.Const105;
    OBCR_ac_B.OutportBufferForVaOBCR_Cnt_Plug[2] = OBCR_ac_ConstB.Const106;
    OBCR_ac_B.OutportBufferForVaOBCR_Cnt_Plug[3] = OBCR_ac_ConstB.Const107;
    OBCR_ac_B.OutportBufferForVaOBCR_Cnt_Plug[4] = OBCR_ac_ConstB.Const108;
    OBCR_ac_B.OutportBufferForVaOBCR_Cnt_Plug[5] = OBCR_ac_ConstB.Const109;
    OBCR_ac_B.OutportBufferForVaOBCR_Cnt_Plug[6] = OBCR_ac_ConstB.Const110;
    OBCR_ac_B.OutportBufferForVaOBCR_Cnt_Plug[7] = OBCR_ac_ConstB.Const111;
    OBCR_ac_B.OutportBufferForVaOBCR_Cnt_Plug[8] = OBCR_ac_ConstB.Const112;
    OBCR_ac_B.OutportBufferForVaOBCR_Cnt_Plug[9] = OBCR_ac_ConstB.Const113;
    OBCR_ac_B.OutportBufferForVaOBCR_Cnt_Plug[10] = OBCR_ac_ConstB.Const114;
    OBCR_ac_B.OutportBufferForVaOBCR_Cnt_Plug[11] = OBCR_ac_ConstB.Const115;
    OBCR_ac_B.OutportBufferForVaOBCR_Cnt_Plug[12] = OBCR_ac_ConstB.Const116;
    OBCR_ac_B.OutportBufferForVaOBCR_Cnt_Plug[13] = OBCR_ac_ConstB.Const117;
    OBCR_ac_B.OutportBufferForVaOBCR_Cnt_Plug[14] = OBCR_ac_ConstB.Const118;

    /* SignalConversion generated from: '<S870>/VeOBCR_b_ChrgrLOC_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_b_ChrgrL = false;

    /* SignalConversion generated from: '<S870>/VeOBCR_b_PlugInLock_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_b_PlugIn = false;

    /* SignalConversion generated from: '<S870>/VaOBCR_b_NCR_Signals_Out_Init' */
    OBCR_ac_B.OutportBufferForVaOBCR_b_NCR_Si[0] = OBCR_ac_ConstB.Const121;
    OBCR_ac_B.OutportBufferForVaOBCR_b_NCR_Si[1] = OBCR_ac_ConstB.Const122;
    OBCR_ac_B.OutportBufferForVaOBCR_b_NCR_Si[2] = OBCR_ac_ConstB.Const123;
    OBCR_ac_B.OutportBufferForVaOBCR_b_NCR_Si[3] = OBCR_ac_ConstB.Const124;
    OBCR_ac_B.OutportBufferForVaOBCR_b_NCR_Si[4] = OBCR_ac_ConstB.Const125;
    OBCR_ac_B.OutportBufferForVaOBCR_b_NCR_Si[5] = OBCR_ac_ConstB.Const126;
    OBCR_ac_B.OutportBufferForVaOBCR_b_NCR_Si[6] = OBCR_ac_ConstB.Const127;
    OBCR_ac_B.OutportBufferForVaOBCR_b_NCR_Si[7] = OBCR_ac_ConstB.Const128;
    OBCR_ac_B.OutportBufferForVaOBCR_b_NCR_Si[8] = OBCR_ac_ConstB.Const129;
    OBCR_ac_B.OutportBufferForVaOBCR_b_NCR_Si[9] = OBCR_ac_ConstB.Const130;
    OBCR_ac_B.OutportBufferForVaOBCR_b_NCR_Si[10] = OBCR_ac_ConstB.Const131;
    OBCR_ac_B.OutportBufferForVaOBCR_b_NCR_Si[11] = OBCR_ac_ConstB.Const132;
    OBCR_ac_B.OutportBufferForVaOBCR_b_NCR_Si[12] = OBCR_ac_ConstB.Const133;
    OBCR_ac_B.OutportBufferForVaOBCR_b_NCR_Si[13] = OBCR_ac_ConstB.Const134;
    OBCR_ac_B.OutportBufferForVaOBCR_b_NCR_Si[14] = OBCR_ac_ConstB.Const135;

    /* SignalConversion generated from: '<S870>/VeOBCR_Cnt_InitChecks_Reason_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_Cnt_Init = 0;

    /* SignalConversion generated from: '<S870>/VeOBCR_b_EnableChargeDC_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_b_Enab_e = false;

    /* SignalConversion generated from: '<S870>/VaOBCR_k_InitChecks_Vector_Out_Init' */
    OBCR_ac_B.OutportBufferForVaOBCR_k_InitCh[0] = OBCR_ac_ConstB.Const138;
    OBCR_ac_B.OutportBufferForVaOBCR_k_InitCh[1] = OBCR_ac_ConstB.Const139;
    OBCR_ac_B.OutportBufferForVaOBCR_k_InitCh[2] = OBCR_ac_ConstB.Const140;
    OBCR_ac_B.OutportBufferForVaOBCR_k_InitCh[3] = OBCR_ac_ConstB.Const141;
    OBCR_ac_B.OutportBufferForVaOBCR_k_InitCh[4] = OBCR_ac_ConstB.Const142;
    OBCR_ac_B.OutportBufferForVaOBCR_k_InitCh[5] = OBCR_ac_ConstB.Const143;
    OBCR_ac_B.OutportBufferForVaOBCR_k_InitCh[6] = OBCR_ac_ConstB.Const144;

    /* SignalConversion generated from: '<S870>/VeOBCR_Cnt_NCR_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_Cnt_NCR_ = 20;

    /* SignalConversion generated from: '<S870>/VeOBCR_b_EnblDsblProxPlg_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_b_EnblDs = false;

    /* SignalConversion generated from: '<S870>/VeOBCR_P_EVSEPwr_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_P_EVSEPw = 0.0F;

    /* SignalConversion generated from: '<S870>/VeOBCR_P_PowertoBattery_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_P_Powert = 0.0F;

    /* SignalConversion generated from: '<S870>/VeOBCR_q_BatteryAmpHrCap_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_q_Batter = 0.0F;

    /* SignalConversion generated from: '<S870>/VeOBCR_P_ActChargePowerLim_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_P_ActCha = 0.0F;

    /* SignalConversion generated from: '<S870>/VeOBCR_P_ActChargePower_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_P_ActC_g = 0.0F;

    /* SignalConversion generated from: '<S870>/VeOBCR_b_ActChargePowerLimFA_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_b_ActCha = false;

    /* SignalConversion generated from: '<S870>/VeOBCR_b_ActChargePowerFA_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_b_ActC_l = false;

    /* SignalConversion generated from: '<S870>/VeOBCR_b_PnCFailure_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_b_PnCFai = false;

    /* SignalConversion generated from: '<S870>/VeOBCR_b_PnCRetryFail_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_b_PnCRet = false;

    /* SignalConversion generated from: '<S870>/VeOBCR_e_Protocol_Priority1_Out_Init' incorporates:
     *  Constant: '<S870>/Const156'
     */
    OBCR_ac_B.OutportBufferForVeOBCR_e_Protoc = OBCR_ac_ConstB.Const156;

    /* SignalConversion generated from: '<S870>/VeOBCR_e_Protocol_Priority2_Out_Init' incorporates:
     *  Constant: '<S870>/Const157'
     */
    OBCR_ac_B.OutportBufferForVeOBCR_e_Prot_j = OBCR_ac_ConstB.Const157;

    /* SignalConversion generated from: '<S870>/VeOBCR_e_Protocol_Priority3_Out_Init' incorporates:
     *  Constant: '<S870>/Const158'
     */
    OBCR_ac_B.OutportBufferForVeOBCR_e_Prot_h = OBCR_ac_ConstB.Const158;

    /* SignalConversion generated from: '<S870>/VeOBCR_k_MaxEntriesSASScheduleTuple_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_k_MaxEnt = 0U;

    /* SignalConversion generated from: '<S870>/VeOBCR_d_ServiceScope_Out_Init' */
    OBCR_ac_B.OutportBufferForVeOBCR_d_Servic = 0U;

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Subsystem1'
     */
    /* Outport: '<Root>/VeOBCR_e_ChargingLevel' incorporates:
     *  DataStoreRead: '<S871>/Data Store Read5'
     *  DataTypeConversion: '<S876>/DataTypeConversion'
     *  SignalConversion generated from: '<S3>/ChargingLevel_EEPROM'
     */
    (void)Rte_Write_VeOBCR_e_ChargingLevel_Value((TeOBCR_e_ChargingLevel)
        EeOBCR_e_ChargingLevel);

    /* Outport: '<Root>/VeOBCR_e_ChargingSystemSts' incorporates:
     *  DataStoreRead: '<S871>/Data Store Read4'
     *  DataTypeConversion: '<S875>/DataTypeConversion'
     *  SignalConversion generated from: '<S3>/ChargingSystemSts_EEPROM'
     */
    (void)Rte_Write_VeOBCR_e_ChargingSystemSts_Value((TeOBCR_e_ChargingSystemSts)
        EeOBCR_e_ChargingSystemSts);

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* Outport: '<Root>/VeOBCR_b_ChrgSysFault' incorporates:
     *  SignalConversion generated from: '<S3>/ChrgSysFault_EEPROM'
     */
    (void)Rte_Write_VeOBCR_b_ChrgSysFault_Value
        (OBCR_ac_B.OutportBufferForChrgSysFault_EE);

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Subsystem1'
     */
    /* Outport: '<Root>/VeOBCR_t_EstTimeofChrg_Lv1' incorporates:
     *  DataStoreRead: '<S871>/Data Store Read3'
     *  SignalConversion generated from: '<S3>/EstTimeofChrg_Lv1_EEPROM'
     */
    (void)Rte_Write_VeOBCR_t_EstTimeofChrg_Lv1_Value(EeOBCR_t_EstTimeofChrg_Lv1);

    /* Outport: '<Root>/VeOBCR_t_EstTimeofChrg_Lv2' incorporates:
     *  DataStoreRead: '<S871>/Data Store Read2'
     *  SignalConversion generated from: '<S3>/EstTimeofChrg_Lv2_EEPROM'
     */
    (void)Rte_Write_VeOBCR_t_EstTimeofChrg_Lv2_Value(EeOBCR_t_EstTimeofChrg_Lv2);

    /* Outport: '<Root>/VeOBCR_b_PluggedIn_EEPROM' incorporates:
     *  DataStoreRead: '<S871>/Data Store Read'
     *  SignalConversion generated from: '<S3>/PluggedIn_EEPROM'
     */
    (void)Rte_Write_VeOBCR_b_PluggedIn_EEPROM_Value(EeOBCR_b_PluggedIn);

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* Outport: '<Root>/VaOBCR_Cnt_PlugIn_Vector' incorporates:
     *  SignalConversion generated from: '<S3>/VaOBCR_Cnt_PlugIn_Vector_Out_Init'
     */
    (void)Rte_Write_VaOBCR_Cnt_PlugIn_Vector_Value
        (OBCR_ac_B.OutportBufferForVaOBCR_Cnt_Plug);

    /* Outport: '<Root>/VaOBCR_b_NCR_Signals' incorporates:
     *  SignalConversion generated from: '<S3>/VaOBCR_b_NCR_Signals_Out_Init'
     */
    (void)Rte_Write_VaOBCR_b_NCR_Signals_Value
        (OBCR_ac_B.OutportBufferForVaOBCR_b_NCR_Si);

    /* Outport: '<Root>/VaOBCR_k_InitChecks_Vector' incorporates:
     *  SignalConversion generated from: '<S3>/VaOBCR_k_InitChecks_Vector_Out_Init'
     */
    (void)Rte_Write_VaOBCR_k_InitChecks_Vector_Value
        (OBCR_ac_B.OutportBufferForVaOBCR_k_InitCh);

    /* Outport: '<Root>/VeOBCR_Cnt_InitChecks_Reason' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_Cnt_InitChecks_Reason_Out_Init'
     */
    (void)Rte_Write_VeOBCR_Cnt_InitChecks_Reason_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_Cnt_Init);

    /* Outport: '<Root>/VeOBCR_Cnt_NCR' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_Cnt_NCR_Out_Init'
     */
    (void)Rte_Write_VeOBCR_Cnt_NCR_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_Cnt_NCR_);

    /* Outport: '<Root>/VeOBCR_Cnt_PlugIn_Reason' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_Cnt_PlugIn_Reason_Out_Init'
     */
    (void)Rte_Write_VeOBCR_Cnt_PlugIn_Reason_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_Cnt_Plug);

    /* Outport: '<Root>/VeOBCR_E_EVEnergyCapacity' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_E_EVEnergyCapacity_Out_Init'
     */
    (void)Rte_Write_VeOBCR_E_EVEnergyCapacity_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_E_EVEner);

    /* Outport: '<Root>/VeOBCR_E_EVEnergyRequest' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_E_EVEnergyRequest_Out_Init'
     */
    (void)Rte_Write_VeOBCR_E_EVEnergyRequest_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_E_EVEn_d);

    /* Outport: '<Root>/VeOBCR_I_BattSideCurr' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_I_BattSideCurr_Out_Init'
     */
    (void)Rte_Write_VeOBCR_I_BattSideCurr_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_I_BattSi);

    /* Outport: '<Root>/VeOBCR_I_ChrgCrntReqDelta' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_I_ChrgCrntReqDelta_Out_Init'
     */
    (void)Rte_Write_VeOBCR_I_ChrgCrntReqDelta_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_I_ChrgCr);

    /* Outport: '<Root>/VeOBCR_I_ChrgCurrEstSOC' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_I_ChrgCurrEstSOC_Out_Init'
     */
    (void)Rte_Write_VeOBCR_I_ChrgCurrEstSOC_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_I_ChrgCu);

    /* Outport: '<Root>/VeOBCR_I_EVMax_I_Limit' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_I_EVMax_I_Limit_Out_Init'
     */
    (void)Rte_Write_VeOBCR_I_EVMax_I_Limit_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_I_EVMax_);

    /* Outport: '<Root>/VeOBCR_I_MaxAllowableCrntAC' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_I_MaxAllowableCrntAC_Out_Init'
     */
    (void)Rte_Write_VeOBCR_I_MaxAllowableCrntAC_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_I_MaxAll);

    /* Outport: '<Root>/VeOBCR_I_MaxAllowableCrntBatt' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_I_MaxAllowableCrntBatt_Out_Init'
     */
    (void)Rte_Write_VeOBCR_I_MaxAllowableCrntBatt_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_I_MaxA_p);

    /* Outport: '<Root>/VeOBCR_I_MaxAllowedCurr' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_I_MaxAllowedCurr_Out_Init'
     */
    (void)Rte_Write_VeOBCR_I_MaxAllowedCurr_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_I_MaxA_d);

    /* Outport: '<Root>/VeOBCR_K_ChargingFailure1' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_K_ChargingFailure1_Out_Init'
     */
    (void)Rte_Write_VeOBCR_K_ChargingFailure1_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_K_Chargi);

    /* Outport: '<Root>/VeOBCR_K_ChargingFailure2' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_K_ChargingFailure2_Out_Init'
     */
    (void)Rte_Write_VeOBCR_K_ChargingFailure2_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_K_Char_p);

    /* Outport: '<Root>/VeOBCR_K_ChargingFailure3' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_K_ChargingFailure3_Out_Init'
     */
    (void)Rte_Write_VeOBCR_K_ChargingFailure3_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_K_Char_c);

    /* Outport: '<Root>/VeOBCR_K_ChargingFailure4' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_K_ChargingFailure4_Out_Init'
     */
    (void)Rte_Write_VeOBCR_K_ChargingFailure4_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_K_Char_d);

    /* Outport: '<Root>/VeOBCR_K_ChargingFailure5' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_K_ChargingFailure5_Out_Init'
     */
    (void)Rte_Write_VeOBCR_K_ChargingFailure5_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_K_Char_m);

    /* Outport: '<Root>/VeOBCR_K_SelectedServiceID' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_K_SelectedServiceID_Out_Init'
     */
    (void)Rte_Write_VeOBCR_K_SelectedServiceID_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_K_Select);

    /* Outport: '<Root>/VeOBCR_P_ActChargePowerLim' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_P_ActChargePowerLim_Out_Init'
     */
    (void)Rte_Write_VeOBCR_P_ActChargePowerLim_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_P_ActCha);

    /* Outport: '<Root>/VeOBCR_P_ActChargePower' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_P_ActChargePower_Out_Init'
     */
    (void)Rte_Write_VeOBCR_P_ActChargePower_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_P_ActC_g);

    /* Outport: '<Root>/VeOBCR_P_AvalPwrForThmr' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_P_AvalPwrForThmr_Out_Init'
     */
    (void)Rte_Write_VeOBCR_P_AvalPwrForThmr_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_P_AvalPw);

    /* Outport: '<Root>/VeOBCR_P_EVMax_P_Limit' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_P_EVMax_P_Limit_Out_Init'
     */
    (void)Rte_Write_VeOBCR_P_EVMax_P_Limit_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_P_EVMax_);

    /* Outport: '<Root>/VeOBCR_P_EVSEPwr' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_P_EVSEPwr_Out_Init'
     */
    (void)Rte_Write_VeOBCR_P_EVSEPwr_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_P_EVSEPw);

    /* Outport: '<Root>/VeOBCR_P_Est_PowerBudget' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_P_Est_PowerBudget_Out_Init'
     */
    (void)Rte_Write_VeOBCR_P_Est_PowerBudget_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_P_Est_Po);

    /* Outport: '<Root>/VeOBCR_P_PLS_PwrLev1' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_P_PLS_PwrLev1_Out_Init'
     */
    (void)Rte_Write_VeOBCR_P_PLS_PwrLev1_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_P_PLS_Pw);

    /* Outport: '<Root>/VeOBCR_P_PLS_PwrLev2' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_P_PLS_PwrLev2_Out_Init'
     */
    (void)Rte_Write_VeOBCR_P_PLS_PwrLev2_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_P_PLS__k);

    /* Outport: '<Root>/VeOBCR_P_PLS_PwrLev3' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_P_PLS_PwrLev3_Out_Init'
     */
    (void)Rte_Write_VeOBCR_P_PLS_PwrLev3_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_P_PLS__h);

    /* Outport: '<Root>/VeOBCR_P_PLS_PwrLev4' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_P_PLS_PwrLev4_Out_Init'
     */
    (void)Rte_Write_VeOBCR_P_PLS_PwrLev4_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_P_PLS__b);

    /* Outport: '<Root>/VeOBCR_P_PLS_PwrLev5' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_P_PLS_PwrLev5_Out_Init'
     */
    (void)Rte_Write_VeOBCR_P_PLS_PwrLev5_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_P_PLS_ks);

    /* Outport: '<Root>/VeOBCR_P_PowertoBattery' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_P_PowertoBattery_Out_Init'
     */
    (void)Rte_Write_VeOBCR_P_PowertoBattery_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_P_Powert);

    /* Outport: '<Root>/VeOBCR_Pct_BattFullSOC' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_Pct_BattFullSOC_Out_Init'
     */
    (void)Rte_Write_VeOBCR_Pct_BattFullSOC_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_Pct_Batt);

    /* Outport: '<Root>/VeOBCR_Pct_TargetSOC' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_Pct_TargetSOC_Out_Init'
     */
    (void)Rte_Write_VeOBCR_Pct_TargetSOC_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_Pct_Targ);

    /* Outport: '<Root>/VeOBCR_T_GBT_MaxBattTempAllwd' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_T_GBT_MaxBattTempAllwd_Out_Init'
     */
    (void)Rte_Write_VeOBCR_T_GBT_MaxBattTempAllwd_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_T_GBT_Ma);

    /* Outport: '<Root>/VeOBCR_U_ChrgVltReqDelta' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_U_ChrgVltReqDelta_Out_Init'
     */
    (void)Rte_Write_VeOBCR_U_ChrgVltReqDelta_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_U_ChrgVl);

    /* Outport: '<Root>/VeOBCR_U_EVMax_V_Limit' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_U_EVMax_V_Limit_Out_Init'
     */
    (void)Rte_Write_VeOBCR_U_EVMax_V_Limit_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_U_EVMax_);

    /* Outport: '<Root>/VeOBCR_U_EV_DCTargetVolt' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_U_EV_DCTargetVolt_Out_Init'
     */
    (void)Rte_Write_VeOBCR_U_EV_DCTargetVolt_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_U_EV_DCT);

    /* Outport: '<Root>/VeOBCR_U_MaxAllowableBattVolt' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_U_MaxAllowableBattVolt_Out_Init'
     */
    (void)Rte_Write_VeOBCR_U_MaxAllowableBattVolt_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_U_MaxAll);

    /* Outport: '<Root>/VeOBCR_U_MinAllowableBattVolt' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_U_MinAllowableBattVolt_Out_Init'
     */
    (void)Rte_Write_VeOBCR_U_MinAllowableBattVolt_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_U_MinAll);

    /* Outport: '<Root>/VeOBCR_b_ActChargePowerFA' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_b_ActChargePowerFA_Out_Init'
     */
    (void)Rte_Write_VeOBCR_b_ActChargePowerFA_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_b_ActC_l);

    /* Outport: '<Root>/VeOBCR_b_ActChargePowerLimFA' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_b_ActChargePowerLimFA_Out_Init'
     */
    (void)Rte_Write_VeOBCR_b_ActChargePowerLimFA_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_b_ActCha);

    /* Outport: '<Root>/VeOBCR_b_BPCM_Rdy' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_b_BPCM_Rdy_Out_Init'
     */
    (void)Rte_Write_VeOBCR_b_BPCM_Rdy_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_b_BPCM_R);

    /* Outport: '<Root>/VeOBCR_b_BattOverVolt' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_b_BattOverVolt_Out_Init'
     */
    (void)Rte_Write_VeOBCR_b_BattOverVolt_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_b_BattOv);

    /* Outport: '<Root>/VeOBCR_b_BattUnderVolt' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_b_BattUnderVolt_Out_Init'
     */
    (void)Rte_Write_VeOBCR_b_BattUnderVolt_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_b_BattUn);

    /* Outport: '<Root>/VeOBCR_b_CPIM_Error' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_b_CPIM_Error_Out_Init'
     */
    (void)Rte_Write_VeOBCR_b_CPIM_Error_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_b_CPIM_E);

    /* Outport: '<Root>/VeOBCR_b_CPIM_OT' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_b_CPIM_OT_Out_Init'
     */
    (void)Rte_Write_VeOBCR_b_CPIM_OT_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_b_CPIM_O);

    /* Outport: '<Root>/VeOBCR_b_ChargeReq_ToBPCM' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_b_ChargeReq_ToBPCM_Out_Init'
     */
    (void)Rte_Write_VeOBCR_b_ChargeReq_ToBPCM_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_b_Charge);

    /* Outport: '<Root>/VeOBCR_b_ChargingComplete' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_b_ChargingComplete_Out_Init'
     */
    (void)Rte_Write_VeOBCR_b_ChargingComplete_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_b_Chargi);

    /* Outport: '<Root>/VeOBCR_b_ChrgPortReq_BSW' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_b_ChrgPortReq_BSW_Out_Init'
     */
    (void)Rte_Write_VeOBCR_b_ChrgPortReq_BSW_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_b_Chrg_e);

    /* Outport: '<Root>/VeOBCR_b_ChrgPort_BCM_Cmd' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_b_ChrgPort_BCM_Cmd_Out_Init'
     */
    (void)Rte_Write_VeOBCR_b_ChrgPort_BCM_Cmd_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_b_ChrgPo);

    /* Outport: '<Root>/VeOBCR_b_ChrgSysFaultBPCM' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_b_ChrgSysFaultBPCM_Out_Init'
     */
    (void)Rte_Write_VeOBCR_b_ChrgSysFaultBPCM_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_b_ChrgSy);

    /* Outport: '<Root>/VeOBCR_b_ChrgrLOC' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_b_ChrgrLOC_Out_Init'
     */
    (void)Rte_Write_VeOBCR_b_ChrgrLOC_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_b_ChrgrL);

    /* Outport: '<Root>/VeOBCR_b_CloseS2Cntctr' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_b_CloseS2Cntctr_Out_Init'
     */
    (void)Rte_Write_VeOBCR_b_CloseS2Cntctr_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_b_CloseS);

    /* Outport: '<Root>/VeOBCR_b_DCChrgInitialization' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_b_DCChrgInitialization_Out_Init'
     */
    (void)Rte_Write_VeOBCR_b_DCChrgInitialization_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_b_DCChrg);

    /* Outport: '<Root>/VeOBCR_b_DCGBTEVChrgPermit' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_b_DCGBTEVChrgPermit_Out_Init'
     */
    (void)Rte_Write_VeOBCR_b_DCGBTEVChrgPermit_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_b_DCGBTE);

    /* Outport: '<Root>/VeOBCR_b_DCGBTReadyToCharge' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_b_DCGBTReadyToCharge_Out_Init'
     */
    (void)Rte_Write_VeOBCR_b_DCGBTReadyToCharge_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_b_DCGBTR);

    /* Outport: '<Root>/VeOBCR_b_DC_Isolation_Cmd' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_b_DC_Isolation_Cmd_Out_Init'
     */
    (void)Rte_Write_VeOBCR_b_DC_Isolation_Cmd_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_b_DC_Iso);

    /* Outport: '<Root>/VeOBCR_b_DVC_ChrgPort_Req' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_b_DVC_ChrgPort_Req_Out_Init'
     */
    (void)Rte_Write_VeOBCR_b_DVC_ChrgPort_Req_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_b_DVC_Ch);

    /* Outport: '<Root>/VeOBCR_b_EVReady' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_b_EVReady_Out_Init'
     */
    (void)Rte_Write_VeOBCR_b_EVReady_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_b_EVRead);

    /* Outport: '<Root>/VeOBCR_b_EnableCANC' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_b_EnableCANC_Out_Init'
     */
    (void)Rte_Write_VeOBCR_b_EnableCANC_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_b_Enable);

    /* Outport: '<Root>/VeOBCR_b_EnableChargeDC' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_b_EnableChargeDC_Out_Init'
     */
    (void)Rte_Write_VeOBCR_b_EnableChargeDC_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_b_Enab_e);

    /* Outport: '<Root>/VeOBCR_b_EnablePowerTransfer' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_b_EnablePowerTransfer_Out_Init'
     */
    (void)Rte_Write_VeOBCR_b_EnablePowerTransfer_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_b_Enab_o);

    /* Outport: '<Root>/VeOBCR_b_EnblChrg' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_b_EnblChrg_Out_Init'
     */
    (void)Rte_Write_VeOBCR_b_EnblChrg_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_b_EnblCh);

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Sub_Out_Init'
     */
    /* Outport: '<Root>/VeOBCR_b_EnblDC_GBT' incorporates:
     *  Constant: '<S872>/Constant'
     *  Constant: '<S873>/Calib'
     *  Constant: '<S874>/Calib'
     *  Logic: '<S870>/Logical1'
     *  RelationalOperator: '<S870>/Comparison2'
     *  SignalConversion generated from: '<S3>/VeOBCR_b_EnblDC_GBT_Out_Init'
     */
    (void)Rte_Write_VeOBCR_b_EnblDC_GBT_Value((((uint32)
        KeOBCR_e_InterMarketsSelection) == CeOBCR_e_China) &&
        (HeOBCR_b_EnableDCGBT));

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* Outport: '<Root>/VeOBCR_b_EnblDsblProxPlg' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_b_EnblDsblProxPlg_Out_Init'
     */
    (void)Rte_Write_VeOBCR_b_EnblDsblProxPlg_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_b_EnblDs);

    /* Outport: '<Root>/VeOBCR_b_HCP_SessionStpCmd' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_b_HCP_SessionStpCmd_Out_Init'
     */
    (void)Rte_Write_VeOBCR_b_HCP_SessionStpCmd_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_b_HCP_Se);

    /* Outport: '<Root>/VeOBCR_b_HMIR_MSG13' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_b_HMIR_MSG13_Out_Init'
     */
    (void)Rte_Write_VeOBCR_b_HMIR_MSG13_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_b_HMI_iv);

    /* Outport: '<Root>/VeOBCR_b_HMIR_MSG5' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_b_HMIR_MSG5_Out_Init'
     */
    (void)Rte_Write_VeOBCR_b_HMIR_MSG5_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_b_HMIR_M);

    /* Outport: '<Root>/VeOBCR_b_HMIR_MSG6' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_b_HMIR_MSG6_Out_Init'
     */
    (void)Rte_Write_VeOBCR_b_HMIR_MSG6_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_b_HMIR_i);

    /* Outport: '<Root>/VeOBCR_b_HMIR_MSG8' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_b_HMIR_MSG8_Out_Init'
     */
    (void)Rte_Write_VeOBCR_b_HMIR_MSG8_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_b_HMIR_b);

    /* Outport: '<Root>/VeOBCR_b_Lock_Status' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_b_Lock_Status_Out_Init'
     */
    (void)Rte_Write_VeOBCR_b_Lock_Status_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_b_Lock_S);

    /* Outport: '<Root>/VeOBCR_b_PlugInLock' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_b_PlugInLock_Out_Init'
     */
    (void)Rte_Write_VeOBCR_b_PlugInLock_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_b_PlugIn);

    /* Outport: '<Root>/VeOBCR_b_PluggedIn' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_b_PluggedIn_Out_Init'
     */
    (void)Rte_Write_VeOBCR_b_PluggedIn_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_b_Plugge);

    /* Outport: '<Root>/VeOBCR_b_PnCFailure' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_b_PnCFailure_Out_Init'
     */
    (void)Rte_Write_VeOBCR_b_PnCFailure_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_b_PnCFai);

    /* Outport: '<Root>/VeOBCR_b_PnCRetryFail' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_b_PnCRetryFail_Out_Init'
     */
    (void)Rte_Write_VeOBCR_b_PnCRetryFail_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_b_PnCRet);

    /* Outport: '<Root>/VeOBCR_b_RacePrepBattLvlSts' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_b_RacePrepBattLvlSts_Out_Init'
     */
    (void)Rte_Write_VeOBCR_b_RacePrepBattLvlSts_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_b_RacePr);

    /* Outport: '<Root>/VeOBCR_b_RdyForShtDwn' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_b_RdyForShtDwn_Out_Init'
     */
    (void)Rte_Write_VeOBCR_b_RdyForShtDwn_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_b_RdyFor);

    /* Outport: '<Root>/VeOBCR_b_RdyToChrgSt' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_b_RdyToChrgSt_Out_Init'
     */
    (void)Rte_Write_VeOBCR_b_RdyToChrgSt_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_b_RdyToC);

    /* Outport: '<Root>/VeOBCR_b_RelockTimerActive' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_b_RelockTimerActive_Out_Init'
     */
    (void)Rte_Write_VeOBCR_b_RelockTimerActive_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_b_Relock);

    /* Outport: '<Root>/VeOBCR_b_SecureConEst' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_b_SecureConEst_Out_Init'
     */
    (void)Rte_Write_VeOBCR_b_SecureConEst_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_b_Secure);

    /* Outport: '<Root>/VeOBCR_b_SecureConnV2L' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_b_SecureConnV2L_Out_Init'
     */
    (void)Rte_Write_VeOBCR_b_SecureConnV2L_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_b_Secu_o);

    /* Outport: '<Root>/VeOBCR_b_SelectSecProtocol' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_b_SelectSecProtocol_Out_Init'
     */
    (void)Rte_Write_VeOBCR_b_SelectSecProtocol_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_b_Select);

    /* Outport: '<Root>/VeOBCR_b_SmartEvse_Dtctd' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_b_SmartEvse_Dtctd_Out_Init'
     */
    (void)Rte_Write_VeOBCR_b_SmartEvse_Dtctd_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_b_SmartE);

    /* Outport: '<Root>/VeOBCR_b_ValidPluginDetected' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_b_ValidPluginDetected_Out_Init'
     */
    (void)Rte_Write_VeOBCR_b_ValidPluginDetected_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_b_ValidP);

    /* Outport: '<Root>/VeOBCR_b_WeldChkComplete' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_b_WeldChkComplete_Out_Init'
     */
    (void)Rte_Write_VeOBCR_b_WeldChkComplete_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_b_WeldCh);

    /* Outport: '<Root>/VeOBCR_d_ServiceScope' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_d_ServiceScope_Out_Init'
     */
    (void)Rte_Write_VeOBCR_d_ServiceScope_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_d_Servic);

    /* Outport: '<Root>/VeOBCR_e_BattPckVoltRchd_BST' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_e_BattPckVoltRchd_BST_Out_Init'
     *  SignalConversion generated from: '<S870>/VeOBCR_e_BattPckVoltRchd_BST_Out_Init'
     */
    (void)Rte_Write_VeOBCR_e_BattPckVoltRchd_BST_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_e_BattPc);

    /* Outport: '<Root>/VeOBCR_e_BattTemp_OOR' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_e_BattTemp_OOR_Out_Init'
     *  SignalConversion generated from: '<S870>/VeOBCR_e_BattTemp_OOR_Out_Init'
     */
    (void)Rte_Write_VeOBCR_e_BattTemp_OOR_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_e_BattTe);

    /* Outport: '<Root>/VeOBCR_e_CellVolt_OOR' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_e_CellVolt_OOR_Out_Init'
     *  SignalConversion generated from: '<S870>/VeOBCR_e_CellVolt_OOR_Out_Init'
     */
    (void)Rte_Write_VeOBCR_e_CellVolt_OOR_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_e_CellVo);

    /* Outport: '<Root>/VeOBCR_e_ChargeProgress' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_e_ChargeProgress_Out_Init'
     *  SignalConversion generated from: '<S870>/VeOBCR_e_ChargeProgress_Out_Init'
     */
    (void)Rte_Write_VeOBCR_e_ChargeProgress_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_e_Char_f);

    /* Outport: '<Root>/VeOBCR_e_ChargeType' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_e_ChargeType_Out_Init'
     *  SignalConversion generated from: '<S870>/VeOBCR_e_ChargeType_Out_Init'
     */
    (void)Rte_Write_VeOBCR_e_ChargeType_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_e_Char_n);

    /* Outport: '<Root>/VeOBCR_e_ChargeportLock_Sts' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_e_ChargeportLock_Sts_Out_Init'
     *  SignalConversion generated from: '<S870>/VeOBCR_e_ChargeportLock_Sts_Out_Init'
     */
    (void)Rte_Write_VeOBCR_e_ChargeportLock_Sts_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_e_Charge);

    /* Outport: '<Root>/VeOBCR_e_ChrgCurr_OOR' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_e_ChrgCurr_OOR_Out_Init'
     *  SignalConversion generated from: '<S870>/VeOBCR_e_ChrgCurr_OOR_Out_Init'
     */
    (void)Rte_Write_VeOBCR_e_ChrgCurr_OOR_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_e_ChrgCu);

    /* Outport: '<Root>/VeOBCR_e_ChrgPort_Req' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_e_ChrgPort_Req_Out_Init'
     *  SignalConversion generated from: '<S870>/VeOBCR_e_ChrgPort_Req_Out_Init'
     */
    (void)Rte_Write_VeOBCR_e_ChrgPort_Req_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_e_ChrgPo);

    /* Outport: '<Root>/VeOBCR_e_ChrgSysShtDwnFlt' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_e_ChrgSysShtDwnFlt_Out_Init'
     *  SignalConversion generated from: '<S870>/VeOBCR_e_ChrgSysShtDwnFlt_Out_Init'
     */
    (void)Rte_Write_VeOBCR_e_ChrgSysShtDwnFlt_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_e_ChrgSy);

    /* Outport: '<Root>/VeOBCR_e_ChrgSysStat_SF' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_e_ChrgSysStat_SF_Out_Init'
     *  SignalConversion generated from: '<S870>/VeOBCR_e_ChrgSysStat_SF_Out_Init'
     */
    (void)Rte_Write_VeOBCR_e_ChrgSysStat_SF_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_e_Chrg_a);

    /* Outport: '<Root>/VeOBCR_e_ChrgrModeReq' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_e_ChrgrModeReq_Out_Init'
     *  SignalConversion generated from: '<S870>/VeOBCR_e_ChrgrModeReq_Out_Init'
     */
    (void)Rte_Write_VeOBCR_e_ChrgrModeReq_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_e_ChrgrM);

    /* Outport: '<Root>/VeOBCR_e_ChrgrTrsfMethodReq' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_e_ChrgrTrsfMethodReq_Out_Init'
     *  SignalConversion generated from: '<S870>/VeOBCR_e_ChrgrTrsfMethodReq_Out_Init'
     */
    (void)Rte_Write_VeOBCR_e_ChrgrTrsfMethodReq_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_e_ChrgrT);

    /* Outport: '<Root>/VeOBCR_e_DCChrg_TestSts' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_e_DCChrg_TestSts_Out_Init'
     *  SignalConversion generated from: '<S870>/VeOBCR_e_DCChrg_TestSts_Out_Init'
     */
    (void)Rte_Write_VeOBCR_e_DCChrg_TestSts_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_e_DCChrg);

    /* Outport: '<Root>/VeOBCR_e_DC_ChrgTypeCmd' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_e_DC_ChrgTypeCmd_Out_Init'
     *  SignalConversion generated from: '<S870>/VeOBCR_e_DC_ChrgTyprCmd_Out_Init'
     */
    (void)Rte_Write_VeOBCR_e_DC_ChrgTypeCmd_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_e_DC_Chr);

    /* Outport: '<Root>/VeOBCR_e_DC_CntctrCmd' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_e_DC_CntctrCmd_Out_Init'
     *  SignalConversion generated from: '<S870>/VeOBCR_e_DC_CntctrCmd_Out_Init'
     */
    (void)Rte_Write_VeOBCR_e_DC_CntctrCmd_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_e_DC_Cnt);

    /* Outport: '<Root>/VeOBCR_e_GBT_ChrgCntrolMethod' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_e_GBT_ChrgCntrolMethod_Out_Init'
     *  SignalConversion generated from: '<S870>/VeOBCR_e_GBT_ChrgCntrolMethod_Out_Init'
     */
    (void)Rte_Write_VeOBCR_e_GBT_ChrgCntrolMethod_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_e_GBT__a);

    /* Outport: '<Root>/VeOBCR_e_GBT_ChrgrInterrupt' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_e_GBT_ChrgrInterrupt_Out_Init'
     *  SignalConversion generated from: '<S870>/VeOBCR_e_GBT_ChrgrInterrupt_Out_Init'
     */
    (void)Rte_Write_VeOBCR_e_GBT_ChrgrInterrupt_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_e_GBT_Ch);

    /* Outport: '<Root>/VeOBCR_e_HCP_DC_Retry' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_e_HCP_DC_Retry_Out_Init'
     *  SignalConversion generated from: '<S870>/VeOBCR_e_HCP_DC_Retry_Out_Init'
     */
    (void)Rte_Write_VeOBCR_e_HCP_DC_Retry_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_e_HCP_DC);

    /* Outport: '<Root>/VeOBCR_e_HCP_EVErrorCode' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_e_HCP_EVErrorCode_Out_Init'
     */
    (void)Rte_Write_VeOBCR_e_HCP_EVErrorCode_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_e_HCP_EV);

    /* Outport: '<Root>/VeOBCR_e_HVBattBalReq' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_e_HVBattBalReq_Out_Init'
     *  SignalConversion generated from: '<S870>/VeOBCR_e_HVBattBalReq_Out_Init'
     */
    (void)Rte_Write_VeOBCR_e_HVBattBalReq_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_e_HVBatt);

    /* Outport: '<Root>/VeOBCR_e_MaxCellVoltRchd_BST' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_e_MaxCellVoltRchd_BST_Out_Init'
     *  SignalConversion generated from: '<S870>/VeOBCR_e_MaxCellVoltRchd_BST_Out_Init'
     */
    (void)Rte_Write_VeOBCR_e_MaxCellVoltRchd_BST_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_e_MaxCel);

    /* Outport: '<Root>/VeOBCR_e_Protocol_Priority1' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_e_Protocol_Priority1_Out_Init'
     *  SignalConversion generated from: '<S870>/VeOBCR_e_Protocol_Priority1_Out_Init'
     */
    (void)Rte_Write_VeOBCR_e_Protocol_Priority1_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_e_Protoc);

    /* Outport: '<Root>/VeOBCR_e_Protocol_Priority2' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_e_Protocol_Priority2_Out_Init'
     *  SignalConversion generated from: '<S870>/VeOBCR_e_Protocol_Priority2_Out_Init'
     */
    (void)Rte_Write_VeOBCR_e_Protocol_Priority2_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_e_Prot_j);

    /* Outport: '<Root>/VeOBCR_e_Protocol_Priority3' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_e_Protocol_Priority3_Out_Init'
     *  SignalConversion generated from: '<S870>/VeOBCR_e_Protocol_Priority3_Out_Init'
     */
    (void)Rte_Write_VeOBCR_e_Protocol_Priority3_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_e_Prot_h);

    /* Outport: '<Root>/VeOBCR_e_PwrLevSet' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_e_PwrLevSet_Out_Init'
     *  SignalConversion generated from: '<S870>/VeOBCR_e_PwrLevSet_Out_Init'
     */
    (void)Rte_Write_VeOBCR_e_PwrLevSet_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_e_PwrLev);

    /* Outport: '<Root>/VeOBCR_e_SOCRchd_BST' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_e_SOCRchd_BST_Out_Init'
     *  SignalConversion generated from: '<S870>/VeOBCR_e_SOCRchd_BST_Out_Init'
     */
    (void)Rte_Write_VeOBCR_e_SOCRchd_BST_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_e_SOCRch);

    /* Outport: '<Root>/VeOBCR_e_SOC_OOR' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_e_SOC_OOR_Out_Init'
     *  SignalConversion generated from: '<S870>/VeOBCR_e_SOC_OOR_Out_Init'
     */
    (void)Rte_Write_VeOBCR_e_SOC_OOR_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_e_SOC_OO);

    /* Outport: '<Root>/VeOBCR_e_SelEnrgyTxType' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_e_SelEnrgyTxType_Out_Init'
     */
    (void)Rte_Write_VeOBCR_e_SelEnrgyTxType_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_e_SelEnr);

    /* Outport: '<Root>/VeOBCR_e_SelPayOptn' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_e_SelPayOptn_Out_Init'
     *  SignalConversion generated from: '<S870>/VeOBCR_e_SelPayOptn_Out_Init'
     */
    (void)Rte_Write_VeOBCR_e_SelPayOptn_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_e_SelPay);

    /* Outport: '<Root>/VeOBCR_e_SelectAppProtocol' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_e_SelectAppProtocol_Out_Init'
     *  SignalConversion generated from: '<S870>/VeOBCR_e_SelectAppProtocol_Out_Init'
     */
    (void)Rte_Write_VeOBCR_e_SelectAppProtocol_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_e_Select);

    /* Outport: '<Root>/VeOBCR_e_Service_Category' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_e_Service_Category_Out_Init'
     */
    (void)Rte_Write_VeOBCR_e_Service_Category_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_e_Servic);

    /* Outport: '<Root>/VeOBCR_k_ChrgPortEnbl_BSW' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_k_ChrgPortEnbl_BSW_Out_Init'
     */
    (void)Rte_Write_VeOBCR_k_ChrgPortEnbl_BSW_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_k_ChrgPo);

    /* Outport: '<Root>/VeOBCR_k_ChrgSysFault_Reason' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_k_ChrgSysFault_Reason_Out_Init'
     */
    (void)Rte_Write_VeOBCR_k_ChrgSysFault_Reason_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_k_ChrgSy);

    /* Outport: '<Root>/VeOBCR_k_MaxEntriesSASScheduleTuple' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_k_MaxEntriesSASScheduleTuple_Out_Init'
     */
    (void)Rte_Write_VeOBCR_k_MaxEntriesSASScheduleTuple_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_k_MaxEnt);

    /* Outport: '<Root>/VeOBCR_q_BatteryAmpHrCap' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_q_BatteryAmpHrCap_Out_Init'
     */
    (void)Rte_Write_VeOBCR_q_BatteryAmpHrCap_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_q_Batter);

    /* Outport: '<Root>/VeOBCR_t_EstTimeDCFastChrg_100' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_t_EstTimeDCFastChrg_100_Out_Init'
     */
    (void)Rte_Write_VeOBCR_t_EstTimeDCFastChrg_100_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_t_EstTim);

    /* Outport: '<Root>/VeOBCR_t_EstTimeDCFastChrg_80' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_t_EstTimeDCFastChrg_80_Out_Init'
     */
    (void)Rte_Write_VeOBCR_t_EstTimeDCFastChrg_80_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_t_EstT_f);

    /* Outport: '<Root>/VeOBCR_t_RemTimeToBulkSOC' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_t_RemTimeToBulkSOC_Out_Init'
     */
    (void)Rte_Write_VeOBCR_t_RemTimeToBulkSOC_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_t_RemT_h);

    /* Outport: '<Root>/VeOBCR_t_RemTimeToFullSOC' incorporates:
     *  SignalConversion generated from: '<S3>/VeOBCR_t_RemTimeToFullSOC_Out_Init'
     */
    (void)Rte_Write_VeOBCR_t_RemTimeToFullSOC_Value
        (OBCR_ac_B.OutportBufferForVeOBCR_t_RemTim);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, OBCR_CODE) OBCR_ac_Init(void)
{
    /* Registration code */

    /* block I/O */
    {
        OBCR_ac_B.OutportBufferForVeOBCR_e_PwrLev = CeOBCR_e_PwrLimReq_SNA;
    }

    /* custom signals */
    VeOBCR_e_HV_TracBatCntctrConfig = CeBPCR_e_HVTracBatConfig_Closed_Parallel;

    {
        sint32 i;
        sint16 tmp[15];
        sint16 tmp_1[7];
        boolean tmp_0[15];

        /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
         *  SubSystem: '<Root>/OBCR_FUNC_PwrOn'
         */
        /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
         *  SubSystem: '<S3>/Sub_Out_Init'
         */
        /* SystemInitialize for SignalConversion generated from: '<S870>/VeOBCR_e_ChrgrModeReq_Out_Init' incorporates:
         *  Constant: '<S870>/Const1'
         */
        OBCR_ac_B.OutportBufferForVeOBCR_e_ChrgrM = OBCR_ac_ConstB.Const1;

        /* SystemInitialize for SignalConversion generated from: '<S870>/VeOBCR_e_ChrgrTrsfMethodReq_Out_Init' incorporates:
         *  Constant: '<S870>/Const2'
         */
        OBCR_ac_B.OutportBufferForVeOBCR_e_ChrgrT = OBCR_ac_ConstB.Const2;

        /* SystemInitialize for SignalConversion generated from: '<S870>/VeOBCR_e_HVBattBalReq_Out_Init' incorporates:
         *  Constant: '<S870>/Const11'
         */
        OBCR_ac_B.OutportBufferForVeOBCR_e_HVBatt = OBCR_ac_ConstB.Const11;

        /* SystemInitialize for SignalConversion generated from: '<S870>/VeOBCR_e_ChrgSysShtDwnFlt_Out_Init' incorporates:
         *  Constant: '<S870>/Const13'
         */
        OBCR_ac_B.OutportBufferForVeOBCR_e_ChrgSy = OBCR_ac_ConstB.Const13;

        /* SystemInitialize for SignalConversion generated from: '<S870>/VeOBCR_e_ChrgPort_Req_Out_Init' incorporates:
         *  Constant: '<S870>/Const23'
         */
        OBCR_ac_B.OutportBufferForVeOBCR_e_ChrgPo = OBCR_ac_ConstB.Const23;

        /* SystemInitialize for SignalConversion generated from: '<S870>/VeOBCR_e_DC_CntctrCmd_Out_Init' incorporates:
         *  Constant: '<S870>/Const45'
         */
        OBCR_ac_B.OutportBufferForVeOBCR_e_DC_Cnt = OBCR_ac_ConstB.Const45;

        /* SystemInitialize for SignalConversion generated from: '<S870>/VeOBCR_e_SelPayOptn_Out_Init' incorporates:
         *  Constant: '<S870>/Const52'
         */
        OBCR_ac_B.OutportBufferForVeOBCR_e_SelPay = OBCR_ac_ConstB.Const52;

        /* SystemInitialize for SignalConversion generated from: '<S870>/VeOBCR_e_HCP_DC_Retry_Out_Init' incorporates:
         *  Constant: '<S870>/Const54'
         */
        OBCR_ac_B.OutportBufferForVeOBCR_e_HCP_DC = OBCR_ac_ConstB.Const54;

        /* SystemInitialize for SignalConversion generated from: '<S870>/VeOBCR_e_ChargeType_Out_Init' incorporates:
         *  Constant: '<S870>/Const55'
         */
        OBCR_ac_B.OutportBufferForVeOBCR_e_Char_n = OBCR_ac_ConstB.Const55;

        /* SystemInitialize for SignalConversion generated from: '<S870>/VeOBCR_e_DCChrg_TestSts_Out_Init' incorporates:
         *  Constant: '<S870>/Const56'
         */
        OBCR_ac_B.OutportBufferForVeOBCR_e_DCChrg = OBCR_ac_ConstB.Const56;

        /* SystemInitialize for SignalConversion generated from: '<S870>/VeOBCR_e_ChrgSysStat_SF_Out_Init' incorporates:
         *  Constant: '<S870>/Const67'
         */
        OBCR_ac_B.OutportBufferForVeOBCR_e_Chrg_a = OBCR_ac_ConstB.Const67;

        /* SystemInitialize for SignalConversion generated from: '<S870>/VeOBCR_e_CellVolt_OOR_Out_Init' incorporates:
         *  Constant: '<S870>/Const70'
         */
        OBCR_ac_B.OutportBufferForVeOBCR_e_CellVo = OBCR_ac_ConstB.Const70;

        /* SystemInitialize for SignalConversion generated from: '<S870>/VeOBCR_e_ChrgCurr_OOR_Out_Init' incorporates:
         *  Constant: '<S870>/Const71'
         */
        OBCR_ac_B.OutportBufferForVeOBCR_e_ChrgCu = OBCR_ac_ConstB.Const71;

        /* SystemInitialize for SignalConversion generated from: '<S870>/VeOBCR_e_BattTemp_OOR_Out_Init' incorporates:
         *  Constant: '<S870>/Const72'
         */
        OBCR_ac_B.OutportBufferForVeOBCR_e_BattTe = OBCR_ac_ConstB.Const72;

        /* SystemInitialize for SignalConversion generated from: '<S870>/VeOBCR_e_SOC_OOR_Out_Init' incorporates:
         *  Constant: '<S870>/Const73'
         */
        OBCR_ac_B.OutportBufferForVeOBCR_e_SOC_OO = OBCR_ac_ConstB.Const73;

        /* SystemInitialize for SignalConversion generated from: '<S870>/VeOBCR_e_BattPckVoltRchd_BST_Out_Init' incorporates:
         *  Constant: '<S870>/Const79'
         */
        OBCR_ac_B.OutportBufferForVeOBCR_e_BattPc = OBCR_ac_ConstB.Const79;

        /* SystemInitialize for SignalConversion generated from: '<S870>/VeOBCR_e_SOCRchd_BST_Out_Init' incorporates:
         *  Constant: '<S870>/Const80'
         */
        OBCR_ac_B.OutportBufferForVeOBCR_e_SOCRch = OBCR_ac_ConstB.Const80;

        /* SystemInitialize for SignalConversion generated from: '<S870>/VeOBCR_e_MaxCellVoltRchd_BST_Out_Init' incorporates:
         *  Constant: '<S870>/Const83'
         */
        OBCR_ac_B.OutportBufferForVeOBCR_e_MaxCel = OBCR_ac_ConstB.Const83;

        /* SystemInitialize for SignalConversion generated from: '<S870>/VeOBCR_e_GBT_ChrgCntrolMethod_Out_Init' incorporates:
         *  Constant: '<S870>/Const90'
         */
        OBCR_ac_B.OutportBufferForVeOBCR_e_GBT__a = OBCR_ac_ConstB.Const90;

        /* SystemInitialize for SignalConversion generated from: '<S870>/VeOBCR_e_GBT_ChrgrInterrupt_Out_Init' incorporates:
         *  Constant: '<S870>/Const91'
         */
        OBCR_ac_B.OutportBufferForVeOBCR_e_GBT_Ch = OBCR_ac_ConstB.Const91;

        /* SystemInitialize for SignalConversion generated from: '<S870>/VeOBCR_e_PwrLevSet_Out_Init' incorporates:
         *  Constant: '<S870>/Const94'
         */
        OBCR_ac_B.OutportBufferForVeOBCR_e_PwrLev = OBCR_ac_ConstB.Const94;

        /* SystemInitialize for SignalConversion generated from: '<S870>/VeOBCR_e_SelectAppProtocol_Out_Init' incorporates:
         *  Constant: '<S870>/Const96'
         */
        OBCR_ac_B.OutportBufferForVeOBCR_e_Select = OBCR_ac_ConstB.Const96;

        /* SystemInitialize for SignalConversion generated from: '<S870>/VeOBCR_e_ChargeProgress_Out_Init' incorporates:
         *  Constant: '<S870>/Const98'
         */
        OBCR_ac_B.OutportBufferForVeOBCR_e_Char_f = OBCR_ac_ConstB.Const98;

        /* SystemInitialize for SignalConversion generated from: '<S870>/VeOBCR_e_DC_ChrgTyprCmd_Out_Init' incorporates:
         *  Constant: '<S870>/Const99'
         */
        OBCR_ac_B.OutportBufferForVeOBCR_e_DC_Chr = OBCR_ac_ConstB.Const99;

        /* SystemInitialize for SignalConversion generated from: '<S870>/VeOBCR_e_ChargeportLock_Sts_Out_Init' incorporates:
         *  Constant: '<S870>/Const100'
         */
        OBCR_ac_B.OutportBufferForVeOBCR_e_Charge = OBCR_ac_ConstB.Const100;

        /* SystemInitialize for SignalConversion generated from: '<S870>/VeOBCR_Cnt_PlugIn_Reason_Out_Init' */
        OBCR_ac_B.OutportBufferForVeOBCR_Cnt_Plug = 1;

        /* SystemInitialize for SignalConversion generated from: '<S870>/VaOBCR_Cnt_PlugIn_Vector_Out_Init' */
        OBCR_ac_B.OutportBufferForVaOBCR_Cnt_Plug[0] = OBCR_ac_ConstB.Const104;
        OBCR_ac_B.OutportBufferForVaOBCR_Cnt_Plug[1] = OBCR_ac_ConstB.Const105;
        OBCR_ac_B.OutportBufferForVaOBCR_Cnt_Plug[2] = OBCR_ac_ConstB.Const106;
        OBCR_ac_B.OutportBufferForVaOBCR_Cnt_Plug[3] = OBCR_ac_ConstB.Const107;
        OBCR_ac_B.OutportBufferForVaOBCR_Cnt_Plug[4] = OBCR_ac_ConstB.Const108;
        OBCR_ac_B.OutportBufferForVaOBCR_Cnt_Plug[5] = OBCR_ac_ConstB.Const109;
        OBCR_ac_B.OutportBufferForVaOBCR_Cnt_Plug[6] = OBCR_ac_ConstB.Const110;
        OBCR_ac_B.OutportBufferForVaOBCR_Cnt_Plug[7] = OBCR_ac_ConstB.Const111;
        OBCR_ac_B.OutportBufferForVaOBCR_Cnt_Plug[8] = OBCR_ac_ConstB.Const112;
        OBCR_ac_B.OutportBufferForVaOBCR_Cnt_Plug[9] = OBCR_ac_ConstB.Const113;
        OBCR_ac_B.OutportBufferForVaOBCR_Cnt_Plug[10] = OBCR_ac_ConstB.Const114;
        OBCR_ac_B.OutportBufferForVaOBCR_Cnt_Plug[11] = OBCR_ac_ConstB.Const115;
        OBCR_ac_B.OutportBufferForVaOBCR_Cnt_Plug[12] = OBCR_ac_ConstB.Const116;
        OBCR_ac_B.OutportBufferForVaOBCR_Cnt_Plug[13] = OBCR_ac_ConstB.Const117;
        OBCR_ac_B.OutportBufferForVaOBCR_Cnt_Plug[14] = OBCR_ac_ConstB.Const118;

        /* SystemInitialize for SignalConversion generated from: '<S870>/VaOBCR_b_NCR_Signals_Out_Init' */
        OBCR_ac_B.OutportBufferForVaOBCR_b_NCR_Si[0] = OBCR_ac_ConstB.Const121;
        OBCR_ac_B.OutportBufferForVaOBCR_b_NCR_Si[1] = OBCR_ac_ConstB.Const122;
        OBCR_ac_B.OutportBufferForVaOBCR_b_NCR_Si[2] = OBCR_ac_ConstB.Const123;
        OBCR_ac_B.OutportBufferForVaOBCR_b_NCR_Si[3] = OBCR_ac_ConstB.Const124;
        OBCR_ac_B.OutportBufferForVaOBCR_b_NCR_Si[4] = OBCR_ac_ConstB.Const125;
        OBCR_ac_B.OutportBufferForVaOBCR_b_NCR_Si[5] = OBCR_ac_ConstB.Const126;
        OBCR_ac_B.OutportBufferForVaOBCR_b_NCR_Si[6] = OBCR_ac_ConstB.Const127;
        OBCR_ac_B.OutportBufferForVaOBCR_b_NCR_Si[7] = OBCR_ac_ConstB.Const128;
        OBCR_ac_B.OutportBufferForVaOBCR_b_NCR_Si[8] = OBCR_ac_ConstB.Const129;
        OBCR_ac_B.OutportBufferForVaOBCR_b_NCR_Si[9] = OBCR_ac_ConstB.Const130;
        OBCR_ac_B.OutportBufferForVaOBCR_b_NCR_Si[10] = OBCR_ac_ConstB.Const131;
        OBCR_ac_B.OutportBufferForVaOBCR_b_NCR_Si[11] = OBCR_ac_ConstB.Const132;
        OBCR_ac_B.OutportBufferForVaOBCR_b_NCR_Si[12] = OBCR_ac_ConstB.Const133;
        OBCR_ac_B.OutportBufferForVaOBCR_b_NCR_Si[13] = OBCR_ac_ConstB.Const134;
        OBCR_ac_B.OutportBufferForVaOBCR_b_NCR_Si[14] = OBCR_ac_ConstB.Const135;

        /* SystemInitialize for SignalConversion generated from: '<S870>/VaOBCR_k_InitChecks_Vector_Out_Init' */
        OBCR_ac_B.OutportBufferForVaOBCR_k_InitCh[0] = OBCR_ac_ConstB.Const138;
        OBCR_ac_B.OutportBufferForVaOBCR_k_InitCh[1] = OBCR_ac_ConstB.Const139;
        OBCR_ac_B.OutportBufferForVaOBCR_k_InitCh[2] = OBCR_ac_ConstB.Const140;
        OBCR_ac_B.OutportBufferForVaOBCR_k_InitCh[3] = OBCR_ac_ConstB.Const141;
        OBCR_ac_B.OutportBufferForVaOBCR_k_InitCh[4] = OBCR_ac_ConstB.Const142;
        OBCR_ac_B.OutportBufferForVaOBCR_k_InitCh[5] = OBCR_ac_ConstB.Const143;
        OBCR_ac_B.OutportBufferForVaOBCR_k_InitCh[6] = OBCR_ac_ConstB.Const144;

        /* SystemInitialize for SignalConversion generated from: '<S870>/VeOBCR_Cnt_NCR_Out_Init' */
        OBCR_ac_B.OutportBufferForVeOBCR_Cnt_NCR_ = 20;

        /* SystemInitialize for SignalConversion generated from: '<S870>/VeOBCR_e_Protocol_Priority1_Out_Init' incorporates:
         *  Constant: '<S870>/Const156'
         */
        OBCR_ac_B.OutportBufferForVeOBCR_e_Protoc = OBCR_ac_ConstB.Const156;

        /* SystemInitialize for SignalConversion generated from: '<S870>/VeOBCR_e_Protocol_Priority2_Out_Init' incorporates:
         *  Constant: '<S870>/Const157'
         */
        OBCR_ac_B.OutportBufferForVeOBCR_e_Prot_j = OBCR_ac_ConstB.Const157;

        /* SystemInitialize for SignalConversion generated from: '<S870>/VeOBCR_e_Protocol_Priority3_Out_Init' incorporates:
         *  Constant: '<S870>/Const158'
         */
        OBCR_ac_B.OutportBufferForVeOBCR_e_Prot_h = OBCR_ac_ConstB.Const158;

        /* End of SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */
        /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

        /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
         *  SubSystem: '<Root>/OBCR_FUNC_MedTED'
         */
        /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
         *  SubSystem: '<S1>/OBCI'
         */
        /* SystemInitialize for Switch: '<S6>/Switch106' incorporates:
         *  Outport: '<S6>/HV_TracBatCntctrConfig'
         */
        VeOBCR_e_HV_TracBatCntctrConfig =
            CeBPCR_e_HVTracBatConfig_Closed_Parallel;

#if Rte_SysCon_Variant_OBCR_1

        /* SystemInitialize for Function Call SubSystem: '<S1>/OBCC' */
        /* Start for If: '<S132>/If2' */
        OBCR_ac_DW.If2_ActiveSubsystem = -1;

        /* Start for If: '<S132>/If1' */
        OBCR_ac_DW.If1_ActiveSubsystem = -1;

        /* SystemInitialize for SignalConversion generated from: '<S4>/ActChargeLim' incorporates:
         *  Constant: '<S324>/Calib'
         */
        OBCR_ac_B.OutportBufferForActChargeLim = KeOBCR_P_TestActChargeLim;

        /* SystemInitialize for SignalConversion generated from: '<S4>/ActChargeLimFA' incorporates:
         *  Constant: '<S328>/Calib'
         */
        OBCR_ac_B.OutportBufferForActChargeLimFA = KeOBCR_b_TestActChargeLimFA;

        /* SystemInitialize for SignalConversion generated from: '<S4>/ActChargePwr' incorporates:
         *  Constant: '<S325>/Calib'
         */
        OBCR_ac_B.OutportBufferForActChargePwr = KeOBCR_P_TestActChargePower;

        /* SystemInitialize for SignalConversion generated from: '<S4>/ActChargePwrFA' incorporates:
         *  Constant: '<S329>/Calib'
         */
        OBCR_ac_B.OutportBufferForActChargePwrFA = KeOBCR_b_TestActChargePwrFA;

        /* SystemInitialize for SignalConversion generated from: '<S4>/EVSEPwr' incorporates:
         *  Constant: '<S326>/Calib'
         */
        OBCR_ac_B.OutportBufferForEVSEPwr = KeOBCR_P_TestEVSEPwr;

        /* SystemInitialize for SignalConversion generated from: '<S4>/EnergyToBatt' incorporates:
         *  Constant: '<S327>/Calib'
         */
        OBCR_ac_B.OutportBufferForEnergyToBatt = KeOBCR_P_TestPowertoBattery;

        /* SystemInitialize for SignalConversion generated from: '<S4>/TotalBattCap' incorporates:
         *  Constant: '<S330>/Calib'
         */
        OBCR_ac_B.OutportBufferForTotalBattCap = KeOBCR_q_TestTotalBattCap;

        /* End of SystemInitialize for SubSystem: '<S1>/OBCC' */
        /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
#endif

        /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
         *  SubSystem: '<S1>/Output_Proc'
         */
        /* SystemInitialize for SignalConversion generated from: '<S7>/VeOBCR_e_ChrgrTrsfMethodReq' incorporates:
         *  Constant: '<S756>/Constant'
         */
        OBCR_ac_B.VeOBCR_e_ChrgrTrsfMethodReq = OBCR_ac_ConstB.Constant_h;

        /* SystemInitialize for SignalConversion generated from: '<S7>/VeOBCR_U_MinAllowableBattVolt' incorporates:
         *  Constant: '<S760>/Calib'
         */
        OBCR_ac_B.VeOBCR_U_MinAllowableBattVolt = KeOBCR_U_MinAllowableBattVolt;

        /* SystemInitialize for SignalConversion generated from: '<S7>/VeOBCR_U_MaxAllowableBattVolt' incorporates:
         *  Constant: '<S759>/Calib'
         */
        OBCR_ac_B.VeOBCR_U_MaxAllowableBattVolt = KeOBCR_U_MaxAllowableBattVolt;

        /* SystemInitialize for SignalConversion generated from: '<S7>/VeOBCR_I_MaxAllowableCrntBatt' incorporates:
         *  Constant: '<S758>/Calib'
         */
        OBCR_ac_B.VeOBCR_I_MaxAllowableCrntBatt = KeOBCR_I_MaxAlwdBatCurr;

        /* SystemInitialize for SignalConversion generated from: '<S7>/VeOBCR_e_ChrgSysShtDwnFlt' incorporates:
         *  Constant: '<S757>/Constant'
         */
        OBCR_ac_B.VeOBCR_e_ChrgSysShtDwnFlt = OBCR_ac_ConstB.Constant;

        /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
        /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

        /* SystemInitialize for Outport: '<Root>/VeOBCR_e_ChrgrModeReq' incorporates:
         *  Merge: '<Root>/Merge_Outport_2'
         */
        (void)Rte_Write_VeOBCR_e_ChrgrModeReq_Value(CeOBCR_e_Idle_OBCMdRq);

        /* SystemInitialize for Outport: '<Root>/VeOBCR_e_ChrgrTrsfMethodReq' incorporates:
         *  Merge: '<Root>/Merge_Outport_3'
         */
        (void)Rte_Write_VeOBCR_e_ChrgrTrsfMethodReq_Value(CeOBCR_e_Current);

        /* SystemInitialize for Outport: '<Root>/VeOBCR_e_HVBattBalReq' incorporates:
         *  Merge: '<Root>/Merge_Outport_12'
         */
        (void)Rte_Write_VeOBCR_e_HVBattBalReq_Value(CeOBCR_e_NoRequest);

        /* SystemInitialize for Outport: '<Root>/VeOBCR_e_ChargingLevel' incorporates:
         *  Merge: '<Root>/Merge_6'
         */
        (void)Rte_Write_VeOBCR_e_ChargingLevel_Value(CeOBCR_e_ChargingLvlDefault);

        /* SystemInitialize for Outport: '<Root>/VeOBCR_e_ChargingSystemSts' incorporates:
         *  Merge: '<Root>/Merge_3'
         */
        (void)Rte_Write_VeOBCR_e_ChargingSystemSts_Value(CeOBCR_e_NotCharging);

        /* SystemInitialize for Outport: '<Root>/VeOBCR_e_ChrgSysShtDwnFlt' incorporates:
         *  Merge: '<Root>/Merge_Outport_18'
         */
        (void)Rte_Write_VeOBCR_e_ChrgSysShtDwnFlt_Value(CeSRAR_e_NoFlt);

        /* SystemInitialize for Outport: '<Root>/VeOBCR_e_ChrgPort_Req' incorporates:
         *  Merge: '<Root>/Merge_Outport_28'
         */
        (void)Rte_Write_VeOBCR_e_ChrgPort_Req_Value(CeOBCR_e_PortNoRequest);

        /* SystemInitialize for Outport: '<Root>/VeOBCR_e_DC_CntctrCmd' incorporates:
         *  Merge: '<Root>/Merge_Outport_50'
         */
        (void)Rte_Write_VeOBCR_e_DC_CntctrCmd_Value(CeOBCR_e_DCCntctr_Open);

        /* SystemInitialize for Outport: '<Root>/VeOBCR_e_SelPayOptn' incorporates:
         *  Merge: '<Root>/Merge_Outport_57'
         */
        (void)Rte_Write_VeOBCR_e_SelPayOptn_Value(CeOBCR_e_NoPaymentSel);

        /* SystemInitialize for Outport: '<Root>/VeOBCR_e_HCP_DC_Retry' incorporates:
         *  Merge: '<Root>/Merge_Outport_59'
         */
        (void)Rte_Write_VeOBCR_e_HCP_DC_Retry_Value(CeOBCR_e_No_Retry_Command);

        /* SystemInitialize for Outport: '<Root>/VeOBCR_e_ChargeType' incorporates:
         *  Merge: '<Root>/Merge_Outport_60'
         */
        (void)Rte_Write_VeOBCR_e_ChargeType_Value(CeOBCR_e_AC);

        /* SystemInitialize for Outport: '<Root>/VeOBCR_e_DCChrg_TestSts' incorporates:
         *  Merge: '<Root>/Merge_Outport_61'
         */
        (void)Rte_Write_VeOBCR_e_DCChrg_TestSts_Value
            (CeOBCR_e_DCChrg_TestSts_NotInit);

        /* SystemInitialize for Outport: '<Root>/VeOBCR_e_ChrgSysStat_SF' incorporates:
         *  Merge: '<Root>/Merge_Outport_72'
         */
        (void)Rte_Write_VeOBCR_e_ChrgSysStat_SF_Value(CeOBCR_e_PowerUp);

        /* SystemInitialize for Outport: '<Root>/VeOBCR_e_CellVolt_OOR' incorporates:
         *  Merge: '<Root>/Merge_Outport_75'
         */
        (void)Rte_Write_VeOBCR_e_CellVolt_OOR_Value(CeOBCR_e_CellVoltStat_Normal);

        /* SystemInitialize for Outport: '<Root>/VeOBCR_e_ChrgCurr_OOR' incorporates:
         *  Merge: '<Root>/Merge_Outport_76'
         */
        (void)Rte_Write_VeOBCR_e_ChrgCurr_OOR_Value(CeOBCR_e_ChrgCurrStat_Normal);

        /* SystemInitialize for Outport: '<Root>/VeOBCR_e_BattTemp_OOR' incorporates:
         *  Merge: '<Root>/Merge_Outport_77'
         */
        (void)Rte_Write_VeOBCR_e_BattTemp_OOR_Value(CeOBCR_e_BattTempStat_Normal);

        /* SystemInitialize for Outport: '<Root>/VeOBCR_e_SOC_OOR' incorporates:
         *  Merge: '<Root>/Merge_Outport_78'
         */
        (void)Rte_Write_VeOBCR_e_SOC_OOR_Value(CeOBCR_e_BattSOCStat_Normal);

        /* SystemInitialize for Outport: '<Root>/VeOBCR_e_BattPckVoltRchd_BST' incorporates:
         *  Merge: '<Root>/Merge_Outport_85'
         */
        (void)Rte_Write_VeOBCR_e_BattPckVoltRchd_BST_Value
            (CeOBCR_e_BattPckVolt_NotReached);

        /* SystemInitialize for Outport: '<Root>/VeOBCR_e_SOCRchd_BST' incorporates:
         *  Merge: '<Root>/Merge_Outport_86'
         */
        (void)Rte_Write_VeOBCR_e_SOCRchd_BST_Value(CeOBCR_e_SOC_NotReached);

        /* SystemInitialize for Outport: '<Root>/VeOBCR_e_MaxCellVoltRchd_BST' incorporates:
         *  Merge: '<Root>/Merge_Outport_89'
         */
        (void)Rte_Write_VeOBCR_e_MaxCellVoltRchd_BST_Value
            (CeOBCR_e_MaxCellVolt_NotReached);

        /* SystemInitialize for Outport: '<Root>/VeOBCR_e_GBT_ChrgCntrolMethod' incorporates:
         *  Merge: '<Root>/Merge_Outport_96'
         */
        (void)Rte_Write_VeOBCR_e_GBT_ChrgCntrolMethod_Value
            (CeOBCR_e_ChrgMthd_Init);

        /* SystemInitialize for Outport: '<Root>/VeOBCR_e_GBT_ChrgrInterrupt' incorporates:
         *  Merge: '<Root>/Merge_Outport_97'
         */
        (void)Rte_Write_VeOBCR_e_GBT_ChrgrInterrupt_Value
            (CeOBCR_e_NoChrgrInterrupt);

        /* SystemInitialize for Outport: '<Root>/VeOBCR_e_PwrLevSet' incorporates:
         *  Merge: '<Root>/Merge_Outport_100'
         */
        (void)Rte_Write_VeOBCR_e_PwrLevSet_Value(CeOBCR_e_PwrLimReq_SNA);

        /* SystemInitialize for Outport: '<Root>/VeOBCR_e_SelectAppProtocol' incorporates:
         *  Merge: '<Root>/Merge_Outport_1'
         */
        (void)Rte_Write_VeOBCR_e_SelectAppProtocol_Value(CeOBCR_e_DIN);

        /* SystemInitialize for Outport: '<Root>/VeOBCR_e_ChargeProgress' incorporates:
         *  Merge: '<Root>/Merge_Outport_14'
         */
        (void)Rte_Write_VeOBCR_e_ChargeProgress_Value(CeOBCR_e_No_Request);

        /* SystemInitialize for Outport: '<Root>/VeOBCR_e_DC_ChrgTypeCmd' incorporates:
         *  Merge: '<Root>/Merge_Outport_15'
         */
        (void)Rte_Write_VeOBCR_e_DC_ChrgTypeCmd_Value(CeOBCR_e_DC_ChrgType_Null);

        /* SystemInitialize for Outport: '<Root>/VeOBCR_e_ChargeportLock_Sts' incorporates:
         *  Merge: '<Root>/Merge_Outport_16'
         */
        (void)Rte_Write_VeOBCR_e_ChargeportLock_Sts_Value
            (CeOBCR_e_PortLockSts_Default);

        /* SystemInitialize for Merge: '<Root>/Merge_Outport_105' */
        for (i = 0; i < 15; i++)
        {
            tmp[i] = 0;
        }

        /* SystemInitialize for Outport: '<Root>/VaOBCR_Cnt_PlugIn_Vector' incorporates:
         *  Merge: '<Root>/Merge_Outport_105'
         */
        (void)Rte_Write_VaOBCR_Cnt_PlugIn_Vector_Value(tmp);

        /* SystemInitialize for Merge: '<Root>/Merge_Outport_108' */
        for (i = 0; i < 15; i++)
        {
            tmp_0[i] = false;
        }

        /* SystemInitialize for Outport: '<Root>/VaOBCR_b_NCR_Signals' incorporates:
         *  Merge: '<Root>/Merge_Outport_108'
         */
        (void)Rte_Write_VaOBCR_b_NCR_Signals_Value(tmp_0);

        /* SystemInitialize for Merge: '<Root>/Merge_Outport_111' */
        for (i = 0; i < 7; i++)
        {
            tmp_1[i] = 0;
        }

        /* SystemInitialize for Outport: '<Root>/VaOBCR_k_InitChecks_Vector' incorporates:
         *  Merge: '<Root>/Merge_Outport_111'
         */
        (void)Rte_Write_VaOBCR_k_InitChecks_Vector_Value(tmp_1);

        /* SystemInitialize for Outport: '<Root>/VeOBCR_e_Protocol_Priority1' incorporates:
         *  Merge: '<Root>/Merge_Outport_123'
         */
        (void)Rte_Write_VeOBCR_e_Protocol_Priority1_Value(CeOBCR_e_No_Protocol);

        /* SystemInitialize for Outport: '<Root>/VeOBCR_e_Protocol_Priority2' incorporates:
         *  Merge: '<Root>/Merge_Outport_124'
         */
        (void)Rte_Write_VeOBCR_e_Protocol_Priority2_Value(CeOBCR_e_No_Protocol);

        /* SystemInitialize for Outport: '<Root>/VeOBCR_e_Protocol_Priority3' incorporates:
         *  Merge: '<Root>/Merge_Outport_125'
         */
        (void)Rte_Write_VeOBCR_e_Protocol_Priority3_Value(CeOBCR_e_No_Protocol);
    }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
