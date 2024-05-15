/*
 * File: LR1B_FUNC_ac.c
 *
 * Code generated for Simulink model 'LR1B_FUNC_ac'.
 *
 * Model version                  : 1.55
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Apr  6 09:36:28 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "LR1B_FUNC_ac.h"

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_LR1B_FUNC
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(boolean, LR1B_FUNC_VAR_INIT) KeLR1B_b_CanLocStatusBypEnbl =
    0;                                 /* Referenced by: '<S16>/Calib' */
static volatile CONST(TePWMD_e_CanLocStatus, LR1B_FUNC_VAR_INIT)
    KeLR1B_e_CanLocStatus = CePWMD_e_LOC_Disable;/* Referenced by: '<S17>/Calib' */

#define STOP_SEC_CALIB_UNSPECIFIED_LR1B_FUNC
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_LR1B_FUNC
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_VrntLR1B_AADCalActv

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_AAD_CalActv_CallStatus;/* '<S30>/Chart' */

#endif

#if Rte_SysCon_VrntLR1B_AADCalStat

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_AAD_CalStat_CallStatus;/* '<S36>/Chart' */

#endif

#if Rte_SysCon_VrntLR1B_AADCurrPos

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_AAD_CurrPos_CallStatus;/* '<S42>/Chart' */

#endif

#if Rte_SysCon_VrntLR1B_AADErrMechBreak

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_AAD_ErrMechBreak_CallStatus;/* '<S50>/Chart' */

#endif

#if Rte_SysCon_VrntLR1B_AADErrMechStuck

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_AAD_ErrMechStuck_CallStatus;/* '<S56>/Chart' */

#endif

#if Rte_SysCon_VrntLR1B_AADErrOvrTemp

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_AAD_ErrOvrTemp_CallStatus;/* '<S62>/Chart' */

#endif

#if Rte_SysCon_VrntLR1B_AADErrOvrVolt

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_AAD_ErrOvrVolt_CallStatus;/* '<S68>/Chart' */

#endif

#if Rte_SysCon_VrntLR1B_AADErrUnVolt

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_AAD_ErrUnVolt_CallStatus;/* '<S74>/Chart' */

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrCoreTemp

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_AirHeatrCoreTemp_CallStatus;/* '<S570>/Chart' */

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrDmgHVISnsrFlt

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_AirHeatrDmgHVISnsrFlt_CallStatus;/* '<S638>/Chart' */

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrDmgIntHwProtn

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_AirHeatrDmgIntHwProtn_CallStatus;/* '<S654>/Chart' */

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrDmgMemErr

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_AirHeatrDmgMemErr_CallStatus;/* '<S662>/Chart' */

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrHVmeas

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_AirHeatrHVmeas_CallStatus;/* '<S578>/Chart' */

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrICns

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_AirHeatrICns_CallStatus;/* '<S586>/Chart' */

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrPCBTemp

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_AirHeatrPCBTemp_CallStatus;/* '<S594>/Chart' */

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrPwrCns

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_AirHeatrPwrCns_CallStatus;/* '<S602>/Chart' */

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrSts

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_AirHeatrSts_CallStatus;/* '<S610>/Chart' */

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrWarnFltInCom

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_AirHeatrWarnFltInCom_CallStatus;/* '<S678>/Chart' */

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrWarnHvOutOfRng

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_AirHeatrWarnHvOutOfRng_CallStatus;/* '<S694>/Chart' */

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrWarnPCBOvrTmp

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_AirHeatrWarnPCBOvrTmp_CallStatus;/* '<S710>/Chart' */

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrDmgCircForDrvrShoOrOpen

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_AirHtrDmgCirDrvrShoOpn_CallStatus;/* '<S630>/Chart' */

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrDmgHtrCoreTmpSnsrFlt

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_AirHtrDmgHtrCorTS_Flt_CallStatus;/* '<S646>/Chart' */

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrDmgPCBTmpSnsrFlt

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_AirHtrDmgPCBTmpSnsrFlt_CallStatus;/* '<S670>/Chart' */

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrWarnICnsOutOfRng

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_AirHtrWarnICnsOutOfRng_CallStatus;/* '<S702>/Chart' */

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrWarnTmpOvrheatg

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_AirHtrWarnTmpOvrheatg_CallStatus;/* '<S718>/Chart' */

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrWarnULoOutOfRng

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_AirHtrWarnULoOutOfRng_CallStatus;/* '<S726>/Chart' */

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrWarnHtrCoreOvrTmp

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_AirHtrWrnHtrCorOvrTmp_CallStatus;/* '<S686>/Chart' */

#endif

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_BCP_AIR_PRE_ERR_CallStatus;/* '<S102>/Chart' */
static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_BCP_CURR_CallStatus;/* '<S109>/Chart' */
static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_BCP_DBLK_ACTV_CallStatus;/* '<S116>/Chart' */
static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_BCP_DR_RN_ERR_CallStatus;/* '<S123>/Chart' */
static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_BCP_FL_SAFE_ACTVTD_CallStatus;/* '<S130>/Chart' */
static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_BCP_LMP_HM_AN_ON_CallStatus;/* '<S137>/Chart' */
static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_BCP_MONTRNG_RPM_CallStatus;/* '<S144>/Chart' */
static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_BCP_NODE_ERR_CallStatus;/* '<S151>/Chart' */
static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_BCP_OVR_CUR_ERR_CallStatus;/* '<S158>/Chart' */
static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_BCP_OVR_TMP_ERR_CallStatus;/* '<S165>/Chart' */
static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_BCP_POST_RUN_STAT_CallStatus;/* '<S172>/Chart' */
static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_BCP_RPM_ACTUAL_CallStatus;/* '<S179>/Chart' */
static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_BCP_RPM_TARGET_CallStatus;/* '<S186>/Chart' */
static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_BCP_SUPPLIER_CallStatus;/* '<S221>/Chart' */
static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_BCP_TEMP_CallStatus;/* '<S193>/Chart' */
static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_BCP_VERSION_CallStatus;/* '<S226>/Chart' */
static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_BCP_VLTG_CallStatus;/* '<S200>/Chart' */
static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_BCP_VLTG_ERR_CallStatus;/* '<S207>/Chart' */
static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_CPV_CalStat_CallStatus;/* '<S237>/Chart' */
static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_CPV_ERR_CallStatus;/* '<S242>/Chart' */
static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_CPV_MotorVolt_CallStatus;/* '<S249>/Chart' */
static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_CPV_PosAct_CallStatus;/* '<S254>/Chart' */
static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_CPV_Sts_CallStatus;/* '<S261>/Chart' */

#if Rte_SysCon_VrntLR1B_EEXVBoardTemp

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_EEXV_Board_Temp_CallStatus;/* '<S282>/Chart' */

#endif

#if Rte_SysCon_VrntLR1B_EEXVCalRq

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_EEXV_CalRq_CallStatus;/* '<S288>/Chart' */

#endif

#if Rte_SysCon_VrntLR1B_EEXVCalStat

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_EEXV_CalStat_CallStatus;/* '<S294>/Chart' */

#endif

#if Rte_SysCon_VrntLR1B_EEXVERR

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_EEXV_ERR_CallStatus;/* '<S300>/Chart' */

#endif

#if Rte_SysCon_VrntLR1B_EEXVPosAct

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_EEXV_PosAct_CallStatus;/* '<S306>/Chart' */

#endif

#if Rte_SysCon_VrntLR1B_EEXVRefrigerantPressure

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_EEXV_Refrig_Pressure_CallStatus;/* '<S314>/Chart' */

#endif

#if Rte_SysCon_VrntLR1B_EEXVRefrigerantTemp

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_EEXV_Refrigerant_Temp_CallStatus;/* '<S322>/Chart' */

#endif

#if Rte_SysCon_VrntLR1B_EEXVSts

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_EEXV_Sts_CallStatus;/* '<S330>/Chart' */

#endif

#if Rte_SysCon_VrntLR1B_EEXVSupplyVolt

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_EEXV_SupplyVolt_CallStatus;/* '<S336>/Chart' */

#endif

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_EOPA_CURR_CallStatus;/* '<S362>/Chart' */
static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_EOPA_DR_RN_ER_CallStatus;/* '<S369>/Chart' */
static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_EOPA_HW_VER_CallStatus;/* '<S477>/Chart' */
static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_EOPA_LMP_HM_AN_ON_CallStatus;/* '<S376>/Chart' */
static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_EOPA_LOW_TMP_STAT_CallStatus;/* '<S383>/Chart' */
static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_EOPA_MONTRNG_RPM_CallStatus;/* '<S390>/Chart' */
static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_EOPA_OIL_TEMP_CallStatus;/* '<S468>/Chart' */
static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_EOPA_OV_CUR_ER_CallStatus;/* '<S397>/Chart' */
static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_EOPA_OV_TMP_ER_CallStatus;/* '<S404>/Chart' */
static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_EOPA_POST_RUN_STAT_CallStatus;/* '<S411>/Chart' */
static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_EOPA_RPM_ACTL_CallStatus;/* '<S418>/Chart' */
static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_EOPA_RPM_TGT_CallStatus;/* '<S425>/Chart' */
static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_EOPA_SW_VER_CallStatus;/* '<S482>/Chart' */
static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_EOPA_Stall_Event_CallStatus;/* '<S432>/Chart' */
static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_EOPA_TEMP_CallStatus;/* '<S439>/Chart' */
static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_EOPA_VLTG_CallStatus;/* '<S446>/Chart' */
static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_EOPA_VLTG_ER_CallStatus;/* '<S453>/Chart' */

#if Rte_SysCon_VrntLR1B_EXVMBoardTemp

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_EXVM_Board_Temp_CallStatus;/* '<S498>/Chart' */

#endif

#if Rte_SysCon_VrntLR1B_EXVMCalRq

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_EXVM_CalRq_CallStatus;/* '<S504>/Chart' */

#endif

#if Rte_SysCon_VrntLR1B_EXVMCalStat

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_EXVM_CalStat_CallStatus;/* '<S510>/Chart' */

#endif

#if Rte_SysCon_VrntLR1B_EXVMERR

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_EXVM_ERR_CallStatus;/* '<S516>/Chart' */

#endif

#if Rte_SysCon_VrntLR1B_EXVMPosAct

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_EXVM_PosAct_CallStatus;/* '<S522>/Chart' */

#endif

#if Rte_SysCon_VrntLR1B_EXVMRefrigerantPressure

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_EXVM_Refrig_Pressure_CallStatus;/* '<S530>/Chart' */

#endif

#if Rte_SysCon_VrntLR1B_EXVMRefrigerantTemp

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_EXVM_Refrigerant_Temp_CallStatus;/* '<S538>/Chart' */

#endif

#if Rte_SysCon_VrntLR1B_EXVMSts

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_EXVM_Sts_CallStatus;/* '<S546>/Chart' */

#endif

#if Rte_SysCon_VrntLR1B_EXVMSupplyVolt

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_EXVM_SupplyVolt_CallStatus;/* '<S552>/Chart' */

#endif

#if Rte_SysCon_VrntLR1B_LTRBVCalStat

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_LTRBV_CalStat_CallStatus;/* '<S746>/Chart' */

#endif

#if Rte_SysCon_VrntLR1B_LTRBVERR

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_LTRBV_ERR_CallStatus;/* '<S754>/Chart' */

#endif

#if Rte_SysCon_VrntLR1B_LTRBVMotorVolt

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_LTRBV_MotorVolt_CallStatus;/* '<S762>/Chart' */

#endif

#if Rte_SysCon_VrntLR1B_LTRBVPosAct

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_LTRBV_PosAct_CallStatus;/* '<S770>/Chart' */

#endif

#if Rte_SysCon_VrntLR1B_LTRBVSts

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_LTRBV_Sts_CallStatus;/* '<S778>/Chart' */

#endif

#if Rte_SysCon_VrntLR1B_RsErrAAD

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_RsErr_AAD_CallStatus;/* '<S80>/Chart' */

#endif

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_RsErr_BCP_PUMP_CallStatus;/* '<S214>/Chart' */
static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_RsErr_CPV_CallStatus;/* '<S266>/Chart' */

#if Rte_SysCon_VrntLR1B_RsErrEAH

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_RsErr_EAH_CallStatus;/* '<S734>/Chart' */

#endif

#if Rte_SysCon_VrntLR1B_RsErrEEXV

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_RsErr_EEXV_CallStatus;/* '<S342>/Chart' */

#endif

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_RsErr_EOPA_CallStatus;/* '<S460>/Chart' */

#if Rte_SysCon_VrntLR1B_RsErrEXVM

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_RsErr_EXVM_CallStatus;/* '<S558>/Chart' */

#endif

#if Rte_SysCon_VrntLR1B_RsErrLTRBV

static VAR(uint8, LR1B_FUNC_VAR_INIT) VeLINR_y_RsErr_LTRBV_CallStatus;/* '<S786>/Chart' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_LR1B_FUNC
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_LR1B_FUNC
#include "MemMap.h"

VAR(B_LR1B_FUNC_ac_T, LR1B_FUNC_VAR_INIT) LR1B_FUNC_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_LR1B_FUNC
#include "MemMap.h"

/* Model step function for TID1 */
FUNC(void, LR1B_FUNC_CODE) LR1B_FUNC_MedTEB(void) /* Explicit Task: MedTEB */
{
    /* local block i/o variables */
#if Rte_SysCon_VrntLR1B_AADCalActv

    uint8 rtb_TmpSignalConversionAtVeLINR;

#endif

#if Rte_SysCon_VrntLR1B_AADCalStat

    uint8 rtb_TmpSignalConversionAtVeLI_a;

#endif

#if Rte_SysCon_VrntLR1B_AADCurrPos

    uint8 rtb_TmpSignalConversionAtVeLI_m;

#endif

#if Rte_SysCon_VrntLR1B_AADErrMechBreak

    uint8 rtb_TmpSignalConversionAtVeL_m1;

#endif

#if Rte_SysCon_VrntLR1B_AADErrMechStuck

    uint8 rtb_TmpSignalConversionAtVeLI_d;

#endif

#if Rte_SysCon_VrntLR1B_AADErrOvrTemp

    uint8 rtb_TmpSignalConversionAtVeLI_k;

#endif

#if Rte_SysCon_VrntLR1B_AADErrOvrVolt

    uint8 rtb_TmpSignalConversionAtVeL_dc;

#endif

#if Rte_SysCon_VrntLR1B_AADErrUnVolt

    uint8 rtb_TmpSignalConversionAtVeL_mb;

#endif

#if Rte_SysCon_VrntLR1B_RsErrAAD

    uint8 rtb_TmpSignalConversionAtVeLI_j;

#endif

    uint8 rtb_TmpSignalConversionAtVeLI_o;
    uint8 rtb_TmpSignalConversionAtVeL_db;
    uint8 rtb_TmpSignalConversionAtVeLI_g;
    uint8 rtb_TmpSignalConversionAtVeLI_e;
    uint8 rtb_TmpSignalConversionAtVeLI_f;
    uint8 rtb_TmpSignalConversionAtVeL_kp;
    uint8 rtb_TmpSignalConversionAtVeL_fh;
    uint8 rtb_TmpSignalConversionAtVeL_dt;
    uint8 rtb_TmpSignalConversionAtVeL_g4;
    uint8 rtb_TmpSignalConversionAtVeL_gq;
    uint8 rtb_TmpSignalConversionAtVeL_go;
    uint8 rtb_TmpSignalConversionAtVeL_mc;
    uint8 rtb_TmpSignalConversionAtVeL_mv;
    uint8 rtb_TmpSignalConversionAtVeLI_i;
    uint8 rtb_TmpSignalConversionAtVeL_j4;
    uint8 rtb_TmpSignalConversionAtVeL_ap;
    uint8 rtb_TmpSignalConversionAtVeL_m0;
    uint8 rtb_TmpSignalConversionAtVeL_eo;
    uint8 rtb_TmpSignalConversionAtVeL_is;
    uint8 rtb_TmpSignalConversionAtVeLI_h;
    uint8 rtb_TmpSignalConversionAtVe_j42;
    uint8 rtb_TmpSignalConversionAtVeLI_b;
    uint8 rtb_TmpSignalConversionAtVeL_bb;
    uint8 rtb_TmpSignalConversionAtVeL_mg;
    uint8 rtb_TmpSignalConversionAtVeL_b4;

#if Rte_SysCon_VrntLR1B_EEXVBoardTemp

    uint8 rtb_TmpSignalConversionAtVeL_iv;

#endif

#if Rte_SysCon_VrntLR1B_EEXVCalRq

    uint8 rtb_TmpSignalConversionAtVeLI_c;

#endif

#if Rte_SysCon_VrntLR1B_EEXVCalStat

    uint8 rtb_TmpSignalConversionAtVeLI_n;

#endif

#if Rte_SysCon_VrntLR1B_EEXVERR

    uint8 rtb_TmpSignalConversionAtVeL_n0;

#endif

#if Rte_SysCon_VrntLR1B_EEXVPosAct

    uint8 rtb_TmpSignalConversionAtVeL_al;

#endif

#if Rte_SysCon_VrntLR1B_EEXVRefrigerantPressure

    uint8 rtb_TmpSignalConversionAtVeLI_l;

#endif

#if Rte_SysCon_VrntLR1B_EEXVRefrigerantTemp

    uint8 rtb_TmpSignalConversionAtVeL_cy;

#endif

#if Rte_SysCon_VrntLR1B_EEXVSts

    uint8 rtb_TmpSignalConversionAtVeL_dv;

#endif

#if Rte_SysCon_VrntLR1B_EEXVSupplyVolt

    uint8 rtb_TmpSignalConversionAtVeL_ht;

#endif

#if Rte_SysCon_VrntLR1B_RsErrEEXV

    uint8 rtb_TmpSignalConversionAtVeL_ar;

#endif

    uint8 rtb_TmpSignalConversionAtVeL_nf;
    uint8 rtb_TmpSignalConversionAtVeL_ie;
    uint8 rtb_TmpSignalConversionAtVeL_eb;
    uint8 rtb_TmpSignalConversionAtVeL_fq;
    uint8 rtb_TmpSignalConversionAtVeL_nu;
    uint8 rtb_TmpSignalConversionAtVeL_dn;
    uint8 rtb_TmpSignalConversionAtVeLI_p;
    uint8 rtb_TmpSignalConversionAtVe_dnh;
    uint8 rtb_TmpSignalConversionAtVeL_cq;
    uint8 rtb_TmpSignalConversionAtVeL_gv;
    uint8 rtb_TmpSignalConversionAtVeL_dr;
    uint8 rtb_TmpSignalConversionAtVeL_ot;
    uint8 rtb_TmpSignalConversionAtVeL_e0;
    uint8 rtb_TmpSignalConversionAtVe_mgq;
    uint8 rtb_TmpSignalConversionAtVeL_jp;
    uint8 rtb_TmpSignalConversionAtVeL_jz;
    uint8 rtb_TmpSignalConversionAtVeL_p0;
    uint8 rtb_TmpSignalConversionAtVeL_o4;

#if Rte_SysCon_VrntLR1B_EXVMBoardTemp

    uint8 rtb_TmpSignalConversionAtVeL_g0;

#endif

#if Rte_SysCon_VrntLR1B_EXVMCalRq

    uint8 rtb_TmpSignalConversionAtVeL_ac;

#endif

#if Rte_SysCon_VrntLR1B_EXVMCalStat

    uint8 rtb_TmpSignalConversionAtVeL_gr;

#endif

#if Rte_SysCon_VrntLR1B_EXVMERR

    uint8 rtb_TmpSignalConversionAtVeL_jv;

#endif

#if Rte_SysCon_VrntLR1B_EXVMPosAct

    uint8 rtb_TmpSignalConversionAtVeL_jq;

#endif

#if Rte_SysCon_VrntLR1B_EXVMRefrigerantPressure

    uint8 rtb_TmpSignalConversionAtVeL_dl;

#endif

#if Rte_SysCon_VrntLR1B_EXVMRefrigerantTemp

    uint8 rtb_TmpSignalConversionAtVe_dr5;

#endif

#if Rte_SysCon_VrntLR1B_EXVMSts

    uint8 rtb_TmpSignalConversionAtVeL_gt;

#endif

#if Rte_SysCon_VrntLR1B_EXVMSupplyVolt

    uint8 rtb_TmpSignalConversionAtVeL_a1;

#endif

#if Rte_SysCon_VrntLR1B_RsErrEXVM

    uint8 rtb_TmpSignalConversionAtVeL_dd;

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrCoreTemp

    uint8 rtb_TmpSignalConversionAtVeL_be;

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrHVmeas

    uint8 rtb_TmpSignalConversionAtVeL_ob;

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrICns

    uint8 rtb_TmpSignalConversionAtVeL_aa;

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrPCBTemp

    uint8 rtb_TmpSignalConversionAtVe_mbm;

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrPwrCns

    uint8 rtb_TmpSignalConversionAtVeL_de;

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrSts

    uint8 rtb_TmpSignalConversionAtVeL_kg;

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrDmgCircForDrvrShoOrOpen

    uint8 rtb_TmpSignalConversionAtVeL_nc;

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrDmgHVISnsrFlt

    uint8 rtb_TmpSignalConversionAtVe_a1v;

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrDmgHtrCoreTmpSnsrFlt

    uint8 rtb_TmpSignalConversionAtVeL_dz;

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrDmgIntHwProtn

    uint8 rtb_TmpSignalConversionAtVeL_pk;

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrDmgMemErr

    uint8 rtb_TmpSignalConversionAtVeL_hj;

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrDmgPCBTmpSnsrFlt

    uint8 rtb_TmpSignalConversionAtVeL_lo;

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrWarnFltInCom

    uint8 rtb_TmpSignalConversionAtVe_drh;

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrWarnHtrCoreOvrTmp

    uint8 rtb_TmpSignalConversionAtVeL_ov;

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrWarnHvOutOfRng

    uint8 rtb_TmpSignalConversionAtVeL_ca;

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrWarnICnsOutOfRng

    uint8 rtb_TmpSignalConversionAtVeL_cb;

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrWarnPCBOvrTmp

    uint8 rtb_TmpSignalConversionAtVeL_c3;

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrWarnTmpOvrheatg

    uint8 rtb_TmpSignalConversionAtVe_eos;

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrWarnULoOutOfRng

    uint8 rtb_TmpSignalConversionAtVeL_b5;

#endif

#if Rte_SysCon_VrntLR1B_RsErrEAH

    uint8 rtb_TmpSignalConversionAtVeL_bp;

#endif

#if Rte_SysCon_VrntLR1B_LTRBVCalStat

    uint8 rtb_TmpSignalConversionAtVeL_ah;

#endif

#if Rte_SysCon_VrntLR1B_LTRBVERR

    uint8 rtb_TmpSignalConversionAtVeL_iy;

#endif

#if Rte_SysCon_VrntLR1B_LTRBVMotorVolt

    uint8 rtb_TmpSignalConversionAtVeL_md;

#endif

#if Rte_SysCon_VrntLR1B_LTRBVPosAct

    uint8 rtb_TmpSignalConversionAtVeL_iw;

#endif

#if Rte_SysCon_VrntLR1B_LTRBVSts

    uint8 rtb_TmpSignalConversionAtVeL_bt;

#endif

#if Rte_SysCon_VrntLR1B_RsErrLTRBV

    uint8 rtb_TmpSignalConversionAtVeL_dy;

#endif

    uint8 tmpRead;

#if Rte_SysCon_VrntLR1B_AADCalStat

    boolean tmpRead_0;

#endif

#if Rte_SysCon_VrntLR1B_AADCurrPos

    boolean tmpRead_1;

#endif

#if Rte_SysCon_VrntLR1B_AADErrMechStuck

    boolean tmpRead_2;

#endif

#if Rte_SysCon_VrntLR1B_AADErrOvrTemp

    boolean tmpRead_3;

#endif

#if Rte_SysCon_VrntLR1B_AADErrOvrVolt

    boolean tmpRead_4;

#endif

#if Rte_SysCon_VrntLR1B_AADErrUnVolt

    boolean tmpRead_5;

#endif

#if Rte_SysCon_VrntLR1B_RsErrAAD

    boolean tmpRead_6;

#endif

    boolean tmpRead_7;
    boolean tmpRead_8;
    boolean tmpRead_9;
    boolean tmpRead_a;
    boolean tmpRead_b;
    boolean tmpRead_c;

#if Rte_SysCon_VrntLR1B_EEXVBoardTemp

    boolean tmpRead_d;

#endif

#if Rte_SysCon_VrntLR1B_EEXVCalStat

    boolean tmpRead_e;

#endif

    boolean tmpRead_f;
    boolean tmpRead_g;
    boolean tmpRead_h;

#if Rte_SysCon_VrntLR1B_EXVMBoardTemp

    boolean tmpRead_i;

#endif

#if Rte_SysCon_VrntLR1B_EXVMCalStat

    boolean tmpRead_j;

#endif

#if Rte_SysCon_VrntLR1B_EXVMERR

    boolean tmpRead_k;

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrCoreTemp

    boolean tmpRead_l;

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrDmgCircForDrvrShoOrOpen

    boolean tmpRead_m;

#endif

#if Rte_SysCon_VrntLR1B_LTRBVCalStat

    boolean tmpRead_n;

#endif

#if Rte_SysCon_VrntLR1B_LTRBVERR

    boolean tmpRead_o;

#endif

#if Rte_SysCon_VrntLR1B_LTRBVPosAct

    boolean tmpRead_p;

#endif

#if Rte_SysCon_VrntLR1B_RsErrLTRBV

    boolean tmpRead_q;

#endif

    TePWMD_e_CanLocStatus rtb_Switch;
    boolean FA_out_bd;
    boolean FA_out_bk;
    boolean FA_out_bl;
    boolean FA_out_cq;
    boolean FA_out_cx;
    boolean FA_out_e;
    boolean FA_out_fc;
    boolean FA_out_fqg;
    boolean FA_out_fr;
    boolean FA_out_hi;
    boolean FA_out_ir;
    boolean FA_out_iz;
    boolean FA_out_k5;
    boolean FA_out_k5g;
    boolean FA_out_ki;
    boolean FA_out_kt;
    boolean FA_out_lf;
    boolean FA_out_lh;
    boolean FA_out_m1;
    boolean FA_out_md;
    boolean FA_out_ml;
    boolean FA_out_mp;
    boolean FA_out_mu;
    boolean FA_out_nu;
    boolean FA_out_o2;
    boolean FA_out_ou;
    boolean FA_out_ox;
    boolean FA_out_oxp;
    boolean FA_out_p0;
    boolean FA_out_pc;
    boolean FA_out_pm;
    boolean FA_out_pp;
    boolean FA_out_pw;
    boolean FA_out_py;
    boolean rtb_RelationalOperator;

#if Rte_SysCon_VrntLR1B_AADCalActv || Rte_SysCon_VrntLR1B_AADCurrPos

    boolean FA_out_nj;

#endif

    boolean FA_out_lhp;

#if Rte_SysCon_VrntLR1B_EEXVCalRq || Rte_SysCon_VrntLR1B_EEXVCalStat

    boolean FA_out_hx;

#endif

#if Rte_SysCon_VrntLR1B_EEXVERR

    boolean FA_out_jw;

#endif

#if Rte_SysCon_VrntLR1B_EEXVPosAct

    boolean FA_out_hq;

#endif

#if Rte_SysCon_VrntLR1B_EEXVRefrigerantPressure

    boolean FA_out_gp;

#endif

#if Rte_SysCon_VrntLR1B_EEXVRefrigerantTemp

    boolean FA_out_c2;

#endif

#if Rte_SysCon_VrntLR1B_EEXVSts

    boolean FA_out_a0p;

#endif

#if Rte_SysCon_VrntLR1B_EEXVSupplyVolt

    boolean FA_out_mb;

#endif

    boolean FA_out_g;

#if Rte_SysCon_VrntLR1B_EXVMCalRq || Rte_SysCon_VrntLR1B_EXVMERR

    boolean FA_out_je;

#endif

#if Rte_SysCon_VrntLR1B_EXVMPosAct

    boolean FA_out_ff;

#endif

#if Rte_SysCon_VrntLR1B_EXVMRefrigerantPressure

    boolean FA_out_cb;

#endif

#if Rte_SysCon_VrntLR1B_EXVMRefrigerantTemp

    boolean FA_out_fq;

#endif

#if Rte_SysCon_VrntLR1B_EXVMSts

    boolean FA_out_lz;

#endif

#if Rte_SysCon_VrntLR1B_EXVMSupplyVolt

    boolean FA_out_nn;

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrCoreTemp || Rte_SysCon_VrntLR1B_RsErrEXVM

    boolean FA_out_l;

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrHVmeas

    boolean FA_out_b;

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrICns

    boolean FA_out_n;

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrPCBTemp

    boolean FA_out_au;

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrPwrCns

    boolean FA_out_a0;

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrDmgCircForDrvrShoOrOpen || Rte_SysCon_VrntLR1B_AirHeatrSts

    boolean FA_out_h;

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrDmgHVISnsrFlt

    boolean FA_out_du;

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrDmgHtrCoreTmpSnsrFlt

    boolean FA_out_a;

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrDmgIntHwProtn

    boolean FA_out_kq;

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrDmgMemErr

    boolean FA_out_da;

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrDmgPCBTmpSnsrFlt

    boolean FA_out_di;

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrWarnFltInCom

    boolean FA_out_jk;

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrWarnHtrCoreOvrTmp

    boolean FA_out_j0;

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrWarnHvOutOfRng

    boolean FA_out_ch;

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrWarnICnsOutOfRng

    boolean FA_out_mo;

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrWarnPCBOvrTmp

    boolean FA_out_d;

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrWarnTmpOvrheatg

    boolean FA_out_fu;

#endif

#if Rte_SysCon_VrntLR1B_AirHeatrWarnULoOutOfRng

    boolean FA_out_k;

#endif

#if Rte_SysCon_VrntLR1B_LTRBVERR || Rte_SysCon_VrntLR1B_RsErrEAH

    boolean FA_out_in;

#endif

#if Rte_SysCon_VrntLR1B_LTRBVMotorVolt || Rte_SysCon_VrntLR1B_LTRBVPosAct

    boolean FA_out_m;

#endif

#if Rte_SysCon_VrntLR1B_LTRBVSts

    boolean FA_out_i;

#endif

    float32 tmp;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Switch: '<S19>/Switch' incorporates:
     *  Constant: '<S16>/Calib'
     *  Inport: '<Root>/VeCANR_e_CanLocEnblStatus'
     */
    if (KeLR1B_b_CanLocStatusBypEnbl)
    {
        /* Switch: '<S19>/Switch' incorporates:
         *  Constant: '<S17>/Calib'
         */
        rtb_Switch = KeLR1B_e_CanLocStatus;
    }
    else
    {
        (void)Rte_Read_VeCANR_e_CanLocEnblStatus_VeCANR_e_CanLocEnblStatus
            (&tmpRead);

        /* Switch: '<S19>/Switch' incorporates:
         *  DataTypeConversion: '<S2>/Data Type Conversion'
         *  Inport: '<Root>/VeCANR_e_CanLocEnblStatus'
         */
        rtb_Switch = (TePWMD_e_CanLocStatus)tmpRead;
    }

    /* End of Switch: '<S19>/Switch' */

    /* RelationalOperator: '<S2>/Relational Operator' incorporates:
     *  Constant: '<S13>/Constant'
     *  Switch: '<S19>/Switch'
     */
    rtb_RelationalOperator = (((uint32)rtb_Switch) == CePWMD_e_LOC_Enable);

    /* SignalConversion generated from: '<S2>/VeLINR_b_AAD_CalActv' incorporates:
     *  Inport: '<Root>/VeLINR_b_AAD_CalActvTO'
     */
#if Rte_SysCon_VrntLR1B_AADCalActv

    /* Outputs for Atomic SubSystem: '<S3>/AAD_CalActv' */
    /* SignalConversion generated from: '<S2>/VeLINR_b_AAD_CalActv' incorporates:
     *  Inport: '<Root>/VeLINR_b_AAD_CalActv'
     */
    rtb_TmpSignalConversionAtVeLINR =
        Rte_Read_VeLINR_b_AAD_CalActv_VeLINR_b_AAD_CalActv
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_A);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S33>:1' */
    (void)Rte_Read_VeLINR_b_AAD_CalActvTO_VeLINR_b_AAD_CalActvTO(&FA_out_nj);

    /* Outputs for Atomic SubSystem: '<S20>/AAD_CalActv' */
    /* Chart: '<S30>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_AAD_CalActvTO'
     */
    if (FA_out_nj)
    {
        /* Transition: '<S33>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S33>:6' */
            /* Transition: '<S33>:25' */
            /* Call Fsft */
            VeLINR_y_AAD_CalActv_CallStatus = 2U;

            /* Event: '<S33>:39' */
            /* Transition: '<S33>:29' */
        }
        else
        {
            /* Transition: '<S33>:30' */
            /* Call Tmot */
            VeLINR_y_AAD_CalActv_CallStatus = 3U;

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
            VeLINR_y_AAD_CalActv_CallStatus = 4U;

            /* Transition: '<S33>:23' */
        }
        else
        {
            /* Transition: '<S33>:46' */
            /* Transition: '<S33>:37' */
            /* Call Poke */
            VeLINR_y_AAD_CalActv_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S29>/Poke' */
            /* FunctionCaller: '<S34>/Function Caller' */
            /* Event: '<S33>:38' */
            Rte_Call_PokeAADR_b_AAD_CalibrationActv_PokeAADR_b_AAD_CalibrationActv
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_A);

            /* End of Outputs for SubSystem: '<S29>/Poke' */
        }
    }

    /* End of Chart: '<S30>/Chart' */
    /* End of Outputs for SubSystem: '<S20>/AAD_CalActv' */
    /* End of Outputs for SubSystem: '<S3>/AAD_CalActv' */
    /* Transition: '<S33>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_b_AAD_CalActv' */

    /* SignalConversion generated from: '<S2>/VeLINR_b_AAD_CalStat' incorporates:
     *  Inport: '<Root>/VeLINR_b_AAD_CalStatTO'
     */
#if Rte_SysCon_VrntLR1B_AADCalStat

    /* Outputs for Atomic SubSystem: '<S3>/AAD_CalStat' */
    /* SignalConversion generated from: '<S2>/VeLINR_b_AAD_CalStat' incorporates:
     *  Inport: '<Root>/VeLINR_b_AAD_CalStat'
     */
    rtb_TmpSignalConversionAtVeLI_a =
        Rte_Read_VeLINR_b_AAD_CalStat_VeLINR_b_AAD_CalStat
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_o);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S39>:1' */
    (void)Rte_Read_VeLINR_b_AAD_CalStatTO_VeLINR_b_AAD_CalStatTO(&tmpRead_0);

    /* Outputs for Atomic SubSystem: '<S21>/AAD_CalStat' */
    /* Chart: '<S36>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_AAD_CalStatTO'
     */
    if (tmpRead_0)
    {
        /* Transition: '<S39>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S39>:6' */
            /* Transition: '<S39>:25' */
            /* Call Fsft */
            VeLINR_y_AAD_CalStat_CallStatus = 2U;

            /* Event: '<S39>:39' */
            /* Transition: '<S39>:29' */
        }
        else
        {
            /* Transition: '<S39>:30' */
            /* Call Tmot */
            VeLINR_y_AAD_CalStat_CallStatus = 3U;

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
            VeLINR_y_AAD_CalStat_CallStatus = 4U;

            /* Transition: '<S39>:23' */
        }
        else
        {
            /* Transition: '<S39>:46' */
            /* Transition: '<S39>:37' */
            /* Call Poke */
            VeLINR_y_AAD_CalStat_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S35>/Poke' */
            /* FunctionCaller: '<S40>/Function Caller' incorporates:
             *  DataTypeConversion: '<S40>/Data Type Conversion'
             *  DataTypeConversion: '<S40>/Data Type Conversion1'
             */
            /* Event: '<S39>:38' */
            Rte_Call_PokeAADR_e_AAD_CalibrationSts_PokeAADR_e_AAD_CalibrationSts
                ((TeAADR_e_AAD_Calibration_Sts)
                 LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_o);

            /* End of Outputs for SubSystem: '<S35>/Poke' */
        }
    }

    /* End of Chart: '<S36>/Chart' */
    /* End of Outputs for SubSystem: '<S21>/AAD_CalStat' */
    /* End of Outputs for SubSystem: '<S3>/AAD_CalStat' */
    /* Transition: '<S39>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_b_AAD_CalStat' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AAD_CurrPos' incorporates:
     *  Inport: '<Root>/VeLINR_b_AAD_CurrPosTO'
     */
#if Rte_SysCon_VrntLR1B_AADCurrPos

    /* Outputs for Atomic SubSystem: '<S3>/AAD_CurrPos' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_AAD_CurrPos' incorporates:
     *  Inport: '<Root>/VeLINR_e_AAD_CurrPos'
     */
    rtb_TmpSignalConversionAtVeLI_m =
        Rte_Read_VeLINR_e_AAD_CurrPos_VeLINR_e_AAD_CurrPos
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_A);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S46>:1' */
    (void)Rte_Read_VeLINR_b_AAD_CurrPosTO_VeLINR_b_AAD_CurrPosTO(&tmpRead_1);

    /* Outputs for Atomic SubSystem: '<S22>/AAD_CurrPos' */
    /* Chart: '<S42>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_AAD_CurrPosTO'
     */
    if (tmpRead_1)
    {
        /* Transition: '<S46>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S46>:6' */
            /* Transition: '<S46>:25' */
            /* Call Fsft */
            VeLINR_y_AAD_CurrPos_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S41>/Fsft' */
            /* FunctionCaller: '<S47>/Function Caller' */
            /* Event: '<S46>:39' */
            Rte_Call_FsftAADR_b_AAD_CurrPos_FsftAADR_b_AAD_CurrPos();

            /* End of Outputs for SubSystem: '<S41>/Fsft' */
            /* Transition: '<S46>:29' */
        }
        else
        {
            /* Transition: '<S46>:30' */
            /* Call Tmot */
            VeLINR_y_AAD_CurrPos_CallStatus = 3U;

            /* Event: '<S46>:40' */
        }

        /* Transition: '<S46>:36' */
        /* Transition: '<S46>:23' */
    }
    else
    {
        /* Transition: '<S46>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_m) == 133)
        {
            /* Transition: '<S46>:33' */
            /* Transition: '<S46>:35' */
            /* Call Nothing */
            VeLINR_y_AAD_CurrPos_CallStatus = 4U;

            /* Transition: '<S46>:23' */
        }
        else
        {
            /* Transition: '<S46>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeLI_m) == 1)
            {
                /* Transition: '<S46>:48' */
                /* Transition: '<S46>:53' */
                FA_out_nj = true;

                /* Transition: '<S46>:56' */
            }
            else
            {
                /* Transition: '<S46>:52' */
                FA_out_nj = false;
            }

            /* Transition: '<S46>:37' */
            /* Call Poke */
            VeLINR_y_AAD_CurrPos_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S41>/Poke' */
            /* FunctionCaller: '<S48>/Function Caller' */
            /* Event: '<S46>:38' */
            Rte_Call_PokeAADR_e_AAD_CurrPos_PokeAADR_e_AAD_CurrPos
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_A, FA_out_nj);

            /* End of Outputs for SubSystem: '<S41>/Poke' */
        }
    }

    /* End of Chart: '<S42>/Chart' */
    /* End of Outputs for SubSystem: '<S22>/AAD_CurrPos' */
    /* End of Outputs for SubSystem: '<S3>/AAD_CurrPos' */
    /* Transition: '<S46>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_AAD_CurrPos' */

    /* SignalConversion generated from: '<S2>/VeLINR_b_AAD_ErrMechBreak' incorporates:
     *  Inport: '<Root>/VeLINR_b_AAD_ErrMechBreakTO'
     */
#if Rte_SysCon_VrntLR1B_AADErrMechBreak

    /* Outputs for Atomic SubSystem: '<S3>/AAD_ErrMechBreak' */
    /* SignalConversion generated from: '<S2>/VeLINR_b_AAD_ErrMechBreak' incorporates:
     *  Inport: '<Root>/VeLINR_b_AAD_ErrMechBreak'
     */
    rtb_TmpSignalConversionAtVeL_m1 =
        Rte_Read_VeLINR_b_AAD_ErrMechBreak_VeLINR_b_AAD_ErrMechBreak
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_a);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S53>:1' */
    (void)Rte_Read_VeLINR_b_AAD_ErrMechBreakTO_VeLINR_b_AAD_ErrMechBreakTO
        (&FA_out_pm);

    /* Outputs for Atomic SubSystem: '<S23>/AAD_ErrMechBreak' */
    /* Chart: '<S50>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_AAD_ErrMechBreakTO'
     */
    if (FA_out_pm)
    {
        /* Transition: '<S53>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S53>:6' */
            /* Transition: '<S53>:25' */
            /* Call Fsft */
            VeLINR_y_AAD_ErrMechBreak_CallStatus = 2U;

            /* Event: '<S53>:39' */
            /* Transition: '<S53>:29' */
        }
        else
        {
            /* Transition: '<S53>:30' */
            /* Call Tmot */
            VeLINR_y_AAD_ErrMechBreak_CallStatus = 3U;

            /* Event: '<S53>:40' */
        }

        /* Transition: '<S53>:36' */
        /* Transition: '<S53>:23' */
    }
    else
    {
        /* Transition: '<S53>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_m1) == 133)
        {
            /* Transition: '<S53>:33' */
            /* Transition: '<S53>:35' */
            /* Call Nothing */
            VeLINR_y_AAD_ErrMechBreak_CallStatus = 4U;

            /* Transition: '<S53>:23' */
        }
        else
        {
            /* Transition: '<S53>:46' */
            /* Transition: '<S53>:37' */
            /* Call Poke */
            VeLINR_y_AAD_ErrMechBreak_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S49>/Poke' */
            /* FunctionCaller: '<S54>/Function Caller' */
            /* Event: '<S53>:38' */
            Rte_Call_PokeAADR_b_AAD_ErrMechBreak_PokeAADR_b_AAD_ErrMechBreak
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_a);

            /* End of Outputs for SubSystem: '<S49>/Poke' */
        }
    }

    /* End of Chart: '<S50>/Chart' */
    /* End of Outputs for SubSystem: '<S23>/AAD_ErrMechBreak' */
    /* End of Outputs for SubSystem: '<S3>/AAD_ErrMechBreak' */
    /* Transition: '<S53>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_b_AAD_ErrMechBreak' */

    /* SignalConversion generated from: '<S2>/VeLINR_b_AAD_ErrMechStuck' incorporates:
     *  Inport: '<Root>/VeLINR_b_AAD_ErrMechStuckTO'
     */
#if Rte_SysCon_VrntLR1B_AADErrMechStuck

    /* Outputs for Atomic SubSystem: '<S3>/AAD_ErrMechStuck' */
    /* SignalConversion generated from: '<S2>/VeLINR_b_AAD_ErrMechStuck' incorporates:
     *  Inport: '<Root>/VeLINR_b_AAD_ErrMechStuck'
     */
    rtb_TmpSignalConversionAtVeLI_d =
        Rte_Read_VeLINR_b_AAD_ErrMechStuck_VeLINR_b_AAD_ErrMechStuck
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_n);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S59>:1' */
    (void)Rte_Read_VeLINR_b_AAD_ErrMechStuckTO_VeLINR_b_AAD_ErrMechStuckTO
        (&tmpRead_2);

    /* Outputs for Atomic SubSystem: '<S24>/AAD_ErrMechStuck' */
    /* Chart: '<S56>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_AAD_ErrMechStuckTO'
     */
    if (tmpRead_2)
    {
        /* Transition: '<S59>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S59>:6' */
            /* Transition: '<S59>:25' */
            /* Call Fsft */
            VeLINR_y_AAD_ErrMechStuck_CallStatus = 2U;

            /* Event: '<S59>:39' */
            /* Transition: '<S59>:29' */
        }
        else
        {
            /* Transition: '<S59>:30' */
            /* Call Tmot */
            VeLINR_y_AAD_ErrMechStuck_CallStatus = 3U;

            /* Event: '<S59>:40' */
        }

        /* Transition: '<S59>:36' */
        /* Transition: '<S59>:23' */
    }
    else
    {
        /* Transition: '<S59>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_d) == 133)
        {
            /* Transition: '<S59>:33' */
            /* Transition: '<S59>:35' */
            /* Call Nothing */
            VeLINR_y_AAD_ErrMechStuck_CallStatus = 4U;

            /* Transition: '<S59>:23' */
        }
        else
        {
            /* Transition: '<S59>:46' */
            /* Transition: '<S59>:37' */
            /* Call Poke */
            VeLINR_y_AAD_ErrMechStuck_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S55>/Poke' */
            /* FunctionCaller: '<S60>/Function Caller' */
            /* Event: '<S59>:38' */
            Rte_Call_PokeAADR_b_AAD_ErrMechStuck_PokeAADR_b_AAD_ErrMechStuck
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_n);

            /* End of Outputs for SubSystem: '<S55>/Poke' */
        }
    }

    /* End of Chart: '<S56>/Chart' */
    /* End of Outputs for SubSystem: '<S24>/AAD_ErrMechStuck' */
    /* End of Outputs for SubSystem: '<S3>/AAD_ErrMechStuck' */
    /* Transition: '<S59>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_b_AAD_ErrMechStuck' */

    /* SignalConversion generated from: '<S2>/VeLINR_b_AAD_ErrOvrTemp' incorporates:
     *  Inport: '<Root>/VeLINR_b_AAD_ErrOvrTempTO'
     */
#if Rte_SysCon_VrntLR1B_AADErrOvrTemp

    /* Outputs for Atomic SubSystem: '<S3>/AAD_ErrOvrTemp' */
    /* SignalConversion generated from: '<S2>/VeLINR_b_AAD_ErrOvrTemp' incorporates:
     *  Inport: '<Root>/VeLINR_b_AAD_ErrOvrTemp'
     */
    rtb_TmpSignalConversionAtVeLI_k =
        Rte_Read_VeLINR_b_AAD_ErrOvrTemp_VeLINR_b_AAD_ErrOvrTemp
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_b);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S65>:1' */
    (void)Rte_Read_VeLINR_b_AAD_ErrOvrTempTO_VeLINR_b_AAD_ErrOvrTempTO
        (&tmpRead_3);

    /* Outputs for Atomic SubSystem: '<S25>/AAD_ErrOvrTemp' */
    /* Chart: '<S62>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_AAD_ErrOvrTempTO'
     */
    if (tmpRead_3)
    {
        /* Transition: '<S65>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S65>:6' */
            /* Transition: '<S65>:25' */
            /* Call Fsft */
            VeLINR_y_AAD_ErrOvrTemp_CallStatus = 2U;

            /* Event: '<S65>:39' */
            /* Transition: '<S65>:29' */
        }
        else
        {
            /* Transition: '<S65>:30' */
            /* Call Tmot */
            VeLINR_y_AAD_ErrOvrTemp_CallStatus = 3U;

            /* Event: '<S65>:40' */
        }

        /* Transition: '<S65>:36' */
        /* Transition: '<S65>:23' */
    }
    else
    {
        /* Transition: '<S65>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_k) == 133)
        {
            /* Transition: '<S65>:33' */
            /* Transition: '<S65>:35' */
            /* Call Nothing */
            VeLINR_y_AAD_ErrOvrTemp_CallStatus = 4U;

            /* Transition: '<S65>:23' */
        }
        else
        {
            /* Transition: '<S65>:46' */
            /* Transition: '<S65>:37' */
            /* Call Poke */
            VeLINR_y_AAD_ErrOvrTemp_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S61>/Poke' */
            /* FunctionCaller: '<S66>/Function Caller' */
            /* Event: '<S65>:38' */
            Rte_Call_PokeAADR_b_AAD_ErrOverTemp_PokeAADR_b_AAD_ErrOverTemp
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_b);

            /* End of Outputs for SubSystem: '<S61>/Poke' */
        }
    }

    /* End of Chart: '<S62>/Chart' */
    /* End of Outputs for SubSystem: '<S25>/AAD_ErrOvrTemp' */
    /* End of Outputs for SubSystem: '<S3>/AAD_ErrOvrTemp' */
    /* Transition: '<S65>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_b_AAD_ErrOvrTemp' */

    /* SignalConversion generated from: '<S2>/VeLINR_b_AAD_ErrOvrVolt' incorporates:
     *  Inport: '<Root>/VeLINR_b_AAD_ErrOvrVoltTO'
     */
#if Rte_SysCon_VrntLR1B_AADErrOvrVolt

    /* Outputs for Atomic SubSystem: '<S3>/AAD_ErrOvrVolt' */
    /* SignalConversion generated from: '<S2>/VeLINR_b_AAD_ErrOvrVolt' incorporates:
     *  Inport: '<Root>/VeLINR_b_AAD_ErrOvrVolt'
     */
    rtb_TmpSignalConversionAtVeL_dc =
        Rte_Read_VeLINR_b_AAD_ErrOvrVolt_VeLINR_b_AAD_ErrOvrVolt
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__nr);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S71>:1' */
    (void)Rte_Read_VeLINR_b_AAD_ErrOvrVoltTO_VeLINR_b_AAD_ErrOvrVoltTO
        (&tmpRead_4);

    /* Outputs for Atomic SubSystem: '<S26>/AAD_ErrOvrVolt' */
    /* Chart: '<S68>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_AAD_ErrOvrVoltTO'
     */
    if (tmpRead_4)
    {
        /* Transition: '<S71>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S71>:6' */
            /* Transition: '<S71>:25' */
            /* Call Fsft */
            VeLINR_y_AAD_ErrOvrVolt_CallStatus = 2U;

            /* Event: '<S71>:39' */
            /* Transition: '<S71>:29' */
        }
        else
        {
            /* Transition: '<S71>:30' */
            /* Call Tmot */
            VeLINR_y_AAD_ErrOvrVolt_CallStatus = 3U;

            /* Event: '<S71>:40' */
        }

        /* Transition: '<S71>:36' */
        /* Transition: '<S71>:23' */
    }
    else
    {
        /* Transition: '<S71>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_dc) == 133)
        {
            /* Transition: '<S71>:33' */
            /* Transition: '<S71>:35' */
            /* Call Nothing */
            VeLINR_y_AAD_ErrOvrVolt_CallStatus = 4U;

            /* Transition: '<S71>:23' */
        }
        else
        {
            /* Transition: '<S71>:46' */
            /* Transition: '<S71>:37' */
            /* Call Poke */
            VeLINR_y_AAD_ErrOvrVolt_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S67>/Poke' */
            /* FunctionCaller: '<S72>/Function Caller' */
            /* Event: '<S71>:38' */
            Rte_Call_PokeAADR_b_AAD_ErrOverVolt_PokeAADR_b_AAD_ErrOverVolt
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__nr);

            /* End of Outputs for SubSystem: '<S67>/Poke' */
        }
    }

    /* End of Chart: '<S68>/Chart' */
    /* End of Outputs for SubSystem: '<S26>/AAD_ErrOvrVolt' */
    /* End of Outputs for SubSystem: '<S3>/AAD_ErrOvrVolt' */
    /* Transition: '<S71>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_b_AAD_ErrOvrVolt' */

    /* SignalConversion generated from: '<S2>/VeLINR_b_AAD_ErrUnVolt' incorporates:
     *  Inport: '<Root>/VeLINR_b_AAD_ErrUnVoltTO'
     */
#if Rte_SysCon_VrntLR1B_AADErrUnVolt

    /* Outputs for Atomic SubSystem: '<S3>/AAD_ErrUnVolt' */
    /* SignalConversion generated from: '<S2>/VeLINR_b_AAD_ErrUnVolt' incorporates:
     *  Inport: '<Root>/VeLINR_b_AAD_ErrUnVolt'
     */
    rtb_TmpSignalConversionAtVeL_mb =
        Rte_Read_VeLINR_b_AAD_ErrUnVolt_VeLINR_b_AAD_ErrUnVolt
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_e);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S77>:1' */
    (void)Rte_Read_VeLINR_b_AAD_ErrUnVoltTO_VeLINR_b_AAD_ErrUnVoltTO(&tmpRead_5);

    /* Outputs for Atomic SubSystem: '<S27>/AAD_ErrUnVolt' */
    /* Chart: '<S74>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_AAD_ErrUnVoltTO'
     */
    if (tmpRead_5)
    {
        /* Transition: '<S77>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S77>:6' */
            /* Transition: '<S77>:25' */
            /* Call Fsft */
            VeLINR_y_AAD_ErrUnVolt_CallStatus = 2U;

            /* Event: '<S77>:39' */
            /* Transition: '<S77>:29' */
        }
        else
        {
            /* Transition: '<S77>:30' */
            /* Call Tmot */
            VeLINR_y_AAD_ErrUnVolt_CallStatus = 3U;

            /* Event: '<S77>:40' */
        }

        /* Transition: '<S77>:36' */
        /* Transition: '<S77>:23' */
    }
    else
    {
        /* Transition: '<S77>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_mb) == 133)
        {
            /* Transition: '<S77>:33' */
            /* Transition: '<S77>:35' */
            /* Call Nothing */
            VeLINR_y_AAD_ErrUnVolt_CallStatus = 4U;

            /* Transition: '<S77>:23' */
        }
        else
        {
            /* Transition: '<S77>:46' */
            /* Transition: '<S77>:37' */
            /* Call Poke */
            VeLINR_y_AAD_ErrUnVolt_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S73>/Poke' */
            /* FunctionCaller: '<S78>/Function Caller' */
            /* Event: '<S77>:38' */
            Rte_Call_PokeAADR_b_AAD_ErrUnderVolt_PokeAADR_b_AAD_ErrUnderVolt
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_e);

            /* End of Outputs for SubSystem: '<S73>/Poke' */
        }
    }

    /* End of Chart: '<S74>/Chart' */
    /* End of Outputs for SubSystem: '<S27>/AAD_ErrUnVolt' */
    /* End of Outputs for SubSystem: '<S3>/AAD_ErrUnVolt' */
    /* Transition: '<S77>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_b_AAD_ErrUnVolt' */

    /* SignalConversion generated from: '<S2>/VeLINR_b_RsErr_AAD' incorporates:
     *  Inport: '<Root>/VeLINR_b_RsErr_AAD_TO'
     */
#if Rte_SysCon_VrntLR1B_RsErrAAD

    /* Outputs for Atomic SubSystem: '<S3>/RsErr_AAD' */
    /* SignalConversion generated from: '<S2>/VeLINR_b_RsErr_AAD' incorporates:
     *  Inport: '<Root>/VeLINR_b_RsErr_AAD'
     */
    rtb_TmpSignalConversionAtVeLI_j =
        Rte_Read_VeLINR_b_RsErr_AAD_VeLINR_b_RsErr_AAD
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_R);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S83>:1' */
    (void)Rte_Read_VeLINR_b_RsErr_AAD_TO_VeLINR_b_RsErr_AAD_TO(&tmpRead_6);

    /* Outputs for Atomic SubSystem: '<S28>/RsErr_AAD' */
    /* Chart: '<S80>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_RsErr_AAD_TO'
     */
    if (tmpRead_6)
    {
        /* Transition: '<S83>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S83>:6' */
            /* Transition: '<S83>:25' */
            /* Call Fsft */
            VeLINR_y_RsErr_AAD_CallStatus = 2U;

            /* Event: '<S83>:39' */
            /* Transition: '<S83>:29' */
        }
        else
        {
            /* Transition: '<S83>:30' */
            /* Call Tmot */
            VeLINR_y_RsErr_AAD_CallStatus = 3U;

            /* Event: '<S83>:40' */
        }

        /* Transition: '<S83>:36' */
        /* Transition: '<S83>:23' */
    }
    else
    {
        /* Transition: '<S83>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_j) == 133)
        {
            /* Transition: '<S83>:33' */
            /* Transition: '<S83>:35' */
            /* Call Nothing */
            VeLINR_y_RsErr_AAD_CallStatus = 4U;

            /* Transition: '<S83>:23' */
        }
        else
        {
            /* Transition: '<S83>:46' */
            /* Transition: '<S83>:37' */
            /* Call Poke */
            VeLINR_y_RsErr_AAD_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S79>/Poke' */
            /* FunctionCaller: '<S84>/Function Caller' */
            /* Event: '<S83>:38' */
            Rte_Call_PokeAADR_b_AAD_ResErr_PokeAADR_b_AAD_ResErr
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_R);

            /* End of Outputs for SubSystem: '<S79>/Poke' */
        }
    }

    /* End of Chart: '<S80>/Chart' */
    /* End of Outputs for SubSystem: '<S28>/RsErr_AAD' */
    /* End of Outputs for SubSystem: '<S3>/RsErr_AAD' */
    /* Transition: '<S83>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_b_RsErr_AAD' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_BCP_AIR_PRE_ERR_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_BCP_AIR_PRE_ERR_ErrSts'
     */
    rtb_TmpSignalConversionAtVeLI_o =
        Rte_Read_VeLINR_e_BCP_AIR_PRE_ERR_VeLINR_e_BCP_AIR_PRE_ERR
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_B);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_BCP_AIR_PRE_ERR_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S106>:1' */
    (void)Rte_Read_VeLINR_b_BCP_AIR_PRE_ERR_TO_VeLINR_b_BCP_AIR_PRE_ERR_TO
        (&tmpRead_7);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S102>/Chart' */
    if (tmpRead_7)
    {
        /* Transition: '<S106>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S106>:6' */
            /* Transition: '<S106>:25' */
            /* Call Fsft */
            VeLINR_y_BCP_AIR_PRE_ERR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S85>/Fsft' */
            /* FunctionCaller: '<S107>/Function Caller' */
            /* Event: '<S106>:39' */
            Rte_Call_FsftPMIR_b_LTActPumpAirPrsntErr_FsftPMIR_b_LTActPumpAirPrsntErr
                ();

            /* End of Outputs for SubSystem: '<S85>/Fsft' */
            /* Transition: '<S106>:29' */
        }
        else
        {
            /* Transition: '<S106>:30' */
            /* Call Tmot */
            VeLINR_y_BCP_AIR_PRE_ERR_CallStatus = 3U;

            /* Event: '<S106>:40' */
        }

        /* Transition: '<S106>:36' */
        /* Transition: '<S106>:23' */
    }
    else
    {
        /* Transition: '<S106>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_o) == 133)
        {
            /* Transition: '<S106>:33' */
            /* Transition: '<S106>:35' */
            /* Call Nothing */
            VeLINR_y_BCP_AIR_PRE_ERR_CallStatus = 4U;

            /* Transition: '<S106>:23' */
        }
        else
        {
            /* Transition: '<S106>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeLI_o) == 1)
            {
                /* Transition: '<S106>:48' */
                /* Transition: '<S106>:53' */
                FA_out_pm = true;

                /* Transition: '<S106>:56' */
            }
            else
            {
                /* Transition: '<S106>:52' */
                FA_out_pm = false;
            }

            /* Transition: '<S106>:37' */
            /* Call Poke */
            VeLINR_y_BCP_AIR_PRE_ERR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S85>/Poke' */
            /* FunctionCaller: '<S108>/Function Caller' */
            /* Event: '<S106>:38' */
            Rte_Call_PokePMIR_e_LTActPumpAirPrsntErr_PokePMIR_e_LTActPumpAirPrsntErr
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_B, FA_out_pm);

            /* End of Outputs for SubSystem: '<S85>/Poke' */
        }
    }

    /* End of Chart: '<S102>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_BCP_CURR_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_BCP_CURR_ErrSts'
     */
    /* Transition: '<S106>:19' */
    rtb_TmpSignalConversionAtVeL_db =
        Rte_Read_VeLINR_I_BCP_CURR_VeLINR_I_BCP_CURR
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_I_B);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_BCP_CURR_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S113>:1' */
    (void)Rte_Read_VeLINR_b_BCP_CURR_TO_VeLINR_b_BCP_CURR_TO(&FA_out_ou);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S109>/Chart' */
    if (FA_out_ou)
    {
        /* Transition: '<S113>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S113>:6' */
            /* Transition: '<S113>:25' */
            /* Call Fsft */
            VeLINR_y_BCP_CURR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S86>/Fsft' */
            /* FunctionCaller: '<S114>/Function Caller' */
            /* Event: '<S113>:39' */
            Rte_Call_FsftPMIR_b_LTActPumpCrnt_FsftPMIR_b_LTActPumpCrnt();

            /* End of Outputs for SubSystem: '<S86>/Fsft' */
            /* Transition: '<S113>:29' */
        }
        else
        {
            /* Transition: '<S113>:30' */
            /* Call Tmot */
            VeLINR_y_BCP_CURR_CallStatus = 3U;

            /* Event: '<S113>:40' */
        }

        /* Transition: '<S113>:36' */
        /* Transition: '<S113>:23' */
    }
    else
    {
        /* Transition: '<S113>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_db) == 133)
        {
            /* Transition: '<S113>:33' */
            /* Transition: '<S113>:35' */
            /* Call Nothing */
            VeLINR_y_BCP_CURR_CallStatus = 4U;

            /* Transition: '<S113>:23' */
        }
        else
        {
            /* Transition: '<S113>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_db) == 1)
            {
                /* Transition: '<S113>:48' */
                /* Transition: '<S113>:53' */
                FA_out_ou = true;

                /* Transition: '<S113>:56' */
            }
            else
            {
                /* Transition: '<S113>:52' */
            }

            /* Transition: '<S113>:37' */
            /* Call Poke */
            VeLINR_y_BCP_CURR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S86>/Poke' */
            /* FunctionCaller: '<S115>/Function Caller' */
            /* Event: '<S113>:38' */
            Rte_Call_PokePMIR_I_LTActPumpCrnt_PokePMIR_I_LTActPumpCrnt
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_I_B, FA_out_ou);

            /* End of Outputs for SubSystem: '<S86>/Poke' */
        }
    }

    /* End of Chart: '<S109>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_BCP_DBLK_ACTV_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_BCP_DBLK_ACTV_ErrSts'
     */
    /* Transition: '<S113>:19' */
    rtb_TmpSignalConversionAtVeLI_g =
        Rte_Read_VeLINR_e_BCP_DBLK_ACTV_VeLINR_e_BCP_DBLK_ACTV
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_h);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_BCP_DBLK_ACTV_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S120>:1' */
    (void)Rte_Read_VeLINR_b_BCP_DBLK_ACTV_TO_VeLINR_b_BCP_DBLK_ACTV_TO
        (&FA_out_bl);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S116>/Chart' */
    if (FA_out_bl)
    {
        /* Transition: '<S120>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S120>:6' */
            /* Transition: '<S120>:25' */
            /* Call Fsft */
            VeLINR_y_BCP_DBLK_ACTV_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S87>/Fsft' */
            /* FunctionCaller: '<S121>/Function Caller' */
            /* Event: '<S120>:39' */
            Rte_Call_FsftPMIR_b_LTActPumpDeblock_FsftPMIR_b_LTActPumpDeblock();

            /* End of Outputs for SubSystem: '<S87>/Fsft' */
            /* Transition: '<S120>:29' */
        }
        else
        {
            /* Transition: '<S120>:30' */
            /* Call Tmot */
            VeLINR_y_BCP_DBLK_ACTV_CallStatus = 3U;

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
            VeLINR_y_BCP_DBLK_ACTV_CallStatus = 4U;

            /* Transition: '<S120>:23' */
        }
        else
        {
            /* Transition: '<S120>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeLI_g) == 1)
            {
                /* Transition: '<S120>:48' */
                /* Transition: '<S120>:53' */
                FA_out_bl = true;

                /* Transition: '<S120>:56' */
            }
            else
            {
                /* Transition: '<S120>:52' */
            }

            /* Transition: '<S120>:37' */
            /* Call Poke */
            VeLINR_y_BCP_DBLK_ACTV_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S87>/Poke' */
            /* FunctionCaller: '<S122>/Function Caller' */
            /* Event: '<S120>:38' */
            Rte_Call_PokePMIR_e_LTActPumpDeblock_PokePMIR_e_LTActPumpDeblock
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_h, FA_out_bl);

            /* End of Outputs for SubSystem: '<S87>/Poke' */
        }
    }

    /* End of Chart: '<S116>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_BCP_DR_RN_ERR_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_BCP_DR_RN_ERR_ErrSts'
     */
    /* Transition: '<S120>:19' */
    rtb_TmpSignalConversionAtVeLI_e =
        Rte_Read_VeLINR_e_BCP_DR_RN_ERR_VeLINR_e_BCP_DR_RN_ERR
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_m);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_BCP_DR_RN_ERR_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S127>:1' */
    (void)Rte_Read_VeLINR_b_BCP_DR_RN_ERR_TO_VeLINR_b_BCP_DR_RN_ERR_TO
        (&FA_out_kt);

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
            VeLINR_y_BCP_DR_RN_ERR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S88>/Fsft' */
            /* FunctionCaller: '<S128>/Function Caller' */
            /* Event: '<S127>:39' */
            Rte_Call_FsftPMIR_b_LTActPumpDryRun_FsftPMIR_b_LTActPumpDryRun();

            /* End of Outputs for SubSystem: '<S88>/Fsft' */
            /* Transition: '<S127>:29' */
        }
        else
        {
            /* Transition: '<S127>:30' */
            /* Call Tmot */
            VeLINR_y_BCP_DR_RN_ERR_CallStatus = 3U;

            /* Event: '<S127>:40' */
        }

        /* Transition: '<S127>:36' */
        /* Transition: '<S127>:23' */
    }
    else
    {
        /* Transition: '<S127>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_e) == 133)
        {
            /* Transition: '<S127>:33' */
            /* Transition: '<S127>:35' */
            /* Call Nothing */
            VeLINR_y_BCP_DR_RN_ERR_CallStatus = 4U;

            /* Transition: '<S127>:23' */
        }
        else
        {
            /* Transition: '<S127>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeLI_e) == 1)
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
            VeLINR_y_BCP_DR_RN_ERR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S88>/Poke' */
            /* FunctionCaller: '<S129>/Function Caller' */
            /* Event: '<S127>:38' */
            Rte_Call_PokePMIR_e_LTActPumpDryRun_PokePMIR_e_LTActPumpDryRun
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_m, FA_out_kt);

            /* End of Outputs for SubSystem: '<S88>/Poke' */
        }
    }

    /* End of Chart: '<S123>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_BCP_FL_SAFE_ACTVTD_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_BCP_FL_SAFE_ACTVTD_ErrSts'
     */
    /* Transition: '<S127>:19' */
    rtb_TmpSignalConversionAtVeLI_f =
        Rte_Read_VeLINR_e_BCP_FL_SAFE_ACTVTD_VeLINR_e_BCP_FL_SAFE_ACTVTD
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__dh);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_BCP_FL_SAFE_ACTVTD_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S134>:1' */
    (void)Rte_Read_VeLINR_b_BCP_FL_SAFE_ACTVTD_TO_VeLINR_b_BCP_FL_SAFE_ACTVTD_TO
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
            VeLINR_y_BCP_FL_SAFE_ACTVTD_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S89>/Fsft' */
            /* FunctionCaller: '<S135>/Function Caller' */
            /* Event: '<S134>:39' */
            Rte_Call_FsftPMIR_b_LTActPumpFailsafe_FsftPMIR_b_LTActPumpFailsafe();

            /* End of Outputs for SubSystem: '<S89>/Fsft' */
            /* Transition: '<S134>:29' */
        }
        else
        {
            /* Transition: '<S134>:30' */
            /* Call Tmot */
            VeLINR_y_BCP_FL_SAFE_ACTVTD_CallStatus = 3U;

            /* Event: '<S134>:40' */
        }

        /* Transition: '<S134>:36' */
        /* Transition: '<S134>:23' */
    }
    else
    {
        /* Transition: '<S134>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_f) == 133)
        {
            /* Transition: '<S134>:33' */
            /* Transition: '<S134>:35' */
            /* Call Nothing */
            VeLINR_y_BCP_FL_SAFE_ACTVTD_CallStatus = 4U;

            /* Transition: '<S134>:23' */
        }
        else
        {
            /* Transition: '<S134>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeLI_f) == 1)
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
            VeLINR_y_BCP_FL_SAFE_ACTVTD_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S89>/Poke' */
            /* FunctionCaller: '<S136>/Function Caller' */
            /* Event: '<S134>:38' */
            Rte_Call_PokePMIR_e_LTActPumpFailsafe_PokePMIR_e_LTActPumpFailsafe
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__dh, FA_out_cq);

            /* End of Outputs for SubSystem: '<S89>/Poke' */
        }
    }

    /* End of Chart: '<S130>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_BCP_LMP_HM_AN_ON_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_BCP_LMP_HM_AN_ON_ErrSts'
     */
    /* Transition: '<S134>:19' */
    rtb_TmpSignalConversionAtVeL_kp =
        Rte_Read_VeLINR_e_BCP_LMP_HM_AN_ON_VeLINR_e_BCP_LMP_HM_AN_ON
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_a);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_BCP_LMP_HM_AN_ON_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S141>:1' */
    (void)Rte_Read_VeLINR_b_BCP_LMP_HM_AN_ON_TO_VeLINR_b_BCP_LMP_HM_AN_ON_TO
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
            VeLINR_y_BCP_LMP_HM_AN_ON_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S90>/Fsft' */
            /* FunctionCaller: '<S142>/Function Caller' */
            /* Event: '<S141>:39' */
            Rte_Call_FsftPMIR_b_LTActPumpLmpHM_FsftPMIR_b_LTActPumpLmpHM();

            /* End of Outputs for SubSystem: '<S90>/Fsft' */
            /* Transition: '<S141>:29' */
        }
        else
        {
            /* Transition: '<S141>:30' */
            /* Call Tmot */
            VeLINR_y_BCP_LMP_HM_AN_ON_CallStatus = 3U;

            /* Event: '<S141>:40' */
        }

        /* Transition: '<S141>:36' */
        /* Transition: '<S141>:23' */
    }
    else
    {
        /* Transition: '<S141>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_kp) == 133)
        {
            /* Transition: '<S141>:33' */
            /* Transition: '<S141>:35' */
            /* Call Nothing */
            VeLINR_y_BCP_LMP_HM_AN_ON_CallStatus = 4U;

            /* Transition: '<S141>:23' */
        }
        else
        {
            /* Transition: '<S141>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_kp) == 1)
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
            VeLINR_y_BCP_LMP_HM_AN_ON_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S90>/Poke' */
            /* FunctionCaller: '<S143>/Function Caller' */
            /* Event: '<S141>:38' */
            Rte_Call_PokePMIR_e_LTActPumpLmpHM_PokePMIR_e_LTActPumpLmpHM
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_a, FA_out_hi);

            /* End of Outputs for SubSystem: '<S90>/Poke' */
        }
    }

    /* End of Chart: '<S137>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_BCP_MONTRNG_RPM_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_BCP_MONTRNG_RPM_ErrSts'
     */
    /* Transition: '<S141>:19' */
    rtb_TmpSignalConversionAtVeL_fh =
        Rte_Read_VeLINR_e_BCP_MONTRNG_RPM_VeLINR_e_BCP_MONTRNG_RPM
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__jr);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_BCP_MONTRNG_RPM_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S148>:1' */
    (void)Rte_Read_VeLINR_b_BCP_MONTRNG_RPM_TO_VeLINR_b_BCP_MONTRNG_RPM_TO
        (&FA_out_oxp);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S144>/Chart' */
    if (FA_out_oxp)
    {
        /* Transition: '<S148>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S148>:6' */
            /* Transition: '<S148>:25' */
            /* Call Fsft */
            VeLINR_y_BCP_MONTRNG_RPM_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S91>/Fsft' */
            /* FunctionCaller: '<S149>/Function Caller' */
            /* Event: '<S148>:39' */
            Rte_Call_FsftPMIR_b_LTActPumpMntrRPM_FsftPMIR_b_LTActPumpMntrRPM();

            /* End of Outputs for SubSystem: '<S91>/Fsft' */
            /* Transition: '<S148>:29' */
        }
        else
        {
            /* Transition: '<S148>:30' */
            /* Call Tmot */
            VeLINR_y_BCP_MONTRNG_RPM_CallStatus = 3U;

            /* Event: '<S148>:40' */
        }

        /* Transition: '<S148>:36' */
        /* Transition: '<S148>:23' */
    }
    else
    {
        /* Transition: '<S148>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_fh) == 133)
        {
            /* Transition: '<S148>:33' */
            /* Transition: '<S148>:35' */
            /* Call Nothing */
            VeLINR_y_BCP_MONTRNG_RPM_CallStatus = 4U;

            /* Transition: '<S148>:23' */
        }
        else
        {
            /* Transition: '<S148>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_fh) == 1)
            {
                /* Transition: '<S148>:48' */
                /* Transition: '<S148>:53' */
                FA_out_oxp = true;

                /* Transition: '<S148>:56' */
            }
            else
            {
                /* Transition: '<S148>:52' */
            }

            /* Transition: '<S148>:37' */
            /* Call Poke */
            VeLINR_y_BCP_MONTRNG_RPM_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S91>/Poke' */
            /* FunctionCaller: '<S150>/Function Caller' */
            /* Event: '<S148>:38' */
            Rte_Call_PokePMIR_e_LTActPumpMntrRPM_PokePMIR_e_LTActPumpMntrRPM
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__jr, FA_out_oxp);

            /* End of Outputs for SubSystem: '<S91>/Poke' */
        }
    }

    /* End of Chart: '<S144>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_BCP_NODE_ERR_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_BCP_NODE_ERR_ErrSts'
     */
    /* Transition: '<S148>:19' */
    rtb_TmpSignalConversionAtVeL_dt =
        Rte_Read_VeLINR_e_BCP_NODE_ERR_VeLINR_e_BCP_NODE_ERR
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_l);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_BCP_NODE_ERR_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S155>:1' */
    (void)Rte_Read_VeLINR_b_BCP_NODE_ERR_TO_VeLINR_b_BCP_NODE_ERR_TO(&FA_out_p0);

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
            VeLINR_y_BCP_NODE_ERR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S92>/Fsft' */
            /* FunctionCaller: '<S156>/Function Caller' */
            /* Event: '<S155>:39' */
            Rte_Call_FsftPMIR_b_LTActPumpNodeErr_FsftPMIR_b_LTActPumpNodeErr();

            /* End of Outputs for SubSystem: '<S92>/Fsft' */
            /* Transition: '<S155>:29' */
        }
        else
        {
            /* Transition: '<S155>:30' */
            /* Call Tmot */
            VeLINR_y_BCP_NODE_ERR_CallStatus = 3U;

            /* Event: '<S155>:40' */
        }

        /* Transition: '<S155>:36' */
        /* Transition: '<S155>:23' */
    }
    else
    {
        /* Transition: '<S155>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_dt) == 133)
        {
            /* Transition: '<S155>:33' */
            /* Transition: '<S155>:35' */
            /* Call Nothing */
            VeLINR_y_BCP_NODE_ERR_CallStatus = 4U;

            /* Transition: '<S155>:23' */
        }
        else
        {
            /* Transition: '<S155>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_dt) == 1)
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
            VeLINR_y_BCP_NODE_ERR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S92>/Poke' */
            /* FunctionCaller: '<S157>/Function Caller' */
            /* Event: '<S155>:38' */
            Rte_Call_PokePMIR_e_LTActPumpNodeErr_PokePMIR_e_LTActPumpNodeErr
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_l, FA_out_p0);

            /* End of Outputs for SubSystem: '<S92>/Poke' */
        }
    }

    /* End of Chart: '<S151>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_BCP_OVR_CUR_ERR_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_BCP_OVR_CUR_ERR_ErrSts'
     */
    /* Transition: '<S155>:19' */
    rtb_TmpSignalConversionAtVeL_g4 =
        Rte_Read_VeLINR_e_BCP_OVR_CUR_ERR_VeLINR_e_BCP_OVR_CUR_ERR
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_f);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_BCP_OVR_CUR_ERR_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S162>:1' */
    (void)Rte_Read_VeLINR_b_BCP_OVR_CUR_ERR_TO_VeLINR_b_BCP_OVR_CUR_ERR_TO
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
            VeLINR_y_BCP_OVR_CUR_ERR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S93>/Fsft' */
            /* FunctionCaller: '<S163>/Function Caller' */
            /* Event: '<S162>:39' */
            Rte_Call_FsftPMIR_b_LTActPumpOvrCrnt_FsftPMIR_b_LTActPumpOvrCrnt();

            /* End of Outputs for SubSystem: '<S93>/Fsft' */
            /* Transition: '<S162>:29' */
        }
        else
        {
            /* Transition: '<S162>:30' */
            /* Call Tmot */
            VeLINR_y_BCP_OVR_CUR_ERR_CallStatus = 3U;

            /* Event: '<S162>:40' */
        }

        /* Transition: '<S162>:36' */
        /* Transition: '<S162>:23' */
    }
    else
    {
        /* Transition: '<S162>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_g4) == 133)
        {
            /* Transition: '<S162>:33' */
            /* Transition: '<S162>:35' */
            /* Call Nothing */
            VeLINR_y_BCP_OVR_CUR_ERR_CallStatus = 4U;

            /* Transition: '<S162>:23' */
        }
        else
        {
            /* Transition: '<S162>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_g4) == 1)
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
            VeLINR_y_BCP_OVR_CUR_ERR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S93>/Poke' */
            /* FunctionCaller: '<S164>/Function Caller' */
            /* Event: '<S162>:38' */
            Rte_Call_PokePMIR_e_LTActPumpOvrCrnt_PokePMIR_e_LTActPumpOvrCrnt
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_f, FA_out_fc);

            /* End of Outputs for SubSystem: '<S93>/Poke' */
        }
    }

    /* End of Chart: '<S158>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_BCP_OVR_TMP_ERR_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_BCP_OVR_TMP_ERR_ErrSts'
     */
    /* Transition: '<S162>:19' */
    rtb_TmpSignalConversionAtVeL_gq =
        Rte_Read_VeLINR_e_BCP_OVR_TMP_ERR_VeLINR_e_BCP_OVR_TMP_ERR
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__e3);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_BCP_OVR_TMP_ERR_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S169>:1' */
    (void)Rte_Read_VeLINR_b_BCP_OVR_TMP_ERR_TO_VeLINR_b_BCP_OVR_TMP_ERR_TO
        (&FA_out_bk);

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
            VeLINR_y_BCP_OVR_TMP_ERR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S94>/Fsft' */
            /* FunctionCaller: '<S170>/Function Caller' */
            /* Event: '<S169>:39' */
            Rte_Call_FsftPMIR_b_LT_ActvPmpOT_FsftPMIR_b_LT_ActvPmpOT();

            /* End of Outputs for SubSystem: '<S94>/Fsft' */
            /* Transition: '<S169>:29' */
        }
        else
        {
            /* Transition: '<S169>:30' */
            /* Call Tmot */
            VeLINR_y_BCP_OVR_TMP_ERR_CallStatus = 3U;

            /* Event: '<S169>:40' */
        }

        /* Transition: '<S169>:36' */
        /* Transition: '<S169>:23' */
    }
    else
    {
        /* Transition: '<S169>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_gq) == 133)
        {
            /* Transition: '<S169>:33' */
            /* Transition: '<S169>:35' */
            /* Call Nothing */
            VeLINR_y_BCP_OVR_TMP_ERR_CallStatus = 4U;

            /* Transition: '<S169>:23' */
        }
        else
        {
            /* Transition: '<S169>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_gq) == 1)
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
            VeLINR_y_BCP_OVR_TMP_ERR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S94>/Poke' */
            /* FunctionCaller: '<S171>/Function Caller' */
            /* Event: '<S169>:38' */
            Rte_Call_PokePMIR_e_LT_ActvPmpOT_PokePMIR_e_LT_ActvPmpOT
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__e3, FA_out_bk);

            /* End of Outputs for SubSystem: '<S94>/Poke' */
        }
    }

    /* End of Chart: '<S165>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_BCP_POST_RUN_STAT_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_BCP_POST_RUN_STAT_ErrSts'
     */
    /* Transition: '<S169>:19' */
    rtb_TmpSignalConversionAtVeL_go =
        Rte_Read_VeLINR_e_BCP_POST_RUN_STAT_VeLINR_e_BCP_POST_RUN_STAT
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_i);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_BCP_POST_RUN_STAT_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S176>:1' */
    (void)Rte_Read_VeLINR_b_BCP_POST_RUN_STAT_TO_VeLINR_b_BCP_POST_RUN_STAT_TO
        (&FA_out_fqg);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S172>/Chart' */
    if (FA_out_fqg)
    {
        /* Transition: '<S176>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S176>:6' */
            /* Transition: '<S176>:25' */
            /* Call Fsft */
            VeLINR_y_BCP_POST_RUN_STAT_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S95>/Fsft' */
            /* FunctionCaller: '<S177>/Function Caller' */
            /* Event: '<S176>:39' */
            Rte_Call_FsftPMIR_b_LTActPumpPstRnSt_FsftPMIR_b_LTActPumpPstRnSt();

            /* End of Outputs for SubSystem: '<S95>/Fsft' */
            /* Transition: '<S176>:29' */
        }
        else
        {
            /* Transition: '<S176>:30' */
            /* Call Tmot */
            VeLINR_y_BCP_POST_RUN_STAT_CallStatus = 3U;

            /* Event: '<S176>:40' */
        }

        /* Transition: '<S176>:36' */
        /* Transition: '<S176>:23' */
    }
    else
    {
        /* Transition: '<S176>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_go) == 133)
        {
            /* Transition: '<S176>:33' */
            /* Transition: '<S176>:35' */
            /* Call Nothing */
            VeLINR_y_BCP_POST_RUN_STAT_CallStatus = 4U;

            /* Transition: '<S176>:23' */
        }
        else
        {
            /* Transition: '<S176>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_go) == 1)
            {
                /* Transition: '<S176>:48' */
                /* Transition: '<S176>:53' */
                FA_out_fqg = true;

                /* Transition: '<S176>:56' */
            }
            else
            {
                /* Transition: '<S176>:52' */
            }

            /* Transition: '<S176>:37' */
            /* Call Poke */
            VeLINR_y_BCP_POST_RUN_STAT_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S95>/Poke' */
            /* FunctionCaller: '<S178>/Function Caller' */
            /* Event: '<S176>:38' */
            Rte_Call_PokePMIR_e_LTActPumpPstRnSt_PokePMIR_e_LTActPumpPstRnSt
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_i, FA_out_fqg);

            /* End of Outputs for SubSystem: '<S95>/Poke' */
        }
    }

    /* End of Chart: '<S172>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_BCP_RPM_ACTUAL_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_BCP_RPM_ACTUAL_ErrSts'
     */
    /* Transition: '<S176>:19' */
    rtb_TmpSignalConversionAtVeL_mc =
        Rte_Read_VeLINR_Pct_BCP_RPM_ACTUAL_VeLINR_Pct_BCP_RPM_ACTUAL
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_Pct);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_BCP_RPM_ACTUAL_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S183>:1' */
    (void)Rte_Read_VeLINR_b_BCP_RPM_ACTUAL_TO_VeLINR_b_BCP_RPM_ACTUAL_TO
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
            VeLINR_y_BCP_RPM_ACTUAL_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S96>/Fsft' */
            /* FunctionCaller: '<S184>/Function Caller' */
            /* Event: '<S183>:39' */
            Rte_Call_FsftPMIR_b_LTActPumpRPMActPct_FsftPMIR_b_LTActPumpRPMActPct
                ();

            /* End of Outputs for SubSystem: '<S96>/Fsft' */
            /* Transition: '<S183>:29' */
        }
        else
        {
            /* Transition: '<S183>:30' */
            /* Call Tmot */
            VeLINR_y_BCP_RPM_ACTUAL_CallStatus = 3U;

            /* Event: '<S183>:40' */
        }

        /* Transition: '<S183>:36' */
        /* Transition: '<S183>:23' */
    }
    else
    {
        /* Transition: '<S183>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_mc) == 133)
        {
            /* Transition: '<S183>:33' */
            /* Transition: '<S183>:35' */
            /* Call Nothing */
            VeLINR_y_BCP_RPM_ACTUAL_CallStatus = 4U;

            /* Transition: '<S183>:23' */
        }
        else
        {
            /* Transition: '<S183>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_mc) == 1)
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
            VeLINR_y_BCP_RPM_ACTUAL_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S96>/Poke' */
            /* FunctionCaller: '<S185>/Function Caller' */
            /* Event: '<S183>:38' */
            Rte_Call_PokePMIR_Pct_LTActPumpRPMAct_PokePMIR_Pct_LTActPumpRPMAct
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_Pct, FA_out_pw);

            /* End of Outputs for SubSystem: '<S96>/Poke' */
        }
    }

    /* End of Chart: '<S179>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_BCP_RPM_TARGET_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_BCP_RPM_TARGET_ErrSts'
     */
    /* Transition: '<S183>:19' */
    rtb_TmpSignalConversionAtVeL_mv =
        Rte_Read_VeLINR_Pct_BCP_RPM_TARGET_VeLINR_Pct_BCP_RPM_TARGET
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_P_p);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_BCP_RPM_TARGET_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S190>:1' */
    (void)Rte_Read_VeLINR_b_BCP_RPM_TARGET_TO_VeLINR_b_BCP_RPM_TARGET_TO
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
            VeLINR_y_BCP_RPM_TARGET_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S97>/Fsft' */
            /* FunctionCaller: '<S191>/Function Caller' */
            /* Event: '<S190>:39' */
            Rte_Call_FsftPMIR_b_LTActPumpRPMTgtPct_FsftPMIR_b_LTActPumpRPMTgtPct
                ();

            /* End of Outputs for SubSystem: '<S97>/Fsft' */
            /* Transition: '<S190>:29' */
        }
        else
        {
            /* Transition: '<S190>:30' */
            /* Call Tmot */
            VeLINR_y_BCP_RPM_TARGET_CallStatus = 3U;

            /* Event: '<S190>:40' */
        }

        /* Transition: '<S190>:36' */
        /* Transition: '<S190>:23' */
    }
    else
    {
        /* Transition: '<S190>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_mv) == 133)
        {
            /* Transition: '<S190>:33' */
            /* Transition: '<S190>:35' */
            /* Call Nothing */
            VeLINR_y_BCP_RPM_TARGET_CallStatus = 4U;

            /* Transition: '<S190>:23' */
        }
        else
        {
            /* Transition: '<S190>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_mv) == 1)
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
            VeLINR_y_BCP_RPM_TARGET_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S97>/Poke' */
            /* FunctionCaller: '<S192>/Function Caller' */
            /* Event: '<S190>:38' */
            Rte_Call_PokePMIR_Pct_LTActPumpRPMTgt_PokePMIR_Pct_LTActPumpRPMTgt
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_P_p, FA_out_m1);

            /* End of Outputs for SubSystem: '<S97>/Poke' */
        }
    }

    /* End of Chart: '<S186>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_BCP_TEMP_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_BCP_TEMP_ErrSts'
     */
    /* Transition: '<S190>:19' */
    rtb_TmpSignalConversionAtVeLI_i =
        Rte_Read_VeLINR_T_BCP_TEMP_VeLINR_T_BCP_TEMP
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_T_B);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_BCP_TEMP_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S197>:1' */
    (void)Rte_Read_VeLINR_b_BCP_TEMP_TO_VeLINR_b_BCP_TEMP_TO(&FA_out_ki);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S193>/Chart' */
    if (FA_out_ki)
    {
        /* Transition: '<S197>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S197>:6' */
            /* Transition: '<S197>:25' */
            /* Call Fsft */
            VeLINR_y_BCP_TEMP_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S98>/Fsft' */
            /* FunctionCaller: '<S198>/Function Caller' */
            /* Event: '<S197>:39' */
            Rte_Call_FsftPMIR_b_LTActPumpTemp_FsftPMIR_b_LTActPumpTemp();

            /* End of Outputs for SubSystem: '<S98>/Fsft' */
            /* Transition: '<S197>:29' */
        }
        else
        {
            /* Transition: '<S197>:30' */
            /* Call Tmot */
            VeLINR_y_BCP_TEMP_CallStatus = 3U;

            /* Event: '<S197>:40' */
        }

        /* Transition: '<S197>:36' */
        /* Transition: '<S197>:23' */
    }
    else
    {
        /* Transition: '<S197>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_i) == 133)
        {
            /* Transition: '<S197>:33' */
            /* Transition: '<S197>:35' */
            /* Call Nothing */
            VeLINR_y_BCP_TEMP_CallStatus = 4U;

            /* Transition: '<S197>:23' */
        }
        else
        {
            /* Transition: '<S197>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeLI_i) == 1)
            {
                /* Transition: '<S197>:48' */
                /* Transition: '<S197>:53' */
                FA_out_ki = true;

                /* Transition: '<S197>:56' */
            }
            else
            {
                /* Transition: '<S197>:52' */
            }

            /* Transition: '<S197>:37' */
            /* Call Poke */
            VeLINR_y_BCP_TEMP_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S98>/Poke' */
            /* FunctionCaller: '<S199>/Function Caller' */
            /* Event: '<S197>:38' */
            Rte_Call_PokePMIR_T_LTActPumpTemp_PokePMIR_T_LTActPumpTemp
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_T_B, FA_out_ki);

            /* End of Outputs for SubSystem: '<S98>/Poke' */
        }
    }

    /* End of Chart: '<S193>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_BCP_VLTG_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_BCP_VLTG_ErrSts'
     */
    /* Transition: '<S197>:19' */
    rtb_TmpSignalConversionAtVeL_j4 =
        Rte_Read_VeLINR_U_BCP_VLTG_VeLINR_U_BCP_VLTG
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_U_B);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_BCP_VLTG_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S204>:1' */
    (void)Rte_Read_VeLINR_b_BCP_VLTG_TO_VeLINR_b_BCP_VLTG_TO(&FA_out_pp);

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
            VeLINR_y_BCP_VLTG_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S99>/Fsft' */
            /* FunctionCaller: '<S205>/Function Caller' */
            /* Event: '<S204>:39' */
            Rte_Call_FsftPMIR_b_LTActPumpVlt_FsftPMIR_b_LTActPumpVlt();

            /* End of Outputs for SubSystem: '<S99>/Fsft' */
            /* Transition: '<S204>:29' */
        }
        else
        {
            /* Transition: '<S204>:30' */
            /* Call Tmot */
            VeLINR_y_BCP_VLTG_CallStatus = 3U;

            /* Event: '<S204>:40' */
        }

        /* Transition: '<S204>:36' */
        /* Transition: '<S204>:23' */
    }
    else
    {
        /* Transition: '<S204>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_j4) == 133)
        {
            /* Transition: '<S204>:33' */
            /* Transition: '<S204>:35' */
            /* Call Nothing */
            VeLINR_y_BCP_VLTG_CallStatus = 4U;

            /* Transition: '<S204>:23' */
        }
        else
        {
            /* Transition: '<S204>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_j4) == 1)
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
            VeLINR_y_BCP_VLTG_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S99>/Poke' */
            /* FunctionCaller: '<S206>/Function Caller' */
            /* Event: '<S204>:38' */
            Rte_Call_PokePMIR_U_LTActPumpVlt_PokePMIR_U_LTActPumpVlt
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_U_B, FA_out_pp);

            /* End of Outputs for SubSystem: '<S99>/Poke' */
        }
    }

    /* End of Chart: '<S200>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_BCP_VLTG_ERR_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_BCP_VLTG_ERR_ErrSts'
     */
    /* Transition: '<S204>:19' */
    rtb_TmpSignalConversionAtVeL_ap =
        Rte_Read_VeLINR_e_BCP_VLTG_ERR_VeLINR_e_BCP_VLTG_ERR
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__c1);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_BCP_VLTG_ERR_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S211>:1' */
    (void)Rte_Read_VeLINR_b_BCP_VLTG_ERR_TO_VeLINR_b_BCP_VLTG_ERR_TO(&FA_out_lf);

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
            VeLINR_y_BCP_VLTG_ERR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S100>/Fsft' */
            /* FunctionCaller: '<S212>/Function Caller' */
            /* Event: '<S211>:39' */
            Rte_Call_FsftPMIR_b_LTActPumpSuppVltErr_FsftPMIR_b_LTActPumpSuppVltErr
                ();

            /* End of Outputs for SubSystem: '<S100>/Fsft' */
            /* Transition: '<S211>:29' */
        }
        else
        {
            /* Transition: '<S211>:30' */
            /* Call Tmot */
            VeLINR_y_BCP_VLTG_ERR_CallStatus = 3U;

            /* Event: '<S211>:40' */
        }

        /* Transition: '<S211>:36' */
        /* Transition: '<S211>:23' */
    }
    else
    {
        /* Transition: '<S211>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_ap) == 133)
        {
            /* Transition: '<S211>:33' */
            /* Transition: '<S211>:35' */
            /* Call Nothing */
            VeLINR_y_BCP_VLTG_ERR_CallStatus = 4U;

            /* Transition: '<S211>:23' */
        }
        else
        {
            /* Transition: '<S211>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_ap) == 1)
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
            VeLINR_y_BCP_VLTG_ERR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S100>/Poke' */
            /* FunctionCaller: '<S213>/Function Caller' */
            /* Event: '<S211>:38' */
            Rte_Call_PokePMIR_e_LTActPumpSuppVltErr_PokePMIR_e_LTActPumpSuppVltErr
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__c1, FA_out_lf);

            /* End of Outputs for SubSystem: '<S100>/Poke' */
        }
    }

    /* End of Chart: '<S207>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_RsErr_BCP_PUMP_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_RsErr_BCP_PUMP_ErrSts'
     */
    /* Transition: '<S211>:19' */
    rtb_TmpSignalConversionAtVeL_m0 =
        Rte_Read_VeLINR_b_RsErr_BCP_PUMP_VeLINR_b_RsErr_BCP_PUMP
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_p);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_RsErr_BCP_PUMP_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S217>:1' */
    (void)Rte_Read_VeLINR_b_RsErr_BCP_PUMP_TO_VeLINR_b_RsErr_BCP_PUMP_TO
        (&FA_out_k5g);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S214>/Chart' */
    if (FA_out_k5g)
    {
        /* Transition: '<S217>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S217>:6' */
            /* Transition: '<S217>:25' */
            /* Call Fsft */
            VeLINR_y_RsErr_BCP_PUMP_CallStatus = 2U;

            /* Event: '<S217>:39' */
            /* Transition: '<S217>:29' */
        }
        else
        {
            /* Transition: '<S217>:30' */
            /* Call Tmot */
            VeLINR_y_RsErr_BCP_PUMP_CallStatus = 3U;

            /* Event: '<S217>:40' */
        }

        /* Transition: '<S217>:36' */
        /* Transition: '<S217>:23' */
    }
    else
    {
        /* Transition: '<S217>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_m0) == 133)
        {
            /* Transition: '<S217>:33' */
            /* Transition: '<S217>:35' */
            /* Call Nothing */
            VeLINR_y_RsErr_BCP_PUMP_CallStatus = 4U;

            /* Transition: '<S217>:23' */
        }
        else
        {
            /* Transition: '<S217>:46' */
            /* Transition: '<S217>:37' */
            /* Call Poke */
            VeLINR_y_RsErr_BCP_PUMP_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S101>/Poke' */
            /* FunctionCaller: '<S218>/Function Caller' */
            /* Event: '<S217>:38' */
            Rte_Call_PokePMIR_b_LTActPumpRespErr_PokePMIR_b_LTActPumpRespErr
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_p);

            /* End of Outputs for SubSystem: '<S101>/Poke' */
        }
    }

    /* End of Chart: '<S214>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_BCP_SUPPLIER_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_BCP_SUPPLIER_ErrSts'
     */
    /* Transition: '<S217>:19' */
    rtb_TmpSignalConversionAtVeL_eo =
        Rte_Read_VeLINR_e_BCP_SUPPLIER_VeLINR_e_BCP_SUPPLIER
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__or);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_BCP_SUPPLIER_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S224>:1' */
    (void)Rte_Read_VeLINR_b_BCP_SUPPLIER_TO_VeLINR_b_BCP_SUPPLIER_TO(&tmpRead_8);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S221>/Chart' */
    if (tmpRead_8)
    {
        /* Transition: '<S224>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S224>:6' */
            /* Transition: '<S224>:25' */
            /* Call Fsft */
            VeLINR_y_BCP_SUPPLIER_CallStatus = 2U;

            /* Event: '<S224>:39' */
            /* Transition: '<S224>:29' */
        }
        else
        {
            /* Transition: '<S224>:30' */
            /* Call Tmot */
            VeLINR_y_BCP_SUPPLIER_CallStatus = 3U;

            /* Event: '<S224>:40' */
        }

        /* Transition: '<S224>:36' */
        /* Transition: '<S224>:23' */
    }
    else
    {
        /* Transition: '<S224>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_eo) == 133)
        {
            /* Transition: '<S224>:33' */
            /* Transition: '<S224>:35' */
            /* Call Nothing */
            VeLINR_y_BCP_SUPPLIER_CallStatus = 4U;

            /* Transition: '<S224>:23' */
        }
        else
        {
            /* Transition: '<S224>:46' */
            /* Transition: '<S224>:37' */
            /* Call Poke */
            VeLINR_y_BCP_SUPPLIER_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S219>/Poke' */
            /* FunctionCaller: '<S225>/Function Caller' */
            /* Event: '<S224>:38' */
            Rte_Call_PokePMIR_e_LTActPumpProdSuplr_PokePMIR_e_LTActPumpProdSuplr
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__or);

            /* End of Outputs for SubSystem: '<S219>/Poke' */
        }
    }

    /* End of Chart: '<S221>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_BCP_VERSION_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_BCP_VERSION_ErrSts'
     */
    /* Transition: '<S224>:19' */
    rtb_TmpSignalConversionAtVeL_is =
        Rte_Read_VeLINR_y_BCP_VERSION_VeLINR_y_BCP_VERSION
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_y_B);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_BCP_VERSION_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S229>:1' */
    (void)Rte_Read_VeLINR_b_BCP_VERSION_TO_VeLINR_b_BCP_VERSION_TO(&tmpRead_9);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S226>/Chart' */
    if (tmpRead_9)
    {
        /* Transition: '<S229>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S229>:6' */
            /* Transition: '<S229>:25' */
            /* Call Fsft */
            VeLINR_y_BCP_VERSION_CallStatus = 2U;

            /* Event: '<S229>:39' */
            /* Transition: '<S229>:29' */
        }
        else
        {
            /* Transition: '<S229>:30' */
            /* Call Tmot */
            VeLINR_y_BCP_VERSION_CallStatus = 3U;

            /* Event: '<S229>:40' */
        }

        /* Transition: '<S229>:36' */
        /* Transition: '<S229>:23' */
    }
    else
    {
        /* Transition: '<S229>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_is) == 133)
        {
            /* Transition: '<S229>:33' */
            /* Transition: '<S229>:35' */
            /* Call Nothing */
            VeLINR_y_BCP_VERSION_CallStatus = 4U;

            /* Transition: '<S229>:23' */
        }
        else
        {
            /* Transition: '<S229>:46' */
            /* Transition: '<S229>:37' */
            /* Call Poke */
            VeLINR_y_BCP_VERSION_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S220>/Poke' */
            /* DataTypeConversion: '<S230>/Data Type Conversion' */
            /* Event: '<S229>:38' */
            tmp = fmodf(floorf(LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_y_B),
                        256.0F);

            /* FunctionCaller: '<S230>/Function Caller' incorporates:
             *  DataTypeConversion: '<S230>/Data Type Conversion'
             */
            Rte_Call_PokePMIR_y_LTActPump_Ver_PokePMIR_y_LTActPump_Ver((uint8)
                ((tmp < 0.0F) ? ((sint32)((uint8)((sint32)(-((sint32)((sint8)
                ((uint8)((float32)(-tmp))))))))) : ((sint32)((uint8)tmp))));

            /* End of Outputs for SubSystem: '<S220>/Poke' */
        }
    }

    /* End of Chart: '<S226>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_CPV_CalStat_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_CPV_CalStat_ErrSts'
     */
    /* Transition: '<S229>:19' */
    rtb_TmpSignalConversionAtVeLI_h =
        Rte_Read_VeLINR_e_CPV_CalStat_VeLINR_e_CPV_CalStat
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_C);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_CPV_CalStatTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S240>:1' */
    (void)Rte_Read_VeLINR_b_CPV_CalStatTO_VeLINR_b_CPV_CalStatTO(&tmpRead_a);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S237>/Chart' */
    if (tmpRead_a)
    {
        /* Transition: '<S240>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S240>:6' */
            /* Transition: '<S240>:25' */
            /* Call Fsft */
            VeLINR_y_CPV_CalStat_CallStatus = 2U;

            /* Event: '<S240>:39' */
            /* Transition: '<S240>:29' */
        }
        else
        {
            /* Transition: '<S240>:30' */
            /* Call Tmot */
            VeLINR_y_CPV_CalStat_CallStatus = 3U;

            /* Event: '<S240>:40' */
        }

        /* Transition: '<S240>:36' */
        /* Transition: '<S240>:23' */
    }
    else
    {
        /* Transition: '<S240>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_h) == 133)
        {
            /* Transition: '<S240>:33' */
            /* Transition: '<S240>:35' */
            /* Call Nothing */
            VeLINR_y_CPV_CalStat_CallStatus = 4U;

            /* Transition: '<S240>:23' */
        }
        else
        {
            /* Transition: '<S240>:46' */
            /* Transition: '<S240>:37' */
            /* Call Poke */
            VeLINR_y_CPV_CalStat_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S231>/Poke' */
            /* FunctionCaller: '<S241>/Function Caller' incorporates:
             *  Constant: '<S241>/Constant'
             */
            /* Event: '<S240>:38' */
            Rte_Call_PokeTAIR_e_FrWyVlv_CalSts_PokeTAIR_e_FrWyVlv_CalSts
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_C, false);

            /* End of Outputs for SubSystem: '<S231>/Poke' */
        }
    }

    /* End of Chart: '<S237>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_CPV_ERR_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_CPV_ERR_ErrSts'
     */
    /* Transition: '<S240>:19' */
    rtb_TmpSignalConversionAtVe_j42 = Rte_Read_VeLINR_e_CPV_ERR_VeLINR_e_CPV_ERR
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__oe);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_CPV_ERR_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S246>:1' */
    (void)Rte_Read_VeLINR_b_CPV_ERR_TO_VeLINR_b_CPV_ERR_TO(&tmpRead_b);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S242>/Chart' */
    if (tmpRead_b)
    {
        /* Transition: '<S246>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S246>:6' */
            /* Transition: '<S246>:25' */
            /* Call Fsft */
            VeLINR_y_CPV_ERR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S232>/Fsft' */
            /* FunctionCaller: '<S247>/Function Caller' */
            /* Event: '<S246>:39' */
            Rte_Call_FsftTAIR_y_FrWyVlv_ErrMsgs_FsftTAIR_y_FrWyVlv_ErrMsgs();

            /* End of Outputs for SubSystem: '<S232>/Fsft' */
            /* Transition: '<S246>:29' */
        }
        else
        {
            /* Transition: '<S246>:30' */
            /* Call Tmot */
            VeLINR_y_CPV_ERR_CallStatus = 3U;

            /* Event: '<S246>:40' */
        }

        /* Transition: '<S246>:36' */
        /* Transition: '<S246>:23' */
    }
    else
    {
        /* Transition: '<S246>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVe_j42) == 133)
        {
            /* Transition: '<S246>:33' */
            /* Transition: '<S246>:35' */
            /* Call Nothing */
            VeLINR_y_CPV_ERR_CallStatus = 4U;

            /* Transition: '<S246>:23' */
        }
        else
        {
            /* Transition: '<S246>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVe_j42) == 1)
            {
                /* Transition: '<S246>:48' */
                /* Transition: '<S246>:53' */
                FA_out_k5g = true;

                /* Transition: '<S246>:56' */
            }
            else
            {
                /* Transition: '<S246>:52' */
                FA_out_k5g = false;
            }

            /* Transition: '<S246>:37' */
            /* Call Poke */
            VeLINR_y_CPV_ERR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S232>/Poke' */
            /* FunctionCaller: '<S248>/Function Caller' */
            /* Event: '<S246>:38' */
            Rte_Call_PokeTAIR_y_FrWyVlv_ErrMsgs_PokeTAIR_y_FrWyVlv_ErrMsgs
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__oe, FA_out_k5g);

            /* End of Outputs for SubSystem: '<S232>/Poke' */
        }
    }

    /* End of Chart: '<S242>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_CPV_MotorVolt_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_CPV_MotorVolt_ErrSts'
     */
    /* Transition: '<S246>:19' */
    rtb_TmpSignalConversionAtVeLI_b =
        Rte_Read_VeLINR_U_CPV_MotorVolt_VeLINR_U_CPV_MotorVolt
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_U_C);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_CPV_MotorVoltTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S252>:1' */
    (void)Rte_Read_VeLINR_b_CPV_MotorVoltTO_VeLINR_b_CPV_MotorVoltTO(&FA_out_k5);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S249>/Chart' */
    if (FA_out_k5)
    {
        /* Transition: '<S252>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S252>:6' */
            /* Transition: '<S252>:25' */
            /* Call Fsft */
            VeLINR_y_CPV_MotorVolt_CallStatus = 2U;

            /* Event: '<S252>:39' */
            /* Transition: '<S252>:29' */
        }
        else
        {
            /* Transition: '<S252>:30' */
            /* Call Tmot */
            VeLINR_y_CPV_MotorVolt_CallStatus = 3U;

            /* Event: '<S252>:40' */
        }

        /* Transition: '<S252>:36' */
        /* Transition: '<S252>:23' */
    }
    else
    {
        /* Transition: '<S252>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_b) == 133)
        {
            /* Transition: '<S252>:33' */
            /* Transition: '<S252>:35' */
            /* Call Nothing */
            VeLINR_y_CPV_MotorVolt_CallStatus = 4U;

            /* Transition: '<S252>:23' */
        }
        else
        {
            /* Transition: '<S252>:46' */
            /* Transition: '<S252>:37' */
            /* Call Poke */
            VeLINR_y_CPV_MotorVolt_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S233>/Poke' */
            /* FunctionCaller: '<S253>/Function Caller' incorporates:
             *  Constant: '<S253>/Constant'
             */
            /* Event: '<S252>:38' */
            Rte_Call_PokeTAIR_U_FrWyVlv_MtrVltg_PokeTAIR_U_FrWyVlv_MtrVltg
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_U_C, false);

            /* End of Outputs for SubSystem: '<S233>/Poke' */
        }
    }

    /* End of Chart: '<S249>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_CPV_PosAct_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_CPV_PosAct_ErrSts'
     */
    /* Transition: '<S252>:19' */
    rtb_TmpSignalConversionAtVeL_bb =
        Rte_Read_VeLINR_Pct_CPV_PosAct_VeLINR_Pct_CPV_PosAct
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_P_o);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_CPV_PosActTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S258>:1' */
    (void)Rte_Read_VeLINR_b_CPV_PosActTO_VeLINR_b_CPV_PosActTO(&tmpRead_c);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S254>/Chart' */
    if (tmpRead_c)
    {
        /* Transition: '<S258>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S258>:6' */
            /* Transition: '<S258>:25' */
            /* Call Fsft */
            VeLINR_y_CPV_PosAct_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S234>/Fsft' */
            /* FunctionCaller: '<S259>/Function Caller' */
            /* Event: '<S258>:39' */
            Rte_Call_FsftTAIR_Pct_FrWyVlv_ActlPstn_FsftTAIR_Pct_FrWyVlv_ActlPstn
                ();

            /* End of Outputs for SubSystem: '<S234>/Fsft' */
            /* Transition: '<S258>:29' */
        }
        else
        {
            /* Transition: '<S258>:30' */
            /* Call Tmot */
            VeLINR_y_CPV_PosAct_CallStatus = 3U;

            /* Event: '<S258>:40' */
        }

        /* Transition: '<S258>:36' */
        /* Transition: '<S258>:23' */
    }
    else
    {
        /* Transition: '<S258>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_bb) == 133)
        {
            /* Transition: '<S258>:33' */
            /* Transition: '<S258>:35' */
            /* Call Nothing */
            VeLINR_y_CPV_PosAct_CallStatus = 4U;

            /* Transition: '<S258>:23' */
        }
        else
        {
            /* Transition: '<S258>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_bb) == 1)
            {
                /* Transition: '<S258>:48' */
                /* Transition: '<S258>:53' */
                FA_out_k5 = true;

                /* Transition: '<S258>:56' */
            }
            else
            {
                /* Transition: '<S258>:52' */
                FA_out_k5 = false;
            }

            /* Transition: '<S258>:37' */
            /* Call Poke */
            VeLINR_y_CPV_PosAct_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S234>/Poke' */
            /* FunctionCaller: '<S260>/Function Caller' */
            /* Event: '<S258>:38' */
            Rte_Call_PokeTAIR_Pct_FrWyVlv_ActlPstn_PokeTAIR_Pct_FrWyVlv_ActlPstn
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_P_o, FA_out_k5);

            /* End of Outputs for SubSystem: '<S234>/Poke' */
        }
    }

    /* End of Chart: '<S254>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_CPV_Sts_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_CPV_Sts_ErrSts'
     */
    /* Transition: '<S258>:19' */
    rtb_TmpSignalConversionAtVeL_mg = Rte_Read_VeLINR_e_CPV_Sts_VeLINR_e_CPV_Sts
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__e0);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_CPV_StsTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S264>:1' */
    (void)Rte_Read_VeLINR_b_CPV_StsTO_VeLINR_b_CPV_StsTO(&FA_out_nu);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S261>/Chart' */
    if (FA_out_nu)
    {
        /* Transition: '<S264>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S264>:6' */
            /* Transition: '<S264>:25' */
            /* Call Fsft */
            VeLINR_y_CPV_Sts_CallStatus = 2U;

            /* Event: '<S264>:39' */
            /* Transition: '<S264>:29' */
        }
        else
        {
            /* Transition: '<S264>:30' */
            /* Call Tmot */
            VeLINR_y_CPV_Sts_CallStatus = 3U;

            /* Event: '<S264>:40' */
        }

        /* Transition: '<S264>:36' */
        /* Transition: '<S264>:23' */
    }
    else
    {
        /* Transition: '<S264>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_mg) == 133)
        {
            /* Transition: '<S264>:33' */
            /* Transition: '<S264>:35' */
            /* Call Nothing */
            VeLINR_y_CPV_Sts_CallStatus = 4U;

            /* Transition: '<S264>:23' */
        }
        else
        {
            /* Transition: '<S264>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_mg) == 1)
            {
                /* Transition: '<S264>:48' */
                /* Transition: '<S264>:53' */
                FA_out_nu = true;

                /* Transition: '<S264>:56' */
            }
            else
            {
                /* Transition: '<S264>:52' */
            }

            /* Transition: '<S264>:37' */
            /* Call Poke */
            VeLINR_y_CPV_Sts_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S235>/Poke' */
            /* FunctionCaller: '<S265>/Function Caller' */
            /* Event: '<S264>:38' */
            Rte_Call_PokeTAIR_e_FrWyVlv_ErrSts_PokeTAIR_e_FrWyVlv_ErrSts
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__e0, FA_out_nu);

            /* End of Outputs for SubSystem: '<S235>/Poke' */
        }
    }

    /* End of Chart: '<S261>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_RsErr_CPV_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_RsErr_CPV_ErrSts'
     */
    /* Transition: '<S264>:19' */
    rtb_TmpSignalConversionAtVeL_b4 =
        Rte_Read_VeLINR_b_RsErr_CPV_VeLINR_b_RsErr_CPV
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__ac);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_RsErr_CPV_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S269>:1' */
    (void)Rte_Read_VeLINR_b_RsErr_CPV_TO_VeLINR_b_RsErr_CPV_TO(&FA_out_lhp);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S266>/Chart' */
    if (FA_out_lhp)
    {
        /* Transition: '<S269>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S269>:6' */
            /* Transition: '<S269>:25' */
            /* Call Fsft */
            VeLINR_y_RsErr_CPV_CallStatus = 2U;

            /* Event: '<S269>:39' */
            /* Transition: '<S269>:29' */
        }
        else
        {
            /* Transition: '<S269>:30' */
            /* Call Tmot */
            VeLINR_y_RsErr_CPV_CallStatus = 3U;

            /* Event: '<S269>:40' */
        }

        /* Transition: '<S269>:36' */
        /* Transition: '<S269>:23' */
    }
    else
    {
        /* Transition: '<S269>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_b4) == 133)
        {
            /* Transition: '<S269>:33' */
            /* Transition: '<S269>:35' */
            /* Call Nothing */
            VeLINR_y_RsErr_CPV_CallStatus = 4U;

            /* Transition: '<S269>:23' */
        }
        else
        {
            /* Transition: '<S269>:46' */
            /* Transition: '<S269>:37' */
            /* Call Poke */
            VeLINR_y_RsErr_CPV_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S236>/Poke' */
            /* FunctionCaller: '<S270>/Function Caller' */
            /* Event: '<S269>:38' */
            Rte_Call_PokeTAIR_b_FrWyVlv_RsErr_PokeTAIR_b_FrWyVlv_RsErr
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__ac);

            /* End of Outputs for SubSystem: '<S236>/Poke' */
        }
    }

    /* End of Chart: '<S266>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_T_EEXV_Board_Temp' incorporates:
     *  Inport: '<Root>/VeLINR_b_EEXV_Board_TempTO'
     */
    /* Transition: '<S269>:19' */
#if Rte_SysCon_VrntLR1B_EEXVBoardTemp

    /* Outputs for Atomic SubSystem: '<S7>/EEXV_Board_Temp' */
    /* SignalConversion generated from: '<S2>/VeLINR_T_EEXV_Board_Temp' incorporates:
     *  Inport: '<Root>/VeLINR_T_EEXV_Board_Temp'
     */
    rtb_TmpSignalConversionAtVeL_iv =
        Rte_Read_VeLINR_T_EEXV_Board_Temp_VeLINR_T_EEXV_Board_Temp
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_T_E);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S285>:1' */
    (void)Rte_Read_VeLINR_b_EEXV_Board_TempTO_VeLINR_b_EEXV_Board_TempTO
        (&tmpRead_d);

    /* Outputs for Atomic SubSystem: '<S271>/EEXV_Board_Temp' */
    /* Chart: '<S282>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_EEXV_Board_TempTO'
     */
    if (tmpRead_d)
    {
        /* Transition: '<S285>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S285>:6' */
            /* Transition: '<S285>:25' */
            /* Call Fsft */
            VeLINR_y_EEXV_Board_Temp_CallStatus = 2U;

            /* Event: '<S285>:39' */
            /* Transition: '<S285>:29' */
        }
        else
        {
            /* Transition: '<S285>:30' */
            /* Call Tmot */
            VeLINR_y_EEXV_Board_Temp_CallStatus = 3U;

            /* Event: '<S285>:40' */
        }

        /* Transition: '<S285>:36' */
        /* Transition: '<S285>:23' */
    }
    else
    {
        /* Transition: '<S285>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_iv) == 133)
        {
            /* Transition: '<S285>:33' */
            /* Transition: '<S285>:35' */
            /* Call Nothing */
            VeLINR_y_EEXV_Board_Temp_CallStatus = 4U;

            /* Transition: '<S285>:23' */
        }
        else
        {
            /* Transition: '<S285>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_iv) == 1)
            {
                /* Transition: '<S285>:48' */
                /* Transition: '<S285>:53' */
                FA_out_lhp = true;

                /* Transition: '<S285>:56' */
            }
            else
            {
                /* Transition: '<S285>:52' */
                FA_out_lhp = false;
            }

            /* Transition: '<S285>:37' */
            /* Call Poke */
            VeLINR_y_EEXV_Board_Temp_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S281>/Poke' */
            /* FunctionCaller: '<S286>/Function Caller' */
            /* Event: '<S285>:38' */
            Rte_Call_PokeTAIR_T_EEXV_BoardTemp_PokeTAIR_T_EEXV_BoardTemp
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_T_E, FA_out_lhp);

            /* End of Outputs for SubSystem: '<S281>/Poke' */
        }
    }

    /* End of Chart: '<S282>/Chart' */
    /* End of Outputs for SubSystem: '<S271>/EEXV_Board_Temp' */
    /* End of Outputs for SubSystem: '<S7>/EEXV_Board_Temp' */
    /* Transition: '<S285>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_T_EEXV_Board_Temp' */

    /* SignalConversion generated from: '<S2>/VeLINR_b_EEXV_CalRq' incorporates:
     *  Inport: '<Root>/VeLINR_b_EEXV_CalRqTO'
     */
#if Rte_SysCon_VrntLR1B_EEXVCalRq

    /* Outputs for Atomic SubSystem: '<S7>/EEXV_CalRq' */
    /* SignalConversion generated from: '<S2>/VeLINR_b_EEXV_CalRq' incorporates:
     *  Inport: '<Root>/VeLINR_b_EEXV_CalRq'
     */
    rtb_TmpSignalConversionAtVeLI_c =
        Rte_Read_VeLINR_b_EEXV_CalRq_VeLINR_b_EEXV_CalRq
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_E);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S291>:1' */
    (void)Rte_Read_VeLINR_b_EEXV_CalRqTO_VeLINR_b_EEXV_CalRqTO(&FA_out_hx);

    /* Outputs for Atomic SubSystem: '<S272>/EEXV_CalRq' */
    /* Chart: '<S288>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_EEXV_CalRqTO'
     */
    if (FA_out_hx)
    {
        /* Transition: '<S291>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S291>:6' */
            /* Transition: '<S291>:25' */
            /* Call Fsft */
            VeLINR_y_EEXV_CalRq_CallStatus = 2U;

            /* Event: '<S291>:39' */
            /* Transition: '<S291>:29' */
        }
        else
        {
            /* Transition: '<S291>:30' */
            /* Call Tmot */
            VeLINR_y_EEXV_CalRq_CallStatus = 3U;

            /* Event: '<S291>:40' */
        }

        /* Transition: '<S291>:36' */
        /* Transition: '<S291>:23' */
    }
    else
    {
        /* Transition: '<S291>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_c) == 133)
        {
            /* Transition: '<S291>:33' */
            /* Transition: '<S291>:35' */
            /* Call Nothing */
            VeLINR_y_EEXV_CalRq_CallStatus = 4U;

            /* Transition: '<S291>:23' */
        }
        else
        {
            /* Transition: '<S291>:46' */
            /* Transition: '<S291>:37' */
            /* Call Poke */
            VeLINR_y_EEXV_CalRq_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S287>/Poke' */
            /* FunctionCaller: '<S292>/Function Caller' */
            /* Event: '<S291>:38' */
            Rte_Call_PokeTAIR_b_EEXV_CalRq_PokeTAIR_b_EEXV_CalRq
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_E);

            /* End of Outputs for SubSystem: '<S287>/Poke' */
        }
    }

    /* End of Chart: '<S288>/Chart' */
    /* End of Outputs for SubSystem: '<S272>/EEXV_CalRq' */
    /* End of Outputs for SubSystem: '<S7>/EEXV_CalRq' */
    /* Transition: '<S291>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_b_EEXV_CalRq' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_EEXV_CalStat' incorporates:
     *  Inport: '<Root>/VeLINR_b_EEXV_CalStatTO'
     */
#if Rte_SysCon_VrntLR1B_EEXVCalStat

    /* Outputs for Atomic SubSystem: '<S7>/EEXV_CalStat' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_EEXV_CalStat' incorporates:
     *  Inport: '<Root>/VeLINR_e_EEXV_CalStat'
     */
    rtb_TmpSignalConversionAtVeLI_n =
        Rte_Read_VeLINR_e_EEXV_CalStat_VeLINR_e_EEXV_CalStat
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__ao);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S297>:1' */
    (void)Rte_Read_VeLINR_b_EEXV_CalStatTO_VeLINR_b_EEXV_CalStatTO(&tmpRead_e);

    /* Outputs for Atomic SubSystem: '<S273>/EEXV_CalStat' */
    /* Chart: '<S294>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_EEXV_CalStatTO'
     */
    if (tmpRead_e)
    {
        /* Transition: '<S297>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S297>:6' */
            /* Transition: '<S297>:25' */
            /* Call Fsft */
            VeLINR_y_EEXV_CalStat_CallStatus = 2U;

            /* Event: '<S297>:39' */
            /* Transition: '<S297>:29' */
        }
        else
        {
            /* Transition: '<S297>:30' */
            /* Call Tmot */
            VeLINR_y_EEXV_CalStat_CallStatus = 3U;

            /* Event: '<S297>:40' */
        }

        /* Transition: '<S297>:36' */
        /* Transition: '<S297>:23' */
    }
    else
    {
        /* Transition: '<S297>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_n) == 133)
        {
            /* Transition: '<S297>:33' */
            /* Transition: '<S297>:35' */
            /* Call Nothing */
            VeLINR_y_EEXV_CalStat_CallStatus = 4U;

            /* Transition: '<S297>:23' */
        }
        else
        {
            /* Transition: '<S297>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeLI_n) == 1)
            {
                /* Transition: '<S297>:48' */
                /* Transition: '<S297>:53' */
                FA_out_hx = true;

                /* Transition: '<S297>:56' */
            }
            else
            {
                /* Transition: '<S297>:52' */
                FA_out_hx = false;
            }

            /* Transition: '<S297>:37' */
            /* Call Poke */
            VeLINR_y_EEXV_CalStat_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S293>/Poke' */
            /* FunctionCaller: '<S298>/Function Caller' */
            /* Event: '<S297>:38' */
            Rte_Call_PokeTAIR_e_EEXV_CalStat_PokeTAIR_e_EEXV_CalStat
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__ao, FA_out_hx);

            /* End of Outputs for SubSystem: '<S293>/Poke' */
        }
    }

    /* End of Chart: '<S294>/Chart' */
    /* End of Outputs for SubSystem: '<S273>/EEXV_CalStat' */
    /* End of Outputs for SubSystem: '<S7>/EEXV_CalStat' */
    /* Transition: '<S297>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_EEXV_CalStat' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_EEXV_ERR' incorporates:
     *  Inport: '<Root>/VeLINR_b_EEXV_ERR_TO'
     */
#if Rte_SysCon_VrntLR1B_EEXVERR

    /* Outputs for Atomic SubSystem: '<S7>/EEXV_ERR' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_EEXV_ERR' incorporates:
     *  Inport: '<Root>/VeLINR_e_EEXV_ERR'
     */
    rtb_TmpSignalConversionAtVeL_n0 =
        Rte_Read_VeLINR_e_EEXV_ERR_VeLINR_e_EEXV_ERR
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_n);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S303>:1' */
    (void)Rte_Read_VeLINR_b_EEXV_ERR_TO_VeLINR_b_EEXV_ERR_TO(&FA_out_jw);

    /* Outputs for Atomic SubSystem: '<S274>/EEXV_ERR' */
    /* Chart: '<S300>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_EEXV_ERR_TO'
     */
    if (FA_out_jw)
    {
        /* Transition: '<S303>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S303>:6' */
            /* Transition: '<S303>:25' */
            /* Call Fsft */
            VeLINR_y_EEXV_ERR_CallStatus = 2U;

            /* Event: '<S303>:39' */
            /* Transition: '<S303>:29' */
        }
        else
        {
            /* Transition: '<S303>:30' */
            /* Call Tmot */
            VeLINR_y_EEXV_ERR_CallStatus = 3U;

            /* Event: '<S303>:40' */
        }

        /* Transition: '<S303>:36' */
        /* Transition: '<S303>:23' */
    }
    else
    {
        /* Transition: '<S303>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_n0) == 133)
        {
            /* Transition: '<S303>:33' */
            /* Transition: '<S303>:35' */
            /* Call Nothing */
            VeLINR_y_EEXV_ERR_CallStatus = 4U;

            /* Transition: '<S303>:23' */
        }
        else
        {
            /* Transition: '<S303>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_n0) == 1)
            {
                /* Transition: '<S303>:48' */
                /* Transition: '<S303>:53' */
                FA_out_jw = true;

                /* Transition: '<S303>:56' */
            }
            else
            {
                /* Transition: '<S303>:52' */
            }

            /* Transition: '<S303>:37' */
            /* Call Poke */
            VeLINR_y_EEXV_ERR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S299>/Poke' */
            /* FunctionCaller: '<S304>/Function Caller' */
            /* Event: '<S303>:38' */
            Rte_Call_PokeTAIR_e_EEXV_Err_PokeTAIR_e_EEXV_Err
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_n, FA_out_jw);

            /* End of Outputs for SubSystem: '<S299>/Poke' */
        }
    }

    /* End of Chart: '<S300>/Chart' */
    /* End of Outputs for SubSystem: '<S274>/EEXV_ERR' */
    /* End of Outputs for SubSystem: '<S7>/EEXV_ERR' */
    /* Transition: '<S303>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_EEXV_ERR' */

    /* SignalConversion generated from: '<S2>/VeLINR_Pct_EEXV_PosAct' incorporates:
     *  Inport: '<Root>/VeLINR_b_EEXV_PosActTO'
     */
#if Rte_SysCon_VrntLR1B_EEXVPosAct

    /* Outputs for Atomic SubSystem: '<S7>/EEXV_PosAct' */
    /* SignalConversion generated from: '<S2>/VeLINR_Pct_EEXV_PosAct' incorporates:
     *  Inport: '<Root>/VeLINR_Pct_EEXV_PosAct'
     */
    rtb_TmpSignalConversionAtVeL_al =
        Rte_Read_VeLINR_Pct_EEXV_PosAct_VeLINR_Pct_EEXV_PosAct
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_P_h);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S310>:1' */
    (void)Rte_Read_VeLINR_b_EEXV_PosActTO_VeLINR_b_EEXV_PosActTO(&FA_out_hq);

    /* Outputs for Atomic SubSystem: '<S275>/EEXV_PosAct' */
    /* Chart: '<S306>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_EEXV_PosActTO'
     */
    if (FA_out_hq)
    {
        /* Transition: '<S310>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S310>:6' */
            /* Transition: '<S310>:25' */
            /* Call Fsft */
            VeLINR_y_EEXV_PosAct_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S305>/Fsft' */
            /* FunctionCaller: '<S311>/Function Caller' */
            /* Event: '<S310>:39' */
            Rte_Call_FsftTAIR_Pct_EEXV_PosAct_FsftTAIR_Pct_EEXV_PosAct();

            /* End of Outputs for SubSystem: '<S305>/Fsft' */
            /* Transition: '<S310>:29' */
        }
        else
        {
            /* Transition: '<S310>:30' */
            /* Call Tmot */
            VeLINR_y_EEXV_PosAct_CallStatus = 3U;

            /* Event: '<S310>:40' */
        }

        /* Transition: '<S310>:36' */
        /* Transition: '<S310>:23' */
    }
    else
    {
        /* Transition: '<S310>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_al) == 133)
        {
            /* Transition: '<S310>:33' */
            /* Transition: '<S310>:35' */
            /* Call Nothing */
            VeLINR_y_EEXV_PosAct_CallStatus = 4U;

            /* Transition: '<S310>:23' */
        }
        else
        {
            /* Transition: '<S310>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_al) == 1)
            {
                /* Transition: '<S310>:48' */
                /* Transition: '<S310>:53' */
                FA_out_hq = true;

                /* Transition: '<S310>:56' */
            }
            else
            {
                /* Transition: '<S310>:52' */
            }

            /* Transition: '<S310>:37' */
            /* Call Poke */
            VeLINR_y_EEXV_PosAct_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S305>/Poke' */
            /* FunctionCaller: '<S312>/Function Caller' */
            /* Event: '<S310>:38' */
            Rte_Call_PokeTAIR_Pct_EEXV_PosAct_PokeTAIR_Pct_EEXV_PosAct
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_P_h, FA_out_hq);

            /* End of Outputs for SubSystem: '<S305>/Poke' */
        }
    }

    /* End of Chart: '<S306>/Chart' */
    /* End of Outputs for SubSystem: '<S275>/EEXV_PosAct' */
    /* End of Outputs for SubSystem: '<S7>/EEXV_PosAct' */
    /* Transition: '<S310>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_Pct_EEXV_PosAct' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_EEXV_Refrig_Pressure' incorporates:
     *  Inport: '<Root>/VeLINR_b_EEXV_Refrig_PressureTO'
     */
#if Rte_SysCon_VrntLR1B_EEXVRefrigerantPressure

    /* Outputs for Atomic SubSystem: '<S7>/EEXV_Refrigerant_Pressure' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_EEXV_Refrig_Pressure' incorporates:
     *  Inport: '<Root>/VeLINR_e_EEXV_Refrig_Pressure'
     */
    rtb_TmpSignalConversionAtVeLI_l =
        Rte_Read_VeLINR_e_EEXV_Refrig_Pressure_VeLINR_e_EEXV_Refrig_Pressure
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_E);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S318>:1' */
    (void)
        Rte_Read_VeLINR_b_EEXV_Refrig_PressureTO_VeLINR_b_EEXV_Refrig_PressureTO
        (&FA_out_gp);

    /* Outputs for Atomic SubSystem: '<S276>/EEXV_Refrigerant_Pressure' */
    /* Chart: '<S314>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_EEXV_Refrig_PressureTO'
     */
    if (FA_out_gp)
    {
        /* Transition: '<S318>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S318>:6' */
            /* Transition: '<S318>:25' */
            /* Call Fsft */
            VeLINR_y_EEXV_Refrig_Pressure_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S313>/Fsft' */
            /* FunctionCaller: '<S319>/Function Caller' */
            /* Event: '<S318>:39' */
            Rte_Call_FsftTAIR_p_EEXV_RefPress_FsftTAIR_p_EEXV_RefPress();

            /* End of Outputs for SubSystem: '<S313>/Fsft' */
            /* Transition: '<S318>:29' */
        }
        else
        {
            /* Transition: '<S318>:30' */
            /* Call Tmot */
            VeLINR_y_EEXV_Refrig_Pressure_CallStatus = 3U;

            /* Event: '<S318>:40' */
        }

        /* Transition: '<S318>:36' */
        /* Transition: '<S318>:23' */
    }
    else
    {
        /* Transition: '<S318>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_l) == 133)
        {
            /* Transition: '<S318>:33' */
            /* Transition: '<S318>:35' */
            /* Call Nothing */
            VeLINR_y_EEXV_Refrig_Pressure_CallStatus = 4U;

            /* Transition: '<S318>:23' */
        }
        else
        {
            /* Transition: '<S318>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeLI_l) == 1)
            {
                /* Transition: '<S318>:48' */
                /* Transition: '<S318>:53' */
                FA_out_gp = true;

                /* Transition: '<S318>:56' */
            }
            else
            {
                /* Transition: '<S318>:52' */
            }

            /* Transition: '<S318>:37' */
            /* Call Poke */
            VeLINR_y_EEXV_Refrig_Pressure_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S313>/Poke' */
            /* FunctionCaller: '<S320>/Function Caller' */
            /* Event: '<S318>:38' */
            Rte_Call_PokeTAIR_p_EEXV_RefPress_PokeTAIR_p_EEXV_RefPress
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_E, FA_out_gp);

            /* End of Outputs for SubSystem: '<S313>/Poke' */
        }
    }

    /* End of Chart: '<S314>/Chart' */
    /* End of Outputs for SubSystem: '<S276>/EEXV_Refrigerant_Pressure' */
    /* End of Outputs for SubSystem: '<S7>/EEXV_Refrigerant_Pressure' */
    /* Transition: '<S318>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_EEXV_Refrig_Pressure' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_EEXV_Refrigerant_Temp' incorporates:
     *  Inport: '<Root>/VeLINR_b_EEXV_Refrigerant_TempTO'
     */
#if Rte_SysCon_VrntLR1B_EEXVRefrigerantTemp

    /* Outputs for Atomic SubSystem: '<S7>/EEXV_Refrigerant_Temp' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_EEXV_Refrigerant_Temp' incorporates:
     *  Inport: '<Root>/VeLINR_e_EEXV_Refrigerant_Temp'
     */
    rtb_TmpSignalConversionAtVeL_cy =
        Rte_Read_VeLINR_e_EEXV_Refrigerant_Temp_VeLINR_e_EEXV_Refrigerant_Temp
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_j);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S326>:1' */
    (void)
        Rte_Read_VeLINR_b_EEXV_Refrigerant_TempTO_VeLINR_b_EEXV_Refrigerant_TempTO
        (&FA_out_c2);

    /* Outputs for Atomic SubSystem: '<S277>/EEXV_Refrigerant_Temp' */
    /* Chart: '<S322>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_EEXV_Refrigerant_TempTO'
     */
    if (FA_out_c2)
    {
        /* Transition: '<S326>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S326>:6' */
            /* Transition: '<S326>:25' */
            /* Call Fsft */
            VeLINR_y_EEXV_Refrigerant_Temp_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S321>/Fsft' */
            /* FunctionCaller: '<S327>/Function Caller' */
            /* Event: '<S326>:39' */
            Rte_Call_FsftTAIR_T_EEXV_RefTemp_FsftTAIR_T_EEXV_RefTemp();

            /* End of Outputs for SubSystem: '<S321>/Fsft' */
            /* Transition: '<S326>:29' */
        }
        else
        {
            /* Transition: '<S326>:30' */
            /* Call Tmot */
            VeLINR_y_EEXV_Refrigerant_Temp_CallStatus = 3U;

            /* Event: '<S326>:40' */
        }

        /* Transition: '<S326>:36' */
        /* Transition: '<S326>:23' */
    }
    else
    {
        /* Transition: '<S326>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_cy) == 133)
        {
            /* Transition: '<S326>:33' */
            /* Transition: '<S326>:35' */
            /* Call Nothing */
            VeLINR_y_EEXV_Refrigerant_Temp_CallStatus = 4U;

            /* Transition: '<S326>:23' */
        }
        else
        {
            /* Transition: '<S326>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_cy) == 1)
            {
                /* Transition: '<S326>:48' */
                /* Transition: '<S326>:53' */
                FA_out_c2 = true;

                /* Transition: '<S326>:56' */
            }
            else
            {
                /* Transition: '<S326>:52' */
            }

            /* Transition: '<S326>:37' */
            /* Call Poke */
            VeLINR_y_EEXV_Refrigerant_Temp_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S321>/Poke' */
            /* FunctionCaller: '<S328>/Function Caller' */
            /* Event: '<S326>:38' */
            Rte_Call_PokeTAIR_T_EEXV_RefTemp_PokeTAIR_T_EEXV_RefTemp
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_j, FA_out_c2);

            /* End of Outputs for SubSystem: '<S321>/Poke' */
        }
    }

    /* End of Chart: '<S322>/Chart' */
    /* End of Outputs for SubSystem: '<S277>/EEXV_Refrigerant_Temp' */
    /* End of Outputs for SubSystem: '<S7>/EEXV_Refrigerant_Temp' */
    /* Transition: '<S326>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_EEXV_Refrigerant_Temp' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_EEXV_Sts' incorporates:
     *  Inport: '<Root>/VeLINR_b_EEXV_StsTO'
     */
#if Rte_SysCon_VrntLR1B_EEXVSts

    /* Outputs for Atomic SubSystem: '<S7>/EEXV_Sts' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_EEXV_Sts' incorporates:
     *  Inport: '<Root>/VeLINR_e_EEXV_Sts'
     */
    rtb_TmpSignalConversionAtVeL_dv =
        Rte_Read_VeLINR_e_EEXV_Sts_VeLINR_e_EEXV_Sts
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__nm);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S333>:1' */
    (void)Rte_Read_VeLINR_b_EEXV_StsTO_VeLINR_b_EEXV_StsTO(&FA_out_a0p);

    /* Outputs for Atomic SubSystem: '<S278>/EEXV_Sts' */
    /* Chart: '<S330>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_EEXV_StsTO'
     */
    if (FA_out_a0p)
    {
        /* Transition: '<S333>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S333>:6' */
            /* Transition: '<S333>:25' */
            /* Call Fsft */
            VeLINR_y_EEXV_Sts_CallStatus = 2U;

            /* Event: '<S333>:39' */
            /* Transition: '<S333>:29' */
        }
        else
        {
            /* Transition: '<S333>:30' */
            /* Call Tmot */
            VeLINR_y_EEXV_Sts_CallStatus = 3U;

            /* Event: '<S333>:40' */
        }

        /* Transition: '<S333>:36' */
        /* Transition: '<S333>:23' */
    }
    else
    {
        /* Transition: '<S333>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_dv) == 133)
        {
            /* Transition: '<S333>:33' */
            /* Transition: '<S333>:35' */
            /* Call Nothing */
            VeLINR_y_EEXV_Sts_CallStatus = 4U;

            /* Transition: '<S333>:23' */
        }
        else
        {
            /* Transition: '<S333>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_dv) == 1)
            {
                /* Transition: '<S333>:48' */
                /* Transition: '<S333>:53' */
                FA_out_a0p = true;

                /* Transition: '<S333>:56' */
            }
            else
            {
                /* Transition: '<S333>:52' */
            }

            /* Transition: '<S333>:37' */
            /* Call Poke */
            VeLINR_y_EEXV_Sts_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S329>/Poke' */
            /* FunctionCaller: '<S334>/Function Caller' */
            /* Event: '<S333>:38' */
            Rte_Call_PokeTAIR_e_EEXV_Sts_PokeTAIR_e_EEXV_Sts
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__nm, FA_out_a0p);

            /* End of Outputs for SubSystem: '<S329>/Poke' */
        }
    }

    /* End of Chart: '<S330>/Chart' */
    /* End of Outputs for SubSystem: '<S278>/EEXV_Sts' */
    /* End of Outputs for SubSystem: '<S7>/EEXV_Sts' */
    /* Transition: '<S333>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_EEXV_Sts' */

    /* SignalConversion generated from: '<S2>/VeLINR_U_EEXV_SupplyVolt' incorporates:
     *  Inport: '<Root>/VeLINR_b_EEXV_SupplyVoltTO'
     */
#if Rte_SysCon_VrntLR1B_EEXVSupplyVolt

    /* Outputs for Atomic SubSystem: '<S7>/EEXV_SupplyVolt' */
    /* SignalConversion generated from: '<S2>/VeLINR_U_EEXV_SupplyVolt' incorporates:
     *  Inport: '<Root>/VeLINR_U_EEXV_SupplyVolt'
     */
    rtb_TmpSignalConversionAtVeL_ht =
        Rte_Read_VeLINR_U_EEXV_SupplyVolt_VeLINR_U_EEXV_SupplyVolt
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_U_E);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S339>:1' */
    (void)Rte_Read_VeLINR_b_EEXV_SupplyVoltTO_VeLINR_b_EEXV_SupplyVoltTO
        (&FA_out_mb);

    /* Outputs for Atomic SubSystem: '<S279>/EEXV_SupplyVolt' */
    /* Chart: '<S336>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_EEXV_SupplyVoltTO'
     */
    if (FA_out_mb)
    {
        /* Transition: '<S339>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S339>:6' */
            /* Transition: '<S339>:25' */
            /* Call Fsft */
            VeLINR_y_EEXV_SupplyVolt_CallStatus = 2U;

            /* Event: '<S339>:39' */
            /* Transition: '<S339>:29' */
        }
        else
        {
            /* Transition: '<S339>:30' */
            /* Call Tmot */
            VeLINR_y_EEXV_SupplyVolt_CallStatus = 3U;

            /* Event: '<S339>:40' */
        }

        /* Transition: '<S339>:36' */
        /* Transition: '<S339>:23' */
    }
    else
    {
        /* Transition: '<S339>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_ht) == 133)
        {
            /* Transition: '<S339>:33' */
            /* Transition: '<S339>:35' */
            /* Call Nothing */
            VeLINR_y_EEXV_SupplyVolt_CallStatus = 4U;

            /* Transition: '<S339>:23' */
        }
        else
        {
            /* Transition: '<S339>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_ht) == 1)
            {
                /* Transition: '<S339>:48' */
                /* Transition: '<S339>:53' */
                FA_out_mb = true;

                /* Transition: '<S339>:56' */
            }
            else
            {
                /* Transition: '<S339>:52' */
            }

            /* Transition: '<S339>:37' */
            /* Call Poke */
            VeLINR_y_EEXV_SupplyVolt_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S335>/Poke' */
            /* FunctionCaller: '<S340>/Function Caller' */
            /* Event: '<S339>:38' */
            Rte_Call_PokeTAIR_U_EEXV_SupplyVolt_PokeTAIR_U_EEXV_SupplyVolt
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_U_E, FA_out_mb);

            /* End of Outputs for SubSystem: '<S335>/Poke' */
        }
    }

    /* End of Chart: '<S336>/Chart' */
    /* End of Outputs for SubSystem: '<S279>/EEXV_SupplyVolt' */
    /* End of Outputs for SubSystem: '<S7>/EEXV_SupplyVolt' */
    /* Transition: '<S339>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_U_EEXV_SupplyVolt' */

    /* SignalConversion generated from: '<S2>/VeLINR_b_RsErr_EEXV' incorporates:
     *  Inport: '<Root>/VeLINR_b_RsErr_EEXV_TO'
     */
#if Rte_SysCon_VrntLR1B_RsErrEEXV

    /* Outputs for Atomic SubSystem: '<S7>/RsErr_EEXV' */
    /* SignalConversion generated from: '<S2>/VeLINR_b_RsErr_EEXV' incorporates:
     *  Inport: '<Root>/VeLINR_b_RsErr_EEXV'
     */
    rtb_TmpSignalConversionAtVeL_ar =
        Rte_Read_VeLINR_b_RsErr_EEXV_VeLINR_b_RsErr_EEXV
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_c);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S345>:1' */
    (void)Rte_Read_VeLINR_b_RsErr_EEXV_TO_VeLINR_b_RsErr_EEXV_TO(&FA_out_pc);

    /* Outputs for Atomic SubSystem: '<S280>/RsErr_EEXV' */
    /* Chart: '<S342>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_RsErr_EEXV_TO'
     */
    if (FA_out_pc)
    {
        /* Transition: '<S345>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S345>:6' */
            /* Transition: '<S345>:25' */
            /* Call Fsft */
            VeLINR_y_RsErr_EEXV_CallStatus = 2U;

            /* Event: '<S345>:39' */
            /* Transition: '<S345>:29' */
        }
        else
        {
            /* Transition: '<S345>:30' */
            /* Call Tmot */
            VeLINR_y_RsErr_EEXV_CallStatus = 3U;

            /* Event: '<S345>:40' */
        }

        /* Transition: '<S345>:36' */
        /* Transition: '<S345>:23' */
    }
    else
    {
        /* Transition: '<S345>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_ar) == 133)
        {
            /* Transition: '<S345>:33' */
            /* Transition: '<S345>:35' */
            /* Call Nothing */
            VeLINR_y_RsErr_EEXV_CallStatus = 4U;

            /* Transition: '<S345>:23' */
        }
        else
        {
            /* Transition: '<S345>:46' */
            /* Transition: '<S345>:37' */
            /* Call Poke */
            VeLINR_y_RsErr_EEXV_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S341>/Poke' */
            /* FunctionCaller: '<S346>/Function Caller' */
            /* Event: '<S345>:38' */
            Rte_Call_PokeTAIR_b_EEXV_RspErr_PokeTAIR_b_EEXV_RspErr
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_c);

            /* End of Outputs for SubSystem: '<S341>/Poke' */
        }
    }

    /* End of Chart: '<S342>/Chart' */
    /* End of Outputs for SubSystem: '<S280>/RsErr_EEXV' */
    /* End of Outputs for SubSystem: '<S7>/RsErr_EEXV' */
    /* Transition: '<S345>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_b_RsErr_EEXV' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_EOPA_CURR_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_EOPA_CURR_ErrSts'
     */
    rtb_TmpSignalConversionAtVeL_nf =
        Rte_Read_VeLINR_I_EOPA_CURR_VeLINR_I_EOPA_CURR
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_I_E);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_EOPA_CURR_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S366>:1' */
    (void)Rte_Read_VeLINR_b_EOPA_CURR_TO_VeLINR_b_EOPA_CURR_TO(&tmpRead_f);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S362>/Chart' */
    if (tmpRead_f)
    {
        /* Transition: '<S366>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S366>:6' */
            /* Transition: '<S366>:25' */
            /* Call Fsft */
            VeLINR_y_EOPA_CURR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S347>/Fsft' */
            /* FunctionCaller: '<S367>/Function Caller' */
            /* Event: '<S366>:39' */
            Rte_Call_FsftPMIR_b_TransAuxPmp_Crnt_FsftPMIR_b_TransAuxPmp_Crnt();

            /* End of Outputs for SubSystem: '<S347>/Fsft' */
            /* Transition: '<S366>:29' */
        }
        else
        {
            /* Transition: '<S366>:30' */
            /* Call Tmot */
            VeLINR_y_EOPA_CURR_CallStatus = 3U;

            /* Event: '<S366>:40' */
        }

        /* Transition: '<S366>:36' */
        /* Transition: '<S366>:23' */
    }
    else
    {
        /* Transition: '<S366>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_nf) == 133)
        {
            /* Transition: '<S366>:33' */
            /* Transition: '<S366>:35' */
            /* Call Nothing */
            VeLINR_y_EOPA_CURR_CallStatus = 4U;

            /* Transition: '<S366>:23' */
        }
        else
        {
            /* Transition: '<S366>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_nf) == 1)
            {
                /* Transition: '<S366>:48' */
                /* Transition: '<S366>:53' */
                FA_out_pc = true;

                /* Transition: '<S366>:56' */
            }
            else
            {
                /* Transition: '<S366>:52' */
                FA_out_pc = false;
            }

            /* Transition: '<S366>:37' */
            /* Call Poke */
            VeLINR_y_EOPA_CURR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S347>/Poke' */
            /* FunctionCaller: '<S368>/Function Caller' */
            /* Event: '<S366>:38' */
            Rte_Call_PokePMIR_I_TransAuxPmp_Crnt_PokePMIR_I_TransAuxPmp_Crnt
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_I_E, FA_out_pc);

            /* End of Outputs for SubSystem: '<S347>/Poke' */
        }
    }

    /* End of Chart: '<S362>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_EOPA_DR_RN_ER_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_EOPA_DR_RN_ER_ErrSts'
     */
    /* Transition: '<S366>:19' */
    rtb_TmpSignalConversionAtVeL_ie =
        Rte_Read_VeLINR_e_EOPA_DR_RN_ER_VeLINR_e_EOPA_DR_RN_ER
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__ht);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_EOPA_DR_RN_ER_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S373>:1' */
    (void)Rte_Read_VeLINR_b_EOPA_DR_RN_ER_TO_VeLINR_b_EOPA_DR_RN_ER_TO
        (&FA_out_mp);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S369>/Chart' */
    if (FA_out_mp)
    {
        /* Transition: '<S373>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S373>:6' */
            /* Transition: '<S373>:25' */
            /* Call Fsft */
            VeLINR_y_EOPA_DR_RN_ER_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S348>/Fsft' */
            /* FunctionCaller: '<S374>/Function Caller' */
            /* Event: '<S373>:39' */
            Rte_Call_FsftPMIR_b_TransAuxPmp_DryRun_FsftPMIR_b_TransAuxPmp_DryRun
                ();

            /* End of Outputs for SubSystem: '<S348>/Fsft' */
            /* Transition: '<S373>:29' */
        }
        else
        {
            /* Transition: '<S373>:30' */
            /* Call Tmot */
            VeLINR_y_EOPA_DR_RN_ER_CallStatus = 3U;

            /* Event: '<S373>:40' */
        }

        /* Transition: '<S373>:36' */
        /* Transition: '<S373>:23' */
    }
    else
    {
        /* Transition: '<S373>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_ie) == 133)
        {
            /* Transition: '<S373>:33' */
            /* Transition: '<S373>:35' */
            /* Call Nothing */
            VeLINR_y_EOPA_DR_RN_ER_CallStatus = 4U;

            /* Transition: '<S373>:23' */
        }
        else
        {
            /* Transition: '<S373>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_ie) == 1)
            {
                /* Transition: '<S373>:48' */
                /* Transition: '<S373>:53' */
                FA_out_mp = true;

                /* Transition: '<S373>:56' */
            }
            else
            {
                /* Transition: '<S373>:52' */
            }

            /* Transition: '<S373>:37' */
            /* Call Poke */
            VeLINR_y_EOPA_DR_RN_ER_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S348>/Poke' */
            /* FunctionCaller: '<S375>/Function Caller' */
            /* Event: '<S373>:38' */
            Rte_Call_PokePMIR_e_TransAuxPmp_DryRun_PokePMIR_e_TransAuxPmp_DryRun
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__ht, FA_out_mp);

            /* End of Outputs for SubSystem: '<S348>/Poke' */
        }
    }

    /* End of Chart: '<S369>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_EOPA_LMP_HM_AN_ON_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_EOPA_LMP_HM_AN_ON_ErrSts'
     */
    /* Transition: '<S373>:19' */
    rtb_TmpSignalConversionAtVeL_eb =
        Rte_Read_VeLINR_e_EOPA_LMP_HM_AN_ON_VeLINR_e_EOPA_LMP_HM_AN_ON
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__il);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_EOPA_LMP_HM_AN_ON_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S380>:1' */
    (void)Rte_Read_VeLINR_b_EOPA_LMP_HM_AN_ON_TO_VeLINR_b_EOPA_LMP_HM_AN_ON_TO
        (&FA_out_ox);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S376>/Chart' */
    if (FA_out_ox)
    {
        /* Transition: '<S380>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S380>:6' */
            /* Transition: '<S380>:25' */
            /* Call Fsft */
            VeLINR_y_EOPA_LMP_HM_AN_ON_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S349>/Fsft' */
            /* FunctionCaller: '<S381>/Function Caller' */
            /* Event: '<S380>:39' */
            Rte_Call_FsftPMIR_b_TransAuxPmp_LmpHM_FsftPMIR_b_TransAuxPmp_LmpHM();

            /* End of Outputs for SubSystem: '<S349>/Fsft' */
            /* Transition: '<S380>:29' */
        }
        else
        {
            /* Transition: '<S380>:30' */
            /* Call Tmot */
            VeLINR_y_EOPA_LMP_HM_AN_ON_CallStatus = 3U;

            /* Event: '<S380>:40' */
        }

        /* Transition: '<S380>:36' */
        /* Transition: '<S380>:23' */
    }
    else
    {
        /* Transition: '<S380>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_eb) == 133)
        {
            /* Transition: '<S380>:33' */
            /* Transition: '<S380>:35' */
            /* Call Nothing */
            VeLINR_y_EOPA_LMP_HM_AN_ON_CallStatus = 4U;

            /* Transition: '<S380>:23' */
        }
        else
        {
            /* Transition: '<S380>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_eb) == 1)
            {
                /* Transition: '<S380>:48' */
                /* Transition: '<S380>:53' */
                FA_out_ox = true;

                /* Transition: '<S380>:56' */
            }
            else
            {
                /* Transition: '<S380>:52' */
            }

            /* Transition: '<S380>:37' */
            /* Call Poke */
            VeLINR_y_EOPA_LMP_HM_AN_ON_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S349>/Poke' */
            /* FunctionCaller: '<S382>/Function Caller' */
            /* Event: '<S380>:38' */
            Rte_Call_PokePMIR_e_TransAuxPmp_LmpHM_PokePMIR_e_TransAuxPmp_LmpHM
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__il, FA_out_ox);

            /* End of Outputs for SubSystem: '<S349>/Poke' */
        }
    }

    /* End of Chart: '<S376>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_EOPA_LOW_TMP_STAT_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_EOPA_LOW_TMP_STAT_ErrSts'
     */
    /* Transition: '<S380>:19' */
    rtb_TmpSignalConversionAtVeL_fq =
        Rte_Read_VeLINR_e_EOPA_LOW_TMP_STAT_VeLINR_e_EOPA_LOW_TMP_STAT
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__nh);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_EOPA_LOW_TMP_STAT_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S387>:1' */
    (void)Rte_Read_VeLINR_b_EOPA_LOW_TMP_STAT_TO_VeLINR_b_EOPA_LOW_TMP_STAT_TO
        (&FA_out_fr);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S383>/Chart' */
    if (FA_out_fr)
    {
        /* Transition: '<S387>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S387>:6' */
            /* Transition: '<S387>:25' */
            /* Call Fsft */
            VeLINR_y_EOPA_LOW_TMP_STAT_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S350>/Fsft' */
            /* FunctionCaller: '<S388>/Function Caller' */
            /* Event: '<S387>:39' */
            Rte_Call_FsftPMIR_b_TransAuxPmp_ColdBiasSts_FsftPMIR_b_TransAuxPmp_ColdBiasSts
                ();

            /* End of Outputs for SubSystem: '<S350>/Fsft' */
            /* Transition: '<S387>:29' */
        }
        else
        {
            /* Transition: '<S387>:30' */
            /* Call Tmot */
            VeLINR_y_EOPA_LOW_TMP_STAT_CallStatus = 3U;

            /* Event: '<S387>:40' */
        }

        /* Transition: '<S387>:36' */
        /* Transition: '<S387>:23' */
    }
    else
    {
        /* Transition: '<S387>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_fq) == 133)
        {
            /* Transition: '<S387>:33' */
            /* Transition: '<S387>:35' */
            /* Call Nothing */
            VeLINR_y_EOPA_LOW_TMP_STAT_CallStatus = 4U;

            /* Transition: '<S387>:23' */
        }
        else
        {
            /* Transition: '<S387>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_fq) == 1)
            {
                /* Transition: '<S387>:48' */
                /* Transition: '<S387>:53' */
                FA_out_fr = true;

                /* Transition: '<S387>:56' */
            }
            else
            {
                /* Transition: '<S387>:52' */
            }

            /* Transition: '<S387>:37' */
            /* Call Poke */
            VeLINR_y_EOPA_LOW_TMP_STAT_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S350>/Poke' */
            /* FunctionCaller: '<S389>/Function Caller' */
            /* Event: '<S387>:38' */
            Rte_Call_PokePMIR_e_TransAuxPmp_ColdBiasSts_PokePMIR_e_TransAuxPmp_ColdBiasSts
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__nh, FA_out_fr);

            /* End of Outputs for SubSystem: '<S350>/Poke' */
        }
    }

    /* End of Chart: '<S383>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_EOPA_MONTRNG_RPM_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_EOPA_MONTRNG_RPM_ErrSts'
     */
    /* Transition: '<S387>:19' */
    rtb_TmpSignalConversionAtVeL_nu =
        Rte_Read_VeLINR_e_EOPA_MONTRNG_RPM_VeLINR_e_EOPA_MONTRNG_RPM
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__j0);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_EOPA_MONTRNG_RPM_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S394>:1' */
    (void)Rte_Read_VeLINR_b_EOPA_MONTRNG_RPM_TO_VeLINR_b_EOPA_MONTRNG_RPM_TO
        (&FA_out_iz);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S390>/Chart' */
    if (FA_out_iz)
    {
        /* Transition: '<S394>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S394>:6' */
            /* Transition: '<S394>:25' */
            /* Call Fsft */
            VeLINR_y_EOPA_MONTRNG_RPM_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S351>/Fsft' */
            /* FunctionCaller: '<S395>/Function Caller' */
            /* Event: '<S394>:39' */
            Rte_Call_FsftPMIR_b_TransAuxPmp_MntrRPM_FsftPMIR_b_TransAuxPmp_MntrRPM
                ();

            /* End of Outputs for SubSystem: '<S351>/Fsft' */
            /* Transition: '<S394>:29' */
        }
        else
        {
            /* Transition: '<S394>:30' */
            /* Call Tmot */
            VeLINR_y_EOPA_MONTRNG_RPM_CallStatus = 3U;

            /* Event: '<S394>:40' */
        }

        /* Transition: '<S394>:36' */
        /* Transition: '<S394>:23' */
    }
    else
    {
        /* Transition: '<S394>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_nu) == 133)
        {
            /* Transition: '<S394>:33' */
            /* Transition: '<S394>:35' */
            /* Call Nothing */
            VeLINR_y_EOPA_MONTRNG_RPM_CallStatus = 4U;

            /* Transition: '<S394>:23' */
        }
        else
        {
            /* Transition: '<S394>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_nu) == 1)
            {
                /* Transition: '<S394>:48' */
                /* Transition: '<S394>:53' */
                FA_out_iz = true;

                /* Transition: '<S394>:56' */
            }
            else
            {
                /* Transition: '<S394>:52' */
            }

            /* Transition: '<S394>:37' */
            /* Call Poke */
            VeLINR_y_EOPA_MONTRNG_RPM_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S351>/Poke' */
            /* FunctionCaller: '<S396>/Function Caller' */
            /* Event: '<S394>:38' */
            Rte_Call_PokePMIR_e_TransAuxPmp_MntrRPM_PokePMIR_e_TransAuxPmp_MntrRPM
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__j0, FA_out_iz);

            /* End of Outputs for SubSystem: '<S351>/Poke' */
        }
    }

    /* End of Chart: '<S390>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_EOPA_OV_CUR_ER_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_EOPA_OV_CUR_ER_ErrSts'
     */
    /* Transition: '<S394>:19' */
    rtb_TmpSignalConversionAtVeL_dn =
        Rte_Read_VeLINR_e_EOPA_OV_CUR_ER_VeLINR_e_EOPA_OV_CUR_ER
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_b);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_EOPA_OV_CUR_ER_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S401>:1' */
    (void)Rte_Read_VeLINR_b_EOPA_OV_CUR_ER_TO_VeLINR_b_EOPA_OV_CUR_ER_TO
        (&FA_out_lh);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S397>/Chart' */
    if (FA_out_lh)
    {
        /* Transition: '<S401>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S401>:6' */
            /* Transition: '<S401>:25' */
            /* Call Fsft */
            VeLINR_y_EOPA_OV_CUR_ER_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S352>/Fsft' */
            /* FunctionCaller: '<S402>/Function Caller' */
            /* Event: '<S401>:39' */
            Rte_Call_FsftPMIR_b_TransAuxPmp_CrntErr_FsftPMIR_b_TransAuxPmp_CrntErr
                ();

            /* End of Outputs for SubSystem: '<S352>/Fsft' */
            /* Transition: '<S401>:29' */
        }
        else
        {
            /* Transition: '<S401>:30' */
            /* Call Tmot */
            VeLINR_y_EOPA_OV_CUR_ER_CallStatus = 3U;

            /* Event: '<S401>:40' */
        }

        /* Transition: '<S401>:36' */
        /* Transition: '<S401>:23' */
    }
    else
    {
        /* Transition: '<S401>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_dn) == 133)
        {
            /* Transition: '<S401>:33' */
            /* Transition: '<S401>:35' */
            /* Call Nothing */
            VeLINR_y_EOPA_OV_CUR_ER_CallStatus = 4U;

            /* Transition: '<S401>:23' */
        }
        else
        {
            /* Transition: '<S401>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_dn) == 1)
            {
                /* Transition: '<S401>:48' */
                /* Transition: '<S401>:53' */
                FA_out_lh = true;

                /* Transition: '<S401>:56' */
            }
            else
            {
                /* Transition: '<S401>:52' */
            }

            /* Transition: '<S401>:37' */
            /* Call Poke */
            VeLINR_y_EOPA_OV_CUR_ER_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S352>/Poke' */
            /* FunctionCaller: '<S403>/Function Caller' */
            /* Event: '<S401>:38' */
            Rte_Call_PokePMIR_e_TransAuxPmp_CrntErr_PokePMIR_e_TransAuxPmp_CrntErr
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_b, FA_out_lh);

            /* End of Outputs for SubSystem: '<S352>/Poke' */
        }
    }

    /* End of Chart: '<S397>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_EOPA_OV_TMP_ER_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_EOPA_OV_TMP_ER_ErrSts'
     */
    /* Transition: '<S401>:19' */
    rtb_TmpSignalConversionAtVeLI_p =
        Rte_Read_VeLINR_e_EOPA_OV_TMP_ER_VeLINR_e_EOPA_OV_TMP_ER
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_k);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_EOPA_OV_TMP_ER_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S408>:1' */
    (void)Rte_Read_VeLINR_b_EOPA_OV_TMP_ER_TO_VeLINR_b_EOPA_OV_TMP_ER_TO
        (&FA_out_o2);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S404>/Chart' */
    if (FA_out_o2)
    {
        /* Transition: '<S408>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S408>:6' */
            /* Transition: '<S408>:25' */
            /* Call Fsft */
            VeLINR_y_EOPA_OV_TMP_ER_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S353>/Fsft' */
            /* FunctionCaller: '<S409>/Function Caller' */
            /* Event: '<S408>:39' */
            Rte_Call_FsftPMIR_b_TransAuxPmp_TempErr_FsftPMIR_b_TransAuxPmp_TempErr
                ();

            /* End of Outputs for SubSystem: '<S353>/Fsft' */
            /* Transition: '<S408>:29' */
        }
        else
        {
            /* Transition: '<S408>:30' */
            /* Call Tmot */
            VeLINR_y_EOPA_OV_TMP_ER_CallStatus = 3U;

            /* Event: '<S408>:40' */
        }

        /* Transition: '<S408>:36' */
        /* Transition: '<S408>:23' */
    }
    else
    {
        /* Transition: '<S408>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeLI_p) == 133)
        {
            /* Transition: '<S408>:33' */
            /* Transition: '<S408>:35' */
            /* Call Nothing */
            VeLINR_y_EOPA_OV_TMP_ER_CallStatus = 4U;

            /* Transition: '<S408>:23' */
        }
        else
        {
            /* Transition: '<S408>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeLI_p) == 1)
            {
                /* Transition: '<S408>:48' */
                /* Transition: '<S408>:53' */
                FA_out_o2 = true;

                /* Transition: '<S408>:56' */
            }
            else
            {
                /* Transition: '<S408>:52' */
            }

            /* Transition: '<S408>:37' */
            /* Call Poke */
            VeLINR_y_EOPA_OV_TMP_ER_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S353>/Poke' */
            /* FunctionCaller: '<S410>/Function Caller' */
            /* Event: '<S408>:38' */
            Rte_Call_PokePMIR_e_TransAuxPmp_TempErr_PokePMIR_e_TransAuxPmp_TempErr
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_k, FA_out_o2);

            /* End of Outputs for SubSystem: '<S353>/Poke' */
        }
    }

    /* End of Chart: '<S404>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_EOPA_POST_RUN_STAT_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_EOPA_POST_RUN_STAT_ErrSts'
     */
    /* Transition: '<S408>:19' */
    rtb_TmpSignalConversionAtVe_dnh =
        Rte_Read_VeLINR_e_EOPA_POST_RUN_STAT_VeLINR_e_EOPA_POST_RUN_STAT
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__c5);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_EOPA_POST_RUN_STAT_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S415>:1' */
    (void)Rte_Read_VeLINR_b_EOPA_POST_RUN_STAT_TO_VeLINR_b_EOPA_POST_RUN_STAT_TO
        (&FA_out_cx);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S411>/Chart' */
    if (FA_out_cx)
    {
        /* Transition: '<S415>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S415>:6' */
            /* Transition: '<S415>:25' */
            /* Call Fsft */
            VeLINR_y_EOPA_POST_RUN_STAT_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S354>/Fsft' */
            /* FunctionCaller: '<S416>/Function Caller' */
            /* Event: '<S415>:39' */
            Rte_Call_FsftPMIR_b_TransAuxPmp_PstRnSt_FsftPMIR_b_TransAuxPmp_PstRnSt
                ();

            /* End of Outputs for SubSystem: '<S354>/Fsft' */
            /* Transition: '<S415>:29' */
        }
        else
        {
            /* Transition: '<S415>:30' */
            /* Call Tmot */
            VeLINR_y_EOPA_POST_RUN_STAT_CallStatus = 3U;

            /* Event: '<S415>:40' */
        }

        /* Transition: '<S415>:36' */
        /* Transition: '<S415>:23' */
    }
    else
    {
        /* Transition: '<S415>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVe_dnh) == 133)
        {
            /* Transition: '<S415>:33' */
            /* Transition: '<S415>:35' */
            /* Call Nothing */
            VeLINR_y_EOPA_POST_RUN_STAT_CallStatus = 4U;

            /* Transition: '<S415>:23' */
        }
        else
        {
            /* Transition: '<S415>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVe_dnh) == 1)
            {
                /* Transition: '<S415>:48' */
                /* Transition: '<S415>:53' */
                FA_out_cx = true;

                /* Transition: '<S415>:56' */
            }
            else
            {
                /* Transition: '<S415>:52' */
            }

            /* Transition: '<S415>:37' */
            /* Call Poke */
            VeLINR_y_EOPA_POST_RUN_STAT_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S354>/Poke' */
            /* FunctionCaller: '<S417>/Function Caller' */
            /* Event: '<S415>:38' */
            Rte_Call_PokePMIR_e_TransAuxPmp_PstRnSt_PokePMIR_e_TransAuxPmp_PstRnSt
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__c5, FA_out_cx);

            /* End of Outputs for SubSystem: '<S354>/Poke' */
        }
    }

    /* End of Chart: '<S411>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_EOPA_RPM_ACTL_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_EOPA_RPM_ACTL_ErrSts'
     */
    /* Transition: '<S415>:19' */
    rtb_TmpSignalConversionAtVeL_cq =
        Rte_Read_VeLINR_e_EOPA_RPM_ACTL_VeLINR_e_EOPA_RPM_ACTL
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_o);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_EOPA_RPM_ACTL_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S422>:1' */
    (void)Rte_Read_VeLINR_b_EOPA_RPM_ACTL_TO_VeLINR_b_EOPA_RPM_ACTL_TO
        (&FA_out_ir);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S418>/Chart' */
    if (FA_out_ir)
    {
        /* Transition: '<S422>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S422>:6' */
            /* Transition: '<S422>:25' */
            /* Call Fsft */
            VeLINR_y_EOPA_RPM_ACTL_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S355>/Fsft' */
            /* FunctionCaller: '<S423>/Function Caller' */
            /* Event: '<S422>:39' */
            Rte_Call_FsftPMIR_b_TransAuxPmp_RPMAct_FsftPMIR_b_TransAuxPmp_RPMAct
                ();

            /* End of Outputs for SubSystem: '<S355>/Fsft' */
            /* Transition: '<S422>:29' */
        }
        else
        {
            /* Transition: '<S422>:30' */
            /* Call Tmot */
            VeLINR_y_EOPA_RPM_ACTL_CallStatus = 3U;

            /* Event: '<S422>:40' */
        }

        /* Transition: '<S422>:36' */
        /* Transition: '<S422>:23' */
    }
    else
    {
        /* Transition: '<S422>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_cq) == 133)
        {
            /* Transition: '<S422>:33' */
            /* Transition: '<S422>:35' */
            /* Call Nothing */
            VeLINR_y_EOPA_RPM_ACTL_CallStatus = 4U;

            /* Transition: '<S422>:23' */
        }
        else
        {
            /* Transition: '<S422>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_cq) == 1)
            {
                /* Transition: '<S422>:48' */
                /* Transition: '<S422>:53' */
                FA_out_ir = true;

                /* Transition: '<S422>:56' */
            }
            else
            {
                /* Transition: '<S422>:52' */
            }

            /* Transition: '<S422>:37' */
            /* Call Poke */
            VeLINR_y_EOPA_RPM_ACTL_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S355>/Poke' */
            /* FunctionCaller: '<S424>/Function Caller' */
            /* Event: '<S422>:38' */
            Rte_Call_PokePMIR_n_TransAuxPmp_RPMAct_PokePMIR_n_TransAuxPmp_RPMAct
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_o, FA_out_ir);

            /* End of Outputs for SubSystem: '<S355>/Poke' */
        }
    }

    /* End of Chart: '<S418>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_EOPA_RPM_TGT_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_EOPA_RPM_TGT_ErrSts'
     */
    /* Transition: '<S422>:19' */
    rtb_TmpSignalConversionAtVeL_gv =
        Rte_Read_VeLINR_e_EOPA_RPM_TGT_VeLINR_e_EOPA_RPM_TGT
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_c);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_EOPA_RPM_TGT_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S429>:1' */
    (void)Rte_Read_VeLINR_b_EOPA_RPM_TGT_TO_VeLINR_b_EOPA_RPM_TGT_TO(&FA_out_mu);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S425>/Chart' */
    if (FA_out_mu)
    {
        /* Transition: '<S429>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S429>:6' */
            /* Transition: '<S429>:25' */
            /* Call Fsft */
            VeLINR_y_EOPA_RPM_TGT_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S356>/Fsft' */
            /* FunctionCaller: '<S430>/Function Caller' */
            /* Event: '<S429>:39' */
            Rte_Call_FsftPMIR_b_TransAuxPmp_RPMTgt_FsftPMIR_b_TransAuxPmp_RPMTgt
                ();

            /* End of Outputs for SubSystem: '<S356>/Fsft' */
            /* Transition: '<S429>:29' */
        }
        else
        {
            /* Transition: '<S429>:30' */
            /* Call Tmot */
            VeLINR_y_EOPA_RPM_TGT_CallStatus = 3U;

            /* Event: '<S429>:40' */
        }

        /* Transition: '<S429>:36' */
        /* Transition: '<S429>:23' */
    }
    else
    {
        /* Transition: '<S429>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_gv) == 133)
        {
            /* Transition: '<S429>:33' */
            /* Transition: '<S429>:35' */
            /* Call Nothing */
            VeLINR_y_EOPA_RPM_TGT_CallStatus = 4U;

            /* Transition: '<S429>:23' */
        }
        else
        {
            /* Transition: '<S429>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_gv) == 1)
            {
                /* Transition: '<S429>:48' */
                /* Transition: '<S429>:53' */
                FA_out_mu = true;

                /* Transition: '<S429>:56' */
            }
            else
            {
                /* Transition: '<S429>:52' */
            }

            /* Transition: '<S429>:37' */
            /* Call Poke */
            VeLINR_y_EOPA_RPM_TGT_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S356>/Poke' */
            /* FunctionCaller: '<S431>/Function Caller' */
            /* Event: '<S429>:38' */
            Rte_Call_PokePMIR_n_TransAuxPmp_RPMTgt_PokePMIR_n_TransAuxPmp_RPMTgt
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_c, FA_out_mu);

            /* End of Outputs for SubSystem: '<S356>/Poke' */
        }
    }

    /* End of Chart: '<S425>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_EOPA_Stall_Event_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_EOPA_Stall_Event_ErrSts'
     */
    /* Transition: '<S429>:19' */
    rtb_TmpSignalConversionAtVeL_dr =
        Rte_Read_VeLINR_e_EOPA_Stall_Event_VeLINR_e_EOPA_Stall_Event
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__nq);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_EOPA_Stall_EventTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S436>:1' */
    (void)Rte_Read_VeLINR_b_EOPA_Stall_EventTO_VeLINR_b_EOPA_Stall_EventTO
        (&FA_out_bd);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S432>/Chart' */
    if (FA_out_bd)
    {
        /* Transition: '<S436>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S436>:6' */
            /* Transition: '<S436>:25' */
            /* Call Fsft */
            VeLINR_y_EOPA_Stall_Event_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S357>/Fsft' */
            /* FunctionCaller: '<S437>/Function Caller' */
            /* Event: '<S436>:39' */
            Rte_Call_FsftPMIR_b_TransAuxPmp_StallEvnt_FsftPMIR_b_TransAuxPmp_StallEvnt
                ();

            /* End of Outputs for SubSystem: '<S357>/Fsft' */
            /* Transition: '<S436>:29' */
        }
        else
        {
            /* Transition: '<S436>:30' */
            /* Call Tmot */
            VeLINR_y_EOPA_Stall_Event_CallStatus = 3U;

            /* Event: '<S436>:40' */
        }

        /* Transition: '<S436>:36' */
        /* Transition: '<S436>:23' */
    }
    else
    {
        /* Transition: '<S436>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_dr) == 133)
        {
            /* Transition: '<S436>:33' */
            /* Transition: '<S436>:35' */
            /* Call Nothing */
            VeLINR_y_EOPA_Stall_Event_CallStatus = 4U;

            /* Transition: '<S436>:23' */
        }
        else
        {
            /* Transition: '<S436>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_dr) == 1)
            {
                /* Transition: '<S436>:48' */
                /* Transition: '<S436>:53' */
                FA_out_bd = true;

                /* Transition: '<S436>:56' */
            }
            else
            {
                /* Transition: '<S436>:52' */
            }

            /* Transition: '<S436>:37' */
            /* Call Poke */
            VeLINR_y_EOPA_Stall_Event_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S357>/Poke' */
            /* FunctionCaller: '<S438>/Function Caller' */
            /* Event: '<S436>:38' */
            Rte_Call_PokePMIR_e_TransAuxPmp_StallEvnt_PokePMIR_e_TransAuxPmp_StallEvnt
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__nq, FA_out_bd);

            /* End of Outputs for SubSystem: '<S357>/Poke' */
        }
    }

    /* End of Chart: '<S432>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_EOPA_TEMP_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_EOPA_TEMP_ErrSts'
     */
    /* Transition: '<S436>:19' */
    rtb_TmpSignalConversionAtVeL_ot =
        Rte_Read_VeLINR_T_EOPA_TEMP_VeLINR_T_EOPA_TEMP
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_T_d);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_EOPA_TEMP_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S443>:1' */
    (void)Rte_Read_VeLINR_b_EOPA_TEMP_TO_VeLINR_b_EOPA_TEMP_TO(&FA_out_ml);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S439>/Chart' */
    if (FA_out_ml)
    {
        /* Transition: '<S443>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S443>:6' */
            /* Transition: '<S443>:25' */
            /* Call Fsft */
            VeLINR_y_EOPA_TEMP_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S358>/Fsft' */
            /* FunctionCaller: '<S444>/Function Caller' */
            /* Event: '<S443>:39' */
            Rte_Call_FsftPMIR_b_TransAuxPmp_Temp_FsftPMIR_b_TransAuxPmp_Temp();

            /* End of Outputs for SubSystem: '<S358>/Fsft' */
            /* Transition: '<S443>:29' */
        }
        else
        {
            /* Transition: '<S443>:30' */
            /* Call Tmot */
            VeLINR_y_EOPA_TEMP_CallStatus = 3U;

            /* Event: '<S443>:40' */
        }

        /* Transition: '<S443>:36' */
        /* Transition: '<S443>:23' */
    }
    else
    {
        /* Transition: '<S443>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_ot) == 133)
        {
            /* Transition: '<S443>:33' */
            /* Transition: '<S443>:35' */
            /* Call Nothing */
            VeLINR_y_EOPA_TEMP_CallStatus = 4U;

            /* Transition: '<S443>:23' */
        }
        else
        {
            /* Transition: '<S443>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_ot) == 1)
            {
                /* Transition: '<S443>:48' */
                /* Transition: '<S443>:53' */
                FA_out_ml = true;

                /* Transition: '<S443>:56' */
            }
            else
            {
                /* Transition: '<S443>:52' */
            }

            /* Transition: '<S443>:37' */
            /* Call Poke */
            VeLINR_y_EOPA_TEMP_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S358>/Poke' */
            /* FunctionCaller: '<S445>/Function Caller' */
            /* Event: '<S443>:38' */
            Rte_Call_PokePMIR_T_TransAuxPmp_Temp_PokePMIR_T_TransAuxPmp_Temp
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_T_d, FA_out_ml);

            /* End of Outputs for SubSystem: '<S358>/Poke' */
        }
    }

    /* End of Chart: '<S439>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_EOPA_VLTG_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_EOPA_VLTG_ErrSts'
     */
    /* Transition: '<S443>:19' */
    rtb_TmpSignalConversionAtVeL_e0 =
        Rte_Read_VeLINR_U_EOPA_VLTG_VeLINR_U_EOPA_VLTG
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_U_j);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_EOPA_VLTG_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S450>:1' */
    (void)Rte_Read_VeLINR_b_EOPA_VLTG_TO_VeLINR_b_EOPA_VLTG_TO(&FA_out_e);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S446>/Chart' */
    if (FA_out_e)
    {
        /* Transition: '<S450>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S450>:6' */
            /* Transition: '<S450>:25' */
            /* Call Fsft */
            VeLINR_y_EOPA_VLTG_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S359>/Fsft' */
            /* FunctionCaller: '<S451>/Function Caller' */
            /* Event: '<S450>:39' */
            Rte_Call_FsftPMIR_b_TransAuxPmp_Vltg_FsftPMIR_b_TransAuxPmp_Vltg();

            /* End of Outputs for SubSystem: '<S359>/Fsft' */
            /* Transition: '<S450>:29' */
        }
        else
        {
            /* Transition: '<S450>:30' */
            /* Call Tmot */
            VeLINR_y_EOPA_VLTG_CallStatus = 3U;

            /* Event: '<S450>:40' */
        }

        /* Transition: '<S450>:36' */
        /* Transition: '<S450>:23' */
    }
    else
    {
        /* Transition: '<S450>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_e0) == 133)
        {
            /* Transition: '<S450>:33' */
            /* Transition: '<S450>:35' */
            /* Call Nothing */
            VeLINR_y_EOPA_VLTG_CallStatus = 4U;

            /* Transition: '<S450>:23' */
        }
        else
        {
            /* Transition: '<S450>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_e0) == 1)
            {
                /* Transition: '<S450>:48' */
                /* Transition: '<S450>:53' */
                FA_out_e = true;

                /* Transition: '<S450>:56' */
            }
            else
            {
                /* Transition: '<S450>:52' */
            }

            /* Transition: '<S450>:37' */
            /* Call Poke */
            VeLINR_y_EOPA_VLTG_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S359>/Poke' */
            /* FunctionCaller: '<S452>/Function Caller' */
            /* Event: '<S450>:38' */
            Rte_Call_PokePMIR_U_TransAuxPmp_Vltg_PokePMIR_U_TransAuxPmp_Vltg
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_U_j, FA_out_e);

            /* End of Outputs for SubSystem: '<S359>/Poke' */
        }
    }

    /* End of Chart: '<S446>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_EOPA_VLTG_ER_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_EOPA_VLTG_ER_ErrSts'
     */
    /* Transition: '<S450>:19' */
    rtb_TmpSignalConversionAtVe_mgq =
        Rte_Read_VeLINR_e_EOPA_VLTG_ER_VeLINR_e_EOPA_VLTG_ER
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_g);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_EOPA_VLTG_ER_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S457>:1' */
    (void)Rte_Read_VeLINR_b_EOPA_VLTG_ER_TO_VeLINR_b_EOPA_VLTG_ER_TO(&FA_out_py);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S453>/Chart' */
    if (FA_out_py)
    {
        /* Transition: '<S457>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S457>:6' */
            /* Transition: '<S457>:25' */
            /* Call Fsft */
            VeLINR_y_EOPA_VLTG_ER_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S360>/Fsft' */
            /* FunctionCaller: '<S458>/Function Caller' */
            /* Event: '<S457>:39' */
            Rte_Call_FsftPMIR_b_TransAuxPmp_VltgErr_FsftPMIR_b_TransAuxPmp_VltgErr
                ();

            /* End of Outputs for SubSystem: '<S360>/Fsft' */
            /* Transition: '<S457>:29' */
        }
        else
        {
            /* Transition: '<S457>:30' */
            /* Call Tmot */
            VeLINR_y_EOPA_VLTG_ER_CallStatus = 3U;

            /* Event: '<S457>:40' */
        }

        /* Transition: '<S457>:36' */
        /* Transition: '<S457>:23' */
    }
    else
    {
        /* Transition: '<S457>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVe_mgq) == 133)
        {
            /* Transition: '<S457>:33' */
            /* Transition: '<S457>:35' */
            /* Call Nothing */
            VeLINR_y_EOPA_VLTG_ER_CallStatus = 4U;

            /* Transition: '<S457>:23' */
        }
        else
        {
            /* Transition: '<S457>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVe_mgq) == 1)
            {
                /* Transition: '<S457>:48' */
                /* Transition: '<S457>:53' */
                FA_out_py = true;

                /* Transition: '<S457>:56' */
            }
            else
            {
                /* Transition: '<S457>:52' */
            }

            /* Transition: '<S457>:37' */
            /* Call Poke */
            VeLINR_y_EOPA_VLTG_ER_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S360>/Poke' */
            /* FunctionCaller: '<S459>/Function Caller' */
            /* Event: '<S457>:38' */
            Rte_Call_PokePMIR_e_TransAuxPmp_VltgErr_PokePMIR_e_TransAuxPmp_VltgErr
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_g, FA_out_py);

            /* End of Outputs for SubSystem: '<S360>/Poke' */
        }
    }

    /* End of Chart: '<S453>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_RsErr_EOPA_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_RsErr_EOPA_ErrSts'
     */
    /* Transition: '<S457>:19' */
    rtb_TmpSignalConversionAtVeL_jp =
        Rte_Read_VeLINR_b_RsErr_EOPA_VeLINR_b_RsErr_EOPA
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__op);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_RsErr_EOPA_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S464>:1' */
    (void)Rte_Read_VeLINR_b_RsErr_EOPA_TO_VeLINR_b_RsErr_EOPA_TO(&FA_out_md);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S460>/Chart' */
    if (FA_out_md)
    {
        /* Transition: '<S464>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S464>:6' */
            /* Transition: '<S464>:25' */
            /* Call Fsft */
            VeLINR_y_RsErr_EOPA_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S361>/Fsft' */
            /* FunctionCaller: '<S465>/Function Caller' */
            /* Event: '<S464>:39' */
            Rte_Call_FsftPMIR_b_TransAuxPmp_RespErr_FsftPMIR_b_TransAuxPmp_RespErr
                ();

            /* End of Outputs for SubSystem: '<S361>/Fsft' */
            /* Transition: '<S464>:29' */
        }
        else
        {
            /* Transition: '<S464>:30' */
            /* Call Tmot */
            VeLINR_y_RsErr_EOPA_CallStatus = 3U;

            /* Event: '<S464>:40' */
        }

        /* Transition: '<S464>:36' */
        /* Transition: '<S464>:23' */
    }
    else
    {
        /* Transition: '<S464>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_jp) == 133)
        {
            /* Transition: '<S464>:33' */
            /* Transition: '<S464>:35' */
            /* Call Nothing */
            VeLINR_y_RsErr_EOPA_CallStatus = 4U;

            /* Transition: '<S464>:23' */
        }
        else
        {
            /* Transition: '<S464>:46' */
            /* Transition: '<S464>:37' */
            /* Call Poke */
            VeLINR_y_RsErr_EOPA_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S361>/Poke' */
            /* FunctionCaller: '<S466>/Function Caller' */
            /* Event: '<S464>:38' */
            Rte_Call_PokePMIR_b_TransAuxPmp_RespErr_PokePMIR_b_TransAuxPmp_RespErr
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__op);

            /* End of Outputs for SubSystem: '<S361>/Poke' */
        }
    }

    /* End of Chart: '<S460>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_EOPA_OIL_TEMP_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_EOPA_OIL_TEMP_ErrSts'
     */
    /* Transition: '<S464>:19' */
    rtb_TmpSignalConversionAtVeL_jz =
        Rte_Read_VeLINR_T_EOPA_OIL_TEMP_VeLINR_T_EOPA_OIL_TEMP
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_T_l);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_EOPA_OIL_TEMP_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S472>:1' */
    (void)Rte_Read_VeLINR_b_EOPA_OIL_TEMP_TO_VeLINR_b_EOPA_OIL_TEMP_TO
        (&tmpRead_g);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S468>/Chart' */
    if (tmpRead_g)
    {
        /* Transition: '<S472>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S472>:6' */
            /* Transition: '<S472>:25' */
            /* Call Fsft */
            VeLINR_y_EOPA_OIL_TEMP_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S467>/Fsft' */
            /* FunctionCaller: '<S473>/Function Caller' */
            /* Event: '<S472>:39' */
            Rte_Call_FsftPMIR_b_TransAuxPmp_OilTemp_FsftPMIR_b_TransAuxPmp_OilTemp
                ();

            /* End of Outputs for SubSystem: '<S467>/Fsft' */
            /* Transition: '<S472>:29' */
        }
        else
        {
            /* Transition: '<S472>:30' */
            /* Call Tmot */
            VeLINR_y_EOPA_OIL_TEMP_CallStatus = 3U;

            /* Event: '<S472>:40' */
        }

        /* Transition: '<S472>:36' */
        /* Transition: '<S472>:23' */
    }
    else
    {
        /* Transition: '<S472>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_jz) == 133)
        {
            /* Transition: '<S472>:33' */
            /* Transition: '<S472>:35' */
            /* Call Nothing */
            VeLINR_y_EOPA_OIL_TEMP_CallStatus = 4U;

            /* Transition: '<S472>:23' */
        }
        else
        {
            /* Transition: '<S472>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_jz) == 1)
            {
                /* Transition: '<S472>:48' */
                /* Transition: '<S472>:53' */
                FA_out_md = true;

                /* Transition: '<S472>:56' */
            }
            else
            {
                /* Transition: '<S472>:52' */
                FA_out_md = false;
            }

            /* Transition: '<S472>:37' */
            /* Call Poke */
            VeLINR_y_EOPA_OIL_TEMP_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S467>/Poke' */
            /* FunctionCaller: '<S474>/Function Caller' */
            /* Event: '<S472>:38' */
            Rte_Call_PokePMIR_T_TransAuxPmp_OilTemp_PokePMIR_T_TransAuxPmp_OilTemp
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_T_l, FA_out_md);

            /* End of Outputs for SubSystem: '<S467>/Poke' */
        }
    }

    /* End of Chart: '<S468>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_EOPA_HW_VER_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_EOPA_HW_VER_ErrSts'
     */
    /* Transition: '<S472>:19' */
    rtb_TmpSignalConversionAtVeL_p0 =
        Rte_Read_VeLINR_y_EOPA_HW_VER_VeLINR_y_EOPA_HW_VER
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_y_E);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_EOPA_HW_VER_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S480>:1' */
    (void)Rte_Read_VeLINR_b_EOPA_HW_VER_TO_VeLINR_b_EOPA_HW_VER_TO(&FA_out_g);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S477>/Chart' */
    if (FA_out_g)
    {
        /* Transition: '<S480>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S480>:6' */
            /* Transition: '<S480>:25' */
            /* Call Fsft */
            VeLINR_y_EOPA_HW_VER_CallStatus = 2U;

            /* Event: '<S480>:39' */
            /* Transition: '<S480>:29' */
        }
        else
        {
            /* Transition: '<S480>:30' */
            /* Call Tmot */
            VeLINR_y_EOPA_HW_VER_CallStatus = 3U;

            /* Event: '<S480>:40' */
        }

        /* Transition: '<S480>:36' */
        /* Transition: '<S480>:23' */
    }
    else
    {
        /* Transition: '<S480>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_p0) == 133)
        {
            /* Transition: '<S480>:33' */
            /* Transition: '<S480>:35' */
            /* Call Nothing */
            VeLINR_y_EOPA_HW_VER_CallStatus = 4U;

            /* Transition: '<S480>:23' */
        }
        else
        {
            /* Transition: '<S480>:46' */
            /* Transition: '<S480>:37' */
            /* Call Poke */
            VeLINR_y_EOPA_HW_VER_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S475>/Poke' */
            /* DataTypeConversion: '<S481>/Data Type Conversion' */
            /* Event: '<S480>:38' */
            tmp = fmodf(floorf(LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_y_E),
                        256.0F);

            /* FunctionCaller: '<S481>/Function Caller' incorporates:
             *  DataTypeConversion: '<S481>/Data Type Conversion'
             */
            Rte_Call_PokePMIR_y_TransAuxPmp_TAP_HW_VER_PokePMIR_y_TransAuxPmp_TAP_HW_VER
                ((uint8)((tmp < 0.0F) ? ((sint32)((uint8)((sint32)(-((sint32)
                       ((sint8)((uint8)((float32)(-tmp))))))))) : ((sint32)
                   ((uint8)tmp))));

            /* End of Outputs for SubSystem: '<S475>/Poke' */
        }
    }

    /* End of Chart: '<S477>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_EOPA_SW_VER_ErrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_EOPA_SW_VER_ErrSts'
     */
    /* Transition: '<S480>:19' */
    rtb_TmpSignalConversionAtVeL_o4 =
        Rte_Read_VeLINR_y_EOPA_SW_VER_VeLINR_y_EOPA_SW_VER
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_y_d);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeLINR_b_EOPA_SW_VER_TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S485>:1' */
    (void)Rte_Read_VeLINR_b_EOPA_SW_VER_TO_VeLINR_b_EOPA_SW_VER_TO(&tmpRead_h);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S482>/Chart' */
    if (tmpRead_h)
    {
        /* Transition: '<S485>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S485>:6' */
            /* Transition: '<S485>:25' */
            /* Call Fsft */
            VeLINR_y_EOPA_SW_VER_CallStatus = 2U;

            /* Event: '<S485>:39' */
            /* Transition: '<S485>:29' */
        }
        else
        {
            /* Transition: '<S485>:30' */
            /* Call Tmot */
            VeLINR_y_EOPA_SW_VER_CallStatus = 3U;

            /* Event: '<S485>:40' */
        }

        /* Transition: '<S485>:36' */
        /* Transition: '<S485>:23' */
    }
    else
    {
        /* Transition: '<S485>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_o4) == 133)
        {
            /* Transition: '<S485>:33' */
            /* Transition: '<S485>:35' */
            /* Call Nothing */
            VeLINR_y_EOPA_SW_VER_CallStatus = 4U;

            /* Transition: '<S485>:23' */
        }
        else
        {
            /* Transition: '<S485>:46' */
            /* Transition: '<S485>:37' */
            /* Call Poke */
            VeLINR_y_EOPA_SW_VER_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S476>/Poke' */
            /* DataTypeConversion: '<S486>/Data Type Conversion' */
            /* Event: '<S485>:38' */
            tmp = fmodf(floorf(LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_y_d),
                        256.0F);

            /* FunctionCaller: '<S486>/Function Caller' incorporates:
             *  DataTypeConversion: '<S486>/Data Type Conversion'
             */
            Rte_Call_PokePMIR_y_TransAuxPmp_TAP_SW_VER_PokePMIR_y_TransAuxPmp_TAP_SW_VER
                ((uint8)((tmp < 0.0F) ? ((sint32)((uint8)((sint32)(-((sint32)
                       ((sint8)((uint8)((float32)(-tmp))))))))) : ((sint32)
                   ((uint8)tmp))));

            /* End of Outputs for SubSystem: '<S476>/Poke' */
        }
    }

    /* End of Chart: '<S482>/Chart' */

    /* SignalConversion generated from: '<S2>/VeLINR_T_EXVM_Board_Temp' incorporates:
     *  Inport: '<Root>/VeLINR_b_EXVM_Board_TempTO'
     */
    /* Transition: '<S485>:19' */
#if Rte_SysCon_VrntLR1B_EXVMBoardTemp

    /* Outputs for Atomic SubSystem: '<S11>/EXVM_Board_Temp' */
    /* SignalConversion generated from: '<S2>/VeLINR_T_EXVM_Board_Temp' incorporates:
     *  Inport: '<Root>/VeLINR_T_EXVM_Board_Temp'
     */
    rtb_TmpSignalConversionAtVeL_g0 =
        Rte_Read_VeLINR_T_EXVM_Board_Temp_VeLINR_T_EXVM_Board_Temp
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_T_f);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S501>:1' */
    (void)Rte_Read_VeLINR_b_EXVM_Board_TempTO_VeLINR_b_EXVM_Board_TempTO
        (&tmpRead_i);

    /* Outputs for Atomic SubSystem: '<S487>/EXVM_Board_Temp' */
    /* Chart: '<S498>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_EXVM_Board_TempTO'
     */
    if (tmpRead_i)
    {
        /* Transition: '<S501>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S501>:6' */
            /* Transition: '<S501>:25' */
            /* Call Fsft */
            VeLINR_y_EXVM_Board_Temp_CallStatus = 2U;

            /* Event: '<S501>:39' */
            /* Transition: '<S501>:29' */
        }
        else
        {
            /* Transition: '<S501>:30' */
            /* Call Tmot */
            VeLINR_y_EXVM_Board_Temp_CallStatus = 3U;

            /* Event: '<S501>:40' */
        }

        /* Transition: '<S501>:36' */
        /* Transition: '<S501>:23' */
    }
    else
    {
        /* Transition: '<S501>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_g0) == 133)
        {
            /* Transition: '<S501>:33' */
            /* Transition: '<S501>:35' */
            /* Call Nothing */
            VeLINR_y_EXVM_Board_Temp_CallStatus = 4U;

            /* Transition: '<S501>:23' */
        }
        else
        {
            /* Transition: '<S501>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_g0) == 1)
            {
                /* Transition: '<S501>:48' */
                /* Transition: '<S501>:53' */
                FA_out_g = true;

                /* Transition: '<S501>:56' */
            }
            else
            {
                /* Transition: '<S501>:52' */
                FA_out_g = false;
            }

            /* Transition: '<S501>:37' */
            /* Call Poke */
            VeLINR_y_EXVM_Board_Temp_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S497>/Poke' */
            /* FunctionCaller: '<S502>/Function Caller' */
            /* Event: '<S501>:38' */
            Rte_Call_PokeTAIR_T_EXV_BoardTemp_PokeTAIR_T_EXV_BoardTemp
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_T_f, FA_out_g);

            /* End of Outputs for SubSystem: '<S497>/Poke' */
        }
    }

    /* End of Chart: '<S498>/Chart' */
    /* End of Outputs for SubSystem: '<S487>/EXVM_Board_Temp' */
    /* End of Outputs for SubSystem: '<S11>/EXVM_Board_Temp' */
    /* Transition: '<S501>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_T_EXVM_Board_Temp' */

    /* SignalConversion generated from: '<S2>/VeLINR_b_EXVM_CalRq' incorporates:
     *  Inport: '<Root>/VeLINR_b_EXVM_CalRqTO'
     */
#if Rte_SysCon_VrntLR1B_EXVMCalRq

    /* Outputs for Atomic SubSystem: '<S11>/EXVM_CalRq' */
    /* SignalConversion generated from: '<S2>/VeLINR_b_EXVM_CalRq' incorporates:
     *  Inport: '<Root>/VeLINR_b_EXVM_CalRq'
     */
    rtb_TmpSignalConversionAtVeL_ac =
        Rte_Read_VeLINR_b_EXVM_CalRq_VeLINR_b_EXVM_CalRq
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_i);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S507>:1' */
    (void)Rte_Read_VeLINR_b_EXVM_CalRqTO_VeLINR_b_EXVM_CalRqTO(&FA_out_je);

    /* Outputs for Atomic SubSystem: '<S488>/EXVM_CalRq' */
    /* Chart: '<S504>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_EXVM_CalRqTO'
     */
    if (FA_out_je)
    {
        /* Transition: '<S507>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S507>:6' */
            /* Transition: '<S507>:25' */
            /* Call Fsft */
            VeLINR_y_EXVM_CalRq_CallStatus = 2U;

            /* Event: '<S507>:39' */
            /* Transition: '<S507>:29' */
        }
        else
        {
            /* Transition: '<S507>:30' */
            /* Call Tmot */
            VeLINR_y_EXVM_CalRq_CallStatus = 3U;

            /* Event: '<S507>:40' */
        }

        /* Transition: '<S507>:36' */
        /* Transition: '<S507>:23' */
    }
    else
    {
        /* Transition: '<S507>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_ac) == 133)
        {
            /* Transition: '<S507>:33' */
            /* Transition: '<S507>:35' */
            /* Call Nothing */
            VeLINR_y_EXVM_CalRq_CallStatus = 4U;

            /* Transition: '<S507>:23' */
        }
        else
        {
            /* Transition: '<S507>:46' */
            /* Transition: '<S507>:37' */
            /* Call Poke */
            VeLINR_y_EXVM_CalRq_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S503>/Poke' */
            /* FunctionCaller: '<S508>/Function Caller' */
            /* Event: '<S507>:38' */
            Rte_Call_PokeTAIR_b_EXV_CalRq_PokeTAIR_b_EXV_CalRq
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_i);

            /* End of Outputs for SubSystem: '<S503>/Poke' */
        }
    }

    /* End of Chart: '<S504>/Chart' */
    /* End of Outputs for SubSystem: '<S488>/EXVM_CalRq' */
    /* End of Outputs for SubSystem: '<S11>/EXVM_CalRq' */
    /* Transition: '<S507>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_b_EXVM_CalRq' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_EXVM_CalStat' incorporates:
     *  Inport: '<Root>/VeLINR_b_EXVM_CalStatTO'
     */
#if Rte_SysCon_VrntLR1B_EXVMCalStat

    /* Outputs for Atomic SubSystem: '<S11>/EXVM_CalStat' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_EXVM_CalStat' incorporates:
     *  Inport: '<Root>/VeLINR_e_EXVM_CalStat'
     */
    rtb_TmpSignalConversionAtVeL_gr =
        Rte_Read_VeLINR_e_EXVM_CalStat_VeLINR_e_EXVM_CalStat
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__lk);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S513>:1' */
    (void)Rte_Read_VeLINR_b_EXVM_CalStatTO_VeLINR_b_EXVM_CalStatTO(&tmpRead_j);

    /* Outputs for Atomic SubSystem: '<S489>/EXVM_CalStat' */
    /* Chart: '<S510>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_EXVM_CalStatTO'
     */
    if (tmpRead_j)
    {
        /* Transition: '<S513>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S513>:6' */
            /* Transition: '<S513>:25' */
            /* Call Fsft */
            VeLINR_y_EXVM_CalStat_CallStatus = 2U;

            /* Event: '<S513>:39' */
            /* Transition: '<S513>:29' */
        }
        else
        {
            /* Transition: '<S513>:30' */
            /* Call Tmot */
            VeLINR_y_EXVM_CalStat_CallStatus = 3U;

            /* Event: '<S513>:40' */
        }

        /* Transition: '<S513>:36' */
        /* Transition: '<S513>:23' */
    }
    else
    {
        /* Transition: '<S513>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_gr) == 133)
        {
            /* Transition: '<S513>:33' */
            /* Transition: '<S513>:35' */
            /* Call Nothing */
            VeLINR_y_EXVM_CalStat_CallStatus = 4U;

            /* Transition: '<S513>:23' */
        }
        else
        {
            /* Transition: '<S513>:46' */
            /* Transition: '<S513>:37' */
            /* Call Poke */
            VeLINR_y_EXVM_CalStat_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S509>/Poke' */
            /* FunctionCaller: '<S514>/Function Caller' incorporates:
             *  Constant: '<S514>/Constant'
             */
            /* Event: '<S513>:38' */
            Rte_Call_PokeTAIR_e_EXV_CalStat_PokeTAIR_e_EXV_CalStat
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__lk, false);

            /* End of Outputs for SubSystem: '<S509>/Poke' */
        }
    }

    /* End of Chart: '<S510>/Chart' */
    /* End of Outputs for SubSystem: '<S489>/EXVM_CalStat' */
    /* End of Outputs for SubSystem: '<S11>/EXVM_CalStat' */
    /* Transition: '<S513>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_EXVM_CalStat' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_EXVM_ERR' incorporates:
     *  Inport: '<Root>/VeLINR_b_EXVM_ERR_TO'
     */
#if Rte_SysCon_VrntLR1B_EXVMERR

    /* Outputs for Atomic SubSystem: '<S11>/EXVM_ERR' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_EXVM_ERR' incorporates:
     *  Inport: '<Root>/VeLINR_e_EXVM_ERR'
     */
    rtb_TmpSignalConversionAtVeL_jv =
        Rte_Read_VeLINR_e_EXVM_ERR_VeLINR_e_EXVM_ERR
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__jj);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S519>:1' */
    (void)Rte_Read_VeLINR_b_EXVM_ERR_TO_VeLINR_b_EXVM_ERR_TO(&tmpRead_k);

    /* Outputs for Atomic SubSystem: '<S490>/EXVM_ERR' */
    /* Chart: '<S516>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_EXVM_ERR_TO'
     */
    if (tmpRead_k)
    {
        /* Transition: '<S519>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S519>:6' */
            /* Transition: '<S519>:25' */
            /* Call Fsft */
            VeLINR_y_EXVM_ERR_CallStatus = 2U;

            /* Event: '<S519>:39' */
            /* Transition: '<S519>:29' */
        }
        else
        {
            /* Transition: '<S519>:30' */
            /* Call Tmot */
            VeLINR_y_EXVM_ERR_CallStatus = 3U;

            /* Event: '<S519>:40' */
        }

        /* Transition: '<S519>:36' */
        /* Transition: '<S519>:23' */
    }
    else
    {
        /* Transition: '<S519>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_jv) == 133)
        {
            /* Transition: '<S519>:33' */
            /* Transition: '<S519>:35' */
            /* Call Nothing */
            VeLINR_y_EXVM_ERR_CallStatus = 4U;

            /* Transition: '<S519>:23' */
        }
        else
        {
            /* Transition: '<S519>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_jv) == 1)
            {
                /* Transition: '<S519>:48' */
                /* Transition: '<S519>:53' */
                FA_out_je = true;

                /* Transition: '<S519>:56' */
            }
            else
            {
                /* Transition: '<S519>:52' */
                FA_out_je = false;
            }

            /* Transition: '<S519>:37' */
            /* Call Poke */
            VeLINR_y_EXVM_ERR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S515>/Poke' */
            /* FunctionCaller: '<S520>/Function Caller' */
            /* Event: '<S519>:38' */
            Rte_Call_PokeTAIR_e_EXV_Err_PokeTAIR_e_EXV_Err
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__jj, FA_out_je);

            /* End of Outputs for SubSystem: '<S515>/Poke' */
        }
    }

    /* End of Chart: '<S516>/Chart' */
    /* End of Outputs for SubSystem: '<S490>/EXVM_ERR' */
    /* End of Outputs for SubSystem: '<S11>/EXVM_ERR' */
    /* Transition: '<S519>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_EXVM_ERR' */

    /* SignalConversion generated from: '<S2>/VeLINR_Pct_EXVM_PosAct' incorporates:
     *  Inport: '<Root>/VeLINR_b_EXVM_PosActTO'
     */
#if Rte_SysCon_VrntLR1B_EXVMPosAct

    /* Outputs for Atomic SubSystem: '<S11>/EXVM_PosAct' */
    /* SignalConversion generated from: '<S2>/VeLINR_Pct_EXVM_PosAct' incorporates:
     *  Inport: '<Root>/VeLINR_Pct_EXVM_PosAct'
     */
    rtb_TmpSignalConversionAtVeL_jq =
        Rte_Read_VeLINR_Pct_EXVM_PosAct_VeLINR_Pct_EXVM_PosAct
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_P_e);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S526>:1' */
    (void)Rte_Read_VeLINR_b_EXVM_PosActTO_VeLINR_b_EXVM_PosActTO(&FA_out_ff);

    /* Outputs for Atomic SubSystem: '<S491>/EXVM_PosAct' */
    /* Chart: '<S522>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_EXVM_PosActTO'
     */
    if (FA_out_ff)
    {
        /* Transition: '<S526>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S526>:6' */
            /* Transition: '<S526>:25' */
            /* Call Fsft */
            VeLINR_y_EXVM_PosAct_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S521>/Fsft' */
            /* FunctionCaller: '<S527>/Function Caller' */
            /* Event: '<S526>:39' */
            Rte_Call_FsftTAIR_Pct_EXV_PosAct_FsftTAIR_Pct_EXV_PosAct();

            /* End of Outputs for SubSystem: '<S521>/Fsft' */
            /* Transition: '<S526>:29' */
        }
        else
        {
            /* Transition: '<S526>:30' */
            /* Call Tmot */
            VeLINR_y_EXVM_PosAct_CallStatus = 3U;

            /* Event: '<S526>:40' */
        }

        /* Transition: '<S526>:36' */
        /* Transition: '<S526>:23' */
    }
    else
    {
        /* Transition: '<S526>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_jq) == 133)
        {
            /* Transition: '<S526>:33' */
            /* Transition: '<S526>:35' */
            /* Call Nothing */
            VeLINR_y_EXVM_PosAct_CallStatus = 4U;

            /* Transition: '<S526>:23' */
        }
        else
        {
            /* Transition: '<S526>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_jq) == 1)
            {
                /* Transition: '<S526>:48' */
                /* Transition: '<S526>:53' */
                FA_out_ff = true;

                /* Transition: '<S526>:56' */
            }
            else
            {
                /* Transition: '<S526>:52' */
            }

            /* Transition: '<S526>:37' */
            /* Call Poke */
            VeLINR_y_EXVM_PosAct_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S521>/Poke' */
            /* FunctionCaller: '<S528>/Function Caller' */
            /* Event: '<S526>:38' */
            Rte_Call_PokeTAIR_Pct_EXV_PosAct_PokeTAIR_Pct_EXV_PosAct
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_P_e, FA_out_ff);

            /* End of Outputs for SubSystem: '<S521>/Poke' */
        }
    }

    /* End of Chart: '<S522>/Chart' */
    /* End of Outputs for SubSystem: '<S491>/EXVM_PosAct' */
    /* End of Outputs for SubSystem: '<S11>/EXVM_PosAct' */
    /* Transition: '<S526>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_Pct_EXVM_PosAct' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_EXVM_Refrig_Pressure' incorporates:
     *  Inport: '<Root>/VeLINR_b_EXVM_Refrig_PressureTO'
     */
#if Rte_SysCon_VrntLR1B_EXVMRefrigerantPressure

    /* Outputs for Atomic SubSystem: '<S11>/EXVM_Refrigerant_Pressure' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_EXVM_Refrig_Pressure' incorporates:
     *  Inport: '<Root>/VeLINR_e_EXVM_Refrig_Pressure'
     */
    rtb_TmpSignalConversionAtVeL_dl =
        Rte_Read_VeLINR_e_EXVM_Refrig_Pressure_VeLINR_e_EXVM_Refrig_Pressure
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_e);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S534>:1' */
    (void)
        Rte_Read_VeLINR_b_EXVM_Refrig_PressureTO_VeLINR_b_EXVM_Refrig_PressureTO
        (&FA_out_cb);

    /* Outputs for Atomic SubSystem: '<S492>/EXVM_Refrigerant_Pressure' */
    /* Chart: '<S530>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_EXVM_Refrig_PressureTO'
     */
    if (FA_out_cb)
    {
        /* Transition: '<S534>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S534>:6' */
            /* Transition: '<S534>:25' */
            /* Call Fsft */
            VeLINR_y_EXVM_Refrig_Pressure_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S529>/Fsft' */
            /* FunctionCaller: '<S535>/Function Caller' */
            /* Event: '<S534>:39' */
            Rte_Call_FsftTAIR_kp_EXV_RefPress_FsftTAIR_kp_EXV_RefPress();

            /* End of Outputs for SubSystem: '<S529>/Fsft' */
            /* Transition: '<S534>:29' */
        }
        else
        {
            /* Transition: '<S534>:30' */
            /* Call Tmot */
            VeLINR_y_EXVM_Refrig_Pressure_CallStatus = 3U;

            /* Event: '<S534>:40' */
        }

        /* Transition: '<S534>:36' */
        /* Transition: '<S534>:23' */
    }
    else
    {
        /* Transition: '<S534>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_dl) == 133)
        {
            /* Transition: '<S534>:33' */
            /* Transition: '<S534>:35' */
            /* Call Nothing */
            VeLINR_y_EXVM_Refrig_Pressure_CallStatus = 4U;

            /* Transition: '<S534>:23' */
        }
        else
        {
            /* Transition: '<S534>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_dl) == 1)
            {
                /* Transition: '<S534>:48' */
                /* Transition: '<S534>:53' */
                FA_out_cb = true;

                /* Transition: '<S534>:56' */
            }
            else
            {
                /* Transition: '<S534>:52' */
            }

            /* Transition: '<S534>:37' */
            /* Call Poke */
            VeLINR_y_EXVM_Refrig_Pressure_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S529>/Poke' */
            /* FunctionCaller: '<S536>/Function Caller' */
            /* Event: '<S534>:38' */
            Rte_Call_PokeTAIR_kp_EXV_RefPress_PokeTAIR_kp_EXV_RefPress
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_e, FA_out_cb);

            /* End of Outputs for SubSystem: '<S529>/Poke' */
        }
    }

    /* End of Chart: '<S530>/Chart' */
    /* End of Outputs for SubSystem: '<S492>/EXVM_Refrigerant_Pressure' */
    /* End of Outputs for SubSystem: '<S11>/EXVM_Refrigerant_Pressure' */
    /* Transition: '<S534>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_EXVM_Refrig_Pressure' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_EXVM_Refrigerant_Temp' incorporates:
     *  Inport: '<Root>/VeLINR_b_EXVM_Refrigerant_TempTO'
     */
#if Rte_SysCon_VrntLR1B_EXVMRefrigerantTemp

    /* Outputs for Atomic SubSystem: '<S11>/EXVM_Refrigerant_Temp' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_EXVM_Refrigerant_Temp' incorporates:
     *  Inport: '<Root>/VeLINR_e_EXVM_Refrigerant_Temp'
     */
    rtb_TmpSignalConversionAtVe_dr5 =
        Rte_Read_VeLINR_e_EXVM_Refrigerant_Temp_VeLINR_e_EXVM_Refrigerant_Temp
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_d);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S542>:1' */
    (void)
        Rte_Read_VeLINR_b_EXVM_Refrigerant_TempTO_VeLINR_b_EXVM_Refrigerant_TempTO
        (&FA_out_fq);

    /* Outputs for Atomic SubSystem: '<S493>/EXVM_Refrigerant_Temp' */
    /* Chart: '<S538>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_EXVM_Refrigerant_TempTO'
     */
    if (FA_out_fq)
    {
        /* Transition: '<S542>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S542>:6' */
            /* Transition: '<S542>:25' */
            /* Call Fsft */
            VeLINR_y_EXVM_Refrigerant_Temp_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S537>/Fsft' */
            /* FunctionCaller: '<S543>/Function Caller' */
            /* Event: '<S542>:39' */
            Rte_Call_FsftTAIR_T_EXV_RefTemp_FsftTAIR_T_EXV_RefTemp();

            /* End of Outputs for SubSystem: '<S537>/Fsft' */
            /* Transition: '<S542>:29' */
        }
        else
        {
            /* Transition: '<S542>:30' */
            /* Call Tmot */
            VeLINR_y_EXVM_Refrigerant_Temp_CallStatus = 3U;

            /* Event: '<S542>:40' */
        }

        /* Transition: '<S542>:36' */
        /* Transition: '<S542>:23' */
    }
    else
    {
        /* Transition: '<S542>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVe_dr5) == 133)
        {
            /* Transition: '<S542>:33' */
            /* Transition: '<S542>:35' */
            /* Call Nothing */
            VeLINR_y_EXVM_Refrigerant_Temp_CallStatus = 4U;

            /* Transition: '<S542>:23' */
        }
        else
        {
            /* Transition: '<S542>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVe_dr5) == 1)
            {
                /* Transition: '<S542>:48' */
                /* Transition: '<S542>:53' */
                FA_out_fq = true;

                /* Transition: '<S542>:56' */
            }
            else
            {
                /* Transition: '<S542>:52' */
            }

            /* Transition: '<S542>:37' */
            /* Call Poke */
            VeLINR_y_EXVM_Refrigerant_Temp_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S537>/Poke' */
            /* FunctionCaller: '<S544>/Function Caller' */
            /* Event: '<S542>:38' */
            Rte_Call_PokeTAIR_T_EXV_RefTemp_PokeTAIR_T_EXV_RefTemp
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_d, FA_out_fq);

            /* End of Outputs for SubSystem: '<S537>/Poke' */
        }
    }

    /* End of Chart: '<S538>/Chart' */
    /* End of Outputs for SubSystem: '<S493>/EXVM_Refrigerant_Temp' */
    /* End of Outputs for SubSystem: '<S11>/EXVM_Refrigerant_Temp' */
    /* Transition: '<S542>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_EXVM_Refrigerant_Temp' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_EXVM_Sts' incorporates:
     *  Inport: '<Root>/VeLINR_b_EXVM_StsTO'
     */
#if Rte_SysCon_VrntLR1B_EXVMSts

    /* Outputs for Atomic SubSystem: '<S11>/EXVM_Sts' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_EXVM_Sts' incorporates:
     *  Inport: '<Root>/VeLINR_e_EXVM_Sts'
     */
    rtb_TmpSignalConversionAtVeL_gt =
        Rte_Read_VeLINR_e_EXVM_Sts_VeLINR_e_EXVM_Sts
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__a5);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S549>:1' */
    (void)Rte_Read_VeLINR_b_EXVM_StsTO_VeLINR_b_EXVM_StsTO(&FA_out_lz);

    /* Outputs for Atomic SubSystem: '<S494>/EXVM_Sts' */
    /* Chart: '<S546>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_EXVM_StsTO'
     */
    if (FA_out_lz)
    {
        /* Transition: '<S549>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S549>:6' */
            /* Transition: '<S549>:25' */
            /* Call Fsft */
            VeLINR_y_EXVM_Sts_CallStatus = 2U;

            /* Event: '<S549>:39' */
            /* Transition: '<S549>:29' */
        }
        else
        {
            /* Transition: '<S549>:30' */
            /* Call Tmot */
            VeLINR_y_EXVM_Sts_CallStatus = 3U;

            /* Event: '<S549>:40' */
        }

        /* Transition: '<S549>:36' */
        /* Transition: '<S549>:23' */
    }
    else
    {
        /* Transition: '<S549>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_gt) == 133)
        {
            /* Transition: '<S549>:33' */
            /* Transition: '<S549>:35' */
            /* Call Nothing */
            VeLINR_y_EXVM_Sts_CallStatus = 4U;

            /* Transition: '<S549>:23' */
        }
        else
        {
            /* Transition: '<S549>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_gt) == 1)
            {
                /* Transition: '<S549>:48' */
                /* Transition: '<S549>:53' */
                FA_out_lz = true;

                /* Transition: '<S549>:56' */
            }
            else
            {
                /* Transition: '<S549>:52' */
            }

            /* Transition: '<S549>:37' */
            /* Call Poke */
            VeLINR_y_EXVM_Sts_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S545>/Poke' */
            /* FunctionCaller: '<S550>/Function Caller' */
            /* Event: '<S549>:38' */
            Rte_Call_PokeTAIR_e_EXV_Sts_PokeTAIR_e_EXV_Sts
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__a5, FA_out_lz);

            /* End of Outputs for SubSystem: '<S545>/Poke' */
        }
    }

    /* End of Chart: '<S546>/Chart' */
    /* End of Outputs for SubSystem: '<S494>/EXVM_Sts' */
    /* End of Outputs for SubSystem: '<S11>/EXVM_Sts' */
    /* Transition: '<S549>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_EXVM_Sts' */

    /* SignalConversion generated from: '<S2>/VeLINR_U_EXVM_SupplyVolt' incorporates:
     *  Inport: '<Root>/VeLINR_b_EXVM_SupplyVoltTO'
     */
#if Rte_SysCon_VrntLR1B_EXVMSupplyVolt

    /* Outputs for Atomic SubSystem: '<S11>/EXVM_SupplyVolt' */
    /* SignalConversion generated from: '<S2>/VeLINR_U_EXVM_SupplyVolt' incorporates:
     *  Inport: '<Root>/VeLINR_U_EXVM_SupplyVolt'
     */
    rtb_TmpSignalConversionAtVeL_a1 =
        Rte_Read_VeLINR_U_EXVM_SupplyVolt_VeLINR_U_EXVM_SupplyVolt
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_U_m);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S555>:1' */
    (void)Rte_Read_VeLINR_b_EXVM_SupplyVoltTO_VeLINR_b_EXVM_SupplyVoltTO
        (&FA_out_nn);

    /* Outputs for Atomic SubSystem: '<S495>/EXVM_SupplyVolt' */
    /* Chart: '<S552>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_EXVM_SupplyVoltTO'
     */
    if (FA_out_nn)
    {
        /* Transition: '<S555>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S555>:6' */
            /* Transition: '<S555>:25' */
            /* Call Fsft */
            VeLINR_y_EXVM_SupplyVolt_CallStatus = 2U;

            /* Event: '<S555>:39' */
            /* Transition: '<S555>:29' */
        }
        else
        {
            /* Transition: '<S555>:30' */
            /* Call Tmot */
            VeLINR_y_EXVM_SupplyVolt_CallStatus = 3U;

            /* Event: '<S555>:40' */
        }

        /* Transition: '<S555>:36' */
        /* Transition: '<S555>:23' */
    }
    else
    {
        /* Transition: '<S555>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_a1) == 133)
        {
            /* Transition: '<S555>:33' */
            /* Transition: '<S555>:35' */
            /* Call Nothing */
            VeLINR_y_EXVM_SupplyVolt_CallStatus = 4U;

            /* Transition: '<S555>:23' */
        }
        else
        {
            /* Transition: '<S555>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_a1) == 1)
            {
                /* Transition: '<S555>:48' */
                /* Transition: '<S555>:53' */
                FA_out_nn = true;

                /* Transition: '<S555>:56' */
            }
            else
            {
                /* Transition: '<S555>:52' */
            }

            /* Transition: '<S555>:37' */
            /* Call Poke */
            VeLINR_y_EXVM_SupplyVolt_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S551>/Poke' */
            /* FunctionCaller: '<S556>/Function Caller' */
            /* Event: '<S555>:38' */
            Rte_Call_PokeTAIR_U_EXV_SupplyVolt_PokeTAIR_U_EXV_SupplyVolt
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_U_m, FA_out_nn);

            /* End of Outputs for SubSystem: '<S551>/Poke' */
        }
    }

    /* End of Chart: '<S552>/Chart' */
    /* End of Outputs for SubSystem: '<S495>/EXVM_SupplyVolt' */
    /* End of Outputs for SubSystem: '<S11>/EXVM_SupplyVolt' */
    /* Transition: '<S555>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_U_EXVM_SupplyVolt' */

    /* SignalConversion generated from: '<S2>/VeLINR_b_RsErr_EXVM' incorporates:
     *  Inport: '<Root>/VeLINR_b_RsErr_EXVM_TO'
     */
#if Rte_SysCon_VrntLR1B_RsErrEXVM

    /* Outputs for Atomic SubSystem: '<S11>/RsErr_EXVM' */
    /* SignalConversion generated from: '<S2>/VeLINR_b_RsErr_EXVM' incorporates:
     *  Inport: '<Root>/VeLINR_b_RsErr_EXVM'
     */
    rtb_TmpSignalConversionAtVeL_dd =
        Rte_Read_VeLINR_b_RsErr_EXVM_VeLINR_b_RsErr_EXVM
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__n2);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S561>:1' */
    (void)Rte_Read_VeLINR_b_RsErr_EXVM_TO_VeLINR_b_RsErr_EXVM_TO(&FA_out_l);

    /* Outputs for Atomic SubSystem: '<S496>/RsErr_EXVM' */
    /* Chart: '<S558>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_RsErr_EXVM_TO'
     */
    if (FA_out_l)
    {
        /* Transition: '<S561>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S561>:6' */
            /* Transition: '<S561>:25' */
            /* Call Fsft */
            VeLINR_y_RsErr_EXVM_CallStatus = 2U;

            /* Event: '<S561>:39' */
            /* Transition: '<S561>:29' */
        }
        else
        {
            /* Transition: '<S561>:30' */
            /* Call Tmot */
            VeLINR_y_RsErr_EXVM_CallStatus = 3U;

            /* Event: '<S561>:40' */
        }

        /* Transition: '<S561>:36' */
        /* Transition: '<S561>:23' */
    }
    else
    {
        /* Transition: '<S561>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_dd) == 133)
        {
            /* Transition: '<S561>:33' */
            /* Transition: '<S561>:35' */
            /* Call Nothing */
            VeLINR_y_RsErr_EXVM_CallStatus = 4U;

            /* Transition: '<S561>:23' */
        }
        else
        {
            /* Transition: '<S561>:46' */
            /* Transition: '<S561>:37' */
            /* Call Poke */
            VeLINR_y_RsErr_EXVM_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S557>/Poke' */
            /* FunctionCaller: '<S562>/Function Caller' */
            /* Event: '<S561>:38' */
            Rte_Call_PokeTAIR_b_EXV_RspErr_PokeTAIR_b_EXV_RspErr
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__n2);

            /* End of Outputs for SubSystem: '<S557>/Poke' */
        }
    }

    /* End of Chart: '<S558>/Chart' */
    /* End of Outputs for SubSystem: '<S496>/RsErr_EXVM' */
    /* End of Outputs for SubSystem: '<S11>/RsErr_EXVM' */
    /* Transition: '<S561>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_b_RsErr_EXVM' */

    /* SignalConversion generated from: '<S2>/VeLINR_T_AirHeatrCoreTemp' incorporates:
     *  Inport: '<Root>/VeLINR_b_AirHeatrCoreTempTO'
     */
#if Rte_SysCon_VrntLR1B_AirHeatrCoreTemp

    /* Outputs for Atomic SubSystem: '<S14>/AirHeatrCoreTemp' */
    /* SignalConversion generated from: '<S2>/VeLINR_T_AirHeatrCoreTemp' incorporates:
     *  Inport: '<Root>/VeLINR_T_AirHeatrCoreTemp'
     */
    rtb_TmpSignalConversionAtVeL_be =
        Rte_Read_VeLINR_T_AirHeatrCoreTemp_VeLINR_T_AirHeatrCoreTemp
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_T_A);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S574>:1' */
    (void)Rte_Read_VeLINR_b_AirHeatrCoreTempTO_VeLINR_b_AirHeatrCoreTempTO
        (&tmpRead_l);

    /* Outputs for Atomic SubSystem: '<S563>/AirHeatrCoreTemp' */
    /* Chart: '<S570>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_AirHeatrCoreTempTO'
     */
    if (tmpRead_l)
    {
        /* Transition: '<S574>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S574>:6' */
            /* Transition: '<S574>:25' */
            /* Call Fsft */
            VeLINR_y_AirHeatrCoreTemp_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S569>/Fsft' */
            /* FunctionCaller: '<S575>/Function Caller' */
            /* Event: '<S574>:39' */
            Rte_Call_FsftHTIR_T_Htr2CoreTemp_FsftHTIR_T_Htr2CoreTemp();

            /* End of Outputs for SubSystem: '<S569>/Fsft' */
            /* Transition: '<S574>:29' */
        }
        else
        {
            /* Transition: '<S574>:30' */
            /* Call Tmot */
            VeLINR_y_AirHeatrCoreTemp_CallStatus = 3U;

            /* Event: '<S574>:40' */
        }

        /* Transition: '<S574>:36' */
        /* Transition: '<S574>:23' */
    }
    else
    {
        /* Transition: '<S574>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_be) == 133)
        {
            /* Transition: '<S574>:33' */
            /* Transition: '<S574>:35' */
            /* Call Nothing */
            VeLINR_y_AirHeatrCoreTemp_CallStatus = 4U;

            /* Transition: '<S574>:23' */
        }
        else
        {
            /* Transition: '<S574>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_be) == 1)
            {
                /* Transition: '<S574>:48' */
                /* Transition: '<S574>:53' */
                FA_out_l = true;

                /* Transition: '<S574>:56' */
            }
            else
            {
                /* Transition: '<S574>:52' */
                FA_out_l = false;
            }

            /* Transition: '<S574>:37' */
            /* Call Poke */
            VeLINR_y_AirHeatrCoreTemp_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S569>/Poke' */
            /* FunctionCaller: '<S576>/Function Caller' */
            /* Event: '<S574>:38' */
            Rte_Call_PokeHTIR_T_HV_Htr2CoreTemp_PokeHTIR_T_HV_Htr2CoreTemp
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_T_A, FA_out_l);

            /* End of Outputs for SubSystem: '<S569>/Poke' */
        }
    }

    /* End of Chart: '<S570>/Chart' */
    /* End of Outputs for SubSystem: '<S563>/AirHeatrCoreTemp' */
    /* End of Outputs for SubSystem: '<S14>/AirHeatrCoreTemp' */
    /* Transition: '<S574>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_T_AirHeatrCoreTemp' */

    /* SignalConversion generated from: '<S2>/VeLINR_U_AirHeatrHVmeas' incorporates:
     *  Inport: '<Root>/VeLINR_b_AirHeatrHVmeasTO'
     */
#if Rte_SysCon_VrntLR1B_AirHeatrHVmeas

    /* Outputs for Atomic SubSystem: '<S14>/AirHeatrHVmeas' */
    /* SignalConversion generated from: '<S2>/VeLINR_U_AirHeatrHVmeas' incorporates:
     *  Inport: '<Root>/VeLINR_U_AirHeatrHVmeas'
     */
    rtb_TmpSignalConversionAtVeL_ob =
        Rte_Read_VeLINR_U_AirHeatrHVmeas_VeLINR_U_AirHeatrHVmeas
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_U_A);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S582>:1' */
    (void)Rte_Read_VeLINR_b_AirHeatrHVmeasTO_VeLINR_b_AirHeatrHVmeasTO(&FA_out_b);

    /* Outputs for Atomic SubSystem: '<S564>/AirHeatrHVmeas' */
    /* Chart: '<S578>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_AirHeatrHVmeasTO'
     */
    if (FA_out_b)
    {
        /* Transition: '<S582>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S582>:6' */
            /* Transition: '<S582>:25' */
            /* Call Fsft */
            VeLINR_y_AirHeatrHVmeas_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S577>/Fsft' */
            /* FunctionCaller: '<S583>/Function Caller' */
            /* Event: '<S582>:39' */
            Rte_Call_FsftHTIR_U_HV_Htr2_HV_VltgAct_FsftHTIR_U_HV_Htr2_HV_VltgAct
                ();

            /* End of Outputs for SubSystem: '<S577>/Fsft' */
            /* Transition: '<S582>:29' */
        }
        else
        {
            /* Transition: '<S582>:30' */
            /* Call Tmot */
            VeLINR_y_AirHeatrHVmeas_CallStatus = 3U;

            /* Event: '<S582>:40' */
        }

        /* Transition: '<S582>:36' */
        /* Transition: '<S582>:23' */
    }
    else
    {
        /* Transition: '<S582>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_ob) == 133)
        {
            /* Transition: '<S582>:33' */
            /* Transition: '<S582>:35' */
            /* Call Nothing */
            VeLINR_y_AirHeatrHVmeas_CallStatus = 4U;

            /* Transition: '<S582>:23' */
        }
        else
        {
            /* Transition: '<S582>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_ob) == 1)
            {
                /* Transition: '<S582>:48' */
                /* Transition: '<S582>:53' */
                FA_out_b = true;

                /* Transition: '<S582>:56' */
            }
            else
            {
                /* Transition: '<S582>:52' */
            }

            /* Transition: '<S582>:37' */
            /* Call Poke */
            VeLINR_y_AirHeatrHVmeas_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S577>/Poke' */
            /* FunctionCaller: '<S584>/Function Caller' */
            /* Event: '<S582>:38' */
            Rte_Call_PokeHTIR_U_HV_Htr2_HV_VltgAct_PokeHTIR_U_HV_Htr2_HV_VltgAct
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_U_A, FA_out_b);

            /* End of Outputs for SubSystem: '<S577>/Poke' */
        }
    }

    /* End of Chart: '<S578>/Chart' */
    /* End of Outputs for SubSystem: '<S564>/AirHeatrHVmeas' */
    /* End of Outputs for SubSystem: '<S14>/AirHeatrHVmeas' */
    /* Transition: '<S582>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_U_AirHeatrHVmeas' */

    /* SignalConversion generated from: '<S2>/VeLINR_I_AirHeatrICns' incorporates:
     *  Inport: '<Root>/VeLINR_b_AirHeatrICnsTO'
     */
#if Rte_SysCon_VrntLR1B_AirHeatrICns

    /* Outputs for Atomic SubSystem: '<S14>/AirHeatrICns' */
    /* SignalConversion generated from: '<S2>/VeLINR_I_AirHeatrICns' incorporates:
     *  Inport: '<Root>/VeLINR_I_AirHeatrICns'
     */
    rtb_TmpSignalConversionAtVeL_aa =
        Rte_Read_VeLINR_I_AirHeatrICns_VeLINR_I_AirHeatrICns
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_I_A);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S590>:1' */
    (void)Rte_Read_VeLINR_b_AirHeatrICnsTO_VeLINR_b_AirHeatrICnsTO(&FA_out_n);

    /* Outputs for Atomic SubSystem: '<S565>/AirHeatrICns' */
    /* Chart: '<S586>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_AirHeatrICnsTO'
     */
    if (FA_out_n)
    {
        /* Transition: '<S590>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S590>:6' */
            /* Transition: '<S590>:25' */
            /* Call Fsft */
            VeLINR_y_AirHeatrICns_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S585>/Fsft' */
            /* FunctionCaller: '<S591>/Function Caller' */
            /* Event: '<S590>:39' */
            Rte_Call_FsftHTIR_I_HV_Htr2_HV_CrntAct_FsftHTIR_I_HV_Htr2_HV_CrntAct
                ();

            /* End of Outputs for SubSystem: '<S585>/Fsft' */
            /* Transition: '<S590>:29' */
        }
        else
        {
            /* Transition: '<S590>:30' */
            /* Call Tmot */
            VeLINR_y_AirHeatrICns_CallStatus = 3U;

            /* Event: '<S590>:40' */
        }

        /* Transition: '<S590>:36' */
        /* Transition: '<S590>:23' */
    }
    else
    {
        /* Transition: '<S590>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_aa) == 133)
        {
            /* Transition: '<S590>:33' */
            /* Transition: '<S590>:35' */
            /* Call Nothing */
            VeLINR_y_AirHeatrICns_CallStatus = 4U;

            /* Transition: '<S590>:23' */
        }
        else
        {
            /* Transition: '<S590>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_aa) == 1)
            {
                /* Transition: '<S590>:48' */
                /* Transition: '<S590>:53' */
                FA_out_n = true;

                /* Transition: '<S590>:56' */
            }
            else
            {
                /* Transition: '<S590>:52' */
            }

            /* Transition: '<S590>:37' */
            /* Call Poke */
            VeLINR_y_AirHeatrICns_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S585>/Poke' */
            /* FunctionCaller: '<S592>/Function Caller' */
            /* Event: '<S590>:38' */
            Rte_Call_PokeHTIR_I_HV_Htr2_HV_CrntAct_PokeHTIR_I_HV_Htr2_HV_CrntAct
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_I_A, FA_out_n);

            /* End of Outputs for SubSystem: '<S585>/Poke' */
        }
    }

    /* End of Chart: '<S586>/Chart' */
    /* End of Outputs for SubSystem: '<S565>/AirHeatrICns' */
    /* End of Outputs for SubSystem: '<S14>/AirHeatrICns' */
    /* Transition: '<S590>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_I_AirHeatrICns' */

    /* SignalConversion generated from: '<S2>/VeLINR_T_AirHeatrPCBTemp' incorporates:
     *  Inport: '<Root>/VeLINR_b_AirHeatrPCBTempTO'
     */
#if Rte_SysCon_VrntLR1B_AirHeatrPCBTemp

    /* Outputs for Atomic SubSystem: '<S14>/AirHeatrPCBTemp' */
    /* SignalConversion generated from: '<S2>/VeLINR_T_AirHeatrPCBTemp' incorporates:
     *  Inport: '<Root>/VeLINR_T_AirHeatrPCBTemp'
     */
    rtb_TmpSignalConversionAtVe_mbm =
        Rte_Read_VeLINR_T_AirHeatrPCBTemp_VeLINR_T_AirHeatrPCBTemp
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_T_j);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S598>:1' */
    (void)Rte_Read_VeLINR_b_AirHeatrPCBTempTO_VeLINR_b_AirHeatrPCBTempTO
        (&FA_out_au);

    /* Outputs for Atomic SubSystem: '<S566>/AirHeatrPCBTemp' */
    /* Chart: '<S594>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_AirHeatrPCBTempTO'
     */
    if (FA_out_au)
    {
        /* Transition: '<S598>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S598>:6' */
            /* Transition: '<S598>:25' */
            /* Call Fsft */
            VeLINR_y_AirHeatrPCBTemp_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S593>/Fsft' */
            /* FunctionCaller: '<S599>/Function Caller' */
            /* Event: '<S598>:39' */
            Rte_Call_FsftHTIR_T_HV_Htr2_PCBTemp_FsftHTIR_T_HV_Htr2_PCBTemp();

            /* End of Outputs for SubSystem: '<S593>/Fsft' */
            /* Transition: '<S598>:29' */
        }
        else
        {
            /* Transition: '<S598>:30' */
            /* Call Tmot */
            VeLINR_y_AirHeatrPCBTemp_CallStatus = 3U;

            /* Event: '<S598>:40' */
        }

        /* Transition: '<S598>:36' */
        /* Transition: '<S598>:23' */
    }
    else
    {
        /* Transition: '<S598>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVe_mbm) == 133)
        {
            /* Transition: '<S598>:33' */
            /* Transition: '<S598>:35' */
            /* Call Nothing */
            VeLINR_y_AirHeatrPCBTemp_CallStatus = 4U;

            /* Transition: '<S598>:23' */
        }
        else
        {
            /* Transition: '<S598>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVe_mbm) == 1)
            {
                /* Transition: '<S598>:48' */
                /* Transition: '<S598>:53' */
                FA_out_au = true;

                /* Transition: '<S598>:56' */
            }
            else
            {
                /* Transition: '<S598>:52' */
            }

            /* Transition: '<S598>:37' */
            /* Call Poke */
            VeLINR_y_AirHeatrPCBTemp_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S593>/Poke' */
            /* FunctionCaller: '<S600>/Function Caller' */
            /* Event: '<S598>:38' */
            Rte_Call_PokeHTIR_T_HV_Htr2_PCBTemp_PokeHTIR_T_HV_Htr2_PCBTemp
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_T_j, FA_out_au);

            /* End of Outputs for SubSystem: '<S593>/Poke' */
        }
    }

    /* End of Chart: '<S594>/Chart' */
    /* End of Outputs for SubSystem: '<S566>/AirHeatrPCBTemp' */
    /* End of Outputs for SubSystem: '<S14>/AirHeatrPCBTemp' */
    /* Transition: '<S598>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_T_AirHeatrPCBTemp' */

    /* SignalConversion generated from: '<S2>/VeLINR_Pct_AirHeatrPwrCns' incorporates:
     *  Inport: '<Root>/VeLINR_b_AirHeatrPwrCnsTO'
     */
#if Rte_SysCon_VrntLR1B_AirHeatrPwrCns

    /* Outputs for Atomic SubSystem: '<S14>/AirHeatrPwrCns' */
    /* SignalConversion generated from: '<S2>/VeLINR_Pct_AirHeatrPwrCns' incorporates:
     *  Inport: '<Root>/VeLINR_Pct_AirHeatrPwrCns'
     */
    rtb_TmpSignalConversionAtVeL_de =
        Rte_Read_VeLINR_Pct_AirHeatrPwrCns_VeLINR_Pct_AirHeatrPwrCns
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_P_g);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S606>:1' */
    (void)Rte_Read_VeLINR_b_AirHeatrPwrCnsTO_VeLINR_b_AirHeatrPwrCnsTO
        (&FA_out_a0);

    /* Outputs for Atomic SubSystem: '<S567>/AirHeatrPwrCns' */
    /* Chart: '<S602>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_AirHeatrPwrCnsTO'
     */
    if (FA_out_a0)
    {
        /* Transition: '<S606>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S606>:6' */
            /* Transition: '<S606>:25' */
            /* Call Fsft */
            VeLINR_y_AirHeatrPwrCns_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S601>/Fsft' */
            /* FunctionCaller: '<S607>/Function Caller' */
            /* Event: '<S606>:39' */
            Rte_Call_FsftHTIR_Pct_HV_Htr2PwrAct_FsftHTIR_Pct_HV_Htr2PwrAct();

            /* End of Outputs for SubSystem: '<S601>/Fsft' */
            /* Transition: '<S606>:29' */
        }
        else
        {
            /* Transition: '<S606>:30' */
            /* Call Tmot */
            VeLINR_y_AirHeatrPwrCns_CallStatus = 3U;

            /* Event: '<S606>:40' */
        }

        /* Transition: '<S606>:36' */
        /* Transition: '<S606>:23' */
    }
    else
    {
        /* Transition: '<S606>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_de) == 133)
        {
            /* Transition: '<S606>:33' */
            /* Transition: '<S606>:35' */
            /* Call Nothing */
            VeLINR_y_AirHeatrPwrCns_CallStatus = 4U;

            /* Transition: '<S606>:23' */
        }
        else
        {
            /* Transition: '<S606>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_de) == 1)
            {
                /* Transition: '<S606>:48' */
                /* Transition: '<S606>:53' */
                FA_out_a0 = true;

                /* Transition: '<S606>:56' */
            }
            else
            {
                /* Transition: '<S606>:52' */
            }

            /* Transition: '<S606>:37' */
            /* Call Poke */
            VeLINR_y_AirHeatrPwrCns_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S601>/Poke' */
            /* FunctionCaller: '<S608>/Function Caller' */
            /* Event: '<S606>:38' */
            Rte_Call_PokeHTIR_Pct_HV_Htr2PwrAct_PokeHTIR_Pct_HV_Htr2PwrAct
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_P_g, FA_out_a0);

            /* End of Outputs for SubSystem: '<S601>/Poke' */
        }
    }

    /* End of Chart: '<S602>/Chart' */
    /* End of Outputs for SubSystem: '<S567>/AirHeatrPwrCns' */
    /* End of Outputs for SubSystem: '<S14>/AirHeatrPwrCns' */
    /* Transition: '<S606>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_Pct_AirHeatrPwrCns' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AirHeatrSts' incorporates:
     *  Inport: '<Root>/VeLINR_b_AirHeatrStsTO'
     */
#if Rte_SysCon_VrntLR1B_AirHeatrSts

    /* Outputs for Atomic SubSystem: '<S14>/AirHeatrSts' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_AirHeatrSts' incorporates:
     *  Inport: '<Root>/VeLINR_e_AirHeatrSts'
     */
    rtb_TmpSignalConversionAtVeL_kg =
        Rte_Read_VeLINR_e_AirHeatrSts_VeLINR_e_AirHeatrSts
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__gm);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S613>:1' */
    (void)Rte_Read_VeLINR_b_AirHeatrStsTO_VeLINR_b_AirHeatrStsTO(&FA_out_h);

    /* Outputs for Atomic SubSystem: '<S568>/AirHeatrSts' */
    /* Chart: '<S610>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_AirHeatrStsTO'
     */
    if (FA_out_h)
    {
        /* Transition: '<S613>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S613>:6' */
            /* Transition: '<S613>:25' */
            /* Call Fsft */
            VeLINR_y_AirHeatrSts_CallStatus = 2U;

            /* Event: '<S613>:39' */
            /* Transition: '<S613>:29' */
        }
        else
        {
            /* Transition: '<S613>:30' */
            /* Call Tmot */
            VeLINR_y_AirHeatrSts_CallStatus = 3U;

            /* Event: '<S613>:40' */
        }

        /* Transition: '<S613>:36' */
        /* Transition: '<S613>:23' */
    }
    else
    {
        /* Transition: '<S613>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_kg) == 133)
        {
            /* Transition: '<S613>:33' */
            /* Transition: '<S613>:35' */
            /* Call Nothing */
            VeLINR_y_AirHeatrSts_CallStatus = 4U;

            /* Transition: '<S613>:23' */
        }
        else
        {
            /* Transition: '<S613>:46' */
            /* Transition: '<S613>:37' */
            /* Call Poke */
            VeLINR_y_AirHeatrSts_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S609>/Poke' */
            /* FunctionCaller: '<S614>/Function Caller' */
            /* Event: '<S613>:38' */
            Rte_Call_PokeHTIR_e_HV_Htr2Sts_PokeHTIR_e_HV_Htr2Sts
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__gm);

            /* End of Outputs for SubSystem: '<S609>/Poke' */
        }
    }

    /* End of Chart: '<S610>/Chart' */
    /* End of Outputs for SubSystem: '<S568>/AirHeatrSts' */
    /* End of Outputs for SubSystem: '<S14>/AirHeatrSts' */
    /* Transition: '<S613>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_AirHeatrSts' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AirHtrDmgCirDrvrShoOpn' incorporates:
     *  Inport: '<Root>/VeLINR_b_AirHtrDmgCirDrvrShoOpnTO'
     */
#if Rte_SysCon_VrntLR1B_AirHeatrDmgCircForDrvrShoOrOpen

    /* Outputs for Atomic SubSystem: '<S15>/AirHeatrDmgCircForDrvrShoOrOpen' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_AirHtrDmgCirDrvrShoOpn' incorporates:
     *  Inport: '<Root>/VeLINR_e_AirHtrDmgCirDrvrShoOpn'
     */
    rtb_TmpSignalConversionAtVeL_nc =
        Rte_Read_VeLINR_e_AirHtrDmgCirDrvrShoOpn_VeLINR_e_AirHtrDmgCirDrvrShoOpn
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__id);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S634>:1' */
    (void)
        Rte_Read_VeLINR_b_AirHtrDmgCirDrvrShoOpnTO_VeLINR_b_AirHtrDmgCirDrvrShoOpnTO
        (&tmpRead_m);

    /* Outputs for Atomic SubSystem: '<S615>/AirHeatrDmgCircForDrvrShoOrOpen' */
    /* Chart: '<S630>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_AirHtrDmgCirDrvrShoOpnTO'
     */
    if (tmpRead_m)
    {
        /* Transition: '<S634>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S634>:6' */
            /* Transition: '<S634>:25' */
            /* Call Fsft */
            VeLINR_y_AirHtrDmgCirDrvrShoOpn_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S629>/Fsft' */
            /* FunctionCaller: '<S635>/Function Caller' */
            /* Event: '<S634>:39' */
            Rte_Call_FsftHTIR_e_HV_Htr2DrvFlt_FsftHTIR_e_HV_Htr2DrvFlt();

            /* End of Outputs for SubSystem: '<S629>/Fsft' */
            /* Transition: '<S634>:29' */
        }
        else
        {
            /* Transition: '<S634>:30' */
            /* Call Tmot */
            VeLINR_y_AirHtrDmgCirDrvrShoOpn_CallStatus = 3U;

            /* Event: '<S634>:40' */
        }

        /* Transition: '<S634>:36' */
        /* Transition: '<S634>:23' */
    }
    else
    {
        /* Transition: '<S634>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_nc) == 133)
        {
            /* Transition: '<S634>:33' */
            /* Transition: '<S634>:35' */
            /* Call Nothing */
            VeLINR_y_AirHtrDmgCirDrvrShoOpn_CallStatus = 4U;

            /* Transition: '<S634>:23' */
        }
        else
        {
            /* Transition: '<S634>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_nc) == 1)
            {
                /* Transition: '<S634>:48' */
                /* Transition: '<S634>:53' */
                FA_out_h = true;

                /* Transition: '<S634>:56' */
            }
            else
            {
                /* Transition: '<S634>:52' */
                FA_out_h = false;
            }

            /* Transition: '<S634>:37' */
            /* Call Poke */
            VeLINR_y_AirHtrDmgCirDrvrShoOpn_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S629>/Poke' */
            /* FunctionCaller: '<S636>/Function Caller' */
            /* Event: '<S634>:38' */
            Rte_Call_PokeHTIR_e_HV_Htr2DrvFlt_PokeHTIR_e_HV_Htr2DrvFlt
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__id, FA_out_h);

            /* End of Outputs for SubSystem: '<S629>/Poke' */
        }
    }

    /* End of Chart: '<S630>/Chart' */
    /* End of Outputs for SubSystem: '<S615>/AirHeatrDmgCircForDrvrShoOrOpen' */
    /* End of Outputs for SubSystem: '<S15>/AirHeatrDmgCircForDrvrShoOrOpen' */
    /* Transition: '<S634>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_AirHtrDmgCirDrvrShoOpn' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AirHeatrDmgHVISnsrFlt' incorporates:
     *  Inport: '<Root>/VeLINR_b_AirHeatrDmgHVISnsrFltTO'
     */
#if Rte_SysCon_VrntLR1B_AirHeatrDmgHVISnsrFlt

    /* Outputs for Atomic SubSystem: '<S15>/AirHeatrDmgHVISnsrFlt' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_AirHeatrDmgHVISnsrFlt' incorporates:
     *  Inport: '<Root>/VeLINR_e_AirHeatrDmgHVISnsrFlt'
     */
    rtb_TmpSignalConversionAtVe_a1v =
        Rte_Read_VeLINR_e_AirHeatrDmgHVISnsrFlt_VeLINR_e_AirHeatrDmgHVISnsrFlt
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__ft);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S642>:1' */
    (void)
        Rte_Read_VeLINR_b_AirHeatrDmgHVISnsrFltTO_VeLINR_b_AirHeatrDmgHVISnsrFltTO
        (&FA_out_du);

    /* Outputs for Atomic SubSystem: '<S616>/AirHeatrDmgHVISnsrFlt' */
    /* Chart: '<S638>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_AirHeatrDmgHVISnsrFltTO'
     */
    if (FA_out_du)
    {
        /* Transition: '<S642>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S642>:6' */
            /* Transition: '<S642>:25' */
            /* Call Fsft */
            VeLINR_y_AirHeatrDmgHVISnsrFlt_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S637>/Fsft' */
            /* FunctionCaller: '<S643>/Function Caller' */
            /* Event: '<S642>:39' */
            Rte_Call_FsftHTIR_e_HV_Htr2HVCrnt_SnsrFlt_FsftHTIR_e_HV_Htr2HVCrnt_SnsrFlt
                ();

            /* End of Outputs for SubSystem: '<S637>/Fsft' */
            /* Transition: '<S642>:29' */
        }
        else
        {
            /* Transition: '<S642>:30' */
            /* Call Tmot */
            VeLINR_y_AirHeatrDmgHVISnsrFlt_CallStatus = 3U;

            /* Event: '<S642>:40' */
        }

        /* Transition: '<S642>:36' */
        /* Transition: '<S642>:23' */
    }
    else
    {
        /* Transition: '<S642>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVe_a1v) == 133)
        {
            /* Transition: '<S642>:33' */
            /* Transition: '<S642>:35' */
            /* Call Nothing */
            VeLINR_y_AirHeatrDmgHVISnsrFlt_CallStatus = 4U;

            /* Transition: '<S642>:23' */
        }
        else
        {
            /* Transition: '<S642>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVe_a1v) == 1)
            {
                /* Transition: '<S642>:48' */
                /* Transition: '<S642>:53' */
                FA_out_du = true;

                /* Transition: '<S642>:56' */
            }
            else
            {
                /* Transition: '<S642>:52' */
            }

            /* Transition: '<S642>:37' */
            /* Call Poke */
            VeLINR_y_AirHeatrDmgHVISnsrFlt_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S637>/Poke' */
            /* FunctionCaller: '<S644>/Function Caller' */
            /* Event: '<S642>:38' */
            Rte_Call_PokeHTIR_e_HV_Htr2HVCrnt_SnsrFlt_PokeHTIR_e_HV_Htr2HVCrnt_SnsrFlt
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__ft, FA_out_du);

            /* End of Outputs for SubSystem: '<S637>/Poke' */
        }
    }

    /* End of Chart: '<S638>/Chart' */
    /* End of Outputs for SubSystem: '<S616>/AirHeatrDmgHVISnsrFlt' */
    /* End of Outputs for SubSystem: '<S15>/AirHeatrDmgHVISnsrFlt' */
    /* Transition: '<S642>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_AirHeatrDmgHVISnsrFlt' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AirHtrDmgHtrCorTS_Flt' incorporates:
     *  Inport: '<Root>/VeLINR_b_AirHtrDmgHtrCorTS_FltTO'
     */
#if Rte_SysCon_VrntLR1B_AirHeatrDmgHtrCoreTmpSnsrFlt

    /* Outputs for Atomic SubSystem: '<S15>/AirHeatrDmgHtrCoreTmpSnsrFlt' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_AirHtrDmgHtrCorTS_Flt' incorporates:
     *  Inport: '<Root>/VeLINR_e_AirHtrDmgHtrCorTS_Flt'
     */
    rtb_TmpSignalConversionAtVeL_dz =
        Rte_Read_VeLINR_e_AirHtrDmgHtrCorTS_Flt_VeLINR_e_AirHtrDmgHtrCorTS_Flt
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__b2);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S650>:1' */
    (void)
        Rte_Read_VeLINR_b_AirHtrDmgHtrCorTS_FltTO_VeLINR_b_AirHtrDmgHtrCorTS_FltTO
        (&FA_out_a);

    /* Outputs for Atomic SubSystem: '<S617>/AirHeatrDmgHtrCoreTmpSnsrFlt' */
    /* Chart: '<S646>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_AirHtrDmgHtrCorTS_FltTO'
     */
    if (FA_out_a)
    {
        /* Transition: '<S650>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S650>:6' */
            /* Transition: '<S650>:25' */
            /* Call Fsft */
            VeLINR_y_AirHtrDmgHtrCorTS_Flt_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S645>/Fsft' */
            /* FunctionCaller: '<S651>/Function Caller' */
            /* Event: '<S650>:39' */
            Rte_Call_FsftHTIR_e_HV_Htr2CoreTemp_SensFlt_FsftHTIR_e_HV_Htr2CoreTemp_SensFlt
                ();

            /* End of Outputs for SubSystem: '<S645>/Fsft' */
            /* Transition: '<S650>:29' */
        }
        else
        {
            /* Transition: '<S650>:30' */
            /* Call Tmot */
            VeLINR_y_AirHtrDmgHtrCorTS_Flt_CallStatus = 3U;

            /* Event: '<S650>:40' */
        }

        /* Transition: '<S650>:36' */
        /* Transition: '<S650>:23' */
    }
    else
    {
        /* Transition: '<S650>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_dz) == 133)
        {
            /* Transition: '<S650>:33' */
            /* Transition: '<S650>:35' */
            /* Call Nothing */
            VeLINR_y_AirHtrDmgHtrCorTS_Flt_CallStatus = 4U;

            /* Transition: '<S650>:23' */
        }
        else
        {
            /* Transition: '<S650>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_dz) == 1)
            {
                /* Transition: '<S650>:48' */
                /* Transition: '<S650>:53' */
                FA_out_a = true;

                /* Transition: '<S650>:56' */
            }
            else
            {
                /* Transition: '<S650>:52' */
            }

            /* Transition: '<S650>:37' */
            /* Call Poke */
            VeLINR_y_AirHtrDmgHtrCorTS_Flt_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S645>/Poke' */
            /* FunctionCaller: '<S652>/Function Caller' */
            /* Event: '<S650>:38' */
            Rte_Call_PokeHTIR_e_HV_Htr2CoreTemp_SensFlt_PokeHTIR_e_HV_Htr2CoreTemp_SensFlt
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__b2, FA_out_a);

            /* End of Outputs for SubSystem: '<S645>/Poke' */
        }
    }

    /* End of Chart: '<S646>/Chart' */
    /* End of Outputs for SubSystem: '<S617>/AirHeatrDmgHtrCoreTmpSnsrFlt' */
    /* End of Outputs for SubSystem: '<S15>/AirHeatrDmgHtrCoreTmpSnsrFlt' */
    /* Transition: '<S650>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_AirHtrDmgHtrCorTS_Flt' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AirHeatrDmgIntHwProtn' incorporates:
     *  Inport: '<Root>/VeLINR_b_AirHeatrDmgIntHwProtnTO'
     */
#if Rte_SysCon_VrntLR1B_AirHeatrDmgIntHwProtn

    /* Outputs for Atomic SubSystem: '<S15>/AirHeatrDmgIntHwProtn' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_AirHeatrDmgIntHwProtn' incorporates:
     *  Inport: '<Root>/VeLINR_e_AirHeatrDmgIntHwProtn'
     */
    rtb_TmpSignalConversionAtVeL_pk =
        Rte_Read_VeLINR_e_AirHeatrDmgIntHwProtn_VeLINR_e_AirHeatrDmgIntHwProtn
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_p);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S658>:1' */
    (void)
        Rte_Read_VeLINR_b_AirHeatrDmgIntHwProtnTO_VeLINR_b_AirHeatrDmgIntHwProtnTO
        (&FA_out_kq);

    /* Outputs for Atomic SubSystem: '<S618>/AirHeatrDmgIntHwProtn' */
    /* Chart: '<S654>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_AirHeatrDmgIntHwProtnTO'
     */
    if (FA_out_kq)
    {
        /* Transition: '<S658>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S658>:6' */
            /* Transition: '<S658>:25' */
            /* Call Fsft */
            VeLINR_y_AirHeatrDmgIntHwProtn_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S653>/Fsft' */
            /* FunctionCaller: '<S659>/Function Caller' */
            /* Event: '<S658>:39' */
            Rte_Call_FsftHTIR_e_HV_Htr2SelfProtect_Actv_FsftHTIR_e_HV_Htr2SelfProtect_Actv
                ();

            /* End of Outputs for SubSystem: '<S653>/Fsft' */
            /* Transition: '<S658>:29' */
        }
        else
        {
            /* Transition: '<S658>:30' */
            /* Call Tmot */
            VeLINR_y_AirHeatrDmgIntHwProtn_CallStatus = 3U;

            /* Event: '<S658>:40' */
        }

        /* Transition: '<S658>:36' */
        /* Transition: '<S658>:23' */
    }
    else
    {
        /* Transition: '<S658>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_pk) == 133)
        {
            /* Transition: '<S658>:33' */
            /* Transition: '<S658>:35' */
            /* Call Nothing */
            VeLINR_y_AirHeatrDmgIntHwProtn_CallStatus = 4U;

            /* Transition: '<S658>:23' */
        }
        else
        {
            /* Transition: '<S658>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_pk) == 1)
            {
                /* Transition: '<S658>:48' */
                /* Transition: '<S658>:53' */
                FA_out_kq = true;

                /* Transition: '<S658>:56' */
            }
            else
            {
                /* Transition: '<S658>:52' */
            }

            /* Transition: '<S658>:37' */
            /* Call Poke */
            VeLINR_y_AirHeatrDmgIntHwProtn_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S653>/Poke' */
            /* FunctionCaller: '<S660>/Function Caller' */
            /* Event: '<S658>:38' */
            Rte_Call_PokeHTIR_e_HV_Htr2SelfProtect_Actv_PokeHTIR_e_HV_Htr2SelfProtect_Actv
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_p, FA_out_kq);

            /* End of Outputs for SubSystem: '<S653>/Poke' */
        }
    }

    /* End of Chart: '<S654>/Chart' */
    /* End of Outputs for SubSystem: '<S618>/AirHeatrDmgIntHwProtn' */
    /* End of Outputs for SubSystem: '<S15>/AirHeatrDmgIntHwProtn' */
    /* Transition: '<S658>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_AirHeatrDmgIntHwProtn' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AirHeatrDmgMemErr' incorporates:
     *  Inport: '<Root>/VeLINR_b_AirHeatrDmgMemErrTO'
     */
#if Rte_SysCon_VrntLR1B_AirHeatrDmgMemErr

    /* Outputs for Atomic SubSystem: '<S15>/AirHeatrDmgMemErr' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_AirHeatrDmgMemErr' incorporates:
     *  Inport: '<Root>/VeLINR_e_AirHeatrDmgMemErr'
     */
    rtb_TmpSignalConversionAtVeL_hj =
        Rte_Read_VeLINR_e_AirHeatrDmgMemErr_VeLINR_e_AirHeatrDmgMemErr
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__ky);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S666>:1' */
    (void)Rte_Read_VeLINR_b_AirHeatrDmgMemErrTO_VeLINR_b_AirHeatrDmgMemErrTO
        (&FA_out_da);

    /* Outputs for Atomic SubSystem: '<S619>/AirHeatrDmgMemErr' */
    /* Chart: '<S662>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_AirHeatrDmgMemErrTO'
     */
    if (FA_out_da)
    {
        /* Transition: '<S666>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S666>:6' */
            /* Transition: '<S666>:25' */
            /* Call Fsft */
            VeLINR_y_AirHeatrDmgMemErr_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S661>/Fsft' */
            /* FunctionCaller: '<S667>/Function Caller' */
            /* Event: '<S666>:39' */
            Rte_Call_FsftHTIR_e_HV_Htr2ProcesMemory_Flt_FsftHTIR_e_HV_Htr2ProcesMemory_Flt
                ();

            /* End of Outputs for SubSystem: '<S661>/Fsft' */
            /* Transition: '<S666>:29' */
        }
        else
        {
            /* Transition: '<S666>:30' */
            /* Call Tmot */
            VeLINR_y_AirHeatrDmgMemErr_CallStatus = 3U;

            /* Event: '<S666>:40' */
        }

        /* Transition: '<S666>:36' */
        /* Transition: '<S666>:23' */
    }
    else
    {
        /* Transition: '<S666>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_hj) == 133)
        {
            /* Transition: '<S666>:33' */
            /* Transition: '<S666>:35' */
            /* Call Nothing */
            VeLINR_y_AirHeatrDmgMemErr_CallStatus = 4U;

            /* Transition: '<S666>:23' */
        }
        else
        {
            /* Transition: '<S666>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_hj) == 1)
            {
                /* Transition: '<S666>:48' */
                /* Transition: '<S666>:53' */
                FA_out_da = true;

                /* Transition: '<S666>:56' */
            }
            else
            {
                /* Transition: '<S666>:52' */
            }

            /* Transition: '<S666>:37' */
            /* Call Poke */
            VeLINR_y_AirHeatrDmgMemErr_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S661>/Poke' */
            /* FunctionCaller: '<S668>/Function Caller' */
            /* Event: '<S666>:38' */
            Rte_Call_PokeHTIR_e_HV_Htr2ProcesMemory_Flt_PokeHTIR_e_HV_Htr2ProcesMemory_Flt
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__ky, FA_out_da);

            /* End of Outputs for SubSystem: '<S661>/Poke' */
        }
    }

    /* End of Chart: '<S662>/Chart' */
    /* End of Outputs for SubSystem: '<S619>/AirHeatrDmgMemErr' */
    /* End of Outputs for SubSystem: '<S15>/AirHeatrDmgMemErr' */
    /* Transition: '<S666>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_AirHeatrDmgMemErr' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AirHtrDmgPCBTmpSnsrFlt' incorporates:
     *  Inport: '<Root>/VeLINR_b_AirHtrDmgPCBTmpSnsrFltTO'
     */
#if Rte_SysCon_VrntLR1B_AirHeatrDmgPCBTmpSnsrFlt

    /* Outputs for Atomic SubSystem: '<S15>/AirHeatrDmgPCBTmpSnsrFlt' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_AirHtrDmgPCBTmpSnsrFlt' incorporates:
     *  Inport: '<Root>/VeLINR_e_AirHtrDmgPCBTmpSnsrFlt'
     */
    rtb_TmpSignalConversionAtVeL_lo =
        Rte_Read_VeLINR_e_AirHtrDmgPCBTmpSnsrFlt_VeLINR_e_AirHtrDmgPCBTmpSnsrFlt
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__fm);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S674>:1' */
    (void)
        Rte_Read_VeLINR_b_AirHtrDmgPCBTmpSnsrFltTO_VeLINR_b_AirHtrDmgPCBTmpSnsrFltTO
        (&FA_out_di);

    /* Outputs for Atomic SubSystem: '<S620>/AirHeatrDmgPCBTmpSnsrFlt' */
    /* Chart: '<S670>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_AirHtrDmgPCBTmpSnsrFltTO'
     */
    if (FA_out_di)
    {
        /* Transition: '<S674>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S674>:6' */
            /* Transition: '<S674>:25' */
            /* Call Fsft */
            VeLINR_y_AirHtrDmgPCBTmpSnsrFlt_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S669>/Fsft' */
            /* FunctionCaller: '<S675>/Function Caller' */
            /* Event: '<S674>:39' */
            Rte_Call_FsftHTIR_e_HV_Htr2PCBTmp_SnsrFlt_FsftHTIR_e_HV_Htr2PCBTmp_SnsrFlt
                ();

            /* End of Outputs for SubSystem: '<S669>/Fsft' */
            /* Transition: '<S674>:29' */
        }
        else
        {
            /* Transition: '<S674>:30' */
            /* Call Tmot */
            VeLINR_y_AirHtrDmgPCBTmpSnsrFlt_CallStatus = 3U;

            /* Event: '<S674>:40' */
        }

        /* Transition: '<S674>:36' */
        /* Transition: '<S674>:23' */
    }
    else
    {
        /* Transition: '<S674>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_lo) == 133)
        {
            /* Transition: '<S674>:33' */
            /* Transition: '<S674>:35' */
            /* Call Nothing */
            VeLINR_y_AirHtrDmgPCBTmpSnsrFlt_CallStatus = 4U;

            /* Transition: '<S674>:23' */
        }
        else
        {
            /* Transition: '<S674>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_lo) == 1)
            {
                /* Transition: '<S674>:48' */
                /* Transition: '<S674>:53' */
                FA_out_di = true;

                /* Transition: '<S674>:56' */
            }
            else
            {
                /* Transition: '<S674>:52' */
            }

            /* Transition: '<S674>:37' */
            /* Call Poke */
            VeLINR_y_AirHtrDmgPCBTmpSnsrFlt_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S669>/Poke' */
            /* FunctionCaller: '<S676>/Function Caller' */
            /* Event: '<S674>:38' */
            Rte_Call_PokeHTIR_e_HV_Htr2PCBTmp_SnsrFlt_PokeHTIR_e_HV_Htr2PCBTmp_SnsrFlt
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__fm, FA_out_di);

            /* End of Outputs for SubSystem: '<S669>/Poke' */
        }
    }

    /* End of Chart: '<S670>/Chart' */
    /* End of Outputs for SubSystem: '<S620>/AirHeatrDmgPCBTmpSnsrFlt' */
    /* End of Outputs for SubSystem: '<S15>/AirHeatrDmgPCBTmpSnsrFlt' */
    /* Transition: '<S674>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_AirHtrDmgPCBTmpSnsrFlt' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AirHeatrWarnFltInCom' incorporates:
     *  Inport: '<Root>/VeLINR_b_AirHeatrWarnFltInComTO'
     */
#if Rte_SysCon_VrntLR1B_AirHeatrWarnFltInCom

    /* Outputs for Atomic SubSystem: '<S15>/AirHeatrWarnFltInCom' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_AirHeatrWarnFltInCom' incorporates:
     *  Inport: '<Root>/VeLINR_e_AirHeatrWarnFltInCom'
     */
    rtb_TmpSignalConversionAtVe_drh =
        Rte_Read_VeLINR_e_AirHeatrWarnFltInCom_VeLINR_e_AirHeatrWarnFltInCom
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__gc);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S682>:1' */
    (void)
        Rte_Read_VeLINR_b_AirHeatrWarnFltInComTO_VeLINR_b_AirHeatrWarnFltInComTO
        (&FA_out_jk);

    /* Outputs for Atomic SubSystem: '<S621>/AirHeatrWarnFltInCom' */
    /* Chart: '<S678>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_AirHeatrWarnFltInComTO'
     */
    if (FA_out_jk)
    {
        /* Transition: '<S682>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S682>:6' */
            /* Transition: '<S682>:25' */
            /* Call Fsft */
            VeLINR_y_AirHeatrWarnFltInCom_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S677>/Fsft' */
            /* FunctionCaller: '<S683>/Function Caller' */
            /* Event: '<S682>:39' */
            Rte_Call_FsftHTIR_e_HV_Htr2IntCom_Err_FsftHTIR_e_HV_Htr2IntCom_Err();

            /* End of Outputs for SubSystem: '<S677>/Fsft' */
            /* Transition: '<S682>:29' */
        }
        else
        {
            /* Transition: '<S682>:30' */
            /* Call Tmot */
            VeLINR_y_AirHeatrWarnFltInCom_CallStatus = 3U;

            /* Event: '<S682>:40' */
        }

        /* Transition: '<S682>:36' */
        /* Transition: '<S682>:23' */
    }
    else
    {
        /* Transition: '<S682>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVe_drh) == 133)
        {
            /* Transition: '<S682>:33' */
            /* Transition: '<S682>:35' */
            /* Call Nothing */
            VeLINR_y_AirHeatrWarnFltInCom_CallStatus = 4U;

            /* Transition: '<S682>:23' */
        }
        else
        {
            /* Transition: '<S682>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVe_drh) == 1)
            {
                /* Transition: '<S682>:48' */
                /* Transition: '<S682>:53' */
                FA_out_jk = true;

                /* Transition: '<S682>:56' */
            }
            else
            {
                /* Transition: '<S682>:52' */
            }

            /* Transition: '<S682>:37' */
            /* Call Poke */
            VeLINR_y_AirHeatrWarnFltInCom_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S677>/Poke' */
            /* FunctionCaller: '<S684>/Function Caller' */
            /* Event: '<S682>:38' */
            Rte_Call_PokeHTIR_e_HV_Htr2IntCom_Err_PokeHTIR_e_HV_Htr2IntCom_Err
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__gc, FA_out_jk);

            /* End of Outputs for SubSystem: '<S677>/Poke' */
        }
    }

    /* End of Chart: '<S678>/Chart' */
    /* End of Outputs for SubSystem: '<S621>/AirHeatrWarnFltInCom' */
    /* End of Outputs for SubSystem: '<S15>/AirHeatrWarnFltInCom' */
    /* Transition: '<S682>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_AirHeatrWarnFltInCom' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AirHtrWrnHtrCorOvrTmp' incorporates:
     *  Inport: '<Root>/VeLINR_b_AirHtrWrnHtrCorOvrTmpTO'
     */
#if Rte_SysCon_VrntLR1B_AirHeatrWarnHtrCoreOvrTmp

    /* Outputs for Atomic SubSystem: '<S15>/AirHeatrWarnHtrCoreOvrTmp' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_AirHtrWrnHtrCorOvrTmp' incorporates:
     *  Inport: '<Root>/VeLINR_e_AirHtrWrnHtrCorOvrTmp'
     */
    rtb_TmpSignalConversionAtVeL_ov =
        Rte_Read_VeLINR_e_AirHtrWrnHtrCorOvrTmp_VeLINR_e_AirHtrWrnHtrCorOvrTmp
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__jd);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S690>:1' */
    (void)
        Rte_Read_VeLINR_b_AirHtrWrnHtrCorOvrTmpTO_VeLINR_b_AirHtrWrnHtrCorOvrTmpTO
        (&FA_out_j0);

    /* Outputs for Atomic SubSystem: '<S622>/AirHeatrWarnHtrCoreOvrTmp' */
    /* Chart: '<S686>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_AirHtrWrnHtrCorOvrTmpTO'
     */
    if (FA_out_j0)
    {
        /* Transition: '<S690>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S690>:6' */
            /* Transition: '<S690>:25' */
            /* Call Fsft */
            VeLINR_y_AirHtrWrnHtrCorOvrTmp_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S685>/Fsft' */
            /* FunctionCaller: '<S691>/Function Caller' */
            /* Event: '<S690>:39' */
            Rte_Call_FsftHTIR_e_HV_Htr2Core_OvrTmp_FsftHTIR_e_HV_Htr2Core_OvrTmp
                ();

            /* End of Outputs for SubSystem: '<S685>/Fsft' */
            /* Transition: '<S690>:29' */
        }
        else
        {
            /* Transition: '<S690>:30' */
            /* Call Tmot */
            VeLINR_y_AirHtrWrnHtrCorOvrTmp_CallStatus = 3U;

            /* Event: '<S690>:40' */
        }

        /* Transition: '<S690>:36' */
        /* Transition: '<S690>:23' */
    }
    else
    {
        /* Transition: '<S690>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_ov) == 133)
        {
            /* Transition: '<S690>:33' */
            /* Transition: '<S690>:35' */
            /* Call Nothing */
            VeLINR_y_AirHtrWrnHtrCorOvrTmp_CallStatus = 4U;

            /* Transition: '<S690>:23' */
        }
        else
        {
            /* Transition: '<S690>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_ov) == 1)
            {
                /* Transition: '<S690>:48' */
                /* Transition: '<S690>:53' */
                FA_out_j0 = true;

                /* Transition: '<S690>:56' */
            }
            else
            {
                /* Transition: '<S690>:52' */
            }

            /* Transition: '<S690>:37' */
            /* Call Poke */
            VeLINR_y_AirHtrWrnHtrCorOvrTmp_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S685>/Poke' */
            /* FunctionCaller: '<S692>/Function Caller' */
            /* Event: '<S690>:38' */
            Rte_Call_PokeHTIR_e_HV_Htr2Core_OvrTmp_PokeHTIR_e_HV_Htr2Core_OvrTmp
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__jd, FA_out_j0);

            /* End of Outputs for SubSystem: '<S685>/Poke' */
        }
    }

    /* End of Chart: '<S686>/Chart' */
    /* End of Outputs for SubSystem: '<S622>/AirHeatrWarnHtrCoreOvrTmp' */
    /* End of Outputs for SubSystem: '<S15>/AirHeatrWarnHtrCoreOvrTmp' */
    /* Transition: '<S690>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_AirHtrWrnHtrCorOvrTmp' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AirHeatrWarnHvOutOfRng' incorporates:
     *  Inport: '<Root>/VeLINR_b_AirHeatrWarnHvOutOfRngTO'
     */
#if Rte_SysCon_VrntLR1B_AirHeatrWarnHvOutOfRng

    /* Outputs for Atomic SubSystem: '<S15>/AirHeatrWarnHvOutOfRng' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_AirHeatrWarnHvOutOfRng' incorporates:
     *  Inport: '<Root>/VeLINR_e_AirHeatrWarnHvOutOfRng'
     */
    rtb_TmpSignalConversionAtVeL_ca =
        Rte_Read_VeLINR_e_AirHeatrWarnHvOutOfRng_VeLINR_e_AirHeatrWarnHvOutOfRng
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_aoy);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S698>:1' */
    (void)
        Rte_Read_VeLINR_b_AirHeatrWarnHvOutOfRngTO_VeLINR_b_AirHeatrWarnHvOutOfRngTO
        (&FA_out_ch);

    /* Outputs for Atomic SubSystem: '<S623>/AirHeatrWarnHvOutOfRng' */
    /* Chart: '<S694>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_AirHeatrWarnHvOutOfRngTO'
     */
    if (FA_out_ch)
    {
        /* Transition: '<S698>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S698>:6' */
            /* Transition: '<S698>:25' */
            /* Call Fsft */
            VeLINR_y_AirHeatrWarnHvOutOfRng_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S693>/Fsft' */
            /* FunctionCaller: '<S699>/Function Caller' */
            /* Event: '<S698>:39' */
            Rte_Call_FsftHTIR_e_HV_Htr2_HV_OutofRng_FsftHTIR_e_HV_Htr2_HV_OutofRng
                ();

            /* End of Outputs for SubSystem: '<S693>/Fsft' */
            /* Transition: '<S698>:29' */
        }
        else
        {
            /* Transition: '<S698>:30' */
            /* Call Tmot */
            VeLINR_y_AirHeatrWarnHvOutOfRng_CallStatus = 3U;

            /* Event: '<S698>:40' */
        }

        /* Transition: '<S698>:36' */
        /* Transition: '<S698>:23' */
    }
    else
    {
        /* Transition: '<S698>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_ca) == 133)
        {
            /* Transition: '<S698>:33' */
            /* Transition: '<S698>:35' */
            /* Call Nothing */
            VeLINR_y_AirHeatrWarnHvOutOfRng_CallStatus = 4U;

            /* Transition: '<S698>:23' */
        }
        else
        {
            /* Transition: '<S698>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_ca) == 1)
            {
                /* Transition: '<S698>:48' */
                /* Transition: '<S698>:53' */
                FA_out_ch = true;

                /* Transition: '<S698>:56' */
            }
            else
            {
                /* Transition: '<S698>:52' */
            }

            /* Transition: '<S698>:37' */
            /* Call Poke */
            VeLINR_y_AirHeatrWarnHvOutOfRng_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S693>/Poke' */
            /* FunctionCaller: '<S700>/Function Caller' */
            /* Event: '<S698>:38' */
            Rte_Call_PokeHTIR_e_HV_Htr2_HV_OutofRng_PokeHTIR_e_HV_Htr2_HV_OutofRng
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_aoy, FA_out_ch);

            /* End of Outputs for SubSystem: '<S693>/Poke' */
        }
    }

    /* End of Chart: '<S694>/Chart' */
    /* End of Outputs for SubSystem: '<S623>/AirHeatrWarnHvOutOfRng' */
    /* End of Outputs for SubSystem: '<S15>/AirHeatrWarnHvOutOfRng' */
    /* Transition: '<S698>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_AirHeatrWarnHvOutOfRng' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AirHtrWarnICnsOutOfRng' incorporates:
     *  Inport: '<Root>/VeLINR_b_AirHtrWarnICnsOutOfRngTO'
     */
#if Rte_SysCon_VrntLR1B_AirHeatrWarnICnsOutOfRng

    /* Outputs for Atomic SubSystem: '<S15>/AirHeatrWarnICnsOutOfRng' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_AirHtrWarnICnsOutOfRng' incorporates:
     *  Inport: '<Root>/VeLINR_e_AirHtrWarnICnsOutOfRng'
     */
    rtb_TmpSignalConversionAtVeL_cb =
        Rte_Read_VeLINR_e_AirHtrWarnICnsOutOfRng_VeLINR_e_AirHtrWarnICnsOutOfRng
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__fz);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S706>:1' */
    (void)
        Rte_Read_VeLINR_b_AirHtrWarnICnsOutOfRngTO_VeLINR_b_AirHtrWarnICnsOutOfRngTO
        (&FA_out_mo);

    /* Outputs for Atomic SubSystem: '<S624>/AirHeatrWarnICnsOutOfRng' */
    /* Chart: '<S702>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_AirHtrWarnICnsOutOfRngTO'
     */
    if (FA_out_mo)
    {
        /* Transition: '<S706>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S706>:6' */
            /* Transition: '<S706>:25' */
            /* Call Fsft */
            VeLINR_y_AirHtrWarnICnsOutOfRng_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S701>/Fsft' */
            /* FunctionCaller: '<S707>/Function Caller' */
            /* Event: '<S706>:39' */
            Rte_Call_FsftHTIR_e_HV_Htr2_HV_CrntOutofRng_FsftHTIR_e_HV_Htr2_HV_CrntOutofRng
                ();

            /* End of Outputs for SubSystem: '<S701>/Fsft' */
            /* Transition: '<S706>:29' */
        }
        else
        {
            /* Transition: '<S706>:30' */
            /* Call Tmot */
            VeLINR_y_AirHtrWarnICnsOutOfRng_CallStatus = 3U;

            /* Event: '<S706>:40' */
        }

        /* Transition: '<S706>:36' */
        /* Transition: '<S706>:23' */
    }
    else
    {
        /* Transition: '<S706>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_cb) == 133)
        {
            /* Transition: '<S706>:33' */
            /* Transition: '<S706>:35' */
            /* Call Nothing */
            VeLINR_y_AirHtrWarnICnsOutOfRng_CallStatus = 4U;

            /* Transition: '<S706>:23' */
        }
        else
        {
            /* Transition: '<S706>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_cb) == 1)
            {
                /* Transition: '<S706>:48' */
                /* Transition: '<S706>:53' */
                FA_out_mo = true;

                /* Transition: '<S706>:56' */
            }
            else
            {
                /* Transition: '<S706>:52' */
            }

            /* Transition: '<S706>:37' */
            /* Call Poke */
            VeLINR_y_AirHtrWarnICnsOutOfRng_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S701>/Poke' */
            /* FunctionCaller: '<S708>/Function Caller' */
            /* Event: '<S706>:38' */
            Rte_Call_PokeHTIR_e_HV_Htr2_HV_CrntOutofRng_PokeHTIR_e_HV_Htr2_HV_CrntOutofRng
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__fz, FA_out_mo);

            /* End of Outputs for SubSystem: '<S701>/Poke' */
        }
    }

    /* End of Chart: '<S702>/Chart' */
    /* End of Outputs for SubSystem: '<S624>/AirHeatrWarnICnsOutOfRng' */
    /* End of Outputs for SubSystem: '<S15>/AirHeatrWarnICnsOutOfRng' */
    /* Transition: '<S706>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_AirHtrWarnICnsOutOfRng' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AirHeatrWarnPCBOvrTmp' incorporates:
     *  Inport: '<Root>/VeLINR_b_AirHeatrWarnPCBOvrTmpTO'
     */
#if Rte_SysCon_VrntLR1B_AirHeatrWarnPCBOvrTmp

    /* Outputs for Atomic SubSystem: '<S15>/AirHeatrWarnPCBOvrTmp' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_AirHeatrWarnPCBOvrTmp' incorporates:
     *  Inport: '<Root>/VeLINR_e_AirHeatrWarnPCBOvrTmp'
     */
    rtb_TmpSignalConversionAtVeL_c3 =
        Rte_Read_VeLINR_e_AirHeatrWarnPCBOvrTmp_VeLINR_e_AirHeatrWarnPCBOvrTmp
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__jp);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S714>:1' */
    (void)
        Rte_Read_VeLINR_b_AirHeatrWarnPCBOvrTmpTO_VeLINR_b_AirHeatrWarnPCBOvrTmpTO
        (&FA_out_d);

    /* Outputs for Atomic SubSystem: '<S625>/AirHeatrWarnPCBOvrTmp' */
    /* Chart: '<S710>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_AirHeatrWarnPCBOvrTmpTO'
     */
    if (FA_out_d)
    {
        /* Transition: '<S714>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S714>:6' */
            /* Transition: '<S714>:25' */
            /* Call Fsft */
            VeLINR_y_AirHeatrWarnPCBOvrTmp_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S709>/Fsft' */
            /* FunctionCaller: '<S715>/Function Caller' */
            /* Event: '<S714>:39' */
            Rte_Call_FsftHTIR_e_HV_Htr2Resis_PCB_OvrTemp_FsftHTIR_e_HV_Htr2Resis_PCB_OvrTemp
                ();

            /* End of Outputs for SubSystem: '<S709>/Fsft' */
            /* Transition: '<S714>:29' */
        }
        else
        {
            /* Transition: '<S714>:30' */
            /* Call Tmot */
            VeLINR_y_AirHeatrWarnPCBOvrTmp_CallStatus = 3U;

            /* Event: '<S714>:40' */
        }

        /* Transition: '<S714>:36' */
        /* Transition: '<S714>:23' */
    }
    else
    {
        /* Transition: '<S714>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_c3) == 133)
        {
            /* Transition: '<S714>:33' */
            /* Transition: '<S714>:35' */
            /* Call Nothing */
            VeLINR_y_AirHeatrWarnPCBOvrTmp_CallStatus = 4U;

            /* Transition: '<S714>:23' */
        }
        else
        {
            /* Transition: '<S714>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_c3) == 1)
            {
                /* Transition: '<S714>:48' */
                /* Transition: '<S714>:53' */
                FA_out_d = true;

                /* Transition: '<S714>:56' */
            }
            else
            {
                /* Transition: '<S714>:52' */
            }

            /* Transition: '<S714>:37' */
            /* Call Poke */
            VeLINR_y_AirHeatrWarnPCBOvrTmp_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S709>/Poke' */
            /* FunctionCaller: '<S716>/Function Caller' */
            /* Event: '<S714>:38' */
            Rte_Call_PokeHTIR_e_HV_Htr2Resis_PCB_OvrTemp_PokeHTIR_e_HV_Htr2Resis_PCB_OvrTemp
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__jp, FA_out_d);

            /* End of Outputs for SubSystem: '<S709>/Poke' */
        }
    }

    /* End of Chart: '<S710>/Chart' */
    /* End of Outputs for SubSystem: '<S625>/AirHeatrWarnPCBOvrTmp' */
    /* End of Outputs for SubSystem: '<S15>/AirHeatrWarnPCBOvrTmp' */
    /* Transition: '<S714>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_AirHeatrWarnPCBOvrTmp' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AirHtrWarnTmpOvrheatg' incorporates:
     *  Inport: '<Root>/VeLINR_b_AirHtrWarnTmpOvrheatgTO'
     */
#if Rte_SysCon_VrntLR1B_AirHeatrWarnTmpOvrheatg

    /* Outputs for Atomic SubSystem: '<S15>/AirHeatrWarnTmpOvrheatg' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_AirHtrWarnTmpOvrheatg' incorporates:
     *  Inport: '<Root>/VeLINR_e_AirHtrWarnTmpOvrheatg'
     */
    rtb_TmpSignalConversionAtVe_eos =
        Rte_Read_VeLINR_e_AirHtrWarnTmpOvrheatg_VeLINR_e_AirHtrWarnTmpOvrheatg
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__n0);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S722>:1' */
    (void)
        Rte_Read_VeLINR_b_AirHtrWarnTmpOvrheatgTO_VeLINR_b_AirHtrWarnTmpOvrheatgTO
        (&FA_out_fu);

    /* Outputs for Atomic SubSystem: '<S626>/AirHeatrWarnTmpOvrheatg' */
    /* Chart: '<S718>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_AirHtrWarnTmpOvrheatgTO'
     */
    if (FA_out_fu)
    {
        /* Transition: '<S722>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S722>:6' */
            /* Transition: '<S722>:25' */
            /* Call Fsft */
            VeLINR_y_AirHtrWarnTmpOvrheatg_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S717>/Fsft' */
            /* FunctionCaller: '<S723>/Function Caller' */
            /* Event: '<S722>:39' */
            Rte_Call_FsftHTIR_e_HV_Htr2TmpOvrheatg_FsftHTIR_e_HV_Htr2TmpOvrheatg
                ();

            /* End of Outputs for SubSystem: '<S717>/Fsft' */
            /* Transition: '<S722>:29' */
        }
        else
        {
            /* Transition: '<S722>:30' */
            /* Call Tmot */
            VeLINR_y_AirHtrWarnTmpOvrheatg_CallStatus = 3U;

            /* Event: '<S722>:40' */
        }

        /* Transition: '<S722>:36' */
        /* Transition: '<S722>:23' */
    }
    else
    {
        /* Transition: '<S722>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVe_eos) == 133)
        {
            /* Transition: '<S722>:33' */
            /* Transition: '<S722>:35' */
            /* Call Nothing */
            VeLINR_y_AirHtrWarnTmpOvrheatg_CallStatus = 4U;

            /* Transition: '<S722>:23' */
        }
        else
        {
            /* Transition: '<S722>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVe_eos) == 1)
            {
                /* Transition: '<S722>:48' */
                /* Transition: '<S722>:53' */
                FA_out_fu = true;

                /* Transition: '<S722>:56' */
            }
            else
            {
                /* Transition: '<S722>:52' */
            }

            /* Transition: '<S722>:37' */
            /* Call Poke */
            VeLINR_y_AirHtrWarnTmpOvrheatg_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S717>/Poke' */
            /* FunctionCaller: '<S724>/Function Caller' */
            /* Event: '<S722>:38' */
            Rte_Call_PokeHTIR_e_HV_Htr2TmpOvrheatg_PokeHTIR_e_HV_Htr2TmpOvrheatg
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__n0, FA_out_fu);

            /* End of Outputs for SubSystem: '<S717>/Poke' */
        }
    }

    /* End of Chart: '<S718>/Chart' */
    /* End of Outputs for SubSystem: '<S626>/AirHeatrWarnTmpOvrheatg' */
    /* End of Outputs for SubSystem: '<S15>/AirHeatrWarnTmpOvrheatg' */
    /* Transition: '<S722>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_AirHtrWarnTmpOvrheatg' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_AirHtrWarnULoOutOfRng' incorporates:
     *  Inport: '<Root>/VeLINR_b_AirHtrWarnULoOutOfRngTO'
     */
#if Rte_SysCon_VrntLR1B_AirHeatrWarnULoOutOfRng

    /* Outputs for Atomic SubSystem: '<S15>/AirHeatrWarnULoOutOfRng' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_AirHtrWarnULoOutOfRng' incorporates:
     *  Inport: '<Root>/VeLINR_e_AirHtrWarnULoOutOfRng'
     */
    rtb_TmpSignalConversionAtVeL_b5 =
        Rte_Read_VeLINR_e_AirHtrWarnULoOutOfRng_VeLINR_e_AirHtrWarnULoOutOfRng
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_nqe);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S730>:1' */
    (void)
        Rte_Read_VeLINR_b_AirHtrWarnULoOutOfRngTO_VeLINR_b_AirHtrWarnULoOutOfRngTO
        (&FA_out_k);

    /* Outputs for Atomic SubSystem: '<S627>/AirHeatrWarnULoOutOfRng' */
    /* Chart: '<S726>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_AirHtrWarnULoOutOfRngTO'
     */
    if (FA_out_k)
    {
        /* Transition: '<S730>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S730>:6' */
            /* Transition: '<S730>:25' */
            /* Call Fsft */
            VeLINR_y_AirHtrWarnULoOutOfRng_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S725>/Fsft' */
            /* FunctionCaller: '<S731>/Function Caller' */
            /* Event: '<S730>:39' */
            Rte_Call_FsftHTIR_e_HV_Htr2_LV_OutofRng_FsftHTIR_e_HV_Htr2_LV_OutofRng
                ();

            /* End of Outputs for SubSystem: '<S725>/Fsft' */
            /* Transition: '<S730>:29' */
        }
        else
        {
            /* Transition: '<S730>:30' */
            /* Call Tmot */
            VeLINR_y_AirHtrWarnULoOutOfRng_CallStatus = 3U;

            /* Event: '<S730>:40' */
        }

        /* Transition: '<S730>:36' */
        /* Transition: '<S730>:23' */
    }
    else
    {
        /* Transition: '<S730>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_b5) == 133)
        {
            /* Transition: '<S730>:33' */
            /* Transition: '<S730>:35' */
            /* Call Nothing */
            VeLINR_y_AirHtrWarnULoOutOfRng_CallStatus = 4U;

            /* Transition: '<S730>:23' */
        }
        else
        {
            /* Transition: '<S730>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_b5) == 1)
            {
                /* Transition: '<S730>:48' */
                /* Transition: '<S730>:53' */
                FA_out_k = true;

                /* Transition: '<S730>:56' */
            }
            else
            {
                /* Transition: '<S730>:52' */
            }

            /* Transition: '<S730>:37' */
            /* Call Poke */
            VeLINR_y_AirHtrWarnULoOutOfRng_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S725>/Poke' */
            /* FunctionCaller: '<S732>/Function Caller' */
            /* Event: '<S730>:38' */
            Rte_Call_PokeHTIR_e_HV_Htr2_LV_OutofRng_PokeHTIR_e_HV_Htr2_LV_OutofRng
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_nqe, FA_out_k);

            /* End of Outputs for SubSystem: '<S725>/Poke' */
        }
    }

    /* End of Chart: '<S726>/Chart' */
    /* End of Outputs for SubSystem: '<S627>/AirHeatrWarnULoOutOfRng' */
    /* End of Outputs for SubSystem: '<S15>/AirHeatrWarnULoOutOfRng' */
    /* Transition: '<S730>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_AirHtrWarnULoOutOfRng' */

    /* SignalConversion generated from: '<S2>/VeLINR_b_RsErr_EAH' incorporates:
     *  Inport: '<Root>/VeLINR_b_RsErr_EAH_TO'
     */
#if Rte_SysCon_VrntLR1B_RsErrEAH

    /* Outputs for Atomic SubSystem: '<S15>/RsErr_EAH' */
    /* SignalConversion generated from: '<S2>/VeLINR_b_RsErr_EAH' incorporates:
     *  Inport: '<Root>/VeLINR_b_RsErr_EAH'
     */
    rtb_TmpSignalConversionAtVeL_bp =
        Rte_Read_VeLINR_b_RsErr_EAH_VeLINR_b_RsErr_EAH
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_m);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S737>:1' */
    (void)Rte_Read_VeLINR_b_RsErr_EAH_TO_VeLINR_b_RsErr_EAH_TO(&FA_out_in);

    /* Outputs for Atomic SubSystem: '<S628>/RsErr_EAH' */
    /* Chart: '<S734>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_RsErr_EAH_TO'
     */
    if (FA_out_in)
    {
        /* Transition: '<S737>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S737>:6' */
            /* Transition: '<S737>:25' */
            /* Call Fsft */
            VeLINR_y_RsErr_EAH_CallStatus = 2U;

            /* Event: '<S737>:39' */
            /* Transition: '<S737>:29' */
        }
        else
        {
            /* Transition: '<S737>:30' */
            /* Call Tmot */
            VeLINR_y_RsErr_EAH_CallStatus = 3U;

            /* Event: '<S737>:40' */
        }

        /* Transition: '<S737>:36' */
        /* Transition: '<S737>:23' */
    }
    else
    {
        /* Transition: '<S737>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_bp) == 133)
        {
            /* Transition: '<S737>:33' */
            /* Transition: '<S737>:35' */
            /* Call Nothing */
            VeLINR_y_RsErr_EAH_CallStatus = 4U;

            /* Transition: '<S737>:23' */
        }
        else
        {
            /* Transition: '<S737>:46' */
            /* Transition: '<S737>:37' */
            /* Call Poke */
            VeLINR_y_RsErr_EAH_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S733>/Poke' */
            /* FunctionCaller: '<S738>/Function Caller' */
            /* Event: '<S737>:38' */
            Rte_Call_PokeHTIR_b_HV_Htr2_LIN_ResErr_PokeHTIR_b_HV_Htr2_LIN_ResErr
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_b_m);

            /* End of Outputs for SubSystem: '<S733>/Poke' */
        }
    }

    /* End of Chart: '<S734>/Chart' */
    /* End of Outputs for SubSystem: '<S628>/RsErr_EAH' */
    /* End of Outputs for SubSystem: '<S15>/RsErr_EAH' */
    /* Transition: '<S737>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_b_RsErr_EAH' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_LTRBV_CalStat' incorporates:
     *  Inport: '<Root>/VeLINR_b_LTRBV_CalStatTO'
     */
#if Rte_SysCon_VrntLR1B_LTRBVCalStat

    /* Outputs for Atomic SubSystem: '<S18>/LTRBV_CalStat' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_LTRBV_CalStat' incorporates:
     *  Inport: '<Root>/VeLINR_e_LTRBV_CalStat'
     */
    rtb_TmpSignalConversionAtVeL_ah =
        Rte_Read_VeLINR_e_LTRBV_CalStat_VeLINR_e_LTRBV_CalStat
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_L);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S750>:1' */
    (void)Rte_Read_VeLINR_b_LTRBV_CalStatTO_VeLINR_b_LTRBV_CalStatTO(&tmpRead_n);

    /* Outputs for Atomic SubSystem: '<S739>/LTRBV_CalStat' */
    /* Chart: '<S746>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_LTRBV_CalStatTO'
     */
    if (tmpRead_n)
    {
        /* Transition: '<S750>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S750>:6' */
            /* Transition: '<S750>:25' */
            /* Call Fsft */
            VeLINR_y_LTRBV_CalStat_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S745>/Fsft' */
            /* FunctionCaller: '<S751>/Function Caller' */
            /* Event: '<S750>:39' */
            Rte_Call_FsftTAIR_e_LTR_BypsVlv_CalSts_FsftTAIR_e_LTR_BypsVlv_CalSts
                ();

            /* End of Outputs for SubSystem: '<S745>/Fsft' */
            /* Transition: '<S750>:29' */
        }
        else
        {
            /* Transition: '<S750>:30' */
            /* Call Tmot */
            VeLINR_y_LTRBV_CalStat_CallStatus = 3U;

            /* Event: '<S750>:40' */
        }

        /* Transition: '<S750>:36' */
        /* Transition: '<S750>:23' */
    }
    else
    {
        /* Transition: '<S750>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_ah) == 133)
        {
            /* Transition: '<S750>:33' */
            /* Transition: '<S750>:35' */
            /* Call Nothing */
            VeLINR_y_LTRBV_CalStat_CallStatus = 4U;

            /* Transition: '<S750>:23' */
        }
        else
        {
            /* Transition: '<S750>:46' */
            /* Transition: '<S750>:37' */
            /* Call Poke */
            VeLINR_y_LTRBV_CalStat_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S745>/Poke' */
            /* FunctionCaller: '<S752>/Function Caller' incorporates:
             *  Constant: '<S752>/Constant'
             */
            /* Event: '<S750>:38' */
            Rte_Call_PokeTAIR_e_LTR_BypsVlv_CalSts_PokeTAIR_e_LTR_BypsVlv_CalSts
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_e_L, false);

            /* End of Outputs for SubSystem: '<S745>/Poke' */
        }
    }

    /* End of Chart: '<S746>/Chart' */
    /* End of Outputs for SubSystem: '<S739>/LTRBV_CalStat' */
    /* End of Outputs for SubSystem: '<S18>/LTRBV_CalStat' */
    /* Transition: '<S750>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_LTRBV_CalStat' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_LTRBV_ERR' incorporates:
     *  Inport: '<Root>/VeLINR_b_LTRBV_ERR_TO'
     */
#if Rte_SysCon_VrntLR1B_LTRBVERR

    /* Outputs for Atomic SubSystem: '<S18>/LTRBV_ERR' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_LTRBV_ERR' incorporates:
     *  Inport: '<Root>/VeLINR_e_LTRBV_ERR'
     */
    rtb_TmpSignalConversionAtVeL_iy =
        Rte_Read_VeLINR_e_LTRBV_ERR_VeLINR_e_LTRBV_ERR
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__gx);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S758>:1' */
    (void)Rte_Read_VeLINR_b_LTRBV_ERR_TO_VeLINR_b_LTRBV_ERR_TO(&tmpRead_o);

    /* Outputs for Atomic SubSystem: '<S740>/LTRBV_ERR' */
    /* Chart: '<S754>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_LTRBV_ERR_TO'
     */
    if (tmpRead_o)
    {
        /* Transition: '<S758>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S758>:6' */
            /* Transition: '<S758>:25' */
            /* Call Fsft */
            VeLINR_y_LTRBV_ERR_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S753>/Fsft' */
            /* FunctionCaller: '<S759>/Function Caller' */
            /* Event: '<S758>:39' */
            Rte_Call_FsftTAIR_y_LTR_BypsVlv_ErrMsgs_FsftTAIR_y_LTR_BypsVlv_ErrMsgs
                ();

            /* End of Outputs for SubSystem: '<S753>/Fsft' */
            /* Transition: '<S758>:29' */
        }
        else
        {
            /* Transition: '<S758>:30' */
            /* Call Tmot */
            VeLINR_y_LTRBV_ERR_CallStatus = 3U;

            /* Event: '<S758>:40' */
        }

        /* Transition: '<S758>:36' */
        /* Transition: '<S758>:23' */
    }
    else
    {
        /* Transition: '<S758>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_iy) == 133)
        {
            /* Transition: '<S758>:33' */
            /* Transition: '<S758>:35' */
            /* Call Nothing */
            VeLINR_y_LTRBV_ERR_CallStatus = 4U;

            /* Transition: '<S758>:23' */
        }
        else
        {
            /* Transition: '<S758>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_iy) == 1)
            {
                /* Transition: '<S758>:48' */
                /* Transition: '<S758>:53' */
                FA_out_in = true;

                /* Transition: '<S758>:56' */
            }
            else
            {
                /* Transition: '<S758>:52' */
                FA_out_in = false;
            }

            /* Transition: '<S758>:37' */
            /* Call Poke */
            VeLINR_y_LTRBV_ERR_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S753>/Poke' */
            /* FunctionCaller: '<S760>/Function Caller' */
            /* Event: '<S758>:38' */
            Rte_Call_PokeTAIR_y_LTR_BypsVlv_ErrMsgs_PokeTAIR_y_LTR_BypsVlv_ErrMsgs
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__gx, FA_out_in);

            /* End of Outputs for SubSystem: '<S753>/Poke' */
        }
    }

    /* End of Chart: '<S754>/Chart' */
    /* End of Outputs for SubSystem: '<S740>/LTRBV_ERR' */
    /* End of Outputs for SubSystem: '<S18>/LTRBV_ERR' */
    /* Transition: '<S758>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_LTRBV_ERR' */

    /* SignalConversion generated from: '<S2>/VeLINR_U_LTRBV_MotorVolt' incorporates:
     *  Inport: '<Root>/VeLINR_b_LTRBV_MotorVoltTO'
     */
#if Rte_SysCon_VrntLR1B_LTRBVMotorVolt

    /* Outputs for Atomic SubSystem: '<S18>/LTRBV_MotorVolt' */
    /* SignalConversion generated from: '<S2>/VeLINR_U_LTRBV_MotorVolt' incorporates:
     *  Inport: '<Root>/VeLINR_U_LTRBV_MotorVolt'
     */
    rtb_TmpSignalConversionAtVeL_md =
        Rte_Read_VeLINR_U_LTRBV_MotorVolt_VeLINR_U_LTRBV_MotorVolt
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_U_L);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S766>:1' */
    (void)Rte_Read_VeLINR_b_LTRBV_MotorVoltTO_VeLINR_b_LTRBV_MotorVoltTO
        (&FA_out_m);

    /* Outputs for Atomic SubSystem: '<S741>/LTRBV_MotorVolt' */
    /* Chart: '<S762>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_LTRBV_MotorVoltTO'
     */
    if (FA_out_m)
    {
        /* Transition: '<S766>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S766>:6' */
            /* Transition: '<S766>:25' */
            /* Call Fsft */
            VeLINR_y_LTRBV_MotorVolt_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S761>/Fsft' */
            /* FunctionCaller: '<S767>/Function Caller' */
            /* Event: '<S766>:39' */
            Rte_Call_FsftTAIR_U_LTR_BypsVlv_MtrVltg_FsftTAIR_U_LTR_BypsVlv_MtrVltg
                ();

            /* End of Outputs for SubSystem: '<S761>/Fsft' */
            /* Transition: '<S766>:29' */
        }
        else
        {
            /* Transition: '<S766>:30' */
            /* Call Tmot */
            VeLINR_y_LTRBV_MotorVolt_CallStatus = 3U;

            /* Event: '<S766>:40' */
        }

        /* Transition: '<S766>:36' */
        /* Transition: '<S766>:23' */
    }
    else
    {
        /* Transition: '<S766>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_md) == 133)
        {
            /* Transition: '<S766>:33' */
            /* Transition: '<S766>:35' */
            /* Call Nothing */
            VeLINR_y_LTRBV_MotorVolt_CallStatus = 4U;

            /* Transition: '<S766>:23' */
        }
        else
        {
            /* Transition: '<S766>:46' */
            /* Transition: '<S766>:37' */
            /* Call Poke */
            VeLINR_y_LTRBV_MotorVolt_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S761>/Poke' */
            /* FunctionCaller: '<S768>/Function Caller' incorporates:
             *  Constant: '<S768>/Constant'
             */
            /* Event: '<S766>:38' */
            Rte_Call_PokeTAIR_U_LTR_BypsVlv_MtrVltg_PokeTAIR_U_LTR_BypsVlv_MtrVltg
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_U_L, false);

            /* End of Outputs for SubSystem: '<S761>/Poke' */
        }
    }

    /* End of Chart: '<S762>/Chart' */
    /* End of Outputs for SubSystem: '<S741>/LTRBV_MotorVolt' */
    /* End of Outputs for SubSystem: '<S18>/LTRBV_MotorVolt' */
    /* Transition: '<S766>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_U_LTRBV_MotorVolt' */

    /* SignalConversion generated from: '<S2>/VeLINR_Pct_LTRBV_PosAct' incorporates:
     *  Inport: '<Root>/VeLINR_b_LTRBV_PosActTO'
     */
#if Rte_SysCon_VrntLR1B_LTRBVPosAct

    /* Outputs for Atomic SubSystem: '<S18>/LTRBV_PosAct' */
    /* SignalConversion generated from: '<S2>/VeLINR_Pct_LTRBV_PosAct' incorporates:
     *  Inport: '<Root>/VeLINR_Pct_LTRBV_PosAct'
     */
    rtb_TmpSignalConversionAtVeL_iw =
        Rte_Read_VeLINR_Pct_LTRBV_PosAct_VeLINR_Pct_LTRBV_PosAct
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_P_n);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S774>:1' */
    (void)Rte_Read_VeLINR_b_LTRBV_PosActTO_VeLINR_b_LTRBV_PosActTO(&tmpRead_p);

    /* Outputs for Atomic SubSystem: '<S742>/LTRBV_PosAct' */
    /* Chart: '<S770>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_LTRBV_PosActTO'
     */
    if (tmpRead_p)
    {
        /* Transition: '<S774>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S774>:6' */
            /* Transition: '<S774>:25' */
            /* Call Fsft */
            VeLINR_y_LTRBV_PosAct_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S769>/Fsft' */
            /* FunctionCaller: '<S775>/Function Caller' */
            /* Event: '<S774>:39' */
            Rte_Call_FsftTAIR_Pct_LTR_BypsVlv_ActlPstn_FsftTAIR_Pct_LTR_BypsVlv_ActlPstn
                ();

            /* End of Outputs for SubSystem: '<S769>/Fsft' */
            /* Transition: '<S774>:29' */
        }
        else
        {
            /* Transition: '<S774>:30' */
            /* Call Tmot */
            VeLINR_y_LTRBV_PosAct_CallStatus = 3U;

            /* Event: '<S774>:40' */
        }

        /* Transition: '<S774>:36' */
        /* Transition: '<S774>:23' */
    }
    else
    {
        /* Transition: '<S774>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_iw) == 133)
        {
            /* Transition: '<S774>:33' */
            /* Transition: '<S774>:35' */
            /* Call Nothing */
            VeLINR_y_LTRBV_PosAct_CallStatus = 4U;

            /* Transition: '<S774>:23' */
        }
        else
        {
            /* Transition: '<S774>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_iw) == 1)
            {
                /* Transition: '<S774>:48' */
                /* Transition: '<S774>:53' */
                FA_out_m = true;

                /* Transition: '<S774>:56' */
            }
            else
            {
                /* Transition: '<S774>:52' */
                FA_out_m = false;
            }

            /* Transition: '<S774>:37' */
            /* Call Poke */
            VeLINR_y_LTRBV_PosAct_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S769>/Poke' */
            /* FunctionCaller: '<S776>/Function Caller' */
            /* Event: '<S774>:38' */
            Rte_Call_PokeTAIR_Pct_LTR_BypsVlv_ActlPstn_PokeTAIR_Pct_LTR_BypsVlv_ActlPstn
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR_P_n, FA_out_m);

            /* End of Outputs for SubSystem: '<S769>/Poke' */
        }
    }

    /* End of Chart: '<S770>/Chart' */
    /* End of Outputs for SubSystem: '<S742>/LTRBV_PosAct' */
    /* End of Outputs for SubSystem: '<S18>/LTRBV_PosAct' */
    /* Transition: '<S774>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_Pct_LTRBV_PosAct' */

    /* SignalConversion generated from: '<S2>/VeLINR_e_LTRBV_Sts' incorporates:
     *  Inport: '<Root>/VeLINR_b_LTRBV_StsTO'
     */
#if Rte_SysCon_VrntLR1B_LTRBVSts

    /* Outputs for Atomic SubSystem: '<S18>/LTRBV_Sts' */
    /* SignalConversion generated from: '<S2>/VeLINR_e_LTRBV_Sts' incorporates:
     *  Inport: '<Root>/VeLINR_e_LTRBV_Sts'
     */
    rtb_TmpSignalConversionAtVeL_bt =
        Rte_Read_VeLINR_e_LTRBV_Sts_VeLINR_e_LTRBV_Sts
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__pi);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S782>:1' */
    (void)Rte_Read_VeLINR_b_LTRBV_StsTO_VeLINR_b_LTRBV_StsTO(&FA_out_i);

    /* Outputs for Atomic SubSystem: '<S743>/LTRBV_Sts' */
    /* Chart: '<S778>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_LTRBV_StsTO'
     */
    if (FA_out_i)
    {
        /* Transition: '<S782>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S782>:6' */
            /* Transition: '<S782>:25' */
            /* Call Fsft */
            VeLINR_y_LTRBV_Sts_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S777>/Fsft' */
            /* FunctionCaller: '<S783>/Function Caller' */
            /* Event: '<S782>:39' */
            Rte_Call_FsftTAIR_e_LTR_BypsVlv_ErrSts_FsftTAIR_e_LTR_BypsVlv_ErrSts
                ();

            /* End of Outputs for SubSystem: '<S777>/Fsft' */
            /* Transition: '<S782>:29' */
        }
        else
        {
            /* Transition: '<S782>:30' */
            /* Call Tmot */
            VeLINR_y_LTRBV_Sts_CallStatus = 3U;

            /* Event: '<S782>:40' */
        }

        /* Transition: '<S782>:36' */
        /* Transition: '<S782>:23' */
    }
    else
    {
        /* Transition: '<S782>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_bt) == 133)
        {
            /* Transition: '<S782>:33' */
            /* Transition: '<S782>:35' */
            /* Call Nothing */
            VeLINR_y_LTRBV_Sts_CallStatus = 4U;

            /* Transition: '<S782>:23' */
        }
        else
        {
            /* Transition: '<S782>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeL_bt) == 1)
            {
                /* Transition: '<S782>:48' */
                /* Transition: '<S782>:53' */
                FA_out_i = true;

                /* Transition: '<S782>:56' */
            }
            else
            {
                /* Transition: '<S782>:52' */
            }

            /* Transition: '<S782>:37' */
            /* Call Poke */
            VeLINR_y_LTRBV_Sts_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S777>/Poke' */
            /* FunctionCaller: '<S784>/Function Caller' */
            /* Event: '<S782>:38' */
            Rte_Call_PokeTAIR_e_LTR_BypsVlv_ErrSts_PokeTAIR_e_LTR_BypsVlv_ErrSts
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__pi, FA_out_i);

            /* End of Outputs for SubSystem: '<S777>/Poke' */
        }
    }

    /* End of Chart: '<S778>/Chart' */
    /* End of Outputs for SubSystem: '<S743>/LTRBV_Sts' */
    /* End of Outputs for SubSystem: '<S18>/LTRBV_Sts' */
    /* Transition: '<S782>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_e_LTRBV_Sts' */

    /* SignalConversion generated from: '<S2>/VeLINR_b_RsErr_LTRBV' incorporates:
     *  Inport: '<Root>/VeLINR_b_RsErr_LTRBV_TO'
     */
#if Rte_SysCon_VrntLR1B_RsErrLTRBV

    /* Outputs for Atomic SubSystem: '<S18>/RsErr_LTRBV' */
    /* SignalConversion generated from: '<S2>/VeLINR_b_RsErr_LTRBV' incorporates:
     *  Inport: '<Root>/VeLINR_b_RsErr_LTRBV'
     */
    rtb_TmpSignalConversionAtVeL_dy =
        Rte_Read_VeLINR_b_RsErr_LTRBV_VeLINR_b_RsErr_LTRBV
        (&LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__bh);

    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S789>:1' */
    (void)Rte_Read_VeLINR_b_RsErr_LTRBV_TO_VeLINR_b_RsErr_LTRBV_TO(&tmpRead_q);

    /* Outputs for Atomic SubSystem: '<S744>/RsErr_LTRBV' */
    /* Chart: '<S786>/Chart' incorporates:
     *  Inport: '<Root>/VeLINR_b_RsErr_LTRBV_TO'
     */
    if (tmpRead_q)
    {
        /* Transition: '<S789>:4' */
        if (rtb_RelationalOperator)
        {
            /* Transition: '<S789>:6' */
            /* Transition: '<S789>:25' */
            /* Call Fsft */
            VeLINR_y_RsErr_LTRBV_CallStatus = 2U;

            /* Event: '<S789>:39' */
            /* Transition: '<S789>:29' */
        }
        else
        {
            /* Transition: '<S789>:30' */
            /* Call Tmot */
            VeLINR_y_RsErr_LTRBV_CallStatus = 3U;

            /* Event: '<S789>:40' */
        }

        /* Transition: '<S789>:36' */
        /* Transition: '<S789>:23' */
    }
    else
    {
        /* Transition: '<S789>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeL_dy) == 133)
        {
            /* Transition: '<S789>:33' */
            /* Transition: '<S789>:35' */
            /* Call Nothing */
            VeLINR_y_RsErr_LTRBV_CallStatus = 4U;

            /* Transition: '<S789>:23' */
        }
        else
        {
            /* Transition: '<S789>:46' */
            /* Transition: '<S789>:37' */
            /* Call Poke */
            VeLINR_y_RsErr_LTRBV_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S785>/Poke' */
            /* FunctionCaller: '<S790>/Function Caller' */
            /* Event: '<S789>:38' */
            Rte_Call_PokeTAIR_b_LTR_BypsVlv_RsErr_PokeTAIR_b_LTR_BypsVlv_RsErr
                (LR1B_FUNC_ac_B.TmpSignalConversionAtVeLINR__bh);

            /* End of Outputs for SubSystem: '<S785>/Poke' */
        }
    }

    /* End of Chart: '<S786>/Chart' */
    /* End of Outputs for SubSystem: '<S744>/RsErr_LTRBV' */
    /* End of Outputs for SubSystem: '<S18>/RsErr_LTRBV' */
    /* Transition: '<S789>:19' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeLINR_b_RsErr_LTRBV' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
}

/* Model initialize function */
FUNC(void, LR1B_FUNC_CODE) LR1B_FUNC_ac_Init(void)
{
    /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
