/*
 * File: CT2B_FUNC_ac.h
 *
 * Code generated for Simulink model 'CT2B_FUNC_ac'.
 *
 * Model version                  : 1.49
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Apr  6 09:33:19 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_CT2B_FUNC_ac_h_
#define RTW_HEADER_CT2B_FUNC_ac_h_
#include <math.h>
#include "Rte_Type.h"
#ifndef CT2B_FUNC_ac_COMMON_INCLUDES_
#define CT2B_FUNC_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CT2B_FUNC.h"
#endif                                 /* CT2B_FUNC_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"

/* MW_VALIDATE_PREPROCESSOR_VARIANT_CHOICES */
#undef MW_HAVE_ACTIVE_VARIANT_CHOICE
#undef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#if Rte_SysCon_VrntCT2B_MCPATemp_INVRTMtrATemp
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

#if Rte_SysCon_VrntCT2B_MCPATemp_INVRTMtrCTemp
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

/* At most one variant choice can be active for block 'CT2B_FUNC_ac/SigMngt/MCPA_DATA2/Vrnt_MCPATemp', 'CT2B_FUNC_ac/SigMngt/MCPA_DATA2/Vrnt_MCPATemp_Vld' */
#ifdef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#error "At most one variant choice can be active for block 'CT2B_FUNC_ac/SigMngt/MCPA_DATA2/Vrnt_MCPATemp' and others"
#endif

#undef MW_HAVE_ACTIVE_VARIANT_CHOICE
#undef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#if Rte_SysCon_VrntCT2B_MCPADCCurrentP_INVRIMtrADCCrnt
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

#if Rte_SysCon_VrntCT2B_MCPADCCurrentP_INVRIMtrCDCCrnt
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

/* At most one variant choice can be active for block 'CT2B_FUNC_ac/SigMngt/MCPA_STATUS/Vrnt_MCPADCCurrentP' */
#ifdef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#error "At most one variant choice can be active for block 'CT2B_FUNC_ac/SigMngt/MCPA_STATUS/Vrnt_MCPADCCurrentP'"
#endif

/* MW_END_VALIDATE_PREPROCESSOR_VARIANT_CHOICES */

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'CT2B_FUNC_ac'
 * '<S1>'   : 'CT2B_FUNC_ac/Initialize Function'
 * '<S2>'   : 'CT2B_FUNC_ac/SigMngt'
 * '<S3>'   : 'CT2B_FUNC_ac/SigMngt/EVCU_CHADEMO_STATUS1'
 * '<S4>'   : 'CT2B_FUNC_ac/SigMngt/HYBRID_DISPLAY2'
 * '<S5>'   : 'CT2B_FUNC_ac/SigMngt/HYBRID_SYSTEM_EPT1'
 * '<S6>'   : 'CT2B_FUNC_ac/SigMngt/IMPACT_INFO'
 * '<S7>'   : 'CT2B_FUNC_ac/SigMngt/MCPA_DATA2'
 * '<S8>'   : 'CT2B_FUNC_ac/SigMngt/MCPA_STATUS'
 * '<S9>'   : 'CT2B_FUNC_ac/SigMngt/MCPB_DATA2'
 * '<S10>'  : 'CT2B_FUNC_ac/SigMngt/MCPB_STATUS'
 * '<S11>'  : 'CT2B_FUNC_ac/SigMngt/PT_SYSTEM_FD_1'
 * '<S12>'  : 'CT2B_FUNC_ac/SigMngt/TRANSM_FD_2'
 * '<S13>'  : 'CT2B_FUNC_ac/SigMngt/VDCM_OBCM'
 * '<S14>'  : 'CT2B_FUNC_ac/SigMngt/EVCU_CHADEMO_STATUS1/BattVoltDeviationErr_CHDRbBattVoltDvatonErr'
 * '<S15>'  : 'CT2B_FUNC_ac/SigMngt/EVCU_CHADEMO_STATUS1/BattVoltDeviationErr_dflt_CHDRbBattVoltDvatonErr_Vld'
 * '<S16>'  : 'CT2B_FUNC_ac/SigMngt/EVCU_CHADEMO_STATUS1/CHAdeMOProtocol_CHDReCHAdeMOProtocol'
 * '<S17>'  : 'CT2B_FUNC_ac/SigMngt/EVCU_CHADEMO_STATUS1/CHAdeMOProtocol_dflt_CHDReCHAdeMOProtocol_Vld'
 * '<S18>'  : 'CT2B_FUNC_ac/SigMngt/EVCU_CHADEMO_STATUS1/ChargedCurrentMin_CHDRIChargedCrntMin'
 * '<S19>'  : 'CT2B_FUNC_ac/SigMngt/EVCU_CHADEMO_STATUS1/ChargedCurrentMin_dflt_CHDRIChargedCrntMin_Vld'
 * '<S20>'  : 'CT2B_FUNC_ac/SigMngt/EVCU_CHADEMO_STATUS1/ChargedReferenceConstant_CHDRPctChrgdRefrncCnstnt'
 * '<S21>'  : 'CT2B_FUNC_ac/SigMngt/EVCU_CHADEMO_STATUS1/ChargedReferenceConstant_dflt_CHDRPctChrgdRefrncCnstnt_Vld'
 * '<S22>'  : 'CT2B_FUNC_ac/SigMngt/EVCU_CHADEMO_STATUS1/DisplaySOC_HMIRPctHVBatSOCHCP'
 * '<S23>'  : 'CT2B_FUNC_ac/SigMngt/EVCU_CHADEMO_STATUS1/DisplaySOC_dflt_HMIRPctHVBatSOCHCP_Vld'
 * '<S24>'  : 'CT2B_FUNC_ac/SigMngt/EVCU_CHADEMO_STATUS1/EVCUCP3Cmd_CHDRbEVCUCP3Cmd'
 * '<S25>'  : 'CT2B_FUNC_ac/SigMngt/EVCU_CHADEMO_STATUS1/EVCUCP3Cmd_dflt_CHDRbEVCUCP3Cmd_Vld'
 * '<S26>'  : 'CT2B_FUNC_ac/SigMngt/EVCU_CHADEMO_STATUS1/EVContactorSts_CHDRbEVContactorSts'
 * '<S27>'  : 'CT2B_FUNC_ac/SigMngt/EVCU_CHADEMO_STATUS1/EVContactorSts_dflt_CHDRbEVContactorSts_Vld'
 * '<S28>'  : 'CT2B_FUNC_ac/SigMngt/EVCU_CHADEMO_STATUS1/StopReqBeforeCharge_CHDRbStopReqBeforeChrg'
 * '<S29>'  : 'CT2B_FUNC_ac/SigMngt/EVCU_CHADEMO_STATUS1/StopReqBeforeCharge_dflt_CHDRbStopReqBeforeChrg_Vld'
 * '<S30>'  : 'CT2B_FUNC_ac/SigMngt/EVCU_CHADEMO_STATUS1/TotalBatteryCapacity_BPCRqFullAmpHrCap'
 * '<S31>'  : 'CT2B_FUNC_ac/SigMngt/EVCU_CHADEMO_STATUS1/TotalBatteryCapacity_dflt_BPCRqFullAmpHrCap_Vld'
 * '<S32>'  : 'CT2B_FUNC_ac/SigMngt/EVCU_CHADEMO_STATUS1/VehicleDriveSts_CHDRbVehicleDriveSts'
 * '<S33>'  : 'CT2B_FUNC_ac/SigMngt/EVCU_CHADEMO_STATUS1/VehicleDriveSts_dflt_CHDRbVehicleDriveSts_Vld'
 * '<S34>'  : 'CT2B_FUNC_ac/SigMngt/HYBRID_DISPLAY2/DischargingSysStatus'
 * '<S35>'  : 'CT2B_FUNC_ac/SigMngt/HYBRID_DISPLAY2/MaxAllwdACOutputCurrentL1_VDVRIMaxAlwdACOutCurr'
 * '<S36>'  : 'CT2B_FUNC_ac/SigMngt/HYBRID_DISPLAY2/MaxAllwdACOutputCurrentL1_dflt_VDVRIMaxAlwdACOutCurr_Vld'
 * '<S37>'  : 'CT2B_FUNC_ac/SigMngt/HYBRID_DISPLAY2/MaxAllwdACOutputVoltageL1_VDVRUMaxAlwdACOutVolt'
 * '<S38>'  : 'CT2B_FUNC_ac/SigMngt/HYBRID_DISPLAY2/MaxAllwdACOutputVoltageL1_dflt_VDVRUMaxAlwdACOutVolt_Vld'
 * '<S39>'  : 'CT2B_FUNC_ac/SigMngt/HYBRID_SYSTEM_EPT1/HybridDriveModeSts'
 * '<S40>'  : 'CT2B_FUNC_ac/SigMngt/HYBRID_SYSTEM_EPT1/PerWakeUp_Diag'
 * '<S41>'  : 'CT2B_FUNC_ac/SigMngt/HYBRID_SYSTEM_EPT1/PropulsionSystemActive_10B'
 * '<S42>'  : 'CT2B_FUNC_ac/SigMngt/HYBRID_SYSTEM_EPT1/WU_Timer_Value'
 * '<S43>'  : 'CT2B_FUNC_ac/SigMngt/IMPACT_INFO/IMPACTCommand'
 * '<S44>'  : 'CT2B_FUNC_ac/SigMngt/IMPACT_INFO/IMPACTConfirm'
 * '<S45>'  : 'CT2B_FUNC_ac/SigMngt/MCPA_DATA2/MCPATemp_INVRTMtrATemp'
 * '<S46>'  : 'CT2B_FUNC_ac/SigMngt/MCPA_DATA2/MCPATemp_INVRTMtrATemp_Vld'
 * '<S47>'  : 'CT2B_FUNC_ac/SigMngt/MCPA_DATA2/MCPATemp_INVRTMtrCTemp'
 * '<S48>'  : 'CT2B_FUNC_ac/SigMngt/MCPA_DATA2/MCPATemp_INVRTMtrCTemp_Vld'
 * '<S49>'  : 'CT2B_FUNC_ac/SigMngt/MCPA_STATUS/MCPADCCurrentP_INVRIMtrADCCrnt'
 * '<S50>'  : 'CT2B_FUNC_ac/SigMngt/MCPA_STATUS/MCPADCCurrentP_INVRIMtrCDCCrnt'
 * '<S51>'  : 'CT2B_FUNC_ac/SigMngt/MCPA_STATUS/MCPADCCurrentP_dflt_INVRIMtrCDCCrnt_Vld'
 * '<S52>'  : 'CT2B_FUNC_ac/SigMngt/MCPB_DATA2/MCPB_Temp'
 * '<S53>'  : 'CT2B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_DC_Current_P'
 * '<S54>'  : 'CT2B_FUNC_ac/SigMngt/PT_SYSTEM_FD_1/DriveReady_PT'
 * '<S55>'  : 'CT2B_FUNC_ac/SigMngt/PT_SYSTEM_FD_1/GearEngagedForDisplay_PT'
 * '<S56>'  : 'CT2B_FUNC_ac/SigMngt/PT_SYSTEM_FD_1/GearEngaged_PT'
 * '<S57>'  : 'CT2B_FUNC_ac/SigMngt/PT_SYSTEM_FD_1/PowertrainPrplsnActv_PT'
 * '<S58>'  : 'CT2B_FUNC_ac/SigMngt/TRANSM_FD_2/GearEngagedForDisplay'
 * '<S59>'  : 'CT2B_FUNC_ac/SigMngt/VDCM_OBCM/HVCMSServiceScope_OBCRdServiceScope'
 * '<S60>'  : 'CT2B_FUNC_ac/SigMngt/VDCM_OBCM/HVCMSServiceScope_dflt_OBCRdServiceScope_Vld'
 * '<S61>'  : 'CT2B_FUNC_ac/SigMngt/VDCM_OBCM/HVCMS_ChargingComplete'
 * '<S62>'  : 'CT2B_FUNC_ac/SigMngt/VDCM_OBCM/HVCMS_EVEnergyCapacity'
 * '<S63>'  : 'CT2B_FUNC_ac/SigMngt/VDCM_OBCM/HVCMS_EVEnergyRequest'
 * '<S64>'  : 'CT2B_FUNC_ac/SigMngt/VDCM_OBCM/HVCMS_EVErrorCode'
 * '<S65>'  : 'CT2B_FUNC_ac/SigMngt/VDCM_OBCM/HVCMS_EVMax_I_Limit'
 * '<S66>'  : 'CT2B_FUNC_ac/SigMngt/VDCM_OBCM/HVCMS_EVMax_P_Limit'
 * '<S67>'  : 'CT2B_FUNC_ac/SigMngt/VDCM_OBCM/HVCMS_EVMax_V_Limit'
 * '<S68>'  : 'CT2B_FUNC_ac/SigMngt/VDCM_OBCM/HVCMS_EVRESS_SOC'
 * '<S69>'  : 'CT2B_FUNC_ac/SigMngt/VDCM_OBCM/HVCMS_EVReady'
 * '<S70>'  : 'CT2B_FUNC_ac/SigMngt/VDCM_OBCM/HVCMS_EVTargetCurrent'
 * '<S71>'  : 'CT2B_FUNC_ac/SigMngt/VDCM_OBCM/HVCMS_EVTargetVoltage'
 * '<S72>'  : 'CT2B_FUNC_ac/SigMngt/VDCM_OBCM/HVCMS_ReadyToChargeState'
 * '<S73>'  : 'CT2B_FUNC_ac/SigMngt/VDCM_OBCM/HVCMS_RemaningTimeToBulkSOC'
 * '<S74>'  : 'CT2B_FUNC_ac/SigMngt/VDCM_OBCM/HVCMS_RemaningTimeToFullSOC'
 * '<S75>'  : 'CT2B_FUNC_ac/SigMngt/VDCM_OBCM/HVCMS_SelectedEnergyTransferType'
 * '<S76>'  : 'CT2B_FUNC_ac/SigMngt/VDCM_OBCM/HVCMS_SelectedPaymentOptn'
 * '<S77>'  : 'CT2B_FUNC_ac/SigMngt/VDCM_OBCM/HVCMS_SelectedServiceId'
 * '<S78>'  : 'CT2B_FUNC_ac/SigMngt/VDCM_OBCM/HVCMS_ServiceCategory'
 * '<S79>'  : 'CT2B_FUNC_ac/SigMngt/VDCM_OBCM/V2XHVCMSSlctdEnergyTransfType_VTHRbV2HSelEnergyTransType'
 * '<S80>'  : 'CT2B_FUNC_ac/SigMngt/VDCM_OBCM/V2XHVCMSSlctdEnergyTransfType_dflt_VTHRbV2HSelEnergyTransType_Vld'
 * '<S81>'  : 'CT2B_FUNC_ac/SigMngt/VDCM_OBCM/VDCMBattBulkSOC_IDCRPctBattBulkSOC'
 * '<S82>'  : 'CT2B_FUNC_ac/SigMngt/VDCM_OBCM/VDCMBattBulkSOC_dflt_IDCRPctBattBulkSOC_Vld'
 */
#endif                                 /* RTW_HEADER_CT2B_FUNC_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
