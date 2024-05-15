/*
 * File: LR2B_FUNC_ac.c
 *
 * Code generated for Simulink model 'LR2B_FUNC_ac'.
 *
 * Model version                  : 1.59
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Apr  6 09:37:01 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "LR2B_FUNC_ac.h"

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_LR2B_FUNC
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(boolean, LR2B_FUNC_VAR_INIT) KeLR2B_b_CanLocStatusBypEnbl =
    0;                                 /* Referenced by: '<S11>/Calib' */
static volatile CONST(TePWMD_e_CanLocStatus, LR2B_FUNC_VAR_INIT)
    KeLR2B_e_CanLocStatus = CePWMD_e_LOC_Disable;/* Referenced by: '<S12>/Calib' */

#define STOP_SEC_CALIB_UNSPECIFIED_LR2B_FUNC
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_LR2B_FUNC
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_VrntLR2B_AGS2BoostStat

static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_AGS2_BoostStat_CallStatus;/* '<S30>/Chart' */

#endif

#if Rte_SysCon_VrntLR2B_AGS2CalActv

static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_AGS2_CalActv_CallStatus;/* '<S36>/Chart' */

#endif

#if Rte_SysCon_VrntLR2B_AGS2CalStat

static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_AGS2_CalStat_CallStatus;/* '<S42>/Chart' */

#endif

#if Rte_SysCon_VrntLR2B_AGS2CurrPos

static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_AGS2_CurrPos_CallStatus;/* '<S48>/Chart' */

#endif

#if Rte_SysCon_VrntLR2B_AGS2ErrLIN

static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_AGS2_ErrLIN_CallStatus;/* '<S56>/Chart' */

#endif

#if Rte_SysCon_VrntLR2B_AGS2ErrMechBreak

static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_AGS2_ErrMechBreak_CallStatus;/* '<S64>/Chart' */

#endif

#if Rte_SysCon_VrntLR2B_AGS2ErrMechStuck

static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_AGS2_ErrMechStuck_CallStatus;/* '<S70>/Chart' */

#endif

#if Rte_SysCon_VrntLR2B_AGS2ErrOvrTemp

static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_AGS2_ErrOvrTemp_CallStatus;/* '<S76>/Chart' */

#endif

#if Rte_SysCon_VrntLR2B_AGS2ErrOvrVolt

static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_AGS2_ErrOvrVolt_CallStatus;/* '<S82>/Chart' */

#endif

#if Rte_SysCon_VrntLR2B_AGS2ErrUnVolt

static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_AGS2_ErrUnVolt_CallStatus;/* '<S88>/Chart' */

#endif

static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_AHP_AIR_PRE_ERR_CallStatus;/* '<S116>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_AHP_CURR_CallStatus;/* '<S123>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_AHP_DBLK_ACTV_CallStatus;/* '<S130>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_AHP_DR_RN_ERR_CallStatus;/* '<S137>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_AHP_FL_SAFE_ACTVTD_CallStatus;/* '<S144>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_AHP_LMP_HM_AN_ON_CallStatus;/* '<S151>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_AHP_MONTRNG_RPM_CallStatus;/* '<S158>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_AHP_NODE_ERR_CallStatus;/* '<S165>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_AHP_OVR_CUR_ERR_CallStatus;/* '<S172>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_AHP_OVR_TMP_ERR_CallStatus;/* '<S179>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_AHP_POST_RUN_STAT_CallStatus;/* '<S186>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_AHP_RPM_ACTL_PERCT_CallStatus;/* '<S193>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_AHP_RPM_TGT_PERCT_CallStatus;/* '<S200>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_AHP_SUPPLIER_CallStatus;/* '<S235>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_AHP_TEMP_CallStatus;/* '<S207>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_AHP_VERSION_CallStatus;/* '<S240>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_AHP_VLTG_CallStatus;/* '<S214>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_AHP_VLTG_ERR_CallStatus;/* '<S221>/Chart' */

#if Rte_SysCon_VrntLR2B_BHVCalStat

static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_BHV_CalStat_CallStatus;/* '<S252>/Chart' */

#endif

#if Rte_SysCon_VrntLR2B_BHVERR

static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_BHV_ERR_CallStatus;/* '<S260>/Chart' */

#endif

#if Rte_SysCon_VrntLR2B_BHVMotorVolt

static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_BHV_MotorVolt_CallStatus;/* '<S268>/Chart' */

#endif

#if Rte_SysCon_VrntLR2B_BHVPosAct

static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_BHV_PosAct_CallStatus;/* '<S276>/Chart' */

#endif

#if Rte_SysCon_VrntLR2B_BHVSts

static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_BHV_Sts_CallStatus;/* '<S284>/Chart' */

#endif

static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_CompBoardTemp_CallStatus;/* '<S307>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_CompElecCurr_CallStatus;/* '<S314>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_CompElecPwr_CallStatus;/* '<S321>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_CompFaultStat_CallStatus;/* '<S328>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_CompHVInput_CallStatus;/* '<S335>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_CompIGBTTemp_CallStatus;/* '<S342>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_CompSpdIncrReq_CallStatus;/* '<S349>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_CompStat_CallStatus;/* '<S354>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_CompressorSpd_CallStatus;/* '<S361>/Chart' */

#if Rte_SysCon_VrntLR2B_ESaveModeRqLIN

static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_ESaveModeRq_LIN_CallStatus;/* '<S377>/Chart' */

#endif

#if Rte_SysCon_VrntLR2B_ElectricModeRqLIN

static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_ElectricModeRq_LIN_CallStatus;/* '<S383>/Chart' */

#endif

#if Rte_SysCon_VrntLR2B_HybridModeRqLIN

static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_HybridModeRq_LIN_CallStatus;/* '<S389>/Chart' */

#endif

#if Rte_SysCon_VrntLR2B_OEXVBoardTemp

static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_OEXV_Board_Temp_CallStatus;/* '<S405>/Chart' */

#endif

#if Rte_SysCon_VrntLR2B_OEXVCalRq

static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_OEXV_CalRq_CallStatus;/* '<S411>/Chart' */

#endif

#if Rte_SysCon_VrntLR2B_OEXVCalStat

static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_OEXV_CalStat_CallStatus;/* '<S417>/Chart' */

#endif

#if Rte_SysCon_VrntLR2B_OEXVERR

static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_OEXV_ERR_CallStatus;/* '<S423>/Chart' */

#endif

#if Rte_SysCon_VrntLR2B_OEXVPosAct

static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_OEXV_PosAct_CallStatus;/* '<S429>/Chart' */

#endif

#if Rte_SysCon_VrntLR2B_OEXVRefrigerantPressure

static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_OEXV_Refrig_Pres_CallStatus;/* '<S437>/Chart' */

#endif

#if Rte_SysCon_VrntLR2B_OEXVRefrigerantTemp

static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_OEXV_Refrigerant_Temp_CallStatus;/* '<S445>/Chart' */

#endif

#if Rte_SysCon_VrntLR2B_OEXVSts

static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_OEXV_Sts_CallStatus;/* '<S453>/Chart' */

#endif

#if Rte_SysCon_VrntLR2B_OEXVSupplyVolt

static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_OEXV_SupplyVolt_CallStatus;/* '<S459>/Chart' */

#endif

static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_PECP_AIR_PRE_ERR_CallStatus;/* '<S487>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_PECP_CURR_CallStatus;/* '<S494>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_PECP_DBLK_ACTV_CallStatus;/* '<S501>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_PECP_DR_RN_ERR_CallStatus;/* '<S508>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_PECP_FL_SAFE_ACTVTD_CallStatus;/* '<S515>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_PECP_LMP_HM_AN_ON_CallStatus;/* '<S522>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_PECP_MONTRNG_RPM_CallStatus;/* '<S529>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_PECP_NODE_ERR_CallStatus;/* '<S536>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_PECP_OVR_CUR_ERR_CallStatus;/* '<S543>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_PECP_OVR_TMP_ERR_CallStatus;/* '<S550>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_PECP_POST_RUN_STAT_CallStatus;/* '<S557>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_PECP_RPM_ACTL_PERCT_CallStatus;/* '<S564>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_PECP_RPM_TGT_PERCT_CallStatus;/* '<S571>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_PECP_SUPPLIER_CallStatus;/* '<S606>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_PECP_TEMP_CallStatus;/* '<S578>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_PECP_VERSION_CallStatus;/* '<S611>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_PECP_VLTG_CallStatus;/* '<S585>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_PECP_VLTG_ERR_CallStatus;/* '<S592>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_PowerPanelButton_State_CallStatus;/* '<S655>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_PowerPanel_FaultReason_CallStatus;/* '<S683>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_PowerPanel_Fault_CallStatus;/* '<S676>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_PowerPanel_RatedPower_CallStatus;/* '<S815>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_PwrPanelAC_PresntSens1_CallStatus;/* '<S641>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_PwrPanelAC_PresntSens2_CallStatus;/* '<S648>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_PwrPanelCurrDrawSens1_CallStatus;/* '<S662>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_PwrPanelCurrDrawSens2_CallStatus;/* '<S669>/Chart' */

#if Rte_SysCon_VrntLR2B_PowerPanelGndFaultDetected

static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_PwrPanelGndFltDetected_CallStatus;/* '<S691>/Chart' */

#endif

#if Rte_SysCon_VrntLR2B_PowerPanelLEDAColorFeedback

static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_PwrPanelLEDAColorFdbck_CallStatus;/* '<S699>/Chart' */

#endif

#if Rte_SysCon_VrntLR2B_PowerPanelLEDBColorFeedback

static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_PwrPanelLEDBColorFdbck_CallStatus;/* '<S723>/Chart' */

#endif

#if Rte_SysCon_VrntLR2B_PowerPanelLEDCColorFeedback

static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_PwrPanelLEDCColorFdbck_CallStatus;/* '<S747>/Chart' */

#endif

static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_PwrPanelLidSwtSts120A_CallStatus;/* '<S794>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_PwrPanelLidSwtSts120B_CallStatus;/* '<S801>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_PwrPanelLidSwtSts240_CallStatus;/* '<S808>/Chart' */

#if Rte_SysCon_VrntLR2B_PowerPanelLEDAFailStatus

static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_PwrPanel_LEDA_FailSts_CallStatus;/* '<S707>/Chart' */

#endif

#if Rte_SysCon_VrntLR2B_PowerPanelLEDAFeedback

static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_PwrPanel_LEDA_Feedback_CallStatus;/* '<S715>/Chart' */

#endif

#if Rte_SysCon_VrntLR2B_PowerPanelLEDBFailStatus

static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_PwrPanel_LEDB_FailSts_CallStatus;/* '<S731>/Chart' */

#endif

#if Rte_SysCon_VrntLR2B_PowerPanelLEDBFeedback

static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_PwrPanel_LEDB_Feedback_CallStatus;/* '<S739>/Chart' */

#endif

#if Rte_SysCon_VrntLR2B_PowerPanelLEDCFailStatus

static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_PwrPanel_LEDC_FailSts_CallStatus;/* '<S755>/Chart' */

#endif

#if Rte_SysCon_VrntLR2B_PowerPanelLEDCFeedback

static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_PwrPanel_LEDC_Feedback_CallStatus;/* '<S763>/Chart' */

#endif

#if Rte_SysCon_VrntLR2B_PowerPanelLINChecksumError

static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_PwrPanel_LIN_ChksumErr_CallStatus;/* '<S771>/Chart' */

#endif

#if Rte_SysCon_VrntLR2B_PowerPanelLINDataError

static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_PwrPanel_LIN_DataError_CallStatus;/* '<S779>/Chart' */

#endif

#if Rte_SysCon_VrntLR2B_PowerPanelLINParityError

static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_PwrPanel_LIN_ParityErr_CallStatus;/* '<S787>/Chart' */

#endif

#if Rte_SysCon_VrntLR2B_RsErrAGS2

static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_RsErr_AGS2_CallStatus;/* '<S94>/Chart' */

#endif

static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_RsErr_AHP_PUMP_CallStatus;/* '<S228>/Chart' */

#if Rte_SysCon_VrntLR2B_RsErrBHV

static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_RsErr_BHV_CallStatus;/* '<S292>/Chart' */

#endif

static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_RsErr_EAC2_CallStatus;/* '<S368>/Chart' */

#if Rte_SysCon_VrntLR2B_RsErrOEXV

static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_RsErr_OEXV_CallStatus;/* '<S465>/Chart' */

#endif

static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_RsErr_PECP_PUMP_CallStatus;/* '<S599>/Chart' */
static VAR(uint8, LR2B_FUNC_VAR_INIT) VeLINR_y_RsErr_SPP_CallStatus;/* '<S822>/Chart' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_LR2B_FUNC
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_LR2B_FUNC
#include "MemMap.h"

VAR(B_LR2B_FUNC_ac_T, LR2B_FUNC_VAR_INIT) LR2B_FUNC_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_LR2B_FUNC
#include "MemMap.h"

/* Model step function for TID1 */
FUNC(void, LR2B_FUNC_CODE) LR2B_FUNC_MedTEB(void) /* Explicit Task: MedTEB */
{
    /* local block i/o variables */
#if Rte_SysCon_VrntLR2B_AGS2BoostStat

    uint8 rtb_TmpSignalConversionAtVeLINR;

#endif

#if Rte_SysCon_VrntLR2B_AGS2CalActv

    uint8 rtb_TmpSignalConversionAtVeLI_a;

#endif

#if Rte_SysCon_VrntLR2B_AGS2CalStat

    uint8 rtb_TmpSignalConversionAtVeL_a1;

#endif

#if Rte_SysCon_VrntLR2B_AGS2CurrPos

    uint8 rtb_TmpSignalConversionAtVeLI_k;

#endif

#if Rte_SysCon_VrntLR2B_AGS2ErrLIN

    uint8 rtb_TmpSignalConversionAtVeL_kq;

#endif

#if Rte_SysCon_VrntLR2B_AGS2ErrMechBreak

    uint8 rtb_TmpSignalConversionAtVeLI_o;

#endif

#if Rte_SysCon_VrntLR2B_AGS2ErrMechStuck

    uint8 rtb_TmpSignalConversionAtVeL_oq;

#endif

#if Rte_SysCon_VrntLR2B_AGS2ErrOvrTemp

    uint8 rtb_TmpSignalConversionAtVeLI_h;

#endif

#if Rte_SysCon_VrntLR2B_AGS2ErrOvrVolt

    uint8 rtb_TmpSignalConversionAtVeLI_p;

#endif

#if Rte_SysCon_VrntLR2B_AGS2ErrUnVolt

    uint8 rtb_TmpSignalConversionAtVeLI_d;

#endif

#if Rte_SysCon_VrntLR2B_RsErrAGS2

    uint8 rtb_TmpSignalConversionAtVeLI_l;

#endif

    uint8 rtb_TmpSignalConversionAtVeLI_g;
    uint8 rtb_TmpSignalConversionAtVeL_k4;
    uint8 rtb_TmpSignalConversionAtVeL_hc;
    uint8 rtb_TmpSignalConversionAtVeLI_i;
    uint8 rtb_TmpSignalConversionAtVeLI_n;
    uint8 rtb_TmpSignalConversionAtVeLI_m;
    uint8 rtb_TmpSignalConversionAtVeLI_f;
    uint8 rtb_TmpSignalConversionAtVeL_o1;
    uint8 rtb_TmpSignalConversionAtVeLI_c;
    uint8 rtb_TmpSignalConversionAtVeL_mx;
    uint8 rtb_TmpSignalConversionAtVeL_iv;
    uint8 rtb_TmpSignalConversionAtVeL_lg;
    uint8 rtb_TmpSignalConversionAtVeL_fz;
    uint8 rtb_TmpSignalConversionAtVeL_pp;
    uint8 rtb_TmpSignalConversionAtVeL_i5;
    uint8 rtb_TmpSignalConversionAtVeLI_j;
    uint8 rtb_TmpSignalConversionAtVeL_fh;
    uint8 rtb_TmpSignalConversionAtVeL_ht;
    uint8 rtb_TmpSignalConversionAtVeL_gw;

#if Rte_SysCon_VrntLR2B_BHVCalStat

    uint8 rtb_TmpSignalConversionAtVeL_cp;

#endif

#if Rte_SysCon_VrntLR2B_BHVERR

    uint8 rtb_TmpSignalConversionAtVeL_lp;

#endif

#if Rte_SysCon_VrntLR2B_BHVMotorVolt

    uint8 rtb_TmpSignalConversionAtVeL_dw;

#endif

#if Rte_SysCon_VrntLR2B_BHVPosAct

    uint8 rtb_TmpSignalConversionAtVeL_p1;

#endif

#if Rte_SysCon_VrntLR2B_BHVSts

    uint8 rtb_TmpSignalConversionAtVeL_mu;

#endif

#if Rte_SysCon_VrntLR2B_RsErrBHV

    uint8 rtb_TmpSignalConversionAtVeL_ar;

#endif

    uint8 rtb_TmpSignalConversionAtVeL_f1;
    uint8 rtb_TmpSignalConversionAtVeL_ha;
    uint8 rtb_TmpSignalConversionAtVeL_jz;
    uint8 rtb_TmpSignalConversionAtVeL_dl;
    uint8 rtb_TmpSignalConversionAtVeLI_b;
    uint8 rtb_TmpSignalConversionAtVeL_bl;
    uint8 rtb_TmpSignalConversionAtVeL_ie;
    uint8 rtb_TmpSignalConversionAtVeL_gg;
    uint8 rtb_TmpSignalConversionAtVeL_fg;
    uint8 rtb_TmpSignalConversionAtVeL_mb;

#if Rte_SysCon_VrntLR2B_ESaveModeRqLIN

    uint8 rtb_TmpSignalConversionAtVeL_d1;

#endif

#if Rte_SysCon_VrntLR2B_ElectricModeRqLIN

    uint8 rtb_TmpSignalConversionAtVeL_ps;

#endif

#if Rte_SysCon_VrntLR2B_HybridModeRqLIN

    uint8 rtb_TmpSignalConversionAtVeL_fo;

#endif

#if Rte_SysCon_VrntLR2B_OEXVBoardTemp

    uint8 rtb_TmpSignalConversionAtVeL_im;

#endif

#if Rte_SysCon_VrntLR2B_OEXVCalRq

    uint8 rtb_TmpSignalConversionAtVeL_db;

#endif

#if Rte_SysCon_VrntLR2B_OEXVCalStat

    uint8 rtb_TmpSignalConversionAtVeL_ph;

#endif

#if Rte_SysCon_VrntLR2B_OEXVERR

    uint8 rtb_TmpSignalConversionAtVeL_f3;

#endif

#if Rte_SysCon_VrntLR2B_OEXVPosAct

    uint8 rtb_TmpSignalConversionAtVeL_cc;

#endif

#if Rte_SysCon_VrntLR2B_OEXVRefrigerantPressure

    uint8 rtb_TmpSignalConversionAtVeL_fa;

#endif

#if Rte_SysCon_VrntLR2B_OEXVRefrigerantTemp

    uint8 rtb_TmpSignalConversionAtVeLI_e;

#endif

#if Rte_SysCon_VrntLR2B_OEXVSts

    uint8 rtb_TmpSignalConversionAtVeL_mp;

#endif

#if Rte_SysCon_VrntLR2B_OEXVSupplyVolt

    uint8 rtb_TmpSignalConversionAtVeL_fs;

#endif

#if Rte_SysCon_VrntLR2B_RsErrOEXV

    uint8 rtb_TmpSignalConversionAtVeL_jd;

#endif

    uint8 rtb_TmpSignalConversionAtVeL_no;
    uint8 rtb_TmpSignalConversionAtVeL_c5;
    uint8 rtb_TmpSignalConversionAtVeL_fn;
    uint8 rtb_TmpSignalConversionAtVeL_hh;
    uint8 rtb_TmpSignalConversionAtVeL_bo;
    uint8 rtb_TmpSignalConversionAtVeL_cg;
    uint8 rtb_TmpSignalConversionAtVeL_eu;
    uint8 rtb_TmpSignalConversionAtVeL_b0;
    uint8 rtb_TmpSignalConversionAtVeL_es;
    uint8 rtb_TmpSignalConversionAtVeL_ka;
    uint8 rtb_TmpSignalConversionAtVeL_hl;
    uint8 rtb_TmpSignalConversionAtVeL_ks;
    uint8 rtb_TmpSignalConversionAtVeL_cm;
    uint8 rtb_TmpSignalConversionAtVeL_km;
    uint8 rtb_TmpSignalConversionAtVeL_j3;
    uint8 rtb_TmpSignalConversionAtVeL_mj;
    uint8 rtb_TmpSignalConversionAtVeL_do;
    uint8 rtb_TmpSignalConversionAtVeL_kg;
    uint8 rtb_TmpSignalConversionAtVeL_lh;
    uint8 rtb_TmpSignalConversionAtVeL_e1;
    uint8 rtb_TmpSignalConversionAtVeL_il;
    uint8 rtb_TmpSignalConversionAtVeL_mt;
    uint8 rtb_TmpSignalConversionAtVeL_pj;
    uint8 rtb_TmpSignalConversionAtVeL_pg;
    uint8 rtb_TmpSignalConversionAtVeL_o4;
    uint8 rtb_TmpSignalConversionAtVe_fg1;

#if Rte_SysCon_VrntLR2B_PowerPanelGndFaultDetected

    uint8 rtb_TmpSignalConversionAtVe_p1r;

#endif

#if Rte_SysCon_VrntLR2B_PowerPanelLEDAColorFeedback

    uint8 rtb_TmpSignalConversionAtVeL_ea;

#endif

#if Rte_SysCon_VrntLR2B_PowerPanelLEDAFailStatus

    uint8 rtb_TmpSignalConversionAtVeL_ak;

#endif

#if Rte_SysCon_VrntLR2B_PowerPanelLEDAFeedback

    uint8 rtb_TmpSignalConversionAtVeL_ja;

#endif

#if Rte_SysCon_VrntLR2B_PowerPanelLEDBColorFeedback

    uint8 rtb_TmpSignalConversionAtVeL_cl;

#endif

#if Rte_SysCon_VrntLR2B_PowerPanelLEDBFailStatus

    uint8 rtb_TmpSignalConversionAtVeL_oy;

#endif

#if Rte_SysCon_VrntLR2B_PowerPanelLEDBFeedback

    uint8 rtb_TmpSignalConversionAtVeL_hb;

#endif

#if Rte_SysCon_VrntLR2B_PowerPanelLEDCColorFeedback

    uint8 rtb_TmpSignalConversionAtVe_esh;

#endif

#if Rte_SysCon_VrntLR2B_PowerPanelLEDCFailStatus

    uint8 rtb_TmpSignalConversionAtVe_pjn;

#endif

#if Rte_SysCon_VrntLR2B_PowerPanelLEDCFeedback

    uint8 rtb_TmpSignalConversionAtVeL_mo;

#endif

#if Rte_SysCon_VrntLR2B_PowerPanelLINChecksumError

    uint8 rtb_TmpSignalConversionAtVeL_ok;

#endif

#if Rte_SysCon_VrntLR2B_PowerPanelLINDataError

    uint8 rtb_TmpSignalConversionAtVeL_a5;

#endif

#if Rte_SysCon_VrntLR2B_PowerPanelLINParityError

    uint8 rtb_TmpSignalConversionAtVeL_fj;

#endif

    uint8 rtb_TmpSignalConversionAtVeL_c2;
    uint8 rtb_TmpSignalConversionAtVeL_bq;
    uint8 rtb_TmpSignalConversionAtVeL_gy;
    uint8 rtb_TmpSignalConversionAtVe_mbf;
    uint8 rtb_TmpSignalConversionAtVeL_mk;
    uint8 tmpRead;

#if Rte_SysCon_VrntLR2B_AGS2CalActv

    boolean tmpRead_0;

#endif

#if Rte_SysCon_VrntLR2B_AGS2CalStat

    boolean tmpRead_1;

#endif

#if Rte_SysCon_VrntLR2B_AGS2CurrPos

    boolean tmpRead_2;

#endif

#if Rte_SysCon_VrntLR2B_AGS2ErrMechStuck

    boolean tmpRead_3;

#endif

#if Rte_SysCon_VrntLR2B_AGS2ErrOvrTemp

    boolean tmpRead_4;

#endif

#if Rte_SysCon_VrntLR2B_AGS2ErrOvrVolt

    boolean tmpRead_5;

#endif

#if Rte_SysCon_VrntLR2B_AGS2ErrUnVolt

    boolean tmpRead_6;

#endif

#if Rte_SysCon_VrntLR2B_RsErrAGS2

    boolean tmpRead_7;

#endif

    boolean tmpRead_8;
    boolean tmpRead_9;
    boolean tmpRead_a;

#if Rte_SysCon_VrntLR2B_BHVCalStat

    boolean tmpRead_b;

#endif

#if Rte_SysCon_VrntLR2B_BHVERR

    boolean tmpRead_c;

#endif

#if Rte_SysCon_VrntLR2B_BHVPosAct

    boolean tmpRead_d;

#endif

    boolean tmpRead_e;
    boolean tmpRead_f;

#if Rte_SysCon_VrntLR2B_ESaveModeRqLIN

    boolean tmpRead_g;

#endif

#if Rte_SysCon_VrntLR2B_OEXVCalStat

    boolean tmpRead_h;

#endif

    boolean tmpRead_i;
    boolean tmpRead_j;
    boolean tmpRead_k;
    boolean tmpRead_l;
    boolean tmpRead_m;
    boolean tmpRead_n;
    boolean tmpRead_o;
    boolean tmpRead_p;

#if Rte_SysCon_VrntLR2B_PowerPanelLEDAColorFeedback

    boolean tmpRead_q;

#endif

#if Rte_SysCon_VrntLR2B_PowerPanelLEDAFailStatus

    boolean tmpRead_r;

#endif

#if Rte_SysCon_VrntLR2B_PowerPanelLEDAFeedback

    boolean tmpRead_s;

#endif

#if Rte_SysCon_VrntLR2B_PowerPanelLEDBFailStatus

    boolean tmpRead_t;

#endif

#if Rte_SysCon_VrntLR2B_PowerPanelLEDBFeedback

    boolean tmpRead_u;

#endif

#if Rte_SysCon_VrntLR2B_PowerPanelLEDCFailStatus

    boolean tmpRead_v;

#endif

#if Rte_SysCon_VrntLR2B_PowerPanelLEDCFeedback

    boolean tmpRead_w;

#endif

#if Rte_SysCon_VrntLR2B_PowerPanelLINChecksumError

    boolean tmpRead_x;

#endif

#if Rte_SysCon_VrntLR2B_PowerPanelLINDataError

    boolean tmpRead_y;

#endif

#if Rte_SysCon_VrntLR2B_PowerPanelLINParityError

    boolean tmpRead_z;

#endif

    TePWMD_e_CanLocStatus rtb_Switch;
    boolean FA_out_a0;
    boolean FA_out_a1;
    boolean FA_out_au;
    boolean FA_out_av;
    boolean FA_out_bb;
    boolean FA_out_bk;
    boolean FA_out_br;
    boolean FA_out_c22;
    boolean FA_out_c3;
    boolean FA_out_cg;
    boolean FA_out_cq;
    boolean FA_out_d4;
    boolean FA_out_f;
    boolean FA_out_fc;
    boolean FA_out_fg;
    boolean FA_out_fq;
    boolean FA_out_fw;
    boolean FA_out_go;
    boolean FA_out_gp;
    boolean FA_out_hi;
    boolean FA_out_hq;
    boolean FA_out_j;
    boolean FA_out_j2;
    boolean FA_out_je;
    boolean FA_out_jwa;
    boolean FA_out_jy;
    boolean FA_out_k1;
    boolean FA_out_k1r;
    boolean FA_out_kf;
    boolean FA_out_kfi;
    boolean FA_out_kiz;
    boolean FA_out_kt;
    boolean FA_out_l;
    boolean FA_out_lf;
    boolean FA_out_m1;
    boolean FA_out_m4;
    boolean FA_out_me;
    boolean FA_out_n0;
    boolean FA_out_n3;
    boolean FA_out_ox;
    boolean FA_out_p0;
    boolean FA_out_pp;
    boolean FA_out_pw;
    boolean rtb_RelationalOperator;
    boolean tmpRead_10;
    boolean tmpRead_11;
    boolean tmpRead_12;
    boolean tmpRead_13;
    boolean tmpRead_14;

#if Rte_SysCon_VrntLR2B_AGS2BoostStat || Rte_SysCon_VrntLR2B_AGS2CurrPos

    boolean FA_out_om;

#endif

#if Rte_SysCon_VrntLR2B_AGS2ErrLIN

    boolean FA_out_pg;

#endif

    boolean FA_out_k5;

#if Rte_SysCon_VrntLR2B_BHVMotorVolt || Rte_SysCon_VrntLR2B_BHVPosAct

    boolean FA_out_pb;

#endif

#if Rte_SysCon_VrntLR2B_BHVSts

    boolean FA_out_fi;

#endif

    boolean FA_out_lo;

#if Rte_SysCon_VrntLR2B_ElectricModeRqLIN

    boolean FA_out_fr;

#endif

#if Rte_SysCon_VrntLR2B_HybridModeRqLIN

    boolean FA_out_iz;

#endif

#if Rte_SysCon_VrntLR2B_OEXVBoardTemp

    boolean FA_out_dv;

#endif

#if Rte_SysCon_VrntLR2B_OEXVCalRq || Rte_SysCon_VrntLR2B_OEXVCalStat

    boolean FA_out_brr;

#endif

#if Rte_SysCon_VrntLR2B_OEXVERR

    boolean FA_out_jj;

#endif

#if Rte_SysCon_VrntLR2B_OEXVPosAct

    boolean FA_out_np;

#endif

#if Rte_SysCon_VrntLR2B_OEXVRefrigerantPressure

    boolean FA_out_pf;

#endif

#if Rte_SysCon_VrntLR2B_OEXVRefrigerantTemp

    boolean FA_out_j3;

#endif

#if Rte_SysCon_VrntLR2B_OEXVSts

    boolean FA_out_e4;

#endif

#if Rte_SysCon_VrntLR2B_OEXVSupplyVolt

    boolean FA_out_jw;

#endif

#if Rte_SysCon_VrntLR2B_PowerPanelGndFaultDetected || Rte_SysCon_VrntLR2B_PowerPanelLEDAFeedback

    boolean FA_out_o;

#endif

#if Rte_SysCon_VrntLR2B_PowerPanelLEDBColorFeedback || Rte_SysCon_VrntLR2B_PowerPanelLEDBFeedback

    boolean FA_out_mv;

#endif

#if Rte_SysCon_VrntLR2B_PowerPanelLEDCColorFeedback || Rte_SysCon_VrntLR2B_PowerPanelLEDCFeedback

    boolean FA_out_p;

#endif

    float32 tmp;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Switch: '<S17>/Switch' incorporates:
     *  Constant: '<S11>/Calib'
     *  Inport: '<Root>/VeCANR_e_CanLocEnblStatus'
     */
    if (KeLR2B_b_CanLocStatusBypEnbl)
    {
        /* Switch: '<S17>/Switch' incorporates:
         *  Constant: '<S12>/Calib'
         */
        rtb_Switch = KeLR2B_e_CanLocStatus;
    }
    else
    {
        (void)Rte_Read_VeCANR_e_CanLocEnblStatus_VeCANR_e_CanLocEnblStatus
            (&tmpRead);

        /* Switch: '<S17>/Switch' incorporates:
         *  DataTypeConversion: '<S2>/Data Type Conversion'
         *  Inport: '<Root>/VeCANR_e_CanLocEnblStatus'
         */
        rtb_Switch = (TePWMD_e_CanLocStatus)tmpRead;
    }

    /* End of Switch: '<S17>/Switch' */

    /* RelationalOperator: '<S2>/Relational Operator' incorporates:
     *  Constant: '<S10>/Constant'
     *  Switch: '<S17>/Switch'
     */
    rtb_RelationalOperator = (((uint32)rtb_Switch) == CePWMD_e_LOC_Enable);

    /* SignalConversion generated from: '<S2>/VeLINR_b_AGS2_BoostStat' incorporates:
     *  Inport: '<Root>/VeLINR_b_AGS2_BoostStatTO'
     */
#if Rte_SysCon_VrntLR2B_AGS2BoostStat

    /* Outputs for Atomic SubSystem: '<S3>/AGS2_BoostStat' */
    /* SignalConversion generated from: '<S2>/VeLINR_b_AGS2_BoostStat' incorporates:
     *  Inport: '<Root>/VeLINR_b_AGS2_BoostStat'
     */
    rtb_TmpSignalConversionAtVeLINR =
        Rte_Read_VeLINR_b_AGS2_BoostStat_VeLINR_b_AGS2_BoostStat
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_A);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S33>:1' */
    (void)Rte_Read_VeLINR_b_AGS2_BoostStatTO_VeLINR_b_AGS2_BoostStatTO
        (&FA_out_om);

    /* Outputs for Atomic SubSystem: '<S18>/AGS2_BoostStat' */
    /* Chart: '<S30>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_AGS2_BoostStatTO'
     */
    if (FA_out_om)
    {
        /* Transition: '<S33>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S33>:6' */
            /* Transition: '<S33>:25' */
            /* Call Fsft */
            VeLINR_y_AGS2_BoostStat_CallStatus = 2U;

            /* Event: '<S33>:39' */
            /* Transition: '<S33>:29' */
        }
        else
        {
            /* Transition: '<S33>:30' */
            /* Call Tmot */
            VeLINR_y_AGS2_BoostStat_CallStatus = 3U;

            /* Event: '<S33>:40' */
        }

        /* Transition: '<S33>:36' */
        /* Transition: '<S33>:23' */
    }
    else
    {
        /* Transition: '<S33>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLINR) == 133)
        {
            /* Transition: '<S33>:33' */
            /* Transition: '<S33>:35' */
            /* Call Nothing */
            VeLINR_y_AGS2_BoostStat_CallStatus = 4U;

            /* Transition: '<S33>:23' */
        }
        else
        {
            /* Transition: '<S33>:46' */
            /* Transition: '<S33>:37' */
            /* Call Poke */
            VeLINR_y_AGS2_BoostStat_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S29>/Poke' */
            /* FunctionCaller: '<S34>/Function Caller' */
            /* Event: '<S33>:38' */
            Rte_Call_PokeTAIR_b_AGS2_BoostSts_PokeTAIR_b_AGS2_BoostSts
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_A);

            /* End of Outputs for SubSystem: '<S29>/Poke' */
        }
    }

    /* End of Chart: '<S30>/Chart' */
    /* End of Outputs for SubSystem: '<S18>/AGS2_BoostStat' */
    /* End of Outputs for SubSystem: '<S3>/AGS2_BoostStat' */
    /* Transition: '<S33>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_b_AGS2_BoostStat' */

    /* SignalConversion generated from: '<S2>/VeLINR_b_AGS2_CalActv' incorporates:
     *  Inport: '<Root>/VeLINR_b_AGS2_CalActvTO'
     */
#if Rte_SysCon_VrntLR2B_AGS2CalActv

    /* Outputs for Atomic SubSystem: '<S3>/AGS2_CalActv' */
    /* SignalConversion generated from: '<S2>/VeLINR_b_AGS2_CalActv' incorporates:
     *  Inport: '<Root>/VeLINR_b_AGS2_CalActv'
     */
    rtb_TmpSignalConversionAtVeLI_a =
        Rte_Read_VeLINR_b_AGS2_CalActv_VeLINR_b_AGS2_CalActv
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_c);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S39>:1' */
    (void)Rte_Read_VeLINR_b_AGS2_CalActvTO_VeLINR_b_AGS2_CalActvTO(&tmpRead_0);

    /* Outputs for Atomic SubSystem: '<S19>/AGS2_CalActv' */
    /* Chart: '<S36>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_AGS2_CalActvTO'
     */
    if (tmpRead_0)
    {
        /* Transition: '<S39>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S39>:6' */
            /* Transition: '<S39>:25' */
            /* Call Fsft */
            VeLINR_y_AGS2_CalActv_CallStatus = 2U;

            /* Event: '<S39>:39' */
            /* Transition: '<S39>:29' */
        }
        else
        {
            /* Transition: '<S39>:30' */
            /* Call Tmot */
            VeLINR_y_AGS2_CalActv_CallStatus = 3U;

            /* Event: '<S39>:40' */
        }

        /* Transition: '<S39>:36' */
        /* Transition: '<S39>:23' */
    }
    else
    {
        /* Transition: '<S39>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_a) == 133)
        {
            /* Transition: '<S39>:33' */
            /* Transition: '<S39>:35' */
            /* Call Nothing */
            VeLINR_y_AGS2_CalActv_CallStatus = 4U;

            /* Transition: '<S39>:23' */
        }
        else
        {
            /* Transition: '<S39>:46' */
            /* Transition: '<S39>:37' */
            /* Call Poke */
            VeLINR_y_AGS2_CalActv_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S35>/Poke' */
            /* FunctionCaller: '<S40>/Function Caller' */
            /* Event: '<S39>:38' */
            Rte_Call_PokeTAIR_b_AGS2_CalibrationActv_PokeTAIR_b_AGS2_CalibrationActv
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_c);

            /* End of Outputs for SubSystem: '<S35>/Poke' */
        }
    }

    /* End of Chart: '<S36>/Chart' */
    /* End of Outputs for SubSystem: '<S19>/AGS2_CalActv' */
    /* End of Outputs for SubSystem: '<S3>/AGS2_CalActv' */
    /* Transition: '<S39>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_b_AGS2_CalActv' */

    /* SignalConversion generated from: '<S2>/VeLINR_b_AGS2_CalStat' incorporates:
     *  Inport: '<Root>/VeLINR_b_AGS2_CalStatTO'
     */
#if Rte_SysCon_VrntLR2B_AGS2CalStat

    /* Outputs for Atomic SubSystem: '<S3>/AGS2_CalStat' */
    /* SignalConversion generated from: '<S2>/VeLINR_b_AGS2_CalStat' incorporates:
     *  Inport: '<Root>/VeLINR_b_AGS2_CalStat'
     */
    rtb_TmpSignalConversionAtVeL_a1 =
        Rte_Read_VeLINR_b_AGS2_CalStat_VeLINR_b_AGS2_CalStat
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_j);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S45>:1' */
    (void)Rte_Read_VeLINR_b_AGS2_CalStatTO_VeLINR_b_AGS2_CalStatTO(&tmpRead_1);

    /* Outputs for Atomic SubSystem: '<S20>/AGS2_CalStat' */
    /* Chart: '<S42>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_AGS2_CalStatTO'
     */
    if (tmpRead_1)
    {
        /* Transition: '<S45>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S45>:6' */
            /* Transition: '<S45>:25' */
            /* Call Fsft */
            VeLINR_y_AGS2_CalStat_CallStatus = 2U;

            /* Event: '<S45>:39' */
            /* Transition: '<S45>:29' */
        }
        else
        {
            /* Transition: '<S45>:30' */
            /* Call Tmot */
            VeLINR_y_AGS2_CalStat_CallStatus = 3U;

            /* Event: '<S45>:40' */
        }

        /* Transition: '<S45>:36' */
        /* Transition: '<S45>:23' */
    }
    else
    {
        /* Transition: '<S45>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_a1) == 133)
        {
            /* Transition: '<S45>:33' */
            /* Transition: '<S45>:35' */
            /* Call Nothing */
            VeLINR_y_AGS2_CalStat_CallStatus = 4U;

            /* Transition: '<S45>:23' */
        }
        else
        {
            /* Transition: '<S45>:46' */
            /* Transition: '<S45>:37' */
            /* Call Poke */
            VeLINR_y_AGS2_CalStat_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S41>/Poke' */
            /* FunctionCaller: '<S46>/Function Caller' incorporates:
             *  DataTypeConversion: '<S46>/Data Type Conversion'
             *  DataTypeConversion: '<S46>/Data Type Conversion1'
             */
            /* Event: '<S45>:38' */
            Rte_Call_PokeTAIR_e_AGS2_CalibrationSts_PokeTAIR_e_AGS2_CalibrationSts
                ((TeTAIR_e_AGS_Calibration_Sts)
                 LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_j);

            /* End of Outputs for SubSystem: '<S41>/Poke' */
        }
    }

    /* End of Chart: '<S42>/Chart' */
    /* End of Outputs for SubSystem: '<S20>/AGS2_CalStat' */
    /* End of Outputs for SubSystem: '<S3>/AGS2_CalStat' */
    /* Transition: '<S45>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_b_AGS2_CalStat' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AGS2_CurrPos' incorporates:
     *  Inport: '<Root>/VeLINR_b_AGS2_CurrPosTO'
     */
#if Rte_SysCon_VrntLR2B_AGS2CurrPos

    /* Outputs for Atomic SubSystem: '<S3>/AGS2_CurrPos' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_AGS2_CurrPos' incorporates:
     *  Inport: '<Root>/VeLINR_e_AGS2_CurrPos'
     */
    rtb_TmpSignalConversionAtVeLI_k =
        Rte_Read_VeLINR_e_AGS2_CurrPos_VeLINR_e_AGS2_CurrPos
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_A);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S52>:1' */
    (void)Rte_Read_VeLINR_b_AGS2_CurrPosTO_VeLINR_b_AGS2_CurrPosTO(&tmpRead_2);

    /* Outputs for Atomic SubSystem: '<S21>/AGS2_CurrPos' */
    /* Chart: '<S48>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_AGS2_CurrPosTO'
     */
    if (tmpRead_2)
    {
        /* Transition: '<S52>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S52>:6' */
            /* Transition: '<S52>:25' */
            /* Call Fsft */
            VeLINR_y_AGS2_CurrPos_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S47>/Fsft' */
            /* FunctionCaller: '<S53>/Function Caller' */
            /* Event: '<S52>:39' */
            Rte_Call_FsftTAIR_b_AGS2_CurrPos_FsftTAIR_b_AGS2_CurrPos();

            /* End of Outputs for SubSystem: '<S47>/Fsft' */
            /* Transition: '<S52>:29' */
        }
        else
        {
            /* Transition: '<S52>:30' */
            /* Call Tmot */
            VeLINR_y_AGS2_CurrPos_CallStatus = 3U;

            /* Event: '<S52>:40' */
        }

        /* Transition: '<S52>:36' */
        /* Transition: '<S52>:23' */
    }
    else
    {
        /* Transition: '<S52>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_k) == 133)
        {
            /* Transition: '<S52>:33' */
            /* Transition: '<S52>:35' */
            /* Call Nothing */
            VeLINR_y_AGS2_CurrPos_CallStatus = 4U;

            /* Transition: '<S52>:23' */
        }
        else
        {
            /* Transition: '<S52>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeLI_k) == 1)
            {
                /* Transition: '<S52>:48' */
                /* Transition: '<S52>:53' */
                FA_out_om = true;

                /* Transition: '<S52>:56' */
            }
            else
            {
                /* Transition: '<S52>:52' */
                FA_out_om = false;
            }

            /* Transition: '<S52>:37' */
            /* Call Poke */
            VeLINR_y_AGS2_CurrPos_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S47>/Poke' */
            /* FunctionCaller: '<S54>/Function Caller' */
            /* Event: '<S52>:38' */
            Rte_Call_PokeTAIR_e_AGS2_CurrPos_LIN_PokeTAIR_e_AGS2_CurrPos_LIN
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_A, FA_out_om);

            /* End of Outputs for SubSystem: '<S47>/Poke' */
        }
    }

    /* End of Chart: '<S48>/Chart' */
    /* End of Outputs for SubSystem: '<S21>/AGS2_CurrPos' */
    /* End of Outputs for SubSystem: '<S3>/AGS2_CurrPos' */
    /* Transition: '<S52>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_AGS2_CurrPos' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AGS2_ErrLIN' incorporates:
     *  Inport: '<Root>/VeLINR_b_AGS2_ErrLIN_TO'
     */
#if Rte_SysCon_VrntLR2B_AGS2ErrLIN

    /* Outputs for Atomic SubSystem: '<S3>/AGS2_ErrLIN' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_AGS2_ErrLIN' incorporates:
     *  Inport: '<Root>/VeLINR_e_AGS2_ErrLIN'
     */
    rtb_TmpSignalConversionAtVeL_kq =
        Rte_Read_VeLINR_e_AGS2_ErrLIN_VeLINR_e_AGS2_ErrLIN
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_f);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S60>:1' */
    (void)Rte_Read_VeLINR_b_AGS2_ErrLIN_TO_VeLINR_b_AGS2_ErrLIN_TO(&FA_out_pg);

    /* Outputs for Atomic SubSystem: '<S22>/AGS2_ErrLIN' */
    /* Chart: '<S56>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_AGS2_ErrLIN_TO'
     */
    if (FA_out_pg)
    {
        /* Transition: '<S60>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S60>:6' */
            /* Transition: '<S60>:25' */
            /* Call Fsft */
            VeLINR_y_AGS2_ErrLIN_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S55>/Fsft' */
            /* FunctionCaller: '<S61>/Function Caller' */
            /* Event: '<S60>:39' */
            Rte_Call_FsftTAIR_e_AGS2_ErrFdb_FsftTAIR_e_AGS2_ErrFdb();

            /* End of Outputs for SubSystem: '<S55>/Fsft' */
            /* Transition: '<S60>:29' */
        }
        else
        {
            /* Transition: '<S60>:30' */
            /* Call Tmot */
            VeLINR_y_AGS2_ErrLIN_CallStatus = 3U;

            /* Event: '<S60>:40' */
        }

        /* Transition: '<S60>:36' */
        /* Transition: '<S60>:23' */
    }
    else
    {
        /* Transition: '<S60>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_kq) == 133)
        {
            /* Transition: '<S60>:33' */
            /* Transition: '<S60>:35' */
            /* Call Nothing */
            VeLINR_y_AGS2_ErrLIN_CallStatus = 4U;

            /* Transition: '<S60>:23' */
        }
        else
        {
            /* Transition: '<S60>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_kq) == 1)
            {
                /* Transition: '<S60>:48' */
                /* Transition: '<S60>:53' */
                FA_out_pg = true;

                /* Transition: '<S60>:56' */
            }
            else
            {
                /* Transition: '<S60>:52' */
            }

            /* Transition: '<S60>:37' */
            /* Call Poke */
            VeLINR_y_AGS2_ErrLIN_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S55>/Poke' */
            /* FunctionCaller: '<S62>/Function Caller' */
            /* Event: '<S60>:38' */
            Rte_Call_PokeTAIR_e_AGS2_ErrFdb_PokeTAIR_e_AGS2_ErrFdb
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_f, FA_out_pg);

            /* End of Outputs for SubSystem: '<S55>/Poke' */
        }
    }

    /* End of Chart: '<S56>/Chart' */
    /* End of Outputs for SubSystem: '<S22>/AGS2_ErrLIN' */
    /* End of Outputs for SubSystem: '<S3>/AGS2_ErrLIN' */
    /* Transition: '<S60>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_AGS2_ErrLIN' */

    /* SignalConversion generated from: '<S2>/VeLINR_b_AGS2_ErrMechBreak' incorporates:
     *  Inport: '<Root>/VeLINR_b_AGS2_ErrMechBreakTO'
     */
#if Rte_SysCon_VrntLR2B_AGS2ErrMechBreak

    /* Outputs for Atomic SubSystem: '<S3>/AGS2_ErrMechBreak' */
    /* SignalConversion generated from: '<S2>/VeLINR_b_AGS2_ErrMechBreak' incorporates:
     *  Inport: '<Root>/VeLINR_b_AGS2_ErrMechBreak'
     */
    rtb_TmpSignalConversionAtVeLI_o =
        Rte_Read_VeLINR_b_AGS2_ErrMechBreak_VeLINR_b_AGS2_ErrMechBreak
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_cuq);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S67>:1' */
    (void)Rte_Read_VeLINR_b_AGS2_ErrMechBreakTO_VeLINR_b_AGS2_ErrMechBreakTO
        (&FA_out_c3);

    /* Outputs for Atomic SubSystem: '<S23>/AGS2_ErrMechBreak' */
    /* Chart: '<S64>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_AGS2_ErrMechBreakTO'
     */
    if (FA_out_c3)
    {
        /* Transition: '<S67>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S67>:6' */
            /* Transition: '<S67>:25' */
            /* Call Fsft */
            VeLINR_y_AGS2_ErrMechBreak_CallStatus = 2U;

            /* Event: '<S67>:39' */
            /* Transition: '<S67>:29' */
        }
        else
        {
            /* Transition: '<S67>:30' */
            /* Call Tmot */
            VeLINR_y_AGS2_ErrMechBreak_CallStatus = 3U;

            /* Event: '<S67>:40' */
        }

        /* Transition: '<S67>:36' */
        /* Transition: '<S67>:23' */
    }
    else
    {
        /* Transition: '<S67>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_o) == 133)
        {
            /* Transition: '<S67>:33' */
            /* Transition: '<S67>:35' */
            /* Call Nothing */
            VeLINR_y_AGS2_ErrMechBreak_CallStatus = 4U;

            /* Transition: '<S67>:23' */
        }
        else
        {
            /* Transition: '<S67>:46' */
            /* Transition: '<S67>:37' */
            /* Call Poke */
            VeLINR_y_AGS2_ErrMechBreak_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S63>/Poke' */
            /* FunctionCaller: '<S68>/Function Caller' */
            /* Event: '<S67>:38' */
            Rte_Call_PokeTAIR_b_AGS2_ErrMechBreak_PokeTAIR_b_AGS2_ErrMechBreak
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_cuq);

            /* End of Outputs for SubSystem: '<S63>/Poke' */
        }
    }

    /* End of Chart: '<S64>/Chart' */
    /* End of Outputs for SubSystem: '<S23>/AGS2_ErrMechBreak' */
    /* End of Outputs for SubSystem: '<S3>/AGS2_ErrMechBreak' */
    /* Transition: '<S67>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_b_AGS2_ErrMechBreak' */

    /* SignalConversion generated from: '<S2>/VeLINR_b_AGS2_ErrMechStuck' incorporates:
     *  Inport: '<Root>/VeLINR_b_AGS2_ErrMechStuckTO'
     */
#if Rte_SysCon_VrntLR2B_AGS2ErrMechStuck

    /* Outputs for Atomic SubSystem: '<S3>/AGS2_ErrMechStuck' */
    /* SignalConversion generated from: '<S2>/VeLINR_b_AGS2_ErrMechStuck' incorporates:
     *  Inport: '<Root>/VeLINR_b_AGS2_ErrMechStuck'
     */
    rtb_TmpSignalConversionAtVeL_oq =
        Rte_Read_VeLINR_b_AGS2_ErrMechStuck_VeLINR_b_AGS2_ErrMechStuck
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_d);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S73>:1' */
    (void)Rte_Read_VeLINR_b_AGS2_ErrMechStuckTO_VeLINR_b_AGS2_ErrMechStuckTO
        (&tmpRead_3);

    /* Outputs for Atomic SubSystem: '<S24>/AGS2_ErrMechStuck' */
    /* Chart: '<S70>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_AGS2_ErrMechStuckTO'
     */
    if (tmpRead_3)
    {
        /* Transition: '<S73>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S73>:6' */
            /* Transition: '<S73>:25' */
            /* Call Fsft */
            VeLINR_y_AGS2_ErrMechStuck_CallStatus = 2U;

            /* Event: '<S73>:39' */
            /* Transition: '<S73>:29' */
        }
        else
        {
            /* Transition: '<S73>:30' */
            /* Call Tmot */
            VeLINR_y_AGS2_ErrMechStuck_CallStatus = 3U;

            /* Event: '<S73>:40' */
        }

        /* Transition: '<S73>:36' */
        /* Transition: '<S73>:23' */
    }
    else
    {
        /* Transition: '<S73>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_oq) == 133)
        {
            /* Transition: '<S73>:33' */
            /* Transition: '<S73>:35' */
            /* Call Nothing */
            VeLINR_y_AGS2_ErrMechStuck_CallStatus = 4U;

            /* Transition: '<S73>:23' */
        }
        else
        {
            /* Transition: '<S73>:46' */
            /* Transition: '<S73>:37' */
            /* Call Poke */
            VeLINR_y_AGS2_ErrMechStuck_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S69>/Poke' */
            /* FunctionCaller: '<S74>/Function Caller' */
            /* Event: '<S73>:38' */
            Rte_Call_PokeTAIR_b_AGS2_ErrMechStuck_PokeTAIR_b_AGS2_ErrMechStuck
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_d);

            /* End of Outputs for SubSystem: '<S69>/Poke' */
        }
    }

    /* End of Chart: '<S70>/Chart' */
    /* End of Outputs for SubSystem: '<S24>/AGS2_ErrMechStuck' */
    /* End of Outputs for SubSystem: '<S3>/AGS2_ErrMechStuck' */
    /* Transition: '<S73>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_b_AGS2_ErrMechStuck' */

    /* SignalConversion generated from: '<S2>/VeLINR_b_AGS2_ErrOvrTemp' incorporates:
     *  Inport: '<Root>/VeLINR_b_AGS2_ErrOvrTempTO'
     */
#if Rte_SysCon_VrntLR2B_AGS2ErrOvrTemp

    /* Outputs for Atomic SubSystem: '<S3>/AGS2_ErrOvrTemp' */
    /* SignalConversion generated from: '<S2>/VeLINR_b_AGS2_ErrOvrTemp' incorporates:
     *  Inport: '<Root>/VeLINR_b_AGS2_ErrOvrTemp'
     */
    rtb_TmpSignalConversionAtVeLI_h =
        Rte_Read_VeLINR_b_AGS2_ErrOvrTemp_VeLINR_b_AGS2_ErrOvrTemp
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_m);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S79>:1' */
    (void)Rte_Read_VeLINR_b_AGS2_ErrOvrTempTO_VeLINR_b_AGS2_ErrOvrTempTO
        (&tmpRead_4);

    /* Outputs for Atomic SubSystem: '<S25>/AGS2_ErrOvrTemp' */
    /* Chart: '<S76>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_AGS2_ErrOvrTempTO'
     */
    if (tmpRead_4)
    {
        /* Transition: '<S79>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S79>:6' */
            /* Transition: '<S79>:25' */
            /* Call Fsft */
            VeLINR_y_AGS2_ErrOvrTemp_CallStatus = 2U;

            /* Event: '<S79>:39' */
            /* Transition: '<S79>:29' */
        }
        else
        {
            /* Transition: '<S79>:30' */
            /* Call Tmot */
            VeLINR_y_AGS2_ErrOvrTemp_CallStatus = 3U;

            /* Event: '<S79>:40' */
        }

        /* Transition: '<S79>:36' */
        /* Transition: '<S79>:23' */
    }
    else
    {
        /* Transition: '<S79>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_h) == 133)
        {
            /* Transition: '<S79>:33' */
            /* Transition: '<S79>:35' */
            /* Call Nothing */
            VeLINR_y_AGS2_ErrOvrTemp_CallStatus = 4U;

            /* Transition: '<S79>:23' */
        }
        else
        {
            /* Transition: '<S79>:46' */
            /* Transition: '<S79>:37' */
            /* Call Poke */
            VeLINR_y_AGS2_ErrOvrTemp_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S75>/Poke' */
            /* FunctionCaller: '<S80>/Function Caller' */
            /* Event: '<S79>:38' */
            Rte_Call_PokeTAIR_b_AGS2_ErrOverTemp_PokeTAIR_b_AGS2_ErrOverTemp
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_m);

            /* End of Outputs for SubSystem: '<S75>/Poke' */
        }
    }

    /* End of Chart: '<S76>/Chart' */
    /* End of Outputs for SubSystem: '<S25>/AGS2_ErrOvrTemp' */
    /* End of Outputs for SubSystem: '<S3>/AGS2_ErrOvrTemp' */
    /* Transition: '<S79>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_b_AGS2_ErrOvrTemp' */

    /* SignalConversion generated from: '<S2>/VeLINR_b_AGS2_ErrOvrVolt' incorporates:
     *  Inport: '<Root>/VeLINR_b_AGS2_ErrOvrVoltTO'
     */
#if Rte_SysCon_VrntLR2B_AGS2ErrOvrVolt

    /* Outputs for Atomic SubSystem: '<S3>/AGS2_ErrOvrVolt' */
    /* SignalConversion generated from: '<S2>/VeLINR_b_AGS2_ErrOvrVolt' incorporates:
     *  Inport: '<Root>/VeLINR_b_AGS2_ErrOvrVolt'
     */
    rtb_TmpSignalConversionAtVeLI_p =
        Rte_Read_VeLINR_b_AGS2_ErrOvrVolt_VeLINR_b_AGS2_ErrOvrVolt
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_l);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S85>:1' */
    (void)Rte_Read_VeLINR_b_AGS2_ErrOvrVoltTO_VeLINR_b_AGS2_ErrOvrVoltTO
        (&tmpRead_5);

    /* Outputs for Atomic SubSystem: '<S26>/AGS2_ErrOvrVolt' */
    /* Chart: '<S82>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_AGS2_ErrOvrVoltTO'
     */
    if (tmpRead_5)
    {
        /* Transition: '<S85>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S85>:6' */
            /* Transition: '<S85>:25' */
            /* Call Fsft */
            VeLINR_y_AGS2_ErrOvrVolt_CallStatus = 2U;

            /* Event: '<S85>:39' */
            /* Transition: '<S85>:29' */
        }
        else
        {
            /* Transition: '<S85>:30' */
            /* Call Tmot */
            VeLINR_y_AGS2_ErrOvrVolt_CallStatus = 3U;

            /* Event: '<S85>:40' */
        }

        /* Transition: '<S85>:36' */
        /* Transition: '<S85>:23' */
    }
    else
    {
        /* Transition: '<S85>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_p) == 133)
        {
            /* Transition: '<S85>:33' */
            /* Transition: '<S85>:35' */
            /* Call Nothing */
            VeLINR_y_AGS2_ErrOvrVolt_CallStatus = 4U;

            /* Transition: '<S85>:23' */
        }
        else
        {
            /* Transition: '<S85>:46' */
            /* Transition: '<S85>:37' */
            /* Call Poke */
            VeLINR_y_AGS2_ErrOvrVolt_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S81>/Poke' */
            /* FunctionCaller: '<S86>/Function Caller' */
            /* Event: '<S85>:38' */
            Rte_Call_PokeTAIR_b_AGS2_ErrOverVolt_PokeTAIR_b_AGS2_ErrOverVolt
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_l);

            /* End of Outputs for SubSystem: '<S81>/Poke' */
        }
    }

    /* End of Chart: '<S82>/Chart' */
    /* End of Outputs for SubSystem: '<S26>/AGS2_ErrOvrVolt' */
    /* End of Outputs for SubSystem: '<S3>/AGS2_ErrOvrVolt' */
    /* Transition: '<S85>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_b_AGS2_ErrOvrVolt' */

    /* SignalConversion generated from: '<S2>/VeLINR_b_AGS2_ErrUnVolt' incorporates:
     *  Inport: '<Root>/VeLINR_b_AGS2_ErrUnVoltTO'
     */
#if Rte_SysCon_VrntLR2B_AGS2ErrUnVolt

    /* Outputs for Atomic SubSystem: '<S3>/AGS2_ErrUnVolt' */
    /* SignalConversion generated from: '<S2>/VeLINR_b_AGS2_ErrUnVolt' incorporates:
     *  Inport: '<Root>/VeLINR_b_AGS2_ErrUnVolt'
     */
    rtb_TmpSignalConversionAtVeLI_d =
        Rte_Read_VeLINR_b_AGS2_ErrUnVolt_VeLINR_b_AGS2_ErrUnVolt
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__mf);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S91>:1' */
    (void)Rte_Read_VeLINR_b_AGS2_ErrUnVoltTO_VeLINR_b_AGS2_ErrUnVoltTO
        (&tmpRead_6);

    /* Outputs for Atomic SubSystem: '<S27>/AGS2_ErrUnVolt' */
    /* Chart: '<S88>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_AGS2_ErrUnVoltTO'
     */
    if (tmpRead_6)
    {
        /* Transition: '<S91>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S91>:6' */
            /* Transition: '<S91>:25' */
            /* Call Fsft */
            VeLINR_y_AGS2_ErrUnVolt_CallStatus = 2U;

            /* Event: '<S91>:39' */
            /* Transition: '<S91>:29' */
        }
        else
        {
            /* Transition: '<S91>:30' */
            /* Call Tmot */
            VeLINR_y_AGS2_ErrUnVolt_CallStatus = 3U;

            /* Event: '<S91>:40' */
        }

        /* Transition: '<S91>:36' */
        /* Transition: '<S91>:23' */
    }
    else
    {
        /* Transition: '<S91>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_d) == 133)
        {
            /* Transition: '<S91>:33' */
            /* Transition: '<S91>:35' */
            /* Call Nothing */
            VeLINR_y_AGS2_ErrUnVolt_CallStatus = 4U;

            /* Transition: '<S91>:23' */
        }
        else
        {
            /* Transition: '<S91>:46' */
            /* Transition: '<S91>:37' */
            /* Call Poke */
            VeLINR_y_AGS2_ErrUnVolt_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S87>/Poke' */
            /* FunctionCaller: '<S92>/Function Caller' */
            /* Event: '<S91>:38' */
            Rte_Call_PokeTAIR_b_AGS2_ErrUnderVolt_PokeTAIR_b_AGS2_ErrUnderVolt
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__mf);

            /* End of Outputs for SubSystem: '<S87>/Poke' */
        }
    }

    /* End of Chart: '<S88>/Chart' */
    /* End of Outputs for SubSystem: '<S27>/AGS2_ErrUnVolt' */
    /* End of Outputs for SubSystem: '<S3>/AGS2_ErrUnVolt' */
    /* Transition: '<S91>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_b_AGS2_ErrUnVolt' */

    /* SignalConversion generated from: '<S2>/VeLINR_b_RsErr_AGS2' incorporates:
     *  Inport: '<Root>/VeLINR_b_RsErr_AGS2TO'
     */
#if Rte_SysCon_VrntLR2B_RsErrAGS2

    /* Outputs for Atomic SubSystem: '<S3>/RsErr_AGS2' */
    /* SignalConversion generated from: '<S2>/VeLINR_b_RsErr_AGS2' incorporates:
     *  Inport: '<Root>/VeLINR_b_RsErr_AGS2'
     */
    rtb_TmpSignalConversionAtVeLI_l =
        Rte_Read_VeLINR_b_RsErr_AGS2_VeLINR_b_RsErr_AGS2
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_R);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S97>:1' */
    (void)Rte_Read_VeLINR_b_RsErr_AGS2TO_VeLINR_b_RsErr_AGS2TO(&tmpRead_7);

    /* Outputs for Atomic SubSystem: '<S28>/RsErr_AGS2' */
    /* Chart: '<S94>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_RsErr_AGS2TO'
     */
    if (tmpRead_7)
    {
        /* Transition: '<S97>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S97>:6' */
            /* Transition: '<S97>:25' */
            /* Call Fsft */
            VeLINR_y_RsErr_AGS2_CallStatus = 2U;

            /* Event: '<S97>:39' */
            /* Transition: '<S97>:29' */
        }
        else
        {
            /* Transition: '<S97>:30' */
            /* Call Tmot */
            VeLINR_y_RsErr_AGS2_CallStatus = 3U;

            /* Event: '<S97>:40' */
        }

        /* Transition: '<S97>:36' */
        /* Transition: '<S97>:23' */
    }
    else
    {
        /* Transition: '<S97>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_l) == 133)
        {
            /* Transition: '<S97>:33' */
            /* Transition: '<S97>:35' */
            /* Call Nothing */
            VeLINR_y_RsErr_AGS2_CallStatus = 4U;

            /* Transition: '<S97>:23' */
        }
        else
        {
            /* Transition: '<S97>:46' */
            /* Transition: '<S97>:37' */
            /* Call Poke */
            VeLINR_y_RsErr_AGS2_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S93>/Poke' */
            /* FunctionCaller: '<S98>/Function Caller' */
            /* Event: '<S97>:38' */
            Rte_Call_PokeTAIR_b_AGS2_ResErr_PokeTAIR_b_AGS2_ResErr
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_R);

            /* End of Outputs for SubSystem: '<S93>/Poke' */
        }
    }

    /* End of Chart: '<S94>/Chart' */
    /* End of Outputs for SubSystem: '<S28>/RsErr_AGS2' */
    /* End of Outputs for SubSystem: '<S3>/RsErr_AGS2' */
    /* Transition: '<S97>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_b_RsErr_AGS2' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AHP_AIR_PRE_ERR_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AHP_AIR_PRE_ERR_ErrSts'
     */
    rtb_TmpSignalConversionAtVeLI_g =
        Rte_Read_VeLINR_e_AHP_AIR_PRE_ERR_VeLINR_e_AHP_AIR_PRE_ERR
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_b);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AHP_AIR_PRE_ERR_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S120>:1' */
    (void)Rte_Read_VeLINR_b_AHP_AIR_PRE_ERR_TO_VeLINR_b_AHP_AIR_PRE_ERR_TO
        (&tmpRead_8);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S116>/Chart' */
    if (tmpRead_8)
    {
        /* Transition: '<S120>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S120>:6' */
            /* Transition: '<S120>:25' */
            /* Call Fsft */
            VeLINR_y_AHP_AIR_PRE_ERR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S99>/Fsft' */
            /* FunctionCaller: '<S121>/Function Caller' */
            /* Event: '<S120>:39' */
            Rte_Call_FsftPMIR_b_HTAuxPmpAirPrsntErr_FsftPMIR_b_HTAuxPmpAirPrsntErr
                ();

            /* End of Outputs for SubSystem: '<S99>/Fsft' */
            /* Transition: '<S120>:29' */
        }
        else
        {
            /* Transition: '<S120>:30' */
            /* Call Tmot */
            VeLINR_y_AHP_AIR_PRE_ERR_CallStatus = 3U;

            /* Event: '<S120>:40' */
        }

        /* Transition: '<S120>:36' */
        /* Transition: '<S120>:23' */
    }
    else
    {
        /* Transition: '<S120>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_g) == 133)
        {
            /* Transition: '<S120>:33' */
            /* Transition: '<S120>:35' */
            /* Call Nothing */
            VeLINR_y_AHP_AIR_PRE_ERR_CallStatus = 4U;

            /* Transition: '<S120>:23' */
        }
        else
        {
            /* Transition: '<S120>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeLI_g) == 1)
            {
                /* Transition: '<S120>:48' */
                /* Transition: '<S120>:53' */
                FA_out_c3 = true;

                /* Transition: '<S120>:56' */
            }
            else
            {
                /* Transition: '<S120>:52' */
                FA_out_c3 = false;
            }

            /* Transition: '<S120>:37' */
            /* Call Poke */
            VeLINR_y_AHP_AIR_PRE_ERR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S99>/Poke' */
            /* FunctionCaller: '<S122>/Function Caller' */
            /* Event: '<S120>:38' */
            Rte_Call_PokePMIR_e_HTAuxPmpAirPrsntErr_PokePMIR_e_HTAuxPmpAirPrsntErr
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_b, FA_out_c3);

            /* End of Outputs for SubSystem: '<S99>/Poke' */
        }
    }

    /* End of Chart: '<S116>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AHP_CURR_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AHP_CURR_ErrSts'
     */
    /* Transition: '<S120>:19' */
    rtb_TmpSignalConversionAtVeL_k4 =
        Rte_Read_VeLINR_I_AHP_CURR_VeLINR_I_AHP_CURR
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_I_A);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AHP_CURR_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S127>:1' */
    (void)Rte_Read_VeLINR_b_AHP_CURR_TO_VeLINR_b_AHP_CURR_TO(&FA_out_kt);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S123>/Chart' */
    if (FA_out_kt)
    {
        /* Transition: '<S127>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S127>:6' */
            /* Transition: '<S127>:25' */
            /* Call Fsft */
            VeLINR_y_AHP_CURR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S100>/Fsft' */
            /* FunctionCaller: '<S128>/Function Caller' */
            /* Event: '<S127>:39' */
            Rte_Call_FsftPMIR_b_HT_AuxPmpCrnt_FsftPMIR_b_HT_AuxPmpCrnt();

            /* End of Outputs for SubSystem: '<S100>/Fsft' */
            /* Transition: '<S127>:29' */
        }
        else
        {
            /* Transition: '<S127>:30' */
            /* Call Tmot */
            VeLINR_y_AHP_CURR_CallStatus = 3U;

            /* Event: '<S127>:40' */
        }

        /* Transition: '<S127>:36' */
        /* Transition: '<S127>:23' */
    }
    else
    {
        /* Transition: '<S127>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_k4) == 133)
        {
            /* Transition: '<S127>:33' */
            /* Transition: '<S127>:35' */
            /* Call Nothing */
            VeLINR_y_AHP_CURR_CallStatus = 4U;

            /* Transition: '<S127>:23' */
        }
        else
        {
            /* Transition: '<S127>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_k4) == 1)
            {
                /* Transition: '<S127>:48' */
                /* Transition: '<S127>:53' */
                FA_out_kt = true;

                /* Transition: '<S127>:56' */
            }
            else
            {
                /* Transition: '<S127>:52' */
            }

            /* Transition: '<S127>:37' */
            /* Call Poke */
            VeLINR_y_AHP_CURR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S100>/Poke' */
            /* FunctionCaller: '<S129>/Function Caller' */
            /* Event: '<S127>:38' */
            Rte_Call_PokePMIR_I_HT_AuxPmpCrnt_PokePMIR_I_HT_AuxPmpCrnt
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_I_A, FA_out_kt);

            /* End of Outputs for SubSystem: '<S100>/Poke' */
        }
    }

    /* End of Chart: '<S123>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AHP_DBLK_ACTV_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AHP_DBLK_ACTV_ErrSts'
     */
    /* Transition: '<S127>:19' */
    rtb_TmpSignalConversionAtVeL_hc =
        Rte_Read_VeLINR_e_AHP_DBLK_ACTV_VeLINR_e_AHP_DBLK_ACTV
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_n);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AHP_DBLK_ACTV_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S134>:1' */
    (void)Rte_Read_VeLINR_b_AHP_DBLK_ACTV_TO_VeLINR_b_AHP_DBLK_ACTV_TO
        (&FA_out_cq);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S130>/Chart' */
    if (FA_out_cq)
    {
        /* Transition: '<S134>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S134>:6' */
            /* Transition: '<S134>:25' */
            /* Call Fsft */
            VeLINR_y_AHP_DBLK_ACTV_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S101>/Fsft' */
            /* FunctionCaller: '<S135>/Function Caller' */
            /* Event: '<S134>:39' */
            Rte_Call_FsftPMIR_b_HTAuxPumpDeblock_FsftPMIR_b_HTAuxPumpDeblock();

            /* End of Outputs for SubSystem: '<S101>/Fsft' */
            /* Transition: '<S134>:29' */
        }
        else
        {
            /* Transition: '<S134>:30' */
            /* Call Tmot */
            VeLINR_y_AHP_DBLK_ACTV_CallStatus = 3U;

            /* Event: '<S134>:40' */
        }

        /* Transition: '<S134>:36' */
        /* Transition: '<S134>:23' */
    }
    else
    {
        /* Transition: '<S134>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_hc) == 133)
        {
            /* Transition: '<S134>:33' */
            /* Transition: '<S134>:35' */
            /* Call Nothing */
            VeLINR_y_AHP_DBLK_ACTV_CallStatus = 4U;

            /* Transition: '<S134>:23' */
        }
        else
        {
            /* Transition: '<S134>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_hc) == 1)
            {
                /* Transition: '<S134>:48' */
                /* Transition: '<S134>:53' */
                FA_out_cq = true;

                /* Transition: '<S134>:56' */
            }
            else
            {
                /* Transition: '<S134>:52' */
            }

            /* Transition: '<S134>:37' */
            /* Call Poke */
            VeLINR_y_AHP_DBLK_ACTV_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S101>/Poke' */
            /* FunctionCaller: '<S136>/Function Caller' */
            /* Event: '<S134>:38' */
            Rte_Call_PokePMIR_e_HTAuxPumpDeblock_PokePMIR_e_HTAuxPumpDeblock
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_n, FA_out_cq);

            /* End of Outputs for SubSystem: '<S101>/Poke' */
        }
    }

    /* End of Chart: '<S130>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AHP_DR_RN_ERR_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AHP_DR_RN_ERR_ErrSts'
     */
    /* Transition: '<S134>:19' */
    rtb_TmpSignalConversionAtVeLI_i =
        Rte_Read_VeLINR_e_AHP_DR_RN_ERR_VeLINR_e_AHP_DR_RN_ERR
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__n0);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AHP_DR_RN_ERR_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S141>:1' */
    (void)Rte_Read_VeLINR_b_AHP_DR_RN_ERR_TO_VeLINR_b_AHP_DR_RN_ERR_TO
        (&FA_out_hi);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S137>/Chart' */
    if (FA_out_hi)
    {
        /* Transition: '<S141>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S141>:6' */
            /* Transition: '<S141>:25' */
            /* Call Fsft */
            VeLINR_y_AHP_DR_RN_ERR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S102>/Fsft' */
            /* FunctionCaller: '<S142>/Function Caller' */
            /* Event: '<S141>:39' */
            Rte_Call_FsftPMIR_b_HTAuxPumpDryRun_FsftPMIR_b_HTAuxPumpDryRun();

            /* End of Outputs for SubSystem: '<S102>/Fsft' */
            /* Transition: '<S141>:29' */
        }
        else
        {
            /* Transition: '<S141>:30' */
            /* Call Tmot */
            VeLINR_y_AHP_DR_RN_ERR_CallStatus = 3U;

            /* Event: '<S141>:40' */
        }

        /* Transition: '<S141>:36' */
        /* Transition: '<S141>:23' */
    }
    else
    {
        /* Transition: '<S141>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_i) == 133)
        {
            /* Transition: '<S141>:33' */
            /* Transition: '<S141>:35' */
            /* Call Nothing */
            VeLINR_y_AHP_DR_RN_ERR_CallStatus = 4U;

            /* Transition: '<S141>:23' */
        }
        else
        {
            /* Transition: '<S141>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeLI_i) == 1)
            {
                /* Transition: '<S141>:48' */
                /* Transition: '<S141>:53' */
                FA_out_hi = true;

                /* Transition: '<S141>:56' */
            }
            else
            {
                /* Transition: '<S141>:52' */
            }

            /* Transition: '<S141>:37' */
            /* Call Poke */
            VeLINR_y_AHP_DR_RN_ERR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S102>/Poke' */
            /* FunctionCaller: '<S143>/Function Caller' */
            /* Event: '<S141>:38' */
            Rte_Call_PokePMIR_e_HTAuxPumpDryRun_PokePMIR_e_HTAuxPumpDryRun
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__n0, FA_out_hi);

            /* End of Outputs for SubSystem: '<S102>/Poke' */
        }
    }

    /* End of Chart: '<S137>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AHP_FL_SAFE_ACTVTD_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AHP_FL_SAFE_ACTVTD_ErrSts'
     */
    /* Transition: '<S141>:19' */
    rtb_TmpSignalConversionAtVeLI_n =
        Rte_Read_VeLINR_e_AHP_FL_SAFE_ACTVTD_VeLINR_e_AHP_FL_SAFE_ACTVTD
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_i);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AHP_FL_SAFE_ACTVTD_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S148>:1' */
    (void)Rte_Read_VeLINR_b_AHP_FL_SAFE_ACTVTD_TO_VeLINR_b_AHP_FL_SAFE_ACTVTD_TO
        (&FA_out_ox);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S144>/Chart' */
    if (FA_out_ox)
    {
        /* Transition: '<S148>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S148>:6' */
            /* Transition: '<S148>:25' */
            /* Call Fsft */
            VeLINR_y_AHP_FL_SAFE_ACTVTD_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S103>/Fsft' */
            /* FunctionCaller: '<S149>/Function Caller' */
            /* Event: '<S148>:39' */
            Rte_Call_FsftPMIR_b_HTAuxPumpFailsafe_FsftPMIR_b_HTAuxPumpFailsafe();

            /* End of Outputs for SubSystem: '<S103>/Fsft' */
            /* Transition: '<S148>:29' */
        }
        else
        {
            /* Transition: '<S148>:30' */
            /* Call Tmot */
            VeLINR_y_AHP_FL_SAFE_ACTVTD_CallStatus = 3U;

            /* Event: '<S148>:40' */
        }

        /* Transition: '<S148>:36' */
        /* Transition: '<S148>:23' */
    }
    else
    {
        /* Transition: '<S148>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_n) == 133)
        {
            /* Transition: '<S148>:33' */
            /* Transition: '<S148>:35' */
            /* Call Nothing */
            VeLINR_y_AHP_FL_SAFE_ACTVTD_CallStatus = 4U;

            /* Transition: '<S148>:23' */
        }
        else
        {
            /* Transition: '<S148>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeLI_n) == 1)
            {
                /* Transition: '<S148>:48' */
                /* Transition: '<S148>:53' */
                FA_out_ox = true;

                /* Transition: '<S148>:56' */
            }
            else
            {
                /* Transition: '<S148>:52' */
            }

            /* Transition: '<S148>:37' */
            /* Call Poke */
            VeLINR_y_AHP_FL_SAFE_ACTVTD_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S103>/Poke' */
            /* FunctionCaller: '<S150>/Function Caller' */
            /* Event: '<S148>:38' */
            Rte_Call_PokePMIR_e_HTAuxPumpFailsafe_PokePMIR_e_HTAuxPumpFailsafe
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_i, FA_out_ox);

            /* End of Outputs for SubSystem: '<S103>/Poke' */
        }
    }

    /* End of Chart: '<S144>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AHP_LMP_HM_AN_ON_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AHP_LMP_HM_AN_ON_ErrSts'
     */
    /* Transition: '<S148>:19' */
    rtb_TmpSignalConversionAtVeLI_m =
        Rte_Read_VeLINR_e_AHP_LMP_HM_AN_ON_VeLINR_e_AHP_LMP_HM_AN_ON
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__no);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AHP_LMP_HM_AN_ON_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S155>:1' */
    (void)Rte_Read_VeLINR_b_AHP_LMP_HM_AN_ON_TO_VeLINR_b_AHP_LMP_HM_AN_ON_TO
        (&FA_out_p0);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S151>/Chart' */
    if (FA_out_p0)
    {
        /* Transition: '<S155>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S155>:6' */
            /* Transition: '<S155>:25' */
            /* Call Fsft */
            VeLINR_y_AHP_LMP_HM_AN_ON_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S104>/Fsft' */
            /* FunctionCaller: '<S156>/Function Caller' */
            /* Event: '<S155>:39' */
            Rte_Call_FsftPMIR_b_HTAuxPump_LmpHM_FsftPMIR_b_HTAuxPump_LmpHM();

            /* End of Outputs for SubSystem: '<S104>/Fsft' */
            /* Transition: '<S155>:29' */
        }
        else
        {
            /* Transition: '<S155>:30' */
            /* Call Tmot */
            VeLINR_y_AHP_LMP_HM_AN_ON_CallStatus = 3U;

            /* Event: '<S155>:40' */
        }

        /* Transition: '<S155>:36' */
        /* Transition: '<S155>:23' */
    }
    else
    {
        /* Transition: '<S155>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_m) == 133)
        {
            /* Transition: '<S155>:33' */
            /* Transition: '<S155>:35' */
            /* Call Nothing */
            VeLINR_y_AHP_LMP_HM_AN_ON_CallStatus = 4U;

            /* Transition: '<S155>:23' */
        }
        else
        {
            /* Transition: '<S155>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeLI_m) == 1)
            {
                /* Transition: '<S155>:48' */
                /* Transition: '<S155>:53' */
                FA_out_p0 = true;

                /* Transition: '<S155>:56' */
            }
            else
            {
                /* Transition: '<S155>:52' */
            }

            /* Transition: '<S155>:37' */
            /* Call Poke */
            VeLINR_y_AHP_LMP_HM_AN_ON_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S104>/Poke' */
            /* FunctionCaller: '<S157>/Function Caller' */
            /* Event: '<S155>:38' */
            Rte_Call_PokePMIR_e_HTAuxPump_LmpHM_PokePMIR_e_HTAuxPump_LmpHM
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__no, FA_out_p0);

            /* End of Outputs for SubSystem: '<S104>/Poke' */
        }
    }

    /* End of Chart: '<S151>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AHP_MONTRNG_RPM_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AHP_MONTRNG_RPM_ErrSts'
     */
    /* Transition: '<S155>:19' */
    rtb_TmpSignalConversionAtVeLI_f =
        Rte_Read_VeLINR_e_AHP_MONTRNG_RPM_VeLINR_e_AHP_MONTRNG_RPM
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_h);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AHP_MONTRNG_RPM_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S162>:1' */
    (void)Rte_Read_VeLINR_b_AHP_MONTRNG_RPM_TO_VeLINR_b_AHP_MONTRNG_RPM_TO
        (&FA_out_fc);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S158>/Chart' */
    if (FA_out_fc)
    {
        /* Transition: '<S162>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S162>:6' */
            /* Transition: '<S162>:25' */
            /* Call Fsft */
            VeLINR_y_AHP_MONTRNG_RPM_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S105>/Fsft' */
            /* FunctionCaller: '<S163>/Function Caller' */
            /* Event: '<S162>:39' */
            Rte_Call_FsftPMIR_b_HT_AuxPmpMntrRPM_FsftPMIR_b_HT_AuxPmpMntrRPM();

            /* End of Outputs for SubSystem: '<S105>/Fsft' */
            /* Transition: '<S162>:29' */
        }
        else
        {
            /* Transition: '<S162>:30' */
            /* Call Tmot */
            VeLINR_y_AHP_MONTRNG_RPM_CallStatus = 3U;

            /* Event: '<S162>:40' */
        }

        /* Transition: '<S162>:36' */
        /* Transition: '<S162>:23' */
    }
    else
    {
        /* Transition: '<S162>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_f) == 133)
        {
            /* Transition: '<S162>:33' */
            /* Transition: '<S162>:35' */
            /* Call Nothing */
            VeLINR_y_AHP_MONTRNG_RPM_CallStatus = 4U;

            /* Transition: '<S162>:23' */
        }
        else
        {
            /* Transition: '<S162>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeLI_f) == 1)
            {
                /* Transition: '<S162>:48' */
                /* Transition: '<S162>:53' */
                FA_out_fc = true;

                /* Transition: '<S162>:56' */
            }
            else
            {
                /* Transition: '<S162>:52' */
            }

            /* Transition: '<S162>:37' */
            /* Call Poke */
            VeLINR_y_AHP_MONTRNG_RPM_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S105>/Poke' */
            /* FunctionCaller: '<S164>/Function Caller' */
            /* Event: '<S162>:38' */
            Rte_Call_PokePMIR_e_HT_AuxPmpMntrRPM_PokePMIR_e_HT_AuxPmpMntrRPM
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_h, FA_out_fc);

            /* End of Outputs for SubSystem: '<S105>/Poke' */
        }
    }

    /* End of Chart: '<S158>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AHP_NODE_ERR_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AHP_NODE_ERR_ErrSts'
     */
    /* Transition: '<S162>:19' */
    rtb_TmpSignalConversionAtVeL_o1 =
        Rte_Read_VeLINR_e_AHP_NODE_ERR_VeLINR_e_AHP_NODE_ERR
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__hx);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AHP_NODE_ERR_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S169>:1' */
    (void)Rte_Read_VeLINR_b_AHP_NODE_ERR_TO_VeLINR_b_AHP_NODE_ERR_TO(&FA_out_bk);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S165>/Chart' */
    if (FA_out_bk)
    {
        /* Transition: '<S169>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S169>:6' */
            /* Transition: '<S169>:25' */
            /* Call Fsft */
            VeLINR_y_AHP_NODE_ERR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S106>/Fsft' */
            /* FunctionCaller: '<S170>/Function Caller' */
            /* Event: '<S169>:39' */
            Rte_Call_FsftPMIR_b_HTAuxPumpNodeErr_FsftPMIR_b_HTAuxPumpNodeErr();

            /* End of Outputs for SubSystem: '<S106>/Fsft' */
            /* Transition: '<S169>:29' */
        }
        else
        {
            /* Transition: '<S169>:30' */
            /* Call Tmot */
            VeLINR_y_AHP_NODE_ERR_CallStatus = 3U;

            /* Event: '<S169>:40' */
        }

        /* Transition: '<S169>:36' */
        /* Transition: '<S169>:23' */
    }
    else
    {
        /* Transition: '<S169>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_o1) == 133)
        {
            /* Transition: '<S169>:33' */
            /* Transition: '<S169>:35' */
            /* Call Nothing */
            VeLINR_y_AHP_NODE_ERR_CallStatus = 4U;

            /* Transition: '<S169>:23' */
        }
        else
        {
            /* Transition: '<S169>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_o1) == 1)
            {
                /* Transition: '<S169>:48' */
                /* Transition: '<S169>:53' */
                FA_out_bk = true;

                /* Transition: '<S169>:56' */
            }
            else
            {
                /* Transition: '<S169>:52' */
            }

            /* Transition: '<S169>:37' */
            /* Call Poke */
            VeLINR_y_AHP_NODE_ERR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S106>/Poke' */
            /* FunctionCaller: '<S171>/Function Caller' */
            /* Event: '<S169>:38' */
            Rte_Call_PokePMIR_e_HTAuxPumpNodeErr_PokePMIR_e_HTAuxPumpNodeErr
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__hx, FA_out_bk);

            /* End of Outputs for SubSystem: '<S106>/Poke' */
        }
    }

    /* End of Chart: '<S165>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AHP_OVR_CUR_ERR_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AHP_OVR_CUR_ERR_ErrSts'
     */
    /* Transition: '<S169>:19' */
    rtb_TmpSignalConversionAtVeLI_c =
        Rte_Read_VeLINR_e_AHP_OVR_CUR_ERR_VeLINR_e_AHP_OVR_CUR_ERR
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_m);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AHP_OVR_CUR_ERR_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S176>:1' */
    (void)Rte_Read_VeLINR_b_AHP_OVR_CUR_ERR_TO_VeLINR_b_AHP_OVR_CUR_ERR_TO
        (&FA_out_fq);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S172>/Chart' */
    if (FA_out_fq)
    {
        /* Transition: '<S176>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S176>:6' */
            /* Transition: '<S176>:25' */
            /* Call Fsft */
            VeLINR_y_AHP_OVR_CUR_ERR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S107>/Fsft' */
            /* FunctionCaller: '<S177>/Function Caller' */
            /* Event: '<S176>:39' */
            Rte_Call_FsftPMIR_b_HTAuxPumpOvrCrnt_FsftPMIR_b_HTAuxPumpOvrCrnt();

            /* End of Outputs for SubSystem: '<S107>/Fsft' */
            /* Transition: '<S176>:29' */
        }
        else
        {
            /* Transition: '<S176>:30' */
            /* Call Tmot */
            VeLINR_y_AHP_OVR_CUR_ERR_CallStatus = 3U;

            /* Event: '<S176>:40' */
        }

        /* Transition: '<S176>:36' */
        /* Transition: '<S176>:23' */
    }
    else
    {
        /* Transition: '<S176>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_c) == 133)
        {
            /* Transition: '<S176>:33' */
            /* Transition: '<S176>:35' */
            /* Call Nothing */
            VeLINR_y_AHP_OVR_CUR_ERR_CallStatus = 4U;

            /* Transition: '<S176>:23' */
        }
        else
        {
            /* Transition: '<S176>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeLI_c) == 1)
            {
                /* Transition: '<S176>:48' */
                /* Transition: '<S176>:53' */
                FA_out_fq = true;

                /* Transition: '<S176>:56' */
            }
            else
            {
                /* Transition: '<S176>:52' */
            }

            /* Transition: '<S176>:37' */
            /* Call Poke */
            VeLINR_y_AHP_OVR_CUR_ERR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S107>/Poke' */
            /* FunctionCaller: '<S178>/Function Caller' */
            /* Event: '<S176>:38' */
            Rte_Call_PokePMIR_e_HTAuxPumpOvrCrnt_PokePMIR_e_HTAuxPumpOvrCrnt
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_m, FA_out_fq);

            /* End of Outputs for SubSystem: '<S107>/Poke' */
        }
    }

    /* End of Chart: '<S172>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AHP_OVR_TMP_ERR_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AHP_OVR_TMP_ERR_ErrSts'
     */
    /* Transition: '<S176>:19' */
    rtb_TmpSignalConversionAtVeL_mx =
        Rte_Read_VeLINR_e_AHP_OVR_TMP_ERR_VeLINR_e_AHP_OVR_TMP_ERR
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__nm);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AHP_OVR_TMP_ERR_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S183>:1' */
    (void)Rte_Read_VeLINR_b_AHP_OVR_TMP_ERR_TO_VeLINR_b_AHP_OVR_TMP_ERR_TO
        (&FA_out_pw);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S179>/Chart' */
    if (FA_out_pw)
    {
        /* Transition: '<S183>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S183>:6' */
            /* Transition: '<S183>:25' */
            /* Call Fsft */
            VeLINR_y_AHP_OVR_TMP_ERR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S108>/Fsft' */
            /* FunctionCaller: '<S184>/Function Caller' */
            /* Event: '<S183>:39' */
            Rte_Call_FsftPMIR_b_HT_AuxPmpOT_FsftPMIR_b_HT_AuxPmpOT();

            /* End of Outputs for SubSystem: '<S108>/Fsft' */
            /* Transition: '<S183>:29' */
        }
        else
        {
            /* Transition: '<S183>:30' */
            /* Call Tmot */
            VeLINR_y_AHP_OVR_TMP_ERR_CallStatus = 3U;

            /* Event: '<S183>:40' */
        }

        /* Transition: '<S183>:36' */
        /* Transition: '<S183>:23' */
    }
    else
    {
        /* Transition: '<S183>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_mx) == 133)
        {
            /* Transition: '<S183>:33' */
            /* Transition: '<S183>:35' */
            /* Call Nothing */
            VeLINR_y_AHP_OVR_TMP_ERR_CallStatus = 4U;

            /* Transition: '<S183>:23' */
        }
        else
        {
            /* Transition: '<S183>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_mx) == 1)
            {
                /* Transition: '<S183>:48' */
                /* Transition: '<S183>:53' */
                FA_out_pw = true;

                /* Transition: '<S183>:56' */
            }
            else
            {
                /* Transition: '<S183>:52' */
            }

            /* Transition: '<S183>:37' */
            /* Call Poke */
            VeLINR_y_AHP_OVR_TMP_ERR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S108>/Poke' */
            /* FunctionCaller: '<S185>/Function Caller' */
            /* Event: '<S183>:38' */
            Rte_Call_PokePMIR_e_HT_AuxPmpOT_PokePMIR_e_HT_AuxPmpOT
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__nm, FA_out_pw);

            /* End of Outputs for SubSystem: '<S108>/Poke' */
        }
    }

    /* End of Chart: '<S179>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AHP_POST_RUN_STAT_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AHP_POST_RUN_STAT_ErrSts'
     */
    /* Transition: '<S183>:19' */
    rtb_TmpSignalConversionAtVeL_iv =
        Rte_Read_VeLINR_e_AHP_POST_RUN_STAT_VeLINR_e_AHP_POST_RUN_STAT
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__bw);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AHP_POST_RUN_STAT_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S190>:1' */
    (void)Rte_Read_VeLINR_b_AHP_POST_RUN_STAT_TO_VeLINR_b_AHP_POST_RUN_STAT_TO
        (&FA_out_m1);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S186>/Chart' */
    if (FA_out_m1)
    {
        /* Transition: '<S190>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S190>:6' */
            /* Transition: '<S190>:25' */
            /* Call Fsft */
            VeLINR_y_AHP_POST_RUN_STAT_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S109>/Fsft' */
            /* FunctionCaller: '<S191>/Function Caller' */
            /* Event: '<S190>:39' */
            Rte_Call_FsftPMIR_b_HT_AuxPmp_PstRnSt_FsftPMIR_b_HT_AuxPmp_PstRnSt();

            /* End of Outputs for SubSystem: '<S109>/Fsft' */
            /* Transition: '<S190>:29' */
        }
        else
        {
            /* Transition: '<S190>:30' */
            /* Call Tmot */
            VeLINR_y_AHP_POST_RUN_STAT_CallStatus = 3U;

            /* Event: '<S190>:40' */
        }

        /* Transition: '<S190>:36' */
        /* Transition: '<S190>:23' */
    }
    else
    {
        /* Transition: '<S190>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_iv) == 133)
        {
            /* Transition: '<S190>:33' */
            /* Transition: '<S190>:35' */
            /* Call Nothing */
            VeLINR_y_AHP_POST_RUN_STAT_CallStatus = 4U;

            /* Transition: '<S190>:23' */
        }
        else
        {
            /* Transition: '<S190>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_iv) == 1)
            {
                /* Transition: '<S190>:48' */
                /* Transition: '<S190>:53' */
                FA_out_m1 = true;

                /* Transition: '<S190>:56' */
            }
            else
            {
                /* Transition: '<S190>:52' */
            }

            /* Transition: '<S190>:37' */
            /* Call Poke */
            VeLINR_y_AHP_POST_RUN_STAT_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S109>/Poke' */
            /* FunctionCaller: '<S192>/Function Caller' */
            /* Event: '<S190>:38' */
            Rte_Call_PokePMIR_e_HT_AuxPmp_PstRnSt_PokePMIR_e_HT_AuxPmp_PstRnSt
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__bw, FA_out_m1);

            /* End of Outputs for SubSystem: '<S109>/Poke' */
        }
    }

    /* End of Chart: '<S186>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AHP_RPM_ACTL_PERCT_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AHP_RPM_ACTL_PERCT_ErrSts'
     */
    /* Transition: '<S190>:19' */
    rtb_TmpSignalConversionAtVeL_lg =
        Rte_Read_VeLINR_Pct_AHP_RPM_ACTL_PERCT_VeLINR_Pct_AHP_RPM_ACTL_PERCT
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_Pct);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AHP_RPM_ACTL_PERCT_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S197>:1' */
    (void)Rte_Read_VeLINR_b_AHP_RPM_ACTL_PERCT_TO_VeLINR_b_AHP_RPM_ACTL_PERCT_TO
        (&FA_out_kiz);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S193>/Chart' */
    if (FA_out_kiz)
    {
        /* Transition: '<S197>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S197>:6' */
            /* Transition: '<S197>:25' */
            /* Call Fsft */
            VeLINR_y_AHP_RPM_ACTL_PERCT_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S110>/Fsft' */
            /* FunctionCaller: '<S198>/Function Caller' */
            /* Event: '<S197>:39' */
            Rte_Call_FsftPMIR_b_HTAuxPumpRPMActPct_FsftPMIR_b_HTAuxPumpRPMActPct
                ();

            /* End of Outputs for SubSystem: '<S110>/Fsft' */
            /* Transition: '<S197>:29' */
        }
        else
        {
            /* Transition: '<S197>:30' */
            /* Call Tmot */
            VeLINR_y_AHP_RPM_ACTL_PERCT_CallStatus = 3U;

            /* Event: '<S197>:40' */
        }

        /* Transition: '<S197>:36' */
        /* Transition: '<S197>:23' */
    }
    else
    {
        /* Transition: '<S197>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_lg) == 133)
        {
            /* Transition: '<S197>:33' */
            /* Transition: '<S197>:35' */
            /* Call Nothing */
            VeLINR_y_AHP_RPM_ACTL_PERCT_CallStatus = 4U;

            /* Transition: '<S197>:23' */
        }
        else
        {
            /* Transition: '<S197>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_lg) == 1)
            {
                /* Transition: '<S197>:48' */
                /* Transition: '<S197>:53' */
                FA_out_kiz = true;

                /* Transition: '<S197>:56' */
            }
            else
            {
                /* Transition: '<S197>:52' */
            }

            /* Transition: '<S197>:37' */
            /* Call Poke */
            VeLINR_y_AHP_RPM_ACTL_PERCT_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S110>/Poke' */
            /* FunctionCaller: '<S199>/Function Caller' */
            /* Event: '<S197>:38' */
            Rte_Call_PokePMIR_Pct_HTAuxPumpRPMAct_PokePMIR_Pct_HTAuxPumpRPMAct
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_Pct, FA_out_kiz);

            /* End of Outputs for SubSystem: '<S110>/Poke' */
        }
    }

    /* End of Chart: '<S193>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AHP_RPM_TGT_PERCT_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AHP_RPM_TGT_PERCT_ErrSts'
     */
    /* Transition: '<S197>:19' */
    rtb_TmpSignalConversionAtVeL_fz =
        Rte_Read_VeLINR_Pct_AHP_RPM_TGT_PERCT_VeLINR_Pct_AHP_RPM_TGT_PERCT
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_P_c);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AHP_RPM_TGT_PERCT_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S204>:1' */
    (void)Rte_Read_VeLINR_b_AHP_RPM_TGT_PERCT_TO_VeLINR_b_AHP_RPM_TGT_PERCT_TO
        (&FA_out_pp);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S200>/Chart' */
    if (FA_out_pp)
    {
        /* Transition: '<S204>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S204>:6' */
            /* Transition: '<S204>:25' */
            /* Call Fsft */
            VeLINR_y_AHP_RPM_TGT_PERCT_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S111>/Fsft' */
            /* FunctionCaller: '<S205>/Function Caller' */
            /* Event: '<S204>:39' */
            Rte_Call_FsftPMIR_b_HTAuxPumpRPMTgtPct_FsftPMIR_b_HTAuxPumpRPMTgtPct
                ();

            /* End of Outputs for SubSystem: '<S111>/Fsft' */
            /* Transition: '<S204>:29' */
        }
        else
        {
            /* Transition: '<S204>:30' */
            /* Call Tmot */
            VeLINR_y_AHP_RPM_TGT_PERCT_CallStatus = 3U;

            /* Event: '<S204>:40' */
        }

        /* Transition: '<S204>:36' */
        /* Transition: '<S204>:23' */
    }
    else
    {
        /* Transition: '<S204>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_fz) == 133)
        {
            /* Transition: '<S204>:33' */
            /* Transition: '<S204>:35' */
            /* Call Nothing */
            VeLINR_y_AHP_RPM_TGT_PERCT_CallStatus = 4U;

            /* Transition: '<S204>:23' */
        }
        else
        {
            /* Transition: '<S204>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_fz) == 1)
            {
                /* Transition: '<S204>:48' */
                /* Transition: '<S204>:53' */
                FA_out_pp = true;

                /* Transition: '<S204>:56' */
            }
            else
            {
                /* Transition: '<S204>:52' */
            }

            /* Transition: '<S204>:37' */
            /* Call Poke */
            VeLINR_y_AHP_RPM_TGT_PERCT_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S111>/Poke' */
            /* FunctionCaller: '<S206>/Function Caller' */
            /* Event: '<S204>:38' */
            Rte_Call_PokePMIR_Pct_HTAuxPumpRPMTgt_PokePMIR_Pct_HTAuxPumpRPMTgt
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_P_c, FA_out_pp);

            /* End of Outputs for SubSystem: '<S111>/Poke' */
        }
    }

    /* End of Chart: '<S200>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AHP_TEMP_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AHP_TEMP_ErrSts'
     */
    /* Transition: '<S204>:19' */
    rtb_TmpSignalConversionAtVeL_pp =
        Rte_Read_VeLINR_T_AHP_TEMP_VeLINR_T_AHP_TEMP
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_T_A);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AHP_TEMP_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S211>:1' */
    (void)Rte_Read_VeLINR_b_AHP_TEMP_TO_VeLINR_b_AHP_TEMP_TO(&FA_out_lf);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S207>/Chart' */
    if (FA_out_lf)
    {
        /* Transition: '<S211>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S211>:6' */
            /* Transition: '<S211>:25' */
            /* Call Fsft */
            VeLINR_y_AHP_TEMP_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S112>/Fsft' */
            /* FunctionCaller: '<S212>/Function Caller' */
            /* Event: '<S211>:39' */
            Rte_Call_FsftPMIR_b_HT_AuxPmpTemp_FsftPMIR_b_HT_AuxPmpTemp();

            /* End of Outputs for SubSystem: '<S112>/Fsft' */
            /* Transition: '<S211>:29' */
        }
        else
        {
            /* Transition: '<S211>:30' */
            /* Call Tmot */
            VeLINR_y_AHP_TEMP_CallStatus = 3U;

            /* Event: '<S211>:40' */
        }

        /* Transition: '<S211>:36' */
        /* Transition: '<S211>:23' */
    }
    else
    {
        /* Transition: '<S211>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_pp) == 133)
        {
            /* Transition: '<S211>:33' */
            /* Transition: '<S211>:35' */
            /* Call Nothing */
            VeLINR_y_AHP_TEMP_CallStatus = 4U;

            /* Transition: '<S211>:23' */
        }
        else
        {
            /* Transition: '<S211>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_pp) == 1)
            {
                /* Transition: '<S211>:48' */
                /* Transition: '<S211>:53' */
                FA_out_lf = true;

                /* Transition: '<S211>:56' */
            }
            else
            {
                /* Transition: '<S211>:52' */
            }

            /* Transition: '<S211>:37' */
            /* Call Poke */
            VeLINR_y_AHP_TEMP_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S112>/Poke' */
            /* FunctionCaller: '<S213>/Function Caller' */
            /* Event: '<S211>:38' */
            Rte_Call_PokePMIR_T_HT_AuxPmpTemp_PokePMIR_T_HT_AuxPmpTemp
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_T_A, FA_out_lf);

            /* End of Outputs for SubSystem: '<S112>/Poke' */
        }
    }

    /* End of Chart: '<S207>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AHP_VLTG_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AHP_VLTG_ErrSts'
     */
    /* Transition: '<S211>:19' */
    rtb_TmpSignalConversionAtVeL_i5 =
        Rte_Read_VeLINR_U_AHP_VLTG_VeLINR_U_AHP_VLTG
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_U_A);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AHP_VLTG_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S218>:1' */
    (void)Rte_Read_VeLINR_b_AHP_VLTG_TO_VeLINR_b_AHP_VLTG_TO(&FA_out_a1);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S214>/Chart' */
    if (FA_out_a1)
    {
        /* Transition: '<S218>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S218>:6' */
            /* Transition: '<S218>:25' */
            /* Call Fsft */
            VeLINR_y_AHP_VLTG_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S113>/Fsft' */
            /* FunctionCaller: '<S219>/Function Caller' */
            /* Event: '<S218>:39' */
            Rte_Call_FsftPMIR_b_HT_AuxPmpVltg_FsftPMIR_b_HT_AuxPmpVltg();

            /* End of Outputs for SubSystem: '<S113>/Fsft' */
            /* Transition: '<S218>:29' */
        }
        else
        {
            /* Transition: '<S218>:30' */
            /* Call Tmot */
            VeLINR_y_AHP_VLTG_CallStatus = 3U;

            /* Event: '<S218>:40' */
        }

        /* Transition: '<S218>:36' */
        /* Transition: '<S218>:23' */
    }
    else
    {
        /* Transition: '<S218>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_i5) == 133)
        {
            /* Transition: '<S218>:33' */
            /* Transition: '<S218>:35' */
            /* Call Nothing */
            VeLINR_y_AHP_VLTG_CallStatus = 4U;

            /* Transition: '<S218>:23' */
        }
        else
        {
            /* Transition: '<S218>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_i5) == 1)
            {
                /* Transition: '<S218>:48' */
                /* Transition: '<S218>:53' */
                FA_out_a1 = true;

                /* Transition: '<S218>:56' */
            }
            else
            {
                /* Transition: '<S218>:52' */
            }

            /* Transition: '<S218>:37' */
            /* Call Poke */
            VeLINR_y_AHP_VLTG_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S113>/Poke' */
            /* FunctionCaller: '<S220>/Function Caller' */
            /* Event: '<S218>:38' */
            Rte_Call_PokePMIR_U_HT_AuxPmpVltg_PokePMIR_U_HT_AuxPmpVltg
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_U_A, FA_out_a1);

            /* End of Outputs for SubSystem: '<S113>/Poke' */
        }
    }

    /* End of Chart: '<S214>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AHP_VLTG_ERR_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AHP_VLTG_ERR_ErrSts'
     */
    /* Transition: '<S218>:19' */
    rtb_TmpSignalConversionAtVeLI_j =
        Rte_Read_VeLINR_e_AHP_VLTG_ERR_VeLINR_e_AHP_VLTG_ERR
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_c);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AHP_VLTG_ERR_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S225>:1' */
    (void)Rte_Read_VeLINR_b_AHP_VLTG_ERR_TO_VeLINR_b_AHP_VLTG_ERR_TO(&FA_out_av);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S221>/Chart' */
    if (FA_out_av)
    {
        /* Transition: '<S225>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S225>:6' */
            /* Transition: '<S225>:25' */
            /* Call Fsft */
            VeLINR_y_AHP_VLTG_ERR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S114>/Fsft' */
            /* FunctionCaller: '<S226>/Function Caller' */
            /* Event: '<S225>:39' */
            Rte_Call_FsftPMIR_b_HTAuxPumpSuppVltErr_FsftPMIR_b_HTAuxPumpSuppVltErr
                ();

            /* End of Outputs for SubSystem: '<S114>/Fsft' */
            /* Transition: '<S225>:29' */
        }
        else
        {
            /* Transition: '<S225>:30' */
            /* Call Tmot */
            VeLINR_y_AHP_VLTG_ERR_CallStatus = 3U;

            /* Event: '<S225>:40' */
        }

        /* Transition: '<S225>:36' */
        /* Transition: '<S225>:23' */
    }
    else
    {
        /* Transition: '<S225>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_j) == 133)
        {
            /* Transition: '<S225>:33' */
            /* Transition: '<S225>:35' */
            /* Call Nothing */
            VeLINR_y_AHP_VLTG_ERR_CallStatus = 4U;

            /* Transition: '<S225>:23' */
        }
        else
        {
            /* Transition: '<S225>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeLI_j) == 1)
            {
                /* Transition: '<S225>:48' */
                /* Transition: '<S225>:53' */
                FA_out_av = true;

                /* Transition: '<S225>:56' */
            }
            else
            {
                /* Transition: '<S225>:52' */
            }

            /* Transition: '<S225>:37' */
            /* Call Poke */
            VeLINR_y_AHP_VLTG_ERR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S114>/Poke' */
            /* FunctionCaller: '<S227>/Function Caller' */
            /* Event: '<S225>:38' */
            Rte_Call_PokePMIR_e_HTAuxPumpSuppVltErr_PokePMIR_e_HTAuxPumpSuppVltErr
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_c, FA_out_av);

            /* End of Outputs for SubSystem: '<S114>/Poke' */
        }
    }

    /* End of Chart: '<S221>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_RsErr_AHP_PUMP_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_RsErr_AHP_PUMP_ErrSts'
     */
    /* Transition: '<S225>:19' */
    rtb_TmpSignalConversionAtVeL_fh =
        Rte_Read_VeLINR_b_RsErr_AHP_PUMP_VeLINR_b_RsErr_AHP_PUMP
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_g);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_RsErr_AHP_PUMP_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S231>:1' */
    (void)Rte_Read_VeLINR_b_RsErr_AHP_PUMP_TO_VeLINR_b_RsErr_AHP_PUMP_TO
        (&FA_out_k5);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S228>/Chart' */
    if (FA_out_k5)
    {
        /* Transition: '<S231>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S231>:6' */
            /* Transition: '<S231>:25' */
            /* Call Fsft */
            VeLINR_y_RsErr_AHP_PUMP_CallStatus = 2U;

            /* Event: '<S231>:39' */
            /* Transition: '<S231>:29' */
        }
        else
        {
            /* Transition: '<S231>:30' */
            /* Call Tmot */
            VeLINR_y_RsErr_AHP_PUMP_CallStatus = 3U;

            /* Event: '<S231>:40' */
        }

        /* Transition: '<S231>:36' */
        /* Transition: '<S231>:23' */
    }
    else
    {
        /* Transition: '<S231>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_fh) == 133)
        {
            /* Transition: '<S231>:33' */
            /* Transition: '<S231>:35' */
            /* Call Nothing */
            VeLINR_y_RsErr_AHP_PUMP_CallStatus = 4U;

            /* Transition: '<S231>:23' */
        }
        else
        {
            /* Transition: '<S231>:46' */
            /* Transition: '<S231>:37' */
            /* Call Poke */
            VeLINR_y_RsErr_AHP_PUMP_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S115>/Poke' */
            /* FunctionCaller: '<S232>/Function Caller' */
            /* Event: '<S231>:38' */
            Rte_Call_PokePMIR_b_HTAuxPumpRespErr_PokePMIR_b_HTAuxPumpRespErr
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_g);

            /* End of Outputs for SubSystem: '<S115>/Poke' */
        }
    }

    /* End of Chart: '<S228>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AHP_SUPPLIER_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AHP_SUPPLIER_ErrSts'
     */
    /* Transition: '<S231>:19' */
    rtb_TmpSignalConversionAtVeL_ht =
        Rte_Read_VeLINR_e_AHP_SUPPLIER_VeLINR_e_AHP_SUPPLIER
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__cu);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AHP_SUPPLIER_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S238>:1' */
    (void)Rte_Read_VeLINR_b_AHP_SUPPLIER_TO_VeLINR_b_AHP_SUPPLIER_TO(&tmpRead_9);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S235>/Chart' */
    if (tmpRead_9)
    {
        /* Transition: '<S238>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S238>:6' */
            /* Transition: '<S238>:25' */
            /* Call Fsft */
            VeLINR_y_AHP_SUPPLIER_CallStatus = 2U;

            /* Event: '<S238>:39' */
            /* Transition: '<S238>:29' */
        }
        else
        {
            /* Transition: '<S238>:30' */
            /* Call Tmot */
            VeLINR_y_AHP_SUPPLIER_CallStatus = 3U;

            /* Event: '<S238>:40' */
        }

        /* Transition: '<S238>:36' */
        /* Transition: '<S238>:23' */
    }
    else
    {
        /* Transition: '<S238>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_ht) == 133)
        {
            /* Transition: '<S238>:33' */
            /* Transition: '<S238>:35' */
            /* Call Nothing */
            VeLINR_y_AHP_SUPPLIER_CallStatus = 4U;

            /* Transition: '<S238>:23' */
        }
        else
        {
            /* Transition: '<S238>:46' */
            /* Transition: '<S238>:37' */
            /* Call Poke */
            VeLINR_y_AHP_SUPPLIER_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S233>/Poke' */
            /* FunctionCaller: '<S239>/Function Caller' */
            /* Event: '<S238>:38' */
            Rte_Call_PokePMIR_e_HTAuxPmpProdSuplr_ID_PokePMIR_e_HTAuxPmpProdSuplr_ID
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__cu);

            /* End of Outputs for SubSystem: '<S233>/Poke' */
        }
    }

    /* End of Chart: '<S235>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AHP_VERSION_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AHP_VERSION_ErrSts'
     */
    /* Transition: '<S238>:19' */
    rtb_TmpSignalConversionAtVeL_gw =
        Rte_Read_VeLINR_y_AHP_VERSION_VeLINR_y_AHP_VERSION
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_y_A);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_AHP_VERSION_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S243>:1' */
    (void)Rte_Read_VeLINR_b_AHP_VERSION_TO_VeLINR_b_AHP_VERSION_TO(&tmpRead_a);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S240>/Chart' */
    if (tmpRead_a)
    {
        /* Transition: '<S243>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S243>:6' */
            /* Transition: '<S243>:25' */
            /* Call Fsft */
            VeLINR_y_AHP_VERSION_CallStatus = 2U;

            /* Event: '<S243>:39' */
            /* Transition: '<S243>:29' */
        }
        else
        {
            /* Transition: '<S243>:30' */
            /* Call Tmot */
            VeLINR_y_AHP_VERSION_CallStatus = 3U;

            /* Event: '<S243>:40' */
        }

        /* Transition: '<S243>:36' */
        /* Transition: '<S243>:23' */
    }
    else
    {
        /* Transition: '<S243>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_gw) == 133)
        {
            /* Transition: '<S243>:33' */
            /* Transition: '<S243>:35' */
            /* Call Nothing */
            VeLINR_y_AHP_VERSION_CallStatus = 4U;

            /* Transition: '<S243>:23' */
        }
        else
        {
            /* Transition: '<S243>:46' */
            /* Transition: '<S243>:37' */
            /* Call Poke */
            VeLINR_y_AHP_VERSION_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S234>/Poke' */
            /* DataTypeConversion: '<S244>/Data Type Conversion' */
            /* Event: '<S243>:38' */
            tmp = fmodf(floorf(LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_y_A),
                        256.0F);

            /* FunctionCaller: '<S244>/Function Caller' incorporates:
             *  DataTypeConversion: '<S244>/Data Type Conversion'
             */
            Rte_Call_PokePMIR_y_HT_AuxPmp_Ver_PokePMIR_y_HT_AuxPmp_Ver((uint8)
                ((tmp < 0.0F) ? ((sint32)((uint8)((sint32)(-((sint32)((sint8)
                ((uint8)((float32)(-tmp))))))))) : ((sint32)((uint8)tmp))));

            /* End of Outputs for SubSystem: '<S234>/Poke' */
        }
    }

    /* End of Chart: '<S240>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_BHV_CalStat' incorporates:
     *  Inport: '<Root>/VeLINR_b_BHV_CalStatTO'
     */
    /* Transition: '<S243>:19' */
#if Rte_SysCon_VrntLR2B_BHVCalStat

    /* Outputs for Atomic SubSystem: '<S6>/BHV_CalStat' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_BHV_CalStat' incorporates:
     *  Inport: '<Root>/VeLINR_e_BHV_CalStat'
     */
    rtb_TmpSignalConversionAtVeL_cp =
        Rte_Read_VeLINR_e_BHV_CalStat_VeLINR_e_BHV_CalStat
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_B);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S256>:1' */
    (void)Rte_Read_VeLINR_b_BHV_CalStatTO_VeLINR_b_BHV_CalStatTO(&tmpRead_b);

    /* Outputs for Atomic SubSystem: '<S245>/BHV_CalStat' */
    /* Chart: '<S252>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_BHV_CalStatTO'
     */
    if (tmpRead_b)
    {
        /* Transition: '<S256>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S256>:6' */
            /* Transition: '<S256>:25' */
            /* Call Fsft */
            VeLINR_y_BHV_CalStat_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S251>/Fsft' */
            /* FunctionCaller: '<S257>/Function Caller' */
            /* Event: '<S256>:39' */
            Rte_Call_FsftTAIR_e_HTL_BypsVlv_CalSts_FsftTAIR_e_HTL_BypsVlv_CalSts
                ();

            /* End of Outputs for SubSystem: '<S251>/Fsft' */
            /* Transition: '<S256>:29' */
        }
        else
        {
            /* Transition: '<S256>:30' */
            /* Call Tmot */
            VeLINR_y_BHV_CalStat_CallStatus = 3U;

            /* Event: '<S256>:40' */
        }

        /* Transition: '<S256>:36' */
        /* Transition: '<S256>:23' */
    }
    else
    {
        /* Transition: '<S256>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_cp) == 133)
        {
            /* Transition: '<S256>:33' */
            /* Transition: '<S256>:35' */
            /* Call Nothing */
            VeLINR_y_BHV_CalStat_CallStatus = 4U;

            /* Transition: '<S256>:23' */
        }
        else
        {
            /* Transition: '<S256>:46' */
            /* Transition: '<S256>:37' */
            /* Call Poke */
            VeLINR_y_BHV_CalStat_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S251>/Poke' */
            /* FunctionCaller: '<S258>/Function Caller' incorporates:
             *  Constant: '<S258>/Constant'
             */
            /* Event: '<S256>:38' */
            Rte_Call_PokeTAIR_e_HTL_BypsVlv_CalSts_PokeTAIR_e_HTL_BypsVlv_CalSts
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_B, false);

            /* End of Outputs for SubSystem: '<S251>/Poke' */
        }
    }

    /* End of Chart: '<S252>/Chart' */
    /* End of Outputs for SubSystem: '<S245>/BHV_CalStat' */
    /* End of Outputs for SubSystem: '<S6>/BHV_CalStat' */
    /* Transition: '<S256>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_BHV_CalStat' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_BHV_ERR' incorporates:
     *  Inport: '<Root>/VeLINR_b_BHV_ERR_TO'
     */
#if Rte_SysCon_VrntLR2B_BHVERR

    /* Outputs for Atomic SubSystem: '<S6>/BHV_ERR' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_BHV_ERR' incorporates:
     *  Inport: '<Root>/VeLINR_e_BHV_ERR'
     */
    rtb_TmpSignalConversionAtVeL_lp = Rte_Read_VeLINR_e_BHV_ERR_VeLINR_e_BHV_ERR
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_e);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S264>:1' */
    (void)Rte_Read_VeLINR_b_BHV_ERR_TO_VeLINR_b_BHV_ERR_TO(&tmpRead_c);

    /* Outputs for Atomic SubSystem: '<S246>/BHV_ERR' */
    /* Chart: '<S260>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_BHV_ERR_TO'
     */
    if (tmpRead_c)
    {
        /* Transition: '<S264>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S264>:6' */
            /* Transition: '<S264>:25' */
            /* Call Fsft */
            VeLINR_y_BHV_ERR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S259>/Fsft' */
            /* FunctionCaller: '<S265>/Function Caller' */
            /* Event: '<S264>:39' */
            Rte_Call_FsftTAIR_y_HTL_BypsVlv_ErrMsgs_FsftTAIR_y_HTL_BypsVlv_ErrMsgs
                ();

            /* End of Outputs for SubSystem: '<S259>/Fsft' */
            /* Transition: '<S264>:29' */
        }
        else
        {
            /* Transition: '<S264>:30' */
            /* Call Tmot */
            VeLINR_y_BHV_ERR_CallStatus = 3U;

            /* Event: '<S264>:40' */
        }

        /* Transition: '<S264>:36' */
        /* Transition: '<S264>:23' */
    }
    else
    {
        /* Transition: '<S264>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_lp) == 133)
        {
            /* Transition: '<S264>:33' */
            /* Transition: '<S264>:35' */
            /* Call Nothing */
            VeLINR_y_BHV_ERR_CallStatus = 4U;

            /* Transition: '<S264>:23' */
        }
        else
        {
            /* Transition: '<S264>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_lp) == 1)
            {
                /* Transition: '<S264>:48' */
                /* Transition: '<S264>:53' */
                FA_out_k5 = true;

                /* Transition: '<S264>:56' */
            }
            else
            {
                /* Transition: '<S264>:52' */
                FA_out_k5 = false;
            }

            /* Transition: '<S264>:37' */
            /* Call Poke */
            VeLINR_y_BHV_ERR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S259>/Poke' */
            /* FunctionCaller: '<S266>/Function Caller' */
            /* Event: '<S264>:38' */
            Rte_Call_PokeTAIR_y_HTL_BypsVlv_ErrMsgs_PokeTAIR_y_HTL_BypsVlv_ErrMsgs
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_e, FA_out_k5);

            /* End of Outputs for SubSystem: '<S259>/Poke' */
        }
    }

    /* End of Chart: '<S260>/Chart' */
    /* End of Outputs for SubSystem: '<S246>/BHV_ERR' */
    /* End of Outputs for SubSystem: '<S6>/BHV_ERR' */
    /* Transition: '<S264>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_BHV_ERR' */

    /* SignalConversion generated from: '<S2>/VeLINR_U_BHV_MotorVolt' incorporates:
     *  Inport: '<Root>/VeLINR_b_BHV_MotorVoltTO'
     */
#if Rte_SysCon_VrntLR2B_BHVMotorVolt

    /* Outputs for Atomic SubSystem: '<S6>/BHV_MotorVolt' */
    /* SignalConversion generated from: '<S2>/VeLINR_U_BHV_MotorVolt' incorporates:
     *  Inport: '<Root>/VeLINR_U_BHV_MotorVolt'
     */
    rtb_TmpSignalConversionAtVeL_dw =
        Rte_Read_VeLINR_U_BHV_MotorVolt_VeLINR_U_BHV_MotorVolt
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_U_B);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S272>:1' */
    (void)Rte_Read_VeLINR_b_BHV_MotorVoltTO_VeLINR_b_BHV_MotorVoltTO(&FA_out_pb);

    /* Outputs for Atomic SubSystem: '<S247>/BHV_MotorVolt' */
    /* Chart: '<S268>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_BHV_MotorVoltTO'
     */
    if (FA_out_pb)
    {
        /* Transition: '<S272>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S272>:6' */
            /* Transition: '<S272>:25' */
            /* Call Fsft */
            VeLINR_y_BHV_MotorVolt_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S267>/Fsft' */
            /* FunctionCaller: '<S273>/Function Caller' */
            /* Event: '<S272>:39' */
            Rte_Call_FsftTAIR_U_HTL_BypsVlv_MtrVltg_FsftTAIR_U_HTL_BypsVlv_MtrVltg
                ();

            /* End of Outputs for SubSystem: '<S267>/Fsft' */
            /* Transition: '<S272>:29' */
        }
        else
        {
            /* Transition: '<S272>:30' */
            /* Call Tmot */
            VeLINR_y_BHV_MotorVolt_CallStatus = 3U;

            /* Event: '<S272>:40' */
        }

        /* Transition: '<S272>:36' */
        /* Transition: '<S272>:23' */
    }
    else
    {
        /* Transition: '<S272>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_dw) == 133)
        {
            /* Transition: '<S272>:33' */
            /* Transition: '<S272>:35' */
            /* Call Nothing */
            VeLINR_y_BHV_MotorVolt_CallStatus = 4U;

            /* Transition: '<S272>:23' */
        }
        else
        {
            /* Transition: '<S272>:46' */
            /* Transition: '<S272>:37' */
            /* Call Poke */
            VeLINR_y_BHV_MotorVolt_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S267>/Poke' */
            /* FunctionCaller: '<S274>/Function Caller' incorporates:
             *  Constant: '<S274>/Constant'
             */
            /* Event: '<S272>:38' */
            Rte_Call_PokeTAIR_U_HTL_BypsVlv_MtrVltg_PokeTAIR_U_HTL_BypsVlv_MtrVltg
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_U_B, false);

            /* End of Outputs for SubSystem: '<S267>/Poke' */
        }
    }

    /* End of Chart: '<S268>/Chart' */
    /* End of Outputs for SubSystem: '<S247>/BHV_MotorVolt' */
    /* End of Outputs for SubSystem: '<S6>/BHV_MotorVolt' */
    /* Transition: '<S272>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_U_BHV_MotorVolt' */

    /* SignalConversion generated from: '<S2>/VeLINR_Pct_BHV_PosAct' incorporates:
     *  Inport: '<Root>/VeLINR_b_BHV_PosActTO'
     */
#if Rte_SysCon_VrntLR2B_BHVPosAct

    /* Outputs for Atomic SubSystem: '<S6>/BHV_PosAct' */
    /* SignalConversion generated from: '<S2>/VeLINR_Pct_BHV_PosAct' incorporates:
     *  Inport: '<Root>/VeLINR_Pct_BHV_PosAct'
     */
    rtb_TmpSignalConversionAtVeL_p1 =
        Rte_Read_VeLINR_Pct_BHV_PosAct_VeLINR_Pct_BHV_PosAct
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_P_h);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S280>:1' */
    (void)Rte_Read_VeLINR_b_BHV_PosActTO_VeLINR_b_BHV_PosActTO(&tmpRead_d);

    /* Outputs for Atomic SubSystem: '<S248>/BHV_PosAct' */
    /* Chart: '<S276>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_BHV_PosActTO'
     */
    if (tmpRead_d)
    {
        /* Transition: '<S280>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S280>:6' */
            /* Transition: '<S280>:25' */
            /* Call Fsft */
            VeLINR_y_BHV_PosAct_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S275>/Fsft' */
            /* FunctionCaller: '<S281>/Function Caller' */
            /* Event: '<S280>:39' */
            Rte_Call_FsftTAIR_Pct_HTL_BypsVlv_ActlPstn_FsftTAIR_Pct_HTL_BypsVlv_ActlPstn
                ();

            /* End of Outputs for SubSystem: '<S275>/Fsft' */
            /* Transition: '<S280>:29' */
        }
        else
        {
            /* Transition: '<S280>:30' */
            /* Call Tmot */
            VeLINR_y_BHV_PosAct_CallStatus = 3U;

            /* Event: '<S280>:40' */
        }

        /* Transition: '<S280>:36' */
        /* Transition: '<S280>:23' */
    }
    else
    {
        /* Transition: '<S280>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_p1) == 133)
        {
            /* Transition: '<S280>:33' */
            /* Transition: '<S280>:35' */
            /* Call Nothing */
            VeLINR_y_BHV_PosAct_CallStatus = 4U;

            /* Transition: '<S280>:23' */
        }
        else
        {
            /* Transition: '<S280>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_p1) == 1)
            {
                /* Transition: '<S280>:48' */
                /* Transition: '<S280>:53' */
                FA_out_pb = true;

                /* Transition: '<S280>:56' */
            }
            else
            {
                /* Transition: '<S280>:52' */
                FA_out_pb = false;
            }

            /* Transition: '<S280>:37' */
            /* Call Poke */
            VeLINR_y_BHV_PosAct_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S275>/Poke' */
            /* FunctionCaller: '<S282>/Function Caller' */
            /* Event: '<S280>:38' */
            Rte_Call_PokeTAIR_Pct_HTL_BypsVlv_ActlPstn_PokeTAIR_Pct_HTL_BypsVlv_ActlPstn
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_P_h, FA_out_pb);

            /* End of Outputs for SubSystem: '<S275>/Poke' */
        }
    }

    /* End of Chart: '<S276>/Chart' */
    /* End of Outputs for SubSystem: '<S248>/BHV_PosAct' */
    /* End of Outputs for SubSystem: '<S6>/BHV_PosAct' */
    /* Transition: '<S280>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_Pct_BHV_PosAct' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_BHV_Sts' incorporates:
     *  Inport: '<Root>/VeLINR_b_BHV_StsTO'
     */
#if Rte_SysCon_VrntLR2B_BHVSts

    /* Outputs for Atomic SubSystem: '<S6>/BHV_Sts' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_BHV_Sts' incorporates:
     *  Inport: '<Root>/VeLINR_e_BHV_Sts'
     */
    rtb_TmpSignalConversionAtVeL_mu = Rte_Read_VeLINR_e_BHV_Sts_VeLINR_e_BHV_Sts
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_p);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S288>:1' */
    (void)Rte_Read_VeLINR_b_BHV_StsTO_VeLINR_b_BHV_StsTO(&FA_out_fi);

    /* Outputs for Atomic SubSystem: '<S249>/BHV_Sts' */
    /* Chart: '<S284>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_BHV_StsTO'
     */
    if (FA_out_fi)
    {
        /* Transition: '<S288>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S288>:6' */
            /* Transition: '<S288>:25' */
            /* Call Fsft */
            VeLINR_y_BHV_Sts_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S283>/Fsft' */
            /* FunctionCaller: '<S289>/Function Caller' */
            /* Event: '<S288>:39' */
            Rte_Call_FsftTAIR_e_HTL_BypsVlv_ErrSts_FsftTAIR_e_HTL_BypsVlv_ErrSts
                ();

            /* End of Outputs for SubSystem: '<S283>/Fsft' */
            /* Transition: '<S288>:29' */
        }
        else
        {
            /* Transition: '<S288>:30' */
            /* Call Tmot */
            VeLINR_y_BHV_Sts_CallStatus = 3U;

            /* Event: '<S288>:40' */
        }

        /* Transition: '<S288>:36' */
        /* Transition: '<S288>:23' */
    }
    else
    {
        /* Transition: '<S288>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_mu) == 133)
        {
            /* Transition: '<S288>:33' */
            /* Transition: '<S288>:35' */
            /* Call Nothing */
            VeLINR_y_BHV_Sts_CallStatus = 4U;

            /* Transition: '<S288>:23' */
        }
        else
        {
            /* Transition: '<S288>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_mu) == 1)
            {
                /* Transition: '<S288>:48' */
                /* Transition: '<S288>:53' */
                FA_out_fi = true;

                /* Transition: '<S288>:56' */
            }
            else
            {
                /* Transition: '<S288>:52' */
            }

            /* Transition: '<S288>:37' */
            /* Call Poke */
            VeLINR_y_BHV_Sts_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S283>/Poke' */
            /* FunctionCaller: '<S290>/Function Caller' */
            /* Event: '<S288>:38' */
            Rte_Call_PokeTAIR_e_HTL_BypsVlv_ErrSts_PokeTAIR_e_HTL_BypsVlv_ErrSts
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_p, FA_out_fi);

            /* End of Outputs for SubSystem: '<S283>/Poke' */
        }
    }

    /* End of Chart: '<S284>/Chart' */
    /* End of Outputs for SubSystem: '<S249>/BHV_Sts' */
    /* End of Outputs for SubSystem: '<S6>/BHV_Sts' */
    /* Transition: '<S288>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_BHV_Sts' */

    /* SignalConversion generated from: '<S2>/VeLINR_b_RsErr_BHV' incorporates:
     *  Inport: '<Root>/VeLINR_b_RsErr_BHV_TO'
     */
#if Rte_SysCon_VrntLR2B_RsErrBHV

    /* Outputs for Atomic SubSystem: '<S6>/RsErr_BHV' */
    /* SignalConversion generated from: '<S2>/VeLINR_b_RsErr_BHV' incorporates:
     *  Inport: '<Root>/VeLINR_b_RsErr_BHV'
     */
    rtb_TmpSignalConversionAtVeL_ar =
        Rte_Read_VeLINR_b_RsErr_BHV_VeLINR_b_RsErr_BHV
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_i);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S295>:1' */
    (void)Rte_Read_VeLINR_b_RsErr_BHV_TO_VeLINR_b_RsErr_BHV_TO(&FA_out_fg);

    /* Outputs for Atomic SubSystem: '<S250>/RsErr_BHV' */
    /* Chart: '<S292>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_RsErr_BHV_TO'
     */
    if (FA_out_fg)
    {
        /* Transition: '<S295>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S295>:6' */
            /* Transition: '<S295>:25' */
            /* Call Fsft */
            VeLINR_y_RsErr_BHV_CallStatus = 2U;

            /* Event: '<S295>:39' */
            /* Transition: '<S295>:29' */
        }
        else
        {
            /* Transition: '<S295>:30' */
            /* Call Tmot */
            VeLINR_y_RsErr_BHV_CallStatus = 3U;

            /* Event: '<S295>:40' */
        }

        /* Transition: '<S295>:36' */
        /* Transition: '<S295>:23' */
    }
    else
    {
        /* Transition: '<S295>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_ar) == 133)
        {
            /* Transition: '<S295>:33' */
            /* Transition: '<S295>:35' */
            /* Call Nothing */
            VeLINR_y_RsErr_BHV_CallStatus = 4U;

            /* Transition: '<S295>:23' */
        }
        else
        {
            /* Transition: '<S295>:46' */
            /* Transition: '<S295>:37' */
            /* Call Poke */
            VeLINR_y_RsErr_BHV_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S291>/Poke' */
            /* FunctionCaller: '<S296>/Function Caller' */
            /* Event: '<S295>:38' */
            Rte_Call_PokeTAIR_b_HTL_BypsVlv_RsErr_PokeTAIR_b_HTL_BypsVlv_RsErr
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_i);

            /* End of Outputs for SubSystem: '<S291>/Poke' */
        }
    }

    /* End of Chart: '<S292>/Chart' */
    /* End of Outputs for SubSystem: '<S250>/RsErr_BHV' */
    /* End of Outputs for SubSystem: '<S6>/RsErr_BHV' */
    /* Transition: '<S295>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_b_RsErr_BHV' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_CompBoardTemp_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_CompBoardTemp_ErrSts'
     */
    rtb_TmpSignalConversionAtVeL_f1 =
        Rte_Read_VeLINR_T_CompBoardTemp_VeLINR_T_CompBoardTemp
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_T_C);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_CompBoardTempTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S311>:1' */
    (void)Rte_Read_VeLINR_b_CompBoardTempTO_VeLINR_b_CompBoardTempTO(&tmpRead_e);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S307>/Chart' */
    if (tmpRead_e)
    {
        /* Transition: '<S311>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S311>:6' */
            /* Transition: '<S311>:25' */
            /* Call Fsft */
            VeLINR_y_CompBoardTemp_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S297>/Fsft' */
            /* FunctionCaller: '<S312>/Function Caller' */
            /* Event: '<S311>:39' */
            Rte_Call_FsftTAIR_T_CompBoardTemp_FsftTAIR_T_CompBoardTemp();

            /* End of Outputs for SubSystem: '<S297>/Fsft' */
            /* Transition: '<S311>:29' */
        }
        else
        {
            /* Transition: '<S311>:30' */
            /* Call Tmot */
            VeLINR_y_CompBoardTemp_CallStatus = 3U;

            /* Event: '<S311>:40' */
        }

        /* Transition: '<S311>:36' */
        /* Transition: '<S311>:23' */
    }
    else
    {
        /* Transition: '<S311>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_f1) == 133)
        {
            /* Transition: '<S311>:33' */
            /* Transition: '<S311>:35' */
            /* Call Nothing */
            VeLINR_y_CompBoardTemp_CallStatus = 4U;

            /* Transition: '<S311>:23' */
        }
        else
        {
            /* Transition: '<S311>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_f1) == 1)
            {
                /* Transition: '<S311>:48' */
                /* Transition: '<S311>:53' */
                FA_out_fg = true;

                /* Transition: '<S311>:56' */
            }
            else
            {
                /* Transition: '<S311>:52' */
                FA_out_fg = false;
            }

            /* Transition: '<S311>:37' */
            /* Call Poke */
            VeLINR_y_CompBoardTemp_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S297>/Poke' */
            /* FunctionCaller: '<S313>/Function Caller' */
            /* Event: '<S311>:38' */
            Rte_Call_PokeTAIR_T_CompBoardTemp_PokeTAIR_T_CompBoardTemp
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_T_C, FA_out_fg);

            /* End of Outputs for SubSystem: '<S297>/Poke' */
        }
    }

    /* End of Chart: '<S307>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_CompElecCurr_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_CompElecCurr_ErrSts'
     */
    /* Transition: '<S311>:19' */
    rtb_TmpSignalConversionAtVeL_ha =
        Rte_Read_VeLINR_I_CompElecCurr_VeLINR_I_CompElecCurr
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_I_C);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_CompElecCurrTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S318>:1' */
    (void)Rte_Read_VeLINR_b_CompElecCurrTO_VeLINR_b_CompElecCurrTO(&FA_out_jwa);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S314>/Chart' */
    if (FA_out_jwa)
    {
        /* Transition: '<S318>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S318>:6' */
            /* Transition: '<S318>:25' */
            /* Call Fsft */
            VeLINR_y_CompElecCurr_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S298>/Fsft' */
            /* FunctionCaller: '<S319>/Function Caller' */
            /* Event: '<S318>:39' */
            Rte_Call_FsftTAIR_I_ACCElecCurr_FsftTAIR_I_ACCElecCurr();

            /* End of Outputs for SubSystem: '<S298>/Fsft' */
            /* Transition: '<S318>:29' */
        }
        else
        {
            /* Transition: '<S318>:30' */
            /* Call Tmot */
            VeLINR_y_CompElecCurr_CallStatus = 3U;

            /* Event: '<S318>:40' */
        }

        /* Transition: '<S318>:36' */
        /* Transition: '<S318>:23' */
    }
    else
    {
        /* Transition: '<S318>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_ha) == 133)
        {
            /* Transition: '<S318>:33' */
            /* Transition: '<S318>:35' */
            /* Call Nothing */
            VeLINR_y_CompElecCurr_CallStatus = 4U;

            /* Transition: '<S318>:23' */
        }
        else
        {
            /* Transition: '<S318>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_ha) == 1)
            {
                /* Transition: '<S318>:48' */
                /* Transition: '<S318>:53' */
                FA_out_jwa = true;

                /* Transition: '<S318>:56' */
            }
            else
            {
                /* Transition: '<S318>:52' */
            }

            /* Transition: '<S318>:37' */
            /* Call Poke */
            VeLINR_y_CompElecCurr_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S298>/Poke' */
            /* FunctionCaller: '<S320>/Function Caller' */
            /* Event: '<S318>:38' */
            Rte_Call_PokeTAIR_I_ACCElecCurr_PokeTAIR_I_ACCElecCurr
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_I_C, FA_out_jwa);

            /* End of Outputs for SubSystem: '<S298>/Poke' */
        }
    }

    /* End of Chart: '<S314>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_CompElecPwr_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_CompElecPwr_ErrSts'
     */
    /* Transition: '<S318>:19' */
    rtb_TmpSignalConversionAtVeL_jz =
        Rte_Read_VeLINR_P_CompElecPwr_VeLINR_P_CompElecPwr
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_P_C);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_CompElecPwrTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S325>:1' */
    (void)Rte_Read_VeLINR_b_CompElecPwrTO_VeLINR_b_CompElecPwrTO(&FA_out_hq);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S321>/Chart' */
    if (FA_out_hq)
    {
        /* Transition: '<S325>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S325>:6' */
            /* Transition: '<S325>:25' */
            /* Call Fsft */
            VeLINR_y_CompElecPwr_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S299>/Fsft' */
            /* FunctionCaller: '<S326>/Function Caller' */
            /* Event: '<S325>:39' */
            Rte_Call_FsftTAIR_P_ACCompElec_Pwr_FsftTAIR_P_ACCompElec_Pwr();

            /* End of Outputs for SubSystem: '<S299>/Fsft' */
            /* Transition: '<S325>:29' */
        }
        else
        {
            /* Transition: '<S325>:30' */
            /* Call Tmot */
            VeLINR_y_CompElecPwr_CallStatus = 3U;

            /* Event: '<S325>:40' */
        }

        /* Transition: '<S325>:36' */
        /* Transition: '<S325>:23' */
    }
    else
    {
        /* Transition: '<S325>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_jz) == 133)
        {
            /* Transition: '<S325>:33' */
            /* Transition: '<S325>:35' */
            /* Call Nothing */
            VeLINR_y_CompElecPwr_CallStatus = 4U;

            /* Transition: '<S325>:23' */
        }
        else
        {
            /* Transition: '<S325>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_jz) == 1)
            {
                /* Transition: '<S325>:48' */
                /* Transition: '<S325>:53' */
                FA_out_hq = true;

                /* Transition: '<S325>:56' */
            }
            else
            {
                /* Transition: '<S325>:52' */
            }

            /* Transition: '<S325>:37' */
            /* Call Poke */
            VeLINR_y_CompElecPwr_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S299>/Poke' */
            /* FunctionCaller: '<S327>/Function Caller' */
            /* Event: '<S325>:38' */
            Rte_Call_PokeTAIR_P_ACCompElec_Pwr_PokeTAIR_P_ACCompElec_Pwr
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_P_C, FA_out_hq);

            /* End of Outputs for SubSystem: '<S299>/Poke' */
        }
    }

    /* End of Chart: '<S321>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_CompFaultStat_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_CompFaultStat_ErrSts'
     */
    /* Transition: '<S325>:19' */
    rtb_TmpSignalConversionAtVeL_dl =
        Rte_Read_VeLINR_e_CompFaultStat_VeLINR_e_CompFaultStat
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_C);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_CompFaultStatTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S332>:1' */
    (void)Rte_Read_VeLINR_b_CompFaultStatTO_VeLINR_b_CompFaultStatTO(&FA_out_gp);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S328>/Chart' */
    if (FA_out_gp)
    {
        /* Transition: '<S332>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S332>:6' */
            /* Transition: '<S332>:25' */
            /* Call Fsft */
            VeLINR_y_CompFaultStat_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S300>/Fsft' */
            /* FunctionCaller: '<S333>/Function Caller' */
            /* Event: '<S332>:39' */
            Rte_Call_FsftTAIR_e_CompFltStat_FsftTAIR_e_CompFltStat();

            /* End of Outputs for SubSystem: '<S300>/Fsft' */
            /* Transition: '<S332>:29' */
        }
        else
        {
            /* Transition: '<S332>:30' */
            /* Call Tmot */
            VeLINR_y_CompFaultStat_CallStatus = 3U;

            /* Event: '<S332>:40' */
        }

        /* Transition: '<S332>:36' */
        /* Transition: '<S332>:23' */
    }
    else
    {
        /* Transition: '<S332>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_dl) == 133)
        {
            /* Transition: '<S332>:33' */
            /* Transition: '<S332>:35' */
            /* Call Nothing */
            VeLINR_y_CompFaultStat_CallStatus = 4U;

            /* Transition: '<S332>:23' */
        }
        else
        {
            /* Transition: '<S332>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_dl) == 1)
            {
                /* Transition: '<S332>:48' */
                /* Transition: '<S332>:53' */
                FA_out_gp = true;

                /* Transition: '<S332>:56' */
            }
            else
            {
                /* Transition: '<S332>:52' */
            }

            /* Transition: '<S332>:37' */
            /* Call Poke */
            VeLINR_y_CompFaultStat_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S300>/Poke' */
            /* FunctionCaller: '<S334>/Function Caller' */
            /* Event: '<S332>:38' */
            Rte_Call_PokeTAIR_e_CompFltStat_PokeTAIR_e_CompFltStat
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_C, FA_out_gp);

            /* End of Outputs for SubSystem: '<S300>/Poke' */
        }
    }

    /* End of Chart: '<S328>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_CompHVInput_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_CompHVInput_ErrSts'
     */
    /* Transition: '<S332>:19' */
    rtb_TmpSignalConversionAtVeLI_b =
        Rte_Read_VeLINR_U_CompHVInput_VeLINR_U_CompHVInput
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_U_C);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_CompHVInputTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S339>:1' */
    (void)Rte_Read_VeLINR_b_CompHVInputTO_VeLINR_b_CompHVInputTO(&FA_out_c22);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S335>/Chart' */
    if (FA_out_c22)
    {
        /* Transition: '<S339>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S339>:6' */
            /* Transition: '<S339>:25' */
            /* Call Fsft */
            VeLINR_y_CompHVInput_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S301>/Fsft' */
            /* FunctionCaller: '<S340>/Function Caller' */
            /* Event: '<S339>:39' */
            Rte_Call_FsftTAIR_U_CompHVInput_FsftTAIR_U_CompHVInput();

            /* End of Outputs for SubSystem: '<S301>/Fsft' */
            /* Transition: '<S339>:29' */
        }
        else
        {
            /* Transition: '<S339>:30' */
            /* Call Tmot */
            VeLINR_y_CompHVInput_CallStatus = 3U;

            /* Event: '<S339>:40' */
        }

        /* Transition: '<S339>:36' */
        /* Transition: '<S339>:23' */
    }
    else
    {
        /* Transition: '<S339>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_b) == 133)
        {
            /* Transition: '<S339>:33' */
            /* Transition: '<S339>:35' */
            /* Call Nothing */
            VeLINR_y_CompHVInput_CallStatus = 4U;

            /* Transition: '<S339>:23' */
        }
        else
        {
            /* Transition: '<S339>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeLI_b) == 1)
            {
                /* Transition: '<S339>:48' */
                /* Transition: '<S339>:53' */
                FA_out_c22 = true;

                /* Transition: '<S339>:56' */
            }
            else
            {
                /* Transition: '<S339>:52' */
            }

            /* Transition: '<S339>:37' */
            /* Call Poke */
            VeLINR_y_CompHVInput_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S301>/Poke' */
            /* FunctionCaller: '<S341>/Function Caller' */
            /* Event: '<S339>:38' */
            Rte_Call_PokeTAIR_U_CompHVInput_PokeTAIR_U_CompHVInput
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_U_C, FA_out_c22);

            /* End of Outputs for SubSystem: '<S301>/Poke' */
        }
    }

    /* End of Chart: '<S335>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_CompIGBTTemp_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_CompIGBTTemp_ErrSts'
     */
    /* Transition: '<S339>:19' */
    rtb_TmpSignalConversionAtVeL_bl =
        Rte_Read_VeLINR_T_CompIGBTTemp_VeLINR_T_CompIGBTTemp
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_T_g);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_CompIGBTTempTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S346>:1' */
    (void)Rte_Read_VeLINR_b_CompIGBTTempTO_VeLINR_b_CompIGBTTempTO(&FA_out_a0);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S342>/Chart' */
    if (FA_out_a0)
    {
        /* Transition: '<S346>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S346>:6' */
            /* Transition: '<S346>:25' */
            /* Call Fsft */
            VeLINR_y_CompIGBTTemp_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S302>/Fsft' */
            /* FunctionCaller: '<S347>/Function Caller' */
            /* Event: '<S346>:39' */
            Rte_Call_FsftTAIR_T_CompIGBTTemp_FsftTAIR_T_CompIGBTTemp();

            /* End of Outputs for SubSystem: '<S302>/Fsft' */
            /* Transition: '<S346>:29' */
        }
        else
        {
            /* Transition: '<S346>:30' */
            /* Call Tmot */
            VeLINR_y_CompIGBTTemp_CallStatus = 3U;

            /* Event: '<S346>:40' */
        }

        /* Transition: '<S346>:36' */
        /* Transition: '<S346>:23' */
    }
    else
    {
        /* Transition: '<S346>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_bl) == 133)
        {
            /* Transition: '<S346>:33' */
            /* Transition: '<S346>:35' */
            /* Call Nothing */
            VeLINR_y_CompIGBTTemp_CallStatus = 4U;

            /* Transition: '<S346>:23' */
        }
        else
        {
            /* Transition: '<S346>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_bl) == 1)
            {
                /* Transition: '<S346>:48' */
                /* Transition: '<S346>:53' */
                FA_out_a0 = true;

                /* Transition: '<S346>:56' */
            }
            else
            {
                /* Transition: '<S346>:52' */
            }

            /* Transition: '<S346>:37' */
            /* Call Poke */
            VeLINR_y_CompIGBTTemp_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S302>/Poke' */
            /* FunctionCaller: '<S348>/Function Caller' */
            /* Event: '<S346>:38' */
            Rte_Call_PokeTAIR_T_CompIGBTTemp_PokeTAIR_T_CompIGBTTemp
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_T_g, FA_out_a0);

            /* End of Outputs for SubSystem: '<S302>/Poke' */
        }
    }

    /* End of Chart: '<S342>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_CompSpdIncrReq_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_CompSpdIncrReq_ErrSts'
     */
    /* Transition: '<S346>:19' */
    rtb_TmpSignalConversionAtVeL_ie =
        Rte_Read_VeLINR_b_CompSpdIncrReq_VeLINR_b_CompSpdIncrReq
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_C);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_CompSpdIncrReqTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S352>:1' */
    (void)Rte_Read_VeLINR_b_CompSpdIncrReqTO_VeLINR_b_CompSpdIncrReqTO
        (&FA_out_k1r);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S349>/Chart' */
    if (FA_out_k1r)
    {
        /* Transition: '<S352>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S352>:6' */
            /* Transition: '<S352>:25' */
            /* Call Fsft */
            VeLINR_y_CompSpdIncrReq_CallStatus = 2U;

            /* Event: '<S352>:39' */
            /* Transition: '<S352>:29' */
        }
        else
        {
            /* Transition: '<S352>:30' */
            /* Call Tmot */
            VeLINR_y_CompSpdIncrReq_CallStatus = 3U;

            /* Event: '<S352>:40' */
        }

        /* Transition: '<S352>:36' */
        /* Transition: '<S352>:23' */
    }
    else
    {
        /* Transition: '<S352>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_ie) == 133)
        {
            /* Transition: '<S352>:33' */
            /* Transition: '<S352>:35' */
            /* Call Nothing */
            VeLINR_y_CompSpdIncrReq_CallStatus = 4U;

            /* Transition: '<S352>:23' */
        }
        else
        {
            /* Transition: '<S352>:46' */
            /* Transition: '<S352>:37' */
            /* Call Poke */
            VeLINR_y_CompSpdIncrReq_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S303>/Poke' */
            /* FunctionCaller: '<S353>/Function Caller' */
            /* Event: '<S352>:38' */
            Rte_Call_PokeTAIR_b_CompSpdIncrReq_PokeTAIR_b_CompSpdIncrReq
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_C);

            /* End of Outputs for SubSystem: '<S303>/Poke' */
        }
    }

    /* End of Chart: '<S349>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_CompStat_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_CompStat_ErrSts'
     */
    /* Transition: '<S352>:19' */
    rtb_TmpSignalConversionAtVeL_gg =
        Rte_Read_VeLINR_e_CompStat_VeLINR_e_CompStat
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__fj);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_CompStatTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S358>:1' */
    (void)Rte_Read_VeLINR_b_CompStatTO_VeLINR_b_CompStatTO(&tmpRead_f);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S354>/Chart' */
    if (tmpRead_f)
    {
        /* Transition: '<S358>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S358>:6' */
            /* Transition: '<S358>:25' */
            /* Call Fsft */
            VeLINR_y_CompStat_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S304>/Fsft' */
            /* FunctionCaller: '<S359>/Function Caller' */
            /* Event: '<S358>:39' */
            Rte_Call_FsftTAIR_e_CompStat_FsftTAIR_e_CompStat();

            /* End of Outputs for SubSystem: '<S304>/Fsft' */
            /* Transition: '<S358>:29' */
        }
        else
        {
            /* Transition: '<S358>:30' */
            /* Call Tmot */
            VeLINR_y_CompStat_CallStatus = 3U;

            /* Event: '<S358>:40' */
        }

        /* Transition: '<S358>:36' */
        /* Transition: '<S358>:23' */
    }
    else
    {
        /* Transition: '<S358>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_gg) == 133)
        {
            /* Transition: '<S358>:33' */
            /* Transition: '<S358>:35' */
            /* Call Nothing */
            VeLINR_y_CompStat_CallStatus = 4U;

            /* Transition: '<S358>:23' */
        }
        else
        {
            /* Transition: '<S358>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_gg) == 1)
            {
                /* Transition: '<S358>:48' */
                /* Transition: '<S358>:53' */
                FA_out_k1r = true;

                /* Transition: '<S358>:56' */
            }
            else
            {
                /* Transition: '<S358>:52' */
                FA_out_k1r = false;
            }

            /* Transition: '<S358>:37' */
            /* Call Poke */
            VeLINR_y_CompStat_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S304>/Poke' */
            /* FunctionCaller: '<S360>/Function Caller' */
            /* Event: '<S358>:38' */
            Rte_Call_PokeTAIR_e_CompStat_PokeTAIR_e_CompStat
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__fj, FA_out_k1r);

            /* End of Outputs for SubSystem: '<S304>/Poke' */
        }
    }

    /* End of Chart: '<S354>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_CompressorSpd_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_CompressorSpd_ErrSts'
     */
    /* Transition: '<S358>:19' */
    rtb_TmpSignalConversionAtVeL_fg =
        Rte_Read_VeLINR_n_CompressorSpd_VeLINR_n_CompressorSpd
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_n_C);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_CompressorSpdTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S365>:1' */
    (void)Rte_Read_VeLINR_b_CompressorSpdTO_VeLINR_b_CompressorSpdTO(&FA_out_m4);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S361>/Chart' */
    if (FA_out_m4)
    {
        /* Transition: '<S365>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S365>:6' */
            /* Transition: '<S365>:25' */
            /* Call Fsft */
            VeLINR_y_CompressorSpd_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S305>/Fsft' */
            /* FunctionCaller: '<S366>/Function Caller' */
            /* Event: '<S365>:39' */
            Rte_Call_FsftTAIR_n_CompSpdFdb_FsftTAIR_n_CompSpdFdb();

            /* End of Outputs for SubSystem: '<S305>/Fsft' */
            /* Transition: '<S365>:29' */
        }
        else
        {
            /* Transition: '<S365>:30' */
            /* Call Tmot */
            VeLINR_y_CompressorSpd_CallStatus = 3U;

            /* Event: '<S365>:40' */
        }

        /* Transition: '<S365>:36' */
        /* Transition: '<S365>:23' */
    }
    else
    {
        /* Transition: '<S365>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_fg) == 133)
        {
            /* Transition: '<S365>:33' */
            /* Transition: '<S365>:35' */
            /* Call Nothing */
            VeLINR_y_CompressorSpd_CallStatus = 4U;

            /* Transition: '<S365>:23' */
        }
        else
        {
            /* Transition: '<S365>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_fg) == 1)
            {
                /* Transition: '<S365>:48' */
                /* Transition: '<S365>:53' */
                FA_out_m4 = true;

                /* Transition: '<S365>:56' */
            }
            else
            {
                /* Transition: '<S365>:52' */
            }

            /* Transition: '<S365>:37' */
            /* Call Poke */
            VeLINR_y_CompressorSpd_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S305>/Poke' */
            /* FunctionCaller: '<S367>/Function Caller' */
            /* Event: '<S365>:38' */
            Rte_Call_PokeTAIR_n_CompSpdFdb_PokeTAIR_n_CompSpdFdb
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_n_C, FA_out_m4);

            /* End of Outputs for SubSystem: '<S305>/Poke' */
        }
    }

    /* End of Chart: '<S361>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_RsErr_EAC2_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_RsErr_EAC2_ErrSts'
     */
    /* Transition: '<S365>:19' */
    rtb_TmpSignalConversionAtVeL_mb =
        Rte_Read_VeLINR_b_RsErr_EAC2_VeLINR_b_RsErr_EAC2
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_k);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_RsErr_EAC2TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S371>:1' */
    (void)Rte_Read_VeLINR_b_RsErr_EAC2TO_VeLINR_b_RsErr_EAC2TO(&FA_out_lo);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S368>/Chart' */
    if (FA_out_lo)
    {
        /* Transition: '<S371>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S371>:6' */
            /* Transition: '<S371>:25' */
            /* Call Fsft */
            VeLINR_y_RsErr_EAC2_CallStatus = 2U;

            /* Event: '<S371>:39' */
            /* Transition: '<S371>:29' */
        }
        else
        {
            /* Transition: '<S371>:30' */
            /* Call Tmot */
            VeLINR_y_RsErr_EAC2_CallStatus = 3U;

            /* Event: '<S371>:40' */
        }

        /* Transition: '<S371>:36' */
        /* Transition: '<S371>:23' */
    }
    else
    {
        /* Transition: '<S371>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_mb) == 133)
        {
            /* Transition: '<S371>:33' */
            /* Transition: '<S371>:35' */
            /* Call Nothing */
            VeLINR_y_RsErr_EAC2_CallStatus = 4U;

            /* Transition: '<S371>:23' */
        }
        else
        {
            /* Transition: '<S371>:46' */
            /* Transition: '<S371>:37' */
            /* Call Poke */
            VeLINR_y_RsErr_EAC2_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S306>/Poke' */
            /* FunctionCaller: '<S372>/Function Caller' */
            /* Event: '<S371>:38' */
            Rte_Call_PokeTAIR_b_RespErr_EAC_PokeTAIR_b_RespErr_EAC
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_k);

            /* End of Outputs for SubSystem: '<S306>/Poke' */
        }
    }

    /* End of Chart: '<S368>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_ESaveModeRq_LIN' incorporates:
     *  Inport: '<Root>/VeLINR_b_ESaveModeRq_LIN_TO'
     */
    /* Transition: '<S371>:19' */
#if Rte_SysCon_VrntLR2B_ESaveModeRqLIN

    /* Outputs for Atomic SubSystem: '<S8>/ESaveModeRq_LIN' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_ESaveModeRq_LIN' incorporates:
     *  Inport: '<Root>/VeLINR_e_ESaveModeRq_LIN'
     */
    rtb_TmpSignalConversionAtVeL_d1 =
        Rte_Read_VeLINR_e_ESaveModeRq_LIN_VeLINR_e_ESaveModeRq_LIN
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_E);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S380>:1' */
    (void)Rte_Read_VeLINR_b_ESaveModeRq_LIN_TO_VeLINR_b_ESaveModeRq_LIN_TO
        (&tmpRead_g);

    /* Outputs for Atomic SubSystem: '<S373>/ESaveModeRq_LIN' */
    /* Chart: '<S377>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_ESaveModeRq_LIN_TO'
     */
    if (tmpRead_g)
    {
        /* Transition: '<S380>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S380>:6' */
            /* Transition: '<S380>:25' */
            /* Call Fsft */
            VeLINR_y_ESaveModeRq_LIN_CallStatus = 2U;

            /* Event: '<S380>:39' */
            /* Transition: '<S380>:29' */
        }
        else
        {
            /* Transition: '<S380>:30' */
            /* Call Tmot */
            VeLINR_y_ESaveModeRq_LIN_CallStatus = 3U;

            /* Event: '<S380>:40' */
        }

        /* Transition: '<S380>:36' */
        /* Transition: '<S380>:23' */
    }
    else
    {
        /* Transition: '<S380>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_d1) == 133)
        {
            /* Transition: '<S380>:33' */
            /* Transition: '<S380>:35' */
            /* Call Nothing */
            VeLINR_y_ESaveModeRq_LIN_CallStatus = 4U;

            /* Transition: '<S380>:23' */
        }
        else
        {
            /* Transition: '<S380>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_d1) == 1)
            {
                /* Transition: '<S380>:48' */
                /* Transition: '<S380>:53' */
                FA_out_lo = true;

                /* Transition: '<S380>:56' */
            }
            else
            {
                /* Transition: '<S380>:52' */
                FA_out_lo = false;
            }

            /* Transition: '<S380>:37' */
            /* Call Poke */
            VeLINR_y_ESaveModeRq_LIN_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S376>/Poke' */
            /* FunctionCaller: '<S381>/Function Caller' incorporates:
             *  DataTypeConversion: '<S381>/Data Type Conversion'
             */
            /* Event: '<S380>:38' */
            Rte_Call_PokeDMIR_e_eSaveSwitchLIN_PokeDMIR_e_eSaveSwitchLIN((sint16)
                LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_E, FA_out_lo);

            /* End of Outputs for SubSystem: '<S376>/Poke' */
        }
    }

    /* End of Chart: '<S377>/Chart' */
    /* End of Outputs for SubSystem: '<S373>/ESaveModeRq_LIN' */
    /* End of Outputs for SubSystem: '<S8>/ESaveModeRq_LIN' */
    /* Transition: '<S380>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_ESaveModeRq_LIN' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_ElectricModeRq_LIN' incorporates:
     *  Inport: '<Root>/VeLINR_b_ElectricModeRq_LIN_TO'
     */
#if Rte_SysCon_VrntLR2B_ElectricModeRqLIN

    /* Outputs for Atomic SubSystem: '<S8>/ElectricModeRq_LIN' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_ElectricModeRq_LIN' incorporates:
     *  Inport: '<Root>/VeLINR_e_ElectricModeRq_LIN'
     */
    rtb_TmpSignalConversionAtVeL_ps =
        Rte_Read_VeLINR_e_ElectricModeRq_LIN_VeLINR_e_ElectricModeRq_LIN
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_j);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S386>:1' */
    (void)Rte_Read_VeLINR_b_ElectricModeRq_LIN_TO_VeLINR_b_ElectricModeRq_LIN_TO
        (&FA_out_fr);

    /* Outputs for Atomic SubSystem: '<S374>/ElectricModeRq_LIN' */
    /* Chart: '<S383>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_ElectricModeRq_LIN_TO'
     */
    if (FA_out_fr)
    {
        /* Transition: '<S386>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S386>:6' */
            /* Transition: '<S386>:25' */
            /* Call Fsft */
            VeLINR_y_ElectricModeRq_LIN_CallStatus = 2U;

            /* Event: '<S386>:39' */
            /* Transition: '<S386>:29' */
        }
        else
        {
            /* Transition: '<S386>:30' */
            /* Call Tmot */
            VeLINR_y_ElectricModeRq_LIN_CallStatus = 3U;

            /* Event: '<S386>:40' */
        }

        /* Transition: '<S386>:36' */
        /* Transition: '<S386>:23' */
    }
    else
    {
        /* Transition: '<S386>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_ps) == 133)
        {
            /* Transition: '<S386>:33' */
            /* Transition: '<S386>:35' */
            /* Call Nothing */
            VeLINR_y_ElectricModeRq_LIN_CallStatus = 4U;

            /* Transition: '<S386>:23' */
        }
        else
        {
            /* Transition: '<S386>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_ps) == 1)
            {
                /* Transition: '<S386>:48' */
                /* Transition: '<S386>:53' */
                FA_out_fr = true;

                /* Transition: '<S386>:56' */
            }
            else
            {
                /* Transition: '<S386>:52' */
            }

            /* Transition: '<S386>:37' */
            /* Call Poke */
            VeLINR_y_ElectricModeRq_LIN_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S382>/Poke' */
            /* FunctionCaller: '<S387>/Function Caller' incorporates:
             *  DataTypeConversion: '<S387>/Data Type Conversion'
             */
            /* Event: '<S386>:38' */
            Rte_Call_PokeDMIR_e_ElectricPlusSwitchLIN_PokeDMIR_e_ElectricPlusSwitchLIN
                ((sint16)LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_j,
                 FA_out_fr);

            /* End of Outputs for SubSystem: '<S382>/Poke' */
        }
    }

    /* End of Chart: '<S383>/Chart' */
    /* End of Outputs for SubSystem: '<S374>/ElectricModeRq_LIN' */
    /* End of Outputs for SubSystem: '<S8>/ElectricModeRq_LIN' */
    /* Transition: '<S386>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_ElectricModeRq_LIN' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_HybridModeRq_LIN' incorporates:
     *  Inport: '<Root>/VeLINR_b_HybridModeRq_LIN_TO'
     */
#if Rte_SysCon_VrntLR2B_HybridModeRqLIN

    /* Outputs for Atomic SubSystem: '<S8>/HybridModeRq_LIN' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_HybridModeRq_LIN' incorporates:
     *  Inport: '<Root>/VeLINR_e_HybridModeRq_LIN'
     */
    rtb_TmpSignalConversionAtVeL_fo =
        Rte_Read_VeLINR_e_HybridModeRq_LIN_VeLINR_e_HybridModeRq_LIN
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_H);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S392>:1' */
    (void)Rte_Read_VeLINR_b_HybridModeRq_LIN_TO_VeLINR_b_HybridModeRq_LIN_TO
        (&FA_out_iz);

    /* Outputs for Atomic SubSystem: '<S375>/HybridModeRq_LIN' */
    /* Chart: '<S389>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_HybridModeRq_LIN_TO'
     */
    if (FA_out_iz)
    {
        /* Transition: '<S392>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S392>:6' */
            /* Transition: '<S392>:25' */
            /* Call Fsft */
            VeLINR_y_HybridModeRq_LIN_CallStatus = 2U;

            /* Event: '<S392>:39' */
            /* Transition: '<S392>:29' */
        }
        else
        {
            /* Transition: '<S392>:30' */
            /* Call Tmot */
            VeLINR_y_HybridModeRq_LIN_CallStatus = 3U;

            /* Event: '<S392>:40' */
        }

        /* Transition: '<S392>:36' */
        /* Transition: '<S392>:23' */
    }
    else
    {
        /* Transition: '<S392>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_fo) == 133)
        {
            /* Transition: '<S392>:33' */
            /* Transition: '<S392>:35' */
            /* Call Nothing */
            VeLINR_y_HybridModeRq_LIN_CallStatus = 4U;

            /* Transition: '<S392>:23' */
        }
        else
        {
            /* Transition: '<S392>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_fo) == 1)
            {
                /* Transition: '<S392>:48' */
                /* Transition: '<S392>:53' */
                FA_out_iz = true;

                /* Transition: '<S392>:56' */
            }
            else
            {
                /* Transition: '<S392>:52' */
            }

            /* Transition: '<S392>:37' */
            /* Call Poke */
            VeLINR_y_HybridModeRq_LIN_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S388>/Poke' */
            /* FunctionCaller: '<S393>/Function Caller' incorporates:
             *  DataTypeConversion: '<S393>/Data Type Conversion'
             */
            /* Event: '<S392>:38' */
            Rte_Call_PokeDMIR_e_EcoBtnStLIN_PokeDMIR_e_EcoBtnStLIN((sint16)
                LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_H, FA_out_iz);

            /* End of Outputs for SubSystem: '<S388>/Poke' */
        }
    }

    /* End of Chart: '<S389>/Chart' */
    /* End of Outputs for SubSystem: '<S375>/HybridModeRq_LIN' */
    /* End of Outputs for SubSystem: '<S8>/HybridModeRq_LIN' */
    /* Transition: '<S392>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_HybridModeRq_LIN' */

    /* SignalConversion generated from: '<S2>/VeLINR_T_OEXV_Board_Temp' incorporates:
     *  Inport: '<Root>/VeLINR_b_OEXV_Board_TempTO'
     */
#if Rte_SysCon_VrntLR2B_OEXVBoardTemp

    /* Outputs for Atomic SubSystem: '<S13>/OEXV_Board_Temp' */
    /* SignalConversion generated from: '<S2>/VeLINR_T_OEXV_Board_Temp' incorporates:
     *  Inport: '<Root>/VeLINR_T_OEXV_Board_Temp'
     */
    rtb_TmpSignalConversionAtVeL_im =
        Rte_Read_VeLINR_T_OEXV_Board_Temp_VeLINR_T_OEXV_Board_Temp
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_T_O);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S408>:1' */
    (void)Rte_Read_VeLINR_b_OEXV_Board_TempTO_VeLINR_b_OEXV_Board_TempTO
        (&FA_out_dv);

    /* Outputs for Atomic SubSystem: '<S394>/OEXV_Board_Temp' */
    /* Chart: '<S405>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_OEXV_Board_TempTO'
     */
    if (FA_out_dv)
    {
        /* Transition: '<S408>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S408>:6' */
            /* Transition: '<S408>:25' */
            /* Call Fsft */
            VeLINR_y_OEXV_Board_Temp_CallStatus = 2U;

            /* Event: '<S408>:39' */
            /* Transition: '<S408>:29' */
        }
        else
        {
            /* Transition: '<S408>:30' */
            /* Call Tmot */
            VeLINR_y_OEXV_Board_Temp_CallStatus = 3U;

            /* Event: '<S408>:40' */
        }

        /* Transition: '<S408>:36' */
        /* Transition: '<S408>:23' */
    }
    else
    {
        /* Transition: '<S408>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_im) == 133)
        {
            /* Transition: '<S408>:33' */
            /* Transition: '<S408>:35' */
            /* Call Nothing */
            VeLINR_y_OEXV_Board_Temp_CallStatus = 4U;

            /* Transition: '<S408>:23' */
        }
        else
        {
            /* Transition: '<S408>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_im) == 1)
            {
                /* Transition: '<S408>:48' */
                /* Transition: '<S408>:53' */
                FA_out_dv = true;

                /* Transition: '<S408>:56' */
            }
            else
            {
                /* Transition: '<S408>:52' */
            }

            /* Transition: '<S408>:37' */
            /* Call Poke */
            VeLINR_y_OEXV_Board_Temp_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S404>/Poke' */
            /* FunctionCaller: '<S409>/Function Caller' */
            /* Event: '<S408>:38' */
            Rte_Call_PokeTAIR_T_OEXV_BoardTemp_PokeTAIR_T_OEXV_BoardTemp
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_T_O, FA_out_dv);

            /* End of Outputs for SubSystem: '<S404>/Poke' */
        }
    }

    /* End of Chart: '<S405>/Chart' */
    /* End of Outputs for SubSystem: '<S394>/OEXV_Board_Temp' */
    /* End of Outputs for SubSystem: '<S13>/OEXV_Board_Temp' */
    /* Transition: '<S408>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_T_OEXV_Board_Temp' */

    /* SignalConversion generated from: '<S2>/VeLINR_b_OEXV_CalRq' incorporates:
     *  Inport: '<Root>/VeLINR_b_OEXV_CalRqTO'
     */
#if Rte_SysCon_VrntLR2B_OEXVCalRq

    /* Outputs for Atomic SubSystem: '<S13>/OEXV_CalRq' */
    /* SignalConversion generated from: '<S2>/VeLINR_b_OEXV_CalRq' incorporates:
     *  Inport: '<Root>/VeLINR_b_OEXV_CalRq'
     */
    rtb_TmpSignalConversionAtVeL_db =
        Rte_Read_VeLINR_b_OEXV_CalRq_VeLINR_b_OEXV_CalRq
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_O);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S414>:1' */
    (void)Rte_Read_VeLINR_b_OEXV_CalRqTO_VeLINR_b_OEXV_CalRqTO(&FA_out_brr);

    /* Outputs for Atomic SubSystem: '<S395>/OEXV_CalRq' */
    /* Chart: '<S411>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_OEXV_CalRqTO'
     */
    if (FA_out_brr)
    {
        /* Transition: '<S414>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S414>:6' */
            /* Transition: '<S414>:25' */
            /* Call Fsft */
            VeLINR_y_OEXV_CalRq_CallStatus = 2U;

            /* Event: '<S414>:39' */
            /* Transition: '<S414>:29' */
        }
        else
        {
            /* Transition: '<S414>:30' */
            /* Call Tmot */
            VeLINR_y_OEXV_CalRq_CallStatus = 3U;

            /* Event: '<S414>:40' */
        }

        /* Transition: '<S414>:36' */
        /* Transition: '<S414>:23' */
    }
    else
    {
        /* Transition: '<S414>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_db) == 133)
        {
            /* Transition: '<S414>:33' */
            /* Transition: '<S414>:35' */
            /* Call Nothing */
            VeLINR_y_OEXV_CalRq_CallStatus = 4U;

            /* Transition: '<S414>:23' */
        }
        else
        {
            /* Transition: '<S414>:46' */
            /* Transition: '<S414>:37' */
            /* Call Poke */
            VeLINR_y_OEXV_CalRq_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S410>/Poke' */
            /* FunctionCaller: '<S415>/Function Caller' */
            /* Event: '<S414>:38' */
            Rte_Call_PokeTAIR_b_OEXV_CalRq_PokeTAIR_b_OEXV_CalRq
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_O);

            /* End of Outputs for SubSystem: '<S410>/Poke' */
        }
    }

    /* End of Chart: '<S411>/Chart' */
    /* End of Outputs for SubSystem: '<S395>/OEXV_CalRq' */
    /* End of Outputs for SubSystem: '<S13>/OEXV_CalRq' */
    /* Transition: '<S414>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_b_OEXV_CalRq' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_OEXV_CalStat' incorporates:
     *  Inport: '<Root>/VeLINR_b_OEXV_CalStatTO'
     */
#if Rte_SysCon_VrntLR2B_OEXVCalStat

    /* Outputs for Atomic SubSystem: '<S13>/OEXV_CalStat' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_OEXV_CalStat' incorporates:
     *  Inport: '<Root>/VeLINR_e_OEXV_CalStat'
     */
    rtb_TmpSignalConversionAtVeL_ph =
        Rte_Read_VeLINR_e_OEXV_CalStat_VeLINR_e_OEXV_CalStat
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__bg);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S420>:1' */
    (void)Rte_Read_VeLINR_b_OEXV_CalStatTO_VeLINR_b_OEXV_CalStatTO(&tmpRead_h);

    /* Outputs for Atomic SubSystem: '<S396>/OEXV_CalStat' */
    /* Chart: '<S417>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_OEXV_CalStatTO'
     */
    if (tmpRead_h)
    {
        /* Transition: '<S420>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S420>:6' */
            /* Transition: '<S420>:25' */
            /* Call Fsft */
            VeLINR_y_OEXV_CalStat_CallStatus = 2U;

            /* Event: '<S420>:39' */
            /* Transition: '<S420>:29' */
        }
        else
        {
            /* Transition: '<S420>:30' */
            /* Call Tmot */
            VeLINR_y_OEXV_CalStat_CallStatus = 3U;

            /* Event: '<S420>:40' */
        }

        /* Transition: '<S420>:36' */
        /* Transition: '<S420>:23' */
    }
    else
    {
        /* Transition: '<S420>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_ph) == 133)
        {
            /* Transition: '<S420>:33' */
            /* Transition: '<S420>:35' */
            /* Call Nothing */
            VeLINR_y_OEXV_CalStat_CallStatus = 4U;

            /* Transition: '<S420>:23' */
        }
        else
        {
            /* Transition: '<S420>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_ph) == 1)
            {
                /* Transition: '<S420>:48' */
                /* Transition: '<S420>:53' */
                FA_out_brr = true;

                /* Transition: '<S420>:56' */
            }
            else
            {
                /* Transition: '<S420>:52' */
                FA_out_brr = false;
            }

            /* Transition: '<S420>:37' */
            /* Call Poke */
            VeLINR_y_OEXV_CalStat_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S416>/Poke' */
            /* FunctionCaller: '<S421>/Function Caller' */
            /* Event: '<S420>:38' */
            Rte_Call_PokeTAIR_e_OEXV_CalStat_PokeTAIR_e_OEXV_CalStat
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__bg, FA_out_brr);

            /* End of Outputs for SubSystem: '<S416>/Poke' */
        }
    }

    /* End of Chart: '<S417>/Chart' */
    /* End of Outputs for SubSystem: '<S396>/OEXV_CalStat' */
    /* End of Outputs for SubSystem: '<S13>/OEXV_CalStat' */
    /* Transition: '<S420>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_OEXV_CalStat' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_OEXV_ERR' incorporates:
     *  Inport: '<Root>/VeLINR_b_OEXV_ERR_TO'
     */
#if Rte_SysCon_VrntLR2B_OEXVERR

    /* Outputs for Atomic SubSystem: '<S13>/OEXV_ERR' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_OEXV_ERR' incorporates:
     *  Inport: '<Root>/VeLINR_e_OEXV_ERR'
     */
    rtb_TmpSignalConversionAtVeL_f3 =
        Rte_Read_VeLINR_e_OEXV_ERR_VeLINR_e_OEXV_ERR
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_fjo);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S426>:1' */
    (void)Rte_Read_VeLINR_b_OEXV_ERR_TO_VeLINR_b_OEXV_ERR_TO(&FA_out_jj);

    /* Outputs for Atomic SubSystem: '<S397>/OEXV_ERR' */
    /* Chart: '<S423>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_OEXV_ERR_TO'
     */
    if (FA_out_jj)
    {
        /* Transition: '<S426>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S426>:6' */
            /* Transition: '<S426>:25' */
            /* Call Fsft */
            VeLINR_y_OEXV_ERR_CallStatus = 2U;

            /* Event: '<S426>:39' */
            /* Transition: '<S426>:29' */
        }
        else
        {
            /* Transition: '<S426>:30' */
            /* Call Tmot */
            VeLINR_y_OEXV_ERR_CallStatus = 3U;

            /* Event: '<S426>:40' */
        }

        /* Transition: '<S426>:36' */
        /* Transition: '<S426>:23' */
    }
    else
    {
        /* Transition: '<S426>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_f3) == 133)
        {
            /* Transition: '<S426>:33' */
            /* Transition: '<S426>:35' */
            /* Call Nothing */
            VeLINR_y_OEXV_ERR_CallStatus = 4U;

            /* Transition: '<S426>:23' */
        }
        else
        {
            /* Transition: '<S426>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_f3) == 1)
            {
                /* Transition: '<S426>:48' */
                /* Transition: '<S426>:53' */
                FA_out_jj = true;

                /* Transition: '<S426>:56' */
            }
            else
            {
                /* Transition: '<S426>:52' */
            }

            /* Transition: '<S426>:37' */
            /* Call Poke */
            VeLINR_y_OEXV_ERR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S422>/Poke' */
            /* FunctionCaller: '<S427>/Function Caller' */
            /* Event: '<S426>:38' */
            Rte_Call_PokeTAIR_e_OEXV_Err_PokeTAIR_e_OEXV_Err
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_fjo, FA_out_jj);

            /* End of Outputs for SubSystem: '<S422>/Poke' */
        }
    }

    /* End of Chart: '<S423>/Chart' */
    /* End of Outputs for SubSystem: '<S397>/OEXV_ERR' */
    /* End of Outputs for SubSystem: '<S13>/OEXV_ERR' */
    /* Transition: '<S426>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_OEXV_ERR' */

    /* SignalConversion generated from: '<S2>/VeLINR_Pct_OEXV_PosAct' incorporates:
     *  Inport: '<Root>/VeLINR_b_OEXV_PosActTO'
     */
#if Rte_SysCon_VrntLR2B_OEXVPosAct

    /* Outputs for Atomic SubSystem: '<S13>/OEXV_PosAct' */
    /* SignalConversion generated from: '<S2>/VeLINR_Pct_OEXV_PosAct' incorporates:
     *  Inport: '<Root>/VeLINR_Pct_OEXV_PosAct'
     */
    rtb_TmpSignalConversionAtVeL_cc =
        Rte_Read_VeLINR_Pct_OEXV_PosAct_VeLINR_Pct_OEXV_PosAct
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_P_o);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S433>:1' */
    (void)Rte_Read_VeLINR_b_OEXV_PosActTO_VeLINR_b_OEXV_PosActTO(&FA_out_np);

    /* Outputs for Atomic SubSystem: '<S398>/OEXV_PosAct' */
    /* Chart: '<S429>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_OEXV_PosActTO'
     */
    if (FA_out_np)
    {
        /* Transition: '<S433>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S433>:6' */
            /* Transition: '<S433>:25' */
            /* Call Fsft */
            VeLINR_y_OEXV_PosAct_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S428>/Fsft' */
            /* FunctionCaller: '<S434>/Function Caller' */
            /* Event: '<S433>:39' */
            Rte_Call_FsftTAIR_Pct_OEXV_PosAct_FsftTAIR_Pct_OEXV_PosAct();

            /* End of Outputs for SubSystem: '<S428>/Fsft' */
            /* Transition: '<S433>:29' */
        }
        else
        {
            /* Transition: '<S433>:30' */
            /* Call Tmot */
            VeLINR_y_OEXV_PosAct_CallStatus = 3U;

            /* Event: '<S433>:40' */
        }

        /* Transition: '<S433>:36' */
        /* Transition: '<S433>:23' */
    }
    else
    {
        /* Transition: '<S433>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_cc) == 133)
        {
            /* Transition: '<S433>:33' */
            /* Transition: '<S433>:35' */
            /* Call Nothing */
            VeLINR_y_OEXV_PosAct_CallStatus = 4U;

            /* Transition: '<S433>:23' */
        }
        else
        {
            /* Transition: '<S433>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_cc) == 1)
            {
                /* Transition: '<S433>:48' */
                /* Transition: '<S433>:53' */
                FA_out_np = true;

                /* Transition: '<S433>:56' */
            }
            else
            {
                /* Transition: '<S433>:52' */
            }

            /* Transition: '<S433>:37' */
            /* Call Poke */
            VeLINR_y_OEXV_PosAct_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S428>/Poke' */
            /* FunctionCaller: '<S435>/Function Caller' */
            /* Event: '<S433>:38' */
            Rte_Call_PokeTAIR_Pct_OEXV_PosAct_PokeTAIR_Pct_OEXV_PosAct
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_P_o, FA_out_np);

            /* End of Outputs for SubSystem: '<S428>/Poke' */
        }
    }

    /* End of Chart: '<S429>/Chart' */
    /* End of Outputs for SubSystem: '<S398>/OEXV_PosAct' */
    /* End of Outputs for SubSystem: '<S13>/OEXV_PosAct' */
    /* Transition: '<S433>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_Pct_OEXV_PosAct' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_OEXV_Refrig_Pres' incorporates:
     *  Inport: '<Root>/VeLINR_b_OEXV_Refrig_PresTO'
     */
#if Rte_SysCon_VrntLR2B_OEXVRefrigerantPressure

    /* Outputs for Atomic SubSystem: '<S13>/OEXV_Refrigerant_Pressure' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_OEXV_Refrig_Pres' incorporates:
     *  Inport: '<Root>/VeLINR_e_OEXV_Refrig_Pres'
     */
    rtb_TmpSignalConversionAtVeL_fa =
        Rte_Read_VeLINR_e_OEXV_Refrig_Pres_VeLINR_e_OEXV_Refrig_Pres
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_O);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S441>:1' */
    (void)Rte_Read_VeLINR_b_OEXV_Refrig_PresTO_VeLINR_b_OEXV_Refrig_PresTO
        (&FA_out_pf);

    /* Outputs for Atomic SubSystem: '<S399>/OEXV_Refrigerant_Pressure' */
    /* Chart: '<S437>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_OEXV_Refrig_PresTO'
     */
    if (FA_out_pf)
    {
        /* Transition: '<S441>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S441>:6' */
            /* Transition: '<S441>:25' */
            /* Call Fsft */
            VeLINR_y_OEXV_Refrig_Pres_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S436>/Fsft' */
            /* FunctionCaller: '<S442>/Function Caller' */
            /* Event: '<S441>:39' */
            Rte_Call_FsftTAIR_p_OEXV_RefPress_FsftTAIR_p_OEXV_RefPress();

            /* End of Outputs for SubSystem: '<S436>/Fsft' */
            /* Transition: '<S441>:29' */
        }
        else
        {
            /* Transition: '<S441>:30' */
            /* Call Tmot */
            VeLINR_y_OEXV_Refrig_Pres_CallStatus = 3U;

            /* Event: '<S441>:40' */
        }

        /* Transition: '<S441>:36' */
        /* Transition: '<S441>:23' */
    }
    else
    {
        /* Transition: '<S441>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_fa) == 133)
        {
            /* Transition: '<S441>:33' */
            /* Transition: '<S441>:35' */
            /* Call Nothing */
            VeLINR_y_OEXV_Refrig_Pres_CallStatus = 4U;

            /* Transition: '<S441>:23' */
        }
        else
        {
            /* Transition: '<S441>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_fa) == 1)
            {
                /* Transition: '<S441>:48' */
                /* Transition: '<S441>:53' */
                FA_out_pf = true;

                /* Transition: '<S441>:56' */
            }
            else
            {
                /* Transition: '<S441>:52' */
            }

            /* Transition: '<S441>:37' */
            /* Call Poke */
            VeLINR_y_OEXV_Refrig_Pres_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S436>/Poke' */
            /* FunctionCaller: '<S443>/Function Caller' */
            /* Event: '<S441>:38' */
            Rte_Call_PokeTAIR_p_OEXV_RefPress_PokeTAIR_p_OEXV_RefPress
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_O, FA_out_pf);

            /* End of Outputs for SubSystem: '<S436>/Poke' */
        }
    }

    /* End of Chart: '<S437>/Chart' */
    /* End of Outputs for SubSystem: '<S399>/OEXV_Refrigerant_Pressure' */
    /* End of Outputs for SubSystem: '<S13>/OEXV_Refrigerant_Pressure' */
    /* Transition: '<S441>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_OEXV_Refrig_Pres' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_OEXV_Refrigerant_Temp' incorporates:
     *  Inport: '<Root>/VeLINR_b_OEXV_Refrigerant_TempTO'
     */
#if Rte_SysCon_VrntLR2B_OEXVRefrigerantTemp

    /* Outputs for Atomic SubSystem: '<S13>/OEXV_Refrigerant_Temp' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_OEXV_Refrigerant_Temp' incorporates:
     *  Inport: '<Root>/VeLINR_e_OEXV_Refrigerant_Temp'
     */
    rtb_TmpSignalConversionAtVeLI_e =
        Rte_Read_VeLINR_e_OEXV_Refrigerant_Temp_VeLINR_e_OEXV_Refrigerant_Temp
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_l);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S449>:1' */
    (void)
        Rte_Read_VeLINR_b_OEXV_Refrigerant_TempTO_VeLINR_b_OEXV_Refrigerant_TempTO
        (&FA_out_j3);

    /* Outputs for Atomic SubSystem: '<S400>/OEXV_Refrigerant_Temp' */
    /* Chart: '<S445>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_OEXV_Refrigerant_TempTO'
     */
    if (FA_out_j3)
    {
        /* Transition: '<S449>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S449>:6' */
            /* Transition: '<S449>:25' */
            /* Call Fsft */
            VeLINR_y_OEXV_Refrigerant_Temp_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S444>/Fsft' */
            /* FunctionCaller: '<S450>/Function Caller' */
            /* Event: '<S449>:39' */
            Rte_Call_FsftTAIR_T_OEXV_RefTemp_FsftTAIR_T_OEXV_RefTemp();

            /* End of Outputs for SubSystem: '<S444>/Fsft' */
            /* Transition: '<S449>:29' */
        }
        else
        {
            /* Transition: '<S449>:30' */
            /* Call Tmot */
            VeLINR_y_OEXV_Refrigerant_Temp_CallStatus = 3U;

            /* Event: '<S449>:40' */
        }

        /* Transition: '<S449>:36' */
        /* Transition: '<S449>:23' */
    }
    else
    {
        /* Transition: '<S449>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_e) == 133)
        {
            /* Transition: '<S449>:33' */
            /* Transition: '<S449>:35' */
            /* Call Nothing */
            VeLINR_y_OEXV_Refrigerant_Temp_CallStatus = 4U;

            /* Transition: '<S449>:23' */
        }
        else
        {
            /* Transition: '<S449>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeLI_e) == 1)
            {
                /* Transition: '<S449>:48' */
                /* Transition: '<S449>:53' */
                FA_out_j3 = true;

                /* Transition: '<S449>:56' */
            }
            else
            {
                /* Transition: '<S449>:52' */
            }

            /* Transition: '<S449>:37' */
            /* Call Poke */
            VeLINR_y_OEXV_Refrigerant_Temp_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S444>/Poke' */
            /* FunctionCaller: '<S451>/Function Caller' */
            /* Event: '<S449>:38' */
            Rte_Call_PokeTAIR_T_OEXV_RefTemp_PokeTAIR_T_OEXV_RefTemp
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_l, FA_out_j3);

            /* End of Outputs for SubSystem: '<S444>/Poke' */
        }
    }

    /* End of Chart: '<S445>/Chart' */
    /* End of Outputs for SubSystem: '<S400>/OEXV_Refrigerant_Temp' */
    /* End of Outputs for SubSystem: '<S13>/OEXV_Refrigerant_Temp' */
    /* Transition: '<S449>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_OEXV_Refrigerant_Temp' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_OEXV_Sts' incorporates:
     *  Inport: '<Root>/VeLINR_b_OEXV_StsTO'
     */
#if Rte_SysCon_VrntLR2B_OEXVSts

    /* Outputs for Atomic SubSystem: '<S13>/OEXV_Sts' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_OEXV_Sts' incorporates:
     *  Inport: '<Root>/VeLINR_e_OEXV_Sts'
     */
    rtb_TmpSignalConversionAtVeL_mp =
        Rte_Read_VeLINR_e_OEXV_Sts_VeLINR_e_OEXV_Sts
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__fz);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S456>:1' */
    (void)Rte_Read_VeLINR_b_OEXV_StsTO_VeLINR_b_OEXV_StsTO(&FA_out_e4);

    /* Outputs for Atomic SubSystem: '<S401>/OEXV_Sts' */
    /* Chart: '<S453>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_OEXV_StsTO'
     */
    if (FA_out_e4)
    {
        /* Transition: '<S456>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S456>:6' */
            /* Transition: '<S456>:25' */
            /* Call Fsft */
            VeLINR_y_OEXV_Sts_CallStatus = 2U;

            /* Event: '<S456>:39' */
            /* Transition: '<S456>:29' */
        }
        else
        {
            /* Transition: '<S456>:30' */
            /* Call Tmot */
            VeLINR_y_OEXV_Sts_CallStatus = 3U;

            /* Event: '<S456>:40' */
        }

        /* Transition: '<S456>:36' */
        /* Transition: '<S456>:23' */
    }
    else
    {
        /* Transition: '<S456>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_mp) == 133)
        {
            /* Transition: '<S456>:33' */
            /* Transition: '<S456>:35' */
            /* Call Nothing */
            VeLINR_y_OEXV_Sts_CallStatus = 4U;

            /* Transition: '<S456>:23' */
        }
        else
        {
            /* Transition: '<S456>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_mp) == 1)
            {
                /* Transition: '<S456>:48' */
                /* Transition: '<S456>:53' */
                FA_out_e4 = true;

                /* Transition: '<S456>:56' */
            }
            else
            {
                /* Transition: '<S456>:52' */
            }

            /* Transition: '<S456>:37' */
            /* Call Poke */
            VeLINR_y_OEXV_Sts_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S452>/Poke' */
            /* FunctionCaller: '<S457>/Function Caller' */
            /* Event: '<S456>:38' */
            Rte_Call_PokeTAIR_e_OEXV_Sts_PokeTAIR_e_OEXV_Sts
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__fz, FA_out_e4);

            /* End of Outputs for SubSystem: '<S452>/Poke' */
        }
    }

    /* End of Chart: '<S453>/Chart' */
    /* End of Outputs for SubSystem: '<S401>/OEXV_Sts' */
    /* End of Outputs for SubSystem: '<S13>/OEXV_Sts' */
    /* Transition: '<S456>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_OEXV_Sts' */

    /* SignalConversion generated from: '<S2>/VeLINR_U_OEXV_SupplyVolt' incorporates:
     *  Inport: '<Root>/VeLINR_b_OEXV_SupplyVoltTO'
     */
#if Rte_SysCon_VrntLR2B_OEXVSupplyVolt

    /* Outputs for Atomic SubSystem: '<S13>/OEXV_SupplyVolt' */
    /* SignalConversion generated from: '<S2>/VeLINR_U_OEXV_SupplyVolt' incorporates:
     *  Inport: '<Root>/VeLINR_U_OEXV_SupplyVolt'
     */
    rtb_TmpSignalConversionAtVeL_fs =
        Rte_Read_VeLINR_U_OEXV_SupplyVolt_VeLINR_U_OEXV_SupplyVolt
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_U_O);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S462>:1' */
    (void)Rte_Read_VeLINR_b_OEXV_SupplyVoltTO_VeLINR_b_OEXV_SupplyVoltTO
        (&FA_out_jw);

    /* Outputs for Atomic SubSystem: '<S402>/OEXV_SupplyVolt' */
    /* Chart: '<S459>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_OEXV_SupplyVoltTO'
     */
    if (FA_out_jw)
    {
        /* Transition: '<S462>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S462>:6' */
            /* Transition: '<S462>:25' */
            /* Call Fsft */
            VeLINR_y_OEXV_SupplyVolt_CallStatus = 2U;

            /* Event: '<S462>:39' */
            /* Transition: '<S462>:29' */
        }
        else
        {
            /* Transition: '<S462>:30' */
            /* Call Tmot */
            VeLINR_y_OEXV_SupplyVolt_CallStatus = 3U;

            /* Event: '<S462>:40' */
        }

        /* Transition: '<S462>:36' */
        /* Transition: '<S462>:23' */
    }
    else
    {
        /* Transition: '<S462>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_fs) == 133)
        {
            /* Transition: '<S462>:33' */
            /* Transition: '<S462>:35' */
            /* Call Nothing */
            VeLINR_y_OEXV_SupplyVolt_CallStatus = 4U;

            /* Transition: '<S462>:23' */
        }
        else
        {
            /* Transition: '<S462>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_fs) == 1)
            {
                /* Transition: '<S462>:48' */
                /* Transition: '<S462>:53' */
                FA_out_jw = true;

                /* Transition: '<S462>:56' */
            }
            else
            {
                /* Transition: '<S462>:52' */
            }

            /* Transition: '<S462>:37' */
            /* Call Poke */
            VeLINR_y_OEXV_SupplyVolt_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S458>/Poke' */
            /* FunctionCaller: '<S463>/Function Caller' */
            /* Event: '<S462>:38' */
            Rte_Call_PokeTAIR_U_OEXV_SupplyVolt_PokeTAIR_U_OEXV_SupplyVolt
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_U_O, FA_out_jw);

            /* End of Outputs for SubSystem: '<S458>/Poke' */
        }
    }

    /* End of Chart: '<S459>/Chart' */
    /* End of Outputs for SubSystem: '<S402>/OEXV_SupplyVolt' */
    /* End of Outputs for SubSystem: '<S13>/OEXV_SupplyVolt' */
    /* Transition: '<S462>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_U_OEXV_SupplyVolt' */

    /* SignalConversion generated from: '<S2>/VeLINR_b_RsErr_OEXV' incorporates:
     *  Inport: '<Root>/VeLINR_b_RsErr_OEXV_TO'
     */
#if Rte_SysCon_VrntLR2B_RsErrOEXV

    /* Outputs for Atomic SubSystem: '<S13>/RsErr_OEXV' */
    /* SignalConversion generated from: '<S2>/VeLINR_b_RsErr_OEXV' incorporates:
     *  Inport: '<Root>/VeLINR_b_RsErr_OEXV'
     */
    rtb_TmpSignalConversionAtVeL_jd =
        Rte_Read_VeLINR_b_RsErr_OEXV_VeLINR_b_RsErr_OEXV
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_iqo);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S468>:1' */
    (void)Rte_Read_VeLINR_b_RsErr_OEXV_TO_VeLINR_b_RsErr_OEXV_TO(&FA_out_jy);

    /* Outputs for Atomic SubSystem: '<S403>/RsErr_OEXV' */
    /* Chart: '<S465>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_RsErr_OEXV_TO'
     */
    if (FA_out_jy)
    {
        /* Transition: '<S468>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S468>:6' */
            /* Transition: '<S468>:25' */
            /* Call Fsft */
            VeLINR_y_RsErr_OEXV_CallStatus = 2U;

            /* Event: '<S468>:39' */
            /* Transition: '<S468>:29' */
        }
        else
        {
            /* Transition: '<S468>:30' */
            /* Call Tmot */
            VeLINR_y_RsErr_OEXV_CallStatus = 3U;

            /* Event: '<S468>:40' */
        }

        /* Transition: '<S468>:36' */
        /* Transition: '<S468>:23' */
    }
    else
    {
        /* Transition: '<S468>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_jd) == 133)
        {
            /* Transition: '<S468>:33' */
            /* Transition: '<S468>:35' */
            /* Call Nothing */
            VeLINR_y_RsErr_OEXV_CallStatus = 4U;

            /* Transition: '<S468>:23' */
        }
        else
        {
            /* Transition: '<S468>:46' */
            /* Transition: '<S468>:37' */
            /* Call Poke */
            VeLINR_y_RsErr_OEXV_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S464>/Poke' */
            /* FunctionCaller: '<S469>/Function Caller' */
            /* Event: '<S468>:38' */
            Rte_Call_PokeTAIR_b_OEXV_RspErr_PokeTAIR_b_OEXV_RspErr
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_iqo);

            /* End of Outputs for SubSystem: '<S464>/Poke' */
        }
    }

    /* End of Chart: '<S465>/Chart' */
    /* End of Outputs for SubSystem: '<S403>/RsErr_OEXV' */
    /* End of Outputs for SubSystem: '<S13>/RsErr_OEXV' */
    /* Transition: '<S468>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_b_RsErr_OEXV' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP_AIR_PRE_ERR_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP_AIR_PRE_ERR_ErrSts'
     */
    rtb_TmpSignalConversionAtVeL_no =
        Rte_Read_VeLINR_e_PECP_AIR_PRE_ERR_VeLINR_e_PECP_AIR_PRE_ERR
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_P);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP_AIR_PRE_ERR_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S491>:1' */
    (void)Rte_Read_VeLINR_b_PECP_AIR_PRE_ERR_TO_VeLINR_b_PECP_AIR_PRE_ERR_TO
        (&tmpRead_i);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S487>/Chart' */
    if (tmpRead_i)
    {
        /* Transition: '<S491>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S491>:6' */
            /* Transition: '<S491>:25' */
            /* Call Fsft */
            VeLINR_y_PECP_AIR_PRE_ERR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S470>/Fsft' */
            /* FunctionCaller: '<S492>/Function Caller' */
            /* Event: '<S491>:39' */
            Rte_Call_FsftPMIR_b_LTPsvPmpAirPrsntErr_FsftPMIR_b_LTPsvPmpAirPrsntErr
                ();

            /* End of Outputs for SubSystem: '<S470>/Fsft' */
            /* Transition: '<S491>:29' */
        }
        else
        {
            /* Transition: '<S491>:30' */
            /* Call Tmot */
            VeLINR_y_PECP_AIR_PRE_ERR_CallStatus = 3U;

            /* Event: '<S491>:40' */
        }

        /* Transition: '<S491>:36' */
        /* Transition: '<S491>:23' */
    }
    else
    {
        /* Transition: '<S491>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_no) == 133)
        {
            /* Transition: '<S491>:33' */
            /* Transition: '<S491>:35' */
            /* Call Nothing */
            VeLINR_y_PECP_AIR_PRE_ERR_CallStatus = 4U;

            /* Transition: '<S491>:23' */
        }
        else
        {
            /* Transition: '<S491>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_no) == 1)
            {
                /* Transition: '<S491>:48' */
                /* Transition: '<S491>:53' */
                FA_out_jy = true;

                /* Transition: '<S491>:56' */
            }
            else
            {
                /* Transition: '<S491>:52' */
                FA_out_jy = false;
            }

            /* Transition: '<S491>:37' */
            /* Call Poke */
            VeLINR_y_PECP_AIR_PRE_ERR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S470>/Poke' */
            /* FunctionCaller: '<S493>/Function Caller' */
            /* Event: '<S491>:38' */
            Rte_Call_PokePMIR_e_LTPsvPmpAirPrsntErr_PokePMIR_e_LTPsvPmpAirPrsntErr
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_P, FA_out_jy);

            /* End of Outputs for SubSystem: '<S470>/Poke' */
        }
    }

    /* End of Chart: '<S487>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP_CURR_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP_CURR_ErrSts'
     */
    /* Transition: '<S491>:19' */
    rtb_TmpSignalConversionAtVeL_c5 =
        Rte_Read_VeLINR_I_PECP_CURR_VeLINR_I_PECP_CURR
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_I_P);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP_CURR_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S498>:1' */
    (void)Rte_Read_VeLINR_b_PECP_CURR_TO_VeLINR_b_PECP_CURR_TO(&FA_out_je);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S494>/Chart' */
    if (FA_out_je)
    {
        /* Transition: '<S498>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S498>:6' */
            /* Transition: '<S498>:25' */
            /* Call Fsft */
            VeLINR_y_PECP_CURR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S471>/Fsft' */
            /* FunctionCaller: '<S499>/Function Caller' */
            /* Event: '<S498>:39' */
            Rte_Call_FsftPMIR_b_LT_PsvPmpCrnt_FsftPMIR_b_LT_PsvPmpCrnt();

            /* End of Outputs for SubSystem: '<S471>/Fsft' */
            /* Transition: '<S498>:29' */
        }
        else
        {
            /* Transition: '<S498>:30' */
            /* Call Tmot */
            VeLINR_y_PECP_CURR_CallStatus = 3U;

            /* Event: '<S498>:40' */
        }

        /* Transition: '<S498>:36' */
        /* Transition: '<S498>:23' */
    }
    else
    {
        /* Transition: '<S498>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_c5) == 133)
        {
            /* Transition: '<S498>:33' */
            /* Transition: '<S498>:35' */
            /* Call Nothing */
            VeLINR_y_PECP_CURR_CallStatus = 4U;

            /* Transition: '<S498>:23' */
        }
        else
        {
            /* Transition: '<S498>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_c5) == 1)
            {
                /* Transition: '<S498>:48' */
                /* Transition: '<S498>:53' */
                FA_out_je = true;

                /* Transition: '<S498>:56' */
            }
            else
            {
                /* Transition: '<S498>:52' */
            }

            /* Transition: '<S498>:37' */
            /* Call Poke */
            VeLINR_y_PECP_CURR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S471>/Poke' */
            /* FunctionCaller: '<S500>/Function Caller' */
            /* Event: '<S498>:38' */
            Rte_Call_PokePMIR_I_LT_PsvPmpCrnt_PokePMIR_I_LT_PsvPmpCrnt
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_I_P, FA_out_je);

            /* End of Outputs for SubSystem: '<S471>/Poke' */
        }
    }

    /* End of Chart: '<S494>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP_DBLK_ACTV_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP_DBLK_ACTV_ErrSts'
     */
    /* Transition: '<S498>:19' */
    rtb_TmpSignalConversionAtVeL_fn =
        Rte_Read_VeLINR_e_PECP_DBLK_ACTV_VeLINR_e_PECP_DBLK_ACTV
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_a);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP_DBLK_ACTV_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S505>:1' */
    (void)Rte_Read_VeLINR_b_PECP_DBLK_ACTV_TO_VeLINR_b_PECP_DBLK_ACTV_TO
        (&FA_out_k1);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S501>/Chart' */
    if (FA_out_k1)
    {
        /* Transition: '<S505>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S505>:6' */
            /* Transition: '<S505>:25' */
            /* Call Fsft */
            VeLINR_y_PECP_DBLK_ACTV_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S472>/Fsft' */
            /* FunctionCaller: '<S506>/Function Caller' */
            /* Event: '<S505>:39' */
            Rte_Call_FsftPMIR_b_LTPsvPumpDeblock_FsftPMIR_b_LTPsvPumpDeblock();

            /* End of Outputs for SubSystem: '<S472>/Fsft' */
            /* Transition: '<S505>:29' */
        }
        else
        {
            /* Transition: '<S505>:30' */
            /* Call Tmot */
            VeLINR_y_PECP_DBLK_ACTV_CallStatus = 3U;

            /* Event: '<S505>:40' */
        }

        /* Transition: '<S505>:36' */
        /* Transition: '<S505>:23' */
    }
    else
    {
        /* Transition: '<S505>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_fn) == 133)
        {
            /* Transition: '<S505>:33' */
            /* Transition: '<S505>:35' */
            /* Call Nothing */
            VeLINR_y_PECP_DBLK_ACTV_CallStatus = 4U;

            /* Transition: '<S505>:23' */
        }
        else
        {
            /* Transition: '<S505>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_fn) == 1)
            {
                /* Transition: '<S505>:48' */
                /* Transition: '<S505>:53' */
                FA_out_k1 = true;

                /* Transition: '<S505>:56' */
            }
            else
            {
                /* Transition: '<S505>:52' */
            }

            /* Transition: '<S505>:37' */
            /* Call Poke */
            VeLINR_y_PECP_DBLK_ACTV_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S472>/Poke' */
            /* FunctionCaller: '<S507>/Function Caller' */
            /* Event: '<S505>:38' */
            Rte_Call_PokePMIR_e_LTPsvPumpDeblock_PokePMIR_e_LTPsvPumpDeblock
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_a, FA_out_k1);

            /* End of Outputs for SubSystem: '<S472>/Poke' */
        }
    }

    /* End of Chart: '<S501>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP_DR_RN_ERR_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP_DR_RN_ERR_ErrSts'
     */
    /* Transition: '<S505>:19' */
    rtb_TmpSignalConversionAtVeL_hh =
        Rte_Read_VeLINR_e_PECP_DR_RN_ERR_VeLINR_e_PECP_DR_RN_ERR
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__ao);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP_DR_RN_ERR_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S512>:1' */
    (void)Rte_Read_VeLINR_b_PECP_DR_RN_ERR_TO_VeLINR_b_PECP_DR_RN_ERR_TO
        (&FA_out_j2);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S508>/Chart' */
    if (FA_out_j2)
    {
        /* Transition: '<S512>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S512>:6' */
            /* Transition: '<S512>:25' */
            /* Call Fsft */
            VeLINR_y_PECP_DR_RN_ERR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S473>/Fsft' */
            /* FunctionCaller: '<S513>/Function Caller' */
            /* Event: '<S512>:39' */
            Rte_Call_FsftPMIR_b_LTPsvPumpDryRun_FsftPMIR_b_LTPsvPumpDryRun();

            /* End of Outputs for SubSystem: '<S473>/Fsft' */
            /* Transition: '<S512>:29' */
        }
        else
        {
            /* Transition: '<S512>:30' */
            /* Call Tmot */
            VeLINR_y_PECP_DR_RN_ERR_CallStatus = 3U;

            /* Event: '<S512>:40' */
        }

        /* Transition: '<S512>:36' */
        /* Transition: '<S512>:23' */
    }
    else
    {
        /* Transition: '<S512>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_hh) == 133)
        {
            /* Transition: '<S512>:33' */
            /* Transition: '<S512>:35' */
            /* Call Nothing */
            VeLINR_y_PECP_DR_RN_ERR_CallStatus = 4U;

            /* Transition: '<S512>:23' */
        }
        else
        {
            /* Transition: '<S512>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_hh) == 1)
            {
                /* Transition: '<S512>:48' */
                /* Transition: '<S512>:53' */
                FA_out_j2 = true;

                /* Transition: '<S512>:56' */
            }
            else
            {
                /* Transition: '<S512>:52' */
            }

            /* Transition: '<S512>:37' */
            /* Call Poke */
            VeLINR_y_PECP_DR_RN_ERR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S473>/Poke' */
            /* FunctionCaller: '<S514>/Function Caller' */
            /* Event: '<S512>:38' */
            Rte_Call_PokePMIR_e_LTPsvPumpDryRun_PokePMIR_e_LTPsvPumpDryRun
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__ao, FA_out_j2);

            /* End of Outputs for SubSystem: '<S473>/Poke' */
        }
    }

    /* End of Chart: '<S508>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP_FL_SAFE_ACTVTD_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP_FL_SAFE_ACTVTD_ErrSts'
     */
    /* Transition: '<S512>:19' */
    rtb_TmpSignalConversionAtVeL_bo =
        Rte_Read_VeLINR_e_PECP_FL_SAFE_ACTVTD_VeLINR_e_PECP_FL_SAFE_ACTVTD
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__il);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP_FL_SAFE_ACTVTD_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S519>:1' */
    (void)
        Rte_Read_VeLINR_b_PECP_FL_SAFE_ACTVTD_TO_VeLINR_b_PECP_FL_SAFE_ACTVTD_TO
        (&FA_out_br);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S515>/Chart' */
    if (FA_out_br)
    {
        /* Transition: '<S519>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S519>:6' */
            /* Transition: '<S519>:25' */
            /* Call Fsft */
            VeLINR_y_PECP_FL_SAFE_ACTVTD_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S474>/Fsft' */
            /* FunctionCaller: '<S520>/Function Caller' */
            /* Event: '<S519>:39' */
            Rte_Call_FsftPMIR_b_LTPsvPumpFailsafe_FsftPMIR_b_LTPsvPumpFailsafe();

            /* End of Outputs for SubSystem: '<S474>/Fsft' */
            /* Transition: '<S519>:29' */
        }
        else
        {
            /* Transition: '<S519>:30' */
            /* Call Tmot */
            VeLINR_y_PECP_FL_SAFE_ACTVTD_CallStatus = 3U;

            /* Event: '<S519>:40' */
        }

        /* Transition: '<S519>:36' */
        /* Transition: '<S519>:23' */
    }
    else
    {
        /* Transition: '<S519>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_bo) == 133)
        {
            /* Transition: '<S519>:33' */
            /* Transition: '<S519>:35' */
            /* Call Nothing */
            VeLINR_y_PECP_FL_SAFE_ACTVTD_CallStatus = 4U;

            /* Transition: '<S519>:23' */
        }
        else
        {
            /* Transition: '<S519>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_bo) == 1)
            {
                /* Transition: '<S519>:48' */
                /* Transition: '<S519>:53' */
                FA_out_br = true;

                /* Transition: '<S519>:56' */
            }
            else
            {
                /* Transition: '<S519>:52' */
            }

            /* Transition: '<S519>:37' */
            /* Call Poke */
            VeLINR_y_PECP_FL_SAFE_ACTVTD_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S474>/Poke' */
            /* FunctionCaller: '<S521>/Function Caller' */
            /* Event: '<S519>:38' */
            Rte_Call_PokePMIR_e_LTPsvPumpFailsafe_PokePMIR_e_LTPsvPumpFailsafe
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__il, FA_out_br);

            /* End of Outputs for SubSystem: '<S474>/Poke' */
        }
    }

    /* End of Chart: '<S515>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP_LMP_HM_AN_ON_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP_LMP_HM_AN_ON_ErrSts'
     */
    /* Transition: '<S519>:19' */
    rtb_TmpSignalConversionAtVeL_cg =
        Rte_Read_VeLINR_e_PECP_LMP_HM_AN_ON_VeLINR_e_PECP_LMP_HM_AN_ON
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_g);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP_LMP_HM_AN_ON_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S526>:1' */
    (void)Rte_Read_VeLINR_b_PECP_LMP_HM_AN_ON_TO_VeLINR_b_PECP_LMP_HM_AN_ON_TO
        (&FA_out_me);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S522>/Chart' */
    if (FA_out_me)
    {
        /* Transition: '<S526>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S526>:6' */
            /* Transition: '<S526>:25' */
            /* Call Fsft */
            VeLINR_y_PECP_LMP_HM_AN_ON_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S475>/Fsft' */
            /* FunctionCaller: '<S527>/Function Caller' */
            /* Event: '<S526>:39' */
            Rte_Call_FsftPMIR_b_LTPsvPump_LmpHM_FsftPMIR_b_LTPsvPump_LmpHM();

            /* End of Outputs for SubSystem: '<S475>/Fsft' */
            /* Transition: '<S526>:29' */
        }
        else
        {
            /* Transition: '<S526>:30' */
            /* Call Tmot */
            VeLINR_y_PECP_LMP_HM_AN_ON_CallStatus = 3U;

            /* Event: '<S526>:40' */
        }

        /* Transition: '<S526>:36' */
        /* Transition: '<S526>:23' */
    }
    else
    {
        /* Transition: '<S526>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_cg) == 133)
        {
            /* Transition: '<S526>:33' */
            /* Transition: '<S526>:35' */
            /* Call Nothing */
            VeLINR_y_PECP_LMP_HM_AN_ON_CallStatus = 4U;

            /* Transition: '<S526>:23' */
        }
        else
        {
            /* Transition: '<S526>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_cg) == 1)
            {
                /* Transition: '<S526>:48' */
                /* Transition: '<S526>:53' */
                FA_out_me = true;

                /* Transition: '<S526>:56' */
            }
            else
            {
                /* Transition: '<S526>:52' */
            }

            /* Transition: '<S526>:37' */
            /* Call Poke */
            VeLINR_y_PECP_LMP_HM_AN_ON_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S475>/Poke' */
            /* FunctionCaller: '<S528>/Function Caller' */
            /* Event: '<S526>:38' */
            Rte_Call_PokePMIR_e_LTPsvPump_LmpHM_PokePMIR_e_LTPsvPump_LmpHM
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_g, FA_out_me);

            /* End of Outputs for SubSystem: '<S475>/Poke' */
        }
    }

    /* End of Chart: '<S522>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP_MONTRNG_RPM_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP_MONTRNG_RPM_ErrSts'
     */
    /* Transition: '<S526>:19' */
    rtb_TmpSignalConversionAtVeL_eu =
        Rte_Read_VeLINR_e_PECP_MONTRNG_RPM_VeLINR_e_PECP_MONTRNG_RPM
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_o);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP_MONTRNG_RPM_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S533>:1' */
    (void)Rte_Read_VeLINR_b_PECP_MONTRNG_RPM_TO_VeLINR_b_PECP_MONTRNG_RPM_TO
        (&FA_out_kfi);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S529>/Chart' */
    if (FA_out_kfi)
    {
        /* Transition: '<S533>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S533>:6' */
            /* Transition: '<S533>:25' */
            /* Call Fsft */
            VeLINR_y_PECP_MONTRNG_RPM_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S476>/Fsft' */
            /* FunctionCaller: '<S534>/Function Caller' */
            /* Event: '<S533>:39' */
            Rte_Call_FsftPMIR_b_LTPsvPumpMntrRPM_FsftPMIR_b_LTPsvPumpMntrRPM();

            /* End of Outputs for SubSystem: '<S476>/Fsft' */
            /* Transition: '<S533>:29' */
        }
        else
        {
            /* Transition: '<S533>:30' */
            /* Call Tmot */
            VeLINR_y_PECP_MONTRNG_RPM_CallStatus = 3U;

            /* Event: '<S533>:40' */
        }

        /* Transition: '<S533>:36' */
        /* Transition: '<S533>:23' */
    }
    else
    {
        /* Transition: '<S533>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_eu) == 133)
        {
            /* Transition: '<S533>:33' */
            /* Transition: '<S533>:35' */
            /* Call Nothing */
            VeLINR_y_PECP_MONTRNG_RPM_CallStatus = 4U;

            /* Transition: '<S533>:23' */
        }
        else
        {
            /* Transition: '<S533>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_eu) == 1)
            {
                /* Transition: '<S533>:48' */
                /* Transition: '<S533>:53' */
                FA_out_kfi = true;

                /* Transition: '<S533>:56' */
            }
            else
            {
                /* Transition: '<S533>:52' */
            }

            /* Transition: '<S533>:37' */
            /* Call Poke */
            VeLINR_y_PECP_MONTRNG_RPM_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S476>/Poke' */
            /* FunctionCaller: '<S535>/Function Caller' */
            /* Event: '<S533>:38' */
            Rte_Call_PokePMIR_e_LTPsvPumpMntrRPM_PokePMIR_e_LTPsvPumpMntrRPM
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_o, FA_out_kfi);

            /* End of Outputs for SubSystem: '<S476>/Poke' */
        }
    }

    /* End of Chart: '<S529>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP_NODE_ERR_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP_NODE_ERR_ErrSts'
     */
    /* Transition: '<S533>:19' */
    rtb_TmpSignalConversionAtVeL_b0 =
        Rte_Read_VeLINR_e_PECP_NODE_ERR_VeLINR_e_PECP_NODE_ERR
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__ox);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP_NODE_ERR_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S540>:1' */
    (void)Rte_Read_VeLINR_b_PECP_NODE_ERR_TO_VeLINR_b_PECP_NODE_ERR_TO
        (&FA_out_au);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S536>/Chart' */
    if (FA_out_au)
    {
        /* Transition: '<S540>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S540>:6' */
            /* Transition: '<S540>:25' */
            /* Call Fsft */
            VeLINR_y_PECP_NODE_ERR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S477>/Fsft' */
            /* FunctionCaller: '<S541>/Function Caller' */
            /* Event: '<S540>:39' */
            Rte_Call_FsftPMIR_b_LTPsvPumpNodeErr_FsftPMIR_b_LTPsvPumpNodeErr();

            /* End of Outputs for SubSystem: '<S477>/Fsft' */
            /* Transition: '<S540>:29' */
        }
        else
        {
            /* Transition: '<S540>:30' */
            /* Call Tmot */
            VeLINR_y_PECP_NODE_ERR_CallStatus = 3U;

            /* Event: '<S540>:40' */
        }

        /* Transition: '<S540>:36' */
        /* Transition: '<S540>:23' */
    }
    else
    {
        /* Transition: '<S540>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_b0) == 133)
        {
            /* Transition: '<S540>:33' */
            /* Transition: '<S540>:35' */
            /* Call Nothing */
            VeLINR_y_PECP_NODE_ERR_CallStatus = 4U;

            /* Transition: '<S540>:23' */
        }
        else
        {
            /* Transition: '<S540>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_b0) == 1)
            {
                /* Transition: '<S540>:48' */
                /* Transition: '<S540>:53' */
                FA_out_au = true;

                /* Transition: '<S540>:56' */
            }
            else
            {
                /* Transition: '<S540>:52' */
            }

            /* Transition: '<S540>:37' */
            /* Call Poke */
            VeLINR_y_PECP_NODE_ERR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S477>/Poke' */
            /* FunctionCaller: '<S542>/Function Caller' */
            /* Event: '<S540>:38' */
            Rte_Call_PokePMIR_e_LTPsvPumpNodeErr_PokePMIR_e_LTPsvPumpNodeErr
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__ox, FA_out_au);

            /* End of Outputs for SubSystem: '<S477>/Poke' */
        }
    }

    /* End of Chart: '<S536>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP_OVR_CUR_ERR_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP_OVR_CUR_ERR_ErrSts'
     */
    /* Transition: '<S540>:19' */
    rtb_TmpSignalConversionAtVeL_es =
        Rte_Read_VeLINR_e_PECP_OVR_CUR_ERR_VeLINR_e_PECP_OVR_CUR_ERR
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__gw);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP_OVR_CUR_ERR_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S547>:1' */
    (void)Rte_Read_VeLINR_b_PECP_OVR_CUR_ERR_TO_VeLINR_b_PECP_OVR_CUR_ERR_TO
        (&FA_out_cg);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S543>/Chart' */
    if (FA_out_cg)
    {
        /* Transition: '<S547>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S547>:6' */
            /* Transition: '<S547>:25' */
            /* Call Fsft */
            VeLINR_y_PECP_OVR_CUR_ERR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S478>/Fsft' */
            /* FunctionCaller: '<S548>/Function Caller' */
            /* Event: '<S547>:39' */
            Rte_Call_FsftPMIR_b_LTPsvPumpOvrCrnt_FsftPMIR_b_LTPsvPumpOvrCrnt();

            /* End of Outputs for SubSystem: '<S478>/Fsft' */
            /* Transition: '<S547>:29' */
        }
        else
        {
            /* Transition: '<S547>:30' */
            /* Call Tmot */
            VeLINR_y_PECP_OVR_CUR_ERR_CallStatus = 3U;

            /* Event: '<S547>:40' */
        }

        /* Transition: '<S547>:36' */
        /* Transition: '<S547>:23' */
    }
    else
    {
        /* Transition: '<S547>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_es) == 133)
        {
            /* Transition: '<S547>:33' */
            /* Transition: '<S547>:35' */
            /* Call Nothing */
            VeLINR_y_PECP_OVR_CUR_ERR_CallStatus = 4U;

            /* Transition: '<S547>:23' */
        }
        else
        {
            /* Transition: '<S547>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_es) == 1)
            {
                /* Transition: '<S547>:48' */
                /* Transition: '<S547>:53' */
                FA_out_cg = true;

                /* Transition: '<S547>:56' */
            }
            else
            {
                /* Transition: '<S547>:52' */
            }

            /* Transition: '<S547>:37' */
            /* Call Poke */
            VeLINR_y_PECP_OVR_CUR_ERR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S478>/Poke' */
            /* FunctionCaller: '<S549>/Function Caller' */
            /* Event: '<S547>:38' */
            Rte_Call_PokePMIR_e_LTPsvPumpOvrCrnt_PokePMIR_e_LTPsvPumpOvrCrnt
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__gw, FA_out_cg);

            /* End of Outputs for SubSystem: '<S478>/Poke' */
        }
    }

    /* End of Chart: '<S543>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP_OVR_TMP_ERR_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP_OVR_TMP_ERR_ErrSts'
     */
    /* Transition: '<S547>:19' */
    rtb_TmpSignalConversionAtVeL_ka =
        Rte_Read_VeLINR_e_PECP_OVR_TMP_ERR_VeLINR_e_PECP_OVR_TMP_ERR
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__mi);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP_OVR_TMP_ERR_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S554>:1' */
    (void)Rte_Read_VeLINR_b_PECP_OVR_TMP_ERR_TO_VeLINR_b_PECP_OVR_TMP_ERR_TO
        (&FA_out_fw);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S550>/Chart' */
    if (FA_out_fw)
    {
        /* Transition: '<S554>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S554>:6' */
            /* Transition: '<S554>:25' */
            /* Call Fsft */
            VeLINR_y_PECP_OVR_TMP_ERR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S479>/Fsft' */
            /* FunctionCaller: '<S555>/Function Caller' */
            /* Event: '<S554>:39' */
            Rte_Call_FsftPMIR_b_LT_PsvPmpOT_FsftPMIR_b_LT_PsvPmpOT();

            /* End of Outputs for SubSystem: '<S479>/Fsft' */
            /* Transition: '<S554>:29' */
        }
        else
        {
            /* Transition: '<S554>:30' */
            /* Call Tmot */
            VeLINR_y_PECP_OVR_TMP_ERR_CallStatus = 3U;

            /* Event: '<S554>:40' */
        }

        /* Transition: '<S554>:36' */
        /* Transition: '<S554>:23' */
    }
    else
    {
        /* Transition: '<S554>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_ka) == 133)
        {
            /* Transition: '<S554>:33' */
            /* Transition: '<S554>:35' */
            /* Call Nothing */
            VeLINR_y_PECP_OVR_TMP_ERR_CallStatus = 4U;

            /* Transition: '<S554>:23' */
        }
        else
        {
            /* Transition: '<S554>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_ka) == 1)
            {
                /* Transition: '<S554>:48' */
                /* Transition: '<S554>:53' */
                FA_out_fw = true;

                /* Transition: '<S554>:56' */
            }
            else
            {
                /* Transition: '<S554>:52' */
            }

            /* Transition: '<S554>:37' */
            /* Call Poke */
            VeLINR_y_PECP_OVR_TMP_ERR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S479>/Poke' */
            /* FunctionCaller: '<S556>/Function Caller' */
            /* Event: '<S554>:38' */
            Rte_Call_PokePMIR_e_LT_PsvPmpOT_PokePMIR_e_LT_PsvPmpOT
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__mi, FA_out_fw);

            /* End of Outputs for SubSystem: '<S479>/Poke' */
        }
    }

    /* End of Chart: '<S550>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP_POST_RUN_STAT_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP_POST_RUN_STAT_ErrSts'
     */
    /* Transition: '<S554>:19' */
    rtb_TmpSignalConversionAtVeL_hl =
        Rte_Read_VeLINR_e_PECP_POST_RUN_STAT_VeLINR_e_PECP_POST_RUN_STAT
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__ft);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP_POST_RUN_STAT_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S561>:1' */
    (void)Rte_Read_VeLINR_b_PECP_POST_RUN_STAT_TO_VeLINR_b_PECP_POST_RUN_STAT_TO
        (&FA_out_bb);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S557>/Chart' */
    if (FA_out_bb)
    {
        /* Transition: '<S561>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S561>:6' */
            /* Transition: '<S561>:25' */
            /* Call Fsft */
            VeLINR_y_PECP_POST_RUN_STAT_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S480>/Fsft' */
            /* FunctionCaller: '<S562>/Function Caller' */
            /* Event: '<S561>:39' */
            Rte_Call_FsftPMPR_e_LTPsvPump_PstRnSt_FsftPMPR_e_LTPsvPump_PstRnSt();

            /* End of Outputs for SubSystem: '<S480>/Fsft' */
            /* Transition: '<S561>:29' */
        }
        else
        {
            /* Transition: '<S561>:30' */
            /* Call Tmot */
            VeLINR_y_PECP_POST_RUN_STAT_CallStatus = 3U;

            /* Event: '<S561>:40' */
        }

        /* Transition: '<S561>:36' */
        /* Transition: '<S561>:23' */
    }
    else
    {
        /* Transition: '<S561>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_hl) == 133)
        {
            /* Transition: '<S561>:33' */
            /* Transition: '<S561>:35' */
            /* Call Nothing */
            VeLINR_y_PECP_POST_RUN_STAT_CallStatus = 4U;

            /* Transition: '<S561>:23' */
        }
        else
        {
            /* Transition: '<S561>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_hl) == 1)
            {
                /* Transition: '<S561>:48' */
                /* Transition: '<S561>:53' */
                FA_out_bb = true;

                /* Transition: '<S561>:56' */
            }
            else
            {
                /* Transition: '<S561>:52' */
            }

            /* Transition: '<S561>:37' */
            /* Call Poke */
            VeLINR_y_PECP_POST_RUN_STAT_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S480>/Poke' */
            /* FunctionCaller: '<S563>/Function Caller' */
            /* Event: '<S561>:38' */
            Rte_Call_PokePMPR_e_LTPsvPump_PstRnSt_PokePMPR_e_LTPsvPump_PstRnSt
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__ft, FA_out_bb);

            /* End of Outputs for SubSystem: '<S480>/Poke' */
        }
    }

    /* End of Chart: '<S557>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP_RPM_ACTL_PERCT_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP_RPM_ACTL_PERCT_ErrSts'
     */
    /* Transition: '<S561>:19' */
    rtb_TmpSignalConversionAtVeL_ks =
        Rte_Read_VeLINR_Pct_PECP_RPM_ACTL_PERCT_VeLINR_Pct_PECP_RPM_ACTL_PERCT
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__h0);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP_RPM_ACTL_PERCT_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S568>:1' */
    (void)
        Rte_Read_VeLINR_b_PECP_RPM_ACTL_PERCT_TO_VeLINR_b_PECP_RPM_ACTL_PERCT_TO
        (&FA_out_d4);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S564>/Chart' */
    if (FA_out_d4)
    {
        /* Transition: '<S568>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S568>:6' */
            /* Transition: '<S568>:25' */
            /* Call Fsft */
            VeLINR_y_PECP_RPM_ACTL_PERCT_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S481>/Fsft' */
            /* FunctionCaller: '<S569>/Function Caller' */
            /* Event: '<S568>:39' */
            Rte_Call_FsftPMIR_b_LTPsvPumpRPMActPct_FsftPMIR_b_LTPsvPumpRPMActPct
                ();

            /* End of Outputs for SubSystem: '<S481>/Fsft' */
            /* Transition: '<S568>:29' */
        }
        else
        {
            /* Transition: '<S568>:30' */
            /* Call Tmot */
            VeLINR_y_PECP_RPM_ACTL_PERCT_CallStatus = 3U;

            /* Event: '<S568>:40' */
        }

        /* Transition: '<S568>:36' */
        /* Transition: '<S568>:23' */
    }
    else
    {
        /* Transition: '<S568>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_ks) == 133)
        {
            /* Transition: '<S568>:33' */
            /* Transition: '<S568>:35' */
            /* Call Nothing */
            VeLINR_y_PECP_RPM_ACTL_PERCT_CallStatus = 4U;

            /* Transition: '<S568>:23' */
        }
        else
        {
            /* Transition: '<S568>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_ks) == 1)
            {
                /* Transition: '<S568>:48' */
                /* Transition: '<S568>:53' */
                FA_out_d4 = true;

                /* Transition: '<S568>:56' */
            }
            else
            {
                /* Transition: '<S568>:52' */
            }

            /* Transition: '<S568>:37' */
            /* Call Poke */
            VeLINR_y_PECP_RPM_ACTL_PERCT_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S481>/Poke' */
            /* FunctionCaller: '<S570>/Function Caller' */
            /* Event: '<S568>:38' */
            Rte_Call_PokePMIR_Pct_LTPsvPumpRPMAct_PokePMIR_Pct_LTPsvPumpRPMAct
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__h0, FA_out_d4);

            /* End of Outputs for SubSystem: '<S481>/Poke' */
        }
    }

    /* End of Chart: '<S564>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP_RPM_TGT_PERCT_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP_RPM_TGT_PERCT_ErrSts'
     */
    /* Transition: '<S568>:19' */
    rtb_TmpSignalConversionAtVeL_cm =
        Rte_Read_VeLINR_Pct_PECP_RPM_TGT_PERCT_VeLINR_Pct_PECP_RPM_TGT_PERCT
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_P_k);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP_RPM_TGT_PERCT_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S575>:1' */
    (void)Rte_Read_VeLINR_b_PECP_RPM_TGT_PERCT_TO_VeLINR_b_PECP_RPM_TGT_PERCT_TO
        (&FA_out_kf);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S571>/Chart' */
    if (FA_out_kf)
    {
        /* Transition: '<S575>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S575>:6' */
            /* Transition: '<S575>:25' */
            /* Call Fsft */
            VeLINR_y_PECP_RPM_TGT_PERCT_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S482>/Fsft' */
            /* FunctionCaller: '<S576>/Function Caller' */
            /* Event: '<S575>:39' */
            Rte_Call_FsftPMIR_b_LTPsvPumpRPMTgtPct_FsftPMIR_b_LTPsvPumpRPMTgtPct
                ();

            /* End of Outputs for SubSystem: '<S482>/Fsft' */
            /* Transition: '<S575>:29' */
        }
        else
        {
            /* Transition: '<S575>:30' */
            /* Call Tmot */
            VeLINR_y_PECP_RPM_TGT_PERCT_CallStatus = 3U;

            /* Event: '<S575>:40' */
        }

        /* Transition: '<S575>:36' */
        /* Transition: '<S575>:23' */
    }
    else
    {
        /* Transition: '<S575>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_cm) == 133)
        {
            /* Transition: '<S575>:33' */
            /* Transition: '<S575>:35' */
            /* Call Nothing */
            VeLINR_y_PECP_RPM_TGT_PERCT_CallStatus = 4U;

            /* Transition: '<S575>:23' */
        }
        else
        {
            /* Transition: '<S575>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_cm) == 1)
            {
                /* Transition: '<S575>:48' */
                /* Transition: '<S575>:53' */
                FA_out_kf = true;

                /* Transition: '<S575>:56' */
            }
            else
            {
                /* Transition: '<S575>:52' */
            }

            /* Transition: '<S575>:37' */
            /* Call Poke */
            VeLINR_y_PECP_RPM_TGT_PERCT_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S482>/Poke' */
            /* FunctionCaller: '<S577>/Function Caller' */
            /* Event: '<S575>:38' */
            Rte_Call_PokePMIR_Pct_LTPsvPumpRPMTgt_PokePMIR_Pct_LTPsvPumpRPMTgt
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_P_k, FA_out_kf);

            /* End of Outputs for SubSystem: '<S482>/Poke' */
        }
    }

    /* End of Chart: '<S571>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP_TEMP_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP_TEMP_ErrSts'
     */
    /* Transition: '<S575>:19' */
    rtb_TmpSignalConversionAtVeL_km =
        Rte_Read_VeLINR_T_PECP_TEMP_VeLINR_T_PECP_TEMP
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_T_P);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP_TEMP_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S582>:1' */
    (void)Rte_Read_VeLINR_b_PECP_TEMP_TO_VeLINR_b_PECP_TEMP_TO(&FA_out_n0);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S578>/Chart' */
    if (FA_out_n0)
    {
        /* Transition: '<S582>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S582>:6' */
            /* Transition: '<S582>:25' */
            /* Call Fsft */
            VeLINR_y_PECP_TEMP_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S483>/Fsft' */
            /* FunctionCaller: '<S583>/Function Caller' */
            /* Event: '<S582>:39' */
            Rte_Call_FsftPMIR_b_LTPsvPumpTemp_FsftPMIR_b_LTPsvPumpTemp();

            /* End of Outputs for SubSystem: '<S483>/Fsft' */
            /* Transition: '<S582>:29' */
        }
        else
        {
            /* Transition: '<S582>:30' */
            /* Call Tmot */
            VeLINR_y_PECP_TEMP_CallStatus = 3U;

            /* Event: '<S582>:40' */
        }

        /* Transition: '<S582>:36' */
        /* Transition: '<S582>:23' */
    }
    else
    {
        /* Transition: '<S582>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_km) == 133)
        {
            /* Transition: '<S582>:33' */
            /* Transition: '<S582>:35' */
            /* Call Nothing */
            VeLINR_y_PECP_TEMP_CallStatus = 4U;

            /* Transition: '<S582>:23' */
        }
        else
        {
            /* Transition: '<S582>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_km) == 1)
            {
                /* Transition: '<S582>:48' */
                /* Transition: '<S582>:53' */
                FA_out_n0 = true;

                /* Transition: '<S582>:56' */
            }
            else
            {
                /* Transition: '<S582>:52' */
            }

            /* Transition: '<S582>:37' */
            /* Call Poke */
            VeLINR_y_PECP_TEMP_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S483>/Poke' */
            /* FunctionCaller: '<S584>/Function Caller' */
            /* Event: '<S582>:38' */
            Rte_Call_PokePMIR_T_LTPsvPumpTemp_PokePMIR_T_LTPsvPumpTemp
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_T_P, FA_out_n0);

            /* End of Outputs for SubSystem: '<S483>/Poke' */
        }
    }

    /* End of Chart: '<S578>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP_VLTG_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP_VLTG_ErrSts'
     */
    /* Transition: '<S582>:19' */
    rtb_TmpSignalConversionAtVeL_j3 =
        Rte_Read_VeLINR_U_PECP_VLTG_VeLINR_U_PECP_VLTG
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_U_P);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP_VLTG_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S589>:1' */
    (void)Rte_Read_VeLINR_b_PECP_VLTG_TO_VeLINR_b_PECP_VLTG_TO(&FA_out_l);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S585>/Chart' */
    if (FA_out_l)
    {
        /* Transition: '<S589>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S589>:6' */
            /* Transition: '<S589>:25' */
            /* Call Fsft */
            VeLINR_y_PECP_VLTG_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S484>/Fsft' */
            /* FunctionCaller: '<S590>/Function Caller' */
            /* Event: '<S589>:39' */
            Rte_Call_FsftPMIR_b_LT_PsvPmpVltg_FsftPMIR_b_LT_PsvPmpVltg();

            /* End of Outputs for SubSystem: '<S484>/Fsft' */
            /* Transition: '<S589>:29' */
        }
        else
        {
            /* Transition: '<S589>:30' */
            /* Call Tmot */
            VeLINR_y_PECP_VLTG_CallStatus = 3U;

            /* Event: '<S589>:40' */
        }

        /* Transition: '<S589>:36' */
        /* Transition: '<S589>:23' */
    }
    else
    {
        /* Transition: '<S589>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_j3) == 133)
        {
            /* Transition: '<S589>:33' */
            /* Transition: '<S589>:35' */
            /* Call Nothing */
            VeLINR_y_PECP_VLTG_CallStatus = 4U;

            /* Transition: '<S589>:23' */
        }
        else
        {
            /* Transition: '<S589>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_j3) == 1)
            {
                /* Transition: '<S589>:48' */
                /* Transition: '<S589>:53' */
                FA_out_l = true;

                /* Transition: '<S589>:56' */
            }
            else
            {
                /* Transition: '<S589>:52' */
            }

            /* Transition: '<S589>:37' */
            /* Call Poke */
            VeLINR_y_PECP_VLTG_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S484>/Poke' */
            /* FunctionCaller: '<S591>/Function Caller' */
            /* Event: '<S589>:38' */
            Rte_Call_PokePMIR_U_LT_PsvPmpVltg_PokePMIR_U_LT_PsvPmpVltg
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_U_P, FA_out_l);

            /* End of Outputs for SubSystem: '<S484>/Poke' */
        }
    }

    /* End of Chart: '<S585>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP_VLTG_ERR_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP_VLTG_ERR_ErrSts'
     */
    /* Transition: '<S589>:19' */
    rtb_TmpSignalConversionAtVeL_mj =
        Rte_Read_VeLINR_e_PECP_VLTG_ERR_VeLINR_e_PECP_VLTG_ERR
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__ni);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP_VLTG_ERR_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S596>:1' */
    (void)Rte_Read_VeLINR_b_PECP_VLTG_ERR_TO_VeLINR_b_PECP_VLTG_ERR_TO
        (&FA_out_n3);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S592>/Chart' */
    if (FA_out_n3)
    {
        /* Transition: '<S596>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S596>:6' */
            /* Transition: '<S596>:25' */
            /* Call Fsft */
            VeLINR_y_PECP_VLTG_ERR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S485>/Fsft' */
            /* FunctionCaller: '<S597>/Function Caller' */
            /* Event: '<S596>:39' */
            Rte_Call_FsftPMIR_b_LTPsvPumpSuppVltErr_FsftPMIR_b_LTPsvPumpSuppVltErr
                ();

            /* End of Outputs for SubSystem: '<S485>/Fsft' */
            /* Transition: '<S596>:29' */
        }
        else
        {
            /* Transition: '<S596>:30' */
            /* Call Tmot */
            VeLINR_y_PECP_VLTG_ERR_CallStatus = 3U;

            /* Event: '<S596>:40' */
        }

        /* Transition: '<S596>:36' */
        /* Transition: '<S596>:23' */
    }
    else
    {
        /* Transition: '<S596>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_mj) == 133)
        {
            /* Transition: '<S596>:33' */
            /* Transition: '<S596>:35' */
            /* Call Nothing */
            VeLINR_y_PECP_VLTG_ERR_CallStatus = 4U;

            /* Transition: '<S596>:23' */
        }
        else
        {
            /* Transition: '<S596>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_mj) == 1)
            {
                /* Transition: '<S596>:48' */
                /* Transition: '<S596>:53' */
                FA_out_n3 = true;

                /* Transition: '<S596>:56' */
            }
            else
            {
                /* Transition: '<S596>:52' */
            }

            /* Transition: '<S596>:37' */
            /* Call Poke */
            VeLINR_y_PECP_VLTG_ERR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S485>/Poke' */
            /* FunctionCaller: '<S598>/Function Caller' */
            /* Event: '<S596>:38' */
            Rte_Call_PokePMIR_e_LTPsvPumpSuppVltErr_PokePMIR_e_LTPsvPumpSuppVltErr
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__ni, FA_out_n3);

            /* End of Outputs for SubSystem: '<S485>/Poke' */
        }
    }

    /* End of Chart: '<S592>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_RsErr_PECP_PUMP_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_RsErr_PECP_PUMP_ErrSts'
     */
    /* Transition: '<S596>:19' */
    rtb_TmpSignalConversionAtVeL_do =
        Rte_Read_VeLINR_b_RsErr_PECP_PUMP_VeLINR_b_RsErr_PECP_PUMP
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_o);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_RsErr_PECP_PUMP_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S602>:1' */
    (void)Rte_Read_VeLINR_b_RsErr_PECP_PUMP_TO_VeLINR_b_RsErr_PECP_PUMP_TO
        (&FA_out_j);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S599>/Chart' */
    if (FA_out_j)
    {
        /* Transition: '<S602>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S602>:6' */
            /* Transition: '<S602>:25' */
            /* Call Fsft */
            VeLINR_y_RsErr_PECP_PUMP_CallStatus = 2U;

            /* Event: '<S602>:39' */
            /* Transition: '<S602>:29' */
        }
        else
        {
            /* Transition: '<S602>:30' */
            /* Call Tmot */
            VeLINR_y_RsErr_PECP_PUMP_CallStatus = 3U;

            /* Event: '<S602>:40' */
        }

        /* Transition: '<S602>:36' */
        /* Transition: '<S602>:23' */
    }
    else
    {
        /* Transition: '<S602>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_do) == 133)
        {
            /* Transition: '<S602>:33' */
            /* Transition: '<S602>:35' */
            /* Call Nothing */
            VeLINR_y_RsErr_PECP_PUMP_CallStatus = 4U;

            /* Transition: '<S602>:23' */
        }
        else
        {
            /* Transition: '<S602>:46' */
            /* Transition: '<S602>:37' */
            /* Call Poke */
            VeLINR_y_RsErr_PECP_PUMP_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S486>/Poke' */
            /* FunctionCaller: '<S603>/Function Caller' */
            /* Event: '<S602>:38' */
            Rte_Call_PokePMIR_b_LTPsvPumpRespErr_PokePMIR_b_LTPsvPumpRespErr
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_o);

            /* End of Outputs for SubSystem: '<S486>/Poke' */
        }
    }

    /* End of Chart: '<S599>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP_SUPPLIER_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP_SUPPLIER_ErrSts'
     */
    /* Transition: '<S602>:19' */
    rtb_TmpSignalConversionAtVeL_kg =
        Rte_Read_VeLINR_e_PECP_SUPPLIER_VeLINR_e_PECP_SUPPLIER
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__hn);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP_SUPPLIER_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S609>:1' */
    (void)Rte_Read_VeLINR_b_PECP_SUPPLIER_TO_VeLINR_b_PECP_SUPPLIER_TO
        (&tmpRead_j);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S606>/Chart' */
    if (tmpRead_j)
    {
        /* Transition: '<S609>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S609>:6' */
            /* Transition: '<S609>:25' */
            /* Call Fsft */
            VeLINR_y_PECP_SUPPLIER_CallStatus = 2U;

            /* Event: '<S609>:39' */
            /* Transition: '<S609>:29' */
        }
        else
        {
            /* Transition: '<S609>:30' */
            /* Call Tmot */
            VeLINR_y_PECP_SUPPLIER_CallStatus = 3U;

            /* Event: '<S609>:40' */
        }

        /* Transition: '<S609>:36' */
        /* Transition: '<S609>:23' */
    }
    else
    {
        /* Transition: '<S609>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_kg) == 133)
        {
            /* Transition: '<S609>:33' */
            /* Transition: '<S609>:35' */
            /* Call Nothing */
            VeLINR_y_PECP_SUPPLIER_CallStatus = 4U;

            /* Transition: '<S609>:23' */
        }
        else
        {
            /* Transition: '<S609>:46' */
            /* Transition: '<S609>:37' */
            /* Call Poke */
            VeLINR_y_PECP_SUPPLIER_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S604>/Poke' */
            /* FunctionCaller: '<S610>/Function Caller' */
            /* Event: '<S609>:38' */
            Rte_Call_PokePMIR_e_LTPsvPmpProdSuplr_ID_PokePMIR_e_LTPsvPmpProdSuplr_ID
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__hn);

            /* End of Outputs for SubSystem: '<S604>/Poke' */
        }
    }

    /* End of Chart: '<S606>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PECP_VERSION_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PECP_VERSION_ErrSts'
     */
    /* Transition: '<S609>:19' */
    rtb_TmpSignalConversionAtVeL_lh =
        Rte_Read_VeLINR_y_PECP_VERSION_VeLINR_y_PECP_VERSION
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_y_P);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PECP_VERSION_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S614>:1' */
    (void)Rte_Read_VeLINR_b_PECP_VERSION_TO_VeLINR_b_PECP_VERSION_TO(&tmpRead_k);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S611>/Chart' */
    if (tmpRead_k)
    {
        /* Transition: '<S614>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S614>:6' */
            /* Transition: '<S614>:25' */
            /* Call Fsft */
            VeLINR_y_PECP_VERSION_CallStatus = 2U;

            /* Event: '<S614>:39' */
            /* Transition: '<S614>:29' */
        }
        else
        {
            /* Transition: '<S614>:30' */
            /* Call Tmot */
            VeLINR_y_PECP_VERSION_CallStatus = 3U;

            /* Event: '<S614>:40' */
        }

        /* Transition: '<S614>:36' */
        /* Transition: '<S614>:23' */
    }
    else
    {
        /* Transition: '<S614>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_lh) == 133)
        {
            /* Transition: '<S614>:33' */
            /* Transition: '<S614>:35' */
            /* Call Nothing */
            VeLINR_y_PECP_VERSION_CallStatus = 4U;

            /* Transition: '<S614>:23' */
        }
        else
        {
            /* Transition: '<S614>:46' */
            /* Transition: '<S614>:37' */
            /* Call Poke */
            VeLINR_y_PECP_VERSION_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S605>/Poke' */
            /* DataTypeConversion: '<S615>/Data Type Conversion' */
            /* Event: '<S614>:38' */
            tmp = fmodf(floorf(LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_y_P),
                        256.0F);

            /* FunctionCaller: '<S615>/Function Caller' incorporates:
             *  DataTypeConversion: '<S615>/Data Type Conversion'
             */
            Rte_Call_PokePMIR_y_LTPsvPump_Ver_PokePMIR_y_LTPsvPump_Ver((uint8)
                ((tmp < 0.0F) ? ((sint32)((uint8)((sint32)(-((sint32)((sint8)
                ((uint8)((float32)(-tmp))))))))) : ((sint32)((uint8)tmp))));

            /* End of Outputs for SubSystem: '<S605>/Poke' */
        }
    }

    /* End of Chart: '<S611>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PwrPanelAC_PresntSens1_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PwrPanelAC_PresntSens1_ErrSts'
     */
    /* Transition: '<S614>:19' */
    rtb_TmpSignalConversionAtVeL_e1 =
        Rte_Read_VeLINR_b_PwrPanelAC_PresntSens1_VeLINR_b_PwrPanelAC_PresntSens1
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_P);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PwrPanelAC_PresntSens1TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S645>:1' */
    (void)
        Rte_Read_VeLINR_b_PwrPanelAC_PresntSens1TO_VeLINR_b_PwrPanelAC_PresntSens1TO
        (&tmpRead_l);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S641>/Chart' */
    if (tmpRead_l)
    {
        /* Transition: '<S645>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S645>:6' */
            /* Transition: '<S645>:25' */
            /* Call Fsft */
            VeLINR_y_PwrPanelAC_PresntSens1_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S616>/Fsft' */
            /* FunctionCaller: '<S646>/Function Caller' */
            /* Event: '<S645>:39' */
            Rte_Call_FsftCITR_b_PPACPresentSens1_FsftCITR_b_PPACPresentSens1();

            /* End of Outputs for SubSystem: '<S616>/Fsft' */
            /* Transition: '<S645>:29' */
        }
        else
        {
            /* Transition: '<S645>:30' */
            /* Call Tmot */
            VeLINR_y_PwrPanelAC_PresntSens1_CallStatus = 3U;

            /* Event: '<S645>:40' */
        }

        /* Transition: '<S645>:36' */
        /* Transition: '<S645>:23' */
    }
    else
    {
        /* Transition: '<S645>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_e1) == 133)
        {
            /* Transition: '<S645>:33' */
            /* Transition: '<S645>:35' */
            /* Call Nothing */
            VeLINR_y_PwrPanelAC_PresntSens1_CallStatus = 4U;

            /* Transition: '<S645>:23' */
        }
        else
        {
            /* Transition: '<S645>:46' */
            /* Transition: '<S645>:37' */
            /* Call Poke */
            VeLINR_y_PwrPanelAC_PresntSens1_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S616>/Poke' */
            /* FunctionCaller: '<S647>/Function Caller' incorporates:
             *  Constant: '<S647>/Constant'
             */
            /* Event: '<S645>:38' */
            Rte_Call_PokeCITR_b_PPACPresentSens1_PokeCITR_b_PPACPresentSens1
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_P, false);

            /* End of Outputs for SubSystem: '<S616>/Poke' */
        }
    }

    /* End of Chart: '<S641>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PwrPanelAC_PresntSens2_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PwrPanelAC_PresntSens2_ErrSts'
     */
    /* Transition: '<S645>:19' */
    rtb_TmpSignalConversionAtVeL_il =
        Rte_Read_VeLINR_b_PwrPanelAC_PresntSens2_VeLINR_b_PwrPanelAC_PresntSens2
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__ch);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PwrPanelAC_PresntSens2TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S652>:1' */
    (void)
        Rte_Read_VeLINR_b_PwrPanelAC_PresntSens2TO_VeLINR_b_PwrPanelAC_PresntSens2TO
        (&tmpRead_m);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S648>/Chart' */
    if (tmpRead_m)
    {
        /* Transition: '<S652>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S652>:6' */
            /* Transition: '<S652>:25' */
            /* Call Fsft */
            VeLINR_y_PwrPanelAC_PresntSens2_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S617>/Fsft' */
            /* FunctionCaller: '<S653>/Function Caller' */
            /* Event: '<S652>:39' */
            Rte_Call_FsftCITR_b_PPACPresentSens2_FsftCITR_b_PPACPresentSens2();

            /* End of Outputs for SubSystem: '<S617>/Fsft' */
            /* Transition: '<S652>:29' */
        }
        else
        {
            /* Transition: '<S652>:30' */
            /* Call Tmot */
            VeLINR_y_PwrPanelAC_PresntSens2_CallStatus = 3U;

            /* Event: '<S652>:40' */
        }

        /* Transition: '<S652>:36' */
        /* Transition: '<S652>:23' */
    }
    else
    {
        /* Transition: '<S652>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_il) == 133)
        {
            /* Transition: '<S652>:33' */
            /* Transition: '<S652>:35' */
            /* Call Nothing */
            VeLINR_y_PwrPanelAC_PresntSens2_CallStatus = 4U;

            /* Transition: '<S652>:23' */
        }
        else
        {
            /* Transition: '<S652>:46' */
            /* Transition: '<S652>:37' */
            /* Call Poke */
            VeLINR_y_PwrPanelAC_PresntSens2_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S617>/Poke' */
            /* FunctionCaller: '<S654>/Function Caller' incorporates:
             *  Constant: '<S654>/Constant'
             */
            /* Event: '<S652>:38' */
            Rte_Call_PokeCITR_b_PPACPresentSens2_PokeCITR_b_PPACPresentSens2
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__ch, false);

            /* End of Outputs for SubSystem: '<S617>/Poke' */
        }
    }

    /* End of Chart: '<S648>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PowerPanelButton_State_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PowerPanelButton_State_ErrSts'
     */
    /* Transition: '<S652>:19' */
    rtb_TmpSignalConversionAtVeL_mt =
        Rte_Read_VeLINR_b_PowerPanelButton_State_VeLINR_b_PowerPanelButton_State
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__cx);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PowerPanelButton_StateTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S659>:1' */
    (void)
        Rte_Read_VeLINR_b_PowerPanelButton_StateTO_VeLINR_b_PowerPanelButton_StateTO
        (&tmpRead_n);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S655>/Chart' */
    if (tmpRead_n)
    {
        /* Transition: '<S659>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S659>:6' */
            /* Transition: '<S659>:25' */
            /* Call Fsft */
            VeLINR_y_PowerPanelButton_State_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S618>/Fsft' */
            /* FunctionCaller: '<S660>/Function Caller' */
            /* Event: '<S659>:39' */
            Rte_Call_FsftCITR_b_PPButtonSts_FsftCITR_b_PPButtonSts();

            /* End of Outputs for SubSystem: '<S618>/Fsft' */
            /* Transition: '<S659>:29' */
        }
        else
        {
            /* Transition: '<S659>:30' */
            /* Call Tmot */
            VeLINR_y_PowerPanelButton_State_CallStatus = 3U;

            /* Event: '<S659>:40' */
        }

        /* Transition: '<S659>:36' */
        /* Transition: '<S659>:23' */
    }
    else
    {
        /* Transition: '<S659>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_mt) == 133)
        {
            /* Transition: '<S659>:33' */
            /* Transition: '<S659>:35' */
            /* Call Nothing */
            VeLINR_y_PowerPanelButton_State_CallStatus = 4U;

            /* Transition: '<S659>:23' */
        }
        else
        {
            /* Transition: '<S659>:46' */
            /* Transition: '<S659>:37' */
            /* Call Poke */
            VeLINR_y_PowerPanelButton_State_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S618>/Poke' */
            /* FunctionCaller: '<S661>/Function Caller' incorporates:
             *  Constant: '<S661>/Constant'
             */
            /* Event: '<S659>:38' */
            Rte_Call_PokeCITR_b_PPButtonSts_PokeCITR_b_PPButtonSts
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__cx, false);

            /* End of Outputs for SubSystem: '<S618>/Poke' */
        }
    }

    /* End of Chart: '<S655>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PwrPanelCurrDrawSens1_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PwrPanelCurrDrawSens1_ErrSts'
     */
    /* Transition: '<S659>:19' */
    rtb_TmpSignalConversionAtVeL_pj =
        Rte_Read_VeLINR_d_PwrPanelCurrDrawSens1_VeLINR_d_PwrPanelCurrDrawSens1
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_d_P);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PwrPanelCurrDrawSens1TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S666>:1' */
    (void)
        Rte_Read_VeLINR_b_PwrPanelCurrDrawSens1TO_VeLINR_b_PwrPanelCurrDrawSens1TO
        (&tmpRead_o);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S662>/Chart' */
    if (tmpRead_o)
    {
        /* Transition: '<S666>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S666>:6' */
            /* Transition: '<S666>:25' */
            /* Call Fsft */
            VeLINR_y_PwrPanelCurrDrawSens1_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S619>/Fsft' */
            /* FunctionCaller: '<S667>/Function Caller' */
            /* Event: '<S666>:39' */
            Rte_Call_FsftCITR_I_PPCurrentDrawSens1_FsftCITR_I_PPCurrentDrawSens1
                ();

            /* End of Outputs for SubSystem: '<S619>/Fsft' */
            /* Transition: '<S666>:29' */
        }
        else
        {
            /* Transition: '<S666>:30' */
            /* Call Tmot */
            VeLINR_y_PwrPanelCurrDrawSens1_CallStatus = 3U;

            /* Event: '<S666>:40' */
        }

        /* Transition: '<S666>:36' */
        /* Transition: '<S666>:23' */
    }
    else
    {
        /* Transition: '<S666>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_pj) == 133)
        {
            /* Transition: '<S666>:33' */
            /* Transition: '<S666>:35' */
            /* Call Nothing */
            VeLINR_y_PwrPanelCurrDrawSens1_CallStatus = 4U;

            /* Transition: '<S666>:23' */
        }
        else
        {
            /* Transition: '<S666>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_pj) == 1)
            {
                /* Transition: '<S666>:48' */
                /* Transition: '<S666>:53' */
                FA_out_j = true;

                /* Transition: '<S666>:56' */
            }
            else
            {
                /* Transition: '<S666>:52' */
                FA_out_j = false;
            }

            /* Transition: '<S666>:37' */
            /* Call Poke */
            VeLINR_y_PwrPanelCurrDrawSens1_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S619>/Poke' */
            /* FunctionCaller: '<S668>/Function Caller' */
            /* Event: '<S666>:38' */
            Rte_Call_PokeCITR_I_PPCurrentDrawSens1_PokeCITR_I_PPCurrentDrawSens1
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_d_P, FA_out_j);

            /* End of Outputs for SubSystem: '<S619>/Poke' */
        }
    }

    /* End of Chart: '<S662>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PwrPanelCurrDrawSens2_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PwrPanelCurrDrawSens2_ErrSts'
     */
    /* Transition: '<S666>:19' */
    rtb_TmpSignalConversionAtVeL_pg =
        Rte_Read_VeLINR_d_PwrPanelCurrDrawSens2_VeLINR_d_PwrPanelCurrDrawSens2
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_d_d);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PwrPanelCurrDrawSens2TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S673>:1' */
    (void)
        Rte_Read_VeLINR_b_PwrPanelCurrDrawSens2TO_VeLINR_b_PwrPanelCurrDrawSens2TO
        (&FA_out_f);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S669>/Chart' */
    if (FA_out_f)
    {
        /* Transition: '<S673>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S673>:6' */
            /* Transition: '<S673>:25' */
            /* Call Fsft */
            VeLINR_y_PwrPanelCurrDrawSens2_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S620>/Fsft' */
            /* FunctionCaller: '<S674>/Function Caller' */
            /* Event: '<S673>:39' */
            Rte_Call_FsftCITR_I_PPCurrentDrawSens2_FsftCITR_I_PPCurrentDrawSens2
                ();

            /* End of Outputs for SubSystem: '<S620>/Fsft' */
            /* Transition: '<S673>:29' */
        }
        else
        {
            /* Transition: '<S673>:30' */
            /* Call Tmot */
            VeLINR_y_PwrPanelCurrDrawSens2_CallStatus = 3U;

            /* Event: '<S673>:40' */
        }

        /* Transition: '<S673>:36' */
        /* Transition: '<S673>:23' */
    }
    else
    {
        /* Transition: '<S673>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_pg) == 133)
        {
            /* Transition: '<S673>:33' */
            /* Transition: '<S673>:35' */
            /* Call Nothing */
            VeLINR_y_PwrPanelCurrDrawSens2_CallStatus = 4U;

            /* Transition: '<S673>:23' */
        }
        else
        {
            /* Transition: '<S673>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_pg) == 1)
            {
                /* Transition: '<S673>:48' */
                /* Transition: '<S673>:53' */
                FA_out_f = true;

                /* Transition: '<S673>:56' */
            }
            else
            {
                /* Transition: '<S673>:52' */
            }

            /* Transition: '<S673>:37' */
            /* Call Poke */
            VeLINR_y_PwrPanelCurrDrawSens2_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S620>/Poke' */
            /* FunctionCaller: '<S675>/Function Caller' */
            /* Event: '<S673>:38' */
            Rte_Call_PokeCITR_I_PPCurrentDrawSens2_PokeCITR_I_PPCurrentDrawSens2
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_d_d, FA_out_f);

            /* End of Outputs for SubSystem: '<S620>/Poke' */
        }
    }

    /* End of Chart: '<S669>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PowerPanel_Fault_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PowerPanel_Fault_ErrSts'
     */
    /* Transition: '<S673>:19' */
    rtb_TmpSignalConversionAtVeL_o4 =
        Rte_Read_VeLINR_e_PowerPanel_Fault_VeLINR_e_PowerPanel_Fault
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__la);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PowerPanel_FaultTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S680>:1' */
    (void)Rte_Read_VeLINR_b_PowerPanel_FaultTO_VeLINR_b_PowerPanel_FaultTO
        (&FA_out_go);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S676>/Chart' */
    if (FA_out_go)
    {
        /* Transition: '<S680>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S680>:6' */
            /* Transition: '<S680>:25' */
            /* Call Fsft */
            VeLINR_y_PowerPanel_Fault_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S621>/Fsft' */
            /* FunctionCaller: '<S681>/Function Caller' */
            /* Event: '<S680>:39' */
            Rte_Call_FsftCITR_e_PPFault_FsftCITR_e_PPFault();

            /* End of Outputs for SubSystem: '<S621>/Fsft' */
            /* Transition: '<S680>:29' */
        }
        else
        {
            /* Transition: '<S680>:30' */
            /* Call Tmot */
            VeLINR_y_PowerPanel_Fault_CallStatus = 3U;

            /* Event: '<S680>:40' */
        }

        /* Transition: '<S680>:36' */
        /* Transition: '<S680>:23' */
    }
    else
    {
        /* Transition: '<S680>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_o4) == 133)
        {
            /* Transition: '<S680>:33' */
            /* Transition: '<S680>:35' */
            /* Call Nothing */
            VeLINR_y_PowerPanel_Fault_CallStatus = 4U;

            /* Transition: '<S680>:23' */
        }
        else
        {
            /* Transition: '<S680>:46' */
            /* Transition: '<S680>:37' */
            /* Call Poke */
            VeLINR_y_PowerPanel_Fault_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S621>/Poke' */
            /* FunctionCaller: '<S682>/Function Caller' incorporates:
             *  Constant: '<S682>/Constant'
             */
            /* Event: '<S680>:38' */
            Rte_Call_PokeCITR_e_PPFault_PokeCITR_e_PPFault
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__la, false);

            /* End of Outputs for SubSystem: '<S621>/Poke' */
        }
    }

    /* End of Chart: '<S676>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PowerPanel_FaultReason_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PowerPanel_FaultReason_ErrSts'
     */
    /* Transition: '<S680>:19' */
    rtb_TmpSignalConversionAtVe_fg1 =
        Rte_Read_VeLINR_e_PowerPanel_FaultReason_VeLINR_e_PowerPanel_FaultReason
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__oh);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PowerPanel_FaultReasonTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S687>:1' */
    (void)
        Rte_Read_VeLINR_b_PowerPanel_FaultReasonTO_VeLINR_b_PowerPanel_FaultReasonTO
        (&tmpRead_p);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S683>/Chart' */
    if (tmpRead_p)
    {
        /* Transition: '<S687>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S687>:6' */
            /* Transition: '<S687>:25' */
            /* Call Fsft */
            VeLINR_y_PowerPanel_FaultReason_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S622>/Fsft' */
            /* FunctionCaller: '<S688>/Function Caller' */
            /* Event: '<S687>:39' */
            Rte_Call_FsftCITR_e_PPFaultRsn_FsftCITR_e_PPFaultRsn();

            /* End of Outputs for SubSystem: '<S622>/Fsft' */
            /* Transition: '<S687>:29' */
        }
        else
        {
            /* Transition: '<S687>:30' */
            /* Call Tmot */
            VeLINR_y_PowerPanel_FaultReason_CallStatus = 3U;

            /* Event: '<S687>:40' */
        }

        /* Transition: '<S687>:36' */
        /* Transition: '<S687>:23' */
    }
    else
    {
        /* Transition: '<S687>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVe_fg1) == 133)
        {
            /* Transition: '<S687>:33' */
            /* Transition: '<S687>:35' */
            /* Call Nothing */
            VeLINR_y_PowerPanel_FaultReason_CallStatus = 4U;

            /* Transition: '<S687>:23' */
        }
        else
        {
            /* Transition: '<S687>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVe_fg1) == 1)
            {
                /* Transition: '<S687>:48' */
                /* Transition: '<S687>:53' */
                FA_out_go = true;

                /* Transition: '<S687>:56' */
            }
            else
            {
                /* Transition: '<S687>:52' */
                FA_out_go = false;
            }

            /* Transition: '<S687>:37' */
            /* Call Poke */
            VeLINR_y_PowerPanel_FaultReason_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S622>/Poke' */
            /* FunctionCaller: '<S689>/Function Caller' */
            /* Event: '<S687>:38' */
            Rte_Call_PokeCITR_e_PPFaultRsn_PokeCITR_e_PPFaultRsn
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__oh, FA_out_go);

            /* End of Outputs for SubSystem: '<S622>/Poke' */
        }
    }

    /* End of Chart: '<S683>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_b_PwrPanelGndFltDetected' incorporates:
     *  Inport: '<Root>/VeLINR_b_PwrPanelGndFltDetectedTO'
     */
    /* Transition: '<S687>:19' */
#if Rte_SysCon_VrntLR2B_PowerPanelGndFaultDetected

    /* Outputs for Atomic SubSystem: '<S16>/PowerPanel_Gnd_Fault_Detected' */
    /* SignalConversion generated from: '<S2>/VeLINR_b_PwrPanelGndFltDetected' incorporates:
     *  Inport: '<Root>/VeLINR_b_PwrPanelGndFltDetected'
     */
    rtb_TmpSignalConversionAtVe_p1r =
        Rte_Read_VeLINR_b_PwrPanelGndFltDetected_VeLINR_b_PwrPanelGndFltDetected
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__oy);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S695>:1' */
    (void)
        Rte_Read_VeLINR_b_PwrPanelGndFltDetectedTO_VeLINR_b_PwrPanelGndFltDetectedTO
        (&FA_out_o);

    /* Outputs for Atomic SubSystem: '<S623>/PowerPanel_Gnd_Fault_Detected' */
    /* Chart: '<S691>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_PwrPanelGndFltDetectedTO'
     */
    if (FA_out_o)
    {
        /* Transition: '<S695>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S695>:6' */
            /* Transition: '<S695>:25' */
            /* Call Fsft */
            VeLINR_y_PwrPanelGndFltDetected_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S690>/Fsft' */
            /* FunctionCaller: '<S696>/Function Caller' */
            /* Event: '<S695>:39' */
            Rte_Call_FsftCITR_b_PP_Gnd_Fault_Det_FsftCITR_b_PP_Gnd_Fault_Det();

            /* End of Outputs for SubSystem: '<S690>/Fsft' */
            /* Transition: '<S695>:29' */
        }
        else
        {
            /* Transition: '<S695>:30' */
            /* Call Tmot */
            VeLINR_y_PwrPanelGndFltDetected_CallStatus = 3U;

            /* Event: '<S695>:40' */
        }

        /* Transition: '<S695>:36' */
        /* Transition: '<S695>:23' */
    }
    else
    {
        /* Transition: '<S695>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVe_p1r) == 133)
        {
            /* Transition: '<S695>:33' */
            /* Transition: '<S695>:35' */
            /* Call Nothing */
            VeLINR_y_PwrPanelGndFltDetected_CallStatus = 4U;

            /* Transition: '<S695>:23' */
        }
        else
        {
            /* Transition: '<S695>:46' */
            /* Transition: '<S695>:37' */
            /* Call Poke */
            VeLINR_y_PwrPanelGndFltDetected_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S690>/Poke' */
            /* FunctionCaller: '<S697>/Function Caller' incorporates:
             *  Constant: '<S697>/Constant'
             */
            /* Event: '<S695>:38' */
            Rte_Call_PokeCITR_b_PP_Gnd_Fault_Det_PokeCITR_b_PP_Gnd_Fault_Det
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__oy, false);

            /* End of Outputs for SubSystem: '<S690>/Poke' */
        }
    }

    /* End of Chart: '<S691>/Chart' */
    /* End of Outputs for SubSystem: '<S623>/PowerPanel_Gnd_Fault_Detected' */
    /* End of Outputs for SubSystem: '<S16>/PowerPanel_Gnd_Fault_Detected' */
    /* Transition: '<S695>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_b_PwrPanelGndFltDetected' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PwrPanelLEDAColorFdbck' incorporates:
     *  Inport: '<Root>/VeLINR_b_PwrPanelLEDAColorFdbckTO'
     */
#if Rte_SysCon_VrntLR2B_PowerPanelLEDAColorFeedback

    /* Outputs for Atomic SubSystem: '<S16>/PowerPanel_LED_A_Color_Feedback' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_PwrPanelLEDAColorFdbck' incorporates:
     *  Inport: '<Root>/VeLINR_e_PwrPanelLEDAColorFdbck'
     */
    rtb_TmpSignalConversionAtVeL_ea =
        Rte_Read_VeLINR_e_PwrPanelLEDAColorFdbck_VeLINR_e_PwrPanelLEDAColorFdbck
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__g3);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S703>:1' */
    (void)
        Rte_Read_VeLINR_b_PwrPanelLEDAColorFdbckTO_VeLINR_b_PwrPanelLEDAColorFdbckTO
        (&tmpRead_q);

    /* Outputs for Atomic SubSystem: '<S624>/PowerPanel_LED_A_Color_Feedback' */
    /* Chart: '<S699>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_PwrPanelLEDAColorFdbckTO'
     */
    if (tmpRead_q)
    {
        /* Transition: '<S703>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S703>:6' */
            /* Transition: '<S703>:25' */
            /* Call Fsft */
            VeLINR_y_PwrPanelLEDAColorFdbck_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S698>/Fsft' */
            /* FunctionCaller: '<S704>/Function Caller' */
            /* Event: '<S703>:39' */
            Rte_Call_FsftCITR_e_PP_LED_A_ColorFeedback_FsftCITR_e_PP_LED_A_ColorFeedback
                ();

            /* End of Outputs for SubSystem: '<S698>/Fsft' */
            /* Transition: '<S703>:29' */
        }
        else
        {
            /* Transition: '<S703>:30' */
            /* Call Tmot */
            VeLINR_y_PwrPanelLEDAColorFdbck_CallStatus = 3U;

            /* Event: '<S703>:40' */
        }

        /* Transition: '<S703>:36' */
        /* Transition: '<S703>:23' */
    }
    else
    {
        /* Transition: '<S703>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_ea) == 133)
        {
            /* Transition: '<S703>:33' */
            /* Transition: '<S703>:35' */
            /* Call Nothing */
            VeLINR_y_PwrPanelLEDAColorFdbck_CallStatus = 4U;

            /* Transition: '<S703>:23' */
        }
        else
        {
            /* Transition: '<S703>:46' */
            /* Transition: '<S703>:37' */
            /* Call Poke */
            VeLINR_y_PwrPanelLEDAColorFdbck_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S698>/Poke' */
            /* FunctionCaller: '<S705>/Function Caller' incorporates:
             *  Constant: '<S705>/Constant'
             */
            /* Event: '<S703>:38' */
            Rte_Call_PokeCITR_e_PP_LED_A_ColorFeedback_PokeCITR_e_PP_LED_A_ColorFeedback
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__g3, false);

            /* End of Outputs for SubSystem: '<S698>/Poke' */
        }
    }

    /* End of Chart: '<S699>/Chart' */
    /* End of Outputs for SubSystem: '<S624>/PowerPanel_LED_A_Color_Feedback' */
    /* End of Outputs for SubSystem: '<S16>/PowerPanel_LED_A_Color_Feedback' */
    /* Transition: '<S703>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_PwrPanelLEDAColorFdbck' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PwrPanel_LEDA_FailSts' incorporates:
     *  Inport: '<Root>/VeLINR_b_PwrPanel_LEDA_FailStsTO'
     */
#if Rte_SysCon_VrntLR2B_PowerPanelLEDAFailStatus

    /* Outputs for Atomic SubSystem: '<S16>/PowerPanel_LED_A_FailStatus' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_PwrPanel_LEDA_FailSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PwrPanel_LEDA_FailSts'
     */
    rtb_TmpSignalConversionAtVeL_ak =
        Rte_Read_VeLINR_e_PwrPanel_LEDA_FailSts_VeLINR_e_PwrPanel_LEDA_FailSts
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__nx);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S711>:1' */
    (void)
        Rte_Read_VeLINR_b_PwrPanel_LEDA_FailStsTO_VeLINR_b_PwrPanel_LEDA_FailStsTO
        (&tmpRead_r);

    /* Outputs for Atomic SubSystem: '<S625>/PowerPanel_LED_A_FailStatus' */
    /* Chart: '<S707>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_PwrPanel_LEDA_FailStsTO'
     */
    if (tmpRead_r)
    {
        /* Transition: '<S711>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S711>:6' */
            /* Transition: '<S711>:25' */
            /* Call Fsft */
            VeLINR_y_PwrPanel_LEDA_FailSts_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S706>/Fsft' */
            /* FunctionCaller: '<S712>/Function Caller' */
            /* Event: '<S711>:39' */
            Rte_Call_FsftCITR_e_PP_LED_A_FailSts_FsftCITR_e_PP_LED_A_FailSts();

            /* End of Outputs for SubSystem: '<S706>/Fsft' */
            /* Transition: '<S711>:29' */
        }
        else
        {
            /* Transition: '<S711>:30' */
            /* Call Tmot */
            VeLINR_y_PwrPanel_LEDA_FailSts_CallStatus = 3U;

            /* Event: '<S711>:40' */
        }

        /* Transition: '<S711>:36' */
        /* Transition: '<S711>:23' */
    }
    else
    {
        /* Transition: '<S711>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_ak) == 133)
        {
            /* Transition: '<S711>:33' */
            /* Transition: '<S711>:35' */
            /* Call Nothing */
            VeLINR_y_PwrPanel_LEDA_FailSts_CallStatus = 4U;

            /* Transition: '<S711>:23' */
        }
        else
        {
            /* Transition: '<S711>:46' */
            /* Transition: '<S711>:37' */
            /* Call Poke */
            VeLINR_y_PwrPanel_LEDA_FailSts_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S706>/Poke' */
            /* FunctionCaller: '<S713>/Function Caller' incorporates:
             *  Constant: '<S713>/Constant'
             */
            /* Event: '<S711>:38' */
            Rte_Call_PokeCITR_e_PP_LED_A_FailSts_PokeCITR_e_PP_LED_A_FailSts
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__nx, false);

            /* End of Outputs for SubSystem: '<S706>/Poke' */
        }
    }

    /* End of Chart: '<S707>/Chart' */
    /* End of Outputs for SubSystem: '<S625>/PowerPanel_LED_A_FailStatus' */
    /* End of Outputs for SubSystem: '<S16>/PowerPanel_LED_A_FailStatus' */
    /* Transition: '<S711>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_PwrPanel_LEDA_FailSts' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PwrPanel_LEDA_Feedback' incorporates:
     *  Inport: '<Root>/VeLINR_b_PwrPanel_LEDA_FeedbackTO'
     */
#if Rte_SysCon_VrntLR2B_PowerPanelLEDAFeedback

    /* Outputs for Atomic SubSystem: '<S16>/PowerPanel_LED_A_Feedback' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_PwrPanel_LEDA_Feedback' incorporates:
     *  Inport: '<Root>/VeLINR_e_PwrPanel_LEDA_Feedback'
     */
    rtb_TmpSignalConversionAtVeL_ja =
        Rte_Read_VeLINR_e_PwrPanel_LEDA_Feedback_VeLINR_e_PwrPanel_LEDA_Feedback
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__iq);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S719>:1' */
    (void)
        Rte_Read_VeLINR_b_PwrPanel_LEDA_FeedbackTO_VeLINR_b_PwrPanel_LEDA_FeedbackTO
        (&tmpRead_s);

    /* Outputs for Atomic SubSystem: '<S626>/PowerPanel_LED_A_Feedback' */
    /* Chart: '<S715>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_PwrPanel_LEDA_FeedbackTO'
     */
    if (tmpRead_s)
    {
        /* Transition: '<S719>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S719>:6' */
            /* Transition: '<S719>:25' */
            /* Call Fsft */
            VeLINR_y_PwrPanel_LEDA_Feedback_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S714>/Fsft' */
            /* FunctionCaller: '<S720>/Function Caller' */
            /* Event: '<S719>:39' */
            Rte_Call_FsftCITR_e_PP_LED_A_Feedback_FsftCITR_e_PP_LED_A_Feedback();

            /* End of Outputs for SubSystem: '<S714>/Fsft' */
            /* Transition: '<S719>:29' */
        }
        else
        {
            /* Transition: '<S719>:30' */
            /* Call Tmot */
            VeLINR_y_PwrPanel_LEDA_Feedback_CallStatus = 3U;

            /* Event: '<S719>:40' */
        }

        /* Transition: '<S719>:36' */
        /* Transition: '<S719>:23' */
    }
    else
    {
        /* Transition: '<S719>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_ja) == 133)
        {
            /* Transition: '<S719>:33' */
            /* Transition: '<S719>:35' */
            /* Call Nothing */
            VeLINR_y_PwrPanel_LEDA_Feedback_CallStatus = 4U;

            /* Transition: '<S719>:23' */
        }
        else
        {
            /* Transition: '<S719>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_ja) == 1)
            {
                /* Transition: '<S719>:48' */
                /* Transition: '<S719>:53' */
                FA_out_o = true;

                /* Transition: '<S719>:56' */
            }
            else
            {
                /* Transition: '<S719>:52' */
                FA_out_o = false;
            }

            /* Transition: '<S719>:37' */
            /* Call Poke */
            VeLINR_y_PwrPanel_LEDA_Feedback_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S714>/Poke' */
            /* FunctionCaller: '<S721>/Function Caller' */
            /* Event: '<S719>:38' */
            Rte_Call_PokeCITR_e_PP_LED_A_Feedback_PokeCITR_e_PP_LED_A_Feedback
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__iq, FA_out_o);

            /* End of Outputs for SubSystem: '<S714>/Poke' */
        }
    }

    /* End of Chart: '<S715>/Chart' */
    /* End of Outputs for SubSystem: '<S626>/PowerPanel_LED_A_Feedback' */
    /* End of Outputs for SubSystem: '<S16>/PowerPanel_LED_A_Feedback' */
    /* Transition: '<S719>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_PwrPanel_LEDA_Feedback' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PwrPanelLEDBColorFdbck' incorporates:
     *  Inport: '<Root>/VeLINR_b_PwrPanelLEDBColorFdbckTO'
     */
#if Rte_SysCon_VrntLR2B_PowerPanelLEDBColorFeedback

    /* Outputs for Atomic SubSystem: '<S16>/PowerPanel_LED_B_Color_Feedback' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_PwrPanelLEDBColorFdbck' incorporates:
     *  Inport: '<Root>/VeLINR_e_PwrPanelLEDBColorFdbck'
     */
    rtb_TmpSignalConversionAtVeL_cl =
        Rte_Read_VeLINR_e_PwrPanelLEDBColorFdbck_VeLINR_e_PwrPanelLEDBColorFdbck
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__ap);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S727>:1' */
    (void)
        Rte_Read_VeLINR_b_PwrPanelLEDBColorFdbckTO_VeLINR_b_PwrPanelLEDBColorFdbckTO
        (&FA_out_mv);

    /* Outputs for Atomic SubSystem: '<S627>/PowerPanel_LED_B_Color_Feedback' */
    /* Chart: '<S723>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_PwrPanelLEDBColorFdbckTO'
     */
    if (FA_out_mv)
    {
        /* Transition: '<S727>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S727>:6' */
            /* Transition: '<S727>:25' */
            /* Call Fsft */
            VeLINR_y_PwrPanelLEDBColorFdbck_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S722>/Fsft' */
            /* FunctionCaller: '<S728>/Function Caller' */
            /* Event: '<S727>:39' */
            Rte_Call_FsftCITR_e_PP_LED_B_ColorFeedback_FsftCITR_e_PP_LED_B_ColorFeedback
                ();

            /* End of Outputs for SubSystem: '<S722>/Fsft' */
            /* Transition: '<S727>:29' */
        }
        else
        {
            /* Transition: '<S727>:30' */
            /* Call Tmot */
            VeLINR_y_PwrPanelLEDBColorFdbck_CallStatus = 3U;

            /* Event: '<S727>:40' */
        }

        /* Transition: '<S727>:36' */
        /* Transition: '<S727>:23' */
    }
    else
    {
        /* Transition: '<S727>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_cl) == 133)
        {
            /* Transition: '<S727>:33' */
            /* Transition: '<S727>:35' */
            /* Call Nothing */
            VeLINR_y_PwrPanelLEDBColorFdbck_CallStatus = 4U;

            /* Transition: '<S727>:23' */
        }
        else
        {
            /* Transition: '<S727>:46' */
            /* Transition: '<S727>:37' */
            /* Call Poke */
            VeLINR_y_PwrPanelLEDBColorFdbck_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S722>/Poke' */
            /* FunctionCaller: '<S729>/Function Caller' incorporates:
             *  Constant: '<S729>/Constant'
             */
            /* Event: '<S727>:38' */
            Rte_Call_PokeCITR_e_PP_LED_B_ColorFeedback_PokeCITR_e_PP_LED_B_ColorFeedback
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__ap, false);

            /* End of Outputs for SubSystem: '<S722>/Poke' */
        }
    }

    /* End of Chart: '<S723>/Chart' */
    /* End of Outputs for SubSystem: '<S627>/PowerPanel_LED_B_Color_Feedback' */
    /* End of Outputs for SubSystem: '<S16>/PowerPanel_LED_B_Color_Feedback' */
    /* Transition: '<S727>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_PwrPanelLEDBColorFdbck' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PwrPanel_LEDB_FailSts' incorporates:
     *  Inport: '<Root>/VeLINR_b_PwrPanel_LEDB_FailStsTO'
     */
#if Rte_SysCon_VrntLR2B_PowerPanelLEDBFailStatus

    /* Outputs for Atomic SubSystem: '<S16>/PowerPanel_LED_B_FailStatus' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_PwrPanel_LEDB_FailSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PwrPanel_LEDB_FailSts'
     */
    rtb_TmpSignalConversionAtVeL_oy =
        Rte_Read_VeLINR_e_PwrPanel_LEDB_FailSts_VeLINR_e_PwrPanel_LEDB_FailSts
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_d);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S735>:1' */
    (void)
        Rte_Read_VeLINR_b_PwrPanel_LEDB_FailStsTO_VeLINR_b_PwrPanel_LEDB_FailStsTO
        (&tmpRead_t);

    /* Outputs for Atomic SubSystem: '<S628>/PowerPanel_LED_B_FailStatus' */
    /* Chart: '<S731>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_PwrPanel_LEDB_FailStsTO'
     */
    if (tmpRead_t)
    {
        /* Transition: '<S735>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S735>:6' */
            /* Transition: '<S735>:25' */
            /* Call Fsft */
            VeLINR_y_PwrPanel_LEDB_FailSts_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S730>/Fsft' */
            /* FunctionCaller: '<S736>/Function Caller' */
            /* Event: '<S735>:39' */
            Rte_Call_FsftCITR_e_PP_LED_B_FailSts_FsftCITR_e_PP_LED_B_FailSts();

            /* End of Outputs for SubSystem: '<S730>/Fsft' */
            /* Transition: '<S735>:29' */
        }
        else
        {
            /* Transition: '<S735>:30' */
            /* Call Tmot */
            VeLINR_y_PwrPanel_LEDB_FailSts_CallStatus = 3U;

            /* Event: '<S735>:40' */
        }

        /* Transition: '<S735>:36' */
        /* Transition: '<S735>:23' */
    }
    else
    {
        /* Transition: '<S735>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_oy) == 133)
        {
            /* Transition: '<S735>:33' */
            /* Transition: '<S735>:35' */
            /* Call Nothing */
            VeLINR_y_PwrPanel_LEDB_FailSts_CallStatus = 4U;

            /* Transition: '<S735>:23' */
        }
        else
        {
            /* Transition: '<S735>:46' */
            /* Transition: '<S735>:37' */
            /* Call Poke */
            VeLINR_y_PwrPanel_LEDB_FailSts_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S730>/Poke' */
            /* FunctionCaller: '<S737>/Function Caller' incorporates:
             *  Constant: '<S737>/Constant'
             */
            /* Event: '<S735>:38' */
            Rte_Call_PokeCITR_e_PP_LED_B_FailSts_PokeCITR_e_PP_LED_B_FailSts
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_d, false);

            /* End of Outputs for SubSystem: '<S730>/Poke' */
        }
    }

    /* End of Chart: '<S731>/Chart' */
    /* End of Outputs for SubSystem: '<S628>/PowerPanel_LED_B_FailStatus' */
    /* End of Outputs for SubSystem: '<S16>/PowerPanel_LED_B_FailStatus' */
    /* Transition: '<S735>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_PwrPanel_LEDB_FailSts' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PwrPanel_LEDB_Feedback' incorporates:
     *  Inport: '<Root>/VeLINR_b_PwrPanel_LEDB_FeedbackTO'
     */
#if Rte_SysCon_VrntLR2B_PowerPanelLEDBFeedback

    /* Outputs for Atomic SubSystem: '<S16>/PowerPanel_LED_B_Feedback' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_PwrPanel_LEDB_Feedback' incorporates:
     *  Inport: '<Root>/VeLINR_e_PwrPanel_LEDB_Feedback'
     */
    rtb_TmpSignalConversionAtVeL_hb =
        Rte_Read_VeLINR_e_PwrPanel_LEDB_Feedback_VeLINR_e_PwrPanel_LEDB_Feedback
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__gv);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S743>:1' */
    (void)
        Rte_Read_VeLINR_b_PwrPanel_LEDB_FeedbackTO_VeLINR_b_PwrPanel_LEDB_FeedbackTO
        (&tmpRead_u);

    /* Outputs for Atomic SubSystem: '<S629>/PowerPanel_LED_B_Feedback' */
    /* Chart: '<S739>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_PwrPanel_LEDB_FeedbackTO'
     */
    if (tmpRead_u)
    {
        /* Transition: '<S743>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S743>:6' */
            /* Transition: '<S743>:25' */
            /* Call Fsft */
            VeLINR_y_PwrPanel_LEDB_Feedback_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S738>/Fsft' */
            /* FunctionCaller: '<S744>/Function Caller' */
            /* Event: '<S743>:39' */
            Rte_Call_FsftCITR_e_PP_LED_B_Feedback_FsftCITR_e_PP_LED_B_Feedback();

            /* End of Outputs for SubSystem: '<S738>/Fsft' */
            /* Transition: '<S743>:29' */
        }
        else
        {
            /* Transition: '<S743>:30' */
            /* Call Tmot */
            VeLINR_y_PwrPanel_LEDB_Feedback_CallStatus = 3U;

            /* Event: '<S743>:40' */
        }

        /* Transition: '<S743>:36' */
        /* Transition: '<S743>:23' */
    }
    else
    {
        /* Transition: '<S743>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_hb) == 133)
        {
            /* Transition: '<S743>:33' */
            /* Transition: '<S743>:35' */
            /* Call Nothing */
            VeLINR_y_PwrPanel_LEDB_Feedback_CallStatus = 4U;

            /* Transition: '<S743>:23' */
        }
        else
        {
            /* Transition: '<S743>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_hb) == 1)
            {
                /* Transition: '<S743>:48' */
                /* Transition: '<S743>:53' */
                FA_out_mv = true;

                /* Transition: '<S743>:56' */
            }
            else
            {
                /* Transition: '<S743>:52' */
                FA_out_mv = false;
            }

            /* Transition: '<S743>:37' */
            /* Call Poke */
            VeLINR_y_PwrPanel_LEDB_Feedback_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S738>/Poke' */
            /* FunctionCaller: '<S745>/Function Caller' */
            /* Event: '<S743>:38' */
            Rte_Call_PokeCITR_e_PP_LED_B_Feedback_PokeCITR_e_PP_LED_B_Feedback
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__gv, FA_out_mv);

            /* End of Outputs for SubSystem: '<S738>/Poke' */
        }
    }

    /* End of Chart: '<S739>/Chart' */
    /* End of Outputs for SubSystem: '<S629>/PowerPanel_LED_B_Feedback' */
    /* End of Outputs for SubSystem: '<S16>/PowerPanel_LED_B_Feedback' */
    /* Transition: '<S743>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_PwrPanel_LEDB_Feedback' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PwrPanelLEDCColorFdbck' incorporates:
     *  Inport: '<Root>/VeLINR_b_PwrPanelLEDCColorFdbckTO'
     */
#if Rte_SysCon_VrntLR2B_PowerPanelLEDCColorFeedback

    /* Outputs for Atomic SubSystem: '<S16>/PowerPanel_LED_C_Color_Feedback' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_PwrPanelLEDCColorFdbck' incorporates:
     *  Inport: '<Root>/VeLINR_e_PwrPanelLEDCColorFdbck'
     */
    rtb_TmpSignalConversionAtVe_esh =
        Rte_Read_VeLINR_e_PwrPanelLEDCColorFdbck_VeLINR_e_PwrPanelLEDCColorFdbck
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__an);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S751>:1' */
    (void)
        Rte_Read_VeLINR_b_PwrPanelLEDCColorFdbckTO_VeLINR_b_PwrPanelLEDCColorFdbckTO
        (&FA_out_p);

    /* Outputs for Atomic SubSystem: '<S630>/PowerPanel_LED_C_Color_Feedback' */
    /* Chart: '<S747>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_PwrPanelLEDCColorFdbckTO'
     */
    if (FA_out_p)
    {
        /* Transition: '<S751>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S751>:6' */
            /* Transition: '<S751>:25' */
            /* Call Fsft */
            VeLINR_y_PwrPanelLEDCColorFdbck_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S746>/Fsft' */
            /* FunctionCaller: '<S752>/Function Caller' */
            /* Event: '<S751>:39' */
            Rte_Call_FsftCITR_e_PP_LED_C_ColorFeedback_FsftCITR_e_PP_LED_C_ColorFeedback
                ();

            /* End of Outputs for SubSystem: '<S746>/Fsft' */
            /* Transition: '<S751>:29' */
        }
        else
        {
            /* Transition: '<S751>:30' */
            /* Call Tmot */
            VeLINR_y_PwrPanelLEDCColorFdbck_CallStatus = 3U;

            /* Event: '<S751>:40' */
        }

        /* Transition: '<S751>:36' */
        /* Transition: '<S751>:23' */
    }
    else
    {
        /* Transition: '<S751>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVe_esh) == 133)
        {
            /* Transition: '<S751>:33' */
            /* Transition: '<S751>:35' */
            /* Call Nothing */
            VeLINR_y_PwrPanelLEDCColorFdbck_CallStatus = 4U;

            /* Transition: '<S751>:23' */
        }
        else
        {
            /* Transition: '<S751>:46' */
            /* Transition: '<S751>:37' */
            /* Call Poke */
            VeLINR_y_PwrPanelLEDCColorFdbck_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S746>/Poke' */
            /* FunctionCaller: '<S753>/Function Caller' incorporates:
             *  Constant: '<S753>/Constant'
             */
            /* Event: '<S751>:38' */
            Rte_Call_PokeCITR_e_PP_LED_C_ColorFeedback_PokeCITR_e_PP_LED_C_ColorFeedback
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__an, false);

            /* End of Outputs for SubSystem: '<S746>/Poke' */
        }
    }

    /* End of Chart: '<S747>/Chart' */
    /* End of Outputs for SubSystem: '<S630>/PowerPanel_LED_C_Color_Feedback' */
    /* End of Outputs for SubSystem: '<S16>/PowerPanel_LED_C_Color_Feedback' */
    /* Transition: '<S751>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_PwrPanelLEDCColorFdbck' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PwrPanel_LEDC_FailSts' incorporates:
     *  Inport: '<Root>/VeLINR_b_PwrPanel_LEDC_FailStsTO'
     */
#if Rte_SysCon_VrntLR2B_PowerPanelLEDCFailStatus

    /* Outputs for Atomic SubSystem: '<S16>/PowerPanel_LED_C_FailStatus' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_PwrPanel_LEDC_FailSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PwrPanel_LEDC_FailSts'
     */
    rtb_TmpSignalConversionAtVe_pjn =
        Rte_Read_VeLINR_e_PwrPanel_LEDC_FailSts_VeLINR_e_PwrPanel_LEDC_FailSts
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_k);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S759>:1' */
    (void)
        Rte_Read_VeLINR_b_PwrPanel_LEDC_FailStsTO_VeLINR_b_PwrPanel_LEDC_FailStsTO
        (&tmpRead_v);

    /* Outputs for Atomic SubSystem: '<S631>/PowerPanel_LED_C_FailStatus' */
    /* Chart: '<S755>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_PwrPanel_LEDC_FailStsTO'
     */
    if (tmpRead_v)
    {
        /* Transition: '<S759>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S759>:6' */
            /* Transition: '<S759>:25' */
            /* Call Fsft */
            VeLINR_y_PwrPanel_LEDC_FailSts_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S754>/Fsft' */
            /* FunctionCaller: '<S760>/Function Caller' */
            /* Event: '<S759>:39' */
            Rte_Call_FsftCITR_e_PP_LED_C_FailSts_FsftCITR_e_PP_LED_C_FailSts();

            /* End of Outputs for SubSystem: '<S754>/Fsft' */
            /* Transition: '<S759>:29' */
        }
        else
        {
            /* Transition: '<S759>:30' */
            /* Call Tmot */
            VeLINR_y_PwrPanel_LEDC_FailSts_CallStatus = 3U;

            /* Event: '<S759>:40' */
        }

        /* Transition: '<S759>:36' */
        /* Transition: '<S759>:23' */
    }
    else
    {
        /* Transition: '<S759>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVe_pjn) == 133)
        {
            /* Transition: '<S759>:33' */
            /* Transition: '<S759>:35' */
            /* Call Nothing */
            VeLINR_y_PwrPanel_LEDC_FailSts_CallStatus = 4U;

            /* Transition: '<S759>:23' */
        }
        else
        {
            /* Transition: '<S759>:46' */
            /* Transition: '<S759>:37' */
            /* Call Poke */
            VeLINR_y_PwrPanel_LEDC_FailSts_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S754>/Poke' */
            /* FunctionCaller: '<S761>/Function Caller' incorporates:
             *  Constant: '<S761>/Constant'
             */
            /* Event: '<S759>:38' */
            Rte_Call_PokeCITR_e_PP_LED_C_FailSts_PokeCITR_e_PP_LED_C_FailSts
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_k, false);

            /* End of Outputs for SubSystem: '<S754>/Poke' */
        }
    }

    /* End of Chart: '<S755>/Chart' */
    /* End of Outputs for SubSystem: '<S631>/PowerPanel_LED_C_FailStatus' */
    /* End of Outputs for SubSystem: '<S16>/PowerPanel_LED_C_FailStatus' */
    /* Transition: '<S759>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_PwrPanel_LEDC_FailSts' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PwrPanel_LEDC_Feedback' incorporates:
     *  Inport: '<Root>/VeLINR_b_PwrPanel_LEDC_FeedbackTO'
     */
#if Rte_SysCon_VrntLR2B_PowerPanelLEDCFeedback

    /* Outputs for Atomic SubSystem: '<S16>/PowerPanel_LED_C_Feedback' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_PwrPanel_LEDC_Feedback' incorporates:
     *  Inport: '<Root>/VeLINR_e_PwrPanel_LEDC_Feedback'
     */
    rtb_TmpSignalConversionAtVeL_mo =
        Rte_Read_VeLINR_e_PwrPanel_LEDC_Feedback_VeLINR_e_PwrPanel_LEDC_Feedback
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__db);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S767>:1' */
    (void)
        Rte_Read_VeLINR_b_PwrPanel_LEDC_FeedbackTO_VeLINR_b_PwrPanel_LEDC_FeedbackTO
        (&tmpRead_w);

    /* Outputs for Atomic SubSystem: '<S632>/PowerPanel_LED_C_Feedback' */
    /* Chart: '<S763>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_PwrPanel_LEDC_FeedbackTO'
     */
    if (tmpRead_w)
    {
        /* Transition: '<S767>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S767>:6' */
            /* Transition: '<S767>:25' */
            /* Call Fsft */
            VeLINR_y_PwrPanel_LEDC_Feedback_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S762>/Fsft' */
            /* FunctionCaller: '<S768>/Function Caller' */
            /* Event: '<S767>:39' */
            Rte_Call_FsftCITR_e_PP_LED_C_Feedback_FsftCITR_e_PP_LED_C_Feedback();

            /* End of Outputs for SubSystem: '<S762>/Fsft' */
            /* Transition: '<S767>:29' */
        }
        else
        {
            /* Transition: '<S767>:30' */
            /* Call Tmot */
            VeLINR_y_PwrPanel_LEDC_Feedback_CallStatus = 3U;

            /* Event: '<S767>:40' */
        }

        /* Transition: '<S767>:36' */
        /* Transition: '<S767>:23' */
    }
    else
    {
        /* Transition: '<S767>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_mo) == 133)
        {
            /* Transition: '<S767>:33' */
            /* Transition: '<S767>:35' */
            /* Call Nothing */
            VeLINR_y_PwrPanel_LEDC_Feedback_CallStatus = 4U;

            /* Transition: '<S767>:23' */
        }
        else
        {
            /* Transition: '<S767>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_mo) == 1)
            {
                /* Transition: '<S767>:48' */
                /* Transition: '<S767>:53' */
                FA_out_p = true;

                /* Transition: '<S767>:56' */
            }
            else
            {
                /* Transition: '<S767>:52' */
                FA_out_p = false;
            }

            /* Transition: '<S767>:37' */
            /* Call Poke */
            VeLINR_y_PwrPanel_LEDC_Feedback_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S762>/Poke' */
            /* FunctionCaller: '<S769>/Function Caller' */
            /* Event: '<S767>:38' */
            Rte_Call_PokeCITR_e_PP_LED_C_Feedback_PokeCITR_e_PP_LED_C_Feedback
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__db, FA_out_p);

            /* End of Outputs for SubSystem: '<S762>/Poke' */
        }
    }

    /* End of Chart: '<S763>/Chart' */
    /* End of Outputs for SubSystem: '<S632>/PowerPanel_LED_C_Feedback' */
    /* End of Outputs for SubSystem: '<S16>/PowerPanel_LED_C_Feedback' */
    /* Transition: '<S767>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_PwrPanel_LEDC_Feedback' */

    /* SignalConversion generated from: '<S2>/VeLINR_b_PwrPanel_LIN_ChksumErr' incorporates:
     *  Inport: '<Root>/VeLINR_b_PwrPanel_LIN_ChksumErrTO'
     */
#if Rte_SysCon_VrntLR2B_PowerPanelLINChecksumError

    /* Outputs for Atomic SubSystem: '<S16>/PowerPanel_LIN_Checksum_Error' */
    /* SignalConversion generated from: '<S2>/VeLINR_b_PwrPanel_LIN_ChksumErr' incorporates:
     *  Inport: '<Root>/VeLINR_b_PwrPanel_LIN_ChksumErr'
     */
    rtb_TmpSignalConversionAtVeL_ok =
        Rte_Read_VeLINR_b_PwrPanel_LIN_ChksumErr_VeLINR_b_PwrPanel_LIN_ChksumErr
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__og);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S775>:1' */
    (void)
        Rte_Read_VeLINR_b_PwrPanel_LIN_ChksumErrTO_VeLINR_b_PwrPanel_LIN_ChksumErrTO
        (&tmpRead_x);

    /* Outputs for Atomic SubSystem: '<S633>/PowerPanel_LIN_Checksum_Error' */
    /* Chart: '<S771>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_PwrPanel_LIN_ChksumErrTO'
     */
    if (tmpRead_x)
    {
        /* Transition: '<S775>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S775>:6' */
            /* Transition: '<S775>:25' */
            /* Call Fsft */
            VeLINR_y_PwrPanel_LIN_ChksumErr_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S770>/Fsft' */
            /* FunctionCaller: '<S776>/Function Caller' */
            /* Event: '<S775>:39' */
            Rte_Call_FsftCITR_b_PP_LIN_Cksm_Err_FsftCITR_b_PP_LIN_Cksm_Err();

            /* End of Outputs for SubSystem: '<S770>/Fsft' */
            /* Transition: '<S775>:29' */
        }
        else
        {
            /* Transition: '<S775>:30' */
            /* Call Tmot */
            VeLINR_y_PwrPanel_LIN_ChksumErr_CallStatus = 3U;

            /* Event: '<S775>:40' */
        }

        /* Transition: '<S775>:36' */
        /* Transition: '<S775>:23' */
    }
    else
    {
        /* Transition: '<S775>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_ok) == 133)
        {
            /* Transition: '<S775>:33' */
            /* Transition: '<S775>:35' */
            /* Call Nothing */
            VeLINR_y_PwrPanel_LIN_ChksumErr_CallStatus = 4U;

            /* Transition: '<S775>:23' */
        }
        else
        {
            /* Transition: '<S775>:46' */
            /* Transition: '<S775>:37' */
            /* Call Poke */
            VeLINR_y_PwrPanel_LIN_ChksumErr_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S770>/Poke' */
            /* FunctionCaller: '<S777>/Function Caller' incorporates:
             *  Constant: '<S777>/Constant'
             */
            /* Event: '<S775>:38' */
            Rte_Call_PokeCITR_b_PP_LIN_Cksm_Err_PokeCITR_b_PP_LIN_Cksm_Err
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__og, false);

            /* End of Outputs for SubSystem: '<S770>/Poke' */
        }
    }

    /* End of Chart: '<S771>/Chart' */
    /* End of Outputs for SubSystem: '<S633>/PowerPanel_LIN_Checksum_Error' */
    /* End of Outputs for SubSystem: '<S16>/PowerPanel_LIN_Checksum_Error' */
    /* Transition: '<S775>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_b_PwrPanel_LIN_ChksumErr' */

    /* SignalConversion generated from: '<S2>/VeLINR_b_PwrPanel_LIN_DataError' incorporates:
     *  Inport: '<Root>/VeLINR_b_PwrPanel_LIN_DataErrorTO'
     */
#if Rte_SysCon_VrntLR2B_PowerPanelLINDataError

    /* Outputs for Atomic SubSystem: '<S16>/PowerPanel_LIN_Data_Error' */
    /* SignalConversion generated from: '<S2>/VeLINR_b_PwrPanel_LIN_DataError' incorporates:
     *  Inport: '<Root>/VeLINR_b_PwrPanel_LIN_DataError'
     */
    rtb_TmpSignalConversionAtVeL_a5 =
        Rte_Read_VeLINR_b_PwrPanel_LIN_DataError_VeLINR_b_PwrPanel_LIN_DataError
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__gx);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S783>:1' */
    (void)
        Rte_Read_VeLINR_b_PwrPanel_LIN_DataErrorTO_VeLINR_b_PwrPanel_LIN_DataErrorTO
        (&tmpRead_y);

    /* Outputs for Atomic SubSystem: '<S634>/PowerPanel_LIN_Data_Error' */
    /* Chart: '<S779>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_PwrPanel_LIN_DataErrorTO'
     */
    if (tmpRead_y)
    {
        /* Transition: '<S783>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S783>:6' */
            /* Transition: '<S783>:25' */
            /* Call Fsft */
            VeLINR_y_PwrPanel_LIN_DataError_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S778>/Fsft' */
            /* FunctionCaller: '<S784>/Function Caller' */
            /* Event: '<S783>:39' */
            Rte_Call_FsftCITR_b_PP_LIN_Data_Err_FsftCITR_b_PP_LIN_Data_Err();

            /* End of Outputs for SubSystem: '<S778>/Fsft' */
            /* Transition: '<S783>:29' */
        }
        else
        {
            /* Transition: '<S783>:30' */
            /* Call Tmot */
            VeLINR_y_PwrPanel_LIN_DataError_CallStatus = 3U;

            /* Event: '<S783>:40' */
        }

        /* Transition: '<S783>:36' */
        /* Transition: '<S783>:23' */
    }
    else
    {
        /* Transition: '<S783>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_a5) == 133)
        {
            /* Transition: '<S783>:33' */
            /* Transition: '<S783>:35' */
            /* Call Nothing */
            VeLINR_y_PwrPanel_LIN_DataError_CallStatus = 4U;

            /* Transition: '<S783>:23' */
        }
        else
        {
            /* Transition: '<S783>:46' */
            /* Transition: '<S783>:37' */
            /* Call Poke */
            VeLINR_y_PwrPanel_LIN_DataError_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S778>/Poke' */
            /* FunctionCaller: '<S785>/Function Caller' incorporates:
             *  Constant: '<S785>/Constant'
             */
            /* Event: '<S783>:38' */
            Rte_Call_PokeCITR_b_PP_LIN_Data_Err_PokeCITR_b_PP_LIN_Data_Err
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__gx, false);

            /* End of Outputs for SubSystem: '<S778>/Poke' */
        }
    }

    /* End of Chart: '<S779>/Chart' */
    /* End of Outputs for SubSystem: '<S634>/PowerPanel_LIN_Data_Error' */
    /* End of Outputs for SubSystem: '<S16>/PowerPanel_LIN_Data_Error' */
    /* Transition: '<S783>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_b_PwrPanel_LIN_DataError' */

    /* SignalConversion generated from: '<S2>/VeLINR_b_PwrPanel_LIN_ParityErr' incorporates:
     *  Inport: '<Root>/VeLINR_b_PwrPanel_LIN_ParityErrTO'
     */
#if Rte_SysCon_VrntLR2B_PowerPanelLINParityError

    /* Outputs for Atomic SubSystem: '<S16>/PowerPanel_LIN_Parity_Error' */
    /* SignalConversion generated from: '<S2>/VeLINR_b_PwrPanel_LIN_ParityErr' incorporates:
     *  Inport: '<Root>/VeLINR_b_PwrPanel_LIN_ParityErr'
     */
    rtb_TmpSignalConversionAtVeL_fj =
        Rte_Read_VeLINR_b_PwrPanel_LIN_ParityErr_VeLINR_b_PwrPanel_LIN_ParityErr
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__ix);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S791>:1' */
    (void)
        Rte_Read_VeLINR_b_PwrPanel_LIN_ParityErrTO_VeLINR_b_PwrPanel_LIN_ParityErrTO
        (&tmpRead_z);

    /* Outputs for Atomic SubSystem: '<S635>/PowerPanel_LIN_Parity_Error' */
    /* Chart: '<S787>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_PwrPanel_LIN_ParityErrTO'
     */
    if (tmpRead_z)
    {
        /* Transition: '<S791>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S791>:6' */
            /* Transition: '<S791>:25' */
            /* Call Fsft */
            VeLINR_y_PwrPanel_LIN_ParityErr_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S786>/Fsft' */
            /* FunctionCaller: '<S792>/Function Caller' */
            /* Event: '<S791>:39' */
            Rte_Call_FsftCITR_b_PP_LIN_Parity_Err_FsftCITR_b_PP_LIN_Parity_Err();

            /* End of Outputs for SubSystem: '<S786>/Fsft' */
            /* Transition: '<S791>:29' */
        }
        else
        {
            /* Transition: '<S791>:30' */
            /* Call Tmot */
            VeLINR_y_PwrPanel_LIN_ParityErr_CallStatus = 3U;

            /* Event: '<S791>:40' */
        }

        /* Transition: '<S791>:36' */
        /* Transition: '<S791>:23' */
    }
    else
    {
        /* Transition: '<S791>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_fj) == 133)
        {
            /* Transition: '<S791>:33' */
            /* Transition: '<S791>:35' */
            /* Call Nothing */
            VeLINR_y_PwrPanel_LIN_ParityErr_CallStatus = 4U;

            /* Transition: '<S791>:23' */
        }
        else
        {
            /* Transition: '<S791>:46' */
            /* Transition: '<S791>:37' */
            /* Call Poke */
            VeLINR_y_PwrPanel_LIN_ParityErr_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S786>/Poke' */
            /* FunctionCaller: '<S793>/Function Caller' incorporates:
             *  Constant: '<S793>/Constant'
             */
            /* Event: '<S791>:38' */
            Rte_Call_PokeCITR_b_PP_LIN_Parity_Err_PokeCITR_b_PP_LIN_Parity_Err
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__ix, false);

            /* End of Outputs for SubSystem: '<S786>/Poke' */
        }
    }

    /* End of Chart: '<S787>/Chart' */
    /* End of Outputs for SubSystem: '<S635>/PowerPanel_LIN_Parity_Error' */
    /* End of Outputs for SubSystem: '<S16>/PowerPanel_LIN_Parity_Error' */
    /* Transition: '<S791>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_b_PwrPanel_LIN_ParityErr' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PwrPanelLidSwtSts120A_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PwrPanelLidSwtSts120A_ErrSts'
     */
    rtb_TmpSignalConversionAtVeL_c2 =
        Rte_Read_VeLINR_b_PwrPanelLidSwtSts120A_VeLINR_b_PwrPanelLidSwtSts120A
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_p);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PwrPanelLidSwtSts120A_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S798>:1' */
    (void)
        Rte_Read_VeLINR_b_PwrPanelLidSwtSts120A_TO_VeLINR_b_PwrPanelLidSwtSts120A_TO
        (&tmpRead_10);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S794>/Chart' */
    if (tmpRead_10)
    {
        /* Transition: '<S798>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S798>:6' */
            /* Transition: '<S798>:25' */
            /* Call Fsft */
            VeLINR_y_PwrPanelLidSwtSts120A_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S636>/Fsft' */
            /* FunctionCaller: '<S799>/Function Caller' */
            /* Event: '<S798>:39' */
            Rte_Call_FsftCITR_b_PPLidSwitchSts120A_FsftCITR_b_PPLidSwitchSts120A
                ();

            /* End of Outputs for SubSystem: '<S636>/Fsft' */
            /* Transition: '<S798>:29' */
        }
        else
        {
            /* Transition: '<S798>:30' */
            /* Call Tmot */
            VeLINR_y_PwrPanelLidSwtSts120A_CallStatus = 3U;

            /* Event: '<S798>:40' */
        }

        /* Transition: '<S798>:36' */
        /* Transition: '<S798>:23' */
    }
    else
    {
        /* Transition: '<S798>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_c2) == 133)
        {
            /* Transition: '<S798>:33' */
            /* Transition: '<S798>:35' */
            /* Call Nothing */
            VeLINR_y_PwrPanelLidSwtSts120A_CallStatus = 4U;

            /* Transition: '<S798>:23' */
        }
        else
        {
            /* Transition: '<S798>:46' */
            /* Transition: '<S798>:37' */
            /* Call Poke */
            VeLINR_y_PwrPanelLidSwtSts120A_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S636>/Poke' */
            /* FunctionCaller: '<S800>/Function Caller' incorporates:
             *  Constant: '<S800>/Constant'
             */
            /* Event: '<S798>:38' */
            Rte_Call_PokeCITR_b_PPLidSwitchSts120A_PokeCITR_b_PPLidSwitchSts120A
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_p, false);

            /* End of Outputs for SubSystem: '<S636>/Poke' */
        }
    }

    /* End of Chart: '<S794>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PwrPanelLidSwtSts120B_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PwrPanelLidSwtSts120B_ErrSts'
     */
    /* Transition: '<S798>:19' */
    rtb_TmpSignalConversionAtVeL_bq =
        Rte_Read_VeLINR_b_PwrPanelLidSwtSts120B_VeLINR_b_PwrPanelLidSwtSts120B
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__lu);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PwrPanelLidSwtSts120B_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S805>:1' */
    (void)
        Rte_Read_VeLINR_b_PwrPanelLidSwtSts120B_TO_VeLINR_b_PwrPanelLidSwtSts120B_TO
        (&tmpRead_11);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S801>/Chart' */
    if (tmpRead_11)
    {
        /* Transition: '<S805>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S805>:6' */
            /* Transition: '<S805>:25' */
            /* Call Fsft */
            VeLINR_y_PwrPanelLidSwtSts120B_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S637>/Fsft' */
            /* FunctionCaller: '<S806>/Function Caller' */
            /* Event: '<S805>:39' */
            Rte_Call_FsftCITR_b_PPLidSwitchSts120B_FsftCITR_b_PPLidSwitchSts120B
                ();

            /* End of Outputs for SubSystem: '<S637>/Fsft' */
            /* Transition: '<S805>:29' */
        }
        else
        {
            /* Transition: '<S805>:30' */
            /* Call Tmot */
            VeLINR_y_PwrPanelLidSwtSts120B_CallStatus = 3U;

            /* Event: '<S805>:40' */
        }

        /* Transition: '<S805>:36' */
        /* Transition: '<S805>:23' */
    }
    else
    {
        /* Transition: '<S805>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_bq) == 133)
        {
            /* Transition: '<S805>:33' */
            /* Transition: '<S805>:35' */
            /* Call Nothing */
            VeLINR_y_PwrPanelLidSwtSts120B_CallStatus = 4U;

            /* Transition: '<S805>:23' */
        }
        else
        {
            /* Transition: '<S805>:46' */
            /* Transition: '<S805>:37' */
            /* Call Poke */
            VeLINR_y_PwrPanelLidSwtSts120B_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S637>/Poke' */
            /* FunctionCaller: '<S807>/Function Caller' incorporates:
             *  Constant: '<S807>/Constant'
             */
            /* Event: '<S805>:38' */
            Rte_Call_PokeCITR_b_PPLidSwitchSts120B_PokeCITR_b_PPLidSwitchSts120B
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__lu, false);

            /* End of Outputs for SubSystem: '<S637>/Poke' */
        }
    }

    /* End of Chart: '<S801>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PwrPanelLidSwtSts240_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PwrPanelLidSwtSts240_ErrSts'
     */
    /* Transition: '<S805>:19' */
    rtb_TmpSignalConversionAtVeL_gy =
        Rte_Read_VeLINR_b_PwrPanelLidSwtSts240_VeLINR_b_PwrPanelLidSwtSts240
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_n);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PwrPanelLidSwtSts240TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S812>:1' */
    (void)
        Rte_Read_VeLINR_b_PwrPanelLidSwtSts240TO_VeLINR_b_PwrPanelLidSwtSts240TO
        (&tmpRead_12);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S808>/Chart' */
    if (tmpRead_12)
    {
        /* Transition: '<S812>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S812>:6' */
            /* Transition: '<S812>:25' */
            /* Call Fsft */
            VeLINR_y_PwrPanelLidSwtSts240_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S638>/Fsft' */
            /* FunctionCaller: '<S813>/Function Caller' */
            /* Event: '<S812>:39' */
            Rte_Call_FsftCITR_b_PPLidSwitchSts240_FsftCITR_b_PPLidSwitchSts240();

            /* End of Outputs for SubSystem: '<S638>/Fsft' */
            /* Transition: '<S812>:29' */
        }
        else
        {
            /* Transition: '<S812>:30' */
            /* Call Tmot */
            VeLINR_y_PwrPanelLidSwtSts240_CallStatus = 3U;

            /* Event: '<S812>:40' */
        }

        /* Transition: '<S812>:36' */
        /* Transition: '<S812>:23' */
    }
    else
    {
        /* Transition: '<S812>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_gy) == 133)
        {
            /* Transition: '<S812>:33' */
            /* Transition: '<S812>:35' */
            /* Call Nothing */
            VeLINR_y_PwrPanelLidSwtSts240_CallStatus = 4U;

            /* Transition: '<S812>:23' */
        }
        else
        {
            /* Transition: '<S812>:46' */
            /* Transition: '<S812>:37' */
            /* Call Poke */
            VeLINR_y_PwrPanelLidSwtSts240_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S638>/Poke' */
            /* FunctionCaller: '<S814>/Function Caller' incorporates:
             *  Constant: '<S814>/Constant'
             */
            /* Event: '<S812>:38' */
            Rte_Call_PokeCITR_b_PPLidSwitchSts240_PokeCITR_b_PPLidSwitchSts240
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_n, false);

            /* End of Outputs for SubSystem: '<S638>/Poke' */
        }
    }

    /* End of Chart: '<S808>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_PowerPanel_RatedPower_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_PowerPanel_RatedPower_ErrSts'
     */
    /* Transition: '<S812>:19' */
    rtb_TmpSignalConversionAtVe_mbf =
        Rte_Read_VeLINR_y_PowerPanel_RatedPower_VeLINR_y_PowerPanel_RatedPower
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_y_h);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_PowerPanel_RatedPowerTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S819>:1' */
    (void)
        Rte_Read_VeLINR_b_PowerPanel_RatedPowerTO_VeLINR_b_PowerPanel_RatedPowerTO
        (&tmpRead_13);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S815>/Chart' */
    if (tmpRead_13)
    {
        /* Transition: '<S819>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S819>:6' */
            /* Transition: '<S819>:25' */
            /* Call Fsft */
            VeLINR_y_PowerPanel_RatedPower_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S639>/Fsft' */
            /* FunctionCaller: '<S820>/Function Caller' */
            /* Event: '<S819>:39' */
            Rte_Call_FsftCITR_P_PPRatedPower_FsftCITR_P_PPRatedPower();

            /* End of Outputs for SubSystem: '<S639>/Fsft' */
            /* Transition: '<S819>:29' */
        }
        else
        {
            /* Transition: '<S819>:30' */
            /* Call Tmot */
            VeLINR_y_PowerPanel_RatedPower_CallStatus = 3U;

            /* Event: '<S819>:40' */
        }

        /* Transition: '<S819>:36' */
        /* Transition: '<S819>:23' */
    }
    else
    {
        /* Transition: '<S819>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVe_mbf) == 133)
        {
            /* Transition: '<S819>:33' */
            /* Transition: '<S819>:35' */
            /* Call Nothing */
            VeLINR_y_PowerPanel_RatedPower_CallStatus = 4U;

            /* Transition: '<S819>:23' */
        }
        else
        {
            /* Transition: '<S819>:46' */
            /* Transition: '<S819>:37' */
            /* Call Poke */
            VeLINR_y_PowerPanel_RatedPower_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S639>/Poke' */
            /* FunctionCaller: '<S821>/Function Caller' incorporates:
             *  Constant: '<S821>/Constant'
             */
            /* Event: '<S819>:38' */
            Rte_Call_PokeCITR_P_PPRatedPower_PokeCITR_P_PPRatedPower
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR_y_h, false);

            /* End of Outputs for SubSystem: '<S639>/Poke' */
        }
    }

    /* End of Chart: '<S815>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_RsErr_SPP_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_RsErr_SPP_ErrSts'
     */
    /* Transition: '<S819>:19' */
    rtb_TmpSignalConversionAtVeL_mk =
        Rte_Read_VeLINR_b_RsErr_SPP_VeLINR_b_RsErr_SPP
        (&LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__iw);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_RsErr_SPP_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S826>:1' */
    (void)Rte_Read_VeLINR_b_RsErr_SPP_TO_VeLINR_b_RsErr_SPP_TO(&tmpRead_14);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S822>/Chart' */
    if (tmpRead_14)
    {
        /* Transition: '<S826>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S826>:6' */
            /* Transition: '<S826>:25' */
            /* Call Fsft */
            VeLINR_y_RsErr_SPP_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S640>/Fsft' */
            /* FunctionCaller: '<S827>/Function Caller' */
            /* Event: '<S826>:39' */
            Rte_Call_FsftCITR_b_RsErrSPP_FsftCITR_b_RsErrSPP();

            /* End of Outputs for SubSystem: '<S640>/Fsft' */
            /* Transition: '<S826>:29' */
        }
        else
        {
            /* Transition: '<S826>:30' */
            /* Call Tmot */
            VeLINR_y_RsErr_SPP_CallStatus = 3U;

            /* Event: '<S826>:40' */
        }

        /* Transition: '<S826>:36' */
        /* Transition: '<S826>:23' */
    }
    else
    {
        /* Transition: '<S826>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_mk) == 133)
        {
            /* Transition: '<S826>:33' */
            /* Transition: '<S826>:35' */
            /* Call Nothing */
            VeLINR_y_RsErr_SPP_CallStatus = 4U;

            /* Transition: '<S826>:23' */
        }
        else
        {
            /* Transition: '<S826>:46' */
            /* Transition: '<S826>:37' */
            /* Call Poke */
            VeLINR_y_RsErr_SPP_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S640>/Poke' */
            /* FunctionCaller: '<S828>/Function Caller' incorporates:
             *  Constant: '<S828>/Constant'
             */
            /* Event: '<S826>:38' */
            Rte_Call_PokeCITR_b_RsErrSPP_PokeCITR_b_RsErrSPP
                (LR2B_FUNC_ac_B.TmpSignalConversionAtVeLINR__iw, false);

            /* End of Outputs for SubSystem: '<S640>/Poke' */
        }
    }

    /* End of Chart: '<S822>/Chart' */
    /* Transition: '<S826>:19' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
}

/* Model initialize function */
FUNC(void, LR2B_FUNC_CODE) LR2B_FUNC_ac_Init(void)
{
    /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
