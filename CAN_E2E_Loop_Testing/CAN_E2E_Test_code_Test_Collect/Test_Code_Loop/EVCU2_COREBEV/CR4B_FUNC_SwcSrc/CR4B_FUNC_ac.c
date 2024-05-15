/*
 * File: CR4B_FUNC_ac.c
 *
 * Code generated for Simulink model 'CR4B_FUNC_ac'.
 *
 * Model version                  : 1.55
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Apr  6 09:30:36 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CR4B_FUNC_ac.h"

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_CR4B_FUNC
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(boolean, CR4B_FUNC_VAR_INIT) KeCR4B_b_CanLocStatusBypEnbl =
    0;                                 /* Referenced by: '<S11>/Calib' */
static volatile CONST(TePWMD_e_CanLocStatus, CR4B_FUNC_VAR_INIT)
    KeCR4B_e_CanLocStatus = CePWMD_e_LOC_Disable;/* Referenced by: '<S12>/Calib' */

#define STOP_SEC_CALIB_UNSPECIFIED_CR4B_FUNC
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CR4B_FUNC
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_VrntCR4B_EngMinSparkNomCurrAirTorqCap

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_EngMnSpkNmCrArTqCp_CallStatus;/* '<S323>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_EngTorqACCCapability

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_EngTqACCCapabilityFD16_CallStatus;/* '<S56>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_EngTorqCapbltyMaxOffTorq

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_EngTqCapbltMaxOfTqFD16_CallStatus;/* '<S61>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_EngTorqCapbltyMinRunTorq

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_EngTqCapbltMinRnTqFD16_CallStatus;/* '<S69>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_EngTorqCapbltyMaxTorq

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_EngTqCapbltyMaxTqFD16_CallStatus;/* '<S65>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_EngTorqCapbltyMinTorq

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_EngTqCapbltyMinTqFD16_CallStatus;/* '<S73>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_EngTorqCapbltyRefEngSpd

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_EngTqCpbltRfEngSpdFD16_CallStatus;/* '<S77>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_GasFlwEnblsFuAtStr

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_GasFlwEnblsFuAtStr_CallStatus;/* '<S351>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_MCPAControlBoardTemperatureP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPACtrlBoarTempP_CallStatus;/* '<S764>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_MCPAPIMDCSideBusbarTempP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPAPIMDCSdBusTmpP_CallStatus;/* '<S845>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_MCPARotorTemperatureP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPARotorTemp_P_CallStatus;/* '<S859>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_MCPAServiceLampRequestP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPAServLampReq_P_CallStatus;/* '<S877>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_MCPA3PSPosP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPA_3PS_Pos_P_CallStatus;/* '<S468>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_MCPA6SOStatusP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPA_6SO_Status_P_CallStatus;/* '<S477>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_MCPAAccelRawP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPA_AccelRaw_P_CallStatus;/* '<S490>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_MCPACpbltySpdDivVoltP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPA_CpbltySpdDvVolt_P_CallStatus;/* '<S508>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_MCPADCCurrentP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPA_DC_Current_P_CallStatus;/* '<S782>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_MCPADCVoltageP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPA_DC_Voltage_P_CallStatus;/* '<S800>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_MCPADerateReasonP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPA_DerateResn_P_CallStatus;/* '<S818>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_MCPADeratingFactorP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPA_DeratingFactor_P_CallStatus;/* '<S521>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_MCPADschrgeStatusP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPA_Dschrge_Status_P_CallStatus;/* '<S534>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_MCPAHVCnctrOpnReqP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPA_HV_CnctrOpn_Req_P_CallStatus;/* '<S547>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_MCPAInterlockStsP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPA_InterlockSts_P_CallStatus;/* '<S560>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_MCPAInverterTempP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPA_InvertTemp_P_CallStatus;/* '<S827>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_MCPAInvrtrStateP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPA_Invrtr_State_P_CallStatus;/* '<S573>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_MCPAMaxTorqP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPA_MaxTorq_P_CallStatus;/* '<S591>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_MCPAMinTorqP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPA_MinTorq_P_CallStatus;/* '<S604>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_MCPAMtrMaxCpbltyTrqP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPA_MtrMaxCpbltyTrq_P_CallStatus;/* '<S617>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_MCPAMtrMinCpbltyTrqP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPA_MtrMinCpbltyTrq_P_CallStatus;/* '<S630>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_MCPARPMP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPA_RPM_P_CallStatus;/* '<S643>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_MCPARPMVP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPA_RPM_V_P_CallStatus;/* '<S661>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_MCPASPTStatP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPA_SPT_Stat_P_CallStatus;/* '<S666>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_MCPASpdLimP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPA_Spd_Lim_P_CallStatus;/* '<S684>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_MCPATempP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPA_Temp_P_CallStatus;/* '<S702>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_MCPATorqAchievedAEMDP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPA_TorqAchved_AEMD_P_CallStatus;/* '<S720>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_MCPATorqueAchievedP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPA_Torque_Achieved_P_CallStatus;/* '<S738>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_MCPATorqueAchievedVP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPA_Torque_Achved_V_P_CallStatus;/* '<S751>/Chart' */

#endif

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPBCtrlBoarTempP_CallStatus;/* '<S1071>/Chart' */
static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPBPIMDCSdBusTmpP_CallStatus;/* '<S1107>/Chart' */
static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPBRotorTemp_P_CallStatus;/* '<S1113>/Chart' */
static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPBServLampReq_P_CallStatus;/* '<S1121>/Chart' */
static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPB_6SO_Status_P_CallStatus;/* '<S908>/Chart' */
static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPB_AccelRaw_P_CallStatus;/* '<S914>/Chart' */
static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPB_CpbltySpdDvVolt_P_CallStatus;/* '<S922>/Chart' */
static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPB_DC_Current_P_CallStatus;/* '<S1079>/Chart' */
static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPB_DC_Voltage_P_CallStatus;/* '<S1087>/Chart' */
static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPB_DerateResn_P_CallStatus;/* '<S1095>/Chart' */
static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPB_DeratingFactor_P_CallStatus;/* '<S928>/Chart' */
static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPB_Dschrge_Status_P_CallStatus;/* '<S934>/Chart' */
static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPB_HV_CnctrOpn_Req_P_CallStatus;/* '<S940>/Chart' */
static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPB_InterlockSts_P_CallStatus;/* '<S948>/Chart' */
static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPB_InvertTemp_P_CallStatus;/* '<S1099>/Chart' */
static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPB_Invrtr_State_P_CallStatus;/* '<S955>/Chart' */
static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPB_MaxTorq_P_CallStatus;/* '<S963>/Chart' */
static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPB_MinTorq_P_CallStatus;/* '<S969>/Chart' */
static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPB_MtrMaxCpbltyTrq_P_CallStatus;/* '<S975>/Chart' */
static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPB_MtrMinCpbltyTrq_P_CallStatus;/* '<S981>/Chart' */
static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPB_RPM_P_CallStatus;/* '<S987>/Chart' */
static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPB_SPT_Stat_P_CallStatus;/* '<S995>/Chart' */
static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPB_Spd_Lim_P_CallStatus;/* '<S1003>/Chart' */
static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPB_Temp_P_CallStatus;/* '<S1011>/Chart' */
static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPB_TorqAchved_AEMD_P_CallStatus;/* '<S1019>/Chart' */
static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MCPB_Torque_Achieved_P_CallStatus;/* '<S1027>/Chart' */
static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MPR_PosSensor_P_CallStatus;/* '<S1033>/Chart' */

#if Rte_SysCon_VrntCR4B_MaxEngSpdCap

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MaxEngSpdCap_CallStatus;/* '<S426>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_MinEngSpdCap

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_MinEngSpdCap_CallStatus;/* '<S433>/Chart' */

#endif

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_PlockFailSts_P_CallStatus;/* '<S1039>/Chart' */
static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_Plock_MotorPosSts_P_CallStatus;/* '<S1045>/Chart' */
static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_Plock_PosSensor_P_CallStatus;/* '<S1051>/Chart' */
static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_Plock_fdbk_sts_P_CallStatus;/* '<S1057>/Chart' */

#if Rte_SysCon_VrntCR4B_RedSpkAuthorityAvbl

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_RedSpkAuthrtAvbl_CallStatus;/* '<S408>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_SGCPControlBoardTemperatureP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_SGCPCtrlBoarTempP_CallStatus;/* '<S1307>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_SGCPPIMACSideBusbarTempP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_SGCPPIMACSdBusTmpP_CallStatus;/* '<S1349>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_SGCPPIMDCSideBusbarTempP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_SGCPPIMDCSdBusTmpP_CallStatus;/* '<S1357>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_SGCPRotorTemperatureP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_SGCPRotorTemp_P_CallStatus;/* '<S1365>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_SGCPServiceLampRequestP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_SGCPServLampReq_P_CallStatus;/* '<S1374>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_SGCP6SOStatusP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_SGCP_6SO_Status_P_CallStatus;/* '<S1146>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_SGCPAccelRawP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_SGCP_AccelRaw_P_CallStatus;/* '<S1153>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_SGCPCpbltySpdDivVoltP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_SGCP_CpbltySpdDvVolt_P_CallStatus;/* '<S1162>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_SGCPDCCurrentP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_SGCP_DC_Current_P_CallStatus;/* '<S1316>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_SGCPDCVoltageP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_SGCP_DC_Voltage_P_CallStatus;/* '<S1325>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_SGCPDerateReasonP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_SGCP_DerateResn_P_CallStatus;/* '<S1334>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_SGCPDeratingFactorP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_SGCP_DeratingFactor_P_CallStatus;/* '<S1169>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_SGCPDschrgeStatusP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_SGCP_Dschrge_Status_P_CallStatus;/* '<S1176>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_SGCPHVCnctrOpnReqP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_SGCP_HV_CnctrOpn_Req_P_CallStatus;/* '<S1183>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_SGCPInterlockStsP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_SGCP_InterlockSts_P_CallStatus;/* '<S1192>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_SGCPInverterTempP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_SGCP_InvertTemp_P_CallStatus;/* '<S1340>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_SGCPInvrtrStateP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_SGCP_Invrtr_State_P_CallStatus;/* '<S1199>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_SGCPMaxTorqP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_SGCP_MaxTorq_P_CallStatus;/* '<S1208>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_SGCPMinTorqP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_SGCP_MinTorq_P_CallStatus;/* '<S1215>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_SGCPMtrMaxCpbltyTrqP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_SGCP_MtrMaxCpbltyTrq_P_CallStatus;/* '<S1222>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_SGCPMtrMinCpbltyTrqP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_SGCP_MtrMinCpbltyTrq_P_CallStatus;/* '<S1229>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_SGCPRPMP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_SGCP_RPM_P_CallStatus;/* '<S1236>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_SGCPRPMVP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_SGCP_RPM_V_P_CallStatus;/* '<S1245>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_SGCPSPTStatP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_SGCP_SPT_Stat_P_CallStatus;/* '<S1250>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_SGCPSpdLimP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_SGCP_Spd_Lim_P_CallStatus;/* '<S1259>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_SGCPTempP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_SGCP_Temp_P_CallStatus;/* '<S1268>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_SGCPTorqAchievedAEMDP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_SGCP_TorqAchved_AEMD_P_CallStatus;/* '<S1277>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_SGCPTorqueAchievedP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_SGCP_Torque_Achieved_P_CallStatus;/* '<S1286>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_SGCPTorqueAchievedVP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeCRDB_y_SGCP_Torque_Achved_V_P_CallStatus;/* '<S1293>/Chart' */

#endif

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeSR1B_y_APCM_Stat_FD16_CallStatus;/* '<S24>/Chart' */

#if Rte_SysCon_VrntCR4B_C1Status

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeSR1B_y_C1_Status_CallStatus;/* '<S95>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_MinEngPowerReqForOilDil

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeSR1B_y_C2_Status_CallStatus;/* '<S267>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_CompressionTest

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeSR1B_y_CompressionTest_CallStatus;/* '<S202>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_ECMLHOMTransW

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeSR1B_y_ECM_LHOM_Trans_W_FD16_CallStatus;/* '<S207>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_ETRQMode

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeSR1B_y_ETRQ_Mode_FD16_CallStatus;/* '<S299>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_EngActStdyStTorq

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeSR1B_y_EngActStdyStTorq_FD16_CallStatus;/* '<S304>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_EngActuatorsStat

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeSR1B_y_EngActuatorsStat_CallStatus;/* '<S311>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_EngAirFlwStdyStTorq

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeSR1B_y_EngAirFlwStdyStTrqFD16_CallStatus;/* '<S316>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_EngCltTmp

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeSR1B_y_EngCltTmp_FD16_CallStatus;/* '<S419>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_EngRunCrnkAct

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeSR1B_y_EngRunCrnkAct_CallStatus;/* '<S330>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_EngTrqEnblRqTCMW

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeSR1B_y_EngTrqEnblRqTCM_WFD16_CallStatus;/* '<S212>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_EngTrqReserveReq

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeSR1B_y_EngTrqReserveReq_FD16_CallStatus;/* '<S337>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_EngineSpeedW

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeSR1B_y_EngineSpeed_W_FD16_CallStatus;/* '<S217>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_EngineStallDetected

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeSR1B_y_Engine_Stall_Detected_CallStatus;/* '<S224>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_EssEngSt

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeSR1B_y_EssEngSt_FD16_CallStatus;/* '<S229>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_EssEngStopIsNotAllwdID

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeSR1B_y_EssEngStpIsNtAldIDFD16_CallStatus;/* '<S241>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_EssEngStopIsNotAllwd

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeSR1B_y_EssEngStpIsNtAllwdFD16_CallStatus;/* '<S234>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_EssEngStrtIsNotAllwd

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeSR1B_y_EssEngStrtIsNtAldFD16_CallStatus;/* '<S248>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_EssEngStrtIsNotAllwdID

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeSR1B_y_EssEngStrtNtAldIDFD16_CallStatus;/* '<S255>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_FeedbackHCP

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeSR1B_y_Feedback_HCP_FD16_CallStatus;/* '<S344>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_GearShiftType

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeSR1B_y_GearShiftType_CallStatus;/* '<S102>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_HybActEngTorqRespTyp

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeSR1B_y_HybActEngTqRespTypFD16_CallStatus;/* '<S356>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_LV12PwrFreeRqW

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeSR1B_y_LV12PwrFreeRq_W_FD16_CallStatus;/* '<S262>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_MAP4BARPHEV

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeSR1B_y_MAP_4_BAR_PHEV_CallStatus;/* '<S361>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_MRGBCurrentGr

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeSR1B_y_MRGB_Current_Gr_CallStatus;/* '<S109>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_MRGBMaxGrAllwd

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeSR1B_y_MRGB_MaxGrAllwd_CallStatus;/* '<S116>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_MRGBMaxTrqDes

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeSR1B_y_MRGB_MaxTrqDes_CallStatus;/* '<S123>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_MRGBMinGrAllwd

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeSR1B_y_MRGB_MinGrAllwd_CallStatus;/* '<S130>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_MRGBMtrBTrqRq

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeSR1B_y_MRGB_MtrBTrqRq_CallStatus;/* '<S137>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_MRGBOutputSpeed

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeSR1B_y_MRGB_Output_Speed_CallStatus;/* '<S144>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_MRGBTargetGr

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeSR1B_y_MRGB_Target_Gr_CallStatus;/* '<S151>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_MRGBTransmOilTemp

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeSR1B_y_MRGB_Transm_Oil_Temp_CallStatus;/* '<S158>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_MRGBTrqCtrlModeReq

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeSR1B_y_MRGB_TrqCtrlModeReq_CallStatus;/* '<S163>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_MRGBUpshiftTime

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeSR1B_y_MRGB_Upshift_Time_CallStatus;/* '<S170>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_MaxOffEngTorqCap

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeSR1B_y_MaxOffEngTorqCap_FD16_CallStatus;/* '<S368>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_MaxPrdtdEngTorqCap

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeSR1B_y_MaxPrdtdEngTorqCapFD16_CallStatus;/* '<S373>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_MinAirFlowMinSparkTorqCap

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeSR1B_y_MinArFlwMinSpkTqCpFD16_CallStatus;/* '<S380>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_MinEngPowerReqForOilDilEnabler

static VAR(uint8, CR4B_FUNC_VAR_INIT)
    VeSR1B_y_MinEngPwrReqFrOilDilEnblr_CallStatus;/* '<S274>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_MinEngTorqCap

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeSR1B_y_MinEngTorqCap_FD16_CallStatus;/* '<S387>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_MinImmedEngTorqCap

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeSR1B_y_MinImmedEngTorqCapFD16_CallStatus;/* '<S394>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_MinPrdtdEngRunTorqCap

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeSR1B_y_MinPrdtdEngRunTqCpFD16_CallStatus;/* '<S401>/Chart' */

#endif

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeSR1B_y_PRNDFailSts_CallStatus;/* '<S30>/Chart' */
static VAR(uint8, CR4B_FUNC_VAR_INIT) VeSR1B_y_PRNDdisplayFailSts_CallStatus;/* '<S36>/Chart' */

#if Rte_SysCon_VrntCR4B_ServiceHybSys

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeSR1B_y_ServiceHybSys_CallStatus;/* '<S440>/Chart' */

#endif

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeSR1B_y_ShiftLeverPositionReq_CallStatus;/* '<S42>/Chart' */

#if Rte_SysCon_VrntCR4B_TCapActualC2

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeSR1B_y_TCapActual_C2_CallStatus;/* '<S175>/Chart' */

#endif

#if Rte_SysCon_VrntCR4B_TransTrqRatio

static VAR(uint8, CR4B_FUNC_VAR_INIT) VeSR1B_y_TransTrqRatio_CallStatus;/* '<S182>/Chart' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CR4B_FUNC
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CR4B_FUNC
#include "MemMap.h"

VAR(B_CR4B_FUNC_ac_T, CR4B_FUNC_VAR_INIT) CR4B_FUNC_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CR4B_FUNC
#include "MemMap.h"
#if Rte_SysCon_VrntCR4B_MCPARPMVP || Rte_SysCon_VrntCR4B_SGCPRPMVP

static FUNC(void, CR4B_FUNC_CODE_LOCAL) CR4B_FUNC_ac_Poke(VAR(boolean, AUTOMATIC)
    rtu_Sig);

#endif

#if Rte_SysCon_VrntCR4B_MCPATorqueAchievedVP || Rte_SysCon_VrntCR4B_SGCPTorqueAchievedVP

static FUNC(void, CR4B_FUNC_CODE_LOCAL) CR4B_FUNC_ac_Poke_h(VAR(boolean,
    AUTOMATIC) rtu_Sig);

#endif

/*
 * Output and update for function-call system:
 *    '<S660>/Poke'
 *    '<S1244>/Poke'
 */
#if Rte_SysCon_VrntCR4B_MCPARPMVP || Rte_SysCon_VrntCR4B_SGCPRPMVP

static FUNC(void, CR4B_FUNC_CODE_LOCAL) CR4B_FUNC_ac_Poke(VAR(boolean, AUTOMATIC)
    rtu_Sig)
{
    /* FunctionCaller: '<S664>/Function Caller' */
    Rte_Call_PokeINVR_b_MtrA_SpdRawFA_PokeINVR_b_MtrA_SpdRawFA(rtu_Sig);
}

#endif

/*
 * Output and update for function-call system:
 *    '<S750>/Poke'
 *    '<S1292>/Poke'
 */
#if Rte_SysCon_VrntCR4B_MCPATorqueAchievedVP || Rte_SysCon_VrntCR4B_SGCPTorqueAchievedVP

static FUNC(void, CR4B_FUNC_CODE_LOCAL) CR4B_FUNC_ac_Poke_h(VAR(boolean,
    AUTOMATIC) rtu_Sig)
{
    /* FunctionCaller: '<S754>/Function Caller' */
    Rte_Call_PokeINVR_b_MtrA_TorqAchievedFA_PokeINVR_b_MtrA_TorqAchievedFA
        (rtu_Sig);
}

#endif

/* Model step function for TID1 */
FUNC(void, CR4B_FUNC_CODE) CR4B_FUNC_FastTEF(void) /* Explicit Task: FastTEF */
{
    /* local block i/o variables */
    uint8 rtb_TmpSignalConversionAtVeSR1B;
    uint8 rtb_TmpSignalConversionAtVeSR_i;
    uint8 rtb_TmpSignalConversionAtVeSR_o;
    uint8 rtb_TmpSignalConversionAtVeSR_c;

#if Rte_SysCon_VrntCR4B_EngTorqACCCapability

    uint8 rtb_TmpSignalConversionAtVeCRDB;

#endif

#if Rte_SysCon_VrntCR4B_EngTorqCapbltyMaxOffTorq

    uint8 rtb_TmpSignalConversionAtVeCR_b;

#endif

#if Rte_SysCon_VrntCR4B_EngTorqCapbltyMaxTorq

    uint8 rtb_TmpSignalConversionAtVeCR_f;

#endif

#if Rte_SysCon_VrntCR4B_EngTorqCapbltyMinRunTorq

    uint8 rtb_TmpSignalConversionAtVeCR_e;

#endif

#if Rte_SysCon_VrntCR4B_EngTorqCapbltyMinTorq

    uint8 rtb_TmpSignalConversionAtVeC_em;

#endif

#if Rte_SysCon_VrntCR4B_EngTorqCapbltyRefEngSpd

    uint8 rtb_TmpSignalConversionAtVeCR_l;

#endif

#if Rte_SysCon_VrntCR4B_C1Status

    uint8 rtb_TmpSignalConversionAtVeSR_p;

#endif

#if Rte_SysCon_VrntCR4B_GearShiftType

    uint8 rtb_TmpSignalConversionAtVeSR_g;

#endif

#if Rte_SysCon_VrntCR4B_MRGBCurrentGr

    uint8 rtb_TmpSignalConversionAtVeS_iy;

#endif

#if Rte_SysCon_VrntCR4B_MRGBMaxGrAllwd

    uint8 rtb_TmpSignalConversionAtVeSR_h;

#endif

#if Rte_SysCon_VrntCR4B_MRGBMaxTrqDes

    uint8 rtb_TmpSignalConversionAtVeSR_k;

#endif

#if Rte_SysCon_VrntCR4B_MRGBMinGrAllwd

    uint8 rtb_TmpSignalConversionAtVeSR_l;

#endif

#if Rte_SysCon_VrntCR4B_MRGBMtrBTrqRq

    uint8 rtb_TmpSignalConversionAtVeS_op;

#endif

#if Rte_SysCon_VrntCR4B_MRGBOutputSpeed

    uint8 rtb_TmpSignalConversionAtVeS_hz;

#endif

#if Rte_SysCon_VrntCR4B_MRGBTargetGr

    uint8 rtb_TmpSignalConversionAtVeS_lr;

#endif

#if Rte_SysCon_VrntCR4B_MRGBTransmOilTemp

    uint8 rtb_TmpSignalConversionAtVeSR_n;

#endif

#if Rte_SysCon_VrntCR4B_MRGBTrqCtrlModeReq

    uint8 rtb_TmpSignalConversionAtVeSR_f;

#endif

#if Rte_SysCon_VrntCR4B_MRGBUpshiftTime

    uint8 rtb_TmpSignalConversionAtVeS_cr;

#endif

#if Rte_SysCon_VrntCR4B_TCapActualC2

    uint8 rtb_TmpSignalConversionAtVeSR_m;

#endif

#if Rte_SysCon_VrntCR4B_TransTrqRatio

    uint8 rtb_TmpSignalConversionAtVeS_cw;

#endif

#if Rte_SysCon_VrntCR4B_CompressionTest

    uint8 rtb_TmpSignalConversionAtVeS_cq;

#endif

#if Rte_SysCon_VrntCR4B_ECMLHOMTransW

    uint8 rtb_TmpSignalConversionAtVeS_k1;

#endif

#if Rte_SysCon_VrntCR4B_EngTrqEnblRqTCMW

    uint8 rtb_TmpSignalConversionAtVeS_np;

#endif

#if Rte_SysCon_VrntCR4B_EngineSpeedW

    uint8 rtb_TmpSignalConversionAtVeS_nd;

#endif

#if Rte_SysCon_VrntCR4B_EngineStallDetected

    uint8 rtb_TmpSignalConversionAtVeS_of;

#endif

#if Rte_SysCon_VrntCR4B_EssEngSt

    uint8 rtb_TmpSignalConversionAtVeSR_b;

#endif

#if Rte_SysCon_VrntCR4B_EssEngStopIsNotAllwd

    uint8 rtb_TmpSignalConversionAtVeSR_d;

#endif

#if Rte_SysCon_VrntCR4B_EssEngStopIsNotAllwdID

    uint8 rtb_TmpSignalConversionAtVeS_ns;

#endif

#if Rte_SysCon_VrntCR4B_EssEngStrtIsNotAllwd

    uint8 rtb_TmpSignalConversionAtVeS_fi;

#endif

#if Rte_SysCon_VrntCR4B_EssEngStrtIsNotAllwdID

    uint8 rtb_TmpSignalConversionAtVeS_ml;

#endif

#if Rte_SysCon_VrntCR4B_LV12PwrFreeRqW

    uint8 rtb_TmpSignalConversionAtVeS_or;

#endif

#if Rte_SysCon_VrntCR4B_MinEngPowerReqForOilDil

    uint8 rtb_TmpSignalConversionAtVeS_bb;

#endif

#if Rte_SysCon_VrntCR4B_MinEngPowerReqForOilDilEnabler

    uint8 rtb_TmpSignalConversionAtVeS_f4;

#endif

#if Rte_SysCon_VrntCR4B_ETRQMode

    uint8 rtb_TmpSignalConversionAtVeS_mo;

#endif

#if Rte_SysCon_VrntCR4B_EngActStdyStTorq

    uint8 rtb_TmpSignalConversionAtVe_hzd;

#endif

#if Rte_SysCon_VrntCR4B_EngActuatorsStat

    uint8 rtb_TmpSignalConversionAtVeS_bz;

#endif

#if Rte_SysCon_VrntCR4B_EngAirFlwStdyStTorq

    uint8 rtb_TmpSignalConversionAtVeS_bw;

#endif

#if Rte_SysCon_VrntCR4B_EngMinSparkNomCurrAirTorqCap

    uint8 rtb_TmpSignalConversionAtVeCR_o;

#endif

#if Rte_SysCon_VrntCR4B_EngRunCrnkAct

    uint8 rtb_TmpSignalConversionAtVeS_mf;

#endif

#if Rte_SysCon_VrntCR4B_EngTrqReserveReq

    uint8 rtb_TmpSignalConversionAtVeS_nx;

#endif

#if Rte_SysCon_VrntCR4B_FeedbackHCP

    uint8 rtb_TmpSignalConversionAtVe_nd1;

#endif

#if Rte_SysCon_VrntCR4B_GasFlwEnblsFuAtStr

    uint8 rtb_TmpSignalConversionAtVeCR_a;

#endif

#if Rte_SysCon_VrntCR4B_HybActEngTorqRespTyp

    uint8 rtb_TmpSignalConversionAtVeS_bl;

#endif

#if Rte_SysCon_VrntCR4B_MAP4BARPHEV

    uint8 rtb_TmpSignalConversionAtVeS_f3;

#endif

#if Rte_SysCon_VrntCR4B_MaxOffEngTorqCap

    uint8 rtb_TmpSignalConversionAtVeS_d0;

#endif

#if Rte_SysCon_VrntCR4B_MaxPrdtdEngTorqCap

    uint8 rtb_TmpSignalConversionAtVeSR_j;

#endif

#if Rte_SysCon_VrntCR4B_MinAirFlowMinSparkTorqCap

    uint8 rtb_TmpSignalConversionAtVeS_ku;

#endif

#if Rte_SysCon_VrntCR4B_MinEngTorqCap

    uint8 rtb_TmpSignalConversionAtVeS_mk;

#endif

#if Rte_SysCon_VrntCR4B_MinImmedEngTorqCap

    uint8 rtb_TmpSignalConversionAtVeS_hx;

#endif

#if Rte_SysCon_VrntCR4B_MinPrdtdEngRunTorqCap

    uint8 rtb_TmpSignalConversionAtVeS_c3;

#endif

#if Rte_SysCon_VrntCR4B_RedSpkAuthorityAvbl

    uint8 rtb_TmpSignalConversionAtVeCR_c;

#endif

#if Rte_SysCon_VrntCR4B_EngCltTmp

    uint8 rtb_TmpSignalConversionAtVeSR_a;

#endif

#if Rte_SysCon_VrntCR4B_MaxEngSpdCap

    uint8 rtb_TmpSignalConversionAtVeC_lr;

#endif

#if Rte_SysCon_VrntCR4B_MinEngSpdCap

    uint8 rtb_TmpSignalConversionAtVeCR_p;

#endif

#if Rte_SysCon_VrntCR4B_ServiceHybSys

    uint8 rtb_TmpSignalConversionAtVeS_fc;

#endif

#if Rte_SysCon_VrntCR4B_MCPA3PSPosP

    uint8 rtb_TmpSignalConversionAtVeC_ax;

#endif

#if Rte_SysCon_VrntCR4B_MCPA6SOStatusP

    uint8 rtb_TmpSignalConversionAtVeCR_n;

#endif

#if Rte_SysCon_VrntCR4B_MCPAAccelRawP

    uint8 rtb_TmpSignalConversionAtVeCR_k;

#endif

#if Rte_SysCon_VrntCR4B_MCPACpbltySpdDivVoltP

    uint8 rtb_TmpSignalConversionAtVeCR_h;

#endif

#if Rte_SysCon_VrntCR4B_MCPADeratingFactorP

    uint8 rtb_TmpSignalConversionAtVeC_ao;

#endif

#if Rte_SysCon_VrntCR4B_MCPADschrgeStatusP

    uint8 rtb_TmpSignalConversionAtVeCR_g;

#endif

#if Rte_SysCon_VrntCR4B_MCPAHVCnctrOpnReqP

    uint8 rtb_TmpSignalConversionAtVeC_kv;

#endif

#if Rte_SysCon_VrntCR4B_MCPAInterlockStsP

    uint8 rtb_TmpSignalConversionAtVeC_kp;

#endif

#if Rte_SysCon_VrntCR4B_MCPAInvrtrStateP

    uint8 rtb_TmpSignalConversionAtVe_aos;

#endif

#if Rte_SysCon_VrntCR4B_MCPAMaxTorqP

    uint8 rtb_TmpSignalConversionAtVeC_hr;

#endif

#if Rte_SysCon_VrntCR4B_MCPAMinTorqP

    uint8 rtb_TmpSignalConversionAtVeCR_j;

#endif

#if Rte_SysCon_VrntCR4B_MCPAMtrMaxCpbltyTrqP

    uint8 rtb_TmpSignalConversionAtVeC_kx;

#endif

#if Rte_SysCon_VrntCR4B_MCPAMtrMinCpbltyTrqP

    uint8 rtb_TmpSignalConversionAtVeCR_m;

#endif

#if Rte_SysCon_VrntCR4B_MCPARPMP

    uint8 rtb_TmpSignalConversionAtVeCR_i;

#endif

#if Rte_SysCon_VrntCR4B_MCPARPMVP

    uint8 rtb_TmpSignalConversionAtVeC_nz;

#endif

#if Rte_SysCon_VrntCR4B_MCPASPTStatP

    uint8 rtb_TmpSignalConversionAtVeC_px;

#endif

#if Rte_SysCon_VrntCR4B_MCPASpdLimP

    uint8 rtb_TmpSignalConversionAtVeC_pl;

#endif

#if Rte_SysCon_VrntCR4B_MCPATempP

    uint8 rtb_TmpSignalConversionAtVeC_c5;

#endif

#if Rte_SysCon_VrntCR4B_MCPATorqAchievedAEMDP

    uint8 rtb_TmpSignalConversionAtVeC_jv;

#endif

#if Rte_SysCon_VrntCR4B_MCPATorqueAchievedP

    uint8 rtb_TmpSignalConversionAtVeC_ca;

#endif

#if Rte_SysCon_VrntCR4B_MCPATorqueAchievedVP

    uint8 rtb_TmpSignalConversionAtVeC_bl;

#endif

#if Rte_SysCon_VrntCR4B_MCPAControlBoardTemperatureP

    uint8 rtb_TmpSignalConversionAtVe_pxx;

#endif

#if Rte_SysCon_VrntCR4B_MCPADCCurrentP

    uint8 rtb_TmpSignalConversionAtVeC_bt;

#endif

#if Rte_SysCon_VrntCR4B_MCPADCVoltageP

    uint8 rtb_TmpSignalConversionAtVeCR_d;

#endif

#if Rte_SysCon_VrntCR4B_MCPADerateReasonP

    uint8 rtb_TmpSignalConversionAtVeC_af;

#endif

#if Rte_SysCon_VrntCR4B_MCPAInverterTempP

    uint8 rtb_TmpSignalConversionAtVeC_pn;

#endif

#if Rte_SysCon_VrntCR4B_MCPAPIMDCSideBusbarTempP

    uint8 rtb_TmpSignalConversionAtVeC_pv;

#endif

#if Rte_SysCon_VrntCR4B_MCPARotorTemperatureP

    uint8 rtb_TmpSignalConversionAtVeC_pj;

#endif

#if Rte_SysCon_VrntCR4B_MCPAServiceLampRequestP

    uint8 rtb_TmpSignalConversionAtVeC_m0;

#endif

    uint8 rtb_TmpSignalConversionAtVeC_ng;
    uint8 rtb_TmpSignalConversionAtVeC_p5;
    uint8 rtb_TmpSignalConversionAtVeC_mv;
    uint8 rtb_TmpSignalConversionAtVeC_pd;
    uint8 rtb_TmpSignalConversionAtVeC_am;
    uint8 rtb_TmpSignalConversionAtVeC_gq;
    uint8 rtb_TmpSignalConversionAtVeC_e1;
    uint8 rtb_TmpSignalConversionAtVeC_lq;
    uint8 rtb_TmpSignalConversionAtVeC_nb;
    uint8 rtb_TmpSignalConversionAtVeC_f1;
    uint8 rtb_TmpSignalConversionAtVeC_cr;
    uint8 rtb_TmpSignalConversionAtVeC_pf;
    uint8 rtb_TmpSignalConversionAtVeC_g2;
    uint8 rtb_TmpSignalConversionAtVeC_bz;
    uint8 rtb_TmpSignalConversionAtVeC_lt;
    uint8 rtb_TmpSignalConversionAtVeC_hy;
    uint8 rtb_TmpSignalConversionAtVe_hym;
    uint8 rtb_TmpSignalConversionAtVeC_ey;
    uint8 rtb_TmpSignalConversionAtVeC_ap;
    uint8 rtb_TmpSignalConversionAtVeC_gu;
    uint8 rtb_TmpSignalConversionAtVeC_e2;
    uint8 rtb_TmpSignalConversionAtVeC_in;
    uint8 rtb_TmpSignalConversionAtVeC_bp;
    uint8 rtb_TmpSignalConversionAtVeC_nx;
    uint8 rtb_TmpSignalConversionAtVeC_mq;
    uint8 rtb_TmpSignalConversionAtVeC_dj;
    uint8 rtb_TmpSignalConversionAtVeC_n5;
    uint8 rtb_TmpSignalConversionAtVeC_bo;
    uint8 rtb_TmpSignalConversionAtVeC_cm;
    uint8 rtb_TmpSignalConversionAtVeC_m5;
    uint8 rtb_TmpSignalConversionAtVeC_mw;

#if Rte_SysCon_VrntCR4B_SGCP6SOStatusP

    uint8 rtb_TmpSignalConversionAtVeC_ji;

#endif

#if Rte_SysCon_VrntCR4B_SGCPAccelRawP

    uint8 rtb_TmpSignalConversionAtVeC_io;

#endif

#if Rte_SysCon_VrntCR4B_SGCPCpbltySpdDivVoltP

    uint8 rtb_TmpSignalConversionAtVeC_p2;

#endif

#if Rte_SysCon_VrntCR4B_SGCPDeratingFactorP

    uint8 rtb_TmpSignalConversionAtVeC_b3;

#endif

#if Rte_SysCon_VrntCR4B_SGCPDschrgeStatusP

    uint8 rtb_TmpSignalConversionAtVeC_de;

#endif

#if Rte_SysCon_VrntCR4B_SGCPHVCnctrOpnReqP

    uint8 rtb_TmpSignalConversionAtVeC_c4;

#endif

#if Rte_SysCon_VrntCR4B_SGCPInterlockStsP

    uint8 rtb_TmpSignalConversionAtVeC_nc;

#endif

#if Rte_SysCon_VrntCR4B_SGCPInvrtrStateP

    uint8 rtb_TmpSignalConversionAtVeC_a3;

#endif

#if Rte_SysCon_VrntCR4B_SGCPMaxTorqP

    uint8 rtb_TmpSignalConversionAtVeC_eh;

#endif

#if Rte_SysCon_VrntCR4B_SGCPMinTorqP

    uint8 rtb_TmpSignalConversionAtVeC_k2;

#endif

#if Rte_SysCon_VrntCR4B_SGCPMtrMaxCpbltyTrqP

    uint8 rtb_TmpSignalConversionAtVeC_fc;

#endif

#if Rte_SysCon_VrntCR4B_SGCPMtrMinCpbltyTrqP

    uint8 rtb_TmpSignalConversionAtVeC_on;

#endif

#if Rte_SysCon_VrntCR4B_SGCPRPMP

    uint8 rtb_TmpSignalConversionAtVeC_du;

#endif

#if Rte_SysCon_VrntCR4B_SGCPRPMVP

    uint8 rtb_TmpSignalConversionAtVe_e1o;

#endif

#if Rte_SysCon_VrntCR4B_SGCPSPTStatP

    uint8 rtb_TmpSignalConversionAtVeC_f5;

#endif

#if Rte_SysCon_VrntCR4B_SGCPSpdLimP

    uint8 rtb_TmpSignalConversionAtVeC_iw;

#endif

#if Rte_SysCon_VrntCR4B_SGCPTempP

    uint8 rtb_TmpSignalConversionAtVeC_pe;

#endif

#if Rte_SysCon_VrntCR4B_SGCPTorqAchievedAEMDP

    uint8 rtb_TmpSignalConversionAtVeC_ci;

#endif

#if Rte_SysCon_VrntCR4B_SGCPTorqueAchievedP

    uint8 rtb_TmpSignalConversionAtVeC_ek;

#endif

#if Rte_SysCon_VrntCR4B_SGCPTorqueAchievedVP

    uint8 rtb_TmpSignalConversionAtVeC_cc;

#endif

#if Rte_SysCon_VrntCR4B_SGCPControlBoardTemperatureP

    uint8 rtb_TmpSignalConversionAtVeC_dn;

#endif

#if Rte_SysCon_VrntCR4B_SGCPDCCurrentP

    uint8 rtb_TmpSignalConversionAtVe_eyi;

#endif

#if Rte_SysCon_VrntCR4B_SGCPDCVoltageP

    uint8 rtb_TmpSignalConversionAtVeC_ha;

#endif

#if Rte_SysCon_VrntCR4B_SGCPDerateReasonP

    uint8 rtb_TmpSignalConversionAtVeC_lv;

#endif

#if Rte_SysCon_VrntCR4B_SGCPInverterTempP

    uint8 rtb_TmpSignalConversionAtVe_iny;

#endif

#if Rte_SysCon_VrntCR4B_SGCPPIMACSideBusbarTempP

    uint8 rtb_TmpSignalConversionAtVeC_dt;

#endif

#if Rte_SysCon_VrntCR4B_SGCPPIMDCSideBusbarTempP

    uint8 rtb_TmpSignalConversionAtVeC_a2;

#endif

#if Rte_SysCon_VrntCR4B_SGCPRotorTemperatureP

    uint8 rtb_TmpSignalConversionAtVeC_mf;

#endif

#if Rte_SysCon_VrntCR4B_SGCPServiceLampRequestP

    uint8 rtb_TmpSignalConversionAtVeC_f3;

#endif

    uint8 tmpRead;

#if Rte_SysCon_VrntCR4B_MCPAControlBoardTemperatureP

    uint8 tmpRead_0;

#endif

#if Rte_SysCon_VrntCR4B_MCPADCCurrentP

    uint8 tmpRead_1;

#endif

#if Rte_SysCon_VrntCR4B_MCPADCVoltageP

    uint8 tmpRead_2;

#endif

#if Rte_SysCon_VrntCR4B_MCPADerateReasonP

    uint8 tmpRead_3;

#endif

#if Rte_SysCon_VrntCR4B_MCPAInverterTempP

    uint8 tmpRead_4;

#endif

#if Rte_SysCon_VrntCR4B_MCPAPIMDCSideBusbarTempP

    uint8 tmpRead_5;

#endif

#if Rte_SysCon_VrntCR4B_MCPARotorTemperatureP

    uint8 tmpRead_6;

#endif

#if Rte_SysCon_VrntCR4B_MCPAServiceLampRequestP

    uint8 tmpRead_7;

#endif

    uint8 tmpRead_8;
    uint8 tmpRead_9;
    uint8 tmpRead_a;
    uint8 tmpRead_b;
    uint8 tmpRead_c;
    uint8 tmpRead_d;
    uint8 tmpRead_e;
    uint8 tmpRead_f;

#if Rte_SysCon_VrntCR4B_SGCPControlBoardTemperatureP

    uint8 tmpRead_g;

#endif

#if Rte_SysCon_VrntCR4B_SGCPDCCurrentP

    uint8 tmpRead_h;

#endif

#if Rte_SysCon_VrntCR4B_SGCPDCVoltageP

    uint8 tmpRead_i;

#endif

#if Rte_SysCon_VrntCR4B_SGCPDerateReasonP

    uint8 tmpRead_j;

#endif

#if Rte_SysCon_VrntCR4B_SGCPInverterTempP

    uint8 tmpRead_k;

#endif

#if Rte_SysCon_VrntCR4B_SGCPPIMACSideBusbarTempP

    uint8 tmpRead_l;

#endif

#if Rte_SysCon_VrntCR4B_SGCPPIMDCSideBusbarTempP

    uint8 tmpRead_m;

#endif

#if Rte_SysCon_VrntCR4B_SGCPRotorTemperatureP

    uint8 tmpRead_n;

#endif

#if Rte_SysCon_VrntCR4B_SGCPServiceLampRequestP

    uint8 tmpRead_o;

#endif

    boolean tmpRead_p;

#if Rte_SysCon_VrntCR4B_SGCPDCVoltageP

    boolean tmpRead_q;

#endif

    uint8 tmpRead_r;
    uint8 tmpRead_s;
    uint8 tmpRead_t;
    uint8 tmpRead_u;

#if Rte_SysCon_VrntCR4B_C1Status

    uint8 tmpRead_v;

#endif

#if Rte_SysCon_VrntCR4B_GearShiftType

    uint8 tmpRead_w;

#endif

#if Rte_SysCon_VrntCR4B_MRGBCurrentGr

    uint8 tmpRead_x;

#endif

#if Rte_SysCon_VrntCR4B_MRGBMaxGrAllwd

    uint8 tmpRead_y;

#endif

#if Rte_SysCon_VrntCR4B_MRGBMaxTrqDes

    uint8 tmpRead_z;

#endif

#if Rte_SysCon_VrntCR4B_MRGBMinGrAllwd

    uint8 tmpRead_10;

#endif

#if Rte_SysCon_VrntCR4B_MRGBMtrBTrqRq

    uint8 tmpRead_11;

#endif

#if Rte_SysCon_VrntCR4B_MRGBOutputSpeed

    uint8 tmpRead_12;

#endif

#if Rte_SysCon_VrntCR4B_MRGBTargetGr

    uint8 tmpRead_13;

#endif

#if Rte_SysCon_VrntCR4B_MRGBTransmOilTemp

    uint8 tmpRead_14;

#endif

#if Rte_SysCon_VrntCR4B_MRGBTrqCtrlModeReq

    uint8 tmpRead_15;

#endif

#if Rte_SysCon_VrntCR4B_MRGBUpshiftTime

    uint8 tmpRead_16;

#endif

#if Rte_SysCon_VrntCR4B_TCapActualC2

    uint8 tmpRead_17;

#endif

#if Rte_SysCon_VrntCR4B_TransTrqRatio

    uint8 tmpRead_18;

#endif

#if Rte_SysCon_VrntCR4B_CompressionTest

    uint8 tmpRead_19;

#endif

#if Rte_SysCon_VrntCR4B_ECMLHOMTransW

    uint8 tmpRead_1a;

#endif

#if Rte_SysCon_VrntCR4B_EngTrqEnblRqTCMW

    uint8 tmpRead_1b;

#endif

#if Rte_SysCon_VrntCR4B_EngineSpeedW

    uint8 tmpRead_1c;

#endif

#if Rte_SysCon_VrntCR4B_EngineStallDetected

    uint8 tmpRead_1d;

#endif

#if Rte_SysCon_VrntCR4B_EssEngSt

    uint8 tmpRead_1e;

#endif

#if Rte_SysCon_VrntCR4B_EssEngStopIsNotAllwd

    uint8 tmpRead_1f;

#endif

#if Rte_SysCon_VrntCR4B_EssEngStopIsNotAllwdID

    uint8 tmpRead_1g;

#endif

#if Rte_SysCon_VrntCR4B_EssEngStrtIsNotAllwd

    uint8 tmpRead_1h;

#endif

#if Rte_SysCon_VrntCR4B_EssEngStrtIsNotAllwdID

    uint8 tmpRead_1i;

#endif

#if Rte_SysCon_VrntCR4B_LV12PwrFreeRqW

    uint8 tmpRead_1j;

#endif

#if Rte_SysCon_VrntCR4B_MinEngPowerReqForOilDil

    uint8 tmpRead_1k;

#endif

#if Rte_SysCon_VrntCR4B_MinEngPowerReqForOilDilEnabler

    uint8 tmpRead_1l;

#endif

#if Rte_SysCon_VrntCR4B_ETRQMode

    uint8 tmpRead_1m;

#endif

#if Rte_SysCon_VrntCR4B_EngActStdyStTorq

    uint8 tmpRead_1n;

#endif

#if Rte_SysCon_VrntCR4B_EngActuatorsStat

    uint8 tmpRead_1o;

#endif

#if Rte_SysCon_VrntCR4B_EngAirFlwStdyStTorq

    uint8 tmpRead_1p;

#endif

#if Rte_SysCon_VrntCR4B_EngMinSparkNomCurrAirTorqCap

    uint8 tmpRead_1q;

#endif

#if Rte_SysCon_VrntCR4B_EngRunCrnkAct

    uint8 tmpRead_1r;

#endif

#if Rte_SysCon_VrntCR4B_EngTrqReserveReq

    uint8 tmpRead_1s;

#endif

#if Rte_SysCon_VrntCR4B_FeedbackHCP

    uint8 tmpRead_1t;

#endif

#if Rte_SysCon_VrntCR4B_GasFlwEnblsFuAtStr

    uint8 tmpRead_1u;

#endif

#if Rte_SysCon_VrntCR4B_HybActEngTorqRespTyp

    uint8 tmpRead_1v;

#endif

#if Rte_SysCon_VrntCR4B_MAP4BARPHEV

    uint8 tmpRead_1w;

#endif

#if Rte_SysCon_VrntCR4B_MaxOffEngTorqCap

    uint8 tmpRead_1x;

#endif

#if Rte_SysCon_VrntCR4B_MaxPrdtdEngTorqCap

    uint8 tmpRead_1y;

#endif

#if Rte_SysCon_VrntCR4B_MinAirFlowMinSparkTorqCap

    uint8 tmpRead_1z;

#endif

#if Rte_SysCon_VrntCR4B_MinEngTorqCap

    uint8 tmpRead_20;

#endif

#if Rte_SysCon_VrntCR4B_MinImmedEngTorqCap

    uint8 tmpRead_21;

#endif

#if Rte_SysCon_VrntCR4B_MinPrdtdEngRunTorqCap

    uint8 tmpRead_22;

#endif

#if Rte_SysCon_VrntCR4B_RedSpkAuthorityAvbl

    uint8 tmpRead_23;

#endif

#if Rte_SysCon_VrntCR4B_EngCltTmp

    uint8 tmpRead_24;

#endif

#if Rte_SysCon_VrntCR4B_MaxEngSpdCap

    uint8 tmpRead_25;

#endif

#if Rte_SysCon_VrntCR4B_MinEngSpdCap

    uint8 tmpRead_26;

#endif

#if Rte_SysCon_VrntCR4B_ServiceHybSys

    uint8 tmpRead_27;

#endif

#if Rte_SysCon_VrntCR4B_MCPA3PSPosP

    uint8 tmpRead_28;

#endif

#if Rte_SysCon_VrntCR4B_MCPA6SOStatusP

    uint8 tmpRead_29;

#endif

#if Rte_SysCon_VrntCR4B_MCPAAccelRawP

    uint8 tmpRead_2a;

#endif

#if Rte_SysCon_VrntCR4B_MCPACpbltySpdDivVoltP

    uint8 tmpRead_2b;

#endif

#if Rte_SysCon_VrntCR4B_MCPADeratingFactorP

    uint8 tmpRead_2c;

#endif

#if Rte_SysCon_VrntCR4B_MCPADschrgeStatusP

    uint8 tmpRead_2d;

#endif

#if Rte_SysCon_VrntCR4B_MCPAHVCnctrOpnReqP

    uint8 tmpRead_2e;

#endif

#if Rte_SysCon_VrntCR4B_MCPAInterlockStsP

    uint8 tmpRead_2f;

#endif

#if Rte_SysCon_VrntCR4B_MCPAInvrtrStateP

    uint8 tmpRead_2g;

#endif

#if Rte_SysCon_VrntCR4B_MCPAMaxTorqP

    uint8 tmpRead_2h;

#endif

#if Rte_SysCon_VrntCR4B_MCPAMinTorqP

    uint8 tmpRead_2i;

#endif

#if Rte_SysCon_VrntCR4B_MCPAMtrMaxCpbltyTrqP

    uint8 tmpRead_2j;

#endif

#if Rte_SysCon_VrntCR4B_MCPAMtrMinCpbltyTrqP

    uint8 tmpRead_2k;

#endif

#if Rte_SysCon_VrntCR4B_MCPARPMP

    uint8 tmpRead_2l;

#endif

#if Rte_SysCon_VrntCR4B_MCPARPMVP

    uint8 tmpRead_2m;

#endif

#if Rte_SysCon_VrntCR4B_MCPASPTStatP

    uint8 tmpRead_2n;

#endif

#if Rte_SysCon_VrntCR4B_MCPASpdLimP

    uint8 tmpRead_2o;

#endif

#if Rte_SysCon_VrntCR4B_MCPATempP

    uint8 tmpRead_2p;

#endif

#if Rte_SysCon_VrntCR4B_MCPATorqAchievedAEMDP

    uint8 tmpRead_2q;

#endif

#if Rte_SysCon_VrntCR4B_MCPATorqueAchievedP

    uint8 tmpRead_2r;

#endif

#if Rte_SysCon_VrntCR4B_MCPATorqueAchievedVP

    uint8 tmpRead_2s;

#endif

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

#if Rte_SysCon_VrntCR4B_SGCP6SOStatusP

    uint8 tmpRead_3g;

#endif

#if Rte_SysCon_VrntCR4B_SGCPAccelRawP

    uint8 tmpRead_3h;

#endif

#if Rte_SysCon_VrntCR4B_SGCPCpbltySpdDivVoltP

    uint8 tmpRead_3i;

#endif

#if Rte_SysCon_VrntCR4B_SGCPDeratingFactorP

    uint8 tmpRead_3j;

#endif

#if Rte_SysCon_VrntCR4B_SGCPDschrgeStatusP

    uint8 tmpRead_3k;

#endif

#if Rte_SysCon_VrntCR4B_SGCPHVCnctrOpnReqP

    uint8 tmpRead_3l;

#endif

#if Rte_SysCon_VrntCR4B_SGCPInterlockStsP

    uint8 tmpRead_3m;

#endif

#if Rte_SysCon_VrntCR4B_SGCPInvrtrStateP

    uint8 tmpRead_3n;

#endif

#if Rte_SysCon_VrntCR4B_SGCPMaxTorqP

    uint8 tmpRead_3o;

#endif

#if Rte_SysCon_VrntCR4B_SGCPMinTorqP

    uint8 tmpRead_3p;

#endif

#if Rte_SysCon_VrntCR4B_SGCPMtrMaxCpbltyTrqP

    uint8 tmpRead_3q;

#endif

#if Rte_SysCon_VrntCR4B_SGCPMtrMinCpbltyTrqP

    uint8 tmpRead_3r;

#endif

#if Rte_SysCon_VrntCR4B_SGCPRPMP

    uint8 tmpRead_3s;

#endif

#if Rte_SysCon_VrntCR4B_SGCPRPMVP

    uint8 tmpRead_3t;

#endif

#if Rte_SysCon_VrntCR4B_SGCPSPTStatP

    uint8 tmpRead_3u;

#endif

#if Rte_SysCon_VrntCR4B_SGCPSpdLimP

    uint8 tmpRead_3v;

#endif

#if Rte_SysCon_VrntCR4B_SGCPTempP

    uint8 tmpRead_3w;

#endif

#if Rte_SysCon_VrntCR4B_SGCPTorqAchievedAEMDP

    uint8 tmpRead_3x;

#endif

#if Rte_SysCon_VrntCR4B_SGCPTorqueAchievedP

    uint8 tmpRead_3y;

#endif

#if Rte_SysCon_VrntCR4B_SGCPTorqueAchievedVP

    uint8 tmpRead_3z;

#endif

#if Rte_SysCon_VrntCR4B_EngAirFlwStdyStTorq

    boolean tmpRead_40;

#endif

#if Rte_SysCon_VrntCR4B_MinAirFlowMinSparkTorqCap

    boolean tmpRead_41;

#endif

#if Rte_SysCon_VrntCR4B_MinEngTorqCap

    boolean tmpRead_42;

#endif

#if Rte_SysCon_VrntCR4B_MinImmedEngTorqCap

    boolean tmpRead_43;

#endif

#if Rte_SysCon_VrntCR4B_MinPrdtdEngRunTorqCap

    boolean tmpRead_44;

#endif

#if Rte_SysCon_VrntCR4B_EngCltTmp

    boolean tmpRead_45;

#endif

    boolean tmpRead_46;
    boolean tmpRead_47;

#if Rte_SysCon_VrntCR4B_SGCPTorqueAchievedP

    boolean tmpRead_48;

#endif

#if Rte_SysCon_VrntCR4B_EngTorqACCCapability

    uint8 tmpRead_49;

#endif

#if Rte_SysCon_VrntCR4B_EngTorqCapbltyMaxOffTorq

    uint8 tmpRead_4a;

#endif

#if Rte_SysCon_VrntCR4B_EngTorqCapbltyMaxTorq

    uint8 tmpRead_4b;

#endif

#if Rte_SysCon_VrntCR4B_EngTorqCapbltyMinRunTorq

    uint8 tmpRead_4c;

#endif

#if Rte_SysCon_VrntCR4B_EngTorqCapbltyMinTorq

    uint8 tmpRead_4d;

#endif

#if Rte_SysCon_VrntCR4B_EngTorqCapbltyRefEngSpd

    uint8 tmpRead_4e;

#endif

    TePWMD_e_CanLocStatus rtb_Switch;
    boolean FA_out_e;
    boolean FA_out_ff;
    boolean FA_out_kq;
    boolean FA_out_lx;
    boolean rtb_RelationalOperator;

#if Rte_SysCon_VrntCR4B_EngActStdyStTorq || Rte_SysCon_VrntCR4B_EngMinSparkNomCurrAirTorqCap || Rte_SysCon_VrntCR4B_EngTrqReserveReq || Rte_SysCon_VrntCR4B_MAP4BARPHEV || Rte_SysCon_VrntCR4B_MaxOffEngTorqCap

    boolean FA_out_ou;

#endif

    boolean FA_out_gb;

#if Rte_SysCon_VrntCR4B_SGCPAccelRawP || Rte_SysCon_VrntCR4B_SGCPInterlockStsP

    boolean FA_out_p;

#endif

#if Rte_SysCon_VrntCR4B_SGCPRPMP || Rte_SysCon_VrntCR4B_SGCPTempP

    boolean FA_out_h;

#endif

#if Rte_SysCon_VrntCR4B_SGCPControlBoardTemperatureP || Rte_SysCon_VrntCR4B_SGCPTorqAchievedAEMDP

    boolean FA_out_ma;

#endif

#if Rte_SysCon_VrntCR4B_SGCPDCCurrentP || Rte_SysCon_VrntCR4B_SGCPInverterTempP || Rte_SysCon_VrntCR4B_SGCPPIMACSideBusbarTempP || Rte_SysCon_VrntCR4B_SGCPPIMDCSideBusbarTempP || Rte_SysCon_VrntCR4B_SGCPRotorTemperatureP

    boolean FA_out_g;

#endif

    boolean guard1 = false;

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* SignalConversion generated from: '<S2>/VeSR1B_e_APCM_Stat_FD16_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_APCM_Stat_FD16_ErrSts'
     */
    rtb_TmpSignalConversionAtVeSR1B = Rte_Read_VeSR1B_y_APCM_Stat_FD16_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_A);

    /* Switch: '<S19>/Switch' incorporates:
     *  Constant: '<S11>/Calib'
     *  Inport: '<Root>/VeCANR_e_CanLocEnblStatus'
     */
    if (KeCR4B_b_CanLocStatusBypEnbl)
    {
        /* Switch: '<S19>/Switch' incorporates:
         *  Constant: '<S12>/Calib'
         */
        rtb_Switch = KeCR4B_e_CanLocStatus;
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
     *  Constant: '<S10>/Constant'
     *  Switch: '<S19>/Switch'
     */
    rtb_RelationalOperator = (((uint32)rtb_Switch) == CePWMD_e_LOC_Enable);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_APCM_Stat_FD16_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S27>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_APCM_Stat_FD16_SigSts_Value(&tmpRead_r);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S24>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_r) & 3U) != 0U)
    {
        /* Transition: '<S27>:100' */
        /* Transition: '<S27>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S27>:104' */
        /*  MM */
        if ((((uint32)tmpRead_r) & 4U) != 0U)
        {
            /* Transition: '<S27>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S27>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S27>:110' */
                /* Call Tmot */
                VeSR1B_y_APCM_Stat_FD16_CallStatus = 3U;

                /* Event: '<S27>:40' */
                /* Transition: '<S27>:115' */
                /* Transition: '<S27>:114' */
            }
        }
        else
        {
            /* Transition: '<S27>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR1B) == 133)
            {
                /* Transition: '<S27>:95' */
                /* Transition: '<S27>:116' */
                /* Call Nothing */
                VeSR1B_y_APCM_Stat_FD16_CallStatus = 4U;

                /* Transition: '<S27>:114' */
            }
            else
            {
                /* Transition: '<S27>:120' */
                if ((((uint32)tmpRead_r) & 8U) != 0U)
                {
                    /* Transition: '<S27>:122' */
                    /* Transition: '<S27>:125' */
                    FA_out_lx = true;

                    /* Transition: '<S27>:126' */
                }
                else
                {
                    /* Transition: '<S27>:124' */
                    FA_out_lx = false;
                }

                /* Transition: '<S27>:117' */
                /* Call Poke */
                VeSR1B_y_APCM_Stat_FD16_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S20>/Poke' */
                /* FunctionCaller: '<S29>/Function Caller' */
                /* Event: '<S27>:38' */
                Rte_Call_PokePLTR_e_Scndry_AutoPosCorrMd_PokePLTR_e_Scndry_AutoPosCorrMd
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_A, FA_out_lx);

                /* End of Outputs for SubSystem: '<S20>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S27>:111' */
        /* Call Fsft */
        VeSR1B_y_APCM_Stat_FD16_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S20>/Fsft' */
        /* FunctionCaller: '<S28>/Function Caller' */
        /* Event: '<S27>:39' */
        Rte_Call_FsftPLTR_b_Scndry_AutoPosCorrMd_FsftPLTR_b_Scndry_AutoPosCorrMd
            ();

        /* End of Outputs for SubSystem: '<S20>/Fsft' */
        /* Transition: '<S27>:113' */
        /* Transition: '<S27>:115' */
        /* Transition: '<S27>:114' */
    }

    /* End of Chart: '<S24>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_PRNDFailSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_PRNDFailSts_ErrSts'
     */
    /* Transition: '<S27>:107' */
    rtb_TmpSignalConversionAtVeSR_i = Rte_Read_VeSR1B_b_PRNDFailSts_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_P);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_PRNDFailSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S33>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_PRNDFailSts_SigSts_Value(&tmpRead_s);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S30>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_s) & 3U) != 0U)
    {
        /* Transition: '<S33>:100' */
        /* Transition: '<S33>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S33>:104' */
        /*  MM */
        if ((((uint32)tmpRead_s) & 4U) != 0U)
        {
            /* Transition: '<S33>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S33>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S33>:110' */
                /* Call Tmot */
                VeSR1B_y_PRNDFailSts_CallStatus = 3U;

                /* Event: '<S33>:40' */
                /* Transition: '<S33>:115' */
                /* Transition: '<S33>:114' */
            }
        }
        else
        {
            /* Transition: '<S33>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_i) == 133)
            {
                /* Transition: '<S33>:95' */
                /* Transition: '<S33>:116' */
                /* Call Nothing */
                VeSR1B_y_PRNDFailSts_CallStatus = 4U;

                /* Transition: '<S33>:114' */
            }
            else
            {
                /* Transition: '<S33>:120' */
                /* Transition: '<S33>:117' */
                /* Call Poke */
                VeSR1B_y_PRNDFailSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S21>/Poke' */
                /* FunctionCaller: '<S35>/Function Caller' */
                /* Event: '<S33>:38' */
                Rte_Call_PokePLTR_b_Scndry_ShiftSnsFA_PokePLTR_b_Scndry_ShiftSnsFA
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_P);

                /* End of Outputs for SubSystem: '<S21>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S33>:111' */
        /* Call Fsft */
        VeSR1B_y_PRNDFailSts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S21>/Fsft' */
        /* FunctionCaller: '<S34>/Function Caller' */
        /* Event: '<S33>:39' */
        Rte_Call_FsftPLTR_b_Scndry_ShiftSnsFA_FsftPLTR_b_Scndry_ShiftSnsFA();

        /* End of Outputs for SubSystem: '<S21>/Fsft' */
        /* Transition: '<S33>:113' */
        /* Transition: '<S33>:115' */
        /* Transition: '<S33>:114' */
    }

    /* End of Chart: '<S30>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_PRNDdisplayFailSts_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_PRNDdisplayFailSts_ErrSts'
     */
    /* Transition: '<S33>:107' */
    rtb_TmpSignalConversionAtVeSR_o = Rte_Read_VeSR1B_b_PRNDdisplayFailSts_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_i);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_PRNDdisplayFailSts_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S39>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_PRNDdisplayFailSts_SigSts_Value(&tmpRead_t);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S36>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_t) & 3U) != 0U)
    {
        /* Transition: '<S39>:100' */
        /* Transition: '<S39>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S39>:104' */
        /*  MM */
        if ((((uint32)tmpRead_t) & 4U) != 0U)
        {
            /* Transition: '<S39>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S39>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S39>:110' */
                /* Call Tmot */
                VeSR1B_y_PRNDdisplayFailSts_CallStatus = 3U;

                /* Event: '<S39>:40' */
                /* Transition: '<S39>:115' */
                /* Transition: '<S39>:114' */
            }
        }
        else
        {
            /* Transition: '<S39>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_o) == 133)
            {
                /* Transition: '<S39>:95' */
                /* Transition: '<S39>:116' */
                /* Call Nothing */
                VeSR1B_y_PRNDdisplayFailSts_CallStatus = 4U;

                /* Transition: '<S39>:114' */
            }
            else
            {
                /* Transition: '<S39>:120' */
                /* Transition: '<S39>:117' */
                /* Call Poke */
                VeSR1B_y_PRNDdisplayFailSts_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S22>/Poke' */
                /* FunctionCaller: '<S41>/Function Caller' */
                /* Event: '<S39>:38' */
                Rte_Call_PokePLTR_b_Scndry_ShifterDispFA_PokePLTR_b_Scndry_ShifterDispFA
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_i);

                /* End of Outputs for SubSystem: '<S22>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S39>:111' */
        /* Call Fsft */
        VeSR1B_y_PRNDdisplayFailSts_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S22>/Fsft' */
        /* FunctionCaller: '<S40>/Function Caller' */
        /* Event: '<S39>:39' */
        Rte_Call_FsftPLTR_b_Scndry_ShifterDispFA_FsftPLTR_b_Scndry_ShifterDispFA
            ();

        /* End of Outputs for SubSystem: '<S22>/Fsft' */
        /* Transition: '<S39>:113' */
        /* Transition: '<S39>:115' */
        /* Transition: '<S39>:114' */
    }

    /* End of Chart: '<S36>/Chart' */

    /* SignalConversion generated from: '<S2>/VeSR1B_e_ShiftLeverPositionReq_ErrSts' incorporates:
     *  Inport: '<Root>/VeSR1B_e_ShiftLeverPositionReq_ErrSts'
     */
    /* Transition: '<S39>:107' */
    rtb_TmpSignalConversionAtVeSR_c =
        Rte_Read_VeSR1B_y_ShiftLeverPositionReq_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_S);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSR1B_y_ShiftLeverPositionReq_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S45>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_ShiftLeverPositionReq_SigSts_Value(&tmpRead_u);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S42>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_u) & 3U) != 0U)
    {
        /* Transition: '<S45>:100' */
        /* Transition: '<S45>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S45>:104' */
        /*  MM */
        if ((((uint32)tmpRead_u) & 4U) != 0U)
        {
            /* Transition: '<S45>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S45>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S45>:110' */
                /* Call Tmot */
                VeSR1B_y_ShiftLeverPositionReq_CallStatus = 3U;

                /* Event: '<S45>:40' */
                /* Transition: '<S45>:115' */
                /* Transition: '<S45>:114' */
            }
        }
        else
        {
            /* Transition: '<S45>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_c) == 133)
            {
                /* Transition: '<S45>:95' */
                /* Transition: '<S45>:116' */
                /* Call Nothing */
                VeSR1B_y_ShiftLeverPositionReq_CallStatus = 4U;

                /* Transition: '<S45>:114' */
            }
            else
            {
                /* Transition: '<S45>:120' */
                if ((((uint32)tmpRead_u) & 8U) != 0U)
                {
                    /* Transition: '<S45>:122' */
                    /* Transition: '<S45>:125' */
                    FA_out_lx = true;

                    /* Transition: '<S45>:126' */
                }
                else
                {
                    /* Transition: '<S45>:124' */
                    FA_out_lx = false;
                }

                /* Transition: '<S45>:117' */
                /* Call Poke */
                VeSR1B_y_ShiftLeverPositionReq_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S23>/Poke' */
                /* FunctionCaller: '<S47>/Function Caller' */
                /* Event: '<S45>:38' */
                Rte_Call_PokePLTR_e_Scndry_TransShiftPstn_PokePLTR_e_Scndry_TransShiftPstn
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_S, FA_out_lx);

                /* End of Outputs for SubSystem: '<S23>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S45>:111' */
        /* Call Fsft */
        VeSR1B_y_ShiftLeverPositionReq_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S23>/Fsft' */
        /* FunctionCaller: '<S46>/Function Caller' */
        /* Event: '<S45>:39' */
        Rte_Call_FsftPLTR_b_Scndry_TransShiftPstn_FsftPLTR_b_Scndry_TransShiftPstn
            ();

        /* End of Outputs for SubSystem: '<S23>/Fsft' */
        /* Transition: '<S45>:113' */
        /* Transition: '<S45>:115' */
        /* Transition: '<S45>:114' */
    }

    /* End of Chart: '<S42>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_M_EngTqACCCapability' incorporates:
     *  Inport: '<Root>/VeCRDB_y_EngTqACCCapability_SigSts'
     */
    /* Transition: '<S45>:107' */
#if Rte_SysCon_VrntCR4B_EngTorqACCCapability

    /* Outputs for Atomic SubSystem: '<S48>/EngTorqACCCapability' */
    /* SignalConversion generated from: '<S2>/VeCRDB_M_EngTqACCCapability' incorporates:
     *  Inport: '<Root>/VeCRDB_M_EngTqACCCapability'
     */
    rtb_TmpSignalConversionAtVeCRDB = Rte_Read_VeCRDB_M_EngTqACCCapability_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_M_E);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S59>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_EngTqACCCapability_SigSts_Value(&tmpRead_49);

    /* Outputs for Atomic SubSystem: '<S49>/EngTorqACCCapability' */
    /* Chart: '<S56>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_y_EngTqACCCapability_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_49) & 3U) != 0U)
    {
        /* Transition: '<S59>:100' */
        /* Transition: '<S59>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S59>:104' */
        /*  MM */
        if ((((uint32)tmpRead_49) & 4U) != 0U)
        {
            /* Transition: '<S59>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S59>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S59>:110' */
                /* Call Tmot */
                VeCRDB_y_EngTqACCCapabilityFD16_CallStatus = 3U;

                /* Event: '<S59>:40' */
                /* Transition: '<S59>:115' */
                /* Transition: '<S59>:114' */
            }
        }
        else
        {
            /* Transition: '<S59>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCRDB) == 133)
            {
                /* Transition: '<S59>:95' */
                /* Transition: '<S59>:116' */
                /* Call Nothing */
                VeCRDB_y_EngTqACCCapabilityFD16_CallStatus = 4U;

                /* Transition: '<S59>:114' */
            }
            else
            {
                /* Transition: '<S59>:120' */
                if ((((uint32)tmpRead_49) & 8U) != 0U)
                {
                    /* Transition: '<S59>:122' */
                    /* Transition: '<S59>:125' */
                    FA_out_lx = true;

                    /* Transition: '<S59>:126' */
                }
                else
                {
                    /* Transition: '<S59>:124' */
                    FA_out_lx = false;
                }

                /* Transition: '<S59>:117' */
                /* Call Poke */
                VeCRDB_y_EngTqACCCapabilityFD16_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S55>/Poke' */
                /* FunctionCaller: '<S58>/Function Caller' */
                /* Event: '<S59>:38' */
                Rte_Call_PokeETQR_M_EngTorqACC4Capability_PokeETQR_M_EngTorqACC4Capability
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_M_E, FA_out_lx);

                /* End of Outputs for SubSystem: '<S55>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S59>:111' */
        /* Call Fsft */
        VeCRDB_y_EngTqACCCapabilityFD16_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S55>/Fsft' */
        /* FunctionCaller: '<S57>/Function Caller' */
        /* Event: '<S59>:39' */
        Rte_Call_FsftETQR_M_EngTorqACC4Capability_FsftETQR_M_EngTorqACC4Capability
            ();

        /* End of Outputs for SubSystem: '<S55>/Fsft' */
        /* Transition: '<S59>:113' */
        /* Transition: '<S59>:115' */
        /* Transition: '<S59>:114' */
    }

    /* End of Chart: '<S56>/Chart' */
    /* End of Outputs for SubSystem: '<S49>/EngTorqACCCapability' */
    /* End of Outputs for SubSystem: '<S48>/EngTorqACCCapability' */
    /* Transition: '<S59>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_M_EngTqACCCapability' */

    /* SignalConversion generated from: '<S2>/VeCRDB_M_EngTqCapbltMaxOfTq' */
#if Rte_SysCon_VrntCR4B_EngTorqCapbltyMaxOffTorq

    /* SignalConversion generated from: '<S2>/VeCRDB_M_EngTqCapbltMaxOfTq' incorporates:
     *  Inport: '<Root>/VeCRDB_M_EngTqCapbltMaxOfTq'
     */
    rtb_TmpSignalConversionAtVeCR_b = Rte_Read_VeCRDB_M_EngTqCapbltMaxOfTq_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_M_e);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_M_EngTqCapbltMaxOfTq' */

    /* SignalConversion generated from: '<S2>/VeCRDB_y_EngTqCapbltFrmCntr' incorporates:
     *  SignalConversion generated from: '<S2>/VeCRDB_b_EngTqCapbltEngOpMd'
     */
#if Rte_SysCon_VrntCR4B_EngTorqCapbltyMaxOffTorq || Rte_SysCon_VrntCR4B_EngTorqCapbltyMaxTorq || Rte_SysCon_VrntCR4B_EngTorqCapbltyMinRunTorq || Rte_SysCon_VrntCR4B_EngTorqCapbltyMinTorq || Rte_SysCon_VrntCR4B_EngTorqCapbltyRefEngSpd

    /* SignalConversion generated from: '<S2>/VeCRDB_y_EngTqCapbltFrmCntr' incorporates:
     *  Inport: '<Root>/VeCRDB_y_EngTqCapbltFrmCntr'
     */
    (void)Rte_Read_VeCRDB_y_EngTqCapbltFrmCntr_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_E);

    /* SignalConversion generated from: '<S2>/VeCRDB_b_EngTqCapbltEngOpMd' incorporates:
     *  Inport: '<Root>/VeCRDB_b_EngTqCapbltEngOpMd'
     */
    (void)Rte_Read_VeCRDB_b_EngTqCapbltEngOpMd_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_E);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_y_EngTqCapbltFrmCntr' */
#if Rte_SysCon_VrntCR4B_EngTorqCapbltyMaxOffTorq

    /* Outputs for Atomic SubSystem: '<S48>/EngTorqCapbltyMaxOffTorq' */
    /* Inport: '<Root>/VeCRDB_y_EngTqCapbltMaxOfTq_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S63>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_EngTqCapbltMaxOfTq_SigSts_Value(&tmpRead_4a);

    /* Outputs for Atomic SubSystem: '<S50>/EngTorqCapbltyMaxOffTorq' */
    /* Chart: '<S61>/Chart' */
    if ((((uint32)tmpRead_4a) & 3U) != 0U)
    {
        /* Transition: '<S63>:100' */
        /* Transition: '<S63>:103' */
        /* Transition: '<S63>:111' */
        /* Call Fsft */
        VeCRDB_y_EngTqCapbltMaxOfTqFD16_CallStatus = 2U;

        /* Event: '<S63>:39' */
        /* Transition: '<S63>:113' */
        /* Transition: '<S63>:115' */
        /* Transition: '<S63>:114' */
    }
    else
    {
        /* Transition: '<S63>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4a) & 4U) != 0U)
        {
            /* Transition: '<S63>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S63>:88' */
                /* Transition: '<S63>:111' */
                /* Call Fsft */
                VeCRDB_y_EngTqCapbltMaxOfTqFD16_CallStatus = 2U;

                /* Event: '<S63>:39' */
                /* Transition: '<S63>:113' */
                /* Transition: '<S63>:115' */
                /* Transition: '<S63>:114' */
            }
            else
            {
                /* Transition: '<S63>:110' */
                /* Call Tmot */
                VeCRDB_y_EngTqCapbltMaxOfTqFD16_CallStatus = 3U;

                /* Event: '<S63>:40' */
                /* Transition: '<S63>:115' */
                /* Transition: '<S63>:114' */
            }
        }
        else
        {
            /* Transition: '<S63>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_b) == 133)
            {
                /* Transition: '<S63>:95' */
                /* Transition: '<S63>:116' */
                /* Call Nothing */
                VeCRDB_y_EngTqCapbltMaxOfTqFD16_CallStatus = 4U;

                /* Transition: '<S63>:114' */
            }
            else
            {
                /* Transition: '<S63>:120' */
                if ((((uint32)tmpRead_4a) & 8U) != 0U)
                {
                    /* Transition: '<S63>:122' */
                    /* Transition: '<S63>:125' */
                    FA_out_lx = true;

                    /* Transition: '<S63>:126' */
                }
                else
                {
                    /* Transition: '<S63>:124' */
                    FA_out_lx = false;
                }

                /* Transition: '<S63>:117' */
                /* Call Poke */
                VeCRDB_y_EngTqCapbltMaxOfTqFD16_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S60>/Poke' */
                /* FunctionCaller: '<S62>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S62>/Data Type Conversion1'
                 */
                /* Event: '<S63>:38' */
                Rte_Call_PokeETQR_M_MinDragCapability_PokeETQR_M_MinDragCapability
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_M_e, (sint16)
                     CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_E,
                     CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_E, FA_out_lx);

                /* End of Outputs for SubSystem: '<S60>/Poke' */
            }
        }
    }

    /* End of Chart: '<S61>/Chart' */
    /* End of Outputs for SubSystem: '<S50>/EngTorqCapbltyMaxOffTorq' */
    /* End of Outputs for SubSystem: '<S48>/EngTorqCapbltyMaxOffTorq' */
    /* Transition: '<S63>:107' */
#endif

    /* SignalConversion generated from: '<S2>/VeCRDB_M_EngTqCapbltyMaxTq' incorporates:
     *  Inport: '<Root>/VeCRDB_y_EngTqCapbltyMaxTq_SigSts'
     */
#if Rte_SysCon_VrntCR4B_EngTorqCapbltyMaxTorq

    /* Outputs for Atomic SubSystem: '<S48>/EngTorqCapbltyMaxTorq' */
    /* SignalConversion generated from: '<S2>/VeCRDB_M_EngTqCapbltyMaxTq' incorporates:
     *  Inport: '<Root>/VeCRDB_M_EngTqCapbltyMaxTq'
     */
    rtb_TmpSignalConversionAtVeCR_f = Rte_Read_VeCRDB_M_EngTqCapbltyMaxTq_Value(
        &CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__ek);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S67>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_EngTqCapbltyMaxTq_SigSts_Value(&tmpRead_4b);

    /* Outputs for Atomic SubSystem: '<S51>/EngTorqCapbltyMaxTorq' */
    /* Chart: '<S65>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_y_EngTqCapbltyMaxTq_SigSts'
     */
    if ((((uint32)tmpRead_4b) & 3U) != 0U)
    {
        /* Transition: '<S67>:100' */
        /* Transition: '<S67>:103' */
        /* Transition: '<S67>:111' */
        /* Call Fsft */
        VeCRDB_y_EngTqCapbltyMaxTqFD16_CallStatus = 2U;

        /* Event: '<S67>:39' */
        /* Transition: '<S67>:113' */
        /* Transition: '<S67>:115' */
        /* Transition: '<S67>:114' */
    }
    else
    {
        /* Transition: '<S67>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4b) & 4U) != 0U)
        {
            /* Transition: '<S67>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S67>:88' */
                /* Transition: '<S67>:111' */
                /* Call Fsft */
                VeCRDB_y_EngTqCapbltyMaxTqFD16_CallStatus = 2U;

                /* Event: '<S67>:39' */
                /* Transition: '<S67>:113' */
                /* Transition: '<S67>:115' */
                /* Transition: '<S67>:114' */
            }
            else
            {
                /* Transition: '<S67>:110' */
                /* Call Tmot */
                VeCRDB_y_EngTqCapbltyMaxTqFD16_CallStatus = 3U;

                /* Event: '<S67>:40' */
                /* Transition: '<S67>:115' */
                /* Transition: '<S67>:114' */
            }
        }
        else
        {
            /* Transition: '<S67>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_f) == 133)
            {
                /* Transition: '<S67>:95' */
                /* Transition: '<S67>:116' */
                /* Call Nothing */
                VeCRDB_y_EngTqCapbltyMaxTqFD16_CallStatus = 4U;

                /* Transition: '<S67>:114' */
            }
            else
            {
                /* Transition: '<S67>:120' */
                if ((((uint32)tmpRead_4b) & 8U) != 0U)
                {
                    /* Transition: '<S67>:122' */
                    /* Transition: '<S67>:125' */
                    FA_out_lx = true;

                    /* Transition: '<S67>:126' */
                }
                else
                {
                    /* Transition: '<S67>:124' */
                    FA_out_lx = false;
                }

                /* Transition: '<S67>:117' */
                /* Call Poke */
                VeCRDB_y_EngTqCapbltyMaxTqFD16_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S64>/Poke' */
                /* FunctionCaller: '<S66>/Function Caller1' incorporates:
                 *  DataTypeConversion: '<S66>/Data Type Conversion2'
                 */
                /* Event: '<S67>:38' */
                Rte_Call_PokeETQR_M_EngCapabilityMax_PokeETQR_M_EngCapabilityMax
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__ek, (sint16)
                     CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_E,
                     CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_E, FA_out_lx);

                /* End of Outputs for SubSystem: '<S64>/Poke' */
            }
        }
    }

    /* End of Chart: '<S65>/Chart' */
    /* End of Outputs for SubSystem: '<S51>/EngTorqCapbltyMaxTorq' */
    /* End of Outputs for SubSystem: '<S48>/EngTorqCapbltyMaxTorq' */
    /* Transition: '<S67>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_M_EngTqCapbltyMaxTq' */

    /* SignalConversion generated from: '<S2>/VeCRDB_M_EngTqCapbltMinRnTq' incorporates:
     *  Inport: '<Root>/VeCRDB_y_EngTqCapbltMinRnTq_SigSts'
     */
#if Rte_SysCon_VrntCR4B_EngTorqCapbltyMinRunTorq

    /* Outputs for Atomic SubSystem: '<S48>/EngTorqCapbltyMinRunTorq' */
    /* SignalConversion generated from: '<S2>/VeCRDB_M_EngTqCapbltMinRnTq' incorporates:
     *  Inport: '<Root>/VeCRDB_M_EngTqCapbltMinRnTq'
     */
    rtb_TmpSignalConversionAtVeCR_e = Rte_Read_VeCRDB_M_EngTqCapbltMinRnTq_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_M_m);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S71>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_EngTqCapbltMinRnTq_SigSts_Value(&tmpRead_4c);

    /* Outputs for Atomic SubSystem: '<S52>/EngTorqCapbltyMinRunTorq' */
    /* Chart: '<S69>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_y_EngTqCapbltMinRnTq_SigSts'
     */
    if ((((uint32)tmpRead_4c) & 3U) != 0U)
    {
        /* Transition: '<S71>:100' */
        /* Transition: '<S71>:103' */
        /* Transition: '<S71>:111' */
        /* Call Fsft */
        VeCRDB_y_EngTqCapbltMinRnTqFD16_CallStatus = 2U;

        /* Event: '<S71>:39' */
        /* Transition: '<S71>:113' */
        /* Transition: '<S71>:115' */
        /* Transition: '<S71>:114' */
    }
    else
    {
        /* Transition: '<S71>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4c) & 4U) != 0U)
        {
            /* Transition: '<S71>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S71>:88' */
                /* Transition: '<S71>:111' */
                /* Call Fsft */
                VeCRDB_y_EngTqCapbltMinRnTqFD16_CallStatus = 2U;

                /* Event: '<S71>:39' */
                /* Transition: '<S71>:113' */
                /* Transition: '<S71>:115' */
                /* Transition: '<S71>:114' */
            }
            else
            {
                /* Transition: '<S71>:110' */
                /* Call Tmot */
                VeCRDB_y_EngTqCapbltMinRnTqFD16_CallStatus = 3U;

                /* Event: '<S71>:40' */
                /* Transition: '<S71>:115' */
                /* Transition: '<S71>:114' */
            }
        }
        else
        {
            /* Transition: '<S71>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_e) == 133)
            {
                /* Transition: '<S71>:95' */
                /* Transition: '<S71>:116' */
                /* Call Nothing */
                VeCRDB_y_EngTqCapbltMinRnTqFD16_CallStatus = 4U;

                /* Transition: '<S71>:114' */
            }
            else
            {
                /* Transition: '<S71>:120' */
                if ((((uint32)tmpRead_4c) & 8U) != 0U)
                {
                    /* Transition: '<S71>:122' */
                    /* Transition: '<S71>:125' */
                    FA_out_lx = true;

                    /* Transition: '<S71>:126' */
                }
                else
                {
                    /* Transition: '<S71>:124' */
                    FA_out_lx = false;
                }

                /* Transition: '<S71>:117' */
                /* Call Poke */
                VeCRDB_y_EngTqCapbltMinRnTqFD16_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S68>/Poke' */
                /* FunctionCaller: '<S70>/Function Caller1' incorporates:
                 *  DataTypeConversion: '<S70>/Data Type Conversion2'
                 */
                /* Event: '<S71>:38' */
                Rte_Call_PokeETQR_M_EngCapabilityMinRun_PokeETQR_M_EngCapabilityMinRun
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_M_m, (sint16)
                     CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_E,
                     CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_E, FA_out_lx);

                /* End of Outputs for SubSystem: '<S68>/Poke' */
            }
        }
    }

    /* End of Chart: '<S69>/Chart' */
    /* End of Outputs for SubSystem: '<S52>/EngTorqCapbltyMinRunTorq' */
    /* End of Outputs for SubSystem: '<S48>/EngTorqCapbltyMinRunTorq' */
    /* Transition: '<S71>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_M_EngTqCapbltMinRnTq' */

    /* SignalConversion generated from: '<S2>/VeCRDB_M_EngTqCapbltyMinTq' incorporates:
     *  Inport: '<Root>/VeCRDB_y_EngTqCapbltyMinTq_SigSts'
     */
#if Rte_SysCon_VrntCR4B_EngTorqCapbltyMinTorq

    /* Outputs for Atomic SubSystem: '<S48>/EngTorqCapbltyMinTorq' */
    /* SignalConversion generated from: '<S2>/VeCRDB_M_EngTqCapbltyMinTq' incorporates:
     *  Inport: '<Root>/VeCRDB_M_EngTqCapbltyMinTq'
     */
    rtb_TmpSignalConversionAtVeC_em = Rte_Read_VeCRDB_M_EngTqCapbltyMinTq_Value(
        &CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_M_n);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S75>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_EngTqCapbltyMinTq_SigSts_Value(&tmpRead_4d);

    /* Outputs for Atomic SubSystem: '<S53>/EngTorqCapbltyMinTorq' */
    /* Chart: '<S73>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_y_EngTqCapbltyMinTq_SigSts'
     */
    if ((((uint32)tmpRead_4d) & 3U) != 0U)
    {
        /* Transition: '<S75>:100' */
        /* Transition: '<S75>:103' */
        /* Transition: '<S75>:111' */
        /* Call Fsft */
        VeCRDB_y_EngTqCapbltyMinTqFD16_CallStatus = 2U;

        /* Event: '<S75>:39' */
        /* Transition: '<S75>:113' */
        /* Transition: '<S75>:115' */
        /* Transition: '<S75>:114' */
    }
    else
    {
        /* Transition: '<S75>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4d) & 4U) != 0U)
        {
            /* Transition: '<S75>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S75>:88' */
                /* Transition: '<S75>:111' */
                /* Call Fsft */
                VeCRDB_y_EngTqCapbltyMinTqFD16_CallStatus = 2U;

                /* Event: '<S75>:39' */
                /* Transition: '<S75>:113' */
                /* Transition: '<S75>:115' */
                /* Transition: '<S75>:114' */
            }
            else
            {
                /* Transition: '<S75>:110' */
                /* Call Tmot */
                VeCRDB_y_EngTqCapbltyMinTqFD16_CallStatus = 3U;

                /* Event: '<S75>:40' */
                /* Transition: '<S75>:115' */
                /* Transition: '<S75>:114' */
            }
        }
        else
        {
            /* Transition: '<S75>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_em) == 133)
            {
                /* Transition: '<S75>:95' */
                /* Transition: '<S75>:116' */
                /* Call Nothing */
                VeCRDB_y_EngTqCapbltyMinTqFD16_CallStatus = 4U;

                /* Transition: '<S75>:114' */
            }
            else
            {
                /* Transition: '<S75>:120' */
                if ((((uint32)tmpRead_4d) & 8U) != 0U)
                {
                    /* Transition: '<S75>:122' */
                    /* Transition: '<S75>:125' */
                    FA_out_lx = true;

                    /* Transition: '<S75>:126' */
                }
                else
                {
                    /* Transition: '<S75>:124' */
                    FA_out_lx = false;
                }

                /* Transition: '<S75>:117' */
                /* Call Poke */
                VeCRDB_y_EngTqCapbltyMinTqFD16_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S72>/Poke' */
                /* FunctionCaller: '<S74>/Function Caller1' incorporates:
                 *  DataTypeConversion: '<S74>/Data Type Conversion2'
                 */
                /* Event: '<S75>:38' */
                Rte_Call_PokeETQR_M_EngCapabilityMinOff_PokeETQR_M_EngCapabilityMinOff
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_M_n, (sint16)
                     CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_E,
                     CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_E, FA_out_lx);

                /* End of Outputs for SubSystem: '<S72>/Poke' */
            }
        }
    }

    /* End of Chart: '<S73>/Chart' */
    /* End of Outputs for SubSystem: '<S53>/EngTorqCapbltyMinTorq' */
    /* End of Outputs for SubSystem: '<S48>/EngTorqCapbltyMinTorq' */
    /* Transition: '<S75>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_M_EngTqCapbltyMinTq' */

    /* SignalConversion generated from: '<S2>/VeCRDB_n_EngTqCpbltRfEngSpd' incorporates:
     *  Inport: '<Root>/VeCRDB_y_EngTqCpbltRfEngSpd_SigSts'
     */
#if Rte_SysCon_VrntCR4B_EngTorqCapbltyRefEngSpd

    /* Outputs for Atomic SubSystem: '<S48>/EngTorqCapbltyRefEngSpd' */
    /* SignalConversion generated from: '<S2>/VeCRDB_n_EngTqCpbltRfEngSpd' incorporates:
     *  Inport: '<Root>/VeCRDB_n_EngTqCpbltRfEngSpd'
     */
    rtb_TmpSignalConversionAtVeCR_l = Rte_Read_VeCRDB_n_EngTqCpbltRfEngSpd_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_n_E);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S79>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_EngTqCpbltRfEngSpd_SigSts_Value(&tmpRead_4e);

    /* Outputs for Atomic SubSystem: '<S54>/EngTorqCapbltyRefEngSpd' */
    /* Chart: '<S77>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_y_EngTqCpbltRfEngSpd_SigSts'
     */
    if ((((uint32)tmpRead_4e) & 3U) != 0U)
    {
        /* Transition: '<S79>:100' */
        /* Transition: '<S79>:103' */
        /* Transition: '<S79>:111' */
        /* Call Fsft */
        VeCRDB_y_EngTqCpbltRfEngSpdFD16_CallStatus = 2U;

        /* Event: '<S79>:39' */
        /* Transition: '<S79>:113' */
        /* Transition: '<S79>:115' */
        /* Transition: '<S79>:114' */
    }
    else
    {
        /* Transition: '<S79>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4e) & 4U) != 0U)
        {
            /* Transition: '<S79>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S79>:88' */
                /* Transition: '<S79>:111' */
                /* Call Fsft */
                VeCRDB_y_EngTqCpbltRfEngSpdFD16_CallStatus = 2U;

                /* Event: '<S79>:39' */
                /* Transition: '<S79>:113' */
                /* Transition: '<S79>:115' */
                /* Transition: '<S79>:114' */
            }
            else
            {
                /* Transition: '<S79>:110' */
                /* Call Tmot */
                VeCRDB_y_EngTqCpbltRfEngSpdFD16_CallStatus = 3U;

                /* Event: '<S79>:40' */
                /* Transition: '<S79>:115' */
                /* Transition: '<S79>:114' */
            }
        }
        else
        {
            /* Transition: '<S79>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_l) == 133)
            {
                /* Transition: '<S79>:95' */
                /* Transition: '<S79>:116' */
                /* Call Nothing */
                VeCRDB_y_EngTqCpbltRfEngSpdFD16_CallStatus = 4U;

                /* Transition: '<S79>:114' */
            }
            else
            {
                /* Transition: '<S79>:120' */
                if ((((uint32)tmpRead_4e) & 8U) != 0U)
                {
                    /* Transition: '<S79>:122' */
                    /* Transition: '<S79>:125' */
                    FA_out_lx = true;

                    /* Transition: '<S79>:126' */
                }
                else
                {
                    /* Transition: '<S79>:124' */
                    FA_out_lx = false;
                }

                /* Transition: '<S79>:117' */
                /* Call Poke */
                VeCRDB_y_EngTqCpbltRfEngSpdFD16_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S76>/Poke' */
                /* FunctionCaller: '<S78>/Function Caller1' incorporates:
                 *  DataTypeConversion: '<S78>/Data Type Conversion2'
                 */
                /* Event: '<S79>:38' */
                Rte_Call_PokeETQR_n_EngCapability_PokeETQR_n_EngCapability
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_n_E, (sint16)
                     CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_E,
                     CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_E, FA_out_lx);

                /* End of Outputs for SubSystem: '<S76>/Poke' */
            }
        }
    }

    /* End of Chart: '<S77>/Chart' */
    /* End of Outputs for SubSystem: '<S54>/EngTorqCapbltyRefEngSpd' */
    /* End of Outputs for SubSystem: '<S48>/EngTorqCapbltyRefEngSpd' */
    /* Transition: '<S79>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_n_EngTqCpbltRfEngSpd' */

    /* SignalConversion generated from: '<S2>/VeSR1B_y_C1_Status' incorporates:
     *  Inport: '<Root>/VeSR1B_y_C1_Status_SigSts'
     */
#if Rte_SysCon_VrntCR4B_C1Status

    /* Outputs for Atomic SubSystem: '<S5>/C1_Status' */
    /* SignalConversion generated from: '<S2>/VeSR1B_y_C1_Status' incorporates:
     *  Inport: '<Root>/VeSR1B_y_C1_Status'
     */
    rtb_TmpSignalConversionAtVeSR_p = Rte_Read_VeSR1B_y_C1_Status_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_C);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S98>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_C1_Status_SigSts_Value(&tmpRead_v);

    /* Outputs for Atomic SubSystem: '<S80>/C1_Status' */
    /* Chart: '<S95>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_y_C1_Status_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_v) & 3U) != 0U)
    {
        /* Transition: '<S98>:100' */
        /* Transition: '<S98>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S98>:104' */
        /*  MM */
        if ((((uint32)tmpRead_v) & 4U) != 0U)
        {
            /* Transition: '<S98>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S98>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S98>:110' */
                /* Call Tmot */
                VeSR1B_y_C1_Status_CallStatus = 3U;

                /* Event: '<S98>:40' */
                /* Transition: '<S98>:115' */
                /* Transition: '<S98>:114' */
            }
        }
        else
        {
            /* Transition: '<S98>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_p) == 133)
            {
                /* Transition: '<S98>:95' */
                /* Transition: '<S98>:116' */
                /* Call Nothing */
                VeSR1B_y_C1_Status_CallStatus = 4U;

                /* Transition: '<S98>:114' */
            }
            else
            {
                /* Transition: '<S98>:120' */
                if ((((uint32)tmpRead_v) & 8U) != 0U)
                {
                    /* Transition: '<S98>:122' */
                    /* Transition: '<S98>:125' */
                    FA_out_lx = true;

                    /* Transition: '<S98>:126' */
                }
                else
                {
                    /* Transition: '<S98>:124' */
                    FA_out_lx = false;
                }

                /* Transition: '<S98>:117' */
                /* Call Poke */
                VeSR1B_y_C1_Status_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S94>/Poke' */
                /* FunctionCaller: '<S100>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S100>/Data Type Conversion'
                 */
                /* Event: '<S98>:38' */
                Rte_Call_PokeTINR_e_K1Status_PokeTINR_e_K1Status((sint16)
                    CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_C, FA_out_lx);

                /* End of Outputs for SubSystem: '<S94>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S98>:111' */
        /* Call Fsft */
        VeSR1B_y_C1_Status_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S94>/Fsft' */
        /* FunctionCaller: '<S99>/Function Caller' */
        /* Event: '<S98>:39' */
        Rte_Call_FsftTINR_e_K1Status_FsftTINR_e_K1Status();

        /* End of Outputs for SubSystem: '<S94>/Fsft' */
        /* Transition: '<S98>:113' */
        /* Transition: '<S98>:115' */
        /* Transition: '<S98>:114' */
    }

    /* End of Chart: '<S95>/Chart' */
    /* End of Outputs for SubSystem: '<S80>/C1_Status' */
    /* End of Outputs for SubSystem: '<S5>/C1_Status' */
    /* Transition: '<S98>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeSR1B_y_C1_Status' */

    /* SignalConversion generated from: '<S2>/VeSR1B_y_GearShiftType' incorporates:
     *  Inport: '<Root>/VeSR1B_y_GearShiftType_SigSts'
     */
#if Rte_SysCon_VrntCR4B_GearShiftType

    /* Outputs for Atomic SubSystem: '<S5>/GearShiftType' */
    /* SignalConversion generated from: '<S2>/VeSR1B_y_GearShiftType' incorporates:
     *  Inport: '<Root>/VeSR1B_y_GearShiftType'
     */
    rtb_TmpSignalConversionAtVeSR_g = Rte_Read_VeSR1B_y_GearShiftType_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_G);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S105>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_GearShiftType_SigSts_Value(&tmpRead_w);

    /* Outputs for Atomic SubSystem: '<S81>/GearShiftType' */
    /* Chart: '<S102>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_y_GearShiftType_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_w) & 3U) != 0U)
    {
        /* Transition: '<S105>:100' */
        /* Transition: '<S105>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S105>:104' */
        /*  MM */
        if ((((uint32)tmpRead_w) & 4U) != 0U)
        {
            /* Transition: '<S105>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S105>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S105>:110' */
                /* Call Tmot */
                VeSR1B_y_GearShiftType_CallStatus = 3U;

                /* Event: '<S105>:40' */
                /* Transition: '<S105>:115' */
                /* Transition: '<S105>:114' */
            }
        }
        else
        {
            /* Transition: '<S105>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_g) == 133)
            {
                /* Transition: '<S105>:95' */
                /* Transition: '<S105>:116' */
                /* Call Nothing */
                VeSR1B_y_GearShiftType_CallStatus = 4U;

                /* Transition: '<S105>:114' */
            }
            else
            {
                /* Transition: '<S105>:120' */
                if ((((uint32)tmpRead_w) & 8U) != 0U)
                {
                    /* Transition: '<S105>:122' */
                    /* Transition: '<S105>:125' */
                    FA_out_lx = true;

                    /* Transition: '<S105>:126' */
                }
                else
                {
                    /* Transition: '<S105>:124' */
                    FA_out_lx = false;
                }

                /* Transition: '<S105>:117' */
                /* Call Poke */
                VeSR1B_y_GearShiftType_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S101>/Poke' */
                /* FunctionCaller: '<S107>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S107>/Data Type Conversion'
                 */
                /* Event: '<S105>:38' */
                Rte_Call_PokeTINR_e_GearShftType_PokeTINR_e_GearShftType((sint16)
                    CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_G, FA_out_lx);

                /* End of Outputs for SubSystem: '<S101>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S105>:111' */
        /* Call Fsft */
        VeSR1B_y_GearShiftType_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S101>/Fsft' */
        /* FunctionCaller: '<S106>/Function Caller' */
        /* Event: '<S105>:39' */
        Rte_Call_FsftTINR_e_GearShftType_FsftTINR_e_GearShftType();

        /* End of Outputs for SubSystem: '<S101>/Fsft' */
        /* Transition: '<S105>:113' */
        /* Transition: '<S105>:115' */
        /* Transition: '<S105>:114' */
    }

    /* End of Chart: '<S102>/Chart' */
    /* End of Outputs for SubSystem: '<S81>/GearShiftType' */
    /* End of Outputs for SubSystem: '<S5>/GearShiftType' */
    /* Transition: '<S105>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeSR1B_y_GearShiftType' */

    /* SignalConversion generated from: '<S2>/VeSR1B_y_MRGB_Current_Gr' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MRGB_Current_Gr_SigSts'
     */
#if Rte_SysCon_VrntCR4B_MRGBCurrentGr

    /* Outputs for Atomic SubSystem: '<S5>/MRGB_Current_Gr' */
    /* SignalConversion generated from: '<S2>/VeSR1B_y_MRGB_Current_Gr' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MRGB_Current_Gr'
     */
    rtb_TmpSignalConversionAtVeS_iy = Rte_Read_VeSR1B_y_MRGB_Current_Gr_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_d);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S112>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_MRGB_Current_Gr_SigSts_Value(&tmpRead_x);

    /* Outputs for Atomic SubSystem: '<S82>/MRGB_Current_Gr' */
    /* Chart: '<S109>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MRGB_Current_Gr_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_x) & 3U) != 0U)
    {
        /* Transition: '<S112>:100' */
        /* Transition: '<S112>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S112>:104' */
        /*  MM */
        if ((((uint32)tmpRead_x) & 4U) != 0U)
        {
            /* Transition: '<S112>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S112>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S112>:110' */
                /* Call Tmot */
                VeSR1B_y_MRGB_Current_Gr_CallStatus = 3U;

                /* Event: '<S112>:40' */
                /* Transition: '<S112>:115' */
                /* Transition: '<S112>:114' */
            }
        }
        else
        {
            /* Transition: '<S112>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_iy) == 133)
            {
                /* Transition: '<S112>:95' */
                /* Transition: '<S112>:116' */
                /* Call Nothing */
                VeSR1B_y_MRGB_Current_Gr_CallStatus = 4U;

                /* Transition: '<S112>:114' */
            }
            else
            {
                /* Transition: '<S112>:120' */
                if ((((uint32)tmpRead_x) & 8U) != 0U)
                {
                    /* Transition: '<S112>:122' */
                    /* Transition: '<S112>:125' */
                    FA_out_lx = true;

                    /* Transition: '<S112>:126' */
                }
                else
                {
                    /* Transition: '<S112>:124' */
                    FA_out_lx = false;
                }

                /* Transition: '<S112>:117' */
                /* Call Poke */
                VeSR1B_y_MRGB_Current_Gr_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S108>/Poke' */
                /* FunctionCaller: '<S114>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S114>/Data Type Conversion'
                 */
                /* Event: '<S112>:38' */
                Rte_Call_PokeTINR_e_ActualGear_PokeTINR_e_ActualGear((sint16)
                    CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_d, FA_out_lx);

                /* End of Outputs for SubSystem: '<S108>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S112>:111' */
        /* Call Fsft */
        VeSR1B_y_MRGB_Current_Gr_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S108>/Fsft' */
        /* FunctionCaller: '<S113>/Function Caller' */
        /* Event: '<S112>:39' */
        Rte_Call_FsftTINR_e_ActualGear_FsftTINR_e_ActualGear();

        /* End of Outputs for SubSystem: '<S108>/Fsft' */
        /* Transition: '<S112>:113' */
        /* Transition: '<S112>:115' */
        /* Transition: '<S112>:114' */
    }

    /* End of Chart: '<S109>/Chart' */
    /* End of Outputs for SubSystem: '<S82>/MRGB_Current_Gr' */
    /* End of Outputs for SubSystem: '<S5>/MRGB_Current_Gr' */
    /* Transition: '<S112>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeSR1B_y_MRGB_Current_Gr' */

    /* SignalConversion generated from: '<S2>/VeSR1B_y_MRGB_MaxGrAllwd' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MRGB_MaxGrAllwd_SigSts'
     */
#if Rte_SysCon_VrntCR4B_MRGBMaxGrAllwd

    /* Outputs for Atomic SubSystem: '<S5>/MRGB_MaxGrAllwd' */
    /* SignalConversion generated from: '<S2>/VeSR1B_y_MRGB_MaxGrAllwd' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MRGB_MaxGrAllwd'
     */
    rtb_TmpSignalConversionAtVeSR_h = Rte_Read_VeSR1B_y_MRGB_MaxGrAllwd_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_k);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S119>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_MRGB_MaxGrAllwd_SigSts_Value(&tmpRead_y);

    /* Outputs for Atomic SubSystem: '<S83>/MRGB_MaxGrAllwd' */
    /* Chart: '<S116>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MRGB_MaxGrAllwd_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_y) & 3U) != 0U)
    {
        /* Transition: '<S119>:100' */
        /* Transition: '<S119>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S119>:104' */
        /*  MM */
        if ((((uint32)tmpRead_y) & 4U) != 0U)
        {
            /* Transition: '<S119>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S119>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S119>:110' */
                /* Call Tmot */
                VeSR1B_y_MRGB_MaxGrAllwd_CallStatus = 3U;

                /* Event: '<S119>:40' */
                /* Transition: '<S119>:115' */
                /* Transition: '<S119>:114' */
            }
        }
        else
        {
            /* Transition: '<S119>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_h) == 133)
            {
                /* Transition: '<S119>:95' */
                /* Transition: '<S119>:116' */
                /* Call Nothing */
                VeSR1B_y_MRGB_MaxGrAllwd_CallStatus = 4U;

                /* Transition: '<S119>:114' */
            }
            else
            {
                /* Transition: '<S119>:120' */
                if ((((uint32)tmpRead_y) & 8U) != 0U)
                {
                    /* Transition: '<S119>:122' */
                    /* Transition: '<S119>:125' */
                    FA_out_lx = true;

                    /* Transition: '<S119>:126' */
                }
                else
                {
                    /* Transition: '<S119>:124' */
                    FA_out_lx = false;
                }

                /* Transition: '<S119>:117' */
                /* Call Poke */
                VeSR1B_y_MRGB_MaxGrAllwd_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S115>/Poke' */
                /* FunctionCaller: '<S121>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S121>/Data Type Conversion'
                 */
                /* Event: '<S119>:38' */
                Rte_Call_PokeTINR_i_TCM_MaxGearAllwd_PokeTINR_i_TCM_MaxGearAllwd
                    ((sint16)CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_k,
                     FA_out_lx);

                /* End of Outputs for SubSystem: '<S115>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S119>:111' */
        /* Call Fsft */
        VeSR1B_y_MRGB_MaxGrAllwd_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S115>/Fsft' */
        /* FunctionCaller: '<S120>/Function Caller' */
        /* Event: '<S119>:39' */
        Rte_Call_FsftTINR_i_TCM_MaxGearAllwd_FsftTINR_i_TCM_MaxGearAllwd();

        /* End of Outputs for SubSystem: '<S115>/Fsft' */
        /* Transition: '<S119>:113' */
        /* Transition: '<S119>:115' */
        /* Transition: '<S119>:114' */
    }

    /* End of Chart: '<S116>/Chart' */
    /* End of Outputs for SubSystem: '<S83>/MRGB_MaxGrAllwd' */
    /* End of Outputs for SubSystem: '<S5>/MRGB_MaxGrAllwd' */
    /* Transition: '<S119>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeSR1B_y_MRGB_MaxGrAllwd' */

    /* SignalConversion generated from: '<S2>/VeSR1B_M_MRGB_MaxTrqDes' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MRGB_MaxTrqDes_SigSts'
     */
#if Rte_SysCon_VrntCR4B_MRGBMaxTrqDes

    /* Outputs for Atomic SubSystem: '<S5>/MRGB_MaxTrqDes' */
    /* SignalConversion generated from: '<S2>/VeSR1B_M_MRGB_MaxTrqDes' incorporates:
     *  Inport: '<Root>/VeSR1B_M_MRGB_MaxTrqDes'
     */
    rtb_TmpSignalConversionAtVeSR_k = Rte_Read_VeSR1B_M_MRGB_MaxTrqDes_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_M_M);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S126>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_MRGB_MaxTrqDes_SigSts_Value(&tmpRead_z);

    /* Outputs for Atomic SubSystem: '<S84>/MRGB_MaxTrqDes' */
    /* Chart: '<S123>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MRGB_MaxTrqDes_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_z) & 3U) != 0U)
    {
        /* Transition: '<S126>:100' */
        /* Transition: '<S126>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S126>:104' */
        /*  MM */
        if ((((uint32)tmpRead_z) & 4U) != 0U)
        {
            /* Transition: '<S126>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S126>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S126>:110' */
                /* Call Tmot */
                VeSR1B_y_MRGB_MaxTrqDes_CallStatus = 3U;

                /* Event: '<S126>:40' */
                /* Transition: '<S126>:115' */
                /* Transition: '<S126>:114' */
            }
        }
        else
        {
            /* Transition: '<S126>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_k) == 133)
            {
                /* Transition: '<S126>:95' */
                /* Transition: '<S126>:116' */
                /* Call Nothing */
                VeSR1B_y_MRGB_MaxTrqDes_CallStatus = 4U;

                /* Transition: '<S126>:114' */
            }
            else
            {
                /* Transition: '<S126>:120' */
                if ((((uint32)tmpRead_z) & 8U) != 0U)
                {
                    /* Transition: '<S126>:122' */
                    /* Transition: '<S126>:125' */
                    FA_out_lx = true;

                    /* Transition: '<S126>:126' */
                }
                else
                {
                    /* Transition: '<S126>:124' */
                    FA_out_lx = false;
                }

                /* Transition: '<S126>:117' */
                /* Call Poke */
                VeSR1B_y_MRGB_MaxTrqDes_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S122>/Poke' */
                /* FunctionCaller: '<S128>/Function Caller' */
                /* Event: '<S126>:38' */
                Rte_Call_PokeTTIR_M_SumMaxTrqDsrd_PokeTTIR_M_SumMaxTrqDsrd
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_M_M, FA_out_lx);

                /* End of Outputs for SubSystem: '<S122>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S126>:111' */
        /* Call Fsft */
        VeSR1B_y_MRGB_MaxTrqDes_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S122>/Fsft' */
        /* FunctionCaller: '<S127>/Function Caller' */
        /* Event: '<S126>:39' */
        Rte_Call_FsftTTIR_M_SumMaxTrqDsrd_FsftTTIR_M_SumMaxTrqDsrd();

        /* End of Outputs for SubSystem: '<S122>/Fsft' */
        /* Transition: '<S126>:113' */
        /* Transition: '<S126>:115' */
        /* Transition: '<S126>:114' */
    }

    /* End of Chart: '<S123>/Chart' */
    /* End of Outputs for SubSystem: '<S84>/MRGB_MaxTrqDes' */
    /* End of Outputs for SubSystem: '<S5>/MRGB_MaxTrqDes' */
    /* Transition: '<S126>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeSR1B_M_MRGB_MaxTrqDes' */

    /* SignalConversion generated from: '<S2>/VeSR1B_y_MRGB_MinGrAllwd' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MRGB_MinGrAllwd_SigSts'
     */
#if Rte_SysCon_VrntCR4B_MRGBMinGrAllwd

    /* Outputs for Atomic SubSystem: '<S5>/MRGB_MinGrAllwd' */
    /* SignalConversion generated from: '<S2>/VeSR1B_y_MRGB_MinGrAllwd' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MRGB_MinGrAllwd'
     */
    rtb_TmpSignalConversionAtVeSR_l = Rte_Read_VeSR1B_y_MRGB_MinGrAllwd_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_e);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S133>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_MRGB_MinGrAllwd_SigSts_Value(&tmpRead_10);

    /* Outputs for Atomic SubSystem: '<S85>/MRGB_MinGrAllwd' */
    /* Chart: '<S130>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MRGB_MinGrAllwd_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_10) & 3U) != 0U)
    {
        /* Transition: '<S133>:100' */
        /* Transition: '<S133>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S133>:104' */
        /*  MM */
        if ((((uint32)tmpRead_10) & 4U) != 0U)
        {
            /* Transition: '<S133>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S133>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S133>:110' */
                /* Call Tmot */
                VeSR1B_y_MRGB_MinGrAllwd_CallStatus = 3U;

                /* Event: '<S133>:40' */
                /* Transition: '<S133>:115' */
                /* Transition: '<S133>:114' */
            }
        }
        else
        {
            /* Transition: '<S133>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_l) == 133)
            {
                /* Transition: '<S133>:95' */
                /* Transition: '<S133>:116' */
                /* Call Nothing */
                VeSR1B_y_MRGB_MinGrAllwd_CallStatus = 4U;

                /* Transition: '<S133>:114' */
            }
            else
            {
                /* Transition: '<S133>:120' */
                if ((((uint32)tmpRead_10) & 8U) != 0U)
                {
                    /* Transition: '<S133>:122' */
                    /* Transition: '<S133>:125' */
                    FA_out_lx = true;

                    /* Transition: '<S133>:126' */
                }
                else
                {
                    /* Transition: '<S133>:124' */
                    FA_out_lx = false;
                }

                /* Transition: '<S133>:117' */
                /* Call Poke */
                VeSR1B_y_MRGB_MinGrAllwd_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S129>/Poke' */
                /* FunctionCaller: '<S135>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S135>/Data Type Conversion'
                 */
                /* Event: '<S133>:38' */
                Rte_Call_PokeTINR_i_TCM_MinGearAllwd_PokeTINR_i_TCM_MinGearAllwd
                    ((sint16)CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_e,
                     FA_out_lx);

                /* End of Outputs for SubSystem: '<S129>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S133>:111' */
        /* Call Fsft */
        VeSR1B_y_MRGB_MinGrAllwd_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S129>/Fsft' */
        /* FunctionCaller: '<S134>/Function Caller' */
        /* Event: '<S133>:39' */
        Rte_Call_FsftTINR_i_TCM_MinGearAllwd_FsftTINR_i_TCM_MinGearAllwd();

        /* End of Outputs for SubSystem: '<S129>/Fsft' */
        /* Transition: '<S133>:113' */
        /* Transition: '<S133>:115' */
        /* Transition: '<S133>:114' */
    }

    /* End of Chart: '<S130>/Chart' */
    /* End of Outputs for SubSystem: '<S85>/MRGB_MinGrAllwd' */
    /* End of Outputs for SubSystem: '<S5>/MRGB_MinGrAllwd' */
    /* Transition: '<S133>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeSR1B_y_MRGB_MinGrAllwd' */

    /* SignalConversion generated from: '<S2>/VeSR1B_M_MRGB_MtrBTrqRq' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MRGB_MtrBTrqRq_SigSts'
     */
#if Rte_SysCon_VrntCR4B_MRGBMtrBTrqRq

    /* Outputs for Atomic SubSystem: '<S5>/MRGB_MtrBTrqRq' */
    /* SignalConversion generated from: '<S2>/VeSR1B_M_MRGB_MtrBTrqRq' incorporates:
     *  Inport: '<Root>/VeSR1B_M_MRGB_MtrBTrqRq'
     */
    rtb_TmpSignalConversionAtVeS_op = Rte_Read_VeSR1B_M_MRGB_MtrBTrqRq_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_M_i);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S140>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_MRGB_MtrBTrqRq_SigSts_Value(&tmpRead_11);

    /* Outputs for Atomic SubSystem: '<S86>/MRGB_MtrBTrqRq' */
    /* Chart: '<S137>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MRGB_MtrBTrqRq_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_11) & 3U) != 0U)
    {
        /* Transition: '<S140>:100' */
        /* Transition: '<S140>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S140>:104' */
        /*  MM */
        if ((((uint32)tmpRead_11) & 4U) != 0U)
        {
            /* Transition: '<S140>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S140>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S140>:110' */
                /* Call Tmot */
                VeSR1B_y_MRGB_MtrBTrqRq_CallStatus = 3U;

                /* Event: '<S140>:40' */
                /* Transition: '<S140>:115' */
                /* Transition: '<S140>:114' */
            }
        }
        else
        {
            /* Transition: '<S140>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_op) == 133)
            {
                /* Transition: '<S140>:95' */
                /* Transition: '<S140>:116' */
                /* Call Nothing */
                VeSR1B_y_MRGB_MtrBTrqRq_CallStatus = 4U;

                /* Transition: '<S140>:114' */
            }
            else
            {
                /* Transition: '<S140>:120' */
                if ((((uint32)tmpRead_11) & 8U) != 0U)
                {
                    /* Transition: '<S140>:122' */
                    /* Transition: '<S140>:125' */
                    FA_out_lx = true;

                    /* Transition: '<S140>:126' */
                }
                else
                {
                    /* Transition: '<S140>:124' */
                    FA_out_lx = false;
                }

                /* Transition: '<S140>:117' */
                /* Call Poke */
                VeSR1B_y_MRGB_MtrBTrqRq_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S136>/Poke' */
                /* FunctionCaller: '<S142>/Function Caller' */
                /* Event: '<S140>:38' */
                Rte_Call_PokeTTIR_M_TCMSumTrqReqFast_PokeTTIR_M_TCMSumTrqReqFast
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_M_i, FA_out_lx);

                /* End of Outputs for SubSystem: '<S136>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S140>:111' */
        /* Call Fsft */
        VeSR1B_y_MRGB_MtrBTrqRq_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S136>/Fsft' */
        /* FunctionCaller: '<S141>/Function Caller' */
        /* Event: '<S140>:39' */
        Rte_Call_FsftTTIR_M_TCMSumTrqReqFast_FsftTTIR_M_TCMSumTrqReqFast();

        /* End of Outputs for SubSystem: '<S136>/Fsft' */
        /* Transition: '<S140>:113' */
        /* Transition: '<S140>:115' */
        /* Transition: '<S140>:114' */
    }

    /* End of Chart: '<S137>/Chart' */
    /* End of Outputs for SubSystem: '<S86>/MRGB_MtrBTrqRq' */
    /* End of Outputs for SubSystem: '<S5>/MRGB_MtrBTrqRq' */
    /* Transition: '<S140>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeSR1B_M_MRGB_MtrBTrqRq' */

    /* SignalConversion generated from: '<S2>/VeSR1B_n_MRGB_Output_Speed' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MRGB_Output_Speed_SigSts'
     */
#if Rte_SysCon_VrntCR4B_MRGBOutputSpeed

    /* Outputs for Atomic SubSystem: '<S5>/MRGB_Output_Speed' */
    /* SignalConversion generated from: '<S2>/VeSR1B_n_MRGB_Output_Speed' incorporates:
     *  Inport: '<Root>/VeSR1B_n_MRGB_Output_Speed'
     */
    rtb_TmpSignalConversionAtVeS_hz = Rte_Read_VeSR1B_n_MRGB_Output_Speed_Value(
        &CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_n_M);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S147>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_MRGB_Output_Speed_SigSts_Value(&tmpRead_12);

    /* Outputs for Atomic SubSystem: '<S87>/MRGB_Output_Speed' */
    /* Chart: '<S144>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MRGB_Output_Speed_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_12) & 3U) != 0U)
    {
        /* Transition: '<S147>:100' */
        /* Transition: '<S147>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S147>:104' */
        /*  MM */
        if ((((uint32)tmpRead_12) & 4U) != 0U)
        {
            /* Transition: '<S147>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S147>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S147>:110' */
                /* Call Tmot */
                VeSR1B_y_MRGB_Output_Speed_CallStatus = 3U;

                /* Event: '<S147>:40' */
                /* Transition: '<S147>:115' */
                /* Transition: '<S147>:114' */
            }
        }
        else
        {
            /* Transition: '<S147>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_hz) == 133)
            {
                /* Transition: '<S147>:95' */
                /* Transition: '<S147>:116' */
                /* Call Nothing */
                VeSR1B_y_MRGB_Output_Speed_CallStatus = 4U;

                /* Transition: '<S147>:114' */
            }
            else
            {
                /* Transition: '<S147>:120' */
                if ((((uint32)tmpRead_12) & 8U) != 0U)
                {
                    /* Transition: '<S147>:122' */
                    /* Transition: '<S147>:125' */
                    FA_out_lx = true;

                    /* Transition: '<S147>:126' */
                }
                else
                {
                    /* Transition: '<S147>:124' */
                    FA_out_lx = false;
                }

                /* Transition: '<S147>:117' */
                /* Call Poke */
                VeSR1B_y_MRGB_Output_Speed_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S143>/Poke' */
                /* FunctionCaller: '<S149>/Function Caller' */
                /* Event: '<S147>:38' */
                Rte_Call_PokeCSVR_n_TOSSnsrSpdRaw_PokeCSVR_n_TOSSnsrSpdRaw
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_n_M, FA_out_lx);

                /* End of Outputs for SubSystem: '<S143>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S147>:111' */
        /* Call Fsft */
        VeSR1B_y_MRGB_Output_Speed_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S143>/Fsft' */
        /* FunctionCaller: '<S148>/Function Caller' */
        /* Event: '<S147>:39' */
        Rte_Call_FsftCSVR_n_TOSSnsrSpdRaw_FsftCSVR_n_TOSSnsrSpdRaw();

        /* End of Outputs for SubSystem: '<S143>/Fsft' */
        /* Transition: '<S147>:113' */
        /* Transition: '<S147>:115' */
        /* Transition: '<S147>:114' */
    }

    /* End of Chart: '<S144>/Chart' */
    /* End of Outputs for SubSystem: '<S87>/MRGB_Output_Speed' */
    /* End of Outputs for SubSystem: '<S5>/MRGB_Output_Speed' */
    /* Transition: '<S147>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeSR1B_n_MRGB_Output_Speed' */

    /* SignalConversion generated from: '<S2>/VeSR1B_y_MRGB_Target_Gr' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MRGB_Target_Gr_SigSts'
     */
#if Rte_SysCon_VrntCR4B_MRGBTargetGr

    /* Outputs for Atomic SubSystem: '<S5>/MRGB_Target_Gr' */
    /* SignalConversion generated from: '<S2>/VeSR1B_y_MRGB_Target_Gr' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MRGB_Target_Gr'
     */
    rtb_TmpSignalConversionAtVeS_lr = Rte_Read_VeSR1B_y_MRGB_Target_Gr_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_i);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S154>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_MRGB_Target_Gr_SigSts_Value(&tmpRead_13);

    /* Outputs for Atomic SubSystem: '<S88>/MRGB_Target_Gr' */
    /* Chart: '<S151>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MRGB_Target_Gr_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_13) & 3U) != 0U)
    {
        /* Transition: '<S154>:100' */
        /* Transition: '<S154>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S154>:104' */
        /*  MM */
        if ((((uint32)tmpRead_13) & 4U) != 0U)
        {
            /* Transition: '<S154>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S154>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S154>:110' */
                /* Call Tmot */
                VeSR1B_y_MRGB_Target_Gr_CallStatus = 3U;

                /* Event: '<S154>:40' */
                /* Transition: '<S154>:115' */
                /* Transition: '<S154>:114' */
            }
        }
        else
        {
            /* Transition: '<S154>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_lr) == 133)
            {
                /* Transition: '<S154>:95' */
                /* Transition: '<S154>:116' */
                /* Call Nothing */
                VeSR1B_y_MRGB_Target_Gr_CallStatus = 4U;

                /* Transition: '<S154>:114' */
            }
            else
            {
                /* Transition: '<S154>:120' */
                if ((((uint32)tmpRead_13) & 8U) != 0U)
                {
                    /* Transition: '<S154>:122' */
                    /* Transition: '<S154>:125' */
                    FA_out_lx = true;

                    /* Transition: '<S154>:126' */
                }
                else
                {
                    /* Transition: '<S154>:124' */
                    FA_out_lx = false;
                }

                /* Transition: '<S154>:117' */
                /* Call Poke */
                VeSR1B_y_MRGB_Target_Gr_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S150>/Poke' */
                /* FunctionCaller: '<S156>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S156>/Data Type Conversion'
                 */
                /* Event: '<S154>:38' */
                Rte_Call_PokeTINR_e_TargetGear_PokeTINR_e_TargetGear((sint16)
                    CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_i, FA_out_lx);

                /* End of Outputs for SubSystem: '<S150>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S154>:111' */
        /* Call Fsft */
        VeSR1B_y_MRGB_Target_Gr_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S150>/Fsft' */
        /* FunctionCaller: '<S155>/Function Caller' */
        /* Event: '<S154>:39' */
        Rte_Call_FsftTINR_e_TargetGear_FsftTINR_e_TargetGear();

        /* End of Outputs for SubSystem: '<S150>/Fsft' */
        /* Transition: '<S154>:113' */
        /* Transition: '<S154>:115' */
        /* Transition: '<S154>:114' */
    }

    /* End of Chart: '<S151>/Chart' */
    /* End of Outputs for SubSystem: '<S88>/MRGB_Target_Gr' */
    /* End of Outputs for SubSystem: '<S5>/MRGB_Target_Gr' */
    /* Transition: '<S154>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeSR1B_y_MRGB_Target_Gr' */

    /* SignalConversion generated from: '<S2>/VeSR1B_T_MRGB_Transm_Oil_Temp' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MRGB_Transm_Oil_Temp_SigSts'
     */
#if Rte_SysCon_VrntCR4B_MRGBTransmOilTemp

    /* Outputs for Atomic SubSystem: '<S5>/MRGB_Transm_Oil_Temp' */
    /* SignalConversion generated from: '<S2>/VeSR1B_T_MRGB_Transm_Oil_Temp' incorporates:
     *  Inport: '<Root>/VeSR1B_T_MRGB_Transm_Oil_Temp'
     */
    rtb_TmpSignalConversionAtVeSR_n =
        Rte_Read_VeSR1B_T_MRGB_Transm_Oil_Temp_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_T_M);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S160>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_MRGB_Transm_Oil_Temp_SigSts_Value(&tmpRead_14);

    /* Outputs for Atomic SubSystem: '<S89>/MRGB_Transm_Oil_Temp' */
    /* Chart: '<S158>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MRGB_Transm_Oil_Temp_SigSts'
     */
    if ((((uint32)tmpRead_14) & 3U) != 0U)
    {
        /* Transition: '<S160>:100' */
        /* Transition: '<S160>:103' */
        /* Transition: '<S160>:111' */
        /* Call Fsft */
        VeSR1B_y_MRGB_Transm_Oil_Temp_CallStatus = 2U;

        /* Event: '<S160>:39' */
        /* Transition: '<S160>:113' */
        /* Transition: '<S160>:115' */
        /* Transition: '<S160>:114' */
    }
    else
    {
        /* Transition: '<S160>:104' */
        /*  MM */
        if ((((uint32)tmpRead_14) & 4U) != 0U)
        {
            /* Transition: '<S160>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S160>:88' */
                /* Transition: '<S160>:111' */
                /* Call Fsft */
                VeSR1B_y_MRGB_Transm_Oil_Temp_CallStatus = 2U;

                /* Event: '<S160>:39' */
                /* Transition: '<S160>:113' */
                /* Transition: '<S160>:115' */
                /* Transition: '<S160>:114' */
            }
            else
            {
                /* Transition: '<S160>:110' */
                /* Call Tmot */
                VeSR1B_y_MRGB_Transm_Oil_Temp_CallStatus = 3U;

                /* Event: '<S160>:40' */
                /* Transition: '<S160>:115' */
                /* Transition: '<S160>:114' */
            }
        }
        else
        {
            /* Transition: '<S160>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_n) == 133)
            {
                /* Transition: '<S160>:95' */
                /* Transition: '<S160>:116' */
                /* Call Nothing */
                VeSR1B_y_MRGB_Transm_Oil_Temp_CallStatus = 4U;

                /* Transition: '<S160>:114' */
            }
            else
            {
                /* Transition: '<S160>:120' */
                if ((((uint32)tmpRead_14) & 8U) != 0U)
                {
                    /* Transition: '<S160>:122' */
                    /* Transition: '<S160>:125' */
                    FA_out_lx = true;

                    /* Transition: '<S160>:126' */
                }
                else
                {
                    /* Transition: '<S160>:124' */
                    FA_out_lx = false;
                }

                /* Transition: '<S160>:117' */
                /* Call Poke */
                VeSR1B_y_MRGB_Transm_Oil_Temp_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S157>/Poke' */
                /* FunctionCaller: '<S161>/Function Caller' */
                /* Event: '<S160>:38' */
                Rte_Call_PokeTMIR_T_TransOilTemp_PokeTMIR_T_TransOilTemp
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_T_M, FA_out_lx);

                /* End of Outputs for SubSystem: '<S157>/Poke' */
            }
        }
    }

    /* End of Chart: '<S158>/Chart' */
    /* End of Outputs for SubSystem: '<S89>/MRGB_Transm_Oil_Temp' */
    /* End of Outputs for SubSystem: '<S5>/MRGB_Transm_Oil_Temp' */
    /* Transition: '<S160>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeSR1B_T_MRGB_Transm_Oil_Temp' */

    /* SignalConversion generated from: '<S2>/VeSR1B_y_MRGB_TrqCtrlModeReq' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MRGB_TrqCtrlModeReq_SigSts'
     */
#if Rte_SysCon_VrntCR4B_MRGBTrqCtrlModeReq

    /* Outputs for Atomic SubSystem: '<S5>/MRGB_TrqCtrlModeReq' */
    /* SignalConversion generated from: '<S2>/VeSR1B_y_MRGB_TrqCtrlModeReq' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MRGB_TrqCtrlModeReq'
     */
    rtb_TmpSignalConversionAtVeSR_f =
        Rte_Read_VeSR1B_y_MRGB_TrqCtrlModeReq_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B__dp);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S166>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_MRGB_TrqCtrlModeReq_SigSts_Value(&tmpRead_15);

    /* Outputs for Atomic SubSystem: '<S90>/MRGB_TrqCtrlModeReq' */
    /* Chart: '<S163>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MRGB_TrqCtrlModeReq_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_15) & 3U) != 0U)
    {
        /* Transition: '<S166>:100' */
        /* Transition: '<S166>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S166>:104' */
        /*  MM */
        if ((((uint32)tmpRead_15) & 4U) != 0U)
        {
            /* Transition: '<S166>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S166>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S166>:110' */
                /* Call Tmot */
                VeSR1B_y_MRGB_TrqCtrlModeReq_CallStatus = 3U;

                /* Event: '<S166>:40' */
                /* Transition: '<S166>:115' */
                /* Transition: '<S166>:114' */
            }
        }
        else
        {
            /* Transition: '<S166>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_f) == 133)
            {
                /* Transition: '<S166>:95' */
                /* Transition: '<S166>:116' */
                /* Call Nothing */
                VeSR1B_y_MRGB_TrqCtrlModeReq_CallStatus = 4U;

                /* Transition: '<S166>:114' */
            }
            else
            {
                /* Transition: '<S166>:120' */
                if ((((uint32)tmpRead_15) & 8U) != 0U)
                {
                    /* Transition: '<S166>:122' */
                    /* Transition: '<S166>:125' */
                    FA_out_lx = true;

                    /* Transition: '<S166>:126' */
                }
                else
                {
                    /* Transition: '<S166>:124' */
                    FA_out_lx = false;
                }

                /* Transition: '<S166>:117' */
                /* Call Poke */
                VeSR1B_y_MRGB_TrqCtrlModeReq_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S162>/Poke' */
                /* FunctionCaller: '<S168>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S168>/Data Type Conversion'
                 */
                /* Event: '<S166>:38' */
                Rte_Call_PokeTINR_e_TCMTrqCntrlModeFast_PokeTINR_e_TCMTrqCntrlModeFast
                    ((sint16)CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B__dp,
                     FA_out_lx);

                /* End of Outputs for SubSystem: '<S162>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S166>:111' */
        /* Call Fsft */
        VeSR1B_y_MRGB_TrqCtrlModeReq_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S162>/Fsft' */
        /* FunctionCaller: '<S167>/Function Caller' */
        /* Event: '<S166>:39' */
        Rte_Call_FsftTINR_e_TCMTrqCntrlModeFast_FsftTINR_e_TCMTrqCntrlModeFast();

        /* End of Outputs for SubSystem: '<S162>/Fsft' */
        /* Transition: '<S166>:113' */
        /* Transition: '<S166>:115' */
        /* Transition: '<S166>:114' */
    }

    /* End of Chart: '<S163>/Chart' */
    /* End of Outputs for SubSystem: '<S90>/MRGB_TrqCtrlModeReq' */
    /* End of Outputs for SubSystem: '<S5>/MRGB_TrqCtrlModeReq' */
    /* Transition: '<S166>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeSR1B_y_MRGB_TrqCtrlModeReq' */

    /* SignalConversion generated from: '<S2>/VeSR1B_y_MRGB_Upshift_Time' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MRGB_Upshift_Time_SigSts'
     */
#if Rte_SysCon_VrntCR4B_MRGBUpshiftTime

    /* Outputs for Atomic SubSystem: '<S5>/MRGB_Upshift_Time' */
    /* SignalConversion generated from: '<S2>/VeSR1B_y_MRGB_Upshift_Time' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MRGB_Upshift_Time'
     */
    rtb_TmpSignalConversionAtVeS_cr = Rte_Read_VeSR1B_y_MRGB_Upshift_Time_Value(
        &CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_M);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S172>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_MRGB_Upshift_Time_SigSts_Value(&tmpRead_16);

    /* Outputs for Atomic SubSystem: '<S91>/MRGB_Upshift_Time' */
    /* Chart: '<S170>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MRGB_Upshift_Time_SigSts'
     */
    if ((((uint32)tmpRead_16) & 3U) != 0U)
    {
        /* Transition: '<S172>:100' */
        /* Transition: '<S172>:103' */
        /* Transition: '<S172>:111' */
        /* Call Fsft */
        VeSR1B_y_MRGB_Upshift_Time_CallStatus = 2U;

        /* Event: '<S172>:39' */
        /* Transition: '<S172>:113' */
        /* Transition: '<S172>:115' */
        /* Transition: '<S172>:114' */
    }
    else
    {
        /* Transition: '<S172>:104' */
        /*  MM */
        if ((((uint32)tmpRead_16) & 4U) != 0U)
        {
            /* Transition: '<S172>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S172>:88' */
                /* Transition: '<S172>:111' */
                /* Call Fsft */
                VeSR1B_y_MRGB_Upshift_Time_CallStatus = 2U;

                /* Event: '<S172>:39' */
                /* Transition: '<S172>:113' */
                /* Transition: '<S172>:115' */
                /* Transition: '<S172>:114' */
            }
            else
            {
                /* Transition: '<S172>:110' */
                /* Call Tmot */
                VeSR1B_y_MRGB_Upshift_Time_CallStatus = 3U;

                /* Event: '<S172>:40' */
                /* Transition: '<S172>:115' */
                /* Transition: '<S172>:114' */
            }
        }
        else
        {
            /* Transition: '<S172>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_cr) == 133)
            {
                /* Transition: '<S172>:95' */
                /* Transition: '<S172>:116' */
                /* Call Nothing */
                VeSR1B_y_MRGB_Upshift_Time_CallStatus = 4U;

                /* Transition: '<S172>:114' */
            }
            else
            {
                /* Transition: '<S172>:120' */
                /* Transition: '<S172>:117' */
                /* Call Poke */
                VeSR1B_y_MRGB_Upshift_Time_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S169>/Poke' */
                /* FunctionCaller: '<S173>/Function Caller' */
                /* Event: '<S172>:38' */
                Rte_Call_PokeTINR_t_TCM_TimeToSpeedChange_PokeTINR_t_TCM_TimeToSpeedChange
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_M);

                /* End of Outputs for SubSystem: '<S169>/Poke' */
            }
        }
    }

    /* End of Chart: '<S170>/Chart' */
    /* End of Outputs for SubSystem: '<S91>/MRGB_Upshift_Time' */
    /* End of Outputs for SubSystem: '<S5>/MRGB_Upshift_Time' */
    /* Transition: '<S172>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeSR1B_y_MRGB_Upshift_Time' */

    /* SignalConversion generated from: '<S2>/VeSR1B_M_TCapActual_C2' incorporates:
     *  Inport: '<Root>/VeSR1B_y_TCapActual_C2_SigSts'
     */
#if Rte_SysCon_VrntCR4B_TCapActualC2

    /* Outputs for Atomic SubSystem: '<S5>/TCapActual_C2' */
    /* SignalConversion generated from: '<S2>/VeSR1B_M_TCapActual_C2' incorporates:
     *  Inport: '<Root>/VeSR1B_M_TCapActual_C2'
     */
    rtb_TmpSignalConversionAtVeSR_m = Rte_Read_VeSR1B_M_TCapActual_C2_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_M_T);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S178>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_TCapActual_C2_SigSts_Value(&tmpRead_17);

    /* Outputs for Atomic SubSystem: '<S92>/TCapActual_C2' */
    /* Chart: '<S175>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_y_TCapActual_C2_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_17) & 3U) != 0U)
    {
        /* Transition: '<S178>:100' */
        /* Transition: '<S178>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S178>:104' */
        /*  MM */
        if ((((uint32)tmpRead_17) & 4U) != 0U)
        {
            /* Transition: '<S178>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S178>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S178>:110' */
                /* Call Tmot */
                VeSR1B_y_TCapActual_C2_CallStatus = 3U;

                /* Event: '<S178>:40' */
                /* Transition: '<S178>:115' */
                /* Transition: '<S178>:114' */
            }
        }
        else
        {
            /* Transition: '<S178>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_m) == 133)
            {
                /* Transition: '<S178>:95' */
                /* Transition: '<S178>:116' */
                /* Call Nothing */
                VeSR1B_y_TCapActual_C2_CallStatus = 4U;

                /* Transition: '<S178>:114' */
            }
            else
            {
                /* Transition: '<S178>:120' */
                if ((((uint32)tmpRead_17) & 8U) != 0U)
                {
                    /* Transition: '<S178>:122' */
                    /* Transition: '<S178>:125' */
                    FA_out_lx = true;

                    /* Transition: '<S178>:126' */
                }
                else
                {
                    /* Transition: '<S178>:124' */
                    FA_out_lx = false;
                }

                /* Transition: '<S178>:117' */
                /* Call Poke */
                VeSR1B_y_TCapActual_C2_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S174>/Poke' */
                /* FunctionCaller: '<S180>/Function Caller' */
                /* Event: '<S178>:38' */
                Rte_Call_PokeTINR_M_ClchTrqA_PokeTINR_M_ClchTrqA
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_M_T, FA_out_lx);

                /* End of Outputs for SubSystem: '<S174>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S178>:111' */
        /* Call Fsft */
        VeSR1B_y_TCapActual_C2_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S174>/Fsft' */
        /* FunctionCaller: '<S179>/Function Caller' */
        /* Event: '<S178>:39' */
        Rte_Call_FsftTINR_M_ClchTrqA_FsftTINR_M_ClchTrqA();

        /* End of Outputs for SubSystem: '<S174>/Fsft' */
        /* Transition: '<S178>:113' */
        /* Transition: '<S178>:115' */
        /* Transition: '<S178>:114' */
    }

    /* End of Chart: '<S175>/Chart' */
    /* End of Outputs for SubSystem: '<S92>/TCapActual_C2' */
    /* End of Outputs for SubSystem: '<S5>/TCapActual_C2' */
    /* Transition: '<S178>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeSR1B_M_TCapActual_C2' */

    /* SignalConversion generated from: '<S2>/VeSR1B_h_TransTrqRatio' incorporates:
     *  Inport: '<Root>/VeSR1B_y_TransTrqRatio_SigSts'
     */
#if Rte_SysCon_VrntCR4B_TransTrqRatio

    /* Outputs for Atomic SubSystem: '<S5>/TransTrqRatio' */
    /* SignalConversion generated from: '<S2>/VeSR1B_h_TransTrqRatio' incorporates:
     *  Inport: '<Root>/VeSR1B_h_TransTrqRatio'
     */
    rtb_TmpSignalConversionAtVeS_cw = Rte_Read_VeSR1B_h_TransTrqRatio_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_h_T);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S185>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_TransTrqRatio_SigSts_Value(&tmpRead_18);

    /* Outputs for Atomic SubSystem: '<S93>/TransTrqRatio' */
    /* Chart: '<S182>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_y_TransTrqRatio_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_18) & 3U) != 0U)
    {
        /* Transition: '<S185>:100' */
        /* Transition: '<S185>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S185>:104' */
        /*  MM */
        if ((((uint32)tmpRead_18) & 4U) != 0U)
        {
            /* Transition: '<S185>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S185>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S185>:110' */
                /* Call Tmot */
                VeSR1B_y_TransTrqRatio_CallStatus = 3U;

                /* Event: '<S185>:40' */
                /* Transition: '<S185>:115' */
                /* Transition: '<S185>:114' */
            }
        }
        else
        {
            /* Transition: '<S185>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_cw) == 133)
            {
                /* Transition: '<S185>:95' */
                /* Transition: '<S185>:116' */
                /* Call Nothing */
                VeSR1B_y_TransTrqRatio_CallStatus = 4U;

                /* Transition: '<S185>:114' */
            }
            else
            {
                /* Transition: '<S185>:120' */
                if ((((uint32)tmpRead_18) & 8U) != 0U)
                {
                    /* Transition: '<S185>:122' */
                    /* Transition: '<S185>:125' */
                    FA_out_lx = true;

                    /* Transition: '<S185>:126' */
                }
                else
                {
                    /* Transition: '<S185>:124' */
                    FA_out_lx = false;
                }

                /* Transition: '<S185>:117' */
                /* Call Poke */
                VeSR1B_y_TransTrqRatio_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S181>/Poke' */
                /* FunctionCaller: '<S187>/Function Caller' */
                /* Event: '<S185>:38' */
                Rte_Call_PokeTINR_r_TransTrqRatio_PokeTINR_r_TransTrqRatio
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_h_T, FA_out_lx);

                /* End of Outputs for SubSystem: '<S181>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S185>:111' */
        /* Call Fsft */
        VeSR1B_y_TransTrqRatio_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S181>/Fsft' */
        /* FunctionCaller: '<S186>/Function Caller' */
        /* Event: '<S185>:39' */
        Rte_Call_FsftTINR_r_TransTrqRatio_FsftTINR_r_TransTrqRatio();

        /* End of Outputs for SubSystem: '<S181>/Fsft' */
        /* Transition: '<S185>:113' */
        /* Transition: '<S185>:115' */
        /* Transition: '<S185>:114' */
    }

    /* End of Chart: '<S182>/Chart' */
    /* End of Outputs for SubSystem: '<S93>/TransTrqRatio' */
    /* End of Outputs for SubSystem: '<S5>/TransTrqRatio' */
    /* Transition: '<S185>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeSR1B_h_TransTrqRatio' */

    /* SignalConversion generated from: '<S2>/VeSR1B_b_CompressionTest' incorporates:
     *  Inport: '<Root>/VeSR1B_y_CompressionTest_SigSts'
     */
#if Rte_SysCon_VrntCR4B_CompressionTest

    /* Outputs for Atomic SubSystem: '<S6>/CompressionTest' */
    /* SignalConversion generated from: '<S2>/VeSR1B_b_CompressionTest' incorporates:
     *  Inport: '<Root>/VeSR1B_b_CompressionTest'
     */
    rtb_TmpSignalConversionAtVeS_cq = Rte_Read_VeSR1B_b_CompressionTest_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_C);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S204>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_CompressionTest_SigSts_Value(&tmpRead_19);

    /* Outputs for Atomic SubSystem: '<S188>/CompressionTest' */
    /* Chart: '<S202>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_y_CompressionTest_SigSts'
     */
    if ((((uint32)tmpRead_19) & 3U) != 0U)
    {
        /* Transition: '<S204>:100' */
        /* Transition: '<S204>:103' */
        /* Transition: '<S204>:111' */
        /* Call Fsft */
        VeSR1B_y_CompressionTest_CallStatus = 2U;

        /* Event: '<S204>:39' */
        /* Transition: '<S204>:113' */
        /* Transition: '<S204>:115' */
        /* Transition: '<S204>:114' */
    }
    else
    {
        /* Transition: '<S204>:104' */
        /*  MM */
        if ((((uint32)tmpRead_19) & 4U) != 0U)
        {
            /* Transition: '<S204>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S204>:88' */
                /* Transition: '<S204>:111' */
                /* Call Fsft */
                VeSR1B_y_CompressionTest_CallStatus = 2U;

                /* Event: '<S204>:39' */
                /* Transition: '<S204>:113' */
                /* Transition: '<S204>:115' */
                /* Transition: '<S204>:114' */
            }
            else
            {
                /* Transition: '<S204>:110' */
                /* Call Tmot */
                VeSR1B_y_CompressionTest_CallStatus = 3U;

                /* Event: '<S204>:40' */
                /* Transition: '<S204>:115' */
                /* Transition: '<S204>:114' */
            }
        }
        else
        {
            /* Transition: '<S204>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_cq) == 133)
            {
                /* Transition: '<S204>:95' */
                /* Transition: '<S204>:116' */
                /* Call Nothing */
                VeSR1B_y_CompressionTest_CallStatus = 4U;

                /* Transition: '<S204>:114' */
            }
            else
            {
                /* Transition: '<S204>:120' */
                /* Transition: '<S204>:117' */
                /* Call Poke */
                VeSR1B_y_CompressionTest_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S201>/Poke' */
                /* FunctionCaller: '<S205>/Function Caller' */
                /* Event: '<S204>:38' */
                Rte_Call_PokeENGR_b_CmprssnTest_PokeENGR_b_CmprssnTest
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_C);

                /* End of Outputs for SubSystem: '<S201>/Poke' */
            }
        }
    }

    /* End of Chart: '<S202>/Chart' */
    /* End of Outputs for SubSystem: '<S188>/CompressionTest' */
    /* End of Outputs for SubSystem: '<S6>/CompressionTest' */
    /* Transition: '<S204>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeSR1B_b_CompressionTest' */

    /* SignalConversion generated from: '<S2>/VeSR1B_y_ECM_LHOM_Trans_W_FD16' incorporates:
     *  Inport: '<Root>/VeSR1B_y_ECM_LHOM_Trans_W_FD16_SigSts'
     */
#if Rte_SysCon_VrntCR4B_ECMLHOMTransW

    /* Outputs for Atomic SubSystem: '<S6>/ECM_LHOM_Trans_W' */
    /* SignalConversion generated from: '<S2>/VeSR1B_y_ECM_LHOM_Trans_W_FD16' incorporates:
     *  Inport: '<Root>/VeSR1B_y_ECM_LHOM_Trans_W_FD16'
     */
    rtb_TmpSignalConversionAtVeS_k1 =
        Rte_Read_VeSR1B_y_ECM_LHOM_Trans_W_FD16_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_E);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S209>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_ECM_LHOM_Trans_W_FD16_SigSts_Value(&tmpRead_1a);

    /* Outputs for Atomic SubSystem: '<S189>/ECM_LHOM_Trans_W' */
    /* Chart: '<S207>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_y_ECM_LHOM_Trans_W_FD16_SigSts'
     */
    if ((((uint32)tmpRead_1a) & 3U) != 0U)
    {
        /* Transition: '<S209>:100' */
        /* Transition: '<S209>:103' */
        /* Transition: '<S209>:111' */
        /* Call Fsft */
        VeSR1B_y_ECM_LHOM_Trans_W_FD16_CallStatus = 2U;

        /* Event: '<S209>:39' */
        /* Transition: '<S209>:113' */
        /* Transition: '<S209>:115' */
        /* Transition: '<S209>:114' */
    }
    else
    {
        /* Transition: '<S209>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1a) & 4U) != 0U)
        {
            /* Transition: '<S209>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S209>:88' */
                /* Transition: '<S209>:111' */
                /* Call Fsft */
                VeSR1B_y_ECM_LHOM_Trans_W_FD16_CallStatus = 2U;

                /* Event: '<S209>:39' */
                /* Transition: '<S209>:113' */
                /* Transition: '<S209>:115' */
                /* Transition: '<S209>:114' */
            }
            else
            {
                /* Transition: '<S209>:110' */
                /* Call Tmot */
                VeSR1B_y_ECM_LHOM_Trans_W_FD16_CallStatus = 3U;

                /* Event: '<S209>:40' */
                /* Transition: '<S209>:115' */
                /* Transition: '<S209>:114' */
            }
        }
        else
        {
            /* Transition: '<S209>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_k1) == 133)
            {
                /* Transition: '<S209>:95' */
                /* Transition: '<S209>:116' */
                /* Call Nothing */
                VeSR1B_y_ECM_LHOM_Trans_W_FD16_CallStatus = 4U;

                /* Transition: '<S209>:114' */
            }
            else
            {
                /* Transition: '<S209>:120' */
                /* Transition: '<S209>:117' */
                /* Call Poke */
                VeSR1B_y_ECM_LHOM_Trans_W_FD16_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S206>/Poke' */
                /* FunctionCaller: '<S210>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S210>/Data Type Conversion'
                 */
                /* Event: '<S209>:38' */
                Rte_Call_PokeENGR_i_ECM_LHOM_Trans_PokeENGR_i_ECM_LHOM_Trans
                    ((sint16)CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_E);

                /* End of Outputs for SubSystem: '<S206>/Poke' */
            }
        }
    }

    /* End of Chart: '<S207>/Chart' */
    /* End of Outputs for SubSystem: '<S189>/ECM_LHOM_Trans_W' */
    /* End of Outputs for SubSystem: '<S6>/ECM_LHOM_Trans_W' */
    /* Transition: '<S209>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeSR1B_y_ECM_LHOM_Trans_W_FD16' */

    /* SignalConversion generated from: '<S2>/VeSR1B_b_EngTrqEnblRqTCM_WFD16' incorporates:
     *  Inport: '<Root>/VeSR1B_y_EngTrqEnblRqTCM_WFD16_SigSts'
     */
#if Rte_SysCon_VrntCR4B_EngTrqEnblRqTCMW

    /* Outputs for Atomic SubSystem: '<S6>/EngTrq_Enbl_Rq_TCM_W' */
    /* SignalConversion generated from: '<S2>/VeSR1B_b_EngTrqEnblRqTCM_WFD16' incorporates:
     *  Inport: '<Root>/VeSR1B_b_EngTrqEnblRqTCM_WFD16'
     */
    rtb_TmpSignalConversionAtVeS_np =
        Rte_Read_VeSR1B_b_EngTrqEnblRqTCM_WFD16_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_E);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S214>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_EngTrqEnblRqTCM_WFD16_SigSts_Value(&tmpRead_1b);

    /* Outputs for Atomic SubSystem: '<S190>/EngTrq_Enbl_Rq_TCM_W' */
    /* Chart: '<S212>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_y_EngTrqEnblRqTCM_WFD16_SigSts'
     */
    if ((((uint32)tmpRead_1b) & 3U) != 0U)
    {
        /* Transition: '<S214>:100' */
        /* Transition: '<S214>:103' */
        /* Transition: '<S214>:111' */
        /* Call Fsft */
        VeSR1B_y_EngTrqEnblRqTCM_WFD16_CallStatus = 2U;

        /* Event: '<S214>:39' */
        /* Transition: '<S214>:113' */
        /* Transition: '<S214>:115' */
        /* Transition: '<S214>:114' */
    }
    else
    {
        /* Transition: '<S214>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1b) & 4U) != 0U)
        {
            /* Transition: '<S214>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S214>:88' */
                /* Transition: '<S214>:111' */
                /* Call Fsft */
                VeSR1B_y_EngTrqEnblRqTCM_WFD16_CallStatus = 2U;

                /* Event: '<S214>:39' */
                /* Transition: '<S214>:113' */
                /* Transition: '<S214>:115' */
                /* Transition: '<S214>:114' */
            }
            else
            {
                /* Transition: '<S214>:110' */
                /* Call Tmot */
                VeSR1B_y_EngTrqEnblRqTCM_WFD16_CallStatus = 3U;

                /* Event: '<S214>:40' */
                /* Transition: '<S214>:115' */
                /* Transition: '<S214>:114' */
            }
        }
        else
        {
            /* Transition: '<S214>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_np) == 133)
            {
                /* Transition: '<S214>:95' */
                /* Transition: '<S214>:116' */
                /* Call Nothing */
                VeSR1B_y_EngTrqEnblRqTCM_WFD16_CallStatus = 4U;

                /* Transition: '<S214>:114' */
            }
            else
            {
                /* Transition: '<S214>:120' */
                /* Transition: '<S214>:117' */
                /* Call Poke */
                VeSR1B_y_EngTrqEnblRqTCM_WFD16_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S211>/Poke' */
                /* FunctionCaller: '<S215>/Function Caller' */
                /* Event: '<S214>:38' */
                Rte_Call_PokeENGR_b_EngTrq_Enbl_Rq_TCM_PokeENGR_b_EngTrq_Enbl_Rq_TCM
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_E);

                /* End of Outputs for SubSystem: '<S211>/Poke' */
            }
        }
    }

    /* End of Chart: '<S212>/Chart' */
    /* End of Outputs for SubSystem: '<S190>/EngTrq_Enbl_Rq_TCM_W' */
    /* End of Outputs for SubSystem: '<S6>/EngTrq_Enbl_Rq_TCM_W' */
    /* Transition: '<S214>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeSR1B_b_EngTrqEnblRqTCM_WFD16' */

    /* SignalConversion generated from: '<S2>/VeSR1B_d_EngineSpeed_W_FD16' incorporates:
     *  Inport: '<Root>/VeSR1B_y_EngineSpeed_W_FD16_SigSts'
     */
#if Rte_SysCon_VrntCR4B_EngineSpeedW

    /* Outputs for Atomic SubSystem: '<S6>/EngineSpeed_W' */
    /* SignalConversion generated from: '<S2>/VeSR1B_d_EngineSpeed_W_FD16' incorporates:
     *  Inport: '<Root>/VeSR1B_d_EngineSpeed_W_FD16'
     */
    rtb_TmpSignalConversionAtVeS_nd = Rte_Read_VeSR1B_d_EngineSpeed_W_FD16_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_d_E);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S220>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_EngineSpeed_W_FD16_SigSts_Value(&tmpRead_1c);

    /* Outputs for Atomic SubSystem: '<S191>/EngineSpeed_W' */
    /* Chart: '<S217>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_y_EngineSpeed_W_FD16_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_1c) & 3U) != 0U)
    {
        /* Transition: '<S220>:100' */
        /* Transition: '<S220>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S220>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1c) & 4U) != 0U)
        {
            /* Transition: '<S220>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S220>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S220>:110' */
                /* Call Tmot */
                VeSR1B_y_EngineSpeed_W_FD16_CallStatus = 3U;

                /* Event: '<S220>:40' */
                /* Transition: '<S220>:115' */
                /* Transition: '<S220>:114' */
            }
        }
        else
        {
            /* Transition: '<S220>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_nd) == 133)
            {
                /* Transition: '<S220>:95' */
                /* Transition: '<S220>:116' */
                /* Call Nothing */
                VeSR1B_y_EngineSpeed_W_FD16_CallStatus = 4U;

                /* Transition: '<S220>:114' */
            }
            else
            {
                /* Transition: '<S220>:120' */
                if ((((uint32)tmpRead_1c) & 8U) != 0U)
                {
                    /* Transition: '<S220>:122' */
                    /* Transition: '<S220>:125' */
                    FA_out_lx = true;

                    /* Transition: '<S220>:126' */
                }
                else
                {
                    /* Transition: '<S220>:124' */
                    FA_out_lx = false;
                }

                /* Transition: '<S220>:117' */
                /* Call Poke */
                VeSR1B_y_EngineSpeed_W_FD16_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S216>/Poke' */
                /* FunctionCaller: '<S222>/Function Caller' */
                /* Event: '<S220>:38' */
                Rte_Call_PokeESPR_n_EngineSpeed_PokeESPR_n_EngineSpeed
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_d_E, FA_out_lx);

                /* End of Outputs for SubSystem: '<S216>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S220>:111' */
        /* Call Fsft */
        VeSR1B_y_EngineSpeed_W_FD16_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S216>/Fsft' */
        /* FunctionCaller: '<S221>/Function Caller' */
        /* Event: '<S220>:39' */
        Rte_Call_FsftESPR_n_EngineSpeed_FsftESPR_n_EngineSpeed();

        /* End of Outputs for SubSystem: '<S216>/Fsft' */
        /* Transition: '<S220>:113' */
        /* Transition: '<S220>:115' */
        /* Transition: '<S220>:114' */
    }

    /* End of Chart: '<S217>/Chart' */
    /* End of Outputs for SubSystem: '<S191>/EngineSpeed_W' */
    /* End of Outputs for SubSystem: '<S6>/EngineSpeed_W' */
    /* Transition: '<S220>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeSR1B_d_EngineSpeed_W_FD16' */

    /* SignalConversion generated from: '<S2>/VeSR1B_b_Engine_Stall_Detected' incorporates:
     *  Inport: '<Root>/VeSR1B_y_Engine_Stall_Detected_SigSts'
     */
#if Rte_SysCon_VrntCR4B_EngineStallDetected

    /* Outputs for Atomic SubSystem: '<S6>/Engine_Stall_Detected' */
    /* SignalConversion generated from: '<S2>/VeSR1B_b_Engine_Stall_Detected' incorporates:
     *  Inport: '<Root>/VeSR1B_b_Engine_Stall_Detected'
     */
    rtb_TmpSignalConversionAtVeS_of =
        Rte_Read_VeSR1B_b_Engine_Stall_Detected_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_d);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S226>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_Engine_Stall_Detected_SigSts_Value(&tmpRead_1d);

    /* Outputs for Atomic SubSystem: '<S192>/Engine_Stall_Detected' */
    /* Chart: '<S224>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_y_Engine_Stall_Detected_SigSts'
     */
    if ((((uint32)tmpRead_1d) & 3U) != 0U)
    {
        /* Transition: '<S226>:100' */
        /* Transition: '<S226>:103' */
        /* Transition: '<S226>:111' */
        /* Call Fsft */
        VeSR1B_y_Engine_Stall_Detected_CallStatus = 2U;

        /* Event: '<S226>:39' */
        /* Transition: '<S226>:113' */
        /* Transition: '<S226>:115' */
        /* Transition: '<S226>:114' */
    }
    else
    {
        /* Transition: '<S226>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1d) & 4U) != 0U)
        {
            /* Transition: '<S226>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S226>:88' */
                /* Transition: '<S226>:111' */
                /* Call Fsft */
                VeSR1B_y_Engine_Stall_Detected_CallStatus = 2U;

                /* Event: '<S226>:39' */
                /* Transition: '<S226>:113' */
                /* Transition: '<S226>:115' */
                /* Transition: '<S226>:114' */
            }
            else
            {
                /* Transition: '<S226>:110' */
                /* Call Tmot */
                VeSR1B_y_Engine_Stall_Detected_CallStatus = 3U;

                /* Event: '<S226>:40' */
                /* Transition: '<S226>:115' */
                /* Transition: '<S226>:114' */
            }
        }
        else
        {
            /* Transition: '<S226>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_of) == 133)
            {
                /* Transition: '<S226>:95' */
                /* Transition: '<S226>:116' */
                /* Call Nothing */
                VeSR1B_y_Engine_Stall_Detected_CallStatus = 4U;

                /* Transition: '<S226>:114' */
            }
            else
            {
                /* Transition: '<S226>:120' */
                /* Transition: '<S226>:117' */
                /* Call Poke */
                VeSR1B_y_Engine_Stall_Detected_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S223>/Poke' */
                /* FunctionCaller: '<S227>/Function Caller' */
                /* Event: '<S226>:38' */
                Rte_Call_PokeENGR_b_EngineStallDetected_PokeENGR_b_EngineStallDetected
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_d);

                /* End of Outputs for SubSystem: '<S223>/Poke' */
            }
        }
    }

    /* End of Chart: '<S224>/Chart' */
    /* End of Outputs for SubSystem: '<S192>/Engine_Stall_Detected' */
    /* End of Outputs for SubSystem: '<S6>/Engine_Stall_Detected' */
    /* Transition: '<S226>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeSR1B_b_Engine_Stall_Detected' */

    /* SignalConversion generated from: '<S2>/VeSR1B_y_EssEngSt_FD16' incorporates:
     *  Inport: '<Root>/VeSR1B_y_EssEngSt_FD16_SigSts'
     */
#if Rte_SysCon_VrntCR4B_EssEngSt

    /* Outputs for Atomic SubSystem: '<S6>/EssEngSt' */
    /* SignalConversion generated from: '<S2>/VeSR1B_y_EssEngSt_FD16' incorporates:
     *  Inport: '<Root>/VeSR1B_y_EssEngSt_FD16'
     */
    rtb_TmpSignalConversionAtVeSR_b = Rte_Read_VeSR1B_y_EssEngSt_FD16_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B__dq);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S231>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_EssEngSt_FD16_SigSts_Value(&tmpRead_1e);

    /* Outputs for Atomic SubSystem: '<S193>/EssEngSt' */
    /* Chart: '<S229>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_y_EssEngSt_FD16_SigSts'
     */
    if ((((uint32)tmpRead_1e) & 3U) != 0U)
    {
        /* Transition: '<S231>:100' */
        /* Transition: '<S231>:103' */
        /* Transition: '<S231>:111' */
        /* Call Fsft */
        VeSR1B_y_EssEngSt_FD16_CallStatus = 2U;

        /* Event: '<S231>:39' */
        /* Transition: '<S231>:113' */
        /* Transition: '<S231>:115' */
        /* Transition: '<S231>:114' */
    }
    else
    {
        /* Transition: '<S231>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1e) & 4U) != 0U)
        {
            /* Transition: '<S231>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S231>:88' */
                /* Transition: '<S231>:111' */
                /* Call Fsft */
                VeSR1B_y_EssEngSt_FD16_CallStatus = 2U;

                /* Event: '<S231>:39' */
                /* Transition: '<S231>:113' */
                /* Transition: '<S231>:115' */
                /* Transition: '<S231>:114' */
            }
            else
            {
                /* Transition: '<S231>:110' */
                /* Call Tmot */
                VeSR1B_y_EssEngSt_FD16_CallStatus = 3U;

                /* Event: '<S231>:40' */
                /* Transition: '<S231>:115' */
                /* Transition: '<S231>:114' */
            }
        }
        else
        {
            /* Transition: '<S231>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_b) == 133)
            {
                /* Transition: '<S231>:95' */
                /* Transition: '<S231>:116' */
                /* Call Nothing */
                VeSR1B_y_EssEngSt_FD16_CallStatus = 4U;

                /* Transition: '<S231>:114' */
            }
            else
            {
                /* Transition: '<S231>:120' */
                /* Transition: '<S231>:117' */
                /* Call Poke */
                VeSR1B_y_EssEngSt_FD16_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S228>/Poke' */
                /* FunctionCaller: '<S232>/Function Caller' */
                /* Event: '<S231>:38' */
                Rte_Call_PokeENGR_e_ESSEngSt_PokeENGR_e_ESSEngSt
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B__dq);

                /* End of Outputs for SubSystem: '<S228>/Poke' */
            }
        }
    }

    /* End of Chart: '<S229>/Chart' */
    /* End of Outputs for SubSystem: '<S193>/EssEngSt' */
    /* End of Outputs for SubSystem: '<S6>/EssEngSt' */
    /* Transition: '<S231>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeSR1B_y_EssEngSt_FD16' */

    /* SignalConversion generated from: '<S2>/VeSR1B_b_EssEngStpIsNtAllwdFD16' incorporates:
     *  Inport: '<Root>/VeSR1B_y_EssEngStpIsNtAllwdFD16_SigSts'
     */
#if Rte_SysCon_VrntCR4B_EssEngStopIsNotAllwd

    /* Outputs for Atomic SubSystem: '<S6>/EssEngStopIsNotAllwd' */
    /* SignalConversion generated from: '<S2>/VeSR1B_b_EssEngStpIsNtAllwdFD16' incorporates:
     *  Inport: '<Root>/VeSR1B_b_EssEngStpIsNtAllwdFD16'
     */
    rtb_TmpSignalConversionAtVeSR_d =
        Rte_Read_VeSR1B_b_EssEngStpIsNtAllwdFD16_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_j);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S237>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_EssEngStpIsNtAllwdFD16_SigSts_Value(&tmpRead_1f);

    /* Outputs for Atomic SubSystem: '<S194>/EssEngStopIsNotAllwd' */
    /* Chart: '<S234>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_y_EssEngStpIsNtAllwdFD16_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_1f) & 3U) != 0U)
    {
        /* Transition: '<S237>:100' */
        /* Transition: '<S237>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S237>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1f) & 4U) != 0U)
        {
            /* Transition: '<S237>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S237>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S237>:110' */
                /* Call Tmot */
                VeSR1B_y_EssEngStpIsNtAllwdFD16_CallStatus = 3U;

                /* Event: '<S237>:40' */
                /* Transition: '<S237>:115' */
                /* Transition: '<S237>:114' */
            }
        }
        else
        {
            /* Transition: '<S237>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_d) == 133)
            {
                /* Transition: '<S237>:95' */
                /* Transition: '<S237>:116' */
                /* Call Nothing */
                VeSR1B_y_EssEngStpIsNtAllwdFD16_CallStatus = 4U;

                /* Transition: '<S237>:114' */
            }
            else
            {
                /* Transition: '<S237>:120' */
                /* Transition: '<S237>:117' */
                /* Call Poke */
                VeSR1B_y_EssEngStpIsNtAllwdFD16_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S233>/Poke' */
                /* FunctionCaller: '<S239>/Function Caller' incorporates:
                 *  Constant: '<S239>/Constant'
                 */
                /* Event: '<S237>:38' */
                Rte_Call_PokeENGR_b_StpNotAllwd_PokeENGR_b_StpNotAllwd
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_j, false);

                /* End of Outputs for SubSystem: '<S233>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S237>:111' */
        /* Call Fsft */
        VeSR1B_y_EssEngStpIsNtAllwdFD16_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S233>/Fsft' */
        /* FunctionCaller: '<S238>/Function Caller' */
        /* Event: '<S237>:39' */
        Rte_Call_FsftENGR_b_StpNotAllwd_FsftENGR_b_StpNotAllwd();

        /* End of Outputs for SubSystem: '<S233>/Fsft' */
        /* Transition: '<S237>:113' */
        /* Transition: '<S237>:115' */
        /* Transition: '<S237>:114' */
    }

    /* End of Chart: '<S234>/Chart' */
    /* End of Outputs for SubSystem: '<S194>/EssEngStopIsNotAllwd' */
    /* End of Outputs for SubSystem: '<S6>/EssEngStopIsNotAllwd' */
    /* Transition: '<S237>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeSR1B_b_EssEngStpIsNtAllwdFD16' */

    /* SignalConversion generated from: '<S2>/VeSR1B_y_EssEngStpIsNtAldIDFD16' incorporates:
     *  Inport: '<Root>/VeSR1B_y_EssEngStpIsNtAldIDFD16_SigSts'
     */
#if Rte_SysCon_VrntCR4B_EssEngStopIsNotAllwdID

    /* Outputs for Atomic SubSystem: '<S6>/EssEngStopIsNotAllwdID' */
    /* SignalConversion generated from: '<S2>/VeSR1B_y_EssEngStpIsNtAldIDFD16' incorporates:
     *  Inport: '<Root>/VeSR1B_y_EssEngStpIsNtAldIDFD16'
     */
    rtb_TmpSignalConversionAtVeS_ns =
        Rte_Read_VeSR1B_y_EssEngStpIsNtAldIDFD16_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_l);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S244>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_EssEngStpIsNtAldIDFD16_SigSts_Value(&tmpRead_1g);

    /* Outputs for Atomic SubSystem: '<S195>/EssEngStopIsNotAllwdID' */
    /* Chart: '<S241>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_y_EssEngStpIsNtAldIDFD16_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_1g) & 3U) != 0U)
    {
        /* Transition: '<S244>:100' */
        /* Transition: '<S244>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S244>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1g) & 4U) != 0U)
        {
            /* Transition: '<S244>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S244>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S244>:110' */
                /* Call Tmot */
                VeSR1B_y_EssEngStpIsNtAldIDFD16_CallStatus = 3U;

                /* Event: '<S244>:40' */
                /* Transition: '<S244>:115' */
                /* Transition: '<S244>:114' */
            }
        }
        else
        {
            /* Transition: '<S244>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_ns) == 133)
            {
                /* Transition: '<S244>:95' */
                /* Transition: '<S244>:116' */
                /* Call Nothing */
                VeSR1B_y_EssEngStpIsNtAldIDFD16_CallStatus = 4U;

                /* Transition: '<S244>:114' */
            }
            else
            {
                /* Transition: '<S244>:120' */
                if ((((uint32)tmpRead_1g) & 8U) != 0U)
                {
                    /* Transition: '<S244>:122' */
                    /* Transition: '<S244>:125' */
                    FA_out_lx = true;

                    /* Transition: '<S244>:126' */
                }
                else
                {
                    /* Transition: '<S244>:124' */
                    FA_out_lx = false;
                }

                /* Transition: '<S244>:117' */
                /* Call Poke */
                VeSR1B_y_EssEngStpIsNtAldIDFD16_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S240>/Poke' */
                /* FunctionCaller: '<S246>/Function Caller' */
                /* Event: '<S244>:38' */
                Rte_Call_PokeENGR_e_StpNotAllwdID_PokeENGR_e_StpNotAllwdID
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_l, FA_out_lx);

                /* End of Outputs for SubSystem: '<S240>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S244>:111' */
        /* Call Fsft */
        VeSR1B_y_EssEngStpIsNtAldIDFD16_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S240>/Fsft' */
        /* FunctionCaller: '<S245>/Function Caller' */
        /* Event: '<S244>:39' */
        Rte_Call_FsftENGR_b_StpNotAllwdID_FsftENGR_b_StpNotAllwdID();

        /* End of Outputs for SubSystem: '<S240>/Fsft' */
        /* Transition: '<S244>:113' */
        /* Transition: '<S244>:115' */
        /* Transition: '<S244>:114' */
    }

    /* End of Chart: '<S241>/Chart' */
    /* End of Outputs for SubSystem: '<S195>/EssEngStopIsNotAllwdID' */
    /* End of Outputs for SubSystem: '<S6>/EssEngStopIsNotAllwdID' */
    /* Transition: '<S244>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeSR1B_y_EssEngStpIsNtAldIDFD16' */

    /* SignalConversion generated from: '<S2>/VeSR1B_b_EssEngStrtIsNtAldFD16' incorporates:
     *  Inport: '<Root>/VeSR1B_y_EssEngStrtIsNtAldFD16_SigSts'
     */
#if Rte_SysCon_VrntCR4B_EssEngStrtIsNotAllwd

    /* Outputs for Atomic SubSystem: '<S6>/EssEngStrtIsNotAllwd' */
    /* SignalConversion generated from: '<S2>/VeSR1B_b_EssEngStrtIsNtAldFD16' incorporates:
     *  Inport: '<Root>/VeSR1B_b_EssEngStrtIsNtAldFD16'
     */
    rtb_TmpSignalConversionAtVeS_fi =
        Rte_Read_VeSR1B_b_EssEngStrtIsNtAldFD16_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_m);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S251>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_EssEngStrtIsNtAldFD16_SigSts_Value(&tmpRead_1h);

    /* Outputs for Atomic SubSystem: '<S196>/EssEngStrtIsNotAllwd' */
    /* Chart: '<S248>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_y_EssEngStrtIsNtAldFD16_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_1h) & 3U) != 0U)
    {
        /* Transition: '<S251>:100' */
        /* Transition: '<S251>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S251>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1h) & 4U) != 0U)
        {
            /* Transition: '<S251>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S251>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S251>:110' */
                /* Call Tmot */
                VeSR1B_y_EssEngStrtIsNtAldFD16_CallStatus = 3U;

                /* Event: '<S251>:40' */
                /* Transition: '<S251>:115' */
                /* Transition: '<S251>:114' */
            }
        }
        else
        {
            /* Transition: '<S251>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_fi) == 133)
            {
                /* Transition: '<S251>:95' */
                /* Transition: '<S251>:116' */
                /* Call Nothing */
                VeSR1B_y_EssEngStrtIsNtAldFD16_CallStatus = 4U;

                /* Transition: '<S251>:114' */
            }
            else
            {
                /* Transition: '<S251>:120' */
                /* Transition: '<S251>:117' */
                /* Call Poke */
                VeSR1B_y_EssEngStrtIsNtAldFD16_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S247>/Poke' */
                /* FunctionCaller: '<S253>/Function Caller' incorporates:
                 *  Constant: '<S253>/Constant'
                 */
                /* Event: '<S251>:38' */
                Rte_Call_PokeENGR_b_StrtNotAllwd_PokeENGR_b_StrtNotAllwd
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_m, false);

                /* End of Outputs for SubSystem: '<S247>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S251>:111' */
        /* Call Fsft */
        VeSR1B_y_EssEngStrtIsNtAldFD16_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S247>/Fsft' */
        /* FunctionCaller: '<S252>/Function Caller' */
        /* Event: '<S251>:39' */
        Rte_Call_FsftENGR_b_StrtNotAllwd_FsftENGR_b_StrtNotAllwd();

        /* End of Outputs for SubSystem: '<S247>/Fsft' */
        /* Transition: '<S251>:113' */
        /* Transition: '<S251>:115' */
        /* Transition: '<S251>:114' */
    }

    /* End of Chart: '<S248>/Chart' */
    /* End of Outputs for SubSystem: '<S196>/EssEngStrtIsNotAllwd' */
    /* End of Outputs for SubSystem: '<S6>/EssEngStrtIsNotAllwd' */
    /* Transition: '<S251>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeSR1B_b_EssEngStrtIsNtAldFD16' */

    /* SignalConversion generated from: '<S2>/VeSR1B_y_EssEngStrtNtAldIDFD16' incorporates:
     *  Inport: '<Root>/VeSR1B_y_EssEngStrtNtAldIDFD16_SigSts'
     */
#if Rte_SysCon_VrntCR4B_EssEngStrtIsNotAllwdID

    /* Outputs for Atomic SubSystem: '<S6>/EssEngStrtIsNotAllwdID' */
    /* SignalConversion generated from: '<S2>/VeSR1B_y_EssEngStrtNtAldIDFD16' incorporates:
     *  Inport: '<Root>/VeSR1B_y_EssEngStrtNtAldIDFD16'
     */
    rtb_TmpSignalConversionAtVeS_ml =
        Rte_Read_VeSR1B_y_EssEngStrtNtAldIDFD16_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B__et);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S258>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_EssEngStrtNtAldIDFD16_SigSts_Value(&tmpRead_1i);

    /* Outputs for Atomic SubSystem: '<S197>/EssEngStrtIsNotAllwdID' */
    /* Chart: '<S255>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_y_EssEngStrtNtAldIDFD16_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_1i) & 3U) != 0U)
    {
        /* Transition: '<S258>:100' */
        /* Transition: '<S258>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S258>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1i) & 4U) != 0U)
        {
            /* Transition: '<S258>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S258>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S258>:110' */
                /* Call Tmot */
                VeSR1B_y_EssEngStrtNtAldIDFD16_CallStatus = 3U;

                /* Event: '<S258>:40' */
                /* Transition: '<S258>:115' */
                /* Transition: '<S258>:114' */
            }
        }
        else
        {
            /* Transition: '<S258>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_ml) == 133)
            {
                /* Transition: '<S258>:95' */
                /* Transition: '<S258>:116' */
                /* Call Nothing */
                VeSR1B_y_EssEngStrtNtAldIDFD16_CallStatus = 4U;

                /* Transition: '<S258>:114' */
            }
            else
            {
                /* Transition: '<S258>:120' */
                if ((((uint32)tmpRead_1i) & 8U) != 0U)
                {
                    /* Transition: '<S258>:122' */
                    /* Transition: '<S258>:125' */
                    FA_out_lx = true;

                    /* Transition: '<S258>:126' */
                }
                else
                {
                    /* Transition: '<S258>:124' */
                    FA_out_lx = false;
                }

                /* Transition: '<S258>:117' */
                /* Call Poke */
                VeSR1B_y_EssEngStrtNtAldIDFD16_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S254>/Poke' */
                /* FunctionCaller: '<S260>/Function Caller' */
                /* Event: '<S258>:38' */
                Rte_Call_PokeENGR_e_StrtNotAllwdID_PokeENGR_e_StrtNotAllwdID
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B__et, FA_out_lx);

                /* End of Outputs for SubSystem: '<S254>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S258>:111' */
        /* Call Fsft */
        VeSR1B_y_EssEngStrtNtAldIDFD16_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S254>/Fsft' */
        /* FunctionCaller: '<S259>/Function Caller' */
        /* Event: '<S258>:39' */
        Rte_Call_FsftENGR_b_StrtNotAllwdID_FsftENGR_b_StrtNotAllwdID();

        /* End of Outputs for SubSystem: '<S254>/Fsft' */
        /* Transition: '<S258>:113' */
        /* Transition: '<S258>:115' */
        /* Transition: '<S258>:114' */
    }

    /* End of Chart: '<S255>/Chart' */
    /* End of Outputs for SubSystem: '<S197>/EssEngStrtIsNotAllwdID' */
    /* End of Outputs for SubSystem: '<S6>/EssEngStrtIsNotAllwdID' */
    /* Transition: '<S258>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeSR1B_y_EssEngStrtNtAldIDFD16' */

    /* SignalConversion generated from: '<S2>/VeSR1B_b_LV12PwrFreeRq_W_FD16' incorporates:
     *  Inport: '<Root>/VeSR1B_y_LV12PwrFreeRq_W_FD16_SigSts'
     */
#if Rte_SysCon_VrntCR4B_LV12PwrFreeRqW

    /* Outputs for Atomic SubSystem: '<S6>/LV12PwrFreeRq_W' */
    /* SignalConversion generated from: '<S2>/VeSR1B_b_LV12PwrFreeRq_W_FD16' incorporates:
     *  Inport: '<Root>/VeSR1B_b_LV12PwrFreeRq_W_FD16'
     */
    rtb_TmpSignalConversionAtVeS_or =
        Rte_Read_VeSR1B_b_LV12PwrFreeRq_W_FD16_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_L);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S264>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_LV12PwrFreeRq_W_FD16_SigSts_Value(&tmpRead_1j);

    /* Outputs for Atomic SubSystem: '<S198>/LV12PwrFreeRq_W' */
    /* Chart: '<S262>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_y_LV12PwrFreeRq_W_FD16_SigSts'
     */
    if ((((uint32)tmpRead_1j) & 3U) != 0U)
    {
        /* Transition: '<S264>:100' */
        /* Transition: '<S264>:103' */
        /* Transition: '<S264>:111' */
        /* Call Fsft */
        VeSR1B_y_LV12PwrFreeRq_W_FD16_CallStatus = 2U;

        /* Event: '<S264>:39' */
        /* Transition: '<S264>:113' */
        /* Transition: '<S264>:115' */
        /* Transition: '<S264>:114' */
    }
    else
    {
        /* Transition: '<S264>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1j) & 4U) != 0U)
        {
            /* Transition: '<S264>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S264>:88' */
                /* Transition: '<S264>:111' */
                /* Call Fsft */
                VeSR1B_y_LV12PwrFreeRq_W_FD16_CallStatus = 2U;

                /* Event: '<S264>:39' */
                /* Transition: '<S264>:113' */
                /* Transition: '<S264>:115' */
                /* Transition: '<S264>:114' */
            }
            else
            {
                /* Transition: '<S264>:110' */
                /* Call Tmot */
                VeSR1B_y_LV12PwrFreeRq_W_FD16_CallStatus = 3U;

                /* Event: '<S264>:40' */
                /* Transition: '<S264>:115' */
                /* Transition: '<S264>:114' */
            }
        }
        else
        {
            /* Transition: '<S264>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_or) == 133)
            {
                /* Transition: '<S264>:95' */
                /* Transition: '<S264>:116' */
                /* Call Nothing */
                VeSR1B_y_LV12PwrFreeRq_W_FD16_CallStatus = 4U;

                /* Transition: '<S264>:114' */
            }
            else
            {
                /* Transition: '<S264>:120' */
                /* Transition: '<S264>:117' */
                /* Call Poke */
                VeSR1B_y_LV12PwrFreeRq_W_FD16_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S261>/Poke' */
                /* FunctionCaller: '<S265>/Function Caller' */
                /* Event: '<S264>:38' */
                Rte_Call_PokeENGR_b_LV12PwrFreeRq_PokeENGR_b_LV12PwrFreeRq
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_L);

                /* End of Outputs for SubSystem: '<S261>/Poke' */
            }
        }
    }

    /* End of Chart: '<S262>/Chart' */
    /* End of Outputs for SubSystem: '<S198>/LV12PwrFreeRq_W' */
    /* End of Outputs for SubSystem: '<S6>/LV12PwrFreeRq_W' */
    /* Transition: '<S264>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeSR1B_b_LV12PwrFreeRq_W_FD16' */

    /* SignalConversion generated from: '<S2>/VeSR1B_y_C2_Status' incorporates:
     *  Inport: '<Root>/VeSR1B_y_C2_Status_SigSts'
     */
#if Rte_SysCon_VrntCR4B_MinEngPowerReqForOilDil

    /* Outputs for Atomic SubSystem: '<S6>/MinEngPowerReqForOilDil' */
    /* SignalConversion generated from: '<S2>/VeSR1B_y_C2_Status' incorporates:
     *  Inport: '<Root>/VeSR1B_y_C2_Status'
     */
    rtb_TmpSignalConversionAtVeS_bb = Rte_Read_VeSR1B_y_C2_Status_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_b);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S270>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_C2_Status_SigSts_Value(&tmpRead_1k);

    /* Outputs for Atomic SubSystem: '<S199>/MinEngPowerReqForOilDil' */
    /* Chart: '<S267>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_y_C2_Status_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_1k) & 3U) != 0U)
    {
        /* Transition: '<S270>:100' */
        /* Transition: '<S270>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S270>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1k) & 4U) != 0U)
        {
            /* Transition: '<S270>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S270>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S270>:110' */
                /* Call Tmot */
                VeSR1B_y_C2_Status_CallStatus = 3U;

                /* Event: '<S270>:40' */
                /* Transition: '<S270>:115' */
                /* Transition: '<S270>:114' */
            }
        }
        else
        {
            /* Transition: '<S270>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_bb) == 133)
            {
                /* Transition: '<S270>:95' */
                /* Transition: '<S270>:116' */
                /* Call Nothing */
                VeSR1B_y_C2_Status_CallStatus = 4U;

                /* Transition: '<S270>:114' */
            }
            else
            {
                /* Transition: '<S270>:120' */
                /* Transition: '<S270>:117' */
                /* Call Poke */
                VeSR1B_y_C2_Status_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S266>/Poke' */
                /* FunctionCaller: '<S272>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S272>/Data Type Conversion'
                 */
                /* Event: '<S270>:38' */
                Rte_Call_PokeENGR_P_OilDil_EngMinPwrReq_PokeENGR_P_OilDil_EngMinPwrReq
                    ((float32)CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_b);

                /* End of Outputs for SubSystem: '<S266>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S270>:111' */
        /* Call Fsft */
        VeSR1B_y_C2_Status_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S266>/Fsft' */
        /* FunctionCaller: '<S271>/Function Caller' */
        /* Event: '<S270>:39' */
        Rte_Call_FsftENGR_P_OilDil_EngMinPwrReq_FsftENGR_P_OilDil_EngMinPwrReq();

        /* End of Outputs for SubSystem: '<S266>/Fsft' */
        /* Transition: '<S270>:113' */
        /* Transition: '<S270>:115' */
        /* Transition: '<S270>:114' */
    }

    /* End of Chart: '<S267>/Chart' */
    /* End of Outputs for SubSystem: '<S199>/MinEngPowerReqForOilDil' */
    /* End of Outputs for SubSystem: '<S6>/MinEngPowerReqForOilDil' */
    /* Transition: '<S270>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeSR1B_y_C2_Status' */

    /* SignalConversion generated from: '<S2>/VeSR1B_b_MinEngPwrReqFrOilDilEnblr' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MinEngPwrReqFrOilDilEnblr_SigSts'
     */
#if Rte_SysCon_VrntCR4B_MinEngPowerReqForOilDilEnabler

    /* Outputs for Atomic SubSystem: '<S6>/MinEngPowerReqForOilDilEnabler' */
    /* SignalConversion generated from: '<S2>/VeSR1B_b_MinEngPwrReqFrOilDilEnblr' incorporates:
     *  Inport: '<Root>/VeSR1B_b_MinEngPwrReqFrOilDilEnblr'
     */
    rtb_TmpSignalConversionAtVeS_f4 =
        Rte_Read_VeSR1B_b_MinEngPwrReqFrOilDilEnblr_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_M);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S277>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_MinEngPwrReqFrOilDilEnblr_SigSts_Value(&tmpRead_1l);

    /* Outputs for Atomic SubSystem: '<S200>/MinEngPowerReqForOilDilEnabler' */
    /* Chart: '<S274>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MinEngPwrReqFrOilDilEnblr_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_1l) & 3U) != 0U)
    {
        /* Transition: '<S277>:100' */
        /* Transition: '<S277>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S277>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1l) & 4U) != 0U)
        {
            /* Transition: '<S277>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S277>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S277>:110' */
                /* Call Tmot */
                VeSR1B_y_MinEngPwrReqFrOilDilEnblr_CallStatus = 3U;

                /* Event: '<S277>:40' */
                /* Transition: '<S277>:115' */
                /* Transition: '<S277>:114' */
            }
        }
        else
        {
            /* Transition: '<S277>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_f4) == 133)
            {
                /* Transition: '<S277>:95' */
                /* Transition: '<S277>:116' */
                /* Call Nothing */
                VeSR1B_y_MinEngPwrReqFrOilDilEnblr_CallStatus = 4U;

                /* Transition: '<S277>:114' */
            }
            else
            {
                /* Transition: '<S277>:120' */
                /* Transition: '<S277>:117' */
                /* Call Poke */
                VeSR1B_y_MinEngPwrReqFrOilDilEnblr_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S273>/Poke' */
                /* FunctionCaller: '<S279>/Function Caller' */
                /* Event: '<S277>:38' */
                Rte_Call_PokeENGR_b_OilDil_EngMinPwrEnbl_PokeENGR_b_OilDil_EngMinPwrEnbl
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_M);

                /* End of Outputs for SubSystem: '<S273>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S277>:111' */
        /* Call Fsft */
        VeSR1B_y_MinEngPwrReqFrOilDilEnblr_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S273>/Fsft' */
        /* FunctionCaller: '<S278>/Function Caller' */
        /* Event: '<S277>:39' */
        Rte_Call_FsftENGR_b_OilDil_EngMinPwrEnbl_FsftENGR_b_OilDil_EngMinPwrEnbl
            ();

        /* End of Outputs for SubSystem: '<S273>/Fsft' */
        /* Transition: '<S277>:113' */
        /* Transition: '<S277>:115' */
        /* Transition: '<S277>:114' */
    }

    /* End of Chart: '<S274>/Chart' */
    /* End of Outputs for SubSystem: '<S200>/MinEngPowerReqForOilDilEnabler' */
    /* End of Outputs for SubSystem: '<S6>/MinEngPowerReqForOilDilEnabler' */
    /* Transition: '<S277>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeSR1B_b_MinEngPwrReqFrOilDilEnblr' */

    /* SignalConversion generated from: '<S2>/VeSR1B_y_ETRQ_Mode_FD16' incorporates:
     *  Inport: '<Root>/VeSR1B_y_ETRQ_Mode_FD16_SigSts'
     */
#if Rte_SysCon_VrntCR4B_ETRQMode

    /* Outputs for Atomic SubSystem: '<S7>/ETRQ_Mode' */
    /* SignalConversion generated from: '<S2>/VeSR1B_y_ETRQ_Mode_FD16' incorporates:
     *  Inport: '<Root>/VeSR1B_y_ETRQ_Mode_FD16'
     */
    rtb_TmpSignalConversionAtVeS_mo = Rte_Read_VeSR1B_y_ETRQ_Mode_FD16_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_o);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S301>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_ETRQ_Mode_FD16_SigSts_Value(&tmpRead_1m);

    /* Outputs for Atomic SubSystem: '<S280>/ETRQ_Mode' */
    /* Chart: '<S299>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_y_ETRQ_Mode_FD16_SigSts'
     */
    if ((((uint32)tmpRead_1m) & 3U) != 0U)
    {
        /* Transition: '<S301>:100' */
        /* Transition: '<S301>:103' */
        /* Transition: '<S301>:111' */
        /* Call Fsft */
        VeSR1B_y_ETRQ_Mode_FD16_CallStatus = 2U;

        /* Event: '<S301>:39' */
        /* Transition: '<S301>:113' */
        /* Transition: '<S301>:115' */
        /* Transition: '<S301>:114' */
    }
    else
    {
        /* Transition: '<S301>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1m) & 4U) != 0U)
        {
            /* Transition: '<S301>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S301>:88' */
                /* Transition: '<S301>:111' */
                /* Call Fsft */
                VeSR1B_y_ETRQ_Mode_FD16_CallStatus = 2U;

                /* Event: '<S301>:39' */
                /* Transition: '<S301>:113' */
                /* Transition: '<S301>:115' */
                /* Transition: '<S301>:114' */
            }
            else
            {
                /* Transition: '<S301>:110' */
                /* Call Tmot */
                VeSR1B_y_ETRQ_Mode_FD16_CallStatus = 3U;

                /* Event: '<S301>:40' */
                /* Transition: '<S301>:115' */
                /* Transition: '<S301>:114' */
            }
        }
        else
        {
            /* Transition: '<S301>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_mo) == 133)
            {
                /* Transition: '<S301>:95' */
                /* Transition: '<S301>:116' */
                /* Call Nothing */
                VeSR1B_y_ETRQ_Mode_FD16_CallStatus = 4U;

                /* Transition: '<S301>:114' */
            }
            else
            {
                /* Transition: '<S301>:120' */
                if ((((uint32)tmpRead_1m) & 8U) != 0U)
                {
                    /* Transition: '<S301>:122' */
                    /* Transition: '<S301>:125' */
                    FA_out_lx = true;

                    /* Transition: '<S301>:126' */
                }
                else
                {
                    /* Transition: '<S301>:124' */
                    FA_out_lx = false;
                }

                /* Transition: '<S301>:117' */
                /* Call Poke */
                VeSR1B_y_ETRQ_Mode_FD16_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S298>/Poke' */
                /* FunctionCaller: '<S302>/Function Caller' */
                /* Event: '<S301>:38' */
                Rte_Call_PokeENGR_e_ETRQ_Mode_PokeENGR_e_ETRQ_Mode
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_o, FA_out_lx);

                /* End of Outputs for SubSystem: '<S298>/Poke' */
            }
        }
    }

    /* End of Chart: '<S299>/Chart' */
    /* End of Outputs for SubSystem: '<S280>/ETRQ_Mode' */
    /* End of Outputs for SubSystem: '<S7>/ETRQ_Mode' */
    /* Transition: '<S301>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeSR1B_y_ETRQ_Mode_FD16' */

    /* SignalConversion generated from: '<S2>/VeSR1B_M_EngActStdyStTorq_FD16' incorporates:
     *  Inport: '<Root>/VeSR1B_y_EngActStdyStTorq_FD16_SigSts'
     */
#if Rte_SysCon_VrntCR4B_EngActStdyStTorq

    /* Outputs for Atomic SubSystem: '<S7>/EngActStdyStTorq' */
    /* SignalConversion generated from: '<S2>/VeSR1B_M_EngActStdyStTorq_FD16' incorporates:
     *  Inport: '<Root>/VeSR1B_M_EngActStdyStTorq_FD16'
     */
    rtb_TmpSignalConversionAtVe_hzd =
        Rte_Read_VeSR1B_M_EngActStdyStTorq_FD16_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_M_E);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S307>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_EngActStdyStTorq_FD16_SigSts_Value(&tmpRead_1n);

    /* Outputs for Atomic SubSystem: '<S281>/EngActStdyStTorq' */
    /* Chart: '<S304>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_b_EngActStdyStTorqV_FD16'
     *  Inport: '<Root>/VeSR1B_y_EngActStdyStTorq_FD16_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_1n) & 3U) != 0U)
    {
        /* Transition: '<S307>:100' */
        /* Transition: '<S307>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S307>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1n) & 4U) != 0U)
        {
            /* Transition: '<S307>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S307>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S307>:110' */
                /* Call Tmot */
                VeSR1B_y_EngActStdyStTorq_FD16_CallStatus = 3U;

                /* Event: '<S307>:40' */
                /* Transition: '<S307>:115' */
                /* Transition: '<S307>:114' */
            }
        }
        else
        {
            /* Transition: '<S307>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_hzd) == 133)
            {
                /* Transition: '<S307>:95' */
                /* Transition: '<S307>:116' */
                /* Call Nothing */
                VeSR1B_y_EngActStdyStTorq_FD16_CallStatus = 4U;

                /* Transition: '<S307>:114' */
            }
            else
            {
                /* Transition: '<S307>:120' */
                (void)Rte_Read_VeSR1B_b_EngActStdyStTorqV_FD16_Value(&FA_out_ou);

                /* Transition: '<S307>:117' */
                /* Call Poke */
                VeSR1B_y_EngActStdyStTorq_FD16_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S303>/Poke' */
                /* FunctionCaller: '<S309>/Function Caller' incorporates:
                 *  Inport: '<Root>/VeSR1B_b_EngActStdyStTorqV_FD16'
                 */
                /* Event: '<S307>:38' */
                Rte_Call_PokeETQR_M_EngTrqActual_PokeETQR_M_EngTrqActual
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_M_E, FA_out_ou);

                /* End of Outputs for SubSystem: '<S303>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S307>:111' */
        /* Call Fsft */
        VeSR1B_y_EngActStdyStTorq_FD16_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S303>/Fsft' */
        /* FunctionCaller: '<S308>/Function Caller' */
        /* Event: '<S307>:39' */
        Rte_Call_FsftETQR_M_EngTrqActual_FsftETQR_M_EngTrqActual();

        /* End of Outputs for SubSystem: '<S303>/Fsft' */
        /* Transition: '<S307>:113' */
        /* Transition: '<S307>:115' */
        /* Transition: '<S307>:114' */
    }

    /* End of Chart: '<S304>/Chart' */
    /* End of Outputs for SubSystem: '<S281>/EngActStdyStTorq' */
    /* End of Outputs for SubSystem: '<S7>/EngActStdyStTorq' */
    /* Transition: '<S307>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeSR1B_M_EngActStdyStTorq_FD16' */

    /* SignalConversion generated from: '<S2>/VeSR1B_y_EngActuatorsStat' incorporates:
     *  Inport: '<Root>/VeSR1B_y_EngActuatorsStat_SigSts'
     */
#if Rte_SysCon_VrntCR4B_EngActuatorsStat

    /* Outputs for Atomic SubSystem: '<S7>/EngActuatorsStat' */
    /* SignalConversion generated from: '<S2>/VeSR1B_y_EngActuatorsStat' incorporates:
     *  Inport: '<Root>/VeSR1B_y_EngActuatorsStat'
     */
    rtb_TmpSignalConversionAtVeS_bz = Rte_Read_VeSR1B_y_EngActuatorsStat_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_c);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S313>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_EngActuatorsStat_SigSts_Value(&tmpRead_1o);

    /* Outputs for Atomic SubSystem: '<S282>/EngActuatorsStat' */
    /* Chart: '<S311>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_y_EngActuatorsStat_SigSts'
     */
    if ((((uint32)tmpRead_1o) & 3U) != 0U)
    {
        /* Transition: '<S313>:100' */
        /* Transition: '<S313>:103' */
        /* Transition: '<S313>:111' */
        /* Call Fsft */
        VeSR1B_y_EngActuatorsStat_CallStatus = 2U;

        /* Event: '<S313>:39' */
        /* Transition: '<S313>:113' */
        /* Transition: '<S313>:115' */
        /* Transition: '<S313>:114' */
    }
    else
    {
        /* Transition: '<S313>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1o) & 4U) != 0U)
        {
            /* Transition: '<S313>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S313>:88' */
                /* Transition: '<S313>:111' */
                /* Call Fsft */
                VeSR1B_y_EngActuatorsStat_CallStatus = 2U;

                /* Event: '<S313>:39' */
                /* Transition: '<S313>:113' */
                /* Transition: '<S313>:115' */
                /* Transition: '<S313>:114' */
            }
            else
            {
                /* Transition: '<S313>:110' */
                /* Call Tmot */
                VeSR1B_y_EngActuatorsStat_CallStatus = 3U;

                /* Event: '<S313>:40' */
                /* Transition: '<S313>:115' */
                /* Transition: '<S313>:114' */
            }
        }
        else
        {
            /* Transition: '<S313>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_bz) == 133)
            {
                /* Transition: '<S313>:95' */
                /* Transition: '<S313>:116' */
                /* Call Nothing */
                VeSR1B_y_EngActuatorsStat_CallStatus = 4U;

                /* Transition: '<S313>:114' */
            }
            else
            {
                /* Transition: '<S313>:120' */
                /* Transition: '<S313>:117' */
                /* Call Poke */
                VeSR1B_y_EngActuatorsStat_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S310>/Poke' */
                /* FunctionCaller: '<S314>/Function Caller' */
                /* Event: '<S313>:38' */
                Rte_Call_PokeENGR_e_Cam_Phsr_Stat_PokeENGR_e_Cam_Phsr_Stat
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_c);

                /* End of Outputs for SubSystem: '<S310>/Poke' */
            }
        }
    }

    /* End of Chart: '<S311>/Chart' */
    /* End of Outputs for SubSystem: '<S282>/EngActuatorsStat' */
    /* End of Outputs for SubSystem: '<S7>/EngActuatorsStat' */
    /* Transition: '<S313>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeSR1B_y_EngActuatorsStat' */

    /* SignalConversion generated from: '<S2>/VeSR1B_M_EngAirFlwStdyStTrqFD16' incorporates:
     *  Inport: '<Root>/VeSR1B_y_EngAirFlwStdyStTrqFD16_SigSts'
     */
#if Rte_SysCon_VrntCR4B_EngAirFlwStdyStTorq

    /* Outputs for Atomic SubSystem: '<S7>/EngAirFlwStdyStTorq' */
    /* SignalConversion generated from: '<S2>/VeSR1B_M_EngAirFlwStdyStTrqFD16' incorporates:
     *  Inport: '<Root>/VeSR1B_M_EngAirFlwStdyStTrqFD16'
     */
    rtb_TmpSignalConversionAtVeS_bw =
        Rte_Read_VeSR1B_M_EngAirFlwStdyStTrqFD16_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B__ii);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S319>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_EngAirFlwStdyStTrqFD16_SigSts_Value(&tmpRead_1p);

    /* Outputs for Atomic SubSystem: '<S283>/EngAirFlwStdyStTorq' */
    /* Chart: '<S316>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_b_EngAiFlwStdyStTrqVFD16'
     *  Inport: '<Root>/VeSR1B_y_EngAirFlwStdyStTrqFD16_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_1p) & 3U) != 0U)
    {
        /* Transition: '<S319>:100' */
        /* Transition: '<S319>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S319>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1p) & 4U) != 0U)
        {
            /* Transition: '<S319>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S319>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S319>:110' */
                /* Call Tmot */
                VeSR1B_y_EngAirFlwStdyStTrqFD16_CallStatus = 3U;

                /* Event: '<S319>:40' */
                /* Transition: '<S319>:115' */
                /* Transition: '<S319>:114' */
            }
        }
        else
        {
            /* Transition: '<S319>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_bw) == 133)
            {
                /* Transition: '<S319>:95' */
                /* Transition: '<S319>:116' */
                /* Call Nothing */
                VeSR1B_y_EngAirFlwStdyStTrqFD16_CallStatus = 4U;

                /* Transition: '<S319>:114' */
            }
            else
            {
                /* Transition: '<S319>:120' */
                (void)Rte_Read_VeSR1B_b_EngAiFlwStdyStTrqVFD16_Value(&tmpRead_40);

                /* Transition: '<S319>:117' */
                /* Call Poke */
                VeSR1B_y_EngAirFlwStdyStTrqFD16_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S315>/Poke' */
                /* FunctionCaller: '<S321>/Function Caller' incorporates:
                 *  Inport: '<Root>/VeSR1B_b_EngAiFlwStdyStTrqVFD16'
                 */
                /* Event: '<S319>:38' */
                Rte_Call_PokeETQR_M_EngTrqAirflow_PokeETQR_M_EngTrqAirflow
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B__ii, tmpRead_40);

                /* End of Outputs for SubSystem: '<S315>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S319>:111' */
        /* Call Fsft */
        VeSR1B_y_EngAirFlwStdyStTrqFD16_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S315>/Fsft' */
        /* FunctionCaller: '<S320>/Function Caller' */
        /* Event: '<S319>:39' */
        Rte_Call_FsftETQR_M_EngTrqAirflow_FsftETQR_M_EngTrqAirflow();

        /* End of Outputs for SubSystem: '<S315>/Fsft' */
        /* Transition: '<S319>:113' */
        /* Transition: '<S319>:115' */
        /* Transition: '<S319>:114' */
    }

    /* End of Chart: '<S316>/Chart' */
    /* End of Outputs for SubSystem: '<S283>/EngAirFlwStdyStTorq' */
    /* End of Outputs for SubSystem: '<S7>/EngAirFlwStdyStTorq' */
    /* Transition: '<S319>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeSR1B_M_EngAirFlwStdyStTrqFD16' */

    /* SignalConversion generated from: '<S2>/VeCRDB_M_EngMnSpkNmCrArTqCp' incorporates:
     *  Inport: '<Root>/VeCRDB_y_EngMnSpkNmCrArTqCp_SigSts'
     */
#if Rte_SysCon_VrntCR4B_EngMinSparkNomCurrAirTorqCap

    /* Outputs for Atomic SubSystem: '<S7>/EngMinSparkNomCurrAirTorqCap' */
    /* SignalConversion generated from: '<S2>/VeCRDB_M_EngMnSpkNmCrArTqCp' incorporates:
     *  Inport: '<Root>/VeCRDB_M_EngMnSpkNmCrArTqCp'
     */
    rtb_TmpSignalConversionAtVeCR_o = Rte_Read_VeCRDB_M_EngMnSpkNmCrArTqCp_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__mc);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S326>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_EngMnSpkNmCrArTqCp_SigSts_Value(&tmpRead_1q);

    /* Outputs for Atomic SubSystem: '<S284>/EngMinSparkNomCurrAirTorqCap' */
    /* Chart: '<S323>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_y_EngMnSpkNmCrArTqCp_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_1q) & 3U) != 0U)
    {
        /* Transition: '<S326>:100' */
        /* Transition: '<S326>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S326>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1q) & 4U) != 0U)
        {
            /* Transition: '<S326>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S326>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S326>:110' */
                /* Call Tmot */
                VeCRDB_y_EngMnSpkNmCrArTqCp_CallStatus = 3U;

                /* Event: '<S326>:40' */
                /* Transition: '<S326>:115' */
                /* Transition: '<S326>:114' */
            }
        }
        else
        {
            /* Transition: '<S326>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_o) == 133)
            {
                /* Transition: '<S326>:95' */
                /* Transition: '<S326>:116' */
                /* Call Nothing */
                VeCRDB_y_EngMnSpkNmCrArTqCp_CallStatus = 4U;

                /* Transition: '<S326>:114' */
            }
            else
            {
                /* Transition: '<S326>:120' */
                if ((((uint32)tmpRead_1q) & 8U) != 0U)
                {
                    /* Transition: '<S326>:122' */
                    /* Transition: '<S326>:125' */
                    FA_out_ou = true;

                    /* Transition: '<S326>:126' */
                }
                else
                {
                    /* Transition: '<S326>:124' */
                    FA_out_ou = false;
                }

                /* Transition: '<S326>:117' */
                /* Call Poke */
                VeCRDB_y_EngMnSpkNmCrArTqCp_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S322>/Poke' */
                /* FunctionCaller: '<S328>/Function Caller' */
                /* Event: '<S326>:38' */
                Rte_Call_PokeETQR_M_EngCapacityMinRunImmedNom_PokeETQR_M_EngCapacityMinRunImmedNom
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__mc, FA_out_ou);

                /* End of Outputs for SubSystem: '<S322>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S326>:111' */
        /* Call Fsft */
        VeCRDB_y_EngMnSpkNmCrArTqCp_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S322>/Fsft' */
        /* FunctionCaller: '<S327>/Function Caller' */
        /* Event: '<S326>:39' */
        Rte_Call_FsftETQR_M_EngCapacityMinRunImmedNom_FsftETQR_M_EngCapacityMinRunImmedNom
            ();

        /* End of Outputs for SubSystem: '<S322>/Fsft' */
        /* Transition: '<S326>:113' */
        /* Transition: '<S326>:115' */
        /* Transition: '<S326>:114' */
    }

    /* End of Chart: '<S323>/Chart' */
    /* End of Outputs for SubSystem: '<S284>/EngMinSparkNomCurrAirTorqCap' */
    /* End of Outputs for SubSystem: '<S7>/EngMinSparkNomCurrAirTorqCap' */
    /* Transition: '<S326>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_M_EngMnSpkNmCrArTqCp' */

    /* SignalConversion generated from: '<S2>/VeSR1B_b_EngRunCrnkAct' incorporates:
     *  Inport: '<Root>/VeSR1B_y_EngRunCrnkAct_SigSts'
     */
#if Rte_SysCon_VrntCR4B_EngRunCrnkAct

    /* Outputs for Atomic SubSystem: '<S7>/EngRunCrnkAct' */
    /* SignalConversion generated from: '<S2>/VeSR1B_b_EngRunCrnkAct' incorporates:
     *  Inport: '<Root>/VeSR1B_b_EngRunCrnkAct'
     */
    rtb_TmpSignalConversionAtVeS_mf = Rte_Read_VeSR1B_b_EngRunCrnkAct_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_g);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S333>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_EngRunCrnkAct_SigSts_Value(&tmpRead_1r);

    /* Outputs for Atomic SubSystem: '<S285>/EngRunCrnkAct' */
    /* Chart: '<S330>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_y_EngRunCrnkAct_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_1r) & 3U) != 0U)
    {
        /* Transition: '<S333>:100' */
        /* Transition: '<S333>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S333>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1r) & 4U) != 0U)
        {
            /* Transition: '<S333>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S333>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S333>:110' */
                /* Call Tmot */
                VeSR1B_y_EngRunCrnkAct_CallStatus = 3U;

                /* Event: '<S333>:40' */
                /* Transition: '<S333>:115' */
                /* Transition: '<S333>:114' */
            }
        }
        else
        {
            /* Transition: '<S333>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_mf) == 133)
            {
                /* Transition: '<S333>:95' */
                /* Transition: '<S333>:116' */
                /* Call Nothing */
                VeSR1B_y_EngRunCrnkAct_CallStatus = 4U;

                /* Transition: '<S333>:114' */
            }
            else
            {
                /* Transition: '<S333>:120' */
                /* Transition: '<S333>:117' */
                /* Call Poke */
                VeSR1B_y_EngRunCrnkAct_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S329>/Poke' */
                /* FunctionCaller: '<S335>/Function Caller' incorporates:
                 *  Constant: '<S335>/Constant'
                 */
                /* Event: '<S333>:38' */
                Rte_Call_PokePMDR_b_RunCrnkActvECM_PokePMDR_b_RunCrnkActvECM
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_g, false);

                /* End of Outputs for SubSystem: '<S329>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S333>:111' */
        /* Call Fsft */
        VeSR1B_y_EngRunCrnkAct_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S329>/Fsft' */
        /* FunctionCaller: '<S334>/Function Caller' */
        /* Event: '<S333>:39' */
        Rte_Call_FsftPMDR_b_RunCrnkActvECM_FsftPMDR_b_RunCrnkActvECM();

        /* End of Outputs for SubSystem: '<S329>/Fsft' */
        /* Transition: '<S333>:113' */
        /* Transition: '<S333>:115' */
        /* Transition: '<S333>:114' */
    }

    /* End of Chart: '<S330>/Chart' */
    /* End of Outputs for SubSystem: '<S285>/EngRunCrnkAct' */
    /* End of Outputs for SubSystem: '<S7>/EngRunCrnkAct' */
    /* Transition: '<S333>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeSR1B_b_EngRunCrnkAct' */

    /* SignalConversion generated from: '<S2>/VeSR1B_M_EngTrqReserveReq_FD16' incorporates:
     *  Inport: '<Root>/VeSR1B_y_EngTrqReserveReq_FD16_SigSts'
     */
#if Rte_SysCon_VrntCR4B_EngTrqReserveReq

    /* Outputs for Atomic SubSystem: '<S7>/EngTrqReserveReq' */
    /* SignalConversion generated from: '<S2>/VeSR1B_M_EngTrqReserveReq_FD16' incorporates:
     *  Inport: '<Root>/VeSR1B_M_EngTrqReserveReq_FD16'
     */
    rtb_TmpSignalConversionAtVeS_nx =
        Rte_Read_VeSR1B_M_EngTrqReserveReq_FD16_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_M_k);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S340>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_EngTrqReserveReq_FD16_SigSts_Value(&tmpRead_1s);

    /* Outputs for Atomic SubSystem: '<S286>/EngTrqReserveReq' */
    /* Chart: '<S337>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_y_EngTrqReserveReq_FD16_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_1s) & 3U) != 0U)
    {
        /* Transition: '<S340>:100' */
        /* Transition: '<S340>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S340>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1s) & 4U) != 0U)
        {
            /* Transition: '<S340>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S340>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S340>:110' */
                /* Call Tmot */
                VeSR1B_y_EngTrqReserveReq_FD16_CallStatus = 3U;

                /* Event: '<S340>:40' */
                /* Transition: '<S340>:115' */
                /* Transition: '<S340>:114' */
            }
        }
        else
        {
            /* Transition: '<S340>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_nx) == 133)
            {
                /* Transition: '<S340>:95' */
                /* Transition: '<S340>:116' */
                /* Call Nothing */
                VeSR1B_y_EngTrqReserveReq_FD16_CallStatus = 4U;

                /* Transition: '<S340>:114' */
            }
            else
            {
                /* Transition: '<S340>:120' */
                if ((((uint32)tmpRead_1s) & 8U) != 0U)
                {
                    /* Transition: '<S340>:122' */
                    /* Transition: '<S340>:125' */
                    FA_out_ou = true;

                    /* Transition: '<S340>:126' */
                }
                else
                {
                    /* Transition: '<S340>:124' */
                    FA_out_ou = false;
                }

                /* Transition: '<S340>:117' */
                /* Call Poke */
                VeSR1B_y_EngTrqReserveReq_FD16_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S336>/Poke' */
                /* FunctionCaller: '<S342>/Function Caller' */
                /* Event: '<S340>:38' */
                Rte_Call_PokeETQR_M_EngTrqReserveReq_PokeETQR_M_EngTrqReserveReq
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_M_k, FA_out_ou);

                /* End of Outputs for SubSystem: '<S336>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S340>:111' */
        /* Call Fsft */
        VeSR1B_y_EngTrqReserveReq_FD16_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S336>/Fsft' */
        /* FunctionCaller: '<S341>/Function Caller' */
        /* Event: '<S340>:39' */
        Rte_Call_FsftETQR_M_EngTrqReserveReq_FsftETQR_M_EngTrqReserveReq();

        /* End of Outputs for SubSystem: '<S336>/Fsft' */
        /* Transition: '<S340>:113' */
        /* Transition: '<S340>:115' */
        /* Transition: '<S340>:114' */
    }

    /* End of Chart: '<S337>/Chart' */
    /* End of Outputs for SubSystem: '<S286>/EngTrqReserveReq' */
    /* End of Outputs for SubSystem: '<S7>/EngTrqReserveReq' */
    /* Transition: '<S340>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeSR1B_M_EngTrqReserveReq_FD16' */

    /* SignalConversion generated from: '<S2>/VeSR1B_b_Feedback_HCP_FD16' incorporates:
     *  Inport: '<Root>/VeSR1B_y_Feedback_HCP_FD16_SigSts'
     */
#if Rte_SysCon_VrntCR4B_FeedbackHCP

    /* Outputs for Atomic SubSystem: '<S7>/Feedback_HCP' */
    /* SignalConversion generated from: '<S2>/VeSR1B_b_Feedback_HCP_FD16' incorporates:
     *  Inport: '<Root>/VeSR1B_b_Feedback_HCP_FD16'
     */
    rtb_TmpSignalConversionAtVe_nd1 = Rte_Read_VeSR1B_b_Feedback_HCP_FD16_Value(
        &CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_F);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S347>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_Feedback_HCP_FD16_SigSts_Value(&tmpRead_1t);

    /* Outputs for Atomic SubSystem: '<S287>/Feedback_HCP' */
    /* Chart: '<S344>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_y_Feedback_HCP_FD16_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_1t) & 3U) != 0U)
    {
        /* Transition: '<S347>:100' */
        /* Transition: '<S347>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S347>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1t) & 4U) != 0U)
        {
            /* Transition: '<S347>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S347>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S347>:110' */
                /* Call Tmot */
                VeSR1B_y_Feedback_HCP_FD16_CallStatus = 3U;

                /* Event: '<S347>:40' */
                /* Transition: '<S347>:115' */
                /* Transition: '<S347>:114' */
            }
        }
        else
        {
            /* Transition: '<S347>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_nd1) == 133)
            {
                /* Transition: '<S347>:95' */
                /* Transition: '<S347>:116' */
                /* Call Nothing */
                VeSR1B_y_Feedback_HCP_FD16_CallStatus = 4U;

                /* Transition: '<S347>:114' */
            }
            else
            {
                /* Transition: '<S347>:120' */
                /* Transition: '<S347>:117' */
                /* Call Poke */
                VeSR1B_y_Feedback_HCP_FD16_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S343>/Poke' */
                /* FunctionCaller: '<S349>/Function Caller' */
                /* Event: '<S347>:38' */
                Rte_Call_PokeENGR_b_ECM_Feedback_HCP_PokeENGR_b_ECM_Feedback_HCP
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_F);

                /* End of Outputs for SubSystem: '<S343>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S347>:111' */
        /* Call Fsft */
        VeSR1B_y_Feedback_HCP_FD16_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S343>/Fsft' */
        /* FunctionCaller: '<S348>/Function Caller' */
        /* Event: '<S347>:39' */
        Rte_Call_FsftENGR_b_ECM_Feedback_HCP_FsftENGR_b_ECM_Feedback_HCP();

        /* End of Outputs for SubSystem: '<S343>/Fsft' */
        /* Transition: '<S347>:113' */
        /* Transition: '<S347>:115' */
        /* Transition: '<S347>:114' */
    }

    /* End of Chart: '<S344>/Chart' */
    /* End of Outputs for SubSystem: '<S287>/Feedback_HCP' */
    /* End of Outputs for SubSystem: '<S7>/Feedback_HCP' */
    /* Transition: '<S347>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeSR1B_b_Feedback_HCP_FD16' */

    /* SignalConversion generated from: '<S2>/VeCRDB_b_GasFlwEnblsFuAtStr' incorporates:
     *  Inport: '<Root>/VeCRDB_y_GasFlwEnblsFuAtStr_SigSts'
     */
#if Rte_SysCon_VrntCR4B_GasFlwEnblsFuAtStr

    /* Outputs for Atomic SubSystem: '<S7>/GasFlwEnblsFuAtStr' */
    /* SignalConversion generated from: '<S2>/VeCRDB_b_GasFlwEnblsFuAtStr' incorporates:
     *  Inport: '<Root>/VeCRDB_b_GasFlwEnblsFuAtStr'
     */
    rtb_TmpSignalConversionAtVeCR_a = Rte_Read_VeCRDB_b_GasFlwEnblsFuAtStr_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_G);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S353>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_GasFlwEnblsFuAtStr_SigSts_Value(&tmpRead_1u);

    /* Outputs for Atomic SubSystem: '<S288>/GasFlwEnblsFuAtStr' */
    /* Chart: '<S351>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_y_GasFlwEnblsFuAtStr_SigSts'
     */
    if ((((uint32)tmpRead_1u) & 3U) != 0U)
    {
        /* Transition: '<S353>:100' */
        /* Transition: '<S353>:103' */
        /* Transition: '<S353>:111' */
        /* Call Fsft */
        VeCRDB_y_GasFlwEnblsFuAtStr_CallStatus = 2U;

        /* Event: '<S353>:39' */
        /* Transition: '<S353>:113' */
        /* Transition: '<S353>:115' */
        /* Transition: '<S353>:114' */
    }
    else
    {
        /* Transition: '<S353>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1u) & 4U) != 0U)
        {
            /* Transition: '<S353>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S353>:88' */
                /* Transition: '<S353>:111' */
                /* Call Fsft */
                VeCRDB_y_GasFlwEnblsFuAtStr_CallStatus = 2U;

                /* Event: '<S353>:39' */
                /* Transition: '<S353>:113' */
                /* Transition: '<S353>:115' */
                /* Transition: '<S353>:114' */
            }
            else
            {
                /* Transition: '<S353>:110' */
                /* Call Tmot */
                VeCRDB_y_GasFlwEnblsFuAtStr_CallStatus = 3U;

                /* Event: '<S353>:40' */
                /* Transition: '<S353>:115' */
                /* Transition: '<S353>:114' */
            }
        }
        else
        {
            /* Transition: '<S353>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_a) == 133)
            {
                /* Transition: '<S353>:95' */
                /* Transition: '<S353>:116' */
                /* Call Nothing */
                VeCRDB_y_GasFlwEnblsFuAtStr_CallStatus = 4U;

                /* Transition: '<S353>:114' */
            }
            else
            {
                /* Transition: '<S353>:120' */
                /* Transition: '<S353>:117' */
                /* Call Poke */
                VeCRDB_y_GasFlwEnblsFuAtStr_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S350>/Poke' */
                /* FunctionCaller: '<S354>/Function Caller' */
                /* Event: '<S353>:38' */
                Rte_Call_PokeENGR_b_GasFlowActuator_PokeENGR_b_GasFlowActuator
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_G);

                /* End of Outputs for SubSystem: '<S350>/Poke' */
            }
        }
    }

    /* End of Chart: '<S351>/Chart' */
    /* End of Outputs for SubSystem: '<S288>/GasFlwEnblsFuAtStr' */
    /* End of Outputs for SubSystem: '<S7>/GasFlwEnblsFuAtStr' */
    /* Transition: '<S353>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_b_GasFlwEnblsFuAtStr' */

    /* SignalConversion generated from: '<S2>/VeSR1B_y_HybActEngTqRespTypFD16' incorporates:
     *  Inport: '<Root>/VeSR1B_y_HybActEngTqRespTypFD16_SigSts'
     */
#if Rte_SysCon_VrntCR4B_HybActEngTorqRespTyp

    /* Outputs for Atomic SubSystem: '<S7>/HybActEngTorqRespTyp' */
    /* SignalConversion generated from: '<S2>/VeSR1B_y_HybActEngTqRespTypFD16' incorporates:
     *  Inport: '<Root>/VeSR1B_y_HybActEngTqRespTypFD16'
     */
    rtb_TmpSignalConversionAtVeS_bl =
        Rte_Read_VeSR1B_y_HybActEngTqRespTypFD16_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_H);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S358>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_HybActEngTqRespTypFD16_SigSts_Value(&tmpRead_1v);

    /* Outputs for Atomic SubSystem: '<S289>/HybActEngTorqRespTyp' */
    /* Chart: '<S356>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_y_HybActEngTqRespTypFD16_SigSts'
     */
    if ((((uint32)tmpRead_1v) & 3U) != 0U)
    {
        /* Transition: '<S358>:100' */
        /* Transition: '<S358>:103' */
        /* Transition: '<S358>:111' */
        /* Call Fsft */
        VeSR1B_y_HybActEngTqRespTypFD16_CallStatus = 2U;

        /* Event: '<S358>:39' */
        /* Transition: '<S358>:113' */
        /* Transition: '<S358>:115' */
        /* Transition: '<S358>:114' */
    }
    else
    {
        /* Transition: '<S358>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1v) & 4U) != 0U)
        {
            /* Transition: '<S358>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S358>:88' */
                /* Transition: '<S358>:111' */
                /* Call Fsft */
                VeSR1B_y_HybActEngTqRespTypFD16_CallStatus = 2U;

                /* Event: '<S358>:39' */
                /* Transition: '<S358>:113' */
                /* Transition: '<S358>:115' */
                /* Transition: '<S358>:114' */
            }
            else
            {
                /* Transition: '<S358>:110' */
                /* Call Tmot */
                VeSR1B_y_HybActEngTqRespTypFD16_CallStatus = 3U;

                /* Event: '<S358>:40' */
                /* Transition: '<S358>:115' */
                /* Transition: '<S358>:114' */
            }
        }
        else
        {
            /* Transition: '<S358>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_bl) == 133)
            {
                /* Transition: '<S358>:95' */
                /* Transition: '<S358>:116' */
                /* Call Nothing */
                VeSR1B_y_HybActEngTqRespTypFD16_CallStatus = 4U;

                /* Transition: '<S358>:114' */
            }
            else
            {
                /* Transition: '<S358>:120' */
                /* Transition: '<S358>:117' */
                /* Call Poke */
                VeSR1B_y_HybActEngTqRespTypFD16_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S355>/Poke' */
                /* FunctionCaller: '<S359>/Function Caller' */
                /* Event: '<S358>:38' */
                Rte_Call_PokeENGR_e_HybActEngTorqRespType_PokeENGR_e_HybActEngTorqRespType
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_H);

                /* End of Outputs for SubSystem: '<S355>/Poke' */
            }
        }
    }

    /* End of Chart: '<S356>/Chart' */
    /* End of Outputs for SubSystem: '<S289>/HybActEngTorqRespTyp' */
    /* End of Outputs for SubSystem: '<S7>/HybActEngTorqRespTyp' */
    /* Transition: '<S358>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeSR1B_y_HybActEngTqRespTypFD16' */

    /* SignalConversion generated from: '<S2>/VeSR1B_p_MAP_4_BAR_PHEV' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MAP_4_BAR_PHEV_SigSts'
     */
#if Rte_SysCon_VrntCR4B_MAP4BARPHEV

    /* Outputs for Atomic SubSystem: '<S7>/MAP_4_BAR_PHEV' */
    /* SignalConversion generated from: '<S2>/VeSR1B_p_MAP_4_BAR_PHEV' incorporates:
     *  Inport: '<Root>/VeSR1B_p_MAP_4_BAR_PHEV'
     */
    rtb_TmpSignalConversionAtVeS_f3 = Rte_Read_VeSR1B_p_MAP_4_BAR_PHEV_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_p_M);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S364>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_MAP_4_BAR_PHEV_SigSts_Value(&tmpRead_1w);

    /* Outputs for Atomic SubSystem: '<S290>/MAP_4_BAR_PHEV' */
    /* Chart: '<S361>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MAP_4_BAR_PHEV_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_1w) & 3U) != 0U)
    {
        /* Transition: '<S364>:100' */
        /* Transition: '<S364>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S364>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1w) & 4U) != 0U)
        {
            /* Transition: '<S364>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S364>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S364>:110' */
                /* Call Tmot */
                VeSR1B_y_MAP_4_BAR_PHEV_CallStatus = 3U;

                /* Event: '<S364>:40' */
                /* Transition: '<S364>:115' */
                /* Transition: '<S364>:114' */
            }
        }
        else
        {
            /* Transition: '<S364>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_f3) == 133)
            {
                /* Transition: '<S364>:95' */
                /* Transition: '<S364>:116' */
                /* Call Nothing */
                VeSR1B_y_MAP_4_BAR_PHEV_CallStatus = 4U;

                /* Transition: '<S364>:114' */
            }
            else
            {
                /* Transition: '<S364>:120' */
                if ((((uint32)tmpRead_1w) & 8U) != 0U)
                {
                    /* Transition: '<S364>:122' */
                    /* Transition: '<S364>:125' */
                    FA_out_ou = true;

                    /* Transition: '<S364>:126' */
                }
                else
                {
                    /* Transition: '<S364>:124' */
                    FA_out_ou = false;
                }

                /* Transition: '<S364>:117' */
                /* Call Poke */
                VeSR1B_y_MAP_4_BAR_PHEV_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S360>/Poke' */
                /* FunctionCaller: '<S366>/Function Caller' */
                /* Event: '<S364>:38' */
                Rte_Call_PokeENGR_p_EngManfldAbsPrs_PokeENGR_p_EngManfldAbsPrs
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_p_M, FA_out_ou);

                /* End of Outputs for SubSystem: '<S360>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S364>:111' */
        /* Call Fsft */
        VeSR1B_y_MAP_4_BAR_PHEV_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S360>/Fsft' */
        /* FunctionCaller: '<S365>/Function Caller' */
        /* Event: '<S364>:39' */
        Rte_Call_FsftENGR_p_EngManfldAbsPrs_FsftENGR_p_EngManfldAbsPrs();

        /* End of Outputs for SubSystem: '<S360>/Fsft' */
        /* Transition: '<S364>:113' */
        /* Transition: '<S364>:115' */
        /* Transition: '<S364>:114' */
    }

    /* End of Chart: '<S361>/Chart' */
    /* End of Outputs for SubSystem: '<S290>/MAP_4_BAR_PHEV' */
    /* End of Outputs for SubSystem: '<S7>/MAP_4_BAR_PHEV' */
    /* Transition: '<S364>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeSR1B_p_MAP_4_BAR_PHEV' */

    /* SignalConversion generated from: '<S2>/VeSR1B_M_MaxOffEngTorqCap_FD16' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MaxOffEngTorqCap_FD16_SigSts'
     */
#if Rte_SysCon_VrntCR4B_MaxOffEngTorqCap

    /* Outputs for Atomic SubSystem: '<S7>/MaxOffEngTorqCap' */
    /* SignalConversion generated from: '<S2>/VeSR1B_M_MaxOffEngTorqCap_FD16' incorporates:
     *  Inport: '<Root>/VeSR1B_M_MaxOffEngTorqCap_FD16'
     */
    rtb_TmpSignalConversionAtVeS_d0 =
        Rte_Read_VeSR1B_M_MaxOffEngTorqCap_FD16_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_M_g);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S370>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_MaxOffEngTorqCap_FD16_SigSts_Value(&tmpRead_1x);

    /* Outputs for Atomic SubSystem: '<S291>/MaxOffEngTorqCap' */
    /* Chart: '<S368>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MaxOffEngTorqCap_FD16_SigSts'
     */
    if ((((uint32)tmpRead_1x) & 3U) != 0U)
    {
        /* Transition: '<S370>:100' */
        /* Transition: '<S370>:103' */
        /* Transition: '<S370>:111' */
        /* Call Fsft */
        VeSR1B_y_MaxOffEngTorqCap_FD16_CallStatus = 2U;

        /* Event: '<S370>:39' */
        /* Transition: '<S370>:113' */
        /* Transition: '<S370>:115' */
        /* Transition: '<S370>:114' */
    }
    else
    {
        /* Transition: '<S370>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1x) & 4U) != 0U)
        {
            /* Transition: '<S370>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S370>:88' */
                /* Transition: '<S370>:111' */
                /* Call Fsft */
                VeSR1B_y_MaxOffEngTorqCap_FD16_CallStatus = 2U;

                /* Event: '<S370>:39' */
                /* Transition: '<S370>:113' */
                /* Transition: '<S370>:115' */
                /* Transition: '<S370>:114' */
            }
            else
            {
                /* Transition: '<S370>:110' */
                /* Call Tmot */
                VeSR1B_y_MaxOffEngTorqCap_FD16_CallStatus = 3U;

                /* Event: '<S370>:40' */
                /* Transition: '<S370>:115' */
                /* Transition: '<S370>:114' */
            }
        }
        else
        {
            /* Transition: '<S370>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_d0) == 133)
            {
                /* Transition: '<S370>:95' */
                /* Transition: '<S370>:116' */
                /* Call Nothing */
                VeSR1B_y_MaxOffEngTorqCap_FD16_CallStatus = 4U;

                /* Transition: '<S370>:114' */
            }
            else
            {
                /* Transition: '<S370>:120' */
                if ((((uint32)tmpRead_1x) & 8U) != 0U)
                {
                    /* Transition: '<S370>:122' */
                    /* Transition: '<S370>:125' */
                    FA_out_ou = true;

                    /* Transition: '<S370>:126' */
                }
                else
                {
                    /* Transition: '<S370>:124' */
                    FA_out_ou = false;
                }

                /* Transition: '<S370>:117' */
                /* Call Poke */
                VeSR1B_y_MaxOffEngTorqCap_FD16_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S367>/Poke' */
                /* FunctionCaller: '<S371>/Function Caller' */
                /* Event: '<S370>:38' */
                Rte_Call_PokeETQR_M_MinDragCapacity_PokeETQR_M_MinDragCapacity
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_M_g, FA_out_ou);

                /* End of Outputs for SubSystem: '<S367>/Poke' */
            }
        }
    }

    /* End of Chart: '<S368>/Chart' */
    /* End of Outputs for SubSystem: '<S291>/MaxOffEngTorqCap' */
    /* End of Outputs for SubSystem: '<S7>/MaxOffEngTorqCap' */
    /* Transition: '<S370>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeSR1B_M_MaxOffEngTorqCap_FD16' */

    /* SignalConversion generated from: '<S2>/VeSR1B_M_MaxPrdtdEngTorqCapFD16' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MaxPrdtdEngTorqCapFD16_SigSts'
     */
#if Rte_SysCon_VrntCR4B_MaxPrdtdEngTorqCap

    /* Outputs for Atomic SubSystem: '<S7>/MaxPrdtdEngTorqCap' */
    /* SignalConversion generated from: '<S2>/VeSR1B_M_MaxPrdtdEngTorqCapFD16' incorporates:
     *  Inport: '<Root>/VeSR1B_M_MaxPrdtdEngTorqCapFD16'
     */
    rtb_TmpSignalConversionAtVeSR_j =
        Rte_Read_VeSR1B_M_MaxPrdtdEngTorqCapFD16_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_M_d);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S376>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_MaxPrdtdEngTorqCapFD16_SigSts_Value(&tmpRead_1y);

    /* Outputs for Atomic SubSystem: '<S292>/MaxPrdtdEngTorqCap' */
    /* Chart: '<S373>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_b_MaxPrdtdEngTrqCapVFD16'
     *  Inport: '<Root>/VeSR1B_y_MaxPrdtdEngTorqCapFD16_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_1y) & 3U) != 0U)
    {
        /* Transition: '<S376>:100' */
        /* Transition: '<S376>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S376>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1y) & 4U) != 0U)
        {
            /* Transition: '<S376>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S376>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S376>:110' */
                /* Call Tmot */
                VeSR1B_y_MaxPrdtdEngTorqCapFD16_CallStatus = 3U;

                /* Event: '<S376>:40' */
                /* Transition: '<S376>:115' */
                /* Transition: '<S376>:114' */
            }
        }
        else
        {
            /* Transition: '<S376>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_j) == 133)
            {
                /* Transition: '<S376>:95' */
                /* Transition: '<S376>:116' */
                /* Call Nothing */
                VeSR1B_y_MaxPrdtdEngTorqCapFD16_CallStatus = 4U;

                /* Transition: '<S376>:114' */
            }
            else
            {
                /* Transition: '<S376>:120' */
                (void)Rte_Read_VeSR1B_b_MaxPrdtdEngTrqCapVFD16_Value(&FA_out_gb);

                /* Transition: '<S376>:117' */
                /* Call Poke */
                VeSR1B_y_MaxPrdtdEngTorqCapFD16_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S372>/Poke' */
                /* FunctionCaller: '<S378>/Function Caller' incorporates:
                 *  Inport: '<Root>/VeSR1B_b_MaxPrdtdEngTrqCapVFD16'
                 */
                /* Event: '<S376>:38' */
                Rte_Call_PokeETQR_M_EngCapacityMax_PokeETQR_M_EngCapacityMax
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_M_d, FA_out_gb);

                /* End of Outputs for SubSystem: '<S372>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S376>:111' */
        /* Call Fsft */
        VeSR1B_y_MaxPrdtdEngTorqCapFD16_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S372>/Fsft' */
        /* FunctionCaller: '<S377>/Function Caller' */
        /* Event: '<S376>:39' */
        Rte_Call_FsftETQR_M_EngCapacityMax_FsftETQR_M_EngCapacityMax();

        /* End of Outputs for SubSystem: '<S372>/Fsft' */
        /* Transition: '<S376>:113' */
        /* Transition: '<S376>:115' */
        /* Transition: '<S376>:114' */
    }

    /* End of Chart: '<S373>/Chart' */
    /* End of Outputs for SubSystem: '<S292>/MaxPrdtdEngTorqCap' */
    /* End of Outputs for SubSystem: '<S7>/MaxPrdtdEngTorqCap' */
    /* Transition: '<S376>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeSR1B_M_MaxPrdtdEngTorqCapFD16' */

    /* SignalConversion generated from: '<S2>/VeSR1B_M_MinArFlwMinSpkTqCpFD16' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MinArFlwMinSpkTqCpFD16_SigSts'
     */
#if Rte_SysCon_VrntCR4B_MinAirFlowMinSparkTorqCap

    /* Outputs for Atomic SubSystem: '<S7>/MinAirFlowMinSparkTorqCap' */
    /* SignalConversion generated from: '<S2>/VeSR1B_M_MinArFlwMinSpkTqCpFD16' incorporates:
     *  Inport: '<Root>/VeSR1B_M_MinArFlwMinSpkTqCpFD16'
     */
    rtb_TmpSignalConversionAtVeS_ku =
        Rte_Read_VeSR1B_M_MinArFlwMinSpkTqCpFD16_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_M_h);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S383>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_MinArFlwMinSpkTqCpFD16_SigSts_Value(&tmpRead_1z);

    /* Outputs for Atomic SubSystem: '<S293>/MinAirFlowMinSparkTorqCap' */
    /* Chart: '<S380>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_b_MnArFlwMnSprkTqCpVFD16'
     *  Inport: '<Root>/VeSR1B_y_MinArFlwMinSpkTqCpFD16_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_1z) & 3U) != 0U)
    {
        /* Transition: '<S383>:100' */
        /* Transition: '<S383>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S383>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1z) & 4U) != 0U)
        {
            /* Transition: '<S383>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S383>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S383>:110' */
                /* Call Tmot */
                VeSR1B_y_MinArFlwMinSpkTqCpFD16_CallStatus = 3U;

                /* Event: '<S383>:40' */
                /* Transition: '<S383>:115' */
                /* Transition: '<S383>:114' */
            }
        }
        else
        {
            /* Transition: '<S383>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_ku) == 133)
            {
                /* Transition: '<S383>:95' */
                /* Transition: '<S383>:116' */
                /* Call Nothing */
                VeSR1B_y_MinArFlwMinSpkTqCpFD16_CallStatus = 4U;

                /* Transition: '<S383>:114' */
            }
            else
            {
                /* Transition: '<S383>:120' */
                (void)Rte_Read_VeSR1B_b_MnArFlwMnSprkTqCpVFD16_Value(&tmpRead_41);

                /* Transition: '<S383>:117' */
                /* Call Poke */
                VeSR1B_y_MinArFlwMinSpkTqCpFD16_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S379>/Poke' */
                /* FunctionCaller: '<S385>/Function Caller' incorporates:
                 *  Inport: '<Root>/VeSR1B_b_MnArFlwMnSprkTqCpVFD16'
                 */
                /* Event: '<S383>:38' */
                Rte_Call_PokeETQR_M_MinAirFlowMinSparkCapacity_PokeETQR_M_MinAirFlowMinSparkCapacity
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_M_h, tmpRead_41);

                /* End of Outputs for SubSystem: '<S379>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S383>:111' */
        /* Call Fsft */
        VeSR1B_y_MinArFlwMinSpkTqCpFD16_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S379>/Fsft' */
        /* FunctionCaller: '<S384>/Function Caller' */
        /* Event: '<S383>:39' */
        Rte_Call_FsftETQR_M_MinAirFlowMinSparkCapacity_FsftETQR_M_MinAirFlowMinSparkCapacity
            ();

        /* End of Outputs for SubSystem: '<S379>/Fsft' */
        /* Transition: '<S383>:113' */
        /* Transition: '<S383>:115' */
        /* Transition: '<S383>:114' */
    }

    /* End of Chart: '<S380>/Chart' */
    /* End of Outputs for SubSystem: '<S293>/MinAirFlowMinSparkTorqCap' */
    /* End of Outputs for SubSystem: '<S7>/MinAirFlowMinSparkTorqCap' */
    /* Transition: '<S383>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeSR1B_M_MinArFlwMinSpkTqCpFD16' */

    /* SignalConversion generated from: '<S2>/VeSR1B_M_MinEngTorqCap_FD16' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MinEngTorqCap_FD16_SigSts'
     */
#if Rte_SysCon_VrntCR4B_MinEngTorqCap

    /* Outputs for Atomic SubSystem: '<S7>/MinEngTorqCap' */
    /* SignalConversion generated from: '<S2>/VeSR1B_M_MinEngTorqCap_FD16' incorporates:
     *  Inport: '<Root>/VeSR1B_M_MinEngTorqCap_FD16'
     */
    rtb_TmpSignalConversionAtVeS_mk = Rte_Read_VeSR1B_M_MinEngTorqCap_FD16_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_M_c);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S390>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_MinEngTorqCap_FD16_SigSts_Value(&tmpRead_20);

    /* Outputs for Atomic SubSystem: '<S294>/MinEngTorqCap' */
    /* Chart: '<S387>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_b_MinEngTorqCapV_FD16'
     *  Inport: '<Root>/VeSR1B_y_MinEngTorqCap_FD16_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_20) & 3U) != 0U)
    {
        /* Transition: '<S390>:100' */
        /* Transition: '<S390>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S390>:104' */
        /*  MM */
        if ((((uint32)tmpRead_20) & 4U) != 0U)
        {
            /* Transition: '<S390>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S390>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S390>:110' */
                /* Call Tmot */
                VeSR1B_y_MinEngTorqCap_FD16_CallStatus = 3U;

                /* Event: '<S390>:40' */
                /* Transition: '<S390>:115' */
                /* Transition: '<S390>:114' */
            }
        }
        else
        {
            /* Transition: '<S390>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_mk) == 133)
            {
                /* Transition: '<S390>:95' */
                /* Transition: '<S390>:116' */
                /* Call Nothing */
                VeSR1B_y_MinEngTorqCap_FD16_CallStatus = 4U;

                /* Transition: '<S390>:114' */
            }
            else
            {
                /* Transition: '<S390>:120' */
                (void)Rte_Read_VeSR1B_b_MinEngTorqCapV_FD16_Value(&tmpRead_42);

                /* Transition: '<S390>:117' */
                /* Call Poke */
                VeSR1B_y_MinEngTorqCap_FD16_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S386>/Poke' */
                /* FunctionCaller: '<S392>/Function Caller' incorporates:
                 *  Inport: '<Root>/VeSR1B_b_MinEngTorqCapV_FD16'
                 */
                /* Event: '<S390>:38' */
                Rte_Call_PokeETQR_M_EngCapacityMinOff_PokeETQR_M_EngCapacityMinOff
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_M_c, tmpRead_42);

                /* End of Outputs for SubSystem: '<S386>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S390>:111' */
        /* Call Fsft */
        VeSR1B_y_MinEngTorqCap_FD16_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S386>/Fsft' */
        /* FunctionCaller: '<S391>/Function Caller' */
        /* Event: '<S390>:39' */
        Rte_Call_FsftETQR_M_EngCapacityMinOff_FsftETQR_M_EngCapacityMinOff();

        /* End of Outputs for SubSystem: '<S386>/Fsft' */
        /* Transition: '<S390>:113' */
        /* Transition: '<S390>:115' */
        /* Transition: '<S390>:114' */
    }

    /* End of Chart: '<S387>/Chart' */
    /* End of Outputs for SubSystem: '<S294>/MinEngTorqCap' */
    /* End of Outputs for SubSystem: '<S7>/MinEngTorqCap' */
    /* Transition: '<S390>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeSR1B_M_MinEngTorqCap_FD16' */

    /* SignalConversion generated from: '<S2>/VeSR1B_M_MinImmedEngTorqCapFD16' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MinImmedEngTorqCapFD16_SigSts'
     */
#if Rte_SysCon_VrntCR4B_MinImmedEngTorqCap

    /* Outputs for Atomic SubSystem: '<S7>/MinImmedEngTorqCap' */
    /* SignalConversion generated from: '<S2>/VeSR1B_M_MinImmedEngTorqCapFD16' incorporates:
     *  Inport: '<Root>/VeSR1B_M_MinImmedEngTorqCapFD16'
     */
    rtb_TmpSignalConversionAtVeS_hx =
        Rte_Read_VeSR1B_M_MinImmedEngTorqCapFD16_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_M_j);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S397>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_MinImmedEngTorqCapFD16_SigSts_Value(&tmpRead_21);

    /* Outputs for Atomic SubSystem: '<S295>/MinImmedEngTorqCap' */
    /* Chart: '<S394>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_b_MinImmedEngTrqCapVFD16'
     *  Inport: '<Root>/VeSR1B_y_MinImmedEngTorqCapFD16_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_21) & 3U) != 0U)
    {
        /* Transition: '<S397>:100' */
        /* Transition: '<S397>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S397>:104' */
        /*  MM */
        if ((((uint32)tmpRead_21) & 4U) != 0U)
        {
            /* Transition: '<S397>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S397>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S397>:110' */
                /* Call Tmot */
                VeSR1B_y_MinImmedEngTorqCapFD16_CallStatus = 3U;

                /* Event: '<S397>:40' */
                /* Transition: '<S397>:115' */
                /* Transition: '<S397>:114' */
            }
        }
        else
        {
            /* Transition: '<S397>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_hx) == 133)
            {
                /* Transition: '<S397>:95' */
                /* Transition: '<S397>:116' */
                /* Call Nothing */
                VeSR1B_y_MinImmedEngTorqCapFD16_CallStatus = 4U;

                /* Transition: '<S397>:114' */
            }
            else
            {
                /* Transition: '<S397>:120' */
                (void)Rte_Read_VeSR1B_b_MinImmedEngTrqCapVFD16_Value(&tmpRead_43);

                /* Transition: '<S397>:117' */
                /* Call Poke */
                VeSR1B_y_MinImmedEngTorqCapFD16_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S393>/Poke' */
                /* FunctionCaller: '<S399>/Function Caller' incorporates:
                 *  Inport: '<Root>/VeSR1B_b_MinImmedEngTrqCapVFD16'
                 */
                /* Event: '<S397>:38' */
                Rte_Call_PokeETQR_M_EngCapacityMinRunImmedRed_PokeETQR_M_EngCapacityMinRunImmedRed
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_M_j, tmpRead_43);

                /* End of Outputs for SubSystem: '<S393>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S397>:111' */
        /* Call Fsft */
        VeSR1B_y_MinImmedEngTorqCapFD16_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S393>/Fsft' */
        /* FunctionCaller: '<S398>/Function Caller' */
        /* Event: '<S397>:39' */
        Rte_Call_FsftETQR_M_EngCapacityMinRunImmedRed_FsftETQR_M_EngCapacityMinRunImmedRed
            ();

        /* End of Outputs for SubSystem: '<S393>/Fsft' */
        /* Transition: '<S397>:113' */
        /* Transition: '<S397>:115' */
        /* Transition: '<S397>:114' */
    }

    /* End of Chart: '<S394>/Chart' */
    /* End of Outputs for SubSystem: '<S295>/MinImmedEngTorqCap' */
    /* End of Outputs for SubSystem: '<S7>/MinImmedEngTorqCap' */
    /* Transition: '<S397>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeSR1B_M_MinImmedEngTorqCapFD16' */

    /* SignalConversion generated from: '<S2>/VeSR1B_M_MinPrdtdEngRunTqCpFD16' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MinPrdtdEngRunTqCpFD16_SigSts'
     */
#if Rte_SysCon_VrntCR4B_MinPrdtdEngRunTorqCap

    /* Outputs for Atomic SubSystem: '<S7>/MinPrdtdEngRunTorqCap' */
    /* SignalConversion generated from: '<S2>/VeSR1B_M_MinPrdtdEngRunTqCpFD16' incorporates:
     *  Inport: '<Root>/VeSR1B_M_MinPrdtdEngRunTqCpFD16'
     */
    rtb_TmpSignalConversionAtVeS_c3 =
        Rte_Read_VeSR1B_M_MinPrdtdEngRunTqCpFD16_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B__kx);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S404>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_MinPrdtdEngRunTqCpFD16_SigSts_Value(&tmpRead_22);

    /* Outputs for Atomic SubSystem: '<S296>/MinPrdtdEngRunTorqCap' */
    /* Chart: '<S401>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_b_MinPrdtdEngRnTqCpVFD16'
     *  Inport: '<Root>/VeSR1B_y_MinPrdtdEngRunTqCpFD16_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_22) & 3U) != 0U)
    {
        /* Transition: '<S404>:100' */
        /* Transition: '<S404>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S404>:104' */
        /*  MM */
        if ((((uint32)tmpRead_22) & 4U) != 0U)
        {
            /* Transition: '<S404>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S404>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S404>:110' */
                /* Call Tmot */
                VeSR1B_y_MinPrdtdEngRunTqCpFD16_CallStatus = 3U;

                /* Event: '<S404>:40' */
                /* Transition: '<S404>:115' */
                /* Transition: '<S404>:114' */
            }
        }
        else
        {
            /* Transition: '<S404>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_c3) == 133)
            {
                /* Transition: '<S404>:95' */
                /* Transition: '<S404>:116' */
                /* Call Nothing */
                VeSR1B_y_MinPrdtdEngRunTqCpFD16_CallStatus = 4U;

                /* Transition: '<S404>:114' */
            }
            else
            {
                /* Transition: '<S404>:120' */
                (void)Rte_Read_VeSR1B_b_MinPrdtdEngRnTqCpVFD16_Value(&tmpRead_44);

                /* Transition: '<S404>:117' */
                /* Call Poke */
                VeSR1B_y_MinPrdtdEngRunTqCpFD16_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S400>/Poke' */
                /* FunctionCaller: '<S406>/Function Caller' incorporates:
                 *  Inport: '<Root>/VeSR1B_b_MinPrdtdEngRnTqCpVFD16'
                 */
                /* Event: '<S404>:38' */
                Rte_Call_PokeETQR_M_EngCapacityMinRun_PokeETQR_M_EngCapacityMinRun
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B__kx, tmpRead_44);

                /* End of Outputs for SubSystem: '<S400>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S404>:111' */
        /* Call Fsft */
        VeSR1B_y_MinPrdtdEngRunTqCpFD16_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S400>/Fsft' */
        /* FunctionCaller: '<S405>/Function Caller' */
        /* Event: '<S404>:39' */
        Rte_Call_FsftETQR_M_EngCapacityMinRun_FsftETQR_M_EngCapacityMinRun();

        /* End of Outputs for SubSystem: '<S400>/Fsft' */
        /* Transition: '<S404>:113' */
        /* Transition: '<S404>:115' */
        /* Transition: '<S404>:114' */
    }

    /* End of Chart: '<S401>/Chart' */
    /* End of Outputs for SubSystem: '<S296>/MinPrdtdEngRunTorqCap' */
    /* End of Outputs for SubSystem: '<S7>/MinPrdtdEngRunTorqCap' */
    /* Transition: '<S404>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeSR1B_M_MinPrdtdEngRunTqCpFD16' */

    /* SignalConversion generated from: '<S2>/VeCRDB_b_RedSpkAuthrtAvbl' incorporates:
     *  Inport: '<Root>/VeCRDB_y_RedSpkAuthrtAvbl_SigSts'
     */
#if Rte_SysCon_VrntCR4B_RedSpkAuthorityAvbl

    /* Outputs for Atomic SubSystem: '<S7>/RedSpkAuthorityAvbl' */
    /* SignalConversion generated from: '<S2>/VeCRDB_b_RedSpkAuthrtAvbl' incorporates:
     *  Inport: '<Root>/VeCRDB_b_RedSpkAuthrtAvbl'
     */
    rtb_TmpSignalConversionAtVeCR_c = Rte_Read_VeCRDB_b_RedSpkAuthrtAvbl_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_R);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S411>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_RedSpkAuthrtAvbl_SigSts_Value(&tmpRead_23);

    /* Outputs for Atomic SubSystem: '<S297>/RedSpkAuthorityAvbl' */
    /* Chart: '<S408>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_y_RedSpkAuthrtAvbl_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_23) & 3U) != 0U)
    {
        /* Transition: '<S411>:100' */
        /* Transition: '<S411>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S411>:104' */
        /*  MM */
        if ((((uint32)tmpRead_23) & 4U) != 0U)
        {
            /* Transition: '<S411>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S411>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S411>:110' */
                /* Call Tmot */
                VeCRDB_y_RedSpkAuthrtAvbl_CallStatus = 3U;

                /* Event: '<S411>:40' */
                /* Transition: '<S411>:115' */
                /* Transition: '<S411>:114' */
            }
        }
        else
        {
            /* Transition: '<S411>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_c) == 133)
            {
                /* Transition: '<S411>:95' */
                /* Transition: '<S411>:116' */
                /* Call Nothing */
                VeCRDB_y_RedSpkAuthrtAvbl_CallStatus = 4U;

                /* Transition: '<S411>:114' */
            }
            else
            {
                /* Transition: '<S411>:120' */
                /* Transition: '<S411>:117' */
                /* Call Poke */
                VeCRDB_y_RedSpkAuthrtAvbl_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S407>/Poke' */
                /* FunctionCaller: '<S413>/Function Caller' incorporates:
                 *  Constant: '<S413>/Constant'
                 */
                /* Event: '<S411>:38' */
                Rte_Call_PokeETQR_b_EngCapacityMinRunImmedRedAvail_PokeETQR_b_EngCapacityMinRunImmedRedAvail
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_R, false);

                /* End of Outputs for SubSystem: '<S407>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S411>:111' */
        /* Call Fsft */
        VeCRDB_y_RedSpkAuthrtAvbl_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S407>/Fsft' */
        /* FunctionCaller: '<S412>/Function Caller' */
        /* Event: '<S411>:39' */
        Rte_Call_FsftETQR_b_EngCapacityMinRunImmedRedAvail_FsftETQR_b_EngCapacityMinRunImmedRedAvail
            ();

        /* End of Outputs for SubSystem: '<S407>/Fsft' */
        /* Transition: '<S411>:113' */
        /* Transition: '<S411>:115' */
        /* Transition: '<S411>:114' */
    }

    /* End of Chart: '<S408>/Chart' */
    /* End of Outputs for SubSystem: '<S297>/RedSpkAuthorityAvbl' */
    /* End of Outputs for SubSystem: '<S7>/RedSpkAuthorityAvbl' */
    /* Transition: '<S411>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_b_RedSpkAuthrtAvbl' */

    /* SignalConversion generated from: '<S2>/VeSR1B_T_EngCltTmp_FD16' incorporates:
     *  Inport: '<Root>/VeSR1B_y_EngCltTmp_FD16_SigSts'
     */
#if Rte_SysCon_VrntCR4B_EngCltTmp

    /* Outputs for Atomic SubSystem: '<S8>/EngCltTmp' */
    /* SignalConversion generated from: '<S2>/VeSR1B_T_EngCltTmp_FD16' incorporates:
     *  Inport: '<Root>/VeSR1B_T_EngCltTmp_FD16'
     */
    rtb_TmpSignalConversionAtVeSR_a = Rte_Read_VeSR1B_T_EngCltTmp_FD16_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_T_E);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S422>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_EngCltTmp_FD16_SigSts_Value(&tmpRead_24);

    /* Outputs for Atomic SubSystem: '<S414>/EngCltTmp' */
    /* Chart: '<S419>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_b_EngCltTmpV_FD16'
     *  Inport: '<Root>/VeSR1B_y_EngCltTmp_FD16_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_24) & 3U) != 0U)
    {
        /* Transition: '<S422>:100' */
        /* Transition: '<S422>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S422>:104' */
        /*  MM */
        if ((((uint32)tmpRead_24) & 4U) != 0U)
        {
            /* Transition: '<S422>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S422>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S422>:110' */
                /* Call Tmot */
                VeSR1B_y_EngCltTmp_FD16_CallStatus = 3U;

                /* Event: '<S422>:40' */
                /* Transition: '<S422>:115' */
                /* Transition: '<S422>:114' */
            }
        }
        else
        {
            /* Transition: '<S422>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeSR_a) == 133)
            {
                /* Transition: '<S422>:95' */
                /* Transition: '<S422>:116' */
                /* Call Nothing */
                VeSR1B_y_EngCltTmp_FD16_CallStatus = 4U;

                /* Transition: '<S422>:114' */
            }
            else
            {
                /* Transition: '<S422>:120' */
                (void)Rte_Read_VeSR1B_b_EngCltTmpV_FD16_Value(&tmpRead_45);

                /* Transition: '<S422>:117' */
                /* Call Poke */
                VeSR1B_y_EngCltTmp_FD16_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S418>/Poke' */
                /* FunctionCaller: '<S424>/Function Caller' incorporates:
                 *  Inport: '<Root>/VeSR1B_b_EngCltTmpV_FD16'
                 */
                /* Event: '<S422>:38' */
                Rte_Call_PokeENGR_T_EngCoolantTemp_PokeENGR_T_EngCoolantTemp
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_T_E, tmpRead_45);

                /* End of Outputs for SubSystem: '<S418>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S422>:111' */
        /* Call Fsft */
        VeSR1B_y_EngCltTmp_FD16_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S418>/Fsft' */
        /* FunctionCaller: '<S423>/Function Caller' */
        /* Event: '<S422>:39' */
        Rte_Call_FsftENGR_T_EngCoolantTemp_FsftENGR_T_EngCoolantTemp();

        /* End of Outputs for SubSystem: '<S418>/Fsft' */
        /* Transition: '<S422>:113' */
        /* Transition: '<S422>:115' */
        /* Transition: '<S422>:114' */
    }

    /* End of Chart: '<S419>/Chart' */
    /* End of Outputs for SubSystem: '<S414>/EngCltTmp' */
    /* End of Outputs for SubSystem: '<S8>/EngCltTmp' */
    /* Transition: '<S422>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeSR1B_T_EngCltTmp_FD16' */

    /* SignalConversion generated from: '<S2>/VeCRDB_n_MaxEngSpdCap' incorporates:
     *  Inport: '<Root>/VeCRDB_y_MaxEngSpdCap_SigSts'
     */
#if Rte_SysCon_VrntCR4B_MaxEngSpdCap

    /* Outputs for Atomic SubSystem: '<S8>/MaxEngSpdCap' */
    /* SignalConversion generated from: '<S2>/VeCRDB_n_MaxEngSpdCap' incorporates:
     *  Inport: '<Root>/VeCRDB_n_MaxEngSpdCap'
     */
    rtb_TmpSignalConversionAtVeC_lr = Rte_Read_VeCRDB_n_MaxEngSpdCap_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_n_M);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S429>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MaxEngSpdCap_SigSts_Value(&tmpRead_25);

    /* Outputs for Atomic SubSystem: '<S415>/MaxEngSpdCap' */
    /* Chart: '<S426>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_y_MaxEngSpdCap_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_25) & 3U) != 0U)
    {
        /* Transition: '<S429>:100' */
        /* Transition: '<S429>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S429>:104' */
        /*  MM */
        if ((((uint32)tmpRead_25) & 4U) != 0U)
        {
            /* Transition: '<S429>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S429>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S429>:110' */
                /* Call Tmot */
                VeCRDB_y_MaxEngSpdCap_CallStatus = 3U;

                /* Event: '<S429>:40' */
                /* Transition: '<S429>:115' */
                /* Transition: '<S429>:114' */
            }
        }
        else
        {
            /* Transition: '<S429>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_lr) == 133)
            {
                /* Transition: '<S429>:95' */
                /* Transition: '<S429>:116' */
                /* Call Nothing */
                VeCRDB_y_MaxEngSpdCap_CallStatus = 4U;

                /* Transition: '<S429>:114' */
            }
            else
            {
                /* Transition: '<S429>:120' */
                /* Transition: '<S429>:117' */
                /* Call Poke */
                VeCRDB_y_MaxEngSpdCap_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S425>/Poke' */
                /* FunctionCaller: '<S431>/Function Caller' */
                /* Event: '<S429>:38' */
                Rte_Call_PokeESPR_n_EngSpdMaxLim_PokeESPR_n_EngSpdMaxLim
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_n_M);

                /* End of Outputs for SubSystem: '<S425>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S429>:111' */
        /* Call Fsft */
        VeCRDB_y_MaxEngSpdCap_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S425>/Fsft' */
        /* FunctionCaller: '<S430>/Function Caller' */
        /* Event: '<S429>:39' */
        Rte_Call_FsftESPR_n_EngSpdMaxLim_FsftESPR_n_EngSpdMaxLim();

        /* End of Outputs for SubSystem: '<S425>/Fsft' */
        /* Transition: '<S429>:113' */
        /* Transition: '<S429>:115' */
        /* Transition: '<S429>:114' */
    }

    /* End of Chart: '<S426>/Chart' */
    /* End of Outputs for SubSystem: '<S415>/MaxEngSpdCap' */
    /* End of Outputs for SubSystem: '<S8>/MaxEngSpdCap' */
    /* Transition: '<S429>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_n_MaxEngSpdCap' */

    /* SignalConversion generated from: '<S2>/VeCRDB_n_MinEngSpdCap' incorporates:
     *  Inport: '<Root>/VeCRDB_y_MinEngSpdCap_SigSts'
     */
#if Rte_SysCon_VrntCR4B_MinEngSpdCap

    /* Outputs for Atomic SubSystem: '<S8>/MinEngSpdCap' */
    /* SignalConversion generated from: '<S2>/VeCRDB_n_MinEngSpdCap' incorporates:
     *  Inport: '<Root>/VeCRDB_n_MinEngSpdCap'
     */
    rtb_TmpSignalConversionAtVeCR_p = Rte_Read_VeCRDB_n_MinEngSpdCap_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_n_b);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S436>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MinEngSpdCap_SigSts_Value(&tmpRead_26);

    /* Outputs for Atomic SubSystem: '<S416>/MinEngSpdCap' */
    /* Chart: '<S433>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_y_MinEngSpdCap_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_26) & 3U) != 0U)
    {
        /* Transition: '<S436>:100' */
        /* Transition: '<S436>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S436>:104' */
        /*  MM */
        if ((((uint32)tmpRead_26) & 4U) != 0U)
        {
            /* Transition: '<S436>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S436>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S436>:110' */
                /* Call Tmot */
                VeCRDB_y_MinEngSpdCap_CallStatus = 3U;

                /* Event: '<S436>:40' */
                /* Transition: '<S436>:115' */
                /* Transition: '<S436>:114' */
            }
        }
        else
        {
            /* Transition: '<S436>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_p) == 133)
            {
                /* Transition: '<S436>:95' */
                /* Transition: '<S436>:116' */
                /* Call Nothing */
                VeCRDB_y_MinEngSpdCap_CallStatus = 4U;

                /* Transition: '<S436>:114' */
            }
            else
            {
                /* Transition: '<S436>:120' */
                /* Transition: '<S436>:117' */
                /* Call Poke */
                VeCRDB_y_MinEngSpdCap_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S432>/Poke' */
                /* FunctionCaller: '<S438>/Function Caller' */
                /* Event: '<S436>:38' */
                Rte_Call_PokeESPR_n_EngSpdMinLim_PokeESPR_n_EngSpdMinLim
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_n_b);

                /* End of Outputs for SubSystem: '<S432>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S436>:111' */
        /* Call Fsft */
        VeCRDB_y_MinEngSpdCap_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S432>/Fsft' */
        /* FunctionCaller: '<S437>/Function Caller' */
        /* Event: '<S436>:39' */
        Rte_Call_FsftESPR_n_EngSpdMinLim_FsftESPR_n_EngSpdMinLim();

        /* End of Outputs for SubSystem: '<S432>/Fsft' */
        /* Transition: '<S436>:113' */
        /* Transition: '<S436>:115' */
        /* Transition: '<S436>:114' */
    }

    /* End of Chart: '<S433>/Chart' */
    /* End of Outputs for SubSystem: '<S416>/MinEngSpdCap' */
    /* End of Outputs for SubSystem: '<S8>/MinEngSpdCap' */
    /* Transition: '<S436>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_n_MinEngSpdCap' */

    /* SignalConversion generated from: '<S2>/VeSR1B_b_ServiceHybSys' incorporates:
     *  Inport: '<Root>/VeSR1B_y_ServiceHybSys_SigSts'
     */
#if Rte_SysCon_VrntCR4B_ServiceHybSys

    /* Outputs for Atomic SubSystem: '<S8>/ServiceHybSys' */
    /* SignalConversion generated from: '<S2>/VeSR1B_b_ServiceHybSys' incorporates:
     *  Inport: '<Root>/VeSR1B_b_ServiceHybSys'
     */
    rtb_TmpSignalConversionAtVeS_fc = Rte_Read_VeSR1B_b_ServiceHybSys_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_S);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S443>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeSR1B_y_ServiceHybSys_SigSts_Value(&tmpRead_27);

    /* Outputs for Atomic SubSystem: '<S417>/ServiceHybSys' */
    /* Chart: '<S440>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_y_ServiceHybSys_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_27) & 3U) != 0U)
    {
        /* Transition: '<S443>:100' */
        /* Transition: '<S443>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S443>:104' */
        /*  MM */
        if ((((uint32)tmpRead_27) & 4U) != 0U)
        {
            /* Transition: '<S443>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S443>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S443>:110' */
                /* Call Tmot */
                VeSR1B_y_ServiceHybSys_CallStatus = 3U;

                /* Event: '<S443>:40' */
                /* Transition: '<S443>:115' */
                /* Transition: '<S443>:114' */
            }
        }
        else
        {
            /* Transition: '<S443>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeS_fc) == 133)
            {
                /* Transition: '<S443>:95' */
                /* Transition: '<S443>:116' */
                /* Call Nothing */
                VeSR1B_y_ServiceHybSys_CallStatus = 4U;

                /* Transition: '<S443>:114' */
            }
            else
            {
                /* Transition: '<S443>:120' */
                /* Transition: '<S443>:117' */
                /* Call Poke */
                VeSR1B_y_ServiceHybSys_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S439>/Poke' */
                /* FunctionCaller: '<S445>/Function Caller' */
                /* Event: '<S443>:38' */
                Rte_Call_PokeHMIR_b_ServiceHybSys_PokeHMIR_b_ServiceHybSys
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_S);

                /* End of Outputs for SubSystem: '<S439>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S443>:111' */
        /* Call Fsft */
        VeSR1B_y_ServiceHybSys_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S439>/Fsft' */
        /* FunctionCaller: '<S444>/Function Caller' */
        /* Event: '<S443>:39' */
        Rte_Call_FsftHMIR_b_ServiceHybSys_FsftHMIR_b_ServiceHybSys();

        /* End of Outputs for SubSystem: '<S439>/Fsft' */
        /* Transition: '<S443>:113' */
        /* Transition: '<S443>:115' */
        /* Transition: '<S443>:114' */
    }

    /* End of Chart: '<S440>/Chart' */
    /* End of Outputs for SubSystem: '<S417>/ServiceHybSys' */
    /* End of Outputs for SubSystem: '<S8>/ServiceHybSys' */
    /* Transition: '<S443>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeSR1B_b_ServiceHybSys' */

    /* SignalConversion generated from: '<S2>/VeCRDB_b_MCPA_3PS_Pos_P' incorporates:
     *  Inport: '<Root>/VeCRDB_y_MCPA_3PS_Pos_P_SigSts'
     */
#if Rte_SysCon_VrntCR4B_MCPA3PSPosP

    /* Outputs for Atomic SubSystem: '<S13>/MCPA_3PS_Pos_P' */
    /* SignalConversion generated from: '<S2>/VeCRDB_b_MCPA_3PS_Pos_P' incorporates:
     *  Inport: '<Root>/VeCRDB_b_MCPA_3PS_Pos_P'
     */
    rtb_TmpSignalConversionAtVeC_ax = Rte_Read_VeCRDB_b_MCPA_3PS_Pos_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_M);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S472>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPA_3PS_Pos_P_SigSts_Value(&tmpRead_28);

    /* Outputs for Atomic SubSystem: '<S446>/MCPA_3PS_Pos_P' */
    /* Chart: '<S468>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_y_MCPA_3PS_Pos_P_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_28) & 3U) != 0U)
    {
        /* Transition: '<S472>:100' */
        /* Transition: '<S472>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S472>:104' */
        /*  MM */
        if ((((uint32)tmpRead_28) & 4U) != 0U)
        {
            /* Transition: '<S472>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S472>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S472>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPA_3PS_Pos_P_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S467>/Tmot' */
                /* FunctionCaller: '<S475>/Function Caller' */
                /* Event: '<S472>:40' */
                Rte_Call_TmotINVR_b_MtrCFlt_3PS_Pos_TmotINVR_b_MtrCFlt_3PS_Pos();

                /* End of Outputs for SubSystem: '<S467>/Tmot' */
                /* Transition: '<S472>:115' */
                /* Transition: '<S472>:114' */
            }
        }
        else
        {
            /* Transition: '<S472>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ax) == 133)
            {
                /* Transition: '<S472>:95' */
                /* Transition: '<S472>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPA_3PS_Pos_P_CallStatus = 4U;

                /* Transition: '<S472>:114' */
            }
            else
            {
                /* Transition: '<S472>:120' */
                /* Transition: '<S472>:117' */
                /* Call Poke */
                VeCRDB_y_MCPA_3PS_Pos_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S467>/Poke' */
                /* FunctionCaller: '<S474>/Function Caller' */
                /* Event: '<S472>:38' */
                Rte_Call_PokeINVR_b_MtrCFlt_3PS_Pos_PokeINVR_b_MtrCFlt_3PS_Pos
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_M);

                /* End of Outputs for SubSystem: '<S467>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S472>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPA_3PS_Pos_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S467>/Fsft' */
        /* FunctionCaller: '<S473>/Function Caller' */
        /* Event: '<S472>:39' */
        Rte_Call_FsftINVR_b_MtrCFlt_3PS_Pos_FsftINVR_b_MtrCFlt_3PS_Pos();

        /* End of Outputs for SubSystem: '<S467>/Fsft' */
        /* Transition: '<S472>:113' */
        /* Transition: '<S472>:115' */
        /* Transition: '<S472>:114' */
    }

    /* End of Chart: '<S468>/Chart' */
    /* End of Outputs for SubSystem: '<S446>/MCPA_3PS_Pos_P' */
    /* End of Outputs for SubSystem: '<S13>/MCPA_3PS_Pos_P' */
    /* Transition: '<S472>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_b_MCPA_3PS_Pos_P' */

    /* SignalConversion generated from: '<S2>/VeCRDB_y_MCPA_6SO_Status_P' */
#if (Rte_SysCon_VrntCR4B_MCPA6SOStatusP && Rte_SysCon_VrntCR4B_MCPA6SOStatusP_PokeINVRMtrA_6SOEnbl) || (Rte_SysCon_VrntCR4B_MCPA6SOStatusP && Rte_SysCon_VrntCR4B_MCPA6SOStatusP_PokeINVRMtrC_6SOEnbl)

    /* SignalConversion generated from: '<S2>/VeCRDB_y_MCPA_6SO_Status_P' incorporates:
     *  Inport: '<Root>/VeCRDB_y_MCPA_6SO_Status_P'
     */
    rtb_TmpSignalConversionAtVeCR_n = Rte_Read_VeCRDB_y_MCPA_6SO_Status_P_Value(
        &CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_m);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_y_MCPA_6SO_Status_P' */
#if Rte_SysCon_VrntCR4B_MCPA6SOStatusP

    /* Outputs for Atomic SubSystem: '<S13>/MCPA_6SO_Status_P' */
    /* Inport: '<Root>/VeCRDB_y_MCPA_6SO_Status_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S480>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPA_6SO_Status_P_SigSts_Value(&tmpRead_29);

    /* Outputs for Atomic SubSystem: '<S447>/MCPA_6SO_Status_P' */
    /* Chart: '<S477>/Chart' */
    if ((((uint32)tmpRead_29) & 3U) != 0U)
    {
        /* Transition: '<S480>:100' */
        /* Transition: '<S480>:103' */
        /* Transition: '<S480>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPA_6SO_Status_P_CallStatus = 2U;

        /* Event: '<S480>:39' */
        /* Transition: '<S480>:113' */
        /* Transition: '<S480>:115' */
        /* Transition: '<S480>:114' */
    }
    else
    {
        /* Transition: '<S480>:104' */
        /*  MM */
        if ((((uint32)tmpRead_29) & 4U) != 0U)
        {
            /* Transition: '<S480>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S480>:88' */
                /* Transition: '<S480>:111' */
                /* Call Fsft */
                VeCRDB_y_MCPA_6SO_Status_P_CallStatus = 2U;

                /* Event: '<S480>:39' */
                /* Transition: '<S480>:113' */
                /* Transition: '<S480>:115' */
                /* Transition: '<S480>:114' */
            }
            else
            {
                /* Transition: '<S480>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPA_6SO_Status_P_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S476>/Tmot' */
                /* Event: '<S480>:40' */
#if Rte_SysCon_VrntCR4B_MCPA6SOStatusP_TmotINVRMtrA_6SOEnbl

                /* Outputs for Atomic SubSystem: '<S479>/MCPA6SOStatusP_TmotINVRMtrA_6SOEnbl' */
                /* Outputs for Atomic SubSystem: '<S485>/Timeout' */
                /* FunctionCaller: '<S487>/Function Caller' */
                Rte_Call_TmotINVR_b_MtrA_6SOEnbl_TmotINVR_b_MtrA_6SOEnbl();

                /* End of Outputs for SubSystem: '<S485>/Timeout' */
                /* End of Outputs for SubSystem: '<S479>/MCPA6SOStatusP_TmotINVRMtrA_6SOEnbl' */
#endif

#if Rte_SysCon_VrntCR4B_MCPA6SOStatusP_TmotINVRMtrC_6SOEnbl

                /* Outputs for Atomic SubSystem: '<S479>/MCPA6SOStatusP_TmotINVRMtrC_6SOEnbl' */
                /* Outputs for Atomic SubSystem: '<S486>/Timeout1' */
                /* FunctionCaller: '<S488>/Function Caller' */
                Rte_Call_TmotINVR_b_MtrC_6SOEnbl_TmotINVR_b_MtrC_6SOEnbl();

                /* End of Outputs for SubSystem: '<S486>/Timeout1' */
                /* End of Outputs for SubSystem: '<S479>/MCPA6SOStatusP_TmotINVRMtrC_6SOEnbl' */
#endif

                /* End of Outputs for SubSystem: '<S476>/Tmot' */
                /* Transition: '<S480>:115' */
                /* Transition: '<S480>:114' */
            }
        }
        else
        {
            /* Transition: '<S480>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_n) == 133)
            {
                /* Transition: '<S480>:95' */
                /* Transition: '<S480>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPA_6SO_Status_P_CallStatus = 4U;

                /* Transition: '<S480>:114' */
            }
            else
            {
                /* Transition: '<S480>:120' */
                if ((((uint32)tmpRead_29) & 8U) != 0U)
                {
                    /* Transition: '<S480>:122' */
                    /* Transition: '<S480>:125' */
                    FA_out_gb = true;

                    /* Transition: '<S480>:126' */
                }
                else
                {
                    /* Transition: '<S480>:124' */
                    FA_out_gb = false;
                }

                /* Transition: '<S480>:117' */
                /* Call Poke */
                VeCRDB_y_MCPA_6SO_Status_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S476>/Poke' */
                /* Event: '<S480>:38' */
#if Rte_SysCon_VrntCR4B_MCPA6SOStatusP_PokeINVRMtrA_6SOEnbl

                /* Outputs for Atomic SubSystem: '<S478>/MCPA6SOStatusP_PokeINVRMtrA_6SOEnbl' */
                /* Outputs for Atomic SubSystem: '<S481>/Poke' */
                /* FunctionCaller: '<S483>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S483>/Data Type Conversion'
                 */
                Rte_Call_PokeINVR_e_MtrA_6SOEnbl_PokeINVR_e_MtrA_6SOEnbl((sint16)
                    CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_m, FA_out_gb);

                /* End of Outputs for SubSystem: '<S481>/Poke' */
                /* End of Outputs for SubSystem: '<S478>/MCPA6SOStatusP_PokeINVRMtrA_6SOEnbl' */
#endif

#if Rte_SysCon_VrntCR4B_MCPA6SOStatusP_PokeINVRMtrC_6SOEnbl

                /* Outputs for Atomic SubSystem: '<S478>/MCPA6SOStatusP_PokeINVRMtrC_6SOEnbl' */
                /* Outputs for Atomic SubSystem: '<S482>/Poke1' */
                /* FunctionCaller: '<S484>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S484>/Data Type Conversion'
                 */
                Rte_Call_PokeINVR_e_MtrC_6SOEnbl_PokeINVR_e_MtrC_6SOEnbl((sint16)
                    CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_m, FA_out_gb);

                /* End of Outputs for SubSystem: '<S482>/Poke1' */
                /* End of Outputs for SubSystem: '<S478>/MCPA6SOStatusP_PokeINVRMtrC_6SOEnbl' */
#endif

                /* End of Outputs for SubSystem: '<S476>/Poke' */
            }
        }
    }

    /* End of Chart: '<S477>/Chart' */
    /* End of Outputs for SubSystem: '<S447>/MCPA_6SO_Status_P' */
    /* End of Outputs for SubSystem: '<S13>/MCPA_6SO_Status_P' */
    /* Transition: '<S480>:107' */
#endif

    /* SignalConversion generated from: '<S2>/VeCRDB_y_MCPA_AccelRaw_P' incorporates:
     *  SignalConversion generated from: '<S2>/VeSR1B_b_MCPA_AccelRawV_P_FD16'
     */
#if (Rte_SysCon_VrntCR4B_MCPAAccelRawP && Rte_SysCon_VrntCR4B_MCPAAccelRawP_PokeMSPRMtrA_AccelRaw) || (Rte_SysCon_VrntCR4B_MCPAAccelRawP && Rte_SysCon_VrntCR4B_MCPAAccelRawP_PokeMSPRMtrC_AccelRaw)

    /* SignalConversion generated from: '<S2>/VeCRDB_y_MCPA_AccelRaw_P' incorporates:
     *  Inport: '<Root>/VeCRDB_y_MCPA_AccelRaw_P'
     */
    rtb_TmpSignalConversionAtVeCR_k = Rte_Read_VeCRDB_y_MCPA_AccelRaw_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_M);

    /* SignalConversion generated from: '<S2>/VeSR1B_b_MCPA_AccelRawV_P_FD16' incorporates:
     *  Inport: '<Root>/VeSR1B_b_MCPA_AccelRawV_P_FD16'
     */
    (void)Rte_Read_VeSR1B_b_MCPA_AccelRawV_P_FD16_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_l);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_y_MCPA_AccelRaw_P' */
#if Rte_SysCon_VrntCR4B_MCPAAccelRawP

    /* Outputs for Atomic SubSystem: '<S13>/MCPA_AccelRaw_P' */
    /* Inport: '<Root>/VeCRDB_y_MCPA_AccelRaw_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S494>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPA_AccelRaw_P_SigSts_Value(&tmpRead_2a);

    /* Outputs for Atomic SubSystem: '<S448>/MCPA_AccelRaw_P' */
    /* Chart: '<S490>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2a) & 3U) != 0U)
    {
        /* Transition: '<S494>:100' */
        /* Transition: '<S494>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S494>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2a) & 4U) != 0U)
        {
            /* Transition: '<S494>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S494>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S494>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPA_AccelRaw_P_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S489>/Tmot' */
                /* Event: '<S494>:40' */
#if Rte_SysCon_VrntCR4B_MCPAAccelRawP_TmotMSPRMtrA_AccelRaw

                /* Outputs for Atomic SubSystem: '<S493>/MCPAAccelRawP_TmotMSPRMtrA_AccelRaw' */
                /* Outputs for Atomic SubSystem: '<S503>/Timeout' */
                /* FunctionCaller: '<S505>/Function Caller' */
                Rte_Call_TmotMSPR_b_MtrA_AccelRaw_TmotMSPR_b_MtrA_AccelRaw();

                /* End of Outputs for SubSystem: '<S503>/Timeout' */
                /* End of Outputs for SubSystem: '<S493>/MCPAAccelRawP_TmotMSPRMtrA_AccelRaw' */
#endif

#if Rte_SysCon_VrntCR4B_MCPAAccelRawP_TmotMSPRMtrC_AccelRaw

                /* Outputs for Atomic SubSystem: '<S493>/MCPAAccelRawP_TmotMSPRMtrC_AccelRaw' */
                /* Outputs for Atomic SubSystem: '<S504>/Timeout1' */
                /* FunctionCaller: '<S506>/Function Caller' */
                Rte_Call_TmotMSPR_b_MtrC_AccelRaw_TmotMSPR_b_MtrC_AccelRaw();

                /* End of Outputs for SubSystem: '<S504>/Timeout1' */
                /* End of Outputs for SubSystem: '<S493>/MCPAAccelRawP_TmotMSPRMtrC_AccelRaw' */
#endif

                /* End of Outputs for SubSystem: '<S489>/Tmot' */
                /* Transition: '<S494>:115' */
                /* Transition: '<S494>:114' */
            }
        }
        else
        {
            /* Transition: '<S494>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_k) == 133)
            {
                /* Transition: '<S494>:95' */
                /* Transition: '<S494>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPA_AccelRaw_P_CallStatus = 4U;

                /* Transition: '<S494>:114' */
            }
            else
            {
                /* Transition: '<S494>:120' */
                /* Transition: '<S494>:117' */
                /* Call Poke */
                VeCRDB_y_MCPA_AccelRaw_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S489>/Poke' */
                /* Event: '<S494>:38' */
#if Rte_SysCon_VrntCR4B_MCPAAccelRawP_PokeMSPRMtrA_AccelRaw

                /* Outputs for Atomic SubSystem: '<S492>/MCPAAccelRawP_PokeMSPRMtrA_AccelRaw' */
                /* Outputs for Atomic SubSystem: '<S499>/Poke' */
                /* FunctionCaller: '<S501>/Function Caller' */
                Rte_Call_PokeMSPR_dn_MtrA_AccelRaw_PokeMSPR_dn_MtrA_AccelRaw
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_M,
                     CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_l);

                /* End of Outputs for SubSystem: '<S499>/Poke' */
                /* End of Outputs for SubSystem: '<S492>/MCPAAccelRawP_PokeMSPRMtrA_AccelRaw' */
#endif

#if Rte_SysCon_VrntCR4B_MCPAAccelRawP_PokeMSPRMtrC_AccelRaw

                /* Outputs for Atomic SubSystem: '<S492>/MCPAAccelRawP_PokeMSPRMtrC_AccelRaw' */
                /* Outputs for Atomic SubSystem: '<S500>/Poke1' */
                /* FunctionCaller: '<S502>/Function Caller' */
                Rte_Call_PokeMSPR_dn_MtrC_AccelRaw_PokeMSPR_dn_MtrC_AccelRaw
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_M,
                     CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_b_l);

                /* End of Outputs for SubSystem: '<S500>/Poke1' */
                /* End of Outputs for SubSystem: '<S492>/MCPAAccelRawP_PokeMSPRMtrC_AccelRaw' */
#endif

                /* End of Outputs for SubSystem: '<S489>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S494>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPA_AccelRaw_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S489>/Fsft' */
        /* Event: '<S494>:39' */
#if Rte_SysCon_VrntCR4B_MCPAAccelRawP_FsftMSPRMtrA_AccelRaw

        /* Outputs for Atomic SubSystem: '<S491>/MCPAAccelRawP_FsftMSPRMtrA_AccelRaw' */
        /* Outputs for Atomic SubSystem: '<S495>/Failsoft' */
        /* FunctionCaller: '<S497>/Function Caller' */
        Rte_Call_FsftMSPR_dn_MtrA_AccelRaw_FsftMSPR_dn_MtrA_AccelRaw();

        /* End of Outputs for SubSystem: '<S495>/Failsoft' */
        /* End of Outputs for SubSystem: '<S491>/MCPAAccelRawP_FsftMSPRMtrA_AccelRaw' */
#endif

#if Rte_SysCon_VrntCR4B_MCPAAccelRawP_FsftMSPRMtrC_AccelRaw

        /* Outputs for Atomic SubSystem: '<S491>/MCPAAccelRawP_FsftMSPRMtrC_AccelRaw' */
        /* Outputs for Atomic SubSystem: '<S496>/Failsoft1' */
        /* FunctionCaller: '<S498>/Function Caller' */
        Rte_Call_FsftMSPR_dn_MtrC_AccelRaw_FsftMSPR_dn_MtrC_AccelRaw();

        /* End of Outputs for SubSystem: '<S496>/Failsoft1' */
        /* End of Outputs for SubSystem: '<S491>/MCPAAccelRawP_FsftMSPRMtrC_AccelRaw' */
#endif

        /* End of Outputs for SubSystem: '<S489>/Fsft' */
        /* Transition: '<S494>:113' */
        /* Transition: '<S494>:115' */
        /* Transition: '<S494>:114' */
    }

    /* End of Chart: '<S490>/Chart' */
    /* End of Outputs for SubSystem: '<S448>/MCPA_AccelRaw_P' */
    /* End of Outputs for SubSystem: '<S13>/MCPA_AccelRaw_P' */
    /* Transition: '<S494>:107' */
#endif

    /* SignalConversion generated from: '<S2>/VeCRDB_n_MCPA_CpbltySpdDvVolt_P' */
#if (Rte_SysCon_VrntCR4B_MCPACpbltySpdDivVoltP && Rte_SysCon_VrntCR4B_MCPACpbltySpdDivVoltP_PokeMTIRMtrACapabilitySpd) || (Rte_SysCon_VrntCR4B_MCPACpbltySpdDivVoltP && Rte_SysCon_VrntCR4B_MCPACpbltySpdDivVoltP_PokeMTIRMtrCCapabilitySpd)

    /* SignalConversion generated from: '<S2>/VeCRDB_n_MCPA_CpbltySpdDvVolt_P' incorporates:
     *  Inport: '<Root>/VeCRDB_n_MCPA_CpbltySpdDvVolt_P'
     */
    rtb_TmpSignalConversionAtVeCR_h =
        Rte_Read_VeCRDB_n_MCPA_CpbltySpdDvVolt_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_n_j);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_n_MCPA_CpbltySpdDvVolt_P' */

    /* SignalConversion generated from: '<S2>/VeSR1B_y_MCPA_MtrIndex_P_FD16' */
#if (Rte_SysCon_VrntCR4B_MCPACpbltySpdDivVoltP && Rte_SysCon_VrntCR4B_MCPACpbltySpdDivVoltP_PokeMTIRMtrACapabilitySpd) || (Rte_SysCon_VrntCR4B_MCPACpbltySpdDivVoltP && Rte_SysCon_VrntCR4B_MCPACpbltySpdDivVoltP_PokeMTIRMtrCCapabilitySpd) || (Rte_SysCon_VrntCR4B_MCPAMtrMaxCpbltyTrqP && Rte_SysCon_VrntCR4B_MCPAMtrMaxCpbltyTrqP_PokeMTIRMtrACapabilityMax) || (Rte_SysCon_VrntCR4B_MCPAMtrMaxCpbltyTrqP && Rte_SysCon_VrntCR4B_MCPAMtrMaxCpbltyTrqP_PokeMTIRMtrCCapabilityMax) || (Rte_SysCon_VrntCR4B_MCPAMtrMinCpbltyTrqP && Rte_SysCon_VrntCR4B_MCPAMtrMinCpbltyTrqP_PokeMTIRMtrACapabilityMin) || (Rte_SysCon_VrntCR4B_MCPAMtrMinCpbltyTrqP && Rte_SysCon_VrntCR4B_MCPAMtrMinCpbltyTrqP_PokeMTIRMtrCCapabilityMin)

    /* SignalConversion generated from: '<S2>/VeSR1B_y_MCPA_MtrIndex_P_FD16' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MCPA_MtrIndex_P_FD16'
     */
    (void)Rte_Read_VeSR1B_y_MCPA_MtrIndex_P_FD16_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_j);

#endif

    /* End of SignalConversion generated from: '<S2>/VeSR1B_y_MCPA_MtrIndex_P_FD16' */
#if Rte_SysCon_VrntCR4B_MCPACpbltySpdDivVoltP

    /* Outputs for Atomic SubSystem: '<S13>/MCPA_CpbltySpdDivVolt_P' */
    /* Inport: '<Root>/VeCRDB_y_MCPA_CpbltySpdDvVolt_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S511>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPA_CpbltySpdDvVolt_P_SigSts_Value(&tmpRead_2b);

    /* Outputs for Atomic SubSystem: '<S449>/MCPA_CpbltySpdDivVolt_P' */
    /* Chart: '<S508>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2b) & 3U) != 0U)
    {
        /* Transition: '<S511>:100' */
        /* Transition: '<S511>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S511>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2b) & 4U) != 0U)
        {
            /* Transition: '<S511>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S511>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S511>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPA_CpbltySpdDvVolt_P_CallStatus = 3U;

                /* Event: '<S511>:40' */
                /* Transition: '<S511>:115' */
                /* Transition: '<S511>:114' */
            }
        }
        else
        {
            /* Transition: '<S511>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_h) == 133)
            {
                /* Transition: '<S511>:95' */
                /* Transition: '<S511>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPA_CpbltySpdDvVolt_P_CallStatus = 4U;

                /* Transition: '<S511>:114' */
            }
            else
            {
                /* Transition: '<S511>:120' */
                /* Transition: '<S511>:117' */
                /* Call Poke */
                VeCRDB_y_MCPA_CpbltySpdDvVolt_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S507>/Poke' */
                /* Event: '<S511>:38' */
#if Rte_SysCon_VrntCR4B_MCPACpbltySpdDivVoltP_PokeMTIRMtrACapabilitySpd

                /* Outputs for Atomic SubSystem: '<S510>/MCPACpbltySpdDivVoltP_PokeMTIRMtrACapabilitySpd' */
                /* Outputs for Atomic SubSystem: '<S516>/Poke' */
                /* FunctionCaller: '<S518>/Function Caller' */
                Rte_Call_PokeMTIR_n_MtrACapabilitySpd_PokeMTIR_n_MtrACapabilitySpd
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_n_j,
                     CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_j);

                /* End of Outputs for SubSystem: '<S516>/Poke' */
                /* End of Outputs for SubSystem: '<S510>/MCPACpbltySpdDivVoltP_PokeMTIRMtrACapabilitySpd' */
#endif

#if Rte_SysCon_VrntCR4B_MCPACpbltySpdDivVoltP_PokeMTIRMtrCCapabilitySpd

                /* Outputs for Atomic SubSystem: '<S510>/MCPACpbltySpdDivVoltP_PokeMTIRMtrCCapabilitySpd' */
                /* Outputs for Atomic SubSystem: '<S517>/Poke1' */
                /* FunctionCaller: '<S519>/Function Caller' */
                Rte_Call_PokeMTIR_n_MtrCCapabilitySpd_PokeMTIR_n_MtrCCapabilitySpd
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_n_j,
                     CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_j);

                /* End of Outputs for SubSystem: '<S517>/Poke1' */
                /* End of Outputs for SubSystem: '<S510>/MCPACpbltySpdDivVoltP_PokeMTIRMtrCCapabilitySpd' */
#endif

                /* End of Outputs for SubSystem: '<S507>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S511>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPA_CpbltySpdDvVolt_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S507>/Fsft' */
        /* Event: '<S511>:39' */
#if Rte_SysCon_VrntCR4B_MCPACpbltySpdDivVoltP_FsftMTIRMtrACapabilitySpd

        /* Outputs for Atomic SubSystem: '<S509>/MCPACpbltySpdDivVoltP_FsftMTIRMtrACapabilitySpd' */
        /* Outputs for Atomic SubSystem: '<S512>/Failsoft' */
        /* FunctionCaller: '<S514>/Function Caller' */
        Rte_Call_FsftMTIR_n_MtrACapabilitySpd_FsftMTIR_n_MtrACapabilitySpd();

        /* End of Outputs for SubSystem: '<S512>/Failsoft' */
        /* End of Outputs for SubSystem: '<S509>/MCPACpbltySpdDivVoltP_FsftMTIRMtrACapabilitySpd' */
#endif

#if Rte_SysCon_VrntCR4B_MCPACpbltySpdDivVoltP_FsftMTIRMtrCCapabilitySpd

        /* Outputs for Atomic SubSystem: '<S509>/MCPACpbltySpdDivVoltP_FsftMTIRMtrCCapabilitySpd' */
        /* Outputs for Atomic SubSystem: '<S513>/Failsoft1' */
        /* FunctionCaller: '<S515>/Function Caller' */
        Rte_Call_FsftMTIR_n_MtrCCapabilitySpd_FsftMTIR_n_MtrCCapabilitySpd();

        /* End of Outputs for SubSystem: '<S513>/Failsoft1' */
        /* End of Outputs for SubSystem: '<S509>/MCPACpbltySpdDivVoltP_FsftMTIRMtrCCapabilitySpd' */
#endif

        /* End of Outputs for SubSystem: '<S507>/Fsft' */
        /* Transition: '<S511>:113' */
        /* Transition: '<S511>:115' */
        /* Transition: '<S511>:114' */
    }

    /* End of Chart: '<S508>/Chart' */
    /* End of Outputs for SubSystem: '<S449>/MCPA_CpbltySpdDivVolt_P' */
    /* End of Outputs for SubSystem: '<S13>/MCPA_CpbltySpdDivVolt_P' */
    /* Transition: '<S511>:107' */
#endif

    /* SignalConversion generated from: '<S2>/VeCRDB_h_MCPA_DeratingFactor_P' */
#if (Rte_SysCon_VrntCR4B_MCPADeratingFactorP && Rte_SysCon_VrntCR4B_MCPADeratingFactorP_PokeMTIRMtrADeratingFactor) || (Rte_SysCon_VrntCR4B_MCPADeratingFactorP && Rte_SysCon_VrntCR4B_MCPADeratingFactorP_PokeMTIRMtrCDeratingFactor)

    /* SignalConversion generated from: '<S2>/VeCRDB_h_MCPA_DeratingFactor_P' incorporates:
     *  Inport: '<Root>/VeCRDB_h_MCPA_DeratingFactor_P'
     */
    rtb_TmpSignalConversionAtVeC_ao =
        Rte_Read_VeCRDB_h_MCPA_DeratingFactor_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_h_M);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_h_MCPA_DeratingFactor_P' */
#if Rte_SysCon_VrntCR4B_MCPADeratingFactorP

    /* Outputs for Atomic SubSystem: '<S13>/MCPA_DeratingFactor_P' */
    /* Inport: '<Root>/VeCRDB_y_MCPA_DeratingFactor_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S524>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPA_DeratingFactor_P_SigSts_Value(&tmpRead_2c);

    /* Outputs for Atomic SubSystem: '<S450>/MCPA_DeratingFactor_P' */
    /* Chart: '<S521>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2c) & 3U) != 0U)
    {
        /* Transition: '<S524>:100' */
        /* Transition: '<S524>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S524>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2c) & 4U) != 0U)
        {
            /* Transition: '<S524>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S524>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S524>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPA_DeratingFactor_P_CallStatus = 3U;

                /* Event: '<S524>:40' */
                /* Transition: '<S524>:115' */
                /* Transition: '<S524>:114' */
            }
        }
        else
        {
            /* Transition: '<S524>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ao) == 133)
            {
                /* Transition: '<S524>:95' */
                /* Transition: '<S524>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPA_DeratingFactor_P_CallStatus = 4U;

                /* Transition: '<S524>:114' */
            }
            else
            {
                /* Transition: '<S524>:120' */
                /* Transition: '<S524>:117' */
                /* Call Poke */
                VeCRDB_y_MCPA_DeratingFactor_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S520>/Poke' */
                /* Event: '<S524>:38' */
#if Rte_SysCon_VrntCR4B_MCPADeratingFactorP_PokeMTIRMtrADeratingFactor

                /* Outputs for Atomic SubSystem: '<S523>/MCPADeratingFactorP_PokeMTIRMtrADeratingFactor' */
                /* Outputs for Atomic SubSystem: '<S529>/Poke' */
                /* FunctionCaller: '<S531>/Function Caller' */
                Rte_Call_PokeMTIR_k_MtrADeratingFactor_PokeMTIR_k_MtrADeratingFactor
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_h_M);

                /* End of Outputs for SubSystem: '<S529>/Poke' */
                /* End of Outputs for SubSystem: '<S523>/MCPADeratingFactorP_PokeMTIRMtrADeratingFactor' */
#endif

#if Rte_SysCon_VrntCR4B_MCPADeratingFactorP_PokeMTIRMtrCDeratingFactor

                /* Outputs for Atomic SubSystem: '<S523>/MCPADeratingFactorP_PokeMTIRMtrCDeratingFactor' */
                /* Outputs for Atomic SubSystem: '<S530>/Poke1' */
                /* FunctionCaller: '<S532>/Function Caller' */
                Rte_Call_PokeMTIR_k_MtrCDeratingFactor_PokeMTIR_k_MtrCDeratingFactor
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_h_M);

                /* End of Outputs for SubSystem: '<S530>/Poke1' */
                /* End of Outputs for SubSystem: '<S523>/MCPADeratingFactorP_PokeMTIRMtrCDeratingFactor' */
#endif

                /* End of Outputs for SubSystem: '<S520>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S524>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPA_DeratingFactor_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S520>/Fsft' */
        /* Event: '<S524>:39' */
#if Rte_SysCon_VrntCR4B_MCPADeratingFactorP_FsftMTIRMtrADeratingFactor

        /* Outputs for Atomic SubSystem: '<S522>/MCPADeratingFactorP_FsftMTIRMtrADeratingFactor' */
        /* Outputs for Atomic SubSystem: '<S525>/Failsoft' */
        /* FunctionCaller: '<S527>/Function Caller' */
        Rte_Call_FsftMTIR_k_MtrADeratingFactor_FsftMTIR_k_MtrADeratingFactor();

        /* End of Outputs for SubSystem: '<S525>/Failsoft' */
        /* End of Outputs for SubSystem: '<S522>/MCPADeratingFactorP_FsftMTIRMtrADeratingFactor' */
#endif

#if Rte_SysCon_VrntCR4B_MCPADeratingFactorP_FsftMTIRMtrCDeratingFactor

        /* Outputs for Atomic SubSystem: '<S522>/MCPADeratingFactorP_FsftMTIRMtrCDeratingFactor' */
        /* Outputs for Atomic SubSystem: '<S526>/Failsoft1' */
        /* FunctionCaller: '<S528>/Function Caller' */
        Rte_Call_FsftMTIR_k_MtrCDeratingFactor_FsftMTIR_k_MtrCDeratingFactor();

        /* End of Outputs for SubSystem: '<S526>/Failsoft1' */
        /* End of Outputs for SubSystem: '<S522>/MCPADeratingFactorP_FsftMTIRMtrCDeratingFactor' */
#endif

        /* End of Outputs for SubSystem: '<S520>/Fsft' */
        /* Transition: '<S524>:113' */
        /* Transition: '<S524>:115' */
        /* Transition: '<S524>:114' */
    }

    /* End of Chart: '<S521>/Chart' */
    /* End of Outputs for SubSystem: '<S450>/MCPA_DeratingFactor_P' */
    /* End of Outputs for SubSystem: '<S13>/MCPA_DeratingFactor_P' */
    /* Transition: '<S524>:107' */
#endif

    /* SignalConversion generated from: '<S2>/VeCRDB_y_MCPA_Dschrge_Status_P' */
#if (Rte_SysCon_VrntCR4B_MCPADschrgeStatusP && Rte_SysCon_VrntCR4B_MCPADschrgeStatusP_PokeINVRMtrA_Dschrge_Stat) || (Rte_SysCon_VrntCR4B_MCPADschrgeStatusP && Rte_SysCon_VrntCR4B_MCPADschrgeStatusP_PokeINVRMtrC_Dschrge_Stat)

    /* SignalConversion generated from: '<S2>/VeCRDB_y_MCPA_Dschrge_Status_P' incorporates:
     *  Inport: '<Root>/VeCRDB_y_MCPA_Dschrge_Status_P'
     */
    rtb_TmpSignalConversionAtVeCR_g =
        Rte_Read_VeCRDB_y_MCPA_Dschrge_Status_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_d);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_y_MCPA_Dschrge_Status_P' */
#if Rte_SysCon_VrntCR4B_MCPADschrgeStatusP

    /* Outputs for Atomic SubSystem: '<S13>/MCPA_Dschrge_Status_P' */
    /* Inport: '<Root>/VeCRDB_y_MCPA_Dschrge_Status_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S537>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPA_Dschrge_Status_P_SigSts_Value(&tmpRead_2d);

    /* Outputs for Atomic SubSystem: '<S451>/MCPA_Dschrge_Status_P' */
    /* Chart: '<S534>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2d) & 3U) != 0U)
    {
        /* Transition: '<S537>:100' */
        /* Transition: '<S537>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S537>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2d) & 4U) != 0U)
        {
            /* Transition: '<S537>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S537>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S537>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPA_Dschrge_Status_P_CallStatus = 3U;

                /* Event: '<S537>:40' */
                /* Transition: '<S537>:115' */
                /* Transition: '<S537>:114' */
            }
        }
        else
        {
            /* Transition: '<S537>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_g) == 133)
            {
                /* Transition: '<S537>:95' */
                /* Transition: '<S537>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPA_Dschrge_Status_P_CallStatus = 4U;

                /* Transition: '<S537>:114' */
            }
            else
            {
                /* Transition: '<S537>:120' */
                if ((((uint32)tmpRead_2d) & 8U) != 0U)
                {
                    /* Transition: '<S537>:122' */
                    /* Transition: '<S537>:125' */
                    FA_out_gb = true;

                    /* Transition: '<S537>:126' */
                }
                else
                {
                    /* Transition: '<S537>:124' */
                    FA_out_gb = false;
                }

                /* Transition: '<S537>:117' */
                /* Call Poke */
                VeCRDB_y_MCPA_Dschrge_Status_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S533>/Poke' */
                /* Event: '<S537>:38' */
#if Rte_SysCon_VrntCR4B_MCPADschrgeStatusP_PokeINVRMtrA_Dschrge_Stat

                /* Outputs for Atomic SubSystem: '<S536>/MCPADschrgeStatusP_PokeINVRMtrA_Dschrge_Stat' */
                /* Outputs for Atomic SubSystem: '<S542>/Poke' */
                /* FunctionCaller: '<S544>/Function Caller' incorporates:
                 *  Constant: '<S544>/Constant'
                 *  DataTypeConversion: '<S544>/Data Type Conversion'
                 */
                Rte_Call_PokeINVR_e_MtrA_Dschrge_Stat_PokeINVR_e_MtrA_Dschrge_Stat
                    ((sint16)CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_d,
                     false);

                /* End of Outputs for SubSystem: '<S542>/Poke' */
                /* End of Outputs for SubSystem: '<S536>/MCPADschrgeStatusP_PokeINVRMtrA_Dschrge_Stat' */
#endif

#if Rte_SysCon_VrntCR4B_MCPADschrgeStatusP_PokeINVRMtrC_Dschrge_Stat

                /* Outputs for Atomic SubSystem: '<S536>/MCPADschrgeStatusP_PokeINVRMtrC_Dschrge_Stat' */
                /* Outputs for Atomic SubSystem: '<S543>/Poke1' */
                /* FunctionCaller: '<S545>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S545>/Data Type Conversion'
                 */
                Rte_Call_PokeINVR_e_MtrC_Dschrge_Stat_PokeINVR_e_MtrC_Dschrge_Stat
                    ((sint16)CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_d,
                     FA_out_gb);

                /* End of Outputs for SubSystem: '<S543>/Poke1' */
                /* End of Outputs for SubSystem: '<S536>/MCPADschrgeStatusP_PokeINVRMtrC_Dschrge_Stat' */
#endif

                /* End of Outputs for SubSystem: '<S533>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S537>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPA_Dschrge_Status_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S533>/Fsft' */
        /* Event: '<S537>:39' */
#if Rte_SysCon_VrntCR4B_MCPADschrgeStatusP_FsftINVRMtrA_Dschrge_Stat

        /* Outputs for Atomic SubSystem: '<S535>/MCPADschrgeStatusP_FsftINVRMtrA_Dschrge_Stat' */
        /* Outputs for Atomic SubSystem: '<S538>/Failsoft' */
        /* FunctionCaller: '<S540>/Function Caller' */
        Rte_Call_FsftINVR_e_MtrA_Dschrge_Stat_FsftINVR_e_MtrA_Dschrge_Stat();

        /* End of Outputs for SubSystem: '<S538>/Failsoft' */
        /* End of Outputs for SubSystem: '<S535>/MCPADschrgeStatusP_FsftINVRMtrA_Dschrge_Stat' */
#endif

#if Rte_SysCon_VrntCR4B_MCPADschrgeStatusP_FsftINVRMtrC_Dschrge_Stat

        /* Outputs for Atomic SubSystem: '<S535>/MCPADschrgeStatusP_FsftINVRMtrC_Dschrge_Stat' */
        /* Outputs for Atomic SubSystem: '<S539>/Failsoft1' */
        /* FunctionCaller: '<S541>/Function Caller' */
        Rte_Call_FsftINVR_e_MtrC_Dschrge_Stat_FsftINVR_e_MtrC_Dschrge_Stat();

        /* End of Outputs for SubSystem: '<S539>/Failsoft1' */
        /* End of Outputs for SubSystem: '<S535>/MCPADschrgeStatusP_FsftINVRMtrC_Dschrge_Stat' */
#endif

        /* End of Outputs for SubSystem: '<S533>/Fsft' */
        /* Transition: '<S537>:113' */
        /* Transition: '<S537>:115' */
        /* Transition: '<S537>:114' */
    }

    /* End of Chart: '<S534>/Chart' */
    /* End of Outputs for SubSystem: '<S451>/MCPA_Dschrge_Status_P' */
    /* End of Outputs for SubSystem: '<S13>/MCPA_Dschrge_Status_P' */
    /* Transition: '<S537>:107' */
#endif

    /* SignalConversion generated from: '<S2>/VeCRDB_b_MCPA_HV_CnctrOpn_Req_P' */
#if (Rte_SysCon_VrntCR4B_MCPAHVCnctrOpnReqP && Rte_SysCon_VrntCR4B_MCPAHVCnctrOpnReqP_PokeINVRMtrAFlt_HV_CntctrOpnRq) || (Rte_SysCon_VrntCR4B_MCPAHVCnctrOpnReqP && Rte_SysCon_VrntCR4B_MCPAHVCnctrOpnReqP_PokeINVRMtrCFlt_HV_CntctrOpnRq)

    /* SignalConversion generated from: '<S2>/VeCRDB_b_MCPA_HV_CnctrOpn_Req_P' incorporates:
     *  Inport: '<Root>/VeCRDB_b_MCPA_HV_CnctrOpn_Req_P'
     */
    rtb_TmpSignalConversionAtVeC_kv =
        Rte_Read_VeCRDB_b_MCPA_HV_CnctrOpn_Req_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_l);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_b_MCPA_HV_CnctrOpn_Req_P' */
#if Rte_SysCon_VrntCR4B_MCPAHVCnctrOpnReqP

    /* Outputs for Atomic SubSystem: '<S13>/MCPA_HV_CnctrOpn_Req_P' */
    /* Inport: '<Root>/VeCRDB_y_MCPA_HV_CnctrOpn_Req_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S550>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPA_HV_CnctrOpn_Req_P_SigSts_Value(&tmpRead_2e);

    /* Outputs for Atomic SubSystem: '<S452>/MCPA_HV_CnctrOpn_Req_P' */
    /* Chart: '<S547>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2e) & 3U) != 0U)
    {
        /* Transition: '<S550>:100' */
        /* Transition: '<S550>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S550>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2e) & 4U) != 0U)
        {
            /* Transition: '<S550>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S550>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S550>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPA_HV_CnctrOpn_Req_P_CallStatus = 3U;

                /* Event: '<S550>:40' */
                /* Transition: '<S550>:115' */
                /* Transition: '<S550>:114' */
            }
        }
        else
        {
            /* Transition: '<S550>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_kv) == 133)
            {
                /* Transition: '<S550>:95' */
                /* Transition: '<S550>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPA_HV_CnctrOpn_Req_P_CallStatus = 4U;

                /* Transition: '<S550>:114' */
            }
            else
            {
                /* Transition: '<S550>:120' */
                /* Transition: '<S550>:117' */
                /* Call Poke */
                VeCRDB_y_MCPA_HV_CnctrOpn_Req_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S546>/Poke' */
                /* Event: '<S550>:38' */
#if Rte_SysCon_VrntCR4B_MCPAHVCnctrOpnReqP_PokeINVRMtrAFlt_HV_CntctrOpnRq

                /* Outputs for Atomic SubSystem: '<S549>/MCPAHVCnctrOpnReqP_PokeINVRMtrAFlt_HV_CntctrOpnRq' */
                /* Outputs for Atomic SubSystem: '<S555>/Poke' */
                /* FunctionCaller: '<S557>/Function Caller' */
                Rte_Call_PokeINVR_b_MtrAFlt_HV_CntctrOpnRq_PokeINVR_b_MtrAFlt_HV_CntctrOpnRq
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_l);

                /* End of Outputs for SubSystem: '<S555>/Poke' */
                /* End of Outputs for SubSystem: '<S549>/MCPAHVCnctrOpnReqP_PokeINVRMtrAFlt_HV_CntctrOpnRq' */
#endif

#if Rte_SysCon_VrntCR4B_MCPAHVCnctrOpnReqP_PokeINVRMtrCFlt_HV_CntctrOpnRq

                /* Outputs for Atomic SubSystem: '<S549>/MCPAHVCnctrOpnReqP_PokeINVRMtrCFlt_HV_CntctrOpnRq' */
                /* Outputs for Atomic SubSystem: '<S556>/Poke1' */
                /* FunctionCaller: '<S558>/Function Caller' */
                Rte_Call_PokeINVR_b_MtrCFlt_HV_CntctrOpnRq_PokeINVR_b_MtrCFlt_HV_CntctrOpnRq
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_l);

                /* End of Outputs for SubSystem: '<S556>/Poke1' */
                /* End of Outputs for SubSystem: '<S549>/MCPAHVCnctrOpnReqP_PokeINVRMtrCFlt_HV_CntctrOpnRq' */
#endif

                /* End of Outputs for SubSystem: '<S546>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S550>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPA_HV_CnctrOpn_Req_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S546>/Fsft' */
        /* Event: '<S550>:39' */
#if Rte_SysCon_VrntCR4B_MCPAHVCnctrOpnReqP_FsftINVRMtrAFlt_HV_CntctrOpnRq

        /* Outputs for Atomic SubSystem: '<S548>/MCPAHVCnctrOpnReqP_FsftINVRMtrAFlt_HV_CntctrOpnRq' */
        /* Outputs for Atomic SubSystem: '<S551>/Failsoft' */
        /* FunctionCaller: '<S553>/Function Caller' */
        Rte_Call_FsftINVR_b_MtrAFlt_HV_CntctrOpnRq_FsftINVR_b_MtrAFlt_HV_CntctrOpnRq
            ();

        /* End of Outputs for SubSystem: '<S551>/Failsoft' */
        /* End of Outputs for SubSystem: '<S548>/MCPAHVCnctrOpnReqP_FsftINVRMtrAFlt_HV_CntctrOpnRq' */
#endif

#if Rte_SysCon_VrntCR4B_MCPAHVCnctrOpnReqP_FsftINVRMtrCFlt_HV_CntctrOpnRq

        /* Outputs for Atomic SubSystem: '<S548>/MCPAHVCnctrOpnReqP_FsftINVRMtrCFlt_HV_CntctrOpnRq' */
        /* Outputs for Atomic SubSystem: '<S552>/Failsoft1' */
        /* FunctionCaller: '<S554>/Function Caller' */
        Rte_Call_FsftINVR_b_MtrCFlt_HV_CntctrOpnRq_FsftINVR_b_MtrCFlt_HV_CntctrOpnRq
            ();

        /* End of Outputs for SubSystem: '<S552>/Failsoft1' */
        /* End of Outputs for SubSystem: '<S548>/MCPAHVCnctrOpnReqP_FsftINVRMtrCFlt_HV_CntctrOpnRq' */
#endif

        /* End of Outputs for SubSystem: '<S546>/Fsft' */
        /* Transition: '<S550>:113' */
        /* Transition: '<S550>:115' */
        /* Transition: '<S550>:114' */
    }

    /* End of Chart: '<S547>/Chart' */
    /* End of Outputs for SubSystem: '<S452>/MCPA_HV_CnctrOpn_Req_P' */
    /* End of Outputs for SubSystem: '<S13>/MCPA_HV_CnctrOpn_Req_P' */
    /* Transition: '<S550>:107' */
#endif

    /* SignalConversion generated from: '<S2>/VeCRDB_y_MCPA_InterlockSts_P' */
#if (Rte_SysCon_VrntCR4B_MCPAInterlockStsP && Rte_SysCon_VrntCR4B_MCPAInterlockStsP_PokeINVRMCPA_HVILSts) || (Rte_SysCon_VrntCR4B_MCPAInterlockStsP && Rte_SysCon_VrntCR4B_MCPAInterlockStsP_PokeINVRMCPC_HVILSts)

    /* SignalConversion generated from: '<S2>/VeCRDB_y_MCPA_InterlockSts_P' incorporates:
     *  Inport: '<Root>/VeCRDB_y_MCPA_InterlockSts_P'
     */
    rtb_TmpSignalConversionAtVeC_kp =
        Rte_Read_VeCRDB_y_MCPA_InterlockSts_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__hj);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_y_MCPA_InterlockSts_P' */
#if Rte_SysCon_VrntCR4B_MCPAInterlockStsP

    /* Outputs for Atomic SubSystem: '<S13>/MCPA_InterlockSts_P' */
    /* Inport: '<Root>/VeCRDB_y_MCPA_InterlockSts_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S563>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPA_InterlockSts_P_SigSts_Value(&tmpRead_2f);

    /* Outputs for Atomic SubSystem: '<S453>/MCPA_InterlockSts_P' */
    /* Chart: '<S560>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2f) & 3U) != 0U)
    {
        /* Transition: '<S563>:100' */
        /* Transition: '<S563>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S563>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2f) & 4U) != 0U)
        {
            /* Transition: '<S563>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S563>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S563>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPA_InterlockSts_P_CallStatus = 3U;

                /* Event: '<S563>:40' */
                /* Transition: '<S563>:115' */
                /* Transition: '<S563>:114' */
            }
        }
        else
        {
            /* Transition: '<S563>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_kp) == 133)
            {
                /* Transition: '<S563>:95' */
                /* Transition: '<S563>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPA_InterlockSts_P_CallStatus = 4U;

                /* Transition: '<S563>:114' */
            }
            else
            {
                /* Transition: '<S563>:120' */
                if ((((uint32)tmpRead_2f) & 8U) != 0U)
                {
                    /* Transition: '<S563>:122' */
                    /* Transition: '<S563>:125' */
                    FA_out_gb = true;

                    /* Transition: '<S563>:126' */
                }
                else
                {
                    /* Transition: '<S563>:124' */
                    FA_out_gb = false;
                }

                /* Transition: '<S563>:117' */
                /* Call Poke */
                VeCRDB_y_MCPA_InterlockSts_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S559>/Poke' */
                /* Event: '<S563>:38' */
#if Rte_SysCon_VrntCR4B_MCPAInterlockStsP_PokeINVRMCPA_HVILSts

                /* Outputs for Atomic SubSystem: '<S562>/MCPAInterlockStsP_PokeINVRMCPA_HVILSts' */
                /* Outputs for Atomic SubSystem: '<S568>/Poke' */
                /* FunctionCaller: '<S570>/Function Caller' */
                Rte_Call_PokeINVR_e_MCPA_HVILSts_PokeINVR_e_MCPA_HVILSts
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__hj, FA_out_gb);

                /* End of Outputs for SubSystem: '<S568>/Poke' */
                /* End of Outputs for SubSystem: '<S562>/MCPAInterlockStsP_PokeINVRMCPA_HVILSts' */
#endif

#if Rte_SysCon_VrntCR4B_MCPAInterlockStsP_PokeINVRMCPC_HVILSts

                /* Outputs for Atomic SubSystem: '<S562>/MCPAInterlockStsP_PokeINVRMCPC_HVILSts' */
                /* Outputs for Atomic SubSystem: '<S569>/Poke1' */
                /* FunctionCaller: '<S571>/Function Caller' */
                Rte_Call_PokeINVR_e_MCPC_HVILSts_PokeINVR_e_MCPC_HVILSts
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__hj, FA_out_gb);

                /* End of Outputs for SubSystem: '<S569>/Poke1' */
                /* End of Outputs for SubSystem: '<S562>/MCPAInterlockStsP_PokeINVRMCPC_HVILSts' */
#endif

                /* End of Outputs for SubSystem: '<S559>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S563>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPA_InterlockSts_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S559>/Fsft' */
        /* Event: '<S563>:39' */
#if Rte_SysCon_VrntCR4B_MCPAInterlockStsP_FsftINVRMCPA_HVILSts

        /* Outputs for Atomic SubSystem: '<S561>/MCPAInterlockStsP_FsftINVRMCPA_HVILSts' */
        /* Outputs for Atomic SubSystem: '<S564>/Failsoft' */
        /* FunctionCaller: '<S566>/Function Caller' */
        Rte_Call_FsftINVR_b_MCPA_HVILSts_FsftINVR_b_MCPA_HVILSts();

        /* End of Outputs for SubSystem: '<S564>/Failsoft' */
        /* End of Outputs for SubSystem: '<S561>/MCPAInterlockStsP_FsftINVRMCPA_HVILSts' */
#endif

#if Rte_SysCon_VrntCR4B_MCPAInterlockStsP_FsftINVRMCPC_HVILSts

        /* Outputs for Atomic SubSystem: '<S561>/MCPAInterlockStsP_FsftINVRMCPC_HVILSts' */
        /* Outputs for Atomic SubSystem: '<S565>/Failsoft1' */
        /* FunctionCaller: '<S567>/Function Caller' */
        Rte_Call_FsftINVR_b_MCPC_HVILSts_FsftINVR_b_MCPC_HVILSts();

        /* End of Outputs for SubSystem: '<S565>/Failsoft1' */
        /* End of Outputs for SubSystem: '<S561>/MCPAInterlockStsP_FsftINVRMCPC_HVILSts' */
#endif

        /* End of Outputs for SubSystem: '<S559>/Fsft' */
        /* Transition: '<S563>:113' */
        /* Transition: '<S563>:115' */
        /* Transition: '<S563>:114' */
    }

    /* End of Chart: '<S560>/Chart' */
    /* End of Outputs for SubSystem: '<S453>/MCPA_InterlockSts_P' */
    /* End of Outputs for SubSystem: '<S13>/MCPA_InterlockSts_P' */
    /* Transition: '<S563>:107' */
#endif

    /* SignalConversion generated from: '<S2>/VeCRDB_y_MCPA_Invrtr_State_P' */
#if (Rte_SysCon_VrntCR4B_MCPAInvrtrStateP && Rte_SysCon_VrntCR4B_MCPAInvrtrStateP_PokeINVRMtrA_InvrtrSt) || (Rte_SysCon_VrntCR4B_MCPAInvrtrStateP && Rte_SysCon_VrntCR4B_MCPAInvrtrStateP_PokeINVRMtrC_InvrtrSt)

    /* SignalConversion generated from: '<S2>/VeCRDB_y_MCPA_Invrtr_State_P' incorporates:
     *  Inport: '<Root>/VeCRDB_y_MCPA_Invrtr_State_P'
     */
    rtb_TmpSignalConversionAtVe_aos =
        Rte_Read_VeCRDB_y_MCPA_Invrtr_State_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__hn);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_y_MCPA_Invrtr_State_P' */
#if Rte_SysCon_VrntCR4B_MCPAInvrtrStateP

    /* Outputs for Atomic SubSystem: '<S13>/MCPA_Invrtr_State_P' */
    /* Inport: '<Root>/VeCRDB_y_MCPA_Invrtr_State_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S577>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPA_Invrtr_State_P_SigSts_Value(&tmpRead_2g);

    /* Outputs for Atomic SubSystem: '<S454>/MCPA_Invrtr_State_P' */
    /* Chart: '<S573>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2g) & 3U) != 0U)
    {
        /* Transition: '<S577>:100' */
        /* Transition: '<S577>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S577>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2g) & 4U) != 0U)
        {
            /* Transition: '<S577>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S577>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S577>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPA_Invrtr_State_P_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S572>/Tmot' */
                /* Event: '<S577>:40' */
#if Rte_SysCon_VrntCR4B_MCPAInvrtrStateP_TmotINVRMtrA_InvrtrSt

                /* Outputs for Atomic SubSystem: '<S576>/MCPAInvrtrStateP_TmotINVRMtrA_InvrtrSt' */
                /* Outputs for Atomic SubSystem: '<S586>/Timeout' */
                /* FunctionCaller: '<S588>/Function Caller' */
                Rte_Call_TmotINVR_b_MtrA_InvrtrSt_TmotINVR_b_MtrA_InvrtrSt();

                /* End of Outputs for SubSystem: '<S586>/Timeout' */
                /* End of Outputs for SubSystem: '<S576>/MCPAInvrtrStateP_TmotINVRMtrA_InvrtrSt' */
#endif

#if Rte_SysCon_VrntCR4B_MCPAInvrtrStateP_TmotINVRMtrC_InvrtrSt

                /* Outputs for Atomic SubSystem: '<S576>/MCPAInvrtrStateP_TmotINVRMtrC_InvrtrSt' */
                /* Outputs for Atomic SubSystem: '<S587>/Timeout1' */
                /* FunctionCaller: '<S589>/Function Caller' */
                Rte_Call_TmotINVR_b_MtrC_InvrtrSt_TmotINVR_b_MtrC_InvrtrSt();

                /* End of Outputs for SubSystem: '<S587>/Timeout1' */
                /* End of Outputs for SubSystem: '<S576>/MCPAInvrtrStateP_TmotINVRMtrC_InvrtrSt' */
#endif

                /* End of Outputs for SubSystem: '<S572>/Tmot' */
                /* Transition: '<S577>:115' */
                /* Transition: '<S577>:114' */
            }
        }
        else
        {
            /* Transition: '<S577>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_aos) == 133)
            {
                /* Transition: '<S577>:95' */
                /* Transition: '<S577>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPA_Invrtr_State_P_CallStatus = 4U;

                /* Transition: '<S577>:114' */
            }
            else
            {
                /* Transition: '<S577>:120' */
                /* Transition: '<S577>:117' */
                /* Call Poke */
                VeCRDB_y_MCPA_Invrtr_State_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S572>/Poke' */
                /* Event: '<S577>:38' */
#if Rte_SysCon_VrntCR4B_MCPAInvrtrStateP_PokeINVRMtrA_InvrtrSt

                /* Outputs for Atomic SubSystem: '<S575>/MCPAInvrtrStateP_PokeINVRMtrA_InvrtrSt' */
                /* Outputs for Atomic SubSystem: '<S582>/Poke' */
                /* FunctionCaller: '<S584>/Function Caller' */
                Rte_Call_PokeINVR_e_MtrA_InvrtrSt_PokeINVR_e_MtrA_InvrtrSt
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__hn);

                /* End of Outputs for SubSystem: '<S582>/Poke' */
                /* End of Outputs for SubSystem: '<S575>/MCPAInvrtrStateP_PokeINVRMtrA_InvrtrSt' */
#endif

#if Rte_SysCon_VrntCR4B_MCPAInvrtrStateP_PokeINVRMtrC_InvrtrSt

                /* Outputs for Atomic SubSystem: '<S575>/MCPAInvrtrStateP_PokeINVRMtrC_InvrtrSt' */
                /* Outputs for Atomic SubSystem: '<S583>/Poke1' */
                /* FunctionCaller: '<S585>/Function Caller' */
                Rte_Call_PokeINVR_e_MtrC_InvrtrSt_PokeINVR_e_MtrC_InvrtrSt
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__hn);

                /* End of Outputs for SubSystem: '<S583>/Poke1' */
                /* End of Outputs for SubSystem: '<S575>/MCPAInvrtrStateP_PokeINVRMtrC_InvrtrSt' */
#endif

                /* End of Outputs for SubSystem: '<S572>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S577>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPA_Invrtr_State_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S572>/Fsft' */
        /* Event: '<S577>:39' */
#if Rte_SysCon_VrntCR4B_MCPAInvrtrStateP_FsftINVRMtrA_InvrtrSt

        /* Outputs for Atomic SubSystem: '<S574>/MCPAInvrtrStateP_FsftINVRMtrA_InvrtrSt' */
        /* Outputs for Atomic SubSystem: '<S578>/Failsoft' */
        /* FunctionCaller: '<S580>/Function Caller' */
        Rte_Call_FsftINVR_e_MtrA_InvrtrSt_FsftINVR_e_MtrA_InvrtrSt();

        /* End of Outputs for SubSystem: '<S578>/Failsoft' */
        /* End of Outputs for SubSystem: '<S574>/MCPAInvrtrStateP_FsftINVRMtrA_InvrtrSt' */
#endif

#if Rte_SysCon_VrntCR4B_MCPAInvrtrStateP_FsftINVRMtrC_InvrtrSt

        /* Outputs for Atomic SubSystem: '<S574>/MCPAInvrtrStateP_FsftINVRMtrC_InvrtrSt' */
        /* Outputs for Atomic SubSystem: '<S579>/Failsoft1' */
        /* FunctionCaller: '<S581>/Function Caller' */
        Rte_Call_FsftINVR_e_MtrC_InvrtrSt_FsftINVR_e_MtrC_InvrtrSt();

        /* End of Outputs for SubSystem: '<S579>/Failsoft1' */
        /* End of Outputs for SubSystem: '<S574>/MCPAInvrtrStateP_FsftINVRMtrC_InvrtrSt' */
#endif

        /* End of Outputs for SubSystem: '<S572>/Fsft' */
        /* Transition: '<S577>:113' */
        /* Transition: '<S577>:115' */
        /* Transition: '<S577>:114' */
    }

    /* End of Chart: '<S573>/Chart' */
    /* End of Outputs for SubSystem: '<S454>/MCPA_Invrtr_State_P' */
    /* End of Outputs for SubSystem: '<S13>/MCPA_Invrtr_State_P' */
    /* Transition: '<S577>:107' */
#endif

    /* SignalConversion generated from: '<S2>/VeCRDB_M_MCPA_MaxTorq_P' */
#if (Rte_SysCon_VrntCR4B_MCPAMaxTorqP && Rte_SysCon_VrntCR4B_MCPAMaxTorqP_PokeMTIRMtrA_MaxTorq) || (Rte_SysCon_VrntCR4B_MCPAMaxTorqP && Rte_SysCon_VrntCR4B_MCPAMaxTorqP_PokeMTIRMtrC_MaxTorq)

    /* SignalConversion generated from: '<S2>/VeCRDB_M_MCPA_MaxTorq_P' incorporates:
     *  Inport: '<Root>/VeCRDB_M_MCPA_MaxTorq_P'
     */
    rtb_TmpSignalConversionAtVeC_hr = Rte_Read_VeCRDB_M_MCPA_MaxTorq_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_M_M);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_M_MCPA_MaxTorq_P' */
#if Rte_SysCon_VrntCR4B_MCPAMaxTorqP

    /* Outputs for Atomic SubSystem: '<S13>/MCPA_MaxTorq_P' */
    /* Inport: '<Root>/VeCRDB_y_MCPA_MaxTorq_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S594>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPA_MaxTorq_P_SigSts_Value(&tmpRead_2h);

    /* Outputs for Atomic SubSystem: '<S455>/MCPA_MaxTorq_P' */
    /* Chart: '<S591>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2h) & 3U) != 0U)
    {
        /* Transition: '<S594>:100' */
        /* Transition: '<S594>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S594>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2h) & 4U) != 0U)
        {
            /* Transition: '<S594>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S594>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S594>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPA_MaxTorq_P_CallStatus = 3U;

                /* Event: '<S594>:40' */
                /* Transition: '<S594>:115' */
                /* Transition: '<S594>:114' */
            }
        }
        else
        {
            /* Transition: '<S594>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_hr) == 133)
            {
                /* Transition: '<S594>:95' */
                /* Transition: '<S594>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPA_MaxTorq_P_CallStatus = 4U;

                /* Transition: '<S594>:114' */
            }
            else
            {
                /* Transition: '<S594>:120' */
                /* Transition: '<S594>:117' */
                /* Call Poke */
                VeCRDB_y_MCPA_MaxTorq_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S590>/Poke' */
                /* Event: '<S594>:38' */
#if Rte_SysCon_VrntCR4B_MCPAMaxTorqP_PokeMTIRMtrA_MaxTorq

                /* Outputs for Atomic SubSystem: '<S593>/MCPAMaxTorqP_PokeMTIRMtrA_MaxTorq' */
                /* Outputs for Atomic SubSystem: '<S599>/Poke' */
                /* FunctionCaller: '<S601>/Function Caller' */
                Rte_Call_PokeMTIR_M_MtrA_MaxTorq_PokeMTIR_M_MtrA_MaxTorq
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_M_M);

                /* End of Outputs for SubSystem: '<S599>/Poke' */
                /* End of Outputs for SubSystem: '<S593>/MCPAMaxTorqP_PokeMTIRMtrA_MaxTorq' */
#endif

#if Rte_SysCon_VrntCR4B_MCPAMaxTorqP_PokeMTIRMtrC_MaxTorq

                /* Outputs for Atomic SubSystem: '<S593>/MCPAMaxTorqP_PokeMTIRMtrC_MaxTorq' */
                /* Outputs for Atomic SubSystem: '<S600>/Poke1' */
                /* FunctionCaller: '<S602>/Function Caller' */
                Rte_Call_PokeMTIR_M_MtrC_MaxTorq_PokeMTIR_M_MtrC_MaxTorq
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_M_M);

                /* End of Outputs for SubSystem: '<S600>/Poke1' */
                /* End of Outputs for SubSystem: '<S593>/MCPAMaxTorqP_PokeMTIRMtrC_MaxTorq' */
#endif

                /* End of Outputs for SubSystem: '<S590>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S594>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPA_MaxTorq_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S590>/Fsft' */
        /* Event: '<S594>:39' */
#if Rte_SysCon_VrntCR4B_MCPAMaxTorqP_FsftMTIRMtrA_MaxTorq

        /* Outputs for Atomic SubSystem: '<S592>/MCPAMaxTorqP_FsftMTIRMtrA_MaxTorq' */
        /* Outputs for Atomic SubSystem: '<S595>/Failsoft' */
        /* FunctionCaller: '<S597>/Function Caller' */
        Rte_Call_FsftMTIR_M_MtrA_MaxTorq_FsftMTIR_M_MtrA_MaxTorq();

        /* End of Outputs for SubSystem: '<S595>/Failsoft' */
        /* End of Outputs for SubSystem: '<S592>/MCPAMaxTorqP_FsftMTIRMtrA_MaxTorq' */
#endif

#if Rte_SysCon_VrntCR4B_MCPAMaxTorqP_FsftMTIRMtrC_MaxTorq

        /* Outputs for Atomic SubSystem: '<S592>/MCPAMaxTorqP_FsftMTIRMtrC_MaxTorq' */
        /* Outputs for Atomic SubSystem: '<S596>/Failsoft1' */
        /* FunctionCaller: '<S598>/Function Caller' */
        Rte_Call_FsftMTIR_M_MtrC_MaxTorq_FsftMTIR_M_MtrC_MaxTorq();

        /* End of Outputs for SubSystem: '<S596>/Failsoft1' */
        /* End of Outputs for SubSystem: '<S592>/MCPAMaxTorqP_FsftMTIRMtrC_MaxTorq' */
#endif

        /* End of Outputs for SubSystem: '<S590>/Fsft' */
        /* Transition: '<S594>:113' */
        /* Transition: '<S594>:115' */
        /* Transition: '<S594>:114' */
    }

    /* End of Chart: '<S591>/Chart' */
    /* End of Outputs for SubSystem: '<S455>/MCPA_MaxTorq_P' */
    /* End of Outputs for SubSystem: '<S13>/MCPA_MaxTorq_P' */
    /* Transition: '<S594>:107' */
#endif

    /* SignalConversion generated from: '<S2>/VeCRDB_M_MCPA_MinTorq_P' */
#if (Rte_SysCon_VrntCR4B_MCPAMinTorqP && Rte_SysCon_VrntCR4B_MCPAMinTorqP_PokeMTIRMtrA_MinTorq) || (Rte_SysCon_VrntCR4B_MCPAMinTorqP && Rte_SysCon_VrntCR4B_MCPAMinTorqP_PokeMTIRMtrC_MinTorq)

    /* SignalConversion generated from: '<S2>/VeCRDB_M_MCPA_MinTorq_P' incorporates:
     *  Inport: '<Root>/VeCRDB_M_MCPA_MinTorq_P'
     */
    rtb_TmpSignalConversionAtVeCR_j = Rte_Read_VeCRDB_M_MCPA_MinTorq_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_M_c);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_M_MCPA_MinTorq_P' */
#if Rte_SysCon_VrntCR4B_MCPAMinTorqP

    /* Outputs for Atomic SubSystem: '<S13>/MCPA_MinTorq_P' */
    /* Inport: '<Root>/VeCRDB_y_MCPA_MinTorq_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S607>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPA_MinTorq_P_SigSts_Value(&tmpRead_2i);

    /* Outputs for Atomic SubSystem: '<S456>/MCPA_MinTorq_P' */
    /* Chart: '<S604>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2i) & 3U) != 0U)
    {
        /* Transition: '<S607>:100' */
        /* Transition: '<S607>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S607>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2i) & 4U) != 0U)
        {
            /* Transition: '<S607>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S607>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S607>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPA_MinTorq_P_CallStatus = 3U;

                /* Event: '<S607>:40' */
                /* Transition: '<S607>:115' */
                /* Transition: '<S607>:114' */
            }
        }
        else
        {
            /* Transition: '<S607>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_j) == 133)
            {
                /* Transition: '<S607>:95' */
                /* Transition: '<S607>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPA_MinTorq_P_CallStatus = 4U;

                /* Transition: '<S607>:114' */
            }
            else
            {
                /* Transition: '<S607>:120' */
                /* Transition: '<S607>:117' */
                /* Call Poke */
                VeCRDB_y_MCPA_MinTorq_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S603>/Poke' */
                /* Event: '<S607>:38' */
#if Rte_SysCon_VrntCR4B_MCPAMinTorqP_PokeMTIRMtrA_MinTorq

                /* Outputs for Atomic SubSystem: '<S606>/MCPAMinTorqP_PokeMTIRMtrA_MinTorq' */
                /* Outputs for Atomic SubSystem: '<S612>/Poke' */
                /* FunctionCaller: '<S614>/Function Caller' */
                Rte_Call_PokeMTIR_M_MtrA_MinTorq_PokeMTIR_M_MtrA_MinTorq
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_M_c);

                /* End of Outputs for SubSystem: '<S612>/Poke' */
                /* End of Outputs for SubSystem: '<S606>/MCPAMinTorqP_PokeMTIRMtrA_MinTorq' */
#endif

#if Rte_SysCon_VrntCR4B_MCPAMinTorqP_PokeMTIRMtrC_MinTorq

                /* Outputs for Atomic SubSystem: '<S606>/MCPAMinTorqP_PokeMTIRMtrC_MinTorq' */
                /* Outputs for Atomic SubSystem: '<S613>/Poke1' */
                /* FunctionCaller: '<S615>/Function Caller' */
                Rte_Call_PokeMTIR_M_MtrC_MinTorq_PokeMTIR_M_MtrC_MinTorq
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_M_c);

                /* End of Outputs for SubSystem: '<S613>/Poke1' */
                /* End of Outputs for SubSystem: '<S606>/MCPAMinTorqP_PokeMTIRMtrC_MinTorq' */
#endif

                /* End of Outputs for SubSystem: '<S603>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S607>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPA_MinTorq_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S603>/Fsft' */
        /* Event: '<S607>:39' */
#if Rte_SysCon_VrntCR4B_MCPAMinTorqP_FsftMTIRMtrA_MinTorq

        /* Outputs for Atomic SubSystem: '<S605>/MCPAMinTorqP_FsftMTIRMtrA_MinTorq' */
        /* Outputs for Atomic SubSystem: '<S608>/Failsoft' */
        /* FunctionCaller: '<S610>/Function Caller' */
        Rte_Call_FsftMTIR_M_MtrA_MinTorq_FsftMTIR_M_MtrA_MinTorq();

        /* End of Outputs for SubSystem: '<S608>/Failsoft' */
        /* End of Outputs for SubSystem: '<S605>/MCPAMinTorqP_FsftMTIRMtrA_MinTorq' */
#endif

#if Rte_SysCon_VrntCR4B_MCPAMinTorqP_FsftMTIRMtrC_MinTorq

        /* Outputs for Atomic SubSystem: '<S605>/MCPAMinTorqP_FsftMTIRMtrC_MinTorq' */
        /* Outputs for Atomic SubSystem: '<S609>/Failsoft1' */
        /* FunctionCaller: '<S611>/Function Caller' */
        Rte_Call_FsftMTIR_M_MtrC_MinTorq_FsftMTIR_M_MtrC_MinTorq();

        /* End of Outputs for SubSystem: '<S609>/Failsoft1' */
        /* End of Outputs for SubSystem: '<S605>/MCPAMinTorqP_FsftMTIRMtrC_MinTorq' */
#endif

        /* End of Outputs for SubSystem: '<S603>/Fsft' */
        /* Transition: '<S607>:113' */
        /* Transition: '<S607>:115' */
        /* Transition: '<S607>:114' */
    }

    /* End of Chart: '<S604>/Chart' */
    /* End of Outputs for SubSystem: '<S456>/MCPA_MinTorq_P' */
    /* End of Outputs for SubSystem: '<S13>/MCPA_MinTorq_P' */
    /* Transition: '<S607>:107' */
#endif

    /* SignalConversion generated from: '<S2>/VeCRDB_M_MCPA_MtrMaxCpbltyTrq_P' */
#if (Rte_SysCon_VrntCR4B_MCPAMtrMaxCpbltyTrqP && Rte_SysCon_VrntCR4B_MCPAMtrMaxCpbltyTrqP_PokeMTIRMtrACapabilityMax) || (Rte_SysCon_VrntCR4B_MCPAMtrMaxCpbltyTrqP && Rte_SysCon_VrntCR4B_MCPAMtrMaxCpbltyTrqP_PokeMTIRMtrCCapabilityMax)

    /* SignalConversion generated from: '<S2>/VeCRDB_M_MCPA_MtrMaxCpbltyTrq_P' incorporates:
     *  Inport: '<Root>/VeCRDB_M_MCPA_MtrMaxCpbltyTrq_P'
     */
    rtb_TmpSignalConversionAtVeC_kx =
        Rte_Read_VeCRDB_M_MCPA_MtrMaxCpbltyTrq_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_M_d);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_M_MCPA_MtrMaxCpbltyTrq_P' */
#if Rte_SysCon_VrntCR4B_MCPAMtrMaxCpbltyTrqP

    /* Outputs for Atomic SubSystem: '<S13>/MCPA_MtrMaxCpbltyTrq_P' */
    /* Inport: '<Root>/VeCRDB_y_MCPA_MtrMaxCpbltyTrq_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S620>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPA_MtrMaxCpbltyTrq_P_SigSts_Value(&tmpRead_2j);

    /* Outputs for Atomic SubSystem: '<S457>/MCPA_MtrMaxCpbltyTrq_P' */
    /* Chart: '<S617>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2j) & 3U) != 0U)
    {
        /* Transition: '<S620>:100' */
        /* Transition: '<S620>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S620>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2j) & 4U) != 0U)
        {
            /* Transition: '<S620>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S620>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S620>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPA_MtrMaxCpbltyTrq_P_CallStatus = 3U;

                /* Event: '<S620>:40' */
                /* Transition: '<S620>:115' */
                /* Transition: '<S620>:114' */
            }
        }
        else
        {
            /* Transition: '<S620>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_kx) == 133)
            {
                /* Transition: '<S620>:95' */
                /* Transition: '<S620>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPA_MtrMaxCpbltyTrq_P_CallStatus = 4U;

                /* Transition: '<S620>:114' */
            }
            else
            {
                /* Transition: '<S620>:120' */
                /* Transition: '<S620>:117' */
                /* Call Poke */
                VeCRDB_y_MCPA_MtrMaxCpbltyTrq_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S616>/Poke' */
                /* Event: '<S620>:38' */
#if Rte_SysCon_VrntCR4B_MCPAMtrMaxCpbltyTrqP_PokeMTIRMtrACapabilityMax

                /* Outputs for Atomic SubSystem: '<S619>/MCPAMtrMaxCpbltyTrqP_PokeMTIRMtrACapabilityMax' */
                /* Outputs for Atomic SubSystem: '<S625>/Poke' */
                /* FunctionCaller: '<S627>/Function Caller' */
                Rte_Call_PokeMTIR_M_MtrACapabilityMax_PokeMTIR_M_MtrACapabilityMax
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_M_d,
                     CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_j);

                /* End of Outputs for SubSystem: '<S625>/Poke' */
                /* End of Outputs for SubSystem: '<S619>/MCPAMtrMaxCpbltyTrqP_PokeMTIRMtrACapabilityMax' */
#endif

#if Rte_SysCon_VrntCR4B_MCPAMtrMaxCpbltyTrqP_PokeMTIRMtrCCapabilityMax

                /* Outputs for Atomic SubSystem: '<S619>/MCPAMtrMaxCpbltyTrqP_PokeMTIRMtrCCapabilityMax' */
                /* Outputs for Atomic SubSystem: '<S626>/Poke1' */
                /* FunctionCaller: '<S628>/Function Caller' */
                Rte_Call_PokeMTIR_M_MtrCCapabilityMax_PokeMTIR_M_MtrCCapabilityMax
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_M_d,
                     CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_j);

                /* End of Outputs for SubSystem: '<S626>/Poke1' */
                /* End of Outputs for SubSystem: '<S619>/MCPAMtrMaxCpbltyTrqP_PokeMTIRMtrCCapabilityMax' */
#endif

                /* End of Outputs for SubSystem: '<S616>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S620>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPA_MtrMaxCpbltyTrq_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S616>/Fsft' */
        /* Event: '<S620>:39' */
#if Rte_SysCon_VrntCR4B_MCPAMtrMaxCpbltyTrqP_FsftMTIRMtrACapabilityMax

        /* Outputs for Atomic SubSystem: '<S618>/MCPAMtrMaxCpbltyTrqP_FsftMTIRMtrACapabilityMax' */
        /* Outputs for Atomic SubSystem: '<S621>/Failsoft' */
        /* FunctionCaller: '<S623>/Function Caller' */
        Rte_Call_FsftMTIR_M_MtrACapabilityMax_FsftMTIR_M_MtrACapabilityMax();

        /* End of Outputs for SubSystem: '<S621>/Failsoft' */
        /* End of Outputs for SubSystem: '<S618>/MCPAMtrMaxCpbltyTrqP_FsftMTIRMtrACapabilityMax' */
#endif

#if Rte_SysCon_VrntCR4B_MCPAMtrMaxCpbltyTrqP_FsftMTIRMtrCCapabilityMax

        /* Outputs for Atomic SubSystem: '<S618>/MCPAMtrMaxCpbltyTrqP_FsftMTIRMtrCCapabilityMax' */
        /* Outputs for Atomic SubSystem: '<S622>/Failsoft1' */
        /* FunctionCaller: '<S624>/Function Caller' */
        Rte_Call_FsftMTIR_M_MtrCCapabilityMax_FsftMTIR_M_MtrCCapabilityMax();

        /* End of Outputs for SubSystem: '<S622>/Failsoft1' */
        /* End of Outputs for SubSystem: '<S618>/MCPAMtrMaxCpbltyTrqP_FsftMTIRMtrCCapabilityMax' */
#endif

        /* End of Outputs for SubSystem: '<S616>/Fsft' */
        /* Transition: '<S620>:113' */
        /* Transition: '<S620>:115' */
        /* Transition: '<S620>:114' */
    }

    /* End of Chart: '<S617>/Chart' */
    /* End of Outputs for SubSystem: '<S457>/MCPA_MtrMaxCpbltyTrq_P' */
    /* End of Outputs for SubSystem: '<S13>/MCPA_MtrMaxCpbltyTrq_P' */
    /* Transition: '<S620>:107' */
#endif

    /* SignalConversion generated from: '<S2>/VeCRDB_M_MCPA_MtrMinCpbltyTrq_P' */
#if (Rte_SysCon_VrntCR4B_MCPAMtrMinCpbltyTrqP && Rte_SysCon_VrntCR4B_MCPAMtrMinCpbltyTrqP_PokeMTIRMtrACapabilityMin) || (Rte_SysCon_VrntCR4B_MCPAMtrMinCpbltyTrqP && Rte_SysCon_VrntCR4B_MCPAMtrMinCpbltyTrqP_PokeMTIRMtrCCapabilityMin)

    /* SignalConversion generated from: '<S2>/VeCRDB_M_MCPA_MtrMinCpbltyTrq_P' incorporates:
     *  Inport: '<Root>/VeCRDB_M_MCPA_MtrMinCpbltyTrq_P'
     */
    rtb_TmpSignalConversionAtVeCR_m =
        Rte_Read_VeCRDB_M_MCPA_MtrMinCpbltyTrq_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__mv);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_M_MCPA_MtrMinCpbltyTrq_P' */
#if Rte_SysCon_VrntCR4B_MCPAMtrMinCpbltyTrqP

    /* Outputs for Atomic SubSystem: '<S13>/MCPA_MtrMinCpbltyTrq_P' */
    /* Inport: '<Root>/VeCRDB_y_MCPA_MtrMinCpbltyTrq_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S633>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPA_MtrMinCpbltyTrq_P_SigSts_Value(&tmpRead_2k);

    /* Outputs for Atomic SubSystem: '<S458>/MCPA_MtrMinCpbltyTrq_P' */
    /* Chart: '<S630>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2k) & 3U) != 0U)
    {
        /* Transition: '<S633>:100' */
        /* Transition: '<S633>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S633>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2k) & 4U) != 0U)
        {
            /* Transition: '<S633>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S633>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S633>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPA_MtrMinCpbltyTrq_P_CallStatus = 3U;

                /* Event: '<S633>:40' */
                /* Transition: '<S633>:115' */
                /* Transition: '<S633>:114' */
            }
        }
        else
        {
            /* Transition: '<S633>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_m) == 133)
            {
                /* Transition: '<S633>:95' */
                /* Transition: '<S633>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPA_MtrMinCpbltyTrq_P_CallStatus = 4U;

                /* Transition: '<S633>:114' */
            }
            else
            {
                /* Transition: '<S633>:120' */
                /* Transition: '<S633>:117' */
                /* Call Poke */
                VeCRDB_y_MCPA_MtrMinCpbltyTrq_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S629>/Poke' */
                /* Event: '<S633>:38' */
#if Rte_SysCon_VrntCR4B_MCPAMtrMinCpbltyTrqP_PokeMTIRMtrACapabilityMin

                /* Outputs for Atomic SubSystem: '<S632>/MCPAMtrMinCpbltyTrqP_PokeMTIRMtrACapabilityMin' */
                /* Outputs for Atomic SubSystem: '<S638>/Poke' */
                /* FunctionCaller: '<S640>/Function Caller' */
                Rte_Call_PokeMTIR_M_MtrACapabilityMin_PokeMTIR_M_MtrACapabilityMin
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__mv,
                     CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_j);

                /* End of Outputs for SubSystem: '<S638>/Poke' */
                /* End of Outputs for SubSystem: '<S632>/MCPAMtrMinCpbltyTrqP_PokeMTIRMtrACapabilityMin' */
#endif

#if Rte_SysCon_VrntCR4B_MCPAMtrMinCpbltyTrqP_PokeMTIRMtrCCapabilityMin

                /* Outputs for Atomic SubSystem: '<S632>/MCPAMtrMinCpbltyTrqP_PokeMTIRMtrCCapabilityMin' */
                /* Outputs for Atomic SubSystem: '<S639>/Poke1' */
                /* FunctionCaller: '<S641>/Function Caller' */
                Rte_Call_PokeMTIR_M_MtrCCapabilityMin_PokeMTIR_M_MtrCCapabilityMin
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__mv,
                     CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B_y_j);

                /* End of Outputs for SubSystem: '<S639>/Poke1' */
                /* End of Outputs for SubSystem: '<S632>/MCPAMtrMinCpbltyTrqP_PokeMTIRMtrCCapabilityMin' */
#endif

                /* End of Outputs for SubSystem: '<S629>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S633>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPA_MtrMinCpbltyTrq_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S629>/Fsft' */
        /* Event: '<S633>:39' */
#if Rte_SysCon_VrntCR4B_MCPAMtrMinCpbltyTrqP_FsftMTIRMtrACapabilityMin

        /* Outputs for Atomic SubSystem: '<S631>/MCPAMtrMinCpbltyTrqP_FsftMTIRMtrACapabilityMin' */
        /* Outputs for Atomic SubSystem: '<S634>/Failsoft' */
        /* FunctionCaller: '<S636>/Function Caller' */
        Rte_Call_FsftMTIR_M_MtrACapabilityMin_FsftMTIR_M_MtrACapabilityMin();

        /* End of Outputs for SubSystem: '<S634>/Failsoft' */
        /* End of Outputs for SubSystem: '<S631>/MCPAMtrMinCpbltyTrqP_FsftMTIRMtrACapabilityMin' */
#endif

#if Rte_SysCon_VrntCR4B_MCPAMtrMinCpbltyTrqP_FsftMTIRMtrCCapabilityMin

        /* Outputs for Atomic SubSystem: '<S631>/MCPAMtrMinCpbltyTrqP_FsftMTIRMtrCCapabilityMin' */
        /* Outputs for Atomic SubSystem: '<S635>/Failsoft1' */
        /* FunctionCaller: '<S637>/Function Caller' */
        Rte_Call_FsftMTIR_M_MtrCCapabilityMin_FsftMTIR_M_MtrCCapabilityMin();

        /* End of Outputs for SubSystem: '<S635>/Failsoft1' */
        /* End of Outputs for SubSystem: '<S631>/MCPAMtrMinCpbltyTrqP_FsftMTIRMtrCCapabilityMin' */
#endif

        /* End of Outputs for SubSystem: '<S629>/Fsft' */
        /* Transition: '<S633>:113' */
        /* Transition: '<S633>:115' */
        /* Transition: '<S633>:114' */
    }

    /* End of Chart: '<S630>/Chart' */
    /* End of Outputs for SubSystem: '<S458>/MCPA_MtrMinCpbltyTrq_P' */
    /* End of Outputs for SubSystem: '<S13>/MCPA_MtrMinCpbltyTrq_P' */
    /* Transition: '<S633>:107' */
#endif

    /* SignalConversion generated from: '<S2>/VeCRDB_n_MCPA_RPM_P' incorporates:
     *  SignalConversion generated from: '<S2>/VeSR1B_b_MCPA_RPM_V_P_FD16'
     */
#if (Rte_SysCon_VrntCR4B_MCPARPMP && Rte_SysCon_VrntCR4B_MCPARPMP_PokeMSPRMtrA_SpdRaw) || (Rte_SysCon_VrntCR4B_MCPARPMP && Rte_SysCon_VrntCR4B_MCPARPMP_PokeMSPRMtrC_SpdRaw)

    /* SignalConversion generated from: '<S2>/VeCRDB_n_MCPA_RPM_P' incorporates:
     *  Inport: '<Root>/VeCRDB_n_MCPA_RPM_P'
     */
    rtb_TmpSignalConversionAtVeCR_i = Rte_Read_VeCRDB_n_MCPA_RPM_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_n_m);

    /* SignalConversion generated from: '<S2>/VeSR1B_b_MCPA_RPM_V_P_FD16' incorporates:
     *  Inport: '<Root>/VeSR1B_b_MCPA_RPM_V_P_FD16'
     */
    (void)Rte_Read_VeSR1B_b_MCPA_RPM_V_P_FD16_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B__gy);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_n_MCPA_RPM_P' */
#if Rte_SysCon_VrntCR4B_MCPARPMP

    /* Outputs for Atomic SubSystem: '<S13>/MCPA_RPM_P' */
    /* Inport: '<Root>/VeCRDB_y_MCPA_RPM_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S647>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPA_RPM_P_SigSts_Value(&tmpRead_2l);

    /* Outputs for Atomic SubSystem: '<S459>/MCPA_RPM_P' */
    /* Chart: '<S643>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2l) & 3U) != 0U)
    {
        /* Transition: '<S647>:100' */
        /* Transition: '<S647>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S647>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2l) & 4U) != 0U)
        {
            /* Transition: '<S647>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S647>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S647>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPA_RPM_P_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S642>/Tmot' */
                /* Event: '<S647>:40' */
#if Rte_SysCon_VrntCR4B_MCPARPMP_TmotMSPRMtrA_SpdRaw

                /* Outputs for Atomic SubSystem: '<S646>/MCPARPMP_TmotMSPRMtrA_SpdRaw' */
                /* Outputs for Atomic SubSystem: '<S656>/Timeout' */
                /* FunctionCaller: '<S658>/Function Caller' */
                Rte_Call_TmotMSPR_b_MtrA_SpdRaw_TmotMSPR_b_MtrA_SpdRaw();

                /* End of Outputs for SubSystem: '<S656>/Timeout' */
                /* End of Outputs for SubSystem: '<S646>/MCPARPMP_TmotMSPRMtrA_SpdRaw' */
#endif

#if Rte_SysCon_VrntCR4B_MCPARPMP_TmotMSPRMtrC_SpdRaw

                /* Outputs for Atomic SubSystem: '<S646>/MCPARPMP_TmotMSPRMtrC_SpdRaw' */
                /* Outputs for Atomic SubSystem: '<S657>/Timeout1' */
                /* FunctionCaller: '<S659>/Function Caller' */
                Rte_Call_TmotMSPR_b_MtrC_SpdRaw_TmotMSPR_b_MtrC_SpdRaw();

                /* End of Outputs for SubSystem: '<S657>/Timeout1' */
                /* End of Outputs for SubSystem: '<S646>/MCPARPMP_TmotMSPRMtrC_SpdRaw' */
#endif

                /* End of Outputs for SubSystem: '<S642>/Tmot' */
                /* Transition: '<S647>:115' */
                /* Transition: '<S647>:114' */
            }
        }
        else
        {
            /* Transition: '<S647>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_i) == 133)
            {
                /* Transition: '<S647>:95' */
                /* Transition: '<S647>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPA_RPM_P_CallStatus = 4U;

                /* Transition: '<S647>:114' */
            }
            else
            {
                /* Transition: '<S647>:120' */
                /* Transition: '<S647>:117' */
                /* Call Poke */
                VeCRDB_y_MCPA_RPM_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S642>/Poke' */
                /* Event: '<S647>:38' */
#if Rte_SysCon_VrntCR4B_MCPARPMP_PokeMSPRMtrA_SpdRaw

                /* Outputs for Atomic SubSystem: '<S645>/MCPARPMP_PokeMSPRMtrA_SpdRaw' */
                /* Outputs for Atomic SubSystem: '<S652>/Poke' */
                /* FunctionCaller: '<S654>/Function Caller' */
                Rte_Call_PokeMSPR_n_MtrA_SpdRaw_PokeMSPR_n_MtrA_SpdRaw
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_n_m,
                     CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B__gy);

                /* End of Outputs for SubSystem: '<S652>/Poke' */
                /* End of Outputs for SubSystem: '<S645>/MCPARPMP_PokeMSPRMtrA_SpdRaw' */
#endif

#if Rte_SysCon_VrntCR4B_MCPARPMP_PokeMSPRMtrC_SpdRaw

                /* Outputs for Atomic SubSystem: '<S645>/MCPARPMP_PokeMSPRMtrC_SpdRaw' */
                /* Outputs for Atomic SubSystem: '<S653>/Poke1' */
                /* FunctionCaller: '<S655>/Function Caller' */
                Rte_Call_PokeMSPR_n_MtrC_SpdRaw_PokeMSPR_n_MtrC_SpdRaw
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_n_m,
                     CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B__gy);

                /* End of Outputs for SubSystem: '<S653>/Poke1' */
                /* End of Outputs for SubSystem: '<S645>/MCPARPMP_PokeMSPRMtrC_SpdRaw' */
#endif

                /* End of Outputs for SubSystem: '<S642>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S647>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPA_RPM_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S642>/Fsft' */
        /* Event: '<S647>:39' */
#if Rte_SysCon_VrntCR4B_MCPARPMP_FsftMSPRMtrA_SpdRaw

        /* Outputs for Atomic SubSystem: '<S644>/MCPARPMP_FsftMSPRMtrA_SpdRaw' */
        /* Outputs for Atomic SubSystem: '<S648>/Failsoft' */
        /* FunctionCaller: '<S650>/Function Caller' */
        Rte_Call_FsftMSPR_n_MtrA_SpdRaw_FsftMSPR_n_MtrA_SpdRaw();

        /* End of Outputs for SubSystem: '<S648>/Failsoft' */
        /* End of Outputs for SubSystem: '<S644>/MCPARPMP_FsftMSPRMtrA_SpdRaw' */
#endif

#if Rte_SysCon_VrntCR4B_MCPARPMP_FsftMSPRMtrC_SpdRaw

        /* Outputs for Atomic SubSystem: '<S644>/MCPARPMP_FsftMSPRMtrC_SpdRaw' */
        /* Outputs for Atomic SubSystem: '<S649>/Failsoft1' */
        /* FunctionCaller: '<S651>/Function Caller' */
        Rte_Call_FsftMSPR_n_MtrC_SpdRaw_FsftMSPR_n_MtrC_SpdRaw();

        /* End of Outputs for SubSystem: '<S649>/Failsoft1' */
        /* End of Outputs for SubSystem: '<S644>/MCPARPMP_FsftMSPRMtrC_SpdRaw' */
#endif

        /* End of Outputs for SubSystem: '<S642>/Fsft' */
        /* Transition: '<S647>:113' */
        /* Transition: '<S647>:115' */
        /* Transition: '<S647>:114' */
    }

    /* End of Chart: '<S643>/Chart' */
    /* End of Outputs for SubSystem: '<S459>/MCPA_RPM_P' */
    /* End of Outputs for SubSystem: '<S13>/MCPA_RPM_P' */
    /* Transition: '<S647>:107' */
#endif

    /* SignalConversion generated from: '<S2>/VeCRDB_b_MCPA_RPM_V_P' incorporates:
     *  Inport: '<Root>/VeCRDB_y_MCPA_RPM_V_P_SigSts'
     */
#if Rte_SysCon_VrntCR4B_MCPARPMVP

    /* Outputs for Atomic SubSystem: '<S13>/MCPA_RPM_V_P' */
    /* SignalConversion generated from: '<S2>/VeCRDB_b_MCPA_RPM_V_P' incorporates:
     *  Inport: '<Root>/VeCRDB_b_MCPA_RPM_V_P'
     */
    rtb_TmpSignalConversionAtVeC_nz = Rte_Read_VeCRDB_b_MCPA_RPM_V_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_i);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S663>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPA_RPM_V_P_SigSts_Value(&tmpRead_2m);

    /* Outputs for Atomic SubSystem: '<S460>/MCPA_RPM_V_P' */
    /* Chart: '<S661>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_y_MCPA_RPM_V_P_SigSts'
     */
    if ((((uint32)tmpRead_2m) & 3U) != 0U)
    {
        /* Transition: '<S663>:100' */
        /* Transition: '<S663>:103' */
        /* Transition: '<S663>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPA_RPM_V_P_CallStatus = 2U;

        /* Event: '<S663>:39' */
        /* Transition: '<S663>:113' */
        /* Transition: '<S663>:115' */
        /* Transition: '<S663>:114' */
    }
    else
    {
        /* Transition: '<S663>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2m) & 4U) != 0U)
        {
            /* Transition: '<S663>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S663>:88' */
                /* Transition: '<S663>:111' */
                /* Call Fsft */
                VeCRDB_y_MCPA_RPM_V_P_CallStatus = 2U;

                /* Event: '<S663>:39' */
                /* Transition: '<S663>:113' */
                /* Transition: '<S663>:115' */
                /* Transition: '<S663>:114' */
            }
            else
            {
                /* Transition: '<S663>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPA_RPM_V_P_CallStatus = 3U;

                /* Event: '<S663>:40' */
                /* Transition: '<S663>:115' */
                /* Transition: '<S663>:114' */
            }
        }
        else
        {
            /* Transition: '<S663>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_nz) == 133)
            {
                /* Transition: '<S663>:95' */
                /* Transition: '<S663>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPA_RPM_V_P_CallStatus = 4U;

                /* Transition: '<S663>:114' */
            }
            else
            {
                /* Transition: '<S663>:120' */
                /* Transition: '<S663>:117' */
                /* Call Poke */
                VeCRDB_y_MCPA_RPM_V_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S660>/Poke' */
                /* Event: '<S663>:38' */
                CR4B_FUNC_ac_Poke(CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_i);

                /* End of Outputs for SubSystem: '<S660>/Poke' */
            }
        }
    }

    /* End of Chart: '<S661>/Chart' */
    /* End of Outputs for SubSystem: '<S460>/MCPA_RPM_V_P' */
    /* End of Outputs for SubSystem: '<S13>/MCPA_RPM_V_P' */
    /* Transition: '<S663>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_b_MCPA_RPM_V_P' */

    /* SignalConversion generated from: '<S2>/VeCRDB_y_MCPA_SPT_Stat_P' */
#if (Rte_SysCon_VrntCR4B_MCPASPTStatP && Rte_SysCon_VrntCR4B_MCPASPTStatP_PokeINVRMCPA_SPT_State) || (Rte_SysCon_VrntCR4B_MCPASPTStatP && Rte_SysCon_VrntCR4B_MCPASPTStatP_PokeINVRMCPC_SPT_State)

    /* SignalConversion generated from: '<S2>/VeCRDB_y_MCPA_SPT_Stat_P' incorporates:
     *  Inport: '<Root>/VeCRDB_y_MCPA_SPT_Stat_P'
     */
    rtb_TmpSignalConversionAtVeC_px = Rte_Read_VeCRDB_y_MCPA_SPT_Stat_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__b1);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_y_MCPA_SPT_Stat_P' */
#if Rte_SysCon_VrntCR4B_MCPASPTStatP

    /* Outputs for Atomic SubSystem: '<S13>/MCPA_SPT_Stat_P' */
    /* Inport: '<Root>/VeCRDB_y_MCPA_SPT_Stat_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S670>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPA_SPT_Stat_P_SigSts_Value(&tmpRead_2n);

    /* Outputs for Atomic SubSystem: '<S461>/MCPA_SPT_Stat_P' */
    /* Chart: '<S666>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2n) & 3U) != 0U)
    {
        /* Transition: '<S670>:100' */
        /* Transition: '<S670>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S670>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2n) & 4U) != 0U)
        {
            /* Transition: '<S670>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S670>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S670>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPA_SPT_Stat_P_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S665>/Tmot' */
                /* Event: '<S670>:40' */
#if Rte_SysCon_VrntCR4B_MCPASPTStatP_TmotINVRMCPA_SPT_State

                /* Outputs for Atomic SubSystem: '<S669>/MCPASPTStatP_TmotINVRMCPA_SPT_State' */
                /* Outputs for Atomic SubSystem: '<S679>/Timeout' */
                /* FunctionCaller: '<S681>/Function Caller' */
                Rte_Call_TmotINVR_b_MCPA_SPT_State_TmotINVR_b_MCPA_SPT_State();

                /* End of Outputs for SubSystem: '<S679>/Timeout' */
                /* End of Outputs for SubSystem: '<S669>/MCPASPTStatP_TmotINVRMCPA_SPT_State' */
#endif

#if Rte_SysCon_VrntCR4B_MCPASPTStatP_TmotINVRMCPC_SPT_State

                /* Outputs for Atomic SubSystem: '<S669>/MCPASPTStatP_TmotINVRMCPC_SPT_State' */
                /* Outputs for Atomic SubSystem: '<S680>/Timeout1' */
                /* FunctionCaller: '<S682>/Function Caller' */
                Rte_Call_TmotINVR_b_MCPC_SPT_State_TmotINVR_b_MCPC_SPT_State();

                /* End of Outputs for SubSystem: '<S680>/Timeout1' */
                /* End of Outputs for SubSystem: '<S669>/MCPASPTStatP_TmotINVRMCPC_SPT_State' */
#endif

                /* End of Outputs for SubSystem: '<S665>/Tmot' */
                /* Transition: '<S670>:115' */
                /* Transition: '<S670>:114' */
            }
        }
        else
        {
            /* Transition: '<S670>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_px) == 133)
            {
                /* Transition: '<S670>:95' */
                /* Transition: '<S670>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPA_SPT_Stat_P_CallStatus = 4U;

                /* Transition: '<S670>:114' */
            }
            else
            {
                /* Transition: '<S670>:120' */
                /* Transition: '<S670>:117' */
                /* Call Poke */
                VeCRDB_y_MCPA_SPT_Stat_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S665>/Poke' */
                /* Event: '<S670>:38' */
#if Rte_SysCon_VrntCR4B_MCPASPTStatP_PokeINVRMCPA_SPT_State

                /* Outputs for Atomic SubSystem: '<S668>/MCPASPTStatP_PokeINVRMCPA_SPT_State' */
                /* Outputs for Atomic SubSystem: '<S675>/Poke' */
                /* FunctionCaller: '<S677>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S677>/Data Type Conversion'
                 */
                Rte_Call_PokeINVR_e_MCPA_SPT_State_PokeINVR_e_MCPA_SPT_State
                    ((sint16)CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__b1);

                /* End of Outputs for SubSystem: '<S675>/Poke' */
                /* End of Outputs for SubSystem: '<S668>/MCPASPTStatP_PokeINVRMCPA_SPT_State' */
#endif

#if Rte_SysCon_VrntCR4B_MCPASPTStatP_PokeINVRMCPC_SPT_State

                /* Outputs for Atomic SubSystem: '<S668>/MCPASPTStatP_PokeINVRMCPC_SPT_State' */
                /* Outputs for Atomic SubSystem: '<S676>/Poke1' */
                /* FunctionCaller: '<S678>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S678>/Data Type Conversion'
                 */
                Rte_Call_PokeINVR_e_MCPC_SPT_State_PokeINVR_e_MCPC_SPT_State
                    ((sint16)CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__b1);

                /* End of Outputs for SubSystem: '<S676>/Poke1' */
                /* End of Outputs for SubSystem: '<S668>/MCPASPTStatP_PokeINVRMCPC_SPT_State' */
#endif

                /* End of Outputs for SubSystem: '<S665>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S670>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPA_SPT_Stat_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S665>/Fsft' */
        /* Event: '<S670>:39' */
#if Rte_SysCon_VrntCR4B_MCPASPTStatP_FsftINVRMCPA_SPT_State

        /* Outputs for Atomic SubSystem: '<S667>/MCPASPTStatP_FsftINVRMCPA_SPT_State' */
        /* Outputs for Atomic SubSystem: '<S671>/Failsoft' */
        /* FunctionCaller: '<S673>/Function Caller' */
        Rte_Call_FsftINVR_e_MCPA_SPT_State_FsftINVR_e_MCPA_SPT_State();

        /* End of Outputs for SubSystem: '<S671>/Failsoft' */
        /* End of Outputs for SubSystem: '<S667>/MCPASPTStatP_FsftINVRMCPA_SPT_State' */
#endif

#if Rte_SysCon_VrntCR4B_MCPASPTStatP_FsftINVRMCPC_SPT_State

        /* Outputs for Atomic SubSystem: '<S667>/MCPASPTStatP_FsftINVRMCPC_SPT_State' */
        /* Outputs for Atomic SubSystem: '<S672>/Failsoft1' */
        /* FunctionCaller: '<S674>/Function Caller' */
        Rte_Call_FsftINVR_e_MCPC_SPT_State_FsftINVR_e_MCPC_SPT_State();

        /* End of Outputs for SubSystem: '<S672>/Failsoft1' */
        /* End of Outputs for SubSystem: '<S667>/MCPASPTStatP_FsftINVRMCPC_SPT_State' */
#endif

        /* End of Outputs for SubSystem: '<S665>/Fsft' */
        /* Transition: '<S670>:113' */
        /* Transition: '<S670>:115' */
        /* Transition: '<S670>:114' */
    }

    /* End of Chart: '<S666>/Chart' */
    /* End of Outputs for SubSystem: '<S461>/MCPA_SPT_Stat_P' */
    /* End of Outputs for SubSystem: '<S13>/MCPA_SPT_Stat_P' */
    /* Transition: '<S670>:107' */
#endif

    /* SignalConversion generated from: '<S2>/VeCRDB_n_MCPA_Spd_Lim_P' */
#if (Rte_SysCon_VrntCR4B_MCPASpdLimP && Rte_SysCon_VrntCR4B_MCPASpdLimP_PokeMSPRMaxMtrCSpdLmt) || (Rte_SysCon_VrntCR4B_MCPASpdLimP && Rte_SysCon_VrntCR4B_MCPASpdLimP_PokeMSPRMaxP1SpdLmt)

    /* SignalConversion generated from: '<S2>/VeCRDB_n_MCPA_Spd_Lim_P' incorporates:
     *  Inport: '<Root>/VeCRDB_n_MCPA_Spd_Lim_P'
     */
    rtb_TmpSignalConversionAtVeC_pl = Rte_Read_VeCRDB_n_MCPA_Spd_Lim_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__my);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_n_MCPA_Spd_Lim_P' */
#if Rte_SysCon_VrntCR4B_MCPASpdLimP

    /* Outputs for Atomic SubSystem: '<S13>/MCPA_Spd_Lim_P' */
    /* Inport: '<Root>/VeCRDB_y_MCPA_Spd_Lim_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S688>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPA_Spd_Lim_P_SigSts_Value(&tmpRead_2o);

    /* Outputs for Atomic SubSystem: '<S462>/MCPA_Spd_Lim_P' */
    /* Chart: '<S684>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2o) & 3U) != 0U)
    {
        /* Transition: '<S688>:100' */
        /* Transition: '<S688>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S688>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2o) & 4U) != 0U)
        {
            /* Transition: '<S688>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S688>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S688>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPA_Spd_Lim_P_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S683>/Tmot' */
                /* Event: '<S688>:40' */
#if Rte_SysCon_VrntCR4B_MCPASpdLimP_TmotMSPRMaxMtrCSpdLmt

                /* Outputs for Atomic SubSystem: '<S687>/MCPASpdLimP_TmotMSPRMaxMtrCSpdLmt' */
                /* Outputs for Atomic SubSystem: '<S697>/Timeout' */
                /* FunctionCaller: '<S699>/Function Caller' */
                Rte_Call_TmotMSPR_n_MaxMtrCSpdLmt_TmotMSPR_n_MaxMtrCSpdLmt();

                /* End of Outputs for SubSystem: '<S697>/Timeout' */
                /* End of Outputs for SubSystem: '<S687>/MCPASpdLimP_TmotMSPRMaxMtrCSpdLmt' */
#endif

#if Rte_SysCon_VrntCR4B_MCPASpdLimP_TmotMSPRMaxP1SpdLmt

                /* Outputs for Atomic SubSystem: '<S687>/MCPASpdLimP_TmotMSPRMaxP1SpdLmt' */
                /* Outputs for Atomic SubSystem: '<S698>/Timeout1' */
                /* FunctionCaller: '<S700>/Function Caller' */
                Rte_Call_TmotMSPR_n_MaxP1SpdLmt_TmotMSPR_n_MaxP1SpdLmt();

                /* End of Outputs for SubSystem: '<S698>/Timeout1' */
                /* End of Outputs for SubSystem: '<S687>/MCPASpdLimP_TmotMSPRMaxP1SpdLmt' */
#endif

                /* End of Outputs for SubSystem: '<S683>/Tmot' */
                /* Transition: '<S688>:115' */
                /* Transition: '<S688>:114' */
            }
        }
        else
        {
            /* Transition: '<S688>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_pl) == 133)
            {
                /* Transition: '<S688>:95' */
                /* Transition: '<S688>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPA_Spd_Lim_P_CallStatus = 4U;

                /* Transition: '<S688>:114' */
            }
            else
            {
                /* Transition: '<S688>:120' */
                /* Transition: '<S688>:117' */
                /* Call Poke */
                VeCRDB_y_MCPA_Spd_Lim_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S683>/Poke' */
                /* Event: '<S688>:38' */
#if Rte_SysCon_VrntCR4B_MCPASpdLimP_PokeMSPRMaxMtrCSpdLmt

                /* Outputs for Atomic SubSystem: '<S686>/MCPASpdLimP_PokeMSPRMaxMtrCSpdLmt' */
                /* Outputs for Atomic SubSystem: '<S693>/Poke' */
                /* FunctionCaller: '<S695>/Function Caller' */
                Rte_Call_PokeMSPR_n_MaxMtrCSpdLmt_PokeMSPR_n_MaxMtrCSpdLmt
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__my);

                /* End of Outputs for SubSystem: '<S693>/Poke' */
                /* End of Outputs for SubSystem: '<S686>/MCPASpdLimP_PokeMSPRMaxMtrCSpdLmt' */
#endif

#if Rte_SysCon_VrntCR4B_MCPASpdLimP_PokeMSPRMaxP1SpdLmt

                /* Outputs for Atomic SubSystem: '<S686>/MCPASpdLimP_PokeMSPRMaxP1SpdLmt' */
                /* Outputs for Atomic SubSystem: '<S694>/Poke1' */
                /* FunctionCaller: '<S696>/Function Caller' */
                Rte_Call_PokeMSPR_n_MaxP1SpdLmt_PokeMSPR_n_MaxP1SpdLmt
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__my);

                /* End of Outputs for SubSystem: '<S694>/Poke1' */
                /* End of Outputs for SubSystem: '<S686>/MCPASpdLimP_PokeMSPRMaxP1SpdLmt' */
#endif

                /* End of Outputs for SubSystem: '<S683>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S688>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPA_Spd_Lim_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S683>/Fsft' */
        /* Event: '<S688>:39' */
#if Rte_SysCon_VrntCR4B_MCPASpdLimP_FsftMSPRMaxMtrCSpdLmt

        /* Outputs for Atomic SubSystem: '<S685>/MCPASpdLimP_FsftMSPRMaxMtrCSpdLmt' */
        /* Outputs for Atomic SubSystem: '<S689>/Failsoft' */
        /* FunctionCaller: '<S691>/Function Caller' */
        Rte_Call_FsftMSPR_n_MaxMtrCSpdLmt_FsftMSPR_n_MaxMtrCSpdLmt();

        /* End of Outputs for SubSystem: '<S689>/Failsoft' */
        /* End of Outputs for SubSystem: '<S685>/MCPASpdLimP_FsftMSPRMaxMtrCSpdLmt' */
#endif

#if Rte_SysCon_VrntCR4B_MCPASpdLimP_FsftMSPRMaxP1SpdLmt

        /* Outputs for Atomic SubSystem: '<S685>/MCPASpdLimP_FsftMSPRMaxP1SpdLmt' */
        /* Outputs for Atomic SubSystem: '<S690>/Failsoft1' */
        /* FunctionCaller: '<S692>/Function Caller' */
        Rte_Call_FsftMSPR_n_MaxP1SpdLmt_FsftMSPR_n_MaxP1SpdLmt();

        /* End of Outputs for SubSystem: '<S690>/Failsoft1' */
        /* End of Outputs for SubSystem: '<S685>/MCPASpdLimP_FsftMSPRMaxP1SpdLmt' */
#endif

        /* End of Outputs for SubSystem: '<S683>/Fsft' */
        /* Transition: '<S688>:113' */
        /* Transition: '<S688>:115' */
        /* Transition: '<S688>:114' */
    }

    /* End of Chart: '<S684>/Chart' */
    /* End of Outputs for SubSystem: '<S462>/MCPA_Spd_Lim_P' */
    /* End of Outputs for SubSystem: '<S13>/MCPA_Spd_Lim_P' */
    /* Transition: '<S688>:107' */
#endif

    /* SignalConversion generated from: '<S2>/VeCRDB_T_MCPA_Temp_P' */
#if (Rte_SysCon_VrntCR4B_MCPATempP && Rte_SysCon_VrntCR4B_MCPATempP_PokeINVRMtrA_Temp) || (Rte_SysCon_VrntCR4B_MCPATempP && Rte_SysCon_VrntCR4B_MCPATempP_PokeINVRMtrC_Temp)

    /* SignalConversion generated from: '<S2>/VeCRDB_T_MCPA_Temp_P' incorporates:
     *  Inport: '<Root>/VeCRDB_T_MCPA_Temp_P'
     */
    rtb_TmpSignalConversionAtVeC_c5 = Rte_Read_VeCRDB_T_MCPA_Temp_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_T_M);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_T_MCPA_Temp_P' */
#if Rte_SysCon_VrntCR4B_MCPATempP

    /* Outputs for Atomic SubSystem: '<S13>/MCPA_Temp_P' */
    /* Inport: '<Root>/VeCRDB_y_MCPA_Temp_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S706>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPA_Temp_P_SigSts_Value(&tmpRead_2p);

    /* Outputs for Atomic SubSystem: '<S463>/MCPA_Temp_P' */
    /* Chart: '<S702>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2p) & 3U) != 0U)
    {
        /* Transition: '<S706>:100' */
        /* Transition: '<S706>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S706>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2p) & 4U) != 0U)
        {
            /* Transition: '<S706>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S706>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S706>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPA_Temp_P_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S701>/Tmot' */
                /* Event: '<S706>:40' */
#if Rte_SysCon_VrntCR4B_MCPATempP_TmotINVRMtrA_Temp

                /* Outputs for Atomic SubSystem: '<S705>/MCPATempP_TmotINVRMtrA_Temp' */
                /* Outputs for Atomic SubSystem: '<S715>/Timeout' */
                /* FunctionCaller: '<S717>/Function Caller' */
                Rte_Call_TmotINVR_b_MtrA_Temp_TmotINVR_b_MtrA_Temp();

                /* End of Outputs for SubSystem: '<S715>/Timeout' */
                /* End of Outputs for SubSystem: '<S705>/MCPATempP_TmotINVRMtrA_Temp' */
#endif

#if Rte_SysCon_VrntCR4B_MCPATempP_TmotINVRMtrC_Temp

                /* Outputs for Atomic SubSystem: '<S705>/MCPATempP_TmotINVRMtrC_Temp' */
                /* Outputs for Atomic SubSystem: '<S716>/Timeout1' */
                /* FunctionCaller: '<S718>/Function Caller' */
                Rte_Call_TmotINVR_b_MtrC_Temp_TmotINVR_b_MtrC_Temp();

                /* End of Outputs for SubSystem: '<S716>/Timeout1' */
                /* End of Outputs for SubSystem: '<S705>/MCPATempP_TmotINVRMtrC_Temp' */
#endif

                /* End of Outputs for SubSystem: '<S701>/Tmot' */
                /* Transition: '<S706>:115' */
                /* Transition: '<S706>:114' */
            }
        }
        else
        {
            /* Transition: '<S706>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_c5) == 133)
            {
                /* Transition: '<S706>:95' */
                /* Transition: '<S706>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPA_Temp_P_CallStatus = 4U;

                /* Transition: '<S706>:114' */
            }
            else
            {
                /* Transition: '<S706>:120' */
                if ((((uint32)tmpRead_2p) & 8U) != 0U)
                {
                    /* Transition: '<S706>:122' */
                    /* Transition: '<S706>:125' */
                    FA_out_gb = true;

                    /* Transition: '<S706>:126' */
                }
                else
                {
                    /* Transition: '<S706>:124' */
                    FA_out_gb = false;
                }

                /* Transition: '<S706>:117' */
                /* Call Poke */
                VeCRDB_y_MCPA_Temp_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S701>/Poke' */
                /* Event: '<S706>:38' */
#if Rte_SysCon_VrntCR4B_MCPATempP_PokeINVRMtrA_Temp

                /* Outputs for Atomic SubSystem: '<S704>/MCPATempP_PokeINVRMtrA_Temp' */
                /* Outputs for Atomic SubSystem: '<S711>/Poke' */
                /* FunctionCaller: '<S713>/Function Caller' */
                Rte_Call_PokeINVR_T_MtrA_Temp_PokeINVR_T_MtrA_Temp
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_T_M, FA_out_gb);

                /* End of Outputs for SubSystem: '<S711>/Poke' */
                /* End of Outputs for SubSystem: '<S704>/MCPATempP_PokeINVRMtrA_Temp' */
#endif

#if Rte_SysCon_VrntCR4B_MCPATempP_PokeINVRMtrC_Temp

                /* Outputs for Atomic SubSystem: '<S704>/MCPATempP_PokeINVRMtrC_Temp' */
                /* Outputs for Atomic SubSystem: '<S712>/Poke1' */
                /* FunctionCaller: '<S714>/Function Caller' */
                Rte_Call_PokeINVR_T_MtrC_Temp_PokeINVR_T_MtrC_Temp
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_T_M, FA_out_gb);

                /* End of Outputs for SubSystem: '<S712>/Poke1' */
                /* End of Outputs for SubSystem: '<S704>/MCPATempP_PokeINVRMtrC_Temp' */
#endif

                /* End of Outputs for SubSystem: '<S701>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S706>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPA_Temp_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S701>/Fsft' */
        /* Event: '<S706>:39' */
#if Rte_SysCon_VrntCR4B_MCPATempP_FsftINVRMtrA_Temp

        /* Outputs for Atomic SubSystem: '<S703>/MCPATempP_FsftINVRMtrA_Temp' */
        /* Outputs for Atomic SubSystem: '<S707>/Failsoft' */
        /* FunctionCaller: '<S709>/Function Caller' */
        Rte_Call_FsftINVR_T_MtrA_Temp_FsftINVR_T_MtrA_Temp();

        /* End of Outputs for SubSystem: '<S707>/Failsoft' */
        /* End of Outputs for SubSystem: '<S703>/MCPATempP_FsftINVRMtrA_Temp' */
#endif

#if Rte_SysCon_VrntCR4B_MCPATempP_FsftINVRMtrC_Temp

        /* Outputs for Atomic SubSystem: '<S703>/MCPATempP_FsftINVRMtrC_Temp' */
        /* Outputs for Atomic SubSystem: '<S708>/Failsoft1' */
        /* FunctionCaller: '<S710>/Function Caller' */
        Rte_Call_FsftINVR_T_MtrC_Temp_FsftINVR_T_MtrC_Temp();

        /* End of Outputs for SubSystem: '<S708>/Failsoft1' */
        /* End of Outputs for SubSystem: '<S703>/MCPATempP_FsftINVRMtrC_Temp' */
#endif

        /* End of Outputs for SubSystem: '<S701>/Fsft' */
        /* Transition: '<S706>:113' */
        /* Transition: '<S706>:115' */
        /* Transition: '<S706>:114' */
    }

    /* End of Chart: '<S702>/Chart' */
    /* End of Outputs for SubSystem: '<S463>/MCPA_Temp_P' */
    /* End of Outputs for SubSystem: '<S13>/MCPA_Temp_P' */
    /* Transition: '<S706>:107' */
#endif

    /* SignalConversion generated from: '<S2>/VeCRDB_M_MCPA_TorqAchved_AEMD_P' incorporates:
     *  SignalConversion generated from: '<S2>/VeSR1B_b_MCPA_TrqAchvd_AEMD_V_P_FD16'
     */
#if (Rte_SysCon_VrntCR4B_MCPATorqAchievedAEMDP && Rte_SysCon_VrntCR4B_MCPATorqAchievedAEMDP_PokeMTIRMtrA_TorqAchieved_AEMD) || (Rte_SysCon_VrntCR4B_MCPATorqAchievedAEMDP && Rte_SysCon_VrntCR4B_MCPATorqAchievedAEMDP_PokeMTIRMtrC_TorqAchieved_AEMD)

    /* SignalConversion generated from: '<S2>/VeCRDB_M_MCPA_TorqAchved_AEMD_P' incorporates:
     *  Inport: '<Root>/VeCRDB_M_MCPA_TorqAchved_AEMD_P'
     */
    rtb_TmpSignalConversionAtVeC_jv =
        Rte_Read_VeCRDB_M_MCPA_TorqAchved_AEMD_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__nz);

    /* SignalConversion generated from: '<S2>/VeSR1B_b_MCPA_TrqAchvd_AEMD_V_P_FD16' incorporates:
     *  Inport: '<Root>/VeSR1B_b_MCPA_TrqAchvd_AEMD_V_P_FD16'
     */
    (void)Rte_Read_VeSR1B_b_MCPA_TrqAchvd_AEMD_V_P_FD16_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B__dy);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_M_MCPA_TorqAchved_AEMD_P' */
#if Rte_SysCon_VrntCR4B_MCPATorqAchievedAEMDP

    /* Outputs for Atomic SubSystem: '<S13>/MCPA_TorqAchieved_AEMD_P' */
    /* Inport: '<Root>/VeCRDB_y_MCPA_TorqAchved_AEMD_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S724>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPA_TorqAchved_AEMD_P_SigSts_Value(&tmpRead_2q);

    /* Outputs for Atomic SubSystem: '<S464>/MCPA_TorqAchieved_AEMD_P' */
    /* Chart: '<S720>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2q) & 3U) != 0U)
    {
        /* Transition: '<S724>:100' */
        /* Transition: '<S724>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S724>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2q) & 4U) != 0U)
        {
            /* Transition: '<S724>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S724>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S724>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPA_TorqAchved_AEMD_P_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S719>/Tmot' */
                /* Event: '<S724>:40' */
#if Rte_SysCon_VrntCR4B_MCPATorqAchievedAEMDP_TmotMTIRMtrA_TorqAchieved_AEMD

                /* Outputs for Atomic SubSystem: '<S723>/MCPATorqAchievedAEMDP_TmotMTIRMtrA_TorqAchieved_AEMD' */
                /* Outputs for Atomic SubSystem: '<S733>/Timeout' */
                /* FunctionCaller: '<S735>/Function Caller' */
                Rte_Call_TmotMTIR_b_MtrA_TorqAchieved_AEMD_TmotMTIR_b_MtrA_TorqAchieved_AEMD
                    ();

                /* End of Outputs for SubSystem: '<S733>/Timeout' */
                /* End of Outputs for SubSystem: '<S723>/MCPATorqAchievedAEMDP_TmotMTIRMtrA_TorqAchieved_AEMD' */
#endif

#if Rte_SysCon_VrntCR4B_MCPATorqAchievedAEMDP_TmotMTIRMtrC_TorqAchieved_AEMD

                /* Outputs for Atomic SubSystem: '<S723>/MCPATorqAchievedAEMDP_TmotMTIRMtrC_TorqAchieved_AEMD' */
                /* Outputs for Atomic SubSystem: '<S734>/Timeout1' */
                /* FunctionCaller: '<S736>/Function Caller' */
                Rte_Call_TmotMTIR_b_MtrC_TorqAchieved_AEMD_TmotMTIR_b_MtrC_TorqAchieved_AEMD
                    ();

                /* End of Outputs for SubSystem: '<S734>/Timeout1' */
                /* End of Outputs for SubSystem: '<S723>/MCPATorqAchievedAEMDP_TmotMTIRMtrC_TorqAchieved_AEMD' */
#endif

                /* End of Outputs for SubSystem: '<S719>/Tmot' */
                /* Transition: '<S724>:115' */
                /* Transition: '<S724>:114' */
            }
        }
        else
        {
            /* Transition: '<S724>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_jv) == 133)
            {
                /* Transition: '<S724>:95' */
                /* Transition: '<S724>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPA_TorqAchved_AEMD_P_CallStatus = 4U;

                /* Transition: '<S724>:114' */
            }
            else
            {
                /* Transition: '<S724>:120' */
                /* Transition: '<S724>:117' */
                /* Call Poke */
                VeCRDB_y_MCPA_TorqAchved_AEMD_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S719>/Poke' */
                /* Event: '<S724>:38' */
#if Rte_SysCon_VrntCR4B_MCPATorqAchievedAEMDP_PokeMTIRMtrA_TorqAchieved_AEMD

                /* Outputs for Atomic SubSystem: '<S722>/MCPATorqAchievedAEMDP_PokeMTIRMtrA_TorqAchieved_AEMD' */
                /* Outputs for Atomic SubSystem: '<S729>/Poke' */
                /* FunctionCaller: '<S731>/Function Caller' */
                Rte_Call_PokeMTIR_M_MtrA_TorqAchieved_AEMD_PokeMTIR_M_MtrA_TorqAchieved_AEMD
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__nz,
                     CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B__dy);

                /* End of Outputs for SubSystem: '<S729>/Poke' */
                /* End of Outputs for SubSystem: '<S722>/MCPATorqAchievedAEMDP_PokeMTIRMtrA_TorqAchieved_AEMD' */
#endif

#if Rte_SysCon_VrntCR4B_MCPATorqAchievedAEMDP_PokeMTIRMtrC_TorqAchieved_AEMD

                /* Outputs for Atomic SubSystem: '<S722>/MCPATorqAchievedAEMDP_PokeMTIRMtrC_TorqAchieved_AEMD' */
                /* Outputs for Atomic SubSystem: '<S730>/Poke1' */
                /* FunctionCaller: '<S732>/Function Caller' */
                Rte_Call_PokeMTIR_M_MtrC_TorqAchieved_AEMD_PokeMTIR_M_MtrC_TorqAchieved_AEMD
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__nz,
                     CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B__dy);

                /* End of Outputs for SubSystem: '<S730>/Poke1' */
                /* End of Outputs for SubSystem: '<S722>/MCPATorqAchievedAEMDP_PokeMTIRMtrC_TorqAchieved_AEMD' */
#endif

                /* End of Outputs for SubSystem: '<S719>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S724>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPA_TorqAchved_AEMD_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S719>/Fsft' */
        /* Event: '<S724>:39' */
#if Rte_SysCon_VrntCR4B_MCPATorqAchievedAEMDP_FsftMTIRMtrA_TorqAchieved_AEMD

        /* Outputs for Atomic SubSystem: '<S721>/MCPATorqAchievedAEMDP_FsftMTIRMtrA_TorqAchieved_AEMD' */
        /* Outputs for Atomic SubSystem: '<S725>/Failsoft' */
        /* FunctionCaller: '<S727>/Function Caller' */
        Rte_Call_FsftMTIR_M_MtrA_TorqAchieved_AEMD_FsftMTIR_M_MtrA_TorqAchieved_AEMD
            ();

        /* End of Outputs for SubSystem: '<S725>/Failsoft' */
        /* End of Outputs for SubSystem: '<S721>/MCPATorqAchievedAEMDP_FsftMTIRMtrA_TorqAchieved_AEMD' */
#endif

#if Rte_SysCon_VrntCR4B_MCPATorqAchievedAEMDP_FsftMTIRMtrC_TorqAchieved_AEMD

        /* Outputs for Atomic SubSystem: '<S721>/MCPATorqAchievedAEMDP_FsftMTIRMtrC_TorqAchieved_AEMD' */
        /* Outputs for Atomic SubSystem: '<S726>/Failsoft1' */
        /* FunctionCaller: '<S728>/Function Caller' */
        Rte_Call_FsftMTIR_M_MtrC_TorqAchieved_AEMD_FsftMTIR_M_MtrC_TorqAchieved_AEMD
            ();

        /* End of Outputs for SubSystem: '<S726>/Failsoft1' */
        /* End of Outputs for SubSystem: '<S721>/MCPATorqAchievedAEMDP_FsftMTIRMtrC_TorqAchieved_AEMD' */
#endif

        /* End of Outputs for SubSystem: '<S719>/Fsft' */
        /* Transition: '<S724>:113' */
        /* Transition: '<S724>:115' */
        /* Transition: '<S724>:114' */
    }

    /* End of Chart: '<S720>/Chart' */
    /* End of Outputs for SubSystem: '<S464>/MCPA_TorqAchieved_AEMD_P' */
    /* End of Outputs for SubSystem: '<S13>/MCPA_TorqAchieved_AEMD_P' */
    /* Transition: '<S724>:107' */
#endif

    /* SignalConversion generated from: '<S2>/VeCRDB_M_MCPA_Torque_Achieved_P' incorporates:
     *  SignalConversion generated from: '<S2>/VeSR1B_b_MCPA_Torque_Achved_V_P_FD16'
     */
#if (Rte_SysCon_VrntCR4B_MCPATorqueAchievedP && Rte_SysCon_VrntCR4B_MCPATorqueAchievedP_PokeMTIRMtrA_TorqAchieved) || (Rte_SysCon_VrntCR4B_MCPATorqueAchievedP && Rte_SysCon_VrntCR4B_MCPATorqueAchievedP_PokeMTIRMtrC_TorqAchieved)

    /* SignalConversion generated from: '<S2>/VeCRDB_M_MCPA_Torque_Achieved_P' incorporates:
     *  Inport: '<Root>/VeCRDB_M_MCPA_Torque_Achieved_P'
     */
    rtb_TmpSignalConversionAtVeC_ca =
        Rte_Read_VeCRDB_M_MCPA_Torque_Achieved_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__eh);

    /* SignalConversion generated from: '<S2>/VeSR1B_b_MCPA_Torque_Achved_V_P_FD16' incorporates:
     *  Inport: '<Root>/VeSR1B_b_MCPA_Torque_Achved_V_P_FD16'
     */
    (void)Rte_Read_VeSR1B_b_MCPA_Torque_Achved_V_P_FD16_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B__mo);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_M_MCPA_Torque_Achieved_P' */
#if Rte_SysCon_VrntCR4B_MCPATorqueAchievedP

    /* Outputs for Atomic SubSystem: '<S13>/MCPA_Torque_Achieved_P' */
    /* Inport: '<Root>/VeCRDB_y_MCPA_Torque_Achieved_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S741>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPA_Torque_Achieved_P_SigSts_Value(&tmpRead_2r);

    /* Outputs for Atomic SubSystem: '<S465>/MCPA_Torque_Achieved_P' */
    /* Chart: '<S738>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2r) & 3U) != 0U)
    {
        /* Transition: '<S741>:100' */
        /* Transition: '<S741>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S741>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2r) & 4U) != 0U)
        {
            /* Transition: '<S741>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S741>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S741>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPA_Torque_Achieved_P_CallStatus = 3U;

                /* Event: '<S741>:40' */
                /* Transition: '<S741>:115' */
                /* Transition: '<S741>:114' */
            }
        }
        else
        {
            /* Transition: '<S741>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ca) == 133)
            {
                /* Transition: '<S741>:95' */
                /* Transition: '<S741>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPA_Torque_Achieved_P_CallStatus = 4U;

                /* Transition: '<S741>:114' */
            }
            else
            {
                /* Transition: '<S741>:120' */
                /* Transition: '<S741>:117' */
                /* Call Poke */
                VeCRDB_y_MCPA_Torque_Achieved_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S737>/Poke' */
                /* Event: '<S741>:38' */
#if Rte_SysCon_VrntCR4B_MCPATorqueAchievedP_PokeMTIRMtrA_TorqAchieved

                /* Outputs for Atomic SubSystem: '<S740>/MCPATorqueAchievedP_PokeMTIRMtrA_TorqAchieved' */
                /* Outputs for Atomic SubSystem: '<S746>/Poke' */
                /* FunctionCaller: '<S748>/Function Caller' */
                Rte_Call_PokeMTIR_M_MtrA_TorqAchieved_PokeMTIR_M_MtrA_TorqAchieved
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__eh,
                     CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B__mo);

                /* End of Outputs for SubSystem: '<S746>/Poke' */
                /* End of Outputs for SubSystem: '<S740>/MCPATorqueAchievedP_PokeMTIRMtrA_TorqAchieved' */
#endif

#if Rte_SysCon_VrntCR4B_MCPATorqueAchievedP_PokeMTIRMtrC_TorqAchieved

                /* Outputs for Atomic SubSystem: '<S740>/MCPATorqueAchievedP_PokeMTIRMtrC_TorqAchieved' */
                /* Outputs for Atomic SubSystem: '<S747>/Poke1' */
                /* FunctionCaller: '<S749>/Function Caller' */
                Rte_Call_PokeMTIR_M_MtrC_TorqAchieved_PokeMTIR_M_MtrC_TorqAchieved
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__eh,
                     CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B__mo);

                /* End of Outputs for SubSystem: '<S747>/Poke1' */
                /* End of Outputs for SubSystem: '<S740>/MCPATorqueAchievedP_PokeMTIRMtrC_TorqAchieved' */
#endif

                /* End of Outputs for SubSystem: '<S737>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S741>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPA_Torque_Achieved_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S737>/Fsft' */
        /* Event: '<S741>:39' */
#if Rte_SysCon_VrntCR4B_MCPATorqueAchievedP_FsftMTIRMtrA_TorqAchieved

        /* Outputs for Atomic SubSystem: '<S739>/MCPATorqueAchievedP_FsftMTIRMtrA_TorqAchieved' */
        /* Outputs for Atomic SubSystem: '<S742>/Failsoft' */
        /* FunctionCaller: '<S744>/Function Caller' */
        Rte_Call_FsftMTIR_M_MtrA_TorqAchieved_FsftMTIR_M_MtrA_TorqAchieved();

        /* End of Outputs for SubSystem: '<S742>/Failsoft' */
        /* End of Outputs for SubSystem: '<S739>/MCPATorqueAchievedP_FsftMTIRMtrA_TorqAchieved' */
#endif

#if Rte_SysCon_VrntCR4B_MCPATorqueAchievedP_FsftMTIRMtrC_TorqAchieved

        /* Outputs for Atomic SubSystem: '<S739>/MCPATorqueAchievedP_FsftMTIRMtrC_TorqAchieved' */
        /* Outputs for Atomic SubSystem: '<S743>/Failsoft1' */
        /* FunctionCaller: '<S745>/Function Caller' */
        Rte_Call_FsftMTIR_M_MtrC_TorqAchieved_FsftMTIR_M_MtrC_TorqAchieved();

        /* End of Outputs for SubSystem: '<S743>/Failsoft1' */
        /* End of Outputs for SubSystem: '<S739>/MCPATorqueAchievedP_FsftMTIRMtrC_TorqAchieved' */
#endif

        /* End of Outputs for SubSystem: '<S737>/Fsft' */
        /* Transition: '<S741>:113' */
        /* Transition: '<S741>:115' */
        /* Transition: '<S741>:114' */
    }

    /* End of Chart: '<S738>/Chart' */
    /* End of Outputs for SubSystem: '<S465>/MCPA_Torque_Achieved_P' */
    /* End of Outputs for SubSystem: '<S13>/MCPA_Torque_Achieved_P' */
    /* Transition: '<S741>:107' */
#endif

    /* SignalConversion generated from: '<S2>/VeCRDB_b_MCPA_Torque_Achved_V_P' incorporates:
     *  Inport: '<Root>/VeCRDB_y_MCPA_Torque_Achved_V_P_SigSts'
     */
#if Rte_SysCon_VrntCR4B_MCPATorqueAchievedVP

    /* Outputs for Atomic SubSystem: '<S13>/MCPA_Torque_Achieved_V_P' */
    /* SignalConversion generated from: '<S2>/VeCRDB_b_MCPA_Torque_Achved_V_P' incorporates:
     *  Inport: '<Root>/VeCRDB_b_MCPA_Torque_Achved_V_P'
     */
    rtb_TmpSignalConversionAtVeC_bl =
        Rte_Read_VeCRDB_b_MCPA_Torque_Achved_V_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_d);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S753>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPA_Torque_Achved_V_P_SigSts_Value(&tmpRead_2s);

    /* Outputs for Atomic SubSystem: '<S466>/MCPA_Torque_Achieved_V_P' */
    /* Chart: '<S751>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_y_MCPA_Torque_Achved_V_P_SigSts'
     */
    if ((((uint32)tmpRead_2s) & 3U) != 0U)
    {
        /* Transition: '<S753>:100' */
        /* Transition: '<S753>:103' */
        /* Transition: '<S753>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPA_Torque_Achved_V_P_CallStatus = 2U;

        /* Event: '<S753>:39' */
        /* Transition: '<S753>:113' */
        /* Transition: '<S753>:115' */
        /* Transition: '<S753>:114' */
    }
    else
    {
        /* Transition: '<S753>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2s) & 4U) != 0U)
        {
            /* Transition: '<S753>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S753>:88' */
                /* Transition: '<S753>:111' */
                /* Call Fsft */
                VeCRDB_y_MCPA_Torque_Achved_V_P_CallStatus = 2U;

                /* Event: '<S753>:39' */
                /* Transition: '<S753>:113' */
                /* Transition: '<S753>:115' */
                /* Transition: '<S753>:114' */
            }
            else
            {
                /* Transition: '<S753>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPA_Torque_Achved_V_P_CallStatus = 3U;

                /* Event: '<S753>:40' */
                /* Transition: '<S753>:115' */
                /* Transition: '<S753>:114' */
            }
        }
        else
        {
            /* Transition: '<S753>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_bl) == 133)
            {
                /* Transition: '<S753>:95' */
                /* Transition: '<S753>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPA_Torque_Achved_V_P_CallStatus = 4U;

                /* Transition: '<S753>:114' */
            }
            else
            {
                /* Transition: '<S753>:120' */
                /* Transition: '<S753>:117' */
                /* Call Poke */
                VeCRDB_y_MCPA_Torque_Achved_V_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S750>/Poke' */
                /* Event: '<S753>:38' */
                CR4B_FUNC_ac_Poke_h
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_d);

                /* End of Outputs for SubSystem: '<S750>/Poke' */
            }
        }
    }

    /* End of Chart: '<S751>/Chart' */
    /* End of Outputs for SubSystem: '<S466>/MCPA_Torque_Achieved_V_P' */
    /* End of Outputs for SubSystem: '<S13>/MCPA_Torque_Achieved_V_P' */
    /* Transition: '<S753>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_b_MCPA_Torque_Achved_V_P' */

    /* SignalConversion generated from: '<S2>/VeCRDB_T_MCPACtrlBoarTempP' */
#if (Rte_SysCon_VrntCR4B_MCPAControlBoardTemperatureP && Rte_SysCon_VrntCR4B_MCPAControlBoardTemperatureP_PokeINVRMtrA_CtrlBoard_Te) || (Rte_SysCon_VrntCR4B_MCPAControlBoardTemperatureP && Rte_SysCon_VrntCR4B_MCPAControlBoardTemperatureP_PokeINVRMtrC_CtrlBoard_Te)

    /* SignalConversion generated from: '<S2>/VeCRDB_T_MCPACtrlBoarTempP' incorporates:
     *  Inport: '<Root>/VeCRDB_T_MCPACtrlBoarTempP'
     */
    rtb_TmpSignalConversionAtVe_pxx = Rte_Read_VeCRDB_T_MCPACtrlBoarTempP_Value(
        &CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_T_c);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_T_MCPACtrlBoarTempP' */
#if Rte_SysCon_VrntCR4B_MCPAControlBoardTemperatureP

    /* Outputs for Atomic SubSystem: '<S14>/MCPA_Control_Board_Temperature_P' */
    /* Inport: '<Root>/VeCRDB_y_MCPACtrlBoarTempP_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S768>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPACtrlBoarTempP_SigSts_Value(&tmpRead_0);

    /* Outputs for Atomic SubSystem: '<S755>/MCPA_Control_Board_Temperature_P' */
    /* Chart: '<S764>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_0) & 3U) != 0U)
    {
        /* Transition: '<S768>:100' */
        /* Transition: '<S768>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S768>:104' */
        /*  MM */
        if ((((uint32)tmpRead_0) & 4U) != 0U)
        {
            /* Transition: '<S768>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S768>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S768>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPACtrlBoarTempP_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S763>/Tmot' */
                /* Event: '<S768>:40' */
#if Rte_SysCon_VrntCR4B_MCPAControlBoardTemperatureP_TmotINVRMtrA_CtrlBoard_Te

                /* Outputs for Atomic SubSystem: '<S767>/MCPAControlBoardTemperatureP_TmotINVRMtrA_CtrlBoard_Temp' */
                /* Outputs for Atomic SubSystem: '<S777>/Timeout' */
                /* FunctionCaller: '<S779>/Function Caller' */
                Rte_Call_TmotINVR_b_MtrA_CtrlBoard_Temp_TmotINVR_b_MtrA_CtrlBoard_Temp
                    ();

                /* End of Outputs for SubSystem: '<S777>/Timeout' */
                /* End of Outputs for SubSystem: '<S767>/MCPAControlBoardTemperatureP_TmotINVRMtrA_CtrlBoard_Temp' */
#endif

#if Rte_SysCon_VrntCR4B_MCPAControlBoardTemperatureP_TmotINVRMtrC_CtrlBoard_Te

                /* Outputs for Atomic SubSystem: '<S767>/MCPAControlBoardTemperatureP_TmotINVRMtrC_CtrlBoard_Temp' */
                /* Outputs for Atomic SubSystem: '<S778>/Timeout1' */
                /* FunctionCaller: '<S780>/Function Caller' */
                Rte_Call_TmotINVR_b_MtrC_CtrlBoard_Temp_TmotINVR_b_MtrC_CtrlBoard_Temp
                    ();

                /* End of Outputs for SubSystem: '<S778>/Timeout1' */
                /* End of Outputs for SubSystem: '<S767>/MCPAControlBoardTemperatureP_TmotINVRMtrC_CtrlBoard_Temp' */
                /* End of Outputs for SubSystem: '<S763>/Tmot' */
#endif

                /* Transition: '<S768>:115' */
                /* Transition: '<S768>:114' */
            }
        }
        else
        {
            /* Transition: '<S768>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_pxx) == 133)
            {
                /* Transition: '<S768>:95' */
                /* Transition: '<S768>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPACtrlBoarTempP_CallStatus = 4U;

                /* Transition: '<S768>:114' */
            }
            else
            {
                /* Transition: '<S768>:120' */
                if ((((uint32)tmpRead_0) & 8U) != 0U)
                {
                    /* Transition: '<S768>:122' */
                    /* Transition: '<S768>:125' */
                    FA_out_gb = true;

                    /* Transition: '<S768>:126' */
                }
                else
                {
                    /* Transition: '<S768>:124' */
                    FA_out_gb = false;
                }

                /* Transition: '<S768>:117' */
                /* Call Poke */
                VeCRDB_y_MCPACtrlBoarTempP_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S763>/Poke' */
                /* Event: '<S768>:38' */
#if Rte_SysCon_VrntCR4B_MCPAControlBoardTemperatureP_PokeINVRMtrA_CtrlBoard_Te

                /* Outputs for Atomic SubSystem: '<S766>/MCPAControlBoardTemperatureP_PokeINVRMtrA_CtrlBoard_Temp' */
                /* Outputs for Atomic SubSystem: '<S773>/Poke' */
                /* FunctionCaller: '<S775>/Function Caller' */
                Rte_Call_PokeINVR_T_MtrA_CtrlBoard_Temp_PokeINVR_T_MtrA_CtrlBoard_Temp
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_T_c, FA_out_gb);

                /* End of Outputs for SubSystem: '<S773>/Poke' */
                /* End of Outputs for SubSystem: '<S766>/MCPAControlBoardTemperatureP_PokeINVRMtrA_CtrlBoard_Temp' */
#endif

#if Rte_SysCon_VrntCR4B_MCPAControlBoardTemperatureP_PokeINVRMtrC_CtrlBoard_Te

                /* Outputs for Atomic SubSystem: '<S766>/MCPAControlBoardTemperatureP_PokeINVRMtrC_CtrlBoard_Temp' */
                /* Outputs for Atomic SubSystem: '<S774>/Poke1' */
                /* FunctionCaller: '<S776>/Function Caller' */
                Rte_Call_PokeINVR_T_MtrC_CtrlBoard_Temp_PokeINVR_T_MtrC_CtrlBoard_Temp
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_T_c, FA_out_gb);

                /* End of Outputs for SubSystem: '<S774>/Poke1' */
                /* End of Outputs for SubSystem: '<S766>/MCPAControlBoardTemperatureP_PokeINVRMtrC_CtrlBoard_Temp' */
                /* End of Outputs for SubSystem: '<S763>/Poke' */
#endif

            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S768>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPACtrlBoarTempP_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S763>/Fsft' */
        /* Event: '<S768>:39' */
#if Rte_SysCon_VrntCR4B_MCPAControlBoardTemperatureP_FsftINVRMtrA_CtrlBoard_Te

        /* Outputs for Atomic SubSystem: '<S765>/MCPAControlBoardTemperatureP_FsftINVRMtrA_CtrlBoard_Temp' */
        /* Outputs for Atomic SubSystem: '<S769>/Failsoft' */
        /* FunctionCaller: '<S771>/Function Caller' */
        Rte_Call_FsftINVR_T_MtrA_CtrlBoard_Temp_FsftINVR_T_MtrA_CtrlBoard_Temp();

        /* End of Outputs for SubSystem: '<S769>/Failsoft' */
        /* End of Outputs for SubSystem: '<S765>/MCPAControlBoardTemperatureP_FsftINVRMtrA_CtrlBoard_Temp' */
#endif

#if Rte_SysCon_VrntCR4B_MCPAControlBoardTemperatureP_FsftINVRMtrC_CtrlBoard_Te

        /* Outputs for Atomic SubSystem: '<S765>/MCPAControlBoardTemperatureP_FsftINVRMtrC_CtrlBoard_Temp' */
        /* Outputs for Atomic SubSystem: '<S770>/Failsoft1' */
        /* FunctionCaller: '<S772>/Function Caller' */
        Rte_Call_FsftINVR_T_MtrC_CtrlBoard_Temp_FsftINVR_T_MtrC_CtrlBoard_Temp();

        /* End of Outputs for SubSystem: '<S770>/Failsoft1' */
        /* End of Outputs for SubSystem: '<S765>/MCPAControlBoardTemperatureP_FsftINVRMtrC_CtrlBoard_Temp' */
        /* End of Outputs for SubSystem: '<S763>/Fsft' */
#endif

        /* Transition: '<S768>:113' */
        /* Transition: '<S768>:115' */
        /* Transition: '<S768>:114' */
    }

    /* End of Chart: '<S764>/Chart' */
    /* End of Outputs for SubSystem: '<S755>/MCPA_Control_Board_Temperature_P' */
    /* End of Outputs for SubSystem: '<S14>/MCPA_Control_Board_Temperature_P' */
    /* Transition: '<S768>:107' */
#endif

    /* SignalConversion generated from: '<S2>/VeCRDB_I_MCPA_DC_Current_P' incorporates:
     *  SignalConversion generated from: '<S2>/VeCRDB_b_MCPA_DC_Crrnt_V_P'
     */
#if (Rte_SysCon_VrntCR4B_MCPADCCurrentP && Rte_SysCon_VrntCR4B_MCPADCCurrentP_PokeINVRMtrA_DC_Crnt) || (Rte_SysCon_VrntCR4B_MCPADCCurrentP && Rte_SysCon_VrntCR4B_MCPADCCurrentP_PokeINVRMtrC_DC_Crnt)

    /* SignalConversion generated from: '<S2>/VeCRDB_I_MCPA_DC_Current_P' incorporates:
     *  Inport: '<Root>/VeCRDB_I_MCPA_DC_Current_P'
     */
    rtb_TmpSignalConversionAtVeC_bt = Rte_Read_VeCRDB_I_MCPA_DC_Current_P_Value(
        &CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_I_M);

    /* SignalConversion generated from: '<S2>/VeCRDB_b_MCPA_DC_Crrnt_V_P' incorporates:
     *  Inport: '<Root>/VeCRDB_b_MCPA_DC_Crrnt_V_P'
     */
    (void)Rte_Read_VeCRDB_b_MCPA_DC_Crrnt_V_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_g);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_I_MCPA_DC_Current_P' */
#if Rte_SysCon_VrntCR4B_MCPADCCurrentP

    /* Outputs for Atomic SubSystem: '<S14>/MCPA_DC_Current_P' */
    /* Inport: '<Root>/VeCRDB_y_MCPA_DC_Current_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S786>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPA_DC_Current_P_SigSts_Value(&tmpRead_1);

    /* Outputs for Atomic SubSystem: '<S756>/MCPA_DC_Current_P' */
    /* Chart: '<S782>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_1) & 3U) != 0U)
    {
        /* Transition: '<S786>:100' */
        /* Transition: '<S786>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S786>:104' */
        /*  MM */
        if ((((uint32)tmpRead_1) & 4U) != 0U)
        {
            /* Transition: '<S786>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S786>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S786>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPA_DC_Current_P_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S781>/Tmot' */
                /* Event: '<S786>:40' */
#if Rte_SysCon_VrntCR4B_MCPADCCurrentP_TmotINVRMtrA_DC_Crnt

                /* Outputs for Atomic SubSystem: '<S785>/MCPADCCurrentP_TmotINVRMtrA_DC_Crnt' */
                /* Outputs for Atomic SubSystem: '<S795>/Timeout' */
                /* FunctionCaller: '<S797>/Function Caller' */
                Rte_Call_TmotINVR_b_MtrA_DC_Crnt_TmotINVR_b_MtrA_DC_Crnt();

                /* End of Outputs for SubSystem: '<S795>/Timeout' */
                /* End of Outputs for SubSystem: '<S785>/MCPADCCurrentP_TmotINVRMtrA_DC_Crnt' */
#endif

#if Rte_SysCon_VrntCR4B_MCPADCCurrentP_TmotINVRMtrC_DC_Crnt

                /* Outputs for Atomic SubSystem: '<S785>/MCPADCCurrentP_TmotINVRMtrC_DC_Crnt' */
                /* Outputs for Atomic SubSystem: '<S796>/Timeout1' */
                /* FunctionCaller: '<S798>/Function Caller' */
                Rte_Call_TmotINVR_b_MtrC_DC_Crnt_TmotINVR_b_MtrC_DC_Crnt();

                /* End of Outputs for SubSystem: '<S796>/Timeout1' */
                /* End of Outputs for SubSystem: '<S785>/MCPADCCurrentP_TmotINVRMtrC_DC_Crnt' */
                /* End of Outputs for SubSystem: '<S781>/Tmot' */
#endif

                /* Transition: '<S786>:115' */
                /* Transition: '<S786>:114' */
            }
        }
        else
        {
            /* Transition: '<S786>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_bt) == 133)
            {
                /* Transition: '<S786>:95' */
                /* Transition: '<S786>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPA_DC_Current_P_CallStatus = 4U;

                /* Transition: '<S786>:114' */
            }
            else
            {
                /* Transition: '<S786>:120' */
                /* Transition: '<S786>:117' */
                /* Call Poke */
                VeCRDB_y_MCPA_DC_Current_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S781>/Poke' */
                /* Event: '<S786>:38' */
#if Rte_SysCon_VrntCR4B_MCPADCCurrentP_PokeINVRMtrA_DC_Crnt

                /* Outputs for Atomic SubSystem: '<S784>/MCPADCCurrentP_PokeINVRMtrA_DC_Crnt' */
                /* Outputs for Atomic SubSystem: '<S791>/Poke' */
                /* FunctionCaller: '<S793>/Function Caller' */
                Rte_Call_PokeINVR_I_MtrA_DC_Crnt_PokeINVR_I_MtrA_DC_Crnt
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_I_M,
                     CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_g);

                /* End of Outputs for SubSystem: '<S791>/Poke' */
                /* End of Outputs for SubSystem: '<S784>/MCPADCCurrentP_PokeINVRMtrA_DC_Crnt' */
#endif

#if Rte_SysCon_VrntCR4B_MCPADCCurrentP_PokeINVRMtrC_DC_Crnt

                /* Outputs for Atomic SubSystem: '<S784>/MCPADCCurrentP_PokeINVRMtrC_DC_Crnt' */
                /* Outputs for Atomic SubSystem: '<S792>/Poke1' */
                /* FunctionCaller: '<S794>/Function Caller' */
                Rte_Call_PokeINVR_I_MtrC_DC_Crnt_PokeINVR_I_MtrC_DC_Crnt
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_I_M,
                     CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_g);

                /* End of Outputs for SubSystem: '<S792>/Poke1' */
                /* End of Outputs for SubSystem: '<S784>/MCPADCCurrentP_PokeINVRMtrC_DC_Crnt' */
                /* End of Outputs for SubSystem: '<S781>/Poke' */
#endif

            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S786>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPA_DC_Current_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S781>/Fsft' */
        /* Event: '<S786>:39' */
#if Rte_SysCon_VrntCR4B_MCPADCCurrentP_FsftINVRMtrA_DC_Crnt

        /* Outputs for Atomic SubSystem: '<S783>/MCPADCCurrentP_FsftINVRMtrA_DC_Crnt' */
        /* Outputs for Atomic SubSystem: '<S787>/Failsoft' */
        /* FunctionCaller: '<S789>/Function Caller' */
        Rte_Call_FsftINVR_I_MtrA_DC_Crnt_FsftINVR_I_MtrA_DC_Crnt();

        /* End of Outputs for SubSystem: '<S787>/Failsoft' */
        /* End of Outputs for SubSystem: '<S783>/MCPADCCurrentP_FsftINVRMtrA_DC_Crnt' */
#endif

#if Rte_SysCon_VrntCR4B_MCPADCCurrentP_FsftINVRMtrC_DC_Crnt

        /* Outputs for Atomic SubSystem: '<S783>/MCPADCCurrentP_FsftINVRMtrC_DC_Crnt' */
        /* Outputs for Atomic SubSystem: '<S788>/Failsoft1' */
        /* FunctionCaller: '<S790>/Function Caller' */
        Rte_Call_FsftINVR_I_MtrC_DC_Crnt_FsftINVR_I_MtrC_DC_Crnt();

        /* End of Outputs for SubSystem: '<S788>/Failsoft1' */
        /* End of Outputs for SubSystem: '<S783>/MCPADCCurrentP_FsftINVRMtrC_DC_Crnt' */
        /* End of Outputs for SubSystem: '<S781>/Fsft' */
#endif

        /* Transition: '<S786>:113' */
        /* Transition: '<S786>:115' */
        /* Transition: '<S786>:114' */
    }

    /* End of Chart: '<S782>/Chart' */
    /* End of Outputs for SubSystem: '<S756>/MCPA_DC_Current_P' */
    /* End of Outputs for SubSystem: '<S14>/MCPA_DC_Current_P' */
    /* Transition: '<S786>:107' */
#endif

    /* SignalConversion generated from: '<S2>/VeCRDB_U_MCPA_DC_Voltage_P' incorporates:
     *  SignalConversion generated from: '<S2>/VeCRDB_b_MCPA_DC_Volt_V_P'
     */
#if (Rte_SysCon_VrntCR4B_MCPADCVoltageP && Rte_SysCon_VrntCR4B_MCPADCVoltageP_PokeINVRMtrA_DC_Volt) || (Rte_SysCon_VrntCR4B_MCPADCVoltageP && Rte_SysCon_VrntCR4B_MCPADCVoltageP_PokeINVRMtrC_DC_Volt)

    /* SignalConversion generated from: '<S2>/VeCRDB_U_MCPA_DC_Voltage_P' incorporates:
     *  Inport: '<Root>/VeCRDB_U_MCPA_DC_Voltage_P'
     */
    rtb_TmpSignalConversionAtVeCR_d = Rte_Read_VeCRDB_U_MCPA_DC_Voltage_P_Value(
        &CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_U_M);

    /* SignalConversion generated from: '<S2>/VeCRDB_b_MCPA_DC_Volt_V_P' incorporates:
     *  Inport: '<Root>/VeCRDB_b_MCPA_DC_Volt_V_P'
     */
    (void)Rte_Read_VeCRDB_b_MCPA_DC_Volt_V_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__gy);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_U_MCPA_DC_Voltage_P' */
#if Rte_SysCon_VrntCR4B_MCPADCVoltageP

    /* Outputs for Atomic SubSystem: '<S14>/MCPA_DC_Voltage_P' */
    /* Inport: '<Root>/VeCRDB_y_MCPA_DC_Voltage_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S804>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPA_DC_Voltage_P_SigSts_Value(&tmpRead_2);

    /* Outputs for Atomic SubSystem: '<S757>/MCPA_DC_Voltage_P' */
    /* Chart: '<S800>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2) & 3U) != 0U)
    {
        /* Transition: '<S804>:100' */
        /* Transition: '<S804>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S804>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2) & 4U) != 0U)
        {
            /* Transition: '<S804>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S804>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S804>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPA_DC_Voltage_P_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S799>/Tmot' */
                /* Event: '<S804>:40' */
#if Rte_SysCon_VrntCR4B_MCPADCVoltageP_TmotINVRMtrA_DC_Volt

                /* Outputs for Atomic SubSystem: '<S803>/MCPADCVoltageP_TmotINVRMtrA_DC_Volt' */
                /* Outputs for Atomic SubSystem: '<S813>/Timeout' */
                /* FunctionCaller: '<S815>/Function Caller' */
                Rte_Call_TmotINVR_b_MtrA_DC_Volt_TmotINVR_b_MtrA_DC_Volt();

                /* End of Outputs for SubSystem: '<S813>/Timeout' */
                /* End of Outputs for SubSystem: '<S803>/MCPADCVoltageP_TmotINVRMtrA_DC_Volt' */
#endif

#if Rte_SysCon_VrntCR4B_MCPADCVoltageP_TmotINVRMtrC_DC_Volt

                /* Outputs for Atomic SubSystem: '<S803>/MCPADCVoltageP_TmotINVRMtrC_DC_Volt' */
                /* Outputs for Atomic SubSystem: '<S814>/Timeout1' */
                /* FunctionCaller: '<S816>/Function Caller' */
                Rte_Call_TmotINVR_b_MtrC_DC_Volt_TmotINVR_b_MtrC_DC_Volt();

                /* End of Outputs for SubSystem: '<S814>/Timeout1' */
                /* End of Outputs for SubSystem: '<S803>/MCPADCVoltageP_TmotINVRMtrC_DC_Volt' */
                /* End of Outputs for SubSystem: '<S799>/Tmot' */
#endif

                /* Transition: '<S804>:115' */
                /* Transition: '<S804>:114' */
            }
        }
        else
        {
            /* Transition: '<S804>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeCR_d) == 133)
            {
                /* Transition: '<S804>:95' */
                /* Transition: '<S804>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPA_DC_Voltage_P_CallStatus = 4U;

                /* Transition: '<S804>:114' */
            }
            else
            {
                /* Transition: '<S804>:120' */
                /* Transition: '<S804>:117' */
                /* Call Poke */
                VeCRDB_y_MCPA_DC_Voltage_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S799>/Poke' */
                /* Event: '<S804>:38' */
#if Rte_SysCon_VrntCR4B_MCPADCVoltageP_PokeINVRMtrA_DC_Volt

                /* Outputs for Atomic SubSystem: '<S802>/MCPADCVoltageP_PokeINVRMtrA_DC_Volt' */
                /* Outputs for Atomic SubSystem: '<S809>/Poke' */
                /* FunctionCaller: '<S811>/Function Caller' */
                Rte_Call_PokeINVR_U_MtrA_DC_Volt_PokeINVR_U_MtrA_DC_Volt
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_U_M,
                     CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__gy);

                /* End of Outputs for SubSystem: '<S809>/Poke' */
                /* End of Outputs for SubSystem: '<S802>/MCPADCVoltageP_PokeINVRMtrA_DC_Volt' */
#endif

#if Rte_SysCon_VrntCR4B_MCPADCVoltageP_PokeINVRMtrC_DC_Volt

                /* Outputs for Atomic SubSystem: '<S802>/MCPADCVoltageP_PokeINVRMtrC_DC_Volt' */
                /* Outputs for Atomic SubSystem: '<S810>/Poke1' */
                /* FunctionCaller: '<S812>/Function Caller' */
                Rte_Call_PokeINVR_U_MtrC_DC_Volt_PokeINVR_U_MtrC_DC_Volt
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_U_M,
                     CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__gy);

                /* End of Outputs for SubSystem: '<S810>/Poke1' */
                /* End of Outputs for SubSystem: '<S802>/MCPADCVoltageP_PokeINVRMtrC_DC_Volt' */
                /* End of Outputs for SubSystem: '<S799>/Poke' */
#endif

            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S804>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPA_DC_Voltage_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S799>/Fsft' */
        /* Event: '<S804>:39' */
#if Rte_SysCon_VrntCR4B_MCPADCVoltageP_FsftINVRMtrA_DC_Volt

        /* Outputs for Atomic SubSystem: '<S801>/MCPADCVoltageP_FsftINVRMtrA_DC_Volt' */
        /* Outputs for Atomic SubSystem: '<S805>/Failsoft' */
        /* FunctionCaller: '<S807>/Function Caller' */
        Rte_Call_FsftINVR_U_MtrA_DC_Volt_FsftINVR_U_MtrA_DC_Volt();

        /* End of Outputs for SubSystem: '<S805>/Failsoft' */
        /* End of Outputs for SubSystem: '<S801>/MCPADCVoltageP_FsftINVRMtrA_DC_Volt' */
#endif

#if Rte_SysCon_VrntCR4B_MCPADCVoltageP_FsftINVRMtrC_DC_Volt

        /* Outputs for Atomic SubSystem: '<S801>/MCPADCVoltageP_FsftINVRMtrC_DC_Volt' */
        /* Outputs for Atomic SubSystem: '<S806>/Failsoft1' */
        /* FunctionCaller: '<S808>/Function Caller' */
        Rte_Call_FsftINVR_U_MtrC_DC_Volt_FsftINVR_U_MtrC_DC_Volt();

        /* End of Outputs for SubSystem: '<S806>/Failsoft1' */
        /* End of Outputs for SubSystem: '<S801>/MCPADCVoltageP_FsftINVRMtrC_DC_Volt' */
        /* End of Outputs for SubSystem: '<S799>/Fsft' */
#endif

        /* Transition: '<S804>:113' */
        /* Transition: '<S804>:115' */
        /* Transition: '<S804>:114' */
    }

    /* End of Chart: '<S800>/Chart' */
    /* End of Outputs for SubSystem: '<S757>/MCPA_DC_Voltage_P' */
    /* End of Outputs for SubSystem: '<S14>/MCPA_DC_Voltage_P' */
    /* Transition: '<S804>:107' */
#endif

    /* SignalConversion generated from: '<S2>/VeCRDB_e_MCPA_DerateResn_P' */
#if (Rte_SysCon_VrntCR4B_MCPADerateReasonP && Rte_SysCon_VrntCR4B_MCPADerateReasonP_PokeINVRMtrA_DrtRsn) || (Rte_SysCon_VrntCR4B_MCPADerateReasonP && Rte_SysCon_VrntCR4B_MCPADerateReasonP_PokeINVRMtrC_DrtRsn)

    /* SignalConversion generated from: '<S2>/VeCRDB_e_MCPA_DerateResn_P' incorporates:
     *  Inport: '<Root>/VeCRDB_e_MCPA_DerateResn_P'
     */
    rtb_TmpSignalConversionAtVeC_af = Rte_Read_VeCRDB_e_MCPA_DerateResn_P_Value(
        &CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_e_M);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_e_MCPA_DerateResn_P' */
#if Rte_SysCon_VrntCR4B_MCPADerateReasonP

    /* Outputs for Atomic SubSystem: '<S14>/MCPA_DerateReason_P' */
    /* Inport: '<Root>/VeCRDB_y_MCPA_DerateResn_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S821>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPA_DerateResn_P_SigSts_Value(&tmpRead_3);

    /* Outputs for Atomic SubSystem: '<S758>/MCPA_DerateReason_P' */
    /* Chart: '<S818>/Chart' */
    if ((((uint32)tmpRead_3) & 3U) != 0U)
    {
        /* Transition: '<S821>:100' */
        /* Transition: '<S821>:103' */
        /* Transition: '<S821>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPA_DerateResn_P_CallStatus = 2U;

        /* Event: '<S821>:39' */
        /* Transition: '<S821>:113' */
        /* Transition: '<S821>:115' */
        /* Transition: '<S821>:114' */
    }
    else
    {
        /* Transition: '<S821>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3) & 4U) != 0U)
        {
            /* Transition: '<S821>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S821>:88' */
                /* Transition: '<S821>:111' */
                /* Call Fsft */
                VeCRDB_y_MCPA_DerateResn_P_CallStatus = 2U;

                /* Event: '<S821>:39' */
                /* Transition: '<S821>:113' */
                /* Transition: '<S821>:115' */
                /* Transition: '<S821>:114' */
            }
            else
            {
                /* Transition: '<S821>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPA_DerateResn_P_CallStatus = 3U;

                /* Event: '<S821>:40' */
                /* Transition: '<S821>:115' */
                /* Transition: '<S821>:114' */
            }
        }
        else
        {
            /* Transition: '<S821>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_af) == 133)
            {
                /* Transition: '<S821>:95' */
                /* Transition: '<S821>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPA_DerateResn_P_CallStatus = 4U;

                /* Transition: '<S821>:114' */
            }
            else
            {
                /* Transition: '<S821>:120' */
                /* Transition: '<S821>:117' */
                /* Call Poke */
                VeCRDB_y_MCPA_DerateResn_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S817>/Poke' */
                /* Event: '<S821>:38' */
#if Rte_SysCon_VrntCR4B_MCPADerateReasonP_PokeINVRMtrA_DrtRsn

                /* Outputs for Atomic SubSystem: '<S819>/MCPADerateReasonP_PokeINVRMtrA_DrtRsn' */
                /* Outputs for Atomic SubSystem: '<S822>/Poke' */
                /* FunctionCaller: '<S824>/Function Caller' */
                Rte_Call_PokeINVR_e_MtrA_DrtRsn_PokeINVR_e_MtrA_DrtRsn
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_e_M);

                /* End of Outputs for SubSystem: '<S822>/Poke' */
                /* End of Outputs for SubSystem: '<S819>/MCPADerateReasonP_PokeINVRMtrA_DrtRsn' */
#endif

#if Rte_SysCon_VrntCR4B_MCPADerateReasonP_PokeINVRMtrC_DrtRsn

                /* Outputs for Atomic SubSystem: '<S819>/MCPADerateReasonP_PokeINVRMtrC_DrtRsn' */
                /* Outputs for Atomic SubSystem: '<S823>/Poke1' */
                /* FunctionCaller: '<S825>/Function Caller' */
                Rte_Call_PokeINVR_e_MtrC_DrtRsn_PokeINVR_e_MtrC_DrtRsn
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_e_M);

                /* End of Outputs for SubSystem: '<S823>/Poke1' */
                /* End of Outputs for SubSystem: '<S819>/MCPADerateReasonP_PokeINVRMtrC_DrtRsn' */
                /* End of Outputs for SubSystem: '<S817>/Poke' */
#endif

            }
        }
    }

    /* End of Chart: '<S818>/Chart' */
    /* End of Outputs for SubSystem: '<S758>/MCPA_DerateReason_P' */
    /* End of Outputs for SubSystem: '<S14>/MCPA_DerateReason_P' */
    /* Transition: '<S821>:107' */
#endif

    /* SignalConversion generated from: '<S2>/VeCRDB_T_MCPA_InvertTemp_P' */
#if (Rte_SysCon_VrntCR4B_MCPAInverterTempP && Rte_SysCon_VrntCR4B_MCPAInverterTempP_PokeINVRMtrA_InvrtrTemp) || (Rte_SysCon_VrntCR4B_MCPAInverterTempP && Rte_SysCon_VrntCR4B_MCPAInverterTempP_PokeINVRMtrC_InvrtrTemp)

    /* SignalConversion generated from: '<S2>/VeCRDB_T_MCPA_InvertTemp_P' incorporates:
     *  Inport: '<Root>/VeCRDB_T_MCPA_InvertTemp_P'
     */
    rtb_TmpSignalConversionAtVeC_pn = Rte_Read_VeCRDB_T_MCPA_InvertTemp_P_Value(
        &CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_T_p);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_T_MCPA_InvertTemp_P' */
#if Rte_SysCon_VrntCR4B_MCPAInverterTempP

    /* Outputs for Atomic SubSystem: '<S14>/MCPA_Inverter_Temp_P' */
    /* Inport: '<Root>/VeCRDB_y_MCPA_InvertTemp_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S831>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPA_InvertTemp_P_SigSts_Value(&tmpRead_4);

    /* Outputs for Atomic SubSystem: '<S759>/MCPA_Inverter_Temp_P' */
    /* Chart: '<S827>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_4) & 3U) != 0U)
    {
        /* Transition: '<S831>:100' */
        /* Transition: '<S831>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S831>:104' */
        /*  MM */
        if ((((uint32)tmpRead_4) & 4U) != 0U)
        {
            /* Transition: '<S831>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S831>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S831>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPA_InvertTemp_P_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S826>/Tmot' */
                /* Event: '<S831>:40' */
#if Rte_SysCon_VrntCR4B_MCPAInverterTempP_TmotINVRMtrA_InvrtrTemp

                /* Outputs for Atomic SubSystem: '<S830>/MCPAInverterTempP_TmotINVRMtrA_InvrtrTemp' */
                /* Outputs for Atomic SubSystem: '<S840>/Timeout' */
                /* FunctionCaller: '<S842>/Function Caller' */
                Rte_Call_TmotINVR_b_MtrA_InvrtrTemp_TmotINVR_b_MtrA_InvrtrTemp();

                /* End of Outputs for SubSystem: '<S840>/Timeout' */
                /* End of Outputs for SubSystem: '<S830>/MCPAInverterTempP_TmotINVRMtrA_InvrtrTemp' */
#endif

#if Rte_SysCon_VrntCR4B_MCPAInverterTempP_TmotINVRMtrC_InvrtrTemp

                /* Outputs for Atomic SubSystem: '<S830>/MCPAInverterTempP_TmotINVRMtrC_InvrtrTemp' */
                /* Outputs for Atomic SubSystem: '<S841>/Timeout1' */
                /* FunctionCaller: '<S843>/Function Caller' */
                Rte_Call_TmotINVR_b_MtrC_InvrtrTemp_TmotINVR_b_MtrC_InvrtrTemp();

                /* End of Outputs for SubSystem: '<S841>/Timeout1' */
                /* End of Outputs for SubSystem: '<S830>/MCPAInverterTempP_TmotINVRMtrC_InvrtrTemp' */
                /* End of Outputs for SubSystem: '<S826>/Tmot' */
#endif

                /* Transition: '<S831>:115' */
                /* Transition: '<S831>:114' */
            }
        }
        else
        {
            /* Transition: '<S831>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_pn) == 133)
            {
                /* Transition: '<S831>:95' */
                /* Transition: '<S831>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPA_InvertTemp_P_CallStatus = 4U;

                /* Transition: '<S831>:114' */
            }
            else
            {
                /* Transition: '<S831>:120' */
                if ((((uint32)tmpRead_4) & 8U) != 0U)
                {
                    /* Transition: '<S831>:122' */
                    /* Transition: '<S831>:125' */
                    FA_out_gb = true;

                    /* Transition: '<S831>:126' */
                }
                else
                {
                    /* Transition: '<S831>:124' */
                    FA_out_gb = false;
                }

                /* Transition: '<S831>:117' */
                /* Call Poke */
                VeCRDB_y_MCPA_InvertTemp_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S826>/Poke' */
                /* Event: '<S831>:38' */
#if Rte_SysCon_VrntCR4B_MCPAInverterTempP_PokeINVRMtrA_InvrtrTemp

                /* Outputs for Atomic SubSystem: '<S829>/MCPAInverterTempP_PokeINVRMtrA_InvrtrTemp' */
                /* Outputs for Atomic SubSystem: '<S836>/Poke' */
                /* FunctionCaller: '<S838>/Function Caller' */
                Rte_Call_PokeINVR_T_MtrA_InvrtrTemp_PokeINVR_T_MtrA_InvrtrTemp
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_T_p, FA_out_gb);

                /* End of Outputs for SubSystem: '<S836>/Poke' */
                /* End of Outputs for SubSystem: '<S829>/MCPAInverterTempP_PokeINVRMtrA_InvrtrTemp' */
#endif

#if Rte_SysCon_VrntCR4B_MCPAInverterTempP_PokeINVRMtrC_InvrtrTemp

                /* Outputs for Atomic SubSystem: '<S829>/MCPAInverterTempP_PokeINVRMtrC_InvrtrTemp' */
                /* Outputs for Atomic SubSystem: '<S837>/Poke1' */
                /* FunctionCaller: '<S839>/Function Caller' */
                Rte_Call_PokeINVR_T_MtrC_InvrtrTemp_PokeINVR_T_MtrC_InvrtrTemp
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_T_p, FA_out_gb);

                /* End of Outputs for SubSystem: '<S837>/Poke1' */
                /* End of Outputs for SubSystem: '<S829>/MCPAInverterTempP_PokeINVRMtrC_InvrtrTemp' */
                /* End of Outputs for SubSystem: '<S826>/Poke' */
#endif

            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S831>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPA_InvertTemp_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S826>/Fsft' */
        /* Event: '<S831>:39' */
#if Rte_SysCon_VrntCR4B_MCPAInverterTempP_FsftINVRMtrA_InvrtrTemp

        /* Outputs for Atomic SubSystem: '<S828>/MCPAInverterTempP_FsftINVRMtrA_InvrtrTemp' */
        /* Outputs for Atomic SubSystem: '<S832>/Failsoft' */
        /* FunctionCaller: '<S834>/Function Caller' */
        Rte_Call_FsftINVR_T_MtrA_InvrtrTemp_FsftINVR_T_MtrA_InvrtrTemp();

        /* End of Outputs for SubSystem: '<S832>/Failsoft' */
        /* End of Outputs for SubSystem: '<S828>/MCPAInverterTempP_FsftINVRMtrA_InvrtrTemp' */
#endif

#if Rte_SysCon_VrntCR4B_MCPAInverterTempP_FsftINVRMtrC_InvrtrTemp

        /* Outputs for Atomic SubSystem: '<S828>/MCPAInverterTempP_FsftINVRMtrC_InvrtrTemp' */
        /* Outputs for Atomic SubSystem: '<S833>/Failsoft1' */
        /* FunctionCaller: '<S835>/Function Caller' */
        Rte_Call_FsftINVR_T_MtrC_InvrtrTemp_FsftINVR_T_MtrC_InvrtrTemp();

        /* End of Outputs for SubSystem: '<S833>/Failsoft1' */
        /* End of Outputs for SubSystem: '<S828>/MCPAInverterTempP_FsftINVRMtrC_InvrtrTemp' */
        /* End of Outputs for SubSystem: '<S826>/Fsft' */
#endif

        /* Transition: '<S831>:113' */
        /* Transition: '<S831>:115' */
        /* Transition: '<S831>:114' */
    }

    /* End of Chart: '<S827>/Chart' */
    /* End of Outputs for SubSystem: '<S759>/MCPA_Inverter_Temp_P' */
    /* End of Outputs for SubSystem: '<S14>/MCPA_Inverter_Temp_P' */
    /* Transition: '<S831>:107' */
#endif

    /* SignalConversion generated from: '<S2>/VeCRDB_T_MCPAPIMDCSdBusTmpP' */
#if (Rte_SysCon_VrntCR4B_MCPAPIMDCSideBusbarTempP && Rte_SysCon_VrntCR4B_MCPAPIMDCSideBusbarTempP_PokeINVRGPIMDCBusBarTemp) || (Rte_SysCon_VrntCR4B_MCPAPIMDCSideBusbarTempP && Rte_SysCon_VrntCR4B_MCPAPIMDCSideBusbarTempP_PokeINVRMtrCBusBarTemp)

    /* SignalConversion generated from: '<S2>/VeCRDB_T_MCPAPIMDCSdBusTmpP' incorporates:
     *  Inport: '<Root>/VeCRDB_T_MCPAPIMDCSdBusTmpP'
     */
    rtb_TmpSignalConversionAtVeC_pv = Rte_Read_VeCRDB_T_MCPAPIMDCSdBusTmpP_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__p3);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_T_MCPAPIMDCSdBusTmpP' */
#if Rte_SysCon_VrntCR4B_MCPAPIMDCSideBusbarTempP

    /* Outputs for Atomic SubSystem: '<S14>/MCPA_PIM_DC_Side_Busbar_Temp_P' */
    /* Inport: '<Root>/VeCRDB_y_MCPAPIMDCSdBusTmpP_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S849>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPAPIMDCSdBusTmpP_SigSts_Value(&tmpRead_5);

    /* Outputs for Atomic SubSystem: '<S760>/MCPA_PIM_DC_Side_Busbar_Temp_P' */
    /* Chart: '<S845>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_5) & 3U) != 0U)
    {
        /* Transition: '<S849>:100' */
        /* Transition: '<S849>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S849>:104' */
        /*  MM */
        if ((((uint32)tmpRead_5) & 4U) != 0U)
        {
            /* Transition: '<S849>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S849>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S849>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPAPIMDCSdBusTmpP_CallStatus = 3U;

                /* Event: '<S849>:40' */
                /* Transition: '<S849>:115' */
                /* Transition: '<S849>:114' */
            }
        }
        else
        {
            /* Transition: '<S849>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_pv) == 133)
            {
                /* Transition: '<S849>:95' */
                /* Transition: '<S849>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPAPIMDCSdBusTmpP_CallStatus = 4U;

                /* Transition: '<S849>:114' */
            }
            else
            {
                /* Transition: '<S849>:120' */
                if ((((uint32)tmpRead_5) & 8U) != 0U)
                {
                    /* Transition: '<S849>:122' */
                    /* Transition: '<S849>:125' */
                    FA_out_gb = true;

                    /* Transition: '<S849>:126' */
                }
                else
                {
                    /* Transition: '<S849>:124' */
                    FA_out_gb = false;
                }

                /* Transition: '<S849>:117' */
                /* Call Poke */
                VeCRDB_y_MCPAPIMDCSdBusTmpP_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S844>/Poke' */
                /* Event: '<S849>:38' */
#if Rte_SysCon_VrntCR4B_MCPAPIMDCSideBusbarTempP_PokeINVRGPIMDCBusBarTemp

                /* Outputs for Atomic SubSystem: '<S847>/MCPAPIMDCSideBusbarTempP_PokeINVRGPIMDCBusBarTemp' */
                /* Outputs for Atomic SubSystem: '<S854>/Poke' */
                /* FunctionCaller: '<S856>/Function Caller' */
                Rte_Call_PokeINVR_T_GPIMDCBusBarTemp_PokeINVR_T_GPIMDCBusBarTemp
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__p3, FA_out_gb);

                /* End of Outputs for SubSystem: '<S854>/Poke' */
                /* End of Outputs for SubSystem: '<S847>/MCPAPIMDCSideBusbarTempP_PokeINVRGPIMDCBusBarTemp' */
#endif

#if Rte_SysCon_VrntCR4B_MCPAPIMDCSideBusbarTempP_PokeINVRMtrCBusBarTemp

                /* Outputs for Atomic SubSystem: '<S847>/MCPAPIMDCSideBusbarTempP_PokeINVRMtrCBusBarTemp' */
                /* Outputs for Atomic SubSystem: '<S855>/Poke1' */
                /* FunctionCaller: '<S857>/Function Caller' */
                Rte_Call_PokeINVR_T_MtrCBusBarTemp_PokeINVR_T_MtrCBusBarTemp
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__p3, FA_out_gb);

                /* End of Outputs for SubSystem: '<S855>/Poke1' */
                /* End of Outputs for SubSystem: '<S847>/MCPAPIMDCSideBusbarTempP_PokeINVRMtrCBusBarTemp' */
                /* End of Outputs for SubSystem: '<S844>/Poke' */
#endif

            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S849>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPAPIMDCSdBusTmpP_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S844>/Fsft' */
        /* Event: '<S849>:39' */
#if Rte_SysCon_VrntCR4B_MCPAPIMDCSideBusbarTempP_FsftINVRGPIMDCBusBarTemp

        /* Outputs for Atomic SubSystem: '<S846>/MCPAPIMDCSideBusbarTempP_FsftINVRGPIMDCBusBarTemp' */
        /* Outputs for Atomic SubSystem: '<S850>/Failsoft' */
        /* FunctionCaller: '<S852>/Function Caller' */
        Rte_Call_FsftINVR_T_GPIMDCBusBarTemp_FsftINVR_T_GPIMDCBusBarTemp();

        /* End of Outputs for SubSystem: '<S850>/Failsoft' */
        /* End of Outputs for SubSystem: '<S846>/MCPAPIMDCSideBusbarTempP_FsftINVRGPIMDCBusBarTemp' */
#endif

#if Rte_SysCon_VrntCR4B_MCPAPIMDCSideBusbarTempP_FsftINVRMtrCBusBarTemp

        /* Outputs for Atomic SubSystem: '<S846>/MCPAPIMDCSideBusbarTempP_FsftINVRMtrCBusBarTemp' */
        /* Outputs for Atomic SubSystem: '<S851>/Failsoft1' */
        /* FunctionCaller: '<S853>/Function Caller' */
        Rte_Call_FsftINVR_T_MtrCBusBarTemp_FsftINVR_T_MtrCBusBarTemp();

        /* End of Outputs for SubSystem: '<S851>/Failsoft1' */
        /* End of Outputs for SubSystem: '<S846>/MCPAPIMDCSideBusbarTempP_FsftINVRMtrCBusBarTemp' */
        /* End of Outputs for SubSystem: '<S844>/Fsft' */
#endif

        /* Transition: '<S849>:113' */
        /* Transition: '<S849>:115' */
        /* Transition: '<S849>:114' */
    }

    /* End of Chart: '<S845>/Chart' */
    /* End of Outputs for SubSystem: '<S760>/MCPA_PIM_DC_Side_Busbar_Temp_P' */
    /* End of Outputs for SubSystem: '<S14>/MCPA_PIM_DC_Side_Busbar_Temp_P' */
    /* Transition: '<S849>:107' */
#endif

    /* SignalConversion generated from: '<S2>/VeCRDB_T_MCPARotorTemp_P' */
#if (Rte_SysCon_VrntCR4B_MCPARotorTemperatureP && Rte_SysCon_VrntCR4B_MCPARotorTemperatureP_PokeINVRMtrA_RotrTemp) || (Rte_SysCon_VrntCR4B_MCPARotorTemperatureP && Rte_SysCon_VrntCR4B_MCPARotorTemperatureP_PokeINVRMtrC_RotrTemp)

    /* SignalConversion generated from: '<S2>/VeCRDB_T_MCPARotorTemp_P' incorporates:
     *  Inport: '<Root>/VeCRDB_T_MCPARotorTemp_P'
     */
    rtb_TmpSignalConversionAtVeC_pj = Rte_Read_VeCRDB_T_MCPARotorTemp_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_T_e);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_T_MCPARotorTemp_P' */
#if Rte_SysCon_VrntCR4B_MCPARotorTemperatureP

    /* Outputs for Atomic SubSystem: '<S14>/MCPA_Rotor_Temperature_P' */
    /* Inport: '<Root>/VeCRDB_y_MCPARotorTemp_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S863>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPARotorTemp_P_SigSts_Value(&tmpRead_6);

    /* Outputs for Atomic SubSystem: '<S761>/MCPA_Rotor_Temperature_P' */
    /* Chart: '<S859>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_6) & 3U) != 0U)
    {
        /* Transition: '<S863>:100' */
        /* Transition: '<S863>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S863>:104' */
        /*  MM */
        if ((((uint32)tmpRead_6) & 4U) != 0U)
        {
            /* Transition: '<S863>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S863>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S863>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPARotorTemp_P_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S858>/Tmot' */
                /* Event: '<S863>:40' */
#if Rte_SysCon_VrntCR4B_MCPARotorTemperatureP_TmotINVRMtrA_RotrTemp

                /* Outputs for Atomic SubSystem: '<S862>/MCPARotorTemperatureP_TmotINVRMtrA_RotrTemp' */
                /* Outputs for Atomic SubSystem: '<S872>/Timeout' */
                /* FunctionCaller: '<S874>/Function Caller' */
                Rte_Call_TmotINVR_b_MtrA_RotrTemp_TmotINVR_b_MtrA_RotrTemp();

                /* End of Outputs for SubSystem: '<S872>/Timeout' */
                /* End of Outputs for SubSystem: '<S862>/MCPARotorTemperatureP_TmotINVRMtrA_RotrTemp' */
#endif

#if Rte_SysCon_VrntCR4B_MCPARotorTemperatureP_TmotINVRMtrC_RotrTemp

                /* Outputs for Atomic SubSystem: '<S862>/MCPARotorTemperatureP_TmotINVRMtrC_RotrTemp' */
                /* Outputs for Atomic SubSystem: '<S873>/Timeout1' */
                /* FunctionCaller: '<S875>/Function Caller' */
                Rte_Call_TmotINVR_b_MtrC_RotrTemp_TmotINVR_b_MtrC_RotrTemp();

                /* End of Outputs for SubSystem: '<S873>/Timeout1' */
                /* End of Outputs for SubSystem: '<S862>/MCPARotorTemperatureP_TmotINVRMtrC_RotrTemp' */
                /* End of Outputs for SubSystem: '<S858>/Tmot' */
#endif

                /* Transition: '<S863>:115' */
                /* Transition: '<S863>:114' */
            }
        }
        else
        {
            /* Transition: '<S863>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_pj) == 133)
            {
                /* Transition: '<S863>:95' */
                /* Transition: '<S863>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPARotorTemp_P_CallStatus = 4U;

                /* Transition: '<S863>:114' */
            }
            else
            {
                /* Transition: '<S863>:120' */
                if ((((uint32)tmpRead_6) & 8U) != 0U)
                {
                    /* Transition: '<S863>:122' */
                    /* Transition: '<S863>:125' */
                    FA_out_gb = true;

                    /* Transition: '<S863>:126' */
                }
                else
                {
                    /* Transition: '<S863>:124' */
                    FA_out_gb = false;
                }

                /* Transition: '<S863>:117' */
                /* Call Poke */
                VeCRDB_y_MCPARotorTemp_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S858>/Poke' */
                /* Event: '<S863>:38' */
#if Rte_SysCon_VrntCR4B_MCPARotorTemperatureP_PokeINVRMtrA_RotrTemp

                /* Outputs for Atomic SubSystem: '<S861>/MCPARotorTemperatureP_PokeINVRMtrA_RotrTemp' */
                /* Outputs for Atomic SubSystem: '<S868>/Poke' */
                /* FunctionCaller: '<S870>/Function Caller' */
                Rte_Call_PokeINVR_T_MtrA_RotrTemp_PokeINVR_T_MtrA_RotrTemp
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_T_e, FA_out_gb);

                /* End of Outputs for SubSystem: '<S868>/Poke' */
                /* End of Outputs for SubSystem: '<S861>/MCPARotorTemperatureP_PokeINVRMtrA_RotrTemp' */
#endif

#if Rte_SysCon_VrntCR4B_MCPARotorTemperatureP_PokeINVRMtrC_RotrTemp

                /* Outputs for Atomic SubSystem: '<S861>/MCPARotorTemperatureP_PokeINVRMtrC_RotrTemp' */
                /* Outputs for Atomic SubSystem: '<S869>/Poke1' */
                /* FunctionCaller: '<S871>/Function Caller' */
                Rte_Call_PokeINVR_T_MtrC_RotrTemp_PokeINVR_T_MtrC_RotrTemp
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_T_e, FA_out_gb);

                /* End of Outputs for SubSystem: '<S869>/Poke1' */
                /* End of Outputs for SubSystem: '<S861>/MCPARotorTemperatureP_PokeINVRMtrC_RotrTemp' */
                /* End of Outputs for SubSystem: '<S858>/Poke' */
#endif

            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S863>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPARotorTemp_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S858>/Fsft' */
        /* Event: '<S863>:39' */
#if Rte_SysCon_VrntCR4B_MCPARotorTemperatureP_FsftINVRMtrA_RotrTemp

        /* Outputs for Atomic SubSystem: '<S860>/MCPARotorTemperatureP_FsftINVRMtrA_RotrTemp' */
        /* Outputs for Atomic SubSystem: '<S864>/Failsoft' */
        /* FunctionCaller: '<S866>/Function Caller' */
        Rte_Call_FsftINVR_T_MtrA_RotrTemp_FsftINVR_T_MtrA_RotrTemp();

        /* End of Outputs for SubSystem: '<S864>/Failsoft' */
        /* End of Outputs for SubSystem: '<S860>/MCPARotorTemperatureP_FsftINVRMtrA_RotrTemp' */
#endif

#if Rte_SysCon_VrntCR4B_MCPARotorTemperatureP_FsftINVRMtrC_RotrTemp

        /* Outputs for Atomic SubSystem: '<S860>/MCPARotorTemperatureP_FsftINVRMtrC_RotrTemp' */
        /* Outputs for Atomic SubSystem: '<S865>/Failsoft1' */
        /* FunctionCaller: '<S867>/Function Caller' */
        Rte_Call_FsftINVR_T_MtrC_RotrTemp_FsftINVR_T_MtrC_RotrTemp();

        /* End of Outputs for SubSystem: '<S865>/Failsoft1' */
        /* End of Outputs for SubSystem: '<S860>/MCPARotorTemperatureP_FsftINVRMtrC_RotrTemp' */
        /* End of Outputs for SubSystem: '<S858>/Fsft' */
#endif

        /* Transition: '<S863>:113' */
        /* Transition: '<S863>:115' */
        /* Transition: '<S863>:114' */
    }

    /* End of Chart: '<S859>/Chart' */
    /* End of Outputs for SubSystem: '<S761>/MCPA_Rotor_Temperature_P' */
    /* End of Outputs for SubSystem: '<S14>/MCPA_Rotor_Temperature_P' */
    /* Transition: '<S863>:107' */
#endif

    /* SignalConversion generated from: '<S2>/VeCRDB_b_MCPAServLampReq_P' */
#if (Rte_SysCon_VrntCR4B_MCPAServiceLampRequestP && Rte_SysCon_VrntCR4B_MCPAServiceLampRequestP_PokeHMIRMCPA_Service_Lamp_Requ) || (Rte_SysCon_VrntCR4B_MCPAServiceLampRequestP && Rte_SysCon_VrntCR4B_MCPAServiceLampRequestP_PokeHMIRMCPC_Service_Lamp_Requ)

    /* SignalConversion generated from: '<S2>/VeCRDB_b_MCPAServLampReq_P' incorporates:
     *  Inport: '<Root>/VeCRDB_b_MCPAServLampReq_P'
     */
    rtb_TmpSignalConversionAtVeC_m0 = Rte_Read_VeCRDB_b_MCPAServLampReq_P_Value(
        &CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__dk);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_b_MCPAServLampReq_P' */
#if Rte_SysCon_VrntCR4B_MCPAServiceLampRequestP

    /* Outputs for Atomic SubSystem: '<S14>/MCPA_Service_Lamp_Request_P' */
    /* Inport: '<Root>/VeCRDB_y_MCPAServLampReq_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S880>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPAServLampReq_P_SigSts_Value(&tmpRead_7);

    /* Outputs for Atomic SubSystem: '<S762>/MCPA_Service_Lamp_Request_P' */
    /* Chart: '<S877>/Chart' */
    if ((((uint32)tmpRead_7) & 3U) != 0U)
    {
        /* Transition: '<S880>:100' */
        /* Transition: '<S880>:103' */
        /* Transition: '<S880>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPAServLampReq_P_CallStatus = 2U;

        /* Event: '<S880>:39' */
        /* Transition: '<S880>:113' */
        /* Transition: '<S880>:115' */
        /* Transition: '<S880>:114' */
    }
    else
    {
        /* Transition: '<S880>:104' */
        /*  MM */
        if ((((uint32)tmpRead_7) & 4U) != 0U)
        {
            /* Transition: '<S880>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S880>:88' */
                /* Transition: '<S880>:111' */
                /* Call Fsft */
                VeCRDB_y_MCPAServLampReq_P_CallStatus = 2U;

                /* Event: '<S880>:39' */
                /* Transition: '<S880>:113' */
                /* Transition: '<S880>:115' */
                /* Transition: '<S880>:114' */
            }
            else
            {
                /* Transition: '<S880>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPAServLampReq_P_CallStatus = 3U;

                /* Event: '<S880>:40' */
                /* Transition: '<S880>:115' */
                /* Transition: '<S880>:114' */
            }
        }
        else
        {
            /* Transition: '<S880>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_m0) == 133)
            {
                /* Transition: '<S880>:95' */
                /* Transition: '<S880>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPAServLampReq_P_CallStatus = 4U;

                /* Transition: '<S880>:114' */
            }
            else
            {
                /* Transition: '<S880>:120' */
                /* Transition: '<S880>:117' */
                /* Call Poke */
                VeCRDB_y_MCPAServLampReq_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S876>/Poke' */
                /* Event: '<S880>:38' */
#if Rte_SysCon_VrntCR4B_MCPAServiceLampRequestP_PokeHMIRMCPA_Service_Lamp_Requ

                /* Outputs for Atomic SubSystem: '<S878>/MCPAServiceLampRequestP_PokeHMIRMCPA_Service_Lamp_Request' */
                /* Outputs for Atomic SubSystem: '<S881>/Poke' */
                /* FunctionCaller: '<S883>/Function Caller' */
                Rte_Call_PokeHMIR_b_MCPA_Service_Lamp_Request_PokeHMIR_b_MCPA_Service_Lamp_Request
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__dk);

                /* End of Outputs for SubSystem: '<S881>/Poke' */
                /* End of Outputs for SubSystem: '<S878>/MCPAServiceLampRequestP_PokeHMIRMCPA_Service_Lamp_Request' */
#endif

#if Rte_SysCon_VrntCR4B_MCPAServiceLampRequestP_PokeHMIRMCPC_Service_Lamp_Requ

                /* Outputs for Atomic SubSystem: '<S878>/MCPAServiceLampRequestP_PokeHMIRMCPC_Service_Lamp_Request' */
                /* Outputs for Atomic SubSystem: '<S882>/Poke1' */
                /* FunctionCaller: '<S884>/Function Caller' */
                Rte_Call_PokeHMIR_b_MCPC_Service_Lamp_Request_PokeHMIR_b_MCPC_Service_Lamp_Request
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__dk);

                /* End of Outputs for SubSystem: '<S882>/Poke1' */
                /* End of Outputs for SubSystem: '<S878>/MCPAServiceLampRequestP_PokeHMIRMCPC_Service_Lamp_Request' */
                /* End of Outputs for SubSystem: '<S876>/Poke' */
#endif

            }
        }
    }

    /* End of Chart: '<S877>/Chart' */
    /* End of Outputs for SubSystem: '<S762>/MCPA_Service_Lamp_Request_P' */
    /* End of Outputs for SubSystem: '<S14>/MCPA_Service_Lamp_Request_P' */
    /* Transition: '<S880>:107' */
#endif

    /* SignalConversion generated from: '<S2>/VeCRDB_e_MCPB_6SO_Status_P_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_MCPB_6SO_Status_P_ErrSts'
     */
    rtb_TmpSignalConversionAtVeC_ng = Rte_Read_VeCRDB_y_MCPB_6SO_Status_P_Value(
        &CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_p);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_MCPB_6SO_Status_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S911>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPB_6SO_Status_P_SigSts_Value(&tmpRead_2t);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S908>/Chart' */
    if ((((uint32)tmpRead_2t) & 3U) != 0U)
    {
        /* Transition: '<S911>:100' */
        /* Transition: '<S911>:103' */
        /* Transition: '<S911>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPB_6SO_Status_P_CallStatus = 2U;

        /* Event: '<S911>:39' */
        /* Transition: '<S911>:113' */
        /* Transition: '<S911>:115' */
        /* Transition: '<S911>:114' */
    }
    else
    {
        /* Transition: '<S911>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2t) & 4U) != 0U)
        {
            /* Transition: '<S911>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S911>:88' */
                /* Transition: '<S911>:111' */
                /* Call Fsft */
                VeCRDB_y_MCPB_6SO_Status_P_CallStatus = 2U;

                /* Event: '<S911>:39' */
                /* Transition: '<S911>:113' */
                /* Transition: '<S911>:115' */
                /* Transition: '<S911>:114' */
            }
            else
            {
                /* Transition: '<S911>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPB_6SO_Status_P_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S885>/Tmot' */
                /* FunctionCaller: '<S913>/Function Caller' */
                /* Event: '<S911>:40' */
                Rte_Call_TmotINVR_b_MtrB_6SOEnbl_TmotINVR_b_MtrB_6SOEnbl();

                /* End of Outputs for SubSystem: '<S885>/Tmot' */
                /* Transition: '<S911>:115' */
                /* Transition: '<S911>:114' */
            }
        }
        else
        {
            /* Transition: '<S911>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ng) == 133)
            {
                /* Transition: '<S911>:95' */
                /* Transition: '<S911>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPB_6SO_Status_P_CallStatus = 4U;

                /* Transition: '<S911>:114' */
            }
            else
            {
                /* Transition: '<S911>:120' */
                if ((((uint32)tmpRead_2t) & 8U) != 0U)
                {
                    /* Transition: '<S911>:122' */
                    /* Transition: '<S911>:125' */
                    FA_out_gb = true;

                    /* Transition: '<S911>:126' */
                }
                else
                {
                    /* Transition: '<S911>:124' */
                    FA_out_gb = false;
                }

                /* Transition: '<S911>:117' */
                /* Call Poke */
                VeCRDB_y_MCPB_6SO_Status_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S885>/Poke' */
                /* FunctionCaller: '<S912>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S912>/Data Type Conversion'
                 */
                /* Event: '<S911>:38' */
                Rte_Call_PokeINVR_e_MtrB_6SOEnbl_PokeINVR_e_MtrB_6SOEnbl((sint16)
                    CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_p, FA_out_gb);

                /* End of Outputs for SubSystem: '<S885>/Poke' */
            }
        }
    }

    /* End of Chart: '<S908>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_MCPB_AccelRaw_P_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_MCPB_AccelRaw_P_ErrSts'
     */
    /* Transition: '<S911>:107' */
    rtb_TmpSignalConversionAtVeC_p5 = Rte_Read_VeCRDB_y_MCPB_AccelRaw_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_h);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_MCPB_AccelRaw_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S918>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPB_AccelRaw_P_SigSts_Value(&tmpRead_2u);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S914>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_b_MCPB_AccelRawV_P_FD16'
     */
    guard1 = false;
    if ((((uint32)tmpRead_2u) & 3U) != 0U)
    {
        /* Transition: '<S918>:100' */
        /* Transition: '<S918>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S918>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2u) & 4U) != 0U)
        {
            /* Transition: '<S918>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S918>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S918>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPB_AccelRaw_P_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S886>/Tmot' */
                /* FunctionCaller: '<S921>/Function Caller' */
                /* Event: '<S918>:40' */
                Rte_Call_TmotMSPR_b_MtrB_AccelRaw_TmotMSPR_b_MtrB_AccelRaw();

                /* End of Outputs for SubSystem: '<S886>/Tmot' */
                /* Transition: '<S918>:115' */
                /* Transition: '<S918>:114' */
            }
        }
        else
        {
            /* Transition: '<S918>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_p5) == 133)
            {
                /* Transition: '<S918>:95' */
                /* Transition: '<S918>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPB_AccelRaw_P_CallStatus = 4U;

                /* Transition: '<S918>:114' */
            }
            else
            {
                /* Transition: '<S918>:120' */
                (void)Rte_Read_VeSR1B_b_MCPB_AccelRawV_P_FD16_Value(&FA_out_ff);

                /* Transition: '<S918>:117' */
                /* Call Poke */
                VeCRDB_y_MCPB_AccelRaw_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S886>/Poke' */
                /* FunctionCaller: '<S920>/Function Caller' incorporates:
                 *  Inport: '<Root>/VeSR1B_b_MCPB_AccelRawV_P_FD16'
                 */
                /* Event: '<S918>:38' */
                Rte_Call_PokeMSPR_dn_MtrB_AccelRaw_PokeMSPR_dn_MtrB_AccelRaw
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_h, FA_out_ff);

                /* End of Outputs for SubSystem: '<S886>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S918>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPB_AccelRaw_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S886>/Fsft' */
        /* FunctionCaller: '<S919>/Function Caller' */
        /* Event: '<S918>:39' */
        Rte_Call_FsftMSPR_dn_MtrB_AccelRaw_FsftMSPR_dn_MtrB_AccelRaw();

        /* End of Outputs for SubSystem: '<S886>/Fsft' */
        /* Transition: '<S918>:113' */
        /* Transition: '<S918>:115' */
        /* Transition: '<S918>:114' */
    }

    /* End of Chart: '<S914>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_MCPB_CpbltySpdDvVolt_P_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_MCPB_CpbltySpdDvVolt_P_ErrSts'
     */
    /* Transition: '<S918>:107' */
    rtb_TmpSignalConversionAtVeC_mv =
        Rte_Read_VeCRDB_U_MCPB_CpbltySpdDvVolt_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_U_f);

    /* SignalConversion generated from: '<S2>/VeSR1B_y_MCPB_MtrIndex_P_FD16' incorporates:
     *  Inport: '<Root>/VeSR1B_y_MCPB_MtrIndex_P_FD16'
     */
    (void)Rte_Read_VeSR1B_y_MCPB_MtrIndex_P_FD16_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B__ez);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_MCPB_CpbltySpdDvVolt_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S925>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPB_CpbltySpdDvVolt_P_SigSts_Value(&tmpRead_2v);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S922>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2v) & 3U) != 0U)
    {
        /* Transition: '<S925>:100' */
        /* Transition: '<S925>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S925>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2v) & 4U) != 0U)
        {
            /* Transition: '<S925>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S925>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S925>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPB_CpbltySpdDvVolt_P_CallStatus = 3U;

                /* Event: '<S925>:40' */
                /* Transition: '<S925>:115' */
                /* Transition: '<S925>:114' */
            }
        }
        else
        {
            /* Transition: '<S925>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_mv) == 133)
            {
                /* Transition: '<S925>:95' */
                /* Transition: '<S925>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPB_CpbltySpdDvVolt_P_CallStatus = 4U;

                /* Transition: '<S925>:114' */
            }
            else
            {
                /* Transition: '<S925>:120' */
                /* Transition: '<S925>:117' */
                /* Call Poke */
                VeCRDB_y_MCPB_CpbltySpdDvVolt_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S887>/Poke' */
                /* FunctionCaller: '<S927>/Function Caller' */
                /* Event: '<S925>:38' */
                Rte_Call_PokeMTIR_n_MtrBCapabilitySpd_PokeMTIR_n_MtrBCapabilitySpd
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_U_f,
                     CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B__ez);

                /* End of Outputs for SubSystem: '<S887>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S925>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPB_CpbltySpdDvVolt_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S887>/Fsft' */
        /* FunctionCaller: '<S926>/Function Caller' */
        /* Event: '<S925>:39' */
        Rte_Call_FsftMTIR_n_MtrBCapabilitySpd_FsftMTIR_n_MtrBCapabilitySpd();

        /* End of Outputs for SubSystem: '<S887>/Fsft' */
        /* Transition: '<S925>:113' */
        /* Transition: '<S925>:115' */
        /* Transition: '<S925>:114' */
    }

    /* End of Chart: '<S922>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_MCPB_DeratingFactor_P_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_MCPB_DeratingFactor_P_ErrSts'
     */
    /* Transition: '<S925>:107' */
    rtb_TmpSignalConversionAtVeC_pd =
        Rte_Read_VeCRDB_h_MCPB_DeratingFactor_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_h_b);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_MCPB_DeratingFactor_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S931>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPB_DeratingFactor_P_SigSts_Value(&tmpRead_2w);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S928>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2w) & 3U) != 0U)
    {
        /* Transition: '<S931>:100' */
        /* Transition: '<S931>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S931>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2w) & 4U) != 0U)
        {
            /* Transition: '<S931>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S931>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S931>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPB_DeratingFactor_P_CallStatus = 3U;

                /* Event: '<S931>:40' */
                /* Transition: '<S931>:115' */
                /* Transition: '<S931>:114' */
            }
        }
        else
        {
            /* Transition: '<S931>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_pd) == 133)
            {
                /* Transition: '<S931>:95' */
                /* Transition: '<S931>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPB_DeratingFactor_P_CallStatus = 4U;

                /* Transition: '<S931>:114' */
            }
            else
            {
                /* Transition: '<S931>:120' */
                /* Transition: '<S931>:117' */
                /* Call Poke */
                VeCRDB_y_MCPB_DeratingFactor_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S888>/Poke' */
                /* FunctionCaller: '<S933>/Function Caller' */
                /* Event: '<S931>:38' */
                Rte_Call_PokeMTIR_k_MtrBDeratingFactor_PokeMTIR_k_MtrBDeratingFactor
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_h_b);

                /* End of Outputs for SubSystem: '<S888>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S931>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPB_DeratingFactor_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S888>/Fsft' */
        /* FunctionCaller: '<S932>/Function Caller' */
        /* Event: '<S931>:39' */
        Rte_Call_FsftMTIR_k_MtrBDeratingFactor_FsftMTIR_k_MtrBDeratingFactor();

        /* End of Outputs for SubSystem: '<S888>/Fsft' */
        /* Transition: '<S931>:113' */
        /* Transition: '<S931>:115' */
        /* Transition: '<S931>:114' */
    }

    /* End of Chart: '<S928>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_MCPB_Dschrge_Status_P_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_MCPB_Dschrge_Status_P_ErrSts'
     */
    /* Transition: '<S931>:107' */
    rtb_TmpSignalConversionAtVeC_am =
        Rte_Read_VeCRDB_y_MCPB_Dschrge_Status_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__m2);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_MCPB_Dschrge_Status_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S937>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPB_Dschrge_Status_P_SigSts_Value(&tmpRead_2x);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S934>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2x) & 3U) != 0U)
    {
        /* Transition: '<S937>:100' */
        /* Transition: '<S937>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S937>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2x) & 4U) != 0U)
        {
            /* Transition: '<S937>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S937>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S937>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPB_Dschrge_Status_P_CallStatus = 3U;

                /* Event: '<S937>:40' */
                /* Transition: '<S937>:115' */
                /* Transition: '<S937>:114' */
            }
        }
        else
        {
            /* Transition: '<S937>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_am) == 133)
            {
                /* Transition: '<S937>:95' */
                /* Transition: '<S937>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPB_Dschrge_Status_P_CallStatus = 4U;

                /* Transition: '<S937>:114' */
            }
            else
            {
                /* Transition: '<S937>:120' */
                /* Transition: '<S937>:117' */
                /* Call Poke */
                VeCRDB_y_MCPB_Dschrge_Status_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S889>/Poke' */
                /* FunctionCaller: '<S939>/Function Caller' incorporates:
                 *  Constant: '<S939>/Constant'
                 *  DataTypeConversion: '<S939>/Data Type Conversion'
                 */
                /* Event: '<S937>:38' */
                Rte_Call_PokeINVR_e_MtrB_Dschrge_Stat_PokeINVR_e_MtrB_Dschrge_Stat
                    ((sint16)CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__m2,
                     false);

                /* End of Outputs for SubSystem: '<S889>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S937>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPB_Dschrge_Status_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S889>/Fsft' */
        /* FunctionCaller: '<S938>/Function Caller' */
        /* Event: '<S937>:39' */
        Rte_Call_FsftINVR_e_MtrB_Dschrge_Stat_FsftINVR_e_MtrB_Dschrge_Stat();

        /* End of Outputs for SubSystem: '<S889>/Fsft' */
        /* Transition: '<S937>:113' */
        /* Transition: '<S937>:115' */
        /* Transition: '<S937>:114' */
    }

    /* End of Chart: '<S934>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_MCPB_HV_CnctrOpn_Req_P_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_MCPB_HV_CnctrOpn_Req_P_ErrSts'
     */
    /* Transition: '<S937>:107' */
    rtb_TmpSignalConversionAtVeC_gq =
        Rte_Read_VeCRDB_b_MCPB_HV_CnctrOpn_Req_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_n);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_MCPB_HV_CnctrOpn_Req_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S944>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPB_HV_CnctrOpn_Req_P_SigSts_Value(&tmpRead_2y);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S940>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2y) & 3U) != 0U)
    {
        /* Transition: '<S944>:100' */
        /* Transition: '<S944>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S944>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2y) & 4U) != 0U)
        {
            /* Transition: '<S944>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S944>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S944>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPB_HV_CnctrOpn_Req_P_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S890>/Tmot' */
                /* FunctionCaller: '<S947>/Function Caller' */
                /* Event: '<S944>:40' */
                Rte_Call_TmotINVR_b_MtrBFlt_HV_CntctrOpnRq_TmotINVR_b_MtrBFlt_HV_CntctrOpnRq
                    ();

                /* End of Outputs for SubSystem: '<S890>/Tmot' */
                /* Transition: '<S944>:115' */
                /* Transition: '<S944>:114' */
            }
        }
        else
        {
            /* Transition: '<S944>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_gq) == 133)
            {
                /* Transition: '<S944>:95' */
                /* Transition: '<S944>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPB_HV_CnctrOpn_Req_P_CallStatus = 4U;

                /* Transition: '<S944>:114' */
            }
            else
            {
                /* Transition: '<S944>:120' */
                /* Transition: '<S944>:117' */
                /* Call Poke */
                VeCRDB_y_MCPB_HV_CnctrOpn_Req_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S890>/Poke' */
                /* FunctionCaller: '<S946>/Function Caller' */
                /* Event: '<S944>:38' */
                Rte_Call_PokeINVR_b_MtrBFlt_HV_CntctrOpnRq_PokeINVR_b_MtrBFlt_HV_CntctrOpnRq
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_n);

                /* End of Outputs for SubSystem: '<S890>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S944>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPB_HV_CnctrOpn_Req_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S890>/Fsft' */
        /* FunctionCaller: '<S945>/Function Caller' */
        /* Event: '<S944>:39' */
        Rte_Call_FsftINVR_b_MtrBFlt_HV_CntctrOpnRq_FsftINVR_b_MtrBFlt_HV_CntctrOpnRq
            ();

        /* End of Outputs for SubSystem: '<S890>/Fsft' */
        /* Transition: '<S944>:113' */
        /* Transition: '<S944>:115' */
        /* Transition: '<S944>:114' */
    }

    /* End of Chart: '<S940>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_MCPB_InterlockSts_P_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_MCPB_InterlockSts_P_ErrSts'
     */
    /* Transition: '<S944>:107' */
    rtb_TmpSignalConversionAtVeC_e1 =
        Rte_Read_VeCRDB_y_MCPB_InterlockSts_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__ku);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_MCPB_InterlockSts_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S951>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPB_InterlockSts_P_SigSts_Value(&tmpRead_2z);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S948>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_2z) & 3U) != 0U)
    {
        /* Transition: '<S951>:100' */
        /* Transition: '<S951>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S951>:104' */
        /*  MM */
        if ((((uint32)tmpRead_2z) & 4U) != 0U)
        {
            /* Transition: '<S951>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S951>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S951>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPB_InterlockSts_P_CallStatus = 3U;

                /* Event: '<S951>:40' */
                /* Transition: '<S951>:115' */
                /* Transition: '<S951>:114' */
            }
        }
        else
        {
            /* Transition: '<S951>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_e1) == 133)
            {
                /* Transition: '<S951>:95' */
                /* Transition: '<S951>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPB_InterlockSts_P_CallStatus = 4U;

                /* Transition: '<S951>:114' */
            }
            else
            {
                /* Transition: '<S951>:120' */
                /* Transition: '<S951>:117' */
                /* Call Poke */
                VeCRDB_y_MCPB_InterlockSts_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S891>/Poke' */
                /* FunctionCaller: '<S953>/Function Caller' incorporates:
                 *  Constant: '<S954>/Constant'
                 *  RelationalOperator: '<S954>/Compare'
                 */
                /* Event: '<S951>:38' */
                Rte_Call_PokeINVR_e_MCPB_HVILSts_PokeINVR_e_MCPB_HVILSts
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__ku, (((sint32)
                       CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__ku) == 3) ? 1
                     : 0);

                /* End of Outputs for SubSystem: '<S891>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S951>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPB_InterlockSts_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S891>/Fsft' */
        /* FunctionCaller: '<S952>/Function Caller' */
        /* Event: '<S951>:39' */
        Rte_Call_FsftINVR_b_MCPB_HVILSts_FsftINVR_b_MCPB_HVILSts();

        /* End of Outputs for SubSystem: '<S891>/Fsft' */
        /* Transition: '<S951>:113' */
        /* Transition: '<S951>:115' */
        /* Transition: '<S951>:114' */
    }

    /* End of Chart: '<S948>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_MCPB_Invrtr_State_P_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_MCPB_Invrtr_State_P_ErrSts'
     */
    /* Transition: '<S951>:107' */
    rtb_TmpSignalConversionAtVeC_lq =
        Rte_Read_VeCRDB_y_MCPB_Invrtr_State_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_o);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_MCPB_Invrtr_State_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S959>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPB_Invrtr_State_P_SigSts_Value(&tmpRead_30);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S955>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_30) & 3U) != 0U)
    {
        /* Transition: '<S959>:100' */
        /* Transition: '<S959>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S959>:104' */
        /*  MM */
        if ((((uint32)tmpRead_30) & 4U) != 0U)
        {
            /* Transition: '<S959>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S959>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S959>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPB_Invrtr_State_P_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S892>/Tmot' */
                /* FunctionCaller: '<S962>/Function Caller' */
                /* Event: '<S959>:40' */
                Rte_Call_TmotINVR_b_MtrB_InvrtrSt_TmotINVR_b_MtrB_InvrtrSt();

                /* End of Outputs for SubSystem: '<S892>/Tmot' */
                /* Transition: '<S959>:115' */
                /* Transition: '<S959>:114' */
            }
        }
        else
        {
            /* Transition: '<S959>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_lq) == 133)
            {
                /* Transition: '<S959>:95' */
                /* Transition: '<S959>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPB_Invrtr_State_P_CallStatus = 4U;

                /* Transition: '<S959>:114' */
            }
            else
            {
                /* Transition: '<S959>:120' */
                /* Transition: '<S959>:117' */
                /* Call Poke */
                VeCRDB_y_MCPB_Invrtr_State_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S892>/Poke' */
                /* FunctionCaller: '<S961>/Function Caller' */
                /* Event: '<S959>:38' */
                Rte_Call_PokeINVR_e_MtrB_InvrtrSt_PokeINVR_e_MtrB_InvrtrSt
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_o);

                /* End of Outputs for SubSystem: '<S892>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S959>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPB_Invrtr_State_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S892>/Fsft' */
        /* FunctionCaller: '<S960>/Function Caller' */
        /* Event: '<S959>:39' */
        Rte_Call_FsftINVR_e_MtrB_InvrtrSt_FsftINVR_e_MtrB_InvrtrSt();

        /* End of Outputs for SubSystem: '<S892>/Fsft' */
        /* Transition: '<S959>:113' */
        /* Transition: '<S959>:115' */
        /* Transition: '<S959>:114' */
    }

    /* End of Chart: '<S955>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_MCPB_MaxTorq_P_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_MCPB_MaxTorq_P_ErrSts'
     */
    /* Transition: '<S959>:107' */
    rtb_TmpSignalConversionAtVeC_nb = Rte_Read_VeCRDB_M_MCPB_MaxTorq_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_M_a);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_MCPB_MaxTorq_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S966>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPB_MaxTorq_P_SigSts_Value(&tmpRead_31);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S963>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_31) & 3U) != 0U)
    {
        /* Transition: '<S966>:100' */
        /* Transition: '<S966>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S966>:104' */
        /*  MM */
        if ((((uint32)tmpRead_31) & 4U) != 0U)
        {
            /* Transition: '<S966>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S966>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S966>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPB_MaxTorq_P_CallStatus = 3U;

                /* Event: '<S966>:40' */
                /* Transition: '<S966>:115' */
                /* Transition: '<S966>:114' */
            }
        }
        else
        {
            /* Transition: '<S966>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_nb) == 133)
            {
                /* Transition: '<S966>:95' */
                /* Transition: '<S966>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPB_MaxTorq_P_CallStatus = 4U;

                /* Transition: '<S966>:114' */
            }
            else
            {
                /* Transition: '<S966>:120' */
                /* Transition: '<S966>:117' */
                /* Call Poke */
                VeCRDB_y_MCPB_MaxTorq_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S893>/Poke' */
                /* FunctionCaller: '<S968>/Function Caller' */
                /* Event: '<S966>:38' */
                Rte_Call_PokeMTIR_M_MtrB_MaxTorq_PokeMTIR_M_MtrB_MaxTorq
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_M_a);

                /* End of Outputs for SubSystem: '<S893>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S966>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPB_MaxTorq_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S893>/Fsft' */
        /* FunctionCaller: '<S967>/Function Caller' */
        /* Event: '<S966>:39' */
        Rte_Call_FsftMTIR_M_MtrB_MaxTorq_FsftMTIR_M_MtrB_MaxTorq();

        /* End of Outputs for SubSystem: '<S893>/Fsft' */
        /* Transition: '<S966>:113' */
        /* Transition: '<S966>:115' */
        /* Transition: '<S966>:114' */
    }

    /* End of Chart: '<S963>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_MCPB_MinTorq_P_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_MCPB_MinTorq_P_ErrSts'
     */
    /* Transition: '<S966>:107' */
    rtb_TmpSignalConversionAtVeC_f1 = Rte_Read_VeCRDB_M_MCPB_MinTorq_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_M_g);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_MCPB_MinTorq_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S972>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPB_MinTorq_P_SigSts_Value(&tmpRead_32);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S969>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_32) & 3U) != 0U)
    {
        /* Transition: '<S972>:100' */
        /* Transition: '<S972>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S972>:104' */
        /*  MM */
        if ((((uint32)tmpRead_32) & 4U) != 0U)
        {
            /* Transition: '<S972>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S972>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S972>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPB_MinTorq_P_CallStatus = 3U;

                /* Event: '<S972>:40' */
                /* Transition: '<S972>:115' */
                /* Transition: '<S972>:114' */
            }
        }
        else
        {
            /* Transition: '<S972>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_f1) == 133)
            {
                /* Transition: '<S972>:95' */
                /* Transition: '<S972>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPB_MinTorq_P_CallStatus = 4U;

                /* Transition: '<S972>:114' */
            }
            else
            {
                /* Transition: '<S972>:120' */
                /* Transition: '<S972>:117' */
                /* Call Poke */
                VeCRDB_y_MCPB_MinTorq_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S894>/Poke' */
                /* FunctionCaller: '<S974>/Function Caller' */
                /* Event: '<S972>:38' */
                Rte_Call_PokeMTIR_M_MtrB_MinTorq_PokeMTIR_M_MtrB_MinTorq
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_M_g);

                /* End of Outputs for SubSystem: '<S894>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S972>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPB_MinTorq_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S894>/Fsft' */
        /* FunctionCaller: '<S973>/Function Caller' */
        /* Event: '<S972>:39' */
        Rte_Call_FsftMTIR_M_MtrB_MinTorq_FsftMTIR_M_MtrB_MinTorq();

        /* End of Outputs for SubSystem: '<S894>/Fsft' */
        /* Transition: '<S972>:113' */
        /* Transition: '<S972>:115' */
        /* Transition: '<S972>:114' */
    }

    /* End of Chart: '<S969>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_MCPB_MtrMaxCpbltyTrq_P_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_MCPB_MtrMaxCpbltyTrq_P_ErrSts'
     */
    /* Transition: '<S972>:107' */
    rtb_TmpSignalConversionAtVeC_cr =
        Rte_Read_VeCRDB_M_MCPB_MtrMaxCpbltyTrq_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__ny);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_MCPB_MtrMaxCpbltyTrq_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S978>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPB_MtrMaxCpbltyTrq_P_SigSts_Value(&tmpRead_33);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S975>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_33) & 3U) != 0U)
    {
        /* Transition: '<S978>:100' */
        /* Transition: '<S978>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S978>:104' */
        /*  MM */
        if ((((uint32)tmpRead_33) & 4U) != 0U)
        {
            /* Transition: '<S978>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S978>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S978>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPB_MtrMaxCpbltyTrq_P_CallStatus = 3U;

                /* Event: '<S978>:40' */
                /* Transition: '<S978>:115' */
                /* Transition: '<S978>:114' */
            }
        }
        else
        {
            /* Transition: '<S978>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_cr) == 133)
            {
                /* Transition: '<S978>:95' */
                /* Transition: '<S978>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPB_MtrMaxCpbltyTrq_P_CallStatus = 4U;

                /* Transition: '<S978>:114' */
            }
            else
            {
                /* Transition: '<S978>:120' */
                /* Transition: '<S978>:117' */
                /* Call Poke */
                VeCRDB_y_MCPB_MtrMaxCpbltyTrq_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S895>/Poke' */
                /* FunctionCaller: '<S980>/Function Caller' */
                /* Event: '<S978>:38' */
                Rte_Call_PokeMTIR_M_MtrBCapabilityMax_PokeMTIR_M_MtrBCapabilityMax
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__ny,
                     CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B__ez);

                /* End of Outputs for SubSystem: '<S895>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S978>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPB_MtrMaxCpbltyTrq_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S895>/Fsft' */
        /* FunctionCaller: '<S979>/Function Caller' */
        /* Event: '<S978>:39' */
        Rte_Call_FsftMTIR_M_MtrBCapabilityMax_FsftMTIR_M_MtrBCapabilityMax();

        /* End of Outputs for SubSystem: '<S895>/Fsft' */
        /* Transition: '<S978>:113' */
        /* Transition: '<S978>:115' */
        /* Transition: '<S978>:114' */
    }

    /* End of Chart: '<S975>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_MCPB_MtrMinCpbltyTrq_P_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_MCPB_MtrMinCpbltyTrq_P_ErrSts'
     */
    /* Transition: '<S978>:107' */
    rtb_TmpSignalConversionAtVeC_pf =
        Rte_Read_VeCRDB_M_MCPB_MtrMinCpbltyTrq_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_M_l);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_MCPB_MtrMinCpbltyTrq_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S984>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPB_MtrMinCpbltyTrq_P_SigSts_Value(&tmpRead_34);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S981>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_34) & 3U) != 0U)
    {
        /* Transition: '<S984>:100' */
        /* Transition: '<S984>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S984>:104' */
        /*  MM */
        if ((((uint32)tmpRead_34) & 4U) != 0U)
        {
            /* Transition: '<S984>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S984>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S984>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPB_MtrMinCpbltyTrq_P_CallStatus = 3U;

                /* Event: '<S984>:40' */
                /* Transition: '<S984>:115' */
                /* Transition: '<S984>:114' */
            }
        }
        else
        {
            /* Transition: '<S984>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_pf) == 133)
            {
                /* Transition: '<S984>:95' */
                /* Transition: '<S984>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPB_MtrMinCpbltyTrq_P_CallStatus = 4U;

                /* Transition: '<S984>:114' */
            }
            else
            {
                /* Transition: '<S984>:120' */
                /* Transition: '<S984>:117' */
                /* Call Poke */
                VeCRDB_y_MCPB_MtrMinCpbltyTrq_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S896>/Poke' */
                /* FunctionCaller: '<S986>/Function Caller' */
                /* Event: '<S984>:38' */
                Rte_Call_PokeMTIR_M_MtrBCapabilityMin_PokeMTIR_M_MtrBCapabilityMin
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_M_l,
                     CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B__ez);

                /* End of Outputs for SubSystem: '<S896>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S984>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPB_MtrMinCpbltyTrq_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S896>/Fsft' */
        /* FunctionCaller: '<S985>/Function Caller' */
        /* Event: '<S984>:39' */
        Rte_Call_FsftMTIR_M_MtrBCapabilityMin_FsftMTIR_M_MtrBCapabilityMin();

        /* End of Outputs for SubSystem: '<S896>/Fsft' */
        /* Transition: '<S984>:113' */
        /* Transition: '<S984>:115' */
        /* Transition: '<S984>:114' */
    }

    /* End of Chart: '<S981>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_MCPB_RPM_P_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_MCPB_RPM_P_ErrSts'
     */
    /* Transition: '<S984>:107' */
    rtb_TmpSignalConversionAtVeC_g2 = Rte_Read_VeCRDB_n_MCPB_RPM_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_n_c);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_MCPB_RPM_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S991>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPB_RPM_P_SigSts_Value(&tmpRead_35);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S987>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_b_MCPB_RPM_V_P_FD16'
     */
    guard1 = false;
    if ((((uint32)tmpRead_35) & 3U) != 0U)
    {
        /* Transition: '<S991>:100' */
        /* Transition: '<S991>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S991>:104' */
        /*  MM */
        if ((((uint32)tmpRead_35) & 4U) != 0U)
        {
            /* Transition: '<S991>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S991>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S991>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPB_RPM_P_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S897>/Tmot' */
                /* FunctionCaller: '<S994>/Function Caller' */
                /* Event: '<S991>:40' */
                Rte_Call_TmotMSPR_b_MtrB_SpdRaw_TmotMSPR_b_MtrB_SpdRaw();

                /* End of Outputs for SubSystem: '<S897>/Tmot' */
                /* Transition: '<S991>:115' */
                /* Transition: '<S991>:114' */
            }
        }
        else
        {
            /* Transition: '<S991>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_g2) == 133)
            {
                /* Transition: '<S991>:95' */
                /* Transition: '<S991>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPB_RPM_P_CallStatus = 4U;

                /* Transition: '<S991>:114' */
            }
            else
            {
                /* Transition: '<S991>:120' */
                (void)Rte_Read_VeSR1B_b_MCPB_RPM_V_P_FD16_Value(&tmpRead_46);

                /* Transition: '<S991>:117' */
                /* Call Poke */
                VeCRDB_y_MCPB_RPM_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S897>/Poke' */
                /* FunctionCaller: '<S993>/Function Caller' incorporates:
                 *  Inport: '<Root>/VeSR1B_b_MCPB_RPM_V_P_FD16'
                 */
                /* Event: '<S991>:38' */
                Rte_Call_PokeMSPR_n_MtrB_SpdRaw_PokeMSPR_n_MtrB_SpdRaw
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_n_c, tmpRead_46);

                /* End of Outputs for SubSystem: '<S897>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S991>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPB_RPM_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S897>/Fsft' */
        /* FunctionCaller: '<S992>/Function Caller' */
        /* Event: '<S991>:39' */
        Rte_Call_FsftMSPR_n_MtrB_SpdRaw_FsftMSPR_n_MtrB_SpdRaw();

        /* End of Outputs for SubSystem: '<S897>/Fsft' */
        /* Transition: '<S991>:113' */
        /* Transition: '<S991>:115' */
        /* Transition: '<S991>:114' */
    }

    /* End of Chart: '<S987>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_MCPB_SPT_Stat_P_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_MCPB_SPT_Stat_P_ErrSts'
     */
    /* Transition: '<S991>:107' */
    rtb_TmpSignalConversionAtVeC_bz = Rte_Read_VeCRDB_y_MCPB_SPT_Stat_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__po);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_MCPB_SPT_Stat_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S999>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPB_SPT_Stat_P_SigSts_Value(&tmpRead_36);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S995>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_36) & 3U) != 0U)
    {
        /* Transition: '<S999>:100' */
        /* Transition: '<S999>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S999>:104' */
        /*  MM */
        if ((((uint32)tmpRead_36) & 4U) != 0U)
        {
            /* Transition: '<S999>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S999>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S999>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPB_SPT_Stat_P_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S898>/Tmot' */
                /* FunctionCaller: '<S1002>/Function Caller' */
                /* Event: '<S999>:40' */
                Rte_Call_TmotINVR_b_MCPB_SPT_State_TmotINVR_b_MCPB_SPT_State();

                /* End of Outputs for SubSystem: '<S898>/Tmot' */
                /* Transition: '<S999>:115' */
                /* Transition: '<S999>:114' */
            }
        }
        else
        {
            /* Transition: '<S999>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_bz) == 133)
            {
                /* Transition: '<S999>:95' */
                /* Transition: '<S999>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPB_SPT_Stat_P_CallStatus = 4U;

                /* Transition: '<S999>:114' */
            }
            else
            {
                /* Transition: '<S999>:120' */
                /* Transition: '<S999>:117' */
                /* Call Poke */
                VeCRDB_y_MCPB_SPT_Stat_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S898>/Poke' */
                /* FunctionCaller: '<S1001>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S1001>/Data Type Conversion'
                 */
                /* Event: '<S999>:38' */
                Rte_Call_PokeINVR_e_MCPB_SPT_State_PokeINVR_e_MCPB_SPT_State
                    ((sint16)CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__po);

                /* End of Outputs for SubSystem: '<S898>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S999>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPB_SPT_Stat_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S898>/Fsft' */
        /* FunctionCaller: '<S1000>/Function Caller' */
        /* Event: '<S999>:39' */
        Rte_Call_FsftINVR_e_MCPB_SPT_State_FsftINVR_e_MCPB_SPT_State();

        /* End of Outputs for SubSystem: '<S898>/Fsft' */
        /* Transition: '<S999>:113' */
        /* Transition: '<S999>:115' */
        /* Transition: '<S999>:114' */
    }

    /* End of Chart: '<S995>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_MCPB_Spd_Lim_P_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_MCPB_Spd_Lim_P_ErrSts'
     */
    /* Transition: '<S999>:107' */
    rtb_TmpSignalConversionAtVeC_lt = Rte_Read_VeCRDB_n_MCPB_Spd_Lim_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__cp);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_MCPB_Spd_Lim_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1007>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPB_Spd_Lim_P_SigSts_Value(&tmpRead_37);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1003>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_37) & 3U) != 0U)
    {
        /* Transition: '<S1007>:100' */
        /* Transition: '<S1007>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1007>:104' */
        /*  MM */
        if ((((uint32)tmpRead_37) & 4U) != 0U)
        {
            /* Transition: '<S1007>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S1007>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1007>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPB_Spd_Lim_P_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S899>/Tmot' */
                /* FunctionCaller: '<S1010>/Function Caller' */
                /* Event: '<S1007>:40' */
                Rte_Call_TmotMSPR_n_MaxP2SpdLmt_TmotMSPR_n_MaxP2SpdLmt();

                /* End of Outputs for SubSystem: '<S899>/Tmot' */
                /* Transition: '<S1007>:115' */
                /* Transition: '<S1007>:114' */
            }
        }
        else
        {
            /* Transition: '<S1007>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_lt) == 133)
            {
                /* Transition: '<S1007>:95' */
                /* Transition: '<S1007>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPB_Spd_Lim_P_CallStatus = 4U;

                /* Transition: '<S1007>:114' */
            }
            else
            {
                /* Transition: '<S1007>:120' */
                /* Transition: '<S1007>:117' */
                /* Call Poke */
                VeCRDB_y_MCPB_Spd_Lim_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S899>/Poke' */
                /* FunctionCaller: '<S1009>/Function Caller' */
                /* Event: '<S1007>:38' */
                Rte_Call_PokeMSPR_n_MaxP2SpdLmt_PokeMSPR_n_MaxP2SpdLmt
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__cp);

                /* End of Outputs for SubSystem: '<S899>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1007>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPB_Spd_Lim_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S899>/Fsft' */
        /* FunctionCaller: '<S1008>/Function Caller' */
        /* Event: '<S1007>:39' */
        Rte_Call_FsftMSPR_n_MaxP2SpdLmt_FsftMSPR_n_MaxP2SpdLmt();

        /* End of Outputs for SubSystem: '<S899>/Fsft' */
        /* Transition: '<S1007>:113' */
        /* Transition: '<S1007>:115' */
        /* Transition: '<S1007>:114' */
    }

    /* End of Chart: '<S1003>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_MCPB_Temp_P_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_MCPB_Temp_P_ErrSts'
     */
    /* Transition: '<S1007>:107' */
    rtb_TmpSignalConversionAtVeC_hy = Rte_Read_VeCRDB_y_MCPB_Temp_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_b);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_MCPB_Temp_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1015>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPB_Temp_P_SigSts_Value(&tmpRead_38);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1011>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_38) & 3U) != 0U)
    {
        /* Transition: '<S1015>:100' */
        /* Transition: '<S1015>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1015>:104' */
        /*  MM */
        if ((((uint32)tmpRead_38) & 4U) != 0U)
        {
            /* Transition: '<S1015>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S1015>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1015>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPB_Temp_P_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S900>/Tmot' */
                /* FunctionCaller: '<S1018>/Function Caller' */
                /* Event: '<S1015>:40' */
                Rte_Call_TmotINVR_b_MtrB_Temp_TmotINVR_b_MtrB_Temp();

                /* End of Outputs for SubSystem: '<S900>/Tmot' */
                /* Transition: '<S1015>:115' */
                /* Transition: '<S1015>:114' */
            }
        }
        else
        {
            /* Transition: '<S1015>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_hy) == 133)
            {
                /* Transition: '<S1015>:95' */
                /* Transition: '<S1015>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPB_Temp_P_CallStatus = 4U;

                /* Transition: '<S1015>:114' */
            }
            else
            {
                /* Transition: '<S1015>:120' */
                if ((((uint32)tmpRead_38) & 8U) != 0U)
                {
                    /* Transition: '<S1015>:122' */
                    /* Transition: '<S1015>:125' */
                    FA_out_ff = true;

                    /* Transition: '<S1015>:126' */
                }
                else
                {
                    /* Transition: '<S1015>:124' */
                    FA_out_ff = false;
                }

                /* Transition: '<S1015>:117' */
                /* Call Poke */
                VeCRDB_y_MCPB_Temp_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S900>/Poke' */
                /* FunctionCaller: '<S1017>/Function Caller' */
                /* Event: '<S1015>:38' */
                Rte_Call_PokeINVR_T_MtrB_Temp_PokeINVR_T_MtrB_Temp
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_b, FA_out_ff);

                /* End of Outputs for SubSystem: '<S900>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1015>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPB_Temp_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S900>/Fsft' */
        /* FunctionCaller: '<S1016>/Function Caller' */
        /* Event: '<S1015>:39' */
        Rte_Call_FsftINVR_T_MtrB_Temp_FsftINVR_T_MtrB_Temp();

        /* End of Outputs for SubSystem: '<S900>/Fsft' */
        /* Transition: '<S1015>:113' */
        /* Transition: '<S1015>:115' */
        /* Transition: '<S1015>:114' */
    }

    /* End of Chart: '<S1011>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_MCPB_TorqAchved_AEMD_P_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_MCPB_TorqAchved_AEMD_P_ErrSts'
     */
    /* Transition: '<S1015>:107' */
    rtb_TmpSignalConversionAtVe_hym =
        Rte_Read_VeCRDB_M_MCPB_TorqAchved_AEMD_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_M_p);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_MCPB_TorqAchved_AEMD_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1023>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPB_TorqAchved_AEMD_P_SigSts_Value(&tmpRead_39);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1019>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_b_MCPB_TrqAchvd_AEMD_V_P_FD16'
     */
    guard1 = false;
    if ((((uint32)tmpRead_39) & 3U) != 0U)
    {
        /* Transition: '<S1023>:100' */
        /* Transition: '<S1023>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1023>:104' */
        /*  MM */
        if ((((uint32)tmpRead_39) & 4U) != 0U)
        {
            /* Transition: '<S1023>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S1023>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1023>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPB_TorqAchved_AEMD_P_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S901>/Tmot' */
                /* FunctionCaller: '<S1026>/Function Caller' */
                /* Event: '<S1023>:40' */
                Rte_Call_TmotMTIR_b_MtrB_TorqAchieved_AEMD_TmotMTIR_b_MtrB_TorqAchieved_AEMD
                    ();

                /* End of Outputs for SubSystem: '<S901>/Tmot' */
                /* Transition: '<S1023>:115' */
                /* Transition: '<S1023>:114' */
            }
        }
        else
        {
            /* Transition: '<S1023>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_hym) == 133)
            {
                /* Transition: '<S1023>:95' */
                /* Transition: '<S1023>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPB_TorqAchved_AEMD_P_CallStatus = 4U;

                /* Transition: '<S1023>:114' */
            }
            else
            {
                /* Transition: '<S1023>:120' */
                (void)Rte_Read_VeSR1B_b_MCPB_TrqAchvd_AEMD_V_P_FD16_Value
                    (&FA_out_e);

                /* Transition: '<S1023>:117' */
                /* Call Poke */
                VeCRDB_y_MCPB_TorqAchved_AEMD_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S901>/Poke' */
                /* FunctionCaller: '<S1025>/Function Caller' incorporates:
                 *  Inport: '<Root>/VeSR1B_b_MCPB_TrqAchvd_AEMD_V_P_FD16'
                 */
                /* Event: '<S1023>:38' */
                Rte_Call_PokeMTIR_M_MtrB_TorqAchieved_AEMD_PokeMTIR_M_MtrB_TorqAchieved_AEMD
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_M_p, FA_out_e);

                /* End of Outputs for SubSystem: '<S901>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1023>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPB_TorqAchved_AEMD_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S901>/Fsft' */
        /* FunctionCaller: '<S1024>/Function Caller' */
        /* Event: '<S1023>:39' */
        Rte_Call_FsftMTIR_M_MtrB_TorqAchieved_AEMD_FsftMTIR_M_MtrB_TorqAchieved_AEMD
            ();

        /* End of Outputs for SubSystem: '<S901>/Fsft' */
        /* Transition: '<S1023>:113' */
        /* Transition: '<S1023>:115' */
        /* Transition: '<S1023>:114' */
    }

    /* End of Chart: '<S1019>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_MCPB_Torque_Achieved_P_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_MCPB_Torque_Achieved_P_ErrSts'
     */
    /* Transition: '<S1023>:107' */
    rtb_TmpSignalConversionAtVeC_ey =
        Rte_Read_VeCRDB_M_MCPB_Torque_Achieved_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__pj);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_MCPB_Torque_Achieved_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1030>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPB_Torque_Achieved_P_SigSts_Value(&tmpRead_3a);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1027>/Chart' incorporates:
     *  Inport: '<Root>/VeSR1B_b_MCPB_Torque_Achved_V_P_FD16'
     */
    guard1 = false;
    if ((((uint32)tmpRead_3a) & 3U) != 0U)
    {
        /* Transition: '<S1030>:100' */
        /* Transition: '<S1030>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1030>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3a) & 4U) != 0U)
        {
            /* Transition: '<S1030>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S1030>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1030>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPB_Torque_Achieved_P_CallStatus = 3U;

                /* Event: '<S1030>:40' */
                /* Transition: '<S1030>:115' */
                /* Transition: '<S1030>:114' */
            }
        }
        else
        {
            /* Transition: '<S1030>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ey) == 133)
            {
                /* Transition: '<S1030>:95' */
                /* Transition: '<S1030>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPB_Torque_Achieved_P_CallStatus = 4U;

                /* Transition: '<S1030>:114' */
            }
            else
            {
                /* Transition: '<S1030>:120' */
                (void)Rte_Read_VeSR1B_b_MCPB_Torque_Achved_V_P_FD16_Value
                    (&tmpRead_47);

                /* Transition: '<S1030>:117' */
                /* Call Poke */
                VeCRDB_y_MCPB_Torque_Achieved_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S902>/Poke' */
                /* FunctionCaller: '<S1032>/Function Caller' incorporates:
                 *  Inport: '<Root>/VeSR1B_b_MCPB_Torque_Achved_V_P_FD16'
                 */
                /* Event: '<S1030>:38' */
                Rte_Call_PokeMTIR_M_MtrB_TorqAchieved_PokeMTIR_M_MtrB_TorqAchieved
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__pj, tmpRead_47);

                /* End of Outputs for SubSystem: '<S902>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1030>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPB_Torque_Achieved_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S902>/Fsft' */
        /* FunctionCaller: '<S1031>/Function Caller' */
        /* Event: '<S1030>:39' */
        Rte_Call_FsftMTIR_M_MtrB_TorqAchieved_FsftMTIR_M_MtrB_TorqAchieved();

        /* End of Outputs for SubSystem: '<S902>/Fsft' */
        /* Transition: '<S1030>:113' */
        /* Transition: '<S1030>:115' */
        /* Transition: '<S1030>:114' */
    }

    /* End of Chart: '<S1027>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_MPR_PosSensor_P_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_MPR_PosSensor_P_ErrSts'
     */
    /* Transition: '<S1030>:107' */
    rtb_TmpSignalConversionAtVeC_ap = Rte_Read_VeCRDB_y_MPR_PosSensor_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__py);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_MPR_PosSensor_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1036>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MPR_PosSensor_P_SigSts_Value(&tmpRead_3b);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1033>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_3b) & 3U) != 0U)
    {
        /* Transition: '<S1036>:100' */
        /* Transition: '<S1036>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1036>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3b) & 4U) != 0U)
        {
            /* Transition: '<S1036>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S1036>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1036>:110' */
                /* Call Tmot */
                VeCRDB_y_MPR_PosSensor_P_CallStatus = 3U;

                /* Event: '<S1036>:40' */
                /* Transition: '<S1036>:115' */
                /* Transition: '<S1036>:114' */
            }
        }
        else
        {
            /* Transition: '<S1036>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ap) == 133)
            {
                /* Transition: '<S1036>:95' */
                /* Transition: '<S1036>:116' */
                /* Call Nothing */
                VeCRDB_y_MPR_PosSensor_P_CallStatus = 4U;

                /* Transition: '<S1036>:114' */
            }
            else
            {
                /* Transition: '<S1036>:120' */
                if ((((uint32)tmpRead_3b) & 8U) != 0U)
                {
                    /* Transition: '<S1036>:122' */
                    /* Transition: '<S1036>:125' */
                    FA_out_e = true;

                    /* Transition: '<S1036>:126' */
                }
                else
                {
                    /* Transition: '<S1036>:124' */
                    FA_out_e = false;
                }

                /* Transition: '<S1036>:117' */
                /* Call Poke */
                VeCRDB_y_MPR_PosSensor_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S903>/Poke' */
                /* FunctionCaller: '<S1038>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S1038>/Data Type Conversion'
                 */
                /* Event: '<S1036>:38' */
                Rte_Call_PokePPCR_e_Prmry_MPR_Pos_Sensor_PokePPCR_e_Prmry_MPR_Pos_Sensor
                    ((sint16)CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__py,
                     FA_out_e);

                /* End of Outputs for SubSystem: '<S903>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1036>:111' */
        /* Call Fsft */
        VeCRDB_y_MPR_PosSensor_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S903>/Fsft' */
        /* FunctionCaller: '<S1037>/Function Caller' */
        /* Event: '<S1036>:39' */
        Rte_Call_FsftPPCR_b_Prmry_MPR_Pos_Sensor_FsftPPCR_b_Prmry_MPR_Pos_Sensor
            ();

        /* End of Outputs for SubSystem: '<S903>/Fsft' */
        /* Transition: '<S1036>:113' */
        /* Transition: '<S1036>:115' */
        /* Transition: '<S1036>:114' */
    }

    /* End of Chart: '<S1033>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_PlockFailSts_P_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_PlockFailSts_P_ErrSts'
     */
    /* Transition: '<S1036>:107' */
    rtb_TmpSignalConversionAtVeC_gu = Rte_Read_VeCRDB_y_PlockFailSts_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_P);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_PlockFailSts_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1042>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_PlockFailSts_P_SigSts_Value(&tmpRead_3c);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1039>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_3c) & 3U) != 0U)
    {
        /* Transition: '<S1042>:100' */
        /* Transition: '<S1042>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1042>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3c) & 4U) != 0U)
        {
            /* Transition: '<S1042>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S1042>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1042>:110' */
                /* Call Tmot */
                VeCRDB_y_PlockFailSts_P_CallStatus = 3U;

                /* Event: '<S1042>:40' */
                /* Transition: '<S1042>:115' */
                /* Transition: '<S1042>:114' */
            }
        }
        else
        {
            /* Transition: '<S1042>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_gu) == 133)
            {
                /* Transition: '<S1042>:95' */
                /* Transition: '<S1042>:116' */
                /* Call Nothing */
                VeCRDB_y_PlockFailSts_P_CallStatus = 4U;

                /* Transition: '<S1042>:114' */
            }
            else
            {
                /* Transition: '<S1042>:120' */
                if ((((uint32)tmpRead_3c) & 8U) != 0U)
                {
                    /* Transition: '<S1042>:122' */
                    /* Transition: '<S1042>:125' */
                    FA_out_e = true;

                    /* Transition: '<S1042>:126' */
                }
                else
                {
                    /* Transition: '<S1042>:124' */
                    FA_out_e = false;
                }

                /* Transition: '<S1042>:117' */
                /* Call Poke */
                VeCRDB_y_PlockFailSts_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S904>/Poke' */
                /* FunctionCaller: '<S1044>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S1044>/Data Type Conversion'
                 */
                /* Event: '<S1042>:38' */
                Rte_Call_PokePPCR_e_Prmry_Park_Pawl_flt_Stat_PokePPCR_e_Prmry_Park_Pawl_flt_Stat
                    ((sint16)CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_P,
                     FA_out_e);

                /* End of Outputs for SubSystem: '<S904>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1042>:111' */
        /* Call Fsft */
        VeCRDB_y_PlockFailSts_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S904>/Fsft' */
        /* FunctionCaller: '<S1043>/Function Caller' */
        /* Event: '<S1042>:39' */
        Rte_Call_FsftPPCR_b_Prmry_Park_Pawl_flt_Stat_FsftPPCR_b_Prmry_Park_Pawl_flt_Stat
            ();

        /* End of Outputs for SubSystem: '<S904>/Fsft' */
        /* Transition: '<S1042>:113' */
        /* Transition: '<S1042>:115' */
        /* Transition: '<S1042>:114' */
    }

    /* End of Chart: '<S1039>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_Plock_MotorPosSts_P_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_Plock_MotorPosSts_P_ErrSts'
     */
    /* Transition: '<S1042>:107' */
    rtb_TmpSignalConversionAtVeC_e2 =
        Rte_Read_VeCRDB_y_Plock_MotorPosSts_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_a);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_Plock_MotorPosSts_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1048>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_Plock_MotorPosSts_P_SigSts_Value(&tmpRead_3d);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1045>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_3d) & 3U) != 0U)
    {
        /* Transition: '<S1048>:100' */
        /* Transition: '<S1048>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1048>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3d) & 4U) != 0U)
        {
            /* Transition: '<S1048>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S1048>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1048>:110' */
                /* Call Tmot */
                VeCRDB_y_Plock_MotorPosSts_P_CallStatus = 3U;

                /* Event: '<S1048>:40' */
                /* Transition: '<S1048>:115' */
                /* Transition: '<S1048>:114' */
            }
        }
        else
        {
            /* Transition: '<S1048>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_e2) == 133)
            {
                /* Transition: '<S1048>:95' */
                /* Transition: '<S1048>:116' */
                /* Call Nothing */
                VeCRDB_y_Plock_MotorPosSts_P_CallStatus = 4U;

                /* Transition: '<S1048>:114' */
            }
            else
            {
                /* Transition: '<S1048>:120' */
                if ((((uint32)tmpRead_3d) & 8U) != 0U)
                {
                    /* Transition: '<S1048>:122' */
                    /* Transition: '<S1048>:125' */
                    FA_out_e = true;

                    /* Transition: '<S1048>:126' */
                }
                else
                {
                    /* Transition: '<S1048>:124' */
                    FA_out_e = false;
                }

                /* Transition: '<S1048>:117' */
                /* Call Poke */
                VeCRDB_y_Plock_MotorPosSts_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S905>/Poke' */
                /* FunctionCaller: '<S1050>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S1050>/Data Type Conversion'
                 */
                /* Event: '<S1048>:38' */
                Rte_Call_PokePPCR_e_Prmry_PP_Motor_Pos_Stat_PokePPCR_e_Prmry_PP_Motor_Pos_Stat
                    ((sint16)CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_a,
                     FA_out_e);

                /* End of Outputs for SubSystem: '<S905>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1048>:111' */
        /* Call Fsft */
        VeCRDB_y_Plock_MotorPosSts_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S905>/Fsft' */
        /* FunctionCaller: '<S1049>/Function Caller' */
        /* Event: '<S1048>:39' */
        Rte_Call_FsftPPCR_b_Prmry_PP_Motor_Pos_Stat_FsftPPCR_b_Prmry_PP_Motor_Pos_Stat
            ();

        /* End of Outputs for SubSystem: '<S905>/Fsft' */
        /* Transition: '<S1048>:113' */
        /* Transition: '<S1048>:115' */
        /* Transition: '<S1048>:114' */
    }

    /* End of Chart: '<S1045>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_Plock_PosSensor_P_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_Plock_PosSensor_P_ErrSts'
     */
    /* Transition: '<S1048>:107' */
    rtb_TmpSignalConversionAtVeC_in = Rte_Read_VeCRDB_y_Plock_PosSensor_P_Value(
        &CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__kn);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_Plock_PosSensor_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1054>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_Plock_PosSensor_P_SigSts_Value(&tmpRead_3e);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1051>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_3e) & 3U) != 0U)
    {
        /* Transition: '<S1054>:100' */
        /* Transition: '<S1054>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1054>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3e) & 4U) != 0U)
        {
            /* Transition: '<S1054>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S1054>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1054>:110' */
                /* Call Tmot */
                VeCRDB_y_Plock_PosSensor_P_CallStatus = 3U;

                /* Event: '<S1054>:40' */
                /* Transition: '<S1054>:115' */
                /* Transition: '<S1054>:114' */
            }
        }
        else
        {
            /* Transition: '<S1054>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_in) == 133)
            {
                /* Transition: '<S1054>:95' */
                /* Transition: '<S1054>:116' */
                /* Call Nothing */
                VeCRDB_y_Plock_PosSensor_P_CallStatus = 4U;

                /* Transition: '<S1054>:114' */
            }
            else
            {
                /* Transition: '<S1054>:120' */
                if ((((uint32)tmpRead_3e) & 8U) != 0U)
                {
                    /* Transition: '<S1054>:122' */
                    /* Transition: '<S1054>:125' */
                    FA_out_e = true;

                    /* Transition: '<S1054>:126' */
                }
                else
                {
                    /* Transition: '<S1054>:124' */
                    FA_out_e = false;
                }

                /* Transition: '<S1054>:117' */
                /* Call Poke */
                VeCRDB_y_Plock_PosSensor_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S906>/Poke' */
                /* FunctionCaller: '<S1056>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S1056>/Data Type Conversion'
                 */
                /* Event: '<S1054>:38' */
                Rte_Call_PokePPCR_e_Prmry_PP_Pos_Sensor_PokePPCR_e_Prmry_PP_Pos_Sensor
                    ((sint16)CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__kn,
                     FA_out_e);

                /* End of Outputs for SubSystem: '<S906>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1054>:111' */
        /* Call Fsft */
        VeCRDB_y_Plock_PosSensor_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S906>/Fsft' */
        /* FunctionCaller: '<S1055>/Function Caller' */
        /* Event: '<S1054>:39' */
        Rte_Call_FsftPPCR_b_Prmry_PP_Pos_Sensor_FsftPPCR_b_Prmry_PP_Pos_Sensor();

        /* End of Outputs for SubSystem: '<S906>/Fsft' */
        /* Transition: '<S1054>:113' */
        /* Transition: '<S1054>:115' */
        /* Transition: '<S1054>:114' */
    }

    /* End of Chart: '<S1051>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_Plock_fdbk_sts_P_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_Plock_fdbk_sts_P_ErrSts'
     */
    /* Transition: '<S1054>:107' */
    rtb_TmpSignalConversionAtVeC_bp = Rte_Read_VeCRDB_y_Plock_fdbk_sts_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__a4);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_Plock_fdbk_sts_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1060>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_Plock_fdbk_sts_P_SigSts_Value(&tmpRead_3f);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1057>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_3f) & 3U) != 0U)
    {
        /* Transition: '<S1060>:100' */
        /* Transition: '<S1060>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1060>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3f) & 4U) != 0U)
        {
            /* Transition: '<S1060>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S1060>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1060>:110' */
                /* Call Tmot */
                VeCRDB_y_Plock_fdbk_sts_P_CallStatus = 3U;

                /* Event: '<S1060>:40' */
                /* Transition: '<S1060>:115' */
                /* Transition: '<S1060>:114' */
            }
        }
        else
        {
            /* Transition: '<S1060>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_bp) == 133)
            {
                /* Transition: '<S1060>:95' */
                /* Transition: '<S1060>:116' */
                /* Call Nothing */
                VeCRDB_y_Plock_fdbk_sts_P_CallStatus = 4U;

                /* Transition: '<S1060>:114' */
            }
            else
            {
                /* Transition: '<S1060>:120' */
                if ((((uint32)tmpRead_3f) & 8U) != 0U)
                {
                    /* Transition: '<S1060>:122' */
                    /* Transition: '<S1060>:125' */
                    FA_out_e = true;

                    /* Transition: '<S1060>:126' */
                }
                else
                {
                    /* Transition: '<S1060>:124' */
                    FA_out_e = false;
                }

                /* Transition: '<S1060>:117' */
                /* Call Poke */
                VeCRDB_y_Plock_fdbk_sts_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S907>/Poke' */
                /* FunctionCaller: '<S1062>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S1062>/Data Type Conversion'
                 */
                /* Event: '<S1060>:38' */
                Rte_Call_PokePPCR_e_Prmry_Park_Pawl_Stat_PokePPCR_e_Prmry_Park_Pawl_Stat
                    ((sint16)CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__a4,
                     FA_out_e);

                /* End of Outputs for SubSystem: '<S907>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1060>:111' */
        /* Call Fsft */
        VeCRDB_y_Plock_fdbk_sts_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S907>/Fsft' */
        /* FunctionCaller: '<S1061>/Function Caller' */
        /* Event: '<S1060>:39' */
        Rte_Call_FsftPPCR_b_Prmry_Park_Pawl_Stat_FsftPPCR_b_Prmry_Park_Pawl_Stat
            ();

        /* End of Outputs for SubSystem: '<S907>/Fsft' */
        /* Transition: '<S1060>:113' */
        /* Transition: '<S1060>:115' */
        /* Transition: '<S1060>:114' */
    }

    /* End of Chart: '<S1057>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_MCPBCtrlBoarTempP_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_MCPBCtrlBoarTempP_ErrSts'
     */
    /* Transition: '<S1060>:107' */
    rtb_TmpSignalConversionAtVeC_nx = Rte_Read_VeCRDB_y_MCPBCtrlBoarTempP_Value(
        &CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_k);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_MCPBCtrlBoarTempP_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1075>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPBCtrlBoarTempP_SigSts_Value(&tmpRead_8);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1071>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_8) & 3U) != 0U)
    {
        /* Transition: '<S1075>:100' */
        /* Transition: '<S1075>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1075>:104' */
        /*  MM */
        if ((((uint32)tmpRead_8) & 4U) != 0U)
        {
            /* Transition: '<S1075>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S1075>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1075>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPBCtrlBoarTempP_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S1063>/Tmot' */
                /* FunctionCaller: '<S1078>/Function Caller' */
                /* Event: '<S1075>:40' */
                Rte_Call_TmotINVR_b_MtrB_CtrlBoard_Temp_TmotINVR_b_MtrB_CtrlBoard_Temp
                    ();

                /* End of Outputs for SubSystem: '<S1063>/Tmot' */
                /* Transition: '<S1075>:115' */
                /* Transition: '<S1075>:114' */
            }
        }
        else
        {
            /* Transition: '<S1075>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_nx) == 133)
            {
                /* Transition: '<S1075>:95' */
                /* Transition: '<S1075>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPBCtrlBoarTempP_CallStatus = 4U;

                /* Transition: '<S1075>:114' */
            }
            else
            {
                /* Transition: '<S1075>:120' */
                if ((((uint32)tmpRead_8) & 8U) != 0U)
                {
                    /* Transition: '<S1075>:122' */
                    /* Transition: '<S1075>:125' */
                    FA_out_e = true;

                    /* Transition: '<S1075>:126' */
                }
                else
                {
                    /* Transition: '<S1075>:124' */
                    FA_out_e = false;
                }

                /* Transition: '<S1075>:117' */
                /* Call Poke */
                VeCRDB_y_MCPBCtrlBoarTempP_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1063>/Poke' */
                /* FunctionCaller: '<S1077>/Function Caller' */
                /* Event: '<S1075>:38' */
                Rte_Call_PokeINVR_T_MtrB_CtrlBoard_Temp_PokeINVR_T_MtrB_CtrlBoard_Temp
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_k, FA_out_e);

                /* End of Outputs for SubSystem: '<S1063>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1075>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPBCtrlBoarTempP_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1063>/Fsft' */
        /* FunctionCaller: '<S1076>/Function Caller' */
        /* Event: '<S1075>:39' */
        Rte_Call_FsftINVR_T_MtrB_CtrlBoard_Temp_FsftINVR_T_MtrB_CtrlBoard_Temp();

        /* End of Outputs for SubSystem: '<S1063>/Fsft' */
        /* Transition: '<S1075>:113' */
        /* Transition: '<S1075>:115' */
        /* Transition: '<S1075>:114' */
    }

    /* End of Chart: '<S1071>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_MCPB_DC_Current_P_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_MCPB_DC_Current_P_ErrSts'
     */
    /* Transition: '<S1075>:107' */
    rtb_TmpSignalConversionAtVeC_mq = Rte_Read_VeCRDB_I_MCPB_DC_Current_P_Value(
        &CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_I_k);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_MCPB_DC_Current_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1083>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPB_DC_Current_P_SigSts_Value(&tmpRead_9);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1079>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_b_MCPB_DC_Crrnt_V_P'
     */
    guard1 = false;
    if ((((uint32)tmpRead_9) & 3U) != 0U)
    {
        /* Transition: '<S1083>:100' */
        /* Transition: '<S1083>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1083>:104' */
        /*  MM */
        if ((((uint32)tmpRead_9) & 4U) != 0U)
        {
            /* Transition: '<S1083>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S1083>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1083>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPB_DC_Current_P_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S1064>/Tmot' */
                /* FunctionCaller: '<S1086>/Function Caller' */
                /* Event: '<S1083>:40' */
                Rte_Call_TmotINVR_b_MtrB_DC_Crnt_TmotINVR_b_MtrB_DC_Crnt();

                /* End of Outputs for SubSystem: '<S1064>/Tmot' */
                /* Transition: '<S1083>:115' */
                /* Transition: '<S1083>:114' */
            }
        }
        else
        {
            /* Transition: '<S1083>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_mq) == 133)
            {
                /* Transition: '<S1083>:95' */
                /* Transition: '<S1083>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPB_DC_Current_P_CallStatus = 4U;

                /* Transition: '<S1083>:114' */
            }
            else
            {
                /* Transition: '<S1083>:120' */
                (void)Rte_Read_VeCRDB_b_MCPB_DC_Crrnt_V_P_Value(&FA_out_kq);

                /* Transition: '<S1083>:117' */
                /* Call Poke */
                VeCRDB_y_MCPB_DC_Current_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1064>/Poke' */
                /* FunctionCaller: '<S1085>/Function Caller' incorporates:
                 *  Inport: '<Root>/VeCRDB_b_MCPB_DC_Crrnt_V_P'
                 */
                /* Event: '<S1083>:38' */
                Rte_Call_PokeINVR_I_MtrB_DC_Crnt_PokeINVR_I_MtrB_DC_Crnt
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_I_k, FA_out_kq);

                /* End of Outputs for SubSystem: '<S1064>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1083>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPB_DC_Current_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1064>/Fsft' */
        /* FunctionCaller: '<S1084>/Function Caller' */
        /* Event: '<S1083>:39' */
        Rte_Call_FsftINVR_I_MtrB_DC_Crnt_FsftINVR_I_MtrB_DC_Crnt();

        /* End of Outputs for SubSystem: '<S1064>/Fsft' */
        /* Transition: '<S1083>:113' */
        /* Transition: '<S1083>:115' */
        /* Transition: '<S1083>:114' */
    }

    /* End of Chart: '<S1079>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_MCPB_DC_Voltage_P_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_MCPB_DC_Voltage_P_ErrSts'
     */
    /* Transition: '<S1083>:107' */
    rtb_TmpSignalConversionAtVeC_dj = Rte_Read_VeCRDB_U_MCPB_DC_Voltage_P_Value(
        &CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_U_j);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_MCPB_DC_Voltage_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1091>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPB_DC_Voltage_P_SigSts_Value(&tmpRead_a);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1087>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_b_MCPB_DC_Volt_V_P'
     */
    guard1 = false;
    if ((((uint32)tmpRead_a) & 3U) != 0U)
    {
        /* Transition: '<S1091>:100' */
        /* Transition: '<S1091>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1091>:104' */
        /*  MM */
        if ((((uint32)tmpRead_a) & 4U) != 0U)
        {
            /* Transition: '<S1091>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S1091>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1091>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPB_DC_Voltage_P_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S1065>/Tmot' */
                /* FunctionCaller: '<S1094>/Function Caller' */
                /* Event: '<S1091>:40' */
                Rte_Call_TmotINVR_b_MtrB_DC_Volt_TmotINVR_b_MtrB_DC_Volt();

                /* End of Outputs for SubSystem: '<S1065>/Tmot' */
                /* Transition: '<S1091>:115' */
                /* Transition: '<S1091>:114' */
            }
        }
        else
        {
            /* Transition: '<S1091>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_dj) == 133)
            {
                /* Transition: '<S1091>:95' */
                /* Transition: '<S1091>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPB_DC_Voltage_P_CallStatus = 4U;

                /* Transition: '<S1091>:114' */
            }
            else
            {
                /* Transition: '<S1091>:120' */
                (void)Rte_Read_VeCRDB_b_MCPB_DC_Volt_V_P_Value(&tmpRead_p);

                /* Transition: '<S1091>:117' */
                /* Call Poke */
                VeCRDB_y_MCPB_DC_Voltage_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1065>/Poke' */
                /* FunctionCaller: '<S1093>/Function Caller' incorporates:
                 *  Inport: '<Root>/VeCRDB_b_MCPB_DC_Volt_V_P'
                 */
                /* Event: '<S1091>:38' */
                Rte_Call_PokeINVR_U_MtrB_DC_Volt_PokeINVR_U_MtrB_DC_Volt
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_U_j, tmpRead_p);

                /* End of Outputs for SubSystem: '<S1065>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1091>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPB_DC_Voltage_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1065>/Fsft' */
        /* FunctionCaller: '<S1092>/Function Caller' */
        /* Event: '<S1091>:39' */
        Rte_Call_FsftINVR_U_MtrB_DC_Volt_FsftINVR_U_MtrB_DC_Volt();

        /* End of Outputs for SubSystem: '<S1065>/Fsft' */
        /* Transition: '<S1091>:113' */
        /* Transition: '<S1091>:115' */
        /* Transition: '<S1091>:114' */
    }

    /* End of Chart: '<S1087>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_MCPB_DerateResn_P_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_MCPB_DerateResn_P_ErrSts'
     */
    /* Transition: '<S1091>:107' */
    rtb_TmpSignalConversionAtVeC_n5 = Rte_Read_VeCRDB_e_MCPB_DerateResn_P_Value(
        &CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_e_j);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_MCPB_DerateResn_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1097>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPB_DerateResn_P_SigSts_Value(&tmpRead_b);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1095>/Chart' */
    if ((((uint32)tmpRead_b) & 3U) != 0U)
    {
        /* Transition: '<S1097>:100' */
        /* Transition: '<S1097>:103' */
        /* Transition: '<S1097>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPB_DerateResn_P_CallStatus = 2U;

        /* Event: '<S1097>:39' */
        /* Transition: '<S1097>:113' */
        /* Transition: '<S1097>:115' */
        /* Transition: '<S1097>:114' */
    }
    else
    {
        /* Transition: '<S1097>:104' */
        /*  MM */
        if ((((uint32)tmpRead_b) & 4U) != 0U)
        {
            /* Transition: '<S1097>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S1097>:88' */
                /* Transition: '<S1097>:111' */
                /* Call Fsft */
                VeCRDB_y_MCPB_DerateResn_P_CallStatus = 2U;

                /* Event: '<S1097>:39' */
                /* Transition: '<S1097>:113' */
                /* Transition: '<S1097>:115' */
                /* Transition: '<S1097>:114' */
            }
            else
            {
                /* Transition: '<S1097>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPB_DerateResn_P_CallStatus = 3U;

                /* Event: '<S1097>:40' */
                /* Transition: '<S1097>:115' */
                /* Transition: '<S1097>:114' */
            }
        }
        else
        {
            /* Transition: '<S1097>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_n5) == 133)
            {
                /* Transition: '<S1097>:95' */
                /* Transition: '<S1097>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPB_DerateResn_P_CallStatus = 4U;

                /* Transition: '<S1097>:114' */
            }
            else
            {
                /* Transition: '<S1097>:120' */
                /* Transition: '<S1097>:117' */
                /* Call Poke */
                VeCRDB_y_MCPB_DerateResn_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1066>/Poke' */
                /* FunctionCaller: '<S1098>/Function Caller' */
                /* Event: '<S1097>:38' */
                Rte_Call_PokeINVR_e_MtrB_DrtRsn_PokeINVR_e_MtrB_DrtRsn
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_e_j);

                /* End of Outputs for SubSystem: '<S1066>/Poke' */
            }
        }
    }

    /* End of Chart: '<S1095>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_MCPB_InvertTemp_P_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_MCPB_InvertTemp_P_ErrSts'
     */
    /* Transition: '<S1097>:107' */
    rtb_TmpSignalConversionAtVeC_bo = Rte_Read_VeCRDB_T_MCPB_InvertTemp_P_Value(
        &CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_T_j);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_MCPB_InvertTemp_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1103>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPB_InvertTemp_P_SigSts_Value(&tmpRead_c);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1099>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_c) & 3U) != 0U)
    {
        /* Transition: '<S1103>:100' */
        /* Transition: '<S1103>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1103>:104' */
        /*  MM */
        if ((((uint32)tmpRead_c) & 4U) != 0U)
        {
            /* Transition: '<S1103>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S1103>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1103>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPB_InvertTemp_P_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S1067>/Tmot' */
                /* FunctionCaller: '<S1106>/Function Caller' */
                /* Event: '<S1103>:40' */
                Rte_Call_TmotINVR_b_MtrB_InvrtrTemp_TmotINVR_b_MtrB_InvrtrTemp();

                /* End of Outputs for SubSystem: '<S1067>/Tmot' */
                /* Transition: '<S1103>:115' */
                /* Transition: '<S1103>:114' */
            }
        }
        else
        {
            /* Transition: '<S1103>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_bo) == 133)
            {
                /* Transition: '<S1103>:95' */
                /* Transition: '<S1103>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPB_InvertTemp_P_CallStatus = 4U;

                /* Transition: '<S1103>:114' */
            }
            else
            {
                /* Transition: '<S1103>:120' */
                if ((((uint32)tmpRead_c) & 8U) != 0U)
                {
                    /* Transition: '<S1103>:122' */
                    /* Transition: '<S1103>:125' */
                    FA_out_kq = true;

                    /* Transition: '<S1103>:126' */
                }
                else
                {
                    /* Transition: '<S1103>:124' */
                    FA_out_kq = false;
                }

                /* Transition: '<S1103>:117' */
                /* Call Poke */
                VeCRDB_y_MCPB_InvertTemp_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1067>/Poke' */
                /* FunctionCaller: '<S1105>/Function Caller' */
                /* Event: '<S1103>:38' */
                Rte_Call_PokeINVR_T_MtrB_InvrtrTemp_PokeINVR_T_MtrB_InvrtrTemp
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_T_j, FA_out_kq);

                /* End of Outputs for SubSystem: '<S1067>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1103>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPB_InvertTemp_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1067>/Fsft' */
        /* FunctionCaller: '<S1104>/Function Caller' */
        /* Event: '<S1103>:39' */
        Rte_Call_FsftINVR_T_MtrB_InvrtrTemp_FsftINVR_T_MtrB_InvrtrTemp();

        /* End of Outputs for SubSystem: '<S1067>/Fsft' */
        /* Transition: '<S1103>:113' */
        /* Transition: '<S1103>:115' */
        /* Transition: '<S1103>:114' */
    }

    /* End of Chart: '<S1099>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_MCPBPIMDCSdBusTmpP_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_MCPBPIMDCSdBusTmpP_ErrSts'
     */
    /* Transition: '<S1103>:107' */
    rtb_TmpSignalConversionAtVeC_cm = Rte_Read_VeCRDB_T_MCPBPIMDCSdBusTmpP_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__ea);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_MCPBPIMDCSdBusTmpP_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1110>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPBPIMDCSdBusTmpP_SigSts_Value(&tmpRead_d);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1107>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_d) & 3U) != 0U)
    {
        /* Transition: '<S1110>:100' */
        /* Transition: '<S1110>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1110>:104' */
        /*  MM */
        if ((((uint32)tmpRead_d) & 4U) != 0U)
        {
            /* Transition: '<S1110>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S1110>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1110>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPBPIMDCSdBusTmpP_CallStatus = 3U;

                /* Event: '<S1110>:40' */
                /* Transition: '<S1110>:115' */
                /* Transition: '<S1110>:114' */
            }
        }
        else
        {
            /* Transition: '<S1110>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_cm) == 133)
            {
                /* Transition: '<S1110>:95' */
                /* Transition: '<S1110>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPBPIMDCSdBusTmpP_CallStatus = 4U;

                /* Transition: '<S1110>:114' */
            }
            else
            {
                /* Transition: '<S1110>:120' */
                if ((((uint32)tmpRead_d) & 8U) != 0U)
                {
                    /* Transition: '<S1110>:122' */
                    /* Transition: '<S1110>:125' */
                    FA_out_kq = true;

                    /* Transition: '<S1110>:126' */
                }
                else
                {
                    /* Transition: '<S1110>:124' */
                    FA_out_kq = false;
                }

                /* Transition: '<S1110>:117' */
                /* Call Poke */
                VeCRDB_y_MCPBPIMDCSdBusTmpP_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1068>/Poke' */
                /* FunctionCaller: '<S1112>/Function Caller' */
                /* Event: '<S1110>:38' */
                Rte_Call_PokeINVR_T_MtrBBusBarTemp_PokeINVR_T_MtrBBusBarTemp
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__ea, FA_out_kq);

                /* End of Outputs for SubSystem: '<S1068>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1110>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPBPIMDCSdBusTmpP_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1068>/Fsft' */
        /* FunctionCaller: '<S1111>/Function Caller' */
        /* Event: '<S1110>:39' */
        Rte_Call_FsftINVR_T_MtrBBusBarTemp_FsftINVR_T_MtrBBusBarTemp();

        /* End of Outputs for SubSystem: '<S1068>/Fsft' */
        /* Transition: '<S1110>:113' */
        /* Transition: '<S1110>:115' */
        /* Transition: '<S1110>:114' */
    }

    /* End of Chart: '<S1107>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_MCPBRotorTemp_P_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_MCPBRotorTemp_P_ErrSts'
     */
    /* Transition: '<S1110>:107' */
    rtb_TmpSignalConversionAtVeC_m5 = Rte_Read_VeCRDB_T_MCPBRotorTemp_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_T_d);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_MCPBRotorTemp_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1117>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPBRotorTemp_P_SigSts_Value(&tmpRead_e);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1113>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_e) & 3U) != 0U)
    {
        /* Transition: '<S1117>:100' */
        /* Transition: '<S1117>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1117>:104' */
        /*  MM */
        if ((((uint32)tmpRead_e) & 4U) != 0U)
        {
            /* Transition: '<S1117>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S1117>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1117>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPBRotorTemp_P_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S1069>/Tmot' */
                /* FunctionCaller: '<S1120>/Function Caller' */
                /* Event: '<S1117>:40' */
                Rte_Call_TmotINVR_b_MtrB_RotrTemp_TmotINVR_b_MtrB_RotrTemp();

                /* End of Outputs for SubSystem: '<S1069>/Tmot' */
                /* Transition: '<S1117>:115' */
                /* Transition: '<S1117>:114' */
            }
        }
        else
        {
            /* Transition: '<S1117>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_m5) == 133)
            {
                /* Transition: '<S1117>:95' */
                /* Transition: '<S1117>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPBRotorTemp_P_CallStatus = 4U;

                /* Transition: '<S1117>:114' */
            }
            else
            {
                /* Transition: '<S1117>:120' */
                if ((((uint32)tmpRead_e) & 8U) != 0U)
                {
                    /* Transition: '<S1117>:122' */
                    /* Transition: '<S1117>:125' */
                    FA_out_kq = true;

                    /* Transition: '<S1117>:126' */
                }
                else
                {
                    /* Transition: '<S1117>:124' */
                    FA_out_kq = false;
                }

                /* Transition: '<S1117>:117' */
                /* Call Poke */
                VeCRDB_y_MCPBRotorTemp_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1069>/Poke' */
                /* FunctionCaller: '<S1119>/Function Caller' */
                /* Event: '<S1117>:38' */
                Rte_Call_PokeINVR_T_MtrB_RotrTemp_PokeINVR_T_MtrB_RotrTemp
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_T_d, FA_out_kq);

                /* End of Outputs for SubSystem: '<S1069>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1117>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPBRotorTemp_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1069>/Fsft' */
        /* FunctionCaller: '<S1118>/Function Caller' */
        /* Event: '<S1117>:39' */
        Rte_Call_FsftINVR_T_MtrB_RotrTemp_FsftINVR_T_MtrB_RotrTemp();

        /* End of Outputs for SubSystem: '<S1069>/Fsft' */
        /* Transition: '<S1117>:113' */
        /* Transition: '<S1117>:115' */
        /* Transition: '<S1117>:114' */
    }

    /* End of Chart: '<S1113>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_MCPBServLampReq_P_ErrSts' incorporates:
     *  Inport: '<Root>/VeCRDB_e_MCPBServLampReq_P_ErrSts'
     */
    /* Transition: '<S1117>:107' */
    rtb_TmpSignalConversionAtVeC_mw = Rte_Read_VeCRDB_b_MCPBServLampReq_P_Value(
        &CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__it);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCRDB_y_MCPBServLampReq_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1123>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_MCPBServLampReq_P_SigSts_Value(&tmpRead_f);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/SigMngt'
     */
    /* Chart: '<S1121>/Chart' */
    if ((((uint32)tmpRead_f) & 3U) != 0U)
    {
        /* Transition: '<S1123>:100' */
        /* Transition: '<S1123>:103' */
        /* Transition: '<S1123>:111' */
        /* Call Fsft */
        VeCRDB_y_MCPBServLampReq_P_CallStatus = 2U;

        /* Event: '<S1123>:39' */
        /* Transition: '<S1123>:113' */
        /* Transition: '<S1123>:115' */
        /* Transition: '<S1123>:114' */
    }
    else
    {
        /* Transition: '<S1123>:104' */
        /*  MM */
        if ((((uint32)tmpRead_f) & 4U) != 0U)
        {
            /* Transition: '<S1123>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S1123>:88' */
                /* Transition: '<S1123>:111' */
                /* Call Fsft */
                VeCRDB_y_MCPBServLampReq_P_CallStatus = 2U;

                /* Event: '<S1123>:39' */
                /* Transition: '<S1123>:113' */
                /* Transition: '<S1123>:115' */
                /* Transition: '<S1123>:114' */
            }
            else
            {
                /* Transition: '<S1123>:110' */
                /* Call Tmot */
                VeCRDB_y_MCPBServLampReq_P_CallStatus = 3U;

                /* Event: '<S1123>:40' */
                /* Transition: '<S1123>:115' */
                /* Transition: '<S1123>:114' */
            }
        }
        else
        {
            /* Transition: '<S1123>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_mw) == 133)
            {
                /* Transition: '<S1123>:95' */
                /* Transition: '<S1123>:116' */
                /* Call Nothing */
                VeCRDB_y_MCPBServLampReq_P_CallStatus = 4U;

                /* Transition: '<S1123>:114' */
            }
            else
            {
                /* Transition: '<S1123>:120' */
                /* Transition: '<S1123>:117' */
                /* Call Poke */
                VeCRDB_y_MCPBServLampReq_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1070>/Poke' */
                /* FunctionCaller: '<S1124>/Function Caller' */
                /* Event: '<S1123>:38' */
                Rte_Call_PokeHMIR_b_MCPB_Service_Lamp_Request_PokeHMIR_b_MCPB_Service_Lamp_Request
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__it);

                /* End of Outputs for SubSystem: '<S1070>/Poke' */
            }
        }
    }

    /* End of Chart: '<S1121>/Chart' */

    /* SignalConversion generated from: '<S2>/VeCRDB_y_SGCP_6SO_Status_P' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_6SO_Status_P_SigSts'
     */
    /* Transition: '<S1123>:107' */
#if Rte_SysCon_VrntCR4B_SGCP6SOStatusP

    /* Outputs for Atomic SubSystem: '<S17>/SGCP_6SO_Status_P' */
    /* SignalConversion generated from: '<S2>/VeCRDB_y_SGCP_6SO_Status_P' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_6SO_Status_P'
     */
    rtb_TmpSignalConversionAtVeC_ji = Rte_Read_VeCRDB_y_SGCP_6SO_Status_P_Value(
        &CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__kg);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1149>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_SGCP_6SO_Status_P_SigSts_Value(&tmpRead_3g);

    /* Outputs for Atomic SubSystem: '<S1125>/SGCP_6SO_Status_P' */
    /* Chart: '<S1146>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_6SO_Status_P_SigSts'
     */
    if ((((uint32)tmpRead_3g) & 3U) != 0U)
    {
        /* Transition: '<S1149>:100' */
        /* Transition: '<S1149>:103' */
        /* Transition: '<S1149>:111' */
        /* Call Fsft */
        VeCRDB_y_SGCP_6SO_Status_P_CallStatus = 2U;

        /* Event: '<S1149>:39' */
        /* Transition: '<S1149>:113' */
        /* Transition: '<S1149>:115' */
        /* Transition: '<S1149>:114' */
    }
    else
    {
        /* Transition: '<S1149>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3g) & 4U) != 0U)
        {
            /* Transition: '<S1149>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S1149>:88' */
                /* Transition: '<S1149>:111' */
                /* Call Fsft */
                VeCRDB_y_SGCP_6SO_Status_P_CallStatus = 2U;

                /* Event: '<S1149>:39' */
                /* Transition: '<S1149>:113' */
                /* Transition: '<S1149>:115' */
                /* Transition: '<S1149>:114' */
            }
            else
            {
                /* Transition: '<S1149>:110' */
                /* Call Tmot */
                VeCRDB_y_SGCP_6SO_Status_P_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S1145>/Tmot' */
                /* FunctionCaller: '<S1151>/Function Caller' */
                /* Event: '<S1149>:40' */
                Rte_Call_TmotINVR_b_MtrA_6SOEnbl_TmotINVR_b_MtrA_6SOEnbl();

                /* End of Outputs for SubSystem: '<S1145>/Tmot' */
                /* Transition: '<S1149>:115' */
                /* Transition: '<S1149>:114' */
            }
        }
        else
        {
            /* Transition: '<S1149>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ji) == 133)
            {
                /* Transition: '<S1149>:95' */
                /* Transition: '<S1149>:116' */
                /* Call Nothing */
                VeCRDB_y_SGCP_6SO_Status_P_CallStatus = 4U;

                /* Transition: '<S1149>:114' */
            }
            else
            {
                /* Transition: '<S1149>:120' */
                if ((((uint32)tmpRead_3g) & 8U) != 0U)
                {
                    /* Transition: '<S1149>:122' */
                    /* Transition: '<S1149>:125' */
                    FA_out_kq = true;

                    /* Transition: '<S1149>:126' */
                }
                else
                {
                    /* Transition: '<S1149>:124' */
                    FA_out_kq = false;
                }

                /* Transition: '<S1149>:117' */
                /* Call Poke */
                VeCRDB_y_SGCP_6SO_Status_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1145>/Poke' */
                /* FunctionCaller: '<S1150>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S1150>/Data Type Conversion'
                 */
                /* Event: '<S1149>:38' */
                Rte_Call_PokeINVR_e_MtrA_6SOEnbl_PokeINVR_e_MtrA_6SOEnbl((sint16)
                    CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__kg, FA_out_kq);

                /* End of Outputs for SubSystem: '<S1145>/Poke' */
            }
        }
    }

    /* End of Chart: '<S1146>/Chart' */
    /* End of Outputs for SubSystem: '<S1125>/SGCP_6SO_Status_P' */
    /* End of Outputs for SubSystem: '<S17>/SGCP_6SO_Status_P' */
    /* Transition: '<S1149>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_y_SGCP_6SO_Status_P' */

    /* SignalConversion generated from: '<S2>/VeCRDB_y_SGCP_AccelRaw_P' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_AccelRaw_P_SigSts'
     */
#if Rte_SysCon_VrntCR4B_SGCPAccelRawP

    /* Outputs for Atomic SubSystem: '<S17>/SGCP_AccelRaw_P' */
    /* SignalConversion generated from: '<S2>/VeCRDB_y_SGCP_AccelRaw_P' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_AccelRaw_P'
     */
    rtb_TmpSignalConversionAtVeC_io = Rte_Read_VeCRDB_y_SGCP_AccelRaw_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_S);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1157>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_SGCP_AccelRaw_P_SigSts_Value(&tmpRead_3h);

    /* Outputs for Atomic SubSystem: '<S1126>/SGCP_AccelRaw_P' */
    /* Chart: '<S1153>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_AccelRaw_P_SigSts'
     *  Inport: '<Root>/VeSR1B_b_SGCP_AccelRawV_P_FD16'
     */
    guard1 = false;
    if ((((uint32)tmpRead_3h) & 3U) != 0U)
    {
        /* Transition: '<S1157>:100' */
        /* Transition: '<S1157>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1157>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3h) & 4U) != 0U)
        {
            /* Transition: '<S1157>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S1157>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1157>:110' */
                /* Call Tmot */
                VeCRDB_y_SGCP_AccelRaw_P_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S1152>/Tmot' */
                /* FunctionCaller: '<S1160>/Function Caller' */
                /* Event: '<S1157>:40' */
                Rte_Call_TmotMSPR_b_MtrA_AccelRaw_TmotMSPR_b_MtrA_AccelRaw();

                /* End of Outputs for SubSystem: '<S1152>/Tmot' */
                /* Transition: '<S1157>:115' */
                /* Transition: '<S1157>:114' */
            }
        }
        else
        {
            /* Transition: '<S1157>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_io) == 133)
            {
                /* Transition: '<S1157>:95' */
                /* Transition: '<S1157>:116' */
                /* Call Nothing */
                VeCRDB_y_SGCP_AccelRaw_P_CallStatus = 4U;

                /* Transition: '<S1157>:114' */
            }
            else
            {
                /* Transition: '<S1157>:120' */
                (void)Rte_Read_VeSR1B_b_SGCP_AccelRawV_P_FD16_Value(&FA_out_p);

                /* Transition: '<S1157>:117' */
                /* Call Poke */
                VeCRDB_y_SGCP_AccelRaw_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1152>/Poke' */
                /* FunctionCaller: '<S1159>/Function Caller' incorporates:
                 *  Inport: '<Root>/VeSR1B_b_SGCP_AccelRawV_P_FD16'
                 */
                /* Event: '<S1157>:38' */
                Rte_Call_PokeMSPR_dn_MtrA_AccelRaw_PokeMSPR_dn_MtrA_AccelRaw
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_S, FA_out_p);

                /* End of Outputs for SubSystem: '<S1152>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1157>:111' */
        /* Call Fsft */
        VeCRDB_y_SGCP_AccelRaw_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1152>/Fsft' */
        /* FunctionCaller: '<S1158>/Function Caller' */
        /* Event: '<S1157>:39' */
        Rte_Call_FsftMSPR_dn_MtrA_AccelRaw_FsftMSPR_dn_MtrA_AccelRaw();

        /* End of Outputs for SubSystem: '<S1152>/Fsft' */
        /* Transition: '<S1157>:113' */
        /* Transition: '<S1157>:115' */
        /* Transition: '<S1157>:114' */
    }

    /* End of Chart: '<S1153>/Chart' */
    /* End of Outputs for SubSystem: '<S1126>/SGCP_AccelRaw_P' */
    /* End of Outputs for SubSystem: '<S17>/SGCP_AccelRaw_P' */
    /* Transition: '<S1157>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_y_SGCP_AccelRaw_P' */

    /* SignalConversion generated from: '<S2>/VeCRDB_n_SGCP_CpbltySpdDvVolt_P' */
#if Rte_SysCon_VrntCR4B_SGCPCpbltySpdDivVoltP

    /* SignalConversion generated from: '<S2>/VeCRDB_n_SGCP_CpbltySpdDvVolt_P' incorporates:
     *  Inport: '<Root>/VeCRDB_n_SGCP_CpbltySpdDvVolt_P'
     */
    rtb_TmpSignalConversionAtVeC_p2 =
        Rte_Read_VeCRDB_n_SGCP_CpbltySpdDvVolt_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_n_S);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_n_SGCP_CpbltySpdDvVolt_P' */

    /* SignalConversion generated from: '<S2>/VeSR1B_y_SGCP_MtrIndex_P_FD16' */
#if Rte_SysCon_VrntCR4B_SGCPCpbltySpdDivVoltP || Rte_SysCon_VrntCR4B_SGCPMtrMaxCpbltyTrqP || Rte_SysCon_VrntCR4B_SGCPMtrMinCpbltyTrqP

    /* SignalConversion generated from: '<S2>/VeSR1B_y_SGCP_MtrIndex_P_FD16' incorporates:
     *  Inport: '<Root>/VeSR1B_y_SGCP_MtrIndex_P_FD16'
     */
    (void)Rte_Read_VeSR1B_y_SGCP_MtrIndex_P_FD16_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B__bx);

#endif

    /* End of SignalConversion generated from: '<S2>/VeSR1B_y_SGCP_MtrIndex_P_FD16' */
#if Rte_SysCon_VrntCR4B_SGCPCpbltySpdDivVoltP

    /* Outputs for Atomic SubSystem: '<S17>/SGCP_CpbltySpdDivVolt_P' */
    /* Inport: '<Root>/VeCRDB_y_SGCP_CpbltySpdDvVolt_P_SigSts' */
    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1165>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_SGCP_CpbltySpdDvVolt_P_SigSts_Value(&tmpRead_3i);

    /* Outputs for Atomic SubSystem: '<S1127>/SGCP_CpbltySpdDivVolt_P' */
    /* Chart: '<S1162>/Chart' */
    guard1 = false;
    if ((((uint32)tmpRead_3i) & 3U) != 0U)
    {
        /* Transition: '<S1165>:100' */
        /* Transition: '<S1165>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1165>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3i) & 4U) != 0U)
        {
            /* Transition: '<S1165>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S1165>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1165>:110' */
                /* Call Tmot */
                VeCRDB_y_SGCP_CpbltySpdDvVolt_P_CallStatus = 3U;

                /* Event: '<S1165>:40' */
                /* Transition: '<S1165>:115' */
                /* Transition: '<S1165>:114' */
            }
        }
        else
        {
            /* Transition: '<S1165>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_p2) == 133)
            {
                /* Transition: '<S1165>:95' */
                /* Transition: '<S1165>:116' */
                /* Call Nothing */
                VeCRDB_y_SGCP_CpbltySpdDvVolt_P_CallStatus = 4U;

                /* Transition: '<S1165>:114' */
            }
            else
            {
                /* Transition: '<S1165>:120' */
                /* Transition: '<S1165>:117' */
                /* Call Poke */
                VeCRDB_y_SGCP_CpbltySpdDvVolt_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1161>/Poke' */
                /* FunctionCaller: '<S1167>/Function Caller' */
                /* Event: '<S1165>:38' */
                Rte_Call_PokeMTIR_n_MtrACapabilitySpd_PokeMTIR_n_MtrACapabilitySpd
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_n_S,
                     CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B__bx);

                /* End of Outputs for SubSystem: '<S1161>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1165>:111' */
        /* Call Fsft */
        VeCRDB_y_SGCP_CpbltySpdDvVolt_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1161>/Fsft' */
        /* FunctionCaller: '<S1166>/Function Caller' */
        /* Event: '<S1165>:39' */
        Rte_Call_FsftMTIR_n_MtrACapabilitySpd_FsftMTIR_n_MtrACapabilitySpd();

        /* End of Outputs for SubSystem: '<S1161>/Fsft' */
        /* Transition: '<S1165>:113' */
        /* Transition: '<S1165>:115' */
        /* Transition: '<S1165>:114' */
    }

    /* End of Chart: '<S1162>/Chart' */
    /* End of Outputs for SubSystem: '<S1127>/SGCP_CpbltySpdDivVolt_P' */
    /* End of Outputs for SubSystem: '<S17>/SGCP_CpbltySpdDivVolt_P' */
    /* Transition: '<S1165>:107' */
#endif

    /* SignalConversion generated from: '<S2>/VeCRDB_h_SGCP_DeratingFactor_P' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_DeratingFactor_P_SigSts'
     */
#if Rte_SysCon_VrntCR4B_SGCPDeratingFactorP

    /* Outputs for Atomic SubSystem: '<S17>/SGCP_DeratingFactor_P' */
    /* SignalConversion generated from: '<S2>/VeCRDB_h_SGCP_DeratingFactor_P' incorporates:
     *  Inport: '<Root>/VeCRDB_h_SGCP_DeratingFactor_P'
     */
    rtb_TmpSignalConversionAtVeC_b3 =
        Rte_Read_VeCRDB_h_SGCP_DeratingFactor_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_h_S);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1172>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_SGCP_DeratingFactor_P_SigSts_Value(&tmpRead_3j);

    /* Outputs for Atomic SubSystem: '<S1128>/SGCP_DeratingFactor_P' */
    /* Chart: '<S1169>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_DeratingFactor_P_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_3j) & 3U) != 0U)
    {
        /* Transition: '<S1172>:100' */
        /* Transition: '<S1172>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1172>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3j) & 4U) != 0U)
        {
            /* Transition: '<S1172>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S1172>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1172>:110' */
                /* Call Tmot */
                VeCRDB_y_SGCP_DeratingFactor_P_CallStatus = 3U;

                /* Event: '<S1172>:40' */
                /* Transition: '<S1172>:115' */
                /* Transition: '<S1172>:114' */
            }
        }
        else
        {
            /* Transition: '<S1172>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_b3) == 133)
            {
                /* Transition: '<S1172>:95' */
                /* Transition: '<S1172>:116' */
                /* Call Nothing */
                VeCRDB_y_SGCP_DeratingFactor_P_CallStatus = 4U;

                /* Transition: '<S1172>:114' */
            }
            else
            {
                /* Transition: '<S1172>:120' */
                /* Transition: '<S1172>:117' */
                /* Call Poke */
                VeCRDB_y_SGCP_DeratingFactor_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1168>/Poke' */
                /* FunctionCaller: '<S1174>/Function Caller' */
                /* Event: '<S1172>:38' */
                Rte_Call_PokeMTIR_k_MtrADeratingFactor_PokeMTIR_k_MtrADeratingFactor
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_h_S);

                /* End of Outputs for SubSystem: '<S1168>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1172>:111' */
        /* Call Fsft */
        VeCRDB_y_SGCP_DeratingFactor_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1168>/Fsft' */
        /* FunctionCaller: '<S1173>/Function Caller' */
        /* Event: '<S1172>:39' */
        Rte_Call_FsftMTIR_k_MtrADeratingFactor_FsftMTIR_k_MtrADeratingFactor();

        /* End of Outputs for SubSystem: '<S1168>/Fsft' */
        /* Transition: '<S1172>:113' */
        /* Transition: '<S1172>:115' */
        /* Transition: '<S1172>:114' */
    }

    /* End of Chart: '<S1169>/Chart' */
    /* End of Outputs for SubSystem: '<S1128>/SGCP_DeratingFactor_P' */
    /* End of Outputs for SubSystem: '<S17>/SGCP_DeratingFactor_P' */
    /* Transition: '<S1172>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_h_SGCP_DeratingFactor_P' */

    /* SignalConversion generated from: '<S2>/VeCRDB_y_SGCP_Dschrge_Status_P' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_Dschrge_Status_P_SigSts'
     */
#if Rte_SysCon_VrntCR4B_SGCPDschrgeStatusP

    /* Outputs for Atomic SubSystem: '<S17>/SGCP_Dschrge_Status_P' */
    /* SignalConversion generated from: '<S2>/VeCRDB_y_SGCP_Dschrge_Status_P' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_Dschrge_Status_P'
     */
    rtb_TmpSignalConversionAtVeC_de =
        Rte_Read_VeCRDB_y_SGCP_Dschrge_Status_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__nw);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1179>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_SGCP_Dschrge_Status_P_SigSts_Value(&tmpRead_3k);

    /* Outputs for Atomic SubSystem: '<S1129>/SGCP_Dschrge_Status_P' */
    /* Chart: '<S1176>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_Dschrge_Status_P_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_3k) & 3U) != 0U)
    {
        /* Transition: '<S1179>:100' */
        /* Transition: '<S1179>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1179>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3k) & 4U) != 0U)
        {
            /* Transition: '<S1179>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S1179>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1179>:110' */
                /* Call Tmot */
                VeCRDB_y_SGCP_Dschrge_Status_P_CallStatus = 3U;

                /* Event: '<S1179>:40' */
                /* Transition: '<S1179>:115' */
                /* Transition: '<S1179>:114' */
            }
        }
        else
        {
            /* Transition: '<S1179>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_de) == 133)
            {
                /* Transition: '<S1179>:95' */
                /* Transition: '<S1179>:116' */
                /* Call Nothing */
                VeCRDB_y_SGCP_Dschrge_Status_P_CallStatus = 4U;

                /* Transition: '<S1179>:114' */
            }
            else
            {
                /* Transition: '<S1179>:120' */
                /* Transition: '<S1179>:117' */
                /* Call Poke */
                VeCRDB_y_SGCP_Dschrge_Status_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1175>/Poke' */
                /* FunctionCaller: '<S1181>/Function Caller' incorporates:
                 *  Constant: '<S1181>/Constant'
                 *  DataTypeConversion: '<S1181>/Data Type Conversion'
                 */
                /* Event: '<S1179>:38' */
                Rte_Call_PokeINVR_e_MtrA_Dschrge_Stat_PokeINVR_e_MtrA_Dschrge_Stat
                    ((sint16)CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__nw,
                     false);

                /* End of Outputs for SubSystem: '<S1175>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1179>:111' */
        /* Call Fsft */
        VeCRDB_y_SGCP_Dschrge_Status_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1175>/Fsft' */
        /* FunctionCaller: '<S1180>/Function Caller' */
        /* Event: '<S1179>:39' */
        Rte_Call_FsftINVR_e_MtrA_Dschrge_Stat_FsftINVR_e_MtrA_Dschrge_Stat();

        /* End of Outputs for SubSystem: '<S1175>/Fsft' */
        /* Transition: '<S1179>:113' */
        /* Transition: '<S1179>:115' */
        /* Transition: '<S1179>:114' */
    }

    /* End of Chart: '<S1176>/Chart' */
    /* End of Outputs for SubSystem: '<S1129>/SGCP_Dschrge_Status_P' */
    /* End of Outputs for SubSystem: '<S17>/SGCP_Dschrge_Status_P' */
    /* Transition: '<S1179>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_y_SGCP_Dschrge_Status_P' */

    /* SignalConversion generated from: '<S2>/VeCRDB_b_SGCP_HV_CnctrOpn_Req_P' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_HV_CnctrOpn_Req_P_SigSts'
     */
#if Rte_SysCon_VrntCR4B_SGCPHVCnctrOpnReqP

    /* Outputs for Atomic SubSystem: '<S17>/SGCP_HV_CnctrOpn_Req_P' */
    /* SignalConversion generated from: '<S2>/VeCRDB_b_SGCP_HV_CnctrOpn_Req_P' incorporates:
     *  Inport: '<Root>/VeCRDB_b_SGCP_HV_CnctrOpn_Req_P'
     */
    rtb_TmpSignalConversionAtVeC_c4 =
        Rte_Read_VeCRDB_b_SGCP_HV_CnctrOpn_Req_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_S);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1187>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_SGCP_HV_CnctrOpn_Req_P_SigSts_Value(&tmpRead_3l);

    /* Outputs for Atomic SubSystem: '<S1130>/SGCP_HV_CnctrOpn_Req_P' */
    /* Chart: '<S1183>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_HV_CnctrOpn_Req_P_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_3l) & 3U) != 0U)
    {
        /* Transition: '<S1187>:100' */
        /* Transition: '<S1187>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1187>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3l) & 4U) != 0U)
        {
            /* Transition: '<S1187>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S1187>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1187>:110' */
                /* Call Tmot */
                VeCRDB_y_SGCP_HV_CnctrOpn_Req_P_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S1182>/Tmot' */
                /* FunctionCaller: '<S1190>/Function Caller' */
                /* Event: '<S1187>:40' */
                Rte_Call_TmotINVR_b_MtrAFlt_HV_CntctrOpnRq_TmotINVR_b_MtrAFlt_HV_CntctrOpnRq
                    ();

                /* End of Outputs for SubSystem: '<S1182>/Tmot' */
                /* Transition: '<S1187>:115' */
                /* Transition: '<S1187>:114' */
            }
        }
        else
        {
            /* Transition: '<S1187>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_c4) == 133)
            {
                /* Transition: '<S1187>:95' */
                /* Transition: '<S1187>:116' */
                /* Call Nothing */
                VeCRDB_y_SGCP_HV_CnctrOpn_Req_P_CallStatus = 4U;

                /* Transition: '<S1187>:114' */
            }
            else
            {
                /* Transition: '<S1187>:120' */
                /* Transition: '<S1187>:117' */
                /* Call Poke */
                VeCRDB_y_SGCP_HV_CnctrOpn_Req_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1182>/Poke' */
                /* FunctionCaller: '<S1189>/Function Caller' */
                /* Event: '<S1187>:38' */
                Rte_Call_PokeINVR_b_MtrAFlt_HV_CntctrOpnRq_PokeINVR_b_MtrAFlt_HV_CntctrOpnRq
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_S);

                /* End of Outputs for SubSystem: '<S1182>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1187>:111' */
        /* Call Fsft */
        VeCRDB_y_SGCP_HV_CnctrOpn_Req_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1182>/Fsft' */
        /* FunctionCaller: '<S1188>/Function Caller' */
        /* Event: '<S1187>:39' */
        Rte_Call_FsftINVR_b_MtrAFlt_HV_CntctrOpnRq_FsftINVR_b_MtrAFlt_HV_CntctrOpnRq
            ();

        /* End of Outputs for SubSystem: '<S1182>/Fsft' */
        /* Transition: '<S1187>:113' */
        /* Transition: '<S1187>:115' */
        /* Transition: '<S1187>:114' */
    }

    /* End of Chart: '<S1183>/Chart' */
    /* End of Outputs for SubSystem: '<S1130>/SGCP_HV_CnctrOpn_Req_P' */
    /* End of Outputs for SubSystem: '<S17>/SGCP_HV_CnctrOpn_Req_P' */
    /* Transition: '<S1187>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_b_SGCP_HV_CnctrOpn_Req_P' */

    /* SignalConversion generated from: '<S2>/VeCRDB_y_SGCP_InterlockSts_P' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_InterlockSts_P_SigSts'
     */
#if Rte_SysCon_VrntCR4B_SGCPInterlockStsP

    /* Outputs for Atomic SubSystem: '<S17>/SGCP_InterlockSts_P' */
    /* SignalConversion generated from: '<S2>/VeCRDB_y_SGCP_InterlockSts_P' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_InterlockSts_P'
     */
    rtb_TmpSignalConversionAtVeC_nc =
        Rte_Read_VeCRDB_y_SGCP_InterlockSts_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__de);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1195>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_SGCP_InterlockSts_P_SigSts_Value(&tmpRead_3m);

    /* Outputs for Atomic SubSystem: '<S1131>/SGCP_InterlockSts_P' */
    /* Chart: '<S1192>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_InterlockSts_P_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_3m) & 3U) != 0U)
    {
        /* Transition: '<S1195>:100' */
        /* Transition: '<S1195>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1195>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3m) & 4U) != 0U)
        {
            /* Transition: '<S1195>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S1195>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1195>:110' */
                /* Call Tmot */
                VeCRDB_y_SGCP_InterlockSts_P_CallStatus = 3U;

                /* Event: '<S1195>:40' */
                /* Transition: '<S1195>:115' */
                /* Transition: '<S1195>:114' */
            }
        }
        else
        {
            /* Transition: '<S1195>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_nc) == 133)
            {
                /* Transition: '<S1195>:95' */
                /* Transition: '<S1195>:116' */
                /* Call Nothing */
                VeCRDB_y_SGCP_InterlockSts_P_CallStatus = 4U;

                /* Transition: '<S1195>:114' */
            }
            else
            {
                /* Transition: '<S1195>:120' */
                if ((((uint32)tmpRead_3m) & 8U) != 0U)
                {
                    /* Transition: '<S1195>:122' */
                    /* Transition: '<S1195>:125' */
                    FA_out_p = true;

                    /* Transition: '<S1195>:126' */
                }
                else
                {
                    /* Transition: '<S1195>:124' */
                    FA_out_p = false;
                }

                /* Transition: '<S1195>:117' */
                /* Call Poke */
                VeCRDB_y_SGCP_InterlockSts_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1191>/Poke' */
                /* FunctionCaller: '<S1197>/Function Caller' */
                /* Event: '<S1195>:38' */
                Rte_Call_PokeINVR_e_MCPA_HVILSts_PokeINVR_e_MCPA_HVILSts
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__de, FA_out_p);

                /* End of Outputs for SubSystem: '<S1191>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1195>:111' */
        /* Call Fsft */
        VeCRDB_y_SGCP_InterlockSts_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1191>/Fsft' */
        /* FunctionCaller: '<S1196>/Function Caller' */
        /* Event: '<S1195>:39' */
        Rte_Call_FsftINVR_b_MCPA_HVILSts_FsftINVR_b_MCPA_HVILSts();

        /* End of Outputs for SubSystem: '<S1191>/Fsft' */
        /* Transition: '<S1195>:113' */
        /* Transition: '<S1195>:115' */
        /* Transition: '<S1195>:114' */
    }

    /* End of Chart: '<S1192>/Chart' */
    /* End of Outputs for SubSystem: '<S1131>/SGCP_InterlockSts_P' */
    /* End of Outputs for SubSystem: '<S17>/SGCP_InterlockSts_P' */
    /* Transition: '<S1195>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_y_SGCP_InterlockSts_P' */

    /* SignalConversion generated from: '<S2>/VeCRDB_y_SGCP_Invrtr_State_P' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_Invrtr_State_P_SigSts'
     */
#if Rte_SysCon_VrntCR4B_SGCPInvrtrStateP

    /* Outputs for Atomic SubSystem: '<S17>/SGCP_Invrtr_State_P' */
    /* SignalConversion generated from: '<S2>/VeCRDB_y_SGCP_Invrtr_State_P' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_Invrtr_State_P'
     */
    rtb_TmpSignalConversionAtVeC_a3 =
        Rte_Read_VeCRDB_y_SGCP_Invrtr_State_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__nd);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1203>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_SGCP_Invrtr_State_P_SigSts_Value(&tmpRead_3n);

    /* Outputs for Atomic SubSystem: '<S1132>/SGCP_Invrtr_State_P' */
    /* Chart: '<S1199>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_Invrtr_State_P_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_3n) & 3U) != 0U)
    {
        /* Transition: '<S1203>:100' */
        /* Transition: '<S1203>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1203>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3n) & 4U) != 0U)
        {
            /* Transition: '<S1203>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S1203>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1203>:110' */
                /* Call Tmot */
                VeCRDB_y_SGCP_Invrtr_State_P_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S1198>/Tmot' */
                /* FunctionCaller: '<S1206>/Function Caller' */
                /* Event: '<S1203>:40' */
                Rte_Call_TmotINVR_b_MtrA_InvrtrSt_TmotINVR_b_MtrA_InvrtrSt();

                /* End of Outputs for SubSystem: '<S1198>/Tmot' */
                /* Transition: '<S1203>:115' */
                /* Transition: '<S1203>:114' */
            }
        }
        else
        {
            /* Transition: '<S1203>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_a3) == 133)
            {
                /* Transition: '<S1203>:95' */
                /* Transition: '<S1203>:116' */
                /* Call Nothing */
                VeCRDB_y_SGCP_Invrtr_State_P_CallStatus = 4U;

                /* Transition: '<S1203>:114' */
            }
            else
            {
                /* Transition: '<S1203>:120' */
                /* Transition: '<S1203>:117' */
                /* Call Poke */
                VeCRDB_y_SGCP_Invrtr_State_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1198>/Poke' */
                /* FunctionCaller: '<S1205>/Function Caller' */
                /* Event: '<S1203>:38' */
                Rte_Call_PokeINVR_e_MtrA_InvrtrSt_PokeINVR_e_MtrA_InvrtrSt
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__nd);

                /* End of Outputs for SubSystem: '<S1198>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1203>:111' */
        /* Call Fsft */
        VeCRDB_y_SGCP_Invrtr_State_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1198>/Fsft' */
        /* FunctionCaller: '<S1204>/Function Caller' */
        /* Event: '<S1203>:39' */
        Rte_Call_FsftINVR_e_MtrA_InvrtrSt_FsftINVR_e_MtrA_InvrtrSt();

        /* End of Outputs for SubSystem: '<S1198>/Fsft' */
        /* Transition: '<S1203>:113' */
        /* Transition: '<S1203>:115' */
        /* Transition: '<S1203>:114' */
    }

    /* End of Chart: '<S1199>/Chart' */
    /* End of Outputs for SubSystem: '<S1132>/SGCP_Invrtr_State_P' */
    /* End of Outputs for SubSystem: '<S17>/SGCP_Invrtr_State_P' */
    /* Transition: '<S1203>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_y_SGCP_Invrtr_State_P' */

    /* SignalConversion generated from: '<S2>/VeCRDB_M_SGCP_MaxTorq_P' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_MaxTorq_P_SigSts'
     */
#if Rte_SysCon_VrntCR4B_SGCPMaxTorqP

    /* Outputs for Atomic SubSystem: '<S17>/SGCP_MaxTorq_P' */
    /* SignalConversion generated from: '<S2>/VeCRDB_M_SGCP_MaxTorq_P' incorporates:
     *  Inport: '<Root>/VeCRDB_M_SGCP_MaxTorq_P'
     */
    rtb_TmpSignalConversionAtVeC_eh = Rte_Read_VeCRDB_M_SGCP_MaxTorq_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_M_S);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1211>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_SGCP_MaxTorq_P_SigSts_Value(&tmpRead_3o);

    /* Outputs for Atomic SubSystem: '<S1133>/SGCP_MaxTorq_P' */
    /* Chart: '<S1208>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_MaxTorq_P_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_3o) & 3U) != 0U)
    {
        /* Transition: '<S1211>:100' */
        /* Transition: '<S1211>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1211>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3o) & 4U) != 0U)
        {
            /* Transition: '<S1211>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S1211>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1211>:110' */
                /* Call Tmot */
                VeCRDB_y_SGCP_MaxTorq_P_CallStatus = 3U;

                /* Event: '<S1211>:40' */
                /* Transition: '<S1211>:115' */
                /* Transition: '<S1211>:114' */
            }
        }
        else
        {
            /* Transition: '<S1211>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_eh) == 133)
            {
                /* Transition: '<S1211>:95' */
                /* Transition: '<S1211>:116' */
                /* Call Nothing */
                VeCRDB_y_SGCP_MaxTorq_P_CallStatus = 4U;

                /* Transition: '<S1211>:114' */
            }
            else
            {
                /* Transition: '<S1211>:120' */
                /* Transition: '<S1211>:117' */
                /* Call Poke */
                VeCRDB_y_SGCP_MaxTorq_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1207>/Poke' */
                /* FunctionCaller: '<S1213>/Function Caller' */
                /* Event: '<S1211>:38' */
                Rte_Call_PokeMTIR_M_MtrA_MaxTorq_PokeMTIR_M_MtrA_MaxTorq
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_M_S);

                /* End of Outputs for SubSystem: '<S1207>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1211>:111' */
        /* Call Fsft */
        VeCRDB_y_SGCP_MaxTorq_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1207>/Fsft' */
        /* FunctionCaller: '<S1212>/Function Caller' */
        /* Event: '<S1211>:39' */
        Rte_Call_FsftMTIR_M_MtrA_MaxTorq_FsftMTIR_M_MtrA_MaxTorq();

        /* End of Outputs for SubSystem: '<S1207>/Fsft' */
        /* Transition: '<S1211>:113' */
        /* Transition: '<S1211>:115' */
        /* Transition: '<S1211>:114' */
    }

    /* End of Chart: '<S1208>/Chart' */
    /* End of Outputs for SubSystem: '<S1133>/SGCP_MaxTorq_P' */
    /* End of Outputs for SubSystem: '<S17>/SGCP_MaxTorq_P' */
    /* Transition: '<S1211>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_M_SGCP_MaxTorq_P' */

    /* SignalConversion generated from: '<S2>/VeCRDB_M_SGCP_MinTorq_P' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_MinTorq_P_SigSts'
     */
#if Rte_SysCon_VrntCR4B_SGCPMinTorqP

    /* Outputs for Atomic SubSystem: '<S17>/SGCP_MinTorq_P' */
    /* SignalConversion generated from: '<S2>/VeCRDB_M_SGCP_MinTorq_P' incorporates:
     *  Inport: '<Root>/VeCRDB_M_SGCP_MinTorq_P'
     */
    rtb_TmpSignalConversionAtVeC_k2 = Rte_Read_VeCRDB_M_SGCP_MinTorq_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__mz);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1218>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_SGCP_MinTorq_P_SigSts_Value(&tmpRead_3p);

    /* Outputs for Atomic SubSystem: '<S1134>/SGCP_MinTorq_P' */
    /* Chart: '<S1215>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_MinTorq_P_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_3p) & 3U) != 0U)
    {
        /* Transition: '<S1218>:100' */
        /* Transition: '<S1218>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1218>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3p) & 4U) != 0U)
        {
            /* Transition: '<S1218>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S1218>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1218>:110' */
                /* Call Tmot */
                VeCRDB_y_SGCP_MinTorq_P_CallStatus = 3U;

                /* Event: '<S1218>:40' */
                /* Transition: '<S1218>:115' */
                /* Transition: '<S1218>:114' */
            }
        }
        else
        {
            /* Transition: '<S1218>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_k2) == 133)
            {
                /* Transition: '<S1218>:95' */
                /* Transition: '<S1218>:116' */
                /* Call Nothing */
                VeCRDB_y_SGCP_MinTorq_P_CallStatus = 4U;

                /* Transition: '<S1218>:114' */
            }
            else
            {
                /* Transition: '<S1218>:120' */
                /* Transition: '<S1218>:117' */
                /* Call Poke */
                VeCRDB_y_SGCP_MinTorq_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1214>/Poke' */
                /* FunctionCaller: '<S1220>/Function Caller' */
                /* Event: '<S1218>:38' */
                Rte_Call_PokeMTIR_M_MtrA_MinTorq_PokeMTIR_M_MtrA_MinTorq
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__mz);

                /* End of Outputs for SubSystem: '<S1214>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1218>:111' */
        /* Call Fsft */
        VeCRDB_y_SGCP_MinTorq_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1214>/Fsft' */
        /* FunctionCaller: '<S1219>/Function Caller' */
        /* Event: '<S1218>:39' */
        Rte_Call_FsftMTIR_M_MtrA_MinTorq_FsftMTIR_M_MtrA_MinTorq();

        /* End of Outputs for SubSystem: '<S1214>/Fsft' */
        /* Transition: '<S1218>:113' */
        /* Transition: '<S1218>:115' */
        /* Transition: '<S1218>:114' */
    }

    /* End of Chart: '<S1215>/Chart' */
    /* End of Outputs for SubSystem: '<S1134>/SGCP_MinTorq_P' */
    /* End of Outputs for SubSystem: '<S17>/SGCP_MinTorq_P' */
    /* Transition: '<S1218>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_M_SGCP_MinTorq_P' */

    /* SignalConversion generated from: '<S2>/VeCRDB_M_SGCP_MtrMaxCpbltyTrq_P' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_MtrMaxCpbltyTrq_P_SigSts'
     */
#if Rte_SysCon_VrntCR4B_SGCPMtrMaxCpbltyTrqP

    /* Outputs for Atomic SubSystem: '<S17>/SGCP_MtrMaxCpbltyTrq_P' */
    /* SignalConversion generated from: '<S2>/VeCRDB_M_SGCP_MtrMaxCpbltyTrq_P' incorporates:
     *  Inport: '<Root>/VeCRDB_M_SGCP_MtrMaxCpbltyTrq_P'
     */
    rtb_TmpSignalConversionAtVeC_fc =
        Rte_Read_VeCRDB_M_SGCP_MtrMaxCpbltyTrq_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_M_o);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1225>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_SGCP_MtrMaxCpbltyTrq_P_SigSts_Value(&tmpRead_3q);

    /* Outputs for Atomic SubSystem: '<S1135>/SGCP_MtrMaxCpbltyTrq_P' */
    /* Chart: '<S1222>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_MtrMaxCpbltyTrq_P_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_3q) & 3U) != 0U)
    {
        /* Transition: '<S1225>:100' */
        /* Transition: '<S1225>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1225>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3q) & 4U) != 0U)
        {
            /* Transition: '<S1225>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S1225>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1225>:110' */
                /* Call Tmot */
                VeCRDB_y_SGCP_MtrMaxCpbltyTrq_P_CallStatus = 3U;

                /* Event: '<S1225>:40' */
                /* Transition: '<S1225>:115' */
                /* Transition: '<S1225>:114' */
            }
        }
        else
        {
            /* Transition: '<S1225>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_fc) == 133)
            {
                /* Transition: '<S1225>:95' */
                /* Transition: '<S1225>:116' */
                /* Call Nothing */
                VeCRDB_y_SGCP_MtrMaxCpbltyTrq_P_CallStatus = 4U;

                /* Transition: '<S1225>:114' */
            }
            else
            {
                /* Transition: '<S1225>:120' */
                /* Transition: '<S1225>:117' */
                /* Call Poke */
                VeCRDB_y_SGCP_MtrMaxCpbltyTrq_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1221>/Poke' */
                /* FunctionCaller: '<S1227>/Function Caller' */
                /* Event: '<S1225>:38' */
                Rte_Call_PokeMTIR_M_MtrACapabilityMax_PokeMTIR_M_MtrACapabilityMax
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_M_o,
                     CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B__bx);

                /* End of Outputs for SubSystem: '<S1221>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1225>:111' */
        /* Call Fsft */
        VeCRDB_y_SGCP_MtrMaxCpbltyTrq_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1221>/Fsft' */
        /* FunctionCaller: '<S1226>/Function Caller' */
        /* Event: '<S1225>:39' */
        Rte_Call_FsftMTIR_M_MtrACapabilityMax_FsftMTIR_M_MtrACapabilityMax();

        /* End of Outputs for SubSystem: '<S1221>/Fsft' */
        /* Transition: '<S1225>:113' */
        /* Transition: '<S1225>:115' */
        /* Transition: '<S1225>:114' */
    }

    /* End of Chart: '<S1222>/Chart' */
    /* End of Outputs for SubSystem: '<S1135>/SGCP_MtrMaxCpbltyTrq_P' */
    /* End of Outputs for SubSystem: '<S17>/SGCP_MtrMaxCpbltyTrq_P' */
    /* Transition: '<S1225>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_M_SGCP_MtrMaxCpbltyTrq_P' */

    /* SignalConversion generated from: '<S2>/VeCRDB_M_SGCP_MtrMinCpbltyTrq_P' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_MtrMinCpbltyTrq_P_SigSts'
     */
#if Rte_SysCon_VrntCR4B_SGCPMtrMinCpbltyTrqP

    /* Outputs for Atomic SubSystem: '<S17>/SGCP_MtrMinCpbltyTrq_P' */
    /* SignalConversion generated from: '<S2>/VeCRDB_M_SGCP_MtrMinCpbltyTrq_P' incorporates:
     *  Inport: '<Root>/VeCRDB_M_SGCP_MtrMinCpbltyTrq_P'
     */
    rtb_TmpSignalConversionAtVeC_on =
        Rte_Read_VeCRDB_M_SGCP_MtrMinCpbltyTrq_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__m5);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1232>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_SGCP_MtrMinCpbltyTrq_P_SigSts_Value(&tmpRead_3r);

    /* Outputs for Atomic SubSystem: '<S1136>/SGCP_MtrMinCpbltyTrq_P' */
    /* Chart: '<S1229>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_MtrMinCpbltyTrq_P_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_3r) & 3U) != 0U)
    {
        /* Transition: '<S1232>:100' */
        /* Transition: '<S1232>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1232>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3r) & 4U) != 0U)
        {
            /* Transition: '<S1232>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S1232>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1232>:110' */
                /* Call Tmot */
                VeCRDB_y_SGCP_MtrMinCpbltyTrq_P_CallStatus = 3U;

                /* Event: '<S1232>:40' */
                /* Transition: '<S1232>:115' */
                /* Transition: '<S1232>:114' */
            }
        }
        else
        {
            /* Transition: '<S1232>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_on) == 133)
            {
                /* Transition: '<S1232>:95' */
                /* Transition: '<S1232>:116' */
                /* Call Nothing */
                VeCRDB_y_SGCP_MtrMinCpbltyTrq_P_CallStatus = 4U;

                /* Transition: '<S1232>:114' */
            }
            else
            {
                /* Transition: '<S1232>:120' */
                /* Transition: '<S1232>:117' */
                /* Call Poke */
                VeCRDB_y_SGCP_MtrMinCpbltyTrq_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1228>/Poke' */
                /* FunctionCaller: '<S1234>/Function Caller' */
                /* Event: '<S1232>:38' */
                Rte_Call_PokeMTIR_M_MtrACapabilityMin_PokeMTIR_M_MtrACapabilityMin
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__m5,
                     CR4B_FUNC_ac_B.TmpSignalConversionAtVeSR1B__bx);

                /* End of Outputs for SubSystem: '<S1228>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1232>:111' */
        /* Call Fsft */
        VeCRDB_y_SGCP_MtrMinCpbltyTrq_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1228>/Fsft' */
        /* FunctionCaller: '<S1233>/Function Caller' */
        /* Event: '<S1232>:39' */
        Rte_Call_FsftMTIR_M_MtrACapabilityMin_FsftMTIR_M_MtrACapabilityMin();

        /* End of Outputs for SubSystem: '<S1228>/Fsft' */
        /* Transition: '<S1232>:113' */
        /* Transition: '<S1232>:115' */
        /* Transition: '<S1232>:114' */
    }

    /* End of Chart: '<S1229>/Chart' */
    /* End of Outputs for SubSystem: '<S1136>/SGCP_MtrMinCpbltyTrq_P' */
    /* End of Outputs for SubSystem: '<S17>/SGCP_MtrMinCpbltyTrq_P' */
    /* Transition: '<S1232>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_M_SGCP_MtrMinCpbltyTrq_P' */

    /* SignalConversion generated from: '<S2>/VeCRDB_n_SGCP_RPM_P' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_RPM_P_SigSts'
     */
#if Rte_SysCon_VrntCR4B_SGCPRPMP

    /* Outputs for Atomic SubSystem: '<S17>/SGCP_RPM_P' */
    /* SignalConversion generated from: '<S2>/VeCRDB_n_SGCP_RPM_P' incorporates:
     *  Inport: '<Root>/VeCRDB_n_SGCP_RPM_P'
     */
    rtb_TmpSignalConversionAtVeC_du = Rte_Read_VeCRDB_n_SGCP_RPM_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__jg);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1240>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_SGCP_RPM_P_SigSts_Value(&tmpRead_3s);

    /* Outputs for Atomic SubSystem: '<S1137>/SGCP_RPM_P' */
    /* Chart: '<S1236>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_RPM_P_SigSts'
     *  Inport: '<Root>/VeSR1B_b_SGCP_RPM_V_P_FD16'
     */
    guard1 = false;
    if ((((uint32)tmpRead_3s) & 3U) != 0U)
    {
        /* Transition: '<S1240>:100' */
        /* Transition: '<S1240>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1240>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3s) & 4U) != 0U)
        {
            /* Transition: '<S1240>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S1240>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1240>:110' */
                /* Call Tmot */
                VeCRDB_y_SGCP_RPM_P_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S1235>/Tmot' */
                /* FunctionCaller: '<S1243>/Function Caller' */
                /* Event: '<S1240>:40' */
                Rte_Call_TmotMSPR_b_MtrA_SpdRaw_TmotMSPR_b_MtrA_SpdRaw();

                /* End of Outputs for SubSystem: '<S1235>/Tmot' */
                /* Transition: '<S1240>:115' */
                /* Transition: '<S1240>:114' */
            }
        }
        else
        {
            /* Transition: '<S1240>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_du) == 133)
            {
                /* Transition: '<S1240>:95' */
                /* Transition: '<S1240>:116' */
                /* Call Nothing */
                VeCRDB_y_SGCP_RPM_P_CallStatus = 4U;

                /* Transition: '<S1240>:114' */
            }
            else
            {
                /* Transition: '<S1240>:120' */
                (void)Rte_Read_VeSR1B_b_SGCP_RPM_V_P_FD16_Value(&FA_out_h);

                /* Transition: '<S1240>:117' */
                /* Call Poke */
                VeCRDB_y_SGCP_RPM_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1235>/Poke' */
                /* FunctionCaller: '<S1242>/Function Caller' incorporates:
                 *  Inport: '<Root>/VeSR1B_b_SGCP_RPM_V_P_FD16'
                 */
                /* Event: '<S1240>:38' */
                Rte_Call_PokeMSPR_n_MtrA_SpdRaw_PokeMSPR_n_MtrA_SpdRaw
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__jg, FA_out_h);

                /* End of Outputs for SubSystem: '<S1235>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1240>:111' */
        /* Call Fsft */
        VeCRDB_y_SGCP_RPM_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1235>/Fsft' */
        /* FunctionCaller: '<S1241>/Function Caller' */
        /* Event: '<S1240>:39' */
        Rte_Call_FsftMSPR_n_MtrA_SpdRaw_FsftMSPR_n_MtrA_SpdRaw();

        /* End of Outputs for SubSystem: '<S1235>/Fsft' */
        /* Transition: '<S1240>:113' */
        /* Transition: '<S1240>:115' */
        /* Transition: '<S1240>:114' */
    }

    /* End of Chart: '<S1236>/Chart' */
    /* End of Outputs for SubSystem: '<S1137>/SGCP_RPM_P' */
    /* End of Outputs for SubSystem: '<S17>/SGCP_RPM_P' */
    /* Transition: '<S1240>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_n_SGCP_RPM_P' */

    /* SignalConversion generated from: '<S2>/VeCRDB_b_SGCP_RPM_V_P' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_RPM_V_P_SigSts'
     */
#if Rte_SysCon_VrntCR4B_SGCPRPMVP

    /* Outputs for Atomic SubSystem: '<S17>/SGCP_RPM_V_P' */
    /* SignalConversion generated from: '<S2>/VeCRDB_b_SGCP_RPM_V_P' incorporates:
     *  Inport: '<Root>/VeCRDB_b_SGCP_RPM_V_P'
     */
    rtb_TmpSignalConversionAtVe_e1o = Rte_Read_VeCRDB_b_SGCP_RPM_V_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_e);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1247>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_SGCP_RPM_V_P_SigSts_Value(&tmpRead_3t);

    /* Outputs for Atomic SubSystem: '<S1138>/SGCP_RPM_V_P' */
    /* Chart: '<S1245>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_RPM_V_P_SigSts'
     */
    if ((((uint32)tmpRead_3t) & 3U) != 0U)
    {
        /* Transition: '<S1247>:100' */
        /* Transition: '<S1247>:103' */
        /* Transition: '<S1247>:111' */
        /* Call Fsft */
        VeCRDB_y_SGCP_RPM_V_P_CallStatus = 2U;

        /* Event: '<S1247>:39' */
        /* Transition: '<S1247>:113' */
        /* Transition: '<S1247>:115' */
        /* Transition: '<S1247>:114' */
    }
    else
    {
        /* Transition: '<S1247>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3t) & 4U) != 0U)
        {
            /* Transition: '<S1247>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S1247>:88' */
                /* Transition: '<S1247>:111' */
                /* Call Fsft */
                VeCRDB_y_SGCP_RPM_V_P_CallStatus = 2U;

                /* Event: '<S1247>:39' */
                /* Transition: '<S1247>:113' */
                /* Transition: '<S1247>:115' */
                /* Transition: '<S1247>:114' */
            }
            else
            {
                /* Transition: '<S1247>:110' */
                /* Call Tmot */
                VeCRDB_y_SGCP_RPM_V_P_CallStatus = 3U;

                /* Event: '<S1247>:40' */
                /* Transition: '<S1247>:115' */
                /* Transition: '<S1247>:114' */
            }
        }
        else
        {
            /* Transition: '<S1247>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_e1o) == 133)
            {
                /* Transition: '<S1247>:95' */
                /* Transition: '<S1247>:116' */
                /* Call Nothing */
                VeCRDB_y_SGCP_RPM_V_P_CallStatus = 4U;

                /* Transition: '<S1247>:114' */
            }
            else
            {
                /* Transition: '<S1247>:120' */
                /* Transition: '<S1247>:117' */
                /* Call Poke */
                VeCRDB_y_SGCP_RPM_V_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1244>/Poke' */
                /* Event: '<S1247>:38' */
                CR4B_FUNC_ac_Poke(CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_e);

                /* End of Outputs for SubSystem: '<S1244>/Poke' */
            }
        }
    }

    /* End of Chart: '<S1245>/Chart' */
    /* End of Outputs for SubSystem: '<S1138>/SGCP_RPM_V_P' */
    /* End of Outputs for SubSystem: '<S17>/SGCP_RPM_V_P' */
    /* Transition: '<S1247>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_b_SGCP_RPM_V_P' */

    /* SignalConversion generated from: '<S2>/VeCRDB_y_SGCP_SPT_Stat_P' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_SPT_Stat_P_SigSts'
     */
#if Rte_SysCon_VrntCR4B_SGCPSPTStatP

    /* Outputs for Atomic SubSystem: '<S17>/SGCP_SPT_Stat_P' */
    /* SignalConversion generated from: '<S2>/VeCRDB_y_SGCP_SPT_Stat_P' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_SPT_Stat_P'
     */
    rtb_TmpSignalConversionAtVeC_f5 = Rte_Read_VeCRDB_y_SGCP_SPT_Stat_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_j);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1254>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_SGCP_SPT_Stat_P_SigSts_Value(&tmpRead_3u);

    /* Outputs for Atomic SubSystem: '<S1139>/SGCP_SPT_Stat_P' */
    /* Chart: '<S1250>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_SPT_Stat_P_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_3u) & 3U) != 0U)
    {
        /* Transition: '<S1254>:100' */
        /* Transition: '<S1254>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1254>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3u) & 4U) != 0U)
        {
            /* Transition: '<S1254>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S1254>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1254>:110' */
                /* Call Tmot */
                VeCRDB_y_SGCP_SPT_Stat_P_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S1249>/Tmot' */
                /* FunctionCaller: '<S1257>/Function Caller' */
                /* Event: '<S1254>:40' */
                Rte_Call_TmotINVR_b_MCPA_SPT_State_TmotINVR_b_MCPA_SPT_State();

                /* End of Outputs for SubSystem: '<S1249>/Tmot' */
                /* Transition: '<S1254>:115' */
                /* Transition: '<S1254>:114' */
            }
        }
        else
        {
            /* Transition: '<S1254>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_f5) == 133)
            {
                /* Transition: '<S1254>:95' */
                /* Transition: '<S1254>:116' */
                /* Call Nothing */
                VeCRDB_y_SGCP_SPT_Stat_P_CallStatus = 4U;

                /* Transition: '<S1254>:114' */
            }
            else
            {
                /* Transition: '<S1254>:120' */
                /* Transition: '<S1254>:117' */
                /* Call Poke */
                VeCRDB_y_SGCP_SPT_Stat_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1249>/Poke' */
                /* FunctionCaller: '<S1256>/Function Caller' incorporates:
                 *  DataTypeConversion: '<S1256>/Data Type Conversion'
                 */
                /* Event: '<S1254>:38' */
                Rte_Call_PokeINVR_e_MCPA_SPT_State_PokeINVR_e_MCPA_SPT_State
                    ((sint16)CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_j);

                /* End of Outputs for SubSystem: '<S1249>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1254>:111' */
        /* Call Fsft */
        VeCRDB_y_SGCP_SPT_Stat_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1249>/Fsft' */
        /* FunctionCaller: '<S1255>/Function Caller' */
        /* Event: '<S1254>:39' */
        Rte_Call_FsftINVR_e_MCPA_SPT_State_FsftINVR_e_MCPA_SPT_State();

        /* End of Outputs for SubSystem: '<S1249>/Fsft' */
        /* Transition: '<S1254>:113' */
        /* Transition: '<S1254>:115' */
        /* Transition: '<S1254>:114' */
    }

    /* End of Chart: '<S1250>/Chart' */
    /* End of Outputs for SubSystem: '<S1139>/SGCP_SPT_Stat_P' */
    /* End of Outputs for SubSystem: '<S17>/SGCP_SPT_Stat_P' */
    /* Transition: '<S1254>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_y_SGCP_SPT_Stat_P' */

    /* SignalConversion generated from: '<S2>/VeCRDB_n_SGCP_Spd_Lim_P' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_Spd_Lim_P_SigSts'
     */
#if Rte_SysCon_VrntCR4B_SGCPSpdLimP

    /* Outputs for Atomic SubSystem: '<S17>/SGCP_Spd_Lim_P' */
    /* SignalConversion generated from: '<S2>/VeCRDB_n_SGCP_Spd_Lim_P' incorporates:
     *  Inport: '<Root>/VeCRDB_n_SGCP_Spd_Lim_P'
     */
    rtb_TmpSignalConversionAtVeC_iw = Rte_Read_VeCRDB_n_SGCP_Spd_Lim_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_n_p);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1263>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_SGCP_Spd_Lim_P_SigSts_Value(&tmpRead_3v);

    /* Outputs for Atomic SubSystem: '<S1140>/SGCP_Spd_Lim_P' */
    /* Chart: '<S1259>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_Spd_Lim_P_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_3v) & 3U) != 0U)
    {
        /* Transition: '<S1263>:100' */
        /* Transition: '<S1263>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1263>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3v) & 4U) != 0U)
        {
            /* Transition: '<S1263>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S1263>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1263>:110' */
                /* Call Tmot */
                VeCRDB_y_SGCP_Spd_Lim_P_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S1258>/Tmot' */
                /* FunctionCaller: '<S1266>/Function Caller' */
                /* Event: '<S1263>:40' */
                Rte_Call_TmotMSPR_n_MaxP1SpdLmt_TmotMSPR_n_MaxP1SpdLmt();

                /* End of Outputs for SubSystem: '<S1258>/Tmot' */
                /* Transition: '<S1263>:115' */
                /* Transition: '<S1263>:114' */
            }
        }
        else
        {
            /* Transition: '<S1263>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_iw) == 133)
            {
                /* Transition: '<S1263>:95' */
                /* Transition: '<S1263>:116' */
                /* Call Nothing */
                VeCRDB_y_SGCP_Spd_Lim_P_CallStatus = 4U;

                /* Transition: '<S1263>:114' */
            }
            else
            {
                /* Transition: '<S1263>:120' */
                /* Transition: '<S1263>:117' */
                /* Call Poke */
                VeCRDB_y_SGCP_Spd_Lim_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1258>/Poke' */
                /* FunctionCaller: '<S1265>/Function Caller' */
                /* Event: '<S1263>:38' */
                Rte_Call_PokeMSPR_n_MaxP1SpdLmt_PokeMSPR_n_MaxP1SpdLmt
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_n_p);

                /* End of Outputs for SubSystem: '<S1258>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1263>:111' */
        /* Call Fsft */
        VeCRDB_y_SGCP_Spd_Lim_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1258>/Fsft' */
        /* FunctionCaller: '<S1264>/Function Caller' */
        /* Event: '<S1263>:39' */
        Rte_Call_FsftMSPR_n_MaxP1SpdLmt_FsftMSPR_n_MaxP1SpdLmt();

        /* End of Outputs for SubSystem: '<S1258>/Fsft' */
        /* Transition: '<S1263>:113' */
        /* Transition: '<S1263>:115' */
        /* Transition: '<S1263>:114' */
    }

    /* End of Chart: '<S1259>/Chart' */
    /* End of Outputs for SubSystem: '<S1140>/SGCP_Spd_Lim_P' */
    /* End of Outputs for SubSystem: '<S17>/SGCP_Spd_Lim_P' */
    /* Transition: '<S1263>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_n_SGCP_Spd_Lim_P' */

    /* SignalConversion generated from: '<S2>/VeCRDB_y_SGCP_Temp_P' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_Temp_P_SigSts'
     */
#if Rte_SysCon_VrntCR4B_SGCPTempP

    /* Outputs for Atomic SubSystem: '<S17>/SGCP_Temp_P' */
    /* SignalConversion generated from: '<S2>/VeCRDB_y_SGCP_Temp_P' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_Temp_P'
     */
    rtb_TmpSignalConversionAtVeC_pe = Rte_Read_VeCRDB_y_SGCP_Temp_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_n);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1272>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_SGCP_Temp_P_SigSts_Value(&tmpRead_3w);

    /* Outputs for Atomic SubSystem: '<S1141>/SGCP_Temp_P' */
    /* Chart: '<S1268>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_Temp_P_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_3w) & 3U) != 0U)
    {
        /* Transition: '<S1272>:100' */
        /* Transition: '<S1272>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1272>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3w) & 4U) != 0U)
        {
            /* Transition: '<S1272>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S1272>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1272>:110' */
                /* Call Tmot */
                VeCRDB_y_SGCP_Temp_P_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S1267>/Tmot' */
                /* FunctionCaller: '<S1275>/Function Caller' */
                /* Event: '<S1272>:40' */
                Rte_Call_TmotINVR_b_MtrA_Temp_TmotINVR_b_MtrA_Temp();

                /* End of Outputs for SubSystem: '<S1267>/Tmot' */
                /* Transition: '<S1272>:115' */
                /* Transition: '<S1272>:114' */
            }
        }
        else
        {
            /* Transition: '<S1272>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_pe) == 133)
            {
                /* Transition: '<S1272>:95' */
                /* Transition: '<S1272>:116' */
                /* Call Nothing */
                VeCRDB_y_SGCP_Temp_P_CallStatus = 4U;

                /* Transition: '<S1272>:114' */
            }
            else
            {
                /* Transition: '<S1272>:120' */
                if ((((uint32)tmpRead_3w) & 8U) != 0U)
                {
                    /* Transition: '<S1272>:122' */
                    /* Transition: '<S1272>:125' */
                    FA_out_h = true;

                    /* Transition: '<S1272>:126' */
                }
                else
                {
                    /* Transition: '<S1272>:124' */
                    FA_out_h = false;
                }

                /* Transition: '<S1272>:117' */
                /* Call Poke */
                VeCRDB_y_SGCP_Temp_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1267>/Poke' */
                /* FunctionCaller: '<S1274>/Function Caller' */
                /* Event: '<S1272>:38' */
                Rte_Call_PokeINVR_T_MtrA_Temp_PokeINVR_T_MtrA_Temp
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_y_n, FA_out_h);

                /* End of Outputs for SubSystem: '<S1267>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1272>:111' */
        /* Call Fsft */
        VeCRDB_y_SGCP_Temp_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1267>/Fsft' */
        /* FunctionCaller: '<S1273>/Function Caller' */
        /* Event: '<S1272>:39' */
        Rte_Call_FsftINVR_T_MtrA_Temp_FsftINVR_T_MtrA_Temp();

        /* End of Outputs for SubSystem: '<S1267>/Fsft' */
        /* Transition: '<S1272>:113' */
        /* Transition: '<S1272>:115' */
        /* Transition: '<S1272>:114' */
    }

    /* End of Chart: '<S1268>/Chart' */
    /* End of Outputs for SubSystem: '<S1141>/SGCP_Temp_P' */
    /* End of Outputs for SubSystem: '<S17>/SGCP_Temp_P' */
    /* Transition: '<S1272>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_y_SGCP_Temp_P' */

    /* SignalConversion generated from: '<S2>/VeCRDB_M_SGCP_TorqAchved_AEMD_P' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_TorqAchved_AEMD_P_SigSts'
     */
#if Rte_SysCon_VrntCR4B_SGCPTorqAchievedAEMDP

    /* Outputs for Atomic SubSystem: '<S17>/SGCP_TorqAchieved_AEMD_P' */
    /* SignalConversion generated from: '<S2>/VeCRDB_M_SGCP_TorqAchved_AEMD_P' incorporates:
     *  Inport: '<Root>/VeCRDB_M_SGCP_TorqAchved_AEMD_P'
     */
    rtb_TmpSignalConversionAtVeC_ci =
        Rte_Read_VeCRDB_M_SGCP_TorqAchved_AEMD_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__o1);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1281>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_SGCP_TorqAchved_AEMD_P_SigSts_Value(&tmpRead_3x);

    /* Outputs for Atomic SubSystem: '<S1142>/SGCP_TorqAchieved_AEMD_P' */
    /* Chart: '<S1277>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_TorqAchved_AEMD_P_SigSts'
     *  Inport: '<Root>/VeSR1B_b_SGCP_TrqAchvd_AEMD_V_P_FD16'
     */
    guard1 = false;
    if ((((uint32)tmpRead_3x) & 3U) != 0U)
    {
        /* Transition: '<S1281>:100' */
        /* Transition: '<S1281>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1281>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3x) & 4U) != 0U)
        {
            /* Transition: '<S1281>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S1281>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1281>:110' */
                /* Call Tmot */
                VeCRDB_y_SGCP_TorqAchved_AEMD_P_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S1276>/Tmot' */
                /* FunctionCaller: '<S1284>/Function Caller' */
                /* Event: '<S1281>:40' */
                Rte_Call_TmotMTIR_b_MtrA_TorqAchieved_AEMD_TmotMTIR_b_MtrA_TorqAchieved_AEMD
                    ();

                /* End of Outputs for SubSystem: '<S1276>/Tmot' */
                /* Transition: '<S1281>:115' */
                /* Transition: '<S1281>:114' */
            }
        }
        else
        {
            /* Transition: '<S1281>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ci) == 133)
            {
                /* Transition: '<S1281>:95' */
                /* Transition: '<S1281>:116' */
                /* Call Nothing */
                VeCRDB_y_SGCP_TorqAchved_AEMD_P_CallStatus = 4U;

                /* Transition: '<S1281>:114' */
            }
            else
            {
                /* Transition: '<S1281>:120' */
                (void)Rte_Read_VeSR1B_b_SGCP_TrqAchvd_AEMD_V_P_FD16_Value
                    (&FA_out_ma);

                /* Transition: '<S1281>:117' */
                /* Call Poke */
                VeCRDB_y_SGCP_TorqAchved_AEMD_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1276>/Poke' */
                /* FunctionCaller: '<S1283>/Function Caller' incorporates:
                 *  Inport: '<Root>/VeSR1B_b_SGCP_TrqAchvd_AEMD_V_P_FD16'
                 */
                /* Event: '<S1281>:38' */
                Rte_Call_PokeMTIR_M_MtrA_TorqAchieved_AEMD_PokeMTIR_M_MtrA_TorqAchieved_AEMD
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__o1, FA_out_ma);

                /* End of Outputs for SubSystem: '<S1276>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1281>:111' */
        /* Call Fsft */
        VeCRDB_y_SGCP_TorqAchved_AEMD_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1276>/Fsft' */
        /* FunctionCaller: '<S1282>/Function Caller' */
        /* Event: '<S1281>:39' */
        Rte_Call_FsftMTIR_M_MtrA_TorqAchieved_AEMD_FsftMTIR_M_MtrA_TorqAchieved_AEMD
            ();

        /* End of Outputs for SubSystem: '<S1276>/Fsft' */
        /* Transition: '<S1281>:113' */
        /* Transition: '<S1281>:115' */
        /* Transition: '<S1281>:114' */
    }

    /* End of Chart: '<S1277>/Chart' */
    /* End of Outputs for SubSystem: '<S1142>/SGCP_TorqAchieved_AEMD_P' */
    /* End of Outputs for SubSystem: '<S17>/SGCP_TorqAchieved_AEMD_P' */
    /* Transition: '<S1281>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_M_SGCP_TorqAchved_AEMD_P' */

    /* SignalConversion generated from: '<S2>/VeCRDB_M_SGCP_Torque_Achieved_P' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_Torque_Achieved_P_SigSts'
     */
#if Rte_SysCon_VrntCR4B_SGCPTorqueAchievedP

    /* Outputs for Atomic SubSystem: '<S17>/SGCP_Torque_Achieved_P' */
    /* SignalConversion generated from: '<S2>/VeCRDB_M_SGCP_Torque_Achieved_P' incorporates:
     *  Inport: '<Root>/VeCRDB_M_SGCP_Torque_Achieved_P'
     */
    rtb_TmpSignalConversionAtVeC_ek =
        Rte_Read_VeCRDB_M_SGCP_Torque_Achieved_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__mr);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1289>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_SGCP_Torque_Achieved_P_SigSts_Value(&tmpRead_3y);

    /* Outputs for Atomic SubSystem: '<S1143>/SGCP_Torque_Achieved_P' */
    /* Chart: '<S1286>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_Torque_Achieved_P_SigSts'
     *  Inport: '<Root>/VeSR1B_b_SGCP_Torque_Achved_V_P_FD16'
     */
    guard1 = false;
    if ((((uint32)tmpRead_3y) & 3U) != 0U)
    {
        /* Transition: '<S1289>:100' */
        /* Transition: '<S1289>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1289>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3y) & 4U) != 0U)
        {
            /* Transition: '<S1289>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S1289>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1289>:110' */
                /* Call Tmot */
                VeCRDB_y_SGCP_Torque_Achieved_P_CallStatus = 3U;

                /* Event: '<S1289>:40' */
                /* Transition: '<S1289>:115' */
                /* Transition: '<S1289>:114' */
            }
        }
        else
        {
            /* Transition: '<S1289>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ek) == 133)
            {
                /* Transition: '<S1289>:95' */
                /* Transition: '<S1289>:116' */
                /* Call Nothing */
                VeCRDB_y_SGCP_Torque_Achieved_P_CallStatus = 4U;

                /* Transition: '<S1289>:114' */
            }
            else
            {
                /* Transition: '<S1289>:120' */
                (void)Rte_Read_VeSR1B_b_SGCP_Torque_Achved_V_P_FD16_Value
                    (&tmpRead_48);

                /* Transition: '<S1289>:117' */
                /* Call Poke */
                VeCRDB_y_SGCP_Torque_Achieved_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1285>/Poke' */
                /* FunctionCaller: '<S1291>/Function Caller' incorporates:
                 *  Inport: '<Root>/VeSR1B_b_SGCP_Torque_Achved_V_P_FD16'
                 */
                /* Event: '<S1289>:38' */
                Rte_Call_PokeMTIR_M_MtrA_TorqAchieved_PokeMTIR_M_MtrA_TorqAchieved
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__mr, tmpRead_48);

                /* End of Outputs for SubSystem: '<S1285>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1289>:111' */
        /* Call Fsft */
        VeCRDB_y_SGCP_Torque_Achieved_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1285>/Fsft' */
        /* FunctionCaller: '<S1290>/Function Caller' */
        /* Event: '<S1289>:39' */
        Rte_Call_FsftMTIR_M_MtrA_TorqAchieved_FsftMTIR_M_MtrA_TorqAchieved();

        /* End of Outputs for SubSystem: '<S1285>/Fsft' */
        /* Transition: '<S1289>:113' */
        /* Transition: '<S1289>:115' */
        /* Transition: '<S1289>:114' */
    }

    /* End of Chart: '<S1286>/Chart' */
    /* End of Outputs for SubSystem: '<S1143>/SGCP_Torque_Achieved_P' */
    /* End of Outputs for SubSystem: '<S17>/SGCP_Torque_Achieved_P' */
    /* Transition: '<S1289>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_M_SGCP_Torque_Achieved_P' */

    /* SignalConversion generated from: '<S2>/VeCRDB_b_SGCP_Torque_Achved_V_P' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_Torque_Achved_V_P_SigSts'
     */
#if Rte_SysCon_VrntCR4B_SGCPTorqueAchievedVP

    /* Outputs for Atomic SubSystem: '<S17>/SGCP_Torque_Achieved_V_P' */
    /* SignalConversion generated from: '<S2>/VeCRDB_b_SGCP_Torque_Achved_V_P' incorporates:
     *  Inport: '<Root>/VeCRDB_b_SGCP_Torque_Achved_V_P'
     */
    rtb_TmpSignalConversionAtVeC_cc =
        Rte_Read_VeCRDB_b_SGCP_Torque_Achved_V_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_b);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1295>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_SGCP_Torque_Achved_V_P_SigSts_Value(&tmpRead_3z);

    /* Outputs for Atomic SubSystem: '<S1144>/SGCP_Torque_Achieved_V_P' */
    /* Chart: '<S1293>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_Torque_Achved_V_P_SigSts'
     */
    if ((((uint32)tmpRead_3z) & 3U) != 0U)
    {
        /* Transition: '<S1295>:100' */
        /* Transition: '<S1295>:103' */
        /* Transition: '<S1295>:111' */
        /* Call Fsft */
        VeCRDB_y_SGCP_Torque_Achved_V_P_CallStatus = 2U;

        /* Event: '<S1295>:39' */
        /* Transition: '<S1295>:113' */
        /* Transition: '<S1295>:115' */
        /* Transition: '<S1295>:114' */
    }
    else
    {
        /* Transition: '<S1295>:104' */
        /*  MM */
        if ((((uint32)tmpRead_3z) & 4U) != 0U)
        {
            /* Transition: '<S1295>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S1295>:88' */
                /* Transition: '<S1295>:111' */
                /* Call Fsft */
                VeCRDB_y_SGCP_Torque_Achved_V_P_CallStatus = 2U;

                /* Event: '<S1295>:39' */
                /* Transition: '<S1295>:113' */
                /* Transition: '<S1295>:115' */
                /* Transition: '<S1295>:114' */
            }
            else
            {
                /* Transition: '<S1295>:110' */
                /* Call Tmot */
                VeCRDB_y_SGCP_Torque_Achved_V_P_CallStatus = 3U;

                /* Event: '<S1295>:40' */
                /* Transition: '<S1295>:115' */
                /* Transition: '<S1295>:114' */
            }
        }
        else
        {
            /* Transition: '<S1295>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_cc) == 133)
            {
                /* Transition: '<S1295>:95' */
                /* Transition: '<S1295>:116' */
                /* Call Nothing */
                VeCRDB_y_SGCP_Torque_Achved_V_P_CallStatus = 4U;

                /* Transition: '<S1295>:114' */
            }
            else
            {
                /* Transition: '<S1295>:120' */
                /* Transition: '<S1295>:117' */
                /* Call Poke */
                VeCRDB_y_SGCP_Torque_Achved_V_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1292>/Poke' */
                /* Event: '<S1295>:38' */
                CR4B_FUNC_ac_Poke_h
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_b);

                /* End of Outputs for SubSystem: '<S1292>/Poke' */
            }
        }
    }

    /* End of Chart: '<S1293>/Chart' */
    /* End of Outputs for SubSystem: '<S1144>/SGCP_Torque_Achieved_V_P' */
    /* End of Outputs for SubSystem: '<S17>/SGCP_Torque_Achieved_V_P' */
    /* Transition: '<S1295>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_b_SGCP_Torque_Achved_V_P' */

    /* SignalConversion generated from: '<S2>/VeCRDB_T_SGCPCtrlBoarTempP' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCPCtrlBoarTempP_SigSts'
     */
#if Rte_SysCon_VrntCR4B_SGCPControlBoardTemperatureP

    /* Outputs for Atomic SubSystem: '<S18>/SGCP_Control_Board_Temperature_P' */
    /* SignalConversion generated from: '<S2>/VeCRDB_T_SGCPCtrlBoarTempP' incorporates:
     *  Inport: '<Root>/VeCRDB_T_SGCPCtrlBoarTempP'
     */
    rtb_TmpSignalConversionAtVeC_dn = Rte_Read_VeCRDB_T_SGCPCtrlBoarTempP_Value(
        &CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_T_S);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1311>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_SGCPCtrlBoarTempP_SigSts_Value(&tmpRead_g);

    /* Outputs for Atomic SubSystem: '<S1297>/SGCP_Control_Board_Temperature_P' */
    /* Chart: '<S1307>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCPCtrlBoarTempP_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_g) & 3U) != 0U)
    {
        /* Transition: '<S1311>:100' */
        /* Transition: '<S1311>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1311>:104' */
        /*  MM */
        if ((((uint32)tmpRead_g) & 4U) != 0U)
        {
            /* Transition: '<S1311>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S1311>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1311>:110' */
                /* Call Tmot */
                VeCRDB_y_SGCPCtrlBoarTempP_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S1306>/Tmot' */
                /* FunctionCaller: '<S1314>/Function Caller' */
                /* Event: '<S1311>:40' */
                Rte_Call_TmotINVR_b_MtrA_CtrlBoard_Temp_TmotINVR_b_MtrA_CtrlBoard_Temp
                    ();

                /* End of Outputs for SubSystem: '<S1306>/Tmot' */
                /* Transition: '<S1311>:115' */
                /* Transition: '<S1311>:114' */
            }
        }
        else
        {
            /* Transition: '<S1311>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_dn) == 133)
            {
                /* Transition: '<S1311>:95' */
                /* Transition: '<S1311>:116' */
                /* Call Nothing */
                VeCRDB_y_SGCPCtrlBoarTempP_CallStatus = 4U;

                /* Transition: '<S1311>:114' */
            }
            else
            {
                /* Transition: '<S1311>:120' */
                if ((((uint32)tmpRead_g) & 8U) != 0U)
                {
                    /* Transition: '<S1311>:122' */
                    /* Transition: '<S1311>:125' */
                    FA_out_ma = true;

                    /* Transition: '<S1311>:126' */
                }
                else
                {
                    /* Transition: '<S1311>:124' */
                    FA_out_ma = false;
                }

                /* Transition: '<S1311>:117' */
                /* Call Poke */
                VeCRDB_y_SGCPCtrlBoarTempP_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1306>/Poke' */
                /* FunctionCaller: '<S1313>/Function Caller' */
                /* Event: '<S1311>:38' */
                Rte_Call_PokeINVR_T_MtrA_CtrlBoard_Temp_PokeINVR_T_MtrA_CtrlBoard_Temp
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_T_S, FA_out_ma);

                /* End of Outputs for SubSystem: '<S1306>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1311>:111' */
        /* Call Fsft */
        VeCRDB_y_SGCPCtrlBoarTempP_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1306>/Fsft' */
        /* FunctionCaller: '<S1312>/Function Caller' */
        /* Event: '<S1311>:39' */
        Rte_Call_FsftINVR_T_MtrA_CtrlBoard_Temp_FsftINVR_T_MtrA_CtrlBoard_Temp();

        /* End of Outputs for SubSystem: '<S1306>/Fsft' */
        /* Transition: '<S1311>:113' */
        /* Transition: '<S1311>:115' */
        /* Transition: '<S1311>:114' */
    }

    /* End of Chart: '<S1307>/Chart' */
    /* End of Outputs for SubSystem: '<S1297>/SGCP_Control_Board_Temperature_P' */
    /* End of Outputs for SubSystem: '<S18>/SGCP_Control_Board_Temperature_P' */
    /* Transition: '<S1311>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_T_SGCPCtrlBoarTempP' */

    /* SignalConversion generated from: '<S2>/VeCRDB_I_SGCP_DC_Current_P' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_DC_Current_P_SigSts'
     */
#if Rte_SysCon_VrntCR4B_SGCPDCCurrentP

    /* Outputs for Atomic SubSystem: '<S18>/SGCP_DC_Current_P' */
    /* SignalConversion generated from: '<S2>/VeCRDB_I_SGCP_DC_Current_P' incorporates:
     *  Inport: '<Root>/VeCRDB_I_SGCP_DC_Current_P'
     */
    rtb_TmpSignalConversionAtVe_eyi = Rte_Read_VeCRDB_I_SGCP_DC_Current_P_Value(
        &CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_I_S);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1320>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_SGCP_DC_Current_P_SigSts_Value(&tmpRead_h);

    /* Outputs for Atomic SubSystem: '<S1298>/SGCP_DC_Current_P' */
    /* Chart: '<S1316>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_b_SGCP_DC_Crrnt_V_P'
     *  Inport: '<Root>/VeCRDB_y_SGCP_DC_Current_P_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_h) & 3U) != 0U)
    {
        /* Transition: '<S1320>:100' */
        /* Transition: '<S1320>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1320>:104' */
        /*  MM */
        if ((((uint32)tmpRead_h) & 4U) != 0U)
        {
            /* Transition: '<S1320>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S1320>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1320>:110' */
                /* Call Tmot */
                VeCRDB_y_SGCP_DC_Current_P_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S1315>/Tmot' */
                /* FunctionCaller: '<S1323>/Function Caller' */
                /* Event: '<S1320>:40' */
                Rte_Call_TmotINVR_b_MtrA_DC_Crnt_TmotINVR_b_MtrA_DC_Crnt();

                /* End of Outputs for SubSystem: '<S1315>/Tmot' */
                /* Transition: '<S1320>:115' */
                /* Transition: '<S1320>:114' */
            }
        }
        else
        {
            /* Transition: '<S1320>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_eyi) == 133)
            {
                /* Transition: '<S1320>:95' */
                /* Transition: '<S1320>:116' */
                /* Call Nothing */
                VeCRDB_y_SGCP_DC_Current_P_CallStatus = 4U;

                /* Transition: '<S1320>:114' */
            }
            else
            {
                /* Transition: '<S1320>:120' */
                (void)Rte_Read_VeCRDB_b_SGCP_DC_Crrnt_V_P_Value(&FA_out_g);

                /* Transition: '<S1320>:117' */
                /* Call Poke */
                VeCRDB_y_SGCP_DC_Current_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1315>/Poke' */
                /* FunctionCaller: '<S1322>/Function Caller' incorporates:
                 *  Inport: '<Root>/VeCRDB_b_SGCP_DC_Crrnt_V_P'
                 */
                /* Event: '<S1320>:38' */
                Rte_Call_PokeINVR_I_MtrA_DC_Crnt_PokeINVR_I_MtrA_DC_Crnt
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_I_S, FA_out_g);

                /* End of Outputs for SubSystem: '<S1315>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1320>:111' */
        /* Call Fsft */
        VeCRDB_y_SGCP_DC_Current_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1315>/Fsft' */
        /* FunctionCaller: '<S1321>/Function Caller' */
        /* Event: '<S1320>:39' */
        Rte_Call_FsftINVR_I_MtrA_DC_Crnt_FsftINVR_I_MtrA_DC_Crnt();

        /* End of Outputs for SubSystem: '<S1315>/Fsft' */
        /* Transition: '<S1320>:113' */
        /* Transition: '<S1320>:115' */
        /* Transition: '<S1320>:114' */
    }

    /* End of Chart: '<S1316>/Chart' */
    /* End of Outputs for SubSystem: '<S1298>/SGCP_DC_Current_P' */
    /* End of Outputs for SubSystem: '<S18>/SGCP_DC_Current_P' */
    /* Transition: '<S1320>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_I_SGCP_DC_Current_P' */

    /* SignalConversion generated from: '<S2>/VeCRDB_U_SGCP_DC_Voltage_P' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_DC_Voltage_P_SigSts'
     */
#if Rte_SysCon_VrntCR4B_SGCPDCVoltageP

    /* Outputs for Atomic SubSystem: '<S18>/SGCP_DC_Voltage_P' */
    /* SignalConversion generated from: '<S2>/VeCRDB_U_SGCP_DC_Voltage_P' incorporates:
     *  Inport: '<Root>/VeCRDB_U_SGCP_DC_Voltage_P'
     */
    rtb_TmpSignalConversionAtVeC_ha = Rte_Read_VeCRDB_U_SGCP_DC_Voltage_P_Value(
        &CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_U_S);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1329>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_SGCP_DC_Voltage_P_SigSts_Value(&tmpRead_i);

    /* Outputs for Atomic SubSystem: '<S1299>/SGCP_DC_Voltage_P' */
    /* Chart: '<S1325>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_b_SGCP_DC_Volt_V_P'
     *  Inport: '<Root>/VeCRDB_y_SGCP_DC_Voltage_P_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_i) & 3U) != 0U)
    {
        /* Transition: '<S1329>:100' */
        /* Transition: '<S1329>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1329>:104' */
        /*  MM */
        if ((((uint32)tmpRead_i) & 4U) != 0U)
        {
            /* Transition: '<S1329>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S1329>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1329>:110' */
                /* Call Tmot */
                VeCRDB_y_SGCP_DC_Voltage_P_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S1324>/Tmot' */
                /* FunctionCaller: '<S1332>/Function Caller' */
                /* Event: '<S1329>:40' */
                Rte_Call_TmotINVR_b_MtrA_DC_Volt_TmotINVR_b_MtrA_DC_Volt();

                /* End of Outputs for SubSystem: '<S1324>/Tmot' */
                /* Transition: '<S1329>:115' */
                /* Transition: '<S1329>:114' */
            }
        }
        else
        {
            /* Transition: '<S1329>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_ha) == 133)
            {
                /* Transition: '<S1329>:95' */
                /* Transition: '<S1329>:116' */
                /* Call Nothing */
                VeCRDB_y_SGCP_DC_Voltage_P_CallStatus = 4U;

                /* Transition: '<S1329>:114' */
            }
            else
            {
                /* Transition: '<S1329>:120' */
                (void)Rte_Read_VeCRDB_b_SGCP_DC_Volt_V_P_Value(&tmpRead_q);

                /* Transition: '<S1329>:117' */
                /* Call Poke */
                VeCRDB_y_SGCP_DC_Voltage_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1324>/Poke' */
                /* FunctionCaller: '<S1331>/Function Caller' incorporates:
                 *  Inport: '<Root>/VeCRDB_b_SGCP_DC_Volt_V_P'
                 */
                /* Event: '<S1329>:38' */
                Rte_Call_PokeINVR_U_MtrA_DC_Volt_PokeINVR_U_MtrA_DC_Volt
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_U_S, tmpRead_q);

                /* End of Outputs for SubSystem: '<S1324>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1329>:111' */
        /* Call Fsft */
        VeCRDB_y_SGCP_DC_Voltage_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1324>/Fsft' */
        /* FunctionCaller: '<S1330>/Function Caller' */
        /* Event: '<S1329>:39' */
        Rte_Call_FsftINVR_U_MtrA_DC_Volt_FsftINVR_U_MtrA_DC_Volt();

        /* End of Outputs for SubSystem: '<S1324>/Fsft' */
        /* Transition: '<S1329>:113' */
        /* Transition: '<S1329>:115' */
        /* Transition: '<S1329>:114' */
    }

    /* End of Chart: '<S1325>/Chart' */
    /* End of Outputs for SubSystem: '<S1299>/SGCP_DC_Voltage_P' */
    /* End of Outputs for SubSystem: '<S18>/SGCP_DC_Voltage_P' */
    /* Transition: '<S1329>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_U_SGCP_DC_Voltage_P' */

    /* SignalConversion generated from: '<S2>/VeCRDB_e_SGCP_DerateResn_P' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_DerateResn_P_SigSts'
     */
#if Rte_SysCon_VrntCR4B_SGCPDerateReasonP

    /* Outputs for Atomic SubSystem: '<S18>/SGCP_DerateReason_P' */
    /* SignalConversion generated from: '<S2>/VeCRDB_e_SGCP_DerateResn_P' incorporates:
     *  Inport: '<Root>/VeCRDB_e_SGCP_DerateResn_P'
     */
    rtb_TmpSignalConversionAtVeC_lv = Rte_Read_VeCRDB_e_SGCP_DerateResn_P_Value(
        &CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_e_S);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1337>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_SGCP_DerateResn_P_SigSts_Value(&tmpRead_j);

    /* Outputs for Atomic SubSystem: '<S1300>/SGCP_DerateReason_P' */
    /* Chart: '<S1334>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_DerateResn_P_SigSts'
     */
    if ((((uint32)tmpRead_j) & 3U) != 0U)
    {
        /* Transition: '<S1337>:100' */
        /* Transition: '<S1337>:103' */
        /* Transition: '<S1337>:111' */
        /* Call Fsft */
        VeCRDB_y_SGCP_DerateResn_P_CallStatus = 2U;

        /* Event: '<S1337>:39' */
        /* Transition: '<S1337>:113' */
        /* Transition: '<S1337>:115' */
        /* Transition: '<S1337>:114' */
    }
    else
    {
        /* Transition: '<S1337>:104' */
        /*  MM */
        if ((((uint32)tmpRead_j) & 4U) != 0U)
        {
            /* Transition: '<S1337>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S1337>:88' */
                /* Transition: '<S1337>:111' */
                /* Call Fsft */
                VeCRDB_y_SGCP_DerateResn_P_CallStatus = 2U;

                /* Event: '<S1337>:39' */
                /* Transition: '<S1337>:113' */
                /* Transition: '<S1337>:115' */
                /* Transition: '<S1337>:114' */
            }
            else
            {
                /* Transition: '<S1337>:110' */
                /* Call Tmot */
                VeCRDB_y_SGCP_DerateResn_P_CallStatus = 3U;

                /* Event: '<S1337>:40' */
                /* Transition: '<S1337>:115' */
                /* Transition: '<S1337>:114' */
            }
        }
        else
        {
            /* Transition: '<S1337>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_lv) == 133)
            {
                /* Transition: '<S1337>:95' */
                /* Transition: '<S1337>:116' */
                /* Call Nothing */
                VeCRDB_y_SGCP_DerateResn_P_CallStatus = 4U;

                /* Transition: '<S1337>:114' */
            }
            else
            {
                /* Transition: '<S1337>:120' */
                /* Transition: '<S1337>:117' */
                /* Call Poke */
                VeCRDB_y_SGCP_DerateResn_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1333>/Poke' */
                /* FunctionCaller: '<S1338>/Function Caller' */
                /* Event: '<S1337>:38' */
                Rte_Call_PokeINVR_e_MtrA_DrtRsn_PokeINVR_e_MtrA_DrtRsn
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_e_S);

                /* End of Outputs for SubSystem: '<S1333>/Poke' */
            }
        }
    }

    /* End of Chart: '<S1334>/Chart' */
    /* End of Outputs for SubSystem: '<S1300>/SGCP_DerateReason_P' */
    /* End of Outputs for SubSystem: '<S18>/SGCP_DerateReason_P' */
    /* Transition: '<S1337>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_e_SGCP_DerateResn_P' */

    /* SignalConversion generated from: '<S2>/VeCRDB_T_SGCP_InvertTemp_P' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_InvertTemp_P_SigSts'
     */
#if Rte_SysCon_VrntCR4B_SGCPInverterTempP

    /* Outputs for Atomic SubSystem: '<S18>/SGCP_Inverter_Temp_P' */
    /* SignalConversion generated from: '<S2>/VeCRDB_T_SGCP_InvertTemp_P' incorporates:
     *  Inport: '<Root>/VeCRDB_T_SGCP_InvertTemp_P'
     */
    rtb_TmpSignalConversionAtVe_iny = Rte_Read_VeCRDB_T_SGCP_InvertTemp_P_Value(
        &CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_T_g);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1344>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_SGCP_InvertTemp_P_SigSts_Value(&tmpRead_k);

    /* Outputs for Atomic SubSystem: '<S1301>/SGCP_Inverter_Temp_P' */
    /* Chart: '<S1340>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCP_InvertTemp_P_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_k) & 3U) != 0U)
    {
        /* Transition: '<S1344>:100' */
        /* Transition: '<S1344>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1344>:104' */
        /*  MM */
        if ((((uint32)tmpRead_k) & 4U) != 0U)
        {
            /* Transition: '<S1344>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S1344>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1344>:110' */
                /* Call Tmot */
                VeCRDB_y_SGCP_InvertTemp_P_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S1339>/Tmot' */
                /* FunctionCaller: '<S1347>/Function Caller' */
                /* Event: '<S1344>:40' */
                Rte_Call_TmotINVR_b_MtrA_InvrtrTemp_TmotINVR_b_MtrA_InvrtrTemp();

                /* End of Outputs for SubSystem: '<S1339>/Tmot' */
                /* Transition: '<S1344>:115' */
                /* Transition: '<S1344>:114' */
            }
        }
        else
        {
            /* Transition: '<S1344>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVe_iny) == 133)
            {
                /* Transition: '<S1344>:95' */
                /* Transition: '<S1344>:116' */
                /* Call Nothing */
                VeCRDB_y_SGCP_InvertTemp_P_CallStatus = 4U;

                /* Transition: '<S1344>:114' */
            }
            else
            {
                /* Transition: '<S1344>:120' */
                if ((((uint32)tmpRead_k) & 8U) != 0U)
                {
                    /* Transition: '<S1344>:122' */
                    /* Transition: '<S1344>:125' */
                    FA_out_g = true;

                    /* Transition: '<S1344>:126' */
                }
                else
                {
                    /* Transition: '<S1344>:124' */
                    FA_out_g = false;
                }

                /* Transition: '<S1344>:117' */
                /* Call Poke */
                VeCRDB_y_SGCP_InvertTemp_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1339>/Poke' */
                /* FunctionCaller: '<S1346>/Function Caller' */
                /* Event: '<S1344>:38' */
                Rte_Call_PokeINVR_T_MtrA_InvrtrTemp_PokeINVR_T_MtrA_InvrtrTemp
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_T_g, FA_out_g);

                /* End of Outputs for SubSystem: '<S1339>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1344>:111' */
        /* Call Fsft */
        VeCRDB_y_SGCP_InvertTemp_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1339>/Fsft' */
        /* FunctionCaller: '<S1345>/Function Caller' */
        /* Event: '<S1344>:39' */
        Rte_Call_FsftINVR_T_MtrA_InvrtrTemp_FsftINVR_T_MtrA_InvrtrTemp();

        /* End of Outputs for SubSystem: '<S1339>/Fsft' */
        /* Transition: '<S1344>:113' */
        /* Transition: '<S1344>:115' */
        /* Transition: '<S1344>:114' */
    }

    /* End of Chart: '<S1340>/Chart' */
    /* End of Outputs for SubSystem: '<S1301>/SGCP_Inverter_Temp_P' */
    /* End of Outputs for SubSystem: '<S18>/SGCP_Inverter_Temp_P' */
    /* Transition: '<S1344>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_T_SGCP_InvertTemp_P' */

    /* SignalConversion generated from: '<S2>/VeCRDB_y_SGCPPIMACSdBusTmpP' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCPPIMACSdBusTmpP_SigSts'
     */
#if Rte_SysCon_VrntCR4B_SGCPPIMACSideBusbarTempP

    /* Outputs for Atomic SubSystem: '<S18>/SGCP_PIM_AC_Side_Busbar_Temp_P' */
    /* SignalConversion generated from: '<S2>/VeCRDB_y_SGCPPIMACSdBusTmpP' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCPPIMACSdBusTmpP'
     */
    rtb_TmpSignalConversionAtVeC_dt = Rte_Read_VeCRDB_y_SGCPPIMACSdBusTmpP_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__nm);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1353>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_SGCPPIMACSdBusTmpP_SigSts_Value(&tmpRead_l);

    /* Outputs for Atomic SubSystem: '<S1302>/SGCP_PIM_AC_Side_Busbar_Temp_P' */
    /* Chart: '<S1349>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCPPIMACSdBusTmpP_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_l) & 3U) != 0U)
    {
        /* Transition: '<S1353>:100' */
        /* Transition: '<S1353>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1353>:104' */
        /*  MM */
        if ((((uint32)tmpRead_l) & 4U) != 0U)
        {
            /* Transition: '<S1353>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S1353>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1353>:110' */
                /* Call Tmot */
                VeCRDB_y_SGCPPIMACSdBusTmpP_CallStatus = 3U;

                /* Event: '<S1353>:40' */
                /* Transition: '<S1353>:115' */
                /* Transition: '<S1353>:114' */
            }
        }
        else
        {
            /* Transition: '<S1353>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_dt) == 133)
            {
                /* Transition: '<S1353>:95' */
                /* Transition: '<S1353>:116' */
                /* Call Nothing */
                VeCRDB_y_SGCPPIMACSdBusTmpP_CallStatus = 4U;

                /* Transition: '<S1353>:114' */
            }
            else
            {
                /* Transition: '<S1353>:120' */
                if ((((uint32)tmpRead_l) & 8U) != 0U)
                {
                    /* Transition: '<S1353>:122' */
                    /* Transition: '<S1353>:125' */
                    FA_out_g = true;

                    /* Transition: '<S1353>:126' */
                }
                else
                {
                    /* Transition: '<S1353>:124' */
                    FA_out_g = false;
                }

                /* Transition: '<S1353>:117' */
                /* Call Poke */
                VeCRDB_y_SGCPPIMACSdBusTmpP_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1348>/Poke' */
                /* FunctionCaller: '<S1355>/Function Caller' */
                /* Event: '<S1353>:38' */
                Rte_Call_PokeINVR_T_GPIMACBusBarTemp_PokeINVR_T_GPIMACBusBarTemp
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__nm, FA_out_g);

                /* End of Outputs for SubSystem: '<S1348>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1353>:111' */
        /* Call Fsft */
        VeCRDB_y_SGCPPIMACSdBusTmpP_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1348>/Fsft' */
        /* FunctionCaller: '<S1354>/Function Caller' */
        /* Event: '<S1353>:39' */
        Rte_Call_FsftINVR_T_GPIMACBusBarTemp_FsftINVR_T_GPIMACBusBarTemp();

        /* End of Outputs for SubSystem: '<S1348>/Fsft' */
        /* Transition: '<S1353>:113' */
        /* Transition: '<S1353>:115' */
        /* Transition: '<S1353>:114' */
    }

    /* End of Chart: '<S1349>/Chart' */
    /* End of Outputs for SubSystem: '<S1302>/SGCP_PIM_AC_Side_Busbar_Temp_P' */
    /* End of Outputs for SubSystem: '<S18>/SGCP_PIM_AC_Side_Busbar_Temp_P' */
    /* Transition: '<S1353>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_y_SGCPPIMACSdBusTmpP' */

    /* SignalConversion generated from: '<S2>/VeCRDB_T_SGCPPIMDCSdBusTmpP' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCPPIMDCSdBusTmpP_SigSts'
     */
#if Rte_SysCon_VrntCR4B_SGCPPIMDCSideBusbarTempP

    /* Outputs for Atomic SubSystem: '<S18>/SGCP_PIM_DC_Side_Busbar_Temp_P' */
    /* SignalConversion generated from: '<S2>/VeCRDB_T_SGCPPIMDCSdBusTmpP' incorporates:
     *  Inport: '<Root>/VeCRDB_T_SGCPPIMDCSdBusTmpP'
     */
    rtb_TmpSignalConversionAtVeC_a2 = Rte_Read_VeCRDB_T_SGCPPIMDCSdBusTmpP_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__ei);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1361>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_SGCPPIMDCSdBusTmpP_SigSts_Value(&tmpRead_m);

    /* Outputs for Atomic SubSystem: '<S1303>/SGCP_PIM_DC_Side_Busbar_Temp_P' */
    /* Chart: '<S1357>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCPPIMDCSdBusTmpP_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_m) & 3U) != 0U)
    {
        /* Transition: '<S1361>:100' */
        /* Transition: '<S1361>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1361>:104' */
        /*  MM */
        if ((((uint32)tmpRead_m) & 4U) != 0U)
        {
            /* Transition: '<S1361>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S1361>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1361>:110' */
                /* Call Tmot */
                VeCRDB_y_SGCPPIMDCSdBusTmpP_CallStatus = 3U;

                /* Event: '<S1361>:40' */
                /* Transition: '<S1361>:115' */
                /* Transition: '<S1361>:114' */
            }
        }
        else
        {
            /* Transition: '<S1361>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_a2) == 133)
            {
                /* Transition: '<S1361>:95' */
                /* Transition: '<S1361>:116' */
                /* Call Nothing */
                VeCRDB_y_SGCPPIMDCSdBusTmpP_CallStatus = 4U;

                /* Transition: '<S1361>:114' */
            }
            else
            {
                /* Transition: '<S1361>:120' */
                if ((((uint32)tmpRead_m) & 8U) != 0U)
                {
                    /* Transition: '<S1361>:122' */
                    /* Transition: '<S1361>:125' */
                    FA_out_g = true;

                    /* Transition: '<S1361>:126' */
                }
                else
                {
                    /* Transition: '<S1361>:124' */
                    FA_out_g = false;
                }

                /* Transition: '<S1361>:117' */
                /* Call Poke */
                VeCRDB_y_SGCPPIMDCSdBusTmpP_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1356>/Poke' */
                /* FunctionCaller: '<S1363>/Function Caller' */
                /* Event: '<S1361>:38' */
                Rte_Call_PokeINVR_T_GPIMDCBusBarTemp_PokeINVR_T_GPIMDCBusBarTemp
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB__ei, FA_out_g);

                /* End of Outputs for SubSystem: '<S1356>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1361>:111' */
        /* Call Fsft */
        VeCRDB_y_SGCPPIMDCSdBusTmpP_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1356>/Fsft' */
        /* FunctionCaller: '<S1362>/Function Caller' */
        /* Event: '<S1361>:39' */
        Rte_Call_FsftINVR_T_GPIMDCBusBarTemp_FsftINVR_T_GPIMDCBusBarTemp();

        /* End of Outputs for SubSystem: '<S1356>/Fsft' */
        /* Transition: '<S1361>:113' */
        /* Transition: '<S1361>:115' */
        /* Transition: '<S1361>:114' */
    }

    /* End of Chart: '<S1357>/Chart' */
    /* End of Outputs for SubSystem: '<S1303>/SGCP_PIM_DC_Side_Busbar_Temp_P' */
    /* End of Outputs for SubSystem: '<S18>/SGCP_PIM_DC_Side_Busbar_Temp_P' */
    /* Transition: '<S1361>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_T_SGCPPIMDCSdBusTmpP' */

    /* SignalConversion generated from: '<S2>/VeCRDB_T_SGCPRotorTemp_P' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCPRotorTemp_P_SigSts'
     */
#if Rte_SysCon_VrntCR4B_SGCPRotorTemperatureP

    /* Outputs for Atomic SubSystem: '<S18>/SGCP_Rotor_Temperature_P' */
    /* SignalConversion generated from: '<S2>/VeCRDB_T_SGCPRotorTemp_P' incorporates:
     *  Inport: '<Root>/VeCRDB_T_SGCPRotorTemp_P'
     */
    rtb_TmpSignalConversionAtVeC_mf = Rte_Read_VeCRDB_T_SGCPRotorTemp_P_Value
        (&CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_T_i);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1369>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_SGCPRotorTemp_P_SigSts_Value(&tmpRead_n);

    /* Outputs for Atomic SubSystem: '<S1304>/SGCP_Rotor_Temperature_P' */
    /* Chart: '<S1365>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCPRotorTemp_P_SigSts'
     */
    guard1 = false;
    if ((((uint32)tmpRead_n) & 3U) != 0U)
    {
        /* Transition: '<S1369>:100' */
        /* Transition: '<S1369>:103' */
        guard1 = true;
    }
    else
    {
        /* Transition: '<S1369>:104' */
        /*  MM */
        if ((((uint32)tmpRead_n) & 4U) != 0U)
        {
            /* Transition: '<S1369>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S1369>:88' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S1369>:110' */
                /* Call Tmot */
                VeCRDB_y_SGCPRotorTemp_P_CallStatus = 3U;

                /* Outputs for Function Call SubSystem: '<S1364>/Tmot' */
                /* FunctionCaller: '<S1372>/Function Caller' */
                /* Event: '<S1369>:40' */
                Rte_Call_TmotINVR_b_MtrA_RotrTemp_TmotINVR_b_MtrA_RotrTemp();

                /* End of Outputs for SubSystem: '<S1364>/Tmot' */
                /* Transition: '<S1369>:115' */
                /* Transition: '<S1369>:114' */
            }
        }
        else
        {
            /* Transition: '<S1369>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_mf) == 133)
            {
                /* Transition: '<S1369>:95' */
                /* Transition: '<S1369>:116' */
                /* Call Nothing */
                VeCRDB_y_SGCPRotorTemp_P_CallStatus = 4U;

                /* Transition: '<S1369>:114' */
            }
            else
            {
                /* Transition: '<S1369>:120' */
                if ((((uint32)tmpRead_n) & 8U) != 0U)
                {
                    /* Transition: '<S1369>:122' */
                    /* Transition: '<S1369>:125' */
                    FA_out_g = true;

                    /* Transition: '<S1369>:126' */
                }
                else
                {
                    /* Transition: '<S1369>:124' */
                    FA_out_g = false;
                }

                /* Transition: '<S1369>:117' */
                /* Call Poke */
                VeCRDB_y_SGCPRotorTemp_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1364>/Poke' */
                /* FunctionCaller: '<S1371>/Function Caller' */
                /* Event: '<S1369>:38' */
                Rte_Call_PokeINVR_T_MtrA_RotrTemp_PokeINVR_T_MtrA_RotrTemp
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_T_i, FA_out_g);

                /* End of Outputs for SubSystem: '<S1364>/Poke' */
            }
        }
    }

    if (guard1)
    {
        /* Transition: '<S1369>:111' */
        /* Call Fsft */
        VeCRDB_y_SGCPRotorTemp_P_CallStatus = 2U;

        /* Outputs for Function Call SubSystem: '<S1364>/Fsft' */
        /* FunctionCaller: '<S1370>/Function Caller' */
        /* Event: '<S1369>:39' */
        Rte_Call_FsftINVR_T_MtrA_RotrTemp_FsftINVR_T_MtrA_RotrTemp();

        /* End of Outputs for SubSystem: '<S1364>/Fsft' */
        /* Transition: '<S1369>:113' */
        /* Transition: '<S1369>:115' */
        /* Transition: '<S1369>:114' */
    }

    /* End of Chart: '<S1365>/Chart' */
    /* End of Outputs for SubSystem: '<S1304>/SGCP_Rotor_Temperature_P' */
    /* End of Outputs for SubSystem: '<S18>/SGCP_Rotor_Temperature_P' */
    /* Transition: '<S1369>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_T_SGCPRotorTemp_P' */

    /* SignalConversion generated from: '<S2>/VeCRDB_b_SGCPServLampReq_P' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCPServLampReq_P_SigSts'
     */
#if Rte_SysCon_VrntCR4B_SGCPServiceLampRequestP

    /* Outputs for Atomic SubSystem: '<S18>/SGCP_Service_Lamp_Request_P' */
    /* SignalConversion generated from: '<S2>/VeCRDB_b_SGCPServLampReq_P' incorporates:
     *  Inport: '<Root>/VeCRDB_b_SGCPServLampReq_P'
     */
    rtb_TmpSignalConversionAtVeC_f3 = Rte_Read_VeCRDB_b_SGCPServLampReq_P_Value(
        &CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_m);

    /* Gateway: ArbtrLogic_Protected/Chart */
    /* During: ArbtrLogic_Protected/Chart */
    /* Entry Internal: ArbtrLogic_Protected/Chart */
    /* Transition: '<S1377>:99' */
    /*  CRC | MC
       [(SigSts&0x1) | (SigSts&0x2)] */
    (void)Rte_Read_VeCRDB_y_SGCPServLampReq_P_SigSts_Value(&tmpRead_o);

    /* Outputs for Atomic SubSystem: '<S1305>/SGCP_Service_Lamp_Request_P' */
    /* Chart: '<S1374>/Chart' incorporates:
     *  Inport: '<Root>/VeCRDB_y_SGCPServLampReq_P_SigSts'
     */
    if ((((uint32)tmpRead_o) & 3U) != 0U)
    {
        /* Transition: '<S1377>:100' */
        /* Transition: '<S1377>:103' */
        /* Transition: '<S1377>:111' */
        /* Call Fsft */
        VeCRDB_y_SGCPServLampReq_P_CallStatus = 2U;

        /* Event: '<S1377>:39' */
        /* Transition: '<S1377>:113' */
        /* Transition: '<S1377>:115' */
        /* Transition: '<S1377>:114' */
    }
    else
    {
        /* Transition: '<S1377>:104' */
        /*  MM */
        if ((((uint32)tmpRead_o) & 4U) != 0U)
        {
            /* Transition: '<S1377>:96' */
            if (rtb_RelationalOperator)
            {
                /* Transition: '<S1377>:88' */
                /* Transition: '<S1377>:111' */
                /* Call Fsft */
                VeCRDB_y_SGCPServLampReq_P_CallStatus = 2U;

                /* Event: '<S1377>:39' */
                /* Transition: '<S1377>:113' */
                /* Transition: '<S1377>:115' */
                /* Transition: '<S1377>:114' */
            }
            else
            {
                /* Transition: '<S1377>:110' */
                /* Call Tmot */
                VeCRDB_y_SGCPServLampReq_P_CallStatus = 3U;

                /* Event: '<S1377>:40' */
                /* Transition: '<S1377>:115' */
                /* Transition: '<S1377>:114' */
            }
        }
        else
        {
            /* Transition: '<S1377>:75' */
            if (((sint32)rtb_TmpSignalConversionAtVeC_f3) == 133)
            {
                /* Transition: '<S1377>:95' */
                /* Transition: '<S1377>:116' */
                /* Call Nothing */
                VeCRDB_y_SGCPServLampReq_P_CallStatus = 4U;

                /* Transition: '<S1377>:114' */
            }
            else
            {
                /* Transition: '<S1377>:120' */
                /* Transition: '<S1377>:117' */
                /* Call Poke */
                VeCRDB_y_SGCPServLampReq_P_CallStatus = 1U;

                /* Outputs for Function Call SubSystem: '<S1373>/Poke' */
                /* FunctionCaller: '<S1378>/Function Caller' */
                /* Event: '<S1377>:38' */
                Rte_Call_PokeHMIR_b_MCPA_Service_Lamp_Request_PokeHMIR_b_MCPA_Service_Lamp_Request
                    (CR4B_FUNC_ac_B.TmpSignalConversionAtVeCRDB_b_m);

                /* End of Outputs for SubSystem: '<S1373>/Poke' */
            }
        }
    }

    /* End of Chart: '<S1374>/Chart' */
    /* End of Outputs for SubSystem: '<S1305>/SGCP_Service_Lamp_Request_P' */
    /* End of Outputs for SubSystem: '<S18>/SGCP_Service_Lamp_Request_P' */
    /* Transition: '<S1377>:107' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeCRDB_b_SGCPServLampReq_P' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
}

/* Model initialize function */
FUNC(void, CR4B_FUNC_CODE) CR4B_FUNC_ac_Init(void)
{
    /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
