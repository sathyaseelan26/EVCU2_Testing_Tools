/*
 * File: LR3B_FUNC_ac.c
 *
 * Code generated for Simulink model 'LR3B_FUNC_ac'.
 *
 * Model version                  : 1.63
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Apr  6 09:40:21 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "LR3B_FUNC_ac.h"

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_LR3B_FUNC
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(boolean, LR3B_FUNC_VAR_INIT) KeLR3B_b_CanLocStatusBypEnbl =
    0;                                 /* Referenced by: '<S15>/Calib' */
static volatile CONST(TePWMD_e_CanLocStatus, LR3B_FUNC_VAR_INIT)
    KeLR3B_e_CanLocStatus = CePWMD_e_LOC_Disable;/* Referenced by: '<S16>/Calib' */

#define STOP_SEC_CALIB_UNSPECIFIED_LR3B_FUNC
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_LR3B_FUNC
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_AGS_BoostStat_CallStatus;/* '<S32>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_AGS_CalActv_CallStatus;/* '<S37>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_AGS_CalStat_CallStatus;/* '<S42>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_AGS_CurrPos_CallStatus;/* '<S47>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_AGS_ErrLIN_CallStatus;/* '<S54>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_AGS_ErrMechBreak_CallStatus;/* '<S61>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_AGS_ErrMechStuck_CallStatus;/* '<S66>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_AGS_ErrOvrTemp_CallStatus;/* '<S71>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_AGS_ErrOvrVolt_CallStatus;/* '<S76>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_AGS_ErrUnVolt_CallStatus;/* '<S81>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_Below_60V_CallStatus;/* '<S559>/Chart' */

#if Rte_SysCon_VrntLR3B_CEXVBoardTemp

static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_CEXV_Board_Temp_CallStatus;/* '<S102>/Chart' */

#endif

#if Rte_SysCon_VrntLR3B_CEXVCalRq

static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_CEXV_CalRq_CallStatus;/* '<S108>/Chart' */

#endif

#if Rte_SysCon_VrntLR3B_CEXVCalStat

static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_CEXV_CalStat_CallStatus;/* '<S114>/Chart' */

#endif

#if Rte_SysCon_VrntLR3B_CEXVERR

static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_CEXV_ERR_CallStatus;/* '<S120>/Chart' */

#endif

#if Rte_SysCon_VrntLR3B_CEXVPosAct

static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_CEXV_PosAct_CallStatus;/* '<S126>/Chart' */

#endif

#if Rte_SysCon_VrntLR3B_CEXVRefrigerantPressure

static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_CEXV_Refrigerant_Press_CallStatus;/* '<S134>/Chart' */

#endif

#if Rte_SysCon_VrntLR3B_CEXVRefrigerantTemp

static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_CEXV_Refrigerant_Temp_CallStatus;/* '<S142>/Chart' */

#endif

#if Rte_SysCon_VrntLR3B_CEXVSts

static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_CEXV_Sts_CallStatus;/* '<S150>/Chart' */

#endif

#if Rte_SysCon_VrntLR3B_CEXVSupplyVolt

static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_CEXV_SupplyVolt_CallStatus;/* '<S156>/Chart' */

#endif

static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_CPIM_IND1_FailSts_CallStatus;/* '<S192>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_CPIM_IND1_Fdbk_CallStatus;/* '<S197>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_CPIM_IND2_FailSts_CallStatus;/* '<S204>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_CPIM_IND2_Fdbk_CallStatus;/* '<S209>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_CPIM_IND3_FailSts_CallStatus;/* '<S216>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_CPIM_IND3_Fdbk_CallStatus;/* '<S221>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_CPIM_IND4_FailSts_CallStatus;/* '<S228>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_CPIM_IND4_Fdbk_CallStatus;/* '<S233>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_CPIM_IND5_FailSts_CallStatus;/* '<S240>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_CPIM_IND5_Fdbk_CallStatus;/* '<S245>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_CPIM_IND_Color_Fdbk_CallStatus;/* '<S252>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_CPIM_LIN_ChecksumError_CallStatus;/* '<S259>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_CPIM_LIN_Data_Error_CallStatus;/* '<S264>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_CPIM_LIN_Parity_Error_CallStatus;/* '<S269>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_CPIM_Over_Temperature_CallStatus;/* '<S274>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_CPIM_Undervoltage_CallStatus;/* '<S279>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_ChrgPortButton_Sts_CallStatus;/* '<S284>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_ChrgPortDoor_Sts_CallStatus;/* '<S289>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_ChrgPortLock_FailSts_CallStatus;/* '<S296>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_ChrgPortLock_Sts_CallStatus;/* '<S303>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_Chrg_Inlet_Temp_CallStatus;/* '<S310>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_ECH_InterlockStat_CallStatus;/* '<S566>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_EOPB_CURR_CallStatus;/* '<S372>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_EOPB_DR_RN_ER_CallStatus;/* '<S379>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_EOPB_HW_VER_CallStatus;/* '<S487>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_EOPB_LMP_HM_AN_ON_CallStatus;/* '<S386>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_EOPB_LOW_TMP_STAT_CallStatus;/* '<S393>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_EOPB_MONTRNG_RPM_CallStatus;/* '<S400>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_EOPB_OIL_TEMP_CallStatus;/* '<S478>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_EOPB_OV_CUR_ER_CallStatus;/* '<S407>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_EOPB_OV_TMP_ER_CallStatus;/* '<S414>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_EOPB_POST_RUN_STAT_CallStatus;/* '<S421>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_EOPB_RPM_ACTL_CallStatus;/* '<S428>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_EOPB_RPM_TGT_CallStatus;/* '<S435>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_EOPB_SW_VER_CallStatus;/* '<S492>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_EOPB_Stall_Event_CallStatus;/* '<S442>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_EOPB_TEMP_CallStatus;/* '<S449>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_EOPB_VLTG_CallStatus;/* '<S456>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_EOPB_VLTG_ER_CallStatus;/* '<S463>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_HClHrSrFtClTInSnFlt_CallStatus;/* '<S655>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_HClHrSrFtClTOtSnFlt_CallStatus;/* '<S662>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_HClHrSrFtTInMtrlSnFlt_CallStatus;/* '<S669>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_HClHrSrRqCrFrDrShOrOp_CallStatus;/* '<S676>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_HClHrSrRqICnsOtOfRng_CallStatus;/* '<S683>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_HClHrSrRqMemErr_CallStatus;/* '<S690>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_HClHrSrRqSrvRq_CallStatus;/* '<S697>/Chart' */

#if Rte_SysCon_VrntLR3B_HTLBVCalStat

static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_HTLBV_CalStat_CallStatus;/* '<S504>/Chart' */

#endif

#if Rte_SysCon_VrntLR3B_HTLBVERR

static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_HTLBV_ERR_CallStatus;/* '<S512>/Chart' */

#endif

#if Rte_SysCon_VrntLR3B_HTLBVMotorVolt

static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_HTLBV_MotorVolt_CallStatus;/* '<S520>/Chart' */

#endif

#if Rte_SysCon_VrntLR3B_HTLBVPosAct

static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_HTLBV_PosAct_CallStatus;/* '<S528>/Chart' */

#endif

#if Rte_SysCon_VrntLR3B_HTLBVSts

static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_HTLBV_Sts_CallStatus;/* '<S536>/Chart' */

#endif

static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_HVH_UnlockCounter_CallStatus;/* '<S573>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_HvCltHrPrtnSfTmpHwPrtn_CallStatus;/* '<S641>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_HvCltHrPrtnSfTmpOvrhtg_CallStatus;/* '<S648>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_HvCltHtrWrnCltTOtOfRng_CallStatus;/* '<S704>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_HvCltHtrWrnFltInCom_CallStatus;/* '<S711>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_HvCltHtrWrnHvOtOfRng_CallStatus;/* '<S718>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_HvCltHtrWrnULoOtOfRng_CallStatus;/* '<S725>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_HvCltWtrHtrWtrTInIntk_CallStatus;/* '<S599>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_HvCooltHVmeas_CallStatus;/* '<S580>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_HvCooltHeatrICns_CallStatus;/* '<S587>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_HvCooltHeatrSts_CallStatus;/* '<S594>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_HvHeatrPwrCnsDes_CallStatus;/* '<S613>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_HvHeatrPwrCns_CallStatus;/* '<S606>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_HvWtrHeatrWtrT_CallStatus;/* '<S620>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_Icon1_FailSts_CallStatus;/* '<S317>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_Icon1_Sts_CallStatus;/* '<S322>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_Icon2_FailSts_CallStatus;/* '<S329>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_Icon2_Sts_CallStatus;/* '<S334>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_Inlet_Temp1_DC_CallStatus;/* '<S343>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_Inlet_Temp2_DC_CallStatus;/* '<S350>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_PECP2_AIR_PRE_ERR_CallStatus;/* '<S754>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_PECP2_CURR_CallStatus;/* '<S761>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_PECP2_DBLK_ACTV_CallStatus;/* '<S768>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_PECP2_DR_RN_ERR_CallStatus;/* '<S775>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_PECP2_FL_SAFE_ACTVTD_CallStatus;/* '<S782>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_PECP2_LMP_HM_AN_ON_CallStatus;/* '<S789>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_PECP2_MONTRNG_RPM_CallStatus;/* '<S796>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_PECP2_NODE_ERR_CallStatus;/* '<S803>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_PECP2_OVR_CUR_ERR_CallStatus;/* '<S810>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_PECP2_OVR_TMP_ERR_CallStatus;/* '<S817>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_PECP2_POST_RUN_STAT_CallStatus;/* '<S824>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_PECP2_RPM_ACTL_PERCT_CallStatus;/* '<S831>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_PECP2_RPM_TGT_PERCT_CallStatus;/* '<S838>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_PECP2_SUPPLIER_CallStatus;/* '<S873>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_PECP2_TEMP_CallStatus;/* '<S845>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_PECP2_VERSION_CallStatus;/* '<S878>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_PECP2_VLTG_CallStatus;/* '<S852>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_PECP2_VLTG_ERR_CallStatus;/* '<S859>/Chart' */

#if Rte_SysCon_VrntLR3B_PowerPanel2GndFaultDetected

static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_PowPan2_Gnd_Fault_Det_CallStatus;/* '<S955>/Chart' */

#endif

#if Rte_SysCon_VrntLR3B_PowerPanel2LEDAColorFeedback

static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_PowPan2_LED_A_Col_Fdbk_CallStatus;/* '<S963>/Chart' */

#endif

#if Rte_SysCon_VrntLR3B_PowerPanel2LEDAFailStatus

static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_PowPan2_LED_A_FailStat_CallStatus;/* '<S971>/Chart' */

#endif

#if Rte_SysCon_VrntLR3B_PowerPanel2LEDBColorFeedback

static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_PowPan2_LED_B_Col_Fdbk_CallStatus;/* '<S987>/Chart' */

#endif

#if Rte_SysCon_VrntLR3B_PowerPanel2LEDBFailStatus

static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_PowPan2_LED_B_FailStat_CallStatus;/* '<S995>/Chart' */

#endif

#if Rte_SysCon_VrntLR3B_PowerPanel2LINChecksumError

static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_PowPan2_LIN_Cksm_Err_CallStatus;/* '<S1011>/Chart' */

#endif

#if Rte_SysCon_VrntLR3B_PowerPanel2LINDataError

static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_PowPan2_LIN_Data_Err_CallStatus;/* '<S1019>/Chart' */

#endif

#if Rte_SysCon_VrntLR3B_PowerPanel2LINParityError

static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_PowPan2_LIN_Parity_Err_CallStatus;/* '<S1027>/Chart' */

#endif

static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_PowerPanel2ButtonState_CallStatus;/* '<S919>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_PowerPanel2_Fault_CallStatus;/* '<S940>/Chart' */

#if Rte_SysCon_VrntLR3B_PowerPanel2LEDAFeedback

static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_PowerPanel2_LED_A_Fdbk_CallStatus;/* '<S979>/Chart' */

#endif

#if Rte_SysCon_VrntLR3B_PowerPanel2LEDBFeedback

static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_PowerPanel2_LED_B_Fdbk_CallStatus;/* '<S1003>/Chart' */

#endif

static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_PowerPanel2_RatedPower_CallStatus;/* '<S1055>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_PwrPanel2AC_PrsntSens1_CallStatus;/* '<S905>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_PwrPanel2AC_PrsntSens2_CallStatus;/* '<S912>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_PwrPanel2CurrDrawSens1_CallStatus;/* '<S926>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_PwrPanel2CurrDrawSens2_CallStatus;/* '<S933>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_PwrPanel2LidSwtSts120A_CallStatus;/* '<S1034>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_PwrPanel2LidSwtSts120B_CallStatus;/* '<S1041>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_PwrPanel2LidSwtSts240_CallStatus;/* '<S1048>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_PwrPanel2_Fault_Reason_CallStatus;/* '<S947>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_RsErr_AGS_CallStatus;/* '<S86>/Chart' */

#if Rte_SysCon_VrntLR3B_RsErrCEXV

static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_RsErr_CEXV_CallStatus;/* '<S162>/Chart' */

#endif

static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_RsErr_ECH_CallStatus;/* '<S732>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_RsErr_EOPB_CallStatus;/* '<S470>/Chart' */

#if Rte_SysCon_VrntLR3B_RsErrHTLBV

static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_RsErr_HTLBV_CallStatus;/* '<S544>/Chart' */

#endif

static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_RsErr_PECP2_PUMP_CallStatus;/* '<S866>/Chart' */
static VAR(uint8, LR3B_FUNC_VAR_INIT) VeLINR_y_RsErr_SPP2_CallStatus;/* '<S1062>/Chart' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_LR3B_FUNC
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_LR3B_FUNC
#include "MemMap.h"

VAR(B_LR3B_FUNC_ac_T, LR3B_FUNC_VAR_INIT) LR3B_FUNC_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_LR3B_FUNC
#include "MemMap.h"

/* Model step function for TID1 */
FUNC(void, LR3B_FUNC_CODE) LR3B_FUNC_MedTEB(void) /* Explicit Task: MedTEB */
{
    /* local block i/o variables */
    uint8 rtb_TmpSignalConversionAtVeLINR;
    uint8 rtb_TmpSignalConversionAtVeLI_j;
    uint8 rtb_TmpSignalConversionAtVeLI_i;
    uint8 rtb_TmpSignalConversionAtVeLI_g;
    uint8 rtb_TmpSignalConversionAtVeLI_c;
    uint8 rtb_TmpSignalConversionAtVeLI_l;
    uint8 rtb_TmpSignalConversionAtVeLI_h;
    uint8 rtb_TmpSignalConversionAtVeLI_f;
    uint8 rtb_TmpSignalConversionAtVeL_cr;
    uint8 rtb_TmpSignalConversionAtVeLI_a;
    uint8 rtb_TmpSignalConversionAtVeLI_d;

#if Rte_SysCon_VrntLR3B_CEXVBoardTemp

    uint8 rtb_TmpSignalConversionAtVeL_du;

#endif

#if Rte_SysCon_VrntLR3B_CEXVCalRq

    uint8 rtb_TmpSignalConversionAtVeLI_k;

#endif

#if Rte_SysCon_VrntLR3B_CEXVCalStat

    uint8 rtb_TmpSignalConversionAtVeL_j2;

#endif

#if Rte_SysCon_VrntLR3B_CEXVERR

    uint8 rtb_TmpSignalConversionAtVeL_hd;

#endif

#if Rte_SysCon_VrntLR3B_CEXVPosAct

    uint8 rtb_TmpSignalConversionAtVeLI_o;

#endif

#if Rte_SysCon_VrntLR3B_CEXVRefrigerantPressure

    uint8 rtb_TmpSignalConversionAtVeL_cx;

#endif

#if Rte_SysCon_VrntLR3B_CEXVRefrigerantTemp

    uint8 rtb_TmpSignalConversionAtVeL_h2;

#endif

#if Rte_SysCon_VrntLR3B_CEXVSts

    uint8 rtb_TmpSignalConversionAtVeLI_e;

#endif

#if Rte_SysCon_VrntLR3B_CEXVSupplyVolt

    uint8 rtb_TmpSignalConversionAtVeL_hj;

#endif

#if Rte_SysCon_VrntLR3B_RsErrCEXV

    uint8 rtb_TmpSignalConversionAtVeL_cp;

#endif

    uint8 rtb_TmpSignalConversionAtVe_j23;
    uint8 rtb_TmpSignalConversionAtVeL_kl;
    uint8 rtb_TmpSignalConversionAtVeLI_n;
    uint8 rtb_TmpSignalConversionAtVeL_au;
    uint8 rtb_TmpSignalConversionAtVeLI_p;
    uint8 rtb_TmpSignalConversionAtVeL_ig;
    uint8 rtb_TmpSignalConversionAtVeL_lc;
    uint8 rtb_TmpSignalConversionAtVeL_pd;
    uint8 rtb_TmpSignalConversionAtVeL_ku;
    uint8 rtb_TmpSignalConversionAtVeL_el;
    uint8 rtb_TmpSignalConversionAtVeL_gy;
    uint8 rtb_TmpSignalConversionAtVeL_ll;
    uint8 rtb_TmpSignalConversionAtVeL_dr;
    uint8 rtb_TmpSignalConversionAtVeL_hy;
    uint8 rtb_TmpSignalConversionAtVeL_og;
    uint8 rtb_TmpSignalConversionAtVeL_ij;
    uint8 rtb_TmpSignalConversionAtVeL_eg;
    uint8 rtb_TmpSignalConversionAtVeL_fg;
    uint8 rtb_TmpSignalConversionAtVeLI_b;
    uint8 rtb_TmpSignalConversionAtVeL_cf;
    uint8 rtb_TmpSignalConversionAtVeL_kr;
    uint8 rtb_TmpSignalConversionAtVeL_ge;
    uint8 rtb_TmpSignalConversionAtVeL_k0;
    uint8 rtb_TmpSignalConversionAtVeL_iv;
    uint8 rtb_TmpSignalConversionAtVe_kr3;
    uint8 rtb_TmpSignalConversionAtVeL_no;
    uint8 rtb_TmpSignalConversionAtVeL_ag;
    uint8 rtb_TmpSignalConversionAtVeL_ip;
    uint8 rtb_TmpSignalConversionAtVeL_lm;
    uint8 rtb_TmpSignalConversionAtVeL_eo;
    uint8 rtb_TmpSignalConversionAtVe_egj;
    uint8 rtb_TmpSignalConversionAtVeLI_m;
    uint8 rtb_TmpSignalConversionAtVeL_o3;
    uint8 rtb_TmpSignalConversionAtVeL_ex;
    uint8 rtb_TmpSignalConversionAtVeL_ne;
    uint8 rtb_TmpSignalConversionAtVeL_kb;
    uint8 rtb_TmpSignalConversionAtVeL_ei;
    uint8 rtb_TmpSignalConversionAtVeL_dg;
    uint8 rtb_TmpSignalConversionAtVeL_f5;
    uint8 rtb_TmpSignalConversionAtVeL_cv;
    uint8 rtb_TmpSignalConversionAtVeL_aa;
    uint8 rtb_TmpSignalConversionAtVeL_ki;
    uint8 rtb_TmpSignalConversionAtVeL_d1;
    uint8 rtb_TmpSignalConversionAtVeL_fq;
    uint8 rtb_TmpSignalConversionAtVeL_nb;

#if Rte_SysCon_VrntLR3B_HTLBVCalStat

    uint8 rtb_TmpSignalConversionAtVeL_mg;

#endif

#if Rte_SysCon_VrntLR3B_HTLBVERR

    uint8 rtb_TmpSignalConversionAtVeL_kk;

#endif

#if Rte_SysCon_VrntLR3B_HTLBVMotorVolt

    uint8 rtb_TmpSignalConversionAtVeL_n5;

#endif

#if Rte_SysCon_VrntLR3B_HTLBVPosAct

    uint8 rtb_TmpSignalConversionAtVeL_aq;

#endif

#if Rte_SysCon_VrntLR3B_HTLBVSts

    uint8 rtb_TmpSignalConversionAtVeL_kt;

#endif

#if Rte_SysCon_VrntLR3B_RsErrHTLBV

    uint8 rtb_TmpSignalConversionAtVe_f5c;

#endif

    uint8 rtb_TmpSignalConversionAtVeL_lh;
    uint8 rtb_TmpSignalConversionAtVeL_pm;
    uint8 rtb_TmpSignalConversionAtVeL_l2;
    uint8 rtb_TmpSignalConversionAtVeL_hc;
    uint8 rtb_TmpSignalConversionAtVeL_b0;
    uint8 rtb_TmpSignalConversionAtVeL_ih;
    uint8 rtb_TmpSignalConversionAtVeL_b1;
    uint8 rtb_TmpSignalConversionAtVeL_lb;
    uint8 rtb_TmpSignalConversionAtVeL_co;
    uint8 rtb_TmpSignalConversionAtVeL_me;
    uint8 rtb_TmpSignalConversionAtVeL_pg;
    uint8 rtb_TmpSignalConversionAtVeL_ff;
    uint8 rtb_TmpSignalConversionAtVe_cri;
    uint8 rtb_TmpSignalConversionAtVeL_eb;
    uint8 rtb_TmpSignalConversionAtVeL_mq;
    uint8 rtb_TmpSignalConversionAtVe_ipr;
    uint8 rtb_TmpSignalConversionAtVeL_mf;
    uint8 rtb_TmpSignalConversionAtVeL_gx;
    uint8 rtb_TmpSignalConversionAtVeL_ox;
    uint8 rtb_TmpSignalConversionAtVeL_h3;
    uint8 rtb_TmpSignalConversionAtVeL_pn;
    uint8 rtb_TmpSignalConversionAtVeL_gq;
    uint8 rtb_TmpSignalConversionAtVeL_jx;
    uint8 rtb_TmpSignalConversionAtVeL_i4;
    uint8 rtb_TmpSignalConversionAtVeL_fb;
    uint8 rtb_TmpSignalConversionAtVeL_jm;
    uint8 rtb_TmpSignalConversionAtVeL_mc;
    uint8 rtb_TmpSignalConversionAtVeL_g1;
    uint8 rtb_TmpSignalConversionAtVeL_pa;
    uint8 rtb_TmpSignalConversionAtVeL_mo;
    uint8 rtb_TmpSignalConversionAtVeL_ms;
    uint8 rtb_TmpSignalConversionAtVe_ihj;
    uint8 rtb_TmpSignalConversionAtVeL_d4;
    uint8 rtb_TmpSignalConversionAtVeL_jo;
    uint8 rtb_TmpSignalConversionAtVe_g14;
    uint8 rtb_TmpSignalConversionAtVe_d4v;
    uint8 rtb_TmpSignalConversionAtVe_mgc;
    uint8 rtb_TmpSignalConversionAtVeL_f2;
    uint8 rtb_TmpSignalConversionAtVe_aud;
    uint8 rtb_TmpSignalConversionAtVeL_ix;
    uint8 rtb_TmpSignalConversionAtVeL_j3;
    uint8 rtb_TmpSignalConversionAtVeL_mi;
    uint8 rtb_TmpSignalConversionAtVeL_js;
    uint8 rtb_TmpSignalConversionAtVeL_en;
    uint8 rtb_TmpSignalConversionAtVeL_oa;
    uint8 rtb_TmpSignalConversionAtVeL_hm;
    uint8 rtb_TmpSignalConversionAtVeL_m0;
    uint8 rtb_TmpSignalConversionAtVeL_np;
    uint8 rtb_TmpSignalConversionAtVeL_hw;
    uint8 rtb_TmpSignalConversionAtVeL_hh;

#if Rte_SysCon_VrntLR3B_PowerPanel2GndFaultDetected

    uint8 rtb_TmpSignalConversionAtVeL_iz;

#endif

#if Rte_SysCon_VrntLR3B_PowerPanel2LEDAColorFeedback

    uint8 rtb_TmpSignalConversionAtVeL_an;

#endif

#if Rte_SysCon_VrntLR3B_PowerPanel2LEDAFailStatus

    uint8 rtb_TmpSignalConversionAtVeL_ic;

#endif

#if Rte_SysCon_VrntLR3B_PowerPanel2LEDAFeedback

    uint8 rtb_TmpSignalConversionAtVeL_od;

#endif

#if Rte_SysCon_VrntLR3B_PowerPanel2LEDBColorFeedback

    uint8 rtb_TmpSignalConversionAtVeL_ht;

#endif

#if Rte_SysCon_VrntLR3B_PowerPanel2LEDBFailStatus

    uint8 rtb_TmpSignalConversionAtVeL_kg;

#endif

#if Rte_SysCon_VrntLR3B_PowerPanel2LEDBFeedback

    uint8 rtb_TmpSignalConversionAtVe_hcc;

#endif

#if Rte_SysCon_VrntLR3B_PowerPanel2LINChecksumError

    uint8 rtb_TmpSignalConversionAtVe_hwn;

#endif

#if Rte_SysCon_VrntLR3B_PowerPanel2LINDataError

    uint8 rtb_TmpSignalConversionAtVeL_fl;

#endif

#if Rte_SysCon_VrntLR3B_PowerPanel2LINParityError

    uint8 rtb_TmpSignalConversionAtVeL_bd;

#endif

    uint8 rtb_TmpSignalConversionAtVeL_bq;
    uint8 rtb_TmpSignalConversionAtVeL_py;
    uint8 rtb_TmpSignalConversionAtVeL_cl;
    uint8 rtb_TmpSignalConversionAtVeL_kh;
    uint8 rtb_TmpSignalConversionAtVeL_lw;
    uint8 tmpRead;
    boolean tmpRead_0;
    boolean tmpRead_1;
    boolean tmpRead_2;
    boolean tmpRead_3;
    boolean tmpRead_4;
    boolean tmpRead_5;
    boolean tmpRead_6;
    boolean tmpRead_7;

#if Rte_SysCon_VrntLR3B_CEXVBoardTemp

    boolean tmpRead_8;

#endif

#if Rte_SysCon_VrntLR3B_CEXVCalStat

    boolean tmpRead_9;

#endif

#if Rte_SysCon_VrntLR3B_CEXVERR

    boolean tmpRead_a;

#endif

    boolean tmpRead_b;
    boolean tmpRead_c;
    boolean tmpRead_d;
    boolean tmpRead_e;
    boolean tmpRead_f;
    boolean tmpRead_g;
    boolean tmpRead_h;
    boolean tmpRead_i;
    boolean tmpRead_j;
    boolean tmpRead_k;
    boolean tmpRead_l;
    boolean tmpRead_m;
    boolean tmpRead_n;
    boolean tmpRead_o;
    boolean tmpRead_p;
    boolean tmpRead_q;
    boolean tmpRead_r;

#if Rte_SysCon_VrntLR3B_HTLBVCalStat

    boolean tmpRead_s;

#endif

#if Rte_SysCon_VrntLR3B_HTLBVERR

    boolean tmpRead_t;

#endif

#if Rte_SysCon_VrntLR3B_HTLBVPosAct

    boolean tmpRead_u;

#endif

    boolean tmpRead_10;
    boolean tmpRead_11;
    boolean tmpRead_12;
    boolean tmpRead_13;
    boolean tmpRead_14;
    boolean tmpRead_15;
    boolean tmpRead_v;
    boolean tmpRead_w;
    boolean tmpRead_x;
    boolean tmpRead_y;
    boolean tmpRead_z;

#if Rte_SysCon_VrntLR3B_PowerPanel2LEDAColorFeedback

    boolean tmpRead_16;

#endif

#if Rte_SysCon_VrntLR3B_PowerPanel2LEDAFailStatus

    boolean tmpRead_17;

#endif

#if Rte_SysCon_VrntLR3B_PowerPanel2LEDAFeedback

    boolean tmpRead_18;

#endif

#if Rte_SysCon_VrntLR3B_PowerPanel2LEDBFailStatus

    boolean tmpRead_19;

#endif

#if Rte_SysCon_VrntLR3B_PowerPanel2LEDBFeedback

    boolean tmpRead_1a;

#endif

#if Rte_SysCon_VrntLR3B_PowerPanel2LINChecksumError

    boolean tmpRead_1b;

#endif

#if Rte_SysCon_VrntLR3B_PowerPanel2LINDataError

    boolean tmpRead_1c;

#endif

#if Rte_SysCon_VrntLR3B_PowerPanel2LINParityError

    boolean tmpRead_1d;

#endif

    TePWMD_e_CanLocStatus rtb_Switch;
    boolean FA_out_a;
    boolean FA_out_a0;
    boolean FA_out_a2;
    boolean FA_out_ac;
    boolean FA_out_ag;
    boolean FA_out_ai;
    boolean FA_out_ak;
    boolean FA_out_ao;
    boolean FA_out_b;
    boolean FA_out_bg;
    boolean FA_out_bp;
    boolean FA_out_bpg;
    boolean FA_out_c3;
    boolean FA_out_c3i;
    boolean FA_out_cb;
    boolean FA_out_cm;
    boolean FA_out_cy;
    boolean FA_out_d0;
    boolean FA_out_d2;
    boolean FA_out_df;
    boolean FA_out_dt;
    boolean FA_out_dx;
    boolean FA_out_e;
    boolean FA_out_e5;
    boolean FA_out_ec;
    boolean FA_out_et;
    boolean FA_out_ey;
    boolean FA_out_f5;
    boolean FA_out_g3;
    boolean FA_out_ge;
    boolean FA_out_gk;
    boolean FA_out_gm;
    boolean FA_out_go;
    boolean FA_out_gw;
    boolean FA_out_h1;
    boolean FA_out_ha;
    boolean FA_out_hg;
    boolean FA_out_hj;
    boolean FA_out_hq;
    boolean FA_out_hu;
    boolean FA_out_i0;
    boolean FA_out_i2;
    boolean FA_out_ig;
    boolean FA_out_ioe;
    boolean FA_out_j0;
    boolean FA_out_j4;
    boolean FA_out_jz;
    boolean FA_out_k2;
    boolean FA_out_kc;
    boolean FA_out_ma;
    boolean FA_out_mi;
    boolean FA_out_mp;
    boolean FA_out_mv;
    boolean FA_out_n0;
    boolean FA_out_n0z;
    boolean FA_out_n4;
    boolean FA_out_n43;
    boolean FA_out_nq;
    boolean FA_out_nr;
    boolean FA_out_o;
    boolean FA_out_o1;
    boolean FA_out_om;
    boolean FA_out_os;
    boolean FA_out_ov;
    boolean FA_out_ove;
    boolean FA_out_ox;
    boolean FA_out_p;
    boolean FA_out_p1;
    boolean FA_out_pg;
    boolean FA_out_pj;
    boolean FA_out_pw;
    boolean rtb_RelationalOperator;
    boolean tmpRead_1e;
    boolean tmpRead_1f;
    boolean tmpRead_1g;
    boolean tmpRead_1h;
    boolean tmpRead_1i;

#if Rte_SysCon_VrntLR3B_CEXVCalRq || Rte_SysCon_VrntLR3B_CEXVERR

    boolean FA_out_hi;

#endif

#if Rte_SysCon_VrntLR3B_CEXVPosAct

    boolean FA_out_oxp;

#endif

#if Rte_SysCon_VrntLR3B_CEXVRefrigerantPressure

    boolean FA_out_p0;

#endif

#if Rte_SysCon_VrntLR3B_CEXVRefrigerantTemp

    boolean FA_out_fc;

#endif

#if Rte_SysCon_VrntLR3B_CEXVSts

    boolean FA_out_bk;

#endif

#if Rte_SysCon_VrntLR3B_CEXVSupplyVolt

    boolean FA_out_fq;

#endif

    boolean FA_out_cg;

#if Rte_SysCon_VrntLR3B_HTLBVMotorVolt || Rte_SysCon_VrntLR3B_HTLBVPosAct

    boolean FA_out_bb;

#endif

#if Rte_SysCon_VrntLR3B_HTLBVSts

    boolean FA_out_d4;

#endif

#if Rte_SysCon_VrntLR3B_PowerPanel2GndFaultDetected || Rte_SysCon_VrntLR3B_PowerPanel2LEDAFeedback

    boolean FA_out_jt;

#endif

#if Rte_SysCon_VrntLR3B_PowerPanel2LEDBColorFeedback || Rte_SysCon_VrntLR3B_PowerPanel2LEDBFeedback

    boolean FA_out_j;

#endif

    float32 tmp;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* SignalConversion generated from: '<S2>/VeLINR_e_AGS_BoostStat_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AGS_BoostStat_ErrSts'
     */
    rtb_TmpSignalConversionAtVeLINR =
        Rte_Read_VeLINR_b_AGS_BoostStat_VeLINR_b_AGS_BoostStat
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_A);

    /* Switch: '<S20>/Switch' incorporates:
     *  Constant: '<S15>/Calib'
     *  Inport: '<Root>/VeCANR_e_CanLocEnblStatus'
     */
    if (KeLR3B_b_CanLocStatusBypEnbl)
    {
        /* Switch: '<S20>/Switch' incorporates:
         *  Constant: '<S16>/Calib'
         */
        rtb_Switch = KeLR3B_e_CanLocStatus;
    }
    else
    {
        (void)Rte_Read_VeCANR_e_CanLocEnblStatus_VeCANR_e_CanLocEnblStatus
            (&tmpRead);

        /* Switch: '<S20>/Switch' incorporates:
         *  DataTypeConversion: '<S2>/Data Type Conversion'
         *  Inport: '<Root>/VeCANR_e_CanLocEnblStatus'
         */
        rtb_Switch = (TePWMD_e_CanLocStatus)tmpRead;
    }

    /* End of Switch: '<S20>/Switch' */

    /* RelationalOperator: '<S2>/Relational Operator' incorporates:
     *  Constant: '<S11>/Constant'
     *  Switch: '<S20>/Switch'
     */
    rtb_RelationalOperator = (((uint32)rtb_Switch) == CePWMD_e_LOC_Enable);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AGS_BoostStatTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S35>:1' */
    (void)Rte_Read_VeLINR_b_AGS_BoostStatTO_VeLINR_b_AGS_BoostStatTO(&FA_out_om);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S32>/Chart' */
    if (FA_out_om)
    {
        /* Transition: '<S35>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S35>:6' */
            /* Transition: '<S35>:25' */
            /* Call Fsft */
            VeLINR_y_AGS_BoostStat_CallStatus = 2U;

            /* Event: '<S35>:39' */
            /* Transition: '<S35>:29' */
        }
        else
        {
            /* Transition: '<S35>:30' */
            /* Call Tmot */
            VeLINR_y_AGS_BoostStat_CallStatus = 3U;

            /* Event: '<S35>:40' */
        }

        /* Transition: '<S35>:36' */
        /* Transition: '<S35>:23' */
    }
    else
    {
        /* Transition: '<S35>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLINR) == 133)
        {
            /* Transition: '<S35>:33' */
            /* Transition: '<S35>:35' */
            /* Call Nothing */
            VeLINR_y_AGS_BoostStat_CallStatus = 4U;

            /* Transition: '<S35>:23' */
        }
        else
        {
            /* Transition: '<S35>:46' */
            /* Transition: '<S35>:37' */
            /* Call Poke */
            VeLINR_y_AGS_BoostStat_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S21>/Poke' */
            /* FunctionCaller: '<S36>/Function Caller' */
            /* Event: '<S35>:38' */
            Rte_Call_PokeTAIR_b_AGS_BoostSts_PokeTAIR_b_AGS_BoostSts
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_A);

            /* End of Outputs for SubSystem: '<S21>/Poke' */
        }
    }

    /* End of Chart: '<S32>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AGS_CalActv_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AGS_CalActv_ErrSts'
     */
    /* Transition: '<S35>:19' */
    rtb_TmpSignalConversionAtVeLI_j =
        Rte_Read_VeLINR_b_AGS_CalActv_VeLINR_b_AGS_CalActv
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_g);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AGS_CalActvTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S40>:1' */
    (void)Rte_Read_VeLINR_b_AGS_CalActvTO_VeLINR_b_AGS_CalActvTO(&tmpRead_0);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S37>/Chart' */
    if (tmpRead_0)
    {
        /* Transition: '<S40>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S40>:6' */
            /* Transition: '<S40>:25' */
            /* Call Fsft */
            VeLINR_y_AGS_CalActv_CallStatus = 2U;

            /* Event: '<S40>:39' */
            /* Transition: '<S40>:29' */
        }
        else
        {
            /* Transition: '<S40>:30' */
            /* Call Tmot */
            VeLINR_y_AGS_CalActv_CallStatus = 3U;

            /* Event: '<S40>:40' */
        }

        /* Transition: '<S40>:36' */
        /* Transition: '<S40>:23' */
    }
    else
    {
        /* Transition: '<S40>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_j) == 133)
        {
            /* Transition: '<S40>:33' */
            /* Transition: '<S40>:35' */
            /* Call Nothing */
            VeLINR_y_AGS_CalActv_CallStatus = 4U;

            /* Transition: '<S40>:23' */
        }
        else
        {
            /* Transition: '<S40>:46' */
            /* Transition: '<S40>:37' */
            /* Call Poke */
            VeLINR_y_AGS_CalActv_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S22>/Poke' */
            /* FunctionCaller: '<S41>/Function Caller' */
            /* Event: '<S40>:38' */
            Rte_Call_PokeTAIR_b_AGS_CalibrationActv_PokeTAIR_b_AGS_CalibrationActv
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_g);

            /* End of Outputs for SubSystem: '<S22>/Poke' */
        }
    }

    /* End of Chart: '<S37>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AGS_CalStat_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AGS_CalStat_ErrSts'
     */
    /* Transition: '<S40>:19' */
    rtb_TmpSignalConversionAtVeLI_i =
        Rte_Read_VeLINR_b_AGS_CalStat_VeLINR_b_AGS_CalStat
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_m);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AGS_CalStatTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S45>:1' */
    (void)Rte_Read_VeLINR_b_AGS_CalStatTO_VeLINR_b_AGS_CalStatTO(&tmpRead_1);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S42>/Chart' */
    if (tmpRead_1)
    {
        /* Transition: '<S45>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S45>:6' */
            /* Transition: '<S45>:25' */
            /* Call Fsft */
            VeLINR_y_AGS_CalStat_CallStatus = 2U;

            /* Event: '<S45>:39' */
            /* Transition: '<S45>:29' */
        }
        else
        {
            /* Transition: '<S45>:30' */
            /* Call Tmot */
            VeLINR_y_AGS_CalStat_CallStatus = 3U;

            /* Event: '<S45>:40' */
        }

        /* Transition: '<S45>:36' */
        /* Transition: '<S45>:23' */
    }
    else
    {
        /* Transition: '<S45>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_i) == 133)
        {
            /* Transition: '<S45>:33' */
            /* Transition: '<S45>:35' */
            /* Call Nothing */
            VeLINR_y_AGS_CalStat_CallStatus = 4U;

            /* Transition: '<S45>:23' */
        }
        else
        {
            /* Transition: '<S45>:46' */
            /* Transition: '<S45>:37' */
            /* Call Poke */
            VeLINR_y_AGS_CalStat_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S23>/Poke' */
            /* FunctionCaller: '<S46>/Function Caller' incorporates:
             *  DataTypeConversion: '<S46>/Data Type Conversion'
             *  DataTypeConversion: '<S46>/Data Type Conversion1'
             */
            /* Event: '<S45>:38' */
            Rte_Call_PokeTAIR_e_AGS_CalibrationSts_PokeTAIR_e_AGS_CalibrationSts
                ((TeTAIR_e_AGS_Calibration_Sts)
                 LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_m);

            /* End of Outputs for SubSystem: '<S23>/Poke' */
        }
    }

    /* End of Chart: '<S42>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AGS_CurrPos_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AGS_CurrPos_ErrSts'
     */
    /* Transition: '<S45>:19' */
    rtb_TmpSignalConversionAtVeLI_g =
        Rte_Read_VeLINR_e_AGS_CurrPos_VeLINR_e_AGS_CurrPos
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_A);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AGS_CurrPosTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S51>:1' */
    (void)Rte_Read_VeLINR_b_AGS_CurrPosTO_VeLINR_b_AGS_CurrPosTO(&tmpRead_2);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S47>/Chart' */
    if (tmpRead_2)
    {
        /* Transition: '<S51>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S51>:6' */
            /* Transition: '<S51>:25' */
            /* Call Fsft */
            VeLINR_y_AGS_CurrPos_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S24>/Fsft' */
            /* FunctionCaller: '<S52>/Function Caller' */
            /* Event: '<S51>:39' */
            Rte_Call_FsftTAIR_b_AGS_CurrPos_FsftTAIR_b_AGS_CurrPos();

            /* End of Outputs for SubSystem: '<S24>/Fsft' */
            /* Transition: '<S51>:29' */
        }
        else
        {
            /* Transition: '<S51>:30' */
            /* Call Tmot */
            VeLINR_y_AGS_CurrPos_CallStatus = 3U;

            /* Event: '<S51>:40' */
        }

        /* Transition: '<S51>:36' */
        /* Transition: '<S51>:23' */
    }
    else
    {
        /* Transition: '<S51>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_g) == 133)
        {
            /* Transition: '<S51>:33' */
            /* Transition: '<S51>:35' */
            /* Call Nothing */
            VeLINR_y_AGS_CurrPos_CallStatus = 4U;

            /* Transition: '<S51>:23' */
        }
        else
        {
            /* Transition: '<S51>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeLI_g) == 1)
            {
                /* Transition: '<S51>:48' */
                /* Transition: '<S51>:53' */
                FA_out_om = true;

                /* Transition: '<S51>:56' */
            }
            else
            {
                /* Transition: '<S51>:52' */
                FA_out_om = false;
            }

            /* Transition: '<S51>:37' */
            /* Call Poke */
            VeLINR_y_AGS_CurrPos_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S24>/Poke' */
            /* FunctionCaller: '<S53>/Function Caller' */
            /* Event: '<S51>:38' */
            Rte_Call_PokeTAIR_e_AGS_CurrPos_LIN_PokeTAIR_e_AGS_CurrPos_LIN
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_A, FA_out_om);

            /* End of Outputs for SubSystem: '<S24>/Poke' */
        }
    }

    /* End of Chart: '<S47>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AGS_ErrLIN_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AGS_ErrLIN_ErrSts'
     */
    /* Transition: '<S51>:19' */
    rtb_TmpSignalConversionAtVeLI_c =
        Rte_Read_VeLINR_e_AGS_ErrLIN_VeLINR_e_AGS_ErrLIN
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_l);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AGS_ErrLIN_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S58>:1' */
    (void)Rte_Read_VeLINR_b_AGS_ErrLIN_TO_VeLINR_b_AGS_ErrLIN_TO(&FA_out_pg);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S54>/Chart' */
    if (FA_out_pg)
    {
        /* Transition: '<S58>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S58>:6' */
            /* Transition: '<S58>:25' */
            /* Call Fsft */
            VeLINR_y_AGS_ErrLIN_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S25>/Fsft' */
            /* FunctionCaller: '<S59>/Function Caller' */
            /* Event: '<S58>:39' */
            Rte_Call_FsftTAIR_e_AGS_ErrFdb_FsftTAIR_e_AGS_ErrFdb();

            /* End of Outputs for SubSystem: '<S25>/Fsft' */
            /* Transition: '<S58>:29' */
        }
        else
        {
            /* Transition: '<S58>:30' */
            /* Call Tmot */
            VeLINR_y_AGS_ErrLIN_CallStatus = 3U;

            /* Event: '<S58>:40' */
        }

        /* Transition: '<S58>:36' */
        /* Transition: '<S58>:23' */
    }
    else
    {
        /* Transition: '<S58>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_c) == 133)
        {
            /* Transition: '<S58>:33' */
            /* Transition: '<S58>:35' */
            /* Call Nothing */
            VeLINR_y_AGS_ErrLIN_CallStatus = 4U;

            /* Transition: '<S58>:23' */
        }
        else
        {
            /* Transition: '<S58>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeLI_c) == 1)
            {
                /* Transition: '<S58>:48' */
                /* Transition: '<S58>:53' */
                FA_out_pg = true;

                /* Transition: '<S58>:56' */
            }
            else
            {
                /* Transition: '<S58>:52' */
            }

            /* Transition: '<S58>:37' */
            /* Call Poke */
            VeLINR_y_AGS_ErrLIN_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S25>/Poke' */
            /* FunctionCaller: '<S60>/Function Caller' */
            /* Event: '<S58>:38' */
            Rte_Call_PokeTAIR_e_AGS_ErrFdb_PokeTAIR_e_AGS_ErrFdb
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_l, FA_out_pg);

            /* End of Outputs for SubSystem: '<S25>/Poke' */
        }
    }

    /* End of Chart: '<S54>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AGS_ErrMechBreak_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AGS_ErrMechBreak_ErrSts'
     */
    /* Transition: '<S58>:19' */
    rtb_TmpSignalConversionAtVeLI_l =
        Rte_Read_VeLINR_b_AGS_ErrMechBreak_VeLINR_b_AGS_ErrMechBreak
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_d);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AGS_ErrMechBreakTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S64>:1' */
    (void)Rte_Read_VeLINR_b_AGS_ErrMechBreakTO_VeLINR_b_AGS_ErrMechBreakTO
        (&FA_out_c3i);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S61>/Chart' */
    if (FA_out_c3i)
    {
        /* Transition: '<S64>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S64>:6' */
            /* Transition: '<S64>:25' */
            /* Call Fsft */
            VeLINR_y_AGS_ErrMechBreak_CallStatus = 2U;

            /* Event: '<S64>:39' */
            /* Transition: '<S64>:29' */
        }
        else
        {
            /* Transition: '<S64>:30' */
            /* Call Tmot */
            VeLINR_y_AGS_ErrMechBreak_CallStatus = 3U;

            /* Event: '<S64>:40' */
        }

        /* Transition: '<S64>:36' */
        /* Transition: '<S64>:23' */
    }
    else
    {
        /* Transition: '<S64>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_l) == 133)
        {
            /* Transition: '<S64>:33' */
            /* Transition: '<S64>:35' */
            /* Call Nothing */
            VeLINR_y_AGS_ErrMechBreak_CallStatus = 4U;

            /* Transition: '<S64>:23' */
        }
        else
        {
            /* Transition: '<S64>:46' */
            /* Transition: '<S64>:37' */
            /* Call Poke */
            VeLINR_y_AGS_ErrMechBreak_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S26>/Poke' */
            /* FunctionCaller: '<S65>/Function Caller' */
            /* Event: '<S64>:38' */
            Rte_Call_PokeTAIR_b_AGS_ErrMechBreak_PokeTAIR_b_AGS_ErrMechBreak
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_d);

            /* End of Outputs for SubSystem: '<S26>/Poke' */
        }
    }

    /* End of Chart: '<S61>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AGS_ErrMechStuck_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AGS_ErrMechStuck_ErrSts'
     */
    /* Transition: '<S64>:19' */
    rtb_TmpSignalConversionAtVeLI_h =
        Rte_Read_VeLINR_b_AGS_ErrMechStuck_VeLINR_b_AGS_ErrMechStuck
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_j);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AGS_ErrMechStuckTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S69>:1' */
    (void)Rte_Read_VeLINR_b_AGS_ErrMechStuckTO_VeLINR_b_AGS_ErrMechStuckTO
        (&tmpRead_3);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S66>/Chart' */
    if (tmpRead_3)
    {
        /* Transition: '<S69>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S69>:6' */
            /* Transition: '<S69>:25' */
            /* Call Fsft */
            VeLINR_y_AGS_ErrMechStuck_CallStatus = 2U;

            /* Event: '<S69>:39' */
            /* Transition: '<S69>:29' */
        }
        else
        {
            /* Transition: '<S69>:30' */
            /* Call Tmot */
            VeLINR_y_AGS_ErrMechStuck_CallStatus = 3U;

            /* Event: '<S69>:40' */
        }

        /* Transition: '<S69>:36' */
        /* Transition: '<S69>:23' */
    }
    else
    {
        /* Transition: '<S69>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_h) == 133)
        {
            /* Transition: '<S69>:33' */
            /* Transition: '<S69>:35' */
            /* Call Nothing */
            VeLINR_y_AGS_ErrMechStuck_CallStatus = 4U;

            /* Transition: '<S69>:23' */
        }
        else
        {
            /* Transition: '<S69>:46' */
            /* Transition: '<S69>:37' */
            /* Call Poke */
            VeLINR_y_AGS_ErrMechStuck_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S27>/Poke' */
            /* FunctionCaller: '<S70>/Function Caller' */
            /* Event: '<S69>:38' */
            Rte_Call_PokeTAIR_b_AGS_ErrMechStuck_PokeTAIR_b_AGS_ErrMechStuck
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_j);

            /* End of Outputs for SubSystem: '<S27>/Poke' */
        }
    }

    /* End of Chart: '<S66>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AGS_ErrOvrTemp_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AGS_ErrOvrTemp_ErrSts'
     */
    /* Transition: '<S69>:19' */
    rtb_TmpSignalConversionAtVeLI_f =
        Rte_Read_VeLINR_b_AGS_ErrOvrTemp_VeLINR_b_AGS_ErrOvrTemp
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_e);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AGS_ErrOvrTempTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S74>:1' */
    (void)Rte_Read_VeLINR_b_AGS_ErrOvrTempTO_VeLINR_b_AGS_ErrOvrTempTO
        (&tmpRead_4);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S71>/Chart' */
    if (tmpRead_4)
    {
        /* Transition: '<S74>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S74>:6' */
            /* Transition: '<S74>:25' */
            /* Call Fsft */
            VeLINR_y_AGS_ErrOvrTemp_CallStatus = 2U;

            /* Event: '<S74>:39' */
            /* Transition: '<S74>:29' */
        }
        else
        {
            /* Transition: '<S74>:30' */
            /* Call Tmot */
            VeLINR_y_AGS_ErrOvrTemp_CallStatus = 3U;

            /* Event: '<S74>:40' */
        }

        /* Transition: '<S74>:36' */
        /* Transition: '<S74>:23' */
    }
    else
    {
        /* Transition: '<S74>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_f) == 133)
        {
            /* Transition: '<S74>:33' */
            /* Transition: '<S74>:35' */
            /* Call Nothing */
            VeLINR_y_AGS_ErrOvrTemp_CallStatus = 4U;

            /* Transition: '<S74>:23' */
        }
        else
        {
            /* Transition: '<S74>:46' */
            /* Transition: '<S74>:37' */
            /* Call Poke */
            VeLINR_y_AGS_ErrOvrTemp_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S28>/Poke' */
            /* FunctionCaller: '<S75>/Function Caller' */
            /* Event: '<S74>:38' */
            Rte_Call_PokeTAIR_b_AGS_ErrOverTemp_PokeTAIR_b_AGS_ErrOverTemp
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_e);

            /* End of Outputs for SubSystem: '<S28>/Poke' */
        }
    }

    /* End of Chart: '<S71>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AGS_ErrOvrVolt_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AGS_ErrOvrVolt_ErrSts'
     */
    /* Transition: '<S74>:19' */
    rtb_TmpSignalConversionAtVeL_cr =
        Rte_Read_VeLINR_b_AGS_ErrOvrVolt_VeLINR_b_AGS_ErrOvrVolt
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_f);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AGS_ErrOvrVoltTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S79>:1' */
    (void)Rte_Read_VeLINR_b_AGS_ErrOvrVoltTO_VeLINR_b_AGS_ErrOvrVoltTO
        (&tmpRead_5);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S76>/Chart' */
    if (tmpRead_5)
    {
        /* Transition: '<S79>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S79>:6' */
            /* Transition: '<S79>:25' */
            /* Call Fsft */
            VeLINR_y_AGS_ErrOvrVolt_CallStatus = 2U;

            /* Event: '<S79>:39' */
            /* Transition: '<S79>:29' */
        }
        else
        {
            /* Transition: '<S79>:30' */
            /* Call Tmot */
            VeLINR_y_AGS_ErrOvrVolt_CallStatus = 3U;

            /* Event: '<S79>:40' */
        }

        /* Transition: '<S79>:36' */
        /* Transition: '<S79>:23' */
    }
    else
    {
        /* Transition: '<S79>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_cr) == 133)
        {
            /* Transition: '<S79>:33' */
            /* Transition: '<S79>:35' */
            /* Call Nothing */
            VeLINR_y_AGS_ErrOvrVolt_CallStatus = 4U;

            /* Transition: '<S79>:23' */
        }
        else
        {
            /* Transition: '<S79>:46' */
            /* Transition: '<S79>:37' */
            /* Call Poke */
            VeLINR_y_AGS_ErrOvrVolt_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S29>/Poke' */
            /* FunctionCaller: '<S80>/Function Caller' */
            /* Event: '<S79>:38' */
            Rte_Call_PokeTAIR_b_AGS_ErrOverVolt_PokeTAIR_b_AGS_ErrOverVolt
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_f);

            /* End of Outputs for SubSystem: '<S29>/Poke' */
        }
    }

    /* End of Chart: '<S76>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AGS_ErrUnVolt_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AGS_ErrUnVolt_ErrSts'
     */
    /* Transition: '<S79>:19' */
    rtb_TmpSignalConversionAtVeLI_a =
        Rte_Read_VeLINR_b_AGS_ErrUnVolt_VeLINR_b_AGS_ErrUnVolt
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__fw);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AGS_ErrUnVoltTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S84>:1' */
    (void)Rte_Read_VeLINR_b_AGS_ErrUnVoltTO_VeLINR_b_AGS_ErrUnVoltTO(&tmpRead_6);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S81>/Chart' */
    if (tmpRead_6)
    {
        /* Transition: '<S84>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S84>:6' */
            /* Transition: '<S84>:25' */
            /* Call Fsft */
            VeLINR_y_AGS_ErrUnVolt_CallStatus = 2U;

            /* Event: '<S84>:39' */
            /* Transition: '<S84>:29' */
        }
        else
        {
            /* Transition: '<S84>:30' */
            /* Call Tmot */
            VeLINR_y_AGS_ErrUnVolt_CallStatus = 3U;

            /* Event: '<S84>:40' */
        }

        /* Transition: '<S84>:36' */
        /* Transition: '<S84>:23' */
    }
    else
    {
        /* Transition: '<S84>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_a) == 133)
        {
            /* Transition: '<S84>:33' */
            /* Transition: '<S84>:35' */
            /* Call Nothing */
            VeLINR_y_AGS_ErrUnVolt_CallStatus = 4U;

            /* Transition: '<S84>:23' */
        }
        else
        {
            /* Transition: '<S84>:46' */
            /* Transition: '<S84>:37' */
            /* Call Poke */
            VeLINR_y_AGS_ErrUnVolt_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S30>/Poke' */
            /* FunctionCaller: '<S85>/Function Caller' */
            /* Event: '<S84>:38' */
            Rte_Call_PokeTAIR_b_AGS_ErrUnderVolt_PokeTAIR_b_AGS_ErrUnderVolt
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__fw);

            /* End of Outputs for SubSystem: '<S30>/Poke' */
        }
    }

    /* End of Chart: '<S81>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_RsErr_AGS_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_RsErr_AGS_ErrSts'
     */
    /* Transition: '<S84>:19' */
    rtb_TmpSignalConversionAtVeLI_d =
        Rte_Read_VeLINR_b_RsErr_AGS_VeLINR_b_RsErr_AGS
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_R);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_RsErr_AGS_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S89>:1' */
    (void)Rte_Read_VeLINR_b_RsErr_AGS_TO_VeLINR_b_RsErr_AGS_TO(&tmpRead_7);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S86>/Chart' */
    if (tmpRead_7)
    {
        /* Transition: '<S89>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S89>:6' */
            /* Transition: '<S89>:25' */
            /* Call Fsft */
            VeLINR_y_RsErr_AGS_CallStatus = 2U;

            /* Event: '<S89>:39' */
            /* Transition: '<S89>:29' */
        }
        else
        {
            /* Transition: '<S89>:30' */
            /* Call Tmot */
            VeLINR_y_RsErr_AGS_CallStatus = 3U;

            /* Event: '<S89>:40' */
        }

        /* Transition: '<S89>:36' */
        /* Transition: '<S89>:23' */
    }
    else
    {
        /* Transition: '<S89>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_d) == 133)
        {
            /* Transition: '<S89>:33' */
            /* Transition: '<S89>:35' */
            /* Call Nothing */
            VeLINR_y_RsErr_AGS_CallStatus = 4U;

            /* Transition: '<S89>:23' */
        }
        else
        {
            /* Transition: '<S89>:46' */
            /* Transition: '<S89>:37' */
            /* Call Poke */
            VeLINR_y_RsErr_AGS_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S31>/Poke' */
            /* FunctionCaller: '<S90>/Function Caller' */
            /* Event: '<S89>:38' */
            Rte_Call_PokeTAIR_b_AGS_ResErr_PokeTAIR_b_AGS_ResErr
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_R);

            /* End of Outputs for SubSystem: '<S31>/Poke' */
        }
    }

    /* End of Chart: '<S86>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_T_CEXV_Board_Temp' incorporates:
     *  Inport: '<Root>/VeLINR_b_CEXV_Board_TempTO'
     */
    /* Transition: '<S89>:19' */
#if Rte_SysCon_VrntLR3B_CEXVBoardTemp

    /* Outputs for Atomic SubSystem: '<S4>/CEXV_Board_Temp' */
    /* SignalConversion generated from: '<S2>/VeLINR_T_CEXV_Board_Temp' incorporates:
     *  Inport: '<Root>/VeLINR_T_CEXV_Board_Temp'
     */
    rtb_TmpSignalConversionAtVeL_du =
        Rte_Read_VeLINR_T_CEXV_Board_Temp_VeLINR_T_CEXV_Board_Temp
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_T_C);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S105>:1' */
    (void)Rte_Read_VeLINR_b_CEXV_Board_TempTO_VeLINR_b_CEXV_Board_TempTO
        (&tmpRead_8);

    /* Outputs for Atomic SubSystem: '<S91>/CEXV_Board_Temp' */
    /* Chart: '<S102>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_CEXV_Board_TempTO'
     */
    if (tmpRead_8)
    {
        /* Transition: '<S105>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S105>:6' */
            /* Transition: '<S105>:25' */
            /* Call Fsft */
            VeLINR_y_CEXV_Board_Temp_CallStatus = 2U;

            /* Event: '<S105>:39' */
            /* Transition: '<S105>:29' */
        }
        else
        {
            /* Transition: '<S105>:30' */
            /* Call Tmot */
            VeLINR_y_CEXV_Board_Temp_CallStatus = 3U;

            /* Event: '<S105>:40' */
        }

        /* Transition: '<S105>:36' */
        /* Transition: '<S105>:23' */
    }
    else
    {
        /* Transition: '<S105>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_du) == 133)
        {
            /* Transition: '<S105>:33' */
            /* Transition: '<S105>:35' */
            /* Call Nothing */
            VeLINR_y_CEXV_Board_Temp_CallStatus = 4U;

            /* Transition: '<S105>:23' */
        }
        else
        {
            /* Transition: '<S105>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_du) == 1)
            {
                /* Transition: '<S105>:48' */
                /* Transition: '<S105>:53' */
                FA_out_c3i = true;

                /* Transition: '<S105>:56' */
            }
            else
            {
                /* Transition: '<S105>:52' */
                FA_out_c3i = false;
            }

            /* Transition: '<S105>:37' */
            /* Call Poke */
            VeLINR_y_CEXV_Board_Temp_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S101>/Poke' */
            /* FunctionCaller: '<S106>/Function Caller' */
            /* Event: '<S105>:38' */
            Rte_Call_PokeTAIR_T_EXV_BoardTemp_PokeTAIR_T_EXV_BoardTemp
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_T_C, FA_out_c3i);

            /* End of Outputs for SubSystem: '<S101>/Poke' */
        }
    }

    /* End of Chart: '<S102>/Chart' */
    /* End of Outputs for SubSystem: '<S91>/CEXV_Board_Temp' */
    /* End of Outputs for SubSystem: '<S4>/CEXV_Board_Temp' */
    /* Transition: '<S105>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_T_CEXV_Board_Temp' */

    /* SignalConversion generated from: '<S2>/VeLINR_b_CEXV_CalRq' incorporates:
     *  Inport: '<Root>/VeLINR_b_CEXV_CalRqTO'
     */
#if Rte_SysCon_VrntLR3B_CEXVCalRq

    /* Outputs for Atomic SubSystem: '<S4>/CEXV_CalRq' */
    /* SignalConversion generated from: '<S2>/VeLINR_b_CEXV_CalRq' incorporates:
     *  Inport: '<Root>/VeLINR_b_CEXV_CalRq'
     */
    rtb_TmpSignalConversionAtVeLI_k =
        Rte_Read_VeLINR_b_CEXV_CalRq_VeLINR_b_CEXV_CalRq
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_C);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S111>:1' */
    (void)Rte_Read_VeLINR_b_CEXV_CalRqTO_VeLINR_b_CEXV_CalRqTO(&FA_out_hi);

    /* Outputs for Atomic SubSystem: '<S92>/CEXV_CalRq' */
    /* Chart: '<S108>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_CEXV_CalRqTO'
     */
    if (FA_out_hi)
    {
        /* Transition: '<S111>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S111>:6' */
            /* Transition: '<S111>:25' */
            /* Call Fsft */
            VeLINR_y_CEXV_CalRq_CallStatus = 2U;

            /* Event: '<S111>:39' */
            /* Transition: '<S111>:29' */
        }
        else
        {
            /* Transition: '<S111>:30' */
            /* Call Tmot */
            VeLINR_y_CEXV_CalRq_CallStatus = 3U;

            /* Event: '<S111>:40' */
        }

        /* Transition: '<S111>:36' */
        /* Transition: '<S111>:23' */
    }
    else
    {
        /* Transition: '<S111>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_k) == 133)
        {
            /* Transition: '<S111>:33' */
            /* Transition: '<S111>:35' */
            /* Call Nothing */
            VeLINR_y_CEXV_CalRq_CallStatus = 4U;

            /* Transition: '<S111>:23' */
        }
        else
        {
            /* Transition: '<S111>:46' */
            /* Transition: '<S111>:37' */
            /* Call Poke */
            VeLINR_y_CEXV_CalRq_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S107>/Poke' */
            /* FunctionCaller: '<S112>/Function Caller' */
            /* Event: '<S111>:38' */
            Rte_Call_PokeTAIR_b_EXV_CalRq_PokeTAIR_b_EXV_CalRq
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_C);

            /* End of Outputs for SubSystem: '<S107>/Poke' */
        }
    }

    /* End of Chart: '<S108>/Chart' */
    /* End of Outputs for SubSystem: '<S92>/CEXV_CalRq' */
    /* End of Outputs for SubSystem: '<S4>/CEXV_CalRq' */
    /* Transition: '<S111>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_b_CEXV_CalRq' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_CEXV_CalStat' incorporates:
     *  Inport: '<Root>/VeLINR_b_CEXV_CalStatTO'
     */
#if Rte_SysCon_VrntLR3B_CEXVCalStat

    /* Outputs for Atomic SubSystem: '<S4>/CEXV_CalStat' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_CEXV_CalStat' incorporates:
     *  Inport: '<Root>/VeLINR_e_CEXV_CalStat'
     */
    rtb_TmpSignalConversionAtVeL_j2 =
        Rte_Read_VeLINR_e_CEXV_CalStat_VeLINR_e_CEXV_CalStat
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_g);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S117>:1' */
    (void)Rte_Read_VeLINR_b_CEXV_CalStatTO_VeLINR_b_CEXV_CalStatTO(&tmpRead_9);

    /* Outputs for Atomic SubSystem: '<S93>/CEXV_CalStat' */
    /* Chart: '<S114>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_CEXV_CalStatTO'
     */
    if (tmpRead_9)
    {
        /* Transition: '<S117>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S117>:6' */
            /* Transition: '<S117>:25' */
            /* Call Fsft */
            VeLINR_y_CEXV_CalStat_CallStatus = 2U;

            /* Event: '<S117>:39' */
            /* Transition: '<S117>:29' */
        }
        else
        {
            /* Transition: '<S117>:30' */
            /* Call Tmot */
            VeLINR_y_CEXV_CalStat_CallStatus = 3U;

            /* Event: '<S117>:40' */
        }

        /* Transition: '<S117>:36' */
        /* Transition: '<S117>:23' */
    }
    else
    {
        /* Transition: '<S117>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_j2) == 133)
        {
            /* Transition: '<S117>:33' */
            /* Transition: '<S117>:35' */
            /* Call Nothing */
            VeLINR_y_CEXV_CalStat_CallStatus = 4U;

            /* Transition: '<S117>:23' */
        }
        else
        {
            /* Transition: '<S117>:46' */
            /* Transition: '<S117>:37' */
            /* Call Poke */
            VeLINR_y_CEXV_CalStat_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S113>/Poke' */
            /* FunctionCaller: '<S118>/Function Caller' incorporates:
             *  Constant: '<S118>/Constant'
             */
            /* Event: '<S117>:38' */
            Rte_Call_PokeTAIR_e_EXV_CalStat_PokeTAIR_e_EXV_CalStat
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_g, false);

            /* End of Outputs for SubSystem: '<S113>/Poke' */
        }
    }

    /* End of Chart: '<S114>/Chart' */
    /* End of Outputs for SubSystem: '<S93>/CEXV_CalStat' */
    /* End of Outputs for SubSystem: '<S4>/CEXV_CalStat' */
    /* Transition: '<S117>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_CEXV_CalStat' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_CEXV_ERR' incorporates:
     *  Inport: '<Root>/VeLINR_b_CEXV_ERR_TO'
     */
#if Rte_SysCon_VrntLR3B_CEXVERR

    /* Outputs for Atomic SubSystem: '<S4>/CEXV_ERR' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_CEXV_ERR' incorporates:
     *  Inport: '<Root>/VeLINR_e_CEXV_ERR'
     */
    rtb_TmpSignalConversionAtVeL_hd =
        Rte_Read_VeLINR_e_CEXV_ERR_VeLINR_e_CEXV_ERR
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_a);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S123>:1' */
    (void)Rte_Read_VeLINR_b_CEXV_ERR_TO_VeLINR_b_CEXV_ERR_TO(&tmpRead_a);

    /* Outputs for Atomic SubSystem: '<S94>/CEXV_ERR' */
    /* Chart: '<S120>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_CEXV_ERR_TO'
     */
    if (tmpRead_a)
    {
        /* Transition: '<S123>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S123>:6' */
            /* Transition: '<S123>:25' */
            /* Call Fsft */
            VeLINR_y_CEXV_ERR_CallStatus = 2U;

            /* Event: '<S123>:39' */
            /* Transition: '<S123>:29' */
        }
        else
        {
            /* Transition: '<S123>:30' */
            /* Call Tmot */
            VeLINR_y_CEXV_ERR_CallStatus = 3U;

            /* Event: '<S123>:40' */
        }

        /* Transition: '<S123>:36' */
        /* Transition: '<S123>:23' */
    }
    else
    {
        /* Transition: '<S123>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_hd) == 133)
        {
            /* Transition: '<S123>:33' */
            /* Transition: '<S123>:35' */
            /* Call Nothing */
            VeLINR_y_CEXV_ERR_CallStatus = 4U;

            /* Transition: '<S123>:23' */
        }
        else
        {
            /* Transition: '<S123>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_hd) == 1)
            {
                /* Transition: '<S123>:48' */
                /* Transition: '<S123>:53' */
                FA_out_hi = true;

                /* Transition: '<S123>:56' */
            }
            else
            {
                /* Transition: '<S123>:52' */
                FA_out_hi = false;
            }

            /* Transition: '<S123>:37' */
            /* Call Poke */
            VeLINR_y_CEXV_ERR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S119>/Poke' */
            /* FunctionCaller: '<S124>/Function Caller' */
            /* Event: '<S123>:38' */
            Rte_Call_PokeTAIR_e_EXV_Err_PokeTAIR_e_EXV_Err
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_a, FA_out_hi);

            /* End of Outputs for SubSystem: '<S119>/Poke' */
        }
    }

    /* End of Chart: '<S120>/Chart' */
    /* End of Outputs for SubSystem: '<S94>/CEXV_ERR' */
    /* End of Outputs for SubSystem: '<S4>/CEXV_ERR' */
    /* Transition: '<S123>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_CEXV_ERR' */

    /* SignalConversion generated from: '<S2>/VeLINR_Pct_CEXV_PosAct' incorporates:
     *  Inport: '<Root>/VeLINR_b_CEXV_PosActTO'
     */
#if Rte_SysCon_VrntLR3B_CEXVPosAct

    /* Outputs for Atomic SubSystem: '<S4>/CEXV_PosAct' */
    /* SignalConversion generated from: '<S2>/VeLINR_Pct_CEXV_PosAct' incorporates:
     *  Inport: '<Root>/VeLINR_Pct_CEXV_PosAct'
     */
    rtb_TmpSignalConversionAtVeLI_o =
        Rte_Read_VeLINR_Pct_CEXV_PosAct_VeLINR_Pct_CEXV_PosAct
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_Pct);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S130>:1' */
    (void)Rte_Read_VeLINR_b_CEXV_PosActTO_VeLINR_b_CEXV_PosActTO(&FA_out_oxp);

    /* Outputs for Atomic SubSystem: '<S95>/CEXV_PosAct' */
    /* Chart: '<S126>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_CEXV_PosActTO'
     */
    if (FA_out_oxp)
    {
        /* Transition: '<S130>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S130>:6' */
            /* Transition: '<S130>:25' */
            /* Call Fsft */
            VeLINR_y_CEXV_PosAct_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S125>/Fsft' */
            /* FunctionCaller: '<S131>/Function Caller' */
            /* Event: '<S130>:39' */
            Rte_Call_FsftTAIR_Pct_EXV_PosAct_FsftTAIR_Pct_EXV_PosAct();

            /* End of Outputs for SubSystem: '<S125>/Fsft' */
            /* Transition: '<S130>:29' */
        }
        else
        {
            /* Transition: '<S130>:30' */
            /* Call Tmot */
            VeLINR_y_CEXV_PosAct_CallStatus = 3U;

            /* Event: '<S130>:40' */
        }

        /* Transition: '<S130>:36' */
        /* Transition: '<S130>:23' */
    }
    else
    {
        /* Transition: '<S130>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_o) == 133)
        {
            /* Transition: '<S130>:33' */
            /* Transition: '<S130>:35' */
            /* Call Nothing */
            VeLINR_y_CEXV_PosAct_CallStatus = 4U;

            /* Transition: '<S130>:23' */
        }
        else
        {
            /* Transition: '<S130>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeLI_o) == 1)
            {
                /* Transition: '<S130>:48' */
                /* Transition: '<S130>:53' */
                FA_out_oxp = true;

                /* Transition: '<S130>:56' */
            }
            else
            {
                /* Transition: '<S130>:52' */
            }

            /* Transition: '<S130>:37' */
            /* Call Poke */
            VeLINR_y_CEXV_PosAct_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S125>/Poke' */
            /* FunctionCaller: '<S132>/Function Caller' */
            /* Event: '<S130>:38' */
            Rte_Call_PokeTAIR_Pct_EXV_PosAct_PokeTAIR_Pct_EXV_PosAct
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_Pct, FA_out_oxp);

            /* End of Outputs for SubSystem: '<S125>/Poke' */
        }
    }

    /* End of Chart: '<S126>/Chart' */
    /* End of Outputs for SubSystem: '<S95>/CEXV_PosAct' */
    /* End of Outputs for SubSystem: '<S4>/CEXV_PosAct' */
    /* Transition: '<S130>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_Pct_CEXV_PosAct' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_CEXV_Refrigerant_Press' incorporates:
     *  Inport: '<Root>/VeLINR_b_CEXV_Refrigerant_PressTO'
     */
#if Rte_SysCon_VrntLR3B_CEXVRefrigerantPressure

    /* Outputs for Atomic SubSystem: '<S4>/CEXV_Refrigerant_Pressure' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_CEXV_Refrigerant_Press' incorporates:
     *  Inport: '<Root>/VeLINR_e_CEXV_Refrigerant_Press'
     */
    rtb_TmpSignalConversionAtVeL_cx =
        Rte_Read_VeLINR_e_CEXV_Refrigerant_Press_VeLINR_e_CEXV_Refrigerant_Press
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_C);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S138>:1' */
    (void)
        Rte_Read_VeLINR_b_CEXV_Refrigerant_PressTO_VeLINR_b_CEXV_Refrigerant_PressTO
        (&FA_out_p0);

    /* Outputs for Atomic SubSystem: '<S96>/CEXV_Refrigerant_Pressure' */
    /* Chart: '<S134>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_CEXV_Refrigerant_PressTO'
     */
    if (FA_out_p0)
    {
        /* Transition: '<S138>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S138>:6' */
            /* Transition: '<S138>:25' */
            /* Call Fsft */
            VeLINR_y_CEXV_Refrigerant_Press_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S133>/Fsft' */
            /* FunctionCaller: '<S139>/Function Caller' */
            /* Event: '<S138>:39' */
            Rte_Call_FsftTAIR_kp_EXV_RefPress_FsftTAIR_kp_EXV_RefPress();

            /* End of Outputs for SubSystem: '<S133>/Fsft' */
            /* Transition: '<S138>:29' */
        }
        else
        {
            /* Transition: '<S138>:30' */
            /* Call Tmot */
            VeLINR_y_CEXV_Refrigerant_Press_CallStatus = 3U;

            /* Event: '<S138>:40' */
        }

        /* Transition: '<S138>:36' */
        /* Transition: '<S138>:23' */
    }
    else
    {
        /* Transition: '<S138>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_cx) == 133)
        {
            /* Transition: '<S138>:33' */
            /* Transition: '<S138>:35' */
            /* Call Nothing */
            VeLINR_y_CEXV_Refrigerant_Press_CallStatus = 4U;

            /* Transition: '<S138>:23' */
        }
        else
        {
            /* Transition: '<S138>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_cx) == 1)
            {
                /* Transition: '<S138>:48' */
                /* Transition: '<S138>:53' */
                FA_out_p0 = true;

                /* Transition: '<S138>:56' */
            }
            else
            {
                /* Transition: '<S138>:52' */
            }

            /* Transition: '<S138>:37' */
            /* Call Poke */
            VeLINR_y_CEXV_Refrigerant_Press_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S133>/Poke' */
            /* FunctionCaller: '<S140>/Function Caller' */
            /* Event: '<S138>:38' */
            Rte_Call_PokeTAIR_kp_EXV_RefPress_PokeTAIR_kp_EXV_RefPress
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_C, FA_out_p0);

            /* End of Outputs for SubSystem: '<S133>/Poke' */
        }
    }

    /* End of Chart: '<S134>/Chart' */
    /* End of Outputs for SubSystem: '<S96>/CEXV_Refrigerant_Pressure' */
    /* End of Outputs for SubSystem: '<S4>/CEXV_Refrigerant_Pressure' */
    /* Transition: '<S138>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_CEXV_Refrigerant_Press' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_CEXV_Refrigerant_Temp' incorporates:
     *  Inport: '<Root>/VeLINR_b_CEXV_Refrigerant_TempTO'
     */
#if Rte_SysCon_VrntLR3B_CEXVRefrigerantTemp

    /* Outputs for Atomic SubSystem: '<S4>/CEXV_Refrigerant_Temp' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_CEXV_Refrigerant_Temp' incorporates:
     *  Inport: '<Root>/VeLINR_e_CEXV_Refrigerant_Temp'
     */
    rtb_TmpSignalConversionAtVeL_h2 =
        Rte_Read_VeLINR_e_CEXV_Refrigerant_Temp_VeLINR_e_CEXV_Refrigerant_Temp
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_h);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S146>:1' */
    (void)
        Rte_Read_VeLINR_b_CEXV_Refrigerant_TempTO_VeLINR_b_CEXV_Refrigerant_TempTO
        (&FA_out_fc);

    /* Outputs for Atomic SubSystem: '<S97>/CEXV_Refrigerant_Temp' */
    /* Chart: '<S142>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_CEXV_Refrigerant_TempTO'
     */
    if (FA_out_fc)
    {
        /* Transition: '<S146>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S146>:6' */
            /* Transition: '<S146>:25' */
            /* Call Fsft */
            VeLINR_y_CEXV_Refrigerant_Temp_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S141>/Fsft' */
            /* FunctionCaller: '<S147>/Function Caller' */
            /* Event: '<S146>:39' */
            Rte_Call_FsftTAIR_T_EXV_RefTemp_FsftTAIR_T_EXV_RefTemp();

            /* End of Outputs for SubSystem: '<S141>/Fsft' */
            /* Transition: '<S146>:29' */
        }
        else
        {
            /* Transition: '<S146>:30' */
            /* Call Tmot */
            VeLINR_y_CEXV_Refrigerant_Temp_CallStatus = 3U;

            /* Event: '<S146>:40' */
        }

        /* Transition: '<S146>:36' */
        /* Transition: '<S146>:23' */
    }
    else
    {
        /* Transition: '<S146>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_h2) == 133)
        {
            /* Transition: '<S146>:33' */
            /* Transition: '<S146>:35' */
            /* Call Nothing */
            VeLINR_y_CEXV_Refrigerant_Temp_CallStatus = 4U;

            /* Transition: '<S146>:23' */
        }
        else
        {
            /* Transition: '<S146>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_h2) == 1)
            {
                /* Transition: '<S146>:48' */
                /* Transition: '<S146>:53' */
                FA_out_fc = true;

                /* Transition: '<S146>:56' */
            }
            else
            {
                /* Transition: '<S146>:52' */
            }

            /* Transition: '<S146>:37' */
            /* Call Poke */
            VeLINR_y_CEXV_Refrigerant_Temp_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S141>/Poke' */
            /* FunctionCaller: '<S148>/Function Caller' */
            /* Event: '<S146>:38' */
            Rte_Call_PokeTAIR_T_EXV_RefTemp_PokeTAIR_T_EXV_RefTemp
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_h, FA_out_fc);

            /* End of Outputs for SubSystem: '<S141>/Poke' */
        }
    }

    /* End of Chart: '<S142>/Chart' */
    /* End of Outputs for SubSystem: '<S97>/CEXV_Refrigerant_Temp' */
    /* End of Outputs for SubSystem: '<S4>/CEXV_Refrigerant_Temp' */
    /* Transition: '<S146>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_CEXV_Refrigerant_Temp' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_CEXV_Sts' incorporates:
     *  Inport: '<Root>/VeLINR_b_CEXV_StsTO'
     */
#if Rte_SysCon_VrntLR3B_CEXVSts

    /* Outputs for Atomic SubSystem: '<S4>/CEXV_Sts' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_CEXV_Sts' incorporates:
     *  Inport: '<Root>/VeLINR_e_CEXV_Sts'
     */
    rtb_TmpSignalConversionAtVeLI_e =
        Rte_Read_VeLINR_e_CEXV_Sts_VeLINR_e_CEXV_Sts
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__a4);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S153>:1' */
    (void)Rte_Read_VeLINR_b_CEXV_StsTO_VeLINR_b_CEXV_StsTO(&FA_out_bk);

    /* Outputs for Atomic SubSystem: '<S98>/CEXV_Sts' */
    /* Chart: '<S150>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_CEXV_StsTO'
     */
    if (FA_out_bk)
    {
        /* Transition: '<S153>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S153>:6' */
            /* Transition: '<S153>:25' */
            /* Call Fsft */
            VeLINR_y_CEXV_Sts_CallStatus = 2U;

            /* Event: '<S153>:39' */
            /* Transition: '<S153>:29' */
        }
        else
        {
            /* Transition: '<S153>:30' */
            /* Call Tmot */
            VeLINR_y_CEXV_Sts_CallStatus = 3U;

            /* Event: '<S153>:40' */
        }

        /* Transition: '<S153>:36' */
        /* Transition: '<S153>:23' */
    }
    else
    {
        /* Transition: '<S153>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_e) == 133)
        {
            /* Transition: '<S153>:33' */
            /* Transition: '<S153>:35' */
            /* Call Nothing */
            VeLINR_y_CEXV_Sts_CallStatus = 4U;

            /* Transition: '<S153>:23' */
        }
        else
        {
            /* Transition: '<S153>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeLI_e) == 1)
            {
                /* Transition: '<S153>:48' */
                /* Transition: '<S153>:53' */
                FA_out_bk = true;

                /* Transition: '<S153>:56' */
            }
            else
            {
                /* Transition: '<S153>:52' */
            }

            /* Transition: '<S153>:37' */
            /* Call Poke */
            VeLINR_y_CEXV_Sts_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S149>/Poke' */
            /* FunctionCaller: '<S154>/Function Caller' */
            /* Event: '<S153>:38' */
            Rte_Call_PokeTAIR_e_EXV_Sts_PokeTAIR_e_EXV_Sts
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__a4, FA_out_bk);

            /* End of Outputs for SubSystem: '<S149>/Poke' */
        }
    }

    /* End of Chart: '<S150>/Chart' */
    /* End of Outputs for SubSystem: '<S98>/CEXV_Sts' */
    /* End of Outputs for SubSystem: '<S4>/CEXV_Sts' */
    /* Transition: '<S153>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_CEXV_Sts' */

    /* SignalConversion generated from: '<S2>/VeLINR_U_CEXV_SupplyVolt' incorporates:
     *  Inport: '<Root>/VeLINR_b_CEXV_SupplyVoltTO'
     */
#if Rte_SysCon_VrntLR3B_CEXVSupplyVolt

    /* Outputs for Atomic SubSystem: '<S4>/CEXV_SupplyVolt' */
    /* SignalConversion generated from: '<S2>/VeLINR_U_CEXV_SupplyVolt' incorporates:
     *  Inport: '<Root>/VeLINR_U_CEXV_SupplyVolt'
     */
    rtb_TmpSignalConversionAtVeL_hj =
        Rte_Read_VeLINR_U_CEXV_SupplyVolt_VeLINR_U_CEXV_SupplyVolt
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_U_C);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S159>:1' */
    (void)Rte_Read_VeLINR_b_CEXV_SupplyVoltTO_VeLINR_b_CEXV_SupplyVoltTO
        (&FA_out_fq);

    /* Outputs for Atomic SubSystem: '<S99>/CEXV_SupplyVolt' */
    /* Chart: '<S156>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_CEXV_SupplyVoltTO'
     */
    if (FA_out_fq)
    {
        /* Transition: '<S159>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S159>:6' */
            /* Transition: '<S159>:25' */
            /* Call Fsft */
            VeLINR_y_CEXV_SupplyVolt_CallStatus = 2U;

            /* Event: '<S159>:39' */
            /* Transition: '<S159>:29' */
        }
        else
        {
            /* Transition: '<S159>:30' */
            /* Call Tmot */
            VeLINR_y_CEXV_SupplyVolt_CallStatus = 3U;

            /* Event: '<S159>:40' */
        }

        /* Transition: '<S159>:36' */
        /* Transition: '<S159>:23' */
    }
    else
    {
        /* Transition: '<S159>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_hj) == 133)
        {
            /* Transition: '<S159>:33' */
            /* Transition: '<S159>:35' */
            /* Call Nothing */
            VeLINR_y_CEXV_SupplyVolt_CallStatus = 4U;

            /* Transition: '<S159>:23' */
        }
        else
        {
            /* Transition: '<S159>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_hj) == 1)
            {
                /* Transition: '<S159>:48' */
                /* Transition: '<S159>:53' */
                FA_out_fq = true;

                /* Transition: '<S159>:56' */
            }
            else
            {
                /* Transition: '<S159>:52' */
            }

            /* Transition: '<S159>:37' */
            /* Call Poke */
            VeLINR_y_CEXV_SupplyVolt_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S155>/Poke' */
            /* FunctionCaller: '<S160>/Function Caller' */
            /* Event: '<S159>:38' */
            Rte_Call_PokeTAIR_U_EXV_SupplyVolt_PokeTAIR_U_EXV_SupplyVolt
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_U_C, FA_out_fq);

            /* End of Outputs for SubSystem: '<S155>/Poke' */
        }
    }

    /* End of Chart: '<S156>/Chart' */
    /* End of Outputs for SubSystem: '<S99>/CEXV_SupplyVolt' */
    /* End of Outputs for SubSystem: '<S4>/CEXV_SupplyVolt' */
    /* Transition: '<S159>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_U_CEXV_SupplyVolt' */

    /* SignalConversion generated from: '<S2>/VeLINR_b_RsErr_CEXV' incorporates:
     *  Inport: '<Root>/VeLINR_b_RsErr_CEXV_TO'
     */
#if Rte_SysCon_VrntLR3B_RsErrCEXV

    /* Outputs for Atomic SubSystem: '<S4>/RsErr_CEXV' */
    /* SignalConversion generated from: '<S2>/VeLINR_b_RsErr_CEXV' incorporates:
     *  Inport: '<Root>/VeLINR_b_RsErr_CEXV'
     */
    rtb_TmpSignalConversionAtVeL_cp =
        Rte_Read_VeLINR_b_RsErr_CEXV_VeLINR_b_RsErr_CEXV
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__fc);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S165>:1' */
    (void)Rte_Read_VeLINR_b_RsErr_CEXV_TO_VeLINR_b_RsErr_CEXV_TO(&FA_out_mi);

    /* Outputs for Atomic SubSystem: '<S100>/RsErr_CEXV' */
    /* Chart: '<S162>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_RsErr_CEXV_TO'
     */
    if (FA_out_mi)
    {
        /* Transition: '<S165>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S165>:6' */
            /* Transition: '<S165>:25' */
            /* Call Fsft */
            VeLINR_y_RsErr_CEXV_CallStatus = 2U;

            /* Event: '<S165>:39' */
            /* Transition: '<S165>:29' */
        }
        else
        {
            /* Transition: '<S165>:30' */
            /* Call Tmot */
            VeLINR_y_RsErr_CEXV_CallStatus = 3U;

            /* Event: '<S165>:40' */
        }

        /* Transition: '<S165>:36' */
        /* Transition: '<S165>:23' */
    }
    else
    {
        /* Transition: '<S165>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_cp) == 133)
        {
            /* Transition: '<S165>:33' */
            /* Transition: '<S165>:35' */
            /* Call Nothing */
            VeLINR_y_RsErr_CEXV_CallStatus = 4U;

            /* Transition: '<S165>:23' */
        }
        else
        {
            /* Transition: '<S165>:46' */
            /* Transition: '<S165>:37' */
            /* Call Poke */
            VeLINR_y_RsErr_CEXV_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S161>/Poke' */
            /* FunctionCaller: '<S166>/Function Caller' */
            /* Event: '<S165>:38' */
            Rte_Call_PokeTAIR_b_EXV_RspErr_PokeTAIR_b_EXV_RspErr
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__fc);

            /* End of Outputs for SubSystem: '<S161>/Poke' */
        }
    }

    /* End of Chart: '<S162>/Chart' */
    /* End of Outputs for SubSystem: '<S100>/RsErr_CEXV' */
    /* End of Outputs for SubSystem: '<S4>/RsErr_CEXV' */
    /* Transition: '<S165>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_b_RsErr_CEXV' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_CPIM_IND1_FailSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_CPIM_IND1_FailSts_ErrSts'
     */
    rtb_TmpSignalConversionAtVe_j23 =
        Rte_Read_VeLINR_e_CPIM_IND1_FailSts_VeLINR_e_CPIM_IND1_FailSts
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_f);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_CPIM_IND1_FailStsTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S195>:1' */
    (void)Rte_Read_VeLINR_b_CPIM_IND1_FailStsTO_VeLINR_b_CPIM_IND1_FailStsTO
        (&tmpRead_b);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S192>/Chart' */
    if (tmpRead_b)
    {
        /* Transition: '<S195>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S195>:6' */
            /* Transition: '<S195>:25' */
            /* Call Fsft */
            VeLINR_y_CPIM_IND1_FailSts_CallStatus = 2U;

            /* Event: '<S195>:39' */
            /* Transition: '<S195>:29' */
        }
        else
        {
            /* Transition: '<S195>:30' */
            /* Call Tmot */
            VeLINR_y_CPIM_IND1_FailSts_CallStatus = 3U;

            /* Event: '<S195>:40' */
        }

        /* Transition: '<S195>:36' */
        /* Transition: '<S195>:23' */
    }
    else
    {
        /* Transition: '<S195>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVe_j23) == 133)
        {
            /* Transition: '<S195>:33' */
            /* Transition: '<S195>:35' */
            /* Call Nothing */
            VeLINR_y_CPIM_IND1_FailSts_CallStatus = 4U;

            /* Transition: '<S195>:23' */
        }
        else
        {
            /* Transition: '<S195>:46' */
            /* Transition: '<S195>:37' */
            /* Call Poke */
            VeLINR_y_CPIM_IND1_FailSts_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S167>/Poke' */
            /* FunctionCaller: '<S196>/Function Caller' */
            /* Event: '<S195>:38' */
            Rte_Call_PokeCITR_e_CPIM_Ind1_FailSts_PokeCITR_e_CPIM_Ind1_FailSts
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_f);

            /* End of Outputs for SubSystem: '<S167>/Poke' */
        }
    }

    /* End of Chart: '<S192>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_CPIM_IND1_Fdbk_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_CPIM_IND1_Fdbk_ErrSts'
     */
    /* Transition: '<S195>:19' */
    rtb_TmpSignalConversionAtVeL_kl =
        Rte_Read_VeLINR_e_CPIM_IND1_Fdbk_VeLINR_e_CPIM_IND1_Fdbk
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__gm);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_CPIM_IND1_FdbkTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S201>:1' */
    (void)Rte_Read_VeLINR_b_CPIM_IND1_FdbkTO_VeLINR_b_CPIM_IND1_FdbkTO
        (&tmpRead_c);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S197>/Chart' */
    if (tmpRead_c)
    {
        /* Transition: '<S201>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S201>:6' */
            /* Transition: '<S201>:25' */
            /* Call Fsft */
            VeLINR_y_CPIM_IND1_Fdbk_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S168>/Fsft' */
            /* FunctionCaller: '<S202>/Function Caller' */
            /* Event: '<S201>:39' */
            Rte_Call_FsftCITR_e_CPIM_Ind1_Fdbk_FsftCITR_e_CPIM_Ind1_Fdbk();

            /* End of Outputs for SubSystem: '<S168>/Fsft' */
            /* Transition: '<S201>:29' */
        }
        else
        {
            /* Transition: '<S201>:30' */
            /* Call Tmot */
            VeLINR_y_CPIM_IND1_Fdbk_CallStatus = 3U;

            /* Event: '<S201>:40' */
        }

        /* Transition: '<S201>:36' */
        /* Transition: '<S201>:23' */
    }
    else
    {
        /* Transition: '<S201>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_kl) == 133)
        {
            /* Transition: '<S201>:33' */
            /* Transition: '<S201>:35' */
            /* Call Nothing */
            VeLINR_y_CPIM_IND1_Fdbk_CallStatus = 4U;

            /* Transition: '<S201>:23' */
        }
        else
        {
            /* Transition: '<S201>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_kl) == 1)
            {
                /* Transition: '<S201>:48' */
                /* Transition: '<S201>:53' */
                FA_out_mi = true;

                /* Transition: '<S201>:56' */
            }
            else
            {
                /* Transition: '<S201>:52' */
                FA_out_mi = false;
            }

            /* Transition: '<S201>:37' */
            /* Call Poke */
            VeLINR_y_CPIM_IND1_Fdbk_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S168>/Poke' */
            /* FunctionCaller: '<S203>/Function Caller' */
            /* Event: '<S201>:38' */
            Rte_Call_PokeCITR_e_CPIM_Ind1_Fdbk_PokeCITR_e_CPIM_Ind1_Fdbk
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__gm, FA_out_mi);

            /* End of Outputs for SubSystem: '<S168>/Poke' */
        }
    }

    /* End of Chart: '<S197>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_CPIM_IND2_FailSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_CPIM_IND2_FailSts_ErrSts'
     */
    /* Transition: '<S201>:19' */
    rtb_TmpSignalConversionAtVeLI_n =
        Rte_Read_VeLINR_e_CPIM_IND2_FailSts_VeLINR_e_CPIM_IND2_FailSts
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__ai);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_CPIM_IND2_FailStsTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S207>:1' */
    (void)Rte_Read_VeLINR_b_CPIM_IND2_FailStsTO_VeLINR_b_CPIM_IND2_FailStsTO
        (&FA_out_ove);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S204>/Chart' */
    if (FA_out_ove)
    {
        /* Transition: '<S207>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S207>:6' */
            /* Transition: '<S207>:25' */
            /* Call Fsft */
            VeLINR_y_CPIM_IND2_FailSts_CallStatus = 2U;

            /* Event: '<S207>:39' */
            /* Transition: '<S207>:29' */
        }
        else
        {
            /* Transition: '<S207>:30' */
            /* Call Tmot */
            VeLINR_y_CPIM_IND2_FailSts_CallStatus = 3U;

            /* Event: '<S207>:40' */
        }

        /* Transition: '<S207>:36' */
        /* Transition: '<S207>:23' */
    }
    else
    {
        /* Transition: '<S207>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_n) == 133)
        {
            /* Transition: '<S207>:33' */
            /* Transition: '<S207>:35' */
            /* Call Nothing */
            VeLINR_y_CPIM_IND2_FailSts_CallStatus = 4U;

            /* Transition: '<S207>:23' */
        }
        else
        {
            /* Transition: '<S207>:46' */
            /* Transition: '<S207>:37' */
            /* Call Poke */
            VeLINR_y_CPIM_IND2_FailSts_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S169>/Poke' */
            /* FunctionCaller: '<S208>/Function Caller' */
            /* Event: '<S207>:38' */
            Rte_Call_PokeCITR_e_CPIM_Ind2_FailSts_PokeCITR_e_CPIM_Ind2_FailSts
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__ai);

            /* End of Outputs for SubSystem: '<S169>/Poke' */
        }
    }

    /* End of Chart: '<S204>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_CPIM_IND2_Fdbk_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_CPIM_IND2_Fdbk_ErrSts'
     */
    /* Transition: '<S207>:19' */
    rtb_TmpSignalConversionAtVeL_au =
        Rte_Read_VeLINR_e_CPIM_IND2_Fdbk_VeLINR_e_CPIM_IND2_Fdbk
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__lm);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_CPIM_IND2_FdbkTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S213>:1' */
    (void)Rte_Read_VeLINR_b_CPIM_IND2_FdbkTO_VeLINR_b_CPIM_IND2_FdbkTO
        (&tmpRead_d);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S209>/Chart' */
    if (tmpRead_d)
    {
        /* Transition: '<S213>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S213>:6' */
            /* Transition: '<S213>:25' */
            /* Call Fsft */
            VeLINR_y_CPIM_IND2_Fdbk_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S170>/Fsft' */
            /* FunctionCaller: '<S214>/Function Caller' */
            /* Event: '<S213>:39' */
            Rte_Call_FsftCITR_e_CPIM_Ind2_Fdbk_FsftCITR_e_CPIM_Ind2_Fdbk();

            /* End of Outputs for SubSystem: '<S170>/Fsft' */
            /* Transition: '<S213>:29' */
        }
        else
        {
            /* Transition: '<S213>:30' */
            /* Call Tmot */
            VeLINR_y_CPIM_IND2_Fdbk_CallStatus = 3U;

            /* Event: '<S213>:40' */
        }

        /* Transition: '<S213>:36' */
        /* Transition: '<S213>:23' */
    }
    else
    {
        /* Transition: '<S213>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_au) == 133)
        {
            /* Transition: '<S213>:33' */
            /* Transition: '<S213>:35' */
            /* Call Nothing */
            VeLINR_y_CPIM_IND2_Fdbk_CallStatus = 4U;

            /* Transition: '<S213>:23' */
        }
        else
        {
            /* Transition: '<S213>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_au) == 1)
            {
                /* Transition: '<S213>:48' */
                /* Transition: '<S213>:53' */
                FA_out_ove = true;

                /* Transition: '<S213>:56' */
            }
            else
            {
                /* Transition: '<S213>:52' */
                FA_out_ove = false;
            }

            /* Transition: '<S213>:37' */
            /* Call Poke */
            VeLINR_y_CPIM_IND2_Fdbk_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S170>/Poke' */
            /* FunctionCaller: '<S215>/Function Caller' */
            /* Event: '<S213>:38' */
            Rte_Call_PokeCITR_e_CPIM_Ind2_Fdbk_PokeCITR_e_CPIM_Ind2_Fdbk
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__lm, FA_out_ove);

            /* End of Outputs for SubSystem: '<S170>/Poke' */
        }
    }

    /* End of Chart: '<S209>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_CPIM_IND3_FailSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_CPIM_IND3_FailSts_ErrSts'
     */
    /* Transition: '<S213>:19' */
    rtb_TmpSignalConversionAtVeLI_p =
        Rte_Read_VeLINR_e_CPIM_IND3_FailSts_VeLINR_e_CPIM_IND3_FailSts
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_c);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_CPIM_IND3_FailStsTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S219>:1' */
    (void)Rte_Read_VeLINR_b_CPIM_IND3_FailStsTO_VeLINR_b_CPIM_IND3_FailStsTO
        (&FA_out_ac);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S216>/Chart' */
    if (FA_out_ac)
    {
        /* Transition: '<S219>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S219>:6' */
            /* Transition: '<S219>:25' */
            /* Call Fsft */
            VeLINR_y_CPIM_IND3_FailSts_CallStatus = 2U;

            /* Event: '<S219>:39' */
            /* Transition: '<S219>:29' */
        }
        else
        {
            /* Transition: '<S219>:30' */
            /* Call Tmot */
            VeLINR_y_CPIM_IND3_FailSts_CallStatus = 3U;

            /* Event: '<S219>:40' */
        }

        /* Transition: '<S219>:36' */
        /* Transition: '<S219>:23' */
    }
    else
    {
        /* Transition: '<S219>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_p) == 133)
        {
            /* Transition: '<S219>:33' */
            /* Transition: '<S219>:35' */
            /* Call Nothing */
            VeLINR_y_CPIM_IND3_FailSts_CallStatus = 4U;

            /* Transition: '<S219>:23' */
        }
        else
        {
            /* Transition: '<S219>:46' */
            /* Transition: '<S219>:37' */
            /* Call Poke */
            VeLINR_y_CPIM_IND3_FailSts_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S171>/Poke' */
            /* FunctionCaller: '<S220>/Function Caller' */
            /* Event: '<S219>:38' */
            Rte_Call_PokeCITR_e_CPIM_Ind3_FailSts_PokeCITR_e_CPIM_Ind3_FailSts
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_c);

            /* End of Outputs for SubSystem: '<S171>/Poke' */
        }
    }

    /* End of Chart: '<S216>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_CPIM_IND3_Fdbk_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_CPIM_IND3_Fdbk_ErrSts'
     */
    /* Transition: '<S219>:19' */
    rtb_TmpSignalConversionAtVeL_ig =
        Rte_Read_VeLINR_e_CPIM_IND3_Fdbk_VeLINR_e_CPIM_IND3_Fdbk
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__fv);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_CPIM_IND3_FdbkTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S225>:1' */
    (void)Rte_Read_VeLINR_b_CPIM_IND3_FdbkTO_VeLINR_b_CPIM_IND3_FdbkTO
        (&tmpRead_e);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S221>/Chart' */
    if (tmpRead_e)
    {
        /* Transition: '<S225>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S225>:6' */
            /* Transition: '<S225>:25' */
            /* Call Fsft */
            VeLINR_y_CPIM_IND3_Fdbk_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S172>/Fsft' */
            /* FunctionCaller: '<S226>/Function Caller' */
            /* Event: '<S225>:39' */
            Rte_Call_FsftCITR_e_CPIM_Ind3_Fdbk_FsftCITR_e_CPIM_Ind3_Fdbk();

            /* End of Outputs for SubSystem: '<S172>/Fsft' */
            /* Transition: '<S225>:29' */
        }
        else
        {
            /* Transition: '<S225>:30' */
            /* Call Tmot */
            VeLINR_y_CPIM_IND3_Fdbk_CallStatus = 3U;

            /* Event: '<S225>:40' */
        }

        /* Transition: '<S225>:36' */
        /* Transition: '<S225>:23' */
    }
    else
    {
        /* Transition: '<S225>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_ig) == 133)
        {
            /* Transition: '<S225>:33' */
            /* Transition: '<S225>:35' */
            /* Call Nothing */
            VeLINR_y_CPIM_IND3_Fdbk_CallStatus = 4U;

            /* Transition: '<S225>:23' */
        }
        else
        {
            /* Transition: '<S225>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_ig) == 1)
            {
                /* Transition: '<S225>:48' */
                /* Transition: '<S225>:53' */
                FA_out_ac = true;

                /* Transition: '<S225>:56' */
            }
            else
            {
                /* Transition: '<S225>:52' */
                FA_out_ac = false;
            }

            /* Transition: '<S225>:37' */
            /* Call Poke */
            VeLINR_y_CPIM_IND3_Fdbk_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S172>/Poke' */
            /* FunctionCaller: '<S227>/Function Caller' */
            /* Event: '<S225>:38' */
            Rte_Call_PokeCITR_e_CPIM_Ind3_Fdbk_PokeCITR_e_CPIM_Ind3_Fdbk
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__fv, FA_out_ac);

            /* End of Outputs for SubSystem: '<S172>/Poke' */
        }
    }

    /* End of Chart: '<S221>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_CPIM_IND4_FailSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_CPIM_IND4_FailSts_ErrSts'
     */
    /* Transition: '<S225>:19' */
    rtb_TmpSignalConversionAtVeL_lc =
        Rte_Read_VeLINR_e_CPIM_IND4_FailSts_VeLINR_e_CPIM_IND4_FailSts
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_p);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_CPIM_IND4_FailStsTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S231>:1' */
    (void)Rte_Read_VeLINR_b_CPIM_IND4_FailStsTO_VeLINR_b_CPIM_IND4_FailStsTO
        (&FA_out_j4);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S228>/Chart' */
    if (FA_out_j4)
    {
        /* Transition: '<S231>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S231>:6' */
            /* Transition: '<S231>:25' */
            /* Call Fsft */
            VeLINR_y_CPIM_IND4_FailSts_CallStatus = 2U;

            /* Event: '<S231>:39' */
            /* Transition: '<S231>:29' */
        }
        else
        {
            /* Transition: '<S231>:30' */
            /* Call Tmot */
            VeLINR_y_CPIM_IND4_FailSts_CallStatus = 3U;

            /* Event: '<S231>:40' */
        }

        /* Transition: '<S231>:36' */
        /* Transition: '<S231>:23' */
    }
    else
    {
        /* Transition: '<S231>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_lc) == 133)
        {
            /* Transition: '<S231>:33' */
            /* Transition: '<S231>:35' */
            /* Call Nothing */
            VeLINR_y_CPIM_IND4_FailSts_CallStatus = 4U;

            /* Transition: '<S231>:23' */
        }
        else
        {
            /* Transition: '<S231>:46' */
            /* Transition: '<S231>:37' */
            /* Call Poke */
            VeLINR_y_CPIM_IND4_FailSts_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S173>/Poke' */
            /* FunctionCaller: '<S232>/Function Caller' */
            /* Event: '<S231>:38' */
            Rte_Call_PokeCITR_e_CPIM_Ind4_FailSts_PokeCITR_e_CPIM_Ind4_FailSts
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_p);

            /* End of Outputs for SubSystem: '<S173>/Poke' */
        }
    }

    /* End of Chart: '<S228>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_CPIM_IND4_Fdbk_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_CPIM_IND4_Fdbk_ErrSts'
     */
    /* Transition: '<S231>:19' */
    rtb_TmpSignalConversionAtVeL_pd =
        Rte_Read_VeLINR_e_CPIM_IND4_Fdbk_VeLINR_e_CPIM_IND4_Fdbk
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_e);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_CPIM_IND4_FdbkTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S237>:1' */
    (void)Rte_Read_VeLINR_b_CPIM_IND4_FdbkTO_VeLINR_b_CPIM_IND4_FdbkTO
        (&tmpRead_f);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S233>/Chart' */
    if (tmpRead_f)
    {
        /* Transition: '<S237>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S237>:6' */
            /* Transition: '<S237>:25' */
            /* Call Fsft */
            VeLINR_y_CPIM_IND4_Fdbk_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S174>/Fsft' */
            /* FunctionCaller: '<S238>/Function Caller' */
            /* Event: '<S237>:39' */
            Rte_Call_FsftCITR_e_CPIM_Ind4_Fdbk_FsftCITR_e_CPIM_Ind4_Fdbk();

            /* End of Outputs for SubSystem: '<S174>/Fsft' */
            /* Transition: '<S237>:29' */
        }
        else
        {
            /* Transition: '<S237>:30' */
            /* Call Tmot */
            VeLINR_y_CPIM_IND4_Fdbk_CallStatus = 3U;

            /* Event: '<S237>:40' */
        }

        /* Transition: '<S237>:36' */
        /* Transition: '<S237>:23' */
    }
    else
    {
        /* Transition: '<S237>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_pd) == 133)
        {
            /* Transition: '<S237>:33' */
            /* Transition: '<S237>:35' */
            /* Call Nothing */
            VeLINR_y_CPIM_IND4_Fdbk_CallStatus = 4U;

            /* Transition: '<S237>:23' */
        }
        else
        {
            /* Transition: '<S237>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_pd) == 1)
            {
                /* Transition: '<S237>:48' */
                /* Transition: '<S237>:53' */
                FA_out_j4 = true;

                /* Transition: '<S237>:56' */
            }
            else
            {
                /* Transition: '<S237>:52' */
                FA_out_j4 = false;
            }

            /* Transition: '<S237>:37' */
            /* Call Poke */
            VeLINR_y_CPIM_IND4_Fdbk_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S174>/Poke' */
            /* FunctionCaller: '<S239>/Function Caller' */
            /* Event: '<S237>:38' */
            Rte_Call_PokeCITR_e_CPIM_Ind4_Fdbk_PokeCITR_e_CPIM_Ind4_Fdbk
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_e, FA_out_j4);

            /* End of Outputs for SubSystem: '<S174>/Poke' */
        }
    }

    /* End of Chart: '<S233>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_CPIM_IND5_FailSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_CPIM_IND5_FailSts_ErrSts'
     */
    /* Transition: '<S237>:19' */
    rtb_TmpSignalConversionAtVeL_ku =
        Rte_Read_VeLINR_e_CPIM_IND5_FailSts_VeLINR_e_CPIM_IND5_FailSts
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_k);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_CPIM_IND5_FailStsTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S243>:1' */
    (void)Rte_Read_VeLINR_b_CPIM_IND5_FailStsTO_VeLINR_b_CPIM_IND5_FailStsTO
        (&FA_out_a0);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S240>/Chart' */
    if (FA_out_a0)
    {
        /* Transition: '<S243>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S243>:6' */
            /* Transition: '<S243>:25' */
            /* Call Fsft */
            VeLINR_y_CPIM_IND5_FailSts_CallStatus = 2U;

            /* Event: '<S243>:39' */
            /* Transition: '<S243>:29' */
        }
        else
        {
            /* Transition: '<S243>:30' */
            /* Call Tmot */
            VeLINR_y_CPIM_IND5_FailSts_CallStatus = 3U;

            /* Event: '<S243>:40' */
        }

        /* Transition: '<S243>:36' */
        /* Transition: '<S243>:23' */
    }
    else
    {
        /* Transition: '<S243>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_ku) == 133)
        {
            /* Transition: '<S243>:33' */
            /* Transition: '<S243>:35' */
            /* Call Nothing */
            VeLINR_y_CPIM_IND5_FailSts_CallStatus = 4U;

            /* Transition: '<S243>:23' */
        }
        else
        {
            /* Transition: '<S243>:46' */
            /* Transition: '<S243>:37' */
            /* Call Poke */
            VeLINR_y_CPIM_IND5_FailSts_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S175>/Poke' */
            /* FunctionCaller: '<S244>/Function Caller' */
            /* Event: '<S243>:38' */
            Rte_Call_PokeCITR_e_CPIM_Ind5_FailSts_PokeCITR_e_CPIM_Ind5_FailSts
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_k);

            /* End of Outputs for SubSystem: '<S175>/Poke' */
        }
    }

    /* End of Chart: '<S240>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_CPIM_IND5_Fdbk_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_CPIM_IND5_Fdbk_ErrSts'
     */
    /* Transition: '<S243>:19' */
    rtb_TmpSignalConversionAtVeL_el =
        Rte_Read_VeLINR_e_CPIM_IND5_Fdbk_VeLINR_e_CPIM_IND5_Fdbk
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__dc);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_CPIM_IND5_FdbkTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S249>:1' */
    (void)Rte_Read_VeLINR_b_CPIM_IND5_FdbkTO_VeLINR_b_CPIM_IND5_FdbkTO
        (&tmpRead_g);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S245>/Chart' */
    if (tmpRead_g)
    {
        /* Transition: '<S249>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S249>:6' */
            /* Transition: '<S249>:25' */
            /* Call Fsft */
            VeLINR_y_CPIM_IND5_Fdbk_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S176>/Fsft' */
            /* FunctionCaller: '<S250>/Function Caller' */
            /* Event: '<S249>:39' */
            Rte_Call_FsftCITR_e_CPIM_Ind5_Fdbk_FsftCITR_e_CPIM_Ind5_Fdbk();

            /* End of Outputs for SubSystem: '<S176>/Fsft' */
            /* Transition: '<S249>:29' */
        }
        else
        {
            /* Transition: '<S249>:30' */
            /* Call Tmot */
            VeLINR_y_CPIM_IND5_Fdbk_CallStatus = 3U;

            /* Event: '<S249>:40' */
        }

        /* Transition: '<S249>:36' */
        /* Transition: '<S249>:23' */
    }
    else
    {
        /* Transition: '<S249>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_el) == 133)
        {
            /* Transition: '<S249>:33' */
            /* Transition: '<S249>:35' */
            /* Call Nothing */
            VeLINR_y_CPIM_IND5_Fdbk_CallStatus = 4U;

            /* Transition: '<S249>:23' */
        }
        else
        {
            /* Transition: '<S249>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_el) == 1)
            {
                /* Transition: '<S249>:48' */
                /* Transition: '<S249>:53' */
                FA_out_a0 = true;

                /* Transition: '<S249>:56' */
            }
            else
            {
                /* Transition: '<S249>:52' */
                FA_out_a0 = false;
            }

            /* Transition: '<S249>:37' */
            /* Call Poke */
            VeLINR_y_CPIM_IND5_Fdbk_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S176>/Poke' */
            /* FunctionCaller: '<S251>/Function Caller' */
            /* Event: '<S249>:38' */
            Rte_Call_PokeCITR_e_CPIM_Ind5_Fdbk_PokeCITR_e_CPIM_Ind5_Fdbk
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__dc, FA_out_a0);

            /* End of Outputs for SubSystem: '<S176>/Poke' */
        }
    }

    /* End of Chart: '<S245>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_CPIM_IND_Color_Fdbk_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_CPIM_IND_Color_Fdbk_ErrSts'
     */
    /* Transition: '<S249>:19' */
    rtb_TmpSignalConversionAtVeL_gy =
        Rte_Read_VeLINR_e_CPIM_IND_Color_Fdbk_VeLINR_e_CPIM_IND_Color_Fdbk
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__df);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_CPIM_IND_Color_FdbkTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S256>:1' */
    (void)Rte_Read_VeLINR_b_CPIM_IND_Color_FdbkTO_VeLINR_b_CPIM_IND_Color_FdbkTO
        (&FA_out_ao);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S252>/Chart' */
    if (FA_out_ao)
    {
        /* Transition: '<S256>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S256>:6' */
            /* Transition: '<S256>:25' */
            /* Call Fsft */
            VeLINR_y_CPIM_IND_Color_Fdbk_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S177>/Fsft' */
            /* FunctionCaller: '<S257>/Function Caller' */
            /* Event: '<S256>:39' */
            Rte_Call_FsftCITR_e_CPIM_Ind_Color_Fdbk_FsftCITR_e_CPIM_Ind_Color_Fdbk
                ();

            /* End of Outputs for SubSystem: '<S177>/Fsft' */
            /* Transition: '<S256>:29' */
        }
        else
        {
            /* Transition: '<S256>:30' */
            /* Call Tmot */
            VeLINR_y_CPIM_IND_Color_Fdbk_CallStatus = 3U;

            /* Event: '<S256>:40' */
        }

        /* Transition: '<S256>:36' */
        /* Transition: '<S256>:23' */
    }
    else
    {
        /* Transition: '<S256>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_gy) == 133)
        {
            /* Transition: '<S256>:33' */
            /* Transition: '<S256>:35' */
            /* Call Nothing */
            VeLINR_y_CPIM_IND_Color_Fdbk_CallStatus = 4U;

            /* Transition: '<S256>:23' */
        }
        else
        {
            /* Transition: '<S256>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_gy) == 1)
            {
                /* Transition: '<S256>:48' */
                /* Transition: '<S256>:53' */
                FA_out_ao = true;

                /* Transition: '<S256>:56' */
            }
            else
            {
                /* Transition: '<S256>:52' */
            }

            /* Transition: '<S256>:37' */
            /* Call Poke */
            VeLINR_y_CPIM_IND_Color_Fdbk_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S177>/Poke' */
            /* FunctionCaller: '<S258>/Function Caller' */
            /* Event: '<S256>:38' */
            Rte_Call_PokeCITR_e_CPIM_Ind_Color_Fdbk_PokeCITR_e_CPIM_Ind_Color_Fdbk
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__df, FA_out_ao);

            /* End of Outputs for SubSystem: '<S177>/Poke' */
        }
    }

    /* End of Chart: '<S252>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_CPIM_LIN_ChecksumError_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_CPIM_LIN_ChecksumError_ErrSts'
     */
    /* Transition: '<S256>:19' */
    rtb_TmpSignalConversionAtVeL_ll =
        Rte_Read_VeLINR_b_CPIM_LIN_ChecksumError_VeLINR_b_CPIM_LIN_ChecksumError
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_dgr);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_CPIM_LIN_ChecksumErrorTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S262>:1' */
    (void)
        Rte_Read_VeLINR_b_CPIM_LIN_ChecksumErrorTO_VeLINR_b_CPIM_LIN_ChecksumErrorTO
        (&FA_out_bpg);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S259>/Chart' */
    if (FA_out_bpg)
    {
        /* Transition: '<S262>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S262>:6' */
            /* Transition: '<S262>:25' */
            /* Call Fsft */
            VeLINR_y_CPIM_LIN_ChecksumError_CallStatus = 2U;

            /* Event: '<S262>:39' */
            /* Transition: '<S262>:29' */
        }
        else
        {
            /* Transition: '<S262>:30' */
            /* Call Tmot */
            VeLINR_y_CPIM_LIN_ChecksumError_CallStatus = 3U;

            /* Event: '<S262>:40' */
        }

        /* Transition: '<S262>:36' */
        /* Transition: '<S262>:23' */
    }
    else
    {
        /* Transition: '<S262>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_ll) == 133)
        {
            /* Transition: '<S262>:33' */
            /* Transition: '<S262>:35' */
            /* Call Nothing */
            VeLINR_y_CPIM_LIN_ChecksumError_CallStatus = 4U;

            /* Transition: '<S262>:23' */
        }
        else
        {
            /* Transition: '<S262>:46' */
            /* Transition: '<S262>:37' */
            /* Call Poke */
            VeLINR_y_CPIM_LIN_ChecksumError_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S178>/Poke' */
            /* FunctionCaller: '<S263>/Function Caller' */
            /* Event: '<S262>:38' */
            Rte_Call_PokeCITR_b_CPIM_LINChkSumErr_PokeCITR_b_CPIM_LINChkSumErr
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_dgr);

            /* End of Outputs for SubSystem: '<S178>/Poke' */
        }
    }

    /* End of Chart: '<S259>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_CPIM_LIN_Data_Error_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_CPIM_LIN_Data_Error_ErrSts'
     */
    /* Transition: '<S262>:19' */
    rtb_TmpSignalConversionAtVeL_dr =
        Rte_Read_VeLINR_b_CPIM_LIN_Data_Error_VeLINR_b_CPIM_LIN_Data_Error
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__gf);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_CPIM_LIN_Data_ErrorTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S267>:1' */
    (void)Rte_Read_VeLINR_b_CPIM_LIN_Data_ErrorTO_VeLINR_b_CPIM_LIN_Data_ErrorTO
        (&tmpRead_h);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S264>/Chart' */
    if (tmpRead_h)
    {
        /* Transition: '<S267>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S267>:6' */
            /* Transition: '<S267>:25' */
            /* Call Fsft */
            VeLINR_y_CPIM_LIN_Data_Error_CallStatus = 2U;

            /* Event: '<S267>:39' */
            /* Transition: '<S267>:29' */
        }
        else
        {
            /* Transition: '<S267>:30' */
            /* Call Tmot */
            VeLINR_y_CPIM_LIN_Data_Error_CallStatus = 3U;

            /* Event: '<S267>:40' */
        }

        /* Transition: '<S267>:36' */
        /* Transition: '<S267>:23' */
    }
    else
    {
        /* Transition: '<S267>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_dr) == 133)
        {
            /* Transition: '<S267>:33' */
            /* Transition: '<S267>:35' */
            /* Call Nothing */
            VeLINR_y_CPIM_LIN_Data_Error_CallStatus = 4U;

            /* Transition: '<S267>:23' */
        }
        else
        {
            /* Transition: '<S267>:46' */
            /* Transition: '<S267>:37' */
            /* Call Poke */
            VeLINR_y_CPIM_LIN_Data_Error_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S179>/Poke' */
            /* FunctionCaller: '<S268>/Function Caller' */
            /* Event: '<S267>:38' */
            Rte_Call_PokeCITR_b_CPIM_LINDataErr_PokeCITR_b_CPIM_LINDataErr
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__gf);

            /* End of Outputs for SubSystem: '<S179>/Poke' */
        }
    }

    /* End of Chart: '<S264>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_CPIM_LIN_Parity_Error_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_CPIM_LIN_Parity_Error_ErrSts'
     */
    /* Transition: '<S267>:19' */
    rtb_TmpSignalConversionAtVeL_hy =
        Rte_Read_VeLINR_b_CPIM_LIN_Parity_Error_VeLINR_b_CPIM_LIN_Parity_Error
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_h);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_CPIM_LIN_Parity_ErrorTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S272>:1' */
    (void)
        Rte_Read_VeLINR_b_CPIM_LIN_Parity_ErrorTO_VeLINR_b_CPIM_LIN_Parity_ErrorTO
        (&tmpRead_i);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S269>/Chart' */
    if (tmpRead_i)
    {
        /* Transition: '<S272>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S272>:6' */
            /* Transition: '<S272>:25' */
            /* Call Fsft */
            VeLINR_y_CPIM_LIN_Parity_Error_CallStatus = 2U;

            /* Event: '<S272>:39' */
            /* Transition: '<S272>:29' */
        }
        else
        {
            /* Transition: '<S272>:30' */
            /* Call Tmot */
            VeLINR_y_CPIM_LIN_Parity_Error_CallStatus = 3U;

            /* Event: '<S272>:40' */
        }

        /* Transition: '<S272>:36' */
        /* Transition: '<S272>:23' */
    }
    else
    {
        /* Transition: '<S272>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_hy) == 133)
        {
            /* Transition: '<S272>:33' */
            /* Transition: '<S272>:35' */
            /* Call Nothing */
            VeLINR_y_CPIM_LIN_Parity_Error_CallStatus = 4U;

            /* Transition: '<S272>:23' */
        }
        else
        {
            /* Transition: '<S272>:46' */
            /* Transition: '<S272>:37' */
            /* Call Poke */
            VeLINR_y_CPIM_LIN_Parity_Error_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S180>/Poke' */
            /* FunctionCaller: '<S273>/Function Caller' */
            /* Event: '<S272>:38' */
            Rte_Call_PokeCITR_b_CPIM_LINParityErr_PokeCITR_b_CPIM_LINParityErr
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_h);

            /* End of Outputs for SubSystem: '<S180>/Poke' */
        }
    }

    /* End of Chart: '<S269>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_CPIM_Over_Temperature_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_CPIM_Over_Temperature_ErrSts'
     */
    /* Transition: '<S272>:19' */
    rtb_TmpSignalConversionAtVeL_og =
        Rte_Read_VeLINR_b_CPIM_Over_Temperature_VeLINR_b_CPIM_Over_Temperature
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_c);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_CPIM_Over_TemperatureTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S277>:1' */
    (void)
        Rte_Read_VeLINR_b_CPIM_Over_TemperatureTO_VeLINR_b_CPIM_Over_TemperatureTO
        (&tmpRead_j);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S274>/Chart' */
    if (tmpRead_j)
    {
        /* Transition: '<S277>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S277>:6' */
            /* Transition: '<S277>:25' */
            /* Call Fsft */
            VeLINR_y_CPIM_Over_Temperature_CallStatus = 2U;

            /* Event: '<S277>:39' */
            /* Transition: '<S277>:29' */
        }
        else
        {
            /* Transition: '<S277>:30' */
            /* Call Tmot */
            VeLINR_y_CPIM_Over_Temperature_CallStatus = 3U;

            /* Event: '<S277>:40' */
        }

        /* Transition: '<S277>:36' */
        /* Transition: '<S277>:23' */
    }
    else
    {
        /* Transition: '<S277>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_og) == 133)
        {
            /* Transition: '<S277>:33' */
            /* Transition: '<S277>:35' */
            /* Call Nothing */
            VeLINR_y_CPIM_Over_Temperature_CallStatus = 4U;

            /* Transition: '<S277>:23' */
        }
        else
        {
            /* Transition: '<S277>:46' */
            /* Transition: '<S277>:37' */
            /* Call Poke */
            VeLINR_y_CPIM_Over_Temperature_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S181>/Poke' */
            /* FunctionCaller: '<S278>/Function Caller' */
            /* Event: '<S277>:38' */
            Rte_Call_PokeCITR_b_CPIM_OverTemp_PokeCITR_b_CPIM_OverTemp
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_c);

            /* End of Outputs for SubSystem: '<S181>/Poke' */
        }
    }

    /* End of Chart: '<S274>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_CPIM_Undervoltage_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_CPIM_Undervoltage_ErrSts'
     */
    /* Transition: '<S277>:19' */
    rtb_TmpSignalConversionAtVeL_ij =
        Rte_Read_VeLINR_b_CPIM_Undervoltage_VeLINR_b_CPIM_Undervoltage
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_o);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_CPIM_UndervoltageTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S282>:1' */
    (void)Rte_Read_VeLINR_b_CPIM_UndervoltageTO_VeLINR_b_CPIM_UndervoltageTO
        (&tmpRead_k);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S279>/Chart' */
    if (tmpRead_k)
    {
        /* Transition: '<S282>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S282>:6' */
            /* Transition: '<S282>:25' */
            /* Call Fsft */
            VeLINR_y_CPIM_Undervoltage_CallStatus = 2U;

            /* Event: '<S282>:39' */
            /* Transition: '<S282>:29' */
        }
        else
        {
            /* Transition: '<S282>:30' */
            /* Call Tmot */
            VeLINR_y_CPIM_Undervoltage_CallStatus = 3U;

            /* Event: '<S282>:40' */
        }

        /* Transition: '<S282>:36' */
        /* Transition: '<S282>:23' */
    }
    else
    {
        /* Transition: '<S282>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_ij) == 133)
        {
            /* Transition: '<S282>:33' */
            /* Transition: '<S282>:35' */
            /* Call Nothing */
            VeLINR_y_CPIM_Undervoltage_CallStatus = 4U;

            /* Transition: '<S282>:23' */
        }
        else
        {
            /* Transition: '<S282>:46' */
            /* Transition: '<S282>:37' */
            /* Call Poke */
            VeLINR_y_CPIM_Undervoltage_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S182>/Poke' */
            /* FunctionCaller: '<S283>/Function Caller' */
            /* Event: '<S282>:38' */
            Rte_Call_PokeCITR_b_CPIM_UnderVolt_PokeCITR_b_CPIM_UnderVolt
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_o);

            /* End of Outputs for SubSystem: '<S182>/Poke' */
        }
    }

    /* End of Chart: '<S279>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_ChrgPortButton_Sts_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_ChrgPortButton_Sts_ErrSts'
     */
    /* Transition: '<S282>:19' */
    rtb_TmpSignalConversionAtVeL_eg =
        Rte_Read_VeLINR_b_ChrgPortButton_Sts_VeLINR_b_ChrgPortButton_Sts
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_a);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_ChrgPortButton_StsTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S287>:1' */
    (void)Rte_Read_VeLINR_b_ChrgPortButton_StsTO_VeLINR_b_ChrgPortButton_StsTO
        (&tmpRead_l);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S284>/Chart' */
    if (tmpRead_l)
    {
        /* Transition: '<S287>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S287>:6' */
            /* Transition: '<S287>:25' */
            /* Call Fsft */
            VeLINR_y_ChrgPortButton_Sts_CallStatus = 2U;

            /* Event: '<S287>:39' */
            /* Transition: '<S287>:29' */
        }
        else
        {
            /* Transition: '<S287>:30' */
            /* Call Tmot */
            VeLINR_y_ChrgPortButton_Sts_CallStatus = 3U;

            /* Event: '<S287>:40' */
        }

        /* Transition: '<S287>:36' */
        /* Transition: '<S287>:23' */
    }
    else
    {
        /* Transition: '<S287>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_eg) == 133)
        {
            /* Transition: '<S287>:33' */
            /* Transition: '<S287>:35' */
            /* Call Nothing */
            VeLINR_y_ChrgPortButton_Sts_CallStatus = 4U;

            /* Transition: '<S287>:23' */
        }
        else
        {
            /* Transition: '<S287>:46' */
            /* Transition: '<S287>:37' */
            /* Call Poke */
            VeLINR_y_ChrgPortButton_Sts_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S183>/Poke' */
            /* FunctionCaller: '<S288>/Function Caller' */
            /* Event: '<S287>:38' */
            Rte_Call_PokeCITR_b_ChrgPortButton_Sts_PokeCITR_b_ChrgPortButton_Sts
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_a);

            /* End of Outputs for SubSystem: '<S183>/Poke' */
        }
    }

    /* End of Chart: '<S284>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_ChrgPortDoor_Sts_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_ChrgPortDoor_Sts_ErrSts'
     */
    /* Transition: '<S287>:19' */
    rtb_TmpSignalConversionAtVeL_fg =
        Rte_Read_VeLINR_e_ChrgPortDoor_Sts_VeLINR_e_ChrgPortDoor_Sts
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__em);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_ChrgPortDoor_StsTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S293>:1' */
    (void)Rte_Read_VeLINR_b_ChrgPortDoor_StsTO_VeLINR_b_ChrgPortDoor_StsTO
        (&tmpRead_m);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S289>/Chart' */
    if (tmpRead_m)
    {
        /* Transition: '<S293>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S293>:6' */
            /* Transition: '<S293>:25' */
            /* Call Fsft */
            VeLINR_y_ChrgPortDoor_Sts_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S184>/Fsft' */
            /* FunctionCaller: '<S294>/Function Caller' */
            /* Event: '<S293>:39' */
            Rte_Call_FsftCITR_b_ChrgPortDoor_Sts_FsftCITR_b_ChrgPortDoor_Sts();

            /* End of Outputs for SubSystem: '<S184>/Fsft' */
            /* Transition: '<S293>:29' */
        }
        else
        {
            /* Transition: '<S293>:30' */
            /* Call Tmot */
            VeLINR_y_ChrgPortDoor_Sts_CallStatus = 3U;

            /* Event: '<S293>:40' */
        }

        /* Transition: '<S293>:36' */
        /* Transition: '<S293>:23' */
    }
    else
    {
        /* Transition: '<S293>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_fg) == 133)
        {
            /* Transition: '<S293>:33' */
            /* Transition: '<S293>:35' */
            /* Call Nothing */
            VeLINR_y_ChrgPortDoor_Sts_CallStatus = 4U;

            /* Transition: '<S293>:23' */
        }
        else
        {
            /* Transition: '<S293>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_fg) == 1)
            {
                /* Transition: '<S293>:48' */
                /* Transition: '<S293>:53' */
                FA_out_bpg = true;

                /* Transition: '<S293>:56' */
            }
            else
            {
                /* Transition: '<S293>:52' */
                FA_out_bpg = false;
            }

            /* Transition: '<S293>:37' */
            /* Call Poke */
            VeLINR_y_ChrgPortDoor_Sts_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S184>/Poke' */
            /* FunctionCaller: '<S295>/Function Caller' */
            /* Event: '<S293>:38' */
            Rte_Call_PokeCITR_e_ChrgPortDoor_Sts_PokeCITR_e_ChrgPortDoor_Sts
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__em, FA_out_bpg);

            /* End of Outputs for SubSystem: '<S184>/Poke' */
        }
    }

    /* End of Chart: '<S289>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_ChrgPortLock_FailSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_ChrgPortLock_FailSts_ErrSts'
     */
    /* Transition: '<S293>:19' */
    rtb_TmpSignalConversionAtVeLI_b =
        Rte_Read_VeLINR_e_ChrgPortLock_FailSts_VeLINR_e_ChrgPortLock_FailSts
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__g0);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_ChrgPortLock_FailStsTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S300>:1' */
    (void)
        Rte_Read_VeLINR_b_ChrgPortLock_FailStsTO_VeLINR_b_ChrgPortLock_FailStsTO
        (&FA_out_n43);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S296>/Chart' */
    if (FA_out_n43)
    {
        /* Transition: '<S300>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S300>:6' */
            /* Transition: '<S300>:25' */
            /* Call Fsft */
            VeLINR_y_ChrgPortLock_FailSts_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S185>/Fsft' */
            /* FunctionCaller: '<S301>/Function Caller' */
            /* Event: '<S300>:39' */
            Rte_Call_FsftCITR_e_ChrgPortLock_FailSts_FsftCITR_e_ChrgPortLock_FailSts
                ();

            /* End of Outputs for SubSystem: '<S185>/Fsft' */
            /* Transition: '<S300>:29' */
        }
        else
        {
            /* Transition: '<S300>:30' */
            /* Call Tmot */
            VeLINR_y_ChrgPortLock_FailSts_CallStatus = 3U;

            /* Event: '<S300>:40' */
        }

        /* Transition: '<S300>:36' */
        /* Transition: '<S300>:23' */
    }
    else
    {
        /* Transition: '<S300>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_b) == 133)
        {
            /* Transition: '<S300>:33' */
            /* Transition: '<S300>:35' */
            /* Call Nothing */
            VeLINR_y_ChrgPortLock_FailSts_CallStatus = 4U;

            /* Transition: '<S300>:23' */
        }
        else
        {
            /* Transition: '<S300>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeLI_b) == 1)
            {
                /* Transition: '<S300>:48' */
                /* Transition: '<S300>:53' */
                FA_out_n43 = true;

                /* Transition: '<S300>:56' */
            }
            else
            {
                /* Transition: '<S300>:52' */
            }

            /* Transition: '<S300>:37' */
            /* Call Poke */
            VeLINR_y_ChrgPortLock_FailSts_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S185>/Poke' */
            /* FunctionCaller: '<S302>/Function Caller' */
            /* Event: '<S300>:38' */
            Rte_Call_PokeCITR_e_ChrgPortLock_FailSts_PokeCITR_e_ChrgPortLock_FailSts
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__g0, FA_out_n43);

            /* End of Outputs for SubSystem: '<S185>/Poke' */
        }
    }

    /* End of Chart: '<S296>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_ChrgPortLock_Sts_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_ChrgPortLock_Sts_ErrSts'
     */
    /* Transition: '<S300>:19' */
    rtb_TmpSignalConversionAtVeL_cf =
        Rte_Read_VeLINR_b_ChrgPortLock_Sts_VeLINR_b_ChrgPortLock_Sts
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_l);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_ChrgPortLock_StsTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S307>:1' */
    (void)Rte_Read_VeLINR_b_ChrgPortLock_StsTO_VeLINR_b_ChrgPortLock_StsTO
        (&FA_out_kc);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S303>/Chart' */
    if (FA_out_kc)
    {
        /* Transition: '<S307>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S307>:6' */
            /* Transition: '<S307>:25' */
            /* Call Fsft */
            VeLINR_y_ChrgPortLock_Sts_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S186>/Fsft' */
            /* FunctionCaller: '<S308>/Function Caller' */
            /* Event: '<S307>:39' */
            Rte_Call_FsftCITR_b_ChrgPortLock_StsC_FsftCITR_b_ChrgPortLock_StsC();

            /* End of Outputs for SubSystem: '<S186>/Fsft' */
            /* Transition: '<S307>:29' */
        }
        else
        {
            /* Transition: '<S307>:30' */
            /* Call Tmot */
            VeLINR_y_ChrgPortLock_Sts_CallStatus = 3U;

            /* Event: '<S307>:40' */
        }

        /* Transition: '<S307>:36' */
        /* Transition: '<S307>:23' */
    }
    else
    {
        /* Transition: '<S307>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_cf) == 133)
        {
            /* Transition: '<S307>:33' */
            /* Transition: '<S307>:35' */
            /* Call Nothing */
            VeLINR_y_ChrgPortLock_Sts_CallStatus = 4U;

            /* Transition: '<S307>:23' */
        }
        else
        {
            /* Transition: '<S307>:46' */
            /* Transition: '<S307>:37' */
            /* Call Poke */
            VeLINR_y_ChrgPortLock_Sts_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S186>/Poke' */
            /* FunctionCaller: '<S309>/Function Caller' incorporates:
             *  Constant: '<S309>/Constant'
             */
            /* Event: '<S307>:38' */
            Rte_Call_PokeCITR_b_ChrgPortLock_StsC_PokeCITR_b_ChrgPortLock_StsC
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_l, false);

            /* End of Outputs for SubSystem: '<S186>/Poke' */
        }
    }

    /* End of Chart: '<S303>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_Chrg_Inlet_Temp_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_Chrg_Inlet_Temp_ErrSts'
     */
    /* Transition: '<S307>:19' */
    rtb_TmpSignalConversionAtVeL_kr =
        Rte_Read_VeLINR_e_Chrg_Inlet_Temp_VeLINR_e_Chrg_Inlet_Temp
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_d);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_Chrg_Inlet_TempTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S314>:1' */
    (void)Rte_Read_VeLINR_b_Chrg_Inlet_TempTO_VeLINR_b_Chrg_Inlet_TempTO
        (&tmpRead_n);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S310>/Chart' */
    if (tmpRead_n)
    {
        /* Transition: '<S314>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S314>:6' */
            /* Transition: '<S314>:25' */
            /* Call Fsft */
            VeLINR_y_Chrg_Inlet_Temp_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S187>/Fsft' */
            /* FunctionCaller: '<S315>/Function Caller' */
            /* Event: '<S314>:39' */
            Rte_Call_FsftAATR_T_SCP_InletTempSnsr_FsftAATR_T_SCP_InletTempSnsr();

            /* End of Outputs for SubSystem: '<S187>/Fsft' */
            /* Transition: '<S314>:29' */
        }
        else
        {
            /* Transition: '<S314>:30' */
            /* Call Tmot */
            VeLINR_y_Chrg_Inlet_Temp_CallStatus = 3U;

            /* Event: '<S314>:40' */
        }

        /* Transition: '<S314>:36' */
        /* Transition: '<S314>:23' */
    }
    else
    {
        /* Transition: '<S314>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_kr) == 133)
        {
            /* Transition: '<S314>:33' */
            /* Transition: '<S314>:35' */
            /* Call Nothing */
            VeLINR_y_Chrg_Inlet_Temp_CallStatus = 4U;

            /* Transition: '<S314>:23' */
        }
        else
        {
            /* Transition: '<S314>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_kr) == 1)
            {
                /* Transition: '<S314>:48' */
                /* Transition: '<S314>:53' */
                FA_out_kc = true;

                /* Transition: '<S314>:56' */
            }
            else
            {
                /* Transition: '<S314>:52' */
                FA_out_kc = false;
            }

            /* Transition: '<S314>:37' */
            /* Call Poke */
            VeLINR_y_Chrg_Inlet_Temp_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S187>/Poke' */
            /* FunctionCaller: '<S316>/Function Caller' */
            /* Event: '<S314>:38' */
            Rte_Call_PokeAATR_T_SCP_InletTempSnsr_PokeAATR_T_SCP_InletTempSnsr
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_d, FA_out_kc);

            /* End of Outputs for SubSystem: '<S187>/Poke' */
        }
    }

    /* End of Chart: '<S310>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_Icon1_FailSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_Icon1_FailSts_ErrSts'
     */
    /* Transition: '<S314>:19' */
    rtb_TmpSignalConversionAtVeL_ge =
        Rte_Read_VeLINR_b_Icon1_FailSts_VeLINR_b_Icon1_FailSts
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_I);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_Icon1_FailStsTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S320>:1' */
    (void)Rte_Read_VeLINR_b_Icon1_FailStsTO_VeLINR_b_Icon1_FailStsTO(&FA_out_hj);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S317>/Chart' */
    if (FA_out_hj)
    {
        /* Transition: '<S320>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S320>:6' */
            /* Transition: '<S320>:25' */
            /* Call Fsft */
            VeLINR_y_Icon1_FailSts_CallStatus = 2U;

            /* Event: '<S320>:39' */
            /* Transition: '<S320>:29' */
        }
        else
        {
            /* Transition: '<S320>:30' */
            /* Call Tmot */
            VeLINR_y_Icon1_FailSts_CallStatus = 3U;

            /* Event: '<S320>:40' */
        }

        /* Transition: '<S320>:36' */
        /* Transition: '<S320>:23' */
    }
    else
    {
        /* Transition: '<S320>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_ge) == 133)
        {
            /* Transition: '<S320>:33' */
            /* Transition: '<S320>:35' */
            /* Call Nothing */
            VeLINR_y_Icon1_FailSts_CallStatus = 4U;

            /* Transition: '<S320>:23' */
        }
        else
        {
            /* Transition: '<S320>:46' */
            /* Transition: '<S320>:37' */
            /* Call Poke */
            VeLINR_y_Icon1_FailSts_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S188>/Poke' */
            /* FunctionCaller: '<S321>/Function Caller' */
            /* Event: '<S320>:38' */
            Rte_Call_PokeCITR_b_Icon1_FailSts_PokeCITR_b_Icon1_FailSts
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_I);

            /* End of Outputs for SubSystem: '<S188>/Poke' */
        }
    }

    /* End of Chart: '<S317>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_Icon1_Sts_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_Icon1_Sts_ErrSts'
     */
    /* Transition: '<S320>:19' */
    rtb_TmpSignalConversionAtVeL_k0 =
        Rte_Read_VeLINR_e_Icon1_Sts_VeLINR_e_Icon1_Sts
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_i);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_Icon1_StsTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S326>:1' */
    (void)Rte_Read_VeLINR_b_Icon1_StsTO_VeLINR_b_Icon1_StsTO(&tmpRead_o);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S322>/Chart' */
    if (tmpRead_o)
    {
        /* Transition: '<S326>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S326>:6' */
            /* Transition: '<S326>:25' */
            /* Call Fsft */
            VeLINR_y_Icon1_Sts_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S189>/Fsft' */
            /* FunctionCaller: '<S327>/Function Caller' */
            /* Event: '<S326>:39' */
            Rte_Call_FsftCITR_e_CPIM_Icon1_Sts_FsftCITR_e_CPIM_Icon1_Sts();

            /* End of Outputs for SubSystem: '<S189>/Fsft' */
            /* Transition: '<S326>:29' */
        }
        else
        {
            /* Transition: '<S326>:30' */
            /* Call Tmot */
            VeLINR_y_Icon1_Sts_CallStatus = 3U;

            /* Event: '<S326>:40' */
        }

        /* Transition: '<S326>:36' */
        /* Transition: '<S326>:23' */
    }
    else
    {
        /* Transition: '<S326>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_k0) == 133)
        {
            /* Transition: '<S326>:33' */
            /* Transition: '<S326>:35' */
            /* Call Nothing */
            VeLINR_y_Icon1_Sts_CallStatus = 4U;

            /* Transition: '<S326>:23' */
        }
        else
        {
            /* Transition: '<S326>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_k0) == 1)
            {
                /* Transition: '<S326>:48' */
                /* Transition: '<S326>:53' */
                FA_out_hj = true;

                /* Transition: '<S326>:56' */
            }
            else
            {
                /* Transition: '<S326>:52' */
                FA_out_hj = false;
            }

            /* Transition: '<S326>:37' */
            /* Call Poke */
            VeLINR_y_Icon1_Sts_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S189>/Poke' */
            /* FunctionCaller: '<S328>/Function Caller' */
            /* Event: '<S326>:38' */
            Rte_Call_PokeCITR_e_CPIM_Icon1_Sts_PokeCITR_e_CPIM_Icon1_Sts
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_i, FA_out_hj);

            /* End of Outputs for SubSystem: '<S189>/Poke' */
        }
    }

    /* End of Chart: '<S322>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_Icon2_FailSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_Icon2_FailSts_ErrSts'
     */
    /* Transition: '<S326>:19' */
    rtb_TmpSignalConversionAtVeL_iv =
        Rte_Read_VeLINR_b_Icon2_FailSts_VeLINR_b_Icon2_FailSts
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__cz);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_Icon2_FailStsTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S332>:1' */
    (void)Rte_Read_VeLINR_b_Icon2_FailStsTO_VeLINR_b_Icon2_FailStsTO(&FA_out_p1);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S329>/Chart' */
    if (FA_out_p1)
    {
        /* Transition: '<S332>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S332>:6' */
            /* Transition: '<S332>:25' */
            /* Call Fsft */
            VeLINR_y_Icon2_FailSts_CallStatus = 2U;

            /* Event: '<S332>:39' */
            /* Transition: '<S332>:29' */
        }
        else
        {
            /* Transition: '<S332>:30' */
            /* Call Tmot */
            VeLINR_y_Icon2_FailSts_CallStatus = 3U;

            /* Event: '<S332>:40' */
        }

        /* Transition: '<S332>:36' */
        /* Transition: '<S332>:23' */
    }
    else
    {
        /* Transition: '<S332>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_iv) == 133)
        {
            /* Transition: '<S332>:33' */
            /* Transition: '<S332>:35' */
            /* Call Nothing */
            VeLINR_y_Icon2_FailSts_CallStatus = 4U;

            /* Transition: '<S332>:23' */
        }
        else
        {
            /* Transition: '<S332>:46' */
            /* Transition: '<S332>:37' */
            /* Call Poke */
            VeLINR_y_Icon2_FailSts_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S190>/Poke' */
            /* FunctionCaller: '<S333>/Function Caller' */
            /* Event: '<S332>:38' */
            Rte_Call_PokeCITR_b_Icon2_FailSts_PokeCITR_b_Icon2_FailSts
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__cz);

            /* End of Outputs for SubSystem: '<S190>/Poke' */
        }
    }

    /* End of Chart: '<S329>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_Icon2_Sts_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_Icon2_Sts_ErrSts'
     */
    /* Transition: '<S332>:19' */
    rtb_TmpSignalConversionAtVe_kr3 =
        Rte_Read_VeLINR_e_Icon2_Sts_VeLINR_e_Icon2_Sts
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__ie);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_Icon2_StsTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S338>:1' */
    (void)Rte_Read_VeLINR_b_Icon2_StsTO_VeLINR_b_Icon2_StsTO(&tmpRead_p);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S334>/Chart' */
    if (tmpRead_p)
    {
        /* Transition: '<S338>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S338>:6' */
            /* Transition: '<S338>:25' */
            /* Call Fsft */
            VeLINR_y_Icon2_Sts_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S191>/Fsft' */
            /* FunctionCaller: '<S339>/Function Caller' */
            /* Event: '<S338>:39' */
            Rte_Call_FsftCITR_e_CPIM_Icon2_Sts_FsftCITR_e_CPIM_Icon2_Sts();

            /* End of Outputs for SubSystem: '<S191>/Fsft' */
            /* Transition: '<S338>:29' */
        }
        else
        {
            /* Transition: '<S338>:30' */
            /* Call Tmot */
            VeLINR_y_Icon2_Sts_CallStatus = 3U;

            /* Event: '<S338>:40' */
        }

        /* Transition: '<S338>:36' */
        /* Transition: '<S338>:23' */
    }
    else
    {
        /* Transition: '<S338>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVe_kr3) == 133)
        {
            /* Transition: '<S338>:33' */
            /* Transition: '<S338>:35' */
            /* Call Nothing */
            VeLINR_y_Icon2_Sts_CallStatus = 4U;

            /* Transition: '<S338>:23' */
        }
        else
        {
            /* Transition: '<S338>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVe_kr3) == 1)
            {
                /* Transition: '<S338>:48' */
                /* Transition: '<S338>:53' */
                FA_out_p1 = true;

                /* Transition: '<S338>:56' */
            }
            else
            {
                /* Transition: '<S338>:52' */
                FA_out_p1 = false;
            }

            /* Transition: '<S338>:37' */
            /* Call Poke */
            VeLINR_y_Icon2_Sts_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S191>/Poke' */
            /* FunctionCaller: '<S340>/Function Caller' */
            /* Event: '<S338>:38' */
            Rte_Call_PokeCITR_e_CPIM_Icon2_Sts_PokeCITR_e_CPIM_Icon2_Sts
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__ie, FA_out_p1);

            /* End of Outputs for SubSystem: '<S191>/Poke' */
        }
    }

    /* End of Chart: '<S334>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_Inlet_Temp1_DC_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_Inlet_Temp1_DC_ErrSts'
     */
    /* Transition: '<S338>:19' */
    rtb_TmpSignalConversionAtVeL_no =
        Rte_Read_VeLINR_e_Inlet_Temp1_DC_VeLINR_e_Inlet_Temp1_DC
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_I);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_Inlet_Temp1_DC_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S347>:1' */
    (void)Rte_Read_VeLINR_b_Inlet_Temp1_DC_TO_VeLINR_b_Inlet_Temp1_DC_TO
        (&FA_out_c3);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S343>/Chart' */
    if (FA_out_c3)
    {
        /* Transition: '<S347>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S347>:6' */
            /* Transition: '<S347>:25' */
            /* Call Fsft */
            VeLINR_y_Inlet_Temp1_DC_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S341>/Fsft' */
            /* FunctionCaller: '<S348>/Function Caller' */
            /* Event: '<S347>:39' */
            Rte_Call_FsftAATR_T_SCP_DCPstvTmpSnsr_FsftAATR_T_SCP_DCPstvTmpSnsr();

            /* End of Outputs for SubSystem: '<S341>/Fsft' */
            /* Transition: '<S347>:29' */
        }
        else
        {
            /* Transition: '<S347>:30' */
            /* Call Tmot */
            VeLINR_y_Inlet_Temp1_DC_CallStatus = 3U;

            /* Event: '<S347>:40' */
        }

        /* Transition: '<S347>:36' */
        /* Transition: '<S347>:23' */
    }
    else
    {
        /* Transition: '<S347>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_no) == 133)
        {
            /* Transition: '<S347>:33' */
            /* Transition: '<S347>:35' */
            /* Call Nothing */
            VeLINR_y_Inlet_Temp1_DC_CallStatus = 4U;

            /* Transition: '<S347>:23' */
        }
        else
        {
            /* Transition: '<S347>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_no) == 1)
            {
                /* Transition: '<S347>:48' */
                /* Transition: '<S347>:53' */
                FA_out_c3 = true;

                /* Transition: '<S347>:56' */
            }
            else
            {
                /* Transition: '<S347>:52' */
            }

            /* Transition: '<S347>:37' */
            /* Call Poke */
            VeLINR_y_Inlet_Temp1_DC_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S341>/Poke' */
            /* FunctionCaller: '<S349>/Function Caller' */
            /* Event: '<S347>:38' */
            Rte_Call_PokeAATR_T_SCP_DCPstvTmpSnsr_PokeAATR_T_SCP_DCPstvTmpSnsr
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_I, FA_out_c3);

            /* End of Outputs for SubSystem: '<S341>/Poke' */
        }
    }

    /* End of Chart: '<S343>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_Inlet_Temp2_DC_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_Inlet_Temp2_DC_ErrSts'
     */
    /* Transition: '<S347>:19' */
    rtb_TmpSignalConversionAtVeL_ag =
        Rte_Read_VeLINR_e_Inlet_Temp2_DC_VeLINR_e_Inlet_Temp2_DC
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_n);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_Inlet_Temp2_DC_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S354>:1' */
    (void)Rte_Read_VeLINR_b_Inlet_Temp2_DC_TO_VeLINR_b_Inlet_Temp2_DC_TO
        (&FA_out_dx);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S350>/Chart' */
    if (FA_out_dx)
    {
        /* Transition: '<S354>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S354>:6' */
            /* Transition: '<S354>:25' */
            /* Call Fsft */
            VeLINR_y_Inlet_Temp2_DC_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S342>/Fsft' */
            /* FunctionCaller: '<S355>/Function Caller' */
            /* Event: '<S354>:39' */
            Rte_Call_FsftAATR_T_SCP_DCNegtvTmpSnsr_FsftAATR_T_SCP_DCNegtvTmpSnsr
                ();

            /* End of Outputs for SubSystem: '<S342>/Fsft' */
            /* Transition: '<S354>:29' */
        }
        else
        {
            /* Transition: '<S354>:30' */
            /* Call Tmot */
            VeLINR_y_Inlet_Temp2_DC_CallStatus = 3U;

            /* Event: '<S354>:40' */
        }

        /* Transition: '<S354>:36' */
        /* Transition: '<S354>:23' */
    }
    else
    {
        /* Transition: '<S354>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_ag) == 133)
        {
            /* Transition: '<S354>:33' */
            /* Transition: '<S354>:35' */
            /* Call Nothing */
            VeLINR_y_Inlet_Temp2_DC_CallStatus = 4U;

            /* Transition: '<S354>:23' */
        }
        else
        {
            /* Transition: '<S354>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_ag) == 1)
            {
                /* Transition: '<S354>:48' */
                /* Transition: '<S354>:53' */
                FA_out_dx = true;

                /* Transition: '<S354>:56' */
            }
            else
            {
                /* Transition: '<S354>:52' */
            }

            /* Transition: '<S354>:37' */
            /* Call Poke */
            VeLINR_y_Inlet_Temp2_DC_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S342>/Poke' */
            /* FunctionCaller: '<S356>/Function Caller' */
            /* Event: '<S354>:38' */
            Rte_Call_PokeAATR_T_SCP_DCNegtvTmpSnsr_PokeAATR_T_SCP_DCNegtvTmpSnsr
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_n, FA_out_dx);

            /* End of Outputs for SubSystem: '<S342>/Poke' */
        }
    }

    /* End of Chart: '<S350>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_EOPB_CURR_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_EOPB_CURR_ErrSts'
     */
    /* Transition: '<S354>:19' */
    rtb_TmpSignalConversionAtVeL_ip =
        Rte_Read_VeLINR_I_EOPB_CURR_VeLINR_I_EOPB_CURR
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_I_E);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_EOPB_CURR_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S376>:1' */
    (void)Rte_Read_VeLINR_b_EOPB_CURR_TO_VeLINR_b_EOPB_CURR_TO(&FA_out_k2);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S372>/Chart' */
    if (FA_out_k2)
    {
        /* Transition: '<S376>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S376>:6' */
            /* Transition: '<S376>:25' */
            /* Call Fsft */
            VeLINR_y_EOPB_CURR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S357>/Fsft' */
            /* FunctionCaller: '<S377>/Function Caller' */
            /* Event: '<S376>:39' */
            Rte_Call_FsftPMIR_b_TransAuxPmp2_Crnt_FsftPMIR_b_TransAuxPmp2_Crnt();

            /* End of Outputs for SubSystem: '<S357>/Fsft' */
            /* Transition: '<S376>:29' */
        }
        else
        {
            /* Transition: '<S376>:30' */
            /* Call Tmot */
            VeLINR_y_EOPB_CURR_CallStatus = 3U;

            /* Event: '<S376>:40' */
        }

        /* Transition: '<S376>:36' */
        /* Transition: '<S376>:23' */
    }
    else
    {
        /* Transition: '<S376>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_ip) == 133)
        {
            /* Transition: '<S376>:33' */
            /* Transition: '<S376>:35' */
            /* Call Nothing */
            VeLINR_y_EOPB_CURR_CallStatus = 4U;

            /* Transition: '<S376>:23' */
        }
        else
        {
            /* Transition: '<S376>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_ip) == 1)
            {
                /* Transition: '<S376>:48' */
                /* Transition: '<S376>:53' */
                FA_out_k2 = true;

                /* Transition: '<S376>:56' */
            }
            else
            {
                /* Transition: '<S376>:52' */
            }

            /* Transition: '<S376>:37' */
            /* Call Poke */
            VeLINR_y_EOPB_CURR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S357>/Poke' */
            /* FunctionCaller: '<S378>/Function Caller' */
            /* Event: '<S376>:38' */
            Rte_Call_PokePMIR_I_TransAuxPmp2_Crnt_PokePMIR_I_TransAuxPmp2_Crnt
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_I_E, FA_out_k2);

            /* End of Outputs for SubSystem: '<S357>/Poke' */
        }
    }

    /* End of Chart: '<S372>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_EOPB_DR_RN_ER_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_EOPB_DR_RN_ER_ErrSts'
     */
    /* Transition: '<S376>:19' */
    rtb_TmpSignalConversionAtVeL_lm =
        Rte_Read_VeLINR_e_EOPB_DR_RN_ER_VeLINR_e_EOPB_DR_RN_ER
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__ga);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_EOPB_DR_RN_ER_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S383>:1' */
    (void)Rte_Read_VeLINR_b_EOPB_DR_RN_ER_TO_VeLINR_b_EOPB_DR_RN_ER_TO
        (&FA_out_ig);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S379>/Chart' */
    if (FA_out_ig)
    {
        /* Transition: '<S383>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S383>:6' */
            /* Transition: '<S383>:25' */
            /* Call Fsft */
            VeLINR_y_EOPB_DR_RN_ER_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S358>/Fsft' */
            /* FunctionCaller: '<S384>/Function Caller' */
            /* Event: '<S383>:39' */
            Rte_Call_FsftPMIR_b_TransAuxPmp2_DryRun_FsftPMIR_b_TransAuxPmp2_DryRun
                ();

            /* End of Outputs for SubSystem: '<S358>/Fsft' */
            /* Transition: '<S383>:29' */
        }
        else
        {
            /* Transition: '<S383>:30' */
            /* Call Tmot */
            VeLINR_y_EOPB_DR_RN_ER_CallStatus = 3U;

            /* Event: '<S383>:40' */
        }

        /* Transition: '<S383>:36' */
        /* Transition: '<S383>:23' */
    }
    else
    {
        /* Transition: '<S383>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_lm) == 133)
        {
            /* Transition: '<S383>:33' */
            /* Transition: '<S383>:35' */
            /* Call Nothing */
            VeLINR_y_EOPB_DR_RN_ER_CallStatus = 4U;

            /* Transition: '<S383>:23' */
        }
        else
        {
            /* Transition: '<S383>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_lm) == 1)
            {
                /* Transition: '<S383>:48' */
                /* Transition: '<S383>:53' */
                FA_out_ig = true;

                /* Transition: '<S383>:56' */
            }
            else
            {
                /* Transition: '<S383>:52' */
            }

            /* Transition: '<S383>:37' */
            /* Call Poke */
            VeLINR_y_EOPB_DR_RN_ER_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S358>/Poke' */
            /* FunctionCaller: '<S385>/Function Caller' */
            /* Event: '<S383>:38' */
            Rte_Call_PokePMIR_e_TransAuxPmp2_DryRun_PokePMIR_e_TransAuxPmp2_DryRun
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__ga, FA_out_ig);

            /* End of Outputs for SubSystem: '<S358>/Poke' */
        }
    }

    /* End of Chart: '<S379>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_EOPB_LMP_HM_AN_ON_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_EOPB_LMP_HM_AN_ON_ErrSts'
     */
    /* Transition: '<S383>:19' */
    rtb_TmpSignalConversionAtVeL_eo =
        Rte_Read_VeLINR_e_EOPB_LMP_HM_AN_ON_VeLINR_e_EOPB_LMP_HM_AN_ON
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_b);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_EOPB_LMP_HM_AN_ON_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S390>:1' */
    (void)Rte_Read_VeLINR_b_EOPB_LMP_HM_AN_ON_TO_VeLINR_b_EOPB_LMP_HM_AN_ON_TO
        (&FA_out_ox);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S386>/Chart' */
    if (FA_out_ox)
    {
        /* Transition: '<S390>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S390>:6' */
            /* Transition: '<S390>:25' */
            /* Call Fsft */
            VeLINR_y_EOPB_LMP_HM_AN_ON_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S359>/Fsft' */
            /* FunctionCaller: '<S391>/Function Caller' */
            /* Event: '<S390>:39' */
            Rte_Call_FsftPMIR_b_TransAuxPmp2_LmpHM_FsftPMIR_b_TransAuxPmp2_LmpHM
                ();

            /* End of Outputs for SubSystem: '<S359>/Fsft' */
            /* Transition: '<S390>:29' */
        }
        else
        {
            /* Transition: '<S390>:30' */
            /* Call Tmot */
            VeLINR_y_EOPB_LMP_HM_AN_ON_CallStatus = 3U;

            /* Event: '<S390>:40' */
        }

        /* Transition: '<S390>:36' */
        /* Transition: '<S390>:23' */
    }
    else
    {
        /* Transition: '<S390>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_eo) == 133)
        {
            /* Transition: '<S390>:33' */
            /* Transition: '<S390>:35' */
            /* Call Nothing */
            VeLINR_y_EOPB_LMP_HM_AN_ON_CallStatus = 4U;

            /* Transition: '<S390>:23' */
        }
        else
        {
            /* Transition: '<S390>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_eo) == 1)
            {
                /* Transition: '<S390>:48' */
                /* Transition: '<S390>:53' */
                FA_out_ox = true;

                /* Transition: '<S390>:56' */
            }
            else
            {
                /* Transition: '<S390>:52' */
            }

            /* Transition: '<S390>:37' */
            /* Call Poke */
            VeLINR_y_EOPB_LMP_HM_AN_ON_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S359>/Poke' */
            /* FunctionCaller: '<S392>/Function Caller' */
            /* Event: '<S390>:38' */
            Rte_Call_PokePMIR_e_TransAuxPmp2_LmpHM_PokePMIR_e_TransAuxPmp2_LmpHM
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_b, FA_out_ox);

            /* End of Outputs for SubSystem: '<S359>/Poke' */
        }
    }

    /* End of Chart: '<S386>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_EOPB_LOW_TMP_STAT_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_EOPB_LOW_TMP_STAT_ErrSts'
     */
    /* Transition: '<S390>:19' */
    rtb_TmpSignalConversionAtVe_egj =
        Rte_Read_VeLINR_e_EOPB_LOW_TMP_STAT_VeLINR_e_EOPB_LOW_TMP_STAT
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__cx);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_EOPB_LOW_TMP_STAT_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S397>:1' */
    (void)Rte_Read_VeLINR_b_EOPB_LOW_TMP_STAT_TO_VeLINR_b_EOPB_LOW_TMP_STAT_TO
        (&FA_out_cb);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S393>/Chart' */
    if (FA_out_cb)
    {
        /* Transition: '<S397>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S397>:6' */
            /* Transition: '<S397>:25' */
            /* Call Fsft */
            VeLINR_y_EOPB_LOW_TMP_STAT_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S360>/Fsft' */
            /* FunctionCaller: '<S398>/Function Caller' */
            /* Event: '<S397>:39' */
            Rte_Call_FsftPMIR_b_TransAuxPmp2_ColdBiasSts_FsftPMIR_b_TransAuxPmp2_ColdBiasSts
                ();

            /* End of Outputs for SubSystem: '<S360>/Fsft' */
            /* Transition: '<S397>:29' */
        }
        else
        {
            /* Transition: '<S397>:30' */
            /* Call Tmot */
            VeLINR_y_EOPB_LOW_TMP_STAT_CallStatus = 3U;

            /* Event: '<S397>:40' */
        }

        /* Transition: '<S397>:36' */
        /* Transition: '<S397>:23' */
    }
    else
    {
        /* Transition: '<S397>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVe_egj) == 133)
        {
            /* Transition: '<S397>:33' */
            /* Transition: '<S397>:35' */
            /* Call Nothing */
            VeLINR_y_EOPB_LOW_TMP_STAT_CallStatus = 4U;

            /* Transition: '<S397>:23' */
        }
        else
        {
            /* Transition: '<S397>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVe_egj) == 1)
            {
                /* Transition: '<S397>:48' */
                /* Transition: '<S397>:53' */
                FA_out_cb = true;

                /* Transition: '<S397>:56' */
            }
            else
            {
                /* Transition: '<S397>:52' */
            }

            /* Transition: '<S397>:37' */
            /* Call Poke */
            VeLINR_y_EOPB_LOW_TMP_STAT_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S360>/Poke' */
            /* FunctionCaller: '<S399>/Function Caller' */
            /* Event: '<S397>:38' */
            Rte_Call_PokePMIR_e_TransAuxPmp2_ColdBiasSts_PokePMIR_e_TransAuxPmp2_ColdBiasSts
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__cx, FA_out_cb);

            /* End of Outputs for SubSystem: '<S360>/Poke' */
        }
    }

    /* End of Chart: '<S393>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_EOPB_MONTRNG_RPM_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_EOPB_MONTRNG_RPM_ErrSts'
     */
    /* Transition: '<S397>:19' */
    rtb_TmpSignalConversionAtVeLI_m =
        Rte_Read_VeLINR_e_EOPB_MONTRNG_RPM_VeLINR_e_EOPB_MONTRNG_RPM
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__jb);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_EOPB_MONTRNG_RPM_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S404>:1' */
    (void)Rte_Read_VeLINR_b_EOPB_MONTRNG_RPM_TO_VeLINR_b_EOPB_MONTRNG_RPM_TO
        (&FA_out_dt);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S400>/Chart' */
    if (FA_out_dt)
    {
        /* Transition: '<S404>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S404>:6' */
            /* Transition: '<S404>:25' */
            /* Call Fsft */
            VeLINR_y_EOPB_MONTRNG_RPM_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S361>/Fsft' */
            /* FunctionCaller: '<S405>/Function Caller' */
            /* Event: '<S404>:39' */
            Rte_Call_FsftPMIR_b_TransAuxPmp2_MntrRPM_FsftPMIR_b_TransAuxPmp2_MntrRPM
                ();

            /* End of Outputs for SubSystem: '<S361>/Fsft' */
            /* Transition: '<S404>:29' */
        }
        else
        {
            /* Transition: '<S404>:30' */
            /* Call Tmot */
            VeLINR_y_EOPB_MONTRNG_RPM_CallStatus = 3U;

            /* Event: '<S404>:40' */
        }

        /* Transition: '<S404>:36' */
        /* Transition: '<S404>:23' */
    }
    else
    {
        /* Transition: '<S404>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_m) == 133)
        {
            /* Transition: '<S404>:33' */
            /* Transition: '<S404>:35' */
            /* Call Nothing */
            VeLINR_y_EOPB_MONTRNG_RPM_CallStatus = 4U;

            /* Transition: '<S404>:23' */
        }
        else
        {
            /* Transition: '<S404>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeLI_m) == 1)
            {
                /* Transition: '<S404>:48' */
                /* Transition: '<S404>:53' */
                FA_out_dt = true;

                /* Transition: '<S404>:56' */
            }
            else
            {
                /* Transition: '<S404>:52' */
            }

            /* Transition: '<S404>:37' */
            /* Call Poke */
            VeLINR_y_EOPB_MONTRNG_RPM_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S361>/Poke' */
            /* FunctionCaller: '<S406>/Function Caller' */
            /* Event: '<S404>:38' */
            Rte_Call_PokePMIR_e_TransAuxPmp2_MntrRPM_PokePMIR_e_TransAuxPmp2_MntrRPM
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__jb, FA_out_dt);

            /* End of Outputs for SubSystem: '<S361>/Poke' */
        }
    }

    /* End of Chart: '<S400>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_EOPB_OV_CUR_ER_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_EOPB_OV_CUR_ER_ErrSts'
     */
    /* Transition: '<S404>:19' */
    rtb_TmpSignalConversionAtVeL_o3 =
        Rte_Read_VeLINR_e_EOPB_OV_CUR_ER_VeLINR_e_EOPB_OV_CUR_ER
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__k2);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_EOPB_OV_CUR_ER_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S411>:1' */
    (void)Rte_Read_VeLINR_b_EOPB_OV_CUR_ER_TO_VeLINR_b_EOPB_OV_CUR_ER_TO
        (&FA_out_ov);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S407>/Chart' */
    if (FA_out_ov)
    {
        /* Transition: '<S411>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S411>:6' */
            /* Transition: '<S411>:25' */
            /* Call Fsft */
            VeLINR_y_EOPB_OV_CUR_ER_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S362>/Fsft' */
            /* FunctionCaller: '<S412>/Function Caller' */
            /* Event: '<S411>:39' */
            Rte_Call_FsftPMIR_b_TransAuxPmp2_CrntErr_FsftPMIR_b_TransAuxPmp2_CrntErr
                ();

            /* End of Outputs for SubSystem: '<S362>/Fsft' */
            /* Transition: '<S411>:29' */
        }
        else
        {
            /* Transition: '<S411>:30' */
            /* Call Tmot */
            VeLINR_y_EOPB_OV_CUR_ER_CallStatus = 3U;

            /* Event: '<S411>:40' */
        }

        /* Transition: '<S411>:36' */
        /* Transition: '<S411>:23' */
    }
    else
    {
        /* Transition: '<S411>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_o3) == 133)
        {
            /* Transition: '<S411>:33' */
            /* Transition: '<S411>:35' */
            /* Call Nothing */
            VeLINR_y_EOPB_OV_CUR_ER_CallStatus = 4U;

            /* Transition: '<S411>:23' */
        }
        else
        {
            /* Transition: '<S411>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_o3) == 1)
            {
                /* Transition: '<S411>:48' */
                /* Transition: '<S411>:53' */
                FA_out_ov = true;

                /* Transition: '<S411>:56' */
            }
            else
            {
                /* Transition: '<S411>:52' */
            }

            /* Transition: '<S411>:37' */
            /* Call Poke */
            VeLINR_y_EOPB_OV_CUR_ER_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S362>/Poke' */
            /* FunctionCaller: '<S413>/Function Caller' */
            /* Event: '<S411>:38' */
            Rte_Call_PokePMIR_e_TransAuxPmp2_CrntErr_PokePMIR_e_TransAuxPmp2_CrntErr
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__k2, FA_out_ov);

            /* End of Outputs for SubSystem: '<S362>/Poke' */
        }
    }

    /* End of Chart: '<S407>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_EOPB_OV_TMP_ER_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_EOPB_OV_TMP_ER_ErrSts'
     */
    /* Transition: '<S411>:19' */
    rtb_TmpSignalConversionAtVeL_ex =
        Rte_Read_VeLINR_e_EOPB_OV_TMP_ER_VeLINR_e_EOPB_OV_TMP_ER
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__ck);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_EOPB_OV_TMP_ER_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S418>:1' */
    (void)Rte_Read_VeLINR_b_EOPB_OV_TMP_ER_TO_VeLINR_b_EOPB_OV_TMP_ER_TO
        (&FA_out_ey);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S414>/Chart' */
    if (FA_out_ey)
    {
        /* Transition: '<S418>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S418>:6' */
            /* Transition: '<S418>:25' */
            /* Call Fsft */
            VeLINR_y_EOPB_OV_TMP_ER_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S363>/Fsft' */
            /* FunctionCaller: '<S419>/Function Caller' */
            /* Event: '<S418>:39' */
            Rte_Call_FsftPMIR_b_TransAuxPmp2_TempErr_FsftPMIR_b_TransAuxPmp2_TempErr
                ();

            /* End of Outputs for SubSystem: '<S363>/Fsft' */
            /* Transition: '<S418>:29' */
        }
        else
        {
            /* Transition: '<S418>:30' */
            /* Call Tmot */
            VeLINR_y_EOPB_OV_TMP_ER_CallStatus = 3U;

            /* Event: '<S418>:40' */
        }

        /* Transition: '<S418>:36' */
        /* Transition: '<S418>:23' */
    }
    else
    {
        /* Transition: '<S418>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_ex) == 133)
        {
            /* Transition: '<S418>:33' */
            /* Transition: '<S418>:35' */
            /* Call Nothing */
            VeLINR_y_EOPB_OV_TMP_ER_CallStatus = 4U;

            /* Transition: '<S418>:23' */
        }
        else
        {
            /* Transition: '<S418>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_ex) == 1)
            {
                /* Transition: '<S418>:48' */
                /* Transition: '<S418>:53' */
                FA_out_ey = true;

                /* Transition: '<S418>:56' */
            }
            else
            {
                /* Transition: '<S418>:52' */
            }

            /* Transition: '<S418>:37' */
            /* Call Poke */
            VeLINR_y_EOPB_OV_TMP_ER_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S363>/Poke' */
            /* FunctionCaller: '<S420>/Function Caller' */
            /* Event: '<S418>:38' */
            Rte_Call_PokePMIR_e_TransAuxPmp2_TempErr_PokePMIR_e_TransAuxPmp2_TempErr
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__ck, FA_out_ey);

            /* End of Outputs for SubSystem: '<S363>/Poke' */
        }
    }

    /* End of Chart: '<S414>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_EOPB_POST_RUN_STAT_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_EOPB_POST_RUN_STAT_ErrSts'
     */
    /* Transition: '<S418>:19' */
    rtb_TmpSignalConversionAtVeL_ne =
        Rte_Read_VeLINR_e_EOPB_POST_RUN_STAT_VeLINR_e_EOPB_POST_RUN_STAT
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__ae);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_EOPB_POST_RUN_STAT_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S425>:1' */
    (void)Rte_Read_VeLINR_b_EOPB_POST_RUN_STAT_TO_VeLINR_b_EOPB_POST_RUN_STAT_TO
        (&FA_out_gm);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S421>/Chart' */
    if (FA_out_gm)
    {
        /* Transition: '<S425>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S425>:6' */
            /* Transition: '<S425>:25' */
            /* Call Fsft */
            VeLINR_y_EOPB_POST_RUN_STAT_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S364>/Fsft' */
            /* FunctionCaller: '<S426>/Function Caller' */
            /* Event: '<S425>:39' */
            Rte_Call_FsftPMIR_b_TransAuxPmp2_PstRnSt_FsftPMIR_b_TransAuxPmp2_PstRnSt
                ();

            /* End of Outputs for SubSystem: '<S364>/Fsft' */
            /* Transition: '<S425>:29' */
        }
        else
        {
            /* Transition: '<S425>:30' */
            /* Call Tmot */
            VeLINR_y_EOPB_POST_RUN_STAT_CallStatus = 3U;

            /* Event: '<S425>:40' */
        }

        /* Transition: '<S425>:36' */
        /* Transition: '<S425>:23' */
    }
    else
    {
        /* Transition: '<S425>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_ne) == 133)
        {
            /* Transition: '<S425>:33' */
            /* Transition: '<S425>:35' */
            /* Call Nothing */
            VeLINR_y_EOPB_POST_RUN_STAT_CallStatus = 4U;

            /* Transition: '<S425>:23' */
        }
        else
        {
            /* Transition: '<S425>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_ne) == 1)
            {
                /* Transition: '<S425>:48' */
                /* Transition: '<S425>:53' */
                FA_out_gm = true;

                /* Transition: '<S425>:56' */
            }
            else
            {
                /* Transition: '<S425>:52' */
            }

            /* Transition: '<S425>:37' */
            /* Call Poke */
            VeLINR_y_EOPB_POST_RUN_STAT_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S364>/Poke' */
            /* FunctionCaller: '<S427>/Function Caller' */
            /* Event: '<S425>:38' */
            Rte_Call_PokePMIR_e_TransAuxPmp2_PstRnSt_PokePMIR_e_TransAuxPmp2_PstRnSt
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__ae, FA_out_gm);

            /* End of Outputs for SubSystem: '<S364>/Poke' */
        }
    }

    /* End of Chart: '<S421>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_EOPB_RPM_ACTL_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_EOPB_RPM_ACTL_ErrSts'
     */
    /* Transition: '<S425>:19' */
    rtb_TmpSignalConversionAtVeL_kb =
        Rte_Read_VeLINR_e_EOPB_RPM_ACTL_VeLINR_e_EOPB_RPM_ACTL
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_E);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_EOPB_RPM_ACTL_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S432>:1' */
    (void)Rte_Read_VeLINR_b_EOPB_RPM_ACTL_TO_VeLINR_b_EOPB_RPM_ACTL_TO
        (&FA_out_os);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S428>/Chart' */
    if (FA_out_os)
    {
        /* Transition: '<S432>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S432>:6' */
            /* Transition: '<S432>:25' */
            /* Call Fsft */
            VeLINR_y_EOPB_RPM_ACTL_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S365>/Fsft' */
            /* FunctionCaller: '<S433>/Function Caller' */
            /* Event: '<S432>:39' */
            Rte_Call_FsftPMIR_b_TransAuxPmp2_RPMAct_FsftPMIR_b_TransAuxPmp2_RPMAct
                ();

            /* End of Outputs for SubSystem: '<S365>/Fsft' */
            /* Transition: '<S432>:29' */
        }
        else
        {
            /* Transition: '<S432>:30' */
            /* Call Tmot */
            VeLINR_y_EOPB_RPM_ACTL_CallStatus = 3U;

            /* Event: '<S432>:40' */
        }

        /* Transition: '<S432>:36' */
        /* Transition: '<S432>:23' */
    }
    else
    {
        /* Transition: '<S432>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_kb) == 133)
        {
            /* Transition: '<S432>:33' */
            /* Transition: '<S432>:35' */
            /* Call Nothing */
            VeLINR_y_EOPB_RPM_ACTL_CallStatus = 4U;

            /* Transition: '<S432>:23' */
        }
        else
        {
            /* Transition: '<S432>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_kb) == 1)
            {
                /* Transition: '<S432>:48' */
                /* Transition: '<S432>:53' */
                FA_out_os = true;

                /* Transition: '<S432>:56' */
            }
            else
            {
                /* Transition: '<S432>:52' */
            }

            /* Transition: '<S432>:37' */
            /* Call Poke */
            VeLINR_y_EOPB_RPM_ACTL_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S365>/Poke' */
            /* FunctionCaller: '<S434>/Function Caller' */
            /* Event: '<S432>:38' */
            Rte_Call_PokePMIR_n_TransAuxPmp2_RPMAct_PokePMIR_n_TransAuxPmp2_RPMAct
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_E, FA_out_os);

            /* End of Outputs for SubSystem: '<S365>/Poke' */
        }
    }

    /* End of Chart: '<S428>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_EOPB_RPM_TGT_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_EOPB_RPM_TGT_ErrSts'
     */
    /* Transition: '<S432>:19' */
    rtb_TmpSignalConversionAtVeL_ei =
        Rte_Read_VeLINR_e_EOPB_RPM_TGT_VeLINR_e_EOPB_RPM_TGT
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_j);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_EOPB_RPM_TGT_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S439>:1' */
    (void)Rte_Read_VeLINR_b_EOPB_RPM_TGT_TO_VeLINR_b_EOPB_RPM_TGT_TO(&FA_out_mp);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S435>/Chart' */
    if (FA_out_mp)
    {
        /* Transition: '<S439>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S439>:6' */
            /* Transition: '<S439>:25' */
            /* Call Fsft */
            VeLINR_y_EOPB_RPM_TGT_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S366>/Fsft' */
            /* FunctionCaller: '<S440>/Function Caller' */
            /* Event: '<S439>:39' */
            Rte_Call_FsftPMIR_b_TransAuxPmp2_RPMTgt_FsftPMIR_b_TransAuxPmp2_RPMTgt
                ();

            /* End of Outputs for SubSystem: '<S366>/Fsft' */
            /* Transition: '<S439>:29' */
        }
        else
        {
            /* Transition: '<S439>:30' */
            /* Call Tmot */
            VeLINR_y_EOPB_RPM_TGT_CallStatus = 3U;

            /* Event: '<S439>:40' */
        }

        /* Transition: '<S439>:36' */
        /* Transition: '<S439>:23' */
    }
    else
    {
        /* Transition: '<S439>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_ei) == 133)
        {
            /* Transition: '<S439>:33' */
            /* Transition: '<S439>:35' */
            /* Call Nothing */
            VeLINR_y_EOPB_RPM_TGT_CallStatus = 4U;

            /* Transition: '<S439>:23' */
        }
        else
        {
            /* Transition: '<S439>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_ei) == 1)
            {
                /* Transition: '<S439>:48' */
                /* Transition: '<S439>:53' */
                FA_out_mp = true;

                /* Transition: '<S439>:56' */
            }
            else
            {
                /* Transition: '<S439>:52' */
            }

            /* Transition: '<S439>:37' */
            /* Call Poke */
            VeLINR_y_EOPB_RPM_TGT_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S366>/Poke' */
            /* FunctionCaller: '<S441>/Function Caller' */
            /* Event: '<S439>:38' */
            Rte_Call_PokePMIR_n_TransAuxPmp2_RPMTgt_PokePMIR_n_TransAuxPmp2_RPMTgt
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_j, FA_out_mp);

            /* End of Outputs for SubSystem: '<S366>/Poke' */
        }
    }

    /* End of Chart: '<S435>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_EOPB_Stall_Event_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_EOPB_Stall_Event_ErrSts'
     */
    /* Transition: '<S439>:19' */
    rtb_TmpSignalConversionAtVeL_dg =
        Rte_Read_VeLINR_e_EOPB_Stall_Event_VeLINR_e_EOPB_Stall_Event
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__kq);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_EOPB_Stall_EventTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S446>:1' */
    (void)Rte_Read_VeLINR_b_EOPB_Stall_EventTO_VeLINR_b_EOPB_Stall_EventTO
        (&FA_out_bp);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S442>/Chart' */
    if (FA_out_bp)
    {
        /* Transition: '<S446>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S446>:6' */
            /* Transition: '<S446>:25' */
            /* Call Fsft */
            VeLINR_y_EOPB_Stall_Event_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S367>/Fsft' */
            /* FunctionCaller: '<S447>/Function Caller' */
            /* Event: '<S446>:39' */
            Rte_Call_FsftPMIR_b_TransAuxPmp2_StallEvnt_FsftPMIR_b_TransAuxPmp2_StallEvnt
                ();

            /* End of Outputs for SubSystem: '<S367>/Fsft' */
            /* Transition: '<S446>:29' */
        }
        else
        {
            /* Transition: '<S446>:30' */
            /* Call Tmot */
            VeLINR_y_EOPB_Stall_Event_CallStatus = 3U;

            /* Event: '<S446>:40' */
        }

        /* Transition: '<S446>:36' */
        /* Transition: '<S446>:23' */
    }
    else
    {
        /* Transition: '<S446>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_dg) == 133)
        {
            /* Transition: '<S446>:33' */
            /* Transition: '<S446>:35' */
            /* Call Nothing */
            VeLINR_y_EOPB_Stall_Event_CallStatus = 4U;

            /* Transition: '<S446>:23' */
        }
        else
        {
            /* Transition: '<S446>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_dg) == 1)
            {
                /* Transition: '<S446>:48' */
                /* Transition: '<S446>:53' */
                FA_out_bp = true;

                /* Transition: '<S446>:56' */
            }
            else
            {
                /* Transition: '<S446>:52' */
            }

            /* Transition: '<S446>:37' */
            /* Call Poke */
            VeLINR_y_EOPB_Stall_Event_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S367>/Poke' */
            /* FunctionCaller: '<S448>/Function Caller' */
            /* Event: '<S446>:38' */
            Rte_Call_PokePMIR_e_TransAuxPmp2_StallEvnt_PokePMIR_e_TransAuxPmp2_StallEvnt
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__kq, FA_out_bp);

            /* End of Outputs for SubSystem: '<S367>/Poke' */
        }
    }

    /* End of Chart: '<S442>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_EOPB_TEMP_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_EOPB_TEMP_ErrSts'
     */
    /* Transition: '<S446>:19' */
    rtb_TmpSignalConversionAtVeL_f5 =
        Rte_Read_VeLINR_T_EOPB_TEMP_VeLINR_T_EOPB_TEMP
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_T_E);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_EOPB_TEMP_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S453>:1' */
    (void)Rte_Read_VeLINR_b_EOPB_TEMP_TO_VeLINR_b_EOPB_TEMP_TO(&FA_out_e5);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S449>/Chart' */
    if (FA_out_e5)
    {
        /* Transition: '<S453>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S453>:6' */
            /* Transition: '<S453>:25' */
            /* Call Fsft */
            VeLINR_y_EOPB_TEMP_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S368>/Fsft' */
            /* FunctionCaller: '<S454>/Function Caller' */
            /* Event: '<S453>:39' */
            Rte_Call_FsftPMIR_b_TransAuxPmp2_Temp_FsftPMIR_b_TransAuxPmp2_Temp();

            /* End of Outputs for SubSystem: '<S368>/Fsft' */
            /* Transition: '<S453>:29' */
        }
        else
        {
            /* Transition: '<S453>:30' */
            /* Call Tmot */
            VeLINR_y_EOPB_TEMP_CallStatus = 3U;

            /* Event: '<S453>:40' */
        }

        /* Transition: '<S453>:36' */
        /* Transition: '<S453>:23' */
    }
    else
    {
        /* Transition: '<S453>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_f5) == 133)
        {
            /* Transition: '<S453>:33' */
            /* Transition: '<S453>:35' */
            /* Call Nothing */
            VeLINR_y_EOPB_TEMP_CallStatus = 4U;

            /* Transition: '<S453>:23' */
        }
        else
        {
            /* Transition: '<S453>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_f5) == 1)
            {
                /* Transition: '<S453>:48' */
                /* Transition: '<S453>:53' */
                FA_out_e5 = true;

                /* Transition: '<S453>:56' */
            }
            else
            {
                /* Transition: '<S453>:52' */
            }

            /* Transition: '<S453>:37' */
            /* Call Poke */
            VeLINR_y_EOPB_TEMP_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S368>/Poke' */
            /* FunctionCaller: '<S455>/Function Caller' */
            /* Event: '<S453>:38' */
            Rte_Call_PokePMIR_T_TransAuxPmp2_Temp_PokePMIR_T_TransAuxPmp2_Temp
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_T_E, FA_out_e5);

            /* End of Outputs for SubSystem: '<S368>/Poke' */
        }
    }

    /* End of Chart: '<S449>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_EOPB_VLTG_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_EOPB_VLTG_ErrSts'
     */
    /* Transition: '<S453>:19' */
    rtb_TmpSignalConversionAtVeL_cv =
        Rte_Read_VeLINR_U_EOPB_VLTG_VeLINR_U_EOPB_VLTG
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_U_E);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_EOPB_VLTG_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S460>:1' */
    (void)Rte_Read_VeLINR_b_EOPB_VLTG_TO_VeLINR_b_EOPB_VLTG_TO(&FA_out_f5);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S456>/Chart' */
    if (FA_out_f5)
    {
        /* Transition: '<S460>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S460>:6' */
            /* Transition: '<S460>:25' */
            /* Call Fsft */
            VeLINR_y_EOPB_VLTG_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S369>/Fsft' */
            /* FunctionCaller: '<S461>/Function Caller' */
            /* Event: '<S460>:39' */
            Rte_Call_FsftPMIR_b_TransAuxPmp2_Vltg_FsftPMIR_b_TransAuxPmp2_Vltg();

            /* End of Outputs for SubSystem: '<S369>/Fsft' */
            /* Transition: '<S460>:29' */
        }
        else
        {
            /* Transition: '<S460>:30' */
            /* Call Tmot */
            VeLINR_y_EOPB_VLTG_CallStatus = 3U;

            /* Event: '<S460>:40' */
        }

        /* Transition: '<S460>:36' */
        /* Transition: '<S460>:23' */
    }
    else
    {
        /* Transition: '<S460>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_cv) == 133)
        {
            /* Transition: '<S460>:33' */
            /* Transition: '<S460>:35' */
            /* Call Nothing */
            VeLINR_y_EOPB_VLTG_CallStatus = 4U;

            /* Transition: '<S460>:23' */
        }
        else
        {
            /* Transition: '<S460>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_cv) == 1)
            {
                /* Transition: '<S460>:48' */
                /* Transition: '<S460>:53' */
                FA_out_f5 = true;

                /* Transition: '<S460>:56' */
            }
            else
            {
                /* Transition: '<S460>:52' */
            }

            /* Transition: '<S460>:37' */
            /* Call Poke */
            VeLINR_y_EOPB_VLTG_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S369>/Poke' */
            /* FunctionCaller: '<S462>/Function Caller' */
            /* Event: '<S460>:38' */
            Rte_Call_PokePMIR_U_TransAuxPmp2_Vltg_PokePMIR_U_TransAuxPmp2_Vltg
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_U_E, FA_out_f5);

            /* End of Outputs for SubSystem: '<S369>/Poke' */
        }
    }

    /* End of Chart: '<S456>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_EOPB_VLTG_ER_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_EOPB_VLTG_ER_ErrSts'
     */
    /* Transition: '<S460>:19' */
    rtb_TmpSignalConversionAtVeL_aa =
        Rte_Read_VeLINR_e_EOPB_VLTG_ER_VeLINR_e_EOPB_VLTG_ER
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__pd);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_EOPB_VLTG_ER_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S467>:1' */
    (void)Rte_Read_VeLINR_b_EOPB_VLTG_ER_TO_VeLINR_b_EOPB_VLTG_ER_TO(&FA_out_df);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S463>/Chart' */
    if (FA_out_df)
    {
        /* Transition: '<S467>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S467>:6' */
            /* Transition: '<S467>:25' */
            /* Call Fsft */
            VeLINR_y_EOPB_VLTG_ER_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S370>/Fsft' */
            /* FunctionCaller: '<S468>/Function Caller' */
            /* Event: '<S467>:39' */
            Rte_Call_FsftPMIR_b_TransAuxPmp2_VltgErr_FsftPMIR_b_TransAuxPmp2_VltgErr
                ();

            /* End of Outputs for SubSystem: '<S370>/Fsft' */
            /* Transition: '<S467>:29' */
        }
        else
        {
            /* Transition: '<S467>:30' */
            /* Call Tmot */
            VeLINR_y_EOPB_VLTG_ER_CallStatus = 3U;

            /* Event: '<S467>:40' */
        }

        /* Transition: '<S467>:36' */
        /* Transition: '<S467>:23' */
    }
    else
    {
        /* Transition: '<S467>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_aa) == 133)
        {
            /* Transition: '<S467>:33' */
            /* Transition: '<S467>:35' */
            /* Call Nothing */
            VeLINR_y_EOPB_VLTG_ER_CallStatus = 4U;

            /* Transition: '<S467>:23' */
        }
        else
        {
            /* Transition: '<S467>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_aa) == 1)
            {
                /* Transition: '<S467>:48' */
                /* Transition: '<S467>:53' */
                FA_out_df = true;

                /* Transition: '<S467>:56' */
            }
            else
            {
                /* Transition: '<S467>:52' */
            }

            /* Transition: '<S467>:37' */
            /* Call Poke */
            VeLINR_y_EOPB_VLTG_ER_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S370>/Poke' */
            /* FunctionCaller: '<S469>/Function Caller' */
            /* Event: '<S467>:38' */
            Rte_Call_PokePMIR_e_TransAuxPmp2_VltgErr_PokePMIR_e_TransAuxPmp2_VltgErr
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__pd, FA_out_df);

            /* End of Outputs for SubSystem: '<S370>/Poke' */
        }
    }

    /* End of Chart: '<S463>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_RsErr_EOPB_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_RsErr_EOPB_ErrSts'
     */
    /* Transition: '<S467>:19' */
    rtb_TmpSignalConversionAtVeL_ki =
        Rte_Read_VeLINR_b_RsErr_EOPB_VeLINR_b_RsErr_EOPB
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__m2);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_RsErr_EOPB_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S474>:1' */
    (void)Rte_Read_VeLINR_b_RsErr_EOPB_TO_VeLINR_b_RsErr_EOPB_TO(&FA_out_pw);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S470>/Chart' */
    if (FA_out_pw)
    {
        /* Transition: '<S474>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S474>:6' */
            /* Transition: '<S474>:25' */
            /* Call Fsft */
            VeLINR_y_RsErr_EOPB_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S371>/Fsft' */
            /* FunctionCaller: '<S475>/Function Caller' */
            /* Event: '<S474>:39' */
            Rte_Call_FsftPMIR_b_TransAuxPmp2_RespErr_FsftPMIR_b_TransAuxPmp2_RespErr
                ();

            /* End of Outputs for SubSystem: '<S371>/Fsft' */
            /* Transition: '<S474>:29' */
        }
        else
        {
            /* Transition: '<S474>:30' */
            /* Call Tmot */
            VeLINR_y_RsErr_EOPB_CallStatus = 3U;

            /* Event: '<S474>:40' */
        }

        /* Transition: '<S474>:36' */
        /* Transition: '<S474>:23' */
    }
    else
    {
        /* Transition: '<S474>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_ki) == 133)
        {
            /* Transition: '<S474>:33' */
            /* Transition: '<S474>:35' */
            /* Call Nothing */
            VeLINR_y_RsErr_EOPB_CallStatus = 4U;

            /* Transition: '<S474>:23' */
        }
        else
        {
            /* Transition: '<S474>:46' */
            /* Transition: '<S474>:37' */
            /* Call Poke */
            VeLINR_y_RsErr_EOPB_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S371>/Poke' */
            /* FunctionCaller: '<S476>/Function Caller' */
            /* Event: '<S474>:38' */
            Rte_Call_PokePMIR_b_TransAuxPmp2_RespErr_PokePMIR_b_TransAuxPmp2_RespErr
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__m2);

            /* End of Outputs for SubSystem: '<S371>/Poke' */
        }
    }

    /* End of Chart: '<S470>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_EOPB_OIL_TEMP_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_EOPB_OIL_TEMP_ErrSts'
     */
    /* Transition: '<S474>:19' */
    rtb_TmpSignalConversionAtVeL_d1 =
        Rte_Read_VeLINR_T_EOPB_OIL_TEMP_VeLINR_T_EOPB_OIL_TEMP
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_T_m);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_EOPB_OIL_TEMP_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S482>:1' */
    (void)Rte_Read_VeLINR_b_EOPB_OIL_TEMP_TO_VeLINR_b_EOPB_OIL_TEMP_TO
        (&tmpRead_q);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S478>/Chart' */
    if (tmpRead_q)
    {
        /* Transition: '<S482>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S482>:6' */
            /* Transition: '<S482>:25' */
            /* Call Fsft */
            VeLINR_y_EOPB_OIL_TEMP_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S477>/Fsft' */
            /* FunctionCaller: '<S483>/Function Caller' */
            /* Event: '<S482>:39' */
            Rte_Call_FsftPMIR_b_TransAuxPmp2_OilTemp_FsftPMIR_b_TransAuxPmp2_OilTemp
                ();

            /* End of Outputs for SubSystem: '<S477>/Fsft' */
            /* Transition: '<S482>:29' */
        }
        else
        {
            /* Transition: '<S482>:30' */
            /* Call Tmot */
            VeLINR_y_EOPB_OIL_TEMP_CallStatus = 3U;

            /* Event: '<S482>:40' */
        }

        /* Transition: '<S482>:36' */
        /* Transition: '<S482>:23' */
    }
    else
    {
        /* Transition: '<S482>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_d1) == 133)
        {
            /* Transition: '<S482>:33' */
            /* Transition: '<S482>:35' */
            /* Call Nothing */
            VeLINR_y_EOPB_OIL_TEMP_CallStatus = 4U;

            /* Transition: '<S482>:23' */
        }
        else
        {
            /* Transition: '<S482>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_d1) == 1)
            {
                /* Transition: '<S482>:48' */
                /* Transition: '<S482>:53' */
                FA_out_pw = true;

                /* Transition: '<S482>:56' */
            }
            else
            {
                /* Transition: '<S482>:52' */
                FA_out_pw = false;
            }

            /* Transition: '<S482>:37' */
            /* Call Poke */
            VeLINR_y_EOPB_OIL_TEMP_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S477>/Poke' */
            /* FunctionCaller: '<S484>/Function Caller' */
            /* Event: '<S482>:38' */
            Rte_Call_PokePMIR_T_TransAuxPmp2_OilTemp_PokePMIR_T_TransAuxPmp2_OilTemp
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_T_m, FA_out_pw);

            /* End of Outputs for SubSystem: '<S477>/Poke' */
        }
    }

    /* End of Chart: '<S478>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_EOPB_HW_VER_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_EOPB_HW_VER_ErrSts'
     */
    /* Transition: '<S482>:19' */
    rtb_TmpSignalConversionAtVeL_fq =
        Rte_Read_VeLINR_y_EOPB_HW_VER_VeLINR_y_EOPB_HW_VER
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_y_E);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_EOPB_HW_VER_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S490>:1' */
    (void)Rte_Read_VeLINR_b_EOPB_HW_VER_TO_VeLINR_b_EOPB_HW_VER_TO(&FA_out_cg);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S487>/Chart' */
    if (FA_out_cg)
    {
        /* Transition: '<S490>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S490>:6' */
            /* Transition: '<S490>:25' */
            /* Call Fsft */
            VeLINR_y_EOPB_HW_VER_CallStatus = 2U;

            /* Event: '<S490>:39' */
            /* Transition: '<S490>:29' */
        }
        else
        {
            /* Transition: '<S490>:30' */
            /* Call Tmot */
            VeLINR_y_EOPB_HW_VER_CallStatus = 3U;

            /* Event: '<S490>:40' */
        }

        /* Transition: '<S490>:36' */
        /* Transition: '<S490>:23' */
    }
    else
    {
        /* Transition: '<S490>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_fq) == 133)
        {
            /* Transition: '<S490>:33' */
            /* Transition: '<S490>:35' */
            /* Call Nothing */
            VeLINR_y_EOPB_HW_VER_CallStatus = 4U;

            /* Transition: '<S490>:23' */
        }
        else
        {
            /* Transition: '<S490>:46' */
            /* Transition: '<S490>:37' */
            /* Call Poke */
            VeLINR_y_EOPB_HW_VER_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S485>/Poke' */
            /* DataTypeConversion: '<S491>/Data Type Conversion' */
            /* Event: '<S490>:38' */
            tmp = fmodf(floorf(LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_y_E),
                        256.0F);

            /* FunctionCaller: '<S491>/Function Caller' incorporates:
             *  DataTypeConversion: '<S491>/Data Type Conversion'
             */
            Rte_Call_PokePMIR_y_TransAuxPmp2_TAP_HW_VER_PokePMIR_y_TransAuxPmp2_TAP_HW_VER
                ((uint8)((tmp < 0.0F) ? ((sint32)((uint8)((sint32)(-((sint32)
                       ((sint8)((uint8)((float32)(-tmp))))))))) : ((sint32)
                   ((uint8)tmp))));

            /* End of Outputs for SubSystem: '<S485>/Poke' */
        }
    }

    /* End of Chart: '<S487>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_EOPB_SW_VER_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_EOPB_SW_VER_ErrSts'
     */
    /* Transition: '<S490>:19' */
    rtb_TmpSignalConversionAtVeL_nb =
        Rte_Read_VeLINR_y_EOPB_SW_VER_VeLINR_y_EOPB_SW_VER
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_y_a);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_EOPB_SW_VER_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S495>:1' */
    (void)Rte_Read_VeLINR_b_EOPB_SW_VER_TO_VeLINR_b_EOPB_SW_VER_TO(&tmpRead_r);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S492>/Chart' */
    if (tmpRead_r)
    {
        /* Transition: '<S495>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S495>:6' */
            /* Transition: '<S495>:25' */
            /* Call Fsft */
            VeLINR_y_EOPB_SW_VER_CallStatus = 2U;

            /* Event: '<S495>:39' */
            /* Transition: '<S495>:29' */
        }
        else
        {
            /* Transition: '<S495>:30' */
            /* Call Tmot */
            VeLINR_y_EOPB_SW_VER_CallStatus = 3U;

            /* Event: '<S495>:40' */
        }

        /* Transition: '<S495>:36' */
        /* Transition: '<S495>:23' */
    }
    else
    {
        /* Transition: '<S495>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_nb) == 133)
        {
            /* Transition: '<S495>:33' */
            /* Transition: '<S495>:35' */
            /* Call Nothing */
            VeLINR_y_EOPB_SW_VER_CallStatus = 4U;

            /* Transition: '<S495>:23' */
        }
        else
        {
            /* Transition: '<S495>:46' */
            /* Transition: '<S495>:37' */
            /* Call Poke */
            VeLINR_y_EOPB_SW_VER_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S486>/Poke' */
            /* DataTypeConversion: '<S496>/Data Type Conversion' */
            /* Event: '<S495>:38' */
            tmp = fmodf(floorf(LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_y_a),
                        256.0F);

            /* FunctionCaller: '<S496>/Function Caller' incorporates:
             *  DataTypeConversion: '<S496>/Data Type Conversion'
             */
            Rte_Call_PokePMIR_y_TransAuxPmp2_TAP_SW_VER_PokePMIR_y_TransAuxPmp2_TAP_SW_VER
                ((uint8)((tmp < 0.0F) ? ((sint32)((uint8)((sint32)(-((sint32)
                       ((sint8)((uint8)((float32)(-tmp))))))))) : ((sint32)
                   ((uint8)tmp))));

            /* End of Outputs for SubSystem: '<S486>/Poke' */
        }
    }

    /* End of Chart: '<S492>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_HTLBV_CalStat' incorporates:
     *  Inport: '<Root>/VeLINR_b_HTLBV_CalStatTO'
     */
    /* Transition: '<S495>:19' */
#if Rte_SysCon_VrntLR3B_HTLBVCalStat

    /* Outputs for Atomic SubSystem: '<S12>/HTLBV_CalStat' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_HTLBV_CalStat' incorporates:
     *  Inport: '<Root>/VeLINR_e_HTLBV_CalStat'
     */
    rtb_TmpSignalConversionAtVeL_mg =
        Rte_Read_VeLINR_e_HTLBV_CalStat_VeLINR_e_HTLBV_CalStat
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_H);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S508>:1' */
    (void)Rte_Read_VeLINR_b_HTLBV_CalStatTO_VeLINR_b_HTLBV_CalStatTO(&tmpRead_s);

    /* Outputs for Atomic SubSystem: '<S497>/HTLBV_CalStat' */
    /* Chart: '<S504>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_HTLBV_CalStatTO'
     */
    if (tmpRead_s)
    {
        /* Transition: '<S508>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S508>:6' */
            /* Transition: '<S508>:25' */
            /* Call Fsft */
            VeLINR_y_HTLBV_CalStat_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S503>/Fsft' */
            /* FunctionCaller: '<S509>/Function Caller' */
            /* Event: '<S508>:39' */
            Rte_Call_FsftTAIR_e_HTL_BypsVlv_CalSts_FsftTAIR_e_HTL_BypsVlv_CalSts
                ();

            /* End of Outputs for SubSystem: '<S503>/Fsft' */
            /* Transition: '<S508>:29' */
        }
        else
        {
            /* Transition: '<S508>:30' */
            /* Call Tmot */
            VeLINR_y_HTLBV_CalStat_CallStatus = 3U;

            /* Event: '<S508>:40' */
        }

        /* Transition: '<S508>:36' */
        /* Transition: '<S508>:23' */
    }
    else
    {
        /* Transition: '<S508>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_mg) == 133)
        {
            /* Transition: '<S508>:33' */
            /* Transition: '<S508>:35' */
            /* Call Nothing */
            VeLINR_y_HTLBV_CalStat_CallStatus = 4U;

            /* Transition: '<S508>:23' */
        }
        else
        {
            /* Transition: '<S508>:46' */
            /* Transition: '<S508>:37' */
            /* Call Poke */
            VeLINR_y_HTLBV_CalStat_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S503>/Poke' */
            /* FunctionCaller: '<S510>/Function Caller' incorporates:
             *  Constant: '<S510>/Constant'
             */
            /* Event: '<S508>:38' */
            Rte_Call_PokeTAIR_e_HTL_BypsVlv_CalSts_PokeTAIR_e_HTL_BypsVlv_CalSts
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_H, false);

            /* End of Outputs for SubSystem: '<S503>/Poke' */
        }
    }

    /* End of Chart: '<S504>/Chart' */
    /* End of Outputs for SubSystem: '<S497>/HTLBV_CalStat' */
    /* End of Outputs for SubSystem: '<S12>/HTLBV_CalStat' */
    /* Transition: '<S508>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_HTLBV_CalStat' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_HTLBV_ERR' incorporates:
     *  Inport: '<Root>/VeLINR_b_HTLBV_ERR_TO'
     */
#if Rte_SysCon_VrntLR3B_HTLBVERR

    /* Outputs for Atomic SubSystem: '<S12>/HTLBV_ERR' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_HTLBV_ERR' incorporates:
     *  Inport: '<Root>/VeLINR_e_HTLBV_ERR'
     */
    rtb_TmpSignalConversionAtVeL_kk =
        Rte_Read_VeLINR_e_HTLBV_ERR_VeLINR_e_HTLBV_ERR
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__av);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S516>:1' */
    (void)Rte_Read_VeLINR_b_HTLBV_ERR_TO_VeLINR_b_HTLBV_ERR_TO(&tmpRead_t);

    /* Outputs for Atomic SubSystem: '<S498>/HTLBV_ERR' */
    /* Chart: '<S512>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_HTLBV_ERR_TO'
     */
    if (tmpRead_t)
    {
        /* Transition: '<S516>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S516>:6' */
            /* Transition: '<S516>:25' */
            /* Call Fsft */
            VeLINR_y_HTLBV_ERR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S511>/Fsft' */
            /* FunctionCaller: '<S517>/Function Caller' */
            /* Event: '<S516>:39' */
            Rte_Call_FsftTAIR_y_HTL_BypsVlv_ErrMsgs_FsftTAIR_y_HTL_BypsVlv_ErrMsgs
                ();

            /* End of Outputs for SubSystem: '<S511>/Fsft' */
            /* Transition: '<S516>:29' */
        }
        else
        {
            /* Transition: '<S516>:30' */
            /* Call Tmot */
            VeLINR_y_HTLBV_ERR_CallStatus = 3U;

            /* Event: '<S516>:40' */
        }

        /* Transition: '<S516>:36' */
        /* Transition: '<S516>:23' */
    }
    else
    {
        /* Transition: '<S516>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_kk) == 133)
        {
            /* Transition: '<S516>:33' */
            /* Transition: '<S516>:35' */
            /* Call Nothing */
            VeLINR_y_HTLBV_ERR_CallStatus = 4U;

            /* Transition: '<S516>:23' */
        }
        else
        {
            /* Transition: '<S516>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_kk) == 1)
            {
                /* Transition: '<S516>:48' */
                /* Transition: '<S516>:53' */
                FA_out_cg = true;

                /* Transition: '<S516>:56' */
            }
            else
            {
                /* Transition: '<S516>:52' */
                FA_out_cg = false;
            }

            /* Transition: '<S516>:37' */
            /* Call Poke */
            VeLINR_y_HTLBV_ERR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S511>/Poke' */
            /* FunctionCaller: '<S518>/Function Caller' */
            /* Event: '<S516>:38' */
            Rte_Call_PokeTAIR_y_HTL_BypsVlv_ErrMsgs_PokeTAIR_y_HTL_BypsVlv_ErrMsgs
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__av, FA_out_cg);

            /* End of Outputs for SubSystem: '<S511>/Poke' */
        }
    }

    /* End of Chart: '<S512>/Chart' */
    /* End of Outputs for SubSystem: '<S498>/HTLBV_ERR' */
    /* End of Outputs for SubSystem: '<S12>/HTLBV_ERR' */
    /* Transition: '<S516>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_HTLBV_ERR' */

    /* SignalConversion generated from: '<S2>/VeLINR_U_HTLBV_MotorVolt' incorporates:
     *  Inport: '<Root>/VeLINR_b_HTLBV_MotorVoltTO'
     */
#if Rte_SysCon_VrntLR3B_HTLBVMotorVolt

    /* Outputs for Atomic SubSystem: '<S12>/HTLBV_MotorVolt' */
    /* SignalConversion generated from: '<S2>/VeLINR_U_HTLBV_MotorVolt' incorporates:
     *  Inport: '<Root>/VeLINR_U_HTLBV_MotorVolt'
     */
    rtb_TmpSignalConversionAtVeL_n5 =
        Rte_Read_VeLINR_U_HTLBV_MotorVolt_VeLINR_U_HTLBV_MotorVolt
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_U_H);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S524>:1' */
    (void)Rte_Read_VeLINR_b_HTLBV_MotorVoltTO_VeLINR_b_HTLBV_MotorVoltTO
        (&FA_out_bb);

    /* Outputs for Atomic SubSystem: '<S499>/HTLBV_MotorVolt' */
    /* Chart: '<S520>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_HTLBV_MotorVoltTO'
     */
    if (FA_out_bb)
    {
        /* Transition: '<S524>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S524>:6' */
            /* Transition: '<S524>:25' */
            /* Call Fsft */
            VeLINR_y_HTLBV_MotorVolt_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S519>/Fsft' */
            /* FunctionCaller: '<S525>/Function Caller' */
            /* Event: '<S524>:39' */
            Rte_Call_FsftTAIR_U_HTL_BypsVlv_MtrVltg_FsftTAIR_U_HTL_BypsVlv_MtrVltg
                ();

            /* End of Outputs for SubSystem: '<S519>/Fsft' */
            /* Transition: '<S524>:29' */
        }
        else
        {
            /* Transition: '<S524>:30' */
            /* Call Tmot */
            VeLINR_y_HTLBV_MotorVolt_CallStatus = 3U;

            /* Event: '<S524>:40' */
        }

        /* Transition: '<S524>:36' */
        /* Transition: '<S524>:23' */
    }
    else
    {
        /* Transition: '<S524>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_n5) == 133)
        {
            /* Transition: '<S524>:33' */
            /* Transition: '<S524>:35' */
            /* Call Nothing */
            VeLINR_y_HTLBV_MotorVolt_CallStatus = 4U;

            /* Transition: '<S524>:23' */
        }
        else
        {
            /* Transition: '<S524>:46' */
            /* Transition: '<S524>:37' */
            /* Call Poke */
            VeLINR_y_HTLBV_MotorVolt_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S519>/Poke' */
            /* FunctionCaller: '<S526>/Function Caller' incorporates:
             *  Constant: '<S526>/Constant'
             */
            /* Event: '<S524>:38' */
            Rte_Call_PokeTAIR_U_HTL_BypsVlv_MtrVltg_PokeTAIR_U_HTL_BypsVlv_MtrVltg
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_U_H, false);

            /* End of Outputs for SubSystem: '<S519>/Poke' */
        }
    }

    /* End of Chart: '<S520>/Chart' */
    /* End of Outputs for SubSystem: '<S499>/HTLBV_MotorVolt' */
    /* End of Outputs for SubSystem: '<S12>/HTLBV_MotorVolt' */
    /* Transition: '<S524>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_U_HTLBV_MotorVolt' */

    /* SignalConversion generated from: '<S2>/VeLINR_Pct_HTLBV_PosAct' incorporates:
     *  Inport: '<Root>/VeLINR_b_HTLBV_PosActTO'
     */
#if Rte_SysCon_VrntLR3B_HTLBVPosAct

    /* Outputs for Atomic SubSystem: '<S12>/HTLBV_PosAct' */
    /* SignalConversion generated from: '<S2>/VeLINR_Pct_HTLBV_PosAct' incorporates:
     *  Inport: '<Root>/VeLINR_Pct_HTLBV_PosAct'
     */
    rtb_TmpSignalConversionAtVeL_aq =
        Rte_Read_VeLINR_Pct_HTLBV_PosAct_VeLINR_Pct_HTLBV_PosAct
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_P_e);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S532>:1' */
    (void)Rte_Read_VeLINR_b_HTLBV_PosActTO_VeLINR_b_HTLBV_PosActTO(&tmpRead_u);

    /* Outputs for Atomic SubSystem: '<S500>/HTLBV_PosAct' */
    /* Chart: '<S528>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_HTLBV_PosActTO'
     */
    if (tmpRead_u)
    {
        /* Transition: '<S532>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S532>:6' */
            /* Transition: '<S532>:25' */
            /* Call Fsft */
            VeLINR_y_HTLBV_PosAct_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S527>/Fsft' */
            /* FunctionCaller: '<S533>/Function Caller' */
            /* Event: '<S532>:39' */
            Rte_Call_FsftTAIR_Pct_HTL_BypsVlv_ActlPstn_FsftTAIR_Pct_HTL_BypsVlv_ActlPstn
                ();

            /* End of Outputs for SubSystem: '<S527>/Fsft' */
            /* Transition: '<S532>:29' */
        }
        else
        {
            /* Transition: '<S532>:30' */
            /* Call Tmot */
            VeLINR_y_HTLBV_PosAct_CallStatus = 3U;

            /* Event: '<S532>:40' */
        }

        /* Transition: '<S532>:36' */
        /* Transition: '<S532>:23' */
    }
    else
    {
        /* Transition: '<S532>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_aq) == 133)
        {
            /* Transition: '<S532>:33' */
            /* Transition: '<S532>:35' */
            /* Call Nothing */
            VeLINR_y_HTLBV_PosAct_CallStatus = 4U;

            /* Transition: '<S532>:23' */
        }
        else
        {
            /* Transition: '<S532>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_aq) == 1)
            {
                /* Transition: '<S532>:48' */
                /* Transition: '<S532>:53' */
                FA_out_bb = true;

                /* Transition: '<S532>:56' */
            }
            else
            {
                /* Transition: '<S532>:52' */
                FA_out_bb = false;
            }

            /* Transition: '<S532>:37' */
            /* Call Poke */
            VeLINR_y_HTLBV_PosAct_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S527>/Poke' */
            /* FunctionCaller: '<S534>/Function Caller' */
            /* Event: '<S532>:38' */
            Rte_Call_PokeTAIR_Pct_HTL_BypsVlv_ActlPstn_PokeTAIR_Pct_HTL_BypsVlv_ActlPstn
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_P_e, FA_out_bb);

            /* End of Outputs for SubSystem: '<S527>/Poke' */
        }
    }

    /* End of Chart: '<S528>/Chart' */
    /* End of Outputs for SubSystem: '<S500>/HTLBV_PosAct' */
    /* End of Outputs for SubSystem: '<S12>/HTLBV_PosAct' */
    /* Transition: '<S532>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_Pct_HTLBV_PosAct' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_HTLBV_Sts' incorporates:
     *  Inport: '<Root>/VeLINR_b_HTLBV_StsTO'
     */
#if Rte_SysCon_VrntLR3B_HTLBVSts

    /* Outputs for Atomic SubSystem: '<S12>/HTLBV_Sts' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_HTLBV_Sts' incorporates:
     *  Inport: '<Root>/VeLINR_e_HTLBV_Sts'
     */
    rtb_TmpSignalConversionAtVeL_kt =
        Rte_Read_VeLINR_e_HTLBV_Sts_VeLINR_e_HTLBV_Sts
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__bq);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S540>:1' */
    (void)Rte_Read_VeLINR_b_HTLBV_StsTO_VeLINR_b_HTLBV_StsTO(&FA_out_d4);

    /* Outputs for Atomic SubSystem: '<S501>/HTLBV_Sts' */
    /* Chart: '<S536>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_HTLBV_StsTO'
     */
    if (FA_out_d4)
    {
        /* Transition: '<S540>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S540>:6' */
            /* Transition: '<S540>:25' */
            /* Call Fsft */
            VeLINR_y_HTLBV_Sts_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S535>/Fsft' */
            /* FunctionCaller: '<S541>/Function Caller' */
            /* Event: '<S540>:39' */
            Rte_Call_FsftTAIR_e_HTL_BypsVlv_ErrSts_FsftTAIR_e_HTL_BypsVlv_ErrSts
                ();

            /* End of Outputs for SubSystem: '<S535>/Fsft' */
            /* Transition: '<S540>:29' */
        }
        else
        {
            /* Transition: '<S540>:30' */
            /* Call Tmot */
            VeLINR_y_HTLBV_Sts_CallStatus = 3U;

            /* Event: '<S540>:40' */
        }

        /* Transition: '<S540>:36' */
        /* Transition: '<S540>:23' */
    }
    else
    {
        /* Transition: '<S540>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_kt) == 133)
        {
            /* Transition: '<S540>:33' */
            /* Transition: '<S540>:35' */
            /* Call Nothing */
            VeLINR_y_HTLBV_Sts_CallStatus = 4U;

            /* Transition: '<S540>:23' */
        }
        else
        {
            /* Transition: '<S540>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_kt) == 1)
            {
                /* Transition: '<S540>:48' */
                /* Transition: '<S540>:53' */
                FA_out_d4 = true;

                /* Transition: '<S540>:56' */
            }
            else
            {
                /* Transition: '<S540>:52' */
            }

            /* Transition: '<S540>:37' */
            /* Call Poke */
            VeLINR_y_HTLBV_Sts_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S535>/Poke' */
            /* FunctionCaller: '<S542>/Function Caller' */
            /* Event: '<S540>:38' */
            Rte_Call_PokeTAIR_e_HTL_BypsVlv_ErrSts_PokeTAIR_e_HTL_BypsVlv_ErrSts
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__bq, FA_out_d4);

            /* End of Outputs for SubSystem: '<S535>/Poke' */
        }
    }

    /* End of Chart: '<S536>/Chart' */
    /* End of Outputs for SubSystem: '<S501>/HTLBV_Sts' */
    /* End of Outputs for SubSystem: '<S12>/HTLBV_Sts' */
    /* Transition: '<S540>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_HTLBV_Sts' */

    /* SignalConversion generated from: '<S2>/VeLINR_b_RsErr_HTLBV' incorporates:
     *  Inport: '<Root>/VeLINR_b_RsErr_HTLBV_TO'
     */
#if Rte_SysCon_VrntLR3B_RsErrHTLBV

    /* Outputs for Atomic SubSystem: '<S12>/RsErr_HTLBV' */
    /* SignalConversion generated from: '<S2>/VeLINR_b_RsErr_HTLBV' incorporates:
     *  Inport: '<Root>/VeLINR_b_RsErr_HTLBV'
     */
    rtb_TmpSignalConversionAtVe_f5c =
        Rte_Read_VeLINR_b_RsErr_HTLBV_VeLINR_b_RsErr_HTLBV
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__jz);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S547>:1' */
    (void)Rte_Read_VeLINR_b_RsErr_HTLBV_TO_VeLINR_b_RsErr_HTLBV_TO(&FA_out_jz);

    /* Outputs for Atomic SubSystem: '<S502>/RsErr_HTLBV' */
    /* Chart: '<S544>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_RsErr_HTLBV_TO'
     */
    if (FA_out_jz)
    {
        /* Transition: '<S547>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S547>:6' */
            /* Transition: '<S547>:25' */
            /* Call Fsft */
            VeLINR_y_RsErr_HTLBV_CallStatus = 2U;

            /* Event: '<S547>:39' */
            /* Transition: '<S547>:29' */
        }
        else
        {
            /* Transition: '<S547>:30' */
            /* Call Tmot */
            VeLINR_y_RsErr_HTLBV_CallStatus = 3U;

            /* Event: '<S547>:40' */
        }

        /* Transition: '<S547>:36' */
        /* Transition: '<S547>:23' */
    }
    else
    {
        /* Transition: '<S547>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVe_f5c) == 133)
        {
            /* Transition: '<S547>:33' */
            /* Transition: '<S547>:35' */
            /* Call Nothing */
            VeLINR_y_RsErr_HTLBV_CallStatus = 4U;

            /* Transition: '<S547>:23' */
        }
        else
        {
            /* Transition: '<S547>:46' */
            /* Transition: '<S547>:37' */
            /* Call Poke */
            VeLINR_y_RsErr_HTLBV_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S543>/Poke' */
            /* FunctionCaller: '<S548>/Function Caller' */
            /* Event: '<S547>:38' */
            Rte_Call_PokeTAIR_b_HTL_BypsVlv_RsErr_PokeTAIR_b_HTL_BypsVlv_RsErr
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__jz);

            /* End of Outputs for SubSystem: '<S543>/Poke' */
        }
    }

    /* End of Chart: '<S544>/Chart' */
    /* End of Outputs for SubSystem: '<S502>/RsErr_HTLBV' */
    /* End of Outputs for SubSystem: '<S12>/RsErr_HTLBV' */
    /* Transition: '<S547>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_b_RsErr_HTLBV' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_Below_60V_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_Below_60V_ErrSts'
     */
    rtb_TmpSignalConversionAtVeL_lh =
        Rte_Read_VeLINR_e_Below_60V_VeLINR_e_Below_60V
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_B);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_Below_60V_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S563>:1' */
    (void)Rte_Read_VeLINR_b_Below_60V_TO_VeLINR_b_Below_60V_TO(&tmpRead_v);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S559>/Chart' */
    if (tmpRead_v)
    {
        /* Transition: '<S563>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S563>:6' */
            /* Transition: '<S563>:25' */
            /* Call Fsft */
            VeLINR_y_Below_60V_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S549>/Fsft' */
            /* FunctionCaller: '<S564>/Function Caller' */
            /* Event: '<S563>:39' */
            Rte_Call_FsftHTIR_e_HVC_HtrHighVol_Dwn_FsftHTIR_e_HVC_HtrHighVol_Dwn
                ();

            /* End of Outputs for SubSystem: '<S549>/Fsft' */
            /* Transition: '<S563>:29' */
        }
        else
        {
            /* Transition: '<S563>:30' */
            /* Call Tmot */
            VeLINR_y_Below_60V_CallStatus = 3U;

            /* Event: '<S563>:40' */
        }

        /* Transition: '<S563>:36' */
        /* Transition: '<S563>:23' */
    }
    else
    {
        /* Transition: '<S563>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_lh) == 133)
        {
            /* Transition: '<S563>:33' */
            /* Transition: '<S563>:35' */
            /* Call Nothing */
            VeLINR_y_Below_60V_CallStatus = 4U;

            /* Transition: '<S563>:23' */
        }
        else
        {
            /* Transition: '<S563>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_lh) == 1)
            {
                /* Transition: '<S563>:48' */
                /* Transition: '<S563>:53' */
                FA_out_jz = true;

                /* Transition: '<S563>:56' */
            }
            else
            {
                /* Transition: '<S563>:52' */
                FA_out_jz = false;
            }

            /* Transition: '<S563>:37' */
            /* Call Poke */
            VeLINR_y_Below_60V_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S549>/Poke' */
            /* FunctionCaller: '<S565>/Function Caller' */
            /* Event: '<S563>:38' */
            Rte_Call_PokeHTIR_e_HVC_HtrHighVol_Dwn_PokeHTIR_e_HVC_HtrHighVol_Dwn
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_B, FA_out_jz);

            /* End of Outputs for SubSystem: '<S549>/Poke' */
        }
    }

    /* End of Chart: '<S559>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_ECH_InterlockStat_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_ECH_InterlockStat_ErrSts'
     */
    /* Transition: '<S563>:19' */
    rtb_TmpSignalConversionAtVeL_pm =
        Rte_Read_VeLINR_e_ECH_InterlockStat_VeLINR_e_ECH_InterlockStat
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__lx);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_ECH_InterlockStatTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S570>:1' */
    (void)Rte_Read_VeLINR_b_ECH_InterlockStatTO_VeLINR_b_ECH_InterlockStatTO
        (&FA_out_bg);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S566>/Chart' */
    if (FA_out_bg)
    {
        /* Transition: '<S570>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S570>:6' */
            /* Transition: '<S570>:25' */
            /* Call Fsft */
            VeLINR_y_ECH_InterlockStat_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S550>/Fsft' */
            /* FunctionCaller: '<S571>/Function Caller' */
            /* Event: '<S570>:39' */
            Rte_Call_FsftHTIR_e_HVC_Htr_InterlockStat_FsftHTIR_e_HVC_Htr_InterlockStat
                ();

            /* End of Outputs for SubSystem: '<S550>/Fsft' */
            /* Transition: '<S570>:29' */
        }
        else
        {
            /* Transition: '<S570>:30' */
            /* Call Tmot */
            VeLINR_y_ECH_InterlockStat_CallStatus = 3U;

            /* Event: '<S570>:40' */
        }

        /* Transition: '<S570>:36' */
        /* Transition: '<S570>:23' */
    }
    else
    {
        /* Transition: '<S570>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_pm) == 133)
        {
            /* Transition: '<S570>:33' */
            /* Transition: '<S570>:35' */
            /* Call Nothing */
            VeLINR_y_ECH_InterlockStat_CallStatus = 4U;

            /* Transition: '<S570>:23' */
        }
        else
        {
            /* Transition: '<S570>:46' */
            /* Transition: '<S570>:37' */
            /* Call Poke */
            VeLINR_y_ECH_InterlockStat_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S550>/Poke' */
            /* FunctionCaller: '<S572>/Function Caller' */
            /* Event: '<S570>:38' */
            Rte_Call_PokeHTIR_e_HVC_Htr_InterlockStat_PokeHTIR_e_HVC_Htr_InterlockStat
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__lx);

            /* End of Outputs for SubSystem: '<S550>/Poke' */
        }
    }

    /* End of Chart: '<S566>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_HVH_UnlockCounter_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_HVH_UnlockCounter_ErrSts'
     */
    /* Transition: '<S570>:19' */
    rtb_TmpSignalConversionAtVeL_l2 =
        Rte_Read_VeLINR_e_HVH_UnlockCounter_VeLINR_e_HVH_UnlockCounter
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_lm2);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_HVH_UnlockCounterTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S577>:1' */
    (void)Rte_Read_VeLINR_b_HVH_UnlockCounterTO_VeLINR_b_HVH_UnlockCounterTO
        (&tmpRead_w);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S573>/Chart' */
    if (tmpRead_w)
    {
        /* Transition: '<S577>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S577>:6' */
            /* Transition: '<S577>:25' */
            /* Call Fsft */
            VeLINR_y_HVH_UnlockCounter_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S551>/Fsft' */
            /* FunctionCaller: '<S578>/Function Caller' */
            /* Event: '<S577>:39' */
            Rte_Call_FsftHTIR_Cnt_HVC_HtrUnlckCntr_FsftHTIR_Cnt_HVC_HtrUnlckCntr
                ();

            /* End of Outputs for SubSystem: '<S551>/Fsft' */
            /* Transition: '<S577>:29' */
        }
        else
        {
            /* Transition: '<S577>:30' */
            /* Call Tmot */
            VeLINR_y_HVH_UnlockCounter_CallStatus = 3U;

            /* Event: '<S577>:40' */
        }

        /* Transition: '<S577>:36' */
        /* Transition: '<S577>:23' */
    }
    else
    {
        /* Transition: '<S577>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_l2) == 133)
        {
            /* Transition: '<S577>:33' */
            /* Transition: '<S577>:35' */
            /* Call Nothing */
            VeLINR_y_HVH_UnlockCounter_CallStatus = 4U;

            /* Transition: '<S577>:23' */
        }
        else
        {
            /* Transition: '<S577>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_l2) == 1)
            {
                /* Transition: '<S577>:48' */
                /* Transition: '<S577>:53' */
                FA_out_bg = true;

                /* Transition: '<S577>:56' */
            }
            else
            {
                /* Transition: '<S577>:52' */
                FA_out_bg = false;
            }

            /* Transition: '<S577>:37' */
            /* Call Poke */
            VeLINR_y_HVH_UnlockCounter_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S551>/Poke' */
            /* FunctionCaller: '<S579>/Function Caller' */
            /* Event: '<S577>:38' */
            Rte_Call_PokeHTIR_Cnt_HVC_HtrUnlckCntr_PokeHTIR_Cnt_HVC_HtrUnlckCntr
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_lm2, FA_out_bg);

            /* End of Outputs for SubSystem: '<S551>/Poke' */
        }
    }

    /* End of Chart: '<S573>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_HvCooltHVmeas_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_HvCooltHVmeas_ErrSts'
     */
    /* Transition: '<S577>:19' */
    rtb_TmpSignalConversionAtVeL_hc =
        Rte_Read_VeLINR_U_HvCooltHVmeas_VeLINR_U_HvCooltHVmeas
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_U_f);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_HvCooltHVmeasTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S584>:1' */
    (void)Rte_Read_VeLINR_b_HvCooltHVmeasTO_VeLINR_b_HvCooltHVmeasTO(&FA_out_cm);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S580>/Chart' */
    if (FA_out_cm)
    {
        /* Transition: '<S584>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S584>:6' */
            /* Transition: '<S584>:25' */
            /* Call Fsft */
            VeLINR_y_HvCooltHVmeas_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S552>/Fsft' */
            /* FunctionCaller: '<S585>/Function Caller' */
            /* Event: '<S584>:39' */
            Rte_Call_FsftHTIR_U_HVC_Htr_HV_VltgAct_FsftHTIR_U_HVC_Htr_HV_VltgAct
                ();

            /* End of Outputs for SubSystem: '<S552>/Fsft' */
            /* Transition: '<S584>:29' */
        }
        else
        {
            /* Transition: '<S584>:30' */
            /* Call Tmot */
            VeLINR_y_HvCooltHVmeas_CallStatus = 3U;

            /* Event: '<S584>:40' */
        }

        /* Transition: '<S584>:36' */
        /* Transition: '<S584>:23' */
    }
    else
    {
        /* Transition: '<S584>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_hc) == 133)
        {
            /* Transition: '<S584>:33' */
            /* Transition: '<S584>:35' */
            /* Call Nothing */
            VeLINR_y_HvCooltHVmeas_CallStatus = 4U;

            /* Transition: '<S584>:23' */
        }
        else
        {
            /* Transition: '<S584>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_hc) == 1)
            {
                /* Transition: '<S584>:48' */
                /* Transition: '<S584>:53' */
                FA_out_cm = true;

                /* Transition: '<S584>:56' */
            }
            else
            {
                /* Transition: '<S584>:52' */
            }

            /* Transition: '<S584>:37' */
            /* Call Poke */
            VeLINR_y_HvCooltHVmeas_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S552>/Poke' */
            /* FunctionCaller: '<S586>/Function Caller' */
            /* Event: '<S584>:38' */
            Rte_Call_PokeHTIR_U_HVC_Htr_HV_VltgAct_PokeHTIR_U_HVC_Htr_HV_VltgAct
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_U_f, FA_out_cm);

            /* End of Outputs for SubSystem: '<S552>/Poke' */
        }
    }

    /* End of Chart: '<S580>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_HvCooltHeatrICns_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_HvCooltHeatrICns_ErrSts'
     */
    /* Transition: '<S584>:19' */
    rtb_TmpSignalConversionAtVeL_b0 =
        Rte_Read_VeLINR_I_HvCooltHeatrICns_VeLINR_I_HvCooltHeatrICns
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_I_H);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_HvCooltHeatrICnsTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S591>:1' */
    (void)Rte_Read_VeLINR_b_HvCooltHeatrICnsTO_VeLINR_b_HvCooltHeatrICnsTO
        (&FA_out_a2);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S587>/Chart' */
    if (FA_out_a2)
    {
        /* Transition: '<S591>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S591>:6' */
            /* Transition: '<S591>:25' */
            /* Call Fsft */
            VeLINR_y_HvCooltHeatrICns_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S553>/Fsft' */
            /* FunctionCaller: '<S592>/Function Caller' */
            /* Event: '<S591>:39' */
            Rte_Call_FsftHTIR_I_HVC_Htr_HV_CrntAct_FsftHTIR_I_HVC_Htr_HV_CrntAct
                ();

            /* End of Outputs for SubSystem: '<S553>/Fsft' */
            /* Transition: '<S591>:29' */
        }
        else
        {
            /* Transition: '<S591>:30' */
            /* Call Tmot */
            VeLINR_y_HvCooltHeatrICns_CallStatus = 3U;

            /* Event: '<S591>:40' */
        }

        /* Transition: '<S591>:36' */
        /* Transition: '<S591>:23' */
    }
    else
    {
        /* Transition: '<S591>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_b0) == 133)
        {
            /* Transition: '<S591>:33' */
            /* Transition: '<S591>:35' */
            /* Call Nothing */
            VeLINR_y_HvCooltHeatrICns_CallStatus = 4U;

            /* Transition: '<S591>:23' */
        }
        else
        {
            /* Transition: '<S591>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_b0) == 1)
            {
                /* Transition: '<S591>:48' */
                /* Transition: '<S591>:53' */
                FA_out_a2 = true;

                /* Transition: '<S591>:56' */
            }
            else
            {
                /* Transition: '<S591>:52' */
            }

            /* Transition: '<S591>:37' */
            /* Call Poke */
            VeLINR_y_HvCooltHeatrICns_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S553>/Poke' */
            /* FunctionCaller: '<S593>/Function Caller' */
            /* Event: '<S591>:38' */
            Rte_Call_PokeHTIR_I_HVC_Htr_HV_CrntAct_PokeHTIR_I_HVC_Htr_HV_CrntAct
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_I_H, FA_out_a2);

            /* End of Outputs for SubSystem: '<S553>/Poke' */
        }
    }

    /* End of Chart: '<S587>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_HvCooltHeatrSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_HvCooltHeatrSts_ErrSts'
     */
    /* Transition: '<S591>:19' */
    rtb_TmpSignalConversionAtVeL_ih =
        Rte_Read_VeLINR_e_HvCooltHeatrSts_VeLINR_e_HvCooltHeatrSts
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_ava);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_HvCooltHeatrStsTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S597>:1' */
    (void)Rte_Read_VeLINR_b_HvCooltHeatrStsTO_VeLINR_b_HvCooltHeatrStsTO
        (&FA_out_ec);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S594>/Chart' */
    if (FA_out_ec)
    {
        /* Transition: '<S597>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S597>:6' */
            /* Transition: '<S597>:25' */
            /* Call Fsft */
            VeLINR_y_HvCooltHeatrSts_CallStatus = 2U;

            /* Event: '<S597>:39' */
            /* Transition: '<S597>:29' */
        }
        else
        {
            /* Transition: '<S597>:30' */
            /* Call Tmot */
            VeLINR_y_HvCooltHeatrSts_CallStatus = 3U;

            /* Event: '<S597>:40' */
        }

        /* Transition: '<S597>:36' */
        /* Transition: '<S597>:23' */
    }
    else
    {
        /* Transition: '<S597>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_ih) == 133)
        {
            /* Transition: '<S597>:33' */
            /* Transition: '<S597>:35' */
            /* Call Nothing */
            VeLINR_y_HvCooltHeatrSts_CallStatus = 4U;

            /* Transition: '<S597>:23' */
        }
        else
        {
            /* Transition: '<S597>:46' */
            /* Transition: '<S597>:37' */
            /* Call Poke */
            VeLINR_y_HvCooltHeatrSts_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S554>/Poke' */
            /* FunctionCaller: '<S598>/Function Caller' */
            /* Event: '<S597>:38' */
            Rte_Call_PokeHTIR_e_HVC_HtrSts_PokeHTIR_e_HVC_HtrSts
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_ava);

            /* End of Outputs for SubSystem: '<S554>/Poke' */
        }
    }

    /* End of Chart: '<S594>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_HvCltWtrHtrWtrTInIntk_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_HvCltWtrHtrWtrTInIntk_ErrSts'
     */
    /* Transition: '<S597>:19' */
    rtb_TmpSignalConversionAtVeL_b1 =
        Rte_Read_VeLINR_T_HvCltWtrHtrWtrTInIntk_VeLINR_T_HvCltWtrHtrWtrTInIntk
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_T_H);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_HvCltWtrHtrWtrTInIntkTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S603>:1' */
    (void)
        Rte_Read_VeLINR_b_HvCltWtrHtrWtrTInIntkTO_VeLINR_b_HvCltWtrHtrWtrTInIntkTO
        (&tmpRead_x);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S599>/Chart' */
    if (tmpRead_x)
    {
        /* Transition: '<S603>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S603>:6' */
            /* Transition: '<S603>:25' */
            /* Call Fsft */
            VeLINR_y_HvCltWtrHtrWtrTInIntk_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S555>/Fsft' */
            /* FunctionCaller: '<S604>/Function Caller' */
            /* Event: '<S603>:39' */
            Rte_Call_FsftHTIR_T_HVC_HtrClntIn_Temp_FsftHTIR_T_HVC_HtrClntIn_Temp
                ();

            /* End of Outputs for SubSystem: '<S555>/Fsft' */
            /* Transition: '<S603>:29' */
        }
        else
        {
            /* Transition: '<S603>:30' */
            /* Call Tmot */
            VeLINR_y_HvCltWtrHtrWtrTInIntk_CallStatus = 3U;

            /* Event: '<S603>:40' */
        }

        /* Transition: '<S603>:36' */
        /* Transition: '<S603>:23' */
    }
    else
    {
        /* Transition: '<S603>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_b1) == 133)
        {
            /* Transition: '<S603>:33' */
            /* Transition: '<S603>:35' */
            /* Call Nothing */
            VeLINR_y_HvCltWtrHtrWtrTInIntk_CallStatus = 4U;

            /* Transition: '<S603>:23' */
        }
        else
        {
            /* Transition: '<S603>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_b1) == 1)
            {
                /* Transition: '<S603>:48' */
                /* Transition: '<S603>:53' */
                FA_out_ec = true;

                /* Transition: '<S603>:56' */
            }
            else
            {
                /* Transition: '<S603>:52' */
                FA_out_ec = false;
            }

            /* Transition: '<S603>:37' */
            /* Call Poke */
            VeLINR_y_HvCltWtrHtrWtrTInIntk_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S555>/Poke' */
            /* FunctionCaller: '<S605>/Function Caller' */
            /* Event: '<S603>:38' */
            Rte_Call_PokeHTIR_T_HVC_HtrClntIn_Temp_PokeHTIR_T_HVC_HtrClntIn_Temp
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_T_H, FA_out_ec);

            /* End of Outputs for SubSystem: '<S555>/Poke' */
        }
    }

    /* End of Chart: '<S599>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_HvHeatrPwrCns_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_HvHeatrPwrCns_ErrSts'
     */
    /* Transition: '<S603>:19' */
    rtb_TmpSignalConversionAtVeL_lb =
        Rte_Read_VeLINR_P_HvHeatrPwrCns_VeLINR_P_HvHeatrPwrCns
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_P_H);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_HvHeatrPwrCnsTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S610>:1' */
    (void)Rte_Read_VeLINR_b_HvHeatrPwrCnsTO_VeLINR_b_HvHeatrPwrCnsTO(&FA_out_cy);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S606>/Chart' */
    if (FA_out_cy)
    {
        /* Transition: '<S610>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S610>:6' */
            /* Transition: '<S610>:25' */
            /* Call Fsft */
            VeLINR_y_HvHeatrPwrCns_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S556>/Fsft' */
            /* FunctionCaller: '<S611>/Function Caller' */
            /* Event: '<S610>:39' */
            Rte_Call_FsftHTIR_P_HVC_HtrPwrAct_FsftHTIR_P_HVC_HtrPwrAct();

            /* End of Outputs for SubSystem: '<S556>/Fsft' */
            /* Transition: '<S610>:29' */
        }
        else
        {
            /* Transition: '<S610>:30' */
            /* Call Tmot */
            VeLINR_y_HvHeatrPwrCns_CallStatus = 3U;

            /* Event: '<S610>:40' */
        }

        /* Transition: '<S610>:36' */
        /* Transition: '<S610>:23' */
    }
    else
    {
        /* Transition: '<S610>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_lb) == 133)
        {
            /* Transition: '<S610>:33' */
            /* Transition: '<S610>:35' */
            /* Call Nothing */
            VeLINR_y_HvHeatrPwrCns_CallStatus = 4U;

            /* Transition: '<S610>:23' */
        }
        else
        {
            /* Transition: '<S610>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_lb) == 1)
            {
                /* Transition: '<S610>:48' */
                /* Transition: '<S610>:53' */
                FA_out_cy = true;

                /* Transition: '<S610>:56' */
            }
            else
            {
                /* Transition: '<S610>:52' */
            }

            /* Transition: '<S610>:37' */
            /* Call Poke */
            VeLINR_y_HvHeatrPwrCns_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S556>/Poke' */
            /* FunctionCaller: '<S612>/Function Caller' */
            /* Event: '<S610>:38' */
            Rte_Call_PokeHTIR_P_HVC_HtrPwrAct_PokeHTIR_P_HVC_HtrPwrAct
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_P_H, FA_out_cy);

            /* End of Outputs for SubSystem: '<S556>/Poke' */
        }
    }

    /* End of Chart: '<S606>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_HvHeatrPwrCnsDes_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_HvHeatrPwrCnsDes_ErrSts'
     */
    /* Transition: '<S610>:19' */
    rtb_TmpSignalConversionAtVeL_co =
        Rte_Read_VeLINR_P_HvHeatrPwrCnsDes_VeLINR_P_HvHeatrPwrCnsDes
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_P_i);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_HvHeatrPwrCnsDesTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S617>:1' */
    (void)Rte_Read_VeLINR_b_HvHeatrPwrCnsDesTO_VeLINR_b_HvHeatrPwrCnsDesTO
        (&FA_out_ioe);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S613>/Chart' */
    if (FA_out_ioe)
    {
        /* Transition: '<S617>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S617>:6' */
            /* Transition: '<S617>:25' */
            /* Call Fsft */
            VeLINR_y_HvHeatrPwrCnsDes_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S557>/Fsft' */
            /* FunctionCaller: '<S618>/Function Caller' */
            /* Event: '<S617>:39' */
            Rte_Call_FsftHTIR_P_HVC_HtrPwrExpectd_FsftHTIR_P_HVC_HtrPwrExpectd();

            /* End of Outputs for SubSystem: '<S557>/Fsft' */
            /* Transition: '<S617>:29' */
        }
        else
        {
            /* Transition: '<S617>:30' */
            /* Call Tmot */
            VeLINR_y_HvHeatrPwrCnsDes_CallStatus = 3U;

            /* Event: '<S617>:40' */
        }

        /* Transition: '<S617>:36' */
        /* Transition: '<S617>:23' */
    }
    else
    {
        /* Transition: '<S617>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_co) == 133)
        {
            /* Transition: '<S617>:33' */
            /* Transition: '<S617>:35' */
            /* Call Nothing */
            VeLINR_y_HvHeatrPwrCnsDes_CallStatus = 4U;

            /* Transition: '<S617>:23' */
        }
        else
        {
            /* Transition: '<S617>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_co) == 1)
            {
                /* Transition: '<S617>:48' */
                /* Transition: '<S617>:53' */
                FA_out_ioe = true;

                /* Transition: '<S617>:56' */
            }
            else
            {
                /* Transition: '<S617>:52' */
            }

            /* Transition: '<S617>:37' */
            /* Call Poke */
            VeLINR_y_HvHeatrPwrCnsDes_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S557>/Poke' */
            /* FunctionCaller: '<S619>/Function Caller' */
            /* Event: '<S617>:38' */
            Rte_Call_PokeHTIR_P_HVC_HtrPwrExpectd_PokeHTIR_P_HVC_HtrPwrExpectd
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_P_i, FA_out_ioe);

            /* End of Outputs for SubSystem: '<S557>/Poke' */
        }
    }

    /* End of Chart: '<S613>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_HvWtrHeatrWtrT_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_HvWtrHeatrWtrT_ErrSts'
     */
    /* Transition: '<S617>:19' */
    rtb_TmpSignalConversionAtVeL_me =
        Rte_Read_VeLINR_T_HvWtrHeatrWtrT_VeLINR_T_HvWtrHeatrWtrT
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_T_k);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_HvWtrHeatrWtrT_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S624>:1' */
    (void)Rte_Read_VeLINR_b_HvWtrHeatrWtrT_TO_VeLINR_b_HvWtrHeatrWtrT_TO
        (&FA_out_hu);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S620>/Chart' */
    if (FA_out_hu)
    {
        /* Transition: '<S624>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S624>:6' */
            /* Transition: '<S624>:25' */
            /* Call Fsft */
            VeLINR_y_HvWtrHeatrWtrT_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S558>/Fsft' */
            /* FunctionCaller: '<S625>/Function Caller' */
            /* Event: '<S624>:39' */
            Rte_Call_FsftHTIR_T_HVC_HtrClntOut_Temp_FsftHTIR_T_HVC_HtrClntOut_Temp
                ();

            /* End of Outputs for SubSystem: '<S558>/Fsft' */
            /* Transition: '<S624>:29' */
        }
        else
        {
            /* Transition: '<S624>:30' */
            /* Call Tmot */
            VeLINR_y_HvWtrHeatrWtrT_CallStatus = 3U;

            /* Event: '<S624>:40' */
        }

        /* Transition: '<S624>:36' */
        /* Transition: '<S624>:23' */
    }
    else
    {
        /* Transition: '<S624>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_me) == 133)
        {
            /* Transition: '<S624>:33' */
            /* Transition: '<S624>:35' */
            /* Call Nothing */
            VeLINR_y_HvWtrHeatrWtrT_CallStatus = 4U;

            /* Transition: '<S624>:23' */
        }
        else
        {
            /* Transition: '<S624>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_me) == 1)
            {
                /* Transition: '<S624>:48' */
                /* Transition: '<S624>:53' */
                FA_out_hu = true;

                /* Transition: '<S624>:56' */
            }
            else
            {
                /* Transition: '<S624>:52' */
            }

            /* Transition: '<S624>:37' */
            /* Call Poke */
            VeLINR_y_HvWtrHeatrWtrT_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S558>/Poke' */
            /* FunctionCaller: '<S626>/Function Caller' */
            /* Event: '<S624>:38' */
            Rte_Call_PokeHTIR_T_HVC_HtrClntOut_Temp_PokeHTIR_T_HVC_HtrClntOut_Temp
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_T_k, FA_out_hu);

            /* End of Outputs for SubSystem: '<S558>/Poke' */
        }
    }

    /* End of Chart: '<S620>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_HvCltHrPrtnSfTmpHwPrtn_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_HvCltHrPrtnSfTmpHwPrtn_ErrSts'
     */
    /* Transition: '<S624>:19' */
    rtb_TmpSignalConversionAtVeL_pg =
        Rte_Read_VeLINR_e_HvCltHrPrtnSfTmpHwPrtn_VeLINR_e_HvCltHrPrtnSfTmpHwPrtn
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__fu);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_HvCltHrPrtnSfTmpHwPrtnTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S645>:1' */
    (void)
        Rte_Read_VeLINR_b_HvCltHrPrtnSfTmpHwPrtnTO_VeLINR_b_HvCltHrPrtnSfTmpHwPrtnTO
        (&FA_out_gw);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S641>/Chart' */
    if (FA_out_gw)
    {
        /* Transition: '<S645>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S645>:6' */
            /* Transition: '<S645>:25' */
            /* Call Fsft */
            VeLINR_y_HvCltHrPrtnSfTmpHwPrtn_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S627>/Fsft' */
            /* FunctionCaller: '<S646>/Function Caller' */
            /* Event: '<S645>:39' */
            Rte_Call_FsftHTIR_e_HVC_HtrSelfProtect_Actv_FsftHTIR_e_HVC_HtrSelfProtect_Actv
                ();

            /* End of Outputs for SubSystem: '<S627>/Fsft' */
            /* Transition: '<S645>:29' */
        }
        else
        {
            /* Transition: '<S645>:30' */
            /* Call Tmot */
            VeLINR_y_HvCltHrPrtnSfTmpHwPrtn_CallStatus = 3U;

            /* Event: '<S645>:40' */
        }

        /* Transition: '<S645>:36' */
        /* Transition: '<S645>:23' */
    }
    else
    {
        /* Transition: '<S645>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_pg) == 133)
        {
            /* Transition: '<S645>:33' */
            /* Transition: '<S645>:35' */
            /* Call Nothing */
            VeLINR_y_HvCltHrPrtnSfTmpHwPrtn_CallStatus = 4U;

            /* Transition: '<S645>:23' */
        }
        else
        {
            /* Transition: '<S645>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_pg) == 1)
            {
                /* Transition: '<S645>:48' */
                /* Transition: '<S645>:53' */
                FA_out_gw = true;

                /* Transition: '<S645>:56' */
            }
            else
            {
                /* Transition: '<S645>:52' */
            }

            /* Transition: '<S645>:37' */
            /* Call Poke */
            VeLINR_y_HvCltHrPrtnSfTmpHwPrtn_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S627>/Poke' */
            /* FunctionCaller: '<S647>/Function Caller' */
            /* Event: '<S645>:38' */
            Rte_Call_PokeHTIR_e_HVC_HtrSelfProtect_Actv_PokeHTIR_e_HVC_HtrSelfProtect_Actv
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__fu, FA_out_gw);

            /* End of Outputs for SubSystem: '<S627>/Poke' */
        }
    }

    /* End of Chart: '<S641>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_HvCltHrPrtnSfTmpOvrhtg_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_HvCltHrPrtnSfTmpOvrhtg_ErrSts'
     */
    /* Transition: '<S645>:19' */
    rtb_TmpSignalConversionAtVeL_ff =
        Rte_Read_VeLINR_e_HvCltHrPrtnSfTmpOvrhtg_VeLINR_e_HvCltHrPrtnSfTmpOvrhtg
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__lr);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_HvCltHrPrtnSfTmpOvrhtgTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S652>:1' */
    (void)
        Rte_Read_VeLINR_b_HvCltHrPrtnSfTmpOvrhtgTO_VeLINR_b_HvCltHrPrtnSfTmpOvrhtgTO
        (&FA_out_ge);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S648>/Chart' */
    if (FA_out_ge)
    {
        /* Transition: '<S652>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S652>:6' */
            /* Transition: '<S652>:25' */
            /* Call Fsft */
            VeLINR_y_HvCltHrPrtnSfTmpOvrhtg_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S628>/Fsft' */
            /* FunctionCaller: '<S653>/Function Caller' */
            /* Event: '<S652>:39' */
            Rte_Call_FsftHTIR_e_HVC_HtrResis_PCB_OvrTemp_FsftHTIR_e_HVC_HtrResis_PCB_OvrTemp
                ();

            /* End of Outputs for SubSystem: '<S628>/Fsft' */
            /* Transition: '<S652>:29' */
        }
        else
        {
            /* Transition: '<S652>:30' */
            /* Call Tmot */
            VeLINR_y_HvCltHrPrtnSfTmpOvrhtg_CallStatus = 3U;

            /* Event: '<S652>:40' */
        }

        /* Transition: '<S652>:36' */
        /* Transition: '<S652>:23' */
    }
    else
    {
        /* Transition: '<S652>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_ff) == 133)
        {
            /* Transition: '<S652>:33' */
            /* Transition: '<S652>:35' */
            /* Call Nothing */
            VeLINR_y_HvCltHrPrtnSfTmpOvrhtg_CallStatus = 4U;

            /* Transition: '<S652>:23' */
        }
        else
        {
            /* Transition: '<S652>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_ff) == 1)
            {
                /* Transition: '<S652>:48' */
                /* Transition: '<S652>:53' */
                FA_out_ge = true;

                /* Transition: '<S652>:56' */
            }
            else
            {
                /* Transition: '<S652>:52' */
            }

            /* Transition: '<S652>:37' */
            /* Call Poke */
            VeLINR_y_HvCltHrPrtnSfTmpOvrhtg_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S628>/Poke' */
            /* FunctionCaller: '<S654>/Function Caller' */
            /* Event: '<S652>:38' */
            Rte_Call_PokeHTIR_e_HVC_HtrResis_PCB_OvrTemp_PokeHTIR_e_HVC_HtrResis_PCB_OvrTemp
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__lr, FA_out_ge);

            /* End of Outputs for SubSystem: '<S628>/Poke' */
        }
    }

    /* End of Chart: '<S648>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_HClHrSrFtClTInSnFlt_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_HClHrSrFtClTInSnFlt_ErrSts'
     */
    /* Transition: '<S652>:19' */
    rtb_TmpSignalConversionAtVe_cri =
        Rte_Read_VeLINR_e_HClHrSrFtClTInSnFlt_VeLINR_e_HClHrSrFtClTInSnFlt
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__j1);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_HClHrSrFtClTInSnFltTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S659>:1' */
    (void)Rte_Read_VeLINR_b_HClHrSrFtClTInSnFltTO_VeLINR_b_HClHrSrFtClTInSnFltTO
        (&FA_out_go);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S655>/Chart' */
    if (FA_out_go)
    {
        /* Transition: '<S659>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S659>:6' */
            /* Transition: '<S659>:25' */
            /* Call Fsft */
            VeLINR_y_HClHrSrFtClTInSnFlt_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S629>/Fsft' */
            /* FunctionCaller: '<S660>/Function Caller' */
            /* Event: '<S659>:39' */
            Rte_Call_FsftHTIR_e_HVC_HtrClntIn_TempSensFlt_FsftHTIR_e_HVC_HtrClntIn_TempSensFlt
                ();

            /* End of Outputs for SubSystem: '<S629>/Fsft' */
            /* Transition: '<S659>:29' */
        }
        else
        {
            /* Transition: '<S659>:30' */
            /* Call Tmot */
            VeLINR_y_HClHrSrFtClTInSnFlt_CallStatus = 3U;

            /* Event: '<S659>:40' */
        }

        /* Transition: '<S659>:36' */
        /* Transition: '<S659>:23' */
    }
    else
    {
        /* Transition: '<S659>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVe_cri) == 133)
        {
            /* Transition: '<S659>:33' */
            /* Transition: '<S659>:35' */
            /* Call Nothing */
            VeLINR_y_HClHrSrFtClTInSnFlt_CallStatus = 4U;

            /* Transition: '<S659>:23' */
        }
        else
        {
            /* Transition: '<S659>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVe_cri) == 1)
            {
                /* Transition: '<S659>:48' */
                /* Transition: '<S659>:53' */
                FA_out_go = true;

                /* Transition: '<S659>:56' */
            }
            else
            {
                /* Transition: '<S659>:52' */
            }

            /* Transition: '<S659>:37' */
            /* Call Poke */
            VeLINR_y_HClHrSrFtClTInSnFlt_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S629>/Poke' */
            /* FunctionCaller: '<S661>/Function Caller' */
            /* Event: '<S659>:38' */
            Rte_Call_PokeHTIR_e_HVC_HtrClntIn_TempSensFlt_PokeHTIR_e_HVC_HtrClntIn_TempSensFlt
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__j1, FA_out_go);

            /* End of Outputs for SubSystem: '<S629>/Poke' */
        }
    }

    /* End of Chart: '<S655>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_HClHrSrFtClTOtSnFlt_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_HClHrSrFtClTOtSnFlt_ErrSts'
     */
    /* Transition: '<S659>:19' */
    rtb_TmpSignalConversionAtVeL_eb =
        Rte_Read_VeLINR_e_HClHrSrFtClTOtSnFlt_VeLINR_e_HClHrSrFtClTOtSnFlt
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__ch);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_HClHrSrFtClTOtSnFltTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S666>:1' */
    (void)Rte_Read_VeLINR_b_HClHrSrFtClTOtSnFltTO_VeLINR_b_HClHrSrFtClTOtSnFltTO
        (&FA_out_et);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S662>/Chart' */
    if (FA_out_et)
    {
        /* Transition: '<S666>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S666>:6' */
            /* Transition: '<S666>:25' */
            /* Call Fsft */
            VeLINR_y_HClHrSrFtClTOtSnFlt_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S630>/Fsft' */
            /* FunctionCaller: '<S667>/Function Caller' */
            /* Event: '<S666>:39' */
            Rte_Call_FsftHTIR_e_HVC_HtrClntOut_TempSensFlt_FsftHTIR_e_HVC_HtrClntOut_TempSensFlt
                ();

            /* End of Outputs for SubSystem: '<S630>/Fsft' */
            /* Transition: '<S666>:29' */
        }
        else
        {
            /* Transition: '<S666>:30' */
            /* Call Tmot */
            VeLINR_y_HClHrSrFtClTOtSnFlt_CallStatus = 3U;

            /* Event: '<S666>:40' */
        }

        /* Transition: '<S666>:36' */
        /* Transition: '<S666>:23' */
    }
    else
    {
        /* Transition: '<S666>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_eb) == 133)
        {
            /* Transition: '<S666>:33' */
            /* Transition: '<S666>:35' */
            /* Call Nothing */
            VeLINR_y_HClHrSrFtClTOtSnFlt_CallStatus = 4U;

            /* Transition: '<S666>:23' */
        }
        else
        {
            /* Transition: '<S666>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_eb) == 1)
            {
                /* Transition: '<S666>:48' */
                /* Transition: '<S666>:53' */
                FA_out_et = true;

                /* Transition: '<S666>:56' */
            }
            else
            {
                /* Transition: '<S666>:52' */
            }

            /* Transition: '<S666>:37' */
            /* Call Poke */
            VeLINR_y_HClHrSrFtClTOtSnFlt_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S630>/Poke' */
            /* FunctionCaller: '<S668>/Function Caller' */
            /* Event: '<S666>:38' */
            Rte_Call_PokeHTIR_e_HVC_HtrClntOut_TempSensFlt_PokeHTIR_e_HVC_HtrClntOut_TempSensFlt
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__ch, FA_out_et);

            /* End of Outputs for SubSystem: '<S630>/Poke' */
        }
    }

    /* End of Chart: '<S662>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_HClHrSrFtTInMtrlSnFlt_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_HClHrSrFtTInMtrlSnFlt_ErrSts'
     */
    /* Transition: '<S666>:19' */
    rtb_TmpSignalConversionAtVeL_mq =
        Rte_Read_VeLINR_e_HClHrSrFtTInMtrlSnFlt_VeLINR_e_HClHrSrFtTInMtrlSnFlt
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__ek);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_HClHrSrFtTInMtrlSnFltTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S673>:1' */
    (void)
        Rte_Read_VeLINR_b_HClHrSrFtTInMtrlSnFltTO_VeLINR_b_HClHrSrFtTInMtrlSnFltTO
        (&FA_out_d0);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S669>/Chart' */
    if (FA_out_d0)
    {
        /* Transition: '<S673>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S673>:6' */
            /* Transition: '<S673>:25' */
            /* Call Fsft */
            VeLINR_y_HClHrSrFtTInMtrlSnFlt_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S631>/Fsft' */
            /* FunctionCaller: '<S674>/Function Caller' */
            /* Event: '<S673>:39' */
            Rte_Call_FsftHTIR_e_HVC_HtrCoreTemp_SensFlt_FsftHTIR_e_HVC_HtrCoreTemp_SensFlt
                ();

            /* End of Outputs for SubSystem: '<S631>/Fsft' */
            /* Transition: '<S673>:29' */
        }
        else
        {
            /* Transition: '<S673>:30' */
            /* Call Tmot */
            VeLINR_y_HClHrSrFtTInMtrlSnFlt_CallStatus = 3U;

            /* Event: '<S673>:40' */
        }

        /* Transition: '<S673>:36' */
        /* Transition: '<S673>:23' */
    }
    else
    {
        /* Transition: '<S673>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_mq) == 133)
        {
            /* Transition: '<S673>:33' */
            /* Transition: '<S673>:35' */
            /* Call Nothing */
            VeLINR_y_HClHrSrFtTInMtrlSnFlt_CallStatus = 4U;

            /* Transition: '<S673>:23' */
        }
        else
        {
            /* Transition: '<S673>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_mq) == 1)
            {
                /* Transition: '<S673>:48' */
                /* Transition: '<S673>:53' */
                FA_out_d0 = true;

                /* Transition: '<S673>:56' */
            }
            else
            {
                /* Transition: '<S673>:52' */
            }

            /* Transition: '<S673>:37' */
            /* Call Poke */
            VeLINR_y_HClHrSrFtTInMtrlSnFlt_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S631>/Poke' */
            /* FunctionCaller: '<S675>/Function Caller' */
            /* Event: '<S673>:38' */
            Rte_Call_PokeHTIR_e_HVC_HtrCoreTemp_SensFlt_PokeHTIR_e_HVC_HtrCoreTemp_SensFlt
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__ek, FA_out_d0);

            /* End of Outputs for SubSystem: '<S631>/Poke' */
        }
    }

    /* End of Chart: '<S669>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_HClHrSrRqCrFrDrShOrOp_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_HClHrSrRqCrFrDrShOrOp_ErrSts'
     */
    /* Transition: '<S673>:19' */
    rtb_TmpSignalConversionAtVe_ipr =
        Rte_Read_VeLINR_e_HClHrSrRqCrFrDrShOrOp_VeLINR_e_HClHrSrRqCrFrDrShOrOp
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_o);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_HClHrSrRqCrFrDrShOrOpTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S680>:1' */
    (void)
        Rte_Read_VeLINR_b_HClHrSrRqCrFrDrShOrOpTO_VeLINR_b_HClHrSrRqCrFrDrShOrOpTO
        (&FA_out_ha);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S676>/Chart' */
    if (FA_out_ha)
    {
        /* Transition: '<S680>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S680>:6' */
            /* Transition: '<S680>:25' */
            /* Call Fsft */
            VeLINR_y_HClHrSrRqCrFrDrShOrOp_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S632>/Fsft' */
            /* FunctionCaller: '<S681>/Function Caller' */
            /* Event: '<S680>:39' */
            Rte_Call_FsftHTIR_e_HVC_HtrDrvFlt_FsftHTIR_e_HVC_HtrDrvFlt();

            /* End of Outputs for SubSystem: '<S632>/Fsft' */
            /* Transition: '<S680>:29' */
        }
        else
        {
            /* Transition: '<S680>:30' */
            /* Call Tmot */
            VeLINR_y_HClHrSrRqCrFrDrShOrOp_CallStatus = 3U;

            /* Event: '<S680>:40' */
        }

        /* Transition: '<S680>:36' */
        /* Transition: '<S680>:23' */
    }
    else
    {
        /* Transition: '<S680>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVe_ipr) == 133)
        {
            /* Transition: '<S680>:33' */
            /* Transition: '<S680>:35' */
            /* Call Nothing */
            VeLINR_y_HClHrSrRqCrFrDrShOrOp_CallStatus = 4U;

            /* Transition: '<S680>:23' */
        }
        else
        {
            /* Transition: '<S680>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVe_ipr) == 1)
            {
                /* Transition: '<S680>:48' */
                /* Transition: '<S680>:53' */
                FA_out_ha = true;

                /* Transition: '<S680>:56' */
            }
            else
            {
                /* Transition: '<S680>:52' */
            }

            /* Transition: '<S680>:37' */
            /* Call Poke */
            VeLINR_y_HClHrSrRqCrFrDrShOrOp_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S632>/Poke' */
            /* FunctionCaller: '<S682>/Function Caller' */
            /* Event: '<S680>:38' */
            Rte_Call_PokeHTIR_e_HVC_HtrDrvFlt_PokeHTIR_e_HVC_HtrDrvFlt
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_o, FA_out_ha);

            /* End of Outputs for SubSystem: '<S632>/Poke' */
        }
    }

    /* End of Chart: '<S676>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_HClHrSrRqICnsOtOfRng_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_HClHrSrRqICnsOtOfRng_ErrSts'
     */
    /* Transition: '<S680>:19' */
    rtb_TmpSignalConversionAtVeL_mf =
        Rte_Read_VeLINR_e_HClHrSrRqICnsOtOfRng_VeLINR_e_HClHrSrRqICnsOtOfRng
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__ii);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_HClHrSrRqICnsOtOfRngTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S687>:1' */
    (void)
        Rte_Read_VeLINR_b_HClHrSrRqICnsOtOfRngTO_VeLINR_b_HClHrSrRqICnsOtOfRngTO
        (&FA_out_o1);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S683>/Chart' */
    if (FA_out_o1)
    {
        /* Transition: '<S687>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S687>:6' */
            /* Transition: '<S687>:25' */
            /* Call Fsft */
            VeLINR_y_HClHrSrRqICnsOtOfRng_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S633>/Fsft' */
            /* FunctionCaller: '<S688>/Function Caller' */
            /* Event: '<S687>:39' */
            Rte_Call_FsftHTIR_e_HVC_Htr_HV_CrntOutofRng_FsftHTIR_e_HVC_Htr_HV_CrntOutofRng
                ();

            /* End of Outputs for SubSystem: '<S633>/Fsft' */
            /* Transition: '<S687>:29' */
        }
        else
        {
            /* Transition: '<S687>:30' */
            /* Call Tmot */
            VeLINR_y_HClHrSrRqICnsOtOfRng_CallStatus = 3U;

            /* Event: '<S687>:40' */
        }

        /* Transition: '<S687>:36' */
        /* Transition: '<S687>:23' */
    }
    else
    {
        /* Transition: '<S687>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_mf) == 133)
        {
            /* Transition: '<S687>:33' */
            /* Transition: '<S687>:35' */
            /* Call Nothing */
            VeLINR_y_HClHrSrRqICnsOtOfRng_CallStatus = 4U;

            /* Transition: '<S687>:23' */
        }
        else
        {
            /* Transition: '<S687>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_mf) == 1)
            {
                /* Transition: '<S687>:48' */
                /* Transition: '<S687>:53' */
                FA_out_o1 = true;

                /* Transition: '<S687>:56' */
            }
            else
            {
                /* Transition: '<S687>:52' */
            }

            /* Transition: '<S687>:37' */
            /* Call Poke */
            VeLINR_y_HClHrSrRqICnsOtOfRng_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S633>/Poke' */
            /* FunctionCaller: '<S689>/Function Caller' */
            /* Event: '<S687>:38' */
            Rte_Call_PokeHTIR_e_HVC_Htr_HV_CrntOutofRng_PokeHTIR_e_HVC_Htr_HV_CrntOutofRng
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__ii, FA_out_o1);

            /* End of Outputs for SubSystem: '<S633>/Poke' */
        }
    }

    /* End of Chart: '<S683>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_HClHrSrRqMemErr_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_HClHrSrRqMemErr_ErrSts'
     */
    /* Transition: '<S687>:19' */
    rtb_TmpSignalConversionAtVeL_gx =
        Rte_Read_VeLINR_e_HClHrSrRqMemErr_VeLINR_e_HClHrSrRqMemErr
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__og);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_HClHrSrRqMemErrTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S694>:1' */
    (void)Rte_Read_VeLINR_b_HClHrSrRqMemErrTO_VeLINR_b_HClHrSrRqMemErrTO
        (&FA_out_ak);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S690>/Chart' */
    if (FA_out_ak)
    {
        /* Transition: '<S694>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S694>:6' */
            /* Transition: '<S694>:25' */
            /* Call Fsft */
            VeLINR_y_HClHrSrRqMemErr_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S634>/Fsft' */
            /* FunctionCaller: '<S695>/Function Caller' */
            /* Event: '<S694>:39' */
            Rte_Call_FsftHTIR_e_HVC_HtrProcesMemory_Flt_FsftHTIR_e_HVC_HtrProcesMemory_Flt
                ();

            /* End of Outputs for SubSystem: '<S634>/Fsft' */
            /* Transition: '<S694>:29' */
        }
        else
        {
            /* Transition: '<S694>:30' */
            /* Call Tmot */
            VeLINR_y_HClHrSrRqMemErr_CallStatus = 3U;

            /* Event: '<S694>:40' */
        }

        /* Transition: '<S694>:36' */
        /* Transition: '<S694>:23' */
    }
    else
    {
        /* Transition: '<S694>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_gx) == 133)
        {
            /* Transition: '<S694>:33' */
            /* Transition: '<S694>:35' */
            /* Call Nothing */
            VeLINR_y_HClHrSrRqMemErr_CallStatus = 4U;

            /* Transition: '<S694>:23' */
        }
        else
        {
            /* Transition: '<S694>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_gx) == 1)
            {
                /* Transition: '<S694>:48' */
                /* Transition: '<S694>:53' */
                FA_out_ak = true;

                /* Transition: '<S694>:56' */
            }
            else
            {
                /* Transition: '<S694>:52' */
            }

            /* Transition: '<S694>:37' */
            /* Call Poke */
            VeLINR_y_HClHrSrRqMemErr_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S634>/Poke' */
            /* FunctionCaller: '<S696>/Function Caller' */
            /* Event: '<S694>:38' */
            Rte_Call_PokeHTIR_e_HVC_HtrProcesMemory_Flt_PokeHTIR_e_HVC_HtrProcesMemory_Flt
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__og, FA_out_ak);

            /* End of Outputs for SubSystem: '<S634>/Poke' */
        }
    }

    /* End of Chart: '<S690>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_HClHrSrRqSrvRq_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_HClHrSrRqSrvRq_ErrSts'
     */
    /* Transition: '<S694>:19' */
    rtb_TmpSignalConversionAtVeL_ox =
        Rte_Read_VeLINR_e_HClHrSrRqSrvRq_VeLINR_e_HClHrSrRqSrvRq
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__on);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_HClHrSrRqSrvRqTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S701>:1' */
    (void)Rte_Read_VeLINR_b_HClHrSrRqSrvRqTO_VeLINR_b_HClHrSrRqSrvRqTO
        (&FA_out_ai);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S697>/Chart' */
    if (FA_out_ai)
    {
        /* Transition: '<S701>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S701>:6' */
            /* Transition: '<S701>:25' */
            /* Call Fsft */
            VeLINR_y_HClHrSrRqSrvRq_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S635>/Fsft' */
            /* FunctionCaller: '<S702>/Function Caller' */
            /* Event: '<S701>:39' */
            Rte_Call_FsftHTIR_e_HVC_Htr_DCDC_VltgOutofRng_FsftHTIR_e_HVC_Htr_DCDC_VltgOutofRng
                ();

            /* End of Outputs for SubSystem: '<S635>/Fsft' */
            /* Transition: '<S701>:29' */
        }
        else
        {
            /* Transition: '<S701>:30' */
            /* Call Tmot */
            VeLINR_y_HClHrSrRqSrvRq_CallStatus = 3U;

            /* Event: '<S701>:40' */
        }

        /* Transition: '<S701>:36' */
        /* Transition: '<S701>:23' */
    }
    else
    {
        /* Transition: '<S701>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_ox) == 133)
        {
            /* Transition: '<S701>:33' */
            /* Transition: '<S701>:35' */
            /* Call Nothing */
            VeLINR_y_HClHrSrRqSrvRq_CallStatus = 4U;

            /* Transition: '<S701>:23' */
        }
        else
        {
            /* Transition: '<S701>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_ox) == 1)
            {
                /* Transition: '<S701>:48' */
                /* Transition: '<S701>:53' */
                FA_out_ai = true;

                /* Transition: '<S701>:56' */
            }
            else
            {
                /* Transition: '<S701>:52' */
            }

            /* Transition: '<S701>:37' */
            /* Call Poke */
            VeLINR_y_HClHrSrRqSrvRq_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S635>/Poke' */
            /* FunctionCaller: '<S703>/Function Caller' */
            /* Event: '<S701>:38' */
            Rte_Call_PokeHTIR_e_HVC_Htr_DCDC_VltgOutofRng_PokeHTIR_e_HVC_Htr_DCDC_VltgOutofRng
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__on, FA_out_ai);

            /* End of Outputs for SubSystem: '<S635>/Poke' */
        }
    }

    /* End of Chart: '<S697>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_HvCltHtrWrnCltTOtOfRng_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_HvCltHtrWrnCltTOtOfRng_ErrSts'
     */
    /* Transition: '<S701>:19' */
    rtb_TmpSignalConversionAtVeL_h3 =
        Rte_Read_VeLINR_e_HvCltHtrWrnCltTOtOfRng_VeLINR_e_HvCltHtrWrnCltTOtOfRng
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__fs);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_HvCltHtrWrnCltTOtOfRngTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S708>:1' */
    (void)
        Rte_Read_VeLINR_b_HvCltHtrWrnCltTOtOfRngTO_VeLINR_b_HvCltHtrWrnCltTOtOfRngTO
        (&FA_out_mv);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S704>/Chart' */
    if (FA_out_mv)
    {
        /* Transition: '<S708>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S708>:6' */
            /* Transition: '<S708>:25' */
            /* Call Fsft */
            VeLINR_y_HvCltHtrWrnCltTOtOfRng_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S636>/Fsft' */
            /* FunctionCaller: '<S709>/Function Caller' */
            /* Event: '<S708>:39' */
            Rte_Call_FsftHTIR_e_HVC_HtrClntTemp_OutofRng_FsftHTIR_e_HVC_HtrClntTemp_OutofRng
                ();

            /* End of Outputs for SubSystem: '<S636>/Fsft' */
            /* Transition: '<S708>:29' */
        }
        else
        {
            /* Transition: '<S708>:30' */
            /* Call Tmot */
            VeLINR_y_HvCltHtrWrnCltTOtOfRng_CallStatus = 3U;

            /* Event: '<S708>:40' */
        }

        /* Transition: '<S708>:36' */
        /* Transition: '<S708>:23' */
    }
    else
    {
        /* Transition: '<S708>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_h3) == 133)
        {
            /* Transition: '<S708>:33' */
            /* Transition: '<S708>:35' */
            /* Call Nothing */
            VeLINR_y_HvCltHtrWrnCltTOtOfRng_CallStatus = 4U;

            /* Transition: '<S708>:23' */
        }
        else
        {
            /* Transition: '<S708>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_h3) == 1)
            {
                /* Transition: '<S708>:48' */
                /* Transition: '<S708>:53' */
                FA_out_mv = true;

                /* Transition: '<S708>:56' */
            }
            else
            {
                /* Transition: '<S708>:52' */
            }

            /* Transition: '<S708>:37' */
            /* Call Poke */
            VeLINR_y_HvCltHtrWrnCltTOtOfRng_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S636>/Poke' */
            /* FunctionCaller: '<S710>/Function Caller' */
            /* Event: '<S708>:38' */
            Rte_Call_PokeHTIR_e_HVC_HtrClntTemp_OutofRng_PokeHTIR_e_HVC_HtrClntTemp_OutofRng
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__fs, FA_out_mv);

            /* End of Outputs for SubSystem: '<S636>/Poke' */
        }
    }

    /* End of Chart: '<S704>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_HvCltHtrWrnFltInCom_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_HvCltHtrWrnFltInCom_ErrSts'
     */
    /* Transition: '<S708>:19' */
    rtb_TmpSignalConversionAtVeL_pn =
        Rte_Read_VeLINR_e_HvCltHtrWrnFltInCom_VeLINR_e_HvCltHtrWrnFltInCom
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__h3);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_HvCltHtrWrnFltInComTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S715>:1' */
    (void)Rte_Read_VeLINR_b_HvCltHtrWrnFltInComTO_VeLINR_b_HvCltHtrWrnFltInComTO
        (&FA_out_ma);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S711>/Chart' */
    if (FA_out_ma)
    {
        /* Transition: '<S715>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S715>:6' */
            /* Transition: '<S715>:25' */
            /* Call Fsft */
            VeLINR_y_HvCltHtrWrnFltInCom_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S637>/Fsft' */
            /* FunctionCaller: '<S716>/Function Caller' */
            /* Event: '<S715>:39' */
            Rte_Call_FsftHTIR_e_HVC_HtrIntCom_Err_FsftHTIR_e_HVC_HtrIntCom_Err();

            /* End of Outputs for SubSystem: '<S637>/Fsft' */
            /* Transition: '<S715>:29' */
        }
        else
        {
            /* Transition: '<S715>:30' */
            /* Call Tmot */
            VeLINR_y_HvCltHtrWrnFltInCom_CallStatus = 3U;

            /* Event: '<S715>:40' */
        }

        /* Transition: '<S715>:36' */
        /* Transition: '<S715>:23' */
    }
    else
    {
        /* Transition: '<S715>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_pn) == 133)
        {
            /* Transition: '<S715>:33' */
            /* Transition: '<S715>:35' */
            /* Call Nothing */
            VeLINR_y_HvCltHtrWrnFltInCom_CallStatus = 4U;

            /* Transition: '<S715>:23' */
        }
        else
        {
            /* Transition: '<S715>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_pn) == 1)
            {
                /* Transition: '<S715>:48' */
                /* Transition: '<S715>:53' */
                FA_out_ma = true;

                /* Transition: '<S715>:56' */
            }
            else
            {
                /* Transition: '<S715>:52' */
            }

            /* Transition: '<S715>:37' */
            /* Call Poke */
            VeLINR_y_HvCltHtrWrnFltInCom_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S637>/Poke' */
            /* FunctionCaller: '<S717>/Function Caller' */
            /* Event: '<S715>:38' */
            Rte_Call_PokeHTIR_e_HVC_HtrIntCom_Err_PokeHTIR_e_HVC_HtrIntCom_Err
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__h3, FA_out_ma);

            /* End of Outputs for SubSystem: '<S637>/Poke' */
        }
    }

    /* End of Chart: '<S711>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_HvCltHtrWrnHvOtOfRng_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_HvCltHtrWrnHvOtOfRng_ErrSts'
     */
    /* Transition: '<S715>:19' */
    rtb_TmpSignalConversionAtVeL_gq =
        Rte_Read_VeLINR_e_HvCltHtrWrnHvOtOfRng_VeLINR_e_HvCltHtrWrnHvOtOfRng
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__ab);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_HvCltHtrWrnHvOtOfRngTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S722>:1' */
    (void)
        Rte_Read_VeLINR_b_HvCltHtrWrnHvOtOfRngTO_VeLINR_b_HvCltHtrWrnHvOtOfRngTO
        (&FA_out_nq);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S718>/Chart' */
    if (FA_out_nq)
    {
        /* Transition: '<S722>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S722>:6' */
            /* Transition: '<S722>:25' */
            /* Call Fsft */
            VeLINR_y_HvCltHtrWrnHvOtOfRng_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S638>/Fsft' */
            /* FunctionCaller: '<S723>/Function Caller' */
            /* Event: '<S722>:39' */
            Rte_Call_FsftHTIR_e_HVC_Htr_HV_OutofRng_FsftHTIR_e_HVC_Htr_HV_OutofRng
                ();

            /* End of Outputs for SubSystem: '<S638>/Fsft' */
            /* Transition: '<S722>:29' */
        }
        else
        {
            /* Transition: '<S722>:30' */
            /* Call Tmot */
            VeLINR_y_HvCltHtrWrnHvOtOfRng_CallStatus = 3U;

            /* Event: '<S722>:40' */
        }

        /* Transition: '<S722>:36' */
        /* Transition: '<S722>:23' */
    }
    else
    {
        /* Transition: '<S722>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_gq) == 133)
        {
            /* Transition: '<S722>:33' */
            /* Transition: '<S722>:35' */
            /* Call Nothing */
            VeLINR_y_HvCltHtrWrnHvOtOfRng_CallStatus = 4U;

            /* Transition: '<S722>:23' */
        }
        else
        {
            /* Transition: '<S722>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_gq) == 1)
            {
                /* Transition: '<S722>:48' */
                /* Transition: '<S722>:53' */
                FA_out_nq = true;

                /* Transition: '<S722>:56' */
            }
            else
            {
                /* Transition: '<S722>:52' */
            }

            /* Transition: '<S722>:37' */
            /* Call Poke */
            VeLINR_y_HvCltHtrWrnHvOtOfRng_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S638>/Poke' */
            /* FunctionCaller: '<S724>/Function Caller' */
            /* Event: '<S722>:38' */
            Rte_Call_PokeHTIR_e_HVC_Htr_HV_OutofRng_PokeHTIR_e_HVC_Htr_HV_OutofRng
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__ab, FA_out_nq);

            /* End of Outputs for SubSystem: '<S638>/Poke' */
        }
    }

    /* End of Chart: '<S718>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_HvCltHtrWrnULoOtOfRng_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_HvCltHtrWrnULoOtOfRng_ErrSts'
     */
    /* Transition: '<S722>:19' */
    rtb_TmpSignalConversionAtVeL_jx =
        Rte_Read_VeLINR_e_HvCltHtrWrnULoOtOfRng_VeLINR_e_HvCltHtrWrnULoOtOfRng
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__je);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_HvCltHtrWrnULoOtOfRngTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S729>:1' */
    (void)
        Rte_Read_VeLINR_b_HvCltHtrWrnULoOtOfRngTO_VeLINR_b_HvCltHtrWrnULoOtOfRngTO
        (&FA_out_pj);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S725>/Chart' */
    if (FA_out_pj)
    {
        /* Transition: '<S729>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S729>:6' */
            /* Transition: '<S729>:25' */
            /* Call Fsft */
            VeLINR_y_HvCltHtrWrnULoOtOfRng_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S639>/Fsft' */
            /* FunctionCaller: '<S730>/Function Caller' */
            /* Event: '<S729>:39' */
            Rte_Call_FsftHTIR_e_HVC_Htr_LV_OutofRng_FsftHTIR_e_HVC_Htr_LV_OutofRng
                ();

            /* End of Outputs for SubSystem: '<S639>/Fsft' */
            /* Transition: '<S729>:29' */
        }
        else
        {
            /* Transition: '<S729>:30' */
            /* Call Tmot */
            VeLINR_y_HvCltHtrWrnULoOtOfRng_CallStatus = 3U;

            /* Event: '<S729>:40' */
        }

        /* Transition: '<S729>:36' */
        /* Transition: '<S729>:23' */
    }
    else
    {
        /* Transition: '<S729>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_jx) == 133)
        {
            /* Transition: '<S729>:33' */
            /* Transition: '<S729>:35' */
            /* Call Nothing */
            VeLINR_y_HvCltHtrWrnULoOtOfRng_CallStatus = 4U;

            /* Transition: '<S729>:23' */
        }
        else
        {
            /* Transition: '<S729>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_jx) == 1)
            {
                /* Transition: '<S729>:48' */
                /* Transition: '<S729>:53' */
                FA_out_pj = true;

                /* Transition: '<S729>:56' */
            }
            else
            {
                /* Transition: '<S729>:52' */
            }

            /* Transition: '<S729>:37' */
            /* Call Poke */
            VeLINR_y_HvCltHtrWrnULoOtOfRng_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S639>/Poke' */
            /* FunctionCaller: '<S731>/Function Caller' */
            /* Event: '<S729>:38' */
            Rte_Call_PokeHTIR_e_HVC_Htr_LV_OutofRng_PokeHTIR_e_HVC_Htr_LV_OutofRng
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__je, FA_out_pj);

            /* End of Outputs for SubSystem: '<S639>/Poke' */
        }
    }

    /* End of Chart: '<S725>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_RsErr_ECH_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_RsErr_ECH_ErrSts'
     */
    /* Transition: '<S729>:19' */
    rtb_TmpSignalConversionAtVeL_i4 =
        Rte_Read_VeLINR_b_RsErr_ECH_VeLINR_b_RsErr_ECH
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__fg);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_RsErr_ECH_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S735>:1' */
    (void)Rte_Read_VeLINR_b_RsErr_ECH_TO_VeLINR_b_RsErr_ECH_TO(&FA_out_hq);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S732>/Chart' */
    if (FA_out_hq)
    {
        /* Transition: '<S735>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S735>:6' */
            /* Transition: '<S735>:25' */
            /* Call Fsft */
            VeLINR_y_RsErr_ECH_CallStatus = 2U;

            /* Event: '<S735>:39' */
            /* Transition: '<S735>:29' */
        }
        else
        {
            /* Transition: '<S735>:30' */
            /* Call Tmot */
            VeLINR_y_RsErr_ECH_CallStatus = 3U;

            /* Event: '<S735>:40' */
        }

        /* Transition: '<S735>:36' */
        /* Transition: '<S735>:23' */
    }
    else
    {
        /* Transition: '<S735>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_i4) == 133)
        {
            /* Transition: '<S735>:33' */
            /* Transition: '<S735>:35' */
            /* Call Nothing */
            VeLINR_y_RsErr_ECH_CallStatus = 4U;

            /* Transition: '<S735>:23' */
        }
        else
        {
            /* Transition: '<S735>:46' */
            /* Transition: '<S735>:37' */
            /* Call Poke */
            VeLINR_y_RsErr_ECH_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S640>/Poke' */
            /* FunctionCaller: '<S736>/Function Caller' */
            /* Event: '<S735>:38' */
            Rte_Call_PokeHTIR_b_HVC_Htr_LIN_ResErr_PokeHTIR_b_HVC_Htr_LIN_ResErr
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__fg);

            /* End of Outputs for SubSystem: '<S640>/Poke' */
        }
    }

    /* End of Chart: '<S732>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP2_AIR_PRE_ERR_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP2_AIR_PRE_ERR_ErrSts'
     */
    /* Transition: '<S735>:19' */
    rtb_TmpSignalConversionAtVeL_fb =
        Rte_Read_VeLINR_e_PECP2_AIR_PRE_ERR_VeLINR_e_PECP2_AIR_PRE_ERR
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_P);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP2_AIR_PRE_ERR_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S758>:1' */
    (void)Rte_Read_VeLINR_b_PECP2_AIR_PRE_ERR_TO_VeLINR_b_PECP2_AIR_PRE_ERR_TO
        (&tmpRead_y);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S754>/Chart' */
    if (tmpRead_y)
    {
        /* Transition: '<S758>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S758>:6' */
            /* Transition: '<S758>:25' */
            /* Call Fsft */
            VeLINR_y_PECP2_AIR_PRE_ERR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S737>/Fsft' */
            /* FunctionCaller: '<S759>/Function Caller' */
            /* Event: '<S758>:39' */
            Rte_Call_FsftPMIR_b_LTPsvPmp2AirPrsntErr_FsftPMIR_b_LTPsvPmp2AirPrsntErr
                ();

            /* End of Outputs for SubSystem: '<S737>/Fsft' */
            /* Transition: '<S758>:29' */
        }
        else
        {
            /* Transition: '<S758>:30' */
            /* Call Tmot */
            VeLINR_y_PECP2_AIR_PRE_ERR_CallStatus = 3U;

            /* Event: '<S758>:40' */
        }

        /* Transition: '<S758>:36' */
        /* Transition: '<S758>:23' */
    }
    else
    {
        /* Transition: '<S758>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_fb) == 133)
        {
            /* Transition: '<S758>:33' */
            /* Transition: '<S758>:35' */
            /* Call Nothing */
            VeLINR_y_PECP2_AIR_PRE_ERR_CallStatus = 4U;

            /* Transition: '<S758>:23' */
        }
        else
        {
            /* Transition: '<S758>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_fb) == 1)
            {
                /* Transition: '<S758>:48' */
                /* Transition: '<S758>:53' */
                FA_out_hq = true;

                /* Transition: '<S758>:56' */
            }
            else
            {
                /* Transition: '<S758>:52' */
                FA_out_hq = false;
            }

            /* Transition: '<S758>:37' */
            /* Call Poke */
            VeLINR_y_PECP2_AIR_PRE_ERR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S737>/Poke' */
            /* FunctionCaller: '<S760>/Function Caller' */
            /* Event: '<S758>:38' */
            Rte_Call_PokePMIR_e_LTPsvPmp2AirPrsntErr_PokePMIR_e_LTPsvPmp2AirPrsntErr
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_P, FA_out_hq);

            /* End of Outputs for SubSystem: '<S737>/Poke' */
        }
    }

    /* End of Chart: '<S754>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP2_CURR_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP2_CURR_ErrSts'
     */
    /* Transition: '<S758>:19' */
    rtb_TmpSignalConversionAtVeL_jm =
        Rte_Read_VeLINR_I_PECP2_CURR_VeLINR_I_PECP2_CURR
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_I_P);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP2_CURR_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S765>:1' */
    (void)Rte_Read_VeLINR_b_PECP2_CURR_TO_VeLINR_b_PECP2_CURR_TO(&FA_out_nr);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S761>/Chart' */
    if (FA_out_nr)
    {
        /* Transition: '<S765>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S765>:6' */
            /* Transition: '<S765>:25' */
            /* Call Fsft */
            VeLINR_y_PECP2_CURR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S738>/Fsft' */
            /* FunctionCaller: '<S766>/Function Caller' */
            /* Event: '<S765>:39' */
            Rte_Call_FsftPMIR_b_LT_PsvPmp2Crnt_FsftPMIR_b_LT_PsvPmp2Crnt();

            /* End of Outputs for SubSystem: '<S738>/Fsft' */
            /* Transition: '<S765>:29' */
        }
        else
        {
            /* Transition: '<S765>:30' */
            /* Call Tmot */
            VeLINR_y_PECP2_CURR_CallStatus = 3U;

            /* Event: '<S765>:40' */
        }

        /* Transition: '<S765>:36' */
        /* Transition: '<S765>:23' */
    }
    else
    {
        /* Transition: '<S765>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_jm) == 133)
        {
            /* Transition: '<S765>:33' */
            /* Transition: '<S765>:35' */
            /* Call Nothing */
            VeLINR_y_PECP2_CURR_CallStatus = 4U;

            /* Transition: '<S765>:23' */
        }
        else
        {
            /* Transition: '<S765>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_jm) == 1)
            {
                /* Transition: '<S765>:48' */
                /* Transition: '<S765>:53' */
                FA_out_nr = true;

                /* Transition: '<S765>:56' */
            }
            else
            {
                /* Transition: '<S765>:52' */
            }

            /* Transition: '<S765>:37' */
            /* Call Poke */
            VeLINR_y_PECP2_CURR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S738>/Poke' */
            /* FunctionCaller: '<S767>/Function Caller' */
            /* Event: '<S765>:38' */
            Rte_Call_PokePMIR_I_LT_PsvPmp2Crnt_PokePMIR_I_LT_PsvPmp2Crnt
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_I_P, FA_out_nr);

            /* End of Outputs for SubSystem: '<S738>/Poke' */
        }
    }

    /* End of Chart: '<S761>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP2_DBLK_ACTV_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP2_DBLK_ACTV_ErrSts'
     */
    /* Transition: '<S765>:19' */
    rtb_TmpSignalConversionAtVeL_mc =
        Rte_Read_VeLINR_e_PECP2_DBLK_ACTV_VeLINR_e_PECP2_DBLK_ACTV
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__ne);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP2_DBLK_ACTV_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S772>:1' */
    (void)Rte_Read_VeLINR_b_PECP2_DBLK_ACTV_TO_VeLINR_b_PECP2_DBLK_ACTV_TO
        (&FA_out_g3);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S768>/Chart' */
    if (FA_out_g3)
    {
        /* Transition: '<S772>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S772>:6' */
            /* Transition: '<S772>:25' */
            /* Call Fsft */
            VeLINR_y_PECP2_DBLK_ACTV_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S739>/Fsft' */
            /* FunctionCaller: '<S773>/Function Caller' */
            /* Event: '<S772>:39' */
            Rte_Call_FsftPMIR_b_LTPsvPump2Deblock_FsftPMIR_b_LTPsvPump2Deblock();

            /* End of Outputs for SubSystem: '<S739>/Fsft' */
            /* Transition: '<S772>:29' */
        }
        else
        {
            /* Transition: '<S772>:30' */
            /* Call Tmot */
            VeLINR_y_PECP2_DBLK_ACTV_CallStatus = 3U;

            /* Event: '<S772>:40' */
        }

        /* Transition: '<S772>:36' */
        /* Transition: '<S772>:23' */
    }
    else
    {
        /* Transition: '<S772>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_mc) == 133)
        {
            /* Transition: '<S772>:33' */
            /* Transition: '<S772>:35' */
            /* Call Nothing */
            VeLINR_y_PECP2_DBLK_ACTV_CallStatus = 4U;

            /* Transition: '<S772>:23' */
        }
        else
        {
            /* Transition: '<S772>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_mc) == 1)
            {
                /* Transition: '<S772>:48' */
                /* Transition: '<S772>:53' */
                FA_out_g3 = true;

                /* Transition: '<S772>:56' */
            }
            else
            {
                /* Transition: '<S772>:52' */
            }

            /* Transition: '<S772>:37' */
            /* Call Poke */
            VeLINR_y_PECP2_DBLK_ACTV_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S739>/Poke' */
            /* FunctionCaller: '<S774>/Function Caller' */
            /* Event: '<S772>:38' */
            Rte_Call_PokePMIR_e_LTPsvPump2Deblock_PokePMIR_e_LTPsvPump2Deblock
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__ne, FA_out_g3);

            /* End of Outputs for SubSystem: '<S739>/Poke' */
        }
    }

    /* End of Chart: '<S768>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP2_DR_RN_ERR_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP2_DR_RN_ERR_ErrSts'
     */
    /* Transition: '<S772>:19' */
    rtb_TmpSignalConversionAtVeL_g1 =
        Rte_Read_VeLINR_e_PECP2_DR_RN_ERR_VeLINR_e_PECP2_DR_RN_ERR
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__pj);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP2_DR_RN_ERR_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S779>:1' */
    (void)Rte_Read_VeLINR_b_PECP2_DR_RN_ERR_TO_VeLINR_b_PECP2_DR_RN_ERR_TO
        (&FA_out_d2);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S775>/Chart' */
    if (FA_out_d2)
    {
        /* Transition: '<S779>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S779>:6' */
            /* Transition: '<S779>:25' */
            /* Call Fsft */
            VeLINR_y_PECP2_DR_RN_ERR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S740>/Fsft' */
            /* FunctionCaller: '<S780>/Function Caller' */
            /* Event: '<S779>:39' */
            Rte_Call_FsftPMIR_b_LTPsvPump2DryRun_FsftPMIR_b_LTPsvPump2DryRun();

            /* End of Outputs for SubSystem: '<S740>/Fsft' */
            /* Transition: '<S779>:29' */
        }
        else
        {
            /* Transition: '<S779>:30' */
            /* Call Tmot */
            VeLINR_y_PECP2_DR_RN_ERR_CallStatus = 3U;

            /* Event: '<S779>:40' */
        }

        /* Transition: '<S779>:36' */
        /* Transition: '<S779>:23' */
    }
    else
    {
        /* Transition: '<S779>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_g1) == 133)
        {
            /* Transition: '<S779>:33' */
            /* Transition: '<S779>:35' */
            /* Call Nothing */
            VeLINR_y_PECP2_DR_RN_ERR_CallStatus = 4U;

            /* Transition: '<S779>:23' */
        }
        else
        {
            /* Transition: '<S779>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_g1) == 1)
            {
                /* Transition: '<S779>:48' */
                /* Transition: '<S779>:53' */
                FA_out_d2 = true;

                /* Transition: '<S779>:56' */
            }
            else
            {
                /* Transition: '<S779>:52' */
            }

            /* Transition: '<S779>:37' */
            /* Call Poke */
            VeLINR_y_PECP2_DR_RN_ERR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S740>/Poke' */
            /* FunctionCaller: '<S781>/Function Caller' */
            /* Event: '<S779>:38' */
            Rte_Call_PokePMIR_e_LTPsvPump2DryRun_PokePMIR_e_LTPsvPump2DryRun
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__pj, FA_out_d2);

            /* End of Outputs for SubSystem: '<S740>/Poke' */
        }
    }

    /* End of Chart: '<S775>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP2_FL_SAFE_ACTVTD_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP2_FL_SAFE_ACTVTD_ErrSts'
     */
    /* Transition: '<S779>:19' */
    rtb_TmpSignalConversionAtVeL_pa =
        Rte_Read_VeLINR_e_PECP2_FL_SAFE_ACTVTD_VeLINR_e_PECP2_FL_SAFE_ACTVTD
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__bc);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP2_FL_SAFE_ACTVTD_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S786>:1' */
    (void)
        Rte_Read_VeLINR_b_PECP2_FL_SAFE_ACTVTD_TO_VeLINR_b_PECP2_FL_SAFE_ACTVTD_TO
        (&FA_out_h1);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S782>/Chart' */
    if (FA_out_h1)
    {
        /* Transition: '<S786>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S786>:6' */
            /* Transition: '<S786>:25' */
            /* Call Fsft */
            VeLINR_y_PECP2_FL_SAFE_ACTVTD_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S741>/Fsft' */
            /* FunctionCaller: '<S787>/Function Caller' */
            /* Event: '<S786>:39' */
            Rte_Call_FsftPMIR_b_LTPsvPump2Failsafe_FsftPMIR_b_LTPsvPump2Failsafe
                ();

            /* End of Outputs for SubSystem: '<S741>/Fsft' */
            /* Transition: '<S786>:29' */
        }
        else
        {
            /* Transition: '<S786>:30' */
            /* Call Tmot */
            VeLINR_y_PECP2_FL_SAFE_ACTVTD_CallStatus = 3U;

            /* Event: '<S786>:40' */
        }

        /* Transition: '<S786>:36' */
        /* Transition: '<S786>:23' */
    }
    else
    {
        /* Transition: '<S786>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_pa) == 133)
        {
            /* Transition: '<S786>:33' */
            /* Transition: '<S786>:35' */
            /* Call Nothing */
            VeLINR_y_PECP2_FL_SAFE_ACTVTD_CallStatus = 4U;

            /* Transition: '<S786>:23' */
        }
        else
        {
            /* Transition: '<S786>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_pa) == 1)
            {
                /* Transition: '<S786>:48' */
                /* Transition: '<S786>:53' */
                FA_out_h1 = true;

                /* Transition: '<S786>:56' */
            }
            else
            {
                /* Transition: '<S786>:52' */
            }

            /* Transition: '<S786>:37' */
            /* Call Poke */
            VeLINR_y_PECP2_FL_SAFE_ACTVTD_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S741>/Poke' */
            /* FunctionCaller: '<S788>/Function Caller' */
            /* Event: '<S786>:38' */
            Rte_Call_PokePMIR_e_LTPsvPump2Failsafe_PokePMIR_e_LTPsvPump2Failsafe
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__bc, FA_out_h1);

            /* End of Outputs for SubSystem: '<S741>/Poke' */
        }
    }

    /* End of Chart: '<S782>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP2_LMP_HM_AN_ON_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP2_LMP_HM_AN_ON_ErrSts'
     */
    /* Transition: '<S786>:19' */
    rtb_TmpSignalConversionAtVeL_mo =
        Rte_Read_VeLINR_e_PECP2_LMP_HM_AN_ON_VeLINR_e_PECP2_LMP_HM_AN_ON
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__hl);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP2_LMP_HM_AN_ON_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S793>:1' */
    (void)Rte_Read_VeLINR_b_PECP2_LMP_HM_AN_ON_TO_VeLINR_b_PECP2_LMP_HM_AN_ON_TO
        (&FA_out_gk);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S789>/Chart' */
    if (FA_out_gk)
    {
        /* Transition: '<S793>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S793>:6' */
            /* Transition: '<S793>:25' */
            /* Call Fsft */
            VeLINR_y_PECP2_LMP_HM_AN_ON_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S742>/Fsft' */
            /* FunctionCaller: '<S794>/Function Caller' */
            /* Event: '<S793>:39' */
            Rte_Call_FsftPMIR_b_LTPsvPump2_LmpHM_FsftPMIR_b_LTPsvPump2_LmpHM();

            /* End of Outputs for SubSystem: '<S742>/Fsft' */
            /* Transition: '<S793>:29' */
        }
        else
        {
            /* Transition: '<S793>:30' */
            /* Call Tmot */
            VeLINR_y_PECP2_LMP_HM_AN_ON_CallStatus = 3U;

            /* Event: '<S793>:40' */
        }

        /* Transition: '<S793>:36' */
        /* Transition: '<S793>:23' */
    }
    else
    {
        /* Transition: '<S793>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_mo) == 133)
        {
            /* Transition: '<S793>:33' */
            /* Transition: '<S793>:35' */
            /* Call Nothing */
            VeLINR_y_PECP2_LMP_HM_AN_ON_CallStatus = 4U;

            /* Transition: '<S793>:23' */
        }
        else
        {
            /* Transition: '<S793>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_mo) == 1)
            {
                /* Transition: '<S793>:48' */
                /* Transition: '<S793>:53' */
                FA_out_gk = true;

                /* Transition: '<S793>:56' */
            }
            else
            {
                /* Transition: '<S793>:52' */
            }

            /* Transition: '<S793>:37' */
            /* Call Poke */
            VeLINR_y_PECP2_LMP_HM_AN_ON_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S742>/Poke' */
            /* FunctionCaller: '<S795>/Function Caller' */
            /* Event: '<S793>:38' */
            Rte_Call_PokePMIR_e_LTPsvPump2_LmpHM_PokePMIR_e_LTPsvPump2_LmpHM
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__hl, FA_out_gk);

            /* End of Outputs for SubSystem: '<S742>/Poke' */
        }
    }

    /* End of Chart: '<S789>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP2_MONTRNG_RPM_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP2_MONTRNG_RPM_ErrSts'
     */
    /* Transition: '<S793>:19' */
    rtb_TmpSignalConversionAtVeL_ms =
        Rte_Read_VeLINR_e_PECP2_MONTRNG_RPM_VeLINR_e_PECP2_MONTRNG_RPM
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__dg);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP2_MONTRNG_RPM_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S800>:1' */
    (void)Rte_Read_VeLINR_b_PECP2_MONTRNG_RPM_TO_VeLINR_b_PECP2_MONTRNG_RPM_TO
        (&FA_out_i2);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S796>/Chart' */
    if (FA_out_i2)
    {
        /* Transition: '<S800>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S800>:6' */
            /* Transition: '<S800>:25' */
            /* Call Fsft */
            VeLINR_y_PECP2_MONTRNG_RPM_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S743>/Fsft' */
            /* FunctionCaller: '<S801>/Function Caller' */
            /* Event: '<S800>:39' */
            Rte_Call_FsftPMIR_b_LTPsvPump2MntrRPM_FsftPMIR_b_LTPsvPump2MntrRPM();

            /* End of Outputs for SubSystem: '<S743>/Fsft' */
            /* Transition: '<S800>:29' */
        }
        else
        {
            /* Transition: '<S800>:30' */
            /* Call Tmot */
            VeLINR_y_PECP2_MONTRNG_RPM_CallStatus = 3U;

            /* Event: '<S800>:40' */
        }

        /* Transition: '<S800>:36' */
        /* Transition: '<S800>:23' */
    }
    else
    {
        /* Transition: '<S800>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_ms) == 133)
        {
            /* Transition: '<S800>:33' */
            /* Transition: '<S800>:35' */
            /* Call Nothing */
            VeLINR_y_PECP2_MONTRNG_RPM_CallStatus = 4U;

            /* Transition: '<S800>:23' */
        }
        else
        {
            /* Transition: '<S800>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_ms) == 1)
            {
                /* Transition: '<S800>:48' */
                /* Transition: '<S800>:53' */
                FA_out_i2 = true;

                /* Transition: '<S800>:56' */
            }
            else
            {
                /* Transition: '<S800>:52' */
            }

            /* Transition: '<S800>:37' */
            /* Call Poke */
            VeLINR_y_PECP2_MONTRNG_RPM_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S743>/Poke' */
            /* FunctionCaller: '<S802>/Function Caller' */
            /* Event: '<S800>:38' */
            Rte_Call_PokePMIR_e_LTPsvPump2MntrRPM_PokePMIR_e_LTPsvPump2MntrRPM
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__dg, FA_out_i2);

            /* End of Outputs for SubSystem: '<S743>/Poke' */
        }
    }

    /* End of Chart: '<S796>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP2_NODE_ERR_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP2_NODE_ERR_ErrSts'
     */
    /* Transition: '<S800>:19' */
    rtb_TmpSignalConversionAtVe_ihj =
        Rte_Read_VeLINR_e_PECP2_NODE_ERR_VeLINR_e_PECP2_NODE_ERR
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__hh);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP2_NODE_ERR_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S807>:1' */
    (void)Rte_Read_VeLINR_b_PECP2_NODE_ERR_TO_VeLINR_b_PECP2_NODE_ERR_TO
        (&FA_out_p);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S803>/Chart' */
    if (FA_out_p)
    {
        /* Transition: '<S807>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S807>:6' */
            /* Transition: '<S807>:25' */
            /* Call Fsft */
            VeLINR_y_PECP2_NODE_ERR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S744>/Fsft' */
            /* FunctionCaller: '<S808>/Function Caller' */
            /* Event: '<S807>:39' */
            Rte_Call_FsftPMIR_b_LTPsvPump2NodeErr_FsftPMIR_b_LTPsvPump2NodeErr();

            /* End of Outputs for SubSystem: '<S744>/Fsft' */
            /* Transition: '<S807>:29' */
        }
        else
        {
            /* Transition: '<S807>:30' */
            /* Call Tmot */
            VeLINR_y_PECP2_NODE_ERR_CallStatus = 3U;

            /* Event: '<S807>:40' */
        }

        /* Transition: '<S807>:36' */
        /* Transition: '<S807>:23' */
    }
    else
    {
        /* Transition: '<S807>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVe_ihj) == 133)
        {
            /* Transition: '<S807>:33' */
            /* Transition: '<S807>:35' */
            /* Call Nothing */
            VeLINR_y_PECP2_NODE_ERR_CallStatus = 4U;

            /* Transition: '<S807>:23' */
        }
        else
        {
            /* Transition: '<S807>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVe_ihj) == 1)
            {
                /* Transition: '<S807>:48' */
                /* Transition: '<S807>:53' */
                FA_out_p = true;

                /* Transition: '<S807>:56' */
            }
            else
            {
                /* Transition: '<S807>:52' */
            }

            /* Transition: '<S807>:37' */
            /* Call Poke */
            VeLINR_y_PECP2_NODE_ERR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S744>/Poke' */
            /* FunctionCaller: '<S809>/Function Caller' */
            /* Event: '<S807>:38' */
            Rte_Call_PokePMIR_e_LTPsvPump2NodeErr_PokePMIR_e_LTPsvPump2NodeErr
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__hh, FA_out_p);

            /* End of Outputs for SubSystem: '<S744>/Poke' */
        }
    }

    /* End of Chart: '<S803>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP2_OVR_CUR_ERR_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP2_OVR_CUR_ERR_ErrSts'
     */
    /* Transition: '<S807>:19' */
    rtb_TmpSignalConversionAtVeL_d4 =
        Rte_Read_VeLINR_e_PECP2_OVR_CUR_ERR_VeLINR_e_PECP2_OVR_CUR_ERR
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__ld);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP2_OVR_CUR_ERR_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S814>:1' */
    (void)Rte_Read_VeLINR_b_PECP2_OVR_CUR_ERR_TO_VeLINR_b_PECP2_OVR_CUR_ERR_TO
        (&FA_out_e);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S810>/Chart' */
    if (FA_out_e)
    {
        /* Transition: '<S814>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S814>:6' */
            /* Transition: '<S814>:25' */
            /* Call Fsft */
            VeLINR_y_PECP2_OVR_CUR_ERR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S745>/Fsft' */
            /* FunctionCaller: '<S815>/Function Caller' */
            /* Event: '<S814>:39' */
            Rte_Call_FsftPMIR_b_LTPsvPump2OvrCrnt_FsftPMIR_b_LTPsvPump2OvrCrnt();

            /* End of Outputs for SubSystem: '<S745>/Fsft' */
            /* Transition: '<S814>:29' */
        }
        else
        {
            /* Transition: '<S814>:30' */
            /* Call Tmot */
            VeLINR_y_PECP2_OVR_CUR_ERR_CallStatus = 3U;

            /* Event: '<S814>:40' */
        }

        /* Transition: '<S814>:36' */
        /* Transition: '<S814>:23' */
    }
    else
    {
        /* Transition: '<S814>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_d4) == 133)
        {
            /* Transition: '<S814>:33' */
            /* Transition: '<S814>:35' */
            /* Call Nothing */
            VeLINR_y_PECP2_OVR_CUR_ERR_CallStatus = 4U;

            /* Transition: '<S814>:23' */
        }
        else
        {
            /* Transition: '<S814>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_d4) == 1)
            {
                /* Transition: '<S814>:48' */
                /* Transition: '<S814>:53' */
                FA_out_e = true;

                /* Transition: '<S814>:56' */
            }
            else
            {
                /* Transition: '<S814>:52' */
            }

            /* Transition: '<S814>:37' */
            /* Call Poke */
            VeLINR_y_PECP2_OVR_CUR_ERR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S745>/Poke' */
            /* FunctionCaller: '<S816>/Function Caller' */
            /* Event: '<S814>:38' */
            Rte_Call_PokePMIR_e_LTPsvPump2OvrCrnt_PokePMIR_e_LTPsvPump2OvrCrnt
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__ld, FA_out_e);

            /* End of Outputs for SubSystem: '<S745>/Poke' */
        }
    }

    /* End of Chart: '<S810>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP2_OVR_TMP_ERR_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP2_OVR_TMP_ERR_ErrSts'
     */
    /* Transition: '<S814>:19' */
    rtb_TmpSignalConversionAtVeL_jo =
        Rte_Read_VeLINR_e_PECP2_OVR_TMP_ERR_VeLINR_e_PECP2_OVR_TMP_ERR
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_ckn);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP2_OVR_TMP_ERR_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S821>:1' */
    (void)Rte_Read_VeLINR_b_PECP2_OVR_TMP_ERR_TO_VeLINR_b_PECP2_OVR_TMP_ERR_TO
        (&FA_out_i0);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S817>/Chart' */
    if (FA_out_i0)
    {
        /* Transition: '<S821>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S821>:6' */
            /* Transition: '<S821>:25' */
            /* Call Fsft */
            VeLINR_y_PECP2_OVR_TMP_ERR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S746>/Fsft' */
            /* FunctionCaller: '<S822>/Function Caller' */
            /* Event: '<S821>:39' */
            Rte_Call_FsftPMIR_b_LT_PsvPmp2OT_FsftPMIR_b_LT_PsvPmp2OT();

            /* End of Outputs for SubSystem: '<S746>/Fsft' */
            /* Transition: '<S821>:29' */
        }
        else
        {
            /* Transition: '<S821>:30' */
            /* Call Tmot */
            VeLINR_y_PECP2_OVR_TMP_ERR_CallStatus = 3U;

            /* Event: '<S821>:40' */
        }

        /* Transition: '<S821>:36' */
        /* Transition: '<S821>:23' */
    }
    else
    {
        /* Transition: '<S821>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_jo) == 133)
        {
            /* Transition: '<S821>:33' */
            /* Transition: '<S821>:35' */
            /* Call Nothing */
            VeLINR_y_PECP2_OVR_TMP_ERR_CallStatus = 4U;

            /* Transition: '<S821>:23' */
        }
        else
        {
            /* Transition: '<S821>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_jo) == 1)
            {
                /* Transition: '<S821>:48' */
                /* Transition: '<S821>:53' */
                FA_out_i0 = true;

                /* Transition: '<S821>:56' */
            }
            else
            {
                /* Transition: '<S821>:52' */
            }

            /* Transition: '<S821>:37' */
            /* Call Poke */
            VeLINR_y_PECP2_OVR_TMP_ERR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S746>/Poke' */
            /* FunctionCaller: '<S823>/Function Caller' */
            /* Event: '<S821>:38' */
            Rte_Call_PokePMIR_e_LT_PsvPmp2OT_PokePMIR_e_LT_PsvPmp2OT
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_ckn, FA_out_i0);

            /* End of Outputs for SubSystem: '<S746>/Poke' */
        }
    }

    /* End of Chart: '<S817>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP2_POST_RUN_STAT_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP2_POST_RUN_STAT_ErrSts'
     */
    /* Transition: '<S821>:19' */
    rtb_TmpSignalConversionAtVe_g14 =
        Rte_Read_VeLINR_e_PECP2_POST_RUN_STAT_VeLINR_e_PECP2_POST_RUN_STAT
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_emg);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP2_POST_RUN_STAT_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S828>:1' */
    (void)
        Rte_Read_VeLINR_b_PECP2_POST_RUN_STAT_TO_VeLINR_b_PECP2_POST_RUN_STAT_TO
        (&FA_out_n4);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S824>/Chart' */
    if (FA_out_n4)
    {
        /* Transition: '<S828>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S828>:6' */
            /* Transition: '<S828>:25' */
            /* Call Fsft */
            VeLINR_y_PECP2_POST_RUN_STAT_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S747>/Fsft' */
            /* FunctionCaller: '<S829>/Function Caller' */
            /* Event: '<S828>:39' */
            Rte_Call_FsftPMPR_e_LTPsvPump2_PstRnSt_FsftPMPR_e_LTPsvPump2_PstRnSt
                ();

            /* End of Outputs for SubSystem: '<S747>/Fsft' */
            /* Transition: '<S828>:29' */
        }
        else
        {
            /* Transition: '<S828>:30' */
            /* Call Tmot */
            VeLINR_y_PECP2_POST_RUN_STAT_CallStatus = 3U;

            /* Event: '<S828>:40' */
        }

        /* Transition: '<S828>:36' */
        /* Transition: '<S828>:23' */
    }
    else
    {
        /* Transition: '<S828>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVe_g14) == 133)
        {
            /* Transition: '<S828>:33' */
            /* Transition: '<S828>:35' */
            /* Call Nothing */
            VeLINR_y_PECP2_POST_RUN_STAT_CallStatus = 4U;

            /* Transition: '<S828>:23' */
        }
        else
        {
            /* Transition: '<S828>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVe_g14) == 1)
            {
                /* Transition: '<S828>:48' */
                /* Transition: '<S828>:53' */
                FA_out_n4 = true;

                /* Transition: '<S828>:56' */
            }
            else
            {
                /* Transition: '<S828>:52' */
            }

            /* Transition: '<S828>:37' */
            /* Call Poke */
            VeLINR_y_PECP2_POST_RUN_STAT_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S747>/Poke' */
            /* FunctionCaller: '<S830>/Function Caller' */
            /* Event: '<S828>:38' */
            Rte_Call_PokePMPR_e_LTPsvPump2_PstRnSt_PokePMPR_e_LTPsvPump2_PstRnSt
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_emg, FA_out_n4);

            /* End of Outputs for SubSystem: '<S747>/Poke' */
        }
    }

    /* End of Chart: '<S824>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP2_RPM_ACTL_PERCT_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP2_RPM_ACTL_PERCT_ErrSts'
     */
    /* Transition: '<S828>:19' */
    rtb_TmpSignalConversionAtVe_d4v =
        Rte_Read_VeLINR_Pct_PECP2_RPM_ACTL_PERCT_VeLINR_Pct_PECP2_RPM_ACTL_PERCT
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_P_l);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP2_RPM_ACTL_PERCT_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S835>:1' */
    (void)
        Rte_Read_VeLINR_b_PECP2_RPM_ACTL_PERCT_TO_VeLINR_b_PECP2_RPM_ACTL_PERCT_TO
        (&FA_out_hg);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S831>/Chart' */
    if (FA_out_hg)
    {
        /* Transition: '<S835>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S835>:6' */
            /* Transition: '<S835>:25' */
            /* Call Fsft */
            VeLINR_y_PECP2_RPM_ACTL_PERCT_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S748>/Fsft' */
            /* FunctionCaller: '<S836>/Function Caller' */
            /* Event: '<S835>:39' */
            Rte_Call_FsftPMIR_b_LTPsvPump2RPMActPct_FsftPMIR_b_LTPsvPump2RPMActPct
                ();

            /* End of Outputs for SubSystem: '<S748>/Fsft' */
            /* Transition: '<S835>:29' */
        }
        else
        {
            /* Transition: '<S835>:30' */
            /* Call Tmot */
            VeLINR_y_PECP2_RPM_ACTL_PERCT_CallStatus = 3U;

            /* Event: '<S835>:40' */
        }

        /* Transition: '<S835>:36' */
        /* Transition: '<S835>:23' */
    }
    else
    {
        /* Transition: '<S835>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVe_d4v) == 133)
        {
            /* Transition: '<S835>:33' */
            /* Transition: '<S835>:35' */
            /* Call Nothing */
            VeLINR_y_PECP2_RPM_ACTL_PERCT_CallStatus = 4U;

            /* Transition: '<S835>:23' */
        }
        else
        {
            /* Transition: '<S835>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVe_d4v) == 1)
            {
                /* Transition: '<S835>:48' */
                /* Transition: '<S835>:53' */
                FA_out_hg = true;

                /* Transition: '<S835>:56' */
            }
            else
            {
                /* Transition: '<S835>:52' */
            }

            /* Transition: '<S835>:37' */
            /* Call Poke */
            VeLINR_y_PECP2_RPM_ACTL_PERCT_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S748>/Poke' */
            /* FunctionCaller: '<S837>/Function Caller' */
            /* Event: '<S835>:38' */
            Rte_Call_PokePMIR_Pct_LTPsvPump2RPMAct_PokePMIR_Pct_LTPsvPump2RPMAct
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_P_l, FA_out_hg);

            /* End of Outputs for SubSystem: '<S748>/Poke' */
        }
    }

    /* End of Chart: '<S831>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP2_RPM_TGT_PERCT_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP2_RPM_TGT_PERCT_ErrSts'
     */
    /* Transition: '<S835>:19' */
    rtb_TmpSignalConversionAtVe_mgc =
        Rte_Read_VeLINR_Pct_PECP2_RPM_TGT_PERCT_VeLINR_Pct_PECP2_RPM_TGT_PERCT
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_P_k);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP2_RPM_TGT_PERCT_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S842>:1' */
    (void)
        Rte_Read_VeLINR_b_PECP2_RPM_TGT_PERCT_TO_VeLINR_b_PECP2_RPM_TGT_PERCT_TO
        (&FA_out_ag);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S838>/Chart' */
    if (FA_out_ag)
    {
        /* Transition: '<S842>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S842>:6' */
            /* Transition: '<S842>:25' */
            /* Call Fsft */
            VeLINR_y_PECP2_RPM_TGT_PERCT_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S749>/Fsft' */
            /* FunctionCaller: '<S843>/Function Caller' */
            /* Event: '<S842>:39' */
            Rte_Call_FsftPMIR_b_LTPsvPump2RPMTgtPct_FsftPMIR_b_LTPsvPump2RPMTgtPct
                ();

            /* End of Outputs for SubSystem: '<S749>/Fsft' */
            /* Transition: '<S842>:29' */
        }
        else
        {
            /* Transition: '<S842>:30' */
            /* Call Tmot */
            VeLINR_y_PECP2_RPM_TGT_PERCT_CallStatus = 3U;

            /* Event: '<S842>:40' */
        }

        /* Transition: '<S842>:36' */
        /* Transition: '<S842>:23' */
    }
    else
    {
        /* Transition: '<S842>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVe_mgc) == 133)
        {
            /* Transition: '<S842>:33' */
            /* Transition: '<S842>:35' */
            /* Call Nothing */
            VeLINR_y_PECP2_RPM_TGT_PERCT_CallStatus = 4U;

            /* Transition: '<S842>:23' */
        }
        else
        {
            /* Transition: '<S842>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVe_mgc) == 1)
            {
                /* Transition: '<S842>:48' */
                /* Transition: '<S842>:53' */
                FA_out_ag = true;

                /* Transition: '<S842>:56' */
            }
            else
            {
                /* Transition: '<S842>:52' */
            }

            /* Transition: '<S842>:37' */
            /* Call Poke */
            VeLINR_y_PECP2_RPM_TGT_PERCT_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S749>/Poke' */
            /* FunctionCaller: '<S844>/Function Caller' */
            /* Event: '<S842>:38' */
            Rte_Call_PokePMIR_Pct_LTPsvPump2RPMTgt_PokePMIR_Pct_LTPsvPump2RPMTgt
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_P_k, FA_out_ag);

            /* End of Outputs for SubSystem: '<S749>/Poke' */
        }
    }

    /* End of Chart: '<S838>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP2_TEMP_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP2_TEMP_ErrSts'
     */
    /* Transition: '<S842>:19' */
    rtb_TmpSignalConversionAtVeL_f2 =
        Rte_Read_VeLINR_T_PECP2_TEMP_VeLINR_T_PECP2_TEMP
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_T_P);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP2_TEMP_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S849>:1' */
    (void)Rte_Read_VeLINR_b_PECP2_TEMP_TO_VeLINR_b_PECP2_TEMP_TO(&FA_out_n0z);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S845>/Chart' */
    if (FA_out_n0z)
    {
        /* Transition: '<S849>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S849>:6' */
            /* Transition: '<S849>:25' */
            /* Call Fsft */
            VeLINR_y_PECP2_TEMP_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S750>/Fsft' */
            /* FunctionCaller: '<S850>/Function Caller' */
            /* Event: '<S849>:39' */
            Rte_Call_FsftPMIR_b_LTPsvPump2Temp_FsftPMIR_b_LTPsvPump2Temp();

            /* End of Outputs for SubSystem: '<S750>/Fsft' */
            /* Transition: '<S849>:29' */
        }
        else
        {
            /* Transition: '<S849>:30' */
            /* Call Tmot */
            VeLINR_y_PECP2_TEMP_CallStatus = 3U;

            /* Event: '<S849>:40' */
        }

        /* Transition: '<S849>:36' */
        /* Transition: '<S849>:23' */
    }
    else
    {
        /* Transition: '<S849>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_f2) == 133)
        {
            /* Transition: '<S849>:33' */
            /* Transition: '<S849>:35' */
            /* Call Nothing */
            VeLINR_y_PECP2_TEMP_CallStatus = 4U;

            /* Transition: '<S849>:23' */
        }
        else
        {
            /* Transition: '<S849>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_f2) == 1)
            {
                /* Transition: '<S849>:48' */
                /* Transition: '<S849>:53' */
                FA_out_n0z = true;

                /* Transition: '<S849>:56' */
            }
            else
            {
                /* Transition: '<S849>:52' */
            }

            /* Transition: '<S849>:37' */
            /* Call Poke */
            VeLINR_y_PECP2_TEMP_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S750>/Poke' */
            /* FunctionCaller: '<S851>/Function Caller' */
            /* Event: '<S849>:38' */
            Rte_Call_PokePMIR_T_LTPsvPump2Temp_PokePMIR_T_LTPsvPump2Temp
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_T_P, FA_out_n0z);

            /* End of Outputs for SubSystem: '<S750>/Poke' */
        }
    }

    /* End of Chart: '<S845>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP2_VLTG_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP2_VLTG_ErrSts'
     */
    /* Transition: '<S849>:19' */
    rtb_TmpSignalConversionAtVe_aud =
        Rte_Read_VeLINR_U_PECP2_VLTG_VeLINR_U_PECP2_VLTG
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_U_P);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP2_VLTG_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S856>:1' */
    (void)Rte_Read_VeLINR_b_PECP2_VLTG_TO_VeLINR_b_PECP2_VLTG_TO(&FA_out_n0);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S852>/Chart' */
    if (FA_out_n0)
    {
        /* Transition: '<S856>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S856>:6' */
            /* Transition: '<S856>:25' */
            /* Call Fsft */
            VeLINR_y_PECP2_VLTG_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S751>/Fsft' */
            /* FunctionCaller: '<S857>/Function Caller' */
            /* Event: '<S856>:39' */
            Rte_Call_FsftPMIR_b_LT_PsvPmp2Vltg_FsftPMIR_b_LT_PsvPmp2Vltg();

            /* End of Outputs for SubSystem: '<S751>/Fsft' */
            /* Transition: '<S856>:29' */
        }
        else
        {
            /* Transition: '<S856>:30' */
            /* Call Tmot */
            VeLINR_y_PECP2_VLTG_CallStatus = 3U;

            /* Event: '<S856>:40' */
        }

        /* Transition: '<S856>:36' */
        /* Transition: '<S856>:23' */
    }
    else
    {
        /* Transition: '<S856>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVe_aud) == 133)
        {
            /* Transition: '<S856>:33' */
            /* Transition: '<S856>:35' */
            /* Call Nothing */
            VeLINR_y_PECP2_VLTG_CallStatus = 4U;

            /* Transition: '<S856>:23' */
        }
        else
        {
            /* Transition: '<S856>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVe_aud) == 1)
            {
                /* Transition: '<S856>:48' */
                /* Transition: '<S856>:53' */
                FA_out_n0 = true;

                /* Transition: '<S856>:56' */
            }
            else
            {
                /* Transition: '<S856>:52' */
            }

            /* Transition: '<S856>:37' */
            /* Call Poke */
            VeLINR_y_PECP2_VLTG_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S751>/Poke' */
            /* FunctionCaller: '<S858>/Function Caller' */
            /* Event: '<S856>:38' */
            Rte_Call_PokePMIR_U_LT_PsvPmp2Vltg_PokePMIR_U_LT_PsvPmp2Vltg
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_U_P, FA_out_n0);

            /* End of Outputs for SubSystem: '<S751>/Poke' */
        }
    }

    /* End of Chart: '<S852>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP2_VLTG_ERR_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP2_VLTG_ERR_ErrSts'
     */
    /* Transition: '<S856>:19' */
    rtb_TmpSignalConversionAtVeL_ix =
        Rte_Read_VeLINR_e_PECP2_VLTG_ERR_VeLINR_e_PECP2_VLTG_ERR
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__j4);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP2_VLTG_ERR_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S863>:1' */
    (void)Rte_Read_VeLINR_b_PECP2_VLTG_ERR_TO_VeLINR_b_PECP2_VLTG_ERR_TO
        (&FA_out_b);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S859>/Chart' */
    if (FA_out_b)
    {
        /* Transition: '<S863>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S863>:6' */
            /* Transition: '<S863>:25' */
            /* Call Fsft */
            VeLINR_y_PECP2_VLTG_ERR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S752>/Fsft' */
            /* FunctionCaller: '<S864>/Function Caller' */
            /* Event: '<S863>:39' */
            Rte_Call_FsftPMIR_b_LTPsvPump2SuppVltErr_FsftPMIR_b_LTPsvPump2SuppVltErr
                ();

            /* End of Outputs for SubSystem: '<S752>/Fsft' */
            /* Transition: '<S863>:29' */
        }
        else
        {
            /* Transition: '<S863>:30' */
            /* Call Tmot */
            VeLINR_y_PECP2_VLTG_ERR_CallStatus = 3U;

            /* Event: '<S863>:40' */
        }

        /* Transition: '<S863>:36' */
        /* Transition: '<S863>:23' */
    }
    else
    {
        /* Transition: '<S863>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_ix) == 133)
        {
            /* Transition: '<S863>:33' */
            /* Transition: '<S863>:35' */
            /* Call Nothing */
            VeLINR_y_PECP2_VLTG_ERR_CallStatus = 4U;

            /* Transition: '<S863>:23' */
        }
        else
        {
            /* Transition: '<S863>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_ix) == 1)
            {
                /* Transition: '<S863>:48' */
                /* Transition: '<S863>:53' */
                FA_out_b = true;

                /* Transition: '<S863>:56' */
            }
            else
            {
                /* Transition: '<S863>:52' */
            }

            /* Transition: '<S863>:37' */
            /* Call Poke */
            VeLINR_y_PECP2_VLTG_ERR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S752>/Poke' */
            /* FunctionCaller: '<S865>/Function Caller' */
            /* Event: '<S863>:38' */
            Rte_Call_PokePMIR_e_LTPsvPump2SuppVltErr_PokePMIR_e_LTPsvPump2SuppVltErr
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__j4, FA_out_b);

            /* End of Outputs for SubSystem: '<S752>/Poke' */
        }
    }

    /* End of Chart: '<S859>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_RsErr_PECP2_PUMP_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_RsErr_PECP2_PUMP_ErrSts'
     */
    /* Transition: '<S863>:19' */
    rtb_TmpSignalConversionAtVeL_j3 =
        Rte_Read_VeLINR_b_RsErr_PECP2_PUMP_VeLINR_b_RsErr_PECP2_PUMP
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__h5);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_RsErr_PECP2_PUMP_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S869>:1' */
    (void)Rte_Read_VeLINR_b_RsErr_PECP2_PUMP_TO_VeLINR_b_RsErr_PECP2_PUMP_TO
        (&FA_out_o);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S866>/Chart' */
    if (FA_out_o)
    {
        /* Transition: '<S869>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S869>:6' */
            /* Transition: '<S869>:25' */
            /* Call Fsft */
            VeLINR_y_RsErr_PECP2_PUMP_CallStatus = 2U;

            /* Event: '<S869>:39' */
            /* Transition: '<S869>:29' */
        }
        else
        {
            /* Transition: '<S869>:30' */
            /* Call Tmot */
            VeLINR_y_RsErr_PECP2_PUMP_CallStatus = 3U;

            /* Event: '<S869>:40' */
        }

        /* Transition: '<S869>:36' */
        /* Transition: '<S869>:23' */
    }
    else
    {
        /* Transition: '<S869>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_j3) == 133)
        {
            /* Transition: '<S869>:33' */
            /* Transition: '<S869>:35' */
            /* Call Nothing */
            VeLINR_y_RsErr_PECP2_PUMP_CallStatus = 4U;

            /* Transition: '<S869>:23' */
        }
        else
        {
            /* Transition: '<S869>:46' */
            /* Transition: '<S869>:37' */
            /* Call Poke */
            VeLINR_y_RsErr_PECP2_PUMP_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S753>/Poke' */
            /* FunctionCaller: '<S870>/Function Caller' */
            /* Event: '<S869>:38' */
            Rte_Call_PokePMIR_b_LTPsvPump2RespErr_PokePMIR_b_LTPsvPump2RespErr
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__h5);

            /* End of Outputs for SubSystem: '<S753>/Poke' */
        }
    }

    /* End of Chart: '<S866>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP2_SUPPLIER_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP2_SUPPLIER_ErrSts'
     */
    /* Transition: '<S869>:19' */
    rtb_TmpSignalConversionAtVeL_mi =
        Rte_Read_VeLINR_e_PECP2_SUPPLIER_VeLINR_e_PECP2_SUPPLIER
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__gg);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP2_SUPPLIER_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S876>:1' */
    (void)Rte_Read_VeLINR_b_PECP2_SUPPLIER_TO_VeLINR_b_PECP2_SUPPLIER_TO
        (&tmpRead_z);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S873>/Chart' */
    if (tmpRead_z)
    {
        /* Transition: '<S876>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S876>:6' */
            /* Transition: '<S876>:25' */
            /* Call Fsft */
            VeLINR_y_PECP2_SUPPLIER_CallStatus = 2U;

            /* Event: '<S876>:39' */
            /* Transition: '<S876>:29' */
        }
        else
        {
            /* Transition: '<S876>:30' */
            /* Call Tmot */
            VeLINR_y_PECP2_SUPPLIER_CallStatus = 3U;

            /* Event: '<S876>:40' */
        }

        /* Transition: '<S876>:36' */
        /* Transition: '<S876>:23' */
    }
    else
    {
        /* Transition: '<S876>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_mi) == 133)
        {
            /* Transition: '<S876>:33' */
            /* Transition: '<S876>:35' */
            /* Call Nothing */
            VeLINR_y_PECP2_SUPPLIER_CallStatus = 4U;

            /* Transition: '<S876>:23' */
        }
        else
        {
            /* Transition: '<S876>:46' */
            /* Transition: '<S876>:37' */
            /* Call Poke */
            VeLINR_y_PECP2_SUPPLIER_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S871>/Poke' */
            /* FunctionCaller: '<S877>/Function Caller' */
            /* Event: '<S876>:38' */
            Rte_Call_PokePMIR_e_LTPsvPmp2ProdSuplr_ID_PokePMIR_e_LTPsvPmp2ProdSuplr_ID
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__gg);

            /* End of Outputs for SubSystem: '<S871>/Poke' */
        }
    }

    /* End of Chart: '<S873>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP2_VERSION_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP2_VERSION_ErrSts'
     */
    /* Transition: '<S876>:19' */
    rtb_TmpSignalConversionAtVeL_js =
        Rte_Read_VeLINR_y_PECP2_VERSION_VeLINR_y_PECP2_VERSION
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_y_P);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP2_VERSION_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S881>:1' */
    (void)Rte_Read_VeLINR_b_PECP2_VERSION_TO_VeLINR_b_PECP2_VERSION_TO
        (&tmpRead_10);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S878>/Chart' */
    if (tmpRead_10)
    {
        /* Transition: '<S881>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S881>:6' */
            /* Transition: '<S881>:25' */
            /* Call Fsft */
            VeLINR_y_PECP2_VERSION_CallStatus = 2U;

            /* Event: '<S881>:39' */
            /* Transition: '<S881>:29' */
        }
        else
        {
            /* Transition: '<S881>:30' */
            /* Call Tmot */
            VeLINR_y_PECP2_VERSION_CallStatus = 3U;

            /* Event: '<S881>:40' */
        }

        /* Transition: '<S881>:36' */
        /* Transition: '<S881>:23' */
    }
    else
    {
        /* Transition: '<S881>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_js) == 133)
        {
            /* Transition: '<S881>:33' */
            /* Transition: '<S881>:35' */
            /* Call Nothing */
            VeLINR_y_PECP2_VERSION_CallStatus = 4U;

            /* Transition: '<S881>:23' */
        }
        else
        {
            /* Transition: '<S881>:46' */
            /* Transition: '<S881>:37' */
            /* Call Poke */
            VeLINR_y_PECP2_VERSION_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S872>/Poke' */
            /* DataTypeConversion: '<S882>/Data Type Conversion' */
            /* Event: '<S881>:38' */
            tmp = fmodf(floorf(LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_y_P),
                        256.0F);

            /* FunctionCaller: '<S882>/Function Caller' incorporates:
             *  DataTypeConversion: '<S882>/Data Type Conversion'
             */
            Rte_Call_PokePMIR_y_LTPsvPump2_Ver_PokePMIR_y_LTPsvPump2_Ver((uint8)
                ((tmp < 0.0F) ? ((sint32)((uint8)((sint32)(-((sint32)((sint8)
                ((uint8)((float32)(-tmp))))))))) : ((sint32)((uint8)tmp))));

            /* End of Outputs for SubSystem: '<S872>/Poke' */
        }
    }

    /* End of Chart: '<S878>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PwrPanel2AC_PrsntSens1_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PwrPanel2AC_PrsntSens1_ErrSts'
     */
    /* Transition: '<S881>:19' */
    rtb_TmpSignalConversionAtVeL_en =
        Rte_Read_VeLINR_b_PwrPanel2AC_PrsntSens1_VeLINR_b_PwrPanel2AC_PrsntSens1
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_P);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PwrPanel2AC_PrsntSens1TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S909>:1' */
    (void)
        Rte_Read_VeLINR_b_PwrPanel2AC_PrsntSens1TO_VeLINR_b_PwrPanel2AC_PrsntSens1TO
        (&tmpRead_11);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S905>/Chart' */
    if (tmpRead_11)
    {
        /* Transition: '<S909>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S909>:6' */
            /* Transition: '<S909>:25' */
            /* Call Fsft */
            VeLINR_y_PwrPanel2AC_PrsntSens1_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S883>/Fsft' */
            /* FunctionCaller: '<S910>/Function Caller' */
            /* Event: '<S909>:39' */
            Rte_Call_FsftCITR_b_PP2ACPresentSens1_FsftCITR_b_PP2ACPresentSens1();

            /* End of Outputs for SubSystem: '<S883>/Fsft' */
            /* Transition: '<S909>:29' */
        }
        else
        {
            /* Transition: '<S909>:30' */
            /* Call Tmot */
            VeLINR_y_PwrPanel2AC_PrsntSens1_CallStatus = 3U;

            /* Event: '<S909>:40' */
        }

        /* Transition: '<S909>:36' */
        /* Transition: '<S909>:23' */
    }
    else
    {
        /* Transition: '<S909>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_en) == 133)
        {
            /* Transition: '<S909>:33' */
            /* Transition: '<S909>:35' */
            /* Call Nothing */
            VeLINR_y_PwrPanel2AC_PrsntSens1_CallStatus = 4U;

            /* Transition: '<S909>:23' */
        }
        else
        {
            /* Transition: '<S909>:46' */
            /* Transition: '<S909>:37' */
            /* Call Poke */
            VeLINR_y_PwrPanel2AC_PrsntSens1_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S883>/Poke' */
            /* FunctionCaller: '<S911>/Function Caller' incorporates:
             *  Constant: '<S911>/Constant'
             */
            /* Event: '<S909>:38' */
            Rte_Call_PokeCITR_b_PP2ACPresentSens1_PokeCITR_b_PP2ACPresentSens1
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_P, false);

            /* End of Outputs for SubSystem: '<S883>/Poke' */
        }
    }

    /* End of Chart: '<S905>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PwrPanel2AC_PrsntSens2_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PwrPanel2AC_PrsntSens2_ErrSts'
     */
    /* Transition: '<S909>:19' */
    rtb_TmpSignalConversionAtVeL_oa =
        Rte_Read_VeLINR_b_PwrPanel2AC_PrsntSens2_VeLINR_b_PwrPanel2AC_PrsntSens2
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_n);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PwrPanel2AC_PrsntSens2TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S916>:1' */
    (void)
        Rte_Read_VeLINR_b_PwrPanel2AC_PrsntSens2TO_VeLINR_b_PwrPanel2AC_PrsntSens2TO
        (&tmpRead_12);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S912>/Chart' */
    if (tmpRead_12)
    {
        /* Transition: '<S916>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S916>:6' */
            /* Transition: '<S916>:25' */
            /* Call Fsft */
            VeLINR_y_PwrPanel2AC_PrsntSens2_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S884>/Fsft' */
            /* FunctionCaller: '<S917>/Function Caller' */
            /* Event: '<S916>:39' */
            Rte_Call_FsftCITR_b_PP2ACPresentSens2_FsftCITR_b_PP2ACPresentSens2();

            /* End of Outputs for SubSystem: '<S884>/Fsft' */
            /* Transition: '<S916>:29' */
        }
        else
        {
            /* Transition: '<S916>:30' */
            /* Call Tmot */
            VeLINR_y_PwrPanel2AC_PrsntSens2_CallStatus = 3U;

            /* Event: '<S916>:40' */
        }

        /* Transition: '<S916>:36' */
        /* Transition: '<S916>:23' */
    }
    else
    {
        /* Transition: '<S916>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_oa) == 133)
        {
            /* Transition: '<S916>:33' */
            /* Transition: '<S916>:35' */
            /* Call Nothing */
            VeLINR_y_PwrPanel2AC_PrsntSens2_CallStatus = 4U;

            /* Transition: '<S916>:23' */
        }
        else
        {
            /* Transition: '<S916>:46' */
            /* Transition: '<S916>:37' */
            /* Call Poke */
            VeLINR_y_PwrPanel2AC_PrsntSens2_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S884>/Poke' */
            /* FunctionCaller: '<S918>/Function Caller' incorporates:
             *  Constant: '<S918>/Constant'
             */
            /* Event: '<S916>:38' */
            Rte_Call_PokeCITR_b_PP2ACPresentSens2_PokeCITR_b_PP2ACPresentSens2
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_n, false);

            /* End of Outputs for SubSystem: '<S884>/Poke' */
        }
    }

    /* End of Chart: '<S912>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PowerPanel2ButtonState_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PowerPanel2ButtonState_ErrSts'
     */
    /* Transition: '<S916>:19' */
    rtb_TmpSignalConversionAtVeL_hm =
        Rte_Read_VeLINR_b_PowerPanel2ButtonState_VeLINR_b_PowerPanel2ButtonState
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__ff);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PowerPanel2ButtonStateTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S923>:1' */
    (void)
        Rte_Read_VeLINR_b_PowerPanel2ButtonStateTO_VeLINR_b_PowerPanel2ButtonStateTO
        (&tmpRead_13);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S919>/Chart' */
    if (tmpRead_13)
    {
        /* Transition: '<S923>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S923>:6' */
            /* Transition: '<S923>:25' */
            /* Call Fsft */
            VeLINR_y_PowerPanel2ButtonState_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S885>/Fsft' */
            /* FunctionCaller: '<S924>/Function Caller' */
            /* Event: '<S923>:39' */
            Rte_Call_FsftCITR_b_PP2ButtonSts_FsftCITR_b_PP2ButtonSts();

            /* End of Outputs for SubSystem: '<S885>/Fsft' */
            /* Transition: '<S923>:29' */
        }
        else
        {
            /* Transition: '<S923>:30' */
            /* Call Tmot */
            VeLINR_y_PowerPanel2ButtonState_CallStatus = 3U;

            /* Event: '<S923>:40' */
        }

        /* Transition: '<S923>:36' */
        /* Transition: '<S923>:23' */
    }
    else
    {
        /* Transition: '<S923>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_hm) == 133)
        {
            /* Transition: '<S923>:33' */
            /* Transition: '<S923>:35' */
            /* Call Nothing */
            VeLINR_y_PowerPanel2ButtonState_CallStatus = 4U;

            /* Transition: '<S923>:23' */
        }
        else
        {
            /* Transition: '<S923>:46' */
            /* Transition: '<S923>:37' */
            /* Call Poke */
            VeLINR_y_PowerPanel2ButtonState_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S885>/Poke' */
            /* FunctionCaller: '<S925>/Function Caller' incorporates:
             *  Constant: '<S925>/Constant'
             */
            /* Event: '<S923>:38' */
            Rte_Call_PokeCITR_b_PP2ButtonSts_PokeCITR_b_PP2ButtonSts
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__ff, false);

            /* End of Outputs for SubSystem: '<S885>/Poke' */
        }
    }

    /* End of Chart: '<S919>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PwrPanel2CurrDrawSens1_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PwrPanel2CurrDrawSens1_ErrSts'
     */
    /* Transition: '<S923>:19' */
    rtb_TmpSignalConversionAtVeL_m0 =
        Rte_Read_VeLINR_d_PwrPanel2CurrDrawSens1_VeLINR_d_PwrPanel2CurrDrawSens1
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_d_P);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PwrPanel2CurrDrawSens1TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S930>:1' */
    (void)
        Rte_Read_VeLINR_b_PwrPanel2CurrDrawSens1TO_VeLINR_b_PwrPanel2CurrDrawSens1TO
        (&tmpRead_14);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S926>/Chart' */
    if (tmpRead_14)
    {
        /* Transition: '<S930>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S930>:6' */
            /* Transition: '<S930>:25' */
            /* Call Fsft */
            VeLINR_y_PwrPanel2CurrDrawSens1_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S886>/Fsft' */
            /* FunctionCaller: '<S931>/Function Caller' */
            /* Event: '<S930>:39' */
            Rte_Call_FsftCITR_I_PP2CurrentDrawSens1_FsftCITR_I_PP2CurrentDrawSens1
                ();

            /* End of Outputs for SubSystem: '<S886>/Fsft' */
            /* Transition: '<S930>:29' */
        }
        else
        {
            /* Transition: '<S930>:30' */
            /* Call Tmot */
            VeLINR_y_PwrPanel2CurrDrawSens1_CallStatus = 3U;

            /* Event: '<S930>:40' */
        }

        /* Transition: '<S930>:36' */
        /* Transition: '<S930>:23' */
    }
    else
    {
        /* Transition: '<S930>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_m0) == 133)
        {
            /* Transition: '<S930>:33' */
            /* Transition: '<S930>:35' */
            /* Call Nothing */
            VeLINR_y_PwrPanel2CurrDrawSens1_CallStatus = 4U;

            /* Transition: '<S930>:23' */
        }
        else
        {
            /* Transition: '<S930>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_m0) == 1)
            {
                /* Transition: '<S930>:48' */
                /* Transition: '<S930>:53' */
                FA_out_o = true;

                /* Transition: '<S930>:56' */
            }
            else
            {
                /* Transition: '<S930>:52' */
                FA_out_o = false;
            }

            /* Transition: '<S930>:37' */
            /* Call Poke */
            VeLINR_y_PwrPanel2CurrDrawSens1_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S886>/Poke' */
            /* FunctionCaller: '<S932>/Function Caller' */
            /* Event: '<S930>:38' */
            Rte_Call_PokeCITR_I_PP2CurrentDrawSens1_PokeCITR_I_PP2CurrentDrawSens1
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_d_P, FA_out_o);

            /* End of Outputs for SubSystem: '<S886>/Poke' */
        }
    }

    /* End of Chart: '<S926>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PwrPanel2CurrDrawSens2_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PwrPanel2CurrDrawSens2_ErrSts'
     */
    /* Transition: '<S930>:19' */
    rtb_TmpSignalConversionAtVeL_np =
        Rte_Read_VeLINR_d_PwrPanel2CurrDrawSens2_VeLINR_d_PwrPanel2CurrDrawSens2
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_d_n);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PwrPanel2CurrDrawSens2TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S937>:1' */
    (void)
        Rte_Read_VeLINR_b_PwrPanel2CurrDrawSens2TO_VeLINR_b_PwrPanel2CurrDrawSens2TO
        (&FA_out_j0);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S933>/Chart' */
    if (FA_out_j0)
    {
        /* Transition: '<S937>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S937>:6' */
            /* Transition: '<S937>:25' */
            /* Call Fsft */
            VeLINR_y_PwrPanel2CurrDrawSens2_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S887>/Fsft' */
            /* FunctionCaller: '<S938>/Function Caller' */
            /* Event: '<S937>:39' */
            Rte_Call_FsftCITR_I_PP2CurrentDrawSens2_FsftCITR_I_PP2CurrentDrawSens2
                ();

            /* End of Outputs for SubSystem: '<S887>/Fsft' */
            /* Transition: '<S937>:29' */
        }
        else
        {
            /* Transition: '<S937>:30' */
            /* Call Tmot */
            VeLINR_y_PwrPanel2CurrDrawSens2_CallStatus = 3U;

            /* Event: '<S937>:40' */
        }

        /* Transition: '<S937>:36' */
        /* Transition: '<S937>:23' */
    }
    else
    {
        /* Transition: '<S937>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_np) == 133)
        {
            /* Transition: '<S937>:33' */
            /* Transition: '<S937>:35' */
            /* Call Nothing */
            VeLINR_y_PwrPanel2CurrDrawSens2_CallStatus = 4U;

            /* Transition: '<S937>:23' */
        }
        else
        {
            /* Transition: '<S937>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_np) == 1)
            {
                /* Transition: '<S937>:48' */
                /* Transition: '<S937>:53' */
                FA_out_j0 = true;

                /* Transition: '<S937>:56' */
            }
            else
            {
                /* Transition: '<S937>:52' */
            }

            /* Transition: '<S937>:37' */
            /* Call Poke */
            VeLINR_y_PwrPanel2CurrDrawSens2_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S887>/Poke' */
            /* FunctionCaller: '<S939>/Function Caller' */
            /* Event: '<S937>:38' */
            Rte_Call_PokeCITR_I_PP2CurrentDrawSens2_PokeCITR_I_PP2CurrentDrawSens2
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_d_n, FA_out_j0);

            /* End of Outputs for SubSystem: '<S887>/Poke' */
        }
    }

    /* End of Chart: '<S933>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PowerPanel2_Fault_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PowerPanel2_Fault_ErrSts'
     */
    /* Transition: '<S937>:19' */
    rtb_TmpSignalConversionAtVeL_hw =
        Rte_Read_VeLINR_e_PowerPanel2_Fault_VeLINR_e_PowerPanel2_Fault
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__kn);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PowerPanel2_FaultTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S944>:1' */
    (void)Rte_Read_VeLINR_b_PowerPanel2_FaultTO_VeLINR_b_PowerPanel2_FaultTO
        (&FA_out_a);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S940>/Chart' */
    if (FA_out_a)
    {
        /* Transition: '<S944>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S944>:6' */
            /* Transition: '<S944>:25' */
            /* Call Fsft */
            VeLINR_y_PowerPanel2_Fault_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S888>/Fsft' */
            /* FunctionCaller: '<S945>/Function Caller' */
            /* Event: '<S944>:39' */
            Rte_Call_FsftCITR_e_PP2Fault_FsftCITR_e_PP2Fault();

            /* End of Outputs for SubSystem: '<S888>/Fsft' */
            /* Transition: '<S944>:29' */
        }
        else
        {
            /* Transition: '<S944>:30' */
            /* Call Tmot */
            VeLINR_y_PowerPanel2_Fault_CallStatus = 3U;

            /* Event: '<S944>:40' */
        }

        /* Transition: '<S944>:36' */
        /* Transition: '<S944>:23' */
    }
    else
    {
        /* Transition: '<S944>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_hw) == 133)
        {
            /* Transition: '<S944>:33' */
            /* Transition: '<S944>:35' */
            /* Call Nothing */
            VeLINR_y_PowerPanel2_Fault_CallStatus = 4U;

            /* Transition: '<S944>:23' */
        }
        else
        {
            /* Transition: '<S944>:46' */
            /* Transition: '<S944>:37' */
            /* Call Poke */
            VeLINR_y_PowerPanel2_Fault_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S888>/Poke' */
            /* FunctionCaller: '<S946>/Function Caller' incorporates:
             *  Constant: '<S946>/Constant'
             */
            /* Event: '<S944>:38' */
            Rte_Call_PokeCITR_e_PP2Fault_PokeCITR_e_PP2Fault
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__kn, false);

            /* End of Outputs for SubSystem: '<S888>/Poke' */
        }
    }

    /* End of Chart: '<S940>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PwrPanel2_Fault_Reason_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PwrPanel2_Fault_Reason_ErrSts'
     */
    /* Transition: '<S944>:19' */
    rtb_TmpSignalConversionAtVeL_hh =
        Rte_Read_VeLINR_e_PwrPanel2_Fault_Reason_VeLINR_e_PwrPanel2_Fault_Reason
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__lu);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PwrPanel2_Fault_ReasonTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S951>:1' */
    (void)
        Rte_Read_VeLINR_b_PwrPanel2_Fault_ReasonTO_VeLINR_b_PwrPanel2_Fault_ReasonTO
        (&tmpRead_15);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S947>/Chart' */
    if (tmpRead_15)
    {
        /* Transition: '<S951>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S951>:6' */
            /* Transition: '<S951>:25' */
            /* Call Fsft */
            VeLINR_y_PwrPanel2_Fault_Reason_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S889>/Fsft' */
            /* FunctionCaller: '<S952>/Function Caller' */
            /* Event: '<S951>:39' */
            Rte_Call_FsftCITR_e_PP2FaultRsn_FsftCITR_e_PP2FaultRsn();

            /* End of Outputs for SubSystem: '<S889>/Fsft' */
            /* Transition: '<S951>:29' */
        }
        else
        {
            /* Transition: '<S951>:30' */
            /* Call Tmot */
            VeLINR_y_PwrPanel2_Fault_Reason_CallStatus = 3U;

            /* Event: '<S951>:40' */
        }

        /* Transition: '<S951>:36' */
        /* Transition: '<S951>:23' */
    }
    else
    {
        /* Transition: '<S951>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_hh) == 133)
        {
            /* Transition: '<S951>:33' */
            /* Transition: '<S951>:35' */
            /* Call Nothing */
            VeLINR_y_PwrPanel2_Fault_Reason_CallStatus = 4U;

            /* Transition: '<S951>:23' */
        }
        else
        {
            /* Transition: '<S951>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_hh) == 1)
            {
                /* Transition: '<S951>:48' */
                /* Transition: '<S951>:53' */
                FA_out_a = true;

                /* Transition: '<S951>:56' */
            }
            else
            {
                /* Transition: '<S951>:52' */
                FA_out_a = false;
            }

            /* Transition: '<S951>:37' */
            /* Call Poke */
            VeLINR_y_PwrPanel2_Fault_Reason_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S889>/Poke' */
            /* FunctionCaller: '<S953>/Function Caller' */
            /* Event: '<S951>:38' */
            Rte_Call_PokeCITR_e_PP2FaultRsn_PokeCITR_e_PP2FaultRsn
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__lu, FA_out_a);

            /* End of Outputs for SubSystem: '<S889>/Poke' */
        }
    }

    /* End of Chart: '<S947>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_b_PowPan2_Gnd_Fault_Det' incorporates:
     *  Inport: '<Root>/VeLINR_b_PowPan2_Gnd_Fault_DetTO'
     */
    /* Transition: '<S951>:19' */
#if Rte_SysCon_VrntLR3B_PowerPanel2GndFaultDetected

    /* Outputs for Atomic SubSystem: '<S19>/PowerPanel2_Gnd_Fault_Detected' */
    /* SignalConversion generated from: '<S2>/VeLINR_b_PowPan2_Gnd_Fault_Det' incorporates:
     *  Inport: '<Root>/VeLINR_b_PowPan2_Gnd_Fault_Det'
     */
    rtb_TmpSignalConversionAtVeL_iz =
        Rte_Read_VeLINR_b_PowPan2_Gnd_Fault_Det_VeLINR_b_PowPan2_Gnd_Fault_Det
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__jp);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S959>:1' */
    (void)
        Rte_Read_VeLINR_b_PowPan2_Gnd_Fault_DetTO_VeLINR_b_PowPan2_Gnd_Fault_DetTO
        (&FA_out_jt);

    /* Outputs for Atomic SubSystem: '<S890>/PowerPanel2_Gnd_Fault_Detected' */
    /* Chart: '<S955>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_PowPan2_Gnd_Fault_DetTO'
     */
    if (FA_out_jt)
    {
        /* Transition: '<S959>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S959>:6' */
            /* Transition: '<S959>:25' */
            /* Call Fsft */
            VeLINR_y_PowPan2_Gnd_Fault_Det_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S954>/Fsft' */
            /* FunctionCaller: '<S960>/Function Caller' */
            /* Event: '<S959>:39' */
            Rte_Call_FsftCITR_b_PP2_Gnd_Fault_Det_FsftCITR_b_PP2_Gnd_Fault_Det();

            /* End of Outputs for SubSystem: '<S954>/Fsft' */
            /* Transition: '<S959>:29' */
        }
        else
        {
            /* Transition: '<S959>:30' */
            /* Call Tmot */
            VeLINR_y_PowPan2_Gnd_Fault_Det_CallStatus = 3U;

            /* Event: '<S959>:40' */
        }

        /* Transition: '<S959>:36' */
        /* Transition: '<S959>:23' */
    }
    else
    {
        /* Transition: '<S959>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_iz) == 133)
        {
            /* Transition: '<S959>:33' */
            /* Transition: '<S959>:35' */
            /* Call Nothing */
            VeLINR_y_PowPan2_Gnd_Fault_Det_CallStatus = 4U;

            /* Transition: '<S959>:23' */
        }
        else
        {
            /* Transition: '<S959>:46' */
            /* Transition: '<S959>:37' */
            /* Call Poke */
            VeLINR_y_PowPan2_Gnd_Fault_Det_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S954>/Poke' */
            /* FunctionCaller: '<S961>/Function Caller' incorporates:
             *  Constant: '<S961>/Constant'
             */
            /* Event: '<S959>:38' */
            Rte_Call_PokeCITR_b_PP2_Gnd_Fault_Det_PokeCITR_b_PP2_Gnd_Fault_Det
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__jp, false);

            /* End of Outputs for SubSystem: '<S954>/Poke' */
        }
    }

    /* End of Chart: '<S955>/Chart' */
    /* End of Outputs for SubSystem: '<S890>/PowerPanel2_Gnd_Fault_Detected' */
    /* End of Outputs for SubSystem: '<S19>/PowerPanel2_Gnd_Fault_Detected' */
    /* Transition: '<S959>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_b_PowPan2_Gnd_Fault_Det' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PowPan2_LED_A_Col_Fdbk' incorporates:
     *  Inport: '<Root>/VeLINR_b_PowPan2_LED_A_Col_FdbkTO'
     */
#if Rte_SysCon_VrntLR3B_PowerPanel2LEDAColorFeedback

    /* Outputs for Atomic SubSystem: '<S19>/PowerPanel2_LED_A_Color_Feedback' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_PowPan2_LED_A_Col_Fdbk' incorporates:
     *  Inport: '<Root>/VeLINR_e_PowPan2_LED_A_Col_Fdbk'
     */
    rtb_TmpSignalConversionAtVeL_an =
        Rte_Read_VeLINR_e_PowPan2_LED_A_Col_Fdbk_VeLINR_e_PowPan2_LED_A_Col_Fdbk
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__it);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S967>:1' */
    (void)
        Rte_Read_VeLINR_b_PowPan2_LED_A_Col_FdbkTO_VeLINR_b_PowPan2_LED_A_Col_FdbkTO
        (&tmpRead_16);

    /* Outputs for Atomic SubSystem: '<S891>/PowerPanel2_LED_A_Color_Feedback' */
    /* Chart: '<S963>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_PowPan2_LED_A_Col_FdbkTO'
     */
    if (tmpRead_16)
    {
        /* Transition: '<S967>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S967>:6' */
            /* Transition: '<S967>:25' */
            /* Call Fsft */
            VeLINR_y_PowPan2_LED_A_Col_Fdbk_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S962>/Fsft' */
            /* FunctionCaller: '<S968>/Function Caller' */
            /* Event: '<S967>:39' */
            Rte_Call_FsftCITR_e_PP2_LED_A_ColorFeedback_FsftCITR_e_PP2_LED_A_ColorFeedback
                ();

            /* End of Outputs for SubSystem: '<S962>/Fsft' */
            /* Transition: '<S967>:29' */
        }
        else
        {
            /* Transition: '<S967>:30' */
            /* Call Tmot */
            VeLINR_y_PowPan2_LED_A_Col_Fdbk_CallStatus = 3U;

            /* Event: '<S967>:40' */
        }

        /* Transition: '<S967>:36' */
        /* Transition: '<S967>:23' */
    }
    else
    {
        /* Transition: '<S967>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_an) == 133)
        {
            /* Transition: '<S967>:33' */
            /* Transition: '<S967>:35' */
            /* Call Nothing */
            VeLINR_y_PowPan2_LED_A_Col_Fdbk_CallStatus = 4U;

            /* Transition: '<S967>:23' */
        }
        else
        {
            /* Transition: '<S967>:46' */
            /* Transition: '<S967>:37' */
            /* Call Poke */
            VeLINR_y_PowPan2_LED_A_Col_Fdbk_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S962>/Poke' */
            /* FunctionCaller: '<S969>/Function Caller' incorporates:
             *  Constant: '<S969>/Constant'
             */
            /* Event: '<S967>:38' */
            Rte_Call_PokeCITR_e_PP2_LED_A_ColorFeedback_PokeCITR_e_PP2_LED_A_ColorFeedback
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__it, false);

            /* End of Outputs for SubSystem: '<S962>/Poke' */
        }
    }

    /* End of Chart: '<S963>/Chart' */
    /* End of Outputs for SubSystem: '<S891>/PowerPanel2_LED_A_Color_Feedback' */
    /* End of Outputs for SubSystem: '<S19>/PowerPanel2_LED_A_Color_Feedback' */
    /* Transition: '<S967>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_PowPan2_LED_A_Col_Fdbk' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PowPan2_LED_A_FailStat' incorporates:
     *  Inport: '<Root>/VeLINR_b_PowPan2_LED_A_FailStatTO'
     */
#if Rte_SysCon_VrntLR3B_PowerPanel2LEDAFailStatus

    /* Outputs for Atomic SubSystem: '<S19>/PowerPanel2_LED_A_FailStatus' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_PowPan2_LED_A_FailStat' incorporates:
     *  Inport: '<Root>/VeLINR_e_PowPan2_LED_A_FailStat'
     */
    rtb_TmpSignalConversionAtVeL_ic =
        Rte_Read_VeLINR_e_PowPan2_LED_A_FailStat_VeLINR_e_PowPan2_LED_A_FailStat
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__at);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S975>:1' */
    (void)
        Rte_Read_VeLINR_b_PowPan2_LED_A_FailStatTO_VeLINR_b_PowPan2_LED_A_FailStatTO
        (&tmpRead_17);

    /* Outputs for Atomic SubSystem: '<S892>/PowerPanel2_LED_A_FailStatus' */
    /* Chart: '<S971>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_PowPan2_LED_A_FailStatTO'
     */
    if (tmpRead_17)
    {
        /* Transition: '<S975>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S975>:6' */
            /* Transition: '<S975>:25' */
            /* Call Fsft */
            VeLINR_y_PowPan2_LED_A_FailStat_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S970>/Fsft' */
            /* FunctionCaller: '<S976>/Function Caller' */
            /* Event: '<S975>:39' */
            Rte_Call_FsftCITR_e_PP2_LED_A_FailSts_FsftCITR_e_PP2_LED_A_FailSts();

            /* End of Outputs for SubSystem: '<S970>/Fsft' */
            /* Transition: '<S975>:29' */
        }
        else
        {
            /* Transition: '<S975>:30' */
            /* Call Tmot */
            VeLINR_y_PowPan2_LED_A_FailStat_CallStatus = 3U;

            /* Event: '<S975>:40' */
        }

        /* Transition: '<S975>:36' */
        /* Transition: '<S975>:23' */
    }
    else
    {
        /* Transition: '<S975>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_ic) == 133)
        {
            /* Transition: '<S975>:33' */
            /* Transition: '<S975>:35' */
            /* Call Nothing */
            VeLINR_y_PowPan2_LED_A_FailStat_CallStatus = 4U;

            /* Transition: '<S975>:23' */
        }
        else
        {
            /* Transition: '<S975>:46' */
            /* Transition: '<S975>:37' */
            /* Call Poke */
            VeLINR_y_PowPan2_LED_A_FailStat_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S970>/Poke' */
            /* FunctionCaller: '<S977>/Function Caller' incorporates:
             *  Constant: '<S977>/Constant'
             */
            /* Event: '<S975>:38' */
            Rte_Call_PokeCITR_e_PP2_LED_A_FailSts_PokeCITR_e_PP2_LED_A_FailSts
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__at, false);

            /* End of Outputs for SubSystem: '<S970>/Poke' */
        }
    }

    /* End of Chart: '<S971>/Chart' */
    /* End of Outputs for SubSystem: '<S892>/PowerPanel2_LED_A_FailStatus' */
    /* End of Outputs for SubSystem: '<S19>/PowerPanel2_LED_A_FailStatus' */
    /* Transition: '<S975>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_PowPan2_LED_A_FailStat' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PowerPanel2_LED_A_Fdbk' incorporates:
     *  Inport: '<Root>/VeLINR_b_PowerPanel2_LED_A_FdbkTO'
     */
#if Rte_SysCon_VrntLR3B_PowerPanel2LEDAFeedback

    /* Outputs for Atomic SubSystem: '<S19>/PowerPanel2_LED_A_Feedback' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_PowerPanel2_LED_A_Fdbk' incorporates:
     *  Inport: '<Root>/VeLINR_e_PowerPanel2_LED_A_Fdbk'
     */
    rtb_TmpSignalConversionAtVeL_od =
        Rte_Read_VeLINR_e_PowerPanel2_LED_A_Fdbk_VeLINR_e_PowerPanel2_LED_A_Fdbk
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__hy);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S983>:1' */
    (void)
        Rte_Read_VeLINR_b_PowerPanel2_LED_A_FdbkTO_VeLINR_b_PowerPanel2_LED_A_FdbkTO
        (&tmpRead_18);

    /* Outputs for Atomic SubSystem: '<S893>/PowerPanel2_LED_A_Feedback' */
    /* Chart: '<S979>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_PowerPanel2_LED_A_FdbkTO'
     */
    if (tmpRead_18)
    {
        /* Transition: '<S983>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S983>:6' */
            /* Transition: '<S983>:25' */
            /* Call Fsft */
            VeLINR_y_PowerPanel2_LED_A_Fdbk_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S978>/Fsft' */
            /* FunctionCaller: '<S984>/Function Caller' */
            /* Event: '<S983>:39' */
            Rte_Call_FsftCITR_e_PP2_LED_A_Feedback_FsftCITR_e_PP2_LED_A_Feedback
                ();

            /* End of Outputs for SubSystem: '<S978>/Fsft' */
            /* Transition: '<S983>:29' */
        }
        else
        {
            /* Transition: '<S983>:30' */
            /* Call Tmot */
            VeLINR_y_PowerPanel2_LED_A_Fdbk_CallStatus = 3U;

            /* Event: '<S983>:40' */
        }

        /* Transition: '<S983>:36' */
        /* Transition: '<S983>:23' */
    }
    else
    {
        /* Transition: '<S983>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_od) == 133)
        {
            /* Transition: '<S983>:33' */
            /* Transition: '<S983>:35' */
            /* Call Nothing */
            VeLINR_y_PowerPanel2_LED_A_Fdbk_CallStatus = 4U;

            /* Transition: '<S983>:23' */
        }
        else
        {
            /* Transition: '<S983>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_od) == 1)
            {
                /* Transition: '<S983>:48' */
                /* Transition: '<S983>:53' */
                FA_out_jt = true;

                /* Transition: '<S983>:56' */
            }
            else
            {
                /* Transition: '<S983>:52' */
                FA_out_jt = false;
            }

            /* Transition: '<S983>:37' */
            /* Call Poke */
            VeLINR_y_PowerPanel2_LED_A_Fdbk_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S978>/Poke' */
            /* FunctionCaller: '<S985>/Function Caller' */
            /* Event: '<S983>:38' */
            Rte_Call_PokeCITR_e_PP2_LED_A_Feedback_PokeCITR_e_PP2_LED_A_Feedback
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__hy, FA_out_jt);

            /* End of Outputs for SubSystem: '<S978>/Poke' */
        }
    }

    /* End of Chart: '<S979>/Chart' */
    /* End of Outputs for SubSystem: '<S893>/PowerPanel2_LED_A_Feedback' */
    /* End of Outputs for SubSystem: '<S19>/PowerPanel2_LED_A_Feedback' */
    /* Transition: '<S983>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_PowerPanel2_LED_A_Fdbk' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PowPan2_LED_B_Col_Fdbk' incorporates:
     *  Inport: '<Root>/VeLINR_b_PowPan2_LED_B_Col_FdbkTO'
     */
#if Rte_SysCon_VrntLR3B_PowerPanel2LEDBColorFeedback

    /* Outputs for Atomic SubSystem: '<S19>/PowerPanel2_LED_B_Color_Feedback' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_PowPan2_LED_B_Col_Fdbk' incorporates:
     *  Inport: '<Root>/VeLINR_e_PowPan2_LED_B_Col_Fdbk'
     */
    rtb_TmpSignalConversionAtVeL_ht =
        Rte_Read_VeLINR_e_PowPan2_LED_B_Col_Fdbk_VeLINR_e_PowPan2_LED_B_Col_Fdbk
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__nn);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S991>:1' */
    (void)
        Rte_Read_VeLINR_b_PowPan2_LED_B_Col_FdbkTO_VeLINR_b_PowPan2_LED_B_Col_FdbkTO
        (&FA_out_j);

    /* Outputs for Atomic SubSystem: '<S894>/PowerPanel2_LED_B_Color_Feedback' */
    /* Chart: '<S987>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_PowPan2_LED_B_Col_FdbkTO'
     */
    if (FA_out_j)
    {
        /* Transition: '<S991>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S991>:6' */
            /* Transition: '<S991>:25' */
            /* Call Fsft */
            VeLINR_y_PowPan2_LED_B_Col_Fdbk_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S986>/Fsft' */
            /* FunctionCaller: '<S992>/Function Caller' */
            /* Event: '<S991>:39' */
            Rte_Call_FsftCITR_e_PP2_LED_B_ColorFeedback_FsftCITR_e_PP2_LED_B_ColorFeedback
                ();

            /* End of Outputs for SubSystem: '<S986>/Fsft' */
            /* Transition: '<S991>:29' */
        }
        else
        {
            /* Transition: '<S991>:30' */
            /* Call Tmot */
            VeLINR_y_PowPan2_LED_B_Col_Fdbk_CallStatus = 3U;

            /* Event: '<S991>:40' */
        }

        /* Transition: '<S991>:36' */
        /* Transition: '<S991>:23' */
    }
    else
    {
        /* Transition: '<S991>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_ht) == 133)
        {
            /* Transition: '<S991>:33' */
            /* Transition: '<S991>:35' */
            /* Call Nothing */
            VeLINR_y_PowPan2_LED_B_Col_Fdbk_CallStatus = 4U;

            /* Transition: '<S991>:23' */
        }
        else
        {
            /* Transition: '<S991>:46' */
            /* Transition: '<S991>:37' */
            /* Call Poke */
            VeLINR_y_PowPan2_LED_B_Col_Fdbk_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S986>/Poke' */
            /* FunctionCaller: '<S993>/Function Caller' incorporates:
             *  Constant: '<S993>/Constant'
             */
            /* Event: '<S991>:38' */
            Rte_Call_PokeCITR_e_PP2_LED_B_ColorFeedback_PokeCITR_e_PP2_LED_B_ColorFeedback
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__nn, false);

            /* End of Outputs for SubSystem: '<S986>/Poke' */
        }
    }

    /* End of Chart: '<S987>/Chart' */
    /* End of Outputs for SubSystem: '<S894>/PowerPanel2_LED_B_Color_Feedback' */
    /* End of Outputs for SubSystem: '<S19>/PowerPanel2_LED_B_Color_Feedback' */
    /* Transition: '<S991>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_PowPan2_LED_B_Col_Fdbk' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PowPan2_LED_B_FailStat' incorporates:
     *  Inport: '<Root>/VeLINR_b_PowPan2_LED_B_FailStatTO'
     */
#if Rte_SysCon_VrntLR3B_PowerPanel2LEDBFailStatus

    /* Outputs for Atomic SubSystem: '<S19>/PowerPanel2_LED_B_FailStatus' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_PowPan2_LED_B_FailStat' incorporates:
     *  Inport: '<Root>/VeLINR_e_PowPan2_LED_B_FailStat'
     */
    rtb_TmpSignalConversionAtVeL_kg =
        Rte_Read_VeLINR_e_PowPan2_LED_B_FailStat_VeLINR_e_PowPan2_LED_B_FailStat
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__gn);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S999>:1' */
    (void)
        Rte_Read_VeLINR_b_PowPan2_LED_B_FailStatTO_VeLINR_b_PowPan2_LED_B_FailStatTO
        (&tmpRead_19);

    /* Outputs for Atomic SubSystem: '<S895>/PowerPanel2_LED_B_FailStatus' */
    /* Chart: '<S995>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_PowPan2_LED_B_FailStatTO'
     */
    if (tmpRead_19)
    {
        /* Transition: '<S999>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S999>:6' */
            /* Transition: '<S999>:25' */
            /* Call Fsft */
            VeLINR_y_PowPan2_LED_B_FailStat_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S994>/Fsft' */
            /* FunctionCaller: '<S1000>/Function Caller' */
            /* Event: '<S999>:39' */
            Rte_Call_FsftCITR_e_PP2_LED_B_FailSts_FsftCITR_e_PP2_LED_B_FailSts();

            /* End of Outputs for SubSystem: '<S994>/Fsft' */
            /* Transition: '<S999>:29' */
        }
        else
        {
            /* Transition: '<S999>:30' */
            /* Call Tmot */
            VeLINR_y_PowPan2_LED_B_FailStat_CallStatus = 3U;

            /* Event: '<S999>:40' */
        }

        /* Transition: '<S999>:36' */
        /* Transition: '<S999>:23' */
    }
    else
    {
        /* Transition: '<S999>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_kg) == 133)
        {
            /* Transition: '<S999>:33' */
            /* Transition: '<S999>:35' */
            /* Call Nothing */
            VeLINR_y_PowPan2_LED_B_FailStat_CallStatus = 4U;

            /* Transition: '<S999>:23' */
        }
        else
        {
            /* Transition: '<S999>:46' */
            /* Transition: '<S999>:37' */
            /* Call Poke */
            VeLINR_y_PowPan2_LED_B_FailStat_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S994>/Poke' */
            /* FunctionCaller: '<S1001>/Function Caller' incorporates:
             *  Constant: '<S1001>/Constant'
             */
            /* Event: '<S999>:38' */
            Rte_Call_PokeCITR_e_PP2_LED_B_FailSts_PokeCITR_e_PP2_LED_B_FailSts
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__gn, false);

            /* End of Outputs for SubSystem: '<S994>/Poke' */
        }
    }

    /* End of Chart: '<S995>/Chart' */
    /* End of Outputs for SubSystem: '<S895>/PowerPanel2_LED_B_FailStatus' */
    /* End of Outputs for SubSystem: '<S19>/PowerPanel2_LED_B_FailStatus' */
    /* Transition: '<S999>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_PowPan2_LED_B_FailStat' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PowerPanel2_LED_B_Fdbk' incorporates:
     *  Inport: '<Root>/VeLINR_b_PowerPanel2_LED_B_FdbkTO'
     */
#if Rte_SysCon_VrntLR3B_PowerPanel2LEDBFeedback

    /* Outputs for Atomic SubSystem: '<S19>/PowerPanel2_LED_B_Feedback' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_PowerPanel2_LED_B_Fdbk' incorporates:
     *  Inport: '<Root>/VeLINR_e_PowerPanel2_LED_B_Fdbk'
     */
    rtb_TmpSignalConversionAtVe_hcc =
        Rte_Read_VeLINR_e_PowerPanel2_LED_B_Fdbk_VeLINR_e_PowerPanel2_LED_B_Fdbk
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__pg);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S1007>:1' */
    (void)
        Rte_Read_VeLINR_b_PowerPanel2_LED_B_FdbkTO_VeLINR_b_PowerPanel2_LED_B_FdbkTO
        (&tmpRead_1a);

    /* Outputs for Atomic SubSystem: '<S896>/PowerPanel2_LED_B_Feedback' */
    /* Chart: '<S1003>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_PowerPanel2_LED_B_FdbkTO'
     */
    if (tmpRead_1a)
    {
        /* Transition: '<S1007>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S1007>:6' */
            /* Transition: '<S1007>:25' */
            /* Call Fsft */
            VeLINR_y_PowerPanel2_LED_B_Fdbk_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S1002>/Fsft' */
            /* FunctionCaller: '<S1008>/Function Caller' */
            /* Event: '<S1007>:39' */
            Rte_Call_FsftCITR_e_PP2_LED_B_Feedback_FsftCITR_e_PP2_LED_B_Feedback
                ();

            /* End of Outputs for SubSystem: '<S1002>/Fsft' */
            /* Transition: '<S1007>:29' */
        }
        else
        {
            /* Transition: '<S1007>:30' */
            /* Call Tmot */
            VeLINR_y_PowerPanel2_LED_B_Fdbk_CallStatus = 3U;

            /* Event: '<S1007>:40' */
        }

        /* Transition: '<S1007>:36' */
        /* Transition: '<S1007>:23' */
    }
    else
    {
        /* Transition: '<S1007>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVe_hcc) == 133)
        {
            /* Transition: '<S1007>:33' */
            /* Transition: '<S1007>:35' */
            /* Call Nothing */
            VeLINR_y_PowerPanel2_LED_B_Fdbk_CallStatus = 4U;

            /* Transition: '<S1007>:23' */
        }
        else
        {
            /* Transition: '<S1007>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVe_hcc) == 1)
            {
                /* Transition: '<S1007>:48' */
                /* Transition: '<S1007>:53' */
                FA_out_j = true;

                /* Transition: '<S1007>:56' */
            }
            else
            {
                /* Transition: '<S1007>:52' */
                FA_out_j = false;
            }

            /* Transition: '<S1007>:37' */
            /* Call Poke */
            VeLINR_y_PowerPanel2_LED_B_Fdbk_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S1002>/Poke' */
            /* FunctionCaller: '<S1009>/Function Caller' */
            /* Event: '<S1007>:38' */
            Rte_Call_PokeCITR_e_PP2_LED_B_Feedback_PokeCITR_e_PP2_LED_B_Feedback
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__pg, FA_out_j);

            /* End of Outputs for SubSystem: '<S1002>/Poke' */
        }
    }

    /* End of Chart: '<S1003>/Chart' */
    /* End of Outputs for SubSystem: '<S896>/PowerPanel2_LED_B_Feedback' */
    /* End of Outputs for SubSystem: '<S19>/PowerPanel2_LED_B_Feedback' */
    /* Transition: '<S1007>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_PowerPanel2_LED_B_Fdbk' */

    /* SignalConversion generated from: '<S2>/VeLINR_b_PowPan2_LIN_Cksm_Err' incorporates:
     *  Inport: '<Root>/VeLINR_b_PowPan2_LIN_Cksm_ErrTO'
     */
#if Rte_SysCon_VrntLR3B_PowerPanel2LINChecksumError

    /* Outputs for Atomic SubSystem: '<S19>/PowerPanel2_LIN_Checksum_Error' */
    /* SignalConversion generated from: '<S2>/VeLINR_b_PowPan2_LIN_Cksm_Err' incorporates:
     *  Inport: '<Root>/VeLINR_b_PowPan2_LIN_Cksm_Err'
     */
    rtb_TmpSignalConversionAtVe_hwn =
        Rte_Read_VeLINR_b_PowPan2_LIN_Cksm_Err_VeLINR_b_PowPan2_LIN_Cksm_Err
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__fh);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S1015>:1' */
    (void)
        Rte_Read_VeLINR_b_PowPan2_LIN_Cksm_ErrTO_VeLINR_b_PowPan2_LIN_Cksm_ErrTO
        (&tmpRead_1b);

    /* Outputs for Atomic SubSystem: '<S897>/PowerPanel2_LIN_Checksum_Error' */
    /* Chart: '<S1011>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_PowPan2_LIN_Cksm_ErrTO'
     */
    if (tmpRead_1b)
    {
        /* Transition: '<S1015>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S1015>:6' */
            /* Transition: '<S1015>:25' */
            /* Call Fsft */
            VeLINR_y_PowPan2_LIN_Cksm_Err_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S1010>/Fsft' */
            /* FunctionCaller: '<S1016>/Function Caller' */
            /* Event: '<S1015>:39' */
            Rte_Call_FsftCITR_b_PP2_LIN_Cksm_Err_FsftCITR_b_PP2_LIN_Cksm_Err();

            /* End of Outputs for SubSystem: '<S1010>/Fsft' */
            /* Transition: '<S1015>:29' */
        }
        else
        {
            /* Transition: '<S1015>:30' */
            /* Call Tmot */
            VeLINR_y_PowPan2_LIN_Cksm_Err_CallStatus = 3U;

            /* Event: '<S1015>:40' */
        }

        /* Transition: '<S1015>:36' */
        /* Transition: '<S1015>:23' */
    }
    else
    {
        /* Transition: '<S1015>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVe_hwn) == 133)
        {
            /* Transition: '<S1015>:33' */
            /* Transition: '<S1015>:35' */
            /* Call Nothing */
            VeLINR_y_PowPan2_LIN_Cksm_Err_CallStatus = 4U;

            /* Transition: '<S1015>:23' */
        }
        else
        {
            /* Transition: '<S1015>:46' */
            /* Transition: '<S1015>:37' */
            /* Call Poke */
            VeLINR_y_PowPan2_LIN_Cksm_Err_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S1010>/Poke' */
            /* FunctionCaller: '<S1017>/Function Caller' incorporates:
             *  Constant: '<S1017>/Constant'
             */
            /* Event: '<S1015>:38' */
            Rte_Call_PokeCITR_b_PP2_LIN_Cksm_Err_PokeCITR_b_PP2_LIN_Cksm_Err
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__fh, false);

            /* End of Outputs for SubSystem: '<S1010>/Poke' */
        }
    }

    /* End of Chart: '<S1011>/Chart' */
    /* End of Outputs for SubSystem: '<S897>/PowerPanel2_LIN_Checksum_Error' */
    /* End of Outputs for SubSystem: '<S19>/PowerPanel2_LIN_Checksum_Error' */
    /* Transition: '<S1015>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_b_PowPan2_LIN_Cksm_Err' */

    /* SignalConversion generated from: '<S2>/VeLINR_b_PowPan2_LIN_Data_Err' incorporates:
     *  Inport: '<Root>/VeLINR_b_PowPan2_LIN_Data_ErrTO'
     */
#if Rte_SysCon_VrntLR3B_PowerPanel2LINDataError

    /* Outputs for Atomic SubSystem: '<S19>/PowerPanel2_LIN_Data_Error' */
    /* SignalConversion generated from: '<S2>/VeLINR_b_PowPan2_LIN_Data_Err' incorporates:
     *  Inport: '<Root>/VeLINR_b_PowPan2_LIN_Data_Err'
     */
    rtb_TmpSignalConversionAtVeL_fl =
        Rte_Read_VeLINR_b_PowPan2_LIN_Data_Err_VeLINR_b_PowPan2_LIN_Data_Err
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_p);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S1023>:1' */
    (void)
        Rte_Read_VeLINR_b_PowPan2_LIN_Data_ErrTO_VeLINR_b_PowPan2_LIN_Data_ErrTO
        (&tmpRead_1c);

    /* Outputs for Atomic SubSystem: '<S898>/PowerPanel2_LIN_Data_Error' */
    /* Chart: '<S1019>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_PowPan2_LIN_Data_ErrTO'
     */
    if (tmpRead_1c)
    {
        /* Transition: '<S1023>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S1023>:6' */
            /* Transition: '<S1023>:25' */
            /* Call Fsft */
            VeLINR_y_PowPan2_LIN_Data_Err_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S1018>/Fsft' */
            /* FunctionCaller: '<S1024>/Function Caller' */
            /* Event: '<S1023>:39' */
            Rte_Call_FsftCITR_b_PP2_LIN_Data_Err_FsftCITR_b_PP2_LIN_Data_Err();

            /* End of Outputs for SubSystem: '<S1018>/Fsft' */
            /* Transition: '<S1023>:29' */
        }
        else
        {
            /* Transition: '<S1023>:30' */
            /* Call Tmot */
            VeLINR_y_PowPan2_LIN_Data_Err_CallStatus = 3U;

            /* Event: '<S1023>:40' */
        }

        /* Transition: '<S1023>:36' */
        /* Transition: '<S1023>:23' */
    }
    else
    {
        /* Transition: '<S1023>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_fl) == 133)
        {
            /* Transition: '<S1023>:33' */
            /* Transition: '<S1023>:35' */
            /* Call Nothing */
            VeLINR_y_PowPan2_LIN_Data_Err_CallStatus = 4U;

            /* Transition: '<S1023>:23' */
        }
        else
        {
            /* Transition: '<S1023>:46' */
            /* Transition: '<S1023>:37' */
            /* Call Poke */
            VeLINR_y_PowPan2_LIN_Data_Err_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S1018>/Poke' */
            /* FunctionCaller: '<S1025>/Function Caller' incorporates:
             *  Constant: '<S1025>/Constant'
             */
            /* Event: '<S1023>:38' */
            Rte_Call_PokeCITR_b_PP2_LIN_Data_Err_PokeCITR_b_PP2_LIN_Data_Err
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_p, false);

            /* End of Outputs for SubSystem: '<S1018>/Poke' */
        }
    }

    /* End of Chart: '<S1019>/Chart' */
    /* End of Outputs for SubSystem: '<S898>/PowerPanel2_LIN_Data_Error' */
    /* End of Outputs for SubSystem: '<S19>/PowerPanel2_LIN_Data_Error' */
    /* Transition: '<S1023>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_b_PowPan2_LIN_Data_Err' */

    /* SignalConversion generated from: '<S2>/VeLINR_b_PowPan2_LIN_Parity_Err' incorporates:
     *  Inport: '<Root>/VeLINR_b_PowPan2_LIN_Parity_ErrTO'
     */
#if Rte_SysCon_VrntLR3B_PowerPanel2LINParityError

    /* Outputs for Atomic SubSystem: '<S19>/PowerPanel2_LIN_Parity_Error' */
    /* SignalConversion generated from: '<S2>/VeLINR_b_PowPan2_LIN_Parity_Err' incorporates:
     *  Inport: '<Root>/VeLINR_b_PowPan2_LIN_Parity_Err'
     */
    rtb_TmpSignalConversionAtVeL_bd =
        Rte_Read_VeLINR_b_PowPan2_LIN_Parity_Err_VeLINR_b_PowPan2_LIN_Parity_Err
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__ha);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S1031>:1' */
    (void)
        Rte_Read_VeLINR_b_PowPan2_LIN_Parity_ErrTO_VeLINR_b_PowPan2_LIN_Parity_ErrTO
        (&tmpRead_1d);

    /* Outputs for Atomic SubSystem: '<S899>/PowerPanel2_LIN_Parity_Error' */
    /* Chart: '<S1027>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_PowPan2_LIN_Parity_ErrTO'
     */
    if (tmpRead_1d)
    {
        /* Transition: '<S1031>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S1031>:6' */
            /* Transition: '<S1031>:25' */
            /* Call Fsft */
            VeLINR_y_PowPan2_LIN_Parity_Err_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S1026>/Fsft' */
            /* FunctionCaller: '<S1032>/Function Caller' */
            /* Event: '<S1031>:39' */
            Rte_Call_FsftCITR_b_PP2_LIN_Parity_Err_FsftCITR_b_PP2_LIN_Parity_Err
                ();

            /* End of Outputs for SubSystem: '<S1026>/Fsft' */
            /* Transition: '<S1031>:29' */
        }
        else
        {
            /* Transition: '<S1031>:30' */
            /* Call Tmot */
            VeLINR_y_PowPan2_LIN_Parity_Err_CallStatus = 3U;

            /* Event: '<S1031>:40' */
        }

        /* Transition: '<S1031>:36' */
        /* Transition: '<S1031>:23' */
    }
    else
    {
        /* Transition: '<S1031>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_bd) == 133)
        {
            /* Transition: '<S1031>:33' */
            /* Transition: '<S1031>:35' */
            /* Call Nothing */
            VeLINR_y_PowPan2_LIN_Parity_Err_CallStatus = 4U;

            /* Transition: '<S1031>:23' */
        }
        else
        {
            /* Transition: '<S1031>:46' */
            /* Transition: '<S1031>:37' */
            /* Call Poke */
            VeLINR_y_PowPan2_LIN_Parity_Err_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S1026>/Poke' */
            /* FunctionCaller: '<S1033>/Function Caller' incorporates:
             *  Constant: '<S1033>/Constant'
             */
            /* Event: '<S1031>:38' */
            Rte_Call_PokeCITR_b_PP2_LIN_Parity_Err_PokeCITR_b_PP2_LIN_Parity_Err
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__ha, false);

            /* End of Outputs for SubSystem: '<S1026>/Poke' */
        }
    }

    /* End of Chart: '<S1027>/Chart' */
    /* End of Outputs for SubSystem: '<S899>/PowerPanel2_LIN_Parity_Error' */
    /* End of Outputs for SubSystem: '<S19>/PowerPanel2_LIN_Parity_Error' */
    /* Transition: '<S1031>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_b_PowPan2_LIN_Parity_Err' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PwrPanel2LidSwtSts120A_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PwrPanel2LidSwtSts120A_ErrSts'
     */
    rtb_TmpSignalConversionAtVeL_bq =
        Rte_Read_VeLINR_b_PwrPanel2LidSwtSts120A_VeLINR_b_PwrPanel2LidSwtSts120A
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__my);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PwrPanel2LidSwtSts120A_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S1038>:1' */
    (void)
        Rte_Read_VeLINR_b_PwrPanel2LidSwtSts120A_TO_VeLINR_b_PwrPanel2LidSwtSts120A_TO
        (&tmpRead_1e);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1034>/Chart' */
    if (tmpRead_1e)
    {
        /* Transition: '<S1038>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S1038>:6' */
            /* Transition: '<S1038>:25' */
            /* Call Fsft */
            VeLINR_y_PwrPanel2LidSwtSts120A_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S900>/Fsft' */
            /* FunctionCaller: '<S1039>/Function Caller' */
            /* Event: '<S1038>:39' */
            Rte_Call_FsftCITR_b_PP2LidSwitchSts120A_FsftCITR_b_PP2LidSwitchSts120A
                ();

            /* End of Outputs for SubSystem: '<S900>/Fsft' */
            /* Transition: '<S1038>:29' */
        }
        else
        {
            /* Transition: '<S1038>:30' */
            /* Call Tmot */
            VeLINR_y_PwrPanel2LidSwtSts120A_CallStatus = 3U;

            /* Event: '<S1038>:40' */
        }

        /* Transition: '<S1038>:36' */
        /* Transition: '<S1038>:23' */
    }
    else
    {
        /* Transition: '<S1038>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_bq) == 133)
        {
            /* Transition: '<S1038>:33' */
            /* Transition: '<S1038>:35' */
            /* Call Nothing */
            VeLINR_y_PwrPanel2LidSwtSts120A_CallStatus = 4U;

            /* Transition: '<S1038>:23' */
        }
        else
        {
            /* Transition: '<S1038>:46' */
            /* Transition: '<S1038>:37' */
            /* Call Poke */
            VeLINR_y_PwrPanel2LidSwtSts120A_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S900>/Poke' */
            /* FunctionCaller: '<S1040>/Function Caller' incorporates:
             *  Constant: '<S1040>/Constant'
             */
            /* Event: '<S1038>:38' */
            Rte_Call_PokeCITR_b_PP2LidSwitchSts120A_PokeCITR_b_PP2LidSwitchSts120A
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__my, false);

            /* End of Outputs for SubSystem: '<S900>/Poke' */
        }
    }

    /* End of Chart: '<S1034>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PwrPanel2LidSwtSts120B_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PwrPanel2LidSwtSts120B_ErrSts'
     */
    /* Transition: '<S1038>:19' */
    rtb_TmpSignalConversionAtVeL_py =
        Rte_Read_VeLINR_b_PwrPanel2LidSwtSts120B_VeLINR_b_PwrPanel2LidSwtSts120B
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__nj);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PwrPanel2LidSwtSts120B_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S1045>:1' */
    (void)
        Rte_Read_VeLINR_b_PwrPanel2LidSwtSts120B_TO_VeLINR_b_PwrPanel2LidSwtSts120B_TO
        (&tmpRead_1f);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1041>/Chart' */
    if (tmpRead_1f)
    {
        /* Transition: '<S1045>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S1045>:6' */
            /* Transition: '<S1045>:25' */
            /* Call Fsft */
            VeLINR_y_PwrPanel2LidSwtSts120B_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S901>/Fsft' */
            /* FunctionCaller: '<S1046>/Function Caller' */
            /* Event: '<S1045>:39' */
            Rte_Call_FsftCITR_b_PP2LidSwitchSts120B_FsftCITR_b_PP2LidSwitchSts120B
                ();

            /* End of Outputs for SubSystem: '<S901>/Fsft' */
            /* Transition: '<S1045>:29' */
        }
        else
        {
            /* Transition: '<S1045>:30' */
            /* Call Tmot */
            VeLINR_y_PwrPanel2LidSwtSts120B_CallStatus = 3U;

            /* Event: '<S1045>:40' */
        }

        /* Transition: '<S1045>:36' */
        /* Transition: '<S1045>:23' */
    }
    else
    {
        /* Transition: '<S1045>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_py) == 133)
        {
            /* Transition: '<S1045>:33' */
            /* Transition: '<S1045>:35' */
            /* Call Nothing */
            VeLINR_y_PwrPanel2LidSwtSts120B_CallStatus = 4U;

            /* Transition: '<S1045>:23' */
        }
        else
        {
            /* Transition: '<S1045>:46' */
            /* Transition: '<S1045>:37' */
            /* Call Poke */
            VeLINR_y_PwrPanel2LidSwtSts120B_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S901>/Poke' */
            /* FunctionCaller: '<S1047>/Function Caller' incorporates:
             *  Constant: '<S1047>/Constant'
             */
            /* Event: '<S1045>:38' */
            Rte_Call_PokeCITR_b_PP2LidSwitchSts120B_PokeCITR_b_PP2LidSwitchSts120B
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__nj, false);

            /* End of Outputs for SubSystem: '<S901>/Poke' */
        }
    }

    /* End of Chart: '<S1041>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PwrPanel2LidSwtSts240_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PwrPanel2LidSwtSts240_ErrSts'
     */
    /* Transition: '<S1045>:19' */
    rtb_TmpSignalConversionAtVeL_cl =
        Rte_Read_VeLINR_b_PwrPanel2LidSwtSts240_VeLINR_b_PwrPanel2LidSwtSts240
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__d0);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PwrPanel2LidSwtSts240TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S1052>:1' */
    (void)
        Rte_Read_VeLINR_b_PwrPanel2LidSwtSts240TO_VeLINR_b_PwrPanel2LidSwtSts240TO
        (&tmpRead_1g);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1048>/Chart' */
    if (tmpRead_1g)
    {
        /* Transition: '<S1052>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S1052>:6' */
            /* Transition: '<S1052>:25' */
            /* Call Fsft */
            VeLINR_y_PwrPanel2LidSwtSts240_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S902>/Fsft' */
            /* FunctionCaller: '<S1053>/Function Caller' */
            /* Event: '<S1052>:39' */
            Rte_Call_FsftCITR_b_PP2LidSwitchSts240_FsftCITR_b_PP2LidSwitchSts240
                ();

            /* End of Outputs for SubSystem: '<S902>/Fsft' */
            /* Transition: '<S1052>:29' */
        }
        else
        {
            /* Transition: '<S1052>:30' */
            /* Call Tmot */
            VeLINR_y_PwrPanel2LidSwtSts240_CallStatus = 3U;

            /* Event: '<S1052>:40' */
        }

        /* Transition: '<S1052>:36' */
        /* Transition: '<S1052>:23' */
    }
    else
    {
        /* Transition: '<S1052>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_cl) == 133)
        {
            /* Transition: '<S1052>:33' */
            /* Transition: '<S1052>:35' */
            /* Call Nothing */
            VeLINR_y_PwrPanel2LidSwtSts240_CallStatus = 4U;

            /* Transition: '<S1052>:23' */
        }
        else
        {
            /* Transition: '<S1052>:46' */
            /* Transition: '<S1052>:37' */
            /* Call Poke */
            VeLINR_y_PwrPanel2LidSwtSts240_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S902>/Poke' */
            /* FunctionCaller: '<S1054>/Function Caller' incorporates:
             *  Constant: '<S1054>/Constant'
             */
            /* Event: '<S1052>:38' */
            Rte_Call_PokeCITR_b_PP2LidSwitchSts240_PokeCITR_b_PP2LidSwitchSts240
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR__d0, false);

            /* End of Outputs for SubSystem: '<S902>/Poke' */
        }
    }

    /* End of Chart: '<S1048>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PowerPanel2_RatedPower_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PowerPanel2_RatedPower_ErrSts'
     */
    /* Transition: '<S1052>:19' */
    rtb_TmpSignalConversionAtVeL_kh =
        Rte_Read_VeLINR_y_PowerPanel2_RatedPower_VeLINR_y_PowerPanel2_RatedPower
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_y_i);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PowerPanel2_RatedPowerTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S1059>:1' */
    (void)
        Rte_Read_VeLINR_b_PowerPanel2_RatedPowerTO_VeLINR_b_PowerPanel2_RatedPowerTO
        (&tmpRead_1h);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1055>/Chart' */
    if (tmpRead_1h)
    {
        /* Transition: '<S1059>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S1059>:6' */
            /* Transition: '<S1059>:25' */
            /* Call Fsft */
            VeLINR_y_PowerPanel2_RatedPower_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S903>/Fsft' */
            /* FunctionCaller: '<S1060>/Function Caller' */
            /* Event: '<S1059>:39' */
            Rte_Call_FsftCITR_P_PP2RatedPower_FsftCITR_P_PP2RatedPower();

            /* End of Outputs for SubSystem: '<S903>/Fsft' */
            /* Transition: '<S1059>:29' */
        }
        else
        {
            /* Transition: '<S1059>:30' */
            /* Call Tmot */
            VeLINR_y_PowerPanel2_RatedPower_CallStatus = 3U;

            /* Event: '<S1059>:40' */
        }

        /* Transition: '<S1059>:36' */
        /* Transition: '<S1059>:23' */
    }
    else
    {
        /* Transition: '<S1059>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_kh) == 133)
        {
            /* Transition: '<S1059>:33' */
            /* Transition: '<S1059>:35' */
            /* Call Nothing */
            VeLINR_y_PowerPanel2_RatedPower_CallStatus = 4U;

            /* Transition: '<S1059>:23' */
        }
        else
        {
            /* Transition: '<S1059>:46' */
            /* Transition: '<S1059>:37' */
            /* Call Poke */
            VeLINR_y_PowerPanel2_RatedPower_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S903>/Poke' */
            /* FunctionCaller: '<S1061>/Function Caller' incorporates:
             *  Constant: '<S1061>/Constant'
             */
            /* Event: '<S1059>:38' */
            Rte_Call_PokeCITR_P_PP2RatedPower_PokeCITR_P_PP2RatedPower
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_y_i, false);

            /* End of Outputs for SubSystem: '<S903>/Poke' */
        }
    }

    /* End of Chart: '<S1055>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_RsErr_SPP2_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_RsErr_SPP2_ErrSts'
     */
    /* Transition: '<S1059>:19' */
    rtb_TmpSignalConversionAtVeL_lw =
        Rte_Read_VeLINR_b_RsErr_SPP2_VeLINR_b_RsErr_SPP2
        (&LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_k);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_RsErr_SPP2TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S1066>:1' */
    (void)Rte_Read_VeLINR_b_RsErr_SPP2TO_VeLINR_b_RsErr_SPP2TO(&tmpRead_1i);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1062>/Chart' */
    if (tmpRead_1i)
    {
        /* Transition: '<S1066>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S1066>:6' */
            /* Transition: '<S1066>:25' */
            /* Call Fsft */
            VeLINR_y_RsErr_SPP2_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S904>/Fsft' */
            /* FunctionCaller: '<S1067>/Function Caller' */
            /* Event: '<S1066>:39' */
            Rte_Call_FsftCITR_b_RsErrSPP2_FsftCITR_b_RsErrSPP2();

            /* End of Outputs for SubSystem: '<S904>/Fsft' */
            /* Transition: '<S1066>:29' */
        }
        else
        {
            /* Transition: '<S1066>:30' */
            /* Call Tmot */
            VeLINR_y_RsErr_SPP2_CallStatus = 3U;

            /* Event: '<S1066>:40' */
        }

        /* Transition: '<S1066>:36' */
        /* Transition: '<S1066>:23' */
    }
    else
    {
        /* Transition: '<S1066>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_lw) == 133)
        {
            /* Transition: '<S1066>:33' */
            /* Transition: '<S1066>:35' */
            /* Call Nothing */
            VeLINR_y_RsErr_SPP2_CallStatus = 4U;

            /* Transition: '<S1066>:23' */
        }
        else
        {
            /* Transition: '<S1066>:46' */
            /* Transition: '<S1066>:37' */
            /* Call Poke */
            VeLINR_y_RsErr_SPP2_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S904>/Poke' */
            /* FunctionCaller: '<S1068>/Function Caller' incorporates:
             *  Constant: '<S1068>/Constant'
             */
            /* Event: '<S1066>:38' */
            Rte_Call_PokeCITR_b_RsErrSPP2_PokeCITR_b_RsErrSPP2
                (LR3B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_k, false);

            /* End of Outputs for SubSystem: '<S904>/Poke' */
        }
    }

    /* End of Chart: '<S1062>/Chart' */
    /* Transition: '<S1066>:19' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
}

/* Model initialize function */
FUNC(void, LR3B_FUNC_CODE) LR3B_FUNC_ac_Init(void)
{
    /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
