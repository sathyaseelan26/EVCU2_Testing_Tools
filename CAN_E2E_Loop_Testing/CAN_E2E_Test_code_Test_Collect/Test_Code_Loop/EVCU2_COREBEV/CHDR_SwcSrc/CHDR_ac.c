/*
 * File: CHDR_ac.c
 *
 * Code generated for Simulink model 'CHDR_ac'.
 *
 * Model version                  : 1.636
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:14:34 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CHDR_ac.h"

/* Named constants for Chart: '<S8>/CHAdeMO' */
#if Rte_SysCon_Variant_CHDR_FUNC
#define CHDR_a_IN_CHDMODCCntctrCmd_open ((uint8)2U)
#endif

#if Rte_SysCon_Variant_CHDR_FUNC
#define CHDR_ac_IN_CHDMOCommunication  ((uint8)1U)
#endif

#if Rte_SysCon_Variant_CHDR_FUNC
#define CHDR_ac_IN_CHDMODCIsolation    ((uint8)3U)
#endif

#if Rte_SysCon_Variant_CHDR_FUNC
#define CHDR_ac_IN_CHDMOEShtdwn        ((uint8)4U)
#endif

#if Rte_SysCon_Variant_CHDR_FUNC
#define CHDR_ac_IN_CHDMONShtdwn        ((uint8)5U)
#endif

#if Rte_SysCon_Variant_CHDR_FUNC
#define CHDR_ac_IN_CHDMOShtDwnCompl    ((uint8)6U)
#endif

#if Rte_SysCon_Variant_CHDR_FUNC
#define CHDR_ac_IN_CHDMOShutdown       ((uint8)2U)
#endif

#if Rte_SysCon_Variant_CHDR_FUNC
#define CHDR_ac_IN_CHDMOShutdownin     ((uint8)7U)
#endif

#if Rte_SysCon_Variant_CHDR_FUNC
#define CHDR_ac_IN_CHDMOSwitchKOff     ((uint8)8U)
#endif

#if Rte_SysCon_Variant_CHDR_FUNC
#define CHDR_ac_IN_CHDMO_CurrentDemand ((uint8)3U)
#endif

#if Rte_SysCon_Variant_CHDR_FUNC
#define CHDR_ac_IN_CHDMO_Init          ((uint8)4U)
#endif

#if Rte_SysCon_Variant_CHDR_FUNC
#define CHDR_ac_IN_NO_ACTIVE_CHILD     ((uint8)0U)
#endif

#if Rte_SysCon_Variant_CHDR_FUNC
#define CH_IN_CHDMODCCntctrCmd_Fastopen ((uint8)1U)
#endif

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_CHDR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(float32, CHDR_VAR_INIT) HeCHDR_t_dT = 0.02F;/* Referenced by: '<S8>/CHAdeMO' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(uint16, CHDR_VAR_INIT) KeCHDR_Cnt_DbncChrgPrmsionEnbl =
    10U;                               /* Referenced by: '<S33>/Calib' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(uint16, CHDR_VAR_INIT) KeCHDR_Cnt_DbncCrntDvtionErrFlag =
    50U;                               /* Referenced by: '<S38>/Calib' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(uint16, CHDR_VAR_INIT) KeCHDR_Cnt_DbncOvrTempFlag = 50U;/* Referenced by: '<S39>/Calib' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(uint16, CHDR_VAR_INIT) KeCHDR_Cnt_DbncOvrVoltFlag = 50U;/* Referenced by: '<S40>/Calib' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(uint16, CHDR_VAR_INIT) KeCHDR_Cnt_DbncUndrVoltFlag = 50U;/* Referenced by: '<S41>/Calib' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(uint16, CHDR_VAR_INIT) KeCHDR_Cnt_DbncVhclDrvStsFlag = 50U;/* Referenced by: '<S42>/Calib' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(uint16, CHDR_VAR_INIT) KeCHDR_Cnt_DbncVoltDvtionErrFlag =
    50U;                               /* Referenced by: '<S43>/Calib' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(uint16, CHDR_VAR_INIT) KeCHDR_Cnt_Dbnc_DCBusCurr = 50U;/* Referenced by: '<S61>/Calib' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(float32, CHDR_VAR_INIT) KeCHDR_I_ChrgCrntMin = 0.0F;/* Referenced by: '<S19>/Calib' */

#endif

static volatile CONST(float32, CHDR_VAR_INIT) KeCHDR_I_ChrgCurr_Min_Out_Init =
    0.0F;                              /* Referenced by:
                                        * '<S125>/Calib'
                                        * '<S153>/Calib'
                                        */

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(float32, CHDR_VAR_INIT) KeCHDR_I_CrntDvtionThrshld = 20.0F;/* Referenced by: '<S44>/Calib' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(float32, CHDR_VAR_INIT) KeCHDR_I_DC_MinCurrentPresent =
    5.0F;                              /* Referenced by: '<S62>/Calib' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(float32, CHDR_VAR_INIT) KeCHDR_I_EVSEOutputCurr_Val = 0.0F;/* Referenced by: '<S68>/Calib' */

#endif

static volatile CONST(float32, CHDR_VAR_INIT) KeCHDR_I_EV_TargetCurr_Out_Init =
    0.0F;                              /* Referenced by:
                                        * '<S126>/Calib'
                                        * '<S154>/Calib'
                                        */

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(float32, CHDR_VAR_INIT) KeCHDR_I_HV_BatCurr_Val = 0.0F;/* Referenced by: '<S69>/Calib' */

#endif

static volatile CONST(float32, CHDR_VAR_INIT) KeCHDR_K_CHDMOexitReason_Out_Init =
    0.0F;                              /* Referenced by:
                                        * '<S127>/Calib'
                                        * '<S155>/Calib'
                                        */

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(float32, CHDR_VAR_INIT) KeCHDR_Pct_ChrgRateRefConstnt =
    100.0F;                            /* Referenced by: '<S60>/Calib' */

#endif

static volatile CONST(float32, CHDR_VAR_INIT)
    KeCHDR_Pct_ChrgRateRefConstnt_Out_Init = 100.0F;/* Referenced by:
                                                     * '<S128>/Calib'
                                                     * '<S156>/Calib'
                                                     */

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(float32, CHDR_VAR_INIT) KeCHDR_T_HV_BatModTempMax_Val =
    0.0F;                              /* Referenced by: '<S70>/Calib' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(float32, CHDR_VAR_INIT) KeCHDR_T_HV_BatModTemp_Val = 0.0F;/* Referenced by: '<S71>/Calib' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(float32, CHDR_VAR_INIT) KeCHDR_U_EVSEOutputVolt_Val = 0.0F;/* Referenced by: '<S72>/Calib' */

#endif

static volatile CONST(float32, CHDR_VAR_INIT) KeCHDR_U_EVTarget_Volt_Out_Init =
    0.0F;                              /* Referenced by:
                                        * '<S129>/Calib'
                                        * '<S157>/Calib'
                                        */

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(float32, CHDR_VAR_INIT) KeCHDR_U_HV_BatVolt_Val = 0.0F;/* Referenced by: '<S73>/Calib' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(float32, CHDR_VAR_INIT) KeCHDR_U_MaxPkVltAlld_Val = 0.0F;/* Referenced by: '<S74>/Calib' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(float32, CHDR_VAR_INIT) KeCHDR_U_MinPkVltAlld_Val = 0.0F;/* Referenced by: '<S75>/Calib' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(float32, CHDR_VAR_INIT) KeCHDR_U_VoltDvtionThrshld = 20.0F;/* Referenced by: '<S45>/Calib' */

#endif

static volatile CONST(boolean, CHDR_VAR_INIT) KeCHDR_b_CHDMOFA_Out_Init = 0;/* Referenced by:
                                                                      * '<S130>/Calib'
                                                                      * '<S158>/Calib'
                                                                      */
static volatile CONST(boolean, CHDR_VAR_INIT) KeCHDR_b_CHDMOValidPlugIn_Out_Init
    = 0;                               /* Referenced by:
                                        * '<S131>/Calib'
                                        * '<S159>/Calib'
                                        */
static volatile CONST(boolean, CHDR_VAR_INIT)
    KeCHDR_b_DCChrgInitialization_Out_Init = 0;/* Referenced by:
                                                * '<S132>/Calib'
                                                * '<S160>/Calib'
                                                */
static volatile CONST(boolean, CHDR_VAR_INIT) KeCHDR_b_EVCU_CP3Cmd_Out_Init = 0;/* Referenced by:
                                                                      * '<S133>/Calib'
                                                                      * '<S161>/Calib'
                                                                      */
static volatile CONST(boolean, CHDR_VAR_INIT) KeCHDR_b_EVContactorSts_Out_Init =
    0;                                 /* Referenced by:
                                        * '<S134>/Calib'
                                        * '<S162>/Calib'
                                        */

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(boolean, CHDR_VAR_INIT) KeCHDR_b_EVSEOutputCurr_Ovrd = 0;/* Referenced by: '<S76>/Calib' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(boolean, CHDR_VAR_INIT) KeCHDR_b_EVSEOutputVolt_Ovrd = 0;/* Referenced by: '<S77>/Calib' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(boolean, CHDR_VAR_INIT) KeCHDR_b_EVSE_ChrgSysErr_Ovrd = 0;/* Referenced by: '<S78>/Calib' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(boolean, CHDR_VAR_INIT) KeCHDR_b_EVSE_ChrgSysErr_Val = 0;/* Referenced by: '<S79>/Calib' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(boolean, CHDR_VAR_INIT) KeCHDR_b_EVSE_EnergizingState_Ovrd
    = 0;                               /* Referenced by: '<S80>/Calib' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(boolean, CHDR_VAR_INIT) KeCHDR_b_EVSE_EnergizingState_Val =
    0;                                 /* Referenced by: '<S81>/Calib' */

#endif

static volatile CONST(boolean, CHDR_VAR_INIT) KeCHDR_b_EV_Ready_Out_Init = 0;/* Referenced by:
                                                                      * '<S135>/Calib'
                                                                      * '<S163>/Calib'
                                                                      */

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(boolean, CHDR_VAR_INIT) KeCHDR_b_FullAmpHrCap_Ovrd = 0;/* Referenced by: '<S82>/Calib' */

#endif

static volatile CONST(boolean, CHDR_VAR_INIT)
    KeCHDR_b_HVBatt_CrntDvtionError_Out_Init = 0;/* Referenced by:
                                                  * '<S136>/Calib'
                                                  * '<S164>/Calib'
                                                  */
static volatile CONST(boolean, CHDR_VAR_INIT)
    KeCHDR_b_HVBatt_VoltDvtionError_Out_Init = 0;/* Referenced by:
                                                  * '<S137>/Calib'
                                                  * '<S165>/Calib'
                                                  */

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(boolean, CHDR_VAR_INIT) KeCHDR_b_HV_BatCurr_Ovrd = 0;/* Referenced by: '<S83>/Calib' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(boolean, CHDR_VAR_INIT) KeCHDR_b_HV_BatModTempMax_Ovrd = 0;/* Referenced by: '<S84>/Calib' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(boolean, CHDR_VAR_INIT) KeCHDR_b_HV_BatModTemp_Ovrd = 0;/* Referenced by: '<S85>/Calib' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(boolean, CHDR_VAR_INIT) KeCHDR_b_HV_BatVolt_Ovrd = 0;/* Referenced by: '<S86>/Calib' */

#endif

static volatile CONST(boolean, CHDR_VAR_INIT) KeCHDR_b_IsoDis_Cmd_Out_Init = 0;/* Referenced by:
                                                                      * '<S138>/Calib'
                                                                      * '<S166>/Calib'
                                                                      */

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(boolean, CHDR_VAR_INIT) KeCHDR_b_MaxPkVltAlld_Ovrd = 0;/* Referenced by: '<S87>/Calib' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(boolean, CHDR_VAR_INIT) KeCHDR_b_MinPkVltAlld_Ovrd = 0;/* Referenced by: '<S88>/Calib' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(boolean, CHDR_VAR_INIT) KeCHDR_b_OBCM_Timeout_Ovrd = 0;/* Referenced by: '<S89>/Calib' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(boolean, CHDR_VAR_INIT) KeCHDR_b_OBCM_Timeout_Val = 0;/* Referenced by: '<S90>/Calib' */

#endif

static volatile CONST(boolean, CHDR_VAR_INIT) KeCHDR_b_OverTemp_Flag_Out_Init =
    0;                                 /* Referenced by:
                                        * '<S139>/Calib'
                                        * '<S167>/Calib'
                                        */
static volatile CONST(boolean, CHDR_VAR_INIT) KeCHDR_b_OvrVolt_Flag_Out_Init = 0;/* Referenced by:
                                                                      * '<S140>/Calib'
                                                                      * '<S168>/Calib'
                                                                      */
static volatile CONST(boolean, CHDR_VAR_INIT) KeCHDR_b_RdytoChrgStat_Out_Init =
    0;                                 /* Referenced by:
                                        * '<S141>/Calib'
                                        * '<S169>/Calib'
                                        */
static volatile CONST(boolean, CHDR_VAR_INIT)
    KeCHDR_b_StopReqBeforeCharge_Out_Init = 0;/* Referenced by:
                                               * '<S142>/Calib'
                                               * '<S170>/Calib'
                                               */
static volatile CONST(boolean, CHDR_VAR_INIT) KeCHDR_b_UndrVolt_Flag_Out_Init =
    0;                                 /* Referenced by:
                                        * '<S143>/Calib'
                                        * '<S171>/Calib'
                                        */
static volatile CONST(boolean, CHDR_VAR_INIT) KeCHDR_b_Vehicle_Status_Out_Init =
    0;                                 /* Referenced by:
                                        * '<S144>/Calib'
                                        * '<S172>/Calib'
                                        */
static volatile CONST(boolean, CHDR_VAR_INIT) KeCHDR_b_VhclDrveSts_Flag_Out_Init
    = 1;                               /* Referenced by:
                                        * '<S145>/Calib'
                                        * '<S173>/Calib'
                                        */
static volatile CONST(TeIDCR_e_CHAdeMOPrtcl, CHDR_VAR_INIT)
    KeCHDR_e_CHAdeMO_Protocol_Out_Init = CeIDCR_e_CHAdeMO_2_0;/* Referenced by:
                                                               * '<S146>/Calib'
                                                               * '<S174>/Calib'
                                                               */
static volatile CONST(TeCHDR_e_CHDMOChrgSysStat, CHDR_VAR_INIT)
    KeCHDR_e_CHDMOChrgSysStat_Out_Init = CeCHDR_e_CHDMOinit;/* Referenced by:
                                                             * '<S147>/Calib'
                                                             * '<S175>/Calib'
                                                             */
static volatile CONST(TeOBCR_e_DCCntctrCmd, CHDR_VAR_INIT)
    KeCHDR_e_DC_CntctrCmd_Out_Init = CeOBCR_e_DCCntctr_Open;/* Referenced by:
                                                             * '<S148>/Calib'
                                                             * '<S176>/Calib'
                                                             */

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(float32, CHDR_VAR_INIT) KeCHDR_q_FullAmpHrCap_Val = 0.0F;/* Referenced by: '<S91>/Calib' */

#endif

static volatile CONST(float32, CHDR_VAR_INIT) KeCHDR_q_TotalBattCapacityOut_Init
    = 0.0F;                            /* Referenced by:
                                        * '<S149>/Calib'
                                        * '<S177>/Calib'
                                        */

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(float32, CHDR_VAR_INIT) KeCHDR_t_CHDMOChrgInitDelay = 4.0F;/* Referenced by: '<S8>/CHAdeMO' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(float32, CHDR_VAR_INIT) KeCHDR_t_CHDMOCntctrClsDelay =
    3.0F;                              /* Referenced by: '<S8>/CHAdeMO' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(float32, CHDR_VAR_INIT) KeCHDR_t_CHDMODCCntctrCmdDelay =
    4.0F;                              /* Referenced by: '<S8>/CHAdeMO' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(float32, CHDR_VAR_INIT) KeCHDR_t_CHDMODCIsolationDelay =
    2.5F;                              /* Referenced by: '<S8>/CHAdeMO' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(float32, CHDR_VAR_INIT) KeCHDR_t_CHDMOEVEShtdwnDelay =
    1.5F;                              /* Referenced by: '<S8>/CHAdeMO' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(float32, CHDR_VAR_INIT) KeCHDR_t_CHDMOEVReadyDelay = 6.0F;/* Referenced by: '<S8>/CHAdeMO' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(float32, CHDR_VAR_INIT) KeCHDR_t_CHDMOInitDelay = 0.5F;/* Referenced by: '<S8>/CHAdeMO' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(float32, CHDR_VAR_INIT) KeCHDR_t_CHDMOIsoChkDelay = 2.0F;/* Referenced by: '<S8>/CHAdeMO' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(float32, CHDR_VAR_INIT) KeCHDR_t_CHDMORdyChrgDelay = 2.0F;/* Referenced by: '<S8>/CHAdeMO' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(float32, CHDR_VAR_INIT) KeCHDR_t_CHDMORdyToChrgStsDelay =
    2.0F;                              /* Referenced by: '<S8>/CHAdeMO' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(float32, CHDR_VAR_INIT) KeCHDR_t_CHDMOShtDwnComplDelay =
    0.5F;                              /* Referenced by: '<S8>/CHAdeMO' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(float32, CHDR_VAR_INIT) KeCHDR_t_CHDMOShutdwnDelay = 2.5F;/* Referenced by: '<S8>/CHAdeMO' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(float32, CHDR_VAR_INIT) KeCHDR_t_CHDMOSwitchKOffDelay =
    1.5F;                              /* Referenced by: '<S8>/CHAdeMO' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(float32, CHDR_VAR_INIT) KeCHDR_t_ChrgInitTimeOut = 6.5F;/* Referenced by: '<S8>/CHAdeMO' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(float32, CHDR_VAR_INIT) KeCHDR_t_CntctrClsTimeOut = 5.5F;/* Referenced by: '<S8>/CHAdeMO' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(float32, CHDR_VAR_INIT) KeCHDR_t_EVReadyTimeOut = 22.0F;/* Referenced by: '<S8>/CHAdeMO' */

#endif

static volatile CONST(float32, CHDR_VAR_INIT) KeCHDR_t_EstChrg_Time_Out_Init =
    0.0F;                              /* Referenced by:
                                        * '<S150>/Calib'
                                        * '<S178>/Calib'
                                        */

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(float32, CHDR_VAR_INIT) KeCHDR_t_IsolationCheckTimeOut =
    4.0F;                              /* Referenced by: '<S8>/CHAdeMO' */

#endif

static volatile CONST(float32, CHDR_VAR_INIT) KeCHDR_t_MaxChrgTime_min_Out_Init =
    255.0F;                            /* Referenced by:
                                        * '<S151>/Calib'
                                        * '<S179>/Calib'
                                        */
static volatile CONST(float32, CHDR_VAR_INIT) KeCHDR_t_MaxChrgTime_sec_Out_Init =
    2550.0F;                           /* Referenced by:
                                        * '<S152>/Calib'
                                        * '<S180>/Calib'
                                        */

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(float32, CHDR_VAR_INIT) KeCHDR_t_RdyToChrgStsTimeOut =
    4.0F;                              /* Referenced by: '<S8>/CHAdeMO' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static volatile CONST(float32, CHDR_VAR_INIT) KeCHDR_t_RdyToChrgTimeOut = 4.5F;/* Referenced by: '<S8>/CHAdeMO' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_CHDR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CHDR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_CHDR_FUNC

static VAR(float32, CHDR_VAR_INIT) VeCHDR_I_EVSEOutputCurr;/* '<S4>/Switch25' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static VAR(float32, CHDR_VAR_INIT) VeCHDR_I_HV_BatCurr;/* '<S4>/Switch59' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static VAR(float32, CHDR_VAR_INIT) VeCHDR_T_BatModTmp;/* '<S4>/Switch2' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static VAR(float32, CHDR_VAR_INIT) VeCHDR_T_HV_BatModTempMax;/* '<S4>/Switch1' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static VAR(float32, CHDR_VAR_INIT) VeCHDR_U_EVSEOutputVolt;/* '<S4>/Switch26' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static VAR(float32, CHDR_VAR_INIT) VeCHDR_U_HV_BatVolt;/* '<S4>/Switch10' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static VAR(float32, CHDR_VAR_INIT) VeCHDR_U_MaxPkVltAlld;/* '<S4>/Switch6' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static VAR(float32, CHDR_VAR_INIT) VeCHDR_U_MinPkVltAlld;/* '<S4>/Switch7' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static VAR(boolean, CHDR_VAR_INIT) VeCHDR_b_EVSE_ChrgSysErr;/* '<S4>/Switch20' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static VAR(boolean, CHDR_VAR_INIT) VeCHDR_b_EVSE_EnergizingState;/* '<S4>/Switch28' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static VAR(boolean, CHDR_VAR_INIT) VeCHDR_b_OBCM_Timeout;/* '<S4>/Switch14' */

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static VAR(float32, CHDR_VAR_INIT) VeCHDR_q_FullAmpHrCap;/* '<S4>/Switch4' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CHDR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_CHDR
#include "MemMap.h"

CONST(ConstB_CHDR_ac_T, CHDR_VAR_INIT) CHDR_ac_ConstB =
{

#if Rte_SysCon_Variant_CHDR_FUNC

    CeIDCR_e_CHAdeMO_2_0               /* '<S31>/Constant' */
#define CONSTB_CHDR_AC_T_VARIANT_EXISTS
#endif
#ifndef CONSTB_CHDR_AC_T_VARIANT_EXISTS
    0
#endif                           /* CONSTB_CHDR_AC_T_VARIANT_EXISTS undefined */
};

#define STOP_SEC_CONST_UNSPECIFIED_CHDR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CHDR
#include "MemMap.h"

VAR(B_CHDR_ac_T, CHDR_VAR_INIT) CHDR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CHDR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CHDR
#include "MemMap.h"

VAR(DW_CHDR_ac_T, CHDR_VAR_INIT) CHDR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CHDR
#include "MemMap.h"

static FUNC(void, CHDR_CODE_LOCAL) CHDR_ac_FUNC_Init(P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_OvrVolt_Flag_Out_I, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_UndrVolt_Flag_Out_, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_OverTemp_Flag_Out_, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_VhclDrveSts_Flag_O, P2VAR(float32, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_I_ChrgCurr_Min_Out_I, P2VAR(float32, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_Pct_ChrgRateRefConst, P2VAR(float32, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_t_EstChrg_Time_Out_I, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_StopReqBeforeCharg, P2VAR(float32, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_q_TotalBattCapacityO, P2VAR(float32, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_U_EVTarget_Volt_Out_, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_HVBatt_CrntDvtionE, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_HVBatt_VoltDvtionE, P2VAR(TeIDCR_e_CHAdeMOPrtcl,
    AUTOMATIC, CHDR_VAR_INIT) rty_VeCHDR_e_CHAdeMO_Protocol_O, P2VAR(boolean,
    AUTOMATIC, CHDR_VAR_INIT) rty_VeCHDR_b_DCChrgInitializati, P2VAR
    (TeCHDR_e_CHDMOChrgSysStat, AUTOMATIC, CHDR_VAR_INIT)
    rty_VeCHDR_e_CHDMOChrgSysStat_O, P2VAR(TeOBCR_e_DCCntctrCmd, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_e_DC_CntctrCmd_Out_I, P2VAR(float32, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_K_CHDMOexitReason_Ou, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_IsoDis_Cmd_Out_Ini, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_EV_Ready_Out_Init, P2VAR(float32, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_I_EV_TargetCurr_Out_, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_RdytoChrgStat_Out_, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_Vehicle_Status_Out, P2VAR(float32, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_t_MaxChrgTime_min_Ou, P2VAR(float32, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_t_MaxChrgTime_sec_Ou, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_CHDMOValidPlugIn_O, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_CHDMOFA_Out_Init, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VaCHDR_b_CHDMONCRVector_Out, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VaCHDR_b_CHDMONCRVector_O_i, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VaCHDR_b_CHDMONCRVector_O_a, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VaCHDR_b_CHDMONCRVector_O_m, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_EVCU_CP3Cmd_Out_In, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_EVContactorSts_Out);
static FUNC(void, CHDR_CODE_LOCAL) CHDR_ac_FUNC(P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_OvrVolt_Flag_Out_I, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_UndrVolt_Flag_Out_, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_OverTemp_Flag_Out_, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_VhclDrveSts_Flag_O, P2VAR(float32, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_I_ChrgCurr_Min_Out_I, P2VAR(float32, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_Pct_ChrgRateRefConst, P2VAR(float32, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_t_EstChrg_Time_Out_I, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_StopReqBeforeCharg, P2VAR(float32, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_q_TotalBattCapacityO, P2VAR(float32, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_U_EVTarget_Volt_Out_, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_HVBatt_CrntDvtionE, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_HVBatt_VoltDvtionE, P2VAR(TeIDCR_e_CHAdeMOPrtcl,
    AUTOMATIC, CHDR_VAR_INIT) rty_VeCHDR_e_CHAdeMO_Protocol_O, P2VAR(boolean,
    AUTOMATIC, CHDR_VAR_INIT) rty_VeCHDR_b_DCChrgInitializati, P2VAR
    (TeCHDR_e_CHDMOChrgSysStat, AUTOMATIC, CHDR_VAR_INIT)
    rty_VeCHDR_e_CHDMOChrgSysStat_O, P2VAR(TeOBCR_e_DCCntctrCmd, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_e_DC_CntctrCmd_Out_I, P2VAR(float32, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_K_CHDMOexitReason_Ou, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_IsoDis_Cmd_Out_Ini, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_EV_Ready_Out_Init, P2VAR(float32, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_I_EV_TargetCurr_Out_, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_RdytoChrgStat_Out_, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_Vehicle_Status_Out, P2VAR(float32, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_t_MaxChrgTime_min_Ou, P2VAR(float32, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_t_MaxChrgTime_sec_Ou, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_CHDMOValidPlugIn_O, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_CHDMOFA_Out_Init, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VaCHDR_b_CHDMONCRVector_Out, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VaCHDR_b_CHDMONCRVector_O_i, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VaCHDR_b_CHDMONCRVector_O_a, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VaCHDR_b_CHDMONCRVector_O_m, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_EVCU_CP3Cmd_Out_In, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_EVContactorSts_Out);

/* Forward declaration for local functions */
#if Rte_SysCon_Variant_CHDR_FUNC

static sint16 CHDR_ac_ShutdownReas(void);

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

static void CHDR_ac_CHDMOCommunication(void);

#endif

/*
 * System initialize for atomic system:
 *    '<S122>/FUNC'
 *    '<S122>/NF'
 */
static FUNC(void, CHDR_CODE_LOCAL) CHDR_ac_FUNC_Init(P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_OvrVolt_Flag_Out_I, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_UndrVolt_Flag_Out_, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_OverTemp_Flag_Out_, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_VhclDrveSts_Flag_O, P2VAR(float32, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_I_ChrgCurr_Min_Out_I, P2VAR(float32, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_Pct_ChrgRateRefConst, P2VAR(float32, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_t_EstChrg_Time_Out_I, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_StopReqBeforeCharg, P2VAR(float32, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_q_TotalBattCapacityO, P2VAR(float32, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_U_EVTarget_Volt_Out_, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_HVBatt_CrntDvtionE, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_HVBatt_VoltDvtionE, P2VAR(TeIDCR_e_CHAdeMOPrtcl,
    AUTOMATIC, CHDR_VAR_INIT) rty_VeCHDR_e_CHAdeMO_Protocol_O, P2VAR(boolean,
    AUTOMATIC, CHDR_VAR_INIT) rty_VeCHDR_b_DCChrgInitializati, P2VAR
    (TeCHDR_e_CHDMOChrgSysStat, AUTOMATIC, CHDR_VAR_INIT)
    rty_VeCHDR_e_CHDMOChrgSysStat_O, P2VAR(TeOBCR_e_DCCntctrCmd, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_e_DC_CntctrCmd_Out_I, P2VAR(float32, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_K_CHDMOexitReason_Ou, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_IsoDis_Cmd_Out_Ini, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_EV_Ready_Out_Init, P2VAR(float32, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_I_EV_TargetCurr_Out_, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_RdytoChrgStat_Out_, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_Vehicle_Status_Out, P2VAR(float32, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_t_MaxChrgTime_min_Ou, P2VAR(float32, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_t_MaxChrgTime_sec_Ou, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_CHDMOValidPlugIn_O, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_CHDMOFA_Out_Init, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VaCHDR_b_CHDMONCRVector_Out, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VaCHDR_b_CHDMONCRVector_O_i, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VaCHDR_b_CHDMONCRVector_O_a, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VaCHDR_b_CHDMONCRVector_O_m, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_EVCU_CP3Cmd_Out_In, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_EVContactorSts_Out)
{
    /* Start for Constant: '<S140>/Calib' */
    *rty_VeCHDR_b_OvrVolt_Flag_Out_I = KeCHDR_b_OvrVolt_Flag_Out_Init;

    /* Start for Constant: '<S143>/Calib' */
    *rty_VeCHDR_b_UndrVolt_Flag_Out_ = KeCHDR_b_UndrVolt_Flag_Out_Init;

    /* Start for Constant: '<S139>/Calib' */
    *rty_VeCHDR_b_OverTemp_Flag_Out_ = KeCHDR_b_OverTemp_Flag_Out_Init;

    /* Start for Constant: '<S145>/Calib' */
    *rty_VeCHDR_b_VhclDrveSts_Flag_O = KeCHDR_b_VhclDrveSts_Flag_Out_Init;

    /* Start for Constant: '<S125>/Calib' */
    *rty_VeCHDR_I_ChrgCurr_Min_Out_I = KeCHDR_I_ChrgCurr_Min_Out_Init;

    /* Start for Constant: '<S128>/Calib' */
    *rty_VeCHDR_Pct_ChrgRateRefConst = KeCHDR_Pct_ChrgRateRefConstnt_Out_Init;

    /* Start for Constant: '<S150>/Calib' */
    *rty_VeCHDR_t_EstChrg_Time_Out_I = KeCHDR_t_EstChrg_Time_Out_Init;

    /* Start for Constant: '<S142>/Calib' */
    *rty_VeCHDR_b_StopReqBeforeCharg = KeCHDR_b_StopReqBeforeCharge_Out_Init;

    /* Start for Constant: '<S149>/Calib' */
    *rty_VeCHDR_q_TotalBattCapacityO = KeCHDR_q_TotalBattCapacityOut_Init;

    /* Start for Constant: '<S129>/Calib' */
    *rty_VeCHDR_U_EVTarget_Volt_Out_ = KeCHDR_U_EVTarget_Volt_Out_Init;

    /* Start for Constant: '<S136>/Calib' */
    *rty_VeCHDR_b_HVBatt_CrntDvtionE = KeCHDR_b_HVBatt_CrntDvtionError_Out_Init;

    /* Start for Constant: '<S137>/Calib' */
    *rty_VeCHDR_b_HVBatt_VoltDvtionE = KeCHDR_b_HVBatt_VoltDvtionError_Out_Init;

    /* Start for Constant: '<S146>/Calib' */
    *rty_VeCHDR_e_CHAdeMO_Protocol_O = KeCHDR_e_CHAdeMO_Protocol_Out_Init;

    /* Start for Constant: '<S132>/Calib' */
    *rty_VeCHDR_b_DCChrgInitializati = KeCHDR_b_DCChrgInitialization_Out_Init;

    /* Start for Constant: '<S147>/Calib' */
    *rty_VeCHDR_e_CHDMOChrgSysStat_O = KeCHDR_e_CHDMOChrgSysStat_Out_Init;

    /* Start for Constant: '<S148>/Calib' */
    *rty_VeCHDR_e_DC_CntctrCmd_Out_I = KeCHDR_e_DC_CntctrCmd_Out_Init;

    /* Start for Constant: '<S127>/Calib' */
    *rty_VeCHDR_K_CHDMOexitReason_Ou = KeCHDR_K_CHDMOexitReason_Out_Init;

    /* Start for Constant: '<S138>/Calib' */
    *rty_VeCHDR_b_IsoDis_Cmd_Out_Ini = KeCHDR_b_IsoDis_Cmd_Out_Init;

    /* Start for Constant: '<S135>/Calib' */
    *rty_VeCHDR_b_EV_Ready_Out_Init = KeCHDR_b_EV_Ready_Out_Init;

    /* Start for Constant: '<S126>/Calib' */
    *rty_VeCHDR_I_EV_TargetCurr_Out_ = KeCHDR_I_EV_TargetCurr_Out_Init;

    /* Start for Constant: '<S141>/Calib' */
    *rty_VeCHDR_b_RdytoChrgStat_Out_ = KeCHDR_b_RdytoChrgStat_Out_Init;

    /* Start for Constant: '<S144>/Calib' */
    *rty_VeCHDR_b_Vehicle_Status_Out = KeCHDR_b_Vehicle_Status_Out_Init;

    /* Start for Constant: '<S151>/Calib' */
    *rty_VeCHDR_t_MaxChrgTime_min_Ou = KeCHDR_t_MaxChrgTime_min_Out_Init;

    /* Start for Constant: '<S152>/Calib' */
    *rty_VeCHDR_t_MaxChrgTime_sec_Ou = KeCHDR_t_MaxChrgTime_sec_Out_Init;

    /* Start for Constant: '<S131>/Calib' */
    *rty_VeCHDR_b_CHDMOValidPlugIn_O = KeCHDR_b_CHDMOValidPlugIn_Out_Init;

    /* Start for Constant: '<S130>/Calib' */
    *rty_VeCHDR_b_CHDMOFA_Out_Init = KeCHDR_b_CHDMOFA_Out_Init;

    /* Start for Constant: '<S123>/Const24' */
    *rty_VaCHDR_b_CHDMONCRVector_Out = false;

    /* Start for Constant: '<S123>/Const25' */
    *rty_VaCHDR_b_CHDMONCRVector_O_i = false;

    /* Start for Constant: '<S123>/Const26' */
    *rty_VaCHDR_b_CHDMONCRVector_O_a = false;

    /* Start for Constant: '<S123>/Const27' */
    *rty_VaCHDR_b_CHDMONCRVector_O_m = false;

    /* Start for Constant: '<S133>/Calib' */
    *rty_VeCHDR_b_EVCU_CP3Cmd_Out_In = KeCHDR_b_EVCU_CP3Cmd_Out_Init;

    /* Start for Constant: '<S134>/Calib' */
    *rty_VeCHDR_b_EVContactorSts_Out = KeCHDR_b_EVContactorSts_Out_Init;
}

/*
 * Output and update for atomic system:
 *    '<S122>/FUNC'
 *    '<S122>/NF'
 */
static FUNC(void, CHDR_CODE_LOCAL) CHDR_ac_FUNC(P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_OvrVolt_Flag_Out_I, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_UndrVolt_Flag_Out_, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_OverTemp_Flag_Out_, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_VhclDrveSts_Flag_O, P2VAR(float32, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_I_ChrgCurr_Min_Out_I, P2VAR(float32, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_Pct_ChrgRateRefConst, P2VAR(float32, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_t_EstChrg_Time_Out_I, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_StopReqBeforeCharg, P2VAR(float32, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_q_TotalBattCapacityO, P2VAR(float32, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_U_EVTarget_Volt_Out_, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_HVBatt_CrntDvtionE, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_HVBatt_VoltDvtionE, P2VAR(TeIDCR_e_CHAdeMOPrtcl,
    AUTOMATIC, CHDR_VAR_INIT) rty_VeCHDR_e_CHAdeMO_Protocol_O, P2VAR(boolean,
    AUTOMATIC, CHDR_VAR_INIT) rty_VeCHDR_b_DCChrgInitializati, P2VAR
    (TeCHDR_e_CHDMOChrgSysStat, AUTOMATIC, CHDR_VAR_INIT)
    rty_VeCHDR_e_CHDMOChrgSysStat_O, P2VAR(TeOBCR_e_DCCntctrCmd, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_e_DC_CntctrCmd_Out_I, P2VAR(float32, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_K_CHDMOexitReason_Ou, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_IsoDis_Cmd_Out_Ini, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_EV_Ready_Out_Init, P2VAR(float32, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_I_EV_TargetCurr_Out_, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_RdytoChrgStat_Out_, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_Vehicle_Status_Out, P2VAR(float32, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_t_MaxChrgTime_min_Ou, P2VAR(float32, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_t_MaxChrgTime_sec_Ou, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_CHDMOValidPlugIn_O, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_CHDMOFA_Out_Init, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VaCHDR_b_CHDMONCRVector_Out, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VaCHDR_b_CHDMONCRVector_O_i, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VaCHDR_b_CHDMONCRVector_O_a, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VaCHDR_b_CHDMONCRVector_O_m, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_EVCU_CP3Cmd_Out_In, P2VAR(boolean, AUTOMATIC,
    CHDR_VAR_INIT) rty_VeCHDR_b_EVContactorSts_Out)
{
    /* Constant: '<S140>/Calib' */
    *rty_VeCHDR_b_OvrVolt_Flag_Out_I = KeCHDR_b_OvrVolt_Flag_Out_Init;

    /* Constant: '<S143>/Calib' */
    *rty_VeCHDR_b_UndrVolt_Flag_Out_ = KeCHDR_b_UndrVolt_Flag_Out_Init;

    /* Constant: '<S139>/Calib' */
    *rty_VeCHDR_b_OverTemp_Flag_Out_ = KeCHDR_b_OverTemp_Flag_Out_Init;

    /* Constant: '<S145>/Calib' */
    *rty_VeCHDR_b_VhclDrveSts_Flag_O = KeCHDR_b_VhclDrveSts_Flag_Out_Init;

    /* Constant: '<S125>/Calib' */
    *rty_VeCHDR_I_ChrgCurr_Min_Out_I = KeCHDR_I_ChrgCurr_Min_Out_Init;

    /* Constant: '<S128>/Calib' */
    *rty_VeCHDR_Pct_ChrgRateRefConst = KeCHDR_Pct_ChrgRateRefConstnt_Out_Init;

    /* Constant: '<S150>/Calib' */
    *rty_VeCHDR_t_EstChrg_Time_Out_I = KeCHDR_t_EstChrg_Time_Out_Init;

    /* Constant: '<S142>/Calib' */
    *rty_VeCHDR_b_StopReqBeforeCharg = KeCHDR_b_StopReqBeforeCharge_Out_Init;

    /* Constant: '<S149>/Calib' */
    *rty_VeCHDR_q_TotalBattCapacityO = KeCHDR_q_TotalBattCapacityOut_Init;

    /* Constant: '<S129>/Calib' */
    *rty_VeCHDR_U_EVTarget_Volt_Out_ = KeCHDR_U_EVTarget_Volt_Out_Init;

    /* Constant: '<S136>/Calib' */
    *rty_VeCHDR_b_HVBatt_CrntDvtionE = KeCHDR_b_HVBatt_CrntDvtionError_Out_Init;

    /* Constant: '<S137>/Calib' */
    *rty_VeCHDR_b_HVBatt_VoltDvtionE = KeCHDR_b_HVBatt_VoltDvtionError_Out_Init;

    /* Constant: '<S146>/Calib' */
    *rty_VeCHDR_e_CHAdeMO_Protocol_O = KeCHDR_e_CHAdeMO_Protocol_Out_Init;

    /* Constant: '<S132>/Calib' */
    *rty_VeCHDR_b_DCChrgInitializati = KeCHDR_b_DCChrgInitialization_Out_Init;

    /* Constant: '<S147>/Calib' */
    *rty_VeCHDR_e_CHDMOChrgSysStat_O = KeCHDR_e_CHDMOChrgSysStat_Out_Init;

    /* Constant: '<S148>/Calib' */
    *rty_VeCHDR_e_DC_CntctrCmd_Out_I = KeCHDR_e_DC_CntctrCmd_Out_Init;

    /* Constant: '<S127>/Calib' */
    *rty_VeCHDR_K_CHDMOexitReason_Ou = KeCHDR_K_CHDMOexitReason_Out_Init;

    /* Constant: '<S138>/Calib' */
    *rty_VeCHDR_b_IsoDis_Cmd_Out_Ini = KeCHDR_b_IsoDis_Cmd_Out_Init;

    /* Constant: '<S135>/Calib' */
    *rty_VeCHDR_b_EV_Ready_Out_Init = KeCHDR_b_EV_Ready_Out_Init;

    /* Constant: '<S126>/Calib' */
    *rty_VeCHDR_I_EV_TargetCurr_Out_ = KeCHDR_I_EV_TargetCurr_Out_Init;

    /* Constant: '<S141>/Calib' */
    *rty_VeCHDR_b_RdytoChrgStat_Out_ = KeCHDR_b_RdytoChrgStat_Out_Init;

    /* Constant: '<S144>/Calib' */
    *rty_VeCHDR_b_Vehicle_Status_Out = KeCHDR_b_Vehicle_Status_Out_Init;

    /* Constant: '<S151>/Calib' */
    *rty_VeCHDR_t_MaxChrgTime_min_Ou = KeCHDR_t_MaxChrgTime_min_Out_Init;

    /* Constant: '<S152>/Calib' */
    *rty_VeCHDR_t_MaxChrgTime_sec_Ou = KeCHDR_t_MaxChrgTime_sec_Out_Init;

    /* Constant: '<S131>/Calib' */
    *rty_VeCHDR_b_CHDMOValidPlugIn_O = KeCHDR_b_CHDMOValidPlugIn_Out_Init;

    /* Constant: '<S130>/Calib' */
    *rty_VeCHDR_b_CHDMOFA_Out_Init = KeCHDR_b_CHDMOFA_Out_Init;

    /* Constant: '<S123>/Const24' */
    *rty_VaCHDR_b_CHDMONCRVector_Out = false;

    /* Constant: '<S123>/Const25' */
    *rty_VaCHDR_b_CHDMONCRVector_O_i = false;

    /* Constant: '<S123>/Const26' */
    *rty_VaCHDR_b_CHDMONCRVector_O_a = false;

    /* Constant: '<S123>/Const27' */
    *rty_VaCHDR_b_CHDMONCRVector_O_m = false;

    /* Constant: '<S133>/Calib' */
    *rty_VeCHDR_b_EVCU_CP3Cmd_Out_In = KeCHDR_b_EVCU_CP3Cmd_Out_Init;

    /* Constant: '<S134>/Calib' */
    *rty_VeCHDR_b_EVContactorSts_Out = KeCHDR_b_EVContactorSts_Out_Init;
}

/* Function for Chart: '<S8>/CHAdeMO' */
#if Rte_SysCon_Variant_CHDR_FUNC

static sint16 CHDR_ac_ShutdownReas(void)
{
    sint16 ShtdwnTypeCHDMO;
    TeBPCR_e_DCCntctrSts tmpRead;

    /* Graphical Function 'ShutdownReas': '<S24>:390' */
    /* Transition: '<S24>:398' */
    ShtdwnTypeCHDMO = 0;

    /* Inport: '<Root>/VeBPCR_e_HVBat_DC_CntctrStat' */
    (void)Rte_Read_VeBPCR_e_HVBat_DC_CntctrStat_Value(&tmpRead);

    /* Inport: '<Root>/VeBPCR_e_HVBat_DC_CntctrStat' */
    if ((((sint32)tmpRead) == 1) && (((((((((((((((CHDR_ac_B.CHDMOexitReason ==
                       9.0F) || (CHDR_ac_B.CHDMOexitReason == 10.0F)) ||
                     (CHDR_ac_B.CHDMOexitReason == 11.0F)) ||
                    (CHDR_ac_B.CHDMOexitReason == 12.0F)) ||
                   (CHDR_ac_B.CHDMOexitReason == 13.0F)) ||
                  (CHDR_ac_B.CHDMOexitReason == 14.0F)) ||
                 (CHDR_ac_B.CHDMOexitReason == 15.0F)) ||
                (CHDR_ac_B.CHDMOexitReason == 16.0F)) ||
               (CHDR_ac_B.CHDMOexitReason == 18.0F)) ||
              (CHDR_ac_B.CHDMOexitReason == 19.0F)) ||
             (CHDR_ac_B.CHDMOexitReason == 20.0F)) || (CHDR_ac_B.CHDMOexitReason
             == 21.0F)) || (CHDR_ac_B.CHDMOexitReason == 22.0F)) ||
            (CHDR_ac_B.CHDMOexitReason == 23.0F)) || (CHDR_ac_B.CHDMOexitReason ==
          24.0F)))
    {
        /* Transition: '<S24>:399' */
        /* Transition: '<S24>:401' */
        /* Transition: '<S24>:402' */
        /* Transition: '<S24>:404' */
        ShtdwnTypeCHDMO = 1;

        /* Transition: '<S24>:405' */
    }
    else
    {
        /* Transition: '<S24>:400' */
        /* Transition: '<S24>:403' */
    }

    /* End of Inport: '<Root>/VeBPCR_e_HVBat_DC_CntctrStat' */
    /* Transition: '<S24>:406' */
    return ShtdwnTypeCHDMO;
}

#endif

/* Function for Chart: '<S8>/CHAdeMO' */
#if Rte_SysCon_Variant_CHDR_FUNC

static void CHDR_ac_CHDMOCommunication(void)
{
    TeBPCR_e_DCCntctrSts tmpRead;
    TeIDCR_e_ExtChargerSts tmpRead_0;

    /* Inport: '<Root>/VeBPCR_e_HVBat_DC_CntctrStat' */
    /* During 'CHDMOCommunication': '<S24>:1' */
    (void)Rte_Read_VeBPCR_e_HVBat_DC_CntctrStat_Value(&tmpRead);

    /* Inport: '<Root>/VeIDCR_e_ExtChargerSts' */
    (void)Rte_Read_VeIDCR_e_ExtChargerSts_Value(&tmpRead_0);
    if (VeCHDR_b_EVSE_ChrgSysErr)
    {
        /* Transition: '<S24>:90' */
        CHDR_ac_B.CHDMOexitReason = 14.0F;

        /* Transition: '<S24>:95' */
        /* Transition: '<S24>:96' */
        /* Transition: '<S24>:97' */
    }
    else if (!CHDR_ac_B.TmpSignalConversionAtSecureConn)
    {
        /* Transition: '<S24>:77' */
        CHDR_ac_B.CHDMOexitReason = 10.0F;
    }
    else
    {
        /* Transition: '<S24>:84' */
        CHDR_ac_B.CHDMOexitReason = 12.0F;

        /* Transition: '<S24>:97' */
    }

    /* Transition: '<S24>:99' */
    /* Transition: '<S24>:100' */
    /* Exit Internal 'CHDMOCommunication': '<S24>:1' */
    CHDR_ac_DW.is_CHDMOCommunication = CHDR_ac_IN_NO_ACTIVE_CHILD;
    CHDR_ac_DW.is_c1_CHDR_ac = CHDR_ac_IN_CHDMOShutdown;

    /* Entry Internal 'CHDMOShutdown': '<S24>:73' */
    /* Transition: '<S24>:130' */
    CHDR_ac_DW.ShtdwnTypeCHDMO = (float64)CHDR_ac_ShutdownReas();
    CHDR_ac_DW.is_CHDMOShutdown = CHDR_ac_IN_CHDMOShutdownin;

    /* Entry 'CHDMOShutdownin': '<S24>:129' */
    CHDR_ac_B.CHDMOChrgSysStat = CeCHDR_e_CHDMOShtDwn;
    CHDR_ac_B.CHDMOStateTimer = 0.0;
}

#endif

/* Model step function for TID1 */
#if Rte_SysCon_Variant_CHDR_FUNC

FUNC(void, CHDR_CODE) CHDR_MedTED(void) /* Explicit Task: MedTED */
{

#if Rte_SysCon_Variant_CHDR_FUNC

    float32 tmpRead;

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    float32 tmpRead_0;

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    float32 tmpRead_1;

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    TeBPCR_e_DCCntctrSts tmpRead_2;

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    float32 tmpRead_3;

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    TeBPCR_e_HV_IsolStat_raw tmpRead_4;

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    float32 tmpRead_5;

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    float32 tmpRead_6;

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    float32 tmpRead_7;

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    TeIDCR_e_ExtChargerSts tmpRead_8;

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    TeIDCR_e_Charger_WeldDetAvail tmpRead_9;

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    TeOBCR_e_ChrgSysStat tmpRead_a;

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    float32 tmpRead_b;

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    float32 tmpRead_c;

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    boolean tmpRead_d;

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    boolean tmpRead_e;

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    boolean tmpRead_f;

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    boolean tmpRead_g;

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    boolean tmpRead_h;

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    boolean tmpRead_i;

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    boolean tmpRead_j;

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    boolean tmpRead_k;

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    boolean tmpRead_l;

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    boolean tmpRead_m;

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    TeTRGR_e_TransRangeState tmpRead_n;

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    boolean rtb_UnitDelay_e;

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    boolean rtb_RelationalOperator9_f;

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    boolean rtb_RelationalOperator;

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    float32 rtb_TmpSignalConversionAtChrgCr;

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    boolean rtb_RelationalOperator11;

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    boolean rtb_LessThan1;

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    boolean rtb_LessThan2;

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    float32 rtb_Switch4;

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    uint16 rtb_Switch1_f;

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    boolean rtb_AND_dj;

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    boolean rtb_AND_fb;

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    boolean rtb_AND_o;

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    boolean rtb_AND_ot;

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    uint16 rtb_Switch1;

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    uint16 rtb_Switch;

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    TeIDCR_e_OBCM_CSSts rtb_TmpSignalConversionAtOBCMCS;

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    TeIDCR_e_CHAdeMOPrtcl rtb_TmpSignalConversionAtEVSE_C;

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    boolean Gain_f[4];

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    float32 Switch2_o;

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    boolean Switch5;

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    boolean Switch1;

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    boolean UnitDelay;

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    boolean UnitDelay2;

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    sint32 tmp;

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    TeIDCR_e_OBCM_CP2Sts tmp_0;

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    TeIDCR_e_OBCM_CP1Sts Gain_f_tmp;

#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
    /* Inport: '<Root>/VeIDCR_b_Charger_WeldingDetectAvail_FA' */
    (void)Rte_Read_VeIDCR_b_Charger_WeldingDetectAvail_FA_Value(&tmpRead_m);

    /* Inport: '<Root>/VeIDCR_b_EVSE_ThrshldVoltage_FA' */
    (void)Rte_Read_VeIDCR_b_EVSE_ThrshldVoltage_FA_Value(&tmpRead_l);

    /* Inport: '<Root>/VeIDCR_b_EVSE_EnergizingState_FA' */
    (void)Rte_Read_VeIDCR_b_EVSE_EnergizingState_FA_Value(&tmpRead_k);

    /* Inport: '<Root>/VeIDCR_b_EVSE_ChargingSystemError_FA' */
    (void)Rte_Read_VeIDCR_b_EVSE_ChargingSystemError_FA_Value(&tmpRead_j);

    /* Inport: '<Root>/VeIDCR_b_EVSE_CHAdeMOProtocol_FA' */
    (void)Rte_Read_VeIDCR_b_EVSE_CHAdeMOProtocol_FA_Value(&tmpRead_i);

    /* Inport: '<Root>/VeIDCR_b_ExtChargerSts_FA' */
    (void)Rte_Read_VeIDCR_b_ExtChargerSts_FA_Value(&tmpRead_h);

    /* Inport: '<Root>/VeIDCR_b_OBCM_CSSts_FA' */
    (void)Rte_Read_VeIDCR_b_OBCM_CSSts_FA_Value(&tmpRead_g);

    /* Inport: '<Root>/VeIDCR_b_OBCM_CP3Sts_FA' */
    (void)Rte_Read_VeIDCR_b_OBCM_CP3Sts_FA_Value(&tmpRead_f);

    /* Inport: '<Root>/VeIDCR_b_OBCM_CP2Sts_FA' */
    (void)Rte_Read_VeIDCR_b_OBCM_CP2Sts_FA_Value(&tmpRead_e);

    /* Inport: '<Root>/VeIDCR_b_OBCM_CP1Sts_FA' */
    (void)Rte_Read_VeIDCR_b_OBCM_CP1Sts_FA_Value(&tmpRead_d);

    /* Inport: '<Root>/VeOBCR_t_EstTimeDCFastChrg_100' */
    (void)Rte_Read_VeOBCR_t_EstTimeDCFastChrg_100_Value(&tmpRead_b);

    /* Inport: '<Root>/VeIDCR_b_EVSE_EnergizingState' */
    (void)Rte_Read_VeIDCR_b_EVSE_EnergizingState_Value(&rtb_UnitDelay_e);

    /* Inport: '<Root>/VeIDCR_U_EVSEOutputVolt' */
    (void)Rte_Read_VeIDCR_U_EVSEOutputVolt_Value(&Switch2_o);

    /* Inport: '<Root>/VeIDCR_I_EVSEOutputCurr' */
    (void)Rte_Read_VeIDCR_I_EVSEOutputCurr_Value(&rtb_Switch4);

    /* Inport: '<Root>/VeIDCR_b_EVSE_ChargingSystemError' */
    (void)Rte_Read_VeIDCR_b_EVSE_ChargingSystemError_Value(&Switch1);

    /* Inport: '<Root>/VeIDCR_b_OBCM_TimeOut' */
    (void)Rte_Read_VeIDCR_b_OBCM_TimeOut_Value(&UnitDelay);

    /* Inport: '<Root>/VeBPCR_U_HV_BatVolt' */
    (void)Rte_Read_VeBPCR_U_HV_BatVolt_Value(&tmpRead_7);

    /* Inport: '<Root>/VeBPCR_U_MinPkVltAlld' */
    (void)Rte_Read_VeBPCR_U_MinPkVltAlld_Value(&tmpRead_6);

    /* Inport: '<Root>/VeBPCR_U_MaxPkVltAlld' */
    (void)Rte_Read_VeBPCR_U_MaxPkVltAlld_Value(&tmpRead_5);

    /* Inport: '<Root>/VeBPCR_q_FullAmpHrCap' */
    (void)Rte_Read_VeBPCR_q_FullAmpHrCap_Value(&tmpRead_3);

    /* Inport: '<Root>/VeBPCR_T_BatModTmp' */
    (void)Rte_Read_VeBPCR_T_BatModTmp_Value(&tmpRead_1);

    /* Inport: '<Root>/VeBPCR_T_HV_BatModTempMax' */
    (void)Rte_Read_VeBPCR_T_HV_BatModTempMax_Value(&tmpRead_0);

    /* Inport: '<Root>/VeBPCR_I_HV_BatCurr' */
    (void)Rte_Read_VeBPCR_I_HV_BatCurr_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<Root>/CHDR_MedTED' */
    /* SignalConversion generated from: '<S1>/EVSE_CHAdeMOProtocol' incorporates:
     *  Inport: '<Root>/VeIDCR_e_EVSE_CHAdeMOProtocol'
     */
    (void)Rte_Read_VeIDCR_e_EVSE_CHAdeMOProtocol_Value
        (&rtb_TmpSignalConversionAtEVSE_C);

    /* SignalConversion generated from: '<S1>/EVSE_Error' incorporates:
     *  Inport: '<Root>/VeIDCR_e_EVSE_Error'
     */
    (void)Rte_Read_VeIDCR_e_EVSE_Error_Value
        (&CHDR_ac_B.TmpSignalConversionAtEVSE_Error);

    /* SignalConversion generated from: '<S1>/EVSE_ChrgStopControl' incorporates:
     *  Inport: '<Root>/VeIDCR_e_EVSE_ChrgStopControl'
     */
    (void)Rte_Read_VeIDCR_e_EVSE_ChrgStopControl_Value
        (&CHDR_ac_B.TmpSignalConversionAtEVSE_ChrgS);

    /* SignalConversion generated from: '<S1>/OBCMCP1Sts' incorporates:
     *  Inport: '<Root>/VeIDCR_e_OBCM_CP1Sts'
     */
    (void)Rte_Read_VeIDCR_e_OBCM_CP1Sts_Value
        (&CHDR_ac_B.TmpSignalConversionAtOBCMCP1Sts);

    /* SignalConversion generated from: '<S1>/OBCMCP2Sts' incorporates:
     *  Inport: '<Root>/VeIDCR_e_OBCM_CP2Sts'
     */
    (void)Rte_Read_VeIDCR_e_OBCM_CP2Sts_Value
        (&CHDR_ac_B.TmpSignalConversionAtOBCMCP2Sts);

    /* SignalConversion generated from: '<S1>/OBCMCP3Sts' incorporates:
     *  Inport: '<Root>/VeIDCR_e_OBCM_CP3Sts'
     */
    (void)Rte_Read_VeIDCR_e_OBCM_CP3Sts_Value
        (&CHDR_ac_B.TmpSignalConversionAtOBCMCP3Sts);

    /* SignalConversion generated from: '<S1>/OBCMCSSts' incorporates:
     *  Inport: '<Root>/VeIDCR_e_OBCM_CSSts'
     */
    (void)Rte_Read_VeIDCR_e_OBCM_CSSts_Value(&rtb_TmpSignalConversionAtOBCMCS);

    /* SignalConversion generated from: '<S1>/ChrgCrntReqDelta' incorporates:
     *  Inport: '<Root>/VeOBCR_I_ChrgCrntReqDelta'
     */
    (void)Rte_Read_VeOBCR_I_ChrgCrntReqDelta_Value
        (&rtb_TmpSignalConversionAtChrgCr);

    /* SignalConversion generated from: '<S1>/SecureConnEst' incorporates:
     *  Inport: '<Root>/VeOBCR_b_SecureConEst'
     */
    (void)Rte_Read_VeOBCR_b_SecureConEst_Value
        (&CHDR_ac_B.TmpSignalConversionAtSecureConn);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CHDI'
     */
    /* Switch: '<S4>/Switch59' incorporates:
     *  Constant: '<S83>/Calib'
     */
    if (KeCHDR_b_HV_BatCurr_Ovrd)
    {
        /* Switch: '<S4>/Switch59' incorporates:
         *  Constant: '<S69>/Calib'
         */
        VeCHDR_I_HV_BatCurr = KeCHDR_I_HV_BatCurr_Val;
    }
    else
    {
        /* Switch: '<S4>/Switch59' */
        VeCHDR_I_HV_BatCurr = tmpRead;
    }

    /* End of Switch: '<S4>/Switch59' */

    /* Switch: '<S4>/Switch1' incorporates:
     *  Constant: '<S84>/Calib'
     */
    if (KeCHDR_b_HV_BatModTempMax_Ovrd)
    {
        /* Switch: '<S4>/Switch1' incorporates:
         *  Constant: '<S70>/Calib'
         */
        VeCHDR_T_HV_BatModTempMax = KeCHDR_T_HV_BatModTempMax_Val;
    }
    else
    {
        /* Switch: '<S4>/Switch1' */
        VeCHDR_T_HV_BatModTempMax = tmpRead_0;
    }

    /* End of Switch: '<S4>/Switch1' */

    /* Switch: '<S4>/Switch2' incorporates:
     *  Constant: '<S85>/Calib'
     */
    if (KeCHDR_b_HV_BatModTemp_Ovrd)
    {
        /* Switch: '<S4>/Switch2' incorporates:
         *  Constant: '<S71>/Calib'
         */
        VeCHDR_T_BatModTmp = KeCHDR_T_HV_BatModTemp_Val;
    }
    else
    {
        /* Switch: '<S4>/Switch2' */
        VeCHDR_T_BatModTmp = tmpRead_1;
    }

    /* End of Switch: '<S4>/Switch2' */

    /* Switch: '<S4>/Switch4' incorporates:
     *  Constant: '<S82>/Calib'
     */
    if (KeCHDR_b_FullAmpHrCap_Ovrd)
    {
        /* Switch: '<S4>/Switch4' incorporates:
         *  Constant: '<S91>/Calib'
         */
        VeCHDR_q_FullAmpHrCap = KeCHDR_q_FullAmpHrCap_Val;
    }
    else
    {
        /* Switch: '<S4>/Switch4' */
        VeCHDR_q_FullAmpHrCap = tmpRead_3;
    }

    /* End of Switch: '<S4>/Switch4' */

    /* Switch: '<S4>/Switch6' incorporates:
     *  Constant: '<S87>/Calib'
     */
    if (KeCHDR_b_MaxPkVltAlld_Ovrd)
    {
        /* Switch: '<S4>/Switch6' incorporates:
         *  Constant: '<S74>/Calib'
         */
        VeCHDR_U_MaxPkVltAlld = KeCHDR_U_MaxPkVltAlld_Val;
    }
    else
    {
        /* Switch: '<S4>/Switch6' */
        VeCHDR_U_MaxPkVltAlld = tmpRead_5;
    }

    /* End of Switch: '<S4>/Switch6' */

    /* Switch: '<S4>/Switch7' incorporates:
     *  Constant: '<S88>/Calib'
     */
    if (KeCHDR_b_MinPkVltAlld_Ovrd)
    {
        /* Switch: '<S4>/Switch7' incorporates:
         *  Constant: '<S75>/Calib'
         */
        VeCHDR_U_MinPkVltAlld = KeCHDR_U_MinPkVltAlld_Val;
    }
    else
    {
        /* Switch: '<S4>/Switch7' */
        VeCHDR_U_MinPkVltAlld = tmpRead_6;
    }

    /* End of Switch: '<S4>/Switch7' */

    /* Switch: '<S4>/Switch10' incorporates:
     *  Constant: '<S86>/Calib'
     */
    if (KeCHDR_b_HV_BatVolt_Ovrd)
    {
        /* Switch: '<S4>/Switch10' incorporates:
         *  Constant: '<S73>/Calib'
         */
        VeCHDR_U_HV_BatVolt = KeCHDR_U_HV_BatVolt_Val;
    }
    else
    {
        /* Switch: '<S4>/Switch10' */
        VeCHDR_U_HV_BatVolt = tmpRead_7;
    }

    /* End of Switch: '<S4>/Switch10' */

    /* Switch: '<S4>/Switch14' incorporates:
     *  Constant: '<S89>/Calib'
     */
    if (KeCHDR_b_OBCM_Timeout_Ovrd)
    {
        /* Switch: '<S4>/Switch14' incorporates:
         *  Constant: '<S90>/Calib'
         */
        VeCHDR_b_OBCM_Timeout = KeCHDR_b_OBCM_Timeout_Val;
    }
    else
    {
        /* Switch: '<S4>/Switch14' */
        VeCHDR_b_OBCM_Timeout = UnitDelay;
    }

    /* End of Switch: '<S4>/Switch14' */

    /* Switch: '<S4>/Switch20' incorporates:
     *  Constant: '<S78>/Calib'
     */
    if (KeCHDR_b_EVSE_ChrgSysErr_Ovrd)
    {
        /* Switch: '<S4>/Switch20' incorporates:
         *  Constant: '<S79>/Calib'
         */
        VeCHDR_b_EVSE_ChrgSysErr = KeCHDR_b_EVSE_ChrgSysErr_Val;
    }
    else
    {
        /* Switch: '<S4>/Switch20' */
        VeCHDR_b_EVSE_ChrgSysErr = Switch1;
    }

    /* End of Switch: '<S4>/Switch20' */

    /* Switch: '<S4>/Switch25' incorporates:
     *  Constant: '<S76>/Calib'
     */
    if (KeCHDR_b_EVSEOutputCurr_Ovrd)
    {
        /* Switch: '<S4>/Switch25' incorporates:
         *  Constant: '<S68>/Calib'
         */
        VeCHDR_I_EVSEOutputCurr = KeCHDR_I_EVSEOutputCurr_Val;
    }
    else
    {
        /* Switch: '<S4>/Switch25' */
        VeCHDR_I_EVSEOutputCurr = rtb_Switch4;
    }

    /* End of Switch: '<S4>/Switch25' */

    /* Switch: '<S4>/Switch26' incorporates:
     *  Constant: '<S77>/Calib'
     */
    if (KeCHDR_b_EVSEOutputVolt_Ovrd)
    {
        /* Switch: '<S4>/Switch26' incorporates:
         *  Constant: '<S72>/Calib'
         */
        VeCHDR_U_EVSEOutputVolt = KeCHDR_U_EVSEOutputVolt_Val;
    }
    else
    {
        /* Switch: '<S4>/Switch26' */
        VeCHDR_U_EVSEOutputVolt = Switch2_o;
    }

    /* End of Switch: '<S4>/Switch26' */

    /* Switch: '<S4>/Switch28' incorporates:
     *  Constant: '<S80>/Calib'
     */
    if (KeCHDR_b_EVSE_EnergizingState_Ovrd)
    {
        /* Switch: '<S4>/Switch28' incorporates:
         *  Constant: '<S81>/Calib'
         */
        VeCHDR_b_EVSE_EnergizingState = KeCHDR_b_EVSE_EnergizingState_Val;
    }
    else
    {
        /* Switch: '<S4>/Switch28' */
        VeCHDR_b_EVSE_EnergizingState = rtb_UnitDelay_e;
    }

    /* End of Switch: '<S4>/Switch28' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CHDC'
     */
    /* Outputs for Atomic SubSystem: '<S3>/Checks' */
    /* UnitDelay: '<S67>/Unit Delay' incorporates:
     *  Constant: '<S21>/Constant'
     *  RelationalOperator: '<S20>/Relational Operator6'
     */
    rtb_UnitDelay_e = (((uint32)rtb_TmpSignalConversionAtEVSE_C) ==
                       CeIDCR_e_CHAdeMO_0_9_n_earlier);

    /* RelationalOperator: '<S34>/Relational Operator9' incorporates:
     *  Constant: '<S22>/Constant'
     *  RelationalOperator: '<S20>/Relational Operator7'
     */
    rtb_RelationalOperator9_f = (((uint32)rtb_TmpSignalConversionAtEVSE_C) ==
        CeIDCR_e_CHAdeMO_10n101n11n12);

    /* Switch: '<S20>/Switch1' incorporates:
     *  UnitDelay: '<S20>/Unit Delay'
     */
    Switch1 = ((!rtb_UnitDelay_e) && (CHDR_ac_DW.UnitDelay_DSTATE_mr));

    /* Switch: '<S20>/Switch2' incorporates:
     *  Logic: '<S20>/Logical Operator3'
     *  Switch: '<S20>/Switch4'
     */
    if (rtb_UnitDelay_e || rtb_RelationalOperator9_f)
    {
        /* Switch: '<S20>/Switch2' incorporates:
         *  Constant: '<S20>/Constant12'
         */
        Switch2_o = 0.0F;

        /* Switch: '<S20>/Switch4' incorporates:
         *  Constant: '<S20>/Constant13'
         */
        rtb_Switch4 = 0.0F;
    }
    else
    {
        /* Switch: '<S20>/Switch2' incorporates:
         *  Constant: '<S19>/Calib'
         */
        Switch2_o = KeCHDR_I_ChrgCrntMin;

        /* Switch: '<S20>/Switch4' */
        rtb_Switch4 = VeCHDR_q_FullAmpHrCap;
    }

    /* End of Switch: '<S20>/Switch2' */
    /* End of Outputs for SubSystem: '<S3>/Checks' */

    /* Outputs for Atomic SubSystem: '<S3>/DC_CHDMO_SF' */
    /* Chart: '<S8>/CHAdeMO' incorporates:
     *  Inport: '<Root>/VeBPCR_e_HVBat_DC_CntctrStat'
     *  Inport: '<Root>/VeBPCR_e_HV_BatIsolStat_raw'
     *  Inport: '<Root>/VeIDCR_e_Charger_WeldingDetectAvail'
     *  Inport: '<Root>/VeIDCR_e_ExtChargerSts'
     *  Inport: '<Root>/VeOBCR_b_ChargingComplete'
     *  Inport: '<Root>/VeOBCR_e_ChrgSysStat_SF'
     *  SignalConversion generated from: '<S1>/EVSE_ChrgStopControl'
     *  SignalConversion generated from: '<S1>/OBCMCP1Sts'
     *  SignalConversion generated from: '<S1>/OBCMCP2Sts'
     *  SignalConversion generated from: '<S1>/OBCMCP3Sts'
     *  UnitDelay: '<S8>/Unit Delay1'
     *  UnitDelay: '<S8>/Unit Delay2'
     *  UnitDelay: '<S8>/Unit Delay3'
     */
    /* Gateway: CHDR_MedTED/CHDC/DC_CHDMO_SF/CHAdeMO */
    /* During: CHDR_MedTED/CHDC/DC_CHDMO_SF/CHAdeMO */
    if (((uint32)CHDR_ac_DW.is_active_c1_CHDR_ac) == 0U)
    {
        /* Entry: CHDR_MedTED/CHDC/DC_CHDMO_SF/CHAdeMO */
        CHDR_ac_DW.is_active_c1_CHDR_ac = 1U;

        /* Entry Internal: CHDR_MedTED/CHDC/DC_CHDMO_SF/CHAdeMO */
        /* Transition: '<S24>:210' */
        CHDR_ac_DW.is_c1_CHDR_ac = CHDR_ac_IN_CHDMO_Init;

        /* Entry 'CHDMO_Init': '<S24>:208' */
        CHDR_ac_B.CHDMOChrgSysStat = CeCHDR_e_CHDMOinit;
        CHDR_ac_B.CHDMOStateTimer = 0.0;
        CHDR_ac_B.DCChargeInitialized = false;
        CHDR_ac_B.HVCM_EV_Ready = false;
        CHDR_ac_B.HVCMS_ReadyToChargeState = false;
        CHDR_ac_B.HVCM_EV_TargetCurr = 0.0F;
    }
    else
    {
        (void)Rte_Read_VeIDCR_e_ExtChargerSts_Value(&tmpRead_8);
        (void)Rte_Read_VeOBCR_b_ChargingComplete_Value(&rtb_RelationalOperator);
        switch (CHDR_ac_DW.is_c1_CHDR_ac)
        {
          case CHDR_ac_IN_CHDMOCommunication:
            CHDR_ac_CHDMOCommunication();
            break;

          case CHDR_ac_IN_CHDMOShutdown:
            /* During 'CHDMOShutdown': '<S24>:73' */
            tmp_0 = CHDR_ac_B.TmpSignalConversionAtOBCMCP2Sts;
            Gain_f_tmp = CHDR_ac_B.TmpSignalConversionAtOBCMCP1Sts;
            UnitDelay = !VeCHDR_b_EVSE_EnergizingState;
            if ((((((uint32)tmp_0) == CeIDCR_e_CP2Sts_EVSE_not_ready) &&
                    (((uint32)Gain_f_tmp) == CeIDCR_e_CP1Sts_NO_EVSE)) &&
                    UnitDelay) && (CHDR_ac_B.CHDMOStateTimer > ((float64)
                    KeCHDR_t_CHDMOShtDwnComplDelay)))
            {
                /* Transition: '<S24>:312' */
                /* Exit Internal 'CHDMOShutdown': '<S24>:73' */
                CHDR_ac_DW.is_CHDMOShutdown = CHDR_ac_IN_NO_ACTIVE_CHILD;
                CHDR_ac_DW.is_c1_CHDR_ac = CHDR_ac_IN_CHDMO_Init;

                /* Entry 'CHDMO_Init': '<S24>:208' */
                CHDR_ac_B.CHDMOChrgSysStat = CeCHDR_e_CHDMOinit;
                CHDR_ac_B.CHDMOStateTimer = 0.0;
                CHDR_ac_B.DCChargeInitialized = false;
                CHDR_ac_B.HVCM_EV_Ready = false;
                CHDR_ac_B.HVCMS_ReadyToChargeState = false;
                CHDR_ac_B.HVCM_EV_TargetCurr = 0.0F;
            }
            else
            {
                (void)Rte_Read_VeBPCR_e_HVBat_DC_CntctrStat_Value(&tmpRead_2);
                switch (CHDR_ac_DW.is_CHDMOShutdown)
                {
                  case CH_IN_CHDMODCCntctrCmd_Fastopen:
                    CHDR_ac_B.CHDMOChrgSysStat = CeCHDR_e_CHDMODCcntctrfastopen;
                    CHDR_ac_B.DC_CntctrCmd = CeOBCR_e_DCCntctr_FastOpn;
                    CHDR_ac_B.vehicle_status = true;

                    /* During 'CHDMODCCntctrCmd_Fastopen': '<S24>:284' */
                    /* Transition: '<S24>:290' */
                    if ((((sint32)tmpRead_2) == 0) && (CHDR_ac_B.CHDMOStateTimer
                         > ((float64)KeCHDR_t_CHDMODCCntctrCmdDelay)))
                    {
                        /* Transition: '<S24>:311' */
                        CHDR_ac_DW.is_CHDMOShutdown =
                            CHDR_ac_IN_CHDMODCIsolation;

                        /* Entry 'CHDMODCIsolation': '<S24>:288' */
                        CHDR_ac_B.CHDMOChrgSysStat = CeCHDR_e_CHDMODCIsolation;
                        CHDR_ac_B.CHDMOStateTimer = 0.0;
                        CHDR_ac_B.HVCM_DC_Isolation_Disable_Comma = false;
                    }
                    else
                    {
                        CHDR_ac_B.CHDMOStateTimer += (float64)HeCHDR_t_dT;
                    }
                    break;

                  case CHDR_a_IN_CHDMODCCntctrCmd_open:
                    CHDR_ac_B.CHDMOChrgSysStat = CeCHDR_e_CHDMODCcntctropen;
                    CHDR_ac_B.DC_CntctrCmd = CeOBCR_e_DCCntctr_Open;
                    CHDR_ac_B.vehicle_status = true;

                    /* During 'CHDMODCCntctrCmd_open': '<S24>:276' */
                    /* Transition: '<S24>:289' */
                    if ((((sint32)tmpRead_2) == 0) && (CHDR_ac_B.CHDMOStateTimer
                         > ((float64)KeCHDR_t_CHDMODCCntctrCmdDelay)))
                    {
                        /* Transition: '<S24>:311' */
                        CHDR_ac_DW.is_CHDMOShutdown =
                            CHDR_ac_IN_CHDMODCIsolation;

                        /* Entry 'CHDMODCIsolation': '<S24>:288' */
                        CHDR_ac_B.CHDMOChrgSysStat = CeCHDR_e_CHDMODCIsolation;
                        CHDR_ac_B.CHDMOStateTimer = 0.0;
                        CHDR_ac_B.HVCM_DC_Isolation_Disable_Comma = false;
                    }
                    else
                    {
                        CHDR_ac_B.CHDMOStateTimer += (float64)HeCHDR_t_dT;
                    }
                    break;

                  case CHDR_ac_IN_CHDMODCIsolation:
                    CHDR_ac_B.CHDMOChrgSysStat = CeCHDR_e_CHDMODCIsolation;
                    CHDR_ac_B.HVCM_DC_Isolation_Disable_Comma = false;

                    /* During 'CHDMODCIsolation': '<S24>:288' */
                    (void)Rte_Read_VeBPCR_e_HV_BatIsolStat_raw_Value(&tmpRead_4);
                    if ((((uint32)tmpRead_4) == CeBPCR_e_GFD_OK) &&
                            (CHDR_ac_B.CHDMOStateTimer > ((float64)
                            KeCHDR_t_CHDMODCIsolationDelay)))
                    {
                        /* Transition: '<S24>:387' */
                        CHDR_ac_DW.is_CHDMOShutdown =
                            CHDR_ac_IN_CHDMOShtDwnCompl;

                        /* Entry 'CHDMOShtDwnCompl': '<S24>:386' */
                        CHDR_ac_B.CHDMOChrgSysStat = CeCHDR_e_CHDMOShtDwnCompl;
                        CHDR_ac_B.CHDMOStateTimer = 0.0;
                    }
                    else
                    {
                        CHDR_ac_B.CHDMOStateTimer += (float64)HeCHDR_t_dT;
                    }
                    break;

                  case CHDR_ac_IN_CHDMOEShtdwn:
                    CHDR_ac_B.CHDMOChrgSysStat = CeCHDR_e_CHDMOEShtdwn;
                    CHDR_ac_B.HVCMS_ReadyToChargeState = false;
                    CHDR_ac_B.HVCM_EV_TargetCurr = 0.0F;

                    /* During 'CHDMOEShtdwn': '<S24>:313' */
                    /* Transition: '<S24>:486' */
                    if ((((uint32)CHDR_ac_B.TmpSignalConversionAtEVSE_ChrgS) ==
                            CeIDCR_e_Chr_Stop_Cntrl) &&
                            (CHDR_ac_B.CHDMOStateTimer > ((float64)
                            KeCHDR_t_CHDMOEVEShtdwnDelay)))
                    {
                        /* Transition: '<S24>:321' */
                        CHDR_ac_DW.is_CHDMOShutdown = CHDR_ac_IN_CHDMOSwitchKOff;

                        /* Entry 'CHDMOSwitchKOff': '<S24>:272' */
                        CHDR_ac_B.CHDMOChrgSysStat = CeCHDR_e_CHDMOSwKoff;
                        CHDR_ac_B.CHDMOStateTimer = 0.0;
                        CHDR_ac_B.HVCM_EV_Ready = false;
                    }
                    else
                    {
                        CHDR_ac_B.CHDMOStateTimer += (float64)HeCHDR_t_dT;
                    }
                    break;

                  case CHDR_ac_IN_CHDMONShtdwn:
                    CHDR_ac_B.CHDMOChrgSysStat = CeCHDR_e_CHDMONShtdwn;
                    CHDR_ac_B.HVCMS_ReadyToChargeState = false;
                    CHDR_ac_B.HVCM_EV_TargetCurr = 0.0F;

                    /* During 'CHDMONShtdwn': '<S24>:265' */
                    /* Transition: '<S24>:273' */
                    if ((((uint32)CHDR_ac_B.TmpSignalConversionAtEVSE_ChrgS) ==
                            CeIDCR_e_Chr_Stop_Cntrl) &&
                            (CHDR_ac_B.CHDMOStateTimer > ((float64)
                            KeCHDR_t_CHDMOEVEShtdwnDelay)))
                    {
                        /* Transition: '<S24>:321' */
                        CHDR_ac_DW.is_CHDMOShutdown = CHDR_ac_IN_CHDMOSwitchKOff;

                        /* Entry 'CHDMOSwitchKOff': '<S24>:272' */
                        CHDR_ac_B.CHDMOChrgSysStat = CeCHDR_e_CHDMOSwKoff;
                        CHDR_ac_B.CHDMOStateTimer = 0.0;
                        CHDR_ac_B.HVCM_EV_Ready = false;
                    }
                    else
                    {
                        CHDR_ac_B.CHDMOStateTimer += (float64)HeCHDR_t_dT;
                    }
                    break;

                  case CHDR_ac_IN_CHDMOShtDwnCompl:
                    CHDR_ac_B.CHDMOChrgSysStat = CeCHDR_e_CHDMOShtDwnCompl;

                    /* During 'CHDMOShtDwnCompl': '<S24>:386' */
                    if ((((((uint32)tmp_0) == CeIDCR_e_CP2Sts_EVSE_not_ready) &&
                          (((uint32)Gain_f_tmp) == CeIDCR_e_CP1Sts_NO_EVSE)) &&
                            UnitDelay) && (CHDR_ac_B.CHDMOStateTimer > ((float64)
                            KeCHDR_t_CHDMOShtDwnComplDelay)))
                    {
                        /* Transition: '<S24>:292' */
                        /* Entry Internal 'CHDMOShutdown': '<S24>:73' */
                        /* Transition: '<S24>:130' */
                        CHDR_ac_DW.ShtdwnTypeCHDMO = (float64)
                            CHDR_ac_ShutdownReas();
                        CHDR_ac_DW.is_CHDMOShutdown = CHDR_ac_IN_CHDMOShutdownin;

                        /* Entry 'CHDMOShutdownin': '<S24>:129' */
                        CHDR_ac_B.CHDMOChrgSysStat = CeCHDR_e_CHDMOShtDwn;
                        CHDR_ac_B.CHDMOStateTimer = 0.0;
                    }
                    else
                    {
                        CHDR_ac_B.CHDMOStateTimer += (float64)HeCHDR_t_dT;
                    }
                    break;

                  case CHDR_ac_IN_CHDMOShutdownin:
                    CHDR_ac_B.CHDMOChrgSysStat = CeCHDR_e_CHDMOShtDwn;

                    /* During 'CHDMOShutdownin': '<S24>:129' */
                    if (CHDR_ac_B.CHDMOStateTimer > ((float64)
                            KeCHDR_t_CHDMOShutdwnDelay))
                    {
                        /* Transition: '<S24>:264' */
                        if (CHDR_ac_DW.ShtdwnTypeCHDMO == 1.0)
                        {
                            /* Transition: '<S24>:316' */
                            CHDR_ac_DW.is_CHDMOShutdown =
                                CHDR_ac_IN_CHDMOEShtdwn;

                            /* Entry 'CHDMOEShtdwn': '<S24>:313' */
                            CHDR_ac_B.CHDMOChrgSysStat = CeCHDR_e_CHDMOEShtdwn;
                            CHDR_ac_B.CHDMOStateTimer = 0.0;
                            CHDR_ac_B.HVCMS_ReadyToChargeState = false;
                            CHDR_ac_B.HVCM_EV_TargetCurr = 0.0F;
                        }
                        else if (((CHDR_ac_DW.UnitDelay1_DSTATE) || (((uint32)
                                    CHDR_ac_B.TmpSignalConversionAtEVSE_ChrgS) ==
                                   CeIDCR_e_Chr_Stop_Cntrl)) &&
                                 (CHDR_ac_DW.ShtdwnTypeCHDMO == 0.0))
                        {
                            /* Transition: '<S24>:269' */
                            CHDR_ac_DW.is_CHDMOShutdown =
                                CHDR_ac_IN_CHDMONShtdwn;

                            /* Entry 'CHDMONShtdwn': '<S24>:265' */
                            CHDR_ac_B.CHDMOChrgSysStat = CeCHDR_e_CHDMONShtdwn;
                            CHDR_ac_B.CHDMOStateTimer = 0.0;
                            CHDR_ac_B.HVCMS_ReadyToChargeState = false;
                            CHDR_ac_B.HVCM_EV_TargetCurr = 0.0F;
                        }
                        else
                        {
                            CHDR_ac_B.CHDMOStateTimer += (float64)HeCHDR_t_dT;
                        }
                    }
                    else
                    {
                        CHDR_ac_B.CHDMOStateTimer += (float64)HeCHDR_t_dT;
                    }
                    break;

                  default:
                    CHDR_ac_B.CHDMOChrgSysStat = CeCHDR_e_CHDMOSwKoff;
                    CHDR_ac_B.HVCM_EV_Ready = false;

                    /* During 'CHDMOSwitchKOff': '<S24>:272' */
                    if (((((uint32)CHDR_ac_B.TmpSignalConversionAtOBCMCP3Sts) ==
                          CeIDCR_e_CP3Sts_Charge_perm_dis) && (((uint32)
                            tmpRead_8) == CeIDCR_e_ExtChargerSts_Standby)) &&
                            (CHDR_ac_B.CHDMOStateTimer > ((float64)
                            KeCHDR_t_CHDMOSwitchKOffDelay)))
                    {
                        /* Transition: '<S24>:277' */
                        /* Transition: '<S24>:282' */
                        (void)Rte_Read_VeIDCR_e_Charger_WeldingDetectAvail_Value
                            (&tmpRead_9);
                        if (((((uint32)tmpRead_9) == CeIDCR_e_Charger_Available)
                             && (CHDR_ac_DW.ShtdwnTypeCHDMO == 0.0)) &&
                                (CHDR_ac_DW.UnitDelay3_DSTATE_c))
                        {
                            /* Transition: '<S24>:283' */
                            CHDR_ac_DW.is_CHDMOShutdown =
                                CHDR_a_IN_CHDMODCCntctrCmd_open;

                            /* Entry 'CHDMODCCntctrCmd_open': '<S24>:276' */
                            CHDR_ac_B.CHDMOChrgSysStat =
                                CeCHDR_e_CHDMODCcntctropen;
                            CHDR_ac_B.CHDMOStateTimer = 0.0;
                            CHDR_ac_B.DC_CntctrCmd = CeOBCR_e_DCCntctr_Open;
                            CHDR_ac_B.vehicle_status = true;
                        }
                        else
                        {
                            /* Transition: '<S24>:286' */
                            if (((((uint32)tmpRead_9) ==
                                    CeIDCR_e_Charger_Not_Available) ||
                                    (CHDR_ac_DW.ShtdwnTypeCHDMO == 1.0)) &&
                                    (!CHDR_ac_DW.UnitDelay3_DSTATE_c))
                            {
                                /* Transition: '<S24>:287' */
                                CHDR_ac_DW.is_CHDMOShutdown =
                                    CH_IN_CHDMODCCntctrCmd_Fastopen;

                                /* Entry 'CHDMODCCntctrCmd_Fastopen': '<S24>:284' */
                                CHDR_ac_B.CHDMOChrgSysStat =
                                    CeCHDR_e_CHDMODCcntctrfastopen;
                                CHDR_ac_B.CHDMOStateTimer = 0.0;
                                CHDR_ac_B.DC_CntctrCmd =
                                    CeOBCR_e_DCCntctr_FastOpn;
                                CHDR_ac_B.vehicle_status = true;
                            }
                            else
                            {
                                CHDR_ac_B.CHDMOStateTimer += (float64)
                                    HeCHDR_t_dT;
                            }
                        }
                    }
                    else
                    {
                        CHDR_ac_B.CHDMOStateTimer += (float64)HeCHDR_t_dT;
                    }
                    break;
                }
            }
            break;

          case CHDR_ac_IN_CHDMO_CurrentDemand:
            /* During 'CHDMO_CurrentDemand': '<S24>:71' */
            if (CHDR_ac_DW.UnitDelay2_DSTATE_c)
            {
                /* Transition: '<S24>:116' */
                CHDR_ac_B.CHDMOexitReason = 20.0F;

                /* Transition: '<S24>:117' */
                /* Transition: '<S24>:114' */
                /* Transition: '<S24>:113' */
            }
            else if (((uint32)CHDR_ac_B.TmpSignalConversionAtEVSE_ChrgS) ==
                     CeIDCR_e_Chr_Stop_Cntrl)
            {
                /* Transition: '<S24>:126' */
                CHDR_ac_B.CHDMOexitReason = 23.0F;

                /* Transition: '<S24>:128' */
                /* Transition: '<S24>:127' */
                /* Transition: '<S24>:120' */
                /* Transition: '<S24>:117' */
                /* Transition: '<S24>:114' */
                /* Transition: '<S24>:113' */
            }
            else if (rtb_RelationalOperator)
            {
                /* Transition: '<S24>:106' */
                CHDR_ac_B.CHDMOexitReason = 17.0F;
            }
            else if (VeCHDR_b_EVSE_ChrgSysErr)
            {
                /* Transition: '<S24>:110' */
                CHDR_ac_B.CHDMOexitReason = 18.0F;

                /* Transition: '<S24>:113' */
            }
            else if (!CHDR_ac_DW.UnitDelay_DSTATE_m2)
            {
                /* Transition: '<S24>:119' */
                CHDR_ac_B.CHDMOexitReason = 21.0F;

                /* Transition: '<S24>:120' */
                /* Transition: '<S24>:117' */
                /* Transition: '<S24>:114' */
                /* Transition: '<S24>:113' */
            }
            else if (!CHDR_ac_B.TmpSignalConversionAtSecureConn)
            {
                /* Transition: '<S24>:122' */
                CHDR_ac_B.CHDMOexitReason = 22.0F;

                /* Transition: '<S24>:127' */
                /* Transition: '<S24>:120' */
                /* Transition: '<S24>:117' */
                /* Transition: '<S24>:114' */
                /* Transition: '<S24>:113' */
            }
            else
            {
                /* Transition: '<S24>:112' */
                CHDR_ac_B.CHDMOexitReason = 19.0F;

                /* Transition: '<S24>:114' */
                /* Transition: '<S24>:113' */
            }

            /* Transition: '<S24>:107' */
            /* Transition: '<S24>:103' */
            /* Transition: '<S24>:205' */
            /* Transition: '<S24>:204' */
            /* Transition: '<S24>:95' */
            /* Transition: '<S24>:96' */
            /* Transition: '<S24>:97' */
            /* Transition: '<S24>:99' */
            /* Transition: '<S24>:100' */
            CHDR_ac_DW.is_c1_CHDR_ac = CHDR_ac_IN_CHDMOShutdown;

            /* Entry Internal 'CHDMOShutdown': '<S24>:73' */
            /* Transition: '<S24>:130' */
            CHDR_ac_DW.ShtdwnTypeCHDMO = (float64)CHDR_ac_ShutdownReas();
            CHDR_ac_DW.is_CHDMOShutdown = CHDR_ac_IN_CHDMOShutdownin;

            /* Entry 'CHDMOShutdownin': '<S24>:129' */
            CHDR_ac_B.CHDMOChrgSysStat = CeCHDR_e_CHDMOShtDwn;
            CHDR_ac_B.CHDMOStateTimer = 0.0;
            break;

          default:
            CHDR_ac_B.CHDMOChrgSysStat = CeCHDR_e_CHDMOinit;
            CHDR_ac_B.DCChargeInitialized = false;
            CHDR_ac_B.HVCM_EV_Ready = false;
            CHDR_ac_B.HVCMS_ReadyToChargeState = false;
            CHDR_ac_B.HVCM_EV_TargetCurr = 0.0F;

            /* During 'CHDMO_Init': '<S24>:208' */
            (void)Rte_Read_VeOBCR_e_ChrgSysStat_SF_Value(&tmpRead_a);
            CHDR_ac_DW.CHDMOinitStateTimer = CHDR_ac_B.CHDMOStateTimer +
                ((float64)HeCHDR_t_dT);
            break;
        }
    }

    /* End of Chart: '<S8>/CHAdeMO' */
    /* End of Outputs for SubSystem: '<S3>/DC_CHDMO_SF' */

    /* Outputs for Atomic SubSystem: '<S3>/Signals_Processing' */
    /* RelationalOperator: '<S32>/Relational Operator' */
    rtb_RelationalOperator = (VeCHDR_U_HV_BatVolt > VeCHDR_U_MaxPkVltAlld);

    /* End of Outputs for SubSystem: '<S3>/Signals_Processing' */

    /* Outputs for Atomic SubSystem: '<S3>/Checks' */
    /* Switch: '<S20>/Switch6' incorporates:
     *  Constant: '<S20>/Constant15'
     *  Constant: '<S23>/Constant'
     *  Logic: '<S20>/Logical Operator5'
     *  RelationalOperator: '<S20>/Relational Operator8'
     */
    if ((rtb_UnitDelay_e || rtb_RelationalOperator9_f) || (((uint32)
            rtb_TmpSignalConversionAtEVSE_C) == CeIDCR_e_CHAdeMO_10n101n11n12))
    {
        tmpRead_7 = 0.0F;
    }
    else
    {
        tmpRead_7 = VeCHDR_U_MinPkVltAlld;
    }

    /* End of Switch: '<S20>/Switch6' */
    /* End of Outputs for SubSystem: '<S3>/Checks' */

    /* Outputs for Atomic SubSystem: '<S3>/Signals_Processing' */
    /* RelationalOperator: '<S32>/Relational Operator1' */
    UnitDelay = (VeCHDR_U_HV_BatVolt < tmpRead_7);

    /* Outputs for Atomic SubSystem: '<S32>/Turn On Delay Sample2' */
    /* Outputs for Atomic SubSystem: '<S48>/EdgeRising' */
    /* Logic: '<S54>/AND' incorporates:
     *  Logic: '<S54>/OR1'
     *  UnitDelay: '<S54>/Unit Delay'
     */
    UnitDelay2 = (rtb_RelationalOperator && (!CHDR_ac_DW.UnitDelay_DSTATE_du));

    /* Update for UnitDelay: '<S54>/Unit Delay' */
    CHDR_ac_DW.UnitDelay_DSTATE_du = rtb_RelationalOperator;

    /* End of Outputs for SubSystem: '<S48>/EdgeRising' */

    /* Switch: '<S48>/Switch1' incorporates:
     *  Constant: '<S40>/Calib'
     *  Constant: '<S48>/Constant Value'
     *  Logic: '<S48>/OR'
     *  Logic: '<S48>/OR1'
     *  MinMax: '<S48>/Minimum'
     *  Sum: '<S48>/Summation'
     *  UnitDelay: '<S48>/Unit Delay'
     */
    if ((!rtb_RelationalOperator) || UnitDelay2)
    {
        /* Switch: '<S48>/Switch1' incorporates:
         *  Constant: '<S48>/Constant Value1'
         */
        rtb_Switch1_f = 0U;
    }
    else if (KeCHDR_Cnt_DbncOvrVoltFlag < ((uint16)(((uint32)
                CHDR_ac_DW.UnitDelay_DSTATE_f) + 1U)))
    {
        /* MinMax: '<S48>/Minimum' incorporates:
         *  Constant: '<S40>/Calib'
         *  Switch: '<S48>/Switch1'
         */
        rtb_Switch1_f = KeCHDR_Cnt_DbncOvrVoltFlag;
    }
    else
    {
        /* Switch: '<S48>/Switch1' incorporates:
         *  Constant: '<S48>/Constant Value'
         *  MinMax: '<S48>/Minimum'
         *  Sum: '<S48>/Summation'
         *  UnitDelay: '<S48>/Unit Delay'
         */
        rtb_Switch1_f = (uint16)(((uint32)CHDR_ac_DW.UnitDelay_DSTATE_f) + 1U);
    }

    /* End of Switch: '<S48>/Switch1' */

    /* Logic: '<S48>/AND' incorporates:
     *  Constant: '<S40>/Calib'
     *  RelationalOperator: '<S48>/Greater  Than'
     */
    rtb_RelationalOperator = (rtb_RelationalOperator && (rtb_Switch1_f >=
        KeCHDR_Cnt_DbncOvrVoltFlag));

    /* Update for UnitDelay: '<S48>/Unit Delay' */
    CHDR_ac_DW.UnitDelay_DSTATE_f = rtb_Switch1_f;

    /* End of Outputs for SubSystem: '<S32>/Turn On Delay Sample2' */

    /* Outputs for Atomic SubSystem: '<S32>/Turn On Delay Sample3' */
    /* Outputs for Atomic SubSystem: '<S49>/EdgeRising' */
    /* Logic: '<S55>/AND' incorporates:
     *  Logic: '<S55>/OR1'
     *  UnitDelay: '<S55>/Unit Delay'
     */
    UnitDelay2 = (UnitDelay && (!CHDR_ac_DW.UnitDelay_DSTATE_e));

    /* Update for UnitDelay: '<S55>/Unit Delay' */
    CHDR_ac_DW.UnitDelay_DSTATE_e = UnitDelay;

    /* End of Outputs for SubSystem: '<S49>/EdgeRising' */

    /* Switch: '<S49>/Switch1' incorporates:
     *  Constant: '<S41>/Calib'
     *  Constant: '<S49>/Constant Value'
     *  Logic: '<S49>/OR'
     *  Logic: '<S49>/OR1'
     *  MinMax: '<S49>/Minimum'
     *  Sum: '<S49>/Summation'
     *  UnitDelay: '<S49>/Unit Delay'
     */
    if ((!UnitDelay) || UnitDelay2)
    {
        /* Switch: '<S49>/Switch1' incorporates:
         *  Constant: '<S49>/Constant Value1'
         */
        rtb_Switch1_f = 0U;
    }
    else if (KeCHDR_Cnt_DbncUndrVoltFlag < ((uint16)(((uint32)
                CHDR_ac_DW.UnitDelay_DSTATE_h) + 1U)))
    {
        /* MinMax: '<S49>/Minimum' incorporates:
         *  Constant: '<S41>/Calib'
         *  Switch: '<S49>/Switch1'
         */
        rtb_Switch1_f = KeCHDR_Cnt_DbncUndrVoltFlag;
    }
    else
    {
        /* Switch: '<S49>/Switch1' incorporates:
         *  Constant: '<S49>/Constant Value'
         *  MinMax: '<S49>/Minimum'
         *  Sum: '<S49>/Summation'
         *  UnitDelay: '<S49>/Unit Delay'
         */
        rtb_Switch1_f = (uint16)(((uint32)CHDR_ac_DW.UnitDelay_DSTATE_h) + 1U);
    }

    /* End of Switch: '<S49>/Switch1' */

    /* Logic: '<S49>/AND' incorporates:
     *  Constant: '<S41>/Calib'
     *  RelationalOperator: '<S49>/Greater  Than'
     */
    UnitDelay = (UnitDelay && (rtb_Switch1_f >= KeCHDR_Cnt_DbncUndrVoltFlag));

    /* Update for UnitDelay: '<S49>/Unit Delay' */
    CHDR_ac_DW.UnitDelay_DSTATE_h = rtb_Switch1_f;

    /* End of Outputs for SubSystem: '<S32>/Turn On Delay Sample3' */

    /* RelationalOperator: '<S32>/Relational Operator2' */
    UnitDelay2 = (VeCHDR_T_BatModTmp > VeCHDR_T_HV_BatModTempMax);

    /* Outputs for Atomic SubSystem: '<S32>/Turn On Delay Sample4' */
    /* Outputs for Atomic SubSystem: '<S50>/EdgeRising' */
    /* Logic: '<S56>/AND' incorporates:
     *  Logic: '<S56>/OR1'
     *  UnitDelay: '<S56>/Unit Delay'
     */
    rtb_RelationalOperator9_f = (UnitDelay2 && (!CHDR_ac_DW.UnitDelay_DSTATE_kn));

    /* Update for UnitDelay: '<S56>/Unit Delay' */
    CHDR_ac_DW.UnitDelay_DSTATE_kn = UnitDelay2;

    /* End of Outputs for SubSystem: '<S50>/EdgeRising' */

    /* Switch: '<S50>/Switch1' incorporates:
     *  Constant: '<S39>/Calib'
     *  Constant: '<S50>/Constant Value'
     *  Logic: '<S50>/OR'
     *  Logic: '<S50>/OR1'
     *  MinMax: '<S50>/Minimum'
     *  Sum: '<S50>/Summation'
     *  UnitDelay: '<S50>/Unit Delay'
     */
    if ((!UnitDelay2) || rtb_RelationalOperator9_f)
    {
        /* Switch: '<S50>/Switch1' incorporates:
         *  Constant: '<S50>/Constant Value1'
         */
        rtb_Switch1_f = 0U;
    }
    else if (KeCHDR_Cnt_DbncOvrTempFlag < ((uint16)(((uint32)
                CHDR_ac_DW.UnitDelay_DSTATE_l) + 1U)))
    {
        /* MinMax: '<S50>/Minimum' incorporates:
         *  Constant: '<S39>/Calib'
         *  Switch: '<S50>/Switch1'
         */
        rtb_Switch1_f = KeCHDR_Cnt_DbncOvrTempFlag;
    }
    else
    {
        /* Switch: '<S50>/Switch1' incorporates:
         *  Constant: '<S50>/Constant Value'
         *  MinMax: '<S50>/Minimum'
         *  Sum: '<S50>/Summation'
         *  UnitDelay: '<S50>/Unit Delay'
         */
        rtb_Switch1_f = (uint16)(((uint32)CHDR_ac_DW.UnitDelay_DSTATE_l) + 1U);
    }

    /* End of Switch: '<S50>/Switch1' */
    /* End of Outputs for SubSystem: '<S32>/Turn On Delay Sample4' */
    /* End of Outputs for SubSystem: '<S3>/Signals_Processing' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/CHDR_MedTED' */

    /* Inport: '<Root>/VeTRGR_e_VldtdTransRngSt' */
    (void)Rte_Read_VeTRGR_e_VldtdTransRngSt_Value(&tmpRead_n);

    /* Outputs for Function Call SubSystem: '<Root>/CHDR_MedTED' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CHDC'
     */
    /* Outputs for Atomic SubSystem: '<S3>/Signals_Processing' */
    /* Outputs for Atomic SubSystem: '<S32>/Turn On Delay Sample4' */
    /* Logic: '<S50>/AND' incorporates:
     *  Constant: '<S39>/Calib'
     *  RelationalOperator: '<S50>/Greater  Than'
     */
    UnitDelay2 = (UnitDelay2 && (rtb_Switch1_f >= KeCHDR_Cnt_DbncOvrTempFlag));

    /* Update for UnitDelay: '<S50>/Unit Delay' */
    CHDR_ac_DW.UnitDelay_DSTATE_l = rtb_Switch1_f;

    /* End of Outputs for SubSystem: '<S32>/Turn On Delay Sample4' */

    /* Logic: '<S32>/Logical Operator4' incorporates:
     *  Constant: '<S37>/Constant'
     *  Inport: '<Root>/VeTRGR_e_VldtdTransRngSt'
     *  RelationalOperator: '<S32>/Relational Operator3'
     */
    rtb_RelationalOperator9_f = (((uint32)tmpRead_n) != CeTRGR_e_TransRangePark);

    /* Outputs for Atomic SubSystem: '<S32>/Turn On Delay Sample5' */
    /* Outputs for Atomic SubSystem: '<S51>/EdgeRising' */
    /* Logic: '<S57>/AND' incorporates:
     *  Logic: '<S57>/OR1'
     *  UnitDelay: '<S57>/Unit Delay'
     */
    rtb_AND_dj = (rtb_RelationalOperator9_f && (!CHDR_ac_DW.UnitDelay_DSTATE_k));

    /* Update for UnitDelay: '<S57>/Unit Delay' */
    CHDR_ac_DW.UnitDelay_DSTATE_k = rtb_RelationalOperator9_f;

    /* End of Outputs for SubSystem: '<S51>/EdgeRising' */

    /* Switch: '<S51>/Switch1' incorporates:
     *  Constant: '<S42>/Calib'
     *  Constant: '<S51>/Constant Value'
     *  Logic: '<S51>/OR'
     *  Logic: '<S51>/OR1'
     *  MinMax: '<S51>/Minimum'
     *  Sum: '<S51>/Summation'
     *  UnitDelay: '<S51>/Unit Delay'
     */
    if ((!rtb_RelationalOperator9_f) || rtb_AND_dj)
    {
        /* Switch: '<S51>/Switch1' incorporates:
         *  Constant: '<S51>/Constant Value1'
         */
        rtb_Switch1_f = 0U;
    }
    else if (KeCHDR_Cnt_DbncVhclDrvStsFlag < ((uint16)(((uint32)
                CHDR_ac_DW.UnitDelay_DSTATE_p) + 1U)))
    {
        /* MinMax: '<S51>/Minimum' incorporates:
         *  Constant: '<S42>/Calib'
         *  Switch: '<S51>/Switch1'
         */
        rtb_Switch1_f = KeCHDR_Cnt_DbncVhclDrvStsFlag;
    }
    else
    {
        /* Switch: '<S51>/Switch1' incorporates:
         *  Constant: '<S51>/Constant Value'
         *  MinMax: '<S51>/Minimum'
         *  Sum: '<S51>/Summation'
         *  UnitDelay: '<S51>/Unit Delay'
         */
        rtb_Switch1_f = (uint16)(((uint32)CHDR_ac_DW.UnitDelay_DSTATE_p) + 1U);
    }

    /* End of Switch: '<S51>/Switch1' */

    /* Logic: '<S51>/AND' incorporates:
     *  Constant: '<S42>/Calib'
     *  RelationalOperator: '<S51>/Greater  Than'
     */
    rtb_AND_dj = (rtb_RelationalOperator9_f && (rtb_Switch1_f >=
                   KeCHDR_Cnt_DbncVhclDrvStsFlag));

    /* Update for UnitDelay: '<S51>/Unit Delay' */
    CHDR_ac_DW.UnitDelay_DSTATE_p = rtb_Switch1_f;

    /* End of Outputs for SubSystem: '<S32>/Turn On Delay Sample5' */

    /* RelationalOperator: '<S32>/Relational Operator5' incorporates:
     *  Abs: '<S32>/Abs'
     *  Abs: '<S32>/Abs1'
     *  Constant: '<S44>/Calib'
     *  Sum: '<S32>/Sum'
     */
    rtb_RelationalOperator9_f = ((fabsf(VeCHDR_I_HV_BatCurr) - fabsf
        (rtb_TmpSignalConversionAtChrgCr)) > KeCHDR_I_CrntDvtionThrshld);

    /* Outputs for Atomic SubSystem: '<S32>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S46>/EdgeRising' */
    /* Logic: '<S52>/AND' incorporates:
     *  Logic: '<S52>/OR1'
     *  UnitDelay: '<S52>/Unit Delay'
     */
    rtb_AND_fb = (rtb_RelationalOperator9_f && (!CHDR_ac_DW.UnitDelay_DSTATE_o));

    /* Update for UnitDelay: '<S52>/Unit Delay' */
    CHDR_ac_DW.UnitDelay_DSTATE_o = rtb_RelationalOperator9_f;

    /* End of Outputs for SubSystem: '<S46>/EdgeRising' */

    /* Switch: '<S46>/Switch1' incorporates:
     *  Constant: '<S38>/Calib'
     *  Constant: '<S46>/Constant Value'
     *  Logic: '<S46>/OR'
     *  Logic: '<S46>/OR1'
     *  MinMax: '<S46>/Minimum'
     *  Sum: '<S46>/Summation'
     *  UnitDelay: '<S46>/Unit Delay'
     */
    if ((!rtb_RelationalOperator9_f) || rtb_AND_fb)
    {
        /* Switch: '<S46>/Switch1' incorporates:
         *  Constant: '<S46>/Constant Value1'
         */
        rtb_Switch1_f = 0U;
    }
    else if (KeCHDR_Cnt_DbncCrntDvtionErrFlag < ((uint16)(((uint32)
                CHDR_ac_DW.UnitDelay_DSTATE_h5) + 1U)))
    {
        /* MinMax: '<S46>/Minimum' incorporates:
         *  Constant: '<S38>/Calib'
         *  Switch: '<S46>/Switch1'
         */
        rtb_Switch1_f = KeCHDR_Cnt_DbncCrntDvtionErrFlag;
    }
    else
    {
        /* Switch: '<S46>/Switch1' incorporates:
         *  Constant: '<S46>/Constant Value'
         *  MinMax: '<S46>/Minimum'
         *  Sum: '<S46>/Summation'
         *  UnitDelay: '<S46>/Unit Delay'
         */
        rtb_Switch1_f = (uint16)(((uint32)CHDR_ac_DW.UnitDelay_DSTATE_h5) + 1U);
    }

    /* End of Switch: '<S46>/Switch1' */
    /* End of Outputs for SubSystem: '<S32>/Turn On Delay Sample' */
    /* End of Outputs for SubSystem: '<S3>/Signals_Processing' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/CHDR_MedTED' */

    /* Inport: '<Root>/VeOBCR_U_EV_DCTargetVolt' */
    (void)Rte_Read_VeOBCR_U_EV_DCTargetVolt_Value(&tmpRead_c);

    /* Outputs for Function Call SubSystem: '<Root>/CHDR_MedTED' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CHDC'
     */
    /* Outputs for Atomic SubSystem: '<S3>/Signals_Processing' */
    /* Outputs for Atomic SubSystem: '<S32>/Turn On Delay Sample' */
    /* Logic: '<S46>/AND' incorporates:
     *  Constant: '<S38>/Calib'
     *  RelationalOperator: '<S46>/Greater  Than'
     */
    rtb_AND_fb = (rtb_RelationalOperator9_f && (rtb_Switch1_f >=
                   KeCHDR_Cnt_DbncCrntDvtionErrFlag));

    /* Update for UnitDelay: '<S46>/Unit Delay' */
    CHDR_ac_DW.UnitDelay_DSTATE_h5 = rtb_Switch1_f;

    /* End of Outputs for SubSystem: '<S32>/Turn On Delay Sample' */

    /* Switch: '<S35>/Switch3' incorporates:
     *  Logic: '<S35>/Logical Operator2'
     *  UnitDelay: '<S35>/Unit Delay6'
     */
    if (!CHDR_ac_DW.UnitDelay6_DSTATE)
    {
        /* Switch: '<S35>/Switch3' */
        rtb_TmpSignalConversionAtChrgCr = tmpRead_c;
    }
    else
    {
        /* Switch: '<S35>/Switch3' incorporates:
         *  UnitDelay: '<S35>/Unit Delay2'
         */
        rtb_TmpSignalConversionAtChrgCr = CHDR_ac_DW.UnitDelay2_DSTATE;
    }

    /* End of Switch: '<S35>/Switch3' */

    /* RelationalOperator: '<S32>/Relational Operator6' incorporates:
     *  Abs: '<S32>/Abs2'
     *  Constant: '<S45>/Calib'
     *  Sum: '<S32>/Sum1'
     */
    rtb_RelationalOperator9_f = (fabsf(rtb_TmpSignalConversionAtChrgCr -
        VeCHDR_U_EVSEOutputVolt) > KeCHDR_U_VoltDvtionThrshld);

    /* Outputs for Atomic SubSystem: '<S32>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S47>/EdgeRising' */
    /* Logic: '<S53>/AND' incorporates:
     *  Logic: '<S53>/OR1'
     *  UnitDelay: '<S53>/Unit Delay'
     */
    rtb_AND_o = (rtb_RelationalOperator9_f && (!CHDR_ac_DW.UnitDelay_DSTATE_iy));

    /* Update for UnitDelay: '<S53>/Unit Delay' */
    CHDR_ac_DW.UnitDelay_DSTATE_iy = rtb_RelationalOperator9_f;

    /* End of Outputs for SubSystem: '<S47>/EdgeRising' */

    /* Switch: '<S47>/Switch1' incorporates:
     *  Constant: '<S43>/Calib'
     *  Constant: '<S47>/Constant Value'
     *  Logic: '<S47>/OR'
     *  Logic: '<S47>/OR1'
     *  MinMax: '<S47>/Minimum'
     *  Sum: '<S47>/Summation'
     *  UnitDelay: '<S47>/Unit Delay'
     */
    if ((!rtb_RelationalOperator9_f) || rtb_AND_o)
    {
        /* Switch: '<S47>/Switch1' incorporates:
         *  Constant: '<S47>/Constant Value1'
         */
        rtb_Switch1_f = 0U;
    }
    else if (KeCHDR_Cnt_DbncVoltDvtionErrFlag < ((uint16)(((uint32)
                CHDR_ac_DW.UnitDelay_DSTATE_hg) + 1U)))
    {
        /* MinMax: '<S47>/Minimum' incorporates:
         *  Constant: '<S43>/Calib'
         *  Switch: '<S47>/Switch1'
         */
        rtb_Switch1_f = KeCHDR_Cnt_DbncVoltDvtionErrFlag;
    }
    else
    {
        /* Switch: '<S47>/Switch1' incorporates:
         *  Constant: '<S47>/Constant Value'
         *  MinMax: '<S47>/Minimum'
         *  Sum: '<S47>/Summation'
         *  UnitDelay: '<S47>/Unit Delay'
         */
        rtb_Switch1_f = (uint16)(((uint32)CHDR_ac_DW.UnitDelay_DSTATE_hg) + 1U);
    }

    /* End of Switch: '<S47>/Switch1' */

    /* Logic: '<S47>/AND' incorporates:
     *  Constant: '<S43>/Calib'
     *  RelationalOperator: '<S47>/Greater  Than'
     */
    rtb_AND_o = (rtb_RelationalOperator9_f && (rtb_Switch1_f >=
                  KeCHDR_Cnt_DbncVoltDvtionErrFlag));

    /* Update for UnitDelay: '<S47>/Unit Delay' */
    CHDR_ac_DW.UnitDelay_DSTATE_hg = rtb_Switch1_f;

    /* End of Outputs for SubSystem: '<S32>/Turn On Delay Sample1' */

    /* RelationalOperator: '<S10>/Relational Operator11' incorporates:
     *  Constant: '<S30>/Constant'
     *  SignalConversion generated from: '<S1>/OBCMCP3Sts'
     */
    rtb_RelationalOperator11 = (((uint32)
        CHDR_ac_B.TmpSignalConversionAtOBCMCP3Sts) ==
        CeIDCR_e_CP3Sts_Charge_perm_ena);

    /* Outputs for Atomic SubSystem: '<S3>/DC_CHDMO_SF' */
    /* RelationalOperator: '<S34>/Relational Operator9' incorporates:
     *  Constant: '<S58>/Constant'
     *  DataTypeConversion: '<S25>/DataTypeConversion'
     */
    rtb_RelationalOperator9_f = (((uint32)CHDR_ac_B.CHDMOChrgSysStat) ==
        CeCHDR_e_CHDMOinit);

    /* End of Outputs for SubSystem: '<S3>/DC_CHDMO_SF' */

    /* Switch: '<S34>/Switch5' incorporates:
     *  UnitDelay: '<S34>/Unit Delay3'
     */
    Switch5 = ((!rtb_RelationalOperator9_f) && (CHDR_ac_DW.UnitDelay3_DSTATE));

    /* RelationalOperator: '<S35>/LessThan1' incorporates:
     *  Constant: '<S62>/Calib'
     */
    rtb_LessThan1 = (VeCHDR_I_HV_BatCurr <= KeCHDR_I_DC_MinCurrentPresent);

    /* RelationalOperator: '<S35>/LessThan2' incorporates:
     *  Constant: '<S62>/Calib'
     */
    rtb_LessThan2 = (VeCHDR_I_EVSEOutputCurr <= KeCHDR_I_DC_MinCurrentPresent);

    /* Outputs for Atomic SubSystem: '<S35>/Turn On Delay Sample2' */
    /* Outputs for Atomic SubSystem: '<S63>/EdgeRising' */
    /* Logic: '<S65>/AND' incorporates:
     *  Logic: '<S65>/OR1'
     *  UnitDelay: '<S65>/Unit Delay'
     */
    rtb_AND_ot = (rtb_LessThan1 && (!CHDR_ac_DW.UnitDelay_DSTATE_d));

    /* Update for UnitDelay: '<S65>/Unit Delay' */
    CHDR_ac_DW.UnitDelay_DSTATE_d = rtb_LessThan1;

    /* End of Outputs for SubSystem: '<S63>/EdgeRising' */

    /* Switch: '<S63>/Switch1' incorporates:
     *  Constant: '<S61>/Calib'
     *  Constant: '<S63>/Constant Value'
     *  Logic: '<S63>/OR'
     *  Logic: '<S63>/OR1'
     *  MinMax: '<S63>/Minimum'
     *  Sum: '<S63>/Summation'
     *  UnitDelay: '<S63>/Unit Delay'
     */
    if ((!rtb_LessThan1) || rtb_AND_ot)
    {
        /* Switch: '<S63>/Switch1' incorporates:
         *  Constant: '<S63>/Constant Value1'
         */
        rtb_Switch1_f = 0U;
    }
    else if (KeCHDR_Cnt_Dbnc_DCBusCurr < ((uint16)(((uint32)
                CHDR_ac_DW.UnitDelay_DSTATE_g) + 1U)))
    {
        /* MinMax: '<S63>/Minimum' incorporates:
         *  Constant: '<S61>/Calib'
         *  Switch: '<S63>/Switch1'
         */
        rtb_Switch1_f = KeCHDR_Cnt_Dbnc_DCBusCurr;
    }
    else
    {
        /* Switch: '<S63>/Switch1' incorporates:
         *  Constant: '<S63>/Constant Value'
         *  MinMax: '<S63>/Minimum'
         *  Sum: '<S63>/Summation'
         *  UnitDelay: '<S63>/Unit Delay'
         */
        rtb_Switch1_f = (uint16)(((uint32)CHDR_ac_DW.UnitDelay_DSTATE_g) + 1U);
    }

    /* End of Switch: '<S63>/Switch1' */

    /* Update for UnitDelay: '<S63>/Unit Delay' */
    CHDR_ac_DW.UnitDelay_DSTATE_g = rtb_Switch1_f;

    /* End of Outputs for SubSystem: '<S35>/Turn On Delay Sample2' */

    /* Outputs for Atomic SubSystem: '<S35>/Turn On Delay Sample3' */
    /* Outputs for Atomic SubSystem: '<S64>/EdgeRising' */
    /* Logic: '<S66>/AND' incorporates:
     *  Logic: '<S66>/OR1'
     *  UnitDelay: '<S66>/Unit Delay'
     */
    rtb_AND_ot = (rtb_LessThan2 && (!CHDR_ac_DW.UnitDelay_DSTATE_i));

    /* Update for UnitDelay: '<S66>/Unit Delay' */
    CHDR_ac_DW.UnitDelay_DSTATE_i = rtb_LessThan2;

    /* End of Outputs for SubSystem: '<S64>/EdgeRising' */

    /* Switch: '<S64>/Switch1' incorporates:
     *  Constant: '<S61>/Calib'
     *  Constant: '<S64>/Constant Value'
     *  Logic: '<S64>/OR'
     *  Logic: '<S64>/OR1'
     *  MinMax: '<S64>/Minimum'
     *  Sum: '<S64>/Summation'
     *  UnitDelay: '<S64>/Unit Delay'
     */
    if ((!rtb_LessThan2) || rtb_AND_ot)
    {
        /* Switch: '<S64>/Switch1' incorporates:
         *  Constant: '<S64>/Constant Value1'
         */
        rtb_Switch1 = 0U;
    }
    else if (KeCHDR_Cnt_Dbnc_DCBusCurr < ((uint16)(((uint32)
                CHDR_ac_DW.UnitDelay_DSTATE_m) + 1U)))
    {
        /* MinMax: '<S64>/Minimum' incorporates:
         *  Constant: '<S61>/Calib'
         *  Switch: '<S64>/Switch1'
         */
        rtb_Switch1 = KeCHDR_Cnt_Dbnc_DCBusCurr;
    }
    else
    {
        /* Switch: '<S64>/Switch1' incorporates:
         *  Constant: '<S64>/Constant Value'
         *  MinMax: '<S64>/Minimum'
         *  Sum: '<S64>/Summation'
         *  UnitDelay: '<S64>/Unit Delay'
         */
        rtb_Switch1 = (uint16)(((uint32)CHDR_ac_DW.UnitDelay_DSTATE_m) + 1U);
    }

    /* End of Switch: '<S64>/Switch1' */

    /* Update for UnitDelay: '<S64>/Unit Delay' */
    CHDR_ac_DW.UnitDelay_DSTATE_m = rtb_Switch1;

    /* End of Outputs for SubSystem: '<S35>/Turn On Delay Sample3' */

    /* Outputs for Atomic SubSystem: '<S10>/Turn Off Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S36>/EdgeFalling' */
    /* Logic: '<S67>/AND' incorporates:
     *  Logic: '<S67>/OR1'
     *  UnitDelay: '<S67>/Unit Delay'
     */
    rtb_AND_ot = ((!rtb_RelationalOperator11) && (CHDR_ac_DW.UnitDelay_DSTATE_a));

    /* Update for UnitDelay: '<S67>/Unit Delay' */
    CHDR_ac_DW.UnitDelay_DSTATE_a = rtb_RelationalOperator11;

    /* End of Outputs for SubSystem: '<S36>/EdgeFalling' */

    /* Switch: '<S36>/Switch' */
    if (rtb_AND_ot)
    {
        /* Switch: '<S36>/Switch' incorporates:
         *  Constant: '<S33>/Calib'
         */
        rtb_Switch = KeCHDR_Cnt_DbncChrgPrmsionEnbl;
    }
    else
    {
        /* Sum: '<S36>/Summation' incorporates:
         *  Constant: '<S36>/Constant Value'
         *  UnitDelay: '<S36>/Unit Delay'
         */
        tmp = ((sint32)CHDR_ac_DW.UnitDelay_DSTATE) - 1;
        if ((((sint32)CHDR_ac_DW.UnitDelay_DSTATE) - 1) < 0)
        {
            tmp = 0;
        }

        /* Switch: '<S36>/Switch' incorporates:
         *  Sum: '<S36>/Summation'
         */
        rtb_Switch = (uint16)tmp;
    }

    /* End of Switch: '<S36>/Switch' */

    /* Update for UnitDelay: '<S36>/Unit Delay' */
    CHDR_ac_DW.UnitDelay_DSTATE = rtb_Switch;

    /* Update for UnitDelay: '<S35>/Unit Delay6' incorporates:
     *  Constant: '<S36>/Constant Value2'
     *  Logic: '<S36>/AND'
     *  RelationalOperator: '<S36>/Greater  Than'
     */
    CHDR_ac_DW.UnitDelay6_DSTATE = (rtb_RelationalOperator11 || (((sint32)
        rtb_Switch) > 0));

    /* End of Outputs for SubSystem: '<S10>/Turn Off Delay Sample' */

    /* Update for UnitDelay: '<S35>/Unit Delay2' */
    CHDR_ac_DW.UnitDelay2_DSTATE = rtb_TmpSignalConversionAtChrgCr;

    /* Update for UnitDelay: '<S34>/Unit Delay3' */
    CHDR_ac_DW.UnitDelay3_DSTATE = Switch5;

    /* End of Outputs for SubSystem: '<S3>/Signals_Processing' */

    /* SignalConversion generated from: '<S3>/CHAdeMOProtocol' incorporates:
     *  Constant: '<S31>/Constant'
     */
    CHDR_ac_B.OutportBufferForCHAdeMOProtocol = CHDR_ac_ConstB.Constant;

    /* Outputs for Atomic SubSystem: '<S3>/Signals_Processing' */
    /* SignalConversion generated from: '<S3>/ChrgdRefrncCnstnt' incorporates:
     *  Constant: '<S60>/Calib'
     */
    CHDR_ac_B.OutportBufferForChrgdRefrncCnst = KeCHDR_Pct_ChrgRateRefConstnt;

    /* End of Outputs for SubSystem: '<S3>/Signals_Processing' */

    /* SignalConversion generated from: '<S3>/MaxChrgTime_min' */
    CHDR_ac_B.OutportBufferForMaxChrgTime_min = 255.0F;

    /* SignalConversion generated from: '<S3>/MaxChrgTime_sec' */
    CHDR_ac_B.OutportBufferForMaxChrgTime_sec = 2550.0F;

    /* SignalConversion generated from: '<S3>/EVCU_CP3Cmd' */
    CHDR_ac_B.OutportBufferForEVCU_CP3Cmd = false;

    /* SignalConversion generated from: '<S3>/EVContactorSts' */
    CHDR_ac_B.OutportBufferForEVContactorSts = false;

    /* Update for Atomic SubSystem: '<S3>/Checks' */
    /* Update for UnitDelay: '<S20>/Unit Delay' */
    CHDR_ac_DW.UnitDelay_DSTATE_mr = CHDR_ac_B.vehicle_status;

    /* End of Update for SubSystem: '<S3>/Checks' */

    /* Update for Atomic SubSystem: '<S3>/DC_CHDMO_SF' */
    /* Outputs for Atomic SubSystem: '<S3>/Flags_Monitoring' */
    /* Update for UnitDelay: '<S8>/Unit Delay' incorporates:
     *  Constant: '<S28>/Constant'
     *  Constant: '<S29>/Constant'
     *  Logic: '<S27>/Logical Operator10'
     *  Logic: '<S27>/Logical Operator7'
     *  Logic: '<S27>/Logical Operator8'
     *  Logic: '<S27>/Logical Operator9'
     *  RelationalOperator: '<S27>/Relational Operator1'
     *  RelationalOperator: '<S27>/Relational Operator9'
     *  SignalConversion generated from: '<S1>/EVSE_ChrgStopControl'
     *  SignalConversion generated from: '<S1>/EVSE_Error'
     */
    CHDR_ac_DW.UnitDelay_DSTATE_m2 = (((((((uint32)
        CHDR_ac_B.TmpSignalConversionAtEVSE_ChrgS) == CeIDCR_e_No_Chrg_Stp_Cntrl)
        && (!VeCHDR_b_EVSE_ChrgSysErr)) && (!VeCHDR_b_EVSE_EnergizingState)) &&
        (!VeCHDR_b_OBCM_Timeout)) && (((uint32)
        CHDR_ac_B.TmpSignalConversionAtEVSE_Error) == CeIDCR_e_No_Error));

    /* End of Outputs for SubSystem: '<S3>/Flags_Monitoring' */

    /* Update for UnitDelay: '<S8>/Unit Delay1' */
    CHDR_ac_DW.UnitDelay1_DSTATE = Switch5;

    /* Outputs for Atomic SubSystem: '<S3>/Flags_Monitoring' */
    /* Update for UnitDelay: '<S8>/Unit Delay2' incorporates:
     *  Logic: '<S26>/Logical Operator'
     *  Logic: '<S26>/Logical Operator1'
     */
    CHDR_ac_DW.UnitDelay2_DSTATE_c = (((((((rtb_RelationalOperator || UnitDelay)
        || UnitDelay2) || rtb_AND_dj) || rtb_AND_fb) || rtb_AND_o) ||
        (!CHDR_ac_B.TmpSignalConversionAtSecureConn)) || (VeCHDR_b_OBCM_Timeout));

    /* End of Outputs for SubSystem: '<S3>/Flags_Monitoring' */

    /* Outputs for Atomic SubSystem: '<S3>/Signals_Processing' */
    /* Outputs for Atomic SubSystem: '<S35>/Turn On Delay Sample2' */
    /* Outputs for Atomic SubSystem: '<S35>/Turn On Delay Sample3' */
    /* Update for UnitDelay: '<S8>/Unit Delay3' incorporates:
     *  Constant: '<S61>/Calib'
     *  Logic: '<S35>/Logical Operator1'
     *  Logic: '<S63>/AND'
     *  Logic: '<S64>/AND'
     *  RelationalOperator: '<S63>/Greater  Than'
     *  RelationalOperator: '<S64>/Greater  Than'
     */
    CHDR_ac_DW.UnitDelay3_DSTATE_c = ((rtb_LessThan1 && (rtb_Switch1_f >=
        KeCHDR_Cnt_Dbnc_DCBusCurr)) && (rtb_LessThan2 && (rtb_Switch1 >=
        KeCHDR_Cnt_Dbnc_DCBusCurr)));

    /* End of Outputs for SubSystem: '<S35>/Turn On Delay Sample3' */
    /* End of Outputs for SubSystem: '<S35>/Turn On Delay Sample2' */
    /* End of Outputs for SubSystem: '<S3>/Signals_Processing' */
    /* End of Update for SubSystem: '<S3>/DC_CHDMO_SF' */

    /* Outputs for Atomic SubSystem: '<S3>/CHDR_OBCR_Integration' */
    /* RelationalOperator: '<S6>/Relational Operator4' incorporates:
     *  RelationalOperator: '<S6>/Relational Operator5'
     *  SignalConversion generated from: '<S1>/OBCMCP1Sts'
     */
    Gain_f_tmp = CHDR_ac_B.TmpSignalConversionAtOBCMCP1Sts;

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output_Proc'
     */
    /* Gain: '<S100>/Gain' incorporates:
     *  Constant: '<S14>/Constant'
     *  Constant: '<S15>/Constant'
     *  Constant: '<S16>/Constant'
     *  Constant: '<S17>/Constant'
     *  RelationalOperator: '<S6>/Relational Operator4'
     *  RelationalOperator: '<S6>/Relational Operator5'
     *  RelationalOperator: '<S6>/Relational Operator6'
     *  RelationalOperator: '<S6>/Relational Operator8'
     */
    Gain_f[0] = (((uint32)Gain_f_tmp) == CeIDCR_e_CP1Sts_NO_EVSE);
    Gain_f[1] = (((uint32)Gain_f_tmp) == CeIDCR_e_CP1Sts_VOOR);
    Gain_f[2] = (((uint32)rtb_TmpSignalConversionAtOBCMCS) ==
                 CeIDCR_e_OBCM_CSSts_CS_OUT);
    Gain_f[3] = (((uint32)rtb_TmpSignalConversionAtOBCMCS) ==
                 CeIDCR_e_OBCM_CSSts_CS_FAIL);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<S3>/CHDR_OBCR_Integration' */

    /* Outport: '<Root>/VaCHDR_b_CHDMONCRVector' incorporates:
     *  SignalConversion generated from: '<S1>/VaCHDR_b_CHDMONCRVector'
     */
    (void)Rte_Write_VaCHDR_b_CHDMONCRVector_Value(Gain_f);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output_Proc'
     */
    /* Outport: '<Root>/VeCHDR_I_ChargedCrntMin' incorporates:
     *  Gain: '<S115>/Gain'
     *  SignalConversion generated from: '<S1>/VeCHDR_I_ChrgCurr_Min'
     */
    (void)Rte_Write_VeCHDR_I_ChargedCrntMin_Value(Switch2_o);

    /* Outport: '<Root>/VeCHDR_I_EV_TargetCurr' incorporates:
     *  Gain: '<S110>/Gain'
     *  SignalConversion generated from: '<S1>/VeCHDR_I_EV_TargetCurr'
     */
    (void)Rte_Write_VeCHDR_I_EV_TargetCurr_Value(CHDR_ac_B.HVCM_EV_TargetCurr);

    /* Outport: '<Root>/VeCHDR_K_CHDMOexitReason' incorporates:
     *  Gain: '<S108>/Gain'
     *  SignalConversion generated from: '<S1>/VeCHDR_K_CHDMOexitReason'
     */
    (void)Rte_Write_VeCHDR_K_CHDMOexitReason_Value(CHDR_ac_B.CHDMOexitReason);

    /* Outport: '<Root>/VeCHDR_Pct_ChrgdRefrncCnstnt' incorporates:
     *  Gain: '<S118>/Gain'
     *  SignalConversion generated from: '<S1>/VeCHDR_Pct_ChrgRateRefConstnt'
     */
    (void)Rte_Write_VeCHDR_Pct_ChrgdRefrncCnstnt_Value
        (CHDR_ac_B.OutportBufferForChrgdRefrncCnst);

    /* Outport: '<Root>/VeCHDR_U_EVTarget_Volt' incorporates:
     *  Gain: '<S99>/Gain'
     *  SignalConversion generated from: '<S1>/VeCHDR_U_EVTarget_Volt'
     */
    (void)Rte_Write_VeCHDR_U_EVTarget_Volt_Value(rtb_TmpSignalConversionAtChrgCr);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CHDC'
     */
    /* Outputs for Atomic SubSystem: '<S3>/CHDR_OBCR_Integration' */
    /* Outport: '<Root>/VeCHDR_b_CHDMOFA' incorporates:
     *  Logic: '<S6>/Logical1'
     *  SignalConversion generated from: '<S1>/VeCHDR_b_CHDMOFA'
     */
    (void)Rte_Write_VeCHDR_b_CHDMOFA_Value(((((((((tmpRead_d || tmpRead_e) ||
        tmpRead_f) || tmpRead_g) || tmpRead_h) || tmpRead_i) || tmpRead_j) ||
        tmpRead_k) || tmpRead_l) || tmpRead_m);

    /* Outport: '<Root>/VeCHDR_b_CHDMOValidPlugIn' incorporates:
     *  Constant: '<S11>/Constant'
     *  Constant: '<S12>/Constant'
     *  Constant: '<S13>/Constant'
     *  Constant: '<S18>/Constant'
     *  Logic: '<S6>/Logical3'
     *  RelationalOperator: '<S6>/Relational Operator1'
     *  RelationalOperator: '<S6>/Relational Operator2'
     *  RelationalOperator: '<S6>/Relational Operator3'
     *  RelationalOperator: '<S6>/Relational Operator7'
     *  SignalConversion generated from: '<S1>/VeCHDR_b_CHDMOValidPlugIn'
     *  SignalConversion generated from: '<S1>/OBCMCP1Sts'
     *  SignalConversion generated from: '<S1>/OBCMCP2Sts'
     *  SignalConversion generated from: '<S1>/OBCMCP3Sts'
     *  SignalConversion generated from: '<S1>/OBCMCSSts'
     */
    (void)Rte_Write_VeCHDR_b_CHDMOValidPlugIn_Value((((((uint32)
        rtb_TmpSignalConversionAtOBCMCS) == CeIDCR_e_OBCM_CSSts_CS_IN) ||
        (((uint32)CHDR_ac_B.TmpSignalConversionAtOBCMCP1Sts) ==
         CeIDCR_e_CP1Sts_CP_DET)) || (((uint32)
        CHDR_ac_B.TmpSignalConversionAtOBCMCP2Sts) == CeIDCR_e_CP2Sts_EVSE_ready))
        || (((uint32)CHDR_ac_B.TmpSignalConversionAtOBCMCP3Sts) ==
            CeIDCR_e_CP3Sts_Charge_perm_ena));

    /* End of Outputs for SubSystem: '<S3>/CHDR_OBCR_Integration' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output_Proc'
     */
    /* Outport: '<Root>/VeCHDR_b_DCChrgInitialization' incorporates:
     *  Gain: '<S104>/Gain'
     *  SignalConversion generated from: '<S1>/VeCHDR_b_DCChrgInitialization'
     */
    (void)Rte_Write_VeCHDR_b_DCChrgInitialization_Value
        (CHDR_ac_B.DCChargeInitialized);

    /* Outport: '<Root>/VeCHDR_b_EVCU_CP3Cmd' incorporates:
     *  Gain: '<S105>/Gain'
     *  SignalConversion generated from: '<S1>/VeCHDR_b_EVCU_CP3Cmd'
     */
    (void)Rte_Write_VeCHDR_b_EVCU_CP3Cmd_Value
        (CHDR_ac_B.OutportBufferForEVCU_CP3Cmd);

    /* Outport: '<Root>/VeCHDR_b_EVContactorSts' incorporates:
     *  Gain: '<S106>/Gain'
     *  SignalConversion generated from: '<S1>/VeCHDR_b_EVContactorSts'
     */
    (void)Rte_Write_VeCHDR_b_EVContactorSts_Value
        (CHDR_ac_B.OutportBufferForEVContactorSts);

    /* Outport: '<Root>/VeCHDR_b_EV_Ready' incorporates:
     *  Gain: '<S109>/Gain'
     *  SignalConversion generated from: '<S1>/VeCHDR_b_EV_Ready'
     */
    (void)Rte_Write_VeCHDR_b_EV_Ready_Value(CHDR_ac_B.HVCM_EV_Ready);

    /* Outport: '<Root>/VeCHDR_b_ChrgCrntDvatonErr' incorporates:
     *  Gain: '<S101>/Gain'
     *  SignalConversion generated from: '<S1>/VeCHDR_b_HVBatt_CrntDvtionError'
     */
    (void)Rte_Write_VeCHDR_b_ChrgCrntDvatonErr_Value(rtb_AND_fb);

    /* Outport: '<Root>/VeCHDR_b_BattVoltDvatonErr' incorporates:
     *  Gain: '<S102>/Gain'
     *  SignalConversion generated from: '<S1>/VeCHDR_b_HVBatt_VoltDvtionError'
     */
    (void)Rte_Write_VeCHDR_b_BattVoltDvatonErr_Value(rtb_AND_o);

    /* Outport: '<Root>/VeCHDR_b_IsoDis_Cmd' incorporates:
     *  Gain: '<S116>/Gain'
     *  SignalConversion generated from: '<S1>/VeCHDR_b_IsoDis_Cmd'
     */
    (void)Rte_Write_VeCHDR_b_IsoDis_Cmd_Value
        (CHDR_ac_B.HVCM_DC_Isolation_Disable_Comma);

    /* Outport: '<Root>/VeCHDR_b_OverTemp_Flag' incorporates:
     *  Gain: '<S107>/Gain'
     *  SignalConversion generated from: '<S1>/VeCHDR_b_OverTemp_Flag'
     */
    (void)Rte_Write_VeCHDR_b_OverTemp_Flag_Value(UnitDelay2);

    /* Outport: '<Root>/VeCHDR_b_OvrVolt_Flag' incorporates:
     *  Gain: '<S95>/Gain'
     *  SignalConversion generated from: '<S1>/VeCHDR_b_OvrVolt_Flag'
     */
    (void)Rte_Write_VeCHDR_b_OvrVolt_Flag_Value(rtb_RelationalOperator);

    /* Outport: '<Root>/VeCHDR_b_RdytoChrgStat' incorporates:
     *  Gain: '<S111>/Gain'
     *  SignalConversion generated from: '<S1>/VeCHDR_b_RdytoChrgStat'
     */
    (void)Rte_Write_VeCHDR_b_RdytoChrgStat_Value
        (CHDR_ac_B.HVCMS_ReadyToChargeState);

    /* Outport: '<Root>/VeCHDR_b_StopReqBeforeChrg' incorporates:
     *  Gain: '<S120>/Gain'
     *  SignalConversion generated from: '<S1>/VeCHDR_b_StopReqBeforeCharge'
     */
    (void)Rte_Write_VeCHDR_b_StopReqBeforeChrg_Value(Switch5);

    /* Outport: '<Root>/VeCHDR_b_UndrVolt_Flag' incorporates:
     *  Gain: '<S96>/Gain'
     *  SignalConversion generated from: '<S1>/VeCHDR_b_UndrVolt_Flag'
     */
    (void)Rte_Write_VeCHDR_b_UndrVolt_Flag_Value(UnitDelay);

    /* Outport: '<Root>/VeCHDR_b_Vehicle_Status' incorporates:
     *  Gain: '<S112>/Gain'
     *  SignalConversion generated from: '<S1>/VeCHDR_b_Vehicle_Status'
     */
    (void)Rte_Write_VeCHDR_b_Vehicle_Status_Value(Switch1);

    /* Outport: '<Root>/VeCHDR_b_VehicleDriveSts' incorporates:
     *  Gain: '<S114>/Gain'
     *  SignalConversion generated from: '<S1>/VeCHDR_b_VhclDrveSts_Flag'
     */
    (void)Rte_Write_VeCHDR_b_VehicleDriveSts_Value(rtb_AND_dj);

    /* Outport: '<Root>/VeCHDR_e_CHAdeMOProtocol' incorporates:
     *  DataTypeConversion: '<S92>/DataTypeConversion'
     *  SignalConversion generated from: '<S1>/VeCHDR_e_CHAdeMO_Protocol'
     *  SignalConversion generated from: '<S3>/CHAdeMOProtocol'
     */
    (void)Rte_Write_VeCHDR_e_CHAdeMOProtocol_Value
        (CHDR_ac_B.OutportBufferForCHAdeMOProtocol);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CHDC'
     */
    /* Outputs for Atomic SubSystem: '<S3>/DC_CHDMO_SF' */
    /* Outport: '<Root>/VeCHDR_e_CHDMOChrgSysStat' incorporates:
     *  DataTypeConversion: '<S25>/DataTypeConversion'
     *  SignalConversion generated from: '<S1>/VeCHDR_e_CHDMOChrgSysStat'
     */
    (void)Rte_Write_VeCHDR_e_CHDMOChrgSysStat_Value(CHDR_ac_B.CHDMOChrgSysStat);

    /* End of Outputs for SubSystem: '<S3>/DC_CHDMO_SF' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output_Proc'
     */
    /* Outport: '<Root>/VeCHDR_e_DC_CntctrCmd' incorporates:
     *  DataTypeConversion: '<S94>/DataTypeConversion'
     *  SignalConversion generated from: '<S1>/VeCHDR_e_DC_CntctrCmd'
     */
    (void)Rte_Write_VeCHDR_e_DC_CntctrCmd_Value(CHDR_ac_B.DC_CntctrCmd);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CHDC'
     */
    /* Outputs for Atomic SubSystem: '<S3>/Signals_Processing' */
    /* Outport: '<Root>/VeCHDR_q_TotalBattCapacity' incorporates:
     *  Constant: '<S35>/Constant4'
     *  Product: '<S35>/Divide'
     *  Product: '<S35>/Product'
     *  SignalConversion generated from: '<S1>/VeCHDR_q_TotalBattCapacity'
     */
    (void)Rte_Write_VeCHDR_q_TotalBattCapacity_Value((rtb_Switch4 *
        VeCHDR_U_HV_BatVolt) / 1000.0F);

    /* Switch: '<S34>/Switch2' incorporates:
     *  Constant: '<S34>/Constant3'
     *  Switch: '<S20>/Switch3'
     */
    if (rtb_RelationalOperator9_f)
    {
        tmpRead_b = 0.0F;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S3>/Checks' */
        if (rtb_UnitDelay_e)
        {
            /* Switch: '<S20>/Switch3' incorporates:
             *  Constant: '<S20>/Constant9'
             */
            tmpRead_b = 0.0F;
        }

        /* End of Outputs for SubSystem: '<S3>/Checks' */
    }

    /* End of Switch: '<S34>/Switch2' */
    /* End of Outputs for SubSystem: '<S3>/Signals_Processing' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeCHDR_t_EstChrgTime_min' incorporates:
     *  SignalConversion generated from: '<S1>/VeCHDR_t_EstChrg_Time'
     */
    (void)Rte_Write_VeCHDR_t_EstChrgTime_min_Value(tmpRead_b);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output_Proc'
     */
    /* Outport: '<Root>/VeCHDR_t_MaxChrgTime_min' incorporates:
     *  Gain: '<S113>/Gain'
     *  SignalConversion generated from: '<S1>/VeCHDR_t_MaxChrgTime_min'
     */
    (void)Rte_Write_VeCHDR_t_MaxChrgTime_min_Value
        (CHDR_ac_B.OutportBufferForMaxChrgTime_min);

    /* Outport: '<Root>/VeCHDR_t_MaxChrgTime_sec' incorporates:
     *  Gain: '<S103>/Gain'
     *  SignalConversion generated from: '<S1>/VeCHDR_t_MaxChrgTime_sec'
     */
    (void)Rte_Write_VeCHDR_t_MaxChrgTime_sec_Value
        (CHDR_ac_B.OutportBufferForMaxChrgTime_sec);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/CHDR_MedTED' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
#endif

}

#endif

/* Output function */
FUNC(void, CHDR_CODE) CHDR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/CHDR_PwrOn'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Sub_Out_Init'
     */
    /* Outputs for Atomic SubSystem: '<S121>/Subsystem' */
#if Rte_SysCon_Variant_CHDR_FUNC

    /* Outputs for Atomic SubSystem: '<S122>/FUNC' */
    CHDR_ac_FUNC(&CHDR_ac_B.VariantMergeForOutportVeCHDR__a,
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR_ni,
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR__i,
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR_fd,
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR_I_,
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR_Pc,
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR_t_,
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR_on,
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR_q_,
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR_U_,
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR__f,
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR_hv,
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR_nv,
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR_gq,
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR__c,
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR_e_,
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR_K_,
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR_fg,
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR__m,
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR__p,
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR__o,
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR_pi,
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR__g,
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR__d,
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR__n,
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR_b_,
                 &CHDR_ac_B.VariantMergeForOutportVaCHDR_b_[0],
                 &CHDR_ac_B.VariantMergeForOutportVaCHDR_b_[1],
                 &CHDR_ac_B.VariantMergeForOutportVaCHDR_b_[2],
                 &CHDR_ac_B.VariantMergeForOutportVaCHDR_b_[3],
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR__h,
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR_hb);

    /* End of Outputs for SubSystem: '<S122>/FUNC' */
    /* End of Outputs for SubSystem: '<S121>/Subsystem' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
#else

    /* Outputs for Atomic SubSystem: '<S122>/NF' */
    CHDR_ac_FUNC(&CHDR_ac_B.VariantMergeForOutportVeCHDR__a,
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR_ni,
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR__i,
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR_fd,
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR_I_,
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR_Pc,
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR_t_,
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR_on,
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR_q_,
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR_U_,
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR__f,
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR_hv,
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR_nv,
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR_gq,
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR__c,
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR_e_,
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR_K_,
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR_fg,
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR__m,
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR__p,
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR__o,
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR_pi,
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR__g,
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR__d,
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR__n,
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR_b_,
                 &CHDR_ac_B.VariantMergeForOutportVaCHDR_b_[0],
                 &CHDR_ac_B.VariantMergeForOutportVaCHDR_b_[1],
                 &CHDR_ac_B.VariantMergeForOutportVaCHDR_b_[2],
                 &CHDR_ac_B.VariantMergeForOutportVaCHDR_b_[3],
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR__h,
                 &CHDR_ac_B.VariantMergeForOutportVeCHDR_hb);

    /* End of Outputs for SubSystem: '<S122>/NF' */
#endif

    /* Outport: '<Root>/VaCHDR_b_CHDMONCRVector' incorporates:
     *  SignalConversion generated from: '<S2>/VaCHDR_b_CHDMONCRVector_Out_Init'
     */
    (void)Rte_Write_VaCHDR_b_CHDMONCRVector_Value
        (CHDR_ac_B.VariantMergeForOutportVaCHDR_b_);

    /* Outport: '<Root>/VeCHDR_I_ChargedCrntMin' incorporates:
     *  SignalConversion generated from: '<S2>/VeCHDR_I_ChrgCurr_Min_Out_Init'
     */
    (void)Rte_Write_VeCHDR_I_ChargedCrntMin_Value
        (CHDR_ac_B.VariantMergeForOutportVeCHDR_I_);

    /* Outport: '<Root>/VeCHDR_I_EV_TargetCurr' incorporates:
     *  SignalConversion generated from: '<S2>/VeCHDR_I_EV_TargetCurr_Out_Init'
     */
    (void)Rte_Write_VeCHDR_I_EV_TargetCurr_Value
        (CHDR_ac_B.VariantMergeForOutportVeCHDR__p);

    /* Outport: '<Root>/VeCHDR_K_CHDMOexitReason' incorporates:
     *  SignalConversion generated from: '<S2>/VeCHDR_K_CHDMOexitReason_Out_Init'
     */
    (void)Rte_Write_VeCHDR_K_CHDMOexitReason_Value
        (CHDR_ac_B.VariantMergeForOutportVeCHDR_K_);

    /* Outport: '<Root>/VeCHDR_Pct_ChrgdRefrncCnstnt' incorporates:
     *  SignalConversion generated from: '<S2>/VeCHDR_Pct_ChrgRateRefConstnt_Out_Init'
     */
    (void)Rte_Write_VeCHDR_Pct_ChrgdRefrncCnstnt_Value
        (CHDR_ac_B.VariantMergeForOutportVeCHDR_Pc);

    /* Outport: '<Root>/VeCHDR_U_EVTarget_Volt' incorporates:
     *  SignalConversion generated from: '<S2>/VeCHDR_U_EVTarget_Volt_Out_Init'
     */
    (void)Rte_Write_VeCHDR_U_EVTarget_Volt_Value
        (CHDR_ac_B.VariantMergeForOutportVeCHDR_U_);

    /* Outport: '<Root>/VeCHDR_b_CHDMOFA' incorporates:
     *  SignalConversion generated from: '<S2>/VeCHDR_b_CHDMOFA_Out_Init'
     */
    (void)Rte_Write_VeCHDR_b_CHDMOFA_Value
        (CHDR_ac_B.VariantMergeForOutportVeCHDR_b_);

    /* Outport: '<Root>/VeCHDR_b_CHDMOValidPlugIn' incorporates:
     *  SignalConversion generated from: '<S2>/VeCHDR_b_CHDMOValidPlugIn_Out_Init'
     */
    (void)Rte_Write_VeCHDR_b_CHDMOValidPlugIn_Value
        (CHDR_ac_B.VariantMergeForOutportVeCHDR__n);

    /* Outport: '<Root>/VeCHDR_b_DCChrgInitialization' incorporates:
     *  SignalConversion generated from: '<S2>/VeCHDR_b_DCChrgInitialization_Out_Init'
     */
    (void)Rte_Write_VeCHDR_b_DCChrgInitialization_Value
        (CHDR_ac_B.VariantMergeForOutportVeCHDR_gq);

    /* Outport: '<Root>/VeCHDR_b_EVCU_CP3Cmd' incorporates:
     *  SignalConversion generated from: '<S2>/VeCHDR_b_EVCU_CP3Cmd_Out_Init'
     */
    (void)Rte_Write_VeCHDR_b_EVCU_CP3Cmd_Value
        (CHDR_ac_B.VariantMergeForOutportVeCHDR__h);

    /* Outport: '<Root>/VeCHDR_b_EVContactorSts' incorporates:
     *  SignalConversion generated from: '<S2>/VeCHDR_b_EVContactorSts_Out_Init'
     */
    (void)Rte_Write_VeCHDR_b_EVContactorSts_Value
        (CHDR_ac_B.VariantMergeForOutportVeCHDR_hb);

    /* Outport: '<Root>/VeCHDR_b_EV_Ready' incorporates:
     *  SignalConversion generated from: '<S2>/VeCHDR_b_EV_Ready_Out_Init'
     */
    (void)Rte_Write_VeCHDR_b_EV_Ready_Value
        (CHDR_ac_B.VariantMergeForOutportVeCHDR__m);

    /* Outport: '<Root>/VeCHDR_b_ChrgCrntDvatonErr' incorporates:
     *  SignalConversion generated from: '<S2>/VeCHDR_b_HVBatt_CrntDvtionError_Out_Init'
     */
    (void)Rte_Write_VeCHDR_b_ChrgCrntDvatonErr_Value
        (CHDR_ac_B.VariantMergeForOutportVeCHDR__f);

    /* Outport: '<Root>/VeCHDR_b_BattVoltDvatonErr' incorporates:
     *  SignalConversion generated from: '<S2>/VeCHDR_b_HVBatt_VoltDvtionError_Out_Init'
     */
    (void)Rte_Write_VeCHDR_b_BattVoltDvatonErr_Value
        (CHDR_ac_B.VariantMergeForOutportVeCHDR_hv);

    /* Outport: '<Root>/VeCHDR_b_IsoDis_Cmd' incorporates:
     *  SignalConversion generated from: '<S2>/VeCHDR_b_IsoDis_Cmd_Out_Init'
     */
    (void)Rte_Write_VeCHDR_b_IsoDis_Cmd_Value
        (CHDR_ac_B.VariantMergeForOutportVeCHDR_fg);

    /* Outport: '<Root>/VeCHDR_b_OverTemp_Flag' incorporates:
     *  SignalConversion generated from: '<S2>/VeCHDR_b_OverTemp_Flag_Out_Init'
     */
    (void)Rte_Write_VeCHDR_b_OverTemp_Flag_Value
        (CHDR_ac_B.VariantMergeForOutportVeCHDR__i);

    /* Outport: '<Root>/VeCHDR_b_OvrVolt_Flag' incorporates:
     *  SignalConversion generated from: '<S2>/VeCHDR_b_OvrVolt_Flag_Out_Init'
     */
    (void)Rte_Write_VeCHDR_b_OvrVolt_Flag_Value
        (CHDR_ac_B.VariantMergeForOutportVeCHDR__a);

    /* Outport: '<Root>/VeCHDR_b_RdytoChrgStat' incorporates:
     *  SignalConversion generated from: '<S2>/VeCHDR_b_RdytoChrgStat_Out_Init'
     */
    (void)Rte_Write_VeCHDR_b_RdytoChrgStat_Value
        (CHDR_ac_B.VariantMergeForOutportVeCHDR__o);

    /* Outport: '<Root>/VeCHDR_b_StopReqBeforeChrg' incorporates:
     *  SignalConversion generated from: '<S2>/VeCHDR_b_StopReqBeforeCharge_Out_Init'
     */
    (void)Rte_Write_VeCHDR_b_StopReqBeforeChrg_Value
        (CHDR_ac_B.VariantMergeForOutportVeCHDR_on);

    /* Outport: '<Root>/VeCHDR_b_UndrVolt_Flag' incorporates:
     *  SignalConversion generated from: '<S2>/VeCHDR_b_UndrVolt_Flag_Out_Init'
     */
    (void)Rte_Write_VeCHDR_b_UndrVolt_Flag_Value
        (CHDR_ac_B.VariantMergeForOutportVeCHDR_ni);

    /* Outport: '<Root>/VeCHDR_b_Vehicle_Status' incorporates:
     *  SignalConversion generated from: '<S2>/VeCHDR_b_Vehicle_Status_Out_Init'
     */
    (void)Rte_Write_VeCHDR_b_Vehicle_Status_Value
        (CHDR_ac_B.VariantMergeForOutportVeCHDR_pi);

    /* Outport: '<Root>/VeCHDR_b_VehicleDriveSts' incorporates:
     *  SignalConversion generated from: '<S2>/VeCHDR_b_VhclDrveSts_Flag_Out_Init'
     */
    (void)Rte_Write_VeCHDR_b_VehicleDriveSts_Value
        (CHDR_ac_B.VariantMergeForOutportVeCHDR_fd);

    /* Outport: '<Root>/VeCHDR_e_CHAdeMOProtocol' incorporates:
     *  SignalConversion generated from: '<S2>/VeCHDR_e_CHAdeMO_Protocol_Out_Init'
     *  VariantMerge generated from: '<S122>/VeCHDR_e_CHAdeMO_Protocol_Out_Init'
     */
    (void)Rte_Write_VeCHDR_e_CHAdeMOProtocol_Value
        (CHDR_ac_B.VariantMergeForOutportVeCHDR_nv);

    /* Outport: '<Root>/VeCHDR_e_CHDMOChrgSysStat' incorporates:
     *  SignalConversion generated from: '<S2>/VeCHDR_e_CHDMOChrgSysStat_Out_Init'
     *  VariantMerge generated from: '<S122>/VeCHDR_e_CHDMOChrgSysStat_Out_Init'
     */
    (void)Rte_Write_VeCHDR_e_CHDMOChrgSysStat_Value
        (CHDR_ac_B.VariantMergeForOutportVeCHDR__c);

    /* Outport: '<Root>/VeCHDR_e_DC_CntctrCmd' incorporates:
     *  SignalConversion generated from: '<S2>/VeCHDR_e_DC_CntctrCmd_Out_Init'
     *  VariantMerge generated from: '<S122>/VeCHDR_e_DC_CntctrCmd_Out_Init'
     */
    (void)Rte_Write_VeCHDR_e_DC_CntctrCmd_Value
        (CHDR_ac_B.VariantMergeForOutportVeCHDR_e_);

    /* Outport: '<Root>/VeCHDR_q_TotalBattCapacity' incorporates:
     *  SignalConversion generated from: '<S2>/VeCHDR_q_TotalBattCapacityOut_Init'
     */
    (void)Rte_Write_VeCHDR_q_TotalBattCapacity_Value
        (CHDR_ac_B.VariantMergeForOutportVeCHDR_q_);

    /* Outport: '<Root>/VeCHDR_t_EstChrgTime_min' incorporates:
     *  SignalConversion generated from: '<S2>/VeCHDR_t_EstChrg_Time_Out_Init'
     */
    (void)Rte_Write_VeCHDR_t_EstChrgTime_min_Value
        (CHDR_ac_B.VariantMergeForOutportVeCHDR_t_);

    /* Outport: '<Root>/VeCHDR_t_MaxChrgTime_min' incorporates:
     *  SignalConversion generated from: '<S2>/VeCHDR_t_MaxChrgTime_min_Out_Init'
     */
    (void)Rte_Write_VeCHDR_t_MaxChrgTime_min_Value
        (CHDR_ac_B.VariantMergeForOutportVeCHDR__g);

    /* Outport: '<Root>/VeCHDR_t_MaxChrgTime_sec' incorporates:
     *  SignalConversion generated from: '<S2>/VeCHDR_t_MaxChrgTime_sec_Out_Init'
     */
    (void)Rte_Write_VeCHDR_t_MaxChrgTime_sec_Value
        (CHDR_ac_B.VariantMergeForOutportVeCHDR__d);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, CHDR_CODE) CHDR_ac_Init(void)
{
    {
        sint32 i;
        boolean tmp[4];

        /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
         *  SubSystem: '<Root>/CHDR_PwrOn'
         */
        /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
         *  SubSystem: '<S2>/Sub_Out_Init'
         */
        /* SystemInitialize for Atomic SubSystem: '<S121>/Subsystem' */
#if Rte_SysCon_Variant_CHDR_FUNC

        /* SystemInitialize for Atomic SubSystem: '<S122>/FUNC' */
        CHDR_ac_FUNC_Init(&CHDR_ac_B.VariantMergeForOutportVeCHDR__a,
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR_ni,
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR__i,
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR_fd,
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR_I_,
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR_Pc,
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR_t_,
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR_on,
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR_q_,
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR_U_,
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR__f,
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR_hv,
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR_nv,
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR_gq,
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR__c,
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR_e_,
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR_K_,
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR_fg,
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR__m,
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR__p,
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR__o,
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR_pi,
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR__g,
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR__d,
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR__n,
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR_b_,
                          &CHDR_ac_B.VariantMergeForOutportVaCHDR_b_[0],
                          &CHDR_ac_B.VariantMergeForOutportVaCHDR_b_[1],
                          &CHDR_ac_B.VariantMergeForOutportVaCHDR_b_[2],
                          &CHDR_ac_B.VariantMergeForOutportVaCHDR_b_[3],
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR__h,
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR_hb);

        /* End of SystemInitialize for SubSystem: '<S122>/FUNC' */
        /* End of SystemInitialize for SubSystem: '<S121>/Subsystem' */
        /* End of SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
#else

        /* SystemInitialize for Atomic SubSystem: '<S122>/NF' */
        CHDR_ac_FUNC_Init(&CHDR_ac_B.VariantMergeForOutportVeCHDR__a,
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR_ni,
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR__i,
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR_fd,
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR_I_,
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR_Pc,
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR_t_,
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR_on,
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR_q_,
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR_U_,
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR__f,
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR_hv,
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR_nv,
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR_gq,
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR__c,
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR_e_,
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR_K_,
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR_fg,
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR__m,
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR__p,
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR__o,
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR_pi,
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR__g,
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR__d,
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR__n,
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR_b_,
                          &CHDR_ac_B.VariantMergeForOutportVaCHDR_b_[0],
                          &CHDR_ac_B.VariantMergeForOutportVaCHDR_b_[1],
                          &CHDR_ac_B.VariantMergeForOutportVaCHDR_b_[2],
                          &CHDR_ac_B.VariantMergeForOutportVaCHDR_b_[3],
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR__h,
                          &CHDR_ac_B.VariantMergeForOutportVeCHDR_hb);

        /* End of SystemInitialize for SubSystem: '<S122>/NF' */
#endif

        /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
#if Rte_SysCon_Variant_CHDR_FUNC

        /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
        /* SystemInitialize for Function Call SubSystem: '<Root>/CHDR_MedTED' */
        /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
         *  SubSystem: '<S1>/CHDC'
         */
        /* SystemInitialize for SignalConversion generated from: '<S3>/CHAdeMOProtocol' incorporates:
         *  Constant: '<S31>/Constant'
         */
        CHDR_ac_B.OutportBufferForCHAdeMOProtocol = CHDR_ac_ConstB.Constant;

        /* SystemInitialize for Atomic SubSystem: '<S3>/Signals_Processing' */
        /* SystemInitialize for SignalConversion generated from: '<S3>/ChrgdRefrncCnstnt' incorporates:
         *  Constant: '<S60>/Calib'
         */
        CHDR_ac_B.OutportBufferForChrgdRefrncCnst =
            KeCHDR_Pct_ChrgRateRefConstnt;

        /* End of SystemInitialize for SubSystem: '<S3>/Signals_Processing' */

        /* SystemInitialize for SignalConversion generated from: '<S3>/MaxChrgTime_min' */
        CHDR_ac_B.OutportBufferForMaxChrgTime_min = 255.0F;

        /* SystemInitialize for SignalConversion generated from: '<S3>/MaxChrgTime_sec' */
        CHDR_ac_B.OutportBufferForMaxChrgTime_sec = 2550.0F;

        /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
        /* End of SystemInitialize for SubSystem: '<Root>/CHDR_MedTED' */
        /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
#endif

        /* SystemInitialize for Outport: '<Root>/VeCHDR_e_CHAdeMOProtocol' incorporates:
         *  Merge: '<Root>/Merge_Outport_100'
         */
        (void)Rte_Write_VeCHDR_e_CHAdeMOProtocol_Value
            (CeIDCR_e_CHAdeMO_0_9_n_earlier);

        /* SystemInitialize for Outport: '<Root>/VeCHDR_e_CHDMOChrgSysStat' incorporates:
         *  Merge: '<Root>/Merge_Outport_10'
         */
        (void)Rte_Write_VeCHDR_e_CHDMOChrgSysStat_Value(CeCHDR_e_CHDMOinit);

        /* SystemInitialize for Outport: '<Root>/VeCHDR_e_DC_CntctrCmd' incorporates:
         *  Merge: '<Root>/Merge_Outport_11'
         */
        (void)Rte_Write_VeCHDR_e_DC_CntctrCmd_Value(CeOBCR_e_DCCntctr_Open);

        /* SystemInitialize for Merge: '<Root>/Merge_Outport_16' */
        for (i = 0; i < 4; i++)
        {
            tmp[i] = false;
        }

        /* SystemInitialize for Outport: '<Root>/VaCHDR_b_CHDMONCRVector' incorporates:
         *  Merge: '<Root>/Merge_Outport_16'
         */
        (void)Rte_Write_VaCHDR_b_CHDMONCRVector_Value(tmp);
    }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
