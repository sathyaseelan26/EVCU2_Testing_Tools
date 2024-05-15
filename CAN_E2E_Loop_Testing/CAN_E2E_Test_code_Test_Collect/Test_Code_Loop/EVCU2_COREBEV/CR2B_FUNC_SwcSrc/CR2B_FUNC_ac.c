/*
 * File: CR2B_FUNC_ac.c
 *
 * Code generated for Simulink model 'CR2B_FUNC_ac'.
 *
 * Model version                  : 1.66
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Apr  6 09:30:34 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CR2B_FUNC_ac.h"



boolean VeCANR_b_IDCM_Wakeup_HCP_FD11TO_CR2B_FUNC_ac_Test_1;
boolean VeCANR_b_EVSE_ThrshldVoltageTO_CR2B_FUNC_ac_Test_1;
boolean VeCANR_b_EVSE_CHAdeMOProtocolTO_CR2B_FUNC_ac_Test_1;
boolean VeCANR_b_EVSEChargingStmErrorTO_CR2B_FUNC_ac_Test_1;
boolean VeCANR_b_APM2InterlockStsTO_CR2B_FUNC_ac_Test_1;
boolean VeCANR_e_EVSE_CHAdeMOProtocol_CR2B_FUNC_ac_Test_1;
boolean VeCANR_b_EVSE_EnergizingStateTO_CR2B_FUNC_ac_Test_1;



uint8 VeCANR_e_EVSE_CHAdeMOProtocol_CR2B_FUNC_ac_Test_1;
boolean VeCANR_b_IDCM_Wakeup_HCP_FD11_CR2B_FUNC_ac_Test_1;
boolean VeCANR_b_EVSEChargingStmError_CR2B_FUNC_ac_Test_1;
boolean VeCANR_b_EVSE_EnergizingState_CR2B_FUNC_ac_Test_1;
uint8 VeCANR_e_APM2InterlockSts_CR2B_FUNC_ac_Test_1;
float32 VeCANR_U_EVSE_ThrshldVoltage_CR2B_FUNC_ac_Test_1;

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_CR2B_FUNC
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(boolean, CR2B_FUNC_VAR_INIT) KeCR2B_b_CanLocStatusBypEnbl =
    0;                                 /* Referenced by: '<S17>/Calib' */
static volatile CONST(TePWMD_e_CanLocStatus, CR2B_FUNC_VAR_INIT)
    KeCR2B_e_CanLocStatus = CePWMD_e_LOC_Disable;/* Referenced by: '<S18>/Calib' */

#define STOP_SEC_CALIB_UNSPECIFIED_CR2B_FUNC
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CR2B_FUNC
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCANR_y_APM2InterlockSts_CallStatus;/* '<S26>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCANR_y_EVSEChargingStmError_CallStatus;/* '<S901>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCANR_y_EVSE_CHAdeMOProtocol_CallStatus;/* '<S895>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCANR_y_EVSE_EnergizingState_CallStatus;/* '<S907>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCANR_y_EVSE_ThrshldVoltage_CallStatus;/* '<S913>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCANR_y_IDCM_Wakeup_HCP_FD11_CallStatus;/* '<S1039>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_AC_LnHi_CallStatus;/* '<S714>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_AC_LnLow_CallStatus;/* '<S718>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_AC_Present_CallStatus;/* '<S722>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_AC_Side_Curr1_CallStatus;/* '<S726>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_AC_Side_Curr2_CallStatus;/* '<S732>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_AC_Side_Curr3_CallStatus;/* '<S738>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_AC_Side_Volt1_CallStatus;/* '<S744>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_AC_Side_Volt2_CallStatus;/* '<S750>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_AC_Side_Volt3_CallStatus;/* '<S756>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_APMCurrentLimitMd_CallStatus;/* '<S59>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_APMDeratingModeSts_CallStatus;/* '<S63>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_APMDeratingReason_CallStatus;/* '<S71>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_APMUtlPctOfDCDC_CallStatus;/* '<S167>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_APM_CtrlSts_Fbk_CallStatus;/* '<S55>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_APM_DeratingPower_CallStatus;/* '<S67>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_APM_EstPwrLoss_CallStatus;/* '<S75>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_APM_FailureReason_CallStatus;/* '<S81>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_APM_FailureType_CallStatus;/* '<S85>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_APM_HV_V_Fbk_CallStatus;/* '<S95>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_APM_HV_y_Fbk_CallStatus;/* '<S89>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_APM_HvOverVStatus_CallStatus;/* '<S101>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_APM_HvVsetPFdbk_CallStatus;/* '<S105>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_APM_IdcHvSetPFdbk_CallStatus;/* '<S111>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_APM_InputPower_CallStatus;/* '<S117>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_APM_LV_V_Fbk_CallStatus;/* '<S129>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_APM_LV_y_Fbk_CallStatus;/* '<S123>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_APM_OutputPower_CallStatus;/* '<S135>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_APM_PSFB_Temp1_CallStatus;/* '<S141>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_APM_PSFB_Temp2_CallStatus;/* '<S147>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_APM_PowerLimitMode_CallStatus;/* '<S153>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_APM_TempColdPlate_CallStatus;/* '<S157>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_APM_ThermalRunaway_CallStatus;/* '<S163>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BMS_HVLoTempThd_CallStatus;/* '<S198>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BMS_HV_HiTempThd_CallStatus;/* '<S192>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCMCntctrsMTOWrn_CallStatus;/* '<S232>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCMCntctrsSTOWrn_CallStatus;/* '<S236>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCMInterlockSts_CallStatus;/* '<S349>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCMMaxCelVoltAlwd_CallStatus;/* '<S614>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCMMaxPkVoltAllwd_CallStatus;/* '<S620>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCMMinCelVoltAlwd_CallStatus;/* '<S626>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCMMinPkVoltAllwd_CallStatus;/* '<S632>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCM_Cell_VoltAvg_CallStatus;/* '<S580>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCM_Cell_Volt_Max_CallStatus;/* '<S586>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCM_Cell_Volt_Min_CallStatus;/* '<S592>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCM_DCCntctrMTOW_CallStatus;/* '<S355>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCM_DCCntctrSTOW_CallStatus;/* '<S359>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCM_HVBIIS_CallStatus;/* '<S367>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCM_HVBattGFDSts_CallStatus;/* '<S373>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCM_HVCelMxDchImp_CallStatus;/* '<S240>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCM_HVChrgBusSts_CallStatus;/* '<S386>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCM_HVChrgCurProf_CallStatus;/* '<S252>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCM_HVClMinDchImp_CallStatus;/* '<S246>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCM_HVIntrnlVltStrng1_CallStatus;/* '<S422>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCM_HVIntrnlVltStrng2_CallStatus;/* '<S428>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCM_HVNrCelMaxTmp_CallStatus;/* '<S598>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCM_HVNrCelMaxVlt_CallStatus;/* '<S602>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCM_HVNrCelMinTmp_CallStatus;/* '<S606>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCM_HVNrCelMinVlt_CallStatus;/* '<S610>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCM_HVPwrMaxChgLT_CallStatus;/* '<S264>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCM_HVPwrMaxChgMT_CallStatus;/* '<S272>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCM_HVPwrMaxChgST_CallStatus;/* '<S280>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCM_HVPwrMxDchgLT_CallStatus;/* '<S288>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCM_HVPwrMxDchgMT_CallStatus;/* '<S296>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCM_HVPwrMxDchgST_CallStatus;/* '<S304>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCM_HVTracBusVolt_CallStatus;/* '<S507>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCM_HVTracMCS_CallStatus;/* '<S499>/Chart' */

#if Rte_SysCon_VrntCR2B_BPCMHVTracMainContacConfig

static VAR(uint8, CR2B_FUNC_VAR_INIT)
    VeCRDB_y_BPCM_HVTracMainCntacCfg_CallStatus;/* '<S493>/Chart' */

#endif

static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCM_HV_BalngMd_CallStatus;/* '<S363>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCM_HV_BatChrgSts_CallStatus;/* '<S258>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCM_HV_Capacity_CallStatus;/* '<S380>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCM_HV_CurrentString2_CallStatus;/* '<S398>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCM_HV_Current_CallStatus;/* '<S392>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT)
    VeCRDB_y_BPCM_HV_DCFC_IsolatnSts_CallStatus;/* '<S404>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCM_HV_Inlet_Temp_CallStatus;/* '<S410>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCM_HV_IntVolt_CallStatus;/* '<S416>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCM_HV_Outl_Temp_CallStatus;/* '<S434>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCM_HV_SOC_CallStatus;/* '<S440>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCM_HV_SOH_CallStatus;/* '<S448>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCM_HV_SOH_Low_CallStatus;/* '<S452>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCM_HV_Temp_Avg_CallStatus;/* '<S456>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCM_HV_Temp_Max_CallStatus;/* '<S464>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCM_HV_Temp_Min_CallStatus;/* '<S472>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCM_HV_ThermRnway_CallStatus;/* '<S480>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCM_HV_TracBusSts_CallStatus;/* '<S486>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCM_OCVAvgCelVolt_CallStatus;/* '<S638>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCM_OCVMaxCelVolt_CallStatus;/* '<S644>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCM_OCVMinCelVolt_CallStatus;/* '<S650>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCM_PwrLimpHm_CallStatus;/* '<S513>/Chart' */

#if Rte_SysCon_VrntCR2B_BPCMRequestforAuxLoadoff

static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCM_ReqforAuxLoadoff_CallStatus;/* '<S518>/Chart' */

#endif

#if Rte_SysCon_VrntCR2B_BPCMSeriesVoltage

static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BPCM_Series_Voltage_CallStatus;/* '<S525>/Chart' */

#endif

static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BatterySideCurrent_CallStatus;/* '<S762>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_BatterySideVoltage_CallStatus;/* '<S768>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_ChargeCurrent_CallStatus;/* '<S774>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_ChargerFaultStates_CallStatus;/* '<S1277>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_ChrgCurrAvail_CallStatus;/* '<S780>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_ChrgFailSts_CallStatus;/* '<S869>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_ChrgrWldDtctAvail_CallStatus;/* '<S1283>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_ControlPilotSts_CallStatus;/* '<S786>/Chart' */

#if Rte_SysCon_VrntCR2B_DCChargeTypeStatus

static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_DC_Charge_Type_Status_CallStatus;/* '<S532>/Chart' */

#endif

static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_DC_Isoln_Dsbl_Cmd_CallStatus;/* '<S1080>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_DC_TimeOut_CallStatus;/* '<S1086>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_EVCCFailrReason_CallStatus;/* '<S792>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_EVCC_FailureSts_CallStatus;/* '<S1289>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_EVSEOfdACThreePhas_CallStatus;/* '<S942>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_EVSEOfrdEgyTrfTyp_CallStatus;/* '<S1112>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_EVSE_Acptd_Prtcl_CallStatus;/* '<S1090>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_EVSE_ChrgStopCtrl_CallStatus;/* '<S1295>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_EVSE_Error_CallStatus;/* '<S1301>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_EVSE_FreeService_CallStatus;/* '<S1096>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_EVSE_IsolationSts_CallStatus;/* '<S1100>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_EVSE_Notification_CallStatus;/* '<S1106>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_EVSE_NtfcnMaxDly_CallStatus;/* '<S1307>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_EVSE_OfdACSingPhas_CallStatus;/* '<S936>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_EVSE_OfdPymtCntct_CallStatus;/* '<S1118>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_EVSE_OfrdPmtOptn_CallStatus;/* '<S1126>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_EVSE_OfrdPymntEIM_CallStatus;/* '<S1122>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_EVSE_OfrdServ_CallStatus;/* '<S1132>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_EVSE_ServiceId_CallStatus;/* '<S1142>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_EVSE_Srvc2Crtfct_CallStatus;/* '<S1138>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_EVSE_Supportd_DIN_CallStatus;/* '<S1146>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_EVSE_Supprtd_ISO1_CallStatus;/* '<S1150>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_ExtChargerSts_CallStatus;/* '<S1313>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_HEV_OnRq_BPCM_CallStatus;/* '<S204>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_HVBP_BDU_Busbar_Temp_CallStatus;/* '<S538>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_HVBP_Busbar_Temp_CallStatus;/* '<S542>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_HVBatCelVoltHiThrs_CallStatus;/* '<S208>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_HVBatCelVoltLoThrs_CallStatus;/* '<S214>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_HVBatCntctOpnTime_CallStatus;/* '<S546>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_HVBatCntctWeldChk_CallStatus;/* '<S552>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_HVBatLastSlept_CallStatus;/* '<S556>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_HVBatReady_CallStatus;/* '<S560>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_HVCMS_EVSECurLmAch_CallStatus;/* '<S1160>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_HVCMS_EVSECurRglTl_CallStatus;/* '<S1154>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_HVCMS_EVSEID_CallStatus;/* '<S1319>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_HVCMS_EVSEMaxCurLm_CallStatus;/* '<S1164>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_HVCMS_EVSEMaxPwrLm_CallStatus;/* '<S1170>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_HVCMS_EVSEMaxVltLm_CallStatus;/* '<S1176>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_HVCMS_EVSEMinCurLm_CallStatus;/* '<S1182>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_HVCMS_EVSEMinVltLm_CallStatus;/* '<S1188>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_HVCMS_EVSEPkCurRpl_CallStatus;/* '<S1194>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_HVCMS_EVSEProcg_CallStatus;/* '<S1216>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_HVCMS_EVSEPrsntCur_CallStatus;/* '<S1204>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_HVCMS_EVSEPrsntVlt_CallStatus;/* '<S1210>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_HVCMS_EVSEPwrLmAch_CallStatus;/* '<S1200>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_HVCMS_EVSEStsCod_CallStatus;/* '<S1220>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_HVCMS_EVSEVltLmAch_CallStatus;/* '<S1224>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_HVCMS_EgToBDlvd_CallStatus;/* '<S1228>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_HVCMS_ResponseCode_CallStatus;/* '<S1234>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_HVCMS_TxMsgStat_CallStatus;/* '<S1240>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_ImpactHardwireV_CallStatus;/* '<S181>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_ImpactHardwire_CallStatus;/* '<S175>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_InputCurrentAvail_CallStatus;/* '<S798>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_J1772_S2_Sts_CallStatus;/* '<S804>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_J1772_State_CallStatus;/* '<S810>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_OBCInterlockSts_CallStatus;/* '<S816>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_OBCM_CCSts_CallStatus;/* '<S1325>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_OBCM_CP1Sts_CallStatus;/* '<S1329>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_OBCM_CP2Sts_CallStatus;/* '<S1335>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_OBCM_CP3Sts_CallStatus;/* '<S1341>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_OBCM_CSSts_CallStatus;/* '<S1347>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_OBCM_PLCTypeSts_CallStatus;/* '<S1246>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_OBCM_SdpSts_CallStatus;/* '<S823>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_OBCM_SlacSts_CallStatus;/* '<S829>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_OBCM_Timeout_CallStatus;/* '<S1353>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_OBC_Prox_CallStatus;/* '<S873>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_OBC_Temp1_CallStatus;/* '<S660>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_OBC_Temp2_CallStatus;/* '<S668>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_OBC_Temp3_CallStatus;/* '<S676>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_OBC_Temp4_CallStatus;/* '<S682>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_OnboardChargerMode_CallStatus;/* '<S879>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_OnboardChrgrReady_CallStatus;/* '<S885>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_ProximitySts_CallStatus;/* '<S835>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_ReceiptRequired_CallStatus;/* '<S1250>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_Supported_SchemaID_CallStatus;/* '<S847>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_SuprtdProtocolName_CallStatus;/* '<S841>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_SuprtdVerNrMajor_CallStatus;/* '<S853>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_SuprtdVerNrMinor_CallStatus;/* '<S859>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeCRDB_y_TCP_ComTerminated_CallStatus;/* '<S1359>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeSR1B_y_ACOutputCurrent1_CallStatus;/* '<S1376>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeSR1B_y_ACOutputCurrent2_CallStatus;/* '<S1382>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeSR1B_y_ACOutputCurrent3_CallStatus;/* '<S1388>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeSR1B_y_ACOutputVoltage1_CallStatus;/* '<S1394>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeSR1B_y_ACOutputVoltage2_CallStatus;/* '<S1400>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeSR1B_y_ACOutputVoltage3_CallStatus;/* '<S1406>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeSR1B_y_ACOutput_Frequency_CallStatus;/* '<S1412>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeSR1B_y_AcOuputCurrent_CallStatus;/* '<S1468>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeSR1B_y_AcOutputFrequency_CallStatus;/* '<S1474>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeSR1B_y_AcOutputVoltage_CallStatus;/* '<S1480>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeSR1B_y_Available_Power_CallStatus;/* '<S1486>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeSR1B_y_DCInputCurrent_CallStatus;/* '<S1418>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeSR1B_y_DCInputVoltage_CallStatus;/* '<S1424>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeSR1B_y_DischargeFaultStatus_CallStatus;/* '<S1430>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeSR1B_y_EVSEServ1ChargnFD11_CallStatus;/* '<S954>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeSR1B_y_EVSE_Ofd_DC_Extended_CallStatus;/* '<S948>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeSR1B_y_EVSE_Service1_FreeFD11_CallStatus;/* '<S960>/Chart' */

#if Rte_SysCon_VrntCR2B_IDCMGFCIFaultStatus

static VAR(uint8, CR2B_FUNC_VAR_INIT) VeSR1B_y_IDCM_GFCI_Fault_Status_CallStatus;/* '<S1437>/Chart' */

#endif

static VAR(uint8, CR2B_FUNC_VAR_INIT) VeSR1B_y_ISO15118EVSETiStFD11_CallStatus;/* '<S966>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeSR1B_y_ISO15118NtfcnMxDlyFD11_CallStatus;/* '<S978>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeSR1B_y_ISO15118SAScdlTlIDFD11_CallStatus;/* '<S990>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeSR1B_y_ISO15118VrsnNmMajrFD11_CallStatus;/* '<S1020>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeSR1B_y_ISO15118VrsnNmMinrFD11_CallStatus;/* '<S1026>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeSR1B_y_ISO15118_MsgRespFD11_CallStatus;/* '<S972>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeSR1B_y_ISO15118_RespCodFD11_CallStatus;/* '<S984>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeSR1B_y_ISO15118_SchemaID_FD11_CallStatus;/* '<S996>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeSR1B_y_ISO15118_ServiceIDFD11_CallStatus;/* '<S1002>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeSR1B_y_ISO15118_TLSStatusFD11_CallStatus;/* '<S1014>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeSR1B_y_ISO15118_TLSoffrdFD11_CallStatus;/* '<S1008>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeSR1B_y_V2X_Derate_Reason_CallStatus;/* '<S1492>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeSR1B_y_V2X_Derate_Status_CallStatus;/* '<S1498>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeSR1B_y_V2X_EVSE_Service5_Free_CallStatus;/* '<S1032>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeSR1B_y_V2X_EVSE_Service_5_V2H_CallStatus;/* '<S1256>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeSR1B_y_V2X_FailSts_CallStatus;/* '<S1504>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeSR1B_y_V2X_FaultRsn_CallStatus;/* '<S1510>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeSR1B_y_V2X_Frequency_CallStatus;/* '<S1443>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeSR1B_y_V2X_InputCurrent_CallStatus;/* '<S1516>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeSR1B_y_V2X_InputVoltage_CallStatus;/* '<S1522>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeSR1B_y_V2X_InterlockSts_CallStatus;/* '<S1528>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeSR1B_y_V2X_LV_Feed_CallStatus;/* '<S1534>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeSR1B_y_V2X_Modefeedback_CallStatus;/* '<S1540>/Chart' */
static VAR(uint8, CR2B_FUNC_VAR_INIT) VeSR1B_y_V2X_Status_CallStatus;/* '<S1449>/Chart' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CR2B_FUNC
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CR2B_FUNC
#include "MemMap.h"

VAR(B_CR2B_FUNC_ac_T, CR2B_FUNC_VAR_INIT) CR2B_FUNC_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CR2B_FUNC
#include "MemMap.h"

/* Model step function for TID1 */
FUNC(void, CR2B_FUNC_CODE) CR2B_FUNC_MedTEB(void) /* Explicit Task: MedTEB */
{
    /* local block i/o variables */
    uint8 rtb_TmpSignalConversionAtVeCANR;
    uint8 rtb_TmpSignalConversionAtVeCRDB;
    uint8 rtb_TmpSignalConversionAtVeCR_p;
    uint8 rtb_TmpSignalConversionAtVeCR_e;
    uint8 rtb_TmpSignalConversionAtVeCR_i;
    uint8 rtb_TmpSignalConversionAtVeCR_b;
    uint8 rtb_TmpSignalConversionAtVeC_bx;
    uint8 rtb_TmpSignalConversionAtVeCR_h;
    uint8 rtb_TmpSignalConversionAtVeCR_f;
    uint8 rtb_TmpSignalConversionAtVeC_io;
    uint8 rtb_TmpSignalConversionAtVeC_pe;
    uint8 rtb_TmpSignalConversionAtVeC_h0;
    uint8 rtb_TmpSignalConversionAtVeCR_j;
    uint8 rtb_TmpSignalConversionAtVeC_hz;
    uint8 rtb_TmpSignalConversionAtVeC_hi;
    uint8 rtb_TmpSignalConversionAtVeC_hp;
    uint8 rtb_TmpSignalConversionAtVeC_hd;
    uint8 rtb_TmpSignalConversionAtVeCR_n;
    uint8 rtb_TmpSignalConversionAtVeCR_g;
    uint8 rtb_TmpSignalConversionAtVeC_jp;
    uint8 rtb_TmpSignalConversionAtVeC_fx;
    uint8 rtb_TmpSignalConversionAtVeCR_l;
    uint8 rtb_TmpSignalConversionAtVeCR_a;
    uint8 rtb_TmpSignalConversionAtVeC_ns;
    uint8 rtb_TmpSignalConversionAtVeCR_k;
    uint8 rtb_TmpSignalConversionAtVeC_jw;
    uint8 rtb_TmpSignalConversionAtVeCR_d;
    uint8 rtb_TmpSignalConversionAtVe_h02;
    uint8 rtb_TmpSignalConversionAtVeCR_o;
    uint8 rtb_TmpSignalConversionAtVeC_hv;
    uint8 rtb_TmpSignalConversionAtVeC_f0;
    uint8 rtb_TmpSignalConversionAtVeC_ba;
    uint8 rtb_TmpSignalConversionAtVeC_ei;
    uint8 rtb_TmpSignalConversionAtVeCR_c;
    uint8 rtb_TmpSignalConversionAtVeC_dm;
    uint8 rtb_TmpSignalConversionAtVeC_od;
    uint8 rtb_TmpSignalConversionAtVeC_o4;
    uint8 rtb_TmpSignalConversionAtVeC_ji;
    uint8 rtb_TmpSignalConversionAtVeC_ip;
    uint8 rtb_TmpSignalConversionAtVeC_gx;
    uint8 rtb_TmpSignalConversionAtVeC_ol;
    uint8 rtb_TmpSignalConversionAtVeC_lk;
    uint8 rtb_TmpSignalConversionAtVeC_gj;
    uint8 rtb_TmpSignalConversionAtVeC_dy;
    uint8 rtb_TmpSignalConversionAtVeC_k1;
    uint8 rtb_TmpSignalConversionAtVeC_ej;
    uint8 rtb_TmpSignalConversionAtVeC_iv;
    uint8 rtb_TmpSignalConversionAtVeC_i3;
    uint8 rtb_TmpSignalConversionAtVeC_lj;
    uint8 rtb_TmpSignalConversionAtVeC_is;
    uint8 rtb_TmpSignalConversionAtVeC_c2;
    uint8 rtb_TmpSignalConversionAtVeC_hc;
    uint8 rtb_TmpSignalConversionAtVeC_h3;
    uint8 rtb_TmpSignalConversionAtVeC_di;
    uint8 rtb_TmpSignalConversionAtVeCR_m;
    uint8 rtb_TmpSignalConversionAtVeC_et;
    uint8 rtb_TmpSignalConversionAtVe_hdb;
    uint8 rtb_TmpSignalConversionAtVeC_ng;
    uint8 rtb_TmpSignalConversionAtVeC_kt;
    uint8 rtb_TmpSignalConversionAtVeC_de;
    uint8 rtb_TmpSignalConversionAtVeC_p1;
    uint8 rtb_TmpSignalConversionAtVe_i3k;
    uint8 rtb_TmpSignalConversionAtVeC_cy;
    uint8 rtb_TmpSignalConversionAtVe_dml;
    uint8 rtb_TmpSignalConversionAtVeC_b0;
    uint8 rtb_TmpSignalConversionAtVeC_nz;
    uint8 rtb_TmpSignalConversionAtVeC_lv;

#if Rte_SysCon_VrntCR2B_BPCMHVTracMainContacConfig

    uint8 rtb_TmpSignalConversionAtVeC_ke;

#endif

    uint8 rtb_TmpSignalConversionAtVeC_by;
    uint8 rtb_TmpSignalConversionAtVeC_cc;
    uint8 rtb_TmpSignalConversionAtVeC_pj;

#if Rte_SysCon_VrntCR2B_BPCMRequestforAuxLoadoff

    uint8 rtb_TmpSignalConversionAtVeC_ok;

#endif

#if Rte_SysCon_VrntCR2B_BPCMSeriesVoltage

    uint8 rtb_TmpSignalConversionAtVeC_m4;

#endif

#if Rte_SysCon_VrntCR2B_DCChargeTypeStatus

    uint8 rtb_TmpSignalConversionAtVeC_ln;

#endif

    uint8 rtb_TmpSignalConversionAtVeC_co;
    uint8 rtb_TmpSignalConversionAtVe_bym;
    uint8 rtb_TmpSignalConversionAtVeC_ew;
    uint8 rtb_TmpSignalConversionAtVeC_d1;
    uint8 rtb_TmpSignalConversionAtVeC_jm;
    uint8 rtb_TmpSignalConversionAtVeC_iy;
    uint8 rtb_TmpSignalConversionAtVeC_ar;
    uint8 rtb_TmpSignalConversionAtVeC_dh;
    uint8 rtb_TmpSignalConversionAtVeC_mz;
    uint8 rtb_TmpSignalConversionAtVeC_kx;
    uint8 rtb_TmpSignalConversionAtVeC_kk;
    uint8 rtb_TmpSignalConversionAtVeC_iq;
    uint8 rtb_TmpSignalConversionAtVeC_ca;
    uint8 rtb_TmpSignalConversionAtVe_gjj;
    uint8 rtb_TmpSignalConversionAtVeC_gk;
    uint8 rtb_TmpSignalConversionAtVeC_je;
    uint8 rtb_TmpSignalConversionAtVeC_bk;
    uint8 rtb_TmpSignalConversionAtVeC_hb;
    uint8 rtb_TmpSignalConversionAtVeC_fv;
    uint8 rtb_TmpSignalConversionAtVeC_gl;
    uint8 rtb_TmpSignalConversionAtVeC_fp;
    uint8 rtb_TmpSignalConversionAtVeC_ic;
    uint8 rtb_TmpSignalConversionAtVe_kty;
    uint8 rtb_TmpSignalConversionAtVeC_gv;
    uint8 rtb_TmpSignalConversionAtVe_ccr;
    uint8 rtb_TmpSignalConversionAtVe_pex;
    uint8 rtb_TmpSignalConversionAtVe_ol2;
    uint8 rtb_TmpSignalConversionAtVeC_bi;
    uint8 rtb_TmpSignalConversionAtVe_cod;
    uint8 rtb_TmpSignalConversionAtVe_ljc;
    uint8 rtb_TmpSignalConversionAtVeC_ax;
    uint8 rtb_TmpSignalConversionAtVeC_ck;
    uint8 rtb_TmpSignalConversionAtVeC_k4;
    uint8 rtb_TmpSignalConversionAtVeC_cw;
    uint8 rtb_TmpSignalConversionAtVeC_p3;
    uint8 rtb_TmpSignalConversionAtVe_kxc;
    uint8 rtb_TmpSignalConversionAtVe_gkt;
    uint8 rtb_TmpSignalConversionAtVe_pjh;
    uint8 rtb_TmpSignalConversionAtVe_jpg;
    uint8 rtb_TmpSignalConversionAtVeC_mx;
    uint8 rtb_TmpSignalConversionAtVeC_j5;
    uint8 rtb_TmpSignalConversionAtVeC_dv;
    uint8 rtb_TmpSignalConversionAtVeC_it;
    uint8 rtb_TmpSignalConversionAtVeC_pw;
    uint8 rtb_TmpSignalConversionAtVe_jpp;
    uint8 rtb_TmpSignalConversionAtVeC_ey;
    uint8 rtb_TmpSignalConversionAtVe_gjp;
    uint8 rtb_TmpSignalConversionAtVe_p3g;
    uint8 rtb_TmpSignalConversionAtVe_dma;
    uint8 rtb_TmpSignalConversionAtVe_fvf;
    uint8 rtb_TmpSignalConversionAtVeC_i5;
    uint8 rtb_TmpSignalConversionAtVeC_cu;
    uint8 rtb_TmpSignalConversionAtVeC_dg;
    uint8 rtb_TmpSignalConversionAtVeC_nq;
    uint8 rtb_TmpSignalConversionAtVeCA_a;
    uint8 rtb_TmpSignalConversionAtVeCA_b;
    uint8 rtb_TmpSignalConversionAtVeCA_m;
    uint8 rtb_TmpSignalConversionAtVeCA_p;
    uint8 rtb_TmpSignalConversionAtVeC_ik;
    uint8 rtb_TmpSignalConversionAtVe_p3d;
    uint8 rtb_TmpSignalConversionAtVeSR1B;
    uint8 rtb_TmpSignalConversionAtVeSR_b;
    uint8 rtb_TmpSignalConversionAtVeSR_j;
    uint8 rtb_TmpSignalConversionAtVeSR_o;
    uint8 rtb_TmpSignalConversionAtVeSR_m;
    uint8 rtb_TmpSignalConversionAtVeSR_h;
    uint8 rtb_TmpSignalConversionAtVeSR_c;
    uint8 rtb_TmpSignalConversionAtVeS_hm;
    uint8 rtb_TmpSignalConversionAtVeS_hw;
    uint8 rtb_TmpSignalConversionAtVeS_hq;
    uint8 rtb_TmpSignalConversionAtVeSR_n;
    uint8 rtb_TmpSignalConversionAtVeSR_a;
    uint8 rtb_TmpSignalConversionAtVeSR_e;
    uint8 rtb_TmpSignalConversionAtVeSR_d;
    uint8 rtb_TmpSignalConversionAtVeSR_f;
    uint8 rtb_TmpSignalConversionAtVeCA_e;
    uint8 rtb_TmpSignalConversionAtVeC_l1;
    uint8 rtb_TmpSignalConversionAtVeC_cl;
    uint8 rtb_TmpSignalConversionAtVeC_k0;
    uint8 rtb_TmpSignalConversionAtVeC_bn;
    uint8 rtb_TmpSignalConversionAtVeC_lt;
    uint8 rtb_TmpSignalConversionAtVeC_c4;
    uint8 rtb_TmpSignalConversionAtVeC_ct;
    uint8 rtb_TmpSignalConversionAtVeC_ne;
    uint8 rtb_TmpSignalConversionAtVe_kk0;
    uint8 rtb_TmpSignalConversionAtVeC_jc;
    uint8 rtb_TmpSignalConversionAtVeC_i2;
    uint8 rtb_TmpSignalConversionAtVeC_ay;
    uint8 rtb_TmpSignalConversionAtVeC_nu;
    uint8 rtb_TmpSignalConversionAtVeC_ld;
    uint8 rtb_TmpSignalConversionAtVeC_jb;
    uint8 rtb_TmpSignalConversionAtVeC_ae;
    uint8 rtb_TmpSignalConversionAtVeC_hm;
    uint8 rtb_TmpSignalConversionAtVe_mzk;
    uint8 rtb_TmpSignalConversionAtVeC_fo;
    uint8 rtb_TmpSignalConversionAtVeC_d3;
    uint8 rtb_TmpSignalConversionAtVeC_of;
    uint8 rtb_TmpSignalConversionAtVe_k4f;
    uint8 rtb_TmpSignalConversionAtVeC_ig;
    uint8 rtb_TmpSignalConversionAtVeC_ab;
    uint8 rtb_TmpSignalConversionAtVeC_m1;
    uint8 rtb_TmpSignalConversionAtVeC_hh;
    uint8 rtb_TmpSignalConversionAtVeC_ec;
    uint8 rtb_TmpSignalConversionAtVeC_jf;
    uint8 rtb_TmpSignalConversionAtVeC_fn;
    uint8 rtb_TmpSignalConversionAtVeC_lu;
    uint8 rtb_TmpSignalConversionAtVeC_n3;
    uint8 rtb_TmpSignalConversionAtVeC_mu;
    uint8 rtb_TmpSignalConversionAtVeC_dz;
    uint8 rtb_TmpSignalConversionAtVeC_ph;
    uint8 rtb_TmpSignalConversionAtVeS_cj;
    uint8 rtb_TmpSignalConversionAtVeC_ho;
    uint8 rtb_TmpSignalConversionAtVeC_ds;
    uint8 rtb_TmpSignalConversionAtVeC_nc;
    uint8 rtb_TmpSignalConversionAtVeC_oh;
    uint8 rtb_TmpSignalConversionAtVe_iqi;
    uint8 rtb_TmpSignalConversionAtVeC_na;
    uint8 rtb_TmpSignalConversionAtVeC_dn;
    uint8 rtb_TmpSignalConversionAtVeC_hj;
    uint8 rtb_TmpSignalConversionAtVeC_no;
    uint8 rtb_TmpSignalConversionAtVeC_pg;
    uint8 rtb_TmpSignalConversionAtVe_ewr;
    uint8 rtb_TmpSignalConversionAtVeC_h5;
    uint8 rtb_TmpSignalConversionAtVeC_oq;
    uint8 rtb_TmpSignalConversionAtVeC_lh;
    uint8 rtb_TmpSignalConversionAtVeC_e5;
    uint8 rtb_TmpSignalConversionAtVeSR_g;
    uint8 rtb_TmpSignalConversionAtVeS_dw;
    uint8 rtb_TmpSignalConversionAtVeS_jn;
    uint8 rtb_TmpSignalConversionAtVeSR_p;
    uint8 rtb_TmpSignalConversionAtVeS_n3;
    uint8 rtb_TmpSignalConversionAtVeS_ag;
    uint8 rtb_TmpSignalConversionAtVeSR_i;
    uint8 rtb_TmpSignalConversionAtVeS_fs;
    uint8 rtb_TmpSignalConversionAtVeS_ab;
    uint8 rtb_TmpSignalConversionAtVeS_fo;

#if Rte_SysCon_VrntCR2B_IDCMGFCIFaultStatus

    uint8 rtb_TmpSignalConversionAtVeS_gw;

#endif

    uint8 rtb_TmpSignalConversionAtVeS_dr;
    uint8 rtb_TmpSignalConversionAtVeS_ia;
    uint8 rtb_TmpSignalConversionAtVeSR_l;
    uint8 rtb_TmpSignalConversionAtVeS_o5;
    uint8 rtb_TmpSignalConversionAtVeS_po;
    uint8 rtb_TmpSignalConversionAtVeSR_k;
    uint8 rtb_TmpSignalConversionAtVeS_mq;
    uint8 rtb_TmpSignalConversionAtVeS_hj;
    uint8 rtb_TmpSignalConversionAtVeS_dy;
    uint8 rtb_TmpSignalConversionAtVeS_iy;
    uint8 rtb_TmpSignalConversionAtVeS_in;
    uint8 rtb_TmpSignalConversionAtVeS_l1;
    uint8 rtb_TmpSignalConversionAtVeS_pn;
    uint8 rtb_TmpSignalConversionAtVeS_oq;
    uint8 rtb_TmpSignalConversionAtVeS_jg;
    uint8 tmpRead;
    uint8 tmpRead_0;
    uint8 tmpRead_1;
    uint8 tmpRead_10;
    uint8 tmpRead_11;
    uint8 tmpRead_12;
    uint8 tmpRead_13;
    uint8 tmpRead_14;
    uint8 tmpRead_15;
    uint8 tmpRead_16;
    uint8 tmpRead_17;
    uint8 tmpRead_18;
    uint8 tmpRead_19;
    uint8 tmpRead_1a;
    uint8 tmpRead_1b;
    uint8 tmpRead_1c;
    uint8 tmpRead_1d;
    uint8 tmpRead_1e;
    uint8 tmpRead_1f;
    uint8 tmpRead_1g;
    uint8 tmpRead_1h;
    uint8 tmpRead_1i;
    uint8 tmpRead_1j;
    uint8 tmpRead_1k;
    uint8 tmpRead_1l;
    uint8 tmpRead_1m;
    uint8 tmpRead_1n;
    uint8 tmpRead_1o;
    uint8 tmpRead_1p;
    uint8 tmpRead_1q;
    uint8 tmpRead_1r;
    uint8 tmpRead_1s;
    uint8 tmpRead_1t;
    uint8 tmpRead_1u;
    uint8 tmpRead_1v;
    uint8 tmpRead_1w;
    uint8 tmpRead_1x;
    uint8 tmpRead_1y;
    uint8 tmpRead_2;
    uint8 tmpRead_3;
    uint8 tmpRead_4;
    uint8 tmpRead_5;
    uint8 tmpRead_6;
    uint8 tmpRead_7;
    uint8 tmpRead_8;
    uint8 tmpRead_9;
    uint8 tmpRead_a;
    uint8 tmpRead_c;
    uint8 tmpRead_d;
    uint8 tmpRead_e;
    uint8 tmpRead_f;
    uint8 tmpRead_g;
    uint8 tmpRead_h;
    uint8 tmpRead_i;
    uint8 tmpRead_j;
    uint8 tmpRead_k;
    uint8 tmpRead_l;
    uint8 tmpRead_m;
    uint8 tmpRead_n;
    uint8 tmpRead_o;
    uint8 tmpRead_p;
    uint8 tmpRead_q;
    uint8 tmpRead_r;
    uint8 tmpRead_s;
    uint8 tmpRead_t;
    uint8 tmpRead_u;
    uint8 tmpRead_v;
    uint8 tmpRead_w;
    uint8 tmpRead_x;
    uint8 tmpRead_y;
    uint8 tmpRead_z;
    boolean tmpRead_b;

#if Rte_SysCon_VrntCR2B_BPCMHVTracMainContacConfig

    uint8 tmpRead_1z;

#endif

    uint8 tmpRead_20;
    uint8 tmpRead_21;
    uint8 tmpRead_22;

#if Rte_SysCon_VrntCR2B_BPCMRequestforAuxLoadoff

    uint8 tmpRead_23;

#endif

#if Rte_SysCon_VrntCR2B_BPCMSeriesVoltage

    uint8 tmpRead_24;

#endif

#if Rte_SysCon_VrntCR2B_DCChargeTypeStatus

    uint8 tmpRead_25;

#endif

    uint8 tmpRead_26;
    uint8 tmpRead_27;
    uint8 tmpRead_28;
    uint8 tmpRead_29;
    uint8 tmpRead_2a;
    uint8 tmpRead_2b;
    uint8 tmpRead_2c;
    uint8 tmpRead_2d;
    uint8 tmpRead_2e;
    uint8 tmpRead_2f;
    uint8 tmpRead_2g;
    uint8 tmpRead_2h;
    uint8 tmpRead_2i;
    uint8 tmpRead_2j;
    uint8 tmpRead_2k;
    uint8 tmpRead_2l;
    uint8 tmpRead_2m;
    uint8 tmpRead_2n;
    uint8 tmpRead_2o;
    uint8 tmpRead_2p;
    uint8 tmpRead_2q;
    uint8 tmpRead_2r;
    uint8 tmpRead_2s;
    uint8 tmpRead_2t;
    uint8 tmpRead_2u;
    uint8 tmpRead_2v;
    uint8 tmpRead_2w;
    uint8 tmpRead_2x;
    uint8 tmpRead_2y;
    uint8 tmpRead_2z;
    uint8 tmpRead_30;
    uint8 tmpRead_31;
    uint8 tmpRead_32;
    uint8 tmpRead_33;
    uint8 tmpRead_34;
    uint8 tmpRead_35;
    uint8 tmpRead_36;
    uint8 tmpRead_37;
    uint8 tmpRead_38;
    uint8 tmpRead_39;
    uint8 tmpRead_3a;
    uint8 tmpRead_3b;
    uint8 tmpRead_3c;
    uint8 tmpRead_3d;
    uint8 tmpRead_3e;
    uint8 tmpRead_3f;
    uint8 tmpRead_3g;
    uint8 tmpRead_3h;
    uint8 tmpRead_3i;
    uint8 tmpRead_3j;
    uint8 tmpRead_3k;
    uint8 tmpRead_3l;
    uint8 tmpRead_3m;
    uint8 tmpRead_3n;
    uint8 tmpRead_3o;
    uint8 tmpRead_3p;
    uint8 tmpRead_3q;
    uint8 tmpRead_3r;
    uint8 tmpRead_3s;
    uint8 tmpRead_3t;
    uint8 tmpRead_3u;
    uint8 tmpRead_3v;
    uint8 tmpRead_3w;
    uint8 tmpRead_3x;
    uint8 tmpRead_3y;
    uint8 tmpRead_3z;
    uint8 tmpRead_40;
    uint8 tmpRead_41;
    uint8 tmpRead_42;
    uint8 tmpRead_43;
    uint8 tmpRead_44;
    uint8 tmpRead_45;
    uint8 tmpRead_46;
    uint8 tmpRead_47;
    uint8 tmpRead_48;
    uint8 tmpRead_49;
    uint8 tmpRead_4a;
    uint8 tmpRead_4b;
    uint8 tmpRead_4c;
    uint8 tmpRead_4d;
    uint8 tmpRead_4e;
    uint8 tmpRead_4f;
    uint8 tmpRead_4g;
    uint8 tmpRead_4h;
    uint8 tmpRead_4i;
    uint8 tmpRead_4j;
    uint8 tmpRead_4k;
    uint8 tmpRead_4l;
    uint8 tmpRead_4m;
    uint8 tmpRead_4n;
    uint8 tmpRead_4o;
    uint8 tmpRead_4p;
    uint8 tmpRead_4q;
    uint8 tmpRead_4r;
    uint8 tmpRead_4s;
    uint8 tmpRead_4t;
    uint8 tmpRead_4u;
    uint8 tmpRead_4v;
    uint8 tmpRead_4w;
    uint8 tmpRead_4x;
    uint8 tmpRead_4y;
    uint8 tmpRead_4z;
    uint8 tmpRead_50;
    uint8 tmpRead_51;
    uint8 tmpRead_52;
    uint8 tmpRead_53;
    uint8 tmpRead_54;
    uint8 tmpRead_55;
    uint8 tmpRead_56;
    uint8 tmpRead_57;
    uint8 tmpRead_58;
    uint8 tmpRead_59;
    uint8 tmpRead_5a;
    uint8 tmpRead_5b;
    uint8 tmpRead_5c;
    uint8 tmpRead_5d;
    uint8 tmpRead_5e;
    uint8 tmpRead_5f;
    uint8 tmpRead_5g;
    uint8 tmpRead_5h;
    uint8 tmpRead_5i;
    uint8 tmpRead_5j;
    uint8 tmpRead_5k;
    uint8 tmpRead_5l;
    uint8 tmpRead_5m;
    uint8 tmpRead_5n;
    uint8 tmpRead_5o;

#if Rte_SysCon_VrntCR2B_IDCMGFCIFaultStatus

    uint8 tmpRead_5p;

#endif

    float32 tmp;
    TePWMD_e_CanLocStatus rtb_Switch;
    uint8 tmpRead_5q;
    uint8 tmpRead_5r;
    uint8 tmpRead_5s;
    uint8 tmpRead_5t;
    uint8 tmpRead_5u;
    uint8 tmpRead_5v;
    uint8 tmpRead_5w;
    uint8 tmpRead_5x;
    uint8 tmpRead_5y;
    uint8 tmpRead_5z;
    uint8 tmpRead_60;
    uint8 tmpRead_61;
    uint8 tmpRead_62;
    uint8 tmpRead_63;
    uint8 tmpRead_64;
    boolean FA_out_hg;
    boolean FA_out_il;
    boolean FA_out_j3;
    boolean FA_out_lz;
    boolean FA_out_n0;
    boolean guard1 = false;
    boolean rtb_RelationalOperator1;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* SignalConversion generated from: '<S2>/VeCANR_e_APM2InterlockSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeCANR_e_APM2InterlockSts_ErrSts'
     */
    rtb_TmpSignalConversionAtVeCANR =
        Rte_Read_VeCANR_e_APM2InterlockSts_VeCANR_e_APM2InterlockSts
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCANR_e_A);

VeCANR_e_APM2InterlockSts_CR2B_FUNC_ac_Test_1 = CR2B_FUNC_ac_B.TmpSignalConversionAtVeCANR_e_A;

    /* Switch: '<S24>/Switch' incorporates:
     *  Constant: '<S17>/Calib'
     *  Inport: '<Root>/VeCANR_e_CanLocEnblStatus'
     */
    if (KeCR2B_b_CanLocStatusBypEnbl)
    {
        /* Switch: '<S24>/Switch' incorporates:
         *  Constant: '<S18>/Calib'
         */
        rtb_Switch = KeCR2B_e_CanLocStatus;
    }
    else
    {
        (void)Rte_Read_VeCANR_e_CanLocEnblStatus_VeCANR_e_CanLocEnblStatus
            (&tmpRead);

        /* Switch: '<S24>/Switch' incorporates:
         *  DataTypeConversion: '<S2>/Data Type Conversion'
         *  Inport: '<Root>/VeCANR_e_CanLocEnblStatus'
         */
        rtb_Switch = (TePWMD_e_CanLocStatus)tmpRead;
    }

    /* End of Switch: '<S24>/Switch' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCANR_b_APM2InterlockStsTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S29>:1' */
    (void)Rte_Read_VeCANR_b_APM2InterlockStsTO_VeCANR_b_APM2InterlockStsTO
        (&rtb_RelationalOperator1);

VeCANR_b_APM2InterlockStsTO_CR2B_FUNC_ac_Test_1 = rtb_RelationalOperator1;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S26>/Chart' incorporates:
     *  Constant: '<S12>/Constant'
     *  RelationalOperator: '<S2>/Relational Operator'
     *  Switch: '<S24>/Switch'
     */
    if (rtb_RelationalOperator1)
    {
        /* Transition: '<S29>:4' */
        if (((uint32)rtb_Switch) == CePWMD_e_LOC_Enable)
        {
            /* Transition: '<S29>:6' */
            /* Transition: '<S29>:25' */
            /* Call Fsft */
            VeCANR_y_APM2InterlockSts_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S25>/Fsft' */
            /* FunctionCaller: '<S30>/Function Caller' */
            /* Event: '<S29>:39' */
            Rte_Call_FsftIDCR_e_APM2InterlockSts_FsftIDCR_e_APM2InterlockSts();

            /* End of Outputs for SubSystem: '<S25>/Fsft' */
            /* Transition: '<S29>:29' */
        }
        else
        {
            /* Transition: '<S29>:30' */
            /* Call Tmot */
            VeCANR_y_APM2InterlockSts_CallStatus = 3U;

            /* Event: '<S29>:40' */
        }

        /* Transition: '<S29>:36' */
        /* Transition: '<S29>:23' */
    }
    else
    {
        /* Transition: '<S29>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeCANR) == 133)
        {
            /* Transition: '<S29>:33' */
            /* Transition: '<S29>:35' */
            /* Call Nothing */
            VeCANR_y_APM2InterlockSts_CallStatus = 4U;

            /* Transition: '<S29>:23' */
        }
        else
        {
            /* Transition: '<S29>:46' */
            /* Transition: '<S29>:37' */
            /* Call Poke */
            VeCANR_y_APM2InterlockSts_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S25>/Poke' */
            /* FunctionCaller: '<S31>/Function Caller' incorporates:
             *  Constant: '<S31>/Constant'
             */
            /* Event: '<S29>:38' */
            Rte_Call_PokeIDCR_e_APM2InterlockSts_PokeIDCR_e_APM2InterlockSts
                (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCANR_e_A, false);

            /* End of Outputs for SubSystem: '<S25>/Poke' */
        }
    }

    /* End of Chart: '<S26>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_APM_CtrlSts_Fbk_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_APM_CtrlSts_Fbk_ErrSts'
     */
    /* Transition: '<S29>:19' */
    rtb_TmpSignalConversionAtVeCRDB = Rte_Read_VeCRDB_y_APM_CtrlSts_Fbk_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_A);

    /* RelationalOperator: '<S2>/Relational Operator1' incorporates:
     *  Constant: '<S11>/Constant'
     *  Switch: '<S24>/Switch'
     */
    rtb_RelationalOperator1 = (((uint32)rtb_Switch) != CePWMD_e_LOC_Disable);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_APM_CtrlSts_Fbk_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S57>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_APM_CtrlSts_Fbk_SigSts_Value(&tmpRead_c);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S55>/Chart' */
    if ((((uint32)tmpRead_c) & 3U) != 0U)
    {
        /* Transition: '<S57>:100' */
        /* Transition: '<S57>:103' */
        /* Transition: '<S57>:111' */
        /* Call Fsft */
        VeCRDB_y_APM_CtrlSts_Fbk_CallStatus = 2U;

        /* Event: '<S57>:39' */
        /* Transition: '<S57>:113' */
        /* Transition: '<S57>:115' */
        /* Transition: '<S57>:114' */
    }
    else
    {
        /* Transition: '<S57>:104' */
        /*  MM */
        if ((((uint32)tmpRead_c) & 4U) != 0U)
        {
            /* Transition: '<S57>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S57>:88' */
                /* Transition: '<S57>:111' */
                /* Call Fsft */
                VeCRDB_y_APM_CtrlSts_Fbk_CallStatus = 2U;

                /* Event: '<S57>:39' */
                /* Transition: '<S57>:113' */
                /* Transition: '<S57>:115' */
                /* Transition: '<S57>:114' */
            }
            else
            {
                /* Transition: '<S57>:110' */
                /* Call Tmot */
                VeCRDB_y_APM_CtrlSts_Fbk_CallStatus = 3U;

                /* Event: '<S57>:40' */
                /* Transition: '<S57>:115' */
                /* Transition: '<S57>:114' */
            }
        }
        else
        {
            /* Transition: '<S57>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCRDB) == 133)
            {
                /* Transition: '<S57>:95' */
                /* Transition: '<S57>:116' */
                /* Call Nothing */
                VeCRDB_y_APM_CtrlSts_Fbk_CallStatus = 4U;

                /* Transition: '<S57>:114' */
            }
            else
            {
                /* Transition: '<S57>:120' */
                /* Transition: '<S57>:117' */
                /* Call Poke */
                VeCRDB_y_APM_CtrlSts_Fbk_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S32>/Poke' */
                /* FunctionCaller: '<S58>/Function Caller' */
                /* Event: '<S57>:38' */
                Rte_Call_PokeIDCR_e_stModeRqAPM_PokeIDCR_e_stModeRqAPM
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_A);

                /* End of Outputs for SubSystem: '<S32>/Poke' */
            }
        }
    }

    /* End of Chart: '<S55>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_APMCurrentLimitMd_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_APMCurrentLimitMd_ErrSts'
     */
    /* Transition: '<S57>:107' */
    rtb_TmpSignalConversionAtVeCR_p = Rte_Read_VeCRDB_b_APMCurrentLimitMd_Value(
        &CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_A);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_APMCurrentLimitMd_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S61>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_APMCurrentLimitMd_SigSts_Value(&tmpRead_d);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S59>/Chart' */
    if ((((uint32)tmpRead_d) & 3U) != 0U)
    {
        /* Transition: '<S61>:100' */
        /* Transition: '<S61>:103' */
        /* Transition: '<S61>:111' */
        /* Call Fsft */
        VeCRDB_y_APMCurrentLimitMd_CallStatus = 2U;

        /* Event: '<S61>:39' */
        /* Transition: '<S61>:113' */
        /* Transition: '<S61>:115' */
        /* Transition: '<S61>:114' */
    }
    else
    {
        /* Transition: '<S61>:104' */
        /*  MM */
        if ((((uint32)tmpRead_d) & 4U) != 0U)
        {
            /* Transition: '<S61>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S61>:88' */
                /* Transition: '<S61>:111' */
                /* Call Fsft */
                VeCRDB_y_APMCurrentLimitMd_CallStatus = 2U;

                /* Event: '<S61>:39' */
                /* Transition: '<S61>:113' */
                /* Transition: '<S61>:115' */
                /* Transition: '<S61>:114' */
            }
            else
            {
                /* Transition: '<S61>:110' */
                /* Call Tmot */
                VeCRDB_y_APMCurrentLimitMd_CallStatus = 3U;

                /* Event: '<S61>:40' */
                /* Transition: '<S61>:115' */
                /* Transition: '<S61>:114' */
            }
        }
        else
        {
            /* Transition: '<S61>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_p) == 133)
            {
                /* Transition: '<S61>:95' */
                /* Transition: '<S61>:116' */
                /* Call Nothing */
                VeCRDB_y_APMCurrentLimitMd_CallStatus = 4U;

                /* Transition: '<S61>:114' */
            }
            else
            {
                /* Transition: '<S61>:120' */
                /* Transition: '<S61>:117' */
                /* Call Poke */
                VeCRDB_y_APMCurrentLimitMd_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S33>/Poke' */
                /* FunctionCaller: '<S62>/Function Caller' */
                /* Event: '<S61>:38' */
                Rte_Call_PokeIDCR_b_HvTooHighIStatus_PokeIDCR_b_HvTooHighIStatus
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_A);

                /* End of Outputs for SubSystem: '<S33>/Poke' */
            }
        }
    }

    /* End of Chart: '<S59>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_APMDeratingModeSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_APMDeratingModeSts_ErrSts'
     */
    /* Transition: '<S61>:107' */
    rtb_TmpSignalConversionAtVeCR_e = Rte_Read_VeCRDB_y_APMDeratingModeSts_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_i);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_APMDeratingModeSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S65>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_APMDeratingModeSts_SigSts_Value(&tmpRead_e);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S63>/Chart' */
    if ((((uint32)tmpRead_e) & 3U) != 0U)
    {
        /* Transition: '<S65>:100' */
        /* Transition: '<S65>:103' */
        /* Transition: '<S65>:111' */
        /* Call Fsft */
        VeCRDB_y_APMDeratingModeSts_CallStatus = 2U;

        /* Event: '<S65>:39' */
        /* Transition: '<S65>:113' */
        /* Transition: '<S65>:115' */
        /* Transition: '<S65>:114' */
    }
    else
    {
        /* Transition: '<S65>:104' */
        /*  MM */
        if ((((uint32)tmpRead_e) & 4U) != 0U)
        {
            /* Transition: '<S65>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S65>:88' */
                /* Transition: '<S65>:111' */
                /* Call Fsft */
                VeCRDB_y_APMDeratingModeSts_CallStatus = 2U;

                /* Event: '<S65>:39' */
                /* Transition: '<S65>:113' */
                /* Transition: '<S65>:115' */
                /* Transition: '<S65>:114' */
            }
            else
            {
                /* Transition: '<S65>:110' */
                /* Call Tmot */
                VeCRDB_y_APMDeratingModeSts_CallStatus = 3U;

                /* Event: '<S65>:40' */
                /* Transition: '<S65>:115' */
                /* Transition: '<S65>:114' */
            }
        }
        else
        {
            /* Transition: '<S65>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_e) == 133)
            {
                /* Transition: '<S65>:95' */
                /* Transition: '<S65>:116' */
                /* Call Nothing */
                VeCRDB_y_APMDeratingModeSts_CallStatus = 4U;

                /* Transition: '<S65>:114' */
            }
            else
            {
                /* Transition: '<S65>:120' */
                /* Transition: '<S65>:117' */
                /* Call Poke */
                VeCRDB_y_APMDeratingModeSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S34>/Poke' */
                /* FunctionCaller: '<S66>/Function Caller' */
                /* Event: '<S65>:38' */
                Rte_Call_PokeIDCR_e_APM_DeratingModeStatus_PokeIDCR_e_APM_DeratingModeStatus
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_i);

                /* End of Outputs for SubSystem: '<S34>/Poke' */
            }
        }
    }

    /* End of Chart: '<S63>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_APM_DeratingPower_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_APM_DeratingPower_ErrSts'
     */
    /* Transition: '<S65>:107' */
    rtb_TmpSignalConversionAtVeCR_i = Rte_Read_VeCRDB_W_APM_DeratingPower_Value(
        &CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_W_A);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_APM_DeratingPower_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S69>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_APM_DeratingPower_SigSts_Value(&tmpRead_f);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S67>/Chart' */
    if ((((uint32)tmpRead_f) & 3U) != 0U)
    {
        /* Transition: '<S69>:100' */
        /* Transition: '<S69>:103' */
        /* Transition: '<S69>:111' */
        /* Call Fsft */
        VeCRDB_y_APM_DeratingPower_CallStatus = 2U;

        /* Event: '<S69>:39' */
        /* Transition: '<S69>:113' */
        /* Transition: '<S69>:115' */
        /* Transition: '<S69>:114' */
    }
    else
    {
        /* Transition: '<S69>:104' */
        /*  MM */
        if ((((uint32)tmpRead_f) & 4U) != 0U)
        {
            /* Transition: '<S69>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S69>:88' */
                /* Transition: '<S69>:111' */
                /* Call Fsft */
                VeCRDB_y_APM_DeratingPower_CallStatus = 2U;

                /* Event: '<S69>:39' */
                /* Transition: '<S69>:113' */
                /* Transition: '<S69>:115' */
                /* Transition: '<S69>:114' */
            }
            else
            {
                /* Transition: '<S69>:110' */
                /* Call Tmot */
                VeCRDB_y_APM_DeratingPower_CallStatus = 3U;

                /* Event: '<S69>:40' */
                /* Transition: '<S69>:115' */
                /* Transition: '<S69>:114' */
            }
        }
        else
        {
            /* Transition: '<S69>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_i) == 133)
            {
                /* Transition: '<S69>:95' */
                /* Transition: '<S69>:116' */
                /* Call Nothing */
                VeCRDB_y_APM_DeratingPower_CallStatus = 4U;

                /* Transition: '<S69>:114' */
            }
            else
            {
                /* Transition: '<S69>:120' */
                /* Transition: '<S69>:117' */
                /* Call Poke */
                VeCRDB_y_APM_DeratingPower_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S35>/Poke' */
                /* FunctionCaller: '<S70>/Function Caller' */
                /* Event: '<S69>:38' */
                Rte_Call_PokeIDCR_P_APM_DeratingPower_PokeIDCR_P_APM_DeratingPower
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_W_A);

                /* End of Outputs for SubSystem: '<S35>/Poke' */
            }
        }
    }

    /* End of Chart: '<S67>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_APMDeratingReason_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_APMDeratingReason_ErrSts'
     */
    /* Transition: '<S69>:107' */
    rtb_TmpSignalConversionAtVeCR_b = Rte_Read_VeCRDB_y_APMDeratingReason_Value(
        &CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_e);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_APMDeratingReason_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S73>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_APMDeratingReason_SigSts_Value(&tmpRead_g);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S71>/Chart' */
    if ((((uint32)tmpRead_g) & 3U) != 0U)
    {
        /* Transition: '<S73>:100' */
        /* Transition: '<S73>:103' */
        /* Transition: '<S73>:111' */
        /* Call Fsft */
        VeCRDB_y_APMDeratingReason_CallStatus = 2U;

        /* Event: '<S73>:39' */
        /* Transition: '<S73>:113' */
        /* Transition: '<S73>:115' */
        /* Transition: '<S73>:114' */
    }
    else
    {
        /* Transition: '<S73>:104' */
        /*  MM */
        if ((((uint32)tmpRead_g) & 4U) != 0U)
        {
            /* Transition: '<S73>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S73>:88' */
                /* Transition: '<S73>:111' */
                /* Call Fsft */
                VeCRDB_y_APMDeratingReason_CallStatus = 2U;

                /* Event: '<S73>:39' */
                /* Transition: '<S73>:113' */
                /* Transition: '<S73>:115' */
                /* Transition: '<S73>:114' */
            }
            else
            {
                /* Transition: '<S73>:110' */
                /* Call Tmot */
                VeCRDB_y_APMDeratingReason_CallStatus = 3U;

                /* Event: '<S73>:40' */
                /* Transition: '<S73>:115' */
                /* Transition: '<S73>:114' */
            }
        }
        else
        {
            /* Transition: '<S73>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_b) == 133)
            {
                /* Transition: '<S73>:95' */
                /* Transition: '<S73>:116' */
                /* Call Nothing */
                VeCRDB_y_APMDeratingReason_CallStatus = 4U;

                /* Transition: '<S73>:114' */
            }
            else
            {
                /* Transition: '<S73>:120' */
                /* Transition: '<S73>:117' */
                /* Call Poke */
                VeCRDB_y_APMDeratingReason_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S36>/Poke' */
                /* FunctionCaller: '<S74>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S74>/Data Type Conversion'
                 */
                /* Event: '<S73>:38' */
                Rte_Call_PokeIDCR_e_APM_DeratingReason_PokeIDCR_e_APM_DeratingReason
                    ((sint16)CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_e);

                /* End of Outputs for SubSystem: '<S36>/Poke' */
            }
        }
    }

    /* End of Chart: '<S71>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_APM_EstPwrLoss_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_APM_EstPwrLoss_ErrSts'
     */
    /* Transition: '<S73>:107' */
    rtb_TmpSignalConversionAtVeC_bx = Rte_Read_VeCRDB_W_APM_EstPwrLoss_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_W_h);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_APM_EstPwrLoss_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S78>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_APM_EstPwrLoss_SigSts_Value(&tmpRead_h);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S75>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_h) & 3U) != 0U)
    {
        /* Transition: '<S78>:100' */
        /* Transition: '<S78>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S78>:104' */
        /*  MM */
        if ((((uint32)tmpRead_h) & 4U) != 0U)
        {
            /* Transition: '<S78>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S78>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S78>:110' */
                /* Call Tmot */
                VeCRDB_y_APM_EstPwrLoss_CallStatus = 3U;

                /* Event: '<S78>:40' */
                /* Transition: '<S78>:115' */
                /* Transition: '<S78>:114' */
            }
        }
        else
        {
            /* Transition: '<S78>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_bx) == 133)
            {
                /* Transition: '<S78>:95' */
                /* Transition: '<S78>:116' */
                /* Call Nothing */
                VeCRDB_y_APM_EstPwrLoss_CallStatus = 4U;

                /* Transition: '<S78>:114' */
            }
            else
            {
                /* Transition: '<S78>:120' */
                if ((((uint32)tmpRead_h) & 8U) != 0U)
                {
                    /* Transition: '<S78>:122' */
                    /* Transition: '<S78>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S78>:126' */
                }
                else
                {
                    /* Transition: '<S78>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S78>:117' */
                /* Call Poke */
                VeCRDB_y_APM_EstPwrLoss_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S37>/Poke' */
                /* FunctionCaller: '<S80>/Function Caller' */
                /* Event: '<S78>:38' */
                Rte_Call_PokeIDCR_P_APM_PwrLoss_PokeIDCR_P_APM_PwrLoss
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_W_h, FA_out_hg);

                /* End of Outputs for SubSystem: '<S37>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S78>:111' */
        /* Call Fsft */
        VeCRDB_y_APM_EstPwrLoss_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S37>/Fsft' */
        /* FunctionCaller: '<S79>/Function Caller' */
        /* Event: '<S78>:39' */
        Rte_Call_FsftIDCR_P_APM_PwrLoss_FsftIDCR_P_APM_PwrLoss();

        /* End of Outputs for SubSystem: '<S37>/Fsft' */
        /* Transition: '<S78>:113' */
        /* Transition: '<S78>:115' */
        /* Transition: '<S78>:114' */
    }

    /* End of Chart: '<S75>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_APM_FailureReason_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_APM_FailureReason_ErrSts'
     */
    /* Transition: '<S78>:107' */
    rtb_TmpSignalConversionAtVeCR_h = Rte_Read_VeCRDB_y_APM_FailureReason_Value(
        &CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_p);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_APM_FailureReason_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S83>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_APM_FailureReason_SigSts_Value(&tmpRead_i);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S81>/Chart' */
    if ((((uint32)tmpRead_i) & 3U) != 0U)
    {
        /* Transition: '<S83>:100' */
        /* Transition: '<S83>:103' */
        /* Transition: '<S83>:111' */
        /* Call Fsft */
        VeCRDB_y_APM_FailureReason_CallStatus = 2U;

        /* Event: '<S83>:39' */
        /* Transition: '<S83>:113' */
        /* Transition: '<S83>:115' */
        /* Transition: '<S83>:114' */
    }
    else
    {
        /* Transition: '<S83>:104' */
        /*  MM */
        if ((((uint32)tmpRead_i) & 4U) != 0U)
        {
            /* Transition: '<S83>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S83>:88' */
                /* Transition: '<S83>:111' */
                /* Call Fsft */
                VeCRDB_y_APM_FailureReason_CallStatus = 2U;

                /* Event: '<S83>:39' */
                /* Transition: '<S83>:113' */
                /* Transition: '<S83>:115' */
                /* Transition: '<S83>:114' */
            }
            else
            {
                /* Transition: '<S83>:110' */
                /* Call Tmot */
                VeCRDB_y_APM_FailureReason_CallStatus = 3U;

                /* Event: '<S83>:40' */
                /* Transition: '<S83>:115' */
                /* Transition: '<S83>:114' */
            }
        }
        else
        {
            /* Transition: '<S83>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_h) == 133)
            {
                /* Transition: '<S83>:95' */
                /* Transition: '<S83>:116' */
                /* Call Nothing */
                VeCRDB_y_APM_FailureReason_CallStatus = 4U;

                /* Transition: '<S83>:114' */
            }
            else
            {
                /* Transition: '<S83>:120' */
                /* Transition: '<S83>:117' */
                /* Call Poke */
                VeCRDB_y_APM_FailureReason_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S38>/Poke' */
                /* FunctionCaller: '<S84>/Function Caller' */
                /* Event: '<S83>:38' */
                Rte_Call_PokeIDCR_e_APM_FailureReason_PokeIDCR_e_APM_FailureReason
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_p);

                /* End of Outputs for SubSystem: '<S38>/Poke' */
            }
        }
    }

    /* End of Chart: '<S81>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_APM_FailureType_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_APM_FailureType_ErrSts'
     */
    /* Transition: '<S83>:107' */
    rtb_TmpSignalConversionAtVeCR_f = Rte_Read_VeCRDB_y_APM_FailureType_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_j);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_APM_FailureType_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S87>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_APM_FailureType_SigSts_Value(&tmpRead_j);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S85>/Chart' */
    if ((((uint32)tmpRead_j) & 3U) != 0U)
    {
        /* Transition: '<S87>:100' */
        /* Transition: '<S87>:103' */
        /* Transition: '<S87>:111' */
        /* Call Fsft */
        VeCRDB_y_APM_FailureType_CallStatus = 2U;

        /* Event: '<S87>:39' */
        /* Transition: '<S87>:113' */
        /* Transition: '<S87>:115' */
        /* Transition: '<S87>:114' */
    }
    else
    {
        /* Transition: '<S87>:104' */
        /*  MM */
        if ((((uint32)tmpRead_j) & 4U) != 0U)
        {
            /* Transition: '<S87>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S87>:88' */
                /* Transition: '<S87>:111' */
                /* Call Fsft */
                VeCRDB_y_APM_FailureType_CallStatus = 2U;

                /* Event: '<S87>:39' */
                /* Transition: '<S87>:113' */
                /* Transition: '<S87>:115' */
                /* Transition: '<S87>:114' */
            }
            else
            {
                /* Transition: '<S87>:110' */
                /* Call Tmot */
                VeCRDB_y_APM_FailureType_CallStatus = 3U;

                /* Event: '<S87>:40' */
                /* Transition: '<S87>:115' */
                /* Transition: '<S87>:114' */
            }
        }
        else
        {
            /* Transition: '<S87>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_f) == 133)
            {
                /* Transition: '<S87>:95' */
                /* Transition: '<S87>:116' */
                /* Call Nothing */
                VeCRDB_y_APM_FailureType_CallStatus = 4U;

                /* Transition: '<S87>:114' */
            }
            else
            {
                /* Transition: '<S87>:120' */
                if ((((uint32)tmpRead_j) & 8U) != 0U)
                {
                    /* Transition: '<S87>:122' */
                    /* Transition: '<S87>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S87>:126' */
                }
                else
                {
                    /* Transition: '<S87>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S87>:117' */
                /* Call Poke */
                VeCRDB_y_APM_FailureType_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S39>/Poke' */
                /* FunctionCaller: '<S88>/Function Caller' */
                /* Event: '<S87>:38' */
                Rte_Call_PokeIDCR_e_APM_FailureType_PokeIDCR_e_APM_FailureType
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_j, FA_out_hg);

                /* End of Outputs for SubSystem: '<S39>/Poke' */
            }
        }
    }

    /* End of Chart: '<S85>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_APM_HV_I_Fbk_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_APM_HV_I_Fbk_ErrSts'
     */
    /* Transition: '<S87>:107' */
    rtb_TmpSignalConversionAtVeC_io = Rte_Read_VeCRDB_I_APM_HV_I_Fbk_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_I_A);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_APM_HV_I_Fbk_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S92>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_APM_HV_I_Fbk_SigSts_Value(&tmpRead_k);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S89>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_k) & 3U) != 0U)
    {
        /* Transition: '<S92>:100' */
        /* Transition: '<S92>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S92>:104' */
        /*  MM */
        if ((((uint32)tmpRead_k) & 4U) != 0U)
        {
            /* Transition: '<S92>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S92>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S92>:110' */
                /* Call Tmot */
                VeCRDB_y_APM_HV_y_Fbk_CallStatus = 3U;

                /* Event: '<S92>:40' */
                /* Transition: '<S92>:115' */
                /* Transition: '<S92>:114' */
            }
        }
        else
        {
            /* Transition: '<S92>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_io) == 133)
            {
                /* Transition: '<S92>:95' */
                /* Transition: '<S92>:116' */
                /* Call Nothing */
                VeCRDB_y_APM_HV_y_Fbk_CallStatus = 4U;

                /* Transition: '<S92>:114' */
            }
            else
            {
                /* Transition: '<S92>:120' */
                if ((((uint32)tmpRead_k) & 8U) != 0U)
                {
                    /* Transition: '<S92>:122' */
                    /* Transition: '<S92>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S92>:126' */
                }
                else
                {
                    /* Transition: '<S92>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S92>:117' */
                /* Call Poke */
                VeCRDB_y_APM_HV_y_Fbk_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S40>/Poke' */
                /* FunctionCaller: '<S94>/Function Caller' */
                /* Event: '<S92>:38' */
                Rte_Call_PokeIDCR_I_APM_HV_Current_PokeIDCR_I_APM_HV_Current
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_I_A, FA_out_hg);

                /* End of Outputs for SubSystem: '<S40>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S92>:111' */
        /* Call Fsft */
        VeCRDB_y_APM_HV_y_Fbk_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S40>/Fsft' */
        /* FunctionCaller: '<S93>/Function Caller' */
        /* Event: '<S92>:39' */
        Rte_Call_FsftIDCR_I_APM_HV_Current_FsftIDCR_I_APM_HV_Current();

        /* End of Outputs for SubSystem: '<S40>/Fsft' */
        /* Transition: '<S92>:113' */
        /* Transition: '<S92>:115' */
        /* Transition: '<S92>:114' */
    }

    /* End of Chart: '<S89>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_APM_HV_V_Fbk_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_APM_HV_V_Fbk_ErrSts'
     */
    /* Transition: '<S92>:107' */
    rtb_TmpSignalConversionAtVeC_pe = Rte_Read_VeCRDB_U_APM_HV_V_Fbk_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_U_A);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_APM_HV_V_Fbk_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S98>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_APM_HV_V_Fbk_SigSts_Value(&tmpRead_l);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S95>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_l) & 3U) != 0U)
    {
        /* Transition: '<S98>:100' */
        /* Transition: '<S98>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S98>:104' */
        /*  MM */
        if ((((uint32)tmpRead_l) & 4U) != 0U)
        {
            /* Transition: '<S98>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S98>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S98>:110' */
                /* Call Tmot */
                VeCRDB_y_APM_HV_V_Fbk_CallStatus = 3U;

                /* Event: '<S98>:40' */
                /* Transition: '<S98>:115' */
                /* Transition: '<S98>:114' */
            }
        }
        else
        {
            /* Transition: '<S98>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_pe) == 133)
            {
                /* Transition: '<S98>:95' */
                /* Transition: '<S98>:116' */
                /* Call Nothing */
                VeCRDB_y_APM_HV_V_Fbk_CallStatus = 4U;

                /* Transition: '<S98>:114' */
            }
            else
            {
                /* Transition: '<S98>:120' */
                if ((((uint32)tmpRead_l) & 8U) != 0U)
                {
                    /* Transition: '<S98>:122' */
                    /* Transition: '<S98>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S98>:126' */
                }
                else
                {
                    /* Transition: '<S98>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S98>:117' */
                /* Call Poke */
                VeCRDB_y_APM_HV_V_Fbk_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S41>/Poke' */
                /* FunctionCaller: '<S100>/Function Caller' */
                /* Event: '<S98>:38' */
                Rte_Call_PokeIDCR_U_APM_HV_Voltage_PokeIDCR_U_APM_HV_Voltage
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_U_A, FA_out_hg);

                /* End of Outputs for SubSystem: '<S41>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S98>:111' */
        /* Call Fsft */
        VeCRDB_y_APM_HV_V_Fbk_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S41>/Fsft' */
        /* FunctionCaller: '<S99>/Function Caller' */
        /* Event: '<S98>:39' */
        Rte_Call_FsftIDCR_U_APM_HV_Voltage_FsftIDCR_U_APM_HV_Voltage();

        /* End of Outputs for SubSystem: '<S41>/Fsft' */
        /* Transition: '<S98>:113' */
        /* Transition: '<S98>:115' */
        /* Transition: '<S98>:114' */
    }

    /* End of Chart: '<S95>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_APM_HvOverVStatus_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_APM_HvOverVStatus_ErrSts'
     */
    /* Transition: '<S98>:107' */
    rtb_TmpSignalConversionAtVeC_h0 = Rte_Read_VeCRDB_b_APM_HvOverVStatus_Value(
        &CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_m);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_APM_HvOverVStatus_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S103>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_APM_HvOverVStatus_SigSts_Value(&tmpRead_m);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S101>/Chart' */
    if ((((uint32)tmpRead_m) & 3U) != 0U)
    {
        /* Transition: '<S103>:100' */
        /* Transition: '<S103>:103' */
        /* Transition: '<S103>:111' */
        /* Call Fsft */
        VeCRDB_y_APM_HvOverVStatus_CallStatus = 2U;

        /* Event: '<S103>:39' */
        /* Transition: '<S103>:113' */
        /* Transition: '<S103>:115' */
        /* Transition: '<S103>:114' */
    }
    else
    {
        /* Transition: '<S103>:104' */
        /*  MM */
        if ((((uint32)tmpRead_m) & 4U) != 0U)
        {
            /* Transition: '<S103>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S103>:88' */
                /* Transition: '<S103>:111' */
                /* Call Fsft */
                VeCRDB_y_APM_HvOverVStatus_CallStatus = 2U;

                /* Event: '<S103>:39' */
                /* Transition: '<S103>:113' */
                /* Transition: '<S103>:115' */
                /* Transition: '<S103>:114' */
            }
            else
            {
                /* Transition: '<S103>:110' */
                /* Call Tmot */
                VeCRDB_y_APM_HvOverVStatus_CallStatus = 3U;

                /* Event: '<S103>:40' */
                /* Transition: '<S103>:115' */
                /* Transition: '<S103>:114' */
            }
        }
        else
        {
            /* Transition: '<S103>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_h0) == 133)
            {
                /* Transition: '<S103>:95' */
                /* Transition: '<S103>:116' */
                /* Call Nothing */
                VeCRDB_y_APM_HvOverVStatus_CallStatus = 4U;

                /* Transition: '<S103>:114' */
            }
            else
            {
                /* Transition: '<S103>:120' */
                /* Transition: '<S103>:117' */
                /* Call Poke */
                VeCRDB_y_APM_HvOverVStatus_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S42>/Poke' */
                /* FunctionCaller: '<S104>/Function Caller' */
                /* Event: '<S103>:38' */
                Rte_Call_PokeIDCR_b_HvOverVStatus_PokeIDCR_b_HvOverVStatus
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_m);

                /* End of Outputs for SubSystem: '<S42>/Poke' */
            }
        }
    }

    /* End of Chart: '<S101>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_APM_HvVsetPFdbk_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_APM_HvVsetPFdbk_ErrSts'
     */
    /* Transition: '<S103>:107' */
    rtb_TmpSignalConversionAtVeCR_j = Rte_Read_VeCRDB_U_APM_HvVsetPFdbk_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_U_l);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_APM_HvVsetPFdbk_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S108>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_APM_HvVsetPFdbk_SigSts_Value(&tmpRead_n);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S105>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_n) & 3U) != 0U)
    {
        /* Transition: '<S108>:100' */
        /* Transition: '<S108>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S108>:104' */
        /*  MM */
        if ((((uint32)tmpRead_n) & 4U) != 0U)
        {
            /* Transition: '<S108>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S108>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S108>:110' */
                /* Call Tmot */
                VeCRDB_y_APM_HvVsetPFdbk_CallStatus = 3U;

                /* Event: '<S108>:40' */
                /* Transition: '<S108>:115' */
                /* Transition: '<S108>:114' */
            }
        }
        else
        {
            /* Transition: '<S108>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_j) == 133)
            {
                /* Transition: '<S108>:95' */
                /* Transition: '<S108>:116' */
                /* Call Nothing */
                VeCRDB_y_APM_HvVsetPFdbk_CallStatus = 4U;

                /* Transition: '<S108>:114' */
            }
            else
            {
                /* Transition: '<S108>:120' */
                if ((((uint32)tmpRead_n) & 8U) != 0U)
                {
                    /* Transition: '<S108>:122' */
                    /* Transition: '<S108>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S108>:126' */
                }
                else
                {
                    /* Transition: '<S108>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S108>:117' */
                /* Call Poke */
                VeCRDB_y_APM_HvVsetPFdbk_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S43>/Poke' */
                /* FunctionCaller: '<S110>/Function Caller' */
                /* Event: '<S108>:38' */
                Rte_Call_PokeIDCR_U_APM_HvVsetPFdbk_PokeIDCR_U_APM_HvVsetPFdbk
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_U_l, FA_out_hg);

                /* End of Outputs for SubSystem: '<S43>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S108>:111' */
        /* Call Fsft */
        VeCRDB_y_APM_HvVsetPFdbk_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S43>/Fsft' */
        /* FunctionCaller: '<S109>/Function Caller' */
        /* Event: '<S108>:39' */
        Rte_Call_FsftIDCR_U_APM_HvVsetPFdbk_FsftIDCR_U_APM_HvVsetPFdbk();

        /* End of Outputs for SubSystem: '<S43>/Fsft' */
        /* Transition: '<S108>:113' */
        /* Transition: '<S108>:115' */
        /* Transition: '<S108>:114' */
    }

    /* End of Chart: '<S105>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_APM_IdcHvSetPFdbk_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_APM_IdcHvSetPFdbk_ErrSts'
     */
    /* Transition: '<S108>:107' */
    rtb_TmpSignalConversionAtVeC_hz = Rte_Read_VeCRDB_I_APM_IdcHvSetPFdbk_Value(
        &CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_I_f);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_APM_IdcHvSetPFdbk_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S114>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_APM_IdcHvSetPFdbk_SigSts_Value(&tmpRead_o);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S111>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_o) & 3U) != 0U)
    {
        /* Transition: '<S114>:100' */
        /* Transition: '<S114>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S114>:104' */
        /*  MM */
        if ((((uint32)tmpRead_o) & 4U) != 0U)
        {
            /* Transition: '<S114>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S114>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S114>:110' */
                /* Call Tmot */
                VeCRDB_y_APM_IdcHvSetPFdbk_CallStatus = 3U;

                /* Event: '<S114>:40' */
                /* Transition: '<S114>:115' */
                /* Transition: '<S114>:114' */
            }
        }
        else
        {
            /* Transition: '<S114>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_hz) == 133)
            {
                /* Transition: '<S114>:95' */
                /* Transition: '<S114>:116' */
                /* Call Nothing */
                VeCRDB_y_APM_IdcHvSetPFdbk_CallStatus = 4U;

                /* Transition: '<S114>:114' */
            }
            else
            {
                /* Transition: '<S114>:120' */
                if ((((uint32)tmpRead_o) & 8U) != 0U)
                {
                    /* Transition: '<S114>:122' */
                    /* Transition: '<S114>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S114>:126' */
                }
                else
                {
                    /* Transition: '<S114>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S114>:117' */
                /* Call Poke */
                VeCRDB_y_APM_IdcHvSetPFdbk_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S44>/Poke' */
                /* FunctionCaller: '<S116>/Function Caller' */
                /* Event: '<S114>:38' */
                Rte_Call_PokeIDCR_I_IdcHvSetPFdbk_PokeIDCR_I_IdcHvSetPFdbk
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_I_f, FA_out_hg);

                /* End of Outputs for SubSystem: '<S44>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S114>:111' */
        /* Call Fsft */
        VeCRDB_y_APM_IdcHvSetPFdbk_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S44>/Fsft' */
        /* FunctionCaller: '<S115>/Function Caller' */
        /* Event: '<S114>:39' */
        Rte_Call_FsftIDCR_I_IdcHvSetPFdbk_FsftIDCR_I_IdcHvSetPFdbk();

        /* End of Outputs for SubSystem: '<S44>/Fsft' */
        /* Transition: '<S114>:113' */
        /* Transition: '<S114>:115' */
        /* Transition: '<S114>:114' */
    }

    /* End of Chart: '<S111>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_APM_InputPower_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_APM_InputPower_ErrSts'
     */
    /* Transition: '<S114>:107' */
    rtb_TmpSignalConversionAtVeC_hi = Rte_Read_VeCRDB_W_APM_InputPower_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_W_i);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_APM_InputPower_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S120>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_APM_InputPower_SigSts_Value(&tmpRead_p);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S117>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_p) & 3U) != 0U)
    {
        /* Transition: '<S120>:100' */
        /* Transition: '<S120>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S120>:104' */
        /*  MM */
        if ((((uint32)tmpRead_p) & 4U) != 0U)
        {
            /* Transition: '<S120>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S120>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S120>:110' */
                /* Call Tmot */
                VeCRDB_y_APM_InputPower_CallStatus = 3U;

                /* Event: '<S120>:40' */
                /* Transition: '<S120>:115' */
                /* Transition: '<S120>:114' */
            }
        }
        else
        {
            /* Transition: '<S120>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_hi) == 133)
            {
                /* Transition: '<S120>:95' */
                /* Transition: '<S120>:116' */
                /* Call Nothing */
                VeCRDB_y_APM_InputPower_CallStatus = 4U;

                /* Transition: '<S120>:114' */
            }
            else
            {
                /* Transition: '<S120>:120' */
                if ((((uint32)tmpRead_p) & 8U) != 0U)
                {
                    /* Transition: '<S120>:122' */
                    /* Transition: '<S120>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S120>:126' */
                }
                else
                {
                    /* Transition: '<S120>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S120>:117' */
                /* Call Poke */
                VeCRDB_y_APM_InputPower_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S45>/Poke' */
                /* FunctionCaller: '<S122>/Function Caller' */
                /* Event: '<S120>:38' */
                Rte_Call_PokeIDCR_P_APM_InputPower_PokeIDCR_P_APM_InputPower
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_W_i, FA_out_hg);

                /* End of Outputs for SubSystem: '<S45>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S120>:111' */
        /* Call Fsft */
        VeCRDB_y_APM_InputPower_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S45>/Fsft' */
        /* FunctionCaller: '<S121>/Function Caller' */
        /* Event: '<S120>:39' */
        Rte_Call_FsftIDCR_P_APM_InputPower_FsftIDCR_P_APM_InputPower();

        /* End of Outputs for SubSystem: '<S45>/Fsft' */
        /* Transition: '<S120>:113' */
        /* Transition: '<S120>:115' */
        /* Transition: '<S120>:114' */
    }

    /* End of Chart: '<S117>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_APM_LV_I_Fbk_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_APM_LV_I_Fbk_ErrSts'
     */
    /* Transition: '<S120>:107' */
    rtb_TmpSignalConversionAtVeC_hp = Rte_Read_VeCRDB_I_APM_LV_I_Fbk_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_I_c);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_APM_LV_I_Fbk_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S126>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_APM_LV_I_Fbk_SigSts_Value(&tmpRead_q);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S123>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_q) & 3U) != 0U)
    {
        /* Transition: '<S126>:100' */
        /* Transition: '<S126>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S126>:104' */
        /*  MM */
        if ((((uint32)tmpRead_q) & 4U) != 0U)
        {
            /* Transition: '<S126>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S126>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S126>:110' */
                /* Call Tmot */
                VeCRDB_y_APM_LV_y_Fbk_CallStatus = 3U;

                /* Event: '<S126>:40' */
                /* Transition: '<S126>:115' */
                /* Transition: '<S126>:114' */
            }
        }
        else
        {
            /* Transition: '<S126>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_hp) == 133)
            {
                /* Transition: '<S126>:95' */
                /* Transition: '<S126>:116' */
                /* Call Nothing */
                VeCRDB_y_APM_LV_y_Fbk_CallStatus = 4U;

                /* Transition: '<S126>:114' */
            }
            else
            {
                /* Transition: '<S126>:120' */
                if ((((uint32)tmpRead_q) & 8U) != 0U)
                {
                    /* Transition: '<S126>:122' */
                    /* Transition: '<S126>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S126>:126' */
                }
                else
                {
                    /* Transition: '<S126>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S126>:117' */
                /* Call Poke */
                VeCRDB_y_APM_LV_y_Fbk_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S46>/Poke' */
                /* FunctionCaller: '<S128>/Function Caller' */
                /* Event: '<S126>:38' */
                Rte_Call_PokeIDCR_I_APM_LV_Current_PokeIDCR_I_APM_LV_Current
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_I_c, FA_out_hg);

                /* End of Outputs for SubSystem: '<S46>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S126>:111' */
        /* Call Fsft */
        VeCRDB_y_APM_LV_y_Fbk_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S46>/Fsft' */
        /* FunctionCaller: '<S127>/Function Caller' */
        /* Event: '<S126>:39' */
        Rte_Call_FsftIDCR_I_APM_LV_Current_FsftIDCR_I_APM_LV_Current();

        /* End of Outputs for SubSystem: '<S46>/Fsft' */
        /* Transition: '<S126>:113' */
        /* Transition: '<S126>:115' */
        /* Transition: '<S126>:114' */
    }

    /* End of Chart: '<S123>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_APM_LV_V_Fbk_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_APM_LV_V_Fbk_ErrSts'
     */
    /* Transition: '<S126>:107' */
    rtb_TmpSignalConversionAtVeC_hd = Rte_Read_VeCRDB_U_APM_LV_V_Fbk_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_U_g);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_APM_LV_V_Fbk_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S132>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_APM_LV_V_Fbk_SigSts_Value(&tmpRead_r);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S129>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_r) & 3U) != 0U)
    {
        /* Transition: '<S132>:100' */
        /* Transition: '<S132>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S132>:104' */
        /*  MM */
        if ((((uint32)tmpRead_r) & 4U) != 0U)
        {
            /* Transition: '<S132>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S132>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S132>:110' */
                /* Call Tmot */
                VeCRDB_y_APM_LV_V_Fbk_CallStatus = 3U;

                /* Event: '<S132>:40' */
                /* Transition: '<S132>:115' */
                /* Transition: '<S132>:114' */
            }
        }
        else
        {
            /* Transition: '<S132>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_hd) == 133)
            {
                /* Transition: '<S132>:95' */
                /* Transition: '<S132>:116' */
                /* Call Nothing */
                VeCRDB_y_APM_LV_V_Fbk_CallStatus = 4U;

                /* Transition: '<S132>:114' */
            }
            else
            {
                /* Transition: '<S132>:120' */
                if ((((uint32)tmpRead_r) & 8U) != 0U)
                {
                    /* Transition: '<S132>:122' */
                    /* Transition: '<S132>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S132>:126' */
                }
                else
                {
                    /* Transition: '<S132>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S132>:117' */
                /* Call Poke */
                VeCRDB_y_APM_LV_V_Fbk_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S47>/Poke' */
                /* FunctionCaller: '<S134>/Function Caller' */
                /* Event: '<S132>:38' */
                Rte_Call_PokeIDCR_U_APM_LV_Voltage_PokeIDCR_U_APM_LV_Voltage
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_U_g, FA_out_hg);

                /* End of Outputs for SubSystem: '<S47>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S132>:111' */
        /* Call Fsft */
        VeCRDB_y_APM_LV_V_Fbk_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S47>/Fsft' */
        /* FunctionCaller: '<S133>/Function Caller' */
        /* Event: '<S132>:39' */
        Rte_Call_FsftIDCR_U_APM_LV_Voltage_FsftIDCR_U_APM_LV_Voltage();

        /* End of Outputs for SubSystem: '<S47>/Fsft' */
        /* Transition: '<S132>:113' */
        /* Transition: '<S132>:115' */
        /* Transition: '<S132>:114' */
    }

    /* End of Chart: '<S129>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_APM_OutputPower_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_APM_OutputPower_ErrSts'
     */
    /* Transition: '<S132>:107' */
    rtb_TmpSignalConversionAtVeCR_n = Rte_Read_VeCRDB_W_APM_OutputPower_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_W_c);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_APM_OutputPower_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S138>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_APM_OutputPower_SigSts_Value(&tmpRead_s);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S135>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_s) & 3U) != 0U)
    {
        /* Transition: '<S138>:100' */
        /* Transition: '<S138>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S138>:104' */
        /*  MM */
        if ((((uint32)tmpRead_s) & 4U) != 0U)
        {
            /* Transition: '<S138>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S138>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S138>:110' */
                /* Call Tmot */
                VeCRDB_y_APM_OutputPower_CallStatus = 3U;

                /* Event: '<S138>:40' */
                /* Transition: '<S138>:115' */
                /* Transition: '<S138>:114' */
            }
        }
        else
        {
            /* Transition: '<S138>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_n) == 133)
            {
                /* Transition: '<S138>:95' */
                /* Transition: '<S138>:116' */
                /* Call Nothing */
                VeCRDB_y_APM_OutputPower_CallStatus = 4U;

                /* Transition: '<S138>:114' */
            }
            else
            {
                /* Transition: '<S138>:120' */
                if ((((uint32)tmpRead_s) & 8U) != 0U)
                {
                    /* Transition: '<S138>:122' */
                    /* Transition: '<S138>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S138>:126' */
                }
                else
                {
                    /* Transition: '<S138>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S138>:117' */
                /* Call Poke */
                VeCRDB_y_APM_OutputPower_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S48>/Poke' */
                /* FunctionCaller: '<S140>/Function Caller' */
                /* Event: '<S138>:38' */
                Rte_Call_PokeIDCR_P_APM_OutputPower_PokeIDCR_P_APM_OutputPower
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_W_c, FA_out_hg);

                /* End of Outputs for SubSystem: '<S48>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S138>:111' */
        /* Call Fsft */
        VeCRDB_y_APM_OutputPower_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S48>/Fsft' */
        /* FunctionCaller: '<S139>/Function Caller' */
        /* Event: '<S138>:39' */
        Rte_Call_FsftIDCR_P_APM_OutputPower_FsftIDCR_P_APM_OutputPower();

        /* End of Outputs for SubSystem: '<S48>/Fsft' */
        /* Transition: '<S138>:113' */
        /* Transition: '<S138>:115' */
        /* Transition: '<S138>:114' */
    }

    /* End of Chart: '<S135>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_APM_PSFB_Temp1_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_APM_PSFB_Temp1_ErrSts'
     */
    /* Transition: '<S138>:107' */
    rtb_TmpSignalConversionAtVeCR_g = Rte_Read_VeCRDB_T_APM_PSFB_Temp1_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_T_A);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_APM_PSFB_Temp1_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S144>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_APM_PSFB_Temp1_SigSts_Value(&tmpRead_t);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S141>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_t) & 3U) != 0U)
    {
        /* Transition: '<S144>:100' */
        /* Transition: '<S144>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S144>:104' */
        /*  MM */
        if ((((uint32)tmpRead_t) & 4U) != 0U)
        {
            /* Transition: '<S144>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S144>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S144>:110' */
                /* Call Tmot */
                VeCRDB_y_APM_PSFB_Temp1_CallStatus = 3U;

                /* Event: '<S144>:40' */
                /* Transition: '<S144>:115' */
                /* Transition: '<S144>:114' */
            }
        }
        else
        {
            /* Transition: '<S144>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_g) == 133)
            {
                /* Transition: '<S144>:95' */
                /* Transition: '<S144>:116' */
                /* Call Nothing */
                VeCRDB_y_APM_PSFB_Temp1_CallStatus = 4U;

                /* Transition: '<S144>:114' */
            }
            else
            {
                /* Transition: '<S144>:120' */
                if ((((uint32)tmpRead_t) & 8U) != 0U)
                {
                    /* Transition: '<S144>:122' */
                    /* Transition: '<S144>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S144>:126' */
                }
                else
                {
                    /* Transition: '<S144>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S144>:117' */
                /* Call Poke */
                VeCRDB_y_APM_PSFB_Temp1_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S49>/Poke' */
                /* FunctionCaller: '<S146>/Function Caller' */
                /* Event: '<S144>:38' */
                Rte_Call_PokeIDCR_T_Temp1_PokeIDCR_T_Temp1
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_T_A, FA_out_hg);

                /* End of Outputs for SubSystem: '<S49>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S144>:111' */
        /* Call Fsft */
        VeCRDB_y_APM_PSFB_Temp1_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S49>/Fsft' */
        /* FunctionCaller: '<S145>/Function Caller' */
        /* Event: '<S144>:39' */
        Rte_Call_FsftIDCR_T_Temp1_FsftIDCR_T_Temp1();

        /* End of Outputs for SubSystem: '<S49>/Fsft' */
        /* Transition: '<S144>:113' */
        /* Transition: '<S144>:115' */
        /* Transition: '<S144>:114' */
    }

    /* End of Chart: '<S141>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_APM_PSFB_Temp2_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_APM_PSFB_Temp2_ErrSts'
     */
    /* Transition: '<S144>:107' */
    rtb_TmpSignalConversionAtVeC_jp = Rte_Read_VeCRDB_T_APM_PSFB_Temp2_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_T_b);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_APM_PSFB_Temp2_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S150>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_APM_PSFB_Temp2_SigSts_Value(&tmpRead_u);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S147>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_u) & 3U) != 0U)
    {
        /* Transition: '<S150>:100' */
        /* Transition: '<S150>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S150>:104' */
        /*  MM */
        if ((((uint32)tmpRead_u) & 4U) != 0U)
        {
            /* Transition: '<S150>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S150>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S150>:110' */
                /* Call Tmot */
                VeCRDB_y_APM_PSFB_Temp2_CallStatus = 3U;

                /* Event: '<S150>:40' */
                /* Transition: '<S150>:115' */
                /* Transition: '<S150>:114' */
            }
        }
        else
        {
            /* Transition: '<S150>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_jp) == 133)
            {
                /* Transition: '<S150>:95' */
                /* Transition: '<S150>:116' */
                /* Call Nothing */
                VeCRDB_y_APM_PSFB_Temp2_CallStatus = 4U;

                /* Transition: '<S150>:114' */
            }
            else
            {
                /* Transition: '<S150>:120' */
                if ((((uint32)tmpRead_u) & 8U) != 0U)
                {
                    /* Transition: '<S150>:122' */
                    /* Transition: '<S150>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S150>:126' */
                }
                else
                {
                    /* Transition: '<S150>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S150>:117' */
                /* Call Poke */
                VeCRDB_y_APM_PSFB_Temp2_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S50>/Poke' */
                /* FunctionCaller: '<S152>/Function Caller' */
                /* Event: '<S150>:38' */
                Rte_Call_PokeIDCR_T_Temp2_PokeIDCR_T_Temp2
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_T_b, FA_out_hg);

                /* End of Outputs for SubSystem: '<S50>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S150>:111' */
        /* Call Fsft */
        VeCRDB_y_APM_PSFB_Temp2_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S50>/Fsft' */
        /* FunctionCaller: '<S151>/Function Caller' */
        /* Event: '<S150>:39' */
        Rte_Call_FsftIDCR_T_Temp2_FsftIDCR_T_Temp2();

        /* End of Outputs for SubSystem: '<S50>/Fsft' */
        /* Transition: '<S150>:113' */
        /* Transition: '<S150>:115' */
        /* Transition: '<S150>:114' */
    }

    /* End of Chart: '<S147>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_APM_PowerLimitMode_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_APM_PowerLimitMode_ErrSts'
     */
    /* Transition: '<S150>:107' */
    rtb_TmpSignalConversionAtVeC_fx = Rte_Read_VeCRDB_b_APM_PowerLimitMode_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_e);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_APM_PowerLimitMode_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S155>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_APM_PowerLimitMode_SigSts_Value(&tmpRead_v);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S153>/Chart' */
    if ((((uint32)tmpRead_v) & 3U) != 0U)
    {
        /* Transition: '<S155>:100' */
        /* Transition: '<S155>:103' */
        /* Transition: '<S155>:111' */
        /* Call Fsft */
        VeCRDB_y_APM_PowerLimitMode_CallStatus = 2U;

        /* Event: '<S155>:39' */
        /* Transition: '<S155>:113' */
        /* Transition: '<S155>:115' */
        /* Transition: '<S155>:114' */
    }
    else
    {
        /* Transition: '<S155>:104' */
        /*  MM */
        if ((((uint32)tmpRead_v) & 4U) != 0U)
        {
            /* Transition: '<S155>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S155>:88' */
                /* Transition: '<S155>:111' */
                /* Call Fsft */
                VeCRDB_y_APM_PowerLimitMode_CallStatus = 2U;

                /* Event: '<S155>:39' */
                /* Transition: '<S155>:113' */
                /* Transition: '<S155>:115' */
                /* Transition: '<S155>:114' */
            }
            else
            {
                /* Transition: '<S155>:110' */
                /* Call Tmot */
                VeCRDB_y_APM_PowerLimitMode_CallStatus = 3U;

                /* Event: '<S155>:40' */
                /* Transition: '<S155>:115' */
                /* Transition: '<S155>:114' */
            }
        }
        else
        {
            /* Transition: '<S155>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_fx) == 133)
            {
                /* Transition: '<S155>:95' */
                /* Transition: '<S155>:116' */
                /* Call Nothing */
                VeCRDB_y_APM_PowerLimitMode_CallStatus = 4U;

                /* Transition: '<S155>:114' */
            }
            else
            {
                /* Transition: '<S155>:120' */
                /* Transition: '<S155>:117' */
                /* Call Poke */
                VeCRDB_y_APM_PowerLimitMode_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S51>/Poke' */
                /* FunctionCaller: '<S156>/Function Caller' */
                /* Event: '<S155>:38' */
                Rte_Call_PokeIDCR_b_HvTooLowVStatus_PokeIDCR_b_HvTooLowVStatus
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_e);

                /* End of Outputs for SubSystem: '<S51>/Poke' */
            }
        }
    }

    /* End of Chart: '<S153>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_APM_TempColdPlate_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_APM_TempColdPlate_ErrSts'
     */
    /* Transition: '<S155>:107' */
    rtb_TmpSignalConversionAtVeCR_l = Rte_Read_VeCRDB_T_APM_TempColdPlate_Value(
        &CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__bt);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_APM_TempColdPlate_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S160>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_APM_TempColdPlate_SigSts_Value(&tmpRead_w);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S157>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_w) & 3U) != 0U)
    {
        /* Transition: '<S160>:100' */
        /* Transition: '<S160>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S160>:104' */
        /*  MM */
        if ((((uint32)tmpRead_w) & 4U) != 0U)
        {
            /* Transition: '<S160>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S160>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S160>:110' */
                /* Call Tmot */
                VeCRDB_y_APM_TempColdPlate_CallStatus = 3U;

                /* Event: '<S160>:40' */
                /* Transition: '<S160>:115' */
                /* Transition: '<S160>:114' */
            }
        }
        else
        {
            /* Transition: '<S160>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_l) == 133)
            {
                /* Transition: '<S160>:95' */
                /* Transition: '<S160>:116' */
                /* Call Nothing */
                VeCRDB_y_APM_TempColdPlate_CallStatus = 4U;

                /* Transition: '<S160>:114' */
            }
            else
            {
                /* Transition: '<S160>:120' */
                if ((((uint32)tmpRead_w) & 8U) != 0U)
                {
                    /* Transition: '<S160>:122' */
                    /* Transition: '<S160>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S160>:126' */
                }
                else
                {
                    /* Transition: '<S160>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S160>:117' */
                /* Call Poke */
                VeCRDB_y_APM_TempColdPlate_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S52>/Poke' */
                /* FunctionCaller: '<S162>/Function Caller' */
                /* Event: '<S160>:38' */
                Rte_Call_PokeIDCR_T_APM_TempColdPlate_PokeIDCR_T_APM_TempColdPlate
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__bt, FA_out_hg);

                /* End of Outputs for SubSystem: '<S52>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S160>:111' */
        /* Call Fsft */
        VeCRDB_y_APM_TempColdPlate_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S52>/Fsft' */
        /* FunctionCaller: '<S161>/Function Caller' */
        /* Event: '<S160>:39' */
        Rte_Call_FsftIDCR_T_APM_TempColdPlate_FsftIDCR_T_APM_TempColdPlate();

        /* End of Outputs for SubSystem: '<S52>/Fsft' */
        /* Transition: '<S160>:113' */
        /* Transition: '<S160>:115' */
        /* Transition: '<S160>:114' */
    }

    /* End of Chart: '<S157>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_APM_ThermalRunaway_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_APM_ThermalRunaway_ErrSts'
     */
    /* Transition: '<S160>:107' */
    rtb_TmpSignalConversionAtVeCR_a = Rte_Read_VeCRDB_y_APM_ThermalRunaway_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_d);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_APM_ThermalRunaway_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S165>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_APM_ThermalRunaway_SigSts_Value(&tmpRead_x);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S163>/Chart' */
    if ((((uint32)tmpRead_x) & 3U) != 0U)
    {
        /* Transition: '<S165>:100' */
        /* Transition: '<S165>:103' */
        /* Transition: '<S165>:111' */
        /* Call Fsft */
        VeCRDB_y_APM_ThermalRunaway_CallStatus = 2U;

        /* Event: '<S165>:39' */
        /* Transition: '<S165>:113' */
        /* Transition: '<S165>:115' */
        /* Transition: '<S165>:114' */
    }
    else
    {
        /* Transition: '<S165>:104' */
        /*  MM */
        if ((((uint32)tmpRead_x) & 4U) != 0U)
        {
            /* Transition: '<S165>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S165>:88' */
                /* Transition: '<S165>:111' */
                /* Call Fsft */
                VeCRDB_y_APM_ThermalRunaway_CallStatus = 2U;

                /* Event: '<S165>:39' */
                /* Transition: '<S165>:113' */
                /* Transition: '<S165>:115' */
                /* Transition: '<S165>:114' */
            }
            else
            {
                /* Transition: '<S165>:110' */
                /* Call Tmot */
                VeCRDB_y_APM_ThermalRunaway_CallStatus = 3U;

                /* Event: '<S165>:40' */
                /* Transition: '<S165>:115' */
                /* Transition: '<S165>:114' */
            }
        }
        else
        {
            /* Transition: '<S165>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_a) == 133)
            {
                /* Transition: '<S165>:95' */
                /* Transition: '<S165>:116' */
                /* Call Nothing */
                VeCRDB_y_APM_ThermalRunaway_CallStatus = 4U;

                /* Transition: '<S165>:114' */
            }
            else
            {
                /* Transition: '<S165>:120' */
                /* Transition: '<S165>:117' */
                /* Call Poke */
                VeCRDB_y_APM_ThermalRunaway_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S53>/Poke' */
                /* FunctionCaller: '<S166>/Function Caller' */
                /* Event: '<S165>:38' */
                Rte_Call_PokeIDCR_e_APM_ThermalRunaway_PokeIDCR_e_APM_ThermalRunaway
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_d);

                /* End of Outputs for SubSystem: '<S53>/Poke' */
            }
        }
    }

    /* End of Chart: '<S163>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_APMUtlPctOfDCDC_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_APMUtlPctOfDCDC_ErrSts'
     */
    /* Transition: '<S165>:107' */
    rtb_TmpSignalConversionAtVeC_ns = Rte_Read_VeCRDB_Pct_APMUtlPctOfDCDC_Value(
        &CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_Pct);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_APMUtlPctOfDCDC_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S170>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_APMUtlPctOfDCDC_SigSts_Value(&tmpRead_y);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S167>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_y) & 3U) != 0U)
    {
        /* Transition: '<S170>:100' */
        /* Transition: '<S170>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S170>:104' */
        /*  MM */
        if ((((uint32)tmpRead_y) & 4U) != 0U)
        {
            /* Transition: '<S170>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S170>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S170>:110' */
                /* Call Tmot */
                VeCRDB_y_APMUtlPctOfDCDC_CallStatus = 3U;

                /* Event: '<S170>:40' */
                /* Transition: '<S170>:115' */
                /* Transition: '<S170>:114' */
            }
        }
        else
        {
            /* Transition: '<S170>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ns) == 133)
            {
                /* Transition: '<S170>:95' */
                /* Transition: '<S170>:116' */
                /* Call Nothing */
                VeCRDB_y_APMUtlPctOfDCDC_CallStatus = 4U;

                /* Transition: '<S170>:114' */
            }
            else
            {
                /* Transition: '<S170>:120' */
                if ((((uint32)tmpRead_y) & 8U) != 0U)
                {
                    /* Transition: '<S170>:122' */
                    /* Transition: '<S170>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S170>:126' */
                }
                else
                {
                    /* Transition: '<S170>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S170>:117' */
                /* Call Poke */
                VeCRDB_y_APMUtlPctOfDCDC_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S54>/Poke' */
                /* FunctionCaller: '<S172>/Function Caller' */
                /* Event: '<S170>:38' */
                Rte_Call_PokeIDCR_Pct_UtilPctOfDCDC_PokeIDCR_Pct_UtilPctOfDCDC
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_Pct, FA_out_hg);

                /* End of Outputs for SubSystem: '<S54>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S170>:111' */
        /* Call Fsft */
        VeCRDB_y_APMUtlPctOfDCDC_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S54>/Fsft' */
        /* FunctionCaller: '<S171>/Function Caller' */
        /* Event: '<S170>:39' */
        Rte_Call_FsftIDCR_Pct_UtilPctOfDCDC_FsftIDCR_Pct_UtilPctOfDCDC();

        /* End of Outputs for SubSystem: '<S54>/Fsft' */
        /* Transition: '<S170>:113' */
        /* Transition: '<S170>:115' */
        /* Transition: '<S170>:114' */
    }

    /* End of Chart: '<S167>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_ImpactHardwire_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_ImpactHardwire_ErrSts'
     */
    /* Transition: '<S170>:107' */
    rtb_TmpSignalConversionAtVeCR_k = Rte_Read_VeCRDB_b_ImpactHardwire_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_I);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_ImpactHardwire_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S178>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_ImpactHardwire_SigSts_Value(&tmpRead_0);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S175>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_0) & 3U) != 0U)
    {
        /* Transition: '<S178>:100' */
        /* Transition: '<S178>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S178>:104' */
        /*  MM */
        if ((((uint32)tmpRead_0) & 4U) != 0U)
        {
            /* Transition: '<S178>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S178>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S178>:110' */
                /* Call Tmot */
                VeCRDB_y_ImpactHardwire_CallStatus = 3U;

                /* Event: '<S178>:40' */
                /* Transition: '<S178>:115' */
                /* Transition: '<S178>:114' */
            }
        }
        else
        {
            /* Transition: '<S178>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_k) == 133)
            {
                /* Transition: '<S178>:95' */
                /* Transition: '<S178>:116' */
                /* Call Nothing */
                VeCRDB_y_ImpactHardwire_CallStatus = 4U;

                /* Transition: '<S178>:114' */
            }
            else
            {
                /* Transition: '<S178>:120' */
                /* Transition: '<S178>:117' */
                /* Call Poke */
                VeCRDB_y_ImpactHardwire_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S173>/Poke' */
                /* FunctionCaller: '<S180>/Function Caller' */
                /* Event: '<S178>:38' */
                Rte_Call_PokeIMPR_b_ImpactHardwire_PokeIMPR_b_ImpactHardwire
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_I);

                /* End of Outputs for SubSystem: '<S173>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S178>:111' */
        /* Call Fsft */
        VeCRDB_y_ImpactHardwire_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S173>/Fsft' */
        /* FunctionCaller: '<S179>/Function Caller' */
        /* Event: '<S178>:39' */
        Rte_Call_FsftIMPR_b_ImpactHardwire_FsftIMPR_b_ImpactHardwire();

        /* End of Outputs for SubSystem: '<S173>/Fsft' */
        /* Transition: '<S178>:113' */
        /* Transition: '<S178>:115' */
        /* Transition: '<S178>:114' */
    }

    /* End of Chart: '<S175>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_ImpactHardwireV_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_ImpactHardwireV_ErrSts'
     */
    /* Transition: '<S178>:107' */
    rtb_TmpSignalConversionAtVeC_jw = Rte_Read_VeCRDB_b_ImpactHardwireV_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_n);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_ImpactHardwireV_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S184>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_ImpactHardwireV_SigSts_Value(&tmpRead_1);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S181>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1) & 3U) != 0U)
    {
        /* Transition: '<S184>:100' */
        /* Transition: '<S184>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S184>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1) & 4U) != 0U)
        {
            /* Transition: '<S184>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S184>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S184>:110' */
                /* Call Tmot */
                VeCRDB_y_ImpactHardwireV_CallStatus = 3U;

                /* Event: '<S184>:40' */
                /* Transition: '<S184>:115' */
                /* Transition: '<S184>:114' */
            }
        }
        else
        {
            /* Transition: '<S184>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_jw) == 133)
            {
                /* Transition: '<S184>:95' */
                /* Transition: '<S184>:116' */
                /* Call Nothing */
                VeCRDB_y_ImpactHardwireV_CallStatus = 4U;

                /* Transition: '<S184>:114' */
            }
            else
            {
                /* Transition: '<S184>:120' */
                /* Transition: '<S184>:117' */
                /* Call Poke */
                VeCRDB_y_ImpactHardwireV_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S174>/Poke' */
                /* FunctionCaller: '<S186>/Function Caller' */
                /* Event: '<S184>:38' */
                Rte_Call_PokeIMPR_b_ImpactHardwireV_PokeIMPR_b_ImpactHardwireV
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_n);

                /* End of Outputs for SubSystem: '<S174>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S184>:111' */
        /* Call Fsft */
        VeCRDB_y_ImpactHardwireV_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S174>/Fsft' */
        /* FunctionCaller: '<S185>/Function Caller' */
        /* Event: '<S184>:39' */
        Rte_Call_FsftIMPR_b_ImpactHardwireV_FsftIMPR_b_ImpactHardwireV();

        /* End of Outputs for SubSystem: '<S174>/Fsft' */
        /* Transition: '<S184>:113' */
        /* Transition: '<S184>:115' */
        /* Transition: '<S184>:114' */
    }

    /* End of Chart: '<S181>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BMS_HV_HiTempThd_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BMS_HV_HiTempThd_ErrSts'
     */
    /* Transition: '<S184>:107' */
    rtb_TmpSignalConversionAtVeCR_d = Rte_Read_VeCRDB_T_BMS_HV_HiTempThd_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_T_B);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BMS_HV_HiTempThd_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S195>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BMS_HV_HiTempThd_SigSts_Value(&tmpRead_2);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S192>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2) & 3U) != 0U)
    {
        /* Transition: '<S195>:100' */
        /* Transition: '<S195>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S195>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2) & 4U) != 0U)
        {
            /* Transition: '<S195>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S195>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S195>:110' */
                /* Call Tmot */
                VeCRDB_y_BMS_HV_HiTempThd_CallStatus = 3U;

                /* Event: '<S195>:40' */
                /* Transition: '<S195>:115' */
                /* Transition: '<S195>:114' */
            }
        }
        else
        {
            /* Transition: '<S195>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_d) == 133)
            {
                /* Transition: '<S195>:95' */
                /* Transition: '<S195>:116' */
                /* Call Nothing */
                VeCRDB_y_BMS_HV_HiTempThd_CallStatus = 4U;

                /* Transition: '<S195>:114' */
            }
            else
            {
                /* Transition: '<S195>:120' */
                if ((((uint32)tmpRead_2) & 8U) != 0U)
                {
                    /* Transition: '<S195>:122' */
                    /* Transition: '<S195>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S195>:126' */
                }
                else
                {
                    /* Transition: '<S195>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S195>:117' */
                /* Call Poke */
                VeCRDB_y_BMS_HV_HiTempThd_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S187>/Poke' */
                /* FunctionCaller: '<S197>/Function Caller' */
                /* Event: '<S195>:38' */
                Rte_Call_PokeTMIR_T_HV_BatHghTmp_Thrsh_PokeTMIR_T_HV_BatHghTmp_Thrsh
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_T_B, FA_out_hg);

                /* End of Outputs for SubSystem: '<S187>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S195>:111' */
        /* Call Fsft */
        VeCRDB_y_BMS_HV_HiTempThd_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S187>/Fsft' */
        /* FunctionCaller: '<S196>/Function Caller' */
        /* Event: '<S195>:39' */
        Rte_Call_FsftTMIR_T_HV_BatHghTmp_Thrsh_FsftTMIR_T_HV_BatHghTmp_Thrsh();

        /* End of Outputs for SubSystem: '<S187>/Fsft' */
        /* Transition: '<S195>:113' */
        /* Transition: '<S195>:115' */
        /* Transition: '<S195>:114' */
    }

    /* End of Chart: '<S192>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BMS_HVLoTempThd_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BMS_HVLoTempThd_ErrSts'
     */
    /* Transition: '<S195>:107' */
    rtb_TmpSignalConversionAtVe_h02 = Rte_Read_VeCRDB_T_BMS_HVLoTempThd_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__bi);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BMS_HVLoTempThd_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S201>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BMS_HVLoTempThd_SigSts_Value(&tmpRead_3);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S198>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_3) & 3U) != 0U)
    {
        /* Transition: '<S201>:100' */
        /* Transition: '<S201>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S201>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3) & 4U) != 0U)
        {
            /* Transition: '<S201>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S201>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S201>:110' */
                /* Call Tmot */
                VeCRDB_y_BMS_HVLoTempThd_CallStatus = 3U;

                /* Event: '<S201>:40' */
                /* Transition: '<S201>:115' */
                /* Transition: '<S201>:114' */
            }
        }
        else
        {
            /* Transition: '<S201>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_h02) == 133)
            {
                /* Transition: '<S201>:95' */
                /* Transition: '<S201>:116' */
                /* Call Nothing */
                VeCRDB_y_BMS_HVLoTempThd_CallStatus = 4U;

                /* Transition: '<S201>:114' */
            }
            else
            {
                /* Transition: '<S201>:120' */
                if ((((uint32)tmpRead_3) & 8U) != 0U)
                {
                    /* Transition: '<S201>:122' */
                    /* Transition: '<S201>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S201>:126' */
                }
                else
                {
                    /* Transition: '<S201>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S201>:117' */
                /* Call Poke */
                VeCRDB_y_BMS_HVLoTempThd_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S188>/Poke' */
                /* FunctionCaller: '<S203>/Function Caller' */
                /* Event: '<S201>:38' */
                Rte_Call_PokeTMIR_T_HV_BatLowTmp_Thrsh_PokeTMIR_T_HV_BatLowTmp_Thrsh
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__bi, FA_out_hg);

                /* End of Outputs for SubSystem: '<S188>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S201>:111' */
        /* Call Fsft */
        VeCRDB_y_BMS_HVLoTempThd_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S188>/Fsft' */
        /* FunctionCaller: '<S202>/Function Caller' */
        /* Event: '<S201>:39' */
        Rte_Call_FsftTMIR_T_HV_BatLowTmp_Thrsh_FsftTMIR_T_HV_BatLowTmp_Thrsh();

        /* End of Outputs for SubSystem: '<S188>/Fsft' */
        /* Transition: '<S201>:113' */
        /* Transition: '<S201>:115' */
        /* Transition: '<S201>:114' */
    }

    /* End of Chart: '<S198>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_HEV_OnRq_BPCM_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_HEV_OnRq_BPCM_ErrSts'
     */
    /* Transition: '<S201>:107' */
    rtb_TmpSignalConversionAtVeCR_o = Rte_Read_VeCRDB_b_HEV_OnRq_BPCM_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_H);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_HEV_OnRq_BPCM_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S206>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_HEV_OnRq_BPCM_SigSts_Value(&tmpRead_4);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S204>/Chart' */
    if ((((uint32)tmpRead_4) & 3U) != 0U)
    {
        /* Transition: '<S206>:100' */
        /* Transition: '<S206>:103' */
        /* Transition: '<S206>:111' */
        /* Call Fsft */
        VeCRDB_y_HEV_OnRq_BPCM_CallStatus = 2U;

        /* Event: '<S206>:39' */
        /* Transition: '<S206>:113' */
        /* Transition: '<S206>:115' */
        /* Transition: '<S206>:114' */
    }
    else
    {
        /* Transition: '<S206>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4) & 4U) != 0U)
        {
            /* Transition: '<S206>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S206>:88' */
                /* Transition: '<S206>:111' */
                /* Call Fsft */
                VeCRDB_y_HEV_OnRq_BPCM_CallStatus = 2U;

                /* Event: '<S206>:39' */
                /* Transition: '<S206>:113' */
                /* Transition: '<S206>:115' */
                /* Transition: '<S206>:114' */
            }
            else
            {
                /* Transition: '<S206>:110' */
                /* Call Tmot */
                VeCRDB_y_HEV_OnRq_BPCM_CallStatus = 3U;

                /* Event: '<S206>:40' */
                /* Transition: '<S206>:115' */
                /* Transition: '<S206>:114' */
            }
        }
        else
        {
            /* Transition: '<S206>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_o) == 133)
            {
                /* Transition: '<S206>:95' */
                /* Transition: '<S206>:116' */
                /* Call Nothing */
                VeCRDB_y_HEV_OnRq_BPCM_CallStatus = 4U;

                /* Transition: '<S206>:114' */
            }
            else
            {
                /* Transition: '<S206>:120' */
                /* Transition: '<S206>:117' */
                /* Call Poke */
                VeCRDB_y_HEV_OnRq_BPCM_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S189>/Poke' */
                /* FunctionCaller: '<S207>/Function Caller' */
                /* Event: '<S206>:38' */
                Rte_Call_PokeBPCR_b_HEVOnRqBPCM_PokeBPCR_b_HEVOnRqBPCM
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_H);

                /* End of Outputs for SubSystem: '<S189>/Poke' */
            }
        }
    }

    /* End of Chart: '<S204>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_HVBatCelVoltHiThrs_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_HVBatCelVoltHiThrs_ErrSts'
     */
    /* Transition: '<S206>:107' */
    rtb_TmpSignalConversionAtVeC_hv = Rte_Read_VeCRDB_d_HVBatCelVoltHiThrs_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_d_H);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_HVBatCelVoltHiThrs_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S211>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_HVBatCelVoltHiThrs_SigSts_Value(&tmpRead_5);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S208>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_5) & 3U) != 0U)
    {
        /* Transition: '<S211>:100' */
        /* Transition: '<S211>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S211>:104' */
        /*  MM */
        if ((((uint32)tmpRead_5) & 4U) != 0U)
        {
            /* Transition: '<S211>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S211>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S211>:110' */
                /* Call Tmot */
                VeCRDB_y_HVBatCelVoltHiThrs_CallStatus = 3U;

                /* Event: '<S211>:40' */
                /* Transition: '<S211>:115' */
                /* Transition: '<S211>:114' */
            }
        }
        else
        {
            /* Transition: '<S211>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_hv) == 133)
            {
                /* Transition: '<S211>:95' */
                /* Transition: '<S211>:116' */
                /* Call Nothing */
                VeCRDB_y_HVBatCelVoltHiThrs_CallStatus = 4U;

                /* Transition: '<S211>:114' */
            }
            else
            {
                /* Transition: '<S211>:120' */
                if ((((uint32)tmpRead_5) & 8U) != 0U)
                {
                    /* Transition: '<S211>:122' */
                    /* Transition: '<S211>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S211>:126' */
                }
                else
                {
                    /* Transition: '<S211>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S211>:117' */
                /* Call Poke */
                VeCRDB_y_HVBatCelVoltHiThrs_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S190>/Poke' */
                /* FunctionCaller: '<S213>/Function Caller' */
                /* Event: '<S211>:38' */
                Rte_Call_PokeBPCR_U_CellVoltHighThrsh_PokeBPCR_U_CellVoltHighThrsh
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_d_H, FA_out_hg);

                /* End of Outputs for SubSystem: '<S190>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S211>:111' */
        /* Call Fsft */
        VeCRDB_y_HVBatCelVoltHiThrs_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S190>/Fsft' */
        /* FunctionCaller: '<S212>/Function Caller' */
        /* Event: '<S211>:39' */
        Rte_Call_FsftBPCR_U_CellVoltHighThrsh_FsftBPCR_U_CellVoltHighThrsh();

        /* End of Outputs for SubSystem: '<S190>/Fsft' */
        /* Transition: '<S211>:113' */
        /* Transition: '<S211>:115' */
        /* Transition: '<S211>:114' */
    }

    /* End of Chart: '<S208>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_HVBatCelVoltLoThrs_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_HVBatCelVoltLoThrs_ErrSts'
     */
    /* Transition: '<S211>:107' */
    rtb_TmpSignalConversionAtVeC_f0 = Rte_Read_VeCRDB_h_HVBatCelVoltLoThrs_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_h_H);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_HVBatCelVoltLoThrs_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S217>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_HVBatCelVoltLoThrs_SigSts_Value(&tmpRead_6);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S214>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_6) & 3U) != 0U)
    {
        /* Transition: '<S217>:100' */
        /* Transition: '<S217>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S217>:104' */
        /*  MM */
        if ((((uint32)tmpRead_6) & 4U) != 0U)
        {
            /* Transition: '<S217>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S217>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S217>:110' */
                /* Call Tmot */
                VeCRDB_y_HVBatCelVoltLoThrs_CallStatus = 3U;

                /* Event: '<S217>:40' */
                /* Transition: '<S217>:115' */
                /* Transition: '<S217>:114' */
            }
        }
        else
        {
            /* Transition: '<S217>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_f0) == 133)
            {
                /* Transition: '<S217>:95' */
                /* Transition: '<S217>:116' */
                /* Call Nothing */
                VeCRDB_y_HVBatCelVoltLoThrs_CallStatus = 4U;

                /* Transition: '<S217>:114' */
            }
            else
            {
                /* Transition: '<S217>:120' */
                /* Transition: '<S217>:117' */
                /* Call Poke */
                VeCRDB_y_HVBatCelVoltLoThrs_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S191>/Poke' */
                /* FunctionCaller: '<S219>/Function Caller' incorporates:
                 *  Constant: '<S219>/Constant'
                 */
                /* Event: '<S217>:38' */
                Rte_Call_PokeBPCR_U_CellVoltLowThrsh_PokeBPCR_U_CellVoltLowThrsh
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_h_H, false);

                /* End of Outputs for SubSystem: '<S191>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S217>:111' */
        /* Call Fsft */
        VeCRDB_y_HVBatCelVoltLoThrs_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S191>/Fsft' */
        /* FunctionCaller: '<S218>/Function Caller' */
        /* Event: '<S217>:39' */
        Rte_Call_FsftBPCR_U_CellVoltLowThrsh_FsftBPCR_U_CellVoltLowThrsh();

        /* End of Outputs for SubSystem: '<S191>/Fsft' */
        /* Transition: '<S217>:113' */
        /* Transition: '<S217>:115' */
        /* Transition: '<S217>:114' */
    }

    /* End of Chart: '<S214>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCMCntctrsMTOWrn_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCMCntctrsMTOWrn_ErrSts'
     */
    /* Transition: '<S217>:107' */
    rtb_TmpSignalConversionAtVeC_ba = Rte_Read_VeCRDB_b_BPCMCntctrsMTOWrn_Value(
        &CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_B);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCMCntctrsMTOWrn_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S234>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCMCntctrsMTOWrn_SigSts_Value(&tmpRead_z);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S232>/Chart' */
    if ((((uint32)tmpRead_z) & 3U) != 0U)
    {
        /* Transition: '<S234>:100' */
        /* Transition: '<S234>:103' */
        /* Transition: '<S234>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCMCntctrsMTOWrn_CallStatus = 2U;

        /* Event: '<S234>:39' */
        /* Transition: '<S234>:113' */
        /* Transition: '<S234>:115' */
        /* Transition: '<S234>:114' */
    }
    else
    {
        /* Transition: '<S234>:104' */
        /*  MM */
        if ((((uint32)tmpRead_z) & 4U) != 0U)
        {
            /* Transition: '<S234>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S234>:88' */
                /* Transition: '<S234>:111' */
                /* Call Fsft */
                VeCRDB_y_BPCMCntctrsMTOWrn_CallStatus = 2U;

                /* Event: '<S234>:39' */
                /* Transition: '<S234>:113' */
                /* Transition: '<S234>:115' */
                /* Transition: '<S234>:114' */
            }
            else
            {
                /* Transition: '<S234>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCMCntctrsMTOWrn_CallStatus = 3U;

                /* Event: '<S234>:40' */
                /* Transition: '<S234>:115' */
                /* Transition: '<S234>:114' */
            }
        }
        else
        {
            /* Transition: '<S234>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ba) == 133)
            {
                /* Transition: '<S234>:95' */
                /* Transition: '<S234>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCMCntctrsMTOWrn_CallStatus = 4U;

                /* Transition: '<S234>:114' */
            }
            else
            {
                /* Transition: '<S234>:120' */
                /* Transition: '<S234>:117' */
                /* Call Poke */
                VeCRDB_y_BPCMCntctrsMTOWrn_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S220>/Poke' */
                /* FunctionCaller: '<S235>/Function Caller' */
                /* Event: '<S234>:38' */
                Rte_Call_PokeBPCR_b_HV_BatCntctrOpenPending_PokeBPCR_b_HV_BatCntctrOpenPending
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_B);

                /* End of Outputs for SubSystem: '<S220>/Poke' */
            }
        }
    }

    /* End of Chart: '<S232>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCMCntctrsSTOWrn_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCMCntctrsSTOWrn_ErrSts'
     */
    /* Transition: '<S234>:107' */
    rtb_TmpSignalConversionAtVeC_ei = Rte_Read_VeCRDB_b_BPCMCntctrsSTOWrn_Value(
        &CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__n3);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCMCntctrsSTOWrn_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S238>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCMCntctrsSTOWrn_SigSts_Value(&tmpRead_10);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S236>/Chart' */
    if ((((uint32)tmpRead_10) & 3U) != 0U)
    {
        /* Transition: '<S238>:100' */
        /* Transition: '<S238>:103' */
        /* Transition: '<S238>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCMCntctrsSTOWrn_CallStatus = 2U;

        /* Event: '<S238>:39' */
        /* Transition: '<S238>:113' */
        /* Transition: '<S238>:115' */
        /* Transition: '<S238>:114' */
    }
    else
    {
        /* Transition: '<S238>:104' */
        /*  MM */
        if ((((uint32)tmpRead_10) & 4U) != 0U)
        {
            /* Transition: '<S238>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S238>:88' */
                /* Transition: '<S238>:111' */
                /* Call Fsft */
                VeCRDB_y_BPCMCntctrsSTOWrn_CallStatus = 2U;

                /* Event: '<S238>:39' */
                /* Transition: '<S238>:113' */
                /* Transition: '<S238>:115' */
                /* Transition: '<S238>:114' */
            }
            else
            {
                /* Transition: '<S238>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCMCntctrsSTOWrn_CallStatus = 3U;

                /* Event: '<S238>:40' */
                /* Transition: '<S238>:115' */
                /* Transition: '<S238>:114' */
            }
        }
        else
        {
            /* Transition: '<S238>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ei) == 133)
            {
                /* Transition: '<S238>:95' */
                /* Transition: '<S238>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCMCntctrsSTOWrn_CallStatus = 4U;

                /* Transition: '<S238>:114' */
            }
            else
            {
                /* Transition: '<S238>:120' */
                /* Transition: '<S238>:117' */
                /* Call Poke */
                VeCRDB_y_BPCMCntctrsSTOWrn_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S221>/Poke' */
                /* FunctionCaller: '<S239>/Function Caller' */
                /* Event: '<S238>:38' */
                Rte_Call_PokeBPCR_b_HV_BatCntctrOpenReq_PokeBPCR_b_HV_BatCntctrOpenReq
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__n3);

                /* End of Outputs for SubSystem: '<S221>/Poke' */
            }
        }
    }

    /* End of Chart: '<S236>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HVCelMxDchImp_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HVCelMxDchImp_ErrSts'
     */
    /* Transition: '<S238>:107' */
    rtb_TmpSignalConversionAtVeCR_c =
        Rte_Read_VeCRDB_dT_BPCM_HVCelMxDchImp_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_dT_);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HVCelMxDchImp_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S243>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HVCelMxDchImp_SigSts_Value(&tmpRead_11);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S240>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_11) & 3U) != 0U)
    {
        /* Transition: '<S243>:100' */
        /* Transition: '<S243>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S243>:104' */
        /*  MM */
        if ((((uint32)tmpRead_11) & 4U) != 0U)
        {
            /* Transition: '<S243>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S243>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S243>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HVCelMxDchImp_CallStatus = 3U;

                /* Event: '<S243>:40' */
                /* Transition: '<S243>:115' */
                /* Transition: '<S243>:114' */
            }
        }
        else
        {
            /* Transition: '<S243>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_c) == 133)
            {
                /* Transition: '<S243>:95' */
                /* Transition: '<S243>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HVCelMxDchImp_CallStatus = 4U;

                /* Transition: '<S243>:114' */
            }
            else
            {
                /* Transition: '<S243>:120' */
                if ((((uint32)tmpRead_11) & 8U) != 0U)
                {
                    /* Transition: '<S243>:122' */
                    /* Transition: '<S243>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S243>:126' */
                }
                else
                {
                    /* Transition: '<S243>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S243>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HVCelMxDchImp_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S222>/Poke' */
                /* FunctionCaller: '<S245>/Function Caller' */
                /* Event: '<S243>:38' */
                Rte_Call_PokeBPCR_Z_MaxCellDischargeImpedance_PokeBPCR_Z_MaxCellDischargeImpedance
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_dT_, FA_out_hg);

                /* End of Outputs for SubSystem: '<S222>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S243>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HVCelMxDchImp_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S222>/Fsft' */
        /* FunctionCaller: '<S244>/Function Caller' */
        /* Event: '<S243>:39' */
        Rte_Call_FsftBPCR_Z_MaxCellDischargeImpedance_FsftBPCR_Z_MaxCellDischargeImpedance
            ();

        /* End of Outputs for SubSystem: '<S222>/Fsft' */
        /* Transition: '<S243>:113' */
        /* Transition: '<S243>:115' */
        /* Transition: '<S243>:114' */
    }

    /* End of Chart: '<S240>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HVClMinDchImp_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HVClMinDchImp_ErrSts'
     */
    /* Transition: '<S243>:107' */
    rtb_TmpSignalConversionAtVeC_dm =
        Rte_Read_VeCRDB_dT_BPCM_HVClMinDchImp_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_d_m);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HVClMinDchImp_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S249>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HVClMinDchImp_SigSts_Value(&tmpRead_12);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S246>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_12) & 3U) != 0U)
    {
        /* Transition: '<S249>:100' */
        /* Transition: '<S249>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S249>:104' */
        /*  MM */
        if ((((uint32)tmpRead_12) & 4U) != 0U)
        {
            /* Transition: '<S249>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S249>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S249>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HVClMinDchImp_CallStatus = 3U;

                /* Event: '<S249>:40' */
                /* Transition: '<S249>:115' */
                /* Transition: '<S249>:114' */
            }
        }
        else
        {
            /* Transition: '<S249>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_dm) == 133)
            {
                /* Transition: '<S249>:95' */
                /* Transition: '<S249>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HVClMinDchImp_CallStatus = 4U;

                /* Transition: '<S249>:114' */
            }
            else
            {
                /* Transition: '<S249>:120' */
                if ((((uint32)tmpRead_12) & 8U) != 0U)
                {
                    /* Transition: '<S249>:122' */
                    /* Transition: '<S249>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S249>:126' */
                }
                else
                {
                    /* Transition: '<S249>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S249>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HVClMinDchImp_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S223>/Poke' */
                /* FunctionCaller: '<S251>/Function Caller' */
                /* Event: '<S249>:38' */
                Rte_Call_PokeBPCR_Z_MinCellDischargeImpedance_PokeBPCR_Z_MinCellDischargeImpedance
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_d_m, FA_out_hg);

                /* End of Outputs for SubSystem: '<S223>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S249>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HVClMinDchImp_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S223>/Fsft' */
        /* FunctionCaller: '<S250>/Function Caller' */
        /* Event: '<S249>:39' */
        Rte_Call_FsftBPCR_Z_MinCellDischargeImpedance_FsftBPCR_Z_MinCellDischargeImpedance
            ();

        /* End of Outputs for SubSystem: '<S223>/Fsft' */
        /* Transition: '<S249>:113' */
        /* Transition: '<S249>:115' */
        /* Transition: '<S249>:114' */
    }

    /* End of Chart: '<S246>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HVChrgCurProf_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HVChrgCurProf_ErrSts'
     */
    /* Transition: '<S249>:107' */
    rtb_TmpSignalConversionAtVeC_od = Rte_Read_VeCRDB_I_BPCM_HVChrgCurProf_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_I_B);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HVChrgCurProf_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S255>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HVChrgCurProf_SigSts_Value(&tmpRead_13);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S252>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_13) & 3U) != 0U)
    {
        /* Transition: '<S255>:100' */
        /* Transition: '<S255>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S255>:104' */
        /*  MM */
        if ((((uint32)tmpRead_13) & 4U) != 0U)
        {
            /* Transition: '<S255>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S255>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S255>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HVChrgCurProf_CallStatus = 3U;

                /* Event: '<S255>:40' */
                /* Transition: '<S255>:115' */
                /* Transition: '<S255>:114' */
            }
        }
        else
        {
            /* Transition: '<S255>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_od) == 133)
            {
                /* Transition: '<S255>:95' */
                /* Transition: '<S255>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HVChrgCurProf_CallStatus = 4U;

                /* Transition: '<S255>:114' */
            }
            else
            {
                /* Transition: '<S255>:120' */
                if ((((uint32)tmpRead_13) & 8U) != 0U)
                {
                    /* Transition: '<S255>:122' */
                    /* Transition: '<S255>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S255>:126' */
                }
                else
                {
                    /* Transition: '<S255>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S255>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HVChrgCurProf_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S224>/Poke' */
                /* FunctionCaller: '<S257>/Function Caller' */
                /* Event: '<S255>:38' */
                Rte_Call_PokeBPCR_I_MaxChgCurrAlwd_PokeBPCR_I_MaxChgCurrAlwd
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_I_B, FA_out_hg);

                /* End of Outputs for SubSystem: '<S224>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S255>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HVChrgCurProf_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S224>/Fsft' */
        /* FunctionCaller: '<S256>/Function Caller' */
        /* Event: '<S255>:39' */
        Rte_Call_FsftBPCR_I_MaxChgCurrAlwd_FsftBPCR_I_MaxChgCurrAlwd();

        /* End of Outputs for SubSystem: '<S224>/Fsft' */
        /* Transition: '<S255>:113' */
        /* Transition: '<S255>:115' */
        /* Transition: '<S255>:114' */
    }

    /* End of Chart: '<S252>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HV_BatChrgSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HV_BatChrgSts_ErrSts'
     */
    /* Transition: '<S255>:107' */
    rtb_TmpSignalConversionAtVeC_o4 = Rte_Read_VeCRDB_y_BPCM_HV_BatChrgSts_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_B);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HV_BatChrgSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S261>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HV_BatChrgSts_SigSts_Value(&tmpRead_14);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S258>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_14) & 3U) != 0U)
    {
        /* Transition: '<S261>:100' */
        /* Transition: '<S261>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S261>:104' */
        /*  MM */
        if ((((uint32)tmpRead_14) & 4U) != 0U)
        {
            /* Transition: '<S261>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S261>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S261>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HV_BatChrgSts_CallStatus = 3U;

                /* Event: '<S261>:40' */
                /* Transition: '<S261>:115' */
                /* Transition: '<S261>:114' */
            }
        }
        else
        {
            /* Transition: '<S261>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_o4) == 133)
            {
                /* Transition: '<S261>:95' */
                /* Transition: '<S261>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HV_BatChrgSts_CallStatus = 4U;

                /* Transition: '<S261>:114' */
            }
            else
            {
                /* Transition: '<S261>:120' */
                if ((((uint32)tmpRead_14) & 8U) != 0U)
                {
                    /* Transition: '<S261>:122' */
                    /* Transition: '<S261>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S261>:126' */
                }
                else
                {
                    /* Transition: '<S261>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S261>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HV_BatChrgSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S225>/Poke' */
                /* FunctionCaller: '<S263>/Function Caller' */
                /* Event: '<S261>:38' */
                Rte_Call_PokeBPCR_e_ChargingStat_BPCM_PokeBPCR_e_ChargingStat_BPCM
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_B, FA_out_hg);

                /* End of Outputs for SubSystem: '<S225>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S261>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HV_BatChrgSts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S225>/Fsft' */
        /* FunctionCaller: '<S262>/Function Caller' */
        /* Event: '<S261>:39' */
        Rte_Call_FsftBPCR_e_ChargingStat_BPCM_FsftBPCR_e_ChargingStat_BPCM();

        /* End of Outputs for SubSystem: '<S225>/Fsft' */
        /* Transition: '<S261>:113' */
        /* Transition: '<S261>:115' */
        /* Transition: '<S261>:114' */
    }

    /* End of Chart: '<S258>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HVPwrMaxChgLT_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HVPwrMaxChgLT_ErrSts'
     */
    /* Transition: '<S261>:107' */
    rtb_TmpSignalConversionAtVeC_ji = Rte_Read_VeCRDB_P_BPCM_HVPwrMaxChgLT_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_P_B);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HVPwrMaxChgLT_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S268>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HVPwrMaxChgLT_SigSts_Value(&tmpRead_15);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S264>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_15) & 3U) != 0U)
    {
        /* Transition: '<S268>:100' */
        /* Transition: '<S268>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S268>:104' */
        /*  MM */
        if ((((uint32)tmpRead_15) & 4U) != 0U)
        {
            /* Transition: '<S268>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S268>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S268>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HVPwrMaxChgLT_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S226>/Tmot' */
                /* FunctionCaller: '<S271>/Function Caller' */
                /* Event: '<S268>:40' */
                Rte_Call_TmotBPCR_b_HV_BatChrgPwrET_TmotBPCR_b_HV_BatChrgPwrET();

                /* End of Outputs for SubSystem: '<S226>/Tmot' */
                /* Transition: '<S268>:115' */
                /* Transition: '<S268>:114' */
            }
        }
        else
        {
            /* Transition: '<S268>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ji) == 133)
            {
                /* Transition: '<S268>:95' */
                /* Transition: '<S268>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HVPwrMaxChgLT_CallStatus = 4U;

                /* Transition: '<S268>:114' */
            }
            else
            {
                /* Transition: '<S268>:120' */
                if ((((uint32)tmpRead_15) & 8U) != 0U)
                {
                    /* Transition: '<S268>:122' */
                    /* Transition: '<S268>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S268>:126' */
                }
                else
                {
                    /* Transition: '<S268>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S268>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HVPwrMaxChgLT_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S226>/Poke' */
                /* FunctionCaller: '<S270>/Function Caller' */
                /* Event: '<S268>:38' */
                Rte_Call_PokeBPCR_P_HV_BatChrgPwrET_PokeBPCR_P_HV_BatChrgPwrET
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_P_B, FA_out_hg);

                /* End of Outputs for SubSystem: '<S226>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S268>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HVPwrMaxChgLT_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S226>/Fsft' */
        /* FunctionCaller: '<S269>/Function Caller' */
        /* Event: '<S268>:39' */
        Rte_Call_FsftBPCR_b_HV_BatChrgPwrET_FsftBPCR_b_HV_BatChrgPwrET();

        /* End of Outputs for SubSystem: '<S226>/Fsft' */
        /* Transition: '<S268>:113' */
        /* Transition: '<S268>:115' */
        /* Transition: '<S268>:114' */
    }

    /* End of Chart: '<S264>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HVPwrMaxChgMT_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HVPwrMaxChgMT_ErrSts'
     */
    /* Transition: '<S268>:107' */
    rtb_TmpSignalConversionAtVeC_ip = Rte_Read_VeCRDB_P_BPCM_HVPwrMaxChgMT_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_P_k);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HVPwrMaxChgMT_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S276>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HVPwrMaxChgMT_SigSts_Value(&tmpRead_16);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S272>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_16) & 3U) != 0U)
    {
        /* Transition: '<S276>:100' */
        /* Transition: '<S276>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S276>:104' */
        /*  MM */
        if ((((uint32)tmpRead_16) & 4U) != 0U)
        {
            /* Transition: '<S276>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S276>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S276>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HVPwrMaxChgMT_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S227>/Tmot' */
                /* FunctionCaller: '<S279>/Function Caller' */
                /* Event: '<S276>:40' */
                Rte_Call_TmotBPCR_b_HV_BatChrgPwrLT_TmotBPCR_b_HV_BatChrgPwrLT();

                /* End of Outputs for SubSystem: '<S227>/Tmot' */
                /* Transition: '<S276>:115' */
                /* Transition: '<S276>:114' */
            }
        }
        else
        {
            /* Transition: '<S276>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ip) == 133)
            {
                /* Transition: '<S276>:95' */
                /* Transition: '<S276>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HVPwrMaxChgMT_CallStatus = 4U;

                /* Transition: '<S276>:114' */
            }
            else
            {
                /* Transition: '<S276>:120' */
                if ((((uint32)tmpRead_16) & 8U) != 0U)
                {
                    /* Transition: '<S276>:122' */
                    /* Transition: '<S276>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S276>:126' */
                }
                else
                {
                    /* Transition: '<S276>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S276>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HVPwrMaxChgMT_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S227>/Poke' */
                /* FunctionCaller: '<S278>/Function Caller' */
                /* Event: '<S276>:38' */
                Rte_Call_PokeBPCR_P_HV_BatChrgPwrLT_PokeBPCR_P_HV_BatChrgPwrLT
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_P_k, FA_out_hg);

                /* End of Outputs for SubSystem: '<S227>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S276>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HVPwrMaxChgMT_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S227>/Fsft' */
        /* FunctionCaller: '<S277>/Function Caller' */
        /* Event: '<S276>:39' */
        Rte_Call_FsftBPCR_b_HV_BatChrgPwrLT_FsftBPCR_b_HV_BatChrgPwrLT();

        /* End of Outputs for SubSystem: '<S227>/Fsft' */
        /* Transition: '<S276>:113' */
        /* Transition: '<S276>:115' */
        /* Transition: '<S276>:114' */
    }

    /* End of Chart: '<S272>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HVPwrMaxChgST_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HVPwrMaxChgST_ErrSts'
     */
    /* Transition: '<S276>:107' */
    rtb_TmpSignalConversionAtVeC_gx = Rte_Read_VeCRDB_P_BPCM_HVPwrMaxChgST_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_P_n);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HVPwrMaxChgST_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S284>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HVPwrMaxChgST_SigSts_Value(&tmpRead_17);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S280>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_17) & 3U) != 0U)
    {
        /* Transition: '<S284>:100' */
        /* Transition: '<S284>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S284>:104' */
        /*  MM */
        if ((((uint32)tmpRead_17) & 4U) != 0U)
        {
            /* Transition: '<S284>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S284>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S284>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HVPwrMaxChgST_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S228>/Tmot' */
                /* FunctionCaller: '<S287>/Function Caller' */
                /* Event: '<S284>:40' */
                Rte_Call_TmotBPCR_b_HV_BatChrgPwrST_TmotBPCR_b_HV_BatChrgPwrST();

                /* End of Outputs for SubSystem: '<S228>/Tmot' */
                /* Transition: '<S284>:115' */
                /* Transition: '<S284>:114' */
            }
        }
        else
        {
            /* Transition: '<S284>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_gx) == 133)
            {
                /* Transition: '<S284>:95' */
                /* Transition: '<S284>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HVPwrMaxChgST_CallStatus = 4U;

                /* Transition: '<S284>:114' */
            }
            else
            {
                /* Transition: '<S284>:120' */
                if ((((uint32)tmpRead_17) & 8U) != 0U)
                {
                    /* Transition: '<S284>:122' */
                    /* Transition: '<S284>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S284>:126' */
                }
                else
                {
                    /* Transition: '<S284>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S284>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HVPwrMaxChgST_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S228>/Poke' */
                /* FunctionCaller: '<S286>/Function Caller' */
                /* Event: '<S284>:38' */
                Rte_Call_PokeBPCR_P_HV_BatChrgPwrST_PokeBPCR_P_HV_BatChrgPwrST
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_P_n, FA_out_hg);

                /* End of Outputs for SubSystem: '<S228>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S284>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HVPwrMaxChgST_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S228>/Fsft' */
        /* FunctionCaller: '<S285>/Function Caller' */
        /* Event: '<S284>:39' */
        Rte_Call_FsftBPCR_b_HV_BatChrgPwrST_FsftBPCR_b_HV_BatChrgPwrST();

        /* End of Outputs for SubSystem: '<S228>/Fsft' */
        /* Transition: '<S284>:113' */
        /* Transition: '<S284>:115' */
        /* Transition: '<S284>:114' */
    }

    /* End of Chart: '<S280>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HVPwrMxDchgLT_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HVPwrMxDchgLT_ErrSts'
     */
    /* Transition: '<S284>:107' */
    rtb_TmpSignalConversionAtVeC_ol = Rte_Read_VeCRDB_P_BPCM_HVPwrMxDchgLT_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_P_e);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HVPwrMxDchgLT_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S292>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HVPwrMxDchgLT_SigSts_Value(&tmpRead_18);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S288>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_18) & 3U) != 0U)
    {
        /* Transition: '<S292>:100' */
        /* Transition: '<S292>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S292>:104' */
        /*  MM */
        if ((((uint32)tmpRead_18) & 4U) != 0U)
        {
            /* Transition: '<S292>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S292>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S292>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HVPwrMxDchgLT_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S229>/Tmot' */
                /* FunctionCaller: '<S295>/Function Caller' */
                /* Event: '<S292>:40' */
                Rte_Call_TmotBPCR_b_HV_BatDschrgPwrET_TmotBPCR_b_HV_BatDschrgPwrET
                    ();

                /* End of Outputs for SubSystem: '<S229>/Tmot' */
                /* Transition: '<S292>:115' */
                /* Transition: '<S292>:114' */
            }
        }
        else
        {
            /* Transition: '<S292>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ol) == 133)
            {
                /* Transition: '<S292>:95' */
                /* Transition: '<S292>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HVPwrMxDchgLT_CallStatus = 4U;

                /* Transition: '<S292>:114' */
            }
            else
            {
                /* Transition: '<S292>:120' */
                if ((((uint32)tmpRead_18) & 8U) != 0U)
                {
                    /* Transition: '<S292>:122' */
                    /* Transition: '<S292>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S292>:126' */
                }
                else
                {
                    /* Transition: '<S292>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S292>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HVPwrMxDchgLT_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S229>/Poke' */
                /* FunctionCaller: '<S294>/Function Caller' */
                /* Event: '<S292>:38' */
                Rte_Call_PokeBPCR_P_HV_BatDschrgPwrET_PokeBPCR_P_HV_BatDschrgPwrET
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_P_e, FA_out_hg);

                /* End of Outputs for SubSystem: '<S229>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S292>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HVPwrMxDchgLT_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S229>/Fsft' */
        /* FunctionCaller: '<S293>/Function Caller' */
        /* Event: '<S292>:39' */
        Rte_Call_FsftBPCR_b_HV_BatDschrgPwrET_FsftBPCR_b_HV_BatDschrgPwrET();

        /* End of Outputs for SubSystem: '<S229>/Fsft' */
        /* Transition: '<S292>:113' */
        /* Transition: '<S292>:115' */
        /* Transition: '<S292>:114' */
    }

    /* End of Chart: '<S288>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HVPwrMxDchgMT_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HVPwrMxDchgMT_ErrSts'
     */
    /* Transition: '<S292>:107' */
    rtb_TmpSignalConversionAtVeC_lk = Rte_Read_VeCRDB_P_BPCM_HVPwrMxDchgMT_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_P_d);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HVPwrMxDchgMT_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S300>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HVPwrMxDchgMT_SigSts_Value(&tmpRead_19);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S296>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_19) & 3U) != 0U)
    {
        /* Transition: '<S300>:100' */
        /* Transition: '<S300>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S300>:104' */
        /*  MM */
        if ((((uint32)tmpRead_19) & 4U) != 0U)
        {
            /* Transition: '<S300>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S300>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S300>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HVPwrMxDchgMT_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S230>/Tmot' */
                /* FunctionCaller: '<S303>/Function Caller' */
                /* Event: '<S300>:40' */
                Rte_Call_TmotBPCR_b_HV_BatDschrgPwrLT_TmotBPCR_b_HV_BatDschrgPwrLT
                    ();

                /* End of Outputs for SubSystem: '<S230>/Tmot' */
                /* Transition: '<S300>:115' */
                /* Transition: '<S300>:114' */
            }
        }
        else
        {
            /* Transition: '<S300>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_lk) == 133)
            {
                /* Transition: '<S300>:95' */
                /* Transition: '<S300>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HVPwrMxDchgMT_CallStatus = 4U;

                /* Transition: '<S300>:114' */
            }
            else
            {
                /* Transition: '<S300>:120' */
                if ((((uint32)tmpRead_19) & 8U) != 0U)
                {
                    /* Transition: '<S300>:122' */
                    /* Transition: '<S300>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S300>:126' */
                }
                else
                {
                    /* Transition: '<S300>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S300>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HVPwrMxDchgMT_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S230>/Poke' */
                /* FunctionCaller: '<S302>/Function Caller' */
                /* Event: '<S300>:38' */
                Rte_Call_PokeBPCR_P_HV_BatDschrgPwrLT_PokeBPCR_P_HV_BatDschrgPwrLT
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_P_d, FA_out_hg);

                /* End of Outputs for SubSystem: '<S230>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S300>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HVPwrMxDchgMT_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S230>/Fsft' */
        /* FunctionCaller: '<S301>/Function Caller' */
        /* Event: '<S300>:39' */
        Rte_Call_FsftBPCR_b_HV_BatDschrgPwrLT_FsftBPCR_b_HV_BatDschrgPwrLT();

        /* End of Outputs for SubSystem: '<S230>/Fsft' */
        /* Transition: '<S300>:113' */
        /* Transition: '<S300>:115' */
        /* Transition: '<S300>:114' */
    }

    /* End of Chart: '<S296>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HVPwrMxDchgST_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HVPwrMxDchgST_ErrSts'
     */
    /* Transition: '<S300>:107' */
    rtb_TmpSignalConversionAtVeC_gj = Rte_Read_VeCRDB_P_BPCM_HVPwrMxDchgST_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_P_b);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HVPwrMxDchgST_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S308>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HVPwrMxDchgST_SigSts_Value(&tmpRead_1a);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S304>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1a) & 3U) != 0U)
    {
        /* Transition: '<S308>:100' */
        /* Transition: '<S308>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S308>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1a) & 4U) != 0U)
        {
            /* Transition: '<S308>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S308>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S308>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HVPwrMxDchgST_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S231>/Tmot' */
                /* FunctionCaller: '<S311>/Function Caller' */
                /* Event: '<S308>:40' */
                Rte_Call_TmotBPCR_b_HV_BatDschrgPwrST_TmotBPCR_b_HV_BatDschrgPwrST
                    ();

                /* End of Outputs for SubSystem: '<S231>/Tmot' */
                /* Transition: '<S308>:115' */
                /* Transition: '<S308>:114' */
            }
        }
        else
        {
            /* Transition: '<S308>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_gj) == 133)
            {
                /* Transition: '<S308>:95' */
                /* Transition: '<S308>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HVPwrMxDchgST_CallStatus = 4U;

                /* Transition: '<S308>:114' */
            }
            else
            {
                /* Transition: '<S308>:120' */
                if ((((uint32)tmpRead_1a) & 8U) != 0U)
                {
                    /* Transition: '<S308>:122' */
                    /* Transition: '<S308>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S308>:126' */
                }
                else
                {
                    /* Transition: '<S308>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S308>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HVPwrMxDchgST_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S231>/Poke' */
                /* FunctionCaller: '<S310>/Function Caller' */
                /* Event: '<S308>:38' */
                Rte_Call_PokeBPCR_P_HV_BatDschrgPwrST_PokeBPCR_P_HV_BatDschrgPwrST
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_P_b, FA_out_hg);

                /* End of Outputs for SubSystem: '<S231>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S308>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HVPwrMxDchgST_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S231>/Fsft' */
        /* FunctionCaller: '<S309>/Function Caller' */
        /* Event: '<S308>:39' */
        Rte_Call_FsftBPCR_b_HV_BatDschrgPwrST_FsftBPCR_b_HV_BatDschrgPwrST();

        /* End of Outputs for SubSystem: '<S231>/Fsft' */
        /* Transition: '<S308>:113' */
        /* Transition: '<S308>:115' */
        /* Transition: '<S308>:114' */
    }

    /* End of Chart: '<S304>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCMInterlockSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCMInterlockSts_ErrSts'
     */
    /* Transition: '<S308>:107' */
    rtb_TmpSignalConversionAtVeC_dy = Rte_Read_VeCRDB_y_BPCMInterlockSts_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__id);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCMInterlockSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S352>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCMInterlockSts_SigSts_Value(&tmpRead_1b);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S349>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1b) & 3U) != 0U)
    {
        /* Transition: '<S352>:100' */
        /* Transition: '<S352>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S352>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1b) & 4U) != 0U)
        {
            /* Transition: '<S352>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S352>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S352>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCMInterlockSts_CallStatus = 3U;

                /* Event: '<S352>:40' */
                /* Transition: '<S352>:115' */
                /* Transition: '<S352>:114' */
            }
        }
        else
        {
            /* Transition: '<S352>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_dy) == 133)
            {
                /* Transition: '<S352>:95' */
                /* Transition: '<S352>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCMInterlockSts_CallStatus = 4U;

                /* Transition: '<S352>:114' */
            }
            else
            {
                /* Transition: '<S352>:120' */
                /* Transition: '<S352>:117' */
                /* Call Poke */
                VeCRDB_y_BPCMInterlockSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S312>/Poke' */
                /* FunctionCaller: '<S354>/Function Caller' */
                /* Event: '<S352>:38' */
                Rte_Call_PokeBPCR_e_HV_BatInrlkStat_PokeBPCR_e_HV_BatInrlkStat
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__id);

                /* End of Outputs for SubSystem: '<S312>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S352>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCMInterlockSts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S312>/Fsft' */
        /* FunctionCaller: '<S353>/Function Caller' */
        /* Event: '<S352>:39' */
        Rte_Call_FsftBPCR_e_HV_BatInrlkStat_FsftBPCR_e_HV_BatInrlkStat();

        /* End of Outputs for SubSystem: '<S312>/Fsft' */
        /* Transition: '<S352>:113' */
        /* Transition: '<S352>:115' */
        /* Transition: '<S352>:114' */
    }

    /* End of Chart: '<S349>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_DCCntctrMTOW_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_DCCntctrMTOW_ErrSts'
     */
    /* Transition: '<S352>:107' */
    rtb_TmpSignalConversionAtVeC_k1 = Rte_Read_VeCRDB_b_BPCM_DCCntctrMTOW_Value(
        &CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_p);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_DCCntctrMTOW_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S357>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_DCCntctrMTOW_SigSts_Value(&tmpRead_1c);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S355>/Chart' */
    if ((((uint32)tmpRead_1c) & 3U) != 0U)
    {
        /* Transition: '<S357>:100' */
        /* Transition: '<S357>:103' */
        /* Transition: '<S357>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_DCCntctrMTOW_CallStatus = 2U;

        /* Event: '<S357>:39' */
        /* Transition: '<S357>:113' */
        /* Transition: '<S357>:115' */
        /* Transition: '<S357>:114' */
    }
    else
    {
        /* Transition: '<S357>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1c) & 4U) != 0U)
        {
            /* Transition: '<S357>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S357>:88' */
                /* Transition: '<S357>:111' */
                /* Call Fsft */
                VeCRDB_y_BPCM_DCCntctrMTOW_CallStatus = 2U;

                /* Event: '<S357>:39' */
                /* Transition: '<S357>:113' */
                /* Transition: '<S357>:115' */
                /* Transition: '<S357>:114' */
            }
            else
            {
                /* Transition: '<S357>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_DCCntctrMTOW_CallStatus = 3U;

                /* Event: '<S357>:40' */
                /* Transition: '<S357>:115' */
                /* Transition: '<S357>:114' */
            }
        }
        else
        {
            /* Transition: '<S357>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_k1) == 133)
            {
                /* Transition: '<S357>:95' */
                /* Transition: '<S357>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_DCCntctrMTOW_CallStatus = 4U;

                /* Transition: '<S357>:114' */
            }
            else
            {
                /* Transition: '<S357>:120' */
                /* Transition: '<S357>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_DCCntctrMTOW_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S313>/Poke' */
                /* FunctionCaller: '<S358>/Function Caller' */
                /* Event: '<S357>:38' */
                Rte_Call_PokeBPCR_b_HVBat_DC_CntctrReq_PokeBPCR_b_HVBat_DC_CntctrReq
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_p);

                /* End of Outputs for SubSystem: '<S313>/Poke' */
            }
        }
    }

    /* End of Chart: '<S355>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_DCCntctrSTOW_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_DCCntctrSTOW_ErrSts'
     */
    /* Transition: '<S357>:107' */
    rtb_TmpSignalConversionAtVeC_ej = Rte_Read_VeCRDB_b_BPCM_DCCntctrSTOW_Value(
        &CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_g);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_DCCntctrSTOW_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S361>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_DCCntctrSTOW_SigSts_Value(&tmpRead_1d);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S359>/Chart' */
    if ((((uint32)tmpRead_1d) & 3U) != 0U)
    {
        /* Transition: '<S361>:100' */
        /* Transition: '<S361>:103' */
        /* Transition: '<S361>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_DCCntctrSTOW_CallStatus = 2U;

        /* Event: '<S361>:39' */
        /* Transition: '<S361>:113' */
        /* Transition: '<S361>:115' */
        /* Transition: '<S361>:114' */
    }
    else
    {
        /* Transition: '<S361>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1d) & 4U) != 0U)
        {
            /* Transition: '<S361>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S361>:88' */
                /* Transition: '<S361>:111' */
                /* Call Fsft */
                VeCRDB_y_BPCM_DCCntctrSTOW_CallStatus = 2U;

                /* Event: '<S361>:39' */
                /* Transition: '<S361>:113' */
                /* Transition: '<S361>:115' */
                /* Transition: '<S361>:114' */
            }
            else
            {
                /* Transition: '<S361>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_DCCntctrSTOW_CallStatus = 3U;

                /* Event: '<S361>:40' */
                /* Transition: '<S361>:115' */
                /* Transition: '<S361>:114' */
            }
        }
        else
        {
            /* Transition: '<S361>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ej) == 133)
            {
                /* Transition: '<S361>:95' */
                /* Transition: '<S361>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_DCCntctrSTOW_CallStatus = 4U;

                /* Transition: '<S361>:114' */
            }
            else
            {
                /* Transition: '<S361>:120' */
                /* Transition: '<S361>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_DCCntctrSTOW_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S314>/Poke' */
                /* FunctionCaller: '<S362>/Function Caller' */
                /* Event: '<S361>:38' */
                Rte_Call_PokeBPCR_b_HVBat_DC_CntctrOpn_PokeBPCR_b_HVBat_DC_CntctrOpn
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_g);

                /* End of Outputs for SubSystem: '<S314>/Poke' */
            }
        }
    }

    /* End of Chart: '<S359>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HV_BalngMd_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HV_BalngMd_ErrSts'
     */
    /* Transition: '<S361>:107' */
    rtb_TmpSignalConversionAtVeC_iv = Rte_Read_VeCRDB_y_BPCM_HV_BalngMd_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_n);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HV_BalngMd_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S365>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HV_BalngMd_SigSts_Value(&tmpRead_1e);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S363>/Chart' */
    if ((((uint32)tmpRead_1e) & 3U) != 0U)
    {
        /* Transition: '<S365>:100' */
        /* Transition: '<S365>:103' */
        /* Transition: '<S365>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HV_BalngMd_CallStatus = 2U;

        /* Event: '<S365>:39' */
        /* Transition: '<S365>:113' */
        /* Transition: '<S365>:115' */
        /* Transition: '<S365>:114' */
    }
    else
    {
        /* Transition: '<S365>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1e) & 4U) != 0U)
        {
            /* Transition: '<S365>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S365>:88' */
                /* Transition: '<S365>:111' */
                /* Call Fsft */
                VeCRDB_y_BPCM_HV_BalngMd_CallStatus = 2U;

                /* Event: '<S365>:39' */
                /* Transition: '<S365>:113' */
                /* Transition: '<S365>:115' */
                /* Transition: '<S365>:114' */
            }
            else
            {
                /* Transition: '<S365>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HV_BalngMd_CallStatus = 3U;

                /* Event: '<S365>:40' */
                /* Transition: '<S365>:115' */
                /* Transition: '<S365>:114' */
            }
        }
        else
        {
            /* Transition: '<S365>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_iv) == 133)
            {
                /* Transition: '<S365>:95' */
                /* Transition: '<S365>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HV_BalngMd_CallStatus = 4U;

                /* Transition: '<S365>:114' */
            }
            else
            {
                /* Transition: '<S365>:120' */
                /* Transition: '<S365>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HV_BalngMd_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S315>/Poke' */
                /* FunctionCaller: '<S366>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S366>/Data Type Conversion'
                 */
                /* Event: '<S365>:38' */
                Rte_Call_PokeBPCR_b_BalMd_PokeBPCR_b_BalMd((((sint32)
                    CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_n) != 0) ? 1 :
                    0);

                /* End of Outputs for SubSystem: '<S315>/Poke' */
            }
        }
    }

    /* End of Chart: '<S363>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HVBIIS_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HVBIIS_ErrSts'
     */
    /* Transition: '<S365>:107' */
    rtb_TmpSignalConversionAtVeC_i3 = Rte_Read_VeCRDB_y_BPCM_HVBIIS_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_b);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HVBIIS_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S370>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HVBIIS_SigSts_Value(&tmpRead_1f);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S367>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1f) & 3U) != 0U)
    {
        /* Transition: '<S370>:100' */
        /* Transition: '<S370>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S370>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1f) & 4U) != 0U)
        {
            /* Transition: '<S370>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S370>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S370>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HVBIIS_CallStatus = 3U;

                /* Event: '<S370>:40' */
                /* Transition: '<S370>:115' */
                /* Transition: '<S370>:114' */
            }
        }
        else
        {
            /* Transition: '<S370>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_i3) == 133)
            {
                /* Transition: '<S370>:95' */
                /* Transition: '<S370>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HVBIIS_CallStatus = 4U;

                /* Transition: '<S370>:114' */
            }
            else
            {
                /* Transition: '<S370>:120' */
                /* Transition: '<S370>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HVBIIS_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S316>/Poke' */
                /* FunctionCaller: '<S372>/Function Caller' */
                /* Event: '<S370>:38' */
                Rte_Call_PokeBPCR_e_HVBatIntrlkIntrnlStat_PokeBPCR_e_HVBatIntrlkIntrnlStat
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_b);

                /* End of Outputs for SubSystem: '<S316>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S370>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HVBIIS_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S316>/Fsft' */
        /* FunctionCaller: '<S371>/Function Caller' */
        /* Event: '<S370>:39' */
        Rte_Call_FsftBPCR_e_HVBatIntrlkIntrnlStat_FsftBPCR_e_HVBatIntrlkIntrnlStat
            ();

        /* End of Outputs for SubSystem: '<S316>/Fsft' */
        /* Transition: '<S370>:113' */
        /* Transition: '<S370>:115' */
        /* Transition: '<S370>:114' */
    }

    /* End of Chart: '<S367>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HVBattGFDSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HVBattGFDSts_ErrSts'
     */
    /* Transition: '<S370>:107' */
    rtb_TmpSignalConversionAtVeC_lj = Rte_Read_VeCRDB_y_BPCM_HVBattGFDSts_Value(
        &CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_a);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HVBattGFDSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S376>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HVBattGFDSts_SigSts_Value(&tmpRead_1g);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S373>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1g) & 3U) != 0U)
    {
        /* Transition: '<S376>:100' */
        /* Transition: '<S376>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S376>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1g) & 4U) != 0U)
        {
            /* Transition: '<S376>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S376>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S376>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HVBattGFDSts_CallStatus = 3U;

                /* Event: '<S376>:40' */
                /* Transition: '<S376>:115' */
                /* Transition: '<S376>:114' */
            }
        }
        else
        {
            /* Transition: '<S376>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_lj) == 133)
            {
                /* Transition: '<S376>:95' */
                /* Transition: '<S376>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HVBattGFDSts_CallStatus = 4U;

                /* Transition: '<S376>:114' */
            }
            else
            {
                /* Transition: '<S376>:120' */
                /* Transition: '<S376>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HVBattGFDSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S317>/Poke' */
                /* FunctionCaller: '<S378>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S378>/Data Type Conversion'
                 */
                /* Event: '<S376>:38' */
                Rte_Call_PokeBPCR_e_HV_BatIsolStat_PokeBPCR_e_HV_BatIsolStat
                    ((sint16)CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_a);

                /* FunctionCaller: '<S379>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S379>/Data Type Conversion'
                 */
                Rte_Call_PokeBPCR_i_DC_Isolation_Sts_M182_PokeBPCR_i_DC_Isolation_Sts_M182
                    ((sint16)CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_a);

                /* End of Outputs for SubSystem: '<S317>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S376>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HVBattGFDSts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S317>/Fsft' */
        /* FunctionCaller: '<S377>/Function Caller' */
        /* Event: '<S376>:39' */
        Rte_Call_FsftBPCR_e_HV_BatIsolStat_FsftBPCR_e_HV_BatIsolStat();

        /* End of Outputs for SubSystem: '<S317>/Fsft' */
        /* Transition: '<S376>:113' */
        /* Transition: '<S376>:115' */
        /* Transition: '<S376>:114' */
    }

    /* End of Chart: '<S373>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HV_Capacity_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HV_Capacity_ErrSts'
     */
    /* Transition: '<S376>:107' */
    rtb_TmpSignalConversionAtVeC_is =
        Rte_Read_VeCRDB_qAhr_BPCM_HV_Capacity_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_qAh);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HV_Capacity_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S383>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HV_Capacity_SigSts_Value(&tmpRead_1h);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S380>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1h) & 3U) != 0U)
    {
        /* Transition: '<S383>:100' */
        /* Transition: '<S383>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S383>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1h) & 4U) != 0U)
        {
            /* Transition: '<S383>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S383>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S383>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HV_Capacity_CallStatus = 3U;

                /* Event: '<S383>:40' */
                /* Transition: '<S383>:115' */
                /* Transition: '<S383>:114' */
            }
        }
        else
        {
            /* Transition: '<S383>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_is) == 133)
            {
                /* Transition: '<S383>:95' */
                /* Transition: '<S383>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HV_Capacity_CallStatus = 4U;

                /* Transition: '<S383>:114' */
            }
            else
            {
                /* Transition: '<S383>:120' */
                if ((((uint32)tmpRead_1h) & 8U) != 0U)
                {
                    /* Transition: '<S383>:122' */
                    /* Transition: '<S383>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S383>:126' */
                }
                else
                {
                    /* Transition: '<S383>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S383>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HV_Capacity_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S318>/Poke' */
                /* FunctionCaller: '<S385>/Function Caller' */
                /* Event: '<S383>:38' */
                Rte_Call_PokeBPCR_q_FullAmpHrCap_PokeBPCR_q_FullAmpHrCap
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_qAh, FA_out_hg);

                /* End of Outputs for SubSystem: '<S318>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S383>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HV_Capacity_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S318>/Fsft' */
        /* FunctionCaller: '<S384>/Function Caller' */
        /* Event: '<S383>:39' */
        Rte_Call_FsftBPCR_q_FullAmpHrCap_FsftBPCR_q_FullAmpHrCap();

        /* End of Outputs for SubSystem: '<S318>/Fsft' */
        /* Transition: '<S383>:113' */
        /* Transition: '<S383>:115' */
        /* Transition: '<S383>:114' */
    }

    /* End of Chart: '<S380>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HVChrgBusSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HVChrgBusSts_ErrSts'
     */
    /* Transition: '<S383>:107' */
    rtb_TmpSignalConversionAtVeC_c2 = Rte_Read_VeCRDB_y_BPCM_HVChrgBusSts_Value(
        &CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_c);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HVChrgBusSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S389>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HVChrgBusSts_SigSts_Value(&tmpRead_1i);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S386>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1i) & 3U) != 0U)
    {
        /* Transition: '<S389>:100' */
        /* Transition: '<S389>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S389>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1i) & 4U) != 0U)
        {
            /* Transition: '<S389>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S389>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S389>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HVChrgBusSts_CallStatus = 3U;

                /* Event: '<S389>:40' */
                /* Transition: '<S389>:115' */
                /* Transition: '<S389>:114' */
            }
        }
        else
        {
            /* Transition: '<S389>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_c2) == 133)
            {
                /* Transition: '<S389>:95' */
                /* Transition: '<S389>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HVChrgBusSts_CallStatus = 4U;

                /* Transition: '<S389>:114' */
            }
            else
            {
                /* Transition: '<S389>:120' */
                if ((((uint32)tmpRead_1i) & 8U) != 0U)
                {
                    /* Transition: '<S389>:122' */
                    /* Transition: '<S389>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S389>:126' */
                }
                else
                {
                    /* Transition: '<S389>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S389>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HVChrgBusSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S319>/Poke' */
                /* FunctionCaller: '<S391>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S391>/Data Type Conversion'
                 */
                /* Event: '<S389>:38' */
                Rte_Call_PokeBPCR_e_HVBat_DC_CntctrStat_PokeBPCR_e_HVBat_DC_CntctrStat
                    ((sint16)CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_c,
                     FA_out_hg);

                /* End of Outputs for SubSystem: '<S319>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S389>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HVChrgBusSts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S319>/Fsft' */
        /* FunctionCaller: '<S390>/Function Caller' */
        /* Event: '<S389>:39' */
        Rte_Call_FsftBPCR_b_HVBat_DC_CntctrStat_FsftBPCR_b_HVBat_DC_CntctrStat();

        /* End of Outputs for SubSystem: '<S319>/Fsft' */
        /* Transition: '<S389>:113' */
        /* Transition: '<S389>:115' */
        /* Transition: '<S389>:114' */
    }

    /* End of Chart: '<S386>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HV_Current_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HV_Current_ErrSts'
     */
    /* Transition: '<S389>:107' */
    rtb_TmpSignalConversionAtVeC_hc = Rte_Read_VeCRDB_I_BPCM_HV_Current_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__fr);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HV_Current_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S395>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HV_Current_SigSts_Value(&tmpRead_1j);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S392>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1j) & 3U) != 0U)
    {
        /* Transition: '<S395>:100' */
        /* Transition: '<S395>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S395>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1j) & 4U) != 0U)
        {
            /* Transition: '<S395>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S395>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S395>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HV_Current_CallStatus = 3U;

                /* Event: '<S395>:40' */
                /* Transition: '<S395>:115' */
                /* Transition: '<S395>:114' */
            }
        }
        else
        {
            /* Transition: '<S395>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_hc) == 133)
            {
                /* Transition: '<S395>:95' */
                /* Transition: '<S395>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HV_Current_CallStatus = 4U;

                /* Transition: '<S395>:114' */
            }
            else
            {
                /* Transition: '<S395>:120' */
                if ((((uint32)tmpRead_1j) & 8U) != 0U)
                {
                    /* Transition: '<S395>:122' */
                    /* Transition: '<S395>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S395>:126' */
                }
                else
                {
                    /* Transition: '<S395>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S395>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HV_Current_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S320>/Poke' */
                /* FunctionCaller: '<S397>/Function Caller' */
                /* Event: '<S395>:38' */
                Rte_Call_PokeBPCR_I_HV_BatCurr_PokeBPCR_I_HV_BatCurr
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__fr, FA_out_hg);

                /* End of Outputs for SubSystem: '<S320>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S395>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HV_Current_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S320>/Fsft' */
        /* FunctionCaller: '<S396>/Function Caller' */
        /* Event: '<S395>:39' */
        Rte_Call_FsftBPCR_I_HV_BatCurr_FsftBPCR_I_HV_BatCurr();

        /* End of Outputs for SubSystem: '<S320>/Fsft' */
        /* Transition: '<S395>:113' */
        /* Transition: '<S395>:115' */
        /* Transition: '<S395>:114' */
    }

    /* End of Chart: '<S392>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HV_CurrentString2_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HV_CurrentString2_ErrSts'
     */
    /* Transition: '<S395>:107' */
    rtb_TmpSignalConversionAtVeC_h3 =
        Rte_Read_VeCRDB_I_BPCM_HV_CurrentString2_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_I_h);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HV_CurrentString2_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S401>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HV_CurrentString2_SigSts_Value(&tmpRead_1k);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S398>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1k) & 3U) != 0U)
    {
        /* Transition: '<S401>:100' */
        /* Transition: '<S401>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S401>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1k) & 4U) != 0U)
        {
            /* Transition: '<S401>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S401>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S401>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HV_CurrentString2_CallStatus = 3U;

                /* Event: '<S401>:40' */
                /* Transition: '<S401>:115' */
                /* Transition: '<S401>:114' */
            }
        }
        else
        {
            /* Transition: '<S401>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_h3) == 133)
            {
                /* Transition: '<S401>:95' */
                /* Transition: '<S401>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HV_CurrentString2_CallStatus = 4U;

                /* Transition: '<S401>:114' */
            }
            else
            {
                /* Transition: '<S401>:120' */
                if ((((uint32)tmpRead_1k) & 8U) != 0U)
                {
                    /* Transition: '<S401>:122' */
                    /* Transition: '<S401>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S401>:126' */
                }
                else
                {
                    /* Transition: '<S401>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S401>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HV_CurrentString2_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S321>/Poke' */
                /* FunctionCaller: '<S403>/Function Caller' */
                /* Event: '<S401>:38' */
                Rte_Call_PokeBPCR_I_HV_BatCurrString2_PokeBPCR_I_HV_BatCurrString2
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_I_h, FA_out_hg);

                /* End of Outputs for SubSystem: '<S321>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S401>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HV_CurrentString2_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S321>/Fsft' */
        /* FunctionCaller: '<S402>/Function Caller' */
        /* Event: '<S401>:39' */
        Rte_Call_FsftBPCR_b_HV_BatCurrString2_FsftBPCR_b_HV_BatCurrString2();

        /* End of Outputs for SubSystem: '<S321>/Fsft' */
        /* Transition: '<S401>:113' */
        /* Transition: '<S401>:115' */
        /* Transition: '<S401>:114' */
    }

    /* End of Chart: '<S398>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HV_DCFC_IsolatnSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HV_DCFC_IsolatnSts_ErrSts'
     */
    /* Transition: '<S401>:107' */
    rtb_TmpSignalConversionAtVeC_di =
        Rte_Read_VeCRDB_y_BPCM_HV_DCFC_IsolatnSts_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_m);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HV_DCFC_IsolatnSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S407>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HV_DCFC_IsolatnSts_SigSts_Value(&tmpRead_1l);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S404>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1l) & 3U) != 0U)
    {
        /* Transition: '<S407>:100' */
        /* Transition: '<S407>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S407>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1l) & 4U) != 0U)
        {
            /* Transition: '<S407>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S407>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S407>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HV_DCFC_IsolatnSts_CallStatus = 3U;

                /* Event: '<S407>:40' */
                /* Transition: '<S407>:115' */
                /* Transition: '<S407>:114' */
            }
        }
        else
        {
            /* Transition: '<S407>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_di) == 133)
            {
                /* Transition: '<S407>:95' */
                /* Transition: '<S407>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HV_DCFC_IsolatnSts_CallStatus = 4U;

                /* Transition: '<S407>:114' */
            }
            else
            {
                /* Transition: '<S407>:120' */
                /* Transition: '<S407>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HV_DCFC_IsolatnSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S322>/Poke' */
                /* FunctionCaller: '<S409>/Function Caller' */
                /* Event: '<S407>:38' */
                Rte_Call_PokeBPCR_e_DCIsolSts_PokeBPCR_e_DCIsolSts
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_m);

                /* End of Outputs for SubSystem: '<S322>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S407>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HV_DCFC_IsolatnSts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S322>/Fsft' */
        /* FunctionCaller: '<S408>/Function Caller' */
        /* Event: '<S407>:39' */
        Rte_Call_FsftBPCR_e_DCIsolSts_FsftBPCR_e_DCIsolSts();

        /* End of Outputs for SubSystem: '<S322>/Fsft' */
        /* Transition: '<S407>:113' */
        /* Transition: '<S407>:115' */
        /* Transition: '<S407>:114' */
    }

    /* End of Chart: '<S404>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HV_Inlet_Temp_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HV_Inlet_Temp_ErrSts'
     */
    /* Transition: '<S407>:107' */
    rtb_TmpSignalConversionAtVeCR_m = Rte_Read_VeCRDB_T_BPCM_HV_Inlet_Temp_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_T_l);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HV_Inlet_Temp_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S413>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HV_Inlet_Temp_SigSts_Value(&tmpRead_1m);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S410>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1m) & 3U) != 0U)
    {
        /* Transition: '<S413>:100' */
        /* Transition: '<S413>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S413>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1m) & 4U) != 0U)
        {
            /* Transition: '<S413>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S413>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S413>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HV_Inlet_Temp_CallStatus = 3U;

                /* Event: '<S413>:40' */
                /* Transition: '<S413>:115' */
                /* Transition: '<S413>:114' */
            }
        }
        else
        {
            /* Transition: '<S413>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_m) == 133)
            {
                /* Transition: '<S413>:95' */
                /* Transition: '<S413>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HV_Inlet_Temp_CallStatus = 4U;

                /* Transition: '<S413>:114' */
            }
            else
            {
                /* Transition: '<S413>:120' */
                if ((((uint32)tmpRead_1m) & 8U) != 0U)
                {
                    /* Transition: '<S413>:122' */
                    /* Transition: '<S413>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S413>:126' */
                }
                else
                {
                    /* Transition: '<S413>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S413>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HV_Inlet_Temp_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S323>/Poke' */
                /* FunctionCaller: '<S415>/Function Caller' */
                /* Event: '<S413>:38' */
                Rte_Call_PokeTRIR_T_HV_BatClntTmp_In_PokeTRIR_T_HV_BatClntTmp_In
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_T_l, FA_out_hg);

                /* End of Outputs for SubSystem: '<S323>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S413>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HV_Inlet_Temp_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S323>/Fsft' */
        /* FunctionCaller: '<S414>/Function Caller' */
        /* Event: '<S413>:39' */
        Rte_Call_FsftTRIR_T_HV_BatClntTmp_In_FsftTRIR_T_HV_BatClntTmp_In();

        /* End of Outputs for SubSystem: '<S323>/Fsft' */
        /* Transition: '<S413>:113' */
        /* Transition: '<S413>:115' */
        /* Transition: '<S413>:114' */
    }

    /* End of Chart: '<S410>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HV_IntVolt_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HV_IntVolt_ErrSts'
     */
    /* Transition: '<S413>:107' */
    rtb_TmpSignalConversionAtVeC_et = Rte_Read_VeCRDB_U_BPCM_HV_IntVolt_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_U_B);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HV_IntVolt_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S419>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HV_IntVolt_SigSts_Value(&tmpRead_1n);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S416>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1n) & 3U) != 0U)
    {
        /* Transition: '<S419>:100' */
        /* Transition: '<S419>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S419>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1n) & 4U) != 0U)
        {
            /* Transition: '<S419>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S419>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S419>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HV_IntVolt_CallStatus = 3U;

                /* Event: '<S419>:40' */
                /* Transition: '<S419>:115' */
                /* Transition: '<S419>:114' */
            }
        }
        else
        {
            /* Transition: '<S419>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_et) == 133)
            {
                /* Transition: '<S419>:95' */
                /* Transition: '<S419>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HV_IntVolt_CallStatus = 4U;

                /* Transition: '<S419>:114' */
            }
            else
            {
                /* Transition: '<S419>:120' */
                if ((((uint32)tmpRead_1n) & 8U) != 0U)
                {
                    /* Transition: '<S419>:122' */
                    /* Transition: '<S419>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S419>:126' */
                }
                else
                {
                    /* Transition: '<S419>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S419>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HV_IntVolt_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S324>/Poke' */
                /* FunctionCaller: '<S421>/Function Caller' */
                /* Event: '<S419>:38' */
                Rte_Call_PokeBPCR_U_HV_InternalVolt_PokeBPCR_U_HV_InternalVolt
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_U_B, FA_out_hg);

                /* End of Outputs for SubSystem: '<S324>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S419>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HV_IntVolt_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S324>/Fsft' */
        /* FunctionCaller: '<S420>/Function Caller' */
        /* Event: '<S419>:39' */
        Rte_Call_FsftBPCR_b_HV_InternalVolt_FsftBPCR_b_HV_InternalVolt();

        /* End of Outputs for SubSystem: '<S324>/Fsft' */
        /* Transition: '<S419>:113' */
        /* Transition: '<S419>:115' */
        /* Transition: '<S419>:114' */
    }

    /* End of Chart: '<S416>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HVIntrnlVltStrng1_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HVIntrnlVltStrng1_ErrSts'
     */
    /* Transition: '<S419>:107' */
    rtb_TmpSignalConversionAtVe_hdb =
        Rte_Read_VeCRDB_U_BPCM_HVIntrnlVltStrng1_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__g2);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HVIntrnlVltStrng1_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S425>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HVIntrnlVltStrng1_SigSts_Value(&tmpRead_1o);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S422>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1o) & 3U) != 0U)
    {
        /* Transition: '<S425>:100' */
        /* Transition: '<S425>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S425>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1o) & 4U) != 0U)
        {
            /* Transition: '<S425>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S425>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S425>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HVIntrnlVltStrng1_CallStatus = 3U;

                /* Event: '<S425>:40' */
                /* Transition: '<S425>:115' */
                /* Transition: '<S425>:114' */
            }
        }
        else
        {
            /* Transition: '<S425>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_hdb) == 133)
            {
                /* Transition: '<S425>:95' */
                /* Transition: '<S425>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HVIntrnlVltStrng1_CallStatus = 4U;

                /* Transition: '<S425>:114' */
            }
            else
            {
                /* Transition: '<S425>:120' */
                /* Transition: '<S425>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HVIntrnlVltStrng1_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S325>/Poke' */
                /* FunctionCaller: '<S427>/Function Caller' */
                /* Event: '<S425>:38' */
                Rte_Call_PokeBPCR_U_HV_InternalStringVolt1_PokeBPCR_U_HV_InternalStringVolt1
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__g2);

                /* End of Outputs for SubSystem: '<S325>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S425>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HVIntrnlVltStrng1_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S325>/Fsft' */
        /* FunctionCaller: '<S426>/Function Caller' */
        /* Event: '<S425>:39' */
        Rte_Call_FsftBPCR_b_HV_InternalStringVolt1_FsftBPCR_b_HV_InternalStringVolt1
            ();

        /* End of Outputs for SubSystem: '<S325>/Fsft' */
        /* Transition: '<S425>:113' */
        /* Transition: '<S425>:115' */
        /* Transition: '<S425>:114' */
    }

    /* End of Chart: '<S422>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HVIntrnlVltStrng2_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HVIntrnlVltStrng2_ErrSts'
     */
    /* Transition: '<S425>:107' */
    rtb_TmpSignalConversionAtVeC_ng =
        Rte_Read_VeCRDB_U_BPCM_HVIntrnlVltStrng2_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_U_a);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HVIntrnlVltStrng2_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S431>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HVIntrnlVltStrng2_SigSts_Value(&tmpRead_1p);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S428>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1p) & 3U) != 0U)
    {
        /* Transition: '<S431>:100' */
        /* Transition: '<S431>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S431>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1p) & 4U) != 0U)
        {
            /* Transition: '<S431>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S431>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S431>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HVIntrnlVltStrng2_CallStatus = 3U;

                /* Event: '<S431>:40' */
                /* Transition: '<S431>:115' */
                /* Transition: '<S431>:114' */
            }
        }
        else
        {
            /* Transition: '<S431>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ng) == 133)
            {
                /* Transition: '<S431>:95' */
                /* Transition: '<S431>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HVIntrnlVltStrng2_CallStatus = 4U;

                /* Transition: '<S431>:114' */
            }
            else
            {
                /* Transition: '<S431>:120' */
                /* Transition: '<S431>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HVIntrnlVltStrng2_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S326>/Poke' */
                /* FunctionCaller: '<S433>/Function Caller' */
                /* Event: '<S431>:38' */
                Rte_Call_PokeBPCR_U_HV_InternalStringVolt2_PokeBPCR_U_HV_InternalStringVolt2
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_U_a);

                /* End of Outputs for SubSystem: '<S326>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S431>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HVIntrnlVltStrng2_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S326>/Fsft' */
        /* FunctionCaller: '<S432>/Function Caller' */
        /* Event: '<S431>:39' */
        Rte_Call_FsftBPCR_b_HV_InternalStringVolt2_FsftBPCR_b_HV_InternalStringVolt2
            ();

        /* End of Outputs for SubSystem: '<S326>/Fsft' */
        /* Transition: '<S431>:113' */
        /* Transition: '<S431>:115' */
        /* Transition: '<S431>:114' */
    }

    /* End of Chart: '<S428>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HV_Outl_Temp_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HV_Outl_Temp_ErrSts'
     */
    /* Transition: '<S431>:107' */
    rtb_TmpSignalConversionAtVeC_kt = Rte_Read_VeCRDB_T_BPCM_HV_Outl_Temp_Value(
        &CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_T_j);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HV_Outl_Temp_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S437>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HV_Outl_Temp_SigSts_Value(&tmpRead_1q);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S434>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1q) & 3U) != 0U)
    {
        /* Transition: '<S437>:100' */
        /* Transition: '<S437>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S437>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1q) & 4U) != 0U)
        {
            /* Transition: '<S437>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S437>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S437>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HV_Outl_Temp_CallStatus = 3U;

                /* Event: '<S437>:40' */
                /* Transition: '<S437>:115' */
                /* Transition: '<S437>:114' */
            }
        }
        else
        {
            /* Transition: '<S437>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_kt) == 133)
            {
                /* Transition: '<S437>:95' */
                /* Transition: '<S437>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HV_Outl_Temp_CallStatus = 4U;

                /* Transition: '<S437>:114' */
            }
            else
            {
                /* Transition: '<S437>:120' */
                if ((((uint32)tmpRead_1q) & 8U) != 0U)
                {
                    /* Transition: '<S437>:122' */
                    /* Transition: '<S437>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S437>:126' */
                }
                else
                {
                    /* Transition: '<S437>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S437>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HV_Outl_Temp_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S327>/Poke' */
                /* FunctionCaller: '<S439>/Function Caller' */
                /* Event: '<S437>:38' */
                Rte_Call_PokeTRIR_T_HV_BatClntTmp_Out_PokeTRIR_T_HV_BatClntTmp_Out
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_T_j, FA_out_hg);

                /* End of Outputs for SubSystem: '<S327>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S437>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HV_Outl_Temp_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S327>/Fsft' */
        /* FunctionCaller: '<S438>/Function Caller' */
        /* Event: '<S437>:39' */
        Rte_Call_FsftTRIR_T_HV_BatClntTmpOut_FsftTRIR_T_HV_BatClntTmpOut();

        /* End of Outputs for SubSystem: '<S327>/Fsft' */
        /* Transition: '<S437>:113' */
        /* Transition: '<S437>:115' */
        /* Transition: '<S437>:114' */
    }

    /* End of Chart: '<S434>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HV_SOC_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HV_SOC_ErrSts'
     */
    /* Transition: '<S437>:107' */
    rtb_TmpSignalConversionAtVeC_de = Rte_Read_VeCRDB_Pct_BPCM_HV_SOC_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_P_i);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HV_SOC_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S444>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HV_SOC_SigSts_Value(&tmpRead_1r);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S440>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1r) & 3U) != 0U)
    {
        /* Transition: '<S444>:100' */
        /* Transition: '<S444>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S444>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1r) & 4U) != 0U)
        {
            /* Transition: '<S444>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S444>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S444>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HV_SOC_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S328>/Tmot' */
                /* FunctionCaller: '<S447>/Function Caller' */
                /* Event: '<S444>:40' */
                Rte_Call_TmotBPCR_b_HV_BatPackSOC_TmotBPCR_b_HV_BatPackSOC();

                /* End of Outputs for SubSystem: '<S328>/Tmot' */
                /* Transition: '<S444>:115' */
                /* Transition: '<S444>:114' */
            }
        }
        else
        {
            /* Transition: '<S444>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_de) == 133)
            {
                /* Transition: '<S444>:95' */
                /* Transition: '<S444>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HV_SOC_CallStatus = 4U;

                /* Transition: '<S444>:114' */
            }
            else
            {
                /* Transition: '<S444>:120' */
                if ((((uint32)tmpRead_1r) & 8U) != 0U)
                {
                    /* Transition: '<S444>:122' */
                    /* Transition: '<S444>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S444>:126' */
                }
                else
                {
                    /* Transition: '<S444>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S444>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HV_SOC_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S328>/Poke' */
                /* FunctionCaller: '<S446>/Function Caller' */
                /* Event: '<S444>:38' */
                Rte_Call_PokeBPCR_Pct_HV_BatPackSOC_PokeBPCR_Pct_HV_BatPackSOC
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_P_i, FA_out_hg);

                /* End of Outputs for SubSystem: '<S328>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S444>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HV_SOC_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S328>/Fsft' */
        /* FunctionCaller: '<S445>/Function Caller' */
        /* Event: '<S444>:39' */
        Rte_Call_FsftBPCR_b_HV_BatPackSOC_FsftBPCR_b_HV_BatPackSOC();

        /* End of Outputs for SubSystem: '<S328>/Fsft' */
        /* Transition: '<S444>:113' */
        /* Transition: '<S444>:115' */
        /* Transition: '<S444>:114' */
    }

    /* End of Chart: '<S440>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HV_SOH_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HV_SOH_ErrSts'
     */
    /* Transition: '<S444>:107' */
    rtb_TmpSignalConversionAtVeC_p1 = Rte_Read_VeCRDB_y_BPCM_HV_SOH_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__m2);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HV_SOH_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S450>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HV_SOH_SigSts_Value(&tmpRead_1s);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S448>/Chart' */
    if ((((uint32)tmpRead_1s) & 3U) != 0U)
    {
        /* Transition: '<S450>:100' */
        /* Transition: '<S450>:103' */
        /* Transition: '<S450>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HV_SOH_CallStatus = 2U;

        /* Event: '<S450>:39' */
        /* Transition: '<S450>:113' */
        /* Transition: '<S450>:115' */
        /* Transition: '<S450>:114' */
    }
    else
    {
        /* Transition: '<S450>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1s) & 4U) != 0U)
        {
            /* Transition: '<S450>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S450>:88' */
                /* Transition: '<S450>:111' */
                /* Call Fsft */
                VeCRDB_y_BPCM_HV_SOH_CallStatus = 2U;

                /* Event: '<S450>:39' */
                /* Transition: '<S450>:113' */
                /* Transition: '<S450>:115' */
                /* Transition: '<S450>:114' */
            }
            else
            {
                /* Transition: '<S450>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HV_SOH_CallStatus = 3U;

                /* Event: '<S450>:40' */
                /* Transition: '<S450>:115' */
                /* Transition: '<S450>:114' */
            }
        }
        else
        {
            /* Transition: '<S450>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_p1) == 133)
            {
                /* Transition: '<S450>:95' */
                /* Transition: '<S450>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HV_SOH_CallStatus = 4U;

                /* Transition: '<S450>:114' */
            }
            else
            {
                /* Transition: '<S450>:120' */
                /* Transition: '<S450>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HV_SOH_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S329>/Poke' */
                /* FunctionCaller: '<S451>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S451>/Data Type Conversion'
                 */
                /* Event: '<S450>:38' */
                Rte_Call_PokeBPCR_Pct_HVBatSOH_PokeBPCR_Pct_HVBatSOH((float32)
                    CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__m2);

                /* End of Outputs for SubSystem: '<S329>/Poke' */
            }
        }
    }

    /* End of Chart: '<S448>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HV_SOH_Low_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HV_SOH_Low_ErrSts'
     */
    /* Transition: '<S450>:107' */
    rtb_TmpSignalConversionAtVe_i3k = Rte_Read_VeCRDB_y_BPCM_HV_SOH_Low_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__c0);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HV_SOH_Low_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S454>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HV_SOH_Low_SigSts_Value(&tmpRead_1t);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S452>/Chart' */
    if ((((uint32)tmpRead_1t) & 3U) != 0U)
    {
        /* Transition: '<S454>:100' */
        /* Transition: '<S454>:103' */
        /* Transition: '<S454>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HV_SOH_Low_CallStatus = 2U;

        /* Event: '<S454>:39' */
        /* Transition: '<S454>:113' */
        /* Transition: '<S454>:115' */
        /* Transition: '<S454>:114' */
    }
    else
    {
        /* Transition: '<S454>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1t) & 4U) != 0U)
        {
            /* Transition: '<S454>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S454>:88' */
                /* Transition: '<S454>:111' */
                /* Call Fsft */
                VeCRDB_y_BPCM_HV_SOH_Low_CallStatus = 2U;

                /* Event: '<S454>:39' */
                /* Transition: '<S454>:113' */
                /* Transition: '<S454>:115' */
                /* Transition: '<S454>:114' */
            }
            else
            {
                /* Transition: '<S454>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HV_SOH_Low_CallStatus = 3U;

                /* Event: '<S454>:40' */
                /* Transition: '<S454>:115' */
                /* Transition: '<S454>:114' */
            }
        }
        else
        {
            /* Transition: '<S454>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_i3k) == 133)
            {
                /* Transition: '<S454>:95' */
                /* Transition: '<S454>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HV_SOH_Low_CallStatus = 4U;

                /* Transition: '<S454>:114' */
            }
            else
            {
                /* Transition: '<S454>:120' */
                /* Transition: '<S454>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HV_SOH_Low_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S330>/Poke' */
                /* FunctionCaller: '<S455>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S455>/Data Type Conversion'
                 */
                /* Event: '<S454>:38' */
                Rte_Call_PokeBPCR_Pct_HVBatSOHLow_PokeBPCR_Pct_HVBatSOHLow
                    ((float32)CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__c0);

                /* End of Outputs for SubSystem: '<S330>/Poke' */
            }
        }
    }

    /* End of Chart: '<S452>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HV_Temp_Avg_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HV_Temp_Avg_ErrSts'
     */
    /* Transition: '<S454>:107' */
    rtb_TmpSignalConversionAtVeC_cy = Rte_Read_VeCRDB_T_BPCM_HV_Temp_Avg_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_T_o);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HV_Temp_Avg_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S460>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HV_Temp_Avg_SigSts_Value(&tmpRead_1u);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S456>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1u) & 3U) != 0U)
    {
        /* Transition: '<S460>:100' */
        /* Transition: '<S460>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S460>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1u) & 4U) != 0U)
        {
            /* Transition: '<S460>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S460>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S460>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HV_Temp_Avg_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S331>/Tmot' */
                /* FunctionCaller: '<S463>/Function Caller' */
                /* Event: '<S460>:40' */
                Rte_Call_TmotBPCR_b_HV_BatModTempAvg_TmotBPCR_b_HV_BatModTempAvg
                    ();

                /* End of Outputs for SubSystem: '<S331>/Tmot' */
                /* Transition: '<S460>:115' */
                /* Transition: '<S460>:114' */
            }
        }
        else
        {
            /* Transition: '<S460>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_cy) == 133)
            {
                /* Transition: '<S460>:95' */
                /* Transition: '<S460>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HV_Temp_Avg_CallStatus = 4U;

                /* Transition: '<S460>:114' */
            }
            else
            {
                /* Transition: '<S460>:120' */
                if ((((uint32)tmpRead_1u) & 8U) != 0U)
                {
                    /* Transition: '<S460>:122' */
                    /* Transition: '<S460>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S460>:126' */
                }
                else
                {
                    /* Transition: '<S460>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S460>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HV_Temp_Avg_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S331>/Poke' */
                /* FunctionCaller: '<S462>/Function Caller' */
                /* Event: '<S460>:38' */
                Rte_Call_PokeBPCR_T_HV_BatModTempAvg_PokeBPCR_T_HV_BatModTempAvg
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_T_o, FA_out_hg);

                /* End of Outputs for SubSystem: '<S331>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S460>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HV_Temp_Avg_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S331>/Fsft' */
        /* FunctionCaller: '<S461>/Function Caller' */
        /* Event: '<S460>:39' */
        Rte_Call_FsftBPCR_b_HV_BatModTempAvg_FsftBPCR_b_HV_BatModTempAvg();

        /* End of Outputs for SubSystem: '<S331>/Fsft' */
        /* Transition: '<S460>:113' */
        /* Transition: '<S460>:115' */
        /* Transition: '<S460>:114' */
    }

    /* End of Chart: '<S456>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HV_Temp_Max_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HV_Temp_Max_ErrSts'
     */
    /* Transition: '<S460>:107' */
    rtb_TmpSignalConversionAtVe_dml = Rte_Read_VeCRDB_T_BPCM_HV_Temp_Max_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_T_a);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HV_Temp_Max_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S468>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HV_Temp_Max_SigSts_Value(&tmpRead_1v);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S464>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1v) & 3U) != 0U)
    {
        /* Transition: '<S468>:100' */
        /* Transition: '<S468>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S468>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1v) & 4U) != 0U)
        {
            /* Transition: '<S468>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S468>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S468>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HV_Temp_Max_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S332>/Tmot' */
                /* FunctionCaller: '<S471>/Function Caller' */
                /* Event: '<S468>:40' */
                Rte_Call_TmotBPCR_b_HV_BatModTempMax_TmotBPCR_b_HV_BatModTempMax
                    ();

                /* End of Outputs for SubSystem: '<S332>/Tmot' */
                /* Transition: '<S468>:115' */
                /* Transition: '<S468>:114' */
            }
        }
        else
        {
            /* Transition: '<S468>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_dml) == 133)
            {
                /* Transition: '<S468>:95' */
                /* Transition: '<S468>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HV_Temp_Max_CallStatus = 4U;

                /* Transition: '<S468>:114' */
            }
            else
            {
                /* Transition: '<S468>:120' */
                if ((((uint32)tmpRead_1v) & 8U) != 0U)
                {
                    /* Transition: '<S468>:122' */
                    /* Transition: '<S468>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S468>:126' */
                }
                else
                {
                    /* Transition: '<S468>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S468>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HV_Temp_Max_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S332>/Poke' */
                /* FunctionCaller: '<S470>/Function Caller' */
                /* Event: '<S468>:38' */
                Rte_Call_PokeBPCR_T_HV_BatModTempMax_PokeBPCR_T_HV_BatModTempMax
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_T_a, FA_out_hg);

                /* End of Outputs for SubSystem: '<S332>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S468>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HV_Temp_Max_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S332>/Fsft' */
        /* FunctionCaller: '<S469>/Function Caller' */
        /* Event: '<S468>:39' */
        Rte_Call_FsftBPCR_b_HV_BatModTempMax_FsftBPCR_b_HV_BatModTempMax();

        /* End of Outputs for SubSystem: '<S332>/Fsft' */
        /* Transition: '<S468>:113' */
        /* Transition: '<S468>:115' */
        /* Transition: '<S468>:114' */
    }

    /* End of Chart: '<S464>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HV_Temp_Min_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HV_Temp_Min_ErrSts'
     */
    /* Transition: '<S468>:107' */
    rtb_TmpSignalConversionAtVeC_b0 = Rte_Read_VeCRDB_T_BPCM_HV_Temp_Min_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__lh);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HV_Temp_Min_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S476>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HV_Temp_Min_SigSts_Value(&tmpRead_1w);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S472>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1w) & 3U) != 0U)
    {
        /* Transition: '<S476>:100' */
        /* Transition: '<S476>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S476>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1w) & 4U) != 0U)
        {
            /* Transition: '<S476>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S476>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S476>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HV_Temp_Min_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S333>/Tmot' */
                /* FunctionCaller: '<S479>/Function Caller' */
                /* Event: '<S476>:40' */
                Rte_Call_TmotBPCR_b_HV_BatModTempMin_TmotBPCR_b_HV_BatModTempMin
                    ();

                /* End of Outputs for SubSystem: '<S333>/Tmot' */
                /* Transition: '<S476>:115' */
                /* Transition: '<S476>:114' */
            }
        }
        else
        {
            /* Transition: '<S476>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_b0) == 133)
            {
                /* Transition: '<S476>:95' */
                /* Transition: '<S476>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HV_Temp_Min_CallStatus = 4U;

                /* Transition: '<S476>:114' */
            }
            else
            {
                /* Transition: '<S476>:120' */
                if ((((uint32)tmpRead_1w) & 8U) != 0U)
                {
                    /* Transition: '<S476>:122' */
                    /* Transition: '<S476>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S476>:126' */
                }
                else
                {
                    /* Transition: '<S476>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S476>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HV_Temp_Min_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S333>/Poke' */
                /* FunctionCaller: '<S478>/Function Caller' */
                /* Event: '<S476>:38' */
                Rte_Call_PokeBPCR_T_HV_BatModTempMin_PokeBPCR_T_HV_BatModTempMin
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__lh, FA_out_hg);

                /* End of Outputs for SubSystem: '<S333>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S476>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HV_Temp_Min_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S333>/Fsft' */
        /* FunctionCaller: '<S477>/Function Caller' */
        /* Event: '<S476>:39' */
        Rte_Call_FsftBPCR_b_HV_BatModTempMin_FsftBPCR_b_HV_BatModTempMin();

        /* End of Outputs for SubSystem: '<S333>/Fsft' */
        /* Transition: '<S476>:113' */
        /* Transition: '<S476>:115' */
        /* Transition: '<S476>:114' */
    }

    /* End of Chart: '<S472>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HV_ThermRnway_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HV_ThermRnway_ErrSts'
     */
    /* Transition: '<S476>:107' */
    rtb_TmpSignalConversionAtVeC_nz = Rte_Read_VeCRDB_y_BPCM_HV_ThermRnway_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__mo);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HV_ThermRnway_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S483>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HV_ThermRnway_SigSts_Value(&tmpRead_1x);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S480>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1x) & 3U) != 0U)
    {
        /* Transition: '<S483>:100' */
        /* Transition: '<S483>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S483>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1x) & 4U) != 0U)
        {
            /* Transition: '<S483>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S483>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S483>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HV_ThermRnway_CallStatus = 3U;

                /* Event: '<S483>:40' */
                /* Transition: '<S483>:115' */
                /* Transition: '<S483>:114' */
            }
        }
        else
        {
            /* Transition: '<S483>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_nz) == 133)
            {
                /* Transition: '<S483>:95' */
                /* Transition: '<S483>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HV_ThermRnway_CallStatus = 4U;

                /* Transition: '<S483>:114' */
            }
            else
            {
                /* Transition: '<S483>:120' */
                if ((((uint32)tmpRead_1x) & 8U) != 0U)
                {
                    /* Transition: '<S483>:122' */
                    /* Transition: '<S483>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S483>:126' */
                }
                else
                {
                    /* Transition: '<S483>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S483>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HV_ThermRnway_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S334>/Poke' */
                /* FunctionCaller: '<S485>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S485>/Data Type Conversion'
                 */
                /* Event: '<S483>:38' */
                Rte_Call_PokeBPCR_e_ThrmlRnawy_Warn_PokeBPCR_e_ThrmlRnawy_Warn
                    ((sint16)CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__mo,
                     FA_out_hg);

                /* End of Outputs for SubSystem: '<S334>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S483>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HV_ThermRnway_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S334>/Fsft' */
        /* FunctionCaller: '<S484>/Function Caller' */
        /* Event: '<S483>:39' */
        Rte_Call_FsftBPCR_b_ThrmlRnawy_Warn_FsftBPCR_b_ThrmlRnawy_Warn();

        /* End of Outputs for SubSystem: '<S334>/Fsft' */
        /* Transition: '<S483>:113' */
        /* Transition: '<S483>:115' */
        /* Transition: '<S483>:114' */
    }

    /* End of Chart: '<S480>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HV_TracBusSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HV_TracBusSts_ErrSts'
     */
    /* Transition: '<S483>:107' */
    rtb_TmpSignalConversionAtVeC_lv = Rte_Read_VeCRDB_y_BPCM_HV_TracBusSts_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_l);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HV_TracBusSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S489>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HV_TracBusSts_SigSts_Value(&tmpRead_1y);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S486>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1y) & 3U) != 0U)
    {
        /* Transition: '<S489>:100' */
        /* Transition: '<S489>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S489>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1y) & 4U) != 0U)
        {
            /* Transition: '<S489>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S489>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S489>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HV_TracBusSts_CallStatus = 3U;

                /* Event: '<S489>:40' */
                /* Transition: '<S489>:115' */
                /* Transition: '<S489>:114' */
            }
        }
        else
        {
            /* Transition: '<S489>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_lv) == 133)
            {
                /* Transition: '<S489>:95' */
                /* Transition: '<S489>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HV_TracBusSts_CallStatus = 4U;

                /* Transition: '<S489>:114' */
            }
            else
            {
                /* Transition: '<S489>:120' */
                if ((((uint32)tmpRead_1y) & 8U) != 0U)
                {
                    /* Transition: '<S489>:122' */
                    /* Transition: '<S489>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S489>:126' */
                }
                else
                {
                    /* Transition: '<S489>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S489>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HV_TracBusSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S335>/Poke' */
                /* FunctionCaller: '<S491>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S491>/Data Type Conversion'
                 */
                /* Event: '<S489>:38' */
                Rte_Call_PokeBPCR_e_HV_BatCntctrStat_PokeBPCR_e_HV_BatCntctrStat
                    ((sint16)CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_l,
                     FA_out_hg);

                /* End of Outputs for SubSystem: '<S335>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S489>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HV_TracBusSts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S335>/Fsft' */
        /* FunctionCaller: '<S490>/Function Caller' */
        /* Event: '<S489>:39' */
        Rte_Call_FsftBPCR_e_HV_BatCntctrStat_FsftBPCR_e_HV_BatCntctrStat();

        /* End of Outputs for SubSystem: '<S335>/Fsft' */
        /* Transition: '<S489>:113' */
        /* Transition: '<S489>:115' */
        /* Transition: '<S489>:114' */
    }

    /* End of Chart: '<S486>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_y_BPCM_HVTracMainCntacCfg' incorporates:
     *  Inport: '<Root>/VeCRDB_y_BPCM_HVTracMainCntacCfg_SigSts'
     */
    /* Transition: '<S489>:107' */
#if Rte_SysCon_VrntCR2B_BPCMHVTracMainContacConfig

    /* Outputs for Atomic SubSystem: '<S8>/BPCM_HV_Trac_Main_Contac_Config' */
    /* SignalConversion generated from: '<S2>/VeCRDB_y_BPCM_HVTracMainCntacCfg' incorporates:
     *  Inport: '<Root>/VeCRDB_y_BPCM_HVTracMainCntacCfg'
     */
    rtb_TmpSignalConversionAtVeC_ke =
        Rte_Read_VeCRDB_y_BPCM_HVTracMainCntacCfg_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_g);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S496>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HVTracMainCntacCfg_SigSts_Value(&tmpRead_1z);

    /* Outputs for Atomic SubSystem: '<S336>/BPCM_HV_Trac_Main_Contac_Config' */
    /* Chart: '<S493>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_y_BPCM_HVTracMainCntacCfg_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_1z) & 3U) != 0U)
    {
        /* Transition: '<S496>:100' */
        /* Transition: '<S496>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S496>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1z) & 4U) != 0U)
        {
            /* Transition: '<S496>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S496>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S496>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HVTracMainCntacCfg_CallStatus = 3U;

                /* Event: '<S496>:40' */
                /* Transition: '<S496>:115' */
                /* Transition: '<S496>:114' */
            }
        }
        else
        {
            /* Transition: '<S496>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ke) == 133)
            {
                /* Transition: '<S496>:95' */
                /* Transition: '<S496>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HVTracMainCntacCfg_CallStatus = 4U;

                /* Transition: '<S496>:114' */
            }
            else
            {
                /* Transition: '<S496>:120' */
                if ((((uint32)tmpRead_1z) & 8U) != 0U)
                {
                    /* Transition: '<S496>:122' */
                    /* Transition: '<S496>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S496>:126' */
                }
                else
                {
                    /* Transition: '<S496>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S496>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HVTracMainCntacCfg_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S492>/Poke' */
                /* FunctionCaller: '<S498>/Function Caller' */
                /* Event: '<S496>:38' */
                Rte_Call_PokeBPCR_e_HV_TracBatCntctrConfig_PokeBPCR_e_HV_TracBatCntctrConfig
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_g, FA_out_hg);

                /* End of Outputs for SubSystem: '<S492>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S496>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HVTracMainCntacCfg_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S492>/Fsft' */
        /* FunctionCaller: '<S497>/Function Caller' */
        /* Event: '<S496>:39' */
        Rte_Call_FsftBPCR_b_HV_TracBatCntctrConfig_FsftBPCR_b_HV_TracBatCntctrConfig
            ();

        /* End of Outputs for SubSystem: '<S492>/Fsft' */
        /* Transition: '<S496>:113' */
        /* Transition: '<S496>:115' */
        /* Transition: '<S496>:114' */
    }

    /* End of Chart: '<S493>/Chart' */
    /* End of Outputs for SubSystem: '<S336>/BPCM_HV_Trac_Main_Contac_Config' */
    /* End of Outputs for SubSystem: '<S8>/BPCM_HV_Trac_Main_Contac_Config' */
    /* Transition: '<S496>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_y_BPCM_HVTracMainCntacCfg' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HVTracMCS_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HVTracMCS_ErrSts'
     */
    rtb_TmpSignalConversionAtVeC_by = Rte_Read_VeCRDB_y_BPCM_HVTracMCS_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__dr);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HVTracMCS_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S503>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HVTracMCS_SigSts_Value(&tmpRead_20);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S499>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_20) & 3U) != 0U)
    {
        /* Transition: '<S503>:100' */
        /* Transition: '<S503>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S503>:104' */
        /*  MM */
        if ((((uint32)tmpRead_20) & 4U) != 0U)
        {
            /* Transition: '<S503>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S503>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S503>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HVTracMCS_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S337>/Tmot' */
                /* FunctionCaller: '<S506>/Function Caller' */
                /* Event: '<S503>:40' */
                Rte_Call_TmotBPCR_b_HVBatCntrWeld_ImpdOpn_TmotBPCR_b_HVBatCntrWeld_ImpdOpn
                    ();

                /* End of Outputs for SubSystem: '<S337>/Tmot' */
                /* Transition: '<S503>:115' */
                /* Transition: '<S503>:114' */
            }
        }
        else
        {
            /* Transition: '<S503>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_by) == 133)
            {
                /* Transition: '<S503>:95' */
                /* Transition: '<S503>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HVTracMCS_CallStatus = 4U;

                /* Transition: '<S503>:114' */
            }
            else
            {
                /* Transition: '<S503>:120' */
                /* Transition: '<S503>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HVTracMCS_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S337>/Poke' */
                /* FunctionCaller: '<S505>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S505>/Data Type Conversion'
                 */
                /* Event: '<S503>:38' */
                Rte_Call_PokeBPCR_e_HVBatCntrWeld_ImpdOpn_PokeBPCR_e_HVBatCntrWeld_ImpdOpn
                    ((sint16)CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__dr);

                /* End of Outputs for SubSystem: '<S337>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S503>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HVTracMCS_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S337>/Fsft' */
        /* FunctionCaller: '<S504>/Function Caller' */
        /* Event: '<S503>:39' */
        Rte_Call_FsftBPCR_b_HVBatCntrWeld_ImpdOpn_FsftBPCR_b_HVBatCntrWeld_ImpdOpn
            ();

        /* End of Outputs for SubSystem: '<S337>/Fsft' */
        /* Transition: '<S503>:113' */
        /* Transition: '<S503>:115' */
        /* Transition: '<S503>:114' */
    }

    /* End of Chart: '<S499>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HVTracBusVolt_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HVTracBusVolt_ErrSts'
     */
    /* Transition: '<S503>:107' */
    rtb_TmpSignalConversionAtVeC_cc = Rte_Read_VeCRDB_U_BPCM_HVTracBusVolt_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_U_b);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HVTracBusVolt_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S510>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HVTracBusVolt_SigSts_Value(&tmpRead_21);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S507>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_21) & 3U) != 0U)
    {
        /* Transition: '<S510>:100' */
        /* Transition: '<S510>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S510>:104' */
        /*  MM */
        if ((((uint32)tmpRead_21) & 4U) != 0U)
        {
            /* Transition: '<S510>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S510>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S510>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HVTracBusVolt_CallStatus = 3U;

                /* Event: '<S510>:40' */
                /* Transition: '<S510>:115' */
                /* Transition: '<S510>:114' */
            }
        }
        else
        {
            /* Transition: '<S510>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_cc) == 133)
            {
                /* Transition: '<S510>:95' */
                /* Transition: '<S510>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HVTracBusVolt_CallStatus = 4U;

                /* Transition: '<S510>:114' */
            }
            else
            {
                /* Transition: '<S510>:120' */
                if ((((uint32)tmpRead_21) & 8U) != 0U)
                {
                    /* Transition: '<S510>:122' */
                    /* Transition: '<S510>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S510>:126' */
                }
                else
                {
                    /* Transition: '<S510>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S510>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HVTracBusVolt_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S338>/Poke' */
                /* FunctionCaller: '<S512>/Function Caller' */
                /* Event: '<S510>:38' */
                Rte_Call_PokeBPCR_U_HV_BatVolt_PokeBPCR_U_HV_BatVolt
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_U_b, FA_out_hg);

                /* End of Outputs for SubSystem: '<S338>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S510>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HVTracBusVolt_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S338>/Fsft' */
        /* FunctionCaller: '<S511>/Function Caller' */
        /* Event: '<S510>:39' */
        Rte_Call_FsftBPCR_U_HV_BatVolt_FsftBPCR_U_HV_BatVolt();

        /* End of Outputs for SubSystem: '<S338>/Fsft' */
        /* Transition: '<S510>:113' */
        /* Transition: '<S510>:115' */
        /* Transition: '<S510>:114' */
    }

    /* End of Chart: '<S507>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_PwrLimpHm_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_PwrLimpHm_ErrSts'
     */
    /* Transition: '<S510>:107' */
    rtb_TmpSignalConversionAtVeC_pj = Rte_Read_VeCRDB_b_BPCM_PwrLimpHm_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_h);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_PwrLimpHm_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S515>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_PwrLimpHm_SigSts_Value(&tmpRead_22);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S513>/Chart' */
    if ((((uint32)tmpRead_22) & 3U) != 0U)
    {
        /* Transition: '<S515>:100' */
        /* Transition: '<S515>:103' */
        /* Transition: '<S515>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_PwrLimpHm_CallStatus = 2U;

        /* Event: '<S515>:39' */
        /* Transition: '<S515>:113' */
        /* Transition: '<S515>:115' */
        /* Transition: '<S515>:114' */
    }
    else
    {
        /* Transition: '<S515>:104' */
        /*  MM */
        if ((((uint32)tmpRead_22) & 4U) != 0U)
        {
            /* Transition: '<S515>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S515>:88' */
                /* Transition: '<S515>:111' */
                /* Call Fsft */
                VeCRDB_y_BPCM_PwrLimpHm_CallStatus = 2U;

                /* Event: '<S515>:39' */
                /* Transition: '<S515>:113' */
                /* Transition: '<S515>:115' */
                /* Transition: '<S515>:114' */
            }
            else
            {
                /* Transition: '<S515>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_PwrLimpHm_CallStatus = 3U;

                /* Event: '<S515>:40' */
                /* Transition: '<S515>:115' */
                /* Transition: '<S515>:114' */
            }
        }
        else
        {
            /* Transition: '<S515>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_pj) == 133)
            {
                /* Transition: '<S515>:95' */
                /* Transition: '<S515>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_PwrLimpHm_CallStatus = 4U;

                /* Transition: '<S515>:114' */
            }
            else
            {
                /* Transition: '<S515>:120' */
                /* Transition: '<S515>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_PwrLimpHm_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S339>/Poke' */
                /* FunctionCaller: '<S516>/Function Caller' */
                /* Event: '<S515>:38' */
                Rte_Call_PokeBPCR_b_PwrLimON_PokeBPCR_b_PwrLimON
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_h);

                /* End of Outputs for SubSystem: '<S339>/Poke' */
            }
        }
    }

    /* End of Chart: '<S513>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_b_BPCM_ReqforAuxLoadoff' incorporates:
     *  Inport: '<Root>/VeCRDB_y_BPCM_ReqforAuxLoadoff_SigSts'
     */
    /* Transition: '<S515>:107' */
#if Rte_SysCon_VrntCR2B_BPCMRequestforAuxLoadoff

    /* Outputs for Atomic SubSystem: '<S8>/BPCM_Request_for_Aux_Load_off' */
    /* SignalConversion generated from: '<S2>/VeCRDB_b_BPCM_ReqforAuxLoadoff' incorporates:
     *  Inport: '<Root>/VeCRDB_b_BPCM_ReqforAuxLoadoff'
     */
    rtb_TmpSignalConversionAtVeC_ok =
        Rte_Read_VeCRDB_b_BPCM_ReqforAuxLoadoff_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__hl);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S521>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_ReqforAuxLoadoff_SigSts_Value(&tmpRead_23);

    /* Outputs for Atomic SubSystem: '<S340>/BPCM_Request_for_Aux_Load_off' */
    /* Chart: '<S518>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_y_BPCM_ReqforAuxLoadoff_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_23) & 3U) != 0U)
    {
        /* Transition: '<S521>:100' */
        /* Transition: '<S521>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S521>:104' */
        /*  MM */
        if ((((uint32)tmpRead_23) & 4U) != 0U)
        {
            /* Transition: '<S521>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S521>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S521>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_ReqforAuxLoadoff_CallStatus = 3U;

                /* Event: '<S521>:40' */
                /* Transition: '<S521>:115' */
                /* Transition: '<S521>:114' */
            }
        }
        else
        {
            /* Transition: '<S521>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ok) == 133)
            {
                /* Transition: '<S521>:95' */
                /* Transition: '<S521>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_ReqforAuxLoadoff_CallStatus = 4U;

                /* Transition: '<S521>:114' */
            }
            else
            {
                /* Transition: '<S521>:120' */
                /* Transition: '<S521>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_ReqforAuxLoadoff_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S517>/Poke' */
                /* FunctionCaller: '<S523>/Function Caller' */
                /* Event: '<S521>:38' */
                Rte_Call_PokeBPCR_b_HV_AuxLoadOffReq_PokeBPCR_b_HV_AuxLoadOffReq
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__hl);

                /* End of Outputs for SubSystem: '<S517>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S521>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_ReqforAuxLoadoff_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S517>/Fsft' */
        /* FunctionCaller: '<S522>/Function Caller' */
        /* Event: '<S521>:39' */
        Rte_Call_FsftBPCR_b_HV_AuxLoadOffReq_FsftBPCR_b_HV_AuxLoadOffReq();

        /* End of Outputs for SubSystem: '<S517>/Fsft' */
        /* Transition: '<S521>:113' */
        /* Transition: '<S521>:115' */
        /* Transition: '<S521>:114' */
    }

    /* End of Chart: '<S518>/Chart' */
    /* End of Outputs for SubSystem: '<S340>/BPCM_Request_for_Aux_Load_off' */
    /* End of Outputs for SubSystem: '<S8>/BPCM_Request_for_Aux_Load_off' */
    /* Transition: '<S521>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_b_BPCM_ReqforAuxLoadoff' */

    /* SignalConversion generated from: '<S2>/VeCRDB_U_BPCM_Series_Voltage' incorporates:
     *  Inport: '<Root>/VeCRDB_y_BPCM_Series_Voltage_SigSts'
     */
#if Rte_SysCon_VrntCR2B_BPCMSeriesVoltage

    /* Outputs for Atomic SubSystem: '<S8>/BPCM_Series_Voltage' */
    /* SignalConversion generated from: '<S2>/VeCRDB_U_BPCM_Series_Voltage' incorporates:
     *  Inport: '<Root>/VeCRDB_U_BPCM_Series_Voltage'
     */
    rtb_TmpSignalConversionAtVeC_m4 =
        Rte_Read_VeCRDB_U_BPCM_Series_Voltage_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_U_k);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S528>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_Series_Voltage_SigSts_Value(&tmpRead_24);

    /* Outputs for Atomic SubSystem: '<S341>/BPCM_Series_Voltage' */
    /* Chart: '<S525>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_y_BPCM_Series_Voltage_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_24) & 3U) != 0U)
    {
        /* Transition: '<S528>:100' */
        /* Transition: '<S528>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S528>:104' */
        /*  MM */
        if ((((uint32)tmpRead_24) & 4U) != 0U)
        {
            /* Transition: '<S528>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S528>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S528>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_Series_Voltage_CallStatus = 3U;

                /* Event: '<S528>:40' */
                /* Transition: '<S528>:115' */
                /* Transition: '<S528>:114' */
            }
        }
        else
        {
            /* Transition: '<S528>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_m4) == 133)
            {
                /* Transition: '<S528>:95' */
                /* Transition: '<S528>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_Series_Voltage_CallStatus = 4U;

                /* Transition: '<S528>:114' */
            }
            else
            {
                /* Transition: '<S528>:120' */
                /* Transition: '<S528>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_Series_Voltage_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S524>/Poke' */
                /* FunctionCaller: '<S530>/Function Caller' */
                /* Event: '<S528>:38' */
                Rte_Call_PokeBPCR_U_HV_SeriesVolt_PokeBPCR_U_HV_SeriesVolt
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_U_k);

                /* End of Outputs for SubSystem: '<S524>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S528>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_Series_Voltage_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S524>/Fsft' */
        /* FunctionCaller: '<S529>/Function Caller' */
        /* Event: '<S528>:39' */
        Rte_Call_FsftBPCR_b_HV_SeriesVolt_FsftBPCR_b_HV_SeriesVolt();

        /* End of Outputs for SubSystem: '<S524>/Fsft' */
        /* Transition: '<S528>:113' */
        /* Transition: '<S528>:115' */
        /* Transition: '<S528>:114' */
    }

    /* End of Chart: '<S525>/Chart' */
    /* End of Outputs for SubSystem: '<S341>/BPCM_Series_Voltage' */
    /* End of Outputs for SubSystem: '<S8>/BPCM_Series_Voltage' */
    /* Transition: '<S528>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_U_BPCM_Series_Voltage' */

    /* SignalConversion generated from: '<S2>/VeCRDB_y_DC_Charge_Type_Status' incorporates:
     *  Inport: '<Root>/VeCRDB_y_DC_Charge_Type_Status_SigSts'
     */
#if Rte_SysCon_VrntCR2B_DCChargeTypeStatus

    /* Outputs for Atomic SubSystem: '<S8>/DC_Charge_Type_Status' */
    /* SignalConversion generated from: '<S2>/VeCRDB_y_DC_Charge_Type_Status' incorporates:
     *  Inport: '<Root>/VeCRDB_y_DC_Charge_Type_Status'
     */
    rtb_TmpSignalConversionAtVeC_ln =
        Rte_Read_VeCRDB_y_DC_Charge_Type_Status_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_D);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S535>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_DC_Charge_Type_Status_SigSts_Value(&tmpRead_25);

    /* Outputs for Atomic SubSystem: '<S342>/DC_Charge_Type_Status' */
    /* Chart: '<S532>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_y_DC_Charge_Type_Status_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_25) & 3U) != 0U)
    {
        /* Transition: '<S535>:100' */
        /* Transition: '<S535>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S535>:104' */
        /*  MM */
        if ((((uint32)tmpRead_25) & 4U) != 0U)
        {
            /* Transition: '<S535>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S535>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S535>:110' */
                /* Call Tmot */
                VeCRDB_y_DC_Charge_Type_Status_CallStatus = 3U;

                /* Event: '<S535>:40' */
                /* Transition: '<S535>:115' */
                /* Transition: '<S535>:114' */
            }
        }
        else
        {
            /* Transition: '<S535>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ln) == 133)
            {
                /* Transition: '<S535>:95' */
                /* Transition: '<S535>:116' */
                /* Call Nothing */
                VeCRDB_y_DC_Charge_Type_Status_CallStatus = 4U;

                /* Transition: '<S535>:114' */
            }
            else
            {
                /* Transition: '<S535>:120' */
                if ((((uint32)tmpRead_25) & 8U) != 0U)
                {
                    /* Transition: '<S535>:122' */
                    /* Transition: '<S535>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S535>:126' */
                }
                else
                {
                    /* Transition: '<S535>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S535>:117' */
                /* Call Poke */
                VeCRDB_y_DC_Charge_Type_Status_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S531>/Poke' */
                /* FunctionCaller: '<S537>/Function Caller' */
                /* Event: '<S535>:38' */
                Rte_Call_PokeBPCR_e_HV_DcChargeTypeStat_PokeBPCR_e_HV_DcChargeTypeStat
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_D, FA_out_hg);

                /* End of Outputs for SubSystem: '<S531>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S535>:111' */
        /* Call Fsft */
        VeCRDB_y_DC_Charge_Type_Status_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S531>/Fsft' */
        /* FunctionCaller: '<S536>/Function Caller' */
        /* Event: '<S535>:39' */
        Rte_Call_FsftBPCR_b_HV_DcChargeTypeStat_FsftBPCR_b_HV_DcChargeTypeStat();

        /* End of Outputs for SubSystem: '<S531>/Fsft' */
        /* Transition: '<S535>:113' */
        /* Transition: '<S535>:115' */
        /* Transition: '<S535>:114' */
    }

    /* End of Chart: '<S532>/Chart' */
    /* End of Outputs for SubSystem: '<S342>/DC_Charge_Type_Status' */
    /* End of Outputs for SubSystem: '<S8>/DC_Charge_Type_Status' */
    /* Transition: '<S535>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_y_DC_Charge_Type_Status' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_HVBP_BDU_Busbar_Temp_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_HVBP_BDU_Busbar_Temp_ErrSts'
     */
    rtb_TmpSignalConversionAtVeC_co =
        Rte_Read_VeCRDB_T_HVBP_BDU_Busbar_Temp_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_T_H);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_HVBP_BDU_Busbar_Temp_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S540>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_HVBP_BDU_Busbar_Temp_SigSts_Value(&tmpRead_26);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S538>/Chart' */
    if ((((uint32)tmpRead_26) & 3U) != 0U)
    {
        /* Transition: '<S540>:100' */
        /* Transition: '<S540>:103' */
        /* Transition: '<S540>:111' */
        /* Call Fsft */
        VeCRDB_y_HVBP_BDU_Busbar_Temp_CallStatus = 2U;

        /* Event: '<S540>:39' */
        /* Transition: '<S540>:113' */
        /* Transition: '<S540>:115' */
        /* Transition: '<S540>:114' */
    }
    else
    {
        /* Transition: '<S540>:104' */
        /*  MM */
        if ((((uint32)tmpRead_26) & 4U) != 0U)
        {
            /* Transition: '<S540>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S540>:88' */
                /* Transition: '<S540>:111' */
                /* Call Fsft */
                VeCRDB_y_HVBP_BDU_Busbar_Temp_CallStatus = 2U;

                /* Event: '<S540>:39' */
                /* Transition: '<S540>:113' */
                /* Transition: '<S540>:115' */
                /* Transition: '<S540>:114' */
            }
            else
            {
                /* Transition: '<S540>:110' */
                /* Call Tmot */
                VeCRDB_y_HVBP_BDU_Busbar_Temp_CallStatus = 3U;

                /* Event: '<S540>:40' */
                /* Transition: '<S540>:115' */
                /* Transition: '<S540>:114' */
            }
        }
        else
        {
            /* Transition: '<S540>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_co) == 133)
            {
                /* Transition: '<S540>:95' */
                /* Transition: '<S540>:116' */
                /* Call Nothing */
                VeCRDB_y_HVBP_BDU_Busbar_Temp_CallStatus = 4U;

                /* Transition: '<S540>:114' */
            }
            else
            {
                /* Transition: '<S540>:120' */
                /* Transition: '<S540>:117' */
                /* Call Poke */
                VeCRDB_y_HVBP_BDU_Busbar_Temp_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S343>/Poke' */
                /* FunctionCaller: '<S541>/Function Caller' */
                /* Event: '<S540>:38' */
                Rte_Call_PokeBPCR_T_BDUBusBarTemp_PokeBPCR_T_BDUBusBarTemp
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_T_H);

                /* End of Outputs for SubSystem: '<S343>/Poke' */
            }
        }
    }

    /* End of Chart: '<S538>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_HVBP_Busbar_Temp_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_HVBP_Busbar_Temp_ErrSts'
     */
    /* Transition: '<S540>:107' */
    rtb_TmpSignalConversionAtVe_bym = Rte_Read_VeCRDB_T_HVBP_Busbar_Temp_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_T_d);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_HVBP_Busbar_Temp_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S544>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_HVBP_Busbar_Temp_SigSts_Value(&tmpRead_27);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S542>/Chart' */
    if ((((uint32)tmpRead_27) & 3U) != 0U)
    {
        /* Transition: '<S544>:100' */
        /* Transition: '<S544>:103' */
        /* Transition: '<S544>:111' */
        /* Call Fsft */
        VeCRDB_y_HVBP_Busbar_Temp_CallStatus = 2U;

        /* Event: '<S544>:39' */
        /* Transition: '<S544>:113' */
        /* Transition: '<S544>:115' */
        /* Transition: '<S544>:114' */
    }
    else
    {
        /* Transition: '<S544>:104' */
        /*  MM */
        if ((((uint32)tmpRead_27) & 4U) != 0U)
        {
            /* Transition: '<S544>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S544>:88' */
                /* Transition: '<S544>:111' */
                /* Call Fsft */
                VeCRDB_y_HVBP_Busbar_Temp_CallStatus = 2U;

                /* Event: '<S544>:39' */
                /* Transition: '<S544>:113' */
                /* Transition: '<S544>:115' */
                /* Transition: '<S544>:114' */
            }
            else
            {
                /* Transition: '<S544>:110' */
                /* Call Tmot */
                VeCRDB_y_HVBP_Busbar_Temp_CallStatus = 3U;

                /* Event: '<S544>:40' */
                /* Transition: '<S544>:115' */
                /* Transition: '<S544>:114' */
            }
        }
        else
        {
            /* Transition: '<S544>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_bym) == 133)
            {
                /* Transition: '<S544>:95' */
                /* Transition: '<S544>:116' */
                /* Call Nothing */
                VeCRDB_y_HVBP_Busbar_Temp_CallStatus = 4U;

                /* Transition: '<S544>:114' */
            }
            else
            {
                /* Transition: '<S544>:120' */
                /* Transition: '<S544>:117' */
                /* Call Poke */
                VeCRDB_y_HVBP_Busbar_Temp_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S344>/Poke' */
                /* FunctionCaller: '<S545>/Function Caller' */
                /* Event: '<S544>:38' */
                Rte_Call_PokeBPCR_T_BusBarTemp_PokeBPCR_T_BusBarTemp
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_T_d);

                /* End of Outputs for SubSystem: '<S344>/Poke' */
            }
        }
    }

    /* End of Chart: '<S542>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_HVBatCntctOpnTime_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_HVBatCntctOpnTime_ErrSts'
     */
    /* Transition: '<S544>:107' */
    rtb_TmpSignalConversionAtVeC_ew =
        Rte_Read_VeCRDB_thr_HVBatCntctOpnTime_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_thr);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_HVBatCntctOpnTime_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S549>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_HVBatCntctOpnTime_SigSts_Value(&tmpRead_28);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S546>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_28) & 3U) != 0U)
    {
        /* Transition: '<S549>:100' */
        /* Transition: '<S549>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S549>:104' */
        /*  MM */
        if ((((uint32)tmpRead_28) & 4U) != 0U)
        {
            /* Transition: '<S549>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S549>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S549>:110' */
                /* Call Tmot */
                VeCRDB_y_HVBatCntctOpnTime_CallStatus = 3U;

                /* Event: '<S549>:40' */
                /* Transition: '<S549>:115' */
                /* Transition: '<S549>:114' */
            }
        }
        else
        {
            /* Transition: '<S549>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ew) == 133)
            {
                /* Transition: '<S549>:95' */
                /* Transition: '<S549>:116' */
                /* Call Nothing */
                VeCRDB_y_HVBatCntctOpnTime_CallStatus = 4U;

                /* Transition: '<S549>:114' */
            }
            else
            {
                /* Transition: '<S549>:120' */
                if ((((uint32)tmpRead_28) & 8U) != 0U)
                {
                    /* Transition: '<S549>:122' */
                    /* Transition: '<S549>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S549>:126' */
                }
                else
                {
                    /* Transition: '<S549>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S549>:117' */
                /* Call Poke */
                VeCRDB_y_HVBatCntctOpnTime_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S345>/Poke' */
                /* FunctionCaller: '<S551>/Function Caller' */
                /* Event: '<S549>:38' */
                Rte_Call_PokeBPCR_t_HVBattCntctrOpnTm_PokeBPCR_t_HVBattCntctrOpnTm
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_thr, FA_out_hg);

                /* End of Outputs for SubSystem: '<S345>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S549>:111' */
        /* Call Fsft */
        VeCRDB_y_HVBatCntctOpnTime_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S345>/Fsft' */
        /* FunctionCaller: '<S550>/Function Caller' */
        /* Event: '<S549>:39' */
        Rte_Call_FsftBPCR_t_HVBattCntctrOpnTm_FsftBPCR_t_HVBattCntctrOpnTm();

        /* End of Outputs for SubSystem: '<S345>/Fsft' */
        /* Transition: '<S549>:113' */
        /* Transition: '<S549>:115' */
        /* Transition: '<S549>:114' */
    }

    /* End of Chart: '<S546>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_HVBatCntctWeldChk_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_HVBatCntctWeldChk_ErrSts'
     */
    /* Transition: '<S549>:107' */
    rtb_TmpSignalConversionAtVeC_d1 = Rte_Read_VeCRDB_b_HVBatCntctWeldChk_Value(
        &CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__px);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_HVBatCntctWeldChk_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S554>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_HVBatCntctWeldChk_SigSts_Value(&tmpRead_29);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S552>/Chart' */
    if ((((uint32)tmpRead_29) & 3U) != 0U)
    {
        /* Transition: '<S554>:100' */
        /* Transition: '<S554>:103' */
        /* Transition: '<S554>:111' */
        /* Call Fsft */
        VeCRDB_y_HVBatCntctWeldChk_CallStatus = 2U;

        /* Event: '<S554>:39' */
        /* Transition: '<S554>:113' */
        /* Transition: '<S554>:115' */
        /* Transition: '<S554>:114' */
    }
    else
    {
        /* Transition: '<S554>:104' */
        /*  MM */
        if ((((uint32)tmpRead_29) & 4U) != 0U)
        {
            /* Transition: '<S554>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S554>:88' */
                /* Transition: '<S554>:111' */
                /* Call Fsft */
                VeCRDB_y_HVBatCntctWeldChk_CallStatus = 2U;

                /* Event: '<S554>:39' */
                /* Transition: '<S554>:113' */
                /* Transition: '<S554>:115' */
                /* Transition: '<S554>:114' */
            }
            else
            {
                /* Transition: '<S554>:110' */
                /* Call Tmot */
                VeCRDB_y_HVBatCntctWeldChk_CallStatus = 3U;

                /* Event: '<S554>:40' */
                /* Transition: '<S554>:115' */
                /* Transition: '<S554>:114' */
            }
        }
        else
        {
            /* Transition: '<S554>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_d1) == 133)
            {
                /* Transition: '<S554>:95' */
                /* Transition: '<S554>:116' */
                /* Call Nothing */
                VeCRDB_y_HVBatCntctWeldChk_CallStatus = 4U;

                /* Transition: '<S554>:114' */
            }
            else
            {
                /* Transition: '<S554>:120' */
                /* Transition: '<S554>:117' */
                /* Call Poke */
                VeCRDB_y_HVBatCntctWeldChk_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S346>/Poke' */
                /* FunctionCaller: '<S555>/Function Caller' */
                /* Event: '<S554>:38' */
                Rte_Call_PokeBPCR_b_StkOpnChkCmpl_PokeBPCR_b_StkOpnChkCmpl
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__px);

                /* End of Outputs for SubSystem: '<S346>/Poke' */
            }
        }
    }

    /* End of Chart: '<S552>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_HVBatLastSlept_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_HVBatLastSlept_ErrSts'
     */
    /* Transition: '<S554>:107' */
    rtb_TmpSignalConversionAtVeC_jm = Rte_Read_VeCRDB_tdy_HVBatLastSlept_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_tdy);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_HVBatLastSlept_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S558>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_HVBatLastSlept_SigSts_Value(&tmpRead_2a);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S556>/Chart' */
    if ((((uint32)tmpRead_2a) & 3U) != 0U)
    {
        /* Transition: '<S558>:100' */
        /* Transition: '<S558>:103' */
        /* Transition: '<S558>:111' */
        /* Call Fsft */
        VeCRDB_y_HVBatLastSlept_CallStatus = 2U;

        /* Event: '<S558>:39' */
        /* Transition: '<S558>:113' */
        /* Transition: '<S558>:115' */
        /* Transition: '<S558>:114' */
    }
    else
    {
        /* Transition: '<S558>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2a) & 4U) != 0U)
        {
            /* Transition: '<S558>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S558>:88' */
                /* Transition: '<S558>:111' */
                /* Call Fsft */
                VeCRDB_y_HVBatLastSlept_CallStatus = 2U;

                /* Event: '<S558>:39' */
                /* Transition: '<S558>:113' */
                /* Transition: '<S558>:115' */
                /* Transition: '<S558>:114' */
            }
            else
            {
                /* Transition: '<S558>:110' */
                /* Call Tmot */
                VeCRDB_y_HVBatLastSlept_CallStatus = 3U;

                /* Event: '<S558>:40' */
                /* Transition: '<S558>:115' */
                /* Transition: '<S558>:114' */
            }
        }
        else
        {
            /* Transition: '<S558>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_jm) == 133)
            {
                /* Transition: '<S558>:95' */
                /* Transition: '<S558>:116' */
                /* Call Nothing */
                VeCRDB_y_HVBatLastSlept_CallStatus = 4U;

                /* Transition: '<S558>:114' */
            }
            else
            {
                /* Transition: '<S558>:120' */
                /* Transition: '<S558>:117' */
                /* Call Poke */
                VeCRDB_y_HVBatLastSlept_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S347>/Poke' */
                /* FunctionCaller: '<S559>/Function Caller' */
                /* Event: '<S558>:38' */
                Rte_Call_PokeBPCR_t_HVBatSleepTime_PokeBPCR_t_HVBatSleepTime
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_tdy);

                /* End of Outputs for SubSystem: '<S347>/Poke' */
            }
        }
    }

    /* End of Chart: '<S556>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_HVBatReady_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_HVBatReady_ErrSts'
     */
    /* Transition: '<S558>:107' */
    rtb_TmpSignalConversionAtVeC_iy = Rte_Read_VeCRDB_b_HVBatReady_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_i);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_HVBatReady_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S563>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_HVBatReady_SigSts_Value(&tmpRead_2b);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S560>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2b) & 3U) != 0U)
    {
        /* Transition: '<S563>:100' */
        /* Transition: '<S563>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S563>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2b) & 4U) != 0U)
        {
            /* Transition: '<S563>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S563>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S563>:110' */
                /* Call Tmot */
                VeCRDB_y_HVBatReady_CallStatus = 3U;

                /* Event: '<S563>:40' */
                /* Transition: '<S563>:115' */
                /* Transition: '<S563>:114' */
            }
        }
        else
        {
            /* Transition: '<S563>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_iy) == 133)
            {
                /* Transition: '<S563>:95' */
                /* Transition: '<S563>:116' */
                /* Call Nothing */
                VeCRDB_y_HVBatReady_CallStatus = 4U;

                /* Transition: '<S563>:114' */
            }
            else
            {
                /* Transition: '<S563>:120' */
                /* Transition: '<S563>:117' */
                /* Call Poke */
                VeCRDB_y_HVBatReady_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S348>/Poke' */
                /* FunctionCaller: '<S565>/Function Caller' incorporates:
                 *  Constant: '<S565>/Constant'
                 */
                /* Event: '<S563>:38' */
                Rte_Call_PokeBPCR_b_HVBatRdy_PokeBPCR_b_HVBatRdy
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_i, false);

                /* End of Outputs for SubSystem: '<S348>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S563>:111' */
        /* Call Fsft */
        VeCRDB_y_HVBatReady_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S348>/Fsft' */
        /* FunctionCaller: '<S564>/Function Caller' */
        /* Event: '<S563>:39' */
        Rte_Call_FsftBPCR_b_HVBatRdy_FsftBPCR_b_HVBatRdy();

        /* End of Outputs for SubSystem: '<S348>/Fsft' */
        /* Transition: '<S563>:113' */
        /* Transition: '<S563>:115' */
        /* Transition: '<S563>:114' */
    }

    /* End of Chart: '<S560>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_Cell_VoltAvg_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_Cell_VoltAvg_ErrSts'
     */
    /* Transition: '<S563>:107' */
    rtb_TmpSignalConversionAtVeC_ar = Rte_Read_VeCRDB_U_BPCM_Cell_VoltAvg_Value(
        &CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_U_m);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_Cell_VoltAvg_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S583>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_Cell_VoltAvg_SigSts_Value(&tmpRead_2c);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S580>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2c) & 3U) != 0U)
    {
        /* Transition: '<S583>:100' */
        /* Transition: '<S583>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S583>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2c) & 4U) != 0U)
        {
            /* Transition: '<S583>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S583>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S583>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_Cell_VoltAvg_CallStatus = 3U;

                /* Event: '<S583>:40' */
                /* Transition: '<S583>:115' */
                /* Transition: '<S583>:114' */
            }
        }
        else
        {
            /* Transition: '<S583>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ar) == 133)
            {
                /* Transition: '<S583>:95' */
                /* Transition: '<S583>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_Cell_VoltAvg_CallStatus = 4U;

                /* Transition: '<S583>:114' */
            }
            else
            {
                /* Transition: '<S583>:120' */
                if ((((uint32)tmpRead_2c) & 8U) != 0U)
                {
                    /* Transition: '<S583>:122' */
                    /* Transition: '<S583>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S583>:126' */
                }
                else
                {
                    /* Transition: '<S583>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S583>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_Cell_VoltAvg_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S566>/Poke' */
                /* FunctionCaller: '<S585>/Function Caller' */
                /* Event: '<S583>:38' */
                Rte_Call_PokeBPCR_U_HV_BatModVoltAvg_PokeBPCR_U_HV_BatModVoltAvg
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_U_m, FA_out_hg);

                /* End of Outputs for SubSystem: '<S566>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S583>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_Cell_VoltAvg_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S566>/Fsft' */
        /* FunctionCaller: '<S584>/Function Caller' */
        /* Event: '<S583>:39' */
        Rte_Call_FsftBPCR_U_HV_BatModVoltAvg_FsftBPCR_U_HV_BatModVoltAvg();

        /* End of Outputs for SubSystem: '<S566>/Fsft' */
        /* Transition: '<S583>:113' */
        /* Transition: '<S583>:115' */
        /* Transition: '<S583>:114' */
    }

    /* End of Chart: '<S580>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_Cell_Volt_Max_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_Cell_Volt_Max_ErrSts'
     */
    /* Transition: '<S583>:107' */
    rtb_TmpSignalConversionAtVeC_dh = Rte_Read_VeCRDB_U_BPCM_Cell_Volt_Max_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_U_c);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_Cell_Volt_Max_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S589>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_Cell_Volt_Max_SigSts_Value(&tmpRead_2d);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S586>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2d) & 3U) != 0U)
    {
        /* Transition: '<S589>:100' */
        /* Transition: '<S589>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S589>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2d) & 4U) != 0U)
        {
            /* Transition: '<S589>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S589>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S589>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_Cell_Volt_Max_CallStatus = 3U;

                /* Event: '<S589>:40' */
                /* Transition: '<S589>:115' */
                /* Transition: '<S589>:114' */
            }
        }
        else
        {
            /* Transition: '<S589>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_dh) == 133)
            {
                /* Transition: '<S589>:95' */
                /* Transition: '<S589>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_Cell_Volt_Max_CallStatus = 4U;

                /* Transition: '<S589>:114' */
            }
            else
            {
                /* Transition: '<S589>:120' */
                if ((((uint32)tmpRead_2d) & 8U) != 0U)
                {
                    /* Transition: '<S589>:122' */
                    /* Transition: '<S589>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S589>:126' */
                }
                else
                {
                    /* Transition: '<S589>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S589>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_Cell_Volt_Max_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S567>/Poke' */
                /* FunctionCaller: '<S591>/Function Caller' */
                /* Event: '<S589>:38' */
                Rte_Call_PokeBPCR_U_HV_BatModVoltMax_PokeBPCR_U_HV_BatModVoltMax
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_U_c, FA_out_hg);

                /* End of Outputs for SubSystem: '<S567>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S589>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_Cell_Volt_Max_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S567>/Fsft' */
        /* FunctionCaller: '<S590>/Function Caller' */
        /* Event: '<S589>:39' */
        Rte_Call_FsftBPCR_U_HV_BatModVoltMax_FsftBPCR_U_HV_BatModVoltMax();

        /* End of Outputs for SubSystem: '<S567>/Fsft' */
        /* Transition: '<S589>:113' */
        /* Transition: '<S589>:115' */
        /* Transition: '<S589>:114' */
    }

    /* End of Chart: '<S586>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_Cell_Volt_Min_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_Cell_Volt_Min_ErrSts'
     */
    /* Transition: '<S589>:107' */
    rtb_TmpSignalConversionAtVeC_mz = Rte_Read_VeCRDB_U_BPCM_Cell_Volt_Min_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_U_p);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_Cell_Volt_Min_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S595>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_Cell_Volt_Min_SigSts_Value(&tmpRead_2e);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S592>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2e) & 3U) != 0U)
    {
        /* Transition: '<S595>:100' */
        /* Transition: '<S595>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S595>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2e) & 4U) != 0U)
        {
            /* Transition: '<S595>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S595>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S595>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_Cell_Volt_Min_CallStatus = 3U;

                /* Event: '<S595>:40' */
                /* Transition: '<S595>:115' */
                /* Transition: '<S595>:114' */
            }
        }
        else
        {
            /* Transition: '<S595>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_mz) == 133)
            {
                /* Transition: '<S595>:95' */
                /* Transition: '<S595>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_Cell_Volt_Min_CallStatus = 4U;

                /* Transition: '<S595>:114' */
            }
            else
            {
                /* Transition: '<S595>:120' */
                if ((((uint32)tmpRead_2e) & 8U) != 0U)
                {
                    /* Transition: '<S595>:122' */
                    /* Transition: '<S595>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S595>:126' */
                }
                else
                {
                    /* Transition: '<S595>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S595>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_Cell_Volt_Min_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S568>/Poke' */
                /* FunctionCaller: '<S597>/Function Caller' */
                /* Event: '<S595>:38' */
                Rte_Call_PokeBPCR_U_HV_BatModVoltMin_PokeBPCR_U_HV_BatModVoltMin
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_U_p, FA_out_hg);

                /* End of Outputs for SubSystem: '<S568>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S595>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_Cell_Volt_Min_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S568>/Fsft' */
        /* FunctionCaller: '<S596>/Function Caller' */
        /* Event: '<S595>:39' */
        Rte_Call_FsftBPCR_U_HV_BatModVoltMin_FsftBPCR_U_HV_BatModVoltMin();

        /* End of Outputs for SubSystem: '<S568>/Fsft' */
        /* Transition: '<S595>:113' */
        /* Transition: '<S595>:115' */
        /* Transition: '<S595>:114' */
    }

    /* End of Chart: '<S592>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HVNrCelMaxTmp_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HVNrCelMaxTmp_ErrSts'
     */
    /* Transition: '<S595>:107' */
    rtb_TmpSignalConversionAtVeC_kx = Rte_Read_VeCRDB_d_BPCM_HVNrCelMaxTmp_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_d_B);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HVNrCelMaxTmp_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S600>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HVNrCelMaxTmp_SigSts_Value(&tmpRead_2f);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S598>/Chart' */
    if ((((uint32)tmpRead_2f) & 3U) != 0U)
    {
        /* Transition: '<S600>:100' */
        /* Transition: '<S600>:103' */
        /* Transition: '<S600>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HVNrCelMaxTmp_CallStatus = 2U;

        /* Event: '<S600>:39' */
        /* Transition: '<S600>:113' */
        /* Transition: '<S600>:115' */
        /* Transition: '<S600>:114' */
    }
    else
    {
        /* Transition: '<S600>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2f) & 4U) != 0U)
        {
            /* Transition: '<S600>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S600>:88' */
                /* Transition: '<S600>:111' */
                /* Call Fsft */
                VeCRDB_y_BPCM_HVNrCelMaxTmp_CallStatus = 2U;

                /* Event: '<S600>:39' */
                /* Transition: '<S600>:113' */
                /* Transition: '<S600>:115' */
                /* Transition: '<S600>:114' */
            }
            else
            {
                /* Transition: '<S600>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HVNrCelMaxTmp_CallStatus = 3U;

                /* Event: '<S600>:40' */
                /* Transition: '<S600>:115' */
                /* Transition: '<S600>:114' */
            }
        }
        else
        {
            /* Transition: '<S600>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_kx) == 133)
            {
                /* Transition: '<S600>:95' */
                /* Transition: '<S600>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HVNrCelMaxTmp_CallStatus = 4U;

                /* Transition: '<S600>:114' */
            }
            else
            {
                /* Transition: '<S600>:120' */
                if ((((uint32)tmpRead_2f) & 8U) != 0U)
                {
                    /* Transition: '<S600>:122' */
                    /* Transition: '<S600>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S600>:126' */
                }
                else
                {
                    /* Transition: '<S600>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S600>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HVNrCelMaxTmp_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S569>/Poke' */
                /* FunctionCaller: '<S601>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S601>/Data Type Conversion'
                 */
                /* Event: '<S600>:38' */
                Rte_Call_PokeBPCR_cnt_HVBatt_ModNumMaxTmp_PokeBPCR_cnt_HVBatt_ModNumMaxTmp
                    ((sint16)CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_d_B,
                     FA_out_hg);

                /* End of Outputs for SubSystem: '<S569>/Poke' */
            }
        }
    }

    /* End of Chart: '<S598>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HVNrCelMaxVlt_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HVNrCelMaxVlt_ErrSts'
     */
    /* Transition: '<S600>:107' */
    rtb_TmpSignalConversionAtVeC_kk = Rte_Read_VeCRDB_d_BPCM_HVNrCelMaxVlt_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_d_d);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HVNrCelMaxVlt_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S604>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HVNrCelMaxVlt_SigSts_Value(&tmpRead_2g);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S602>/Chart' */
    if ((((uint32)tmpRead_2g) & 3U) != 0U)
    {
        /* Transition: '<S604>:100' */
        /* Transition: '<S604>:103' */
        /* Transition: '<S604>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HVNrCelMaxVlt_CallStatus = 2U;

        /* Event: '<S604>:39' */
        /* Transition: '<S604>:113' */
        /* Transition: '<S604>:115' */
        /* Transition: '<S604>:114' */
    }
    else
    {
        /* Transition: '<S604>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2g) & 4U) != 0U)
        {
            /* Transition: '<S604>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S604>:88' */
                /* Transition: '<S604>:111' */
                /* Call Fsft */
                VeCRDB_y_BPCM_HVNrCelMaxVlt_CallStatus = 2U;

                /* Event: '<S604>:39' */
                /* Transition: '<S604>:113' */
                /* Transition: '<S604>:115' */
                /* Transition: '<S604>:114' */
            }
            else
            {
                /* Transition: '<S604>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HVNrCelMaxVlt_CallStatus = 3U;

                /* Event: '<S604>:40' */
                /* Transition: '<S604>:115' */
                /* Transition: '<S604>:114' */
            }
        }
        else
        {
            /* Transition: '<S604>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_kk) == 133)
            {
                /* Transition: '<S604>:95' */
                /* Transition: '<S604>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HVNrCelMaxVlt_CallStatus = 4U;

                /* Transition: '<S604>:114' */
            }
            else
            {
                /* Transition: '<S604>:120' */
                /* Transition: '<S604>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HVNrCelMaxVlt_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S570>/Poke' */
                /* FunctionCaller: '<S605>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S605>/Data Type Conversion'
                 */
                /* Event: '<S604>:38' */
                Rte_Call_PokeBPCR_Cnt_HVBatt_NumMaxVlt_PokeBPCR_Cnt_HVBatt_NumMaxVlt
                    ((sint16)CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_d_d);

                /* End of Outputs for SubSystem: '<S570>/Poke' */
            }
        }
    }

    /* End of Chart: '<S602>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HVNrCelMinTmp_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HVNrCelMinTmp_ErrSts'
     */
    /* Transition: '<S604>:107' */
    rtb_TmpSignalConversionAtVeC_iq = Rte_Read_VeCRDB_d_BPCM_HVNrCelMinTmp_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_d_b);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HVNrCelMinTmp_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S608>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HVNrCelMinTmp_SigSts_Value(&tmpRead_2h);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S606>/Chart' */
    if ((((uint32)tmpRead_2h) & 3U) != 0U)
    {
        /* Transition: '<S608>:100' */
        /* Transition: '<S608>:103' */
        /* Transition: '<S608>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HVNrCelMinTmp_CallStatus = 2U;

        /* Event: '<S608>:39' */
        /* Transition: '<S608>:113' */
        /* Transition: '<S608>:115' */
        /* Transition: '<S608>:114' */
    }
    else
    {
        /* Transition: '<S608>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2h) & 4U) != 0U)
        {
            /* Transition: '<S608>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S608>:88' */
                /* Transition: '<S608>:111' */
                /* Call Fsft */
                VeCRDB_y_BPCM_HVNrCelMinTmp_CallStatus = 2U;

                /* Event: '<S608>:39' */
                /* Transition: '<S608>:113' */
                /* Transition: '<S608>:115' */
                /* Transition: '<S608>:114' */
            }
            else
            {
                /* Transition: '<S608>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HVNrCelMinTmp_CallStatus = 3U;

                /* Event: '<S608>:40' */
                /* Transition: '<S608>:115' */
                /* Transition: '<S608>:114' */
            }
        }
        else
        {
            /* Transition: '<S608>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_iq) == 133)
            {
                /* Transition: '<S608>:95' */
                /* Transition: '<S608>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HVNrCelMinTmp_CallStatus = 4U;

                /* Transition: '<S608>:114' */
            }
            else
            {
                /* Transition: '<S608>:120' */
                if ((((uint32)tmpRead_2h) & 8U) != 0U)
                {
                    /* Transition: '<S608>:122' */
                    /* Transition: '<S608>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S608>:126' */
                }
                else
                {
                    /* Transition: '<S608>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S608>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HVNrCelMinTmp_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S571>/Poke' */
                /* FunctionCaller: '<S609>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S609>/Data Type Conversion'
                 */
                /* Event: '<S608>:38' */
                Rte_Call_PokeBPCR_cnt_HVBatt_ModNumMinTmp_PokeBPCR_cnt_HVBatt_ModNumMinTmp
                    ((sint16)CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_d_b,
                     FA_out_hg);

                /* End of Outputs for SubSystem: '<S571>/Poke' */
            }
        }
    }

    /* End of Chart: '<S606>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_HVNrCelMinVlt_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_HVNrCelMinVlt_ErrSts'
     */
    /* Transition: '<S608>:107' */
    rtb_TmpSignalConversionAtVeC_ca = Rte_Read_VeCRDB_d_BPCM_HVNrCelMinVlt_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_d_i);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_HVNrCelMinVlt_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S612>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_HVNrCelMinVlt_SigSts_Value(&tmpRead_2i);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S610>/Chart' */
    if ((((uint32)tmpRead_2i) & 3U) != 0U)
    {
        /* Transition: '<S612>:100' */
        /* Transition: '<S612>:103' */
        /* Transition: '<S612>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_HVNrCelMinVlt_CallStatus = 2U;

        /* Event: '<S612>:39' */
        /* Transition: '<S612>:113' */
        /* Transition: '<S612>:115' */
        /* Transition: '<S612>:114' */
    }
    else
    {
        /* Transition: '<S612>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2i) & 4U) != 0U)
        {
            /* Transition: '<S612>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S612>:88' */
                /* Transition: '<S612>:111' */
                /* Call Fsft */
                VeCRDB_y_BPCM_HVNrCelMinVlt_CallStatus = 2U;

                /* Event: '<S612>:39' */
                /* Transition: '<S612>:113' */
                /* Transition: '<S612>:115' */
                /* Transition: '<S612>:114' */
            }
            else
            {
                /* Transition: '<S612>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_HVNrCelMinVlt_CallStatus = 3U;

                /* Event: '<S612>:40' */
                /* Transition: '<S612>:115' */
                /* Transition: '<S612>:114' */
            }
        }
        else
        {
            /* Transition: '<S612>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ca) == 133)
            {
                /* Transition: '<S612>:95' */
                /* Transition: '<S612>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_HVNrCelMinVlt_CallStatus = 4U;

                /* Transition: '<S612>:114' */
            }
            else
            {
                /* Transition: '<S612>:120' */
                /* Transition: '<S612>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_HVNrCelMinVlt_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S572>/Poke' */
                /* FunctionCaller: '<S613>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S613>/Data Type Conversion'
                 */
                /* Event: '<S612>:38' */
                Rte_Call_PokeBPCR_Cnt_HVBatt_NumMinVlt_PokeBPCR_Cnt_HVBatt_NumMinVlt
                    ((sint16)CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_d_i);

                /* End of Outputs for SubSystem: '<S572>/Poke' */
            }
        }
    }

    /* End of Chart: '<S610>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCMMaxCelVoltAlwd_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCMMaxCelVoltAlwd_ErrSts'
     */
    /* Transition: '<S612>:107' */
    rtb_TmpSignalConversionAtVe_gjj = Rte_Read_VeCRDB_U_BPCMMaxCelVoltAlwd_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__ma);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCMMaxCelVoltAlwd_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S617>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCMMaxCelVoltAlwd_SigSts_Value(&tmpRead_2j);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S614>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2j) & 3U) != 0U)
    {
        /* Transition: '<S617>:100' */
        /* Transition: '<S617>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S617>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2j) & 4U) != 0U)
        {
            /* Transition: '<S617>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S617>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S617>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCMMaxCelVoltAlwd_CallStatus = 3U;

                /* Event: '<S617>:40' */
                /* Transition: '<S617>:115' */
                /* Transition: '<S617>:114' */
            }
        }
        else
        {
            /* Transition: '<S617>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_gjj) == 133)
            {
                /* Transition: '<S617>:95' */
                /* Transition: '<S617>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCMMaxCelVoltAlwd_CallStatus = 4U;

                /* Transition: '<S617>:114' */
            }
            else
            {
                /* Transition: '<S617>:120' */
                if ((((uint32)tmpRead_2j) & 8U) != 0U)
                {
                    /* Transition: '<S617>:122' */
                    /* Transition: '<S617>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S617>:126' */
                }
                else
                {
                    /* Transition: '<S617>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S617>:117' */
                /* Call Poke */
                VeCRDB_y_BPCMMaxCelVoltAlwd_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S573>/Poke' */
                /* FunctionCaller: '<S619>/Function Caller' */
                /* Event: '<S617>:38' */
                Rte_Call_PokeBPCR_U_MaxCellVltAlld_PokeBPCR_U_MaxCellVltAlld
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__ma, FA_out_hg);

                /* End of Outputs for SubSystem: '<S573>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S617>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCMMaxCelVoltAlwd_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S573>/Fsft' */
        /* FunctionCaller: '<S618>/Function Caller' */
        /* Event: '<S617>:39' */
        Rte_Call_FsftBPCR_U_MaxCellVltAlld_FsftBPCR_U_MaxCellVltAlld();

        /* End of Outputs for SubSystem: '<S573>/Fsft' */
        /* Transition: '<S617>:113' */
        /* Transition: '<S617>:115' */
        /* Transition: '<S617>:114' */
    }

    /* End of Chart: '<S614>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCMMaxPkVoltAllwd_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCMMaxPkVoltAllwd_ErrSts'
     */
    /* Transition: '<S617>:107' */
    rtb_TmpSignalConversionAtVeC_gk = Rte_Read_VeCRDB_U_BPCMMaxPkVoltAllwd_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_U_f);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCMMaxPkVoltAllwd_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S623>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCMMaxPkVoltAllwd_SigSts_Value(&tmpRead_2k);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S620>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2k) & 3U) != 0U)
    {
        /* Transition: '<S623>:100' */
        /* Transition: '<S623>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S623>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2k) & 4U) != 0U)
        {
            /* Transition: '<S623>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S623>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S623>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCMMaxPkVoltAllwd_CallStatus = 3U;

                /* Event: '<S623>:40' */
                /* Transition: '<S623>:115' */
                /* Transition: '<S623>:114' */
            }
        }
        else
        {
            /* Transition: '<S623>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_gk) == 133)
            {
                /* Transition: '<S623>:95' */
                /* Transition: '<S623>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCMMaxPkVoltAllwd_CallStatus = 4U;

                /* Transition: '<S623>:114' */
            }
            else
            {
                /* Transition: '<S623>:120' */
                if ((((uint32)tmpRead_2k) & 8U) != 0U)
                {
                    /* Transition: '<S623>:122' */
                    /* Transition: '<S623>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S623>:126' */
                }
                else
                {
                    /* Transition: '<S623>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S623>:117' */
                /* Call Poke */
                VeCRDB_y_BPCMMaxPkVoltAllwd_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S574>/Poke' */
                /* FunctionCaller: '<S625>/Function Caller' */
                /* Event: '<S623>:38' */
                Rte_Call_PokeBPCR_U_MaxPkVltAlld_PokeBPCR_U_MaxPkVltAlld
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_U_f, FA_out_hg);

                /* End of Outputs for SubSystem: '<S574>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S623>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCMMaxPkVoltAllwd_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S574>/Fsft' */
        /* FunctionCaller: '<S624>/Function Caller' */
        /* Event: '<S623>:39' */
        Rte_Call_FsftBPCR_U_MaxPkVltAlld_FsftBPCR_U_MaxPkVltAlld();

        /* End of Outputs for SubSystem: '<S574>/Fsft' */
        /* Transition: '<S623>:113' */
        /* Transition: '<S623>:115' */
        /* Transition: '<S623>:114' */
    }

    /* End of Chart: '<S620>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCMMinCelVoltAlwd_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCMMinCelVoltAlwd_ErrSts'
     */
    /* Transition: '<S623>:107' */
    rtb_TmpSignalConversionAtVeC_je = Rte_Read_VeCRDB_U_BPCMMinCelVoltAlwd_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__pc);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCMMinCelVoltAlwd_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S629>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCMMinCelVoltAlwd_SigSts_Value(&tmpRead_2l);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S626>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2l) & 3U) != 0U)
    {
        /* Transition: '<S629>:100' */
        /* Transition: '<S629>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S629>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2l) & 4U) != 0U)
        {
            /* Transition: '<S629>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S629>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S629>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCMMinCelVoltAlwd_CallStatus = 3U;

                /* Event: '<S629>:40' */
                /* Transition: '<S629>:115' */
                /* Transition: '<S629>:114' */
            }
        }
        else
        {
            /* Transition: '<S629>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_je) == 133)
            {
                /* Transition: '<S629>:95' */
                /* Transition: '<S629>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCMMinCelVoltAlwd_CallStatus = 4U;

                /* Transition: '<S629>:114' */
            }
            else
            {
                /* Transition: '<S629>:120' */
                if ((((uint32)tmpRead_2l) & 8U) != 0U)
                {
                    /* Transition: '<S629>:122' */
                    /* Transition: '<S629>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S629>:126' */
                }
                else
                {
                    /* Transition: '<S629>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S629>:117' */
                /* Call Poke */
                VeCRDB_y_BPCMMinCelVoltAlwd_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S575>/Poke' */
                /* FunctionCaller: '<S631>/Function Caller' */
                /* Event: '<S629>:38' */
                Rte_Call_PokeBPCR_U_MinCellVltAlld_PokeBPCR_U_MinCellVltAlld
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__pc, FA_out_hg);

                /* End of Outputs for SubSystem: '<S575>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S629>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCMMinCelVoltAlwd_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S575>/Fsft' */
        /* FunctionCaller: '<S630>/Function Caller' */
        /* Event: '<S629>:39' */
        Rte_Call_FsftBPCR_U_MinCellVltAlld_FsftBPCR_U_MinCellVltAlld();

        /* End of Outputs for SubSystem: '<S575>/Fsft' */
        /* Transition: '<S629>:113' */
        /* Transition: '<S629>:115' */
        /* Transition: '<S629>:114' */
    }

    /* End of Chart: '<S626>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCMMinPkVoltAllwd_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCMMinPkVoltAllwd_ErrSts'
     */
    /* Transition: '<S629>:107' */
    rtb_TmpSignalConversionAtVeC_bk = Rte_Read_VeCRDB_U_BPCMMinPkVoltAllwd_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_U_d);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCMMinPkVoltAllwd_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S635>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCMMinPkVoltAllwd_SigSts_Value(&tmpRead_2m);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S632>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2m) & 3U) != 0U)
    {
        /* Transition: '<S635>:100' */
        /* Transition: '<S635>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S635>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2m) & 4U) != 0U)
        {
            /* Transition: '<S635>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S635>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S635>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCMMinPkVoltAllwd_CallStatus = 3U;

                /* Event: '<S635>:40' */
                /* Transition: '<S635>:115' */
                /* Transition: '<S635>:114' */
            }
        }
        else
        {
            /* Transition: '<S635>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_bk) == 133)
            {
                /* Transition: '<S635>:95' */
                /* Transition: '<S635>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCMMinPkVoltAllwd_CallStatus = 4U;

                /* Transition: '<S635>:114' */
            }
            else
            {
                /* Transition: '<S635>:120' */
                if ((((uint32)tmpRead_2m) & 8U) != 0U)
                {
                    /* Transition: '<S635>:122' */
                    /* Transition: '<S635>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S635>:126' */
                }
                else
                {
                    /* Transition: '<S635>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S635>:117' */
                /* Call Poke */
                VeCRDB_y_BPCMMinPkVoltAllwd_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S576>/Poke' */
                /* FunctionCaller: '<S637>/Function Caller' */
                /* Event: '<S635>:38' */
                Rte_Call_PokeBPCR_U_MinPkVltAlld_PokeBPCR_U_MinPkVltAlld
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_U_d, FA_out_hg);

                /* End of Outputs for SubSystem: '<S576>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S635>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCMMinPkVoltAllwd_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S576>/Fsft' */
        /* FunctionCaller: '<S636>/Function Caller' */
        /* Event: '<S635>:39' */
        Rte_Call_FsftBPCR_U_MinPkVltAlld_FsftBPCR_U_MinPkVltAlld();

        /* End of Outputs for SubSystem: '<S576>/Fsft' */
        /* Transition: '<S635>:113' */
        /* Transition: '<S635>:115' */
        /* Transition: '<S635>:114' */
    }

    /* End of Chart: '<S632>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_OCVAvgCelVolt_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_OCVAvgCelVolt_ErrSts'
     */
    /* Transition: '<S635>:107' */
    rtb_TmpSignalConversionAtVeC_hb = Rte_Read_VeCRDB_U_BPCM_OCVAvgCelVolt_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__lb);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_OCVAvgCelVolt_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S641>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_OCVAvgCelVolt_SigSts_Value(&tmpRead_2n);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S638>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2n) & 3U) != 0U)
    {
        /* Transition: '<S641>:100' */
        /* Transition: '<S641>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S641>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2n) & 4U) != 0U)
        {
            /* Transition: '<S641>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S641>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S641>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_OCVAvgCelVolt_CallStatus = 3U;

                /* Event: '<S641>:40' */
                /* Transition: '<S641>:115' */
                /* Transition: '<S641>:114' */
            }
        }
        else
        {
            /* Transition: '<S641>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_hb) == 133)
            {
                /* Transition: '<S641>:95' */
                /* Transition: '<S641>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_OCVAvgCelVolt_CallStatus = 4U;

                /* Transition: '<S641>:114' */
            }
            else
            {
                /* Transition: '<S641>:120' */
                if ((((uint32)tmpRead_2n) & 8U) != 0U)
                {
                    /* Transition: '<S641>:122' */
                    /* Transition: '<S641>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S641>:126' */
                }
                else
                {
                    /* Transition: '<S641>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S641>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_OCVAvgCelVolt_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S577>/Poke' */
                /* FunctionCaller: '<S643>/Function Caller' */
                /* Event: '<S641>:38' */
                Rte_Call_PokeBPCR_U_OCVAveCellVoltage_PokeBPCR_U_OCVAveCellVoltage
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__lb, FA_out_hg);

                /* End of Outputs for SubSystem: '<S577>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S641>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_OCVAvgCelVolt_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S577>/Fsft' */
        /* FunctionCaller: '<S642>/Function Caller' */
        /* Event: '<S641>:39' */
        Rte_Call_FsftBPCR_U_OCVAveCellVoltage_FsftBPCR_U_OCVAveCellVoltage();

        /* End of Outputs for SubSystem: '<S577>/Fsft' */
        /* Transition: '<S641>:113' */
        /* Transition: '<S641>:115' */
        /* Transition: '<S641>:114' */
    }

    /* End of Chart: '<S638>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_OCVMaxCelVolt_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_OCVMaxCelVolt_ErrSts'
     */
    /* Transition: '<S641>:107' */
    rtb_TmpSignalConversionAtVeC_fv = Rte_Read_VeCRDB_U_BPCM_OCVMaxCelVolt_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__dt);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_OCVMaxCelVolt_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S647>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_OCVMaxCelVolt_SigSts_Value(&tmpRead_2o);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S644>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2o) & 3U) != 0U)
    {
        /* Transition: '<S647>:100' */
        /* Transition: '<S647>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S647>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2o) & 4U) != 0U)
        {
            /* Transition: '<S647>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S647>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S647>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_OCVMaxCelVolt_CallStatus = 3U;

                /* Event: '<S647>:40' */
                /* Transition: '<S647>:115' */
                /* Transition: '<S647>:114' */
            }
        }
        else
        {
            /* Transition: '<S647>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_fv) == 133)
            {
                /* Transition: '<S647>:95' */
                /* Transition: '<S647>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_OCVMaxCelVolt_CallStatus = 4U;

                /* Transition: '<S647>:114' */
            }
            else
            {
                /* Transition: '<S647>:120' */
                if ((((uint32)tmpRead_2o) & 8U) != 0U)
                {
                    /* Transition: '<S647>:122' */
                    /* Transition: '<S647>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S647>:126' */
                }
                else
                {
                    /* Transition: '<S647>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S647>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_OCVMaxCelVolt_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S578>/Poke' */
                /* FunctionCaller: '<S649>/Function Caller' */
                /* Event: '<S647>:38' */
                Rte_Call_PokeBPCR_U_OCVMaxCellVoltage_PokeBPCR_U_OCVMaxCellVoltage
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__dt, FA_out_hg);

                /* End of Outputs for SubSystem: '<S578>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S647>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_OCVMaxCelVolt_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S578>/Fsft' */
        /* FunctionCaller: '<S648>/Function Caller' */
        /* Event: '<S647>:39' */
        Rte_Call_FsftBPCR_U_OCVMaxCellVoltage_FsftBPCR_U_OCVMaxCellVoltage();

        /* End of Outputs for SubSystem: '<S578>/Fsft' */
        /* Transition: '<S647>:113' */
        /* Transition: '<S647>:115' */
        /* Transition: '<S647>:114' */
    }

    /* End of Chart: '<S644>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BPCM_OCVMinCelVolt_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BPCM_OCVMinCelVolt_ErrSts'
     */
    /* Transition: '<S647>:107' */
    rtb_TmpSignalConversionAtVeC_gl = Rte_Read_VeCRDB_U_BPCM_OCVMinCelVolt_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__aq);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BPCM_OCVMinCelVolt_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S653>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BPCM_OCVMinCelVolt_SigSts_Value(&tmpRead_2p);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S650>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2p) & 3U) != 0U)
    {
        /* Transition: '<S653>:100' */
        /* Transition: '<S653>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S653>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2p) & 4U) != 0U)
        {
            /* Transition: '<S653>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S653>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S653>:110' */
                /* Call Tmot */
                VeCRDB_y_BPCM_OCVMinCelVolt_CallStatus = 3U;

                /* Event: '<S653>:40' */
                /* Transition: '<S653>:115' */
                /* Transition: '<S653>:114' */
            }
        }
        else
        {
            /* Transition: '<S653>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_gl) == 133)
            {
                /* Transition: '<S653>:95' */
                /* Transition: '<S653>:116' */
                /* Call Nothing */
                VeCRDB_y_BPCM_OCVMinCelVolt_CallStatus = 4U;

                /* Transition: '<S653>:114' */
            }
            else
            {
                /* Transition: '<S653>:120' */
                if ((((uint32)tmpRead_2p) & 8U) != 0U)
                {
                    /* Transition: '<S653>:122' */
                    /* Transition: '<S653>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S653>:126' */
                }
                else
                {
                    /* Transition: '<S653>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S653>:117' */
                /* Call Poke */
                VeCRDB_y_BPCM_OCVMinCelVolt_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S579>/Poke' */
                /* FunctionCaller: '<S655>/Function Caller' */
                /* Event: '<S653>:38' */
                Rte_Call_PokeBPCR_U_OCVMinCellVoltage_PokeBPCR_U_OCVMinCellVoltage
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__aq, FA_out_hg);

                /* End of Outputs for SubSystem: '<S579>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S653>:111' */
        /* Call Fsft */
        VeCRDB_y_BPCM_OCVMinCelVolt_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S579>/Fsft' */
        /* FunctionCaller: '<S654>/Function Caller' */
        /* Event: '<S653>:39' */
        Rte_Call_FsftBPCR_U_OCVMinCellVoltage_FsftBPCR_U_OCVMinCellVoltage();

        /* End of Outputs for SubSystem: '<S579>/Fsft' */
        /* Transition: '<S653>:113' */
        /* Transition: '<S653>:115' */
        /* Transition: '<S653>:114' */
    }

    /* End of Chart: '<S650>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_OBC_Temp1_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_OBC_Temp1_ErrSts'
     */
    /* Transition: '<S653>:107' */
    rtb_TmpSignalConversionAtVeC_fp = Rte_Read_VeCRDB_T_OBC_Temp1_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_T_O);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_OBC_Temp1_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S664>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_OBC_Temp1_SigSts_Value(&tmpRead_7);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S660>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_7) & 3U) != 0U)
    {
        /* Transition: '<S664>:100' */
        /* Transition: '<S664>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S664>:104' */
        /*  MM */
        if ((((uint32)tmpRead_7) & 4U) != 0U)
        {
            /* Transition: '<S664>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S664>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S664>:110' */
                /* Call Tmot */
                VeCRDB_y_OBC_Temp1_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S656>/Tmot' */
                /* FunctionCaller: '<S667>/Function Caller' */
                /* Event: '<S664>:40' */
                Rte_Call_TmotTMIR_b_OBCMTemp1_TmotTMIR_b_OBCMTemp1();

                /* End of Outputs for SubSystem: '<S656>/Tmot' */
                /* Transition: '<S664>:115' */
                /* Transition: '<S664>:114' */
            }
        }
        else
        {
            /* Transition: '<S664>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_fp) == 133)
            {
                /* Transition: '<S664>:95' */
                /* Transition: '<S664>:116' */
                /* Call Nothing */
                VeCRDB_y_OBC_Temp1_CallStatus = 4U;

                /* Transition: '<S664>:114' */
            }
            else
            {
                /* Transition: '<S664>:120' */
                if ((((uint32)tmpRead_7) & 8U) != 0U)
                {
                    /* Transition: '<S664>:122' */
                    /* Transition: '<S664>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S664>:126' */
                }
                else
                {
                    /* Transition: '<S664>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S664>:117' */
                /* Call Poke */
                VeCRDB_y_OBC_Temp1_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S656>/Poke' */
                /* FunctionCaller: '<S666>/Function Caller' */
                /* Event: '<S664>:38' */
                Rte_Call_PokeTMIR_T_OBCMTemp1_PokeTMIR_T_OBCMTemp1
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_T_O, FA_out_hg);

                /* End of Outputs for SubSystem: '<S656>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S664>:111' */
        /* Call Fsft */
        VeCRDB_y_OBC_Temp1_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S656>/Fsft' */
        /* FunctionCaller: '<S665>/Function Caller' */
        /* Event: '<S664>:39' */
        Rte_Call_FsftTMIR_T_OBCMTemp1_FsftTMIR_T_OBCMTemp1();

        /* End of Outputs for SubSystem: '<S656>/Fsft' */
        /* Transition: '<S664>:113' */
        /* Transition: '<S664>:115' */
        /* Transition: '<S664>:114' */
    }

    /* End of Chart: '<S660>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_OBC_Temp2_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_OBC_Temp2_ErrSts'
     */
    /* Transition: '<S664>:107' */
    rtb_TmpSignalConversionAtVeC_ic = Rte_Read_VeCRDB_T_OBC_Temp2_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_T_h);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_OBC_Temp2_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S672>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_OBC_Temp2_SigSts_Value(&tmpRead_8);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S668>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_8) & 3U) != 0U)
    {
        /* Transition: '<S672>:100' */
        /* Transition: '<S672>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S672>:104' */
        /*  MM */
        if ((((uint32)tmpRead_8) & 4U) != 0U)
        {
            /* Transition: '<S672>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S672>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S672>:110' */
                /* Call Tmot */
                VeCRDB_y_OBC_Temp2_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S657>/Tmot' */
                /* FunctionCaller: '<S675>/Function Caller' */
                /* Event: '<S672>:40' */
                Rte_Call_TmotTMIR_b_OBCMTemp2_TmotTMIR_b_OBCMTemp2();

                /* End of Outputs for SubSystem: '<S657>/Tmot' */
                /* Transition: '<S672>:115' */
                /* Transition: '<S672>:114' */
            }
        }
        else
        {
            /* Transition: '<S672>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ic) == 133)
            {
                /* Transition: '<S672>:95' */
                /* Transition: '<S672>:116' */
                /* Call Nothing */
                VeCRDB_y_OBC_Temp2_CallStatus = 4U;

                /* Transition: '<S672>:114' */
            }
            else
            {
                /* Transition: '<S672>:120' */
                if ((((uint32)tmpRead_8) & 8U) != 0U)
                {
                    /* Transition: '<S672>:122' */
                    /* Transition: '<S672>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S672>:126' */
                }
                else
                {
                    /* Transition: '<S672>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S672>:117' */
                /* Call Poke */
                VeCRDB_y_OBC_Temp2_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S657>/Poke' */
                /* FunctionCaller: '<S674>/Function Caller' */
                /* Event: '<S672>:38' */
                Rte_Call_PokeTMIR_T_OBCMTemp2_PokeTMIR_T_OBCMTemp2
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_T_h, FA_out_hg);

                /* End of Outputs for SubSystem: '<S657>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S672>:111' */
        /* Call Fsft */
        VeCRDB_y_OBC_Temp2_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S657>/Fsft' */
        /* FunctionCaller: '<S673>/Function Caller' */
        /* Event: '<S672>:39' */
        Rte_Call_FsftTMIR_T_OBCMTemp2_FsftTMIR_T_OBCMTemp2();

        /* End of Outputs for SubSystem: '<S657>/Fsft' */
        /* Transition: '<S672>:113' */
        /* Transition: '<S672>:115' */
        /* Transition: '<S672>:114' */
    }

    /* End of Chart: '<S668>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_OBC_Temp3_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_OBC_Temp3_ErrSts'
     */
    /* Transition: '<S672>:107' */
    rtb_TmpSignalConversionAtVe_kty = Rte_Read_VeCRDB_T_OBC_Temp3_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__o3);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_OBC_Temp3_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S679>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_OBC_Temp3_SigSts_Value(&tmpRead_9);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S676>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_9) & 3U) != 0U)
    {
        /* Transition: '<S679>:100' */
        /* Transition: '<S679>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S679>:104' */
        /*  MM */
        if ((((uint32)tmpRead_9) & 4U) != 0U)
        {
            /* Transition: '<S679>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S679>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S679>:110' */
                /* Call Tmot */
                VeCRDB_y_OBC_Temp3_CallStatus = 3U;

                /* Event: '<S679>:40' */
                /* Transition: '<S679>:115' */
                /* Transition: '<S679>:114' */
            }
        }
        else
        {
            /* Transition: '<S679>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_kty) == 133)
            {
                /* Transition: '<S679>:95' */
                /* Transition: '<S679>:116' */
                /* Call Nothing */
                VeCRDB_y_OBC_Temp3_CallStatus = 4U;

                /* Transition: '<S679>:114' */
            }
            else
            {
                /* Transition: '<S679>:120' */
                if ((((uint32)tmpRead_9) & 8U) != 0U)
                {
                    /* Transition: '<S679>:122' */
                    /* Transition: '<S679>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S679>:126' */
                }
                else
                {
                    /* Transition: '<S679>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S679>:117' */
                /* Call Poke */
                VeCRDB_y_OBC_Temp3_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S658>/Poke' */
                /* FunctionCaller: '<S681>/Function Caller' */
                /* Event: '<S679>:38' */
                Rte_Call_PokeTMIR_T_OBCMTemp3_PokeTMIR_T_OBCMTemp3
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__o3, FA_out_hg);

                /* End of Outputs for SubSystem: '<S658>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S679>:111' */
        /* Call Fsft */
        VeCRDB_y_OBC_Temp3_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S658>/Fsft' */
        /* FunctionCaller: '<S680>/Function Caller' */
        /* Event: '<S679>:39' */
        Rte_Call_FsftTMIR_T_OBCMTemp3_FsftTMIR_T_OBCMTemp3();

        /* End of Outputs for SubSystem: '<S658>/Fsft' */
        /* Transition: '<S679>:113' */
        /* Transition: '<S679>:115' */
        /* Transition: '<S679>:114' */
    }

    /* End of Chart: '<S676>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_OBC_Temp4_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_OBC_Temp4_ErrSts'
     */
    /* Transition: '<S679>:107' */
    rtb_TmpSignalConversionAtVeC_gv = Rte_Read_VeCRDB_T_OBC_Temp4_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_T_c);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_OBC_Temp4_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S685>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_OBC_Temp4_SigSts_Value(&tmpRead_a);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S682>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_a) & 3U) != 0U)
    {
        /* Transition: '<S685>:100' */
        /* Transition: '<S685>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S685>:104' */
        /*  MM */
        if ((((uint32)tmpRead_a) & 4U) != 0U)
        {
            /* Transition: '<S685>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S685>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S685>:110' */
                /* Call Tmot */
                VeCRDB_y_OBC_Temp4_CallStatus = 3U;

                /* Event: '<S685>:40' */
                /* Transition: '<S685>:115' */
                /* Transition: '<S685>:114' */
            }
        }
        else
        {
            /* Transition: '<S685>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_gv) == 133)
            {
                /* Transition: '<S685>:95' */
                /* Transition: '<S685>:116' */
                /* Call Nothing */
                VeCRDB_y_OBC_Temp4_CallStatus = 4U;

                /* Transition: '<S685>:114' */
            }
            else
            {
                /* Transition: '<S685>:120' */
                if ((((uint32)tmpRead_a) & 8U) != 0U)
                {
                    /* Transition: '<S685>:122' */
                    /* Transition: '<S685>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S685>:126' */
                }
                else
                {
                    /* Transition: '<S685>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S685>:117' */
                /* Call Poke */
                VeCRDB_y_OBC_Temp4_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S659>/Poke' */
                /* FunctionCaller: '<S687>/Function Caller' */
                /* Event: '<S685>:38' */
                Rte_Call_PokeTMIR_T_OBCMTemp4_PokeTMIR_T_OBCMTemp4
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_T_c, FA_out_hg);

                /* End of Outputs for SubSystem: '<S659>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S685>:111' */
        /* Call Fsft */
        VeCRDB_y_OBC_Temp4_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S659>/Fsft' */
        /* FunctionCaller: '<S686>/Function Caller' */
        /* Event: '<S685>:39' */
        Rte_Call_FsftTMIR_T_OBCMTemp4_FsftTMIR_T_OBCMTemp4();

        /* End of Outputs for SubSystem: '<S659>/Fsft' */
        /* Transition: '<S685>:113' */
        /* Transition: '<S685>:115' */
        /* Transition: '<S685>:114' */
    }

    /* End of Chart: '<S682>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_AC_LnHi_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_AC_LnHi_ErrSts'
     */
    /* Transition: '<S685>:107' */
    rtb_TmpSignalConversionAtVe_ccr = Rte_Read_VeCRDB_b_AC_LnHi_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_k);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_AC_LnHi_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S716>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_AC_LnHi_SigSts_Value(&tmpRead_2q);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S714>/Chart' */
    if ((((uint32)tmpRead_2q) & 3U) != 0U)
    {
        /* Transition: '<S716>:100' */
        /* Transition: '<S716>:103' */
        /* Transition: '<S716>:111' */
        /* Call Fsft */
        VeCRDB_y_AC_LnHi_CallStatus = 2U;

        /* Event: '<S716>:39' */
        /* Transition: '<S716>:113' */
        /* Transition: '<S716>:115' */
        /* Transition: '<S716>:114' */
    }
    else
    {
        /* Transition: '<S716>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2q) & 4U) != 0U)
        {
            /* Transition: '<S716>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S716>:88' */
                /* Transition: '<S716>:111' */
                /* Call Fsft */
                VeCRDB_y_AC_LnHi_CallStatus = 2U;

                /* Event: '<S716>:39' */
                /* Transition: '<S716>:113' */
                /* Transition: '<S716>:115' */
                /* Transition: '<S716>:114' */
            }
            else
            {
                /* Transition: '<S716>:110' */
                /* Call Tmot */
                VeCRDB_y_AC_LnHi_CallStatus = 3U;

                /* Event: '<S716>:40' */
                /* Transition: '<S716>:115' */
                /* Transition: '<S716>:114' */
            }
        }
        else
        {
            /* Transition: '<S716>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_ccr) == 133)
            {
                /* Transition: '<S716>:95' */
                /* Transition: '<S716>:116' */
                /* Call Nothing */
                VeCRDB_y_AC_LnHi_CallStatus = 4U;

                /* Transition: '<S716>:114' */
            }
            else
            {
                /* Transition: '<S716>:120' */
                /* Transition: '<S716>:117' */
                /* Call Poke */
                VeCRDB_y_AC_LnHi_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S688>/Poke' */
                /* FunctionCaller: '<S717>/Function Caller' */
                /* Event: '<S716>:38' */
                Rte_Call_PokeIDCR_b_AC_LnHi_PokeIDCR_b_AC_LnHi
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_k);

                /* End of Outputs for SubSystem: '<S688>/Poke' */
            }
        }
    }

    /* End of Chart: '<S714>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_AC_LnLow_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_AC_LnLow_ErrSts'
     */
    /* Transition: '<S716>:107' */
    rtb_TmpSignalConversionAtVe_pex = Rte_Read_VeCRDB_b_AC_LnLow_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_a);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_AC_LnLow_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S720>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_AC_LnLow_SigSts_Value(&tmpRead_2r);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S718>/Chart' */
    if ((((uint32)tmpRead_2r) & 3U) != 0U)
    {
        /* Transition: '<S720>:100' */
        /* Transition: '<S720>:103' */
        /* Transition: '<S720>:111' */
        /* Call Fsft */
        VeCRDB_y_AC_LnLow_CallStatus = 2U;

        /* Event: '<S720>:39' */
        /* Transition: '<S720>:113' */
        /* Transition: '<S720>:115' */
        /* Transition: '<S720>:114' */
    }
    else
    {
        /* Transition: '<S720>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2r) & 4U) != 0U)
        {
            /* Transition: '<S720>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S720>:88' */
                /* Transition: '<S720>:111' */
                /* Call Fsft */
                VeCRDB_y_AC_LnLow_CallStatus = 2U;

                /* Event: '<S720>:39' */
                /* Transition: '<S720>:113' */
                /* Transition: '<S720>:115' */
                /* Transition: '<S720>:114' */
            }
            else
            {
                /* Transition: '<S720>:110' */
                /* Call Tmot */
                VeCRDB_y_AC_LnLow_CallStatus = 3U;

                /* Event: '<S720>:40' */
                /* Transition: '<S720>:115' */
                /* Transition: '<S720>:114' */
            }
        }
        else
        {
            /* Transition: '<S720>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_pex) == 133)
            {
                /* Transition: '<S720>:95' */
                /* Transition: '<S720>:116' */
                /* Call Nothing */
                VeCRDB_y_AC_LnLow_CallStatus = 4U;

                /* Transition: '<S720>:114' */
            }
            else
            {
                /* Transition: '<S720>:120' */
                /* Transition: '<S720>:117' */
                /* Call Poke */
                VeCRDB_y_AC_LnLow_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S689>/Poke' */
                /* FunctionCaller: '<S721>/Function Caller' */
                /* Event: '<S720>:38' */
                Rte_Call_PokeIDCR_b_AC_LnLow_PokeIDCR_b_AC_LnLow
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_a);

                /* End of Outputs for SubSystem: '<S689>/Poke' */
            }
        }
    }

    /* End of Chart: '<S718>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_AC_Present_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_AC_Present_ErrSts'
     */
    /* Transition: '<S720>:107' */
    rtb_TmpSignalConversionAtVe_ol2 = Rte_Read_VeCRDB_b_AC_Present_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_o);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_AC_Present_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S724>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_AC_Present_SigSts_Value(&tmpRead_2s);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S722>/Chart' */
    if ((((uint32)tmpRead_2s) & 3U) != 0U)
    {
        /* Transition: '<S724>:100' */
        /* Transition: '<S724>:103' */
        /* Transition: '<S724>:111' */
        /* Call Fsft */
        VeCRDB_y_AC_Present_CallStatus = 2U;

        /* Event: '<S724>:39' */
        /* Transition: '<S724>:113' */
        /* Transition: '<S724>:115' */
        /* Transition: '<S724>:114' */
    }
    else
    {
        /* Transition: '<S724>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2s) & 4U) != 0U)
        {
            /* Transition: '<S724>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S724>:88' */
                /* Transition: '<S724>:111' */
                /* Call Fsft */
                VeCRDB_y_AC_Present_CallStatus = 2U;

                /* Event: '<S724>:39' */
                /* Transition: '<S724>:113' */
                /* Transition: '<S724>:115' */
                /* Transition: '<S724>:114' */
            }
            else
            {
                /* Transition: '<S724>:110' */
                /* Call Tmot */
                VeCRDB_y_AC_Present_CallStatus = 3U;

                /* Event: '<S724>:40' */
                /* Transition: '<S724>:115' */
                /* Transition: '<S724>:114' */
            }
        }
        else
        {
            /* Transition: '<S724>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_ol2) == 133)
            {
                /* Transition: '<S724>:95' */
                /* Transition: '<S724>:116' */
                /* Call Nothing */
                VeCRDB_y_AC_Present_CallStatus = 4U;

                /* Transition: '<S724>:114' */
            }
            else
            {
                /* Transition: '<S724>:120' */
                /* Transition: '<S724>:117' */
                /* Call Poke */
                VeCRDB_y_AC_Present_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S690>/Poke' */
                /* FunctionCaller: '<S725>/Function Caller' */
                /* Event: '<S724>:38' */
                Rte_Call_PokeIDCR_b_StatusACPresent_PokeIDCR_b_StatusACPresent
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_o);

                /* End of Outputs for SubSystem: '<S690>/Poke' */
            }
        }
    }

    /* End of Chart: '<S722>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_AC_Side_Curr1_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_AC_Side_Curr1_ErrSts'
     */
    /* Transition: '<S724>:107' */
    rtb_TmpSignalConversionAtVeC_bi = Rte_Read_VeCRDB_I_AC_Side_Curr1_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_I_p);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_AC_Side_Curr1_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S729>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_AC_Side_Curr1_SigSts_Value(&tmpRead_2t);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S726>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2t) & 3U) != 0U)
    {
        /* Transition: '<S729>:100' */
        /* Transition: '<S729>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S729>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2t) & 4U) != 0U)
        {
            /* Transition: '<S729>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S729>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S729>:110' */
                /* Call Tmot */
                VeCRDB_y_AC_Side_Curr1_CallStatus = 3U;

                /* Event: '<S729>:40' */
                /* Transition: '<S729>:115' */
                /* Transition: '<S729>:114' */
            }
        }
        else
        {
            /* Transition: '<S729>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_bi) == 133)
            {
                /* Transition: '<S729>:95' */
                /* Transition: '<S729>:116' */
                /* Call Nothing */
                VeCRDB_y_AC_Side_Curr1_CallStatus = 4U;

                /* Transition: '<S729>:114' */
            }
            else
            {
                /* Transition: '<S729>:120' */
                if ((((uint32)tmpRead_2t) & 8U) != 0U)
                {
                    /* Transition: '<S729>:122' */
                    /* Transition: '<S729>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S729>:126' */
                }
                else
                {
                    /* Transition: '<S729>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S729>:117' */
                /* Call Poke */
                VeCRDB_y_AC_Side_Curr1_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S691>/Poke' */
                /* FunctionCaller: '<S731>/Function Caller' */
                /* Event: '<S729>:38' */
                Rte_Call_PokeIDCR_I_AC_Side_Curr_PokeIDCR_I_AC_Side_Curr
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_I_p, FA_out_hg);

                /* End of Outputs for SubSystem: '<S691>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S729>:111' */
        /* Call Fsft */
        VeCRDB_y_AC_Side_Curr1_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S691>/Fsft' */
        /* FunctionCaller: '<S730>/Function Caller' */
        /* Event: '<S729>:39' */
        Rte_Call_FsftIDCR_I_AC_Side_Curr_FsftIDCR_I_AC_Side_Curr();

        /* End of Outputs for SubSystem: '<S691>/Fsft' */
        /* Transition: '<S729>:113' */
        /* Transition: '<S729>:115' */
        /* Transition: '<S729>:114' */
    }

    /* End of Chart: '<S726>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_AC_Side_Curr2_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_AC_Side_Curr2_ErrSts'
     */
    /* Transition: '<S729>:107' */
    rtb_TmpSignalConversionAtVe_cod = Rte_Read_VeCRDB_I_AC_Side_Curr2_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_I_d);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_AC_Side_Curr2_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S735>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_AC_Side_Curr2_SigSts_Value(&tmpRead_2u);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S732>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2u) & 3U) != 0U)
    {
        /* Transition: '<S735>:100' */
        /* Transition: '<S735>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S735>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2u) & 4U) != 0U)
        {
            /* Transition: '<S735>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S735>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S735>:110' */
                /* Call Tmot */
                VeCRDB_y_AC_Side_Curr2_CallStatus = 3U;

                /* Event: '<S735>:40' */
                /* Transition: '<S735>:115' */
                /* Transition: '<S735>:114' */
            }
        }
        else
        {
            /* Transition: '<S735>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_cod) == 133)
            {
                /* Transition: '<S735>:95' */
                /* Transition: '<S735>:116' */
                /* Call Nothing */
                VeCRDB_y_AC_Side_Curr2_CallStatus = 4U;

                /* Transition: '<S735>:114' */
            }
            else
            {
                /* Transition: '<S735>:120' */
                if ((((uint32)tmpRead_2u) & 8U) != 0U)
                {
                    /* Transition: '<S735>:122' */
                    /* Transition: '<S735>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S735>:126' */
                }
                else
                {
                    /* Transition: '<S735>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S735>:117' */
                /* Call Poke */
                VeCRDB_y_AC_Side_Curr2_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S692>/Poke' */
                /* FunctionCaller: '<S737>/Function Caller' */
                /* Event: '<S735>:38' */
                Rte_Call_PokeIDCR_I_ACSideCurr_L2_PokeIDCR_I_ACSideCurr_L2
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_I_d, FA_out_hg);

                /* End of Outputs for SubSystem: '<S692>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S735>:111' */
        /* Call Fsft */
        VeCRDB_y_AC_Side_Curr2_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S692>/Fsft' */
        /* FunctionCaller: '<S736>/Function Caller' */
        /* Event: '<S735>:39' */
        Rte_Call_FsftIDCR_I_ACSideCurr_L2_FsftIDCR_I_ACSideCurr_L2();

        /* End of Outputs for SubSystem: '<S692>/Fsft' */
        /* Transition: '<S735>:113' */
        /* Transition: '<S735>:115' */
        /* Transition: '<S735>:114' */
    }

    /* End of Chart: '<S732>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_AC_Side_Curr3_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_AC_Side_Curr3_ErrSts'
     */
    /* Transition: '<S735>:107' */
    rtb_TmpSignalConversionAtVe_ljc = Rte_Read_VeCRDB_I_AC_Side_Curr3_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_I_k);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_AC_Side_Curr3_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S741>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_AC_Side_Curr3_SigSts_Value(&tmpRead_2v);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S738>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2v) & 3U) != 0U)
    {
        /* Transition: '<S741>:100' */
        /* Transition: '<S741>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S741>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2v) & 4U) != 0U)
        {
            /* Transition: '<S741>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S741>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S741>:110' */
                /* Call Tmot */
                VeCRDB_y_AC_Side_Curr3_CallStatus = 3U;

                /* Event: '<S741>:40' */
                /* Transition: '<S741>:115' */
                /* Transition: '<S741>:114' */
            }
        }
        else
        {
            /* Transition: '<S741>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_ljc) == 133)
            {
                /* Transition: '<S741>:95' */
                /* Transition: '<S741>:116' */
                /* Call Nothing */
                VeCRDB_y_AC_Side_Curr3_CallStatus = 4U;

                /* Transition: '<S741>:114' */
            }
            else
            {
                /* Transition: '<S741>:120' */
                if ((((uint32)tmpRead_2v) & 8U) != 0U)
                {
                    /* Transition: '<S741>:122' */
                    /* Transition: '<S741>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S741>:126' */
                }
                else
                {
                    /* Transition: '<S741>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S741>:117' */
                /* Call Poke */
                VeCRDB_y_AC_Side_Curr3_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S693>/Poke' */
                /* FunctionCaller: '<S743>/Function Caller' */
                /* Event: '<S741>:38' */
                Rte_Call_PokeIDCR_I_ACSideCurr_L3_PokeIDCR_I_ACSideCurr_L3
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_I_k, FA_out_hg);

                /* End of Outputs for SubSystem: '<S693>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S741>:111' */
        /* Call Fsft */
        VeCRDB_y_AC_Side_Curr3_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S693>/Fsft' */
        /* FunctionCaller: '<S742>/Function Caller' */
        /* Event: '<S741>:39' */
        Rte_Call_FsftIDCR_I_ACSideCurr_L3_FsftIDCR_I_ACSideCurr_L3();

        /* End of Outputs for SubSystem: '<S693>/Fsft' */
        /* Transition: '<S741>:113' */
        /* Transition: '<S741>:115' */
        /* Transition: '<S741>:114' */
    }

    /* End of Chart: '<S738>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_AC_Side_Volt1_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_AC_Side_Volt1_ErrSts'
     */
    /* Transition: '<S741>:107' */
    rtb_TmpSignalConversionAtVeC_ax = Rte_Read_VeCRDB_U_AC_Side_Volt1_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__ko);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_AC_Side_Volt1_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S747>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_AC_Side_Volt1_SigSts_Value(&tmpRead_2w);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S744>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2w) & 3U) != 0U)
    {
        /* Transition: '<S747>:100' */
        /* Transition: '<S747>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S747>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2w) & 4U) != 0U)
        {
            /* Transition: '<S747>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S747>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S747>:110' */
                /* Call Tmot */
                VeCRDB_y_AC_Side_Volt1_CallStatus = 3U;

                /* Event: '<S747>:40' */
                /* Transition: '<S747>:115' */
                /* Transition: '<S747>:114' */
            }
        }
        else
        {
            /* Transition: '<S747>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ax) == 133)
            {
                /* Transition: '<S747>:95' */
                /* Transition: '<S747>:116' */
                /* Call Nothing */
                VeCRDB_y_AC_Side_Volt1_CallStatus = 4U;

                /* Transition: '<S747>:114' */
            }
            else
            {
                /* Transition: '<S747>:120' */
                if ((((uint32)tmpRead_2w) & 8U) != 0U)
                {
                    /* Transition: '<S747>:122' */
                    /* Transition: '<S747>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S747>:126' */
                }
                else
                {
                    /* Transition: '<S747>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S747>:117' */
                /* Call Poke */
                VeCRDB_y_AC_Side_Volt1_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S694>/Poke' */
                /* FunctionCaller: '<S749>/Function Caller' */
                /* Event: '<S747>:38' */
                Rte_Call_PokeIDCR_U_AC_InputVltOBCM_PokeIDCR_U_AC_InputVltOBCM
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__ko, FA_out_hg);

                /* End of Outputs for SubSystem: '<S694>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S747>:111' */
        /* Call Fsft */
        VeCRDB_y_AC_Side_Volt1_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S694>/Fsft' */
        /* FunctionCaller: '<S748>/Function Caller' */
        /* Event: '<S747>:39' */
        Rte_Call_FsftIDCR_U_AC_InputVltOBCM_FsftIDCR_U_AC_InputVltOBCM();

        /* End of Outputs for SubSystem: '<S694>/Fsft' */
        /* Transition: '<S747>:113' */
        /* Transition: '<S747>:115' */
        /* Transition: '<S747>:114' */
    }

    /* End of Chart: '<S744>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_AC_Side_Volt2_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_AC_Side_Volt2_ErrSts'
     */
    /* Transition: '<S747>:107' */
    rtb_TmpSignalConversionAtVeC_ck = Rte_Read_VeCRDB_U_AC_Side_Volt2_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__fd);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_AC_Side_Volt2_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S753>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_AC_Side_Volt2_SigSts_Value(&tmpRead_2x);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S750>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2x) & 3U) != 0U)
    {
        /* Transition: '<S753>:100' */
        /* Transition: '<S753>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S753>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2x) & 4U) != 0U)
        {
            /* Transition: '<S753>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S753>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S753>:110' */
                /* Call Tmot */
                VeCRDB_y_AC_Side_Volt2_CallStatus = 3U;

                /* Event: '<S753>:40' */
                /* Transition: '<S753>:115' */
                /* Transition: '<S753>:114' */
            }
        }
        else
        {
            /* Transition: '<S753>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ck) == 133)
            {
                /* Transition: '<S753>:95' */
                /* Transition: '<S753>:116' */
                /* Call Nothing */
                VeCRDB_y_AC_Side_Volt2_CallStatus = 4U;

                /* Transition: '<S753>:114' */
            }
            else
            {
                /* Transition: '<S753>:120' */
                if ((((uint32)tmpRead_2x) & 8U) != 0U)
                {
                    /* Transition: '<S753>:122' */
                    /* Transition: '<S753>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S753>:126' */
                }
                else
                {
                    /* Transition: '<S753>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S753>:117' */
                /* Call Poke */
                VeCRDB_y_AC_Side_Volt2_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S695>/Poke' */
                /* FunctionCaller: '<S755>/Function Caller' */
                /* Event: '<S753>:38' */
                Rte_Call_PokeIDCR_U_ACSideVolt_L2_PokeIDCR_U_ACSideVolt_L2
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__fd, FA_out_hg);

                /* End of Outputs for SubSystem: '<S695>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S753>:111' */
        /* Call Fsft */
        VeCRDB_y_AC_Side_Volt2_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S695>/Fsft' */
        /* FunctionCaller: '<S754>/Function Caller' */
        /* Event: '<S753>:39' */
        Rte_Call_FsftIDCR_U_ACSideVolt_L2_FsftIDCR_U_ACSideVolt_L2();

        /* End of Outputs for SubSystem: '<S695>/Fsft' */
        /* Transition: '<S753>:113' */
        /* Transition: '<S753>:115' */
        /* Transition: '<S753>:114' */
    }

    /* End of Chart: '<S750>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_AC_Side_Volt3_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_AC_Side_Volt3_ErrSts'
     */
    /* Transition: '<S753>:107' */
    rtb_TmpSignalConversionAtVeC_k4 = Rte_Read_VeCRDB_U_AC_Side_Volt3_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_U_h);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_AC_Side_Volt3_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S759>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_AC_Side_Volt3_SigSts_Value(&tmpRead_2y);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S756>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2y) & 3U) != 0U)
    {
        /* Transition: '<S759>:100' */
        /* Transition: '<S759>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S759>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2y) & 4U) != 0U)
        {
            /* Transition: '<S759>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S759>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S759>:110' */
                /* Call Tmot */
                VeCRDB_y_AC_Side_Volt3_CallStatus = 3U;

                /* Event: '<S759>:40' */
                /* Transition: '<S759>:115' */
                /* Transition: '<S759>:114' */
            }
        }
        else
        {
            /* Transition: '<S759>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_k4) == 133)
            {
                /* Transition: '<S759>:95' */
                /* Transition: '<S759>:116' */
                /* Call Nothing */
                VeCRDB_y_AC_Side_Volt3_CallStatus = 4U;

                /* Transition: '<S759>:114' */
            }
            else
            {
                /* Transition: '<S759>:120' */
                if ((((uint32)tmpRead_2y) & 8U) != 0U)
                {
                    /* Transition: '<S759>:122' */
                    /* Transition: '<S759>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S759>:126' */
                }
                else
                {
                    /* Transition: '<S759>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S759>:117' */
                /* Call Poke */
                VeCRDB_y_AC_Side_Volt3_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S696>/Poke' */
                /* FunctionCaller: '<S761>/Function Caller' */
                /* Event: '<S759>:38' */
                Rte_Call_PokeIDCR_U_ACSideVolt_L3_PokeIDCR_U_ACSideVolt_L3
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_U_h, FA_out_hg);

                /* End of Outputs for SubSystem: '<S696>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S759>:111' */
        /* Call Fsft */
        VeCRDB_y_AC_Side_Volt3_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S696>/Fsft' */
        /* FunctionCaller: '<S760>/Function Caller' */
        /* Event: '<S759>:39' */
        Rte_Call_FsftIDCR_U_ACSideVolt_L3_FsftIDCR_U_ACSideVolt_L3();

        /* End of Outputs for SubSystem: '<S696>/Fsft' */
        /* Transition: '<S759>:113' */
        /* Transition: '<S759>:115' */
        /* Transition: '<S759>:114' */
    }

    /* End of Chart: '<S756>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BatterySideCurrent_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BatterySideCurrent_ErrSts'
     */
    /* Transition: '<S759>:107' */
    rtb_TmpSignalConversionAtVeC_cw = Rte_Read_VeCRDB_I_BatterySideCurrent_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__cu);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BatterySideCurrent_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S765>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BatterySideCurrent_SigSts_Value(&tmpRead_2z);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S762>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2z) & 3U) != 0U)
    {
        /* Transition: '<S765>:100' */
        /* Transition: '<S765>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S765>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2z) & 4U) != 0U)
        {
            /* Transition: '<S765>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S765>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S765>:110' */
                /* Call Tmot */
                VeCRDB_y_BatterySideCurrent_CallStatus = 3U;

                /* Event: '<S765>:40' */
                /* Transition: '<S765>:115' */
                /* Transition: '<S765>:114' */
            }
        }
        else
        {
            /* Transition: '<S765>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_cw) == 133)
            {
                /* Transition: '<S765>:95' */
                /* Transition: '<S765>:116' */
                /* Call Nothing */
                VeCRDB_y_BatterySideCurrent_CallStatus = 4U;

                /* Transition: '<S765>:114' */
            }
            else
            {
                /* Transition: '<S765>:120' */
                if ((((uint32)tmpRead_2z) & 8U) != 0U)
                {
                    /* Transition: '<S765>:122' */
                    /* Transition: '<S765>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S765>:126' */
                }
                else
                {
                    /* Transition: '<S765>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S765>:117' */
                /* Call Poke */
                VeCRDB_y_BatterySideCurrent_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S697>/Poke' */
                /* FunctionCaller: '<S767>/Function Caller' */
                /* Event: '<S765>:38' */
                Rte_Call_PokeIDCR_I_BattSide_Curr_PokeIDCR_I_BattSide_Curr
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__cu, FA_out_hg);

                /* End of Outputs for SubSystem: '<S697>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S765>:111' */
        /* Call Fsft */
        VeCRDB_y_BatterySideCurrent_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S697>/Fsft' */
        /* FunctionCaller: '<S766>/Function Caller' */
        /* Event: '<S765>:39' */
        Rte_Call_FsftIDCR_I_BattSide_Curr_FsftIDCR_I_BattSide_Curr();

        /* End of Outputs for SubSystem: '<S697>/Fsft' */
        /* Transition: '<S765>:113' */
        /* Transition: '<S765>:115' */
        /* Transition: '<S765>:114' */
    }

    /* End of Chart: '<S762>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_BatterySideVoltage_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_BatterySideVoltage_ErrSts'
     */
    /* Transition: '<S765>:107' */
    rtb_TmpSignalConversionAtVeC_p3 = Rte_Read_VeCRDB_U_BatterySideVoltage_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_U_o);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_BatterySideVoltage_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S771>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_BatterySideVoltage_SigSts_Value(&tmpRead_30);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S768>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_30) & 3U) != 0U)
    {
        /* Transition: '<S771>:100' */
        /* Transition: '<S771>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S771>:104' */
        /*  MM */
        if ((((uint32)tmpRead_30) & 4U) != 0U)
        {
            /* Transition: '<S771>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S771>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S771>:110' */
                /* Call Tmot */
                VeCRDB_y_BatterySideVoltage_CallStatus = 3U;

                /* Event: '<S771>:40' */
                /* Transition: '<S771>:115' */
                /* Transition: '<S771>:114' */
            }
        }
        else
        {
            /* Transition: '<S771>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_p3) == 133)
            {
                /* Transition: '<S771>:95' */
                /* Transition: '<S771>:116' */
                /* Call Nothing */
                VeCRDB_y_BatterySideVoltage_CallStatus = 4U;

                /* Transition: '<S771>:114' */
            }
            else
            {
                /* Transition: '<S771>:120' */
                if ((((uint32)tmpRead_30) & 8U) != 0U)
                {
                    /* Transition: '<S771>:122' */
                    /* Transition: '<S771>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S771>:126' */
                }
                else
                {
                    /* Transition: '<S771>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S771>:117' */
                /* Call Poke */
                VeCRDB_y_BatterySideVoltage_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S698>/Poke' */
                /* FunctionCaller: '<S773>/Function Caller' */
                /* Event: '<S771>:38' */
                Rte_Call_PokeIDCR_U_BattSideVolt_PokeIDCR_U_BattSideVolt
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_U_o, FA_out_hg);

                /* End of Outputs for SubSystem: '<S698>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S771>:111' */
        /* Call Fsft */
        VeCRDB_y_BatterySideVoltage_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S698>/Fsft' */
        /* FunctionCaller: '<S772>/Function Caller' */
        /* Event: '<S771>:39' */
        Rte_Call_FsftIDCR_U_BattSideVolt_FsftIDCR_U_BattSideVolt();

        /* End of Outputs for SubSystem: '<S698>/Fsft' */
        /* Transition: '<S771>:113' */
        /* Transition: '<S771>:115' */
        /* Transition: '<S771>:114' */
    }

    /* End of Chart: '<S768>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_ChargeCurrent_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_ChargeCurrent_ErrSts'
     */
    /* Transition: '<S771>:107' */
    rtb_TmpSignalConversionAtVe_kxc = Rte_Read_VeCRDB_I_ChargeCurrent_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_I_C);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_ChargeCurrent_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S777>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_ChargeCurrent_SigSts_Value(&tmpRead_31);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S774>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_31) & 3U) != 0U)
    {
        /* Transition: '<S777>:100' */
        /* Transition: '<S777>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S777>:104' */
        /*  MM */
        if ((((uint32)tmpRead_31) & 4U) != 0U)
        {
            /* Transition: '<S777>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S777>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S777>:110' */
                /* Call Tmot */
                VeCRDB_y_ChargeCurrent_CallStatus = 3U;

                /* Event: '<S777>:40' */
                /* Transition: '<S777>:115' */
                /* Transition: '<S777>:114' */
            }
        }
        else
        {
            /* Transition: '<S777>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_kxc) == 133)
            {
                /* Transition: '<S777>:95' */
                /* Transition: '<S777>:116' */
                /* Call Nothing */
                VeCRDB_y_ChargeCurrent_CallStatus = 4U;

                /* Transition: '<S777>:114' */
            }
            else
            {
                /* Transition: '<S777>:120' */
                if ((((uint32)tmpRead_31) & 8U) != 0U)
                {
                    /* Transition: '<S777>:122' */
                    /* Transition: '<S777>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S777>:126' */
                }
                else
                {
                    /* Transition: '<S777>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S777>:117' */
                /* Call Poke */
                VeCRDB_y_ChargeCurrent_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S699>/Poke' */
                /* FunctionCaller: '<S779>/Function Caller' */
                /* Event: '<S777>:38' */
                Rte_Call_PokeIDCR_I_ChrgCurrent_PokeIDCR_I_ChrgCurrent
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_I_C, FA_out_hg);

                /* End of Outputs for SubSystem: '<S699>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S777>:111' */
        /* Call Fsft */
        VeCRDB_y_ChargeCurrent_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S699>/Fsft' */
        /* FunctionCaller: '<S778>/Function Caller' */
        /* Event: '<S777>:39' */
        Rte_Call_FsftIDCR_I_ChrgCurrent_FsftIDCR_I_ChrgCurrent();

        /* End of Outputs for SubSystem: '<S699>/Fsft' */
        /* Transition: '<S777>:113' */
        /* Transition: '<S777>:115' */
        /* Transition: '<S777>:114' */
    }

    /* End of Chart: '<S774>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_ChrgCurrAvail_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_ChrgCurrAvail_ErrSts'
     */
    /* Transition: '<S777>:107' */
    rtb_TmpSignalConversionAtVe_gkt = Rte_Read_VeCRDB_I_ChrgCurrAvail_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_I_m);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_ChrgCurrAvail_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S783>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_ChrgCurrAvail_SigSts_Value(&tmpRead_32);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S780>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_32) & 3U) != 0U)
    {
        /* Transition: '<S783>:100' */
        /* Transition: '<S783>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S783>:104' */
        /*  MM */
        if ((((uint32)tmpRead_32) & 4U) != 0U)
        {
            /* Transition: '<S783>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S783>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S783>:110' */
                /* Call Tmot */
                VeCRDB_y_ChrgCurrAvail_CallStatus = 3U;

                /* Event: '<S783>:40' */
                /* Transition: '<S783>:115' */
                /* Transition: '<S783>:114' */
            }
        }
        else
        {
            /* Transition: '<S783>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_gkt) == 133)
            {
                /* Transition: '<S783>:95' */
                /* Transition: '<S783>:116' */
                /* Call Nothing */
                VeCRDB_y_ChrgCurrAvail_CallStatus = 4U;

                /* Transition: '<S783>:114' */
            }
            else
            {
                /* Transition: '<S783>:120' */
                if ((((uint32)tmpRead_32) & 8U) != 0U)
                {
                    /* Transition: '<S783>:122' */
                    /* Transition: '<S783>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S783>:126' */
                }
                else
                {
                    /* Transition: '<S783>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S783>:117' */
                /* Call Poke */
                VeCRDB_y_ChrgCurrAvail_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S700>/Poke' */
                /* FunctionCaller: '<S785>/Function Caller' */
                /* Event: '<S783>:38' */
                Rte_Call_PokeIDCR_I_ChrgCrntAvail_PokeIDCR_I_ChrgCrntAvail
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_I_m, FA_out_hg);

                /* End of Outputs for SubSystem: '<S700>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S783>:111' */
        /* Call Fsft */
        VeCRDB_y_ChrgCurrAvail_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S700>/Fsft' */
        /* FunctionCaller: '<S784>/Function Caller' */
        /* Event: '<S783>:39' */
        Rte_Call_FsftIDCR_I_ChrgCrntAvail_FsftIDCR_I_ChrgCrntAvail();

        /* End of Outputs for SubSystem: '<S700>/Fsft' */
        /* Transition: '<S783>:113' */
        /* Transition: '<S783>:115' */
        /* Transition: '<S783>:114' */
    }

    /* End of Chart: '<S780>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_ControlPilotSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_ControlPilotSts_ErrSts'
     */
    /* Transition: '<S783>:107' */
    rtb_TmpSignalConversionAtVe_pjh = Rte_Read_VeCRDB_y_ControlPilotSts_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_C);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_ControlPilotSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S789>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_ControlPilotSts_SigSts_Value(&tmpRead_33);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S786>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_33) & 3U) != 0U)
    {
        /* Transition: '<S789>:100' */
        /* Transition: '<S789>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S789>:104' */
        /*  MM */
        if ((((uint32)tmpRead_33) & 4U) != 0U)
        {
            /* Transition: '<S789>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S789>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S789>:110' */
                /* Call Tmot */
                VeCRDB_y_ControlPilotSts_CallStatus = 3U;

                /* Event: '<S789>:40' */
                /* Transition: '<S789>:115' */
                /* Transition: '<S789>:114' */
            }
        }
        else
        {
            /* Transition: '<S789>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_pjh) == 133)
            {
                /* Transition: '<S789>:95' */
                /* Transition: '<S789>:116' */
                /* Call Nothing */
                VeCRDB_y_ControlPilotSts_CallStatus = 4U;

                /* Transition: '<S789>:114' */
            }
            else
            {
                /* Transition: '<S789>:120' */
                /* Transition: '<S789>:117' */
                /* Call Poke */
                VeCRDB_y_ControlPilotSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S701>/Poke' */
                /* FunctionCaller: '<S791>/Function Caller' incorporates:
                 *  Constant: '<S791>/Constant'
                 *  DataTypeConversion: '<S791>/Data Type Conversion'
                 */
                /* Event: '<S789>:38' */
                Rte_Call_PokeIDCR_e_EVSE_PilotStat_OBCM_PokeIDCR_e_EVSE_PilotStat_OBCM
                    ((sint16)CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_C,
                     false);

                /* End of Outputs for SubSystem: '<S701>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S789>:111' */
        /* Call Fsft */
        VeCRDB_y_ControlPilotSts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S701>/Fsft' */
        /* FunctionCaller: '<S790>/Function Caller' */
        /* Event: '<S789>:39' */
        Rte_Call_FsftIDCR_e_EVSE_PilotStat_OBCM_FsftIDCR_e_EVSE_PilotStat_OBCM();

        /* End of Outputs for SubSystem: '<S701>/Fsft' */
        /* Transition: '<S789>:113' */
        /* Transition: '<S789>:115' */
        /* Transition: '<S789>:114' */
    }

    /* End of Chart: '<S786>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_EVCCFailrReason_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_EVCCFailrReason_ErrSts'
     */
    /* Transition: '<S789>:107' */
    rtb_TmpSignalConversionAtVe_jpg = Rte_Read_VeCRDB_y_EVCCFailrReason_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_E);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_EVCCFailrReason_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S795>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_EVCCFailrReason_SigSts_Value(&tmpRead_34);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S792>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_34) & 3U) != 0U)
    {
        /* Transition: '<S795>:100' */
        /* Transition: '<S795>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S795>:104' */
        /*  MM */
        if ((((uint32)tmpRead_34) & 4U) != 0U)
        {
            /* Transition: '<S795>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S795>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S795>:110' */
                /* Call Tmot */
                VeCRDB_y_EVCCFailrReason_CallStatus = 3U;

                /* Event: '<S795>:40' */
                /* Transition: '<S795>:115' */
                /* Transition: '<S795>:114' */
            }
        }
        else
        {
            /* Transition: '<S795>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_jpg) == 133)
            {
                /* Transition: '<S795>:95' */
                /* Transition: '<S795>:116' */
                /* Call Nothing */
                VeCRDB_y_EVCCFailrReason_CallStatus = 4U;

                /* Transition: '<S795>:114' */
            }
            else
            {
                /* Transition: '<S795>:120' */
                if ((((uint32)tmpRead_34) & 8U) != 0U)
                {
                    /* Transition: '<S795>:122' */
                    /* Transition: '<S795>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S795>:126' */
                }
                else
                {
                    /* Transition: '<S795>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S795>:117' */
                /* Call Poke */
                VeCRDB_y_EVCCFailrReason_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S702>/Poke' */
                /* FunctionCaller: '<S797>/Function Caller' */
                /* Event: '<S795>:38' */
                Rte_Call_PokeIDCR_e_EVCC_FailureRsn_PokeIDCR_e_EVCC_FailureRsn
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_E, FA_out_hg);

                /* End of Outputs for SubSystem: '<S702>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S795>:111' */
        /* Call Fsft */
        VeCRDB_y_EVCCFailrReason_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S702>/Fsft' */
        /* FunctionCaller: '<S796>/Function Caller' */
        /* Event: '<S795>:39' */
        Rte_Call_FsftIDCR_e_EVCC_FailureRsn_FsftIDCR_e_EVCC_FailureRsn();

        /* End of Outputs for SubSystem: '<S702>/Fsft' */
        /* Transition: '<S795>:113' */
        /* Transition: '<S795>:115' */
        /* Transition: '<S795>:114' */
    }

    /* End of Chart: '<S792>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_InputCurrentAvail_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_InputCurrentAvail_ErrSts'
     */
    /* Transition: '<S795>:107' */
    rtb_TmpSignalConversionAtVeC_mx = Rte_Read_VeCRDB_I_InputCurrentAvail_Value(
        &CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_I_I);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_InputCurrentAvail_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S801>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_InputCurrentAvail_SigSts_Value(&tmpRead_35);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S798>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_35) & 3U) != 0U)
    {
        /* Transition: '<S801>:100' */
        /* Transition: '<S801>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S801>:104' */
        /*  MM */
        if ((((uint32)tmpRead_35) & 4U) != 0U)
        {
            /* Transition: '<S801>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S801>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S801>:110' */
                /* Call Tmot */
                VeCRDB_y_InputCurrentAvail_CallStatus = 3U;

                /* Event: '<S801>:40' */
                /* Transition: '<S801>:115' */
                /* Transition: '<S801>:114' */
            }
        }
        else
        {
            /* Transition: '<S801>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_mx) == 133)
            {
                /* Transition: '<S801>:95' */
                /* Transition: '<S801>:116' */
                /* Call Nothing */
                VeCRDB_y_InputCurrentAvail_CallStatus = 4U;

                /* Transition: '<S801>:114' */
            }
            else
            {
                /* Transition: '<S801>:120' */
                if ((((uint32)tmpRead_35) & 8U) != 0U)
                {
                    /* Transition: '<S801>:122' */
                    /* Transition: '<S801>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S801>:126' */
                }
                else
                {
                    /* Transition: '<S801>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S801>:117' */
                /* Call Poke */
                VeCRDB_y_InputCurrentAvail_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S703>/Poke' */
                /* FunctionCaller: '<S803>/Function Caller' */
                /* Event: '<S801>:38' */
                Rte_Call_PokeIDCR_I_J1772InputCrntAval_PokeIDCR_I_J1772InputCrntAval
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_I_I, FA_out_hg);

                /* End of Outputs for SubSystem: '<S703>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S801>:111' */
        /* Call Fsft */
        VeCRDB_y_InputCurrentAvail_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S703>/Fsft' */
        /* FunctionCaller: '<S802>/Function Caller' */
        /* Event: '<S801>:39' */
        Rte_Call_FsftIDCR_I_J1772InputCrntAval_FsftIDCR_I_J1772InputCrntAval();

        /* End of Outputs for SubSystem: '<S703>/Fsft' */
        /* Transition: '<S801>:113' */
        /* Transition: '<S801>:115' */
        /* Transition: '<S801>:114' */
    }

    /* End of Chart: '<S798>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_J1772_S2_Sts_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_J1772_S2_Sts_ErrSts'
     */
    /* Transition: '<S801>:107' */
    rtb_TmpSignalConversionAtVeC_j5 = Rte_Read_VeCRDB_b_J1772_S2_Sts_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_J);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_J1772_S2_Sts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S807>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_J1772_S2_Sts_SigSts_Value(&tmpRead_36);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S804>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_36) & 3U) != 0U)
    {
        /* Transition: '<S807>:100' */
        /* Transition: '<S807>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S807>:104' */
        /*  MM */
        if ((((uint32)tmpRead_36) & 4U) != 0U)
        {
            /* Transition: '<S807>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S807>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S807>:110' */
                /* Call Tmot */
                VeCRDB_y_J1772_S2_Sts_CallStatus = 3U;

                /* Event: '<S807>:40' */
                /* Transition: '<S807>:115' */
                /* Transition: '<S807>:114' */
            }
        }
        else
        {
            /* Transition: '<S807>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_j5) == 133)
            {
                /* Transition: '<S807>:95' */
                /* Transition: '<S807>:116' */
                /* Call Nothing */
                VeCRDB_y_J1772_S2_Sts_CallStatus = 4U;

                /* Transition: '<S807>:114' */
            }
            else
            {
                /* Transition: '<S807>:120' */
                /* Transition: '<S807>:117' */
                /* Call Poke */
                VeCRDB_y_J1772_S2_Sts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S704>/Poke' */
                /* FunctionCaller: '<S809>/Function Caller' incorporates:
                 *  Constant: '<S809>/Constant'
                 */
                /* Event: '<S807>:38' */
                Rte_Call_PokeIDCR_b_J1772_S2_Status_PokeIDCR_b_J1772_S2_Status
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_J, false);

                /* End of Outputs for SubSystem: '<S704>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S807>:111' */
        /* Call Fsft */
        VeCRDB_y_J1772_S2_Sts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S704>/Fsft' */
        /* FunctionCaller: '<S808>/Function Caller' */
        /* Event: '<S807>:39' */
        Rte_Call_FsftIDCR_b_J1772_S2_StatusFA_FsftIDCR_b_J1772_S2_StatusFA();

        /* End of Outputs for SubSystem: '<S704>/Fsft' */
        /* Transition: '<S807>:113' */
        /* Transition: '<S807>:115' */
        /* Transition: '<S807>:114' */
    }

    /* End of Chart: '<S804>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_J1772_State_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_J1772_State_ErrSts'
     */
    /* Transition: '<S807>:107' */
    rtb_TmpSignalConversionAtVeC_dv = Rte_Read_VeCRDB_y_J1772_State_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_J);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_J1772_State_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S813>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_J1772_State_SigSts_Value(&tmpRead_37);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S810>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_37) & 3U) != 0U)
    {
        /* Transition: '<S813>:100' */
        /* Transition: '<S813>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S813>:104' */
        /*  MM */
        if ((((uint32)tmpRead_37) & 4U) != 0U)
        {
            /* Transition: '<S813>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S813>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S813>:110' */
                /* Call Tmot */
                VeCRDB_y_J1772_State_CallStatus = 3U;

                /* Event: '<S813>:40' */
                /* Transition: '<S813>:115' */
                /* Transition: '<S813>:114' */
            }
        }
        else
        {
            /* Transition: '<S813>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_dv) == 133)
            {
                /* Transition: '<S813>:95' */
                /* Transition: '<S813>:116' */
                /* Call Nothing */
                VeCRDB_y_J1772_State_CallStatus = 4U;

                /* Transition: '<S813>:114' */
            }
            else
            {
                /* Transition: '<S813>:120' */
                if ((((uint32)tmpRead_37) & 8U) != 0U)
                {
                    /* Transition: '<S813>:122' */
                    /* Transition: '<S813>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S813>:126' */
                }
                else
                {
                    /* Transition: '<S813>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S813>:117' */
                /* Call Poke */
                VeCRDB_y_J1772_State_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S705>/Poke' */
                /* FunctionCaller: '<S815>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S815>/Data Type Conversion'
                 */
                /* Event: '<S813>:38' */
                Rte_Call_PokeIDCR_e_J1772Stat_PokeIDCR_e_J1772Stat((sint16)
                    CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_J, FA_out_hg);

                /* End of Outputs for SubSystem: '<S705>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S813>:111' */
        /* Call Fsft */
        VeCRDB_y_J1772_State_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S705>/Fsft' */
        /* FunctionCaller: '<S814>/Function Caller' */
        /* Event: '<S813>:39' */
        Rte_Call_FsftIDCR_e_J1772Stat_FsftIDCR_e_J1772Stat();

        /* End of Outputs for SubSystem: '<S705>/Fsft' */
        /* Transition: '<S813>:113' */
        /* Transition: '<S813>:115' */
        /* Transition: '<S813>:114' */
    }

    /* End of Chart: '<S810>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_OBCInterlockSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_OBCInterlockSts_ErrSts'
     */
    /* Transition: '<S813>:107' */
    rtb_TmpSignalConversionAtVeC_it = Rte_Read_VeCRDB_y_OBCInterlockSts_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_O);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_OBCInterlockSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S819>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_OBCInterlockSts_SigSts_Value(&tmpRead_38);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S816>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_38) & 3U) != 0U)
    {
        /* Transition: '<S819>:100' */
        /* Transition: '<S819>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S819>:104' */
        /*  MM */
        if ((((uint32)tmpRead_38) & 4U) != 0U)
        {
            /* Transition: '<S819>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S819>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S819>:110' */
                /* Call Tmot */
                VeCRDB_y_OBCInterlockSts_CallStatus = 3U;

                /* Event: '<S819>:40' */
                /* Transition: '<S819>:115' */
                /* Transition: '<S819>:114' */
            }
        }
        else
        {
            /* Transition: '<S819>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_it) == 133)
            {
                /* Transition: '<S819>:95' */
                /* Transition: '<S819>:116' */
                /* Call Nothing */
                VeCRDB_y_OBCInterlockSts_CallStatus = 4U;

                /* Transition: '<S819>:114' */
            }
            else
            {
                /* Transition: '<S819>:120' */
                /* Transition: '<S819>:117' */
                /* Call Poke */
                VeCRDB_y_OBCInterlockSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S706>/Poke' */
                /* FunctionCaller: '<S821>/Function Caller' incorporates:
                 *  Constant: '<S822>/Constant'
                 *  RelationalOperator: '<S822>/Compare'
                 */
                /* Event: '<S819>:38' */
                Rte_Call_PokeIDCR_e_OBCM_HVILSts_PokeIDCR_e_OBCM_HVILSts
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_O, (((sint32)
                       CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_O) == 3) ? 1
                     : 0);

                /* End of Outputs for SubSystem: '<S706>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S819>:111' */
        /* Call Fsft */
        VeCRDB_y_OBCInterlockSts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S706>/Fsft' */
        /* FunctionCaller: '<S820>/Function Caller' */
        /* Event: '<S819>:39' */
        Rte_Call_FsftIDCR_e_OBCM_HVILSts_FsftIDCR_e_OBCM_HVILSts();

        /* End of Outputs for SubSystem: '<S706>/Fsft' */
        /* Transition: '<S819>:113' */
        /* Transition: '<S819>:115' */
        /* Transition: '<S819>:114' */
    }

    /* End of Chart: '<S816>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_OBCM_SdpSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_OBCM_SdpSts_ErrSts'
     */
    /* Transition: '<S819>:107' */
    rtb_TmpSignalConversionAtVeC_pw = Rte_Read_VeCRDB_y_OBCM_SdpSts_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__jw);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_OBCM_SdpSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S826>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_OBCM_SdpSts_SigSts_Value(&tmpRead_39);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S823>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_39) & 3U) != 0U)
    {
        /* Transition: '<S826>:100' */
        /* Transition: '<S826>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S826>:104' */
        /*  MM */
        if ((((uint32)tmpRead_39) & 4U) != 0U)
        {
            /* Transition: '<S826>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S826>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S826>:110' */
                /* Call Tmot */
                VeCRDB_y_OBCM_SdpSts_CallStatus = 3U;

                /* Event: '<S826>:40' */
                /* Transition: '<S826>:115' */
                /* Transition: '<S826>:114' */
            }
        }
        else
        {
            /* Transition: '<S826>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_pw) == 133)
            {
                /* Transition: '<S826>:95' */
                /* Transition: '<S826>:116' */
                /* Call Nothing */
                VeCRDB_y_OBCM_SdpSts_CallStatus = 4U;

                /* Transition: '<S826>:114' */
            }
            else
            {
                /* Transition: '<S826>:120' */
                /* Transition: '<S826>:117' */
                /* Call Poke */
                VeCRDB_y_OBCM_SdpSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S707>/Poke' */
                /* FunctionCaller: '<S828>/Function Caller' */
                /* Event: '<S826>:38' */
                Rte_Call_PokeIDCR_e_SDP_Sts_PokeIDCR_e_SDP_Sts
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__jw);

                /* End of Outputs for SubSystem: '<S707>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S826>:111' */
        /* Call Fsft */
        VeCRDB_y_OBCM_SdpSts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S707>/Fsft' */
        /* FunctionCaller: '<S827>/Function Caller' */
        /* Event: '<S826>:39' */
        Rte_Call_FsftIDCR_b_SDP_Sts_FsftIDCR_b_SDP_Sts();

        /* End of Outputs for SubSystem: '<S707>/Fsft' */
        /* Transition: '<S826>:113' */
        /* Transition: '<S826>:115' */
        /* Transition: '<S826>:114' */
    }

    /* End of Chart: '<S823>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_OBCM_SlacSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_OBCM_SlacSts_ErrSts'
     */
    /* Transition: '<S826>:107' */
    rtb_TmpSignalConversionAtVe_jpp = Rte_Read_VeCRDB_y_OBCM_SlacSts_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_o);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_OBCM_SlacSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S832>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_OBCM_SlacSts_SigSts_Value(&tmpRead_3a);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S829>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_3a) & 3U) != 0U)
    {
        /* Transition: '<S832>:100' */
        /* Transition: '<S832>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S832>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3a) & 4U) != 0U)
        {
            /* Transition: '<S832>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S832>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S832>:110' */
                /* Call Tmot */
                VeCRDB_y_OBCM_SlacSts_CallStatus = 3U;

                /* Event: '<S832>:40' */
                /* Transition: '<S832>:115' */
                /* Transition: '<S832>:114' */
            }
        }
        else
        {
            /* Transition: '<S832>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_jpp) == 133)
            {
                /* Transition: '<S832>:95' */
                /* Transition: '<S832>:116' */
                /* Call Nothing */
                VeCRDB_y_OBCM_SlacSts_CallStatus = 4U;

                /* Transition: '<S832>:114' */
            }
            else
            {
                /* Transition: '<S832>:120' */
                /* Transition: '<S832>:117' */
                /* Call Poke */
                VeCRDB_y_OBCM_SlacSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S708>/Poke' */
                /* FunctionCaller: '<S834>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S834>/Data Type Conversion'
                 */
                /* Event: '<S832>:38' */
                Rte_Call_PokeIDCR_e_SLAC_Sts_PokeIDCR_e_SLAC_Sts((sint16)
                    CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_o);

                /* End of Outputs for SubSystem: '<S708>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S832>:111' */
        /* Call Fsft */
        VeCRDB_y_OBCM_SlacSts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S708>/Fsft' */
        /* FunctionCaller: '<S833>/Function Caller' */
        /* Event: '<S832>:39' */
        Rte_Call_FsftIDCR_b_SLAC_Sts_FsftIDCR_b_SLAC_Sts();

        /* End of Outputs for SubSystem: '<S708>/Fsft' */
        /* Transition: '<S832>:113' */
        /* Transition: '<S832>:115' */
        /* Transition: '<S832>:114' */
    }

    /* End of Chart: '<S829>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_ProximitySts_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_ProximitySts_ErrSts'
     */
    /* Transition: '<S832>:107' */
    rtb_TmpSignalConversionAtVeC_ey = Rte_Read_VeCRDB_y_ProximitySts_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_P);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_ProximitySts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S838>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_ProximitySts_SigSts_Value(&tmpRead_3b);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S835>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_3b) & 3U) != 0U)
    {
        /* Transition: '<S838>:100' */
        /* Transition: '<S838>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S838>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3b) & 4U) != 0U)
        {
            /* Transition: '<S838>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S838>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S838>:110' */
                /* Call Tmot */
                VeCRDB_y_ProximitySts_CallStatus = 3U;

                /* Event: '<S838>:40' */
                /* Transition: '<S838>:115' */
                /* Transition: '<S838>:114' */
            }
        }
        else
        {
            /* Transition: '<S838>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ey) == 133)
            {
                /* Transition: '<S838>:95' */
                /* Transition: '<S838>:116' */
                /* Call Nothing */
                VeCRDB_y_ProximitySts_CallStatus = 4U;

                /* Transition: '<S838>:114' */
            }
            else
            {
                /* Transition: '<S838>:120' */
                /* Transition: '<S838>:117' */
                /* Call Poke */
                VeCRDB_y_ProximitySts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S709>/Poke' */
                /* FunctionCaller: '<S840>/Function Caller' incorporates:
                 *  Constant: '<S840>/Constant'
                 *  DataTypeConversion: '<S840>/Data Type Conversion'
                 */
                /* Event: '<S838>:38' */
                Rte_Call_PokeIDCR_e_ProxStat_PokeIDCR_e_ProxStat((sint16)
                    CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_P, false);

                /* End of Outputs for SubSystem: '<S709>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S838>:111' */
        /* Call Fsft */
        VeCRDB_y_ProximitySts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S709>/Fsft' */
        /* FunctionCaller: '<S839>/Function Caller' */
        /* Event: '<S838>:39' */
        Rte_Call_FsftIDCR_e_ProxStat_FsftIDCR_e_ProxStat();

        /* End of Outputs for SubSystem: '<S709>/Fsft' */
        /* Transition: '<S838>:113' */
        /* Transition: '<S838>:115' */
        /* Transition: '<S838>:114' */
    }

    /* End of Chart: '<S835>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_SuprtdProtocolName_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_SuprtdProtocolName_ErrSts'
     */
    /* Transition: '<S838>:107' */
    rtb_TmpSignalConversionAtVe_gjp = Rte_Read_VeCRDB_y_SuprtdProtocolName_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_S);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_SuprtdProtocolName_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S844>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_SuprtdProtocolName_SigSts_Value(&tmpRead_3c);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S841>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_3c) & 3U) != 0U)
    {
        /* Transition: '<S844>:100' */
        /* Transition: '<S844>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S844>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3c) & 4U) != 0U)
        {
            /* Transition: '<S844>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S844>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S844>:110' */
                /* Call Tmot */
                VeCRDB_y_SuprtdProtocolName_CallStatus = 3U;

                /* Event: '<S844>:40' */
                /* Transition: '<S844>:115' */
                /* Transition: '<S844>:114' */
            }
        }
        else
        {
            /* Transition: '<S844>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_gjp) == 133)
            {
                /* Transition: '<S844>:95' */
                /* Transition: '<S844>:116' */
                /* Call Nothing */
                VeCRDB_y_SuprtdProtocolName_CallStatus = 4U;

                /* Transition: '<S844>:114' */
            }
            else
            {
                /* Transition: '<S844>:120' */
                /* Transition: '<S844>:117' */
                /* Call Poke */
                VeCRDB_y_SuprtdProtocolName_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S710>/Poke' */
                /* FunctionCaller: '<S846>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S846>/Data Type Conversion'
                 */
                /* Event: '<S844>:38' */
                Rte_Call_PokeIDCR_e_SupProtoNm_PokeIDCR_e_SupProtoNm((sint16)
                    CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_S);

                /* End of Outputs for SubSystem: '<S710>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S844>:111' */
        /* Call Fsft */
        VeCRDB_y_SuprtdProtocolName_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S710>/Fsft' */
        /* FunctionCaller: '<S845>/Function Caller' */
        /* Event: '<S844>:39' */
        Rte_Call_FsftIDCR_b_SupProtoNm_FsftIDCR_b_SupProtoNm();

        /* End of Outputs for SubSystem: '<S710>/Fsft' */
        /* Transition: '<S844>:113' */
        /* Transition: '<S844>:115' */
        /* Transition: '<S844>:114' */
    }

    /* End of Chart: '<S841>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_Supported_SchemaID_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_Supported_SchemaID_ErrSts'
     */
    /* Transition: '<S844>:107' */
    rtb_TmpSignalConversionAtVe_p3g = Rte_Read_VeCRDB_y_Supported_SchemaID_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__md);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_Supported_SchemaID_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S850>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_Supported_SchemaID_SigSts_Value(&tmpRead_3d);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S847>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_3d) & 3U) != 0U)
    {
        /* Transition: '<S850>:100' */
        /* Transition: '<S850>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S850>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3d) & 4U) != 0U)
        {
            /* Transition: '<S850>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S850>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S850>:110' */
                /* Call Tmot */
                VeCRDB_y_Supported_SchemaID_CallStatus = 3U;

                /* Event: '<S850>:40' */
                /* Transition: '<S850>:115' */
                /* Transition: '<S850>:114' */
            }
        }
        else
        {
            /* Transition: '<S850>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_p3g) == 133)
            {
                /* Transition: '<S850>:95' */
                /* Transition: '<S850>:116' */
                /* Call Nothing */
                VeCRDB_y_Supported_SchemaID_CallStatus = 4U;

                /* Transition: '<S850>:114' */
            }
            else
            {
                /* Transition: '<S850>:120' */
                /* Transition: '<S850>:117' */
                /* Call Poke */
                VeCRDB_y_Supported_SchemaID_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S711>/Poke' */
                /* FunctionCaller: '<S852>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S852>/Data Type Conversion'
                 */
                /* Event: '<S850>:38' */
                Rte_Call_PokeIDCR_e_SupSchemaID_PokeIDCR_e_SupSchemaID((sint16)
                    CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__md);

                /* End of Outputs for SubSystem: '<S711>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S850>:111' */
        /* Call Fsft */
        VeCRDB_y_Supported_SchemaID_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S711>/Fsft' */
        /* FunctionCaller: '<S851>/Function Caller' */
        /* Event: '<S850>:39' */
        Rte_Call_FsftIDCR_b_SupSchemaID_FsftIDCR_b_SupSchemaID();

        /* End of Outputs for SubSystem: '<S711>/Fsft' */
        /* Transition: '<S850>:113' */
        /* Transition: '<S850>:115' */
        /* Transition: '<S850>:114' */
    }

    /* End of Chart: '<S847>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_SuprtdVerNrMajor_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_SuprtdVerNrMajor_ErrSts'
     */
    /* Transition: '<S850>:107' */
    rtb_TmpSignalConversionAtVe_dma = Rte_Read_VeCRDB_y_SuprtdVerNrMajor_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_lbz);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_SuprtdVerNrMajor_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S856>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_SuprtdVerNrMajor_SigSts_Value(&tmpRead_3e);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S853>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_3e) & 3U) != 0U)
    {
        /* Transition: '<S856>:100' */
        /* Transition: '<S856>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S856>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3e) & 4U) != 0U)
        {
            /* Transition: '<S856>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S856>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S856>:110' */
                /* Call Tmot */
                VeCRDB_y_SuprtdVerNrMajor_CallStatus = 3U;

                /* Event: '<S856>:40' */
                /* Transition: '<S856>:115' */
                /* Transition: '<S856>:114' */
            }
        }
        else
        {
            /* Transition: '<S856>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_dma) == 133)
            {
                /* Transition: '<S856>:95' */
                /* Transition: '<S856>:116' */
                /* Call Nothing */
                VeCRDB_y_SuprtdVerNrMajor_CallStatus = 4U;

                /* Transition: '<S856>:114' */
            }
            else
            {
                /* Transition: '<S856>:120' */
                /* Transition: '<S856>:117' */
                /* Call Poke */
                VeCRDB_y_SuprtdVerNrMajor_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S712>/Poke' */
                /* FunctionCaller: '<S858>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S858>/Data Type Conversion'
                 */
                /* Event: '<S856>:38' */
                Rte_Call_PokeIDCR_e_SupVerNumMajor_PokeIDCR_e_SupVerNumMajor
                    ((sint16)CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_lbz);

                /* End of Outputs for SubSystem: '<S712>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S856>:111' */
        /* Call Fsft */
        VeCRDB_y_SuprtdVerNrMajor_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S712>/Fsft' */
        /* FunctionCaller: '<S857>/Function Caller' */
        /* Event: '<S856>:39' */
        Rte_Call_FsftIDCR_b_SupVerNumMajor_FsftIDCR_b_SupVerNumMajor();

        /* End of Outputs for SubSystem: '<S712>/Fsft' */
        /* Transition: '<S856>:113' */
        /* Transition: '<S856>:115' */
        /* Transition: '<S856>:114' */
    }

    /* End of Chart: '<S853>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_SuprtdVerNrMinor_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_SuprtdVerNrMinor_ErrSts'
     */
    /* Transition: '<S856>:107' */
    rtb_TmpSignalConversionAtVe_fvf = Rte_Read_VeCRDB_y_SuprtdVerNrMinor_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__eb);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_SuprtdVerNrMinor_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S862>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_SuprtdVerNrMinor_SigSts_Value(&tmpRead_3f);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S859>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_3f) & 3U) != 0U)
    {
        /* Transition: '<S862>:100' */
        /* Transition: '<S862>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S862>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3f) & 4U) != 0U)
        {
            /* Transition: '<S862>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S862>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S862>:110' */
                /* Call Tmot */
                VeCRDB_y_SuprtdVerNrMinor_CallStatus = 3U;

                /* Event: '<S862>:40' */
                /* Transition: '<S862>:115' */
                /* Transition: '<S862>:114' */
            }
        }
        else
        {
            /* Transition: '<S862>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_fvf) == 133)
            {
                /* Transition: '<S862>:95' */
                /* Transition: '<S862>:116' */
                /* Call Nothing */
                VeCRDB_y_SuprtdVerNrMinor_CallStatus = 4U;

                /* Transition: '<S862>:114' */
            }
            else
            {
                /* Transition: '<S862>:120' */
                /* Transition: '<S862>:117' */
                /* Call Poke */
                VeCRDB_y_SuprtdVerNrMinor_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S713>/Poke' */
                /* FunctionCaller: '<S864>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S864>/Data Type Conversion'
                 */
                /* Event: '<S862>:38' */
                Rte_Call_PokeIDCR_e_SupVerNumMinor_PokeIDCR_e_SupVerNumMinor
                    ((sint16)CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__eb);

                /* End of Outputs for SubSystem: '<S713>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S862>:111' */
        /* Call Fsft */
        VeCRDB_y_SuprtdVerNrMinor_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S713>/Fsft' */
        /* FunctionCaller: '<S863>/Function Caller' */
        /* Event: '<S862>:39' */
        Rte_Call_FsftIDCR_b_SupVerNumMinor_FsftIDCR_b_SupVerNumMinor();

        /* End of Outputs for SubSystem: '<S713>/Fsft' */
        /* Transition: '<S862>:113' */
        /* Transition: '<S862>:115' */
        /* Transition: '<S862>:114' */
    }

    /* End of Chart: '<S859>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_ChrgFailSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_ChrgFailSts_ErrSts'
     */
    /* Transition: '<S862>:107' */
    rtb_TmpSignalConversionAtVeC_i5 = Rte_Read_VeCRDB_y_ChrgFailSts_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__nt);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_ChrgFailSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S871>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_ChrgFailSts_SigSts_Value(&tmpRead_3g);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S869>/Chart' */
    if ((((uint32)tmpRead_3g) & 3U) != 0U)
    {
        /* Transition: '<S871>:100' */
        /* Transition: '<S871>:103' */
        /* Transition: '<S871>:111' */
        /* Call Fsft */
        VeCRDB_y_ChrgFailSts_CallStatus = 2U;

        /* Event: '<S871>:39' */
        /* Transition: '<S871>:113' */
        /* Transition: '<S871>:115' */
        /* Transition: '<S871>:114' */
    }
    else
    {
        /* Transition: '<S871>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3g) & 4U) != 0U)
        {
            /* Transition: '<S871>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S871>:88' */
                /* Transition: '<S871>:111' */
                /* Call Fsft */
                VeCRDB_y_ChrgFailSts_CallStatus = 2U;

                /* Event: '<S871>:39' */
                /* Transition: '<S871>:113' */
                /* Transition: '<S871>:115' */
                /* Transition: '<S871>:114' */
            }
            else
            {
                /* Transition: '<S871>:110' */
                /* Call Tmot */
                VeCRDB_y_ChrgFailSts_CallStatus = 3U;

                /* Event: '<S871>:40' */
                /* Transition: '<S871>:115' */
                /* Transition: '<S871>:114' */
            }
        }
        else
        {
            /* Transition: '<S871>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_i5) == 133)
            {
                /* Transition: '<S871>:95' */
                /* Transition: '<S871>:116' */
                /* Call Nothing */
                VeCRDB_y_ChrgFailSts_CallStatus = 4U;

                /* Transition: '<S871>:114' */
            }
            else
            {
                /* Transition: '<S871>:120' */
                if ((((uint32)tmpRead_3g) & 8U) != 0U)
                {
                    /* Transition: '<S871>:122' */
                    /* Transition: '<S871>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S871>:126' */
                }
                else
                {
                    /* Transition: '<S871>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S871>:117' */
                /* Call Poke */
                VeCRDB_y_ChrgFailSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S865>/Poke' */
                /* FunctionCaller: '<S872>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S872>/Data Type Conversion'
                 */
                /* Event: '<S871>:38' */
                Rte_Call_PokeIDCR_e_ChrgFailSts_PokeIDCR_e_ChrgFailSts((sint16)
                    CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__nt, FA_out_hg);

                /* End of Outputs for SubSystem: '<S865>/Poke' */
            }
        }
    }

    /* End of Chart: '<S869>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_OBC_Prox_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_OBC_Prox_ErrSts'
     */
    /* Transition: '<S871>:107' */
    rtb_TmpSignalConversionAtVeC_cu = Rte_Read_VeCRDB_U_OBC_Prox_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_U_O);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_OBC_Prox_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S876>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_OBC_Prox_SigSts_Value(&tmpRead_3h);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S873>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_3h) & 3U) != 0U)
    {
        /* Transition: '<S876>:100' */
        /* Transition: '<S876>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S876>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3h) & 4U) != 0U)
        {
            /* Transition: '<S876>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S876>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S876>:110' */
                /* Call Tmot */
                VeCRDB_y_OBC_Prox_CallStatus = 3U;

                /* Event: '<S876>:40' */
                /* Transition: '<S876>:115' */
                /* Transition: '<S876>:114' */
            }
        }
        else
        {
            /* Transition: '<S876>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_cu) == 133)
            {
                /* Transition: '<S876>:95' */
                /* Transition: '<S876>:116' */
                /* Call Nothing */
                VeCRDB_y_OBC_Prox_CallStatus = 4U;

                /* Transition: '<S876>:114' */
            }
            else
            {
                /* Transition: '<S876>:120' */
                /* Transition: '<S876>:117' */
                /* Call Poke */
                VeCRDB_y_OBC_Prox_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S866>/Poke' */
                /* FunctionCaller: '<S878>/Function Caller' incorporates:
                 *  Constant: '<S878>/Constant'
                 */
                /* Event: '<S876>:38' */
                Rte_Call_PokeIDCR_U_OBC_Prox_PokeIDCR_U_OBC_Prox
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_U_O, false);

                /* End of Outputs for SubSystem: '<S866>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S876>:111' */
        /* Call Fsft */
        VeCRDB_y_OBC_Prox_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S866>/Fsft' */
        /* FunctionCaller: '<S877>/Function Caller' */
        /* Event: '<S876>:39' */
        Rte_Call_FsftIDCR_U_OBC_Prox_FsftIDCR_U_OBC_Prox();

        /* End of Outputs for SubSystem: '<S866>/Fsft' */
        /* Transition: '<S876>:113' */
        /* Transition: '<S876>:115' */
        /* Transition: '<S876>:114' */
    }

    /* End of Chart: '<S873>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_OnboardChargerMode_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_OnboardChargerMode_ErrSts'
     */
    /* Transition: '<S876>:107' */
    rtb_TmpSignalConversionAtVeC_dg = Rte_Read_VeCRDB_y_OnboardChargerMode_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__el);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_OnboardChargerMode_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S882>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_OnboardChargerMode_SigSts_Value(&tmpRead_3i);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S879>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_3i) & 3U) != 0U)
    {
        /* Transition: '<S882>:100' */
        /* Transition: '<S882>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S882>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3i) & 4U) != 0U)
        {
            /* Transition: '<S882>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S882>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S882>:110' */
                /* Call Tmot */
                VeCRDB_y_OnboardChargerMode_CallStatus = 3U;

                /* Event: '<S882>:40' */
                /* Transition: '<S882>:115' */
                /* Transition: '<S882>:114' */
            }
        }
        else
        {
            /* Transition: '<S882>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_dg) == 133)
            {
                /* Transition: '<S882>:95' */
                /* Transition: '<S882>:116' */
                /* Call Nothing */
                VeCRDB_y_OnboardChargerMode_CallStatus = 4U;

                /* Transition: '<S882>:114' */
            }
            else
            {
                /* Transition: '<S882>:120' */
                /* Transition: '<S882>:117' */
                /* Call Poke */
                VeCRDB_y_OnboardChargerMode_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S867>/Poke' */
                /* FunctionCaller: '<S884>/Function Caller' incorporates:
                 *  Constant: '<S884>/Constant'
                 *  DataTypeConversion: '<S884>/Data Type Conversion'
                 */
                /* Event: '<S882>:38' */
                Rte_Call_PokeIDCR_e_ChrgrModeStat_OBCM_PokeIDCR_e_ChrgrModeStat_OBCM
                    ((sint16)CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__el,
                     false);

                /* End of Outputs for SubSystem: '<S867>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S882>:111' */
        /* Call Fsft */
        VeCRDB_y_OnboardChargerMode_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S867>/Fsft' */
        /* FunctionCaller: '<S883>/Function Caller' */
        /* Event: '<S882>:39' */
        Rte_Call_FsftIDCR_e_ChrgrModeStat_OBCM_FsftIDCR_e_ChrgrModeStat_OBCM();

        /* End of Outputs for SubSystem: '<S867>/Fsft' */
        /* Transition: '<S882>:113' */
        /* Transition: '<S882>:115' */
        /* Transition: '<S882>:114' */
    }

    /* End of Chart: '<S879>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_OnboardChrgrReady_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_OnboardChrgrReady_ErrSts'
     */
    /* Transition: '<S882>:107' */
    rtb_TmpSignalConversionAtVeC_nq = Rte_Read_VeCRDB_y_OnboardChrgrReady_Value(
        &CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__ne);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_OnboardChrgrReady_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S888>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_OnboardChrgrReady_SigSts_Value(&tmpRead_3j);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S885>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_3j) & 3U) != 0U)
    {
        /* Transition: '<S888>:100' */
        /* Transition: '<S888>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S888>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3j) & 4U) != 0U)
        {
            /* Transition: '<S888>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S888>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S888>:110' */
                /* Call Tmot */
                VeCRDB_y_OnboardChrgrReady_CallStatus = 3U;

                /* Event: '<S888>:40' */
                /* Transition: '<S888>:115' */
                /* Transition: '<S888>:114' */
            }
        }
        else
        {
            /* Transition: '<S888>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_nq) == 133)
            {
                /* Transition: '<S888>:95' */
                /* Transition: '<S888>:116' */
                /* Call Nothing */
                VeCRDB_y_OnboardChrgrReady_CallStatus = 4U;

                /* Transition: '<S888>:114' */
            }
            else
            {
                /* Transition: '<S888>:120' */
                if ((((uint32)tmpRead_3j) & 8U) != 0U)
                {
                    /* Transition: '<S888>:122' */
                    /* Transition: '<S888>:125' */
                    FA_out_hg = true;

                    /* Transition: '<S888>:126' */
                }
                else
                {
                    /* Transition: '<S888>:124' */
                    FA_out_hg = false;
                }

                /* Transition: '<S888>:117' */
                /* Call Poke */
                VeCRDB_y_OnboardChrgrReady_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S868>/Poke' */
                /* FunctionCaller: '<S890>/Function Caller' */
                /* Event: '<S888>:38' */
                Rte_Call_PokeIDCR_e_OBCM_Charger_Ready_PokeIDCR_e_OBCM_Charger_Ready
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__ne, FA_out_hg);

                /* End of Outputs for SubSystem: '<S868>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S888>:111' */
        /* Call Fsft */
        VeCRDB_y_OnboardChrgrReady_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S868>/Fsft' */
        /* FunctionCaller: '<S889>/Function Caller' */
        /* Event: '<S888>:39' */
        Rte_Call_FsftIDCR_e_OBCM_Charger_Ready_FsftIDCR_e_OBCM_Charger_Ready();

        /* End of Outputs for SubSystem: '<S868>/Fsft' */
        /* Transition: '<S888>:113' */
        /* Transition: '<S888>:115' */
        /* Transition: '<S888>:114' */
    }

    /* End of Chart: '<S885>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCANR_e_EVSE_CHAdeMOProtocol_ErrSts' incorporates:
     *  Inport: '<Root>/VeCANR_e_EVSE_CHAdeMOProtocol_ErrSts'
     */
    /* Transition: '<S888>:107' */
    rtb_TmpSignalConversionAtVeCA_a =
        Rte_Read_VeCANR_e_EVSE_CHAdeMOProtocol_VeCANR_e_EVSE_CHAdeMOProtocol
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCANR_e_E);

VeCANR_e_EVSE_CHAdeMOProtocol_CR2B_FUNC_ac_Test_1 = CR2B_FUNC_ac_B.TmpSignalConversionAtVeCANR_e_E;

VeCANR_e_EVSE_CHAdeMOProtocol_CR2B_FUNC_ac_Test_1 = CR2B_FUNC_ac_B.TmpSignalConversionAtVeCANR_e_E;

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCANR_b_EVSE_CHAdeMOProtocolTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S898>:1' */
    (void)
        Rte_Read_VeCANR_b_EVSE_CHAdeMOProtocolTO_VeCANR_b_EVSE_CHAdeMOProtocolTO
        (&FA_out_il);

VeCANR_b_EVSE_CHAdeMOProtocolTO_CR2B_FUNC_ac_Test_1 = FA_out_il;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S895>/Chart' */
    if (FA_out_il)
    {
        /* Transition: '<S898>:4' */
        if (rtb_RelationalOperator1)
        {
            /* Transition: '<S898>:6' */
            /* Transition: '<S898>:25' */
            /* Call Fsft */
            VeCANR_y_EVSE_CHAdeMOProtocol_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S891>/Fsft' */
            /* FunctionCaller: '<S899>/Function Caller' */
            /* Event: '<S898>:39' */
            Rte_Call_FsftIDCR_e_EVSE_CHAdeMOProtocol_FsftIDCR_e_EVSE_CHAdeMOProtocol
                ();

            /* End of Outputs for SubSystem: '<S891>/Fsft' */
            /* Transition: '<S898>:29' */
        }
        else
        {
            /* Transition: '<S898>:30' */
            /* Call Tmot */
            VeCANR_y_EVSE_CHAdeMOProtocol_CallStatus = 3U;

            /* Event: '<S898>:40' */
        }

        /* Transition: '<S898>:36' */
        /* Transition: '<S898>:23' */
    }
    else
    {
        /* Transition: '<S898>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeCA_a) == 133)
        {
            /* Transition: '<S898>:33' */
            /* Transition: '<S898>:35' */
            /* Call Nothing */
            VeCANR_y_EVSE_CHAdeMOProtocol_CallStatus = 4U;

            /* Transition: '<S898>:23' */
        }
        else
        {
            /* Transition: '<S898>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeCA_a) == 1)
            {
                /* Transition: '<S898>:48' */
                /* Transition: '<S898>:53' */
                FA_out_il = true;

                /* Transition: '<S898>:56' */
            }
            else
            {
                /* Transition: '<S898>:52' */
            }

            /* Transition: '<S898>:37' */
            /* Call Poke */
            VeCANR_y_EVSE_CHAdeMOProtocol_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S891>/Poke' */
            /* FunctionCaller: '<S900>/Function Caller' */
            /* Event: '<S898>:38' */
            Rte_Call_PokeIDCR_e_EVSE_CHAdeMOProtocol_PokeIDCR_e_EVSE_CHAdeMOProtocol
                (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCANR_e_E, FA_out_il);

            /* End of Outputs for SubSystem: '<S891>/Poke' */
        }
    }

    /* End of Chart: '<S895>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCANR_e_EVSEChargingStmError_ErrSts' incorporates:
     *  Inport: '<Root>/VeCANR_e_EVSEChargingStmError_ErrSts'
     */
    /* Transition: '<S898>:19' */
    rtb_TmpSignalConversionAtVeCA_b =
        Rte_Read_VeCANR_b_EVSEChargingStmError_VeCANR_b_EVSEChargingStmError
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCANR_b_E);

VeCANR_b_EVSEChargingStmError_CR2B_FUNC_ac_Test_1 = CR2B_FUNC_ac_B.TmpSignalConversionAtVeCANR_b_E;

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCANR_b_EVSEChargingStmErrorTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S904>:1' */
    (void)
        Rte_Read_VeCANR_b_EVSEChargingStmErrorTO_VeCANR_b_EVSEChargingStmErrorTO
        (&FA_out_j3);

VeCANR_b_EVSEChargingStmErrorTO_CR2B_FUNC_ac_Test_1 = FA_out_j3;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S901>/Chart' */
    if (FA_out_j3)
    {
        /* Transition: '<S904>:4' */
        if (rtb_RelationalOperator1)
        {
            /* Transition: '<S904>:6' */
            /* Transition: '<S904>:25' */
            /* Call Fsft */
            VeCANR_y_EVSEChargingStmError_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S892>/Fsft' */
            /* FunctionCaller: '<S905>/Function Caller' */
            /* Event: '<S904>:39' */
            Rte_Call_FsftIDCR_b_EVSE_ChargingSystemError_FsftIDCR_b_EVSE_ChargingSystemError
                ();

            /* End of Outputs for SubSystem: '<S892>/Fsft' */
            /* Transition: '<S904>:29' */
        }
        else
        {
            /* Transition: '<S904>:30' */
            /* Call Tmot */
            VeCANR_y_EVSEChargingStmError_CallStatus = 3U;

            /* Event: '<S904>:40' */
        }

        /* Transition: '<S904>:36' */
        /* Transition: '<S904>:23' */
    }
    else
    {
        /* Transition: '<S904>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeCA_b) == 133)
        {
            /* Transition: '<S904>:33' */
            /* Transition: '<S904>:35' */
            /* Call Nothing */
            VeCANR_y_EVSEChargingStmError_CallStatus = 4U;

            /* Transition: '<S904>:23' */
        }
        else
        {
            /* Transition: '<S904>:46' */
            /* Transition: '<S904>:37' */
            /* Call Poke */
            VeCANR_y_EVSEChargingStmError_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S892>/Poke' */
            /* FunctionCaller: '<S906>/Function Caller' incorporates:
             *  Constant: '<S906>/Constant'
             */
            /* Event: '<S904>:38' */
            Rte_Call_PokeIDCR_b_EVSE_ChargingSystemError_PokeIDCR_b_EVSE_ChargingSystemError
                (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCANR_b_E, false);

            /* End of Outputs for SubSystem: '<S892>/Poke' */
        }
    }

    /* End of Chart: '<S901>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCANR_e_EVSE_EnergizingState_ErrSts' incorporates:
     *  Inport: '<Root>/VeCANR_e_EVSE_EnergizingState_ErrSts'
     */
    /* Transition: '<S904>:19' */
    rtb_TmpSignalConversionAtVeCA_m =
        Rte_Read_VeCANR_b_EVSE_EnergizingState_VeCANR_b_EVSE_EnergizingState
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCANR_b_i);

VeCANR_b_EVSE_EnergizingState_CR2B_FUNC_ac_Test_1 = CR2B_FUNC_ac_B.TmpSignalConversionAtVeCANR_b_i;

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCANR_b_EVSE_EnergizingStateTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S910>:1' */
    (void)
        Rte_Read_VeCANR_b_EVSE_EnergizingStateTO_VeCANR_b_EVSE_EnergizingStateTO
        (&tmpRead_b);

VeCANR_b_EVSE_EnergizingStateTO_CR2B_FUNC_ac_Test_1 = tmpRead_b;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S907>/Chart' */
    if (tmpRead_b)
    {
        /* Transition: '<S910>:4' */
        if (rtb_RelationalOperator1)
        {
            /* Transition: '<S910>:6' */
            /* Transition: '<S910>:25' */
            /* Call Fsft */
            VeCANR_y_EVSE_EnergizingState_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S893>/Fsft' */
            /* FunctionCaller: '<S911>/Function Caller' */
            /* Event: '<S910>:39' */
            Rte_Call_FsftIDCR_b_EVSE_EnergizingState_FsftIDCR_b_EVSE_EnergizingState
                ();

            /* End of Outputs for SubSystem: '<S893>/Fsft' */
            /* Transition: '<S910>:29' */
        }
        else
        {
            /* Transition: '<S910>:30' */
            /* Call Tmot */
            VeCANR_y_EVSE_EnergizingState_CallStatus = 3U;

            /* Event: '<S910>:40' */
        }

        /* Transition: '<S910>:36' */
        /* Transition: '<S910>:23' */
    }
    else
    {
        /* Transition: '<S910>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeCA_m) == 133)
        {
            /* Transition: '<S910>:33' */
            /* Transition: '<S910>:35' */
            /* Call Nothing */
            VeCANR_y_EVSE_EnergizingState_CallStatus = 4U;

            /* Transition: '<S910>:23' */
        }
        else
        {
            /* Transition: '<S910>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeCA_m) == 1)
            {
                /* Transition: '<S910>:48' */
                /* Transition: '<S910>:53' */
                FA_out_j3 = true;

                /* Transition: '<S910>:56' */
            }
            else
            {
                /* Transition: '<S910>:52' */
                FA_out_j3 = false;
            }

            /* Transition: '<S910>:37' */
            /* Call Poke */
            VeCANR_y_EVSE_EnergizingState_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S893>/Poke' */
            /* FunctionCaller: '<S912>/Function Caller' */
            /* Event: '<S910>:38' */
            Rte_Call_PokeIDCR_b_EVSE_EnergizingState_PokeIDCR_b_EVSE_EnergizingState
                (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCANR_b_i, FA_out_j3);

            /* End of Outputs for SubSystem: '<S893>/Poke' */
        }
    }

    /* End of Chart: '<S907>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCANR_e_EVSE_ThrshldVoltage_ErrSts' incorporates:
     *  Inport: '<Root>/VeCANR_e_EVSE_ThrshldVoltage_ErrSts'
     */
    /* Transition: '<S910>:19' */
    rtb_TmpSignalConversionAtVeCA_p =
        Rte_Read_VeCANR_U_EVSE_ThrshldVoltage_VeCANR_U_EVSE_ThrshldVoltage
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCANR_U_E);

VeCANR_U_EVSE_ThrshldVoltage_CR2B_FUNC_ac_Test_1 = CR2B_FUNC_ac_B.TmpSignalConversionAtVeCANR_U_E;

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCANR_b_EVSE_ThrshldVoltageTO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S916>:1' */
    (void)Rte_Read_VeCANR_b_EVSE_ThrshldVoltageTO_VeCANR_b_EVSE_ThrshldVoltageTO
        (&FA_out_lz);

VeCANR_b_EVSE_ThrshldVoltageTO_CR2B_FUNC_ac_Test_1 = FA_out_lz;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S913>/Chart' */
    if (FA_out_lz)
    {
        /* Transition: '<S916>:4' */
        if (rtb_RelationalOperator1)
        {
            /* Transition: '<S916>:6' */
            /* Transition: '<S916>:25' */
            /* Call Fsft */
            VeCANR_y_EVSE_ThrshldVoltage_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S894>/Fsft' */
            /* FunctionCaller: '<S917>/Function Caller' */
            /* Event: '<S916>:39' */
            Rte_Call_FsftIDCR_U_EVSE_ThrshldVoltage_FsftIDCR_U_EVSE_ThrshldVoltage
                ();

            /* End of Outputs for SubSystem: '<S894>/Fsft' */
            /* Transition: '<S916>:29' */
        }
        else
        {
            /* Transition: '<S916>:30' */
            /* Call Tmot */
            VeCANR_y_EVSE_ThrshldVoltage_CallStatus = 3U;

            /* Event: '<S916>:40' */
        }

        /* Transition: '<S916>:36' */
        /* Transition: '<S916>:23' */
    }
    else
    {
        /* Transition: '<S916>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeCA_p) == 133)
        {
            /* Transition: '<S916>:33' */
            /* Transition: '<S916>:35' */
            /* Call Nothing */
            VeCANR_y_EVSE_ThrshldVoltage_CallStatus = 4U;

            /* Transition: '<S916>:23' */
        }
        else
        {
            /* Transition: '<S916>:46' */
            if (((sint32)rtb_TmpSignalConversionAtVeCA_p) == 1)
            {
                /* Transition: '<S916>:48' */
                /* Transition: '<S916>:53' */
                FA_out_lz = true;

                /* Transition: '<S916>:56' */
            }
            else
            {
                /* Transition: '<S916>:52' */
            }

            /* Transition: '<S916>:37' */
            /* Call Poke */
            VeCANR_y_EVSE_ThrshldVoltage_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S894>/Poke' */
            /* FunctionCaller: '<S918>/Function Caller' */
            /* Event: '<S916>:38' */
            Rte_Call_PokeIDCR_U_EVSE_ThrshldVoltage_PokeIDCR_U_EVSE_ThrshldVoltage
                (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCANR_U_E, FA_out_lz);

            /* End of Outputs for SubSystem: '<S894>/Poke' */
        }
    }

    /* End of Chart: '<S913>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_EVSE_OfdACSingPhas_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_EVSE_OfdACSingPhas_ErrSts'
     */
    /* Transition: '<S916>:19' */
    rtb_TmpSignalConversionAtVeC_ik = Rte_Read_VeCRDB_b_EVSE_OfdACSingPhas_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_E);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_EVSE_OfdACSingPhas_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S939>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_EVSE_OfdACSingPhas_SigSts_Value(&tmpRead_3k);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S936>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_3k) & 3U) != 0U)
    {
        /* Transition: '<S939>:100' */
        /* Transition: '<S939>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S939>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3k) & 4U) != 0U)
        {
            /* Transition: '<S939>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S939>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S939>:110' */
                /* Call Tmot */
                VeCRDB_y_EVSE_OfdACSingPhas_CallStatus = 3U;

                /* Event: '<S939>:40' */
                /* Transition: '<S939>:115' */
                /* Transition: '<S939>:114' */
            }
        }
        else
        {
            /* Transition: '<S939>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ik) == 133)
            {
                /* Transition: '<S939>:95' */
                /* Transition: '<S939>:116' */
                /* Call Nothing */
                VeCRDB_y_EVSE_OfdACSingPhas_CallStatus = 4U;

                /* Transition: '<S939>:114' */
            }
            else
            {
                /* Transition: '<S939>:120' */
                /* Transition: '<S939>:117' */
                /* Call Poke */
                VeCRDB_y_EVSE_OfdACSingPhas_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S919>/Poke' */
                /* FunctionCaller: '<S941>/Function Caller' incorporates:
                 *  Constant: '<S941>/Constant'
                 */
                /* Event: '<S939>:38' */
                Rte_Call_PokeIDCR_b_EVSE_Offered_AC_Single_Phase_PokeIDCR_b_EVSE_Offered_AC_Single_Phase
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_E, false);

                /* End of Outputs for SubSystem: '<S919>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S939>:111' */
        /* Call Fsft */
        VeCRDB_y_EVSE_OfdACSingPhas_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S919>/Fsft' */
        /* FunctionCaller: '<S940>/Function Caller' */
        /* Event: '<S939>:39' */
        Rte_Call_FsftIDCR_b_EVSE_Offered_AC_Single_Phase_FsftIDCR_b_EVSE_Offered_AC_Single_Phase
            ();

        /* End of Outputs for SubSystem: '<S919>/Fsft' */
        /* Transition: '<S939>:113' */
        /* Transition: '<S939>:115' */
        /* Transition: '<S939>:114' */
    }

    /* End of Chart: '<S936>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_EVSEOfdACThreePhas_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_EVSEOfdACThreePhas_ErrSts'
     */
    /* Transition: '<S939>:107' */
    rtb_TmpSignalConversionAtVe_p3d = Rte_Read_VeCRDB_b_EVSEOfdACThreePhas_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__ae);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_EVSEOfdACThreePhas_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S945>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_EVSEOfdACThreePhas_SigSts_Value(&tmpRead_3l);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S942>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_3l) & 3U) != 0U)
    {
        /* Transition: '<S945>:100' */
        /* Transition: '<S945>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S945>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3l) & 4U) != 0U)
        {
            /* Transition: '<S945>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S945>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S945>:110' */
                /* Call Tmot */
                VeCRDB_y_EVSEOfdACThreePhas_CallStatus = 3U;

                /* Event: '<S945>:40' */
                /* Transition: '<S945>:115' */
                /* Transition: '<S945>:114' */
            }
        }
        else
        {
            /* Transition: '<S945>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_p3d) == 133)
            {
                /* Transition: '<S945>:95' */
                /* Transition: '<S945>:116' */
                /* Call Nothing */
                VeCRDB_y_EVSEOfdACThreePhas_CallStatus = 4U;

                /* Transition: '<S945>:114' */
            }
            else
            {
                /* Transition: '<S945>:120' */
                /* Transition: '<S945>:117' */
                /* Call Poke */
                VeCRDB_y_EVSEOfdACThreePhas_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S920>/Poke' */
                /* FunctionCaller: '<S947>/Function Caller' incorporates:
                 *  Constant: '<S947>/Constant'
                 */
                /* Event: '<S945>:38' */
                Rte_Call_PokeIDCR_b_EVSE_Offered_AC_Three_Phase_PokeIDCR_b_EVSE_Offered_AC_Three_Phase
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__ae, false);

                /* End of Outputs for SubSystem: '<S920>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S945>:111' */
        /* Call Fsft */
        VeCRDB_y_EVSEOfdACThreePhas_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S920>/Fsft' */
        /* FunctionCaller: '<S946>/Function Caller' */
        /* Event: '<S945>:39' */
        Rte_Call_FsftIDCR_b_EVSE_Offered_AC_Three_Phase_FsftIDCR_b_EVSE_Offered_AC_Three_Phase
            ();

        /* End of Outputs for SubSystem: '<S920>/Fsft' */
        /* Transition: '<S945>:113' */
        /* Transition: '<S945>:115' */
        /* Transition: '<S945>:114' */
    }

    /* End of Chart: '<S942>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_EVSE_Ofd_DC_Extended_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_EVSE_Ofd_DC_Extended_ErrSts'
     */
    /* Transition: '<S945>:107' */
    rtb_TmpSignalConversionAtVeSR1B =
        Rte_Read_VeSR1B_b_EVSE_Ofd_DC_Extended_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_E);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_EVSE_Ofd_DC_Extended_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S951>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_EVSE_Ofd_DC_Extended_SigSts_Value(&tmpRead_3m);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S948>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_3m) & 3U) != 0U)
    {
        /* Transition: '<S951>:100' */
        /* Transition: '<S951>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S951>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3m) & 4U) != 0U)
        {
            /* Transition: '<S951>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S951>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S951>:110' */
                /* Call Tmot */
                VeSR1B_y_EVSE_Ofd_DC_Extended_CallStatus = 3U;

                /* Event: '<S951>:40' */
                /* Transition: '<S951>:115' */
                /* Transition: '<S951>:114' */
            }
        }
        else
        {
            /* Transition: '<S951>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR1B) == 133)
            {
                /* Transition: '<S951>:95' */
                /* Transition: '<S951>:116' */
                /* Call Nothing */
                VeSR1B_y_EVSE_Ofd_DC_Extended_CallStatus = 4U;

                /* Transition: '<S951>:114' */
            }
            else
            {
                /* Transition: '<S951>:120' */
                /* Transition: '<S951>:117' */
                /* Call Poke */
                VeSR1B_y_EVSE_Ofd_DC_Extended_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S921>/Poke' */
                /* FunctionCaller: '<S953>/Function Caller' incorporates:
                 *  Constant: '<S953>/Constant'
                 */
                /* Event: '<S951>:38' */
                Rte_Call_PokeIDCR_b_EVSE_Offered_DC_Extended_PokeIDCR_b_EVSE_Offered_DC_Extended
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_E, false);

                /* End of Outputs for SubSystem: '<S921>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S951>:111' */
        /* Call Fsft */
        VeSR1B_y_EVSE_Ofd_DC_Extended_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S921>/Fsft' */
        /* FunctionCaller: '<S952>/Function Caller' */
        /* Event: '<S951>:39' */
        Rte_Call_FsftIDCR_b_EVSE_Offered_DC_Extended_FsftIDCR_b_EVSE_Offered_DC_Extended
            ();

        /* End of Outputs for SubSystem: '<S921>/Fsft' */
        /* Transition: '<S951>:113' */
        /* Transition: '<S951>:115' */
        /* Transition: '<S951>:114' */
    }

    /* End of Chart: '<S948>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_EVSEServ1ChargnFD11_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_EVSEServ1ChargnFD11_ErrSts'
     */
    /* Transition: '<S951>:107' */
    rtb_TmpSignalConversionAtVeSR_b =
        Rte_Read_VeSR1B_b_EVSEServ1ChargnFD11_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_h);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_EVSEServ1ChargnFD11_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S957>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_EVSEServ1ChargnFD11_SigSts_Value(&tmpRead_3n);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S954>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_3n) & 3U) != 0U)
    {
        /* Transition: '<S957>:100' */
        /* Transition: '<S957>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S957>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3n) & 4U) != 0U)
        {
            /* Transition: '<S957>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S957>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S957>:110' */
                /* Call Tmot */
                VeSR1B_y_EVSEServ1ChargnFD11_CallStatus = 3U;

                /* Event: '<S957>:40' */
                /* Transition: '<S957>:115' */
                /* Transition: '<S957>:114' */
            }
        }
        else
        {
            /* Transition: '<S957>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_b) == 133)
            {
                /* Transition: '<S957>:95' */
                /* Transition: '<S957>:116' */
                /* Call Nothing */
                VeSR1B_y_EVSEServ1ChargnFD11_CallStatus = 4U;

                /* Transition: '<S957>:114' */
            }
            else
            {
                /* Transition: '<S957>:120' */
                /* Transition: '<S957>:117' */
                /* Call Poke */
                VeSR1B_y_EVSEServ1ChargnFD11_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S922>/Poke' */
                /* FunctionCaller: '<S959>/Function Caller' incorporates:
                 *  Constant: '<S959>/Constant'
                 */
                /* Event: '<S957>:38' */
                Rte_Call_PokeIDCR_b_EVSE_Service1_Charging_PokeIDCR_b_EVSE_Service1_Charging
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_h, false);

                /* End of Outputs for SubSystem: '<S922>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S957>:111' */
        /* Call Fsft */
        VeSR1B_y_EVSEServ1ChargnFD11_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S922>/Fsft' */
        /* FunctionCaller: '<S958>/Function Caller' */
        /* Event: '<S957>:39' */
        Rte_Call_FsftIDCR_b_EVSE_Service1_Charging_FsftIDCR_b_EVSE_Service1_Charging
            ();

        /* End of Outputs for SubSystem: '<S922>/Fsft' */
        /* Transition: '<S957>:113' */
        /* Transition: '<S957>:115' */
        /* Transition: '<S957>:114' */
    }

    /* End of Chart: '<S954>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_EVSE_Service1_FreeFD11_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_EVSE_Service1_FreeFD11_ErrSts'
     */
    /* Transition: '<S957>:107' */
    rtb_TmpSignalConversionAtVeSR_j =
        Rte_Read_VeSR1B_b_EVSE_Service1_FreeFD11_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_m);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_EVSE_Service1_FreeFD11_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S963>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_EVSE_Service1_FreeFD11_SigSts_Value(&tmpRead_3o);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S960>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_3o) & 3U) != 0U)
    {
        /* Transition: '<S963>:100' */
        /* Transition: '<S963>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S963>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3o) & 4U) != 0U)
        {
            /* Transition: '<S963>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S963>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S963>:110' */
                /* Call Tmot */
                VeSR1B_y_EVSE_Service1_FreeFD11_CallStatus = 3U;

                /* Event: '<S963>:40' */
                /* Transition: '<S963>:115' */
                /* Transition: '<S963>:114' */
            }
        }
        else
        {
            /* Transition: '<S963>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_j) == 133)
            {
                /* Transition: '<S963>:95' */
                /* Transition: '<S963>:116' */
                /* Call Nothing */
                VeSR1B_y_EVSE_Service1_FreeFD11_CallStatus = 4U;

                /* Transition: '<S963>:114' */
            }
            else
            {
                /* Transition: '<S963>:120' */
                /* Transition: '<S963>:117' */
                /* Call Poke */
                VeSR1B_y_EVSE_Service1_FreeFD11_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S923>/Poke' */
                /* FunctionCaller: '<S965>/Function Caller' incorporates:
                 *  Constant: '<S965>/Constant'
                 */
                /* Event: '<S963>:38' */
                Rte_Call_PokeIDCR_b_EVSE_Service1_Free_PokeIDCR_b_EVSE_Service1_Free
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_m, false);

                /* End of Outputs for SubSystem: '<S923>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S963>:111' */
        /* Call Fsft */
        VeSR1B_y_EVSE_Service1_FreeFD11_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S923>/Fsft' */
        /* FunctionCaller: '<S964>/Function Caller' */
        /* Event: '<S963>:39' */
        Rte_Call_FsftIDCR_b_EVSE_Service1_Free_FsftIDCR_b_EVSE_Service1_Free();

        /* End of Outputs for SubSystem: '<S923>/Fsft' */
        /* Transition: '<S963>:113' */
        /* Transition: '<S963>:115' */
        /* Transition: '<S963>:114' */
    }

    /* End of Chart: '<S960>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_ISO15118EVSETiStFD11_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_ISO15118EVSETiStFD11_ErrSts'
     */
    /* Transition: '<S963>:107' */
    rtb_TmpSignalConversionAtVeSR_o =
        Rte_Read_VeSR1B_cmp_ISO15118EVSETiStFD11_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_cmp);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_ISO15118EVSETiStFD11_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S969>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_ISO15118EVSETiStFD11_SigSts_Value(&tmpRead_3p);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S966>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_3p) & 3U) != 0U)
    {
        /* Transition: '<S969>:100' */
        /* Transition: '<S969>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S969>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3p) & 4U) != 0U)
        {
            /* Transition: '<S969>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S969>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S969>:110' */
                /* Call Tmot */
                VeSR1B_y_ISO15118EVSETiStFD11_CallStatus = 3U;

                /* Event: '<S969>:40' */
                /* Transition: '<S969>:115' */
                /* Transition: '<S969>:114' */
            }
        }
        else
        {
            /* Transition: '<S969>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_o) == 133)
            {
                /* Transition: '<S969>:95' */
                /* Transition: '<S969>:116' */
                /* Call Nothing */
                VeSR1B_y_ISO15118EVSETiStFD11_CallStatus = 4U;

                /* Transition: '<S969>:114' */
            }
            else
            {
                /* Transition: '<S969>:120' */
                /* Transition: '<S969>:117' */
                /* Call Poke */
                VeSR1B_y_ISO15118EVSETiStFD11_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S924>/Poke' */
                /* FunctionCaller: '<S971>/Function Caller' incorporates:
                 *  Constant: '<S971>/Constant'
                 */
                /* Event: '<S969>:38' */
                Rte_Call_PokeIDCR_cmp_ISO15118_EVSETimeStamp_PokeIDCR_cmp_ISO15118_EVSETimeStamp
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_cmp, false);

                /* End of Outputs for SubSystem: '<S924>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S969>:111' */
        /* Call Fsft */
        VeSR1B_y_ISO15118EVSETiStFD11_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S924>/Fsft' */
        /* FunctionCaller: '<S970>/Function Caller' */
        /* Event: '<S969>:39' */
        Rte_Call_FsftIDCR_cmp_ISO15118_EVSETimeStamp_FsftIDCR_cmp_ISO15118_EVSETimeStamp
            ();

        /* End of Outputs for SubSystem: '<S924>/Fsft' */
        /* Transition: '<S969>:113' */
        /* Transition: '<S969>:115' */
        /* Transition: '<S969>:114' */
    }

    /* End of Chart: '<S966>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_ISO15118_MsgRespFD11_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_ISO15118_MsgRespFD11_ErrSts'
     */
    /* Transition: '<S969>:107' */
    rtb_TmpSignalConversionAtVeSR_m =
        Rte_Read_VeSR1B_y_ISO15118_MsgRespFD11_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_I);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_ISO15118_MsgRespFD11_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S975>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_ISO15118_MsgRespFD11_SigSts_Value(&tmpRead_3q);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S972>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_3q) & 3U) != 0U)
    {
        /* Transition: '<S975>:100' */
        /* Transition: '<S975>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S975>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3q) & 4U) != 0U)
        {
            /* Transition: '<S975>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S975>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S975>:110' */
                /* Call Tmot */
                VeSR1B_y_ISO15118_MsgRespFD11_CallStatus = 3U;

                /* Event: '<S975>:40' */
                /* Transition: '<S975>:115' */
                /* Transition: '<S975>:114' */
            }
        }
        else
        {
            /* Transition: '<S975>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_m) == 133)
            {
                /* Transition: '<S975>:95' */
                /* Transition: '<S975>:116' */
                /* Call Nothing */
                VeSR1B_y_ISO15118_MsgRespFD11_CallStatus = 4U;

                /* Transition: '<S975>:114' */
            }
            else
            {
                /* Transition: '<S975>:120' */
                if ((((uint32)tmpRead_3q) & 8U) != 0U)
                {
                    /* Transition: '<S975>:122' */
                    /* Transition: '<S975>:125' */
                    FA_out_lz = true;

                    /* Transition: '<S975>:126' */
                }
                else
                {
                    /* Transition: '<S975>:124' */
                    FA_out_lz = false;
                }

                /* Transition: '<S975>:117' */
                /* Call Poke */
                VeSR1B_y_ISO15118_MsgRespFD11_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S925>/Poke' */
                /* FunctionCaller: '<S977>/Function Caller' */
                /* Event: '<S975>:38' */
                Rte_Call_PokeIDCR_e_ISO15118_MessageResponse_PokeIDCR_e_ISO15118_MessageResponse
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_I, FA_out_lz);

                /* End of Outputs for SubSystem: '<S925>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S975>:111' */
        /* Call Fsft */
        VeSR1B_y_ISO15118_MsgRespFD11_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S925>/Fsft' */
        /* FunctionCaller: '<S976>/Function Caller' */
        /* Event: '<S975>:39' */
        Rte_Call_FsftIDCR_e_ISO15118_MessageResponse_FsftIDCR_e_ISO15118_MessageResponse
            ();

        /* End of Outputs for SubSystem: '<S925>/Fsft' */
        /* Transition: '<S975>:113' */
        /* Transition: '<S975>:115' */
        /* Transition: '<S975>:114' */
    }

    /* End of Chart: '<S972>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_ISO15118NtfcnMxDlyFD11_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_ISO15118NtfcnMxDlyFD11_ErrSts'
     */
    /* Transition: '<S975>:107' */
    rtb_TmpSignalConversionAtVeSR_h =
        Rte_Read_VeSR1B_t_ISO15118NtfcnMxDlyFD11_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_t_I);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_ISO15118NtfcnMxDlyFD11_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S981>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_ISO15118NtfcnMxDlyFD11_SigSts_Value(&tmpRead_3r);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S978>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_3r) & 3U) != 0U)
    {
        /* Transition: '<S981>:100' */
        /* Transition: '<S981>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S981>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3r) & 4U) != 0U)
        {
            /* Transition: '<S981>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S981>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S981>:110' */
                /* Call Tmot */
                VeSR1B_y_ISO15118NtfcnMxDlyFD11_CallStatus = 3U;

                /* Event: '<S981>:40' */
                /* Transition: '<S981>:115' */
                /* Transition: '<S981>:114' */
            }
        }
        else
        {
            /* Transition: '<S981>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_h) == 133)
            {
                /* Transition: '<S981>:95' */
                /* Transition: '<S981>:116' */
                /* Call Nothing */
                VeSR1B_y_ISO15118NtfcnMxDlyFD11_CallStatus = 4U;

                /* Transition: '<S981>:114' */
            }
            else
            {
                /* Transition: '<S981>:120' */
                /* Transition: '<S981>:117' */
                /* Call Poke */
                VeSR1B_y_ISO15118NtfcnMxDlyFD11_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S926>/Poke' */
                /* FunctionCaller: '<S983>/Function Caller' incorporates:
                 *  Constant: '<S983>/Constant'
                 */
                /* Event: '<S981>:38' */
                Rte_Call_PokeIDCR_t_ISO15118_NotificationMaxDelay_PokeIDCR_t_ISO15118_NotificationMaxDelay
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_t_I, false);

                /* End of Outputs for SubSystem: '<S926>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S981>:111' */
        /* Call Fsft */
        VeSR1B_y_ISO15118NtfcnMxDlyFD11_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S926>/Fsft' */
        /* FunctionCaller: '<S982>/Function Caller' */
        /* Event: '<S981>:39' */
        Rte_Call_FsftIDCR_t_ISO15118_NotificationMaxDelay_FsftIDCR_t_ISO15118_NotificationMaxDelay
            ();

        /* End of Outputs for SubSystem: '<S926>/Fsft' */
        /* Transition: '<S981>:113' */
        /* Transition: '<S981>:115' */
        /* Transition: '<S981>:114' */
    }

    /* End of Chart: '<S978>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_ISO15118_RespCodFD11_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_ISO15118_RespCodFD11_ErrSts'
     */
    /* Transition: '<S981>:107' */
    rtb_TmpSignalConversionAtVeSR_c =
        Rte_Read_VeSR1B_y_ISO15118_RespCodFD11_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_i);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_ISO15118_RespCodFD11_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S987>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_ISO15118_RespCodFD11_SigSts_Value(&tmpRead_3s);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S984>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_3s) & 3U) != 0U)
    {
        /* Transition: '<S987>:100' */
        /* Transition: '<S987>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S987>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3s) & 4U) != 0U)
        {
            /* Transition: '<S987>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S987>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S987>:110' */
                /* Call Tmot */
                VeSR1B_y_ISO15118_RespCodFD11_CallStatus = 3U;

                /* Event: '<S987>:40' */
                /* Transition: '<S987>:115' */
                /* Transition: '<S987>:114' */
            }
        }
        else
        {
            /* Transition: '<S987>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_c) == 133)
            {
                /* Transition: '<S987>:95' */
                /* Transition: '<S987>:116' */
                /* Call Nothing */
                VeSR1B_y_ISO15118_RespCodFD11_CallStatus = 4U;

                /* Transition: '<S987>:114' */
            }
            else
            {
                /* Transition: '<S987>:120' */
                if ((((uint32)tmpRead_3s) & 8U) != 0U)
                {
                    /* Transition: '<S987>:122' */
                    /* Transition: '<S987>:125' */
                    FA_out_lz = true;

                    /* Transition: '<S987>:126' */
                }
                else
                {
                    /* Transition: '<S987>:124' */
                    FA_out_lz = false;
                }

                /* Transition: '<S987>:117' */
                /* Call Poke */
                VeSR1B_y_ISO15118_RespCodFD11_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S927>/Poke' */
                /* FunctionCaller: '<S989>/Function Caller' */
                /* Event: '<S987>:38' */
                Rte_Call_PokeIDCR_e_ISO15118_ResponseCode_PokeIDCR_e_ISO15118_ResponseCode
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_i, FA_out_lz);

                /* End of Outputs for SubSystem: '<S927>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S987>:111' */
        /* Call Fsft */
        VeSR1B_y_ISO15118_RespCodFD11_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S927>/Fsft' */
        /* FunctionCaller: '<S988>/Function Caller' */
        /* Event: '<S987>:39' */
        Rte_Call_FsftIDCR_e_ISO15118_ResponseCode_FsftIDCR_e_ISO15118_ResponseCode
            ();

        /* End of Outputs for SubSystem: '<S927>/Fsft' */
        /* Transition: '<S987>:113' */
        /* Transition: '<S987>:115' */
        /* Transition: '<S987>:114' */
    }

    /* End of Chart: '<S984>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_ISO15118SAScdlTlIDFD11_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_ISO15118SAScdlTlIDFD11_ErrSts'
     */
    /* Transition: '<S987>:107' */
    rtb_TmpSignalConversionAtVeS_hm =
        Rte_Read_VeSR1B_y_ISO15118SAScdlTlIDFD11_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_n);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_ISO15118SAScdlTlIDFD11_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S993>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_ISO15118SAScdlTlIDFD11_SigSts_Value(&tmpRead_3t);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S990>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_3t) & 3U) != 0U)
    {
        /* Transition: '<S993>:100' */
        /* Transition: '<S993>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S993>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3t) & 4U) != 0U)
        {
            /* Transition: '<S993>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S993>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S993>:110' */
                /* Call Tmot */
                VeSR1B_y_ISO15118SAScdlTlIDFD11_CallStatus = 3U;

                /* Event: '<S993>:40' */
                /* Transition: '<S993>:115' */
                /* Transition: '<S993>:114' */
            }
        }
        else
        {
            /* Transition: '<S993>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_hm) == 133)
            {
                /* Transition: '<S993>:95' */
                /* Transition: '<S993>:116' */
                /* Call Nothing */
                VeSR1B_y_ISO15118SAScdlTlIDFD11_CallStatus = 4U;

                /* Transition: '<S993>:114' */
            }
            else
            {
                /* Transition: '<S993>:120' */
                /* Transition: '<S993>:117' */
                /* Call Poke */
                VeSR1B_y_ISO15118SAScdlTlIDFD11_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S928>/Poke' */
                /* FunctionCaller: '<S995>/Function Caller' incorporates:
                 *  Constant: '<S995>/Constant'
                 */
                /* Event: '<S993>:38' */
                Rte_Call_PokeIDCR_i_ISO15118_SAScheduleTupleID_PokeIDCR_i_ISO15118_SAScheduleTupleID
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_n, false);

                /* End of Outputs for SubSystem: '<S928>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S993>:111' */
        /* Call Fsft */
        VeSR1B_y_ISO15118SAScdlTlIDFD11_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S928>/Fsft' */
        /* FunctionCaller: '<S994>/Function Caller' */
        /* Event: '<S993>:39' */
        Rte_Call_FsftIDCR_i_ISO15118_SAScheduleTupleID_FsftIDCR_i_ISO15118_SAScheduleTupleID
            ();

        /* End of Outputs for SubSystem: '<S928>/Fsft' */
        /* Transition: '<S993>:113' */
        /* Transition: '<S993>:115' */
        /* Transition: '<S993>:114' */
    }

    /* End of Chart: '<S990>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_ISO15118_SchemaID_FD11_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_ISO15118_SchemaID_FD11_ErrSts'
     */
    /* Transition: '<S993>:107' */
    rtb_TmpSignalConversionAtVeS_hw =
        Rte_Read_VeSR1B_y_ISO15118_SchemaID_FD11_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_f);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_ISO15118_SchemaID_FD11_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S999>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_ISO15118_SchemaID_FD11_SigSts_Value(&tmpRead_3u);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S996>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_3u) & 3U) != 0U)
    {
        /* Transition: '<S999>:100' */
        /* Transition: '<S999>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S999>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3u) & 4U) != 0U)
        {
            /* Transition: '<S999>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S999>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S999>:110' */
                /* Call Tmot */
                VeSR1B_y_ISO15118_SchemaID_FD11_CallStatus = 3U;

                /* Event: '<S999>:40' */
                /* Transition: '<S999>:115' */
                /* Transition: '<S999>:114' */
            }
        }
        else
        {
            /* Transition: '<S999>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_hw) == 133)
            {
                /* Transition: '<S999>:95' */
                /* Transition: '<S999>:116' */
                /* Call Nothing */
                VeSR1B_y_ISO15118_SchemaID_FD11_CallStatus = 4U;

                /* Transition: '<S999>:114' */
            }
            else
            {
                /* Transition: '<S999>:120' */
                /* Transition: '<S999>:117' */
                /* Call Poke */
                VeSR1B_y_ISO15118_SchemaID_FD11_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S929>/Poke' */
                /* FunctionCaller: '<S1001>/Function Caller' incorporates:
                 *  Constant: '<S1001>/Constant'
                 */
                /* Event: '<S999>:38' */
                Rte_Call_PokeIDCR_y_ISO15118_SchemaID_PokeIDCR_y_ISO15118_SchemaID
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_f, false);

                /* End of Outputs for SubSystem: '<S929>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S999>:111' */
        /* Call Fsft */
        VeSR1B_y_ISO15118_SchemaID_FD11_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S929>/Fsft' */
        /* FunctionCaller: '<S1000>/Function Caller' */
        /* Event: '<S999>:39' */
        Rte_Call_FsftIDCR_y_ISO15118_SchemaID_FsftIDCR_y_ISO15118_SchemaID();

        /* End of Outputs for SubSystem: '<S929>/Fsft' */
        /* Transition: '<S999>:113' */
        /* Transition: '<S999>:115' */
        /* Transition: '<S999>:114' */
    }

    /* End of Chart: '<S996>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_ISO15118_ServiceIDFD11_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_ISO15118_ServiceIDFD11_ErrSts'
     */
    /* Transition: '<S999>:107' */
    rtb_TmpSignalConversionAtVeS_hq =
        Rte_Read_VeSR1B_d_ISO15118_ServiceIDFD11_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_d_I);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_ISO15118_ServiceIDFD11_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1005>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_ISO15118_ServiceIDFD11_SigSts_Value(&tmpRead_3v);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1002>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_3v) & 3U) != 0U)
    {
        /* Transition: '<S1005>:100' */
        /* Transition: '<S1005>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1005>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3v) & 4U) != 0U)
        {
            /* Transition: '<S1005>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1005>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1005>:110' */
                /* Call Tmot */
                VeSR1B_y_ISO15118_ServiceIDFD11_CallStatus = 3U;

                /* Event: '<S1005>:40' */
                /* Transition: '<S1005>:115' */
                /* Transition: '<S1005>:114' */
            }
        }
        else
        {
            /* Transition: '<S1005>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_hq) == 133)
            {
                /* Transition: '<S1005>:95' */
                /* Transition: '<S1005>:116' */
                /* Call Nothing */
                VeSR1B_y_ISO15118_ServiceIDFD11_CallStatus = 4U;

                /* Transition: '<S1005>:114' */
            }
            else
            {
                /* Transition: '<S1005>:120' */
                /* Transition: '<S1005>:117' */
                /* Call Poke */
                VeSR1B_y_ISO15118_ServiceIDFD11_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S930>/Poke' */
                /* FunctionCaller: '<S1007>/Function Caller' incorporates:
                 *  Constant: '<S1007>/Constant'
                 */
                /* Event: '<S1005>:38' */
                Rte_Call_PokeIDCR_d_ISO15118_ServiceID_PokeIDCR_d_ISO15118_ServiceID
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_d_I, false);

                /* End of Outputs for SubSystem: '<S930>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1005>:111' */
        /* Call Fsft */
        VeSR1B_y_ISO15118_ServiceIDFD11_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S930>/Fsft' */
        /* FunctionCaller: '<S1006>/Function Caller' */
        /* Event: '<S1005>:39' */
        Rte_Call_FsftIDCR_d_ISO15118_ServiceID_FsftIDCR_d_ISO15118_ServiceID();

        /* End of Outputs for SubSystem: '<S930>/Fsft' */
        /* Transition: '<S1005>:113' */
        /* Transition: '<S1005>:115' */
        /* Transition: '<S1005>:114' */
    }

    /* End of Chart: '<S1002>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_ISO15118_TLSoffrdFD11_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_ISO15118_TLSoffrdFD11_ErrSts'
     */
    /* Transition: '<S1005>:107' */
    rtb_TmpSignalConversionAtVeSR_n =
        Rte_Read_VeSR1B_b_ISO15118_TLSoffrdFD11_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_I);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_ISO15118_TLSoffrdFD11_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1011>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_ISO15118_TLSoffrdFD11_SigSts_Value(&tmpRead_3w);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1008>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_3w) & 3U) != 0U)
    {
        /* Transition: '<S1011>:100' */
        /* Transition: '<S1011>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1011>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3w) & 4U) != 0U)
        {
            /* Transition: '<S1011>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1011>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1011>:110' */
                /* Call Tmot */
                VeSR1B_y_ISO15118_TLSoffrdFD11_CallStatus = 3U;

                /* Event: '<S1011>:40' */
                /* Transition: '<S1011>:115' */
                /* Transition: '<S1011>:114' */
            }
        }
        else
        {
            /* Transition: '<S1011>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_n) == 133)
            {
                /* Transition: '<S1011>:95' */
                /* Transition: '<S1011>:116' */
                /* Call Nothing */
                VeSR1B_y_ISO15118_TLSoffrdFD11_CallStatus = 4U;

                /* Transition: '<S1011>:114' */
            }
            else
            {
                /* Transition: '<S1011>:120' */
                /* Transition: '<S1011>:117' */
                /* Call Poke */
                VeSR1B_y_ISO15118_TLSoffrdFD11_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S931>/Poke' */
                /* FunctionCaller: '<S1013>/Function Caller' incorporates:
                 *  Constant: '<S1013>/Constant'
                 */
                /* Event: '<S1011>:38' */
                Rte_Call_PokeIDCR_b_ISO15118_TLS_Offered_PokeIDCR_b_ISO15118_TLS_Offered
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_I, false);

                /* End of Outputs for SubSystem: '<S931>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1011>:111' */
        /* Call Fsft */
        VeSR1B_y_ISO15118_TLSoffrdFD11_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S931>/Fsft' */
        /* FunctionCaller: '<S1012>/Function Caller' */
        /* Event: '<S1011>:39' */
        Rte_Call_FsftIDCR_b_ISO15118_TLS_Offered_FsftIDCR_b_ISO15118_TLS_Offered
            ();

        /* End of Outputs for SubSystem: '<S931>/Fsft' */
        /* Transition: '<S1011>:113' */
        /* Transition: '<S1011>:115' */
        /* Transition: '<S1011>:114' */
    }

    /* End of Chart: '<S1008>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_ISO15118_TLSStatusFD11_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_ISO15118_TLSStatusFD11_ErrSts'
     */
    /* Transition: '<S1011>:107' */
    rtb_TmpSignalConversionAtVeSR_a =
        Rte_Read_VeSR1B_y_ISO15118_TLSStatusFD11_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B__nc);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_ISO15118_TLSStatusFD11_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1017>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_ISO15118_TLSStatusFD11_SigSts_Value(&tmpRead_3x);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1014>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_3x) & 3U) != 0U)
    {
        /* Transition: '<S1017>:100' */
        /* Transition: '<S1017>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1017>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3x) & 4U) != 0U)
        {
            /* Transition: '<S1017>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1017>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1017>:110' */
                /* Call Tmot */
                VeSR1B_y_ISO15118_TLSStatusFD11_CallStatus = 3U;

                /* Event: '<S1017>:40' */
                /* Transition: '<S1017>:115' */
                /* Transition: '<S1017>:114' */
            }
        }
        else
        {
            /* Transition: '<S1017>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_a) == 133)
            {
                /* Transition: '<S1017>:95' */
                /* Transition: '<S1017>:116' */
                /* Call Nothing */
                VeSR1B_y_ISO15118_TLSStatusFD11_CallStatus = 4U;

                /* Transition: '<S1017>:114' */
            }
            else
            {
                /* Transition: '<S1017>:120' */
                /* Transition: '<S1017>:117' */
                /* Call Poke */
                VeSR1B_y_ISO15118_TLSStatusFD11_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S932>/Poke' */
                /* FunctionCaller: '<S1019>/Function Caller' incorporates:
                 *  Constant: '<S1019>/Constant'
                 */
                /* Event: '<S1017>:38' */
                Rte_Call_PokeIDCR_e_ISO15118_TLS_Status_PokeIDCR_e_ISO15118_TLS_Status
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B__nc, false);

                /* End of Outputs for SubSystem: '<S932>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1017>:111' */
        /* Call Fsft */
        VeSR1B_y_ISO15118_TLSStatusFD11_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S932>/Fsft' */
        /* FunctionCaller: '<S1018>/Function Caller' */
        /* Event: '<S1017>:39' */
        Rte_Call_FsftIDCR_e_ISO15118_TLS_Status_FsftIDCR_e_ISO15118_TLS_Status();

        /* End of Outputs for SubSystem: '<S932>/Fsft' */
        /* Transition: '<S1017>:113' */
        /* Transition: '<S1017>:115' */
        /* Transition: '<S1017>:114' */
    }

    /* End of Chart: '<S1014>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_ISO15118VrsnNmMajrFD11_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_ISO15118VrsnNmMajrFD11_ErrSts'
     */
    /* Transition: '<S1017>:107' */
    rtb_TmpSignalConversionAtVeSR_e =
        Rte_Read_VeSR1B_y_ISO15118VrsnNmMajrFD11_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_g);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_ISO15118VrsnNmMajrFD11_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1023>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_ISO15118VrsnNmMajrFD11_SigSts_Value(&tmpRead_3y);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1020>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_3y) & 3U) != 0U)
    {
        /* Transition: '<S1023>:100' */
        /* Transition: '<S1023>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1023>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3y) & 4U) != 0U)
        {
            /* Transition: '<S1023>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1023>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1023>:110' */
                /* Call Tmot */
                VeSR1B_y_ISO15118VrsnNmMajrFD11_CallStatus = 3U;

                /* Event: '<S1023>:40' */
                /* Transition: '<S1023>:115' */
                /* Transition: '<S1023>:114' */
            }
        }
        else
        {
            /* Transition: '<S1023>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_e) == 133)
            {
                /* Transition: '<S1023>:95' */
                /* Transition: '<S1023>:116' */
                /* Call Nothing */
                VeSR1B_y_ISO15118VrsnNmMajrFD11_CallStatus = 4U;

                /* Transition: '<S1023>:114' */
            }
            else
            {
                /* Transition: '<S1023>:120' */
                /* Transition: '<S1023>:117' */
                /* Call Poke */
                VeSR1B_y_ISO15118VrsnNmMajrFD11_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S933>/Poke' */
                /* FunctionCaller: '<S1025>/Function Caller' incorporates:
                 *  Constant: '<S1025>/Constant'
                 */
                /* Event: '<S1023>:38' */
                Rte_Call_PokeIDCR_y_ISO15118_VersionNumMajor_PokeIDCR_y_ISO15118_VersionNumMajor
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_g, false);

                /* End of Outputs for SubSystem: '<S933>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1023>:111' */
        /* Call Fsft */
        VeSR1B_y_ISO15118VrsnNmMajrFD11_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S933>/Fsft' */
        /* FunctionCaller: '<S1024>/Function Caller' */
        /* Event: '<S1023>:39' */
        Rte_Call_FsftIDCR_y_ISO15118_VersionNumMajor_FsftIDCR_y_ISO15118_VersionNumMajor
            ();

        /* End of Outputs for SubSystem: '<S933>/Fsft' */
        /* Transition: '<S1023>:113' */
        /* Transition: '<S1023>:115' */
        /* Transition: '<S1023>:114' */
    }

    /* End of Chart: '<S1020>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_ISO15118VrsnNmMinrFD11_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_ISO15118VrsnNmMinrFD11_ErrSts'
     */
    /* Transition: '<S1023>:107' */
    rtb_TmpSignalConversionAtVeSR_d =
        Rte_Read_VeSR1B_y_ISO15118VrsnNmMinrFD11_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_d);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_ISO15118VrsnNmMinrFD11_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1029>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_ISO15118VrsnNmMinrFD11_SigSts_Value(&tmpRead_3z);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1026>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_3z) & 3U) != 0U)
    {
        /* Transition: '<S1029>:100' */
        /* Transition: '<S1029>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1029>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3z) & 4U) != 0U)
        {
            /* Transition: '<S1029>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1029>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1029>:110' */
                /* Call Tmot */
                VeSR1B_y_ISO15118VrsnNmMinrFD11_CallStatus = 3U;

                /* Event: '<S1029>:40' */
                /* Transition: '<S1029>:115' */
                /* Transition: '<S1029>:114' */
            }
        }
        else
        {
            /* Transition: '<S1029>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_d) == 133)
            {
                /* Transition: '<S1029>:95' */
                /* Transition: '<S1029>:116' */
                /* Call Nothing */
                VeSR1B_y_ISO15118VrsnNmMinrFD11_CallStatus = 4U;

                /* Transition: '<S1029>:114' */
            }
            else
            {
                /* Transition: '<S1029>:120' */
                /* Transition: '<S1029>:117' */
                /* Call Poke */
                VeSR1B_y_ISO15118VrsnNmMinrFD11_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S934>/Poke' */
                /* FunctionCaller: '<S1031>/Function Caller' incorporates:
                 *  Constant: '<S1031>/Constant'
                 */
                /* Event: '<S1029>:38' */
                Rte_Call_PokeIDCR_y_ISO15118_VersionNumMinor_PokeIDCR_y_ISO15118_VersionNumMinor
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_d, false);

                /* End of Outputs for SubSystem: '<S934>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1029>:111' */
        /* Call Fsft */
        VeSR1B_y_ISO15118VrsnNmMinrFD11_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S934>/Fsft' */
        /* FunctionCaller: '<S1030>/Function Caller' */
        /* Event: '<S1029>:39' */
        Rte_Call_FsftIDCR_y_ISO15118_VersionNumMinor_FsftIDCR_y_ISO15118_VersionNumMinor
            ();

        /* End of Outputs for SubSystem: '<S934>/Fsft' */
        /* Transition: '<S1029>:113' */
        /* Transition: '<S1029>:115' */
        /* Transition: '<S1029>:114' */
    }

    /* End of Chart: '<S1026>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_V2X_EVSE_Service5_Free_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_V2X_EVSE_Service5_Free_ErrSts'
     */
    /* Transition: '<S1029>:107' */
    rtb_TmpSignalConversionAtVeSR_f =
        Rte_Read_VeSR1B_b_V2X_EVSE_Service5_Free_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_V);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_V2X_EVSE_Service5_Free_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1035>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_V2X_EVSE_Service5_Free_SigSts_Value(&tmpRead_40);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1032>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_40) & 3U) != 0U)
    {
        /* Transition: '<S1035>:100' */
        /* Transition: '<S1035>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1035>:104' */
        /*  MM */
        if ((((uint32)tmpRead_40) & 4U) != 0U)
        {
            /* Transition: '<S1035>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1035>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1035>:110' */
                /* Call Tmot */
                VeSR1B_y_V2X_EVSE_Service5_Free_CallStatus = 3U;

                /* Event: '<S1035>:40' */
                /* Transition: '<S1035>:115' */
                /* Transition: '<S1035>:114' */
            }
        }
        else
        {
            /* Transition: '<S1035>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_f) == 133)
            {
                /* Transition: '<S1035>:95' */
                /* Transition: '<S1035>:116' */
                /* Call Nothing */
                VeSR1B_y_V2X_EVSE_Service5_Free_CallStatus = 4U;

                /* Transition: '<S1035>:114' */
            }
            else
            {
                /* Transition: '<S1035>:120' */
                /* Transition: '<S1035>:117' */
                /* Call Poke */
                VeSR1B_y_V2X_EVSE_Service5_Free_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S935>/Poke' */
                /* FunctionCaller: '<S1037>/Function Caller' incorporates:
                 *  Constant: '<S1037>/Constant'
                 */
                /* Event: '<S1035>:38' */
                Rte_Call_PokeIDCR_b_V2X_EVSE_Service_5_Free_PokeIDCR_b_V2X_EVSE_Service_5_Free
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_V, false);

                /* End of Outputs for SubSystem: '<S935>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1035>:111' */
        /* Call Fsft */
        VeSR1B_y_V2X_EVSE_Service5_Free_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S935>/Fsft' */
        /* FunctionCaller: '<S1036>/Function Caller' */
        /* Event: '<S1035>:39' */
        Rte_Call_FsftIDCR_b_V2X_EVSE_Service_5_Free_FsftIDCR_b_V2X_EVSE_Service_5_Free
            ();

        /* End of Outputs for SubSystem: '<S935>/Fsft' */
        /* Transition: '<S1035>:113' */
        /* Transition: '<S1035>:115' */
        /* Transition: '<S1035>:114' */
    }

    /* End of Chart: '<S1032>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCANR_e_IDCM_Wakeup_HCP_FD11_ErrSts' incorporates:
     *  Inport: '<Root>/VeCANR_e_IDCM_Wakeup_HCP_FD11_ErrSts'
     */
    /* Transition: '<S1035>:107' */
    rtb_TmpSignalConversionAtVeCA_e =
        Rte_Read_VeCANR_b_IDCM_Wakeup_HCP_FD11_VeCANR_b_IDCM_Wakeup_HCP_FD11
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCANR_b_I);

VeCANR_b_IDCM_Wakeup_HCP_FD11_CR2B_FUNC_ac_Test_1 = CR2B_FUNC_ac_B.TmpSignalConversionAtVeCANR_b_I;

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCANR_b_IDCM_Wakeup_HCP_FD11TO' */
    /* Gateway: ArbtrLogic_NotProtected/Chart */
    /* During: ArbtrLogic_NotProtected/Chart */
    /* Entry Internal: ArbtrLogic_NotProtected/Chart */
    /* Transition: '<S1042>:1' */
    (void)
        Rte_Read_VeCANR_b_IDCM_Wakeup_HCP_FD11TO_VeCANR_b_IDCM_Wakeup_HCP_FD11TO
        (&FA_out_n0);

VeCANR_b_IDCM_Wakeup_HCP_FD11TO_CR2B_FUNC_ac_Test_1 = FA_out_n0;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1039>/Chart' */
    if (FA_out_n0)
    {
        /* Transition: '<S1042>:4' */
        if (rtb_RelationalOperator1)
        {
            /* Transition: '<S1042>:6' */
            /* Transition: '<S1042>:25' */
            /* Call Fsft */
            VeCANR_y_IDCM_Wakeup_HCP_FD11_CallStatus = 2U;

            /* Outputs for Function Call SubSystem: '<S1038>/Fsft' */
            /* FunctionCaller: '<S1043>/Function Caller' */
            /* Event: '<S1042>:39' */
            Rte_Call_FsftIDCR_b_IDCM_Wakeup_HCP_FsftIDCR_b_IDCM_Wakeup_HCP();

            /* End of Outputs for SubSystem: '<S1038>/Fsft' */
            /* Transition: '<S1042>:29' */
        }
        else
        {
            /* Transition: '<S1042>:30' */
            /* Call Tmot */
            VeCANR_y_IDCM_Wakeup_HCP_FD11_CallStatus = 3U;

            /* Event: '<S1042>:40' */
        }

        /* Transition: '<S1042>:36' */
        /* Transition: '<S1042>:23' */
    }
    else
    {
        /* Transition: '<S1042>:9' */
        if (((sint32)rtb_TmpSignalConversionAtVeCA_e) == 133)
        {
            /* Transition: '<S1042>:33' */
            /* Transition: '<S1042>:35' */
            /* Call Nothing */
            VeCANR_y_IDCM_Wakeup_HCP_FD11_CallStatus = 4U;

            /* Transition: '<S1042>:23' */
        }
        else
        {
            /* Transition: '<S1042>:46' */
            /* Transition: '<S1042>:37' */
            /* Call Poke */
            VeCANR_y_IDCM_Wakeup_HCP_FD11_CallStatus = 1U;

            /* Outputs for Function Call SubSystem: '<S1038>/Poke' */
            /* FunctionCaller: '<S1044>/Function Caller' incorporates:
             *  Constant: '<S1044>/Constant'
             */
            /* Event: '<S1042>:38' */
            Rte_Call_PokeIDCR_b_IDCM_Wakeup_HCP_PokeIDCR_b_IDCM_Wakeup_HCP
                (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCANR_b_I, false);

            /* End of Outputs for SubSystem: '<S1038>/Poke' */
        }
    }

    /* End of Chart: '<S1039>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_DC_Isoln_Dsbl_Cmd_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_DC_Isoln_Dsbl_Cmd_ErrSts'
     */
    /* Transition: '<S1042>:19' */
    rtb_TmpSignalConversionAtVeC_l1 = Rte_Read_VeCRDB_b_DC_Isoln_Dsbl_Cmd_Value(
        &CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_D);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_DC_Isoln_Dsbl_Cmd_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1083>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_DC_Isoln_Dsbl_Cmd_SigSts_Value(&tmpRead_41);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1080>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_41) & 3U) != 0U)
    {
        /* Transition: '<S1083>:100' */
        /* Transition: '<S1083>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1083>:104' */
        /*  MM */
        if ((((uint32)tmpRead_41) & 4U) != 0U)
        {
            /* Transition: '<S1083>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1083>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1083>:110' */
                /* Call Tmot */
                VeCRDB_y_DC_Isoln_Dsbl_Cmd_CallStatus = 3U;

                /* Event: '<S1083>:40' */
                /* Transition: '<S1083>:115' */
                /* Transition: '<S1083>:114' */
            }
        }
        else
        {
            /* Transition: '<S1083>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_l1) == 133)
            {
                /* Transition: '<S1083>:95' */
                /* Transition: '<S1083>:116' */
                /* Call Nothing */
                VeCRDB_y_DC_Isoln_Dsbl_Cmd_CallStatus = 4U;

                /* Transition: '<S1083>:114' */
            }
            else
            {
                /* Transition: '<S1083>:120' */
                /* Transition: '<S1083>:117' */
                /* Call Poke */
                VeCRDB_y_DC_Isoln_Dsbl_Cmd_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1045>/Poke' */
                /* FunctionCaller: '<S1085>/Function Caller' incorporates:
                 *  Constant: '<S1085>/Constant'
                 */
                /* Event: '<S1083>:38' */
                Rte_Call_PokeIDCR_b_DC_Isolation_Disable_Cmd_PokeIDCR_b_DC_Isolation_Disable_Cmd
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_D, false);

                /* End of Outputs for SubSystem: '<S1045>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1083>:111' */
        /* Call Fsft */
        VeCRDB_y_DC_Isoln_Dsbl_Cmd_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1045>/Fsft' */
        /* FunctionCaller: '<S1084>/Function Caller' */
        /* Event: '<S1083>:39' */
        Rte_Call_FsftIDCR_b_DC_Isolation_Disable_Cmd_FsftIDCR_b_DC_Isolation_Disable_Cmd
            ();

        /* End of Outputs for SubSystem: '<S1045>/Fsft' */
        /* Transition: '<S1083>:113' */
        /* Transition: '<S1083>:115' */
        /* Transition: '<S1083>:114' */
    }

    /* End of Chart: '<S1080>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_DC_TimeOut_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_DC_TimeOut_ErrSts'
     */
    /* Transition: '<S1083>:107' */
    rtb_TmpSignalConversionAtVeC_cl = Rte_Read_VeCRDB_b_DC_TimeOut_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__nv);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_DC_TimeOut_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1088>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_DC_TimeOut_SigSts_Value(&tmpRead_42);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1086>/Chart' */
    if ((((uint32)tmpRead_42) & 3U) != 0U)
    {
        /* Transition: '<S1088>:100' */
        /* Transition: '<S1088>:103' */
        /* Transition: '<S1088>:111' */
        /* Call Fsft */
        VeCRDB_y_DC_TimeOut_CallStatus = 2U;

        /* Event: '<S1088>:39' */
        /* Transition: '<S1088>:113' */
        /* Transition: '<S1088>:115' */
        /* Transition: '<S1088>:114' */
    }
    else
    {
        /* Transition: '<S1088>:104' */
        /*  MM */
        if ((((uint32)tmpRead_42) & 4U) != 0U)
        {
            /* Transition: '<S1088>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1088>:88' */
                /* Transition: '<S1088>:111' */
                /* Call Fsft */
                VeCRDB_y_DC_TimeOut_CallStatus = 2U;

                /* Event: '<S1088>:39' */
                /* Transition: '<S1088>:113' */
                /* Transition: '<S1088>:115' */
                /* Transition: '<S1088>:114' */
            }
            else
            {
                /* Transition: '<S1088>:110' */
                /* Call Tmot */
                VeCRDB_y_DC_TimeOut_CallStatus = 3U;

                /* Event: '<S1088>:40' */
                /* Transition: '<S1088>:115' */
                /* Transition: '<S1088>:114' */
            }
        }
        else
        {
            /* Transition: '<S1088>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_cl) == 133)
            {
                /* Transition: '<S1088>:95' */
                /* Transition: '<S1088>:116' */
                /* Call Nothing */
                VeCRDB_y_DC_TimeOut_CallStatus = 4U;

                /* Transition: '<S1088>:114' */
            }
            else
            {
                /* Transition: '<S1088>:120' */
                /* Transition: '<S1088>:117' */
                /* Call Poke */
                VeCRDB_y_DC_TimeOut_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1046>/Poke' */
                /* FunctionCaller: '<S1089>/Function Caller' */
                /* Event: '<S1088>:38' */
                Rte_Call_PokeIDCR_b_DC_TimeOut_PokeIDCR_b_DC_TimeOut
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__nv);

                /* End of Outputs for SubSystem: '<S1046>/Poke' */
            }
        }
    }

    /* End of Chart: '<S1086>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_EVSE_Acptd_Prtcl_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_EVSE_Acptd_Prtcl_ErrSts'
     */
    /* Transition: '<S1088>:107' */
    rtb_TmpSignalConversionAtVeC_k0 = Rte_Read_VeCRDB_d_EVSE_Acptd_Prtcl_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_d_E);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_EVSE_Acptd_Prtcl_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1093>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_EVSE_Acptd_Prtcl_SigSts_Value(&tmpRead_43);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1090>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_43) & 3U) != 0U)
    {
        /* Transition: '<S1093>:100' */
        /* Transition: '<S1093>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1093>:104' */
        /*  MM */
        if ((((uint32)tmpRead_43) & 4U) != 0U)
        {
            /* Transition: '<S1093>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1093>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1093>:110' */
                /* Call Tmot */
                VeCRDB_y_EVSE_Acptd_Prtcl_CallStatus = 3U;

                /* Event: '<S1093>:40' */
                /* Transition: '<S1093>:115' */
                /* Transition: '<S1093>:114' */
            }
        }
        else
        {
            /* Transition: '<S1093>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_k0) == 133)
            {
                /* Transition: '<S1093>:95' */
                /* Transition: '<S1093>:116' */
                /* Call Nothing */
                VeCRDB_y_EVSE_Acptd_Prtcl_CallStatus = 4U;

                /* Transition: '<S1093>:114' */
            }
            else
            {
                /* Transition: '<S1093>:120' */
                /* Transition: '<S1093>:117' */
                /* Call Poke */
                VeCRDB_y_EVSE_Acptd_Prtcl_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1047>/Poke' */
                /* FunctionCaller: '<S1095>/Function Caller' incorporates:
                 *  Constant: '<S1095>/Constant'
                 */
                /* Event: '<S1093>:38' */
                Rte_Call_PokeIDCR_d_EVSE_Accepted_Protocol_PokeIDCR_d_EVSE_Accepted_Protocol
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_d_E, false);

                /* End of Outputs for SubSystem: '<S1047>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1093>:111' */
        /* Call Fsft */
        VeCRDB_y_EVSE_Acptd_Prtcl_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1047>/Fsft' */
        /* FunctionCaller: '<S1094>/Function Caller' */
        /* Event: '<S1093>:39' */
        Rte_Call_FsftIDCR_d_EVSE_Accepted_Protocol_FsftIDCR_d_EVSE_Accepted_Protocol
            ();

        /* End of Outputs for SubSystem: '<S1047>/Fsft' */
        /* Transition: '<S1093>:113' */
        /* Transition: '<S1093>:115' */
        /* Transition: '<S1093>:114' */
    }

    /* End of Chart: '<S1090>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_EVSE_FreeService_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_EVSE_FreeService_ErrSts'
     */
    /* Transition: '<S1093>:107' */
    rtb_TmpSignalConversionAtVeC_bn = Rte_Read_VeCRDB_b_EVSE_FreeService_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__g0);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_EVSE_FreeService_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1098>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_EVSE_FreeService_SigSts_Value(&tmpRead_44);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1096>/Chart' */
    if ((((uint32)tmpRead_44) & 3U) != 0U)
    {
        /* Transition: '<S1098>:100' */
        /* Transition: '<S1098>:103' */
        /* Transition: '<S1098>:111' */
        /* Call Fsft */
        VeCRDB_y_EVSE_FreeService_CallStatus = 2U;

        /* Event: '<S1098>:39' */
        /* Transition: '<S1098>:113' */
        /* Transition: '<S1098>:115' */
        /* Transition: '<S1098>:114' */
    }
    else
    {
        /* Transition: '<S1098>:104' */
        /*  MM */
        if ((((uint32)tmpRead_44) & 4U) != 0U)
        {
            /* Transition: '<S1098>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1098>:88' */
                /* Transition: '<S1098>:111' */
                /* Call Fsft */
                VeCRDB_y_EVSE_FreeService_CallStatus = 2U;

                /* Event: '<S1098>:39' */
                /* Transition: '<S1098>:113' */
                /* Transition: '<S1098>:115' */
                /* Transition: '<S1098>:114' */
            }
            else
            {
                /* Transition: '<S1098>:110' */
                /* Call Tmot */
                VeCRDB_y_EVSE_FreeService_CallStatus = 3U;

                /* Event: '<S1098>:40' */
                /* Transition: '<S1098>:115' */
                /* Transition: '<S1098>:114' */
            }
        }
        else
        {
            /* Transition: '<S1098>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_bn) == 133)
            {
                /* Transition: '<S1098>:95' */
                /* Transition: '<S1098>:116' */
                /* Call Nothing */
                VeCRDB_y_EVSE_FreeService_CallStatus = 4U;

                /* Transition: '<S1098>:114' */
            }
            else
            {
                /* Transition: '<S1098>:120' */
                /* Transition: '<S1098>:117' */
                /* Call Poke */
                VeCRDB_y_EVSE_FreeService_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1048>/Poke' */
                /* FunctionCaller: '<S1099>/Function Caller' */
                /* Event: '<S1098>:38' */
                Rte_Call_PokeIDCR_b_EVSE_FreeService_PokeIDCR_b_EVSE_FreeService
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__g0);

                /* End of Outputs for SubSystem: '<S1048>/Poke' */
            }
        }
    }

    /* End of Chart: '<S1096>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_EVSE_IsolationSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_EVSE_IsolationSts_ErrSts'
     */
    /* Transition: '<S1098>:107' */
    rtb_TmpSignalConversionAtVeC_lt = Rte_Read_VeCRDB_y_EVSE_IsolationSts_Value(
        &CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_f);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_EVSE_IsolationSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1103>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_EVSE_IsolationSts_SigSts_Value(&tmpRead_45);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1100>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_45) & 3U) != 0U)
    {
        /* Transition: '<S1103>:100' */
        /* Transition: '<S1103>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1103>:104' */
        /*  MM */
        if ((((uint32)tmpRead_45) & 4U) != 0U)
        {
            /* Transition: '<S1103>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1103>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1103>:110' */
                /* Call Tmot */
                VeCRDB_y_EVSE_IsolationSts_CallStatus = 3U;

                /* Event: '<S1103>:40' */
                /* Transition: '<S1103>:115' */
                /* Transition: '<S1103>:114' */
            }
        }
        else
        {
            /* Transition: '<S1103>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_lt) == 133)
            {
                /* Transition: '<S1103>:95' */
                /* Transition: '<S1103>:116' */
                /* Call Nothing */
                VeCRDB_y_EVSE_IsolationSts_CallStatus = 4U;

                /* Transition: '<S1103>:114' */
            }
            else
            {
                /* Transition: '<S1103>:120' */
                if ((((uint32)tmpRead_45) & 8U) != 0U)
                {
                    /* Transition: '<S1103>:122' */
                    /* Transition: '<S1103>:125' */
                    FA_out_n0 = true;

                    /* Transition: '<S1103>:126' */
                }
                else
                {
                    /* Transition: '<S1103>:124' */
                    FA_out_n0 = false;
                }

                /* Transition: '<S1103>:117' */
                /* Call Poke */
                VeCRDB_y_EVSE_IsolationSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1049>/Poke' */
                /* FunctionCaller: '<S1105>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S1105>/Data Type Conversion'
                 */
                /* Event: '<S1103>:38' */
                Rte_Call_PokeIDCR_e_EVSEIsolSts_PokeIDCR_e_EVSEIsolSts((sint16)
                    CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_f, FA_out_n0);

                /* End of Outputs for SubSystem: '<S1049>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1103>:111' */
        /* Call Fsft */
        VeCRDB_y_EVSE_IsolationSts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1049>/Fsft' */
        /* FunctionCaller: '<S1104>/Function Caller' */
        /* Event: '<S1103>:39' */
        Rte_Call_FsftIDCR_b_EVSEIsolSts_FsftIDCR_b_EVSEIsolSts();

        /* End of Outputs for SubSystem: '<S1049>/Fsft' */
        /* Transition: '<S1103>:113' */
        /* Transition: '<S1103>:115' */
        /* Transition: '<S1103>:114' */
    }

    /* End of Chart: '<S1100>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_EVSE_Notification_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_EVSE_Notification_ErrSts'
     */
    /* Transition: '<S1103>:107' */
    rtb_TmpSignalConversionAtVeC_c4 = Rte_Read_VeCRDB_y_EVSE_Notification_Value(
        &CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__jx);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_EVSE_Notification_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1109>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_EVSE_Notification_SigSts_Value(&tmpRead_46);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1106>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_46) & 3U) != 0U)
    {
        /* Transition: '<S1109>:100' */
        /* Transition: '<S1109>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1109>:104' */
        /*  MM */
        if ((((uint32)tmpRead_46) & 4U) != 0U)
        {
            /* Transition: '<S1109>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1109>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1109>:110' */
                /* Call Tmot */
                VeCRDB_y_EVSE_Notification_CallStatus = 3U;

                /* Event: '<S1109>:40' */
                /* Transition: '<S1109>:115' */
                /* Transition: '<S1109>:114' */
            }
        }
        else
        {
            /* Transition: '<S1109>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_c4) == 133)
            {
                /* Transition: '<S1109>:95' */
                /* Transition: '<S1109>:116' */
                /* Call Nothing */
                VeCRDB_y_EVSE_Notification_CallStatus = 4U;

                /* Transition: '<S1109>:114' */
            }
            else
            {
                /* Transition: '<S1109>:120' */
                /* Transition: '<S1109>:117' */
                /* Call Poke */
                VeCRDB_y_EVSE_Notification_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1050>/Poke' */
                /* FunctionCaller: '<S1111>/Function Caller' */
                /* Event: '<S1109>:38' */
                Rte_Call_PokeIDCR_e_EVSE_Notification_PokeIDCR_e_EVSE_Notification
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__jx);

                /* End of Outputs for SubSystem: '<S1050>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1109>:111' */
        /* Call Fsft */
        VeCRDB_y_EVSE_Notification_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1050>/Fsft' */
        /* FunctionCaller: '<S1110>/Function Caller' */
        /* Event: '<S1109>:39' */
        Rte_Call_FsftIDCR_e_EVSE_Notification_FsftIDCR_e_EVSE_Notification();

        /* End of Outputs for SubSystem: '<S1050>/Fsft' */
        /* Transition: '<S1109>:113' */
        /* Transition: '<S1109>:115' */
        /* Transition: '<S1109>:114' */
    }

    /* End of Chart: '<S1106>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_EVSEOfrdEgyTrfTyp_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_EVSEOfrdEgyTrfTyp_ErrSts'
     */
    /* Transition: '<S1109>:107' */
    rtb_TmpSignalConversionAtVeC_ct = Rte_Read_VeCRDB_y_EVSEOfrdEgyTrfTyp_Value(
        &CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__p5);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_EVSEOfrdEgyTrfTyp_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1115>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_EVSEOfrdEgyTrfTyp_SigSts_Value(&tmpRead_47);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1112>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_47) & 3U) != 0U)
    {
        /* Transition: '<S1115>:100' */
        /* Transition: '<S1115>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1115>:104' */
        /*  MM */
        if ((((uint32)tmpRead_47) & 4U) != 0U)
        {
            /* Transition: '<S1115>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1115>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1115>:110' */
                /* Call Tmot */
                VeCRDB_y_EVSEOfrdEgyTrfTyp_CallStatus = 3U;

                /* Event: '<S1115>:40' */
                /* Transition: '<S1115>:115' */
                /* Transition: '<S1115>:114' */
            }
        }
        else
        {
            /* Transition: '<S1115>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ct) == 133)
            {
                /* Transition: '<S1115>:95' */
                /* Transition: '<S1115>:116' */
                /* Call Nothing */
                VeCRDB_y_EVSEOfrdEgyTrfTyp_CallStatus = 4U;

                /* Transition: '<S1115>:114' */
            }
            else
            {
                /* Transition: '<S1115>:120' */
                /* Transition: '<S1115>:117' */
                /* Call Poke */
                VeCRDB_y_EVSEOfrdEgyTrfTyp_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1051>/Poke' */
                /* FunctionCaller: '<S1117>/Function Caller' */
                /* Event: '<S1115>:38' */
                Rte_Call_PokeIDCR_e_OffrdEnrgyTxType_PokeIDCR_e_OffrdEnrgyTxType
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__p5);

                /* End of Outputs for SubSystem: '<S1051>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1115>:111' */
        /* Call Fsft */
        VeCRDB_y_EVSEOfrdEgyTrfTyp_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1051>/Fsft' */
        /* FunctionCaller: '<S1116>/Function Caller' */
        /* Event: '<S1115>:39' */
        Rte_Call_FsftIDCR_b_OffrdEnrgyTxType_FsftIDCR_b_OffrdEnrgyTxType();

        /* End of Outputs for SubSystem: '<S1051>/Fsft' */
        /* Transition: '<S1115>:113' */
        /* Transition: '<S1115>:115' */
        /* Transition: '<S1115>:114' */
    }

    /* End of Chart: '<S1112>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_EVSE_OfdPymtCntct_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_EVSE_OfdPymtCntct_ErrSts'
     */
    /* Transition: '<S1115>:107' */
    rtb_TmpSignalConversionAtVeC_ne = Rte_Read_VeCRDB_b_EVSE_OfdPymtCntct_Value(
        &CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_l);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_EVSE_OfdPymtCntct_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1120>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_EVSE_OfdPymtCntct_SigSts_Value(&tmpRead_48);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1118>/Chart' */
    if ((((uint32)tmpRead_48) & 3U) != 0U)
    {
        /* Transition: '<S1120>:100' */
        /* Transition: '<S1120>:103' */
        /* Transition: '<S1120>:111' */
        /* Call Fsft */
        VeCRDB_y_EVSE_OfdPymtCntct_CallStatus = 2U;

        /* Event: '<S1120>:39' */
        /* Transition: '<S1120>:113' */
        /* Transition: '<S1120>:115' */
        /* Transition: '<S1120>:114' */
    }
    else
    {
        /* Transition: '<S1120>:104' */
        /*  MM */
        if ((((uint32)tmpRead_48) & 4U) != 0U)
        {
            /* Transition: '<S1120>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1120>:88' */
                /* Transition: '<S1120>:111' */
                /* Call Fsft */
                VeCRDB_y_EVSE_OfdPymtCntct_CallStatus = 2U;

                /* Event: '<S1120>:39' */
                /* Transition: '<S1120>:113' */
                /* Transition: '<S1120>:115' */
                /* Transition: '<S1120>:114' */
            }
            else
            {
                /* Transition: '<S1120>:110' */
                /* Call Tmot */
                VeCRDB_y_EVSE_OfdPymtCntct_CallStatus = 3U;

                /* Event: '<S1120>:40' */
                /* Transition: '<S1120>:115' */
                /* Transition: '<S1120>:114' */
            }
        }
        else
        {
            /* Transition: '<S1120>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ne) == 133)
            {
                /* Transition: '<S1120>:95' */
                /* Transition: '<S1120>:116' */
                /* Call Nothing */
                VeCRDB_y_EVSE_OfdPymtCntct_CallStatus = 4U;

                /* Transition: '<S1120>:114' */
            }
            else
            {
                /* Transition: '<S1120>:120' */
                /* Transition: '<S1120>:117' */
                /* Call Poke */
                VeCRDB_y_EVSE_OfdPymtCntct_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1052>/Poke' */
                /* FunctionCaller: '<S1121>/Function Caller' */
                /* Event: '<S1120>:38' */
                Rte_Call_PokeIDCR_b_EVSE_OfferedPaymentContract_PokeIDCR_b_EVSE_OfferedPaymentContract
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_l);

                /* End of Outputs for SubSystem: '<S1052>/Poke' */
            }
        }
    }

    /* End of Chart: '<S1118>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_EVSE_OfrdPymntEIM_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_EVSE_OfrdPymntEIM_ErrSts'
     */
    /* Transition: '<S1120>:107' */
    rtb_TmpSignalConversionAtVe_kk0 = Rte_Read_VeCRDB_b_EVSE_OfrdPymntEIM_Value(
        &CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_j);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_EVSE_OfrdPymntEIM_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1124>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_EVSE_OfrdPymntEIM_SigSts_Value(&tmpRead_49);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1122>/Chart' */
    if ((((uint32)tmpRead_49) & 3U) != 0U)
    {
        /* Transition: '<S1124>:100' */
        /* Transition: '<S1124>:103' */
        /* Transition: '<S1124>:111' */
        /* Call Fsft */
        VeCRDB_y_EVSE_OfrdPymntEIM_CallStatus = 2U;

        /* Event: '<S1124>:39' */
        /* Transition: '<S1124>:113' */
        /* Transition: '<S1124>:115' */
        /* Transition: '<S1124>:114' */
    }
    else
    {
        /* Transition: '<S1124>:104' */
        /*  MM */
        if ((((uint32)tmpRead_49) & 4U) != 0U)
        {
            /* Transition: '<S1124>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1124>:88' */
                /* Transition: '<S1124>:111' */
                /* Call Fsft */
                VeCRDB_y_EVSE_OfrdPymntEIM_CallStatus = 2U;

                /* Event: '<S1124>:39' */
                /* Transition: '<S1124>:113' */
                /* Transition: '<S1124>:115' */
                /* Transition: '<S1124>:114' */
            }
            else
            {
                /* Transition: '<S1124>:110' */
                /* Call Tmot */
                VeCRDB_y_EVSE_OfrdPymntEIM_CallStatus = 3U;

                /* Event: '<S1124>:40' */
                /* Transition: '<S1124>:115' */
                /* Transition: '<S1124>:114' */
            }
        }
        else
        {
            /* Transition: '<S1124>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_kk0) == 133)
            {
                /* Transition: '<S1124>:95' */
                /* Transition: '<S1124>:116' */
                /* Call Nothing */
                VeCRDB_y_EVSE_OfrdPymntEIM_CallStatus = 4U;

                /* Transition: '<S1124>:114' */
            }
            else
            {
                /* Transition: '<S1124>:120' */
                /* Transition: '<S1124>:117' */
                /* Call Poke */
                VeCRDB_y_EVSE_OfrdPymntEIM_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1053>/Poke' */
                /* FunctionCaller: '<S1125>/Function Caller' */
                /* Event: '<S1124>:38' */
                Rte_Call_PokeIDCR_b_EVSE_OfferedPaymentEIM_PokeIDCR_b_EVSE_OfferedPaymentEIM
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_j);

                /* End of Outputs for SubSystem: '<S1053>/Poke' */
            }
        }
    }

    /* End of Chart: '<S1122>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_EVSE_OfrdPmtOptn_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_EVSE_OfrdPmtOptn_ErrSts'
     */
    /* Transition: '<S1124>:107' */
    rtb_TmpSignalConversionAtVeC_jc = Rte_Read_VeCRDB_y_EVSE_OfrdPmtOptn_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__bs);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_EVSE_OfrdPmtOptn_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1129>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_EVSE_OfrdPmtOptn_SigSts_Value(&tmpRead_4a);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1126>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_4a) & 3U) != 0U)
    {
        /* Transition: '<S1129>:100' */
        /* Transition: '<S1129>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1129>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4a) & 4U) != 0U)
        {
            /* Transition: '<S1129>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1129>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1129>:110' */
                /* Call Tmot */
                VeCRDB_y_EVSE_OfrdPmtOptn_CallStatus = 3U;

                /* Event: '<S1129>:40' */
                /* Transition: '<S1129>:115' */
                /* Transition: '<S1129>:114' */
            }
        }
        else
        {
            /* Transition: '<S1129>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_jc) == 133)
            {
                /* Transition: '<S1129>:95' */
                /* Transition: '<S1129>:116' */
                /* Call Nothing */
                VeCRDB_y_EVSE_OfrdPmtOptn_CallStatus = 4U;

                /* Transition: '<S1129>:114' */
            }
            else
            {
                /* Transition: '<S1129>:120' */
                /* Transition: '<S1129>:117' */
                /* Call Poke */
                VeCRDB_y_EVSE_OfrdPmtOptn_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1054>/Poke' */
                /* FunctionCaller: '<S1131>/Function Caller' */
                /* Event: '<S1129>:38' */
                Rte_Call_PokeIDCR_e_OffrdPayOptn_PokeIDCR_e_OffrdPayOptn
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__bs);

                /* End of Outputs for SubSystem: '<S1054>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1129>:111' */
        /* Call Fsft */
        VeCRDB_y_EVSE_OfrdPmtOptn_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1054>/Fsft' */
        /* FunctionCaller: '<S1130>/Function Caller' */
        /* Event: '<S1129>:39' */
        Rte_Call_FsftIDCR_b_OffrdPayOptn_FsftIDCR_b_OffrdPayOptn();

        /* End of Outputs for SubSystem: '<S1054>/Fsft' */
        /* Transition: '<S1129>:113' */
        /* Transition: '<S1129>:115' */
        /* Transition: '<S1129>:114' */
    }

    /* End of Chart: '<S1126>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_EVSE_OfrdServ_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_EVSE_OfrdServ_ErrSts'
     */
    /* Transition: '<S1129>:107' */
    rtb_TmpSignalConversionAtVeC_i2 = Rte_Read_VeCRDB_y_EVSE_OfrdServ_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__ig);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_EVSE_OfrdServ_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1135>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_EVSE_OfrdServ_SigSts_Value(&tmpRead_4b);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1132>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_4b) & 3U) != 0U)
    {
        /* Transition: '<S1135>:100' */
        /* Transition: '<S1135>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1135>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4b) & 4U) != 0U)
        {
            /* Transition: '<S1135>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1135>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1135>:110' */
                /* Call Tmot */
                VeCRDB_y_EVSE_OfrdServ_CallStatus = 3U;

                /* Event: '<S1135>:40' */
                /* Transition: '<S1135>:115' */
                /* Transition: '<S1135>:114' */
            }
        }
        else
        {
            /* Transition: '<S1135>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_i2) == 133)
            {
                /* Transition: '<S1135>:95' */
                /* Transition: '<S1135>:116' */
                /* Call Nothing */
                VeCRDB_y_EVSE_OfrdServ_CallStatus = 4U;

                /* Transition: '<S1135>:114' */
            }
            else
            {
                /* Transition: '<S1135>:120' */
                /* Transition: '<S1135>:117' */
                /* Call Poke */
                VeCRDB_y_EVSE_OfrdServ_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1055>/Poke' */
                /* FunctionCaller: '<S1137>/Function Caller' incorporates:
                 *  Constant: '<S1137>/Constant'
                 */
                /* Event: '<S1135>:38' */
                Rte_Call_PokeIDCR_e_EVSE_OfferedService_PokeIDCR_e_EVSE_OfferedService
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__ig, false);

                /* End of Outputs for SubSystem: '<S1055>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1135>:111' */
        /* Call Fsft */
        VeCRDB_y_EVSE_OfrdServ_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1055>/Fsft' */
        /* FunctionCaller: '<S1136>/Function Caller' */
        /* Event: '<S1135>:39' */
        Rte_Call_FsftIDCR_e_EVSE_OfferedService_FsftIDCR_e_EVSE_OfferedService();

        /* End of Outputs for SubSystem: '<S1055>/Fsft' */
        /* Transition: '<S1135>:113' */
        /* Transition: '<S1135>:115' */
        /* Transition: '<S1135>:114' */
    }

    /* End of Chart: '<S1132>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_EVSE_Srvc2Crtfct_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_EVSE_Srvc2Crtfct_ErrSts'
     */
    /* Transition: '<S1135>:107' */
    rtb_TmpSignalConversionAtVeC_ay = Rte_Read_VeCRDB_b_EVSE_Srvc2Crtfct_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__o4);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_EVSE_Srvc2Crtfct_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1140>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_EVSE_Srvc2Crtfct_SigSts_Value(&tmpRead_4c);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1138>/Chart' */
    if ((((uint32)tmpRead_4c) & 3U) != 0U)
    {
        /* Transition: '<S1140>:100' */
        /* Transition: '<S1140>:103' */
        /* Transition: '<S1140>:111' */
        /* Call Fsft */
        VeCRDB_y_EVSE_Srvc2Crtfct_CallStatus = 2U;

        /* Event: '<S1140>:39' */
        /* Transition: '<S1140>:113' */
        /* Transition: '<S1140>:115' */
        /* Transition: '<S1140>:114' */
    }
    else
    {
        /* Transition: '<S1140>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4c) & 4U) != 0U)
        {
            /* Transition: '<S1140>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1140>:88' */
                /* Transition: '<S1140>:111' */
                /* Call Fsft */
                VeCRDB_y_EVSE_Srvc2Crtfct_CallStatus = 2U;

                /* Event: '<S1140>:39' */
                /* Transition: '<S1140>:113' */
                /* Transition: '<S1140>:115' */
                /* Transition: '<S1140>:114' */
            }
            else
            {
                /* Transition: '<S1140>:110' */
                /* Call Tmot */
                VeCRDB_y_EVSE_Srvc2Crtfct_CallStatus = 3U;

                /* Event: '<S1140>:40' */
                /* Transition: '<S1140>:115' */
                /* Transition: '<S1140>:114' */
            }
        }
        else
        {
            /* Transition: '<S1140>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ay) == 133)
            {
                /* Transition: '<S1140>:95' */
                /* Transition: '<S1140>:116' */
                /* Call Nothing */
                VeCRDB_y_EVSE_Srvc2Crtfct_CallStatus = 4U;

                /* Transition: '<S1140>:114' */
            }
            else
            {
                /* Transition: '<S1140>:120' */
                /* Transition: '<S1140>:117' */
                /* Call Poke */
                VeCRDB_y_EVSE_Srvc2Crtfct_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1056>/Poke' */
                /* FunctionCaller: '<S1141>/Function Caller' */
                /* Event: '<S1140>:38' */
                Rte_Call_PokeIDCR_b_EVSE_Service2_Certificate_PokeIDCR_b_EVSE_Service2_Certificate
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__o4);

                /* End of Outputs for SubSystem: '<S1056>/Poke' */
            }
        }
    }

    /* End of Chart: '<S1138>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_EVSE_ServiceId_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_EVSE_ServiceId_ErrSts'
     */
    /* Transition: '<S1140>:107' */
    rtb_TmpSignalConversionAtVeC_nu = Rte_Read_VeCRDB_d_EVSE_ServiceId_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_d_j);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_EVSE_ServiceId_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1144>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_EVSE_ServiceId_SigSts_Value(&tmpRead_4d);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1142>/Chart' */
    if ((((uint32)tmpRead_4d) & 3U) != 0U)
    {
        /* Transition: '<S1144>:100' */
        /* Transition: '<S1144>:103' */
        /* Transition: '<S1144>:111' */
        /* Call Fsft */
        VeCRDB_y_EVSE_ServiceId_CallStatus = 2U;

        /* Event: '<S1144>:39' */
        /* Transition: '<S1144>:113' */
        /* Transition: '<S1144>:115' */
        /* Transition: '<S1144>:114' */
    }
    else
    {
        /* Transition: '<S1144>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4d) & 4U) != 0U)
        {
            /* Transition: '<S1144>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1144>:88' */
                /* Transition: '<S1144>:111' */
                /* Call Fsft */
                VeCRDB_y_EVSE_ServiceId_CallStatus = 2U;

                /* Event: '<S1144>:39' */
                /* Transition: '<S1144>:113' */
                /* Transition: '<S1144>:115' */
                /* Transition: '<S1144>:114' */
            }
            else
            {
                /* Transition: '<S1144>:110' */
                /* Call Tmot */
                VeCRDB_y_EVSE_ServiceId_CallStatus = 3U;

                /* Event: '<S1144>:40' */
                /* Transition: '<S1144>:115' */
                /* Transition: '<S1144>:114' */
            }
        }
        else
        {
            /* Transition: '<S1144>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_nu) == 133)
            {
                /* Transition: '<S1144>:95' */
                /* Transition: '<S1144>:116' */
                /* Call Nothing */
                VeCRDB_y_EVSE_ServiceId_CallStatus = 4U;

                /* Transition: '<S1144>:114' */
            }
            else
            {
                /* Transition: '<S1144>:120' */
                /* Transition: '<S1144>:117' */
                /* Call Poke */
                VeCRDB_y_EVSE_ServiceId_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1057>/Poke' */
                /* FunctionCaller: '<S1145>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S1145>/Data Type Conversion'
                 */
                /* Event: '<S1144>:38' */
                Rte_Call_PokeIDCR_K_Service_ID_PokeIDCR_K_Service_ID((sint16)
                    CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_d_j);

                /* End of Outputs for SubSystem: '<S1057>/Poke' */
            }
        }
    }

    /* End of Chart: '<S1142>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_EVSE_Supportd_DIN_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_EVSE_Supportd_DIN_ErrSts'
     */
    /* Transition: '<S1144>:107' */
    rtb_TmpSignalConversionAtVeC_ld = Rte_Read_VeCRDB_b_EVSE_Supportd_DIN_Value(
        &CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_d);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_EVSE_Supportd_DIN_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1148>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_EVSE_Supportd_DIN_SigSts_Value(&tmpRead_4e);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1146>/Chart' */
    if ((((uint32)tmpRead_4e) & 3U) != 0U)
    {
        /* Transition: '<S1148>:100' */
        /* Transition: '<S1148>:103' */
        /* Transition: '<S1148>:111' */
        /* Call Fsft */
        VeCRDB_y_EVSE_Supportd_DIN_CallStatus = 2U;

        /* Event: '<S1148>:39' */
        /* Transition: '<S1148>:113' */
        /* Transition: '<S1148>:115' */
        /* Transition: '<S1148>:114' */
    }
    else
    {
        /* Transition: '<S1148>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4e) & 4U) != 0U)
        {
            /* Transition: '<S1148>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1148>:88' */
                /* Transition: '<S1148>:111' */
                /* Call Fsft */
                VeCRDB_y_EVSE_Supportd_DIN_CallStatus = 2U;

                /* Event: '<S1148>:39' */
                /* Transition: '<S1148>:113' */
                /* Transition: '<S1148>:115' */
                /* Transition: '<S1148>:114' */
            }
            else
            {
                /* Transition: '<S1148>:110' */
                /* Call Tmot */
                VeCRDB_y_EVSE_Supportd_DIN_CallStatus = 3U;

                /* Event: '<S1148>:40' */
                /* Transition: '<S1148>:115' */
                /* Transition: '<S1148>:114' */
            }
        }
        else
        {
            /* Transition: '<S1148>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ld) == 133)
            {
                /* Transition: '<S1148>:95' */
                /* Transition: '<S1148>:116' */
                /* Call Nothing */
                VeCRDB_y_EVSE_Supportd_DIN_CallStatus = 4U;

                /* Transition: '<S1148>:114' */
            }
            else
            {
                /* Transition: '<S1148>:120' */
                /* Transition: '<S1148>:117' */
                /* Call Poke */
                VeCRDB_y_EVSE_Supportd_DIN_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1058>/Poke' */
                /* FunctionCaller: '<S1149>/Function Caller' */
                /* Event: '<S1148>:38' */
                Rte_Call_PokeIDCR_b_EVSE_Supported_DIN_PokeIDCR_b_EVSE_Supported_DIN
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_d);

                /* End of Outputs for SubSystem: '<S1058>/Poke' */
            }
        }
    }

    /* End of Chart: '<S1146>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_EVSE_Supprtd_ISO1_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_EVSE_Supprtd_ISO1_ErrSts'
     */
    /* Transition: '<S1148>:107' */
    rtb_TmpSignalConversionAtVeC_jb = Rte_Read_VeCRDB_b_EVSE_Supprtd_ISO1_Value(
        &CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__e5);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_EVSE_Supprtd_ISO1_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1152>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_EVSE_Supprtd_ISO1_SigSts_Value(&tmpRead_4f);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1150>/Chart' */
    if ((((uint32)tmpRead_4f) & 3U) != 0U)
    {
        /* Transition: '<S1152>:100' */
        /* Transition: '<S1152>:103' */
        /* Transition: '<S1152>:111' */
        /* Call Fsft */
        VeCRDB_y_EVSE_Supprtd_ISO1_CallStatus = 2U;

        /* Event: '<S1152>:39' */
        /* Transition: '<S1152>:113' */
        /* Transition: '<S1152>:115' */
        /* Transition: '<S1152>:114' */
    }
    else
    {
        /* Transition: '<S1152>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4f) & 4U) != 0U)
        {
            /* Transition: '<S1152>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1152>:88' */
                /* Transition: '<S1152>:111' */
                /* Call Fsft */
                VeCRDB_y_EVSE_Supprtd_ISO1_CallStatus = 2U;

                /* Event: '<S1152>:39' */
                /* Transition: '<S1152>:113' */
                /* Transition: '<S1152>:115' */
                /* Transition: '<S1152>:114' */
            }
            else
            {
                /* Transition: '<S1152>:110' */
                /* Call Tmot */
                VeCRDB_y_EVSE_Supprtd_ISO1_CallStatus = 3U;

                /* Event: '<S1152>:40' */
                /* Transition: '<S1152>:115' */
                /* Transition: '<S1152>:114' */
            }
        }
        else
        {
            /* Transition: '<S1152>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_jb) == 133)
            {
                /* Transition: '<S1152>:95' */
                /* Transition: '<S1152>:116' */
                /* Call Nothing */
                VeCRDB_y_EVSE_Supprtd_ISO1_CallStatus = 4U;

                /* Transition: '<S1152>:114' */
            }
            else
            {
                /* Transition: '<S1152>:120' */
                /* Transition: '<S1152>:117' */
                /* Call Poke */
                VeCRDB_y_EVSE_Supprtd_ISO1_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1059>/Poke' */
                /* FunctionCaller: '<S1153>/Function Caller' */
                /* Event: '<S1152>:38' */
                Rte_Call_PokeIDCR_b_EVSE_Supported_ISO1_PokeIDCR_b_EVSE_Supported_ISO1
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__e5);

                /* End of Outputs for SubSystem: '<S1059>/Poke' */
            }
        }
    }

    /* End of Chart: '<S1150>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_HVCMS_EVSECurRglTl_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_HVCMS_EVSECurRglTl_ErrSts'
     */
    /* Transition: '<S1152>:107' */
    rtb_TmpSignalConversionAtVeC_ae = Rte_Read_VeCRDB_I_HVCMS_EVSECurRglTl_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_I_H);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_HVCMS_EVSECurRglTl_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1157>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_HVCMS_EVSECurRglTl_SigSts_Value(&tmpRead_4g);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1154>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_4g) & 3U) != 0U)
    {
        /* Transition: '<S1157>:100' */
        /* Transition: '<S1157>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1157>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4g) & 4U) != 0U)
        {
            /* Transition: '<S1157>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1157>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1157>:110' */
                /* Call Tmot */
                VeCRDB_y_HVCMS_EVSECurRglTl_CallStatus = 3U;

                /* Event: '<S1157>:40' */
                /* Transition: '<S1157>:115' */
                /* Transition: '<S1157>:114' */
            }
        }
        else
        {
            /* Transition: '<S1157>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ae) == 133)
            {
                /* Transition: '<S1157>:95' */
                /* Transition: '<S1157>:116' */
                /* Call Nothing */
                VeCRDB_y_HVCMS_EVSECurRglTl_CallStatus = 4U;

                /* Transition: '<S1157>:114' */
            }
            else
            {
                /* Transition: '<S1157>:120' */
                if ((((uint32)tmpRead_4g) & 8U) != 0U)
                {
                    /* Transition: '<S1157>:122' */
                    /* Transition: '<S1157>:125' */
                    FA_out_n0 = true;

                    /* Transition: '<S1157>:126' */
                }
                else
                {
                    /* Transition: '<S1157>:124' */
                    FA_out_n0 = false;
                }

                /* Transition: '<S1157>:117' */
                /* Call Poke */
                VeCRDB_y_HVCMS_EVSECurRglTl_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1060>/Poke' */
                /* FunctionCaller: '<S1159>/Function Caller' */
                /* Event: '<S1157>:38' */
                Rte_Call_PokeIDCR_I_EVSECurr_RegTol_PokeIDCR_I_EVSECurr_RegTol
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_I_H, FA_out_n0);

                /* End of Outputs for SubSystem: '<S1060>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1157>:111' */
        /* Call Fsft */
        VeCRDB_y_HVCMS_EVSECurRglTl_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1060>/Fsft' */
        /* FunctionCaller: '<S1158>/Function Caller' */
        /* Event: '<S1157>:39' */
        Rte_Call_FsftIDCR_I_EVSECurr_RegTol_FsftIDCR_I_EVSECurr_RegTol();

        /* End of Outputs for SubSystem: '<S1060>/Fsft' */
        /* Transition: '<S1157>:113' */
        /* Transition: '<S1157>:115' */
        /* Transition: '<S1157>:114' */
    }

    /* End of Chart: '<S1154>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_HVCMS_EVSECurLmAch_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_HVCMS_EVSECurLmAch_ErrSts'
     */
    /* Transition: '<S1157>:107' */
    rtb_TmpSignalConversionAtVeC_hm = Rte_Read_VeCRDB_y_HVCMS_EVSECurLmAch_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_H);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_HVCMS_EVSECurLmAch_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1162>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_HVCMS_EVSECurLmAch_SigSts_Value(&tmpRead_4h);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1160>/Chart' */
    if ((((uint32)tmpRead_4h) & 3U) != 0U)
    {
        /* Transition: '<S1162>:100' */
        /* Transition: '<S1162>:103' */
        /* Transition: '<S1162>:111' */
        /* Call Fsft */
        VeCRDB_y_HVCMS_EVSECurLmAch_CallStatus = 2U;

        /* Event: '<S1162>:39' */
        /* Transition: '<S1162>:113' */
        /* Transition: '<S1162>:115' */
        /* Transition: '<S1162>:114' */
    }
    else
    {
        /* Transition: '<S1162>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4h) & 4U) != 0U)
        {
            /* Transition: '<S1162>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1162>:88' */
                /* Transition: '<S1162>:111' */
                /* Call Fsft */
                VeCRDB_y_HVCMS_EVSECurLmAch_CallStatus = 2U;

                /* Event: '<S1162>:39' */
                /* Transition: '<S1162>:113' */
                /* Transition: '<S1162>:115' */
                /* Transition: '<S1162>:114' */
            }
            else
            {
                /* Transition: '<S1162>:110' */
                /* Call Tmot */
                VeCRDB_y_HVCMS_EVSECurLmAch_CallStatus = 3U;

                /* Event: '<S1162>:40' */
                /* Transition: '<S1162>:115' */
                /* Transition: '<S1162>:114' */
            }
        }
        else
        {
            /* Transition: '<S1162>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_hm) == 133)
            {
                /* Transition: '<S1162>:95' */
                /* Transition: '<S1162>:116' */
                /* Call Nothing */
                VeCRDB_y_HVCMS_EVSECurLmAch_CallStatus = 4U;

                /* Transition: '<S1162>:114' */
            }
            else
            {
                /* Transition: '<S1162>:120' */
                /* Transition: '<S1162>:117' */
                /* Call Poke */
                VeCRDB_y_HVCMS_EVSECurLmAch_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1061>/Poke' */
                /* FunctionCaller: '<S1163>/Function Caller' */
                /* Event: '<S1162>:38' */
                Rte_Call_PokeIDCR_b_EVSECurrLmtAchvd_PokeIDCR_b_EVSECurrLmtAchvd
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_H);

                /* End of Outputs for SubSystem: '<S1061>/Poke' */
            }
        }
    }

    /* End of Chart: '<S1160>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_HVCMS_EVSEMaxCurLm_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_HVCMS_EVSEMaxCurLm_ErrSts'
     */
    /* Transition: '<S1162>:107' */
    rtb_TmpSignalConversionAtVe_mzk = Rte_Read_VeCRDB_I_HVCMS_EVSEMaxCurLm_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_I_a);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_HVCMS_EVSEMaxCurLm_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1167>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_HVCMS_EVSEMaxCurLm_SigSts_Value(&tmpRead_4i);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1164>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_4i) & 3U) != 0U)
    {
        /* Transition: '<S1167>:100' */
        /* Transition: '<S1167>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1167>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4i) & 4U) != 0U)
        {
            /* Transition: '<S1167>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1167>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1167>:110' */
                /* Call Tmot */
                VeCRDB_y_HVCMS_EVSEMaxCurLm_CallStatus = 3U;

                /* Event: '<S1167>:40' */
                /* Transition: '<S1167>:115' */
                /* Transition: '<S1167>:114' */
            }
        }
        else
        {
            /* Transition: '<S1167>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_mzk) == 133)
            {
                /* Transition: '<S1167>:95' */
                /* Transition: '<S1167>:116' */
                /* Call Nothing */
                VeCRDB_y_HVCMS_EVSEMaxCurLm_CallStatus = 4U;

                /* Transition: '<S1167>:114' */
            }
            else
            {
                /* Transition: '<S1167>:120' */
                if ((((uint32)tmpRead_4i) & 8U) != 0U)
                {
                    /* Transition: '<S1167>:122' */
                    /* Transition: '<S1167>:125' */
                    FA_out_n0 = true;

                    /* Transition: '<S1167>:126' */
                }
                else
                {
                    /* Transition: '<S1167>:124' */
                    FA_out_n0 = false;
                }

                /* Transition: '<S1167>:117' */
                /* Call Poke */
                VeCRDB_y_HVCMS_EVSEMaxCurLm_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1062>/Poke' */
                /* FunctionCaller: '<S1169>/Function Caller' */
                /* Event: '<S1167>:38' */
                Rte_Call_PokeIDCR_I_EVSEMaxCurrLmt_PokeIDCR_I_EVSEMaxCurrLmt
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_I_a, FA_out_n0);

                /* End of Outputs for SubSystem: '<S1062>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1167>:111' */
        /* Call Fsft */
        VeCRDB_y_HVCMS_EVSEMaxCurLm_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1062>/Fsft' */
        /* FunctionCaller: '<S1168>/Function Caller' */
        /* Event: '<S1167>:39' */
        Rte_Call_FsftIDCR_I_EVSEMaxCurrLmt_FsftIDCR_I_EVSEMaxCurrLmt();

        /* End of Outputs for SubSystem: '<S1062>/Fsft' */
        /* Transition: '<S1167>:113' */
        /* Transition: '<S1167>:115' */
        /* Transition: '<S1167>:114' */
    }

    /* End of Chart: '<S1164>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_HVCMS_EVSEMaxPwrLm_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_HVCMS_EVSEMaxPwrLm_ErrSts'
     */
    /* Transition: '<S1167>:107' */
    rtb_TmpSignalConversionAtVeC_fo = Rte_Read_VeCRDB_W_HVCMS_EVSEMaxPwrLm_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_W_H);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_HVCMS_EVSEMaxPwrLm_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1173>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_HVCMS_EVSEMaxPwrLm_SigSts_Value(&tmpRead_4j);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1170>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_4j) & 3U) != 0U)
    {
        /* Transition: '<S1173>:100' */
        /* Transition: '<S1173>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1173>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4j) & 4U) != 0U)
        {
            /* Transition: '<S1173>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1173>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1173>:110' */
                /* Call Tmot */
                VeCRDB_y_HVCMS_EVSEMaxPwrLm_CallStatus = 3U;

                /* Event: '<S1173>:40' */
                /* Transition: '<S1173>:115' */
                /* Transition: '<S1173>:114' */
            }
        }
        else
        {
            /* Transition: '<S1173>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_fo) == 133)
            {
                /* Transition: '<S1173>:95' */
                /* Transition: '<S1173>:116' */
                /* Call Nothing */
                VeCRDB_y_HVCMS_EVSEMaxPwrLm_CallStatus = 4U;

                /* Transition: '<S1173>:114' */
            }
            else
            {
                /* Transition: '<S1173>:120' */
                if ((((uint32)tmpRead_4j) & 8U) != 0U)
                {
                    /* Transition: '<S1173>:122' */
                    /* Transition: '<S1173>:125' */
                    FA_out_n0 = true;

                    /* Transition: '<S1173>:126' */
                }
                else
                {
                    /* Transition: '<S1173>:124' */
                    FA_out_n0 = false;
                }

                /* Transition: '<S1173>:117' */
                /* Call Poke */
                VeCRDB_y_HVCMS_EVSEMaxPwrLm_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1063>/Poke' */
                /* FunctionCaller: '<S1175>/Function Caller' */
                /* Event: '<S1173>:38' */
                Rte_Call_PokeIDCR_P_EVSEMaxPwrLmt_PokeIDCR_P_EVSEMaxPwrLmt
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_W_H, FA_out_n0);

                /* End of Outputs for SubSystem: '<S1063>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1173>:111' */
        /* Call Fsft */
        VeCRDB_y_HVCMS_EVSEMaxPwrLm_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1063>/Fsft' */
        /* FunctionCaller: '<S1174>/Function Caller' */
        /* Event: '<S1173>:39' */
        Rte_Call_FsftIDCR_P_EVSEMaxPwrLmt_FsftIDCR_P_EVSEMaxPwrLmt();

        /* End of Outputs for SubSystem: '<S1063>/Fsft' */
        /* Transition: '<S1173>:113' */
        /* Transition: '<S1173>:115' */
        /* Transition: '<S1173>:114' */
    }

    /* End of Chart: '<S1170>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_HVCMS_EVSEMaxVltLm_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_HVCMS_EVSEMaxVltLm_ErrSts'
     */
    /* Transition: '<S1173>:107' */
    rtb_TmpSignalConversionAtVeC_d3 = Rte_Read_VeCRDB_U_HVCMS_EVSEMaxVltLm_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_U_H);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_HVCMS_EVSEMaxVltLm_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1179>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_HVCMS_EVSEMaxVltLm_SigSts_Value(&tmpRead_4k);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1176>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_4k) & 3U) != 0U)
    {
        /* Transition: '<S1179>:100' */
        /* Transition: '<S1179>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1179>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4k) & 4U) != 0U)
        {
            /* Transition: '<S1179>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1179>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1179>:110' */
                /* Call Tmot */
                VeCRDB_y_HVCMS_EVSEMaxVltLm_CallStatus = 3U;

                /* Event: '<S1179>:40' */
                /* Transition: '<S1179>:115' */
                /* Transition: '<S1179>:114' */
            }
        }
        else
        {
            /* Transition: '<S1179>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_d3) == 133)
            {
                /* Transition: '<S1179>:95' */
                /* Transition: '<S1179>:116' */
                /* Call Nothing */
                VeCRDB_y_HVCMS_EVSEMaxVltLm_CallStatus = 4U;

                /* Transition: '<S1179>:114' */
            }
            else
            {
                /* Transition: '<S1179>:120' */
                if ((((uint32)tmpRead_4k) & 8U) != 0U)
                {
                    /* Transition: '<S1179>:122' */
                    /* Transition: '<S1179>:125' */
                    FA_out_n0 = true;

                    /* Transition: '<S1179>:126' */
                }
                else
                {
                    /* Transition: '<S1179>:124' */
                    FA_out_n0 = false;
                }

                /* Transition: '<S1179>:117' */
                /* Call Poke */
                VeCRDB_y_HVCMS_EVSEMaxVltLm_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1064>/Poke' */
                /* FunctionCaller: '<S1181>/Function Caller' */
                /* Event: '<S1179>:38' */
                Rte_Call_PokeIDCR_U_EVSEMaxVoltLmt_PokeIDCR_U_EVSEMaxVoltLmt
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_U_H, FA_out_n0);

                /* End of Outputs for SubSystem: '<S1064>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1179>:111' */
        /* Call Fsft */
        VeCRDB_y_HVCMS_EVSEMaxVltLm_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1064>/Fsft' */
        /* FunctionCaller: '<S1180>/Function Caller' */
        /* Event: '<S1179>:39' */
        Rte_Call_FsftIDCR_U_EVSEMaxVoltLmt_FsftIDCR_U_EVSEMaxVoltLmt();

        /* End of Outputs for SubSystem: '<S1064>/Fsft' */
        /* Transition: '<S1179>:113' */
        /* Transition: '<S1179>:115' */
        /* Transition: '<S1179>:114' */
    }

    /* End of Chart: '<S1176>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_HVCMS_EVSEMinCurLm_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_HVCMS_EVSEMinCurLm_ErrSts'
     */
    /* Transition: '<S1179>:107' */
    rtb_TmpSignalConversionAtVeC_of = Rte_Read_VeCRDB_I_HVCMS_EVSEMinCurLm_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_I_l);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_HVCMS_EVSEMinCurLm_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1185>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_HVCMS_EVSEMinCurLm_SigSts_Value(&tmpRead_4l);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1182>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_4l) & 3U) != 0U)
    {
        /* Transition: '<S1185>:100' */
        /* Transition: '<S1185>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1185>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4l) & 4U) != 0U)
        {
            /* Transition: '<S1185>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1185>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1185>:110' */
                /* Call Tmot */
                VeCRDB_y_HVCMS_EVSEMinCurLm_CallStatus = 3U;

                /* Event: '<S1185>:40' */
                /* Transition: '<S1185>:115' */
                /* Transition: '<S1185>:114' */
            }
        }
        else
        {
            /* Transition: '<S1185>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_of) == 133)
            {
                /* Transition: '<S1185>:95' */
                /* Transition: '<S1185>:116' */
                /* Call Nothing */
                VeCRDB_y_HVCMS_EVSEMinCurLm_CallStatus = 4U;

                /* Transition: '<S1185>:114' */
            }
            else
            {
                /* Transition: '<S1185>:120' */
                if ((((uint32)tmpRead_4l) & 8U) != 0U)
                {
                    /* Transition: '<S1185>:122' */
                    /* Transition: '<S1185>:125' */
                    FA_out_n0 = true;

                    /* Transition: '<S1185>:126' */
                }
                else
                {
                    /* Transition: '<S1185>:124' */
                    FA_out_n0 = false;
                }

                /* Transition: '<S1185>:117' */
                /* Call Poke */
                VeCRDB_y_HVCMS_EVSEMinCurLm_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1065>/Poke' */
                /* FunctionCaller: '<S1187>/Function Caller' */
                /* Event: '<S1185>:38' */
                Rte_Call_PokeIDCR_I_EVSEMinCurrLmt_PokeIDCR_I_EVSEMinCurrLmt
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_I_l, FA_out_n0);

                /* End of Outputs for SubSystem: '<S1065>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1185>:111' */
        /* Call Fsft */
        VeCRDB_y_HVCMS_EVSEMinCurLm_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1065>/Fsft' */
        /* FunctionCaller: '<S1186>/Function Caller' */
        /* Event: '<S1185>:39' */
        Rte_Call_FsftIDCR_I_EVSEMinCurrLmt_FsftIDCR_I_EVSEMinCurrLmt();

        /* End of Outputs for SubSystem: '<S1065>/Fsft' */
        /* Transition: '<S1185>:113' */
        /* Transition: '<S1185>:115' */
        /* Transition: '<S1185>:114' */
    }

    /* End of Chart: '<S1182>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_HVCMS_EVSEMinVltLm_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_HVCMS_EVSEMinVltLm_ErrSts'
     */
    /* Transition: '<S1185>:107' */
    rtb_TmpSignalConversionAtVe_k4f = Rte_Read_VeCRDB_U_HVCMS_EVSEMinVltLm_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_U_j);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_HVCMS_EVSEMinVltLm_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1191>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_HVCMS_EVSEMinVltLm_SigSts_Value(&tmpRead_4m);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1188>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_4m) & 3U) != 0U)
    {
        /* Transition: '<S1191>:100' */
        /* Transition: '<S1191>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1191>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4m) & 4U) != 0U)
        {
            /* Transition: '<S1191>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1191>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1191>:110' */
                /* Call Tmot */
                VeCRDB_y_HVCMS_EVSEMinVltLm_CallStatus = 3U;

                /* Event: '<S1191>:40' */
                /* Transition: '<S1191>:115' */
                /* Transition: '<S1191>:114' */
            }
        }
        else
        {
            /* Transition: '<S1191>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_k4f) == 133)
            {
                /* Transition: '<S1191>:95' */
                /* Transition: '<S1191>:116' */
                /* Call Nothing */
                VeCRDB_y_HVCMS_EVSEMinVltLm_CallStatus = 4U;

                /* Transition: '<S1191>:114' */
            }
            else
            {
                /* Transition: '<S1191>:120' */
                if ((((uint32)tmpRead_4m) & 8U) != 0U)
                {
                    /* Transition: '<S1191>:122' */
                    /* Transition: '<S1191>:125' */
                    FA_out_n0 = true;

                    /* Transition: '<S1191>:126' */
                }
                else
                {
                    /* Transition: '<S1191>:124' */
                    FA_out_n0 = false;
                }

                /* Transition: '<S1191>:117' */
                /* Call Poke */
                VeCRDB_y_HVCMS_EVSEMinVltLm_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1066>/Poke' */
                /* FunctionCaller: '<S1193>/Function Caller' */
                /* Event: '<S1191>:38' */
                Rte_Call_PokeIDCR_U_EVSEMinVoltLmt_PokeIDCR_U_EVSEMinVoltLmt
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_U_j, FA_out_n0);

                /* End of Outputs for SubSystem: '<S1066>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1191>:111' */
        /* Call Fsft */
        VeCRDB_y_HVCMS_EVSEMinVltLm_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1066>/Fsft' */
        /* FunctionCaller: '<S1192>/Function Caller' */
        /* Event: '<S1191>:39' */
        Rte_Call_FsftIDCR_U_EVSEMinVoltLmt_FsftIDCR_U_EVSEMinVoltLmt();

        /* End of Outputs for SubSystem: '<S1066>/Fsft' */
        /* Transition: '<S1191>:113' */
        /* Transition: '<S1191>:115' */
        /* Transition: '<S1191>:114' */
    }

    /* End of Chart: '<S1188>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_HVCMS_EVSEPkCurRpl_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_HVCMS_EVSEPkCurRpl_ErrSts'
     */
    /* Transition: '<S1191>:107' */
    rtb_TmpSignalConversionAtVeC_ig = Rte_Read_VeCRDB_I_HVCMS_EVSEPkCurRpl_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_I_j);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_HVCMS_EVSEPkCurRpl_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1197>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_HVCMS_EVSEPkCurRpl_SigSts_Value(&tmpRead_4n);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1194>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_4n) & 3U) != 0U)
    {
        /* Transition: '<S1197>:100' */
        /* Transition: '<S1197>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1197>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4n) & 4U) != 0U)
        {
            /* Transition: '<S1197>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1197>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1197>:110' */
                /* Call Tmot */
                VeCRDB_y_HVCMS_EVSEPkCurRpl_CallStatus = 3U;

                /* Event: '<S1197>:40' */
                /* Transition: '<S1197>:115' */
                /* Transition: '<S1197>:114' */
            }
        }
        else
        {
            /* Transition: '<S1197>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ig) == 133)
            {
                /* Transition: '<S1197>:95' */
                /* Transition: '<S1197>:116' */
                /* Call Nothing */
                VeCRDB_y_HVCMS_EVSEPkCurRpl_CallStatus = 4U;

                /* Transition: '<S1197>:114' */
            }
            else
            {
                /* Transition: '<S1197>:120' */
                if ((((uint32)tmpRead_4n) & 8U) != 0U)
                {
                    /* Transition: '<S1197>:122' */
                    /* Transition: '<S1197>:125' */
                    FA_out_n0 = true;

                    /* Transition: '<S1197>:126' */
                }
                else
                {
                    /* Transition: '<S1197>:124' */
                    FA_out_n0 = false;
                }

                /* Transition: '<S1197>:117' */
                /* Call Poke */
                VeCRDB_y_HVCMS_EVSEPkCurRpl_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1067>/Poke' */
                /* FunctionCaller: '<S1199>/Function Caller' */
                /* Event: '<S1197>:38' */
                Rte_Call_PokeIDCR_I_EVSEPeakCurrRip_PokeIDCR_I_EVSEPeakCurrRip
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_I_j, FA_out_n0);

                /* End of Outputs for SubSystem: '<S1067>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1197>:111' */
        /* Call Fsft */
        VeCRDB_y_HVCMS_EVSEPkCurRpl_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1067>/Fsft' */
        /* FunctionCaller: '<S1198>/Function Caller' */
        /* Event: '<S1197>:39' */
        Rte_Call_FsftIDCR_I_EVSEPeakCurrRip_FsftIDCR_I_EVSEPeakCurrRip();

        /* End of Outputs for SubSystem: '<S1067>/Fsft' */
        /* Transition: '<S1197>:113' */
        /* Transition: '<S1197>:115' */
        /* Transition: '<S1197>:114' */
    }

    /* End of Chart: '<S1194>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_HVCMS_EVSEPwrLmAch_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_HVCMS_EVSEPwrLmAch_ErrSts'
     */
    /* Transition: '<S1197>:107' */
    rtb_TmpSignalConversionAtVeC_ab = Rte_Read_VeCRDB_y_HVCMS_EVSEPwrLmAch_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__b1);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_HVCMS_EVSEPwrLmAch_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1202>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_HVCMS_EVSEPwrLmAch_SigSts_Value(&tmpRead_4o);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1200>/Chart' */
    if ((((uint32)tmpRead_4o) & 3U) != 0U)
    {
        /* Transition: '<S1202>:100' */
        /* Transition: '<S1202>:103' */
        /* Transition: '<S1202>:111' */
        /* Call Fsft */
        VeCRDB_y_HVCMS_EVSEPwrLmAch_CallStatus = 2U;

        /* Event: '<S1202>:39' */
        /* Transition: '<S1202>:113' */
        /* Transition: '<S1202>:115' */
        /* Transition: '<S1202>:114' */
    }
    else
    {
        /* Transition: '<S1202>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4o) & 4U) != 0U)
        {
            /* Transition: '<S1202>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1202>:88' */
                /* Transition: '<S1202>:111' */
                /* Call Fsft */
                VeCRDB_y_HVCMS_EVSEPwrLmAch_CallStatus = 2U;

                /* Event: '<S1202>:39' */
                /* Transition: '<S1202>:113' */
                /* Transition: '<S1202>:115' */
                /* Transition: '<S1202>:114' */
            }
            else
            {
                /* Transition: '<S1202>:110' */
                /* Call Tmot */
                VeCRDB_y_HVCMS_EVSEPwrLmAch_CallStatus = 3U;

                /* Event: '<S1202>:40' */
                /* Transition: '<S1202>:115' */
                /* Transition: '<S1202>:114' */
            }
        }
        else
        {
            /* Transition: '<S1202>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ab) == 133)
            {
                /* Transition: '<S1202>:95' */
                /* Transition: '<S1202>:116' */
                /* Call Nothing */
                VeCRDB_y_HVCMS_EVSEPwrLmAch_CallStatus = 4U;

                /* Transition: '<S1202>:114' */
            }
            else
            {
                /* Transition: '<S1202>:120' */
                /* Transition: '<S1202>:117' */
                /* Call Poke */
                VeCRDB_y_HVCMS_EVSEPwrLmAch_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1068>/Poke' */
                /* FunctionCaller: '<S1203>/Function Caller' */
                /* Event: '<S1202>:38' */
                Rte_Call_PokeIDCR_b_EVSEPwrLmtAchvd_PokeIDCR_b_EVSEPwrLmtAchvd
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__b1);

                /* End of Outputs for SubSystem: '<S1068>/Poke' */
            }
        }
    }

    /* End of Chart: '<S1200>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_HVCMS_EVSEPrsntCur_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_HVCMS_EVSEPrsntCur_ErrSts'
     */
    /* Transition: '<S1202>:107' */
    rtb_TmpSignalConversionAtVeC_m1 = Rte_Read_VeCRDB_I_HVCMS_EVSEPrsntCur_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__ft);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_HVCMS_EVSEPrsntCur_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1207>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_HVCMS_EVSEPrsntCur_SigSts_Value(&tmpRead_4p);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1204>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_4p) & 3U) != 0U)
    {
        /* Transition: '<S1207>:100' */
        /* Transition: '<S1207>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1207>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4p) & 4U) != 0U)
        {
            /* Transition: '<S1207>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1207>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1207>:110' */
                /* Call Tmot */
                VeCRDB_y_HVCMS_EVSEPrsntCur_CallStatus = 3U;

                /* Event: '<S1207>:40' */
                /* Transition: '<S1207>:115' */
                /* Transition: '<S1207>:114' */
            }
        }
        else
        {
            /* Transition: '<S1207>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_m1) == 133)
            {
                /* Transition: '<S1207>:95' */
                /* Transition: '<S1207>:116' */
                /* Call Nothing */
                VeCRDB_y_HVCMS_EVSEPrsntCur_CallStatus = 4U;

                /* Transition: '<S1207>:114' */
            }
            else
            {
                /* Transition: '<S1207>:120' */
                if ((((uint32)tmpRead_4p) & 8U) != 0U)
                {
                    /* Transition: '<S1207>:122' */
                    /* Transition: '<S1207>:125' */
                    FA_out_n0 = true;

                    /* Transition: '<S1207>:126' */
                }
                else
                {
                    /* Transition: '<S1207>:124' */
                    FA_out_n0 = false;
                }

                /* Transition: '<S1207>:117' */
                /* Call Poke */
                VeCRDB_y_HVCMS_EVSEPrsntCur_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1069>/Poke' */
                /* FunctionCaller: '<S1209>/Function Caller' */
                /* Event: '<S1207>:38' */
                Rte_Call_PokeIDCR_I_EVSEOutputCurr_PokeIDCR_I_EVSEOutputCurr
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__ft, FA_out_n0);

                /* End of Outputs for SubSystem: '<S1069>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1207>:111' */
        /* Call Fsft */
        VeCRDB_y_HVCMS_EVSEPrsntCur_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1069>/Fsft' */
        /* FunctionCaller: '<S1208>/Function Caller' */
        /* Event: '<S1207>:39' */
        Rte_Call_FsftIDCR_I_EVSEOutputCurr_FsftIDCR_I_EVSEOutputCurr();

        /* End of Outputs for SubSystem: '<S1069>/Fsft' */
        /* Transition: '<S1207>:113' */
        /* Transition: '<S1207>:115' */
        /* Transition: '<S1207>:114' */
    }

    /* End of Chart: '<S1204>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_HVCMS_EVSEPrsntVlt_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_HVCMS_EVSEPrsntVlt_ErrSts'
     */
    /* Transition: '<S1207>:107' */
    rtb_TmpSignalConversionAtVeC_hh = Rte_Read_VeCRDB_U_HVCMS_EVSEPrsntVlt_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__hw);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_HVCMS_EVSEPrsntVlt_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1213>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_HVCMS_EVSEPrsntVlt_SigSts_Value(&tmpRead_4q);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1210>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_4q) & 3U) != 0U)
    {
        /* Transition: '<S1213>:100' */
        /* Transition: '<S1213>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1213>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4q) & 4U) != 0U)
        {
            /* Transition: '<S1213>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1213>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1213>:110' */
                /* Call Tmot */
                VeCRDB_y_HVCMS_EVSEPrsntVlt_CallStatus = 3U;

                /* Event: '<S1213>:40' */
                /* Transition: '<S1213>:115' */
                /* Transition: '<S1213>:114' */
            }
        }
        else
        {
            /* Transition: '<S1213>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_hh) == 133)
            {
                /* Transition: '<S1213>:95' */
                /* Transition: '<S1213>:116' */
                /* Call Nothing */
                VeCRDB_y_HVCMS_EVSEPrsntVlt_CallStatus = 4U;

                /* Transition: '<S1213>:114' */
            }
            else
            {
                /* Transition: '<S1213>:120' */
                if ((((uint32)tmpRead_4q) & 8U) != 0U)
                {
                    /* Transition: '<S1213>:122' */
                    /* Transition: '<S1213>:125' */
                    FA_out_n0 = true;

                    /* Transition: '<S1213>:126' */
                }
                else
                {
                    /* Transition: '<S1213>:124' */
                    FA_out_n0 = false;
                }

                /* Transition: '<S1213>:117' */
                /* Call Poke */
                VeCRDB_y_HVCMS_EVSEPrsntVlt_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1070>/Poke' */
                /* FunctionCaller: '<S1215>/Function Caller' */
                /* Event: '<S1213>:38' */
                Rte_Call_PokeIDCR_U_EVSEOutputVolt_PokeIDCR_U_EVSEOutputVolt
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__hw, FA_out_n0);

                /* End of Outputs for SubSystem: '<S1070>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1213>:111' */
        /* Call Fsft */
        VeCRDB_y_HVCMS_EVSEPrsntVlt_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1070>/Fsft' */
        /* FunctionCaller: '<S1214>/Function Caller' */
        /* Event: '<S1213>:39' */
        Rte_Call_FsftIDCR_U_EVSEOutputVolt_FsftIDCR_U_EVSEOutputVolt();

        /* End of Outputs for SubSystem: '<S1070>/Fsft' */
        /* Transition: '<S1213>:113' */
        /* Transition: '<S1213>:115' */
        /* Transition: '<S1213>:114' */
    }

    /* End of Chart: '<S1210>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_HVCMS_EVSEProcg_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_HVCMS_EVSEProcg_ErrSts'
     */
    /* Transition: '<S1213>:107' */
    rtb_TmpSignalConversionAtVeC_ec = Rte_Read_VeCRDB_b_HVCMS_EVSEProcg_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__aa);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_HVCMS_EVSEProcg_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1218>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_HVCMS_EVSEProcg_SigSts_Value(&tmpRead_4r);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1216>/Chart' */
    if ((((uint32)tmpRead_4r) & 3U) != 0U)
    {
        /* Transition: '<S1218>:100' */
        /* Transition: '<S1218>:103' */
        /* Transition: '<S1218>:111' */
        /* Call Fsft */
        VeCRDB_y_HVCMS_EVSEProcg_CallStatus = 2U;

        /* Event: '<S1218>:39' */
        /* Transition: '<S1218>:113' */
        /* Transition: '<S1218>:115' */
        /* Transition: '<S1218>:114' */
    }
    else
    {
        /* Transition: '<S1218>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4r) & 4U) != 0U)
        {
            /* Transition: '<S1218>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1218>:88' */
                /* Transition: '<S1218>:111' */
                /* Call Fsft */
                VeCRDB_y_HVCMS_EVSEProcg_CallStatus = 2U;

                /* Event: '<S1218>:39' */
                /* Transition: '<S1218>:113' */
                /* Transition: '<S1218>:115' */
                /* Transition: '<S1218>:114' */
            }
            else
            {
                /* Transition: '<S1218>:110' */
                /* Call Tmot */
                VeCRDB_y_HVCMS_EVSEProcg_CallStatus = 3U;

                /* Event: '<S1218>:40' */
                /* Transition: '<S1218>:115' */
                /* Transition: '<S1218>:114' */
            }
        }
        else
        {
            /* Transition: '<S1218>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ec) == 133)
            {
                /* Transition: '<S1218>:95' */
                /* Transition: '<S1218>:116' */
                /* Call Nothing */
                VeCRDB_y_HVCMS_EVSEProcg_CallStatus = 4U;

                /* Transition: '<S1218>:114' */
            }
            else
            {
                /* Transition: '<S1218>:120' */
                /* Transition: '<S1218>:117' */
                /* Call Poke */
                VeCRDB_y_HVCMS_EVSEProcg_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1071>/Poke' */
                /* FunctionCaller: '<S1219>/Function Caller' */
                /* Event: '<S1218>:38' */
                Rte_Call_PokeIDCR_b_EVSEProcessing_PokeIDCR_b_EVSEProcessing
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__aa);

                /* End of Outputs for SubSystem: '<S1071>/Poke' */
            }
        }
    }

    /* End of Chart: '<S1216>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_HVCMS_EVSEStsCod_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_HVCMS_EVSEStsCod_ErrSts'
     */
    /* Transition: '<S1218>:107' */
    rtb_TmpSignalConversionAtVeC_jf = Rte_Read_VeCRDB_y_HVCMS_EVSEStsCod_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_h);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_HVCMS_EVSEStsCod_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1222>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_HVCMS_EVSEStsCod_SigSts_Value(&tmpRead_4s);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1220>/Chart' */
    if ((((uint32)tmpRead_4s) & 3U) != 0U)
    {
        /* Transition: '<S1222>:100' */
        /* Transition: '<S1222>:103' */
        /* Transition: '<S1222>:111' */
        /* Call Fsft */
        VeCRDB_y_HVCMS_EVSEStsCod_CallStatus = 2U;

        /* Event: '<S1222>:39' */
        /* Transition: '<S1222>:113' */
        /* Transition: '<S1222>:115' */
        /* Transition: '<S1222>:114' */
    }
    else
    {
        /* Transition: '<S1222>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4s) & 4U) != 0U)
        {
            /* Transition: '<S1222>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1222>:88' */
                /* Transition: '<S1222>:111' */
                /* Call Fsft */
                VeCRDB_y_HVCMS_EVSEStsCod_CallStatus = 2U;

                /* Event: '<S1222>:39' */
                /* Transition: '<S1222>:113' */
                /* Transition: '<S1222>:115' */
                /* Transition: '<S1222>:114' */
            }
            else
            {
                /* Transition: '<S1222>:110' */
                /* Call Tmot */
                VeCRDB_y_HVCMS_EVSEStsCod_CallStatus = 3U;

                /* Event: '<S1222>:40' */
                /* Transition: '<S1222>:115' */
                /* Transition: '<S1222>:114' */
            }
        }
        else
        {
            /* Transition: '<S1222>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_jf) == 133)
            {
                /* Transition: '<S1222>:95' */
                /* Transition: '<S1222>:116' */
                /* Call Nothing */
                VeCRDB_y_HVCMS_EVSEStsCod_CallStatus = 4U;

                /* Transition: '<S1222>:114' */
            }
            else
            {
                /* Transition: '<S1222>:120' */
                /* Transition: '<S1222>:117' */
                /* Call Poke */
                VeCRDB_y_HVCMS_EVSEStsCod_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1072>/Poke' */
                /* FunctionCaller: '<S1223>/Function Caller' */
                /* Event: '<S1222>:38' */
                Rte_Call_PokeIDCR_e_EVSEStsCode_PokeIDCR_e_EVSEStsCode
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_h);

                /* End of Outputs for SubSystem: '<S1072>/Poke' */
            }
        }
    }

    /* End of Chart: '<S1220>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_HVCMS_EVSEVltLmAch_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_HVCMS_EVSEVltLmAch_ErrSts'
     */
    /* Transition: '<S1222>:107' */
    rtb_TmpSignalConversionAtVeC_fn = Rte_Read_VeCRDB_y_HVCMS_EVSEVltLmAch_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__gm);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_HVCMS_EVSEVltLmAch_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1226>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_HVCMS_EVSEVltLmAch_SigSts_Value(&tmpRead_4t);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1224>/Chart' */
    if ((((uint32)tmpRead_4t) & 3U) != 0U)
    {
        /* Transition: '<S1226>:100' */
        /* Transition: '<S1226>:103' */
        /* Transition: '<S1226>:111' */
        /* Call Fsft */
        VeCRDB_y_HVCMS_EVSEVltLmAch_CallStatus = 2U;

        /* Event: '<S1226>:39' */
        /* Transition: '<S1226>:113' */
        /* Transition: '<S1226>:115' */
        /* Transition: '<S1226>:114' */
    }
    else
    {
        /* Transition: '<S1226>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4t) & 4U) != 0U)
        {
            /* Transition: '<S1226>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1226>:88' */
                /* Transition: '<S1226>:111' */
                /* Call Fsft */
                VeCRDB_y_HVCMS_EVSEVltLmAch_CallStatus = 2U;

                /* Event: '<S1226>:39' */
                /* Transition: '<S1226>:113' */
                /* Transition: '<S1226>:115' */
                /* Transition: '<S1226>:114' */
            }
            else
            {
                /* Transition: '<S1226>:110' */
                /* Call Tmot */
                VeCRDB_y_HVCMS_EVSEVltLmAch_CallStatus = 3U;

                /* Event: '<S1226>:40' */
                /* Transition: '<S1226>:115' */
                /* Transition: '<S1226>:114' */
            }
        }
        else
        {
            /* Transition: '<S1226>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_fn) == 133)
            {
                /* Transition: '<S1226>:95' */
                /* Transition: '<S1226>:116' */
                /* Call Nothing */
                VeCRDB_y_HVCMS_EVSEVltLmAch_CallStatus = 4U;

                /* Transition: '<S1226>:114' */
            }
            else
            {
                /* Transition: '<S1226>:120' */
                /* Transition: '<S1226>:117' */
                /* Call Poke */
                VeCRDB_y_HVCMS_EVSEVltLmAch_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1073>/Poke' */
                /* FunctionCaller: '<S1227>/Function Caller' */
                /* Event: '<S1226>:38' */
                Rte_Call_PokeIDCR_b_EVSEVoltLmtAchvd_PokeIDCR_b_EVSEVoltLmtAchvd
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__gm);

                /* End of Outputs for SubSystem: '<S1073>/Poke' */
            }
        }
    }

    /* End of Chart: '<S1224>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_HVCMS_EgToBDlvd_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_HVCMS_EgToBDlvd_ErrSts'
     */
    /* Transition: '<S1226>:107' */
    rtb_TmpSignalConversionAtVeC_lu = Rte_Read_VeCRDB_EWhr_HVCMS_EgToBDlvd_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_EWh);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_HVCMS_EgToBDlvd_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1231>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_HVCMS_EgToBDlvd_SigSts_Value(&tmpRead_4u);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1228>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_4u) & 3U) != 0U)
    {
        /* Transition: '<S1231>:100' */
        /* Transition: '<S1231>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1231>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4u) & 4U) != 0U)
        {
            /* Transition: '<S1231>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1231>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1231>:110' */
                /* Call Tmot */
                VeCRDB_y_HVCMS_EgToBDlvd_CallStatus = 3U;

                /* Event: '<S1231>:40' */
                /* Transition: '<S1231>:115' */
                /* Transition: '<S1231>:114' */
            }
        }
        else
        {
            /* Transition: '<S1231>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_lu) == 133)
            {
                /* Transition: '<S1231>:95' */
                /* Transition: '<S1231>:116' */
                /* Call Nothing */
                VeCRDB_y_HVCMS_EgToBDlvd_CallStatus = 4U;

                /* Transition: '<S1231>:114' */
            }
            else
            {
                /* Transition: '<S1231>:120' */
                if ((((uint32)tmpRead_4u) & 8U) != 0U)
                {
                    /* Transition: '<S1231>:122' */
                    /* Transition: '<S1231>:125' */
                    FA_out_n0 = true;

                    /* Transition: '<S1231>:126' */
                }
                else
                {
                    /* Transition: '<S1231>:124' */
                    FA_out_n0 = false;
                }

                /* Transition: '<S1231>:117' */
                /* Call Poke */
                VeCRDB_y_HVCMS_EgToBDlvd_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1074>/Poke' */
                /* FunctionCaller: '<S1233>/Function Caller' */
                /* Event: '<S1231>:38' */
                Rte_Call_PokeIDCR_E_EVSE_EnrgyToBeDlvrd_PokeIDCR_E_EVSE_EnrgyToBeDlvrd
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_EWh, FA_out_n0);

                /* End of Outputs for SubSystem: '<S1074>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1231>:111' */
        /* Call Fsft */
        VeCRDB_y_HVCMS_EgToBDlvd_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1074>/Fsft' */
        /* FunctionCaller: '<S1232>/Function Caller' */
        /* Event: '<S1231>:39' */
        Rte_Call_FsftIDCR_E_EVSE_EnrgyToBeDlvrd_FsftIDCR_E_EVSE_EnrgyToBeDlvrd();

        /* End of Outputs for SubSystem: '<S1074>/Fsft' */
        /* Transition: '<S1231>:113' */
        /* Transition: '<S1231>:115' */
        /* Transition: '<S1231>:114' */
    }

    /* End of Chart: '<S1228>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_HVCMS_ResponseCode_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_HVCMS_ResponseCode_ErrSts'
     */
    /* Transition: '<S1231>:107' */
    rtb_TmpSignalConversionAtVeC_n3 = Rte_Read_VeCRDB_y_HVCMS_ResponseCode_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__hg);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_HVCMS_ResponseCode_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1237>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_HVCMS_ResponseCode_SigSts_Value(&tmpRead_4v);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1234>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_4v) & 3U) != 0U)
    {
        /* Transition: '<S1237>:100' */
        /* Transition: '<S1237>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1237>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4v) & 4U) != 0U)
        {
            /* Transition: '<S1237>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1237>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1237>:110' */
                /* Call Tmot */
                VeCRDB_y_HVCMS_ResponseCode_CallStatus = 3U;

                /* Event: '<S1237>:40' */
                /* Transition: '<S1237>:115' */
                /* Transition: '<S1237>:114' */
            }
        }
        else
        {
            /* Transition: '<S1237>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_n3) == 133)
            {
                /* Transition: '<S1237>:95' */
                /* Transition: '<S1237>:116' */
                /* Call Nothing */
                VeCRDB_y_HVCMS_ResponseCode_CallStatus = 4U;

                /* Transition: '<S1237>:114' */
            }
            else
            {
                /* Transition: '<S1237>:120' */
                if ((((uint32)tmpRead_4v) & 8U) != 0U)
                {
                    /* Transition: '<S1237>:122' */
                    /* Transition: '<S1237>:125' */
                    FA_out_n0 = true;

                    /* Transition: '<S1237>:126' */
                }
                else
                {
                    /* Transition: '<S1237>:124' */
                    FA_out_n0 = false;
                }

                /* Transition: '<S1237>:117' */
                /* Call Poke */
                VeCRDB_y_HVCMS_ResponseCode_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1075>/Poke' */
                /* FunctionCaller: '<S1239>/Function Caller' */
                /* Event: '<S1237>:38' */
                Rte_Call_PokeIDCR_e_Resp_Code_PokeIDCR_e_Resp_Code
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__hg, FA_out_n0);

                /* End of Outputs for SubSystem: '<S1075>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1237>:111' */
        /* Call Fsft */
        VeCRDB_y_HVCMS_ResponseCode_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1075>/Fsft' */
        /* FunctionCaller: '<S1238>/Function Caller' */
        /* Event: '<S1237>:39' */
        Rte_Call_FsftIDCR_b_Resp_Code_FsftIDCR_b_Resp_Code();

        /* End of Outputs for SubSystem: '<S1075>/Fsft' */
        /* Transition: '<S1237>:113' */
        /* Transition: '<S1237>:115' */
        /* Transition: '<S1237>:114' */
    }

    /* End of Chart: '<S1234>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_HVCMS_TxMsgStat_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_HVCMS_TxMsgStat_ErrSts'
     */
    /* Transition: '<S1237>:107' */
    rtb_TmpSignalConversionAtVeC_mu = Rte_Read_VeCRDB_y_HVCMS_TxMsgStat_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__aj);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_HVCMS_TxMsgStat_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1243>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_HVCMS_TxMsgStat_SigSts_Value(&tmpRead_4w);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1240>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_4w) & 3U) != 0U)
    {
        /* Transition: '<S1243>:100' */
        /* Transition: '<S1243>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1243>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4w) & 4U) != 0U)
        {
            /* Transition: '<S1243>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1243>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1243>:110' */
                /* Call Tmot */
                VeCRDB_y_HVCMS_TxMsgStat_CallStatus = 3U;

                /* Event: '<S1243>:40' */
                /* Transition: '<S1243>:115' */
                /* Transition: '<S1243>:114' */
            }
        }
        else
        {
            /* Transition: '<S1243>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_mu) == 133)
            {
                /* Transition: '<S1243>:95' */
                /* Transition: '<S1243>:116' */
                /* Call Nothing */
                VeCRDB_y_HVCMS_TxMsgStat_CallStatus = 4U;

                /* Transition: '<S1243>:114' */
            }
            else
            {
                /* Transition: '<S1243>:120' */
                if ((((uint32)tmpRead_4w) & 8U) != 0U)
                {
                    /* Transition: '<S1243>:122' */
                    /* Transition: '<S1243>:125' */
                    FA_out_n0 = true;

                    /* Transition: '<S1243>:126' */
                }
                else
                {
                    /* Transition: '<S1243>:124' */
                    FA_out_n0 = false;
                }

                /* Transition: '<S1243>:117' */
                /* Call Poke */
                VeCRDB_y_HVCMS_TxMsgStat_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1076>/Poke' */
                /* FunctionCaller: '<S1245>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S1245>/Data Type Conversion'
                 */
                /* Event: '<S1243>:38' */
                Rte_Call_PokeIDCR_e_TxMessageRequest_PokeIDCR_e_TxMessageRequest
                    ((sint16)CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__aj,
                     FA_out_n0);

                /* End of Outputs for SubSystem: '<S1076>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1243>:111' */
        /* Call Fsft */
        VeCRDB_y_HVCMS_TxMsgStat_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1076>/Fsft' */
        /* FunctionCaller: '<S1244>/Function Caller' */
        /* Event: '<S1243>:39' */
        Rte_Call_FsftIDCR_b_TxMessageRequest_FsftIDCR_b_TxMessageRequest();

        /* End of Outputs for SubSystem: '<S1076>/Fsft' */
        /* Transition: '<S1243>:113' */
        /* Transition: '<S1243>:115' */
        /* Transition: '<S1243>:114' */
    }

    /* End of Chart: '<S1240>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_OBCM_PLCTypeSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_OBCM_PLCTypeSts_ErrSts'
     */
    /* Transition: '<S1243>:107' */
    rtb_TmpSignalConversionAtVeC_dz = Rte_Read_VeCRDB_y_OBCM_PLCTypeSts_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__gl);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_OBCM_PLCTypeSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1248>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_OBCM_PLCTypeSts_SigSts_Value(&tmpRead_4x);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1246>/Chart' */
    if ((((uint32)tmpRead_4x) & 3U) != 0U)
    {
        /* Transition: '<S1248>:100' */
        /* Transition: '<S1248>:103' */
        /* Transition: '<S1248>:111' */
        /* Call Fsft */
        VeCRDB_y_OBCM_PLCTypeSts_CallStatus = 2U;

        /* Event: '<S1248>:39' */
        /* Transition: '<S1248>:113' */
        /* Transition: '<S1248>:115' */
        /* Transition: '<S1248>:114' */
    }
    else
    {
        /* Transition: '<S1248>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4x) & 4U) != 0U)
        {
            /* Transition: '<S1248>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1248>:88' */
                /* Transition: '<S1248>:111' */
                /* Call Fsft */
                VeCRDB_y_OBCM_PLCTypeSts_CallStatus = 2U;

                /* Event: '<S1248>:39' */
                /* Transition: '<S1248>:113' */
                /* Transition: '<S1248>:115' */
                /* Transition: '<S1248>:114' */
            }
            else
            {
                /* Transition: '<S1248>:110' */
                /* Call Tmot */
                VeCRDB_y_OBCM_PLCTypeSts_CallStatus = 3U;

                /* Event: '<S1248>:40' */
                /* Transition: '<S1248>:115' */
                /* Transition: '<S1248>:114' */
            }
        }
        else
        {
            /* Transition: '<S1248>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_dz) == 133)
            {
                /* Transition: '<S1248>:95' */
                /* Transition: '<S1248>:116' */
                /* Call Nothing */
                VeCRDB_y_OBCM_PLCTypeSts_CallStatus = 4U;

                /* Transition: '<S1248>:114' */
            }
            else
            {
                /* Transition: '<S1248>:120' */
                /* Transition: '<S1248>:117' */
                /* Call Poke */
                VeCRDB_y_OBCM_PLCTypeSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1077>/Poke' */
                /* FunctionCaller: '<S1249>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S1249>/Data Type Conversion'
                 */
                /* Event: '<S1248>:38' */
                Rte_Call_PokeIDCR_i_IDCM_DCCA_M182_PokeIDCR_i_IDCM_DCCA_M182
                    ((sint16)CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__gl);

                /* End of Outputs for SubSystem: '<S1077>/Poke' */
            }
        }
    }

    /* End of Chart: '<S1246>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_ReceiptRequired_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_ReceiptRequired_ErrSts'
     */
    /* Transition: '<S1248>:107' */
    rtb_TmpSignalConversionAtVeC_ph = Rte_Read_VeCRDB_b_ReceiptRequired_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_R);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_ReceiptRequired_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1253>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_ReceiptRequired_SigSts_Value(&tmpRead_4y);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1250>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_4y) & 3U) != 0U)
    {
        /* Transition: '<S1253>:100' */
        /* Transition: '<S1253>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1253>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4y) & 4U) != 0U)
        {
            /* Transition: '<S1253>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1253>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1253>:110' */
                /* Call Tmot */
                VeCRDB_y_ReceiptRequired_CallStatus = 3U;

                /* Event: '<S1253>:40' */
                /* Transition: '<S1253>:115' */
                /* Transition: '<S1253>:114' */
            }
        }
        else
        {
            /* Transition: '<S1253>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ph) == 133)
            {
                /* Transition: '<S1253>:95' */
                /* Transition: '<S1253>:116' */
                /* Call Nothing */
                VeCRDB_y_ReceiptRequired_CallStatus = 4U;

                /* Transition: '<S1253>:114' */
            }
            else
            {
                /* Transition: '<S1253>:120' */
                /* Transition: '<S1253>:117' */
                /* Call Poke */
                VeCRDB_y_ReceiptRequired_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1078>/Poke' */
                /* FunctionCaller: '<S1255>/Function Caller' */
                /* Event: '<S1253>:38' */
                Rte_Call_PokeIDCR_b_ReceiptRequired_PokeIDCR_b_ReceiptRequired
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_R);

                /* End of Outputs for SubSystem: '<S1078>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1253>:111' */
        /* Call Fsft */
        VeCRDB_y_ReceiptRequired_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1078>/Fsft' */
        /* FunctionCaller: '<S1254>/Function Caller' */
        /* Event: '<S1253>:39' */
        Rte_Call_FsftIDCR_b_ReceiptRequired_FsftIDCR_b_ReceiptRequired();

        /* End of Outputs for SubSystem: '<S1078>/Fsft' */
        /* Transition: '<S1253>:113' */
        /* Transition: '<S1253>:115' */
        /* Transition: '<S1253>:114' */
    }

    /* End of Chart: '<S1250>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_V2X_EVSE_Service_5_V2H_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_V2X_EVSE_Service_5_V2H_ErrSts'
     */
    /* Transition: '<S1253>:107' */
    rtb_TmpSignalConversionAtVeS_cj =
        Rte_Read_VeSR1B_b_V2X_EVSE_Service_5_V2H_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_k);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_V2X_EVSE_Service_5_V2H_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1259>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_V2X_EVSE_Service_5_V2H_SigSts_Value(&tmpRead_4z);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1256>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_4z) & 3U) != 0U)
    {
        /* Transition: '<S1259>:100' */
        /* Transition: '<S1259>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1259>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4z) & 4U) != 0U)
        {
            /* Transition: '<S1259>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1259>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1259>:110' */
                /* Call Tmot */
                VeSR1B_y_V2X_EVSE_Service_5_V2H_CallStatus = 3U;

                /* Event: '<S1259>:40' */
                /* Transition: '<S1259>:115' */
                /* Transition: '<S1259>:114' */
            }
        }
        else
        {
            /* Transition: '<S1259>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_cj) == 133)
            {
                /* Transition: '<S1259>:95' */
                /* Transition: '<S1259>:116' */
                /* Call Nothing */
                VeSR1B_y_V2X_EVSE_Service_5_V2H_CallStatus = 4U;

                /* Transition: '<S1259>:114' */
            }
            else
            {
                /* Transition: '<S1259>:120' */
                /* Transition: '<S1259>:117' */
                /* Call Poke */
                VeSR1B_y_V2X_EVSE_Service_5_V2H_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1079>/Poke' */
                /* FunctionCaller: '<S1261>/Function Caller' incorporates:
                 *  Constant: '<S1261>/Constant'
                 */
                /* Event: '<S1259>:38' */
                Rte_Call_PokeIDCR_b_V2X_EVSE_Service_5_V2H_PokeIDCR_b_V2X_EVSE_Service_5_V2H
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_k, false);

                /* End of Outputs for SubSystem: '<S1079>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1259>:111' */
        /* Call Fsft */
        VeSR1B_y_V2X_EVSE_Service_5_V2H_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1079>/Fsft' */
        /* FunctionCaller: '<S1260>/Function Caller' */
        /* Event: '<S1259>:39' */
        Rte_Call_FsftIDCR_b_V2X_EVSE_Service_5_V2H_FsftIDCR_b_V2X_EVSE_Service_5_V2H
            ();

        /* End of Outputs for SubSystem: '<S1079>/Fsft' */
        /* Transition: '<S1259>:113' */
        /* Transition: '<S1259>:115' */
        /* Transition: '<S1259>:114' */
    }

    /* End of Chart: '<S1256>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_ChargerFaultStates_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_ChargerFaultStates_ErrSts'
     */
    /* Transition: '<S1259>:107' */
    rtb_TmpSignalConversionAtVeC_ho = Rte_Read_VeCRDB_y_ChargerFaultStates_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__ln);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_ChargerFaultStates_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1280>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_ChargerFaultStates_SigSts_Value(&tmpRead_50);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1277>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_50) & 3U) != 0U)
    {
        /* Transition: '<S1280>:100' */
        /* Transition: '<S1280>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1280>:104' */
        /*  MM */
        if ((((uint32)tmpRead_50) & 4U) != 0U)
        {
            /* Transition: '<S1280>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1280>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1280>:110' */
                /* Call Tmot */
                VeCRDB_y_ChargerFaultStates_CallStatus = 3U;

                /* Event: '<S1280>:40' */
                /* Transition: '<S1280>:115' */
                /* Transition: '<S1280>:114' */
            }
        }
        else
        {
            /* Transition: '<S1280>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ho) == 133)
            {
                /* Transition: '<S1280>:95' */
                /* Transition: '<S1280>:116' */
                /* Call Nothing */
                VeCRDB_y_ChargerFaultStates_CallStatus = 4U;

                /* Transition: '<S1280>:114' */
            }
            else
            {
                /* Transition: '<S1280>:120' */
                if ((((uint32)tmpRead_50) & 8U) != 0U)
                {
                    /* Transition: '<S1280>:122' */
                    /* Transition: '<S1280>:125' */
                    FA_out_n0 = true;

                    /* Transition: '<S1280>:126' */
                }
                else
                {
                    /* Transition: '<S1280>:124' */
                    FA_out_n0 = false;
                }

                /* Transition: '<S1280>:117' */
                /* Call Poke */
                VeCRDB_y_ChargerFaultStates_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1262>/Poke' */
                /* FunctionCaller: '<S1282>/Function Caller' */
                /* Event: '<S1280>:38' */
                Rte_Call_PokeIDCR_e_Chrgr_FaultStates_PokeIDCR_e_Chrgr_FaultStates
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__ln, FA_out_n0);

                /* End of Outputs for SubSystem: '<S1262>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1280>:111' */
        /* Call Fsft */
        VeCRDB_y_ChargerFaultStates_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1262>/Fsft' */
        /* FunctionCaller: '<S1281>/Function Caller' */
        /* Event: '<S1280>:39' */
        Rte_Call_FsftIDCR_e_Chrgr_FaultStates_FsftIDCR_e_Chrgr_FaultStates();

        /* End of Outputs for SubSystem: '<S1262>/Fsft' */
        /* Transition: '<S1280>:113' */
        /* Transition: '<S1280>:115' */
        /* Transition: '<S1280>:114' */
    }

    /* End of Chart: '<S1277>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_ChrgrWldDtctAvail_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_ChrgrWldDtctAvail_ErrSts'
     */
    /* Transition: '<S1280>:107' */
    rtb_TmpSignalConversionAtVeC_ds = Rte_Read_VeCRDB_y_ChrgrWldDtctAvail_Value(
        &CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__a1);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_ChrgrWldDtctAvail_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1286>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_ChrgrWldDtctAvail_SigSts_Value(&tmpRead_51);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1283>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_51) & 3U) != 0U)
    {
        /* Transition: '<S1286>:100' */
        /* Transition: '<S1286>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1286>:104' */
        /*  MM */
        if ((((uint32)tmpRead_51) & 4U) != 0U)
        {
            /* Transition: '<S1286>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1286>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1286>:110' */
                /* Call Tmot */
                VeCRDB_y_ChrgrWldDtctAvail_CallStatus = 3U;

                /* Event: '<S1286>:40' */
                /* Transition: '<S1286>:115' */
                /* Transition: '<S1286>:114' */
            }
        }
        else
        {
            /* Transition: '<S1286>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ds) == 133)
            {
                /* Transition: '<S1286>:95' */
                /* Transition: '<S1286>:116' */
                /* Call Nothing */
                VeCRDB_y_ChrgrWldDtctAvail_CallStatus = 4U;

                /* Transition: '<S1286>:114' */
            }
            else
            {
                /* Transition: '<S1286>:120' */
                if ((((uint32)tmpRead_51) & 8U) != 0U)
                {
                    /* Transition: '<S1286>:122' */
                    /* Transition: '<S1286>:125' */
                    FA_out_n0 = true;

                    /* Transition: '<S1286>:126' */
                }
                else
                {
                    /* Transition: '<S1286>:124' */
                    FA_out_n0 = false;
                }

                /* Transition: '<S1286>:117' */
                /* Call Poke */
                VeCRDB_y_ChrgrWldDtctAvail_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1263>/Poke' */
                /* FunctionCaller: '<S1288>/Function Caller' */
                /* Event: '<S1286>:38' */
                Rte_Call_PokeIDCR_e_Charger_WeldingDetectAvail_PokeIDCR_e_Charger_WeldingDetectAvail
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__a1, FA_out_n0);

                /* End of Outputs for SubSystem: '<S1263>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1286>:111' */
        /* Call Fsft */
        VeCRDB_y_ChrgrWldDtctAvail_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1263>/Fsft' */
        /* FunctionCaller: '<S1287>/Function Caller' */
        /* Event: '<S1286>:39' */
        Rte_Call_FsftIDCR_e_Charger_WeldingDetectAvail_FsftIDCR_e_Charger_WeldingDetectAvail
            ();

        /* End of Outputs for SubSystem: '<S1263>/Fsft' */
        /* Transition: '<S1286>:113' */
        /* Transition: '<S1286>:115' */
        /* Transition: '<S1286>:114' */
    }

    /* End of Chart: '<S1283>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_EVCC_FailureSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_EVCC_FailureSts_ErrSts'
     */
    /* Transition: '<S1286>:107' */
    rtb_TmpSignalConversionAtVeC_nc = Rte_Read_VeCRDB_b_EVCC_FailureSts_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__o0);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_EVCC_FailureSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1292>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_EVCC_FailureSts_SigSts_Value(&tmpRead_52);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1289>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_52) & 3U) != 0U)
    {
        /* Transition: '<S1292>:100' */
        /* Transition: '<S1292>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1292>:104' */
        /*  MM */
        if ((((uint32)tmpRead_52) & 4U) != 0U)
        {
            /* Transition: '<S1292>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1292>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1292>:110' */
                /* Call Tmot */
                VeCRDB_y_EVCC_FailureSts_CallStatus = 3U;

                /* Event: '<S1292>:40' */
                /* Transition: '<S1292>:115' */
                /* Transition: '<S1292>:114' */
            }
        }
        else
        {
            /* Transition: '<S1292>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_nc) == 133)
            {
                /* Transition: '<S1292>:95' */
                /* Transition: '<S1292>:116' */
                /* Call Nothing */
                VeCRDB_y_EVCC_FailureSts_CallStatus = 4U;

                /* Transition: '<S1292>:114' */
            }
            else
            {
                /* Transition: '<S1292>:120' */
                /* Transition: '<S1292>:117' */
                /* Call Poke */
                VeCRDB_y_EVCC_FailureSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1264>/Poke' */
                /* FunctionCaller: '<S1294>/Function Caller' */
                /* Event: '<S1292>:38' */
                Rte_Call_PokeIDCR_b_EVCC_FailureSts_PokeIDCR_b_EVCC_FailureSts
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__o0);

                /* End of Outputs for SubSystem: '<S1264>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1292>:111' */
        /* Call Fsft */
        VeCRDB_y_EVCC_FailureSts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1264>/Fsft' */
        /* FunctionCaller: '<S1293>/Function Caller' */
        /* Event: '<S1292>:39' */
        Rte_Call_FsftIDCR_b_EVCC_FailureSts_FsftIDCR_b_EVCC_FailureSts();

        /* End of Outputs for SubSystem: '<S1264>/Fsft' */
        /* Transition: '<S1292>:113' */
        /* Transition: '<S1292>:115' */
        /* Transition: '<S1292>:114' */
    }

    /* End of Chart: '<S1289>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_EVSE_ChrgStopCtrl_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_EVSE_ChrgStopCtrl_ErrSts'
     */
    /* Transition: '<S1292>:107' */
    rtb_TmpSignalConversionAtVeC_oh = Rte_Read_VeCRDB_y_EVSE_ChrgStopCtrl_Value(
        &CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__ms);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_EVSE_ChrgStopCtrl_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1298>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_EVSE_ChrgStopCtrl_SigSts_Value(&tmpRead_53);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1295>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_53) & 3U) != 0U)
    {
        /* Transition: '<S1298>:100' */
        /* Transition: '<S1298>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1298>:104' */
        /*  MM */
        if ((((uint32)tmpRead_53) & 4U) != 0U)
        {
            /* Transition: '<S1298>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1298>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1298>:110' */
                /* Call Tmot */
                VeCRDB_y_EVSE_ChrgStopCtrl_CallStatus = 3U;

                /* Event: '<S1298>:40' */
                /* Transition: '<S1298>:115' */
                /* Transition: '<S1298>:114' */
            }
        }
        else
        {
            /* Transition: '<S1298>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_oh) == 133)
            {
                /* Transition: '<S1298>:95' */
                /* Transition: '<S1298>:116' */
                /* Call Nothing */
                VeCRDB_y_EVSE_ChrgStopCtrl_CallStatus = 4U;

                /* Transition: '<S1298>:114' */
            }
            else
            {
                /* Transition: '<S1298>:120' */
                if ((((uint32)tmpRead_53) & 8U) != 0U)
                {
                    /* Transition: '<S1298>:122' */
                    /* Transition: '<S1298>:125' */
                    FA_out_n0 = true;

                    /* Transition: '<S1298>:126' */
                }
                else
                {
                    /* Transition: '<S1298>:124' */
                    FA_out_n0 = false;
                }

                /* Transition: '<S1298>:117' */
                /* Call Poke */
                VeCRDB_y_EVSE_ChrgStopCtrl_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1265>/Poke' */
                /* FunctionCaller: '<S1300>/Function Caller' */
                /* Event: '<S1298>:38' */
                Rte_Call_PokeIDCR_e_EVSE_ChrgStopControl_PokeIDCR_e_EVSE_ChrgStopControl
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__ms, FA_out_n0);

                /* End of Outputs for SubSystem: '<S1265>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1298>:111' */
        /* Call Fsft */
        VeCRDB_y_EVSE_ChrgStopCtrl_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1265>/Fsft' */
        /* FunctionCaller: '<S1299>/Function Caller' */
        /* Event: '<S1298>:39' */
        Rte_Call_FsftIDCR_e_EVSE_ChrgStopControl_FsftIDCR_e_EVSE_ChrgStopControl
            ();

        /* End of Outputs for SubSystem: '<S1265>/Fsft' */
        /* Transition: '<S1298>:113' */
        /* Transition: '<S1298>:115' */
        /* Transition: '<S1298>:114' */
    }

    /* End of Chart: '<S1295>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_EVSE_Error_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_EVSE_Error_ErrSts'
     */
    /* Transition: '<S1298>:107' */
    rtb_TmpSignalConversionAtVe_iqi = Rte_Read_VeCRDB_y_EVSE_Error_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_nt0);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_EVSE_Error_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1304>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_EVSE_Error_SigSts_Value(&tmpRead_54);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1301>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_54) & 3U) != 0U)
    {
        /* Transition: '<S1304>:100' */
        /* Transition: '<S1304>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1304>:104' */
        /*  MM */
        if ((((uint32)tmpRead_54) & 4U) != 0U)
        {
            /* Transition: '<S1304>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1304>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1304>:110' */
                /* Call Tmot */
                VeCRDB_y_EVSE_Error_CallStatus = 3U;

                /* Event: '<S1304>:40' */
                /* Transition: '<S1304>:115' */
                /* Transition: '<S1304>:114' */
            }
        }
        else
        {
            /* Transition: '<S1304>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_iqi) == 133)
            {
                /* Transition: '<S1304>:95' */
                /* Transition: '<S1304>:116' */
                /* Call Nothing */
                VeCRDB_y_EVSE_Error_CallStatus = 4U;

                /* Transition: '<S1304>:114' */
            }
            else
            {
                /* Transition: '<S1304>:120' */
                if ((((uint32)tmpRead_54) & 8U) != 0U)
                {
                    /* Transition: '<S1304>:122' */
                    /* Transition: '<S1304>:125' */
                    FA_out_n0 = true;

                    /* Transition: '<S1304>:126' */
                }
                else
                {
                    /* Transition: '<S1304>:124' */
                    FA_out_n0 = false;
                }

                /* Transition: '<S1304>:117' */
                /* Call Poke */
                VeCRDB_y_EVSE_Error_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1266>/Poke' */
                /* FunctionCaller: '<S1306>/Function Caller' */
                /* Event: '<S1304>:38' */
                Rte_Call_PokeIDCR_e_EVSE_Error_PokeIDCR_e_EVSE_Error
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_nt0, FA_out_n0);

                /* End of Outputs for SubSystem: '<S1266>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1304>:111' */
        /* Call Fsft */
        VeCRDB_y_EVSE_Error_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1266>/Fsft' */
        /* FunctionCaller: '<S1305>/Function Caller' */
        /* Event: '<S1304>:39' */
        Rte_Call_FsftIDCR_e_EVSE_Error_FsftIDCR_e_EVSE_Error();

        /* End of Outputs for SubSystem: '<S1266>/Fsft' */
        /* Transition: '<S1304>:113' */
        /* Transition: '<S1304>:115' */
        /* Transition: '<S1304>:114' */
    }

    /* End of Chart: '<S1301>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_EVSE_NtfcnMaxDly_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_EVSE_NtfcnMaxDly_ErrSts'
     */
    /* Transition: '<S1304>:107' */
    rtb_TmpSignalConversionAtVeC_na = Rte_Read_VeCRDB_t_EVSE_NtfcnMaxDly_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_t_E);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_EVSE_NtfcnMaxDly_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1310>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_EVSE_NtfcnMaxDly_SigSts_Value(&tmpRead_55);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1307>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_55) & 3U) != 0U)
    {
        /* Transition: '<S1310>:100' */
        /* Transition: '<S1310>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1310>:104' */
        /*  MM */
        if ((((uint32)tmpRead_55) & 4U) != 0U)
        {
            /* Transition: '<S1310>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1310>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1310>:110' */
                /* Call Tmot */
                VeCRDB_y_EVSE_NtfcnMaxDly_CallStatus = 3U;

                /* Event: '<S1310>:40' */
                /* Transition: '<S1310>:115' */
                /* Transition: '<S1310>:114' */
            }
        }
        else
        {
            /* Transition: '<S1310>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_na) == 133)
            {
                /* Transition: '<S1310>:95' */
                /* Transition: '<S1310>:116' */
                /* Call Nothing */
                VeCRDB_y_EVSE_NtfcnMaxDly_CallStatus = 4U;

                /* Transition: '<S1310>:114' */
            }
            else
            {
                /* Transition: '<S1310>:120' */
                /* Transition: '<S1310>:117' */
                /* Call Poke */
                VeCRDB_y_EVSE_NtfcnMaxDly_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1267>/Poke' */
                /* FunctionCaller: '<S1312>/Function Caller' */
                /* Event: '<S1310>:38' */
                Rte_Call_PokeIDCR_t_EVSE_NotificationMaxDelay_PokeIDCR_t_EVSE_NotificationMaxDelay
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_t_E);

                /* End of Outputs for SubSystem: '<S1267>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1310>:111' */
        /* Call Fsft */
        VeCRDB_y_EVSE_NtfcnMaxDly_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1267>/Fsft' */
        /* FunctionCaller: '<S1311>/Function Caller' */
        /* Event: '<S1310>:39' */
        Rte_Call_FsftIDCR_t_EVSE_NotificationMaxDelay_FsftIDCR_t_EVSE_NotificationMaxDelay
            ();

        /* End of Outputs for SubSystem: '<S1267>/Fsft' */
        /* Transition: '<S1310>:113' */
        /* Transition: '<S1310>:115' */
        /* Transition: '<S1310>:114' */
    }

    /* End of Chart: '<S1307>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_ExtChargerSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_ExtChargerSts_ErrSts'
     */
    /* Transition: '<S1310>:107' */
    rtb_TmpSignalConversionAtVeC_dn = Rte_Read_VeCRDB_y_ExtChargerSts_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__gr);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_ExtChargerSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1316>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_ExtChargerSts_SigSts_Value(&tmpRead_56);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1313>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_56) & 3U) != 0U)
    {
        /* Transition: '<S1316>:100' */
        /* Transition: '<S1316>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1316>:104' */
        /*  MM */
        if ((((uint32)tmpRead_56) & 4U) != 0U)
        {
            /* Transition: '<S1316>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1316>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1316>:110' */
                /* Call Tmot */
                VeCRDB_y_ExtChargerSts_CallStatus = 3U;

                /* Event: '<S1316>:40' */
                /* Transition: '<S1316>:115' */
                /* Transition: '<S1316>:114' */
            }
        }
        else
        {
            /* Transition: '<S1316>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_dn) == 133)
            {
                /* Transition: '<S1316>:95' */
                /* Transition: '<S1316>:116' */
                /* Call Nothing */
                VeCRDB_y_ExtChargerSts_CallStatus = 4U;

                /* Transition: '<S1316>:114' */
            }
            else
            {
                /* Transition: '<S1316>:120' */
                if ((((uint32)tmpRead_56) & 8U) != 0U)
                {
                    /* Transition: '<S1316>:122' */
                    /* Transition: '<S1316>:125' */
                    FA_out_n0 = true;

                    /* Transition: '<S1316>:126' */
                }
                else
                {
                    /* Transition: '<S1316>:124' */
                    FA_out_n0 = false;
                }

                /* Transition: '<S1316>:117' */
                /* Call Poke */
                VeCRDB_y_ExtChargerSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1268>/Poke' */
                /* FunctionCaller: '<S1318>/Function Caller' */
                /* Event: '<S1316>:38' */
                Rte_Call_PokeIDCR_e_ExtChargerSts_PokeIDCR_e_ExtChargerSts
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__gr, FA_out_n0);

                /* End of Outputs for SubSystem: '<S1268>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1316>:111' */
        /* Call Fsft */
        VeCRDB_y_ExtChargerSts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1268>/Fsft' */
        /* FunctionCaller: '<S1317>/Function Caller' */
        /* Event: '<S1316>:39' */
        Rte_Call_FsftIDCR_e_ExtChargerSts_FsftIDCR_e_ExtChargerSts();

        /* End of Outputs for SubSystem: '<S1268>/Fsft' */
        /* Transition: '<S1316>:113' */
        /* Transition: '<S1316>:115' */
        /* Transition: '<S1316>:114' */
    }

    /* End of Chart: '<S1313>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_HVCMS_EVSEID_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_HVCMS_EVSEID_ErrSts'
     */
    /* Transition: '<S1316>:107' */
    rtb_TmpSignalConversionAtVeC_hj = Rte_Read_VeCRDB_g_HVCMS_EVSEID_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_g_H);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_HVCMS_EVSEID_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1322>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_HVCMS_EVSEID_SigSts_Value(&tmpRead_57);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1319>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_57) & 3U) != 0U)
    {
        /* Transition: '<S1322>:100' */
        /* Transition: '<S1322>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1322>:104' */
        /*  MM */
        if ((((uint32)tmpRead_57) & 4U) != 0U)
        {
            /* Transition: '<S1322>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1322>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1322>:110' */
                /* Call Tmot */
                VeCRDB_y_HVCMS_EVSEID_CallStatus = 3U;

                /* Event: '<S1322>:40' */
                /* Transition: '<S1322>:115' */
                /* Transition: '<S1322>:114' */
            }
        }
        else
        {
            /* Transition: '<S1322>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_hj) == 133)
            {
                /* Transition: '<S1322>:95' */
                /* Transition: '<S1322>:116' */
                /* Call Nothing */
                VeCRDB_y_HVCMS_EVSEID_CallStatus = 4U;

                /* Transition: '<S1322>:114' */
            }
            else
            {
                /* Transition: '<S1322>:120' */
                if ((((uint32)tmpRead_57) & 8U) != 0U)
                {
                    /* Transition: '<S1322>:122' */
                    /* Transition: '<S1322>:125' */
                    FA_out_n0 = true;

                    /* Transition: '<S1322>:126' */
                }
                else
                {
                    /* Transition: '<S1322>:124' */
                    FA_out_n0 = false;
                }

                /* Transition: '<S1322>:117' */
                /* Call Poke */
                VeCRDB_y_HVCMS_EVSEID_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1269>/Poke' */
                /* FunctionCaller: '<S1324>/Function Caller' */
                /* Event: '<S1322>:38' */
                Rte_Call_PokeIDCR_g_HVCMS_EVSEID_PokeIDCR_g_HVCMS_EVSEID
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_g_H, FA_out_n0);

                /* End of Outputs for SubSystem: '<S1269>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1322>:111' */
        /* Call Fsft */
        VeCRDB_y_HVCMS_EVSEID_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1269>/Fsft' */
        /* FunctionCaller: '<S1323>/Function Caller' */
        /* Event: '<S1322>:39' */
        Rte_Call_FsftIDCR_g_HVCMS_EVSEID_FsftIDCR_g_HVCMS_EVSEID();

        /* End of Outputs for SubSystem: '<S1269>/Fsft' */
        /* Transition: '<S1322>:113' */
        /* Transition: '<S1322>:115' */
        /* Transition: '<S1322>:114' */
    }

    /* End of Chart: '<S1319>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_OBCM_CCSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_OBCM_CCSts_ErrSts'
     */
    /* Transition: '<S1322>:107' */
    rtb_TmpSignalConversionAtVeC_no = Rte_Read_VeCRDB_y_OBCM_CCSts_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__ck);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_OBCM_CCSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1327>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_OBCM_CCSts_SigSts_Value(&tmpRead_58);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1325>/Chart' */
    if ((((uint32)tmpRead_58) & 3U) != 0U)
    {
        /* Transition: '<S1327>:100' */
        /* Transition: '<S1327>:103' */
        /* Transition: '<S1327>:111' */
        /* Call Fsft */
        VeCRDB_y_OBCM_CCSts_CallStatus = 2U;

        /* Event: '<S1327>:39' */
        /* Transition: '<S1327>:113' */
        /* Transition: '<S1327>:115' */
        /* Transition: '<S1327>:114' */
    }
    else
    {
        /* Transition: '<S1327>:104' */
        /*  MM */
        if ((((uint32)tmpRead_58) & 4U) != 0U)
        {
            /* Transition: '<S1327>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1327>:88' */
                /* Transition: '<S1327>:111' */
                /* Call Fsft */
                VeCRDB_y_OBCM_CCSts_CallStatus = 2U;

                /* Event: '<S1327>:39' */
                /* Transition: '<S1327>:113' */
                /* Transition: '<S1327>:115' */
                /* Transition: '<S1327>:114' */
            }
            else
            {
                /* Transition: '<S1327>:110' */
                /* Call Tmot */
                VeCRDB_y_OBCM_CCSts_CallStatus = 3U;

                /* Event: '<S1327>:40' */
                /* Transition: '<S1327>:115' */
                /* Transition: '<S1327>:114' */
            }
        }
        else
        {
            /* Transition: '<S1327>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_no) == 133)
            {
                /* Transition: '<S1327>:95' */
                /* Transition: '<S1327>:116' */
                /* Call Nothing */
                VeCRDB_y_OBCM_CCSts_CallStatus = 4U;

                /* Transition: '<S1327>:114' */
            }
            else
            {
                /* Transition: '<S1327>:120' */
                /* Transition: '<S1327>:117' */
                /* Call Poke */
                VeCRDB_y_OBCM_CCSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1270>/Poke' */
                /* FunctionCaller: '<S1328>/Function Caller' */
                /* Event: '<S1327>:38' */
                Rte_Call_PokeIDCR_e_Prox_GBT_PokeIDCR_e_Prox_GBT
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__ck);

                /* End of Outputs for SubSystem: '<S1270>/Poke' */
            }
        }
    }

    /* End of Chart: '<S1325>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_OBCM_CP1Sts_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_OBCM_CP1Sts_ErrSts'
     */
    /* Transition: '<S1327>:107' */
    rtb_TmpSignalConversionAtVeC_pg = Rte_Read_VeCRDB_y_OBCM_CP1Sts_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__ho);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_OBCM_CP1Sts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1332>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_OBCM_CP1Sts_SigSts_Value(&tmpRead_59);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1329>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_59) & 3U) != 0U)
    {
        /* Transition: '<S1332>:100' */
        /* Transition: '<S1332>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1332>:104' */
        /*  MM */
        if ((((uint32)tmpRead_59) & 4U) != 0U)
        {
            /* Transition: '<S1332>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1332>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1332>:110' */
                /* Call Tmot */
                VeCRDB_y_OBCM_CP1Sts_CallStatus = 3U;

                /* Event: '<S1332>:40' */
                /* Transition: '<S1332>:115' */
                /* Transition: '<S1332>:114' */
            }
        }
        else
        {
            /* Transition: '<S1332>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_pg) == 133)
            {
                /* Transition: '<S1332>:95' */
                /* Transition: '<S1332>:116' */
                /* Call Nothing */
                VeCRDB_y_OBCM_CP1Sts_CallStatus = 4U;

                /* Transition: '<S1332>:114' */
            }
            else
            {
                /* Transition: '<S1332>:120' */
                /* Transition: '<S1332>:117' */
                /* Call Poke */
                VeCRDB_y_OBCM_CP1Sts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1271>/Poke' */
                /* FunctionCaller: '<S1334>/Function Caller' incorporates:
                 *  Constant: '<S1334>/Constant'
                 */
                /* Event: '<S1332>:38' */
                Rte_Call_PokeIDCR_e_OBCM_CP1Sts_PokeIDCR_e_OBCM_CP1Sts
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__ho, false);

                /* End of Outputs for SubSystem: '<S1271>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1332>:111' */
        /* Call Fsft */
        VeCRDB_y_OBCM_CP1Sts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1271>/Fsft' */
        /* FunctionCaller: '<S1333>/Function Caller' */
        /* Event: '<S1332>:39' */
        Rte_Call_FsftIDCR_e_OBCM_CP1Sts_FsftIDCR_e_OBCM_CP1Sts();

        /* End of Outputs for SubSystem: '<S1271>/Fsft' */
        /* Transition: '<S1332>:113' */
        /* Transition: '<S1332>:115' */
        /* Transition: '<S1332>:114' */
    }

    /* End of Chart: '<S1329>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_OBCM_CP2Sts_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_OBCM_CP2Sts_ErrSts'
     */
    /* Transition: '<S1332>:107' */
    rtb_TmpSignalConversionAtVe_ewr = Rte_Read_VeCRDB_y_OBCM_CP2Sts_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__ll);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_OBCM_CP2Sts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1338>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_OBCM_CP2Sts_SigSts_Value(&tmpRead_5a);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1335>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_5a) & 3U) != 0U)
    {
        /* Transition: '<S1338>:100' */
        /* Transition: '<S1338>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1338>:104' */
        /*  MM */
        if ((((uint32)tmpRead_5a) & 4U) != 0U)
        {
            /* Transition: '<S1338>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1338>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1338>:110' */
                /* Call Tmot */
                VeCRDB_y_OBCM_CP2Sts_CallStatus = 3U;

                /* Event: '<S1338>:40' */
                /* Transition: '<S1338>:115' */
                /* Transition: '<S1338>:114' */
            }
        }
        else
        {
            /* Transition: '<S1338>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_ewr) == 133)
            {
                /* Transition: '<S1338>:95' */
                /* Transition: '<S1338>:116' */
                /* Call Nothing */
                VeCRDB_y_OBCM_CP2Sts_CallStatus = 4U;

                /* Transition: '<S1338>:114' */
            }
            else
            {
                /* Transition: '<S1338>:120' */
                /* Transition: '<S1338>:117' */
                /* Call Poke */
                VeCRDB_y_OBCM_CP2Sts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1272>/Poke' */
                /* FunctionCaller: '<S1340>/Function Caller' incorporates:
                 *  Constant: '<S1340>/Constant'
                 */
                /* Event: '<S1338>:38' */
                Rte_Call_PokeIDCR_e_OBCM_CP2Sts_PokeIDCR_e_OBCM_CP2Sts
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__ll, false);

                /* End of Outputs for SubSystem: '<S1272>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1338>:111' */
        /* Call Fsft */
        VeCRDB_y_OBCM_CP2Sts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1272>/Fsft' */
        /* FunctionCaller: '<S1339>/Function Caller' */
        /* Event: '<S1338>:39' */
        Rte_Call_FsftIDCR_e_OBCM_CP2Sts_FsftIDCR_e_OBCM_CP2Sts();

        /* End of Outputs for SubSystem: '<S1272>/Fsft' */
        /* Transition: '<S1338>:113' */
        /* Transition: '<S1338>:115' */
        /* Transition: '<S1338>:114' */
    }

    /* End of Chart: '<S1335>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_OBCM_CP3Sts_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_OBCM_CP3Sts_ErrSts'
     */
    /* Transition: '<S1338>:107' */
    rtb_TmpSignalConversionAtVeC_h5 = Rte_Read_VeCRDB_y_OBCM_CP3Sts_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__ed);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_OBCM_CP3Sts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1344>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_OBCM_CP3Sts_SigSts_Value(&tmpRead_5b);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1341>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_5b) & 3U) != 0U)
    {
        /* Transition: '<S1344>:100' */
        /* Transition: '<S1344>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1344>:104' */
        /*  MM */
        if ((((uint32)tmpRead_5b) & 4U) != 0U)
        {
            /* Transition: '<S1344>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1344>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1344>:110' */
                /* Call Tmot */
                VeCRDB_y_OBCM_CP3Sts_CallStatus = 3U;

                /* Event: '<S1344>:40' */
                /* Transition: '<S1344>:115' */
                /* Transition: '<S1344>:114' */
            }
        }
        else
        {
            /* Transition: '<S1344>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_h5) == 133)
            {
                /* Transition: '<S1344>:95' */
                /* Transition: '<S1344>:116' */
                /* Call Nothing */
                VeCRDB_y_OBCM_CP3Sts_CallStatus = 4U;

                /* Transition: '<S1344>:114' */
            }
            else
            {
                /* Transition: '<S1344>:120' */
                /* Transition: '<S1344>:117' */
                /* Call Poke */
                VeCRDB_y_OBCM_CP3Sts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1273>/Poke' */
                /* FunctionCaller: '<S1346>/Function Caller' incorporates:
                 *  Constant: '<S1346>/Constant'
                 */
                /* Event: '<S1344>:38' */
                Rte_Call_PokeIDCR_e_OBCM_CP3Sts_PokeIDCR_e_OBCM_CP3Sts
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__ed, false);

                /* End of Outputs for SubSystem: '<S1273>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1344>:111' */
        /* Call Fsft */
        VeCRDB_y_OBCM_CP3Sts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1273>/Fsft' */
        /* FunctionCaller: '<S1345>/Function Caller' */
        /* Event: '<S1344>:39' */
        Rte_Call_FsftIDCR_e_OBCM_CP3Sts_FsftIDCR_e_OBCM_CP3Sts();

        /* End of Outputs for SubSystem: '<S1273>/Fsft' */
        /* Transition: '<S1344>:113' */
        /* Transition: '<S1344>:115' */
        /* Transition: '<S1344>:114' */
    }

    /* End of Chart: '<S1341>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_OBCM_CSSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_OBCM_CSSts_ErrSts'
     */
    /* Transition: '<S1344>:107' */
    rtb_TmpSignalConversionAtVeC_oq = Rte_Read_VeCRDB_y_OBCM_CSSts_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__pv);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_OBCM_CSSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1350>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_OBCM_CSSts_SigSts_Value(&tmpRead_5c);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1347>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_5c) & 3U) != 0U)
    {
        /* Transition: '<S1350>:100' */
        /* Transition: '<S1350>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1350>:104' */
        /*  MM */
        if ((((uint32)tmpRead_5c) & 4U) != 0U)
        {
            /* Transition: '<S1350>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1350>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1350>:110' */
                /* Call Tmot */
                VeCRDB_y_OBCM_CSSts_CallStatus = 3U;

                /* Event: '<S1350>:40' */
                /* Transition: '<S1350>:115' */
                /* Transition: '<S1350>:114' */
            }
        }
        else
        {
            /* Transition: '<S1350>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_oq) == 133)
            {
                /* Transition: '<S1350>:95' */
                /* Transition: '<S1350>:116' */
                /* Call Nothing */
                VeCRDB_y_OBCM_CSSts_CallStatus = 4U;

                /* Transition: '<S1350>:114' */
            }
            else
            {
                /* Transition: '<S1350>:120' */
                /* Transition: '<S1350>:117' */
                /* Call Poke */
                VeCRDB_y_OBCM_CSSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1274>/Poke' */
                /* FunctionCaller: '<S1352>/Function Caller' incorporates:
                 *  Constant: '<S1352>/Constant'
                 */
                /* Event: '<S1350>:38' */
                Rte_Call_PokeIDCR_e_OBCM_CSSts_PokeIDCR_e_OBCM_CSSts
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__pv, false);

                /* End of Outputs for SubSystem: '<S1274>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1350>:111' */
        /* Call Fsft */
        VeCRDB_y_OBCM_CSSts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1274>/Fsft' */
        /* FunctionCaller: '<S1351>/Function Caller' */
        /* Event: '<S1350>:39' */
        Rte_Call_FsftIDCR_e_OBCM_CSSts_FsftIDCR_e_OBCM_CSSts();

        /* End of Outputs for SubSystem: '<S1274>/Fsft' */
        /* Transition: '<S1350>:113' */
        /* Transition: '<S1350>:115' */
        /* Transition: '<S1350>:114' */
    }

    /* End of Chart: '<S1347>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_OBCM_Timeout_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_OBCM_Timeout_ErrSts'
     */
    /* Transition: '<S1350>:107' */
    rtb_TmpSignalConversionAtVeC_lh = Rte_Read_VeCRDB_b_OBCM_Timeout_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_O);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_OBCM_Timeout_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1356>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_OBCM_Timeout_SigSts_Value(&tmpRead_5d);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1353>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_5d) & 3U) != 0U)
    {
        /* Transition: '<S1356>:100' */
        /* Transition: '<S1356>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1356>:104' */
        /*  MM */
        if ((((uint32)tmpRead_5d) & 4U) != 0U)
        {
            /* Transition: '<S1356>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1356>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1356>:110' */
                /* Call Tmot */
                VeCRDB_y_OBCM_Timeout_CallStatus = 3U;

                /* Event: '<S1356>:40' */
                /* Transition: '<S1356>:115' */
                /* Transition: '<S1356>:114' */
            }
        }
        else
        {
            /* Transition: '<S1356>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_lh) == 133)
            {
                /* Transition: '<S1356>:95' */
                /* Transition: '<S1356>:116' */
                /* Call Nothing */
                VeCRDB_y_OBCM_Timeout_CallStatus = 4U;

                /* Transition: '<S1356>:114' */
            }
            else
            {
                /* Transition: '<S1356>:120' */
                /* Transition: '<S1356>:117' */
                /* Call Poke */
                VeCRDB_y_OBCM_Timeout_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1275>/Poke' */
                /* FunctionCaller: '<S1358>/Function Caller' */
                /* Event: '<S1356>:38' */
                Rte_Call_PokeIDCR_b_OBCM_Timeout_PokeIDCR_b_OBCM_Timeout
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_O);

                /* End of Outputs for SubSystem: '<S1275>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1356>:111' */
        /* Call Fsft */
        VeCRDB_y_OBCM_Timeout_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1275>/Fsft' */
        /* FunctionCaller: '<S1357>/Function Caller' */
        /* Event: '<S1356>:39' */
        Rte_Call_FsftIDCR_b_OBCM_Timeout_FsftIDCR_b_OBCM_Timeout();

        /* End of Outputs for SubSystem: '<S1275>/Fsft' */
        /* Transition: '<S1356>:113' */
        /* Transition: '<S1356>:115' */
        /* Transition: '<S1356>:114' */
    }

    /* End of Chart: '<S1353>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_TCP_ComTerminated_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_TCP_ComTerminated_ErrSts'
     */
    /* Transition: '<S1356>:107' */
    rtb_TmpSignalConversionAtVeC_e5 = Rte_Read_VeCRDB_b_TCP_ComTerminated_Value(
        &CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_T);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCRDB_y_TCP_ComTerminated_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1361>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_TCP_ComTerminated_SigSts_Value(&tmpRead_5e);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1359>/Chart' */
    if ((((uint32)tmpRead_5e) & 3U) != 0U)
    {
        /* Transition: '<S1361>:100' */
        /* Transition: '<S1361>:103' */
        /* Transition: '<S1361>:111' */
        /* Call Fsft */
        VeCRDB_y_TCP_ComTerminated_CallStatus = 2U;

        /* Event: '<S1361>:39' */
        /* Transition: '<S1361>:113' */
        /* Transition: '<S1361>:115' */
        /* Transition: '<S1361>:114' */
    }
    else
    {
        /* Transition: '<S1361>:104' */
        /*  MM */
        if ((((uint32)tmpRead_5e) & 4U) != 0U)
        {
            /* Transition: '<S1361>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1361>:88' */
                /* Transition: '<S1361>:111' */
                /* Call Fsft */
                VeCRDB_y_TCP_ComTerminated_CallStatus = 2U;

                /* Event: '<S1361>:39' */
                /* Transition: '<S1361>:113' */
                /* Transition: '<S1361>:115' */
                /* Transition: '<S1361>:114' */
            }
            else
            {
                /* Transition: '<S1361>:110' */
                /* Call Tmot */
                VeCRDB_y_TCP_ComTerminated_CallStatus = 3U;

                /* Event: '<S1361>:40' */
                /* Transition: '<S1361>:115' */
                /* Transition: '<S1361>:114' */
            }
        }
        else
        {
            /* Transition: '<S1361>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_e5) == 133)
            {
                /* Transition: '<S1361>:95' */
                /* Transition: '<S1361>:116' */
                /* Call Nothing */
                VeCRDB_y_TCP_ComTerminated_CallStatus = 4U;

                /* Transition: '<S1361>:114' */
            }
            else
            {
                /* Transition: '<S1361>:120' */
                /* Transition: '<S1361>:117' */
                /* Call Poke */
                VeCRDB_y_TCP_ComTerminated_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1276>/Poke' */
                /* FunctionCaller: '<S1362>/Function Caller' */
                /* Event: '<S1361>:38' */
                Rte_Call_PokeIDCR_b_TCPCommTerminated_PokeIDCR_b_TCPCommTerminated
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_T);

                /* End of Outputs for SubSystem: '<S1276>/Poke' */
            }
        }
    }

    /* End of Chart: '<S1359>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_ACOutputCurrent1_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_ACOutputCurrent1_ErrSts'
     */
    /* Transition: '<S1361>:107' */
    rtb_TmpSignalConversionAtVeSR_g = Rte_Read_VeSR1B_I_ACOutputCurrent1_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_I_A);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_ACOutputCurrent1_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1379>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_ACOutputCurrent1_SigSts_Value(&tmpRead_5f);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1376>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_5f) & 3U) != 0U)
    {
        /* Transition: '<S1379>:100' */
        /* Transition: '<S1379>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1379>:104' */
        /*  MM */
        if ((((uint32)tmpRead_5f) & 4U) != 0U)
        {
            /* Transition: '<S1379>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1379>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1379>:110' */
                /* Call Tmot */
                VeSR1B_y_ACOutputCurrent1_CallStatus = 3U;

                /* Event: '<S1379>:40' */
                /* Transition: '<S1379>:115' */
                /* Transition: '<S1379>:114' */
            }
        }
        else
        {
            /* Transition: '<S1379>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_g) == 133)
            {
                /* Transition: '<S1379>:95' */
                /* Transition: '<S1379>:116' */
                /* Call Nothing */
                VeSR1B_y_ACOutputCurrent1_CallStatus = 4U;

                /* Transition: '<S1379>:114' */
            }
            else
            {
                /* Transition: '<S1379>:120' */
                if ((((uint32)tmpRead_5f) & 8U) != 0U)
                {
                    /* Transition: '<S1379>:122' */
                    /* Transition: '<S1379>:125' */
                    FA_out_n0 = true;

                    /* Transition: '<S1379>:126' */
                }
                else
                {
                    /* Transition: '<S1379>:124' */
                    FA_out_n0 = false;
                }

                /* Transition: '<S1379>:117' */
                /* Call Poke */
                VeSR1B_y_ACOutputCurrent1_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1363>/Poke' */
                /* FunctionCaller: '<S1381>/Function Caller' */
                /* Event: '<S1379>:38' */
                Rte_Call_PokeIDCR_I_ACOutCurrent1_PokeIDCR_I_ACOutCurrent1
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_I_A, FA_out_n0);

                /* End of Outputs for SubSystem: '<S1363>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1379>:111' */
        /* Call Fsft */
        VeSR1B_y_ACOutputCurrent1_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1363>/Fsft' */
        /* FunctionCaller: '<S1380>/Function Caller' */
        /* Event: '<S1379>:39' */
        Rte_Call_FsftIDCR_I_ACOutCurrent1_FsftIDCR_I_ACOutCurrent1();

        /* End of Outputs for SubSystem: '<S1363>/Fsft' */
        /* Transition: '<S1379>:113' */
        /* Transition: '<S1379>:115' */
        /* Transition: '<S1379>:114' */
    }

    /* End of Chart: '<S1376>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_ACOutputCurrent2_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_ACOutputCurrent2_ErrSts'
     */
    /* Transition: '<S1379>:107' */
    rtb_TmpSignalConversionAtVeS_dw = Rte_Read_VeSR1B_I_ACOutputCurrent2_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_I_f);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_ACOutputCurrent2_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1385>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_ACOutputCurrent2_SigSts_Value(&tmpRead_5g);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1382>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_5g) & 3U) != 0U)
    {
        /* Transition: '<S1385>:100' */
        /* Transition: '<S1385>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1385>:104' */
        /*  MM */
        if ((((uint32)tmpRead_5g) & 4U) != 0U)
        {
            /* Transition: '<S1385>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1385>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1385>:110' */
                /* Call Tmot */
                VeSR1B_y_ACOutputCurrent2_CallStatus = 3U;

                /* Event: '<S1385>:40' */
                /* Transition: '<S1385>:115' */
                /* Transition: '<S1385>:114' */
            }
        }
        else
        {
            /* Transition: '<S1385>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_dw) == 133)
            {
                /* Transition: '<S1385>:95' */
                /* Transition: '<S1385>:116' */
                /* Call Nothing */
                VeSR1B_y_ACOutputCurrent2_CallStatus = 4U;

                /* Transition: '<S1385>:114' */
            }
            else
            {
                /* Transition: '<S1385>:120' */
                if ((((uint32)tmpRead_5g) & 8U) != 0U)
                {
                    /* Transition: '<S1385>:122' */
                    /* Transition: '<S1385>:125' */
                    FA_out_n0 = true;

                    /* Transition: '<S1385>:126' */
                }
                else
                {
                    /* Transition: '<S1385>:124' */
                    FA_out_n0 = false;
                }

                /* Transition: '<S1385>:117' */
                /* Call Poke */
                VeSR1B_y_ACOutputCurrent2_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1364>/Poke' */
                /* FunctionCaller: '<S1387>/Function Caller' */
                /* Event: '<S1385>:38' */
                Rte_Call_PokeIDCR_I_ACOutCurrent2_PokeIDCR_I_ACOutCurrent2
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_I_f, FA_out_n0);

                /* End of Outputs for SubSystem: '<S1364>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1385>:111' */
        /* Call Fsft */
        VeSR1B_y_ACOutputCurrent2_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1364>/Fsft' */
        /* FunctionCaller: '<S1386>/Function Caller' */
        /* Event: '<S1385>:39' */
        Rte_Call_FsftIDCR_I_ACOutCurrent2_FsftIDCR_I_ACOutCurrent2();

        /* End of Outputs for SubSystem: '<S1364>/Fsft' */
        /* Transition: '<S1385>:113' */
        /* Transition: '<S1385>:115' */
        /* Transition: '<S1385>:114' */
    }

    /* End of Chart: '<S1382>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_ACOutputCurrent3_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_ACOutputCurrent3_ErrSts'
     */
    /* Transition: '<S1385>:107' */
    rtb_TmpSignalConversionAtVeS_jn = Rte_Read_VeSR1B_I_ACOutputCurrent3_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_I_b);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_ACOutputCurrent3_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1391>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_ACOutputCurrent3_SigSts_Value(&tmpRead_5h);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1388>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_5h) & 3U) != 0U)
    {
        /* Transition: '<S1391>:100' */
        /* Transition: '<S1391>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1391>:104' */
        /*  MM */
        if ((((uint32)tmpRead_5h) & 4U) != 0U)
        {
            /* Transition: '<S1391>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1391>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1391>:110' */
                /* Call Tmot */
                VeSR1B_y_ACOutputCurrent3_CallStatus = 3U;

                /* Event: '<S1391>:40' */
                /* Transition: '<S1391>:115' */
                /* Transition: '<S1391>:114' */
            }
        }
        else
        {
            /* Transition: '<S1391>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_jn) == 133)
            {
                /* Transition: '<S1391>:95' */
                /* Transition: '<S1391>:116' */
                /* Call Nothing */
                VeSR1B_y_ACOutputCurrent3_CallStatus = 4U;

                /* Transition: '<S1391>:114' */
            }
            else
            {
                /* Transition: '<S1391>:120' */
                if ((((uint32)tmpRead_5h) & 8U) != 0U)
                {
                    /* Transition: '<S1391>:122' */
                    /* Transition: '<S1391>:125' */
                    FA_out_n0 = true;

                    /* Transition: '<S1391>:126' */
                }
                else
                {
                    /* Transition: '<S1391>:124' */
                    FA_out_n0 = false;
                }

                /* Transition: '<S1391>:117' */
                /* Call Poke */
                VeSR1B_y_ACOutputCurrent3_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1365>/Poke' */
                /* FunctionCaller: '<S1393>/Function Caller' */
                /* Event: '<S1391>:38' */
                Rte_Call_PokeIDCR_I_ACOutCurrent3_PokeIDCR_I_ACOutCurrent3
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_I_b, FA_out_n0);

                /* End of Outputs for SubSystem: '<S1365>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1391>:111' */
        /* Call Fsft */
        VeSR1B_y_ACOutputCurrent3_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1365>/Fsft' */
        /* FunctionCaller: '<S1392>/Function Caller' */
        /* Event: '<S1391>:39' */
        Rte_Call_FsftIDCR_I_ACOutCurrent3_FsftIDCR_I_ACOutCurrent3();

        /* End of Outputs for SubSystem: '<S1365>/Fsft' */
        /* Transition: '<S1391>:113' */
        /* Transition: '<S1391>:115' */
        /* Transition: '<S1391>:114' */
    }

    /* End of Chart: '<S1388>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_ACOutputVoltage1_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_ACOutputVoltage1_ErrSts'
     */
    /* Transition: '<S1391>:107' */
    rtb_TmpSignalConversionAtVeSR_p = Rte_Read_VeSR1B_U_ACOutputVoltage1_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_U_A);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_ACOutputVoltage1_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1397>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_ACOutputVoltage1_SigSts_Value(&tmpRead_5i);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1394>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_5i) & 3U) != 0U)
    {
        /* Transition: '<S1397>:100' */
        /* Transition: '<S1397>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1397>:104' */
        /*  MM */
        if ((((uint32)tmpRead_5i) & 4U) != 0U)
        {
            /* Transition: '<S1397>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1397>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1397>:110' */
                /* Call Tmot */
                VeSR1B_y_ACOutputVoltage1_CallStatus = 3U;

                /* Event: '<S1397>:40' */
                /* Transition: '<S1397>:115' */
                /* Transition: '<S1397>:114' */
            }
        }
        else
        {
            /* Transition: '<S1397>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_p) == 133)
            {
                /* Transition: '<S1397>:95' */
                /* Transition: '<S1397>:116' */
                /* Call Nothing */
                VeSR1B_y_ACOutputVoltage1_CallStatus = 4U;

                /* Transition: '<S1397>:114' */
            }
            else
            {
                /* Transition: '<S1397>:120' */
                if ((((uint32)tmpRead_5i) & 8U) != 0U)
                {
                    /* Transition: '<S1397>:122' */
                    /* Transition: '<S1397>:125' */
                    FA_out_n0 = true;

                    /* Transition: '<S1397>:126' */
                }
                else
                {
                    /* Transition: '<S1397>:124' */
                    FA_out_n0 = false;
                }

                /* Transition: '<S1397>:117' */
                /* Call Poke */
                VeSR1B_y_ACOutputVoltage1_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1366>/Poke' */
                /* FunctionCaller: '<S1399>/Function Caller' */
                /* Event: '<S1397>:38' */
                Rte_Call_PokeIDCR_U_ACOutVoltage1_PokeIDCR_U_ACOutVoltage1
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_U_A, FA_out_n0);

                /* End of Outputs for SubSystem: '<S1366>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1397>:111' */
        /* Call Fsft */
        VeSR1B_y_ACOutputVoltage1_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1366>/Fsft' */
        /* FunctionCaller: '<S1398>/Function Caller' */
        /* Event: '<S1397>:39' */
        Rte_Call_FsftIDCR_U_ACOutVoltage1_FsftIDCR_U_ACOutVoltage1();

        /* End of Outputs for SubSystem: '<S1366>/Fsft' */
        /* Transition: '<S1397>:113' */
        /* Transition: '<S1397>:115' */
        /* Transition: '<S1397>:114' */
    }

    /* End of Chart: '<S1394>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_ACOutputVoltage2_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_ACOutputVoltage2_ErrSts'
     */
    /* Transition: '<S1397>:107' */
    rtb_TmpSignalConversionAtVeS_n3 = Rte_Read_VeSR1B_U_ACOutputVoltage2_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_U_p);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_ACOutputVoltage2_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1403>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_ACOutputVoltage2_SigSts_Value(&tmpRead_5j);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1400>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_5j) & 3U) != 0U)
    {
        /* Transition: '<S1403>:100' */
        /* Transition: '<S1403>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1403>:104' */
        /*  MM */
        if ((((uint32)tmpRead_5j) & 4U) != 0U)
        {
            /* Transition: '<S1403>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1403>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1403>:110' */
                /* Call Tmot */
                VeSR1B_y_ACOutputVoltage2_CallStatus = 3U;

                /* Event: '<S1403>:40' */
                /* Transition: '<S1403>:115' */
                /* Transition: '<S1403>:114' */
            }
        }
        else
        {
            /* Transition: '<S1403>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_n3) == 133)
            {
                /* Transition: '<S1403>:95' */
                /* Transition: '<S1403>:116' */
                /* Call Nothing */
                VeSR1B_y_ACOutputVoltage2_CallStatus = 4U;

                /* Transition: '<S1403>:114' */
            }
            else
            {
                /* Transition: '<S1403>:120' */
                if ((((uint32)tmpRead_5j) & 8U) != 0U)
                {
                    /* Transition: '<S1403>:122' */
                    /* Transition: '<S1403>:125' */
                    FA_out_n0 = true;

                    /* Transition: '<S1403>:126' */
                }
                else
                {
                    /* Transition: '<S1403>:124' */
                    FA_out_n0 = false;
                }

                /* Transition: '<S1403>:117' */
                /* Call Poke */
                VeSR1B_y_ACOutputVoltage2_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1367>/Poke' */
                /* FunctionCaller: '<S1405>/Function Caller' */
                /* Event: '<S1403>:38' */
                Rte_Call_PokeIDCR_U_ACOutVoltage2_PokeIDCR_U_ACOutVoltage2
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_U_p, FA_out_n0);

                /* End of Outputs for SubSystem: '<S1367>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1403>:111' */
        /* Call Fsft */
        VeSR1B_y_ACOutputVoltage2_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1367>/Fsft' */
        /* FunctionCaller: '<S1404>/Function Caller' */
        /* Event: '<S1403>:39' */
        Rte_Call_FsftIDCR_U_ACOutVoltage2_FsftIDCR_U_ACOutVoltage2();

        /* End of Outputs for SubSystem: '<S1367>/Fsft' */
        /* Transition: '<S1403>:113' */
        /* Transition: '<S1403>:115' */
        /* Transition: '<S1403>:114' */
    }

    /* End of Chart: '<S1400>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_ACOutputVoltage3_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_ACOutputVoltage3_ErrSts'
     */
    /* Transition: '<S1403>:107' */
    rtb_TmpSignalConversionAtVeS_ag = Rte_Read_VeSR1B_U_ACOutputVoltage3_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_U_m);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_ACOutputVoltage3_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1409>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_ACOutputVoltage3_SigSts_Value(&tmpRead_5k);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1406>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_5k) & 3U) != 0U)
    {
        /* Transition: '<S1409>:100' */
        /* Transition: '<S1409>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1409>:104' */
        /*  MM */
        if ((((uint32)tmpRead_5k) & 4U) != 0U)
        {
            /* Transition: '<S1409>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1409>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1409>:110' */
                /* Call Tmot */
                VeSR1B_y_ACOutputVoltage3_CallStatus = 3U;

                /* Event: '<S1409>:40' */
                /* Transition: '<S1409>:115' */
                /* Transition: '<S1409>:114' */
            }
        }
        else
        {
            /* Transition: '<S1409>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_ag) == 133)
            {
                /* Transition: '<S1409>:95' */
                /* Transition: '<S1409>:116' */
                /* Call Nothing */
                VeSR1B_y_ACOutputVoltage3_CallStatus = 4U;

                /* Transition: '<S1409>:114' */
            }
            else
            {
                /* Transition: '<S1409>:120' */
                if ((((uint32)tmpRead_5k) & 8U) != 0U)
                {
                    /* Transition: '<S1409>:122' */
                    /* Transition: '<S1409>:125' */
                    FA_out_n0 = true;

                    /* Transition: '<S1409>:126' */
                }
                else
                {
                    /* Transition: '<S1409>:124' */
                    FA_out_n0 = false;
                }

                /* Transition: '<S1409>:117' */
                /* Call Poke */
                VeSR1B_y_ACOutputVoltage3_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1368>/Poke' */
                /* FunctionCaller: '<S1411>/Function Caller' */
                /* Event: '<S1409>:38' */
                Rte_Call_PokeIDCR_U_ACOutVoltage3_PokeIDCR_U_ACOutVoltage3
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_U_m, FA_out_n0);

                /* End of Outputs for SubSystem: '<S1368>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1409>:111' */
        /* Call Fsft */
        VeSR1B_y_ACOutputVoltage3_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1368>/Fsft' */
        /* FunctionCaller: '<S1410>/Function Caller' */
        /* Event: '<S1409>:39' */
        Rte_Call_FsftIDCR_U_ACOutVoltage3_FsftIDCR_U_ACOutVoltage3();

        /* End of Outputs for SubSystem: '<S1368>/Fsft' */
        /* Transition: '<S1409>:113' */
        /* Transition: '<S1409>:115' */
        /* Transition: '<S1409>:114' */
    }

    /* End of Chart: '<S1406>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_ACOutput_Frequency_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_ACOutput_Frequency_ErrSts'
     */
    /* Transition: '<S1409>:107' */
    rtb_TmpSignalConversionAtVeSR_i = Rte_Read_VeSR1B_y_ACOutput_Frequency_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_A);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_ACOutput_Frequency_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1415>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_ACOutput_Frequency_SigSts_Value(&tmpRead_5l);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1412>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_5l) & 3U) != 0U)
    {
        /* Transition: '<S1415>:100' */
        /* Transition: '<S1415>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1415>:104' */
        /*  MM */
        if ((((uint32)tmpRead_5l) & 4U) != 0U)
        {
            /* Transition: '<S1415>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1415>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1415>:110' */
                /* Call Tmot */
                VeSR1B_y_ACOutput_Frequency_CallStatus = 3U;

                /* Event: '<S1415>:40' */
                /* Transition: '<S1415>:115' */
                /* Transition: '<S1415>:114' */
            }
        }
        else
        {
            /* Transition: '<S1415>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_i) == 133)
            {
                /* Transition: '<S1415>:95' */
                /* Transition: '<S1415>:116' */
                /* Call Nothing */
                VeSR1B_y_ACOutput_Frequency_CallStatus = 4U;

                /* Transition: '<S1415>:114' */
            }
            else
            {
                /* Transition: '<S1415>:120' */
                /* Transition: '<S1415>:117' */
                /* Call Poke */
                VeSR1B_y_ACOutput_Frequency_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1369>/Poke' */
                /* DataTypeConversion: '<S1417>/Data Type Conversion' */
                /* Event: '<S1415>:38' */
                tmp = fmodf(floorf
                            (CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_A),
                            256.0F);

                /* FunctionCaller: '<S1417>/Function Caller' incorporates:
                 *  Constant: '<S1417>/Constant'
                 *  DataTypeConversion: '<S1417>/Data Type Conversion'
                 */
                Rte_Call_PokeIDCR_f_ACOutFreq_PokeIDCR_f_ACOutFreq((uint8)((tmp <
                    0.0F) ? ((sint32)((uint8)((sint32)(-((sint32)((sint8)((uint8)
                    ((float32)(-tmp))))))))) : ((sint32)((uint8)tmp))), false);

                /* End of Outputs for SubSystem: '<S1369>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1415>:111' */
        /* Call Fsft */
        VeSR1B_y_ACOutput_Frequency_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1369>/Fsft' */
        /* FunctionCaller: '<S1416>/Function Caller' */
        /* Event: '<S1415>:39' */
        Rte_Call_FsftIDCR_f_ACOutFreq_FsftIDCR_f_ACOutFreq();

        /* End of Outputs for SubSystem: '<S1369>/Fsft' */
        /* Transition: '<S1415>:113' */
        /* Transition: '<S1415>:115' */
        /* Transition: '<S1415>:114' */
    }

    /* End of Chart: '<S1412>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_DCInputCurrent_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_DCInputCurrent_ErrSts'
     */
    /* Transition: '<S1415>:107' */
    rtb_TmpSignalConversionAtVeS_fs = Rte_Read_VeSR1B_I_DCInputCurrent_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_I_D);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_DCInputCurrent_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1421>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_DCInputCurrent_SigSts_Value(&tmpRead_5m);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1418>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_5m) & 3U) != 0U)
    {
        /* Transition: '<S1421>:100' */
        /* Transition: '<S1421>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1421>:104' */
        /*  MM */
        if ((((uint32)tmpRead_5m) & 4U) != 0U)
        {
            /* Transition: '<S1421>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1421>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1421>:110' */
                /* Call Tmot */
                VeSR1B_y_DCInputCurrent_CallStatus = 3U;

                /* Event: '<S1421>:40' */
                /* Transition: '<S1421>:115' */
                /* Transition: '<S1421>:114' */
            }
        }
        else
        {
            /* Transition: '<S1421>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_fs) == 133)
            {
                /* Transition: '<S1421>:95' */
                /* Transition: '<S1421>:116' */
                /* Call Nothing */
                VeSR1B_y_DCInputCurrent_CallStatus = 4U;

                /* Transition: '<S1421>:114' */
            }
            else
            {
                /* Transition: '<S1421>:120' */
                if ((((uint32)tmpRead_5m) & 8U) != 0U)
                {
                    /* Transition: '<S1421>:122' */
                    /* Transition: '<S1421>:125' */
                    FA_out_n0 = true;

                    /* Transition: '<S1421>:126' */
                }
                else
                {
                    /* Transition: '<S1421>:124' */
                    FA_out_n0 = false;
                }

                /* Transition: '<S1421>:117' */
                /* Call Poke */
                VeSR1B_y_DCInputCurrent_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1370>/Poke' */
                /* FunctionCaller: '<S1423>/Function Caller' */
                /* Event: '<S1421>:38' */
                Rte_Call_PokeIDCR_I_DCInCurrent_PokeIDCR_I_DCInCurrent
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_I_D, FA_out_n0);

                /* End of Outputs for SubSystem: '<S1370>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1421>:111' */
        /* Call Fsft */
        VeSR1B_y_DCInputCurrent_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1370>/Fsft' */
        /* FunctionCaller: '<S1422>/Function Caller' */
        /* Event: '<S1421>:39' */
        Rte_Call_FsftIDCR_I_DCInCurrent_FsftIDCR_I_DCInCurrent();

        /* End of Outputs for SubSystem: '<S1370>/Fsft' */
        /* Transition: '<S1421>:113' */
        /* Transition: '<S1421>:115' */
        /* Transition: '<S1421>:114' */
    }

    /* End of Chart: '<S1418>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_DCInputVoltage_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_DCInputVoltage_ErrSts'
     */
    /* Transition: '<S1421>:107' */
    rtb_TmpSignalConversionAtVeS_ab = Rte_Read_VeSR1B_U_DCInputVoltage_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_U_D);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_DCInputVoltage_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1427>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_DCInputVoltage_SigSts_Value(&tmpRead_5n);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1424>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_5n) & 3U) != 0U)
    {
        /* Transition: '<S1427>:100' */
        /* Transition: '<S1427>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1427>:104' */
        /*  MM */
        if ((((uint32)tmpRead_5n) & 4U) != 0U)
        {
            /* Transition: '<S1427>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1427>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1427>:110' */
                /* Call Tmot */
                VeSR1B_y_DCInputVoltage_CallStatus = 3U;

                /* Event: '<S1427>:40' */
                /* Transition: '<S1427>:115' */
                /* Transition: '<S1427>:114' */
            }
        }
        else
        {
            /* Transition: '<S1427>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_ab) == 133)
            {
                /* Transition: '<S1427>:95' */
                /* Transition: '<S1427>:116' */
                /* Call Nothing */
                VeSR1B_y_DCInputVoltage_CallStatus = 4U;

                /* Transition: '<S1427>:114' */
            }
            else
            {
                /* Transition: '<S1427>:120' */
                if ((((uint32)tmpRead_5n) & 8U) != 0U)
                {
                    /* Transition: '<S1427>:122' */
                    /* Transition: '<S1427>:125' */
                    FA_out_n0 = true;

                    /* Transition: '<S1427>:126' */
                }
                else
                {
                    /* Transition: '<S1427>:124' */
                    FA_out_n0 = false;
                }

                /* Transition: '<S1427>:117' */
                /* Call Poke */
                VeSR1B_y_DCInputVoltage_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1371>/Poke' */
                /* FunctionCaller: '<S1429>/Function Caller' */
                /* Event: '<S1427>:38' */
                Rte_Call_PokeIDCR_U_DCInVoltage_PokeIDCR_U_DCInVoltage
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_U_D, FA_out_n0);

                /* End of Outputs for SubSystem: '<S1371>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1427>:111' */
        /* Call Fsft */
        VeSR1B_y_DCInputVoltage_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1371>/Fsft' */
        /* FunctionCaller: '<S1428>/Function Caller' */
        /* Event: '<S1427>:39' */
        Rte_Call_FsftIDCR_U_DCInVoltage_FsftIDCR_U_DCInVoltage();

        /* End of Outputs for SubSystem: '<S1371>/Fsft' */
        /* Transition: '<S1427>:113' */
        /* Transition: '<S1427>:115' */
        /* Transition: '<S1427>:114' */
    }

    /* End of Chart: '<S1424>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_DischargeFaultStatus_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_DischargeFaultStatus_ErrSts'
     */
    /* Transition: '<S1427>:107' */
    rtb_TmpSignalConversionAtVeS_fo =
        Rte_Read_VeSR1B_y_DischargeFaultStatus_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_D);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_DischargeFaultStatus_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1433>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_DischargeFaultStatus_SigSts_Value(&tmpRead_5o);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1430>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_5o) & 3U) != 0U)
    {
        /* Transition: '<S1433>:100' */
        /* Transition: '<S1433>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1433>:104' */
        /*  MM */
        if ((((uint32)tmpRead_5o) & 4U) != 0U)
        {
            /* Transition: '<S1433>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1433>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1433>:110' */
                /* Call Tmot */
                VeSR1B_y_DischargeFaultStatus_CallStatus = 3U;

                /* Event: '<S1433>:40' */
                /* Transition: '<S1433>:115' */
                /* Transition: '<S1433>:114' */
            }
        }
        else
        {
            /* Transition: '<S1433>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_fo) == 133)
            {
                /* Transition: '<S1433>:95' */
                /* Transition: '<S1433>:116' */
                /* Call Nothing */
                VeSR1B_y_DischargeFaultStatus_CallStatus = 4U;

                /* Transition: '<S1433>:114' */
            }
            else
            {
                /* Transition: '<S1433>:120' */
                if ((((uint32)tmpRead_5o) & 8U) != 0U)
                {
                    /* Transition: '<S1433>:122' */
                    /* Transition: '<S1433>:125' */
                    FA_out_n0 = true;

                    /* Transition: '<S1433>:126' */
                }
                else
                {
                    /* Transition: '<S1433>:124' */
                    FA_out_n0 = false;
                }

                /* Transition: '<S1433>:117' */
                /* Call Poke */
                VeSR1B_y_DischargeFaultStatus_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1372>/Poke' */
                /* FunctionCaller: '<S1435>/Function Caller' */
                /* Event: '<S1433>:38' */
                Rte_Call_PokeIDCR_e_DschrgFaultSts_PokeIDCR_e_DschrgFaultSts
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_D, FA_out_n0);

                /* End of Outputs for SubSystem: '<S1372>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1433>:111' */
        /* Call Fsft */
        VeSR1B_y_DischargeFaultStatus_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1372>/Fsft' */
        /* FunctionCaller: '<S1434>/Function Caller' */
        /* Event: '<S1433>:39' */
        Rte_Call_FsftIDCR_e_DschrgFaultSts_FsftIDCR_e_DschrgFaultSts();

        /* End of Outputs for SubSystem: '<S1372>/Fsft' */
        /* Transition: '<S1433>:113' */
        /* Transition: '<S1433>:115' */
        /* Transition: '<S1433>:114' */
    }

    /* End of Chart: '<S1430>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_b_IDCM_GFCI_Fault_Status' incorporates:
     *  Inport: '<Root>/VeSR1B_y_IDCM_GFCI_Fault_Status_SigSts'
     */
    /* Transition: '<S1433>:107' */
#if Rte_SysCon_VrntCR2B_IDCMGFCIFaultStatus

    /* Outputs for Atomic SubSystem: '<S22>/IDCM_GFCI_Fault_Status' */
    /* SignalConversion generated from: '<S2>/VeSR1B_b_IDCM_GFCI_Fault_Status' incorporates:
     *  Inport: '<Root>/VeSR1B_b_IDCM_GFCI_Fault_Status'
     */
    rtb_TmpSignalConversionAtVeS_gw =
        Rte_Read_VeSR1B_b_IDCM_GFCI_Fault_Status_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_d);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1440>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_IDCM_GFCI_Fault_Status_SigSts_Value(&tmpRead_5p);

    /* Outputs for Atomic SubSystem: '<S1373>/IDCM_GFCI_Fault_Status' */
    /* Chart: '<S1437>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_y_IDCM_GFCI_Fault_Status_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_5p) & 3U) != 0U)
    {
        /* Transition: '<S1440>:100' */
        /* Transition: '<S1440>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1440>:104' */
        /*  MM */
        if ((((uint32)tmpRead_5p) & 4U) != 0U)
        {
            /* Transition: '<S1440>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1440>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1440>:110' */
                /* Call Tmot */
                VeSR1B_y_IDCM_GFCI_Fault_Status_CallStatus = 3U;

                /* Event: '<S1440>:40' */
                /* Transition: '<S1440>:115' */
                /* Transition: '<S1440>:114' */
            }
        }
        else
        {
            /* Transition: '<S1440>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_gw) == 133)
            {
                /* Transition: '<S1440>:95' */
                /* Transition: '<S1440>:116' */
                /* Call Nothing */
                VeSR1B_y_IDCM_GFCI_Fault_Status_CallStatus = 4U;

                /* Transition: '<S1440>:114' */
            }
            else
            {
                /* Transition: '<S1440>:120' */
                /* Transition: '<S1440>:117' */
                /* Call Poke */
                VeSR1B_y_IDCM_GFCI_Fault_Status_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1436>/Poke' */
                /* FunctionCaller: '<S1442>/Function Caller' incorporates:
                 *  Constant: '<S1442>/Constant'
                 */
                /* Event: '<S1440>:38' */
                Rte_Call_PokeIDCR_b_IDCM_GFCI_FaultSts_PokeIDCR_b_IDCM_GFCI_FaultSts
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_d, false);

                /* End of Outputs for SubSystem: '<S1436>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1440>:111' */
        /* Call Fsft */
        VeSR1B_y_IDCM_GFCI_Fault_Status_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1436>/Fsft' */
        /* FunctionCaller: '<S1441>/Function Caller' */
        /* Event: '<S1440>:39' */
        Rte_Call_FsftIDCR_b_IDCM_GFCI_FaultSts_FsftIDCR_b_IDCM_GFCI_FaultSts();

        /* End of Outputs for SubSystem: '<S1436>/Fsft' */
        /* Transition: '<S1440>:113' */
        /* Transition: '<S1440>:115' */
        /* Transition: '<S1440>:114' */
    }

    /* End of Chart: '<S1437>/Chart' */
    /* End of Outputs for SubSystem: '<S1373>/IDCM_GFCI_Fault_Status' */
    /* End of Outputs for SubSystem: '<S22>/IDCM_GFCI_Fault_Status' */
    /* Transition: '<S1440>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeSR1B_b_IDCM_GFCI_Fault_Status' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_V2X_Frequency_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_V2X_Frequency_ErrSts'
     */
    rtb_TmpSignalConversionAtVeS_dr = Rte_Read_VeSR1B_P_V2X_Frequency_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_P_V);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_V2X_Frequency_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1446>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_V2X_Frequency_SigSts_Value(&tmpRead_5q);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1443>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_5q) & 3U) != 0U)
    {
        /* Transition: '<S1446>:100' */
        /* Transition: '<S1446>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1446>:104' */
        /*  MM */
        if ((((uint32)tmpRead_5q) & 4U) != 0U)
        {
            /* Transition: '<S1446>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1446>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1446>:110' */
                /* Call Tmot */
                VeSR1B_y_V2X_Frequency_CallStatus = 3U;

                /* Event: '<S1446>:40' */
                /* Transition: '<S1446>:115' */
                /* Transition: '<S1446>:114' */
            }
        }
        else
        {
            /* Transition: '<S1446>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_dr) == 133)
            {
                /* Transition: '<S1446>:95' */
                /* Transition: '<S1446>:116' */
                /* Call Nothing */
                VeSR1B_y_V2X_Frequency_CallStatus = 4U;

                /* Transition: '<S1446>:114' */
            }
            else
            {
                /* Transition: '<S1446>:120' */
                /* Transition: '<S1446>:117' */
                /* Call Poke */
                VeSR1B_y_V2X_Frequency_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1374>/Poke' */
                /* FunctionCaller: '<S1448>/Function Caller' incorporates:
                 *  Constant: '<S1448>/Constant'
                 */
                /* Event: '<S1446>:38' */
                Rte_Call_PokeIDCR_f_V2XFrequency_PokeIDCR_f_V2XFrequency
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_P_V, false);

                /* End of Outputs for SubSystem: '<S1374>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1446>:111' */
        /* Call Fsft */
        VeSR1B_y_V2X_Frequency_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1374>/Fsft' */
        /* FunctionCaller: '<S1447>/Function Caller' */
        /* Event: '<S1446>:39' */
        Rte_Call_FsftIDCR_f_V2XFrequency_FsftIDCR_f_V2XFrequency();

        /* End of Outputs for SubSystem: '<S1374>/Fsft' */
        /* Transition: '<S1446>:113' */
        /* Transition: '<S1446>:115' */
        /* Transition: '<S1446>:114' */
    }

    /* End of Chart: '<S1443>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_V2X_Status_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_V2X_Status_ErrSts'
     */
    /* Transition: '<S1446>:107' */
    rtb_TmpSignalConversionAtVeS_ia = Rte_Read_VeSR1B_y_V2X_Status_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_V);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_V2X_Status_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1452>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_V2X_Status_SigSts_Value(&tmpRead_5r);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1449>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_5r) & 3U) != 0U)
    {
        /* Transition: '<S1452>:100' */
        /* Transition: '<S1452>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1452>:104' */
        /*  MM */
        if ((((uint32)tmpRead_5r) & 4U) != 0U)
        {
            /* Transition: '<S1452>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1452>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1452>:110' */
                /* Call Tmot */
                VeSR1B_y_V2X_Status_CallStatus = 3U;

                /* Event: '<S1452>:40' */
                /* Transition: '<S1452>:115' */
                /* Transition: '<S1452>:114' */
            }
        }
        else
        {
            /* Transition: '<S1452>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_ia) == 133)
            {
                /* Transition: '<S1452>:95' */
                /* Transition: '<S1452>:116' */
                /* Call Nothing */
                VeSR1B_y_V2X_Status_CallStatus = 4U;

                /* Transition: '<S1452>:114' */
            }
            else
            {
                /* Transition: '<S1452>:120' */
                /* Transition: '<S1452>:117' */
                /* Call Poke */
                VeSR1B_y_V2X_Status_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1375>/Poke' */
                /* FunctionCaller: '<S1454>/Function Caller' incorporates:
                 *  Constant: '<S1454>/Constant'
                 *  DataTypeConversion: '<S1454>/Data Type Conversion'
                 */
                /* Event: '<S1452>:38' */
                Rte_Call_PokeIDCR_b_V2XSts_PokeIDCR_b_V2XSts((((sint32)
                    CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_V) != 0) ? 1 :
                    0, false);

                /* End of Outputs for SubSystem: '<S1375>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1452>:111' */
        /* Call Fsft */
        VeSR1B_y_V2X_Status_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1375>/Fsft' */
        /* FunctionCaller: '<S1453>/Function Caller' */
        /* Event: '<S1452>:39' */
        Rte_Call_FsftIDCR_b_V2XSts_FsftIDCR_b_V2XSts();

        /* End of Outputs for SubSystem: '<S1375>/Fsft' */
        /* Transition: '<S1452>:113' */
        /* Transition: '<S1452>:115' */
        /* Transition: '<S1452>:114' */
    }

    /* End of Chart: '<S1449>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_AcOuputCurrent_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_AcOuputCurrent_ErrSts'
     */
    /* Transition: '<S1452>:107' */
    rtb_TmpSignalConversionAtVeSR_l = Rte_Read_VeSR1B_I_AcOuputCurrent_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B__fq);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_AcOuputCurrent_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1471>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_AcOuputCurrent_SigSts_Value(&tmpRead_5s);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1468>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_5s) & 3U) != 0U)
    {
        /* Transition: '<S1471>:100' */
        /* Transition: '<S1471>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1471>:104' */
        /*  MM */
        if ((((uint32)tmpRead_5s) & 4U) != 0U)
        {
            /* Transition: '<S1471>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1471>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1471>:110' */
                /* Call Tmot */
                VeSR1B_y_AcOuputCurrent_CallStatus = 3U;

                /* Event: '<S1471>:40' */
                /* Transition: '<S1471>:115' */
                /* Transition: '<S1471>:114' */
            }
        }
        else
        {
            /* Transition: '<S1471>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_l) == 133)
            {
                /* Transition: '<S1471>:95' */
                /* Transition: '<S1471>:116' */
                /* Call Nothing */
                VeSR1B_y_AcOuputCurrent_CallStatus = 4U;

                /* Transition: '<S1471>:114' */
            }
            else
            {
                /* Transition: '<S1471>:120' */
                /* Transition: '<S1471>:117' */
                /* Call Poke */
                VeSR1B_y_AcOuputCurrent_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1455>/Poke' */
                /* FunctionCaller: '<S1473>/Function Caller' incorporates:
                 *  Constant: '<S1473>/Constant'
                 */
                /* Event: '<S1471>:38' */
                Rte_Call_PokeIDCR_I_AcOutCurrent_PokeIDCR_I_AcOutCurrent
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B__fq, false);

                /* End of Outputs for SubSystem: '<S1455>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1471>:111' */
        /* Call Fsft */
        VeSR1B_y_AcOuputCurrent_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1455>/Fsft' */
        /* FunctionCaller: '<S1472>/Function Caller' */
        /* Event: '<S1471>:39' */
        Rte_Call_FsftIDCR_I_AcOutCurrent_FsftIDCR_I_AcOutCurrent();

        /* End of Outputs for SubSystem: '<S1455>/Fsft' */
        /* Transition: '<S1471>:113' */
        /* Transition: '<S1471>:115' */
        /* Transition: '<S1471>:114' */
    }

    /* End of Chart: '<S1468>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_AcOutputFrequency_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_AcOutputFrequency_ErrSts'
     */
    /* Transition: '<S1471>:107' */
    rtb_TmpSignalConversionAtVeS_o5 = Rte_Read_VeSR1B_I_AcOutputFrequency_Value(
        &CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_I_j);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_AcOutputFrequency_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1477>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_AcOutputFrequency_SigSts_Value(&tmpRead_5t);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1474>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_5t) & 3U) != 0U)
    {
        /* Transition: '<S1477>:100' */
        /* Transition: '<S1477>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1477>:104' */
        /*  MM */
        if ((((uint32)tmpRead_5t) & 4U) != 0U)
        {
            /* Transition: '<S1477>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1477>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1477>:110' */
                /* Call Tmot */
                VeSR1B_y_AcOutputFrequency_CallStatus = 3U;

                /* Event: '<S1477>:40' */
                /* Transition: '<S1477>:115' */
                /* Transition: '<S1477>:114' */
            }
        }
        else
        {
            /* Transition: '<S1477>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_o5) == 133)
            {
                /* Transition: '<S1477>:95' */
                /* Transition: '<S1477>:116' */
                /* Call Nothing */
                VeSR1B_y_AcOutputFrequency_CallStatus = 4U;

                /* Transition: '<S1477>:114' */
            }
            else
            {
                /* Transition: '<S1477>:120' */
                /* Transition: '<S1477>:117' */
                /* Call Poke */
                VeSR1B_y_AcOutputFrequency_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1456>/Poke' */
                /* DataTypeConversion: '<S1479>/Data Type Conversion' */
                /* Event: '<S1477>:38' */
                tmp = fmodf(floorf
                            (CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_I_j),
                            65536.0F);

                /* FunctionCaller: '<S1479>/Function Caller' incorporates:
                 *  Constant: '<S1479>/Constant'
                 *  DataTypeConversion: '<S1479>/Data Type Conversion'
                 */
                Rte_Call_PokeIDCR_f_AcOutFrequency_PokeIDCR_f_AcOutFrequency
                    ((uint16)((tmp < 0.0F) ? ((sint32)((uint16)((sint32)
                         (-((sint32)((sint16)((uint16)((float32)(-tmp))))))))) :
                              ((sint32)((uint16)tmp))), false);

                /* End of Outputs for SubSystem: '<S1456>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1477>:111' */
        /* Call Fsft */
        VeSR1B_y_AcOutputFrequency_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1456>/Fsft' */
        /* FunctionCaller: '<S1478>/Function Caller' */
        /* Event: '<S1477>:39' */
        Rte_Call_FsftIDCR_f_AcOutFrequency_FsftIDCR_f_AcOutFrequency();

        /* End of Outputs for SubSystem: '<S1456>/Fsft' */
        /* Transition: '<S1477>:113' */
        /* Transition: '<S1477>:115' */
        /* Transition: '<S1477>:114' */
    }

    /* End of Chart: '<S1474>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_AcOutputVoltage_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_AcOutputVoltage_ErrSts'
     */
    /* Transition: '<S1477>:107' */
    rtb_TmpSignalConversionAtVeS_po = Rte_Read_VeSR1B_U_AcOutputVoltage_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_U_e);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_AcOutputVoltage_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1483>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_AcOutputVoltage_SigSts_Value(&tmpRead_5u);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1480>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_5u) & 3U) != 0U)
    {
        /* Transition: '<S1483>:100' */
        /* Transition: '<S1483>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1483>:104' */
        /*  MM */
        if ((((uint32)tmpRead_5u) & 4U) != 0U)
        {
            /* Transition: '<S1483>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1483>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1483>:110' */
                /* Call Tmot */
                VeSR1B_y_AcOutputVoltage_CallStatus = 3U;

                /* Event: '<S1483>:40' */
                /* Transition: '<S1483>:115' */
                /* Transition: '<S1483>:114' */
            }
        }
        else
        {
            /* Transition: '<S1483>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_po) == 133)
            {
                /* Transition: '<S1483>:95' */
                /* Transition: '<S1483>:116' */
                /* Call Nothing */
                VeSR1B_y_AcOutputVoltage_CallStatus = 4U;

                /* Transition: '<S1483>:114' */
            }
            else
            {
                /* Transition: '<S1483>:120' */
                /* Transition: '<S1483>:117' */
                /* Call Poke */
                VeSR1B_y_AcOutputVoltage_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1457>/Poke' */
                /* FunctionCaller: '<S1485>/Function Caller' incorporates:
                 *  Constant: '<S1485>/Constant'
                 */
                /* Event: '<S1483>:38' */
                Rte_Call_PokeIDCR_U_AcOutVoltage_PokeIDCR_U_AcOutVoltage
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_U_e, false);

                /* End of Outputs for SubSystem: '<S1457>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1483>:111' */
        /* Call Fsft */
        VeSR1B_y_AcOutputVoltage_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1457>/Fsft' */
        /* FunctionCaller: '<S1484>/Function Caller' */
        /* Event: '<S1483>:39' */
        Rte_Call_FsftIDCR_U_AcOutVoltage_FsftIDCR_U_AcOutVoltage();

        /* End of Outputs for SubSystem: '<S1457>/Fsft' */
        /* Transition: '<S1483>:113' */
        /* Transition: '<S1483>:115' */
        /* Transition: '<S1483>:114' */
    }

    /* End of Chart: '<S1480>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_Available_Power_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_Available_Power_ErrSts'
     */
    /* Transition: '<S1483>:107' */
    rtb_TmpSignalConversionAtVeSR_k = Rte_Read_VeSR1B_P_Available_Power_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_P_A);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_Available_Power_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1489>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_Available_Power_SigSts_Value(&tmpRead_5v);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1486>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_5v) & 3U) != 0U)
    {
        /* Transition: '<S1489>:100' */
        /* Transition: '<S1489>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1489>:104' */
        /*  MM */
        if ((((uint32)tmpRead_5v) & 4U) != 0U)
        {
            /* Transition: '<S1489>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1489>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1489>:110' */
                /* Call Tmot */
                VeSR1B_y_Available_Power_CallStatus = 3U;

                /* Event: '<S1489>:40' */
                /* Transition: '<S1489>:115' */
                /* Transition: '<S1489>:114' */
            }
        }
        else
        {
            /* Transition: '<S1489>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_k) == 133)
            {
                /* Transition: '<S1489>:95' */
                /* Transition: '<S1489>:116' */
                /* Call Nothing */
                VeSR1B_y_Available_Power_CallStatus = 4U;

                /* Transition: '<S1489>:114' */
            }
            else
            {
                /* Transition: '<S1489>:120' */
                /* Transition: '<S1489>:117' */
                /* Call Poke */
                VeSR1B_y_Available_Power_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1458>/Poke' */
                /* FunctionCaller: '<S1491>/Function Caller' incorporates:
                 *  Constant: '<S1491>/Constant'
                 */
                /* Event: '<S1489>:38' */
                Rte_Call_PokeIDCR_P_AvailablePower_PokeIDCR_P_AvailablePower
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_P_A, false);

                /* End of Outputs for SubSystem: '<S1458>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1489>:111' */
        /* Call Fsft */
        VeSR1B_y_Available_Power_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1458>/Fsft' */
        /* FunctionCaller: '<S1490>/Function Caller' */
        /* Event: '<S1489>:39' */
        Rte_Call_FsftIDCR_P_AvailablePower_FsftIDCR_P_AvailablePower();

        /* End of Outputs for SubSystem: '<S1458>/Fsft' */
        /* Transition: '<S1489>:113' */
        /* Transition: '<S1489>:115' */
        /* Transition: '<S1489>:114' */
    }

    /* End of Chart: '<S1486>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_V2X_Derate_Reason_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_V2X_Derate_Reason_ErrSts'
     */
    /* Transition: '<S1489>:107' */
    rtb_TmpSignalConversionAtVeS_mq = Rte_Read_VeSR1B_y_V2X_Derate_Reason_Value(
        &CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B__dz);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_V2X_Derate_Reason_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1495>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_V2X_Derate_Reason_SigSts_Value(&tmpRead_5w);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1492>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_5w) & 3U) != 0U)
    {
        /* Transition: '<S1495>:100' */
        /* Transition: '<S1495>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1495>:104' */
        /*  MM */
        if ((((uint32)tmpRead_5w) & 4U) != 0U)
        {
            /* Transition: '<S1495>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1495>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1495>:110' */
                /* Call Tmot */
                VeSR1B_y_V2X_Derate_Reason_CallStatus = 3U;

                /* Event: '<S1495>:40' */
                /* Transition: '<S1495>:115' */
                /* Transition: '<S1495>:114' */
            }
        }
        else
        {
            /* Transition: '<S1495>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_mq) == 133)
            {
                /* Transition: '<S1495>:95' */
                /* Transition: '<S1495>:116' */
                /* Call Nothing */
                VeSR1B_y_V2X_Derate_Reason_CallStatus = 4U;

                /* Transition: '<S1495>:114' */
            }
            else
            {
                /* Transition: '<S1495>:120' */
                /* Transition: '<S1495>:117' */
                /* Call Poke */
                VeSR1B_y_V2X_Derate_Reason_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1459>/Poke' */
                /* FunctionCaller: '<S1497>/Function Caller' incorporates:
                 *  Constant: '<S1497>/Constant'
                 */
                /* Event: '<S1495>:38' */
                Rte_Call_PokeIDCR_e_V2XDerateRsn_PokeIDCR_e_V2XDerateRsn
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B__dz, false);

                /* End of Outputs for SubSystem: '<S1459>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1495>:111' */
        /* Call Fsft */
        VeSR1B_y_V2X_Derate_Reason_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1459>/Fsft' */
        /* FunctionCaller: '<S1496>/Function Caller' */
        /* Event: '<S1495>:39' */
        Rte_Call_FsftIDCR_e_V2XDerateRsn_FsftIDCR_e_V2XDerateRsn();

        /* End of Outputs for SubSystem: '<S1459>/Fsft' */
        /* Transition: '<S1495>:113' */
        /* Transition: '<S1495>:115' */
        /* Transition: '<S1495>:114' */
    }

    /* End of Chart: '<S1492>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_V2X_Derate_Status_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_V2X_Derate_Status_ErrSts'
     */
    /* Transition: '<S1495>:107' */
    rtb_TmpSignalConversionAtVeS_hj = Rte_Read_VeSR1B_b_V2X_Derate_Status_Value(
        &CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B__ku);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_V2X_Derate_Status_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1501>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_V2X_Derate_Status_SigSts_Value(&tmpRead_5x);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1498>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_5x) & 3U) != 0U)
    {
        /* Transition: '<S1501>:100' */
        /* Transition: '<S1501>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1501>:104' */
        /*  MM */
        if ((((uint32)tmpRead_5x) & 4U) != 0U)
        {
            /* Transition: '<S1501>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1501>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1501>:110' */
                /* Call Tmot */
                VeSR1B_y_V2X_Derate_Status_CallStatus = 3U;

                /* Event: '<S1501>:40' */
                /* Transition: '<S1501>:115' */
                /* Transition: '<S1501>:114' */
            }
        }
        else
        {
            /* Transition: '<S1501>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_hj) == 133)
            {
                /* Transition: '<S1501>:95' */
                /* Transition: '<S1501>:116' */
                /* Call Nothing */
                VeSR1B_y_V2X_Derate_Status_CallStatus = 4U;

                /* Transition: '<S1501>:114' */
            }
            else
            {
                /* Transition: '<S1501>:120' */
                /* Transition: '<S1501>:117' */
                /* Call Poke */
                VeSR1B_y_V2X_Derate_Status_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1460>/Poke' */
                /* FunctionCaller: '<S1503>/Function Caller' incorporates:
                 *  Constant: '<S1503>/Constant'
                 */
                /* Event: '<S1501>:38' */
                Rte_Call_PokeIDCR_b_V2XDerateSts_PokeIDCR_b_V2XDerateSts
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B__ku, false);

                /* End of Outputs for SubSystem: '<S1460>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1501>:111' */
        /* Call Fsft */
        VeSR1B_y_V2X_Derate_Status_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1460>/Fsft' */
        /* FunctionCaller: '<S1502>/Function Caller' */
        /* Event: '<S1501>:39' */
        Rte_Call_FsftIDCR_b_V2XDerateSts_FsftIDCR_b_V2XDerateSts();

        /* End of Outputs for SubSystem: '<S1460>/Fsft' */
        /* Transition: '<S1501>:113' */
        /* Transition: '<S1501>:115' */
        /* Transition: '<S1501>:114' */
    }

    /* End of Chart: '<S1498>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_V2X_FailSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_V2X_FailSts_ErrSts'
     */
    /* Transition: '<S1501>:107' */
    rtb_TmpSignalConversionAtVeS_dy = Rte_Read_VeSR1B_b_V2X_FailSts_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_b);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_V2X_FailSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1507>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_V2X_FailSts_SigSts_Value(&tmpRead_5y);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1504>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_5y) & 3U) != 0U)
    {
        /* Transition: '<S1507>:100' */
        /* Transition: '<S1507>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1507>:104' */
        /*  MM */
        if ((((uint32)tmpRead_5y) & 4U) != 0U)
        {
            /* Transition: '<S1507>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1507>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1507>:110' */
                /* Call Tmot */
                VeSR1B_y_V2X_FailSts_CallStatus = 3U;

                /* Event: '<S1507>:40' */
                /* Transition: '<S1507>:115' */
                /* Transition: '<S1507>:114' */
            }
        }
        else
        {
            /* Transition: '<S1507>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_dy) == 133)
            {
                /* Transition: '<S1507>:95' */
                /* Transition: '<S1507>:116' */
                /* Call Nothing */
                VeSR1B_y_V2X_FailSts_CallStatus = 4U;

                /* Transition: '<S1507>:114' */
            }
            else
            {
                /* Transition: '<S1507>:120' */
                /* Transition: '<S1507>:117' */
                /* Call Poke */
                VeSR1B_y_V2X_FailSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1461>/Poke' */
                /* FunctionCaller: '<S1509>/Function Caller' incorporates:
                 *  Constant: '<S1509>/Constant'
                 */
                /* Event: '<S1507>:38' */
                Rte_Call_PokeIDCR_b_V2XFailSts_PokeIDCR_b_V2XFailSts
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_b, false);

                /* End of Outputs for SubSystem: '<S1461>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1507>:111' */
        /* Call Fsft */
        VeSR1B_y_V2X_FailSts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1461>/Fsft' */
        /* FunctionCaller: '<S1508>/Function Caller' */
        /* Event: '<S1507>:39' */
        Rte_Call_FsftIDCR_b_V2XFailSts_FsftIDCR_b_V2XFailSts();

        /* End of Outputs for SubSystem: '<S1461>/Fsft' */
        /* Transition: '<S1507>:113' */
        /* Transition: '<S1507>:115' */
        /* Transition: '<S1507>:114' */
    }

    /* End of Chart: '<S1504>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_V2X_FaultRsn_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_V2X_FaultRsn_ErrSts'
     */
    /* Transition: '<S1507>:107' */
    rtb_TmpSignalConversionAtVeS_iy = Rte_Read_VeSR1B_y_V2X_FaultRsn_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_e);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_V2X_FaultRsn_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1513>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_V2X_FaultRsn_SigSts_Value(&tmpRead_5z);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1510>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_5z) & 3U) != 0U)
    {
        /* Transition: '<S1513>:100' */
        /* Transition: '<S1513>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1513>:104' */
        /*  MM */
        if ((((uint32)tmpRead_5z) & 4U) != 0U)
        {
            /* Transition: '<S1513>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1513>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1513>:110' */
                /* Call Tmot */
                VeSR1B_y_V2X_FaultRsn_CallStatus = 3U;

                /* Event: '<S1513>:40' */
                /* Transition: '<S1513>:115' */
                /* Transition: '<S1513>:114' */
            }
        }
        else
        {
            /* Transition: '<S1513>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_iy) == 133)
            {
                /* Transition: '<S1513>:95' */
                /* Transition: '<S1513>:116' */
                /* Call Nothing */
                VeSR1B_y_V2X_FaultRsn_CallStatus = 4U;

                /* Transition: '<S1513>:114' */
            }
            else
            {
                /* Transition: '<S1513>:120' */
                if ((((uint32)tmpRead_5z) & 8U) != 0U)
                {
                    /* Transition: '<S1513>:122' */
                    /* Transition: '<S1513>:125' */
                    FA_out_n0 = true;

                    /* Transition: '<S1513>:126' */
                }
                else
                {
                    /* Transition: '<S1513>:124' */
                    FA_out_n0 = false;
                }

                /* Transition: '<S1513>:117' */
                /* Call Poke */
                VeSR1B_y_V2X_FaultRsn_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1462>/Poke' */
                /* FunctionCaller: '<S1515>/Function Caller' */
                /* Event: '<S1513>:38' */
                Rte_Call_PokeIDCR_e_V2XFaultRsn_PokeIDCR_e_V2XFaultRsn
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_e, FA_out_n0);

                /* End of Outputs for SubSystem: '<S1462>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1513>:111' */
        /* Call Fsft */
        VeSR1B_y_V2X_FaultRsn_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1462>/Fsft' */
        /* FunctionCaller: '<S1514>/Function Caller' */
        /* Event: '<S1513>:39' */
        Rte_Call_FsftIDCR_e_V2XFaultRsn_FsftIDCR_e_V2XFaultRsn();

        /* End of Outputs for SubSystem: '<S1462>/Fsft' */
        /* Transition: '<S1513>:113' */
        /* Transition: '<S1513>:115' */
        /* Transition: '<S1513>:114' */
    }

    /* End of Chart: '<S1510>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_V2X_InputCurrent_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_V2X_InputCurrent_ErrSts'
     */
    /* Transition: '<S1513>:107' */
    rtb_TmpSignalConversionAtVeS_in = Rte_Read_VeSR1B_I_V2X_InputCurrent_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_I_V);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_V2X_InputCurrent_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1519>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_V2X_InputCurrent_SigSts_Value(&tmpRead_60);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1516>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_60) & 3U) != 0U)
    {
        /* Transition: '<S1519>:100' */
        /* Transition: '<S1519>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1519>:104' */
        /*  MM */
        if ((((uint32)tmpRead_60) & 4U) != 0U)
        {
            /* Transition: '<S1519>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1519>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1519>:110' */
                /* Call Tmot */
                VeSR1B_y_V2X_InputCurrent_CallStatus = 3U;

                /* Event: '<S1519>:40' */
                /* Transition: '<S1519>:115' */
                /* Transition: '<S1519>:114' */
            }
        }
        else
        {
            /* Transition: '<S1519>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_in) == 133)
            {
                /* Transition: '<S1519>:95' */
                /* Transition: '<S1519>:116' */
                /* Call Nothing */
                VeSR1B_y_V2X_InputCurrent_CallStatus = 4U;

                /* Transition: '<S1519>:114' */
            }
            else
            {
                /* Transition: '<S1519>:120' */
                /* Transition: '<S1519>:117' */
                /* Call Poke */
                VeSR1B_y_V2X_InputCurrent_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1463>/Poke' */
                /* FunctionCaller: '<S1521>/Function Caller' incorporates:
                 *  Constant: '<S1521>/Constant'
                 */
                /* Event: '<S1519>:38' */
                Rte_Call_PokeIDCR_I_V2XInCurrent_PokeIDCR_I_V2XInCurrent
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_I_V, false);

                /* End of Outputs for SubSystem: '<S1463>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1519>:111' */
        /* Call Fsft */
        VeSR1B_y_V2X_InputCurrent_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1463>/Fsft' */
        /* FunctionCaller: '<S1520>/Function Caller' */
        /* Event: '<S1519>:39' */
        Rte_Call_FsftIDCR_I_V2XInCurrent_FsftIDCR_I_V2XInCurrent();

        /* End of Outputs for SubSystem: '<S1463>/Fsft' */
        /* Transition: '<S1519>:113' */
        /* Transition: '<S1519>:115' */
        /* Transition: '<S1519>:114' */
    }

    /* End of Chart: '<S1516>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_V2X_InputVoltage_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_V2X_InputVoltage_ErrSts'
     */
    /* Transition: '<S1519>:107' */
    rtb_TmpSignalConversionAtVeS_l1 = Rte_Read_VeSR1B_U_V2X_InputVoltage_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_U_V);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_V2X_InputVoltage_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1525>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_V2X_InputVoltage_SigSts_Value(&tmpRead_61);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1522>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_61) & 3U) != 0U)
    {
        /* Transition: '<S1525>:100' */
        /* Transition: '<S1525>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1525>:104' */
        /*  MM */
        if ((((uint32)tmpRead_61) & 4U) != 0U)
        {
            /* Transition: '<S1525>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1525>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1525>:110' */
                /* Call Tmot */
                VeSR1B_y_V2X_InputVoltage_CallStatus = 3U;

                /* Event: '<S1525>:40' */
                /* Transition: '<S1525>:115' */
                /* Transition: '<S1525>:114' */
            }
        }
        else
        {
            /* Transition: '<S1525>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_l1) == 133)
            {
                /* Transition: '<S1525>:95' */
                /* Transition: '<S1525>:116' */
                /* Call Nothing */
                VeSR1B_y_V2X_InputVoltage_CallStatus = 4U;

                /* Transition: '<S1525>:114' */
            }
            else
            {
                /* Transition: '<S1525>:120' */
                /* Transition: '<S1525>:117' */
                /* Call Poke */
                VeSR1B_y_V2X_InputVoltage_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1464>/Poke' */
                /* FunctionCaller: '<S1527>/Function Caller' incorporates:
                 *  Constant: '<S1527>/Constant'
                 */
                /* Event: '<S1525>:38' */
                Rte_Call_PokeIDCR_U_V2XInVoltage_PokeIDCR_U_V2XInVoltage
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_U_V, false);

                /* End of Outputs for SubSystem: '<S1464>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1525>:111' */
        /* Call Fsft */
        VeSR1B_y_V2X_InputVoltage_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1464>/Fsft' */
        /* FunctionCaller: '<S1526>/Function Caller' */
        /* Event: '<S1525>:39' */
        Rte_Call_FsftIDCR_U_V2XInVoltage_FsftIDCR_U_V2XInVoltage();

        /* End of Outputs for SubSystem: '<S1464>/Fsft' */
        /* Transition: '<S1525>:113' */
        /* Transition: '<S1525>:115' */
        /* Transition: '<S1525>:114' */
    }

    /* End of Chart: '<S1522>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_V2X_InterlockSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_V2X_InterlockSts_ErrSts'
     */
    /* Transition: '<S1525>:107' */
    rtb_TmpSignalConversionAtVeS_pn = Rte_Read_VeSR1B_y_V2X_InterlockSts_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_a);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_V2X_InterlockSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1531>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_V2X_InterlockSts_SigSts_Value(&tmpRead_62);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1528>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_62) & 3U) != 0U)
    {
        /* Transition: '<S1531>:100' */
        /* Transition: '<S1531>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1531>:104' */
        /*  MM */
        if ((((uint32)tmpRead_62) & 4U) != 0U)
        {
            /* Transition: '<S1531>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1531>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1531>:110' */
                /* Call Tmot */
                VeSR1B_y_V2X_InterlockSts_CallStatus = 3U;

                /* Event: '<S1531>:40' */
                /* Transition: '<S1531>:115' */
                /* Transition: '<S1531>:114' */
            }
        }
        else
        {
            /* Transition: '<S1531>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_pn) == 133)
            {
                /* Transition: '<S1531>:95' */
                /* Transition: '<S1531>:116' */
                /* Call Nothing */
                VeSR1B_y_V2X_InterlockSts_CallStatus = 4U;

                /* Transition: '<S1531>:114' */
            }
            else
            {
                /* Transition: '<S1531>:120' */
                /* Transition: '<S1531>:117' */
                /* Call Poke */
                VeSR1B_y_V2X_InterlockSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1465>/Poke' */
                /* FunctionCaller: '<S1533>/Function Caller' incorporates:
                 *  Constant: '<S1533>/Constant'
                 */
                /* Event: '<S1531>:38' */
                Rte_Call_PokeIDCR_e_V2XInterlockSts_PokeIDCR_e_V2XInterlockSts
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_a, false);

                /* End of Outputs for SubSystem: '<S1465>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1531>:111' */
        /* Call Fsft */
        VeSR1B_y_V2X_InterlockSts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1465>/Fsft' */
        /* FunctionCaller: '<S1532>/Function Caller' */
        /* Event: '<S1531>:39' */
        Rte_Call_FsftIDCR_e_V2XInterlockSts_FsftIDCR_e_V2XInterlockSts();

        /* End of Outputs for SubSystem: '<S1465>/Fsft' */
        /* Transition: '<S1531>:113' */
        /* Transition: '<S1531>:115' */
        /* Transition: '<S1531>:114' */
    }

    /* End of Chart: '<S1528>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_V2X_LV_Feed_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_V2X_LV_Feed_ErrSts'
     */
    /* Transition: '<S1531>:107' */
    rtb_TmpSignalConversionAtVeS_oq = Rte_Read_VeSR1B_U_V2X_LV_Feed_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_U_h);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_V2X_LV_Feed_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1537>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_V2X_LV_Feed_SigSts_Value(&tmpRead_63);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1534>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_63) & 3U) != 0U)
    {
        /* Transition: '<S1537>:100' */
        /* Transition: '<S1537>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1537>:104' */
        /*  MM */
        if ((((uint32)tmpRead_63) & 4U) != 0U)
        {
            /* Transition: '<S1537>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1537>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1537>:110' */
                /* Call Tmot */
                VeSR1B_y_V2X_LV_Feed_CallStatus = 3U;

                /* Event: '<S1537>:40' */
                /* Transition: '<S1537>:115' */
                /* Transition: '<S1537>:114' */
            }
        }
        else
        {
            /* Transition: '<S1537>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_oq) == 133)
            {
                /* Transition: '<S1537>:95' */
                /* Transition: '<S1537>:116' */
                /* Call Nothing */
                VeSR1B_y_V2X_LV_Feed_CallStatus = 4U;

                /* Transition: '<S1537>:114' */
            }
            else
            {
                /* Transition: '<S1537>:120' */
                /* Transition: '<S1537>:117' */
                /* Call Poke */
                VeSR1B_y_V2X_LV_Feed_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1466>/Poke' */
                /* FunctionCaller: '<S1539>/Function Caller' incorporates:
                 *  Constant: '<S1539>/Constant'
                 */
                /* Event: '<S1537>:38' */
                Rte_Call_PokeIDCR_U_V2XLVFeed_PokeIDCR_U_V2XLVFeed
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_U_h, false);

                /* End of Outputs for SubSystem: '<S1466>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1537>:111' */
        /* Call Fsft */
        VeSR1B_y_V2X_LV_Feed_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1466>/Fsft' */
        /* FunctionCaller: '<S1538>/Function Caller' */
        /* Event: '<S1537>:39' */
        Rte_Call_FsftIDCR_U_V2XLVFeed_FsftIDCR_U_V2XLVFeed();

        /* End of Outputs for SubSystem: '<S1466>/Fsft' */
        /* Transition: '<S1537>:113' */
        /* Transition: '<S1537>:115' */
        /* Transition: '<S1537>:114' */
    }

    /* End of Chart: '<S1534>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_V2X_Modefeedback_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_V2X_Modefeedback_ErrSts'
     */
    /* Transition: '<S1537>:107' */
    rtb_TmpSignalConversionAtVeS_jg = Rte_Read_VeSR1B_y_V2X_Modefeedback_Value
        (&CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_m);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSR1B_y_V2X_Modefeedback_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1543>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_V2X_Modefeedback_SigSts_Value(&tmpRead_64);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1540>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_64) & 3U) != 0U)
    {
        /* Transition: '<S1543>:100' */
        /* Transition: '<S1543>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1543>:104' */
        /*  MM */
        if ((((uint32)tmpRead_64) & 4U) != 0U)
        {
            /* Transition: '<S1543>:96' */
            if (rtb_RelationalOperator1)
            {
                /* Transition: '<S1543>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1543>:110' */
                /* Call Tmot */
                VeSR1B_y_V2X_Modefeedback_CallStatus = 3U;

                /* Event: '<S1543>:40' */
                /* Transition: '<S1543>:115' */
                /* Transition: '<S1543>:114' */
            }
        }
        else
        {
            /* Transition: '<S1543>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_jg) == 133)
            {
                /* Transition: '<S1543>:95' */
                /* Transition: '<S1543>:116' */
                /* Call Nothing */
                VeSR1B_y_V2X_Modefeedback_CallStatus = 4U;

                /* Transition: '<S1543>:114' */
            }
            else
            {
                /* Transition: '<S1543>:120' */
                /* Transition: '<S1543>:117' */
                /* Call Poke */
                VeSR1B_y_V2X_Modefeedback_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1467>/Poke' */
                /* FunctionCaller: '<S1545>/Function Caller' incorporates:
                 *  Constant: '<S1545>/Constant'
                 */
                /* Event: '<S1543>:38' */
                Rte_Call_PokeIDCR_e_V2XModeFeedback_PokeIDCR_e_V2XModeFeedback
                    (CR2B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_m, false);

                /* End of Outputs for SubSystem: '<S1467>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1543>:111' */
        /* Call Fsft */
        VeSR1B_y_V2X_Modefeedback_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1467>/Fsft' */
        /* FunctionCaller: '<S1544>/Function Caller' */
        /* Event: '<S1543>:39' */
        Rte_Call_FsftIDCR_e_V2XModeFeedback_FsftIDCR_e_V2XModeFeedback();

        /* End of Outputs for SubSystem: '<S1467>/Fsft' */
        /* Transition: '<S1543>:113' */
        /* Transition: '<S1543>:115' */
        /* Transition: '<S1543>:114' */
    }

    /* End of Chart: '<S1540>/Chart' */
    /* Transition: '<S1543>:107' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
}

/* Model initialize function */
FUNC(void, CR2B_FUNC_CODE) CR2B_FUNC_ac_Init(void)
{
    /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
