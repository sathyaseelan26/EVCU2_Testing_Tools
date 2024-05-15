/*
 * File: SRDB_FUNC_ac.h
 *
 * Code generated for Simulink model 'SRDB_FUNC_ac'.
 *
 * Model version                  : 1.201
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Apr  6 09:41:55 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_SRDB_FUNC_ac_h_
#define RTW_HEADER_SRDB_FUNC_ac_h_
#include "Rte_Type.h"
#ifndef SRDB_FUNC_ac_COMMON_INCLUDES_
#define SRDB_FUNC_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_SRDB_FUNC.h"
#endif                                 /* SRDB_FUNC_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"

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
 * '<Root>' : 'SRDB_FUNC_ac'
 * '<S1>'   : 'SRDB_FUNC_ac/Initialize Function'
 * '<S2>'   : 'SRDB_FUNC_ac/SigMngt'
 * '<S3>'   : 'SRDB_FUNC_ac/SigMngt/SRDB_FUNC_FastTEF_StartCheckpoint'
 * '<S4>'   : 'SRDB_FUNC_ac/SigMngt/SRDB_FUNC_FastTEF_StopCheckpoint'
 * '<S5>'   : 'SRDB_FUNC_ac/SigMngt/SigMngt1'
 * '<S6>'   : 'SRDB_FUNC_ac/SigMngt/SigMngt1/APM_CtrlSts_Fbk'
 * '<S7>'   : 'SRDB_FUNC_ac/SigMngt/SigMngt1/APM_FailureReason'
 * '<S8>'   : 'SRDB_FUNC_ac/SigMngt/SigMngt1/APM_FailureType'
 * '<S9>'   : 'SRDB_FUNC_ac/SigMngt/SigMngt1/APM_HV_V_Fbk'
 * '<S10>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/APM_LV_V_Fbk'
 * '<S11>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/BPCM_CntctrsMidTrmOpeningWarn'
 * '<S12>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/BPCM_CntctrsShtTrmOpeningWarn'
 * '<S13>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/BPCM_HV_Current'
 * '<S14>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/BPCM_HV_InternalVoltage'
 * '<S15>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/BPCM_HV_SOC'
 * '<S16>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/BPCM_HV_Temperature_Max'
 * '<S17>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/BPCM_HV_Temperature_Min'
 * '<S18>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/BPCM_HV_Trac_Bus_Sts'
 * '<S19>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/KeSRDB_b_RedundancyEnbl'
 * '<S20>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPA_HV_CnctrOpn_Req_P'
 * '<S21>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPA_MaxTorq_P'
 * '<S22>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPA_MinTorq_P'
 * '<S23>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPA_RPM_P'
 * '<S24>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPA_RPM_V_P'
 * '<S25>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPA_Temp_P'
 * '<S26>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPA_TorqAchieved_AEMD_P'
 * '<S27>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPA_TorqAchieved_AEMD_V_P'
 * '<S28>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPA_Torque_Achieved_P'
 * '<S29>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPA_Torque_Achieved_V_P'
 * '<S30>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_HV_CnctrOpn_Req_P'
 * '<S31>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_MaxTorq_P'
 * '<S32>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_MinTorq_P'
 * '<S33>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_MtrIndex_P'
 * '<S34>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_RPM_P'
 * '<S35>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_RPM_V_P'
 * '<S36>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_Temp_P'
 * '<S37>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_TorqAchieved_AEMD_P'
 * '<S38>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_TorqAchieved_AEMD_V_P'
 * '<S39>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_Torque_Achieved_P'
 * '<S40>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_Torque_Achieved_V_P'
 * '<S41>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/ProximitySts'
 * '<S42>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/SGCP_HV_CnctrOpn_Req_P'
 * '<S43>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/APM_CtrlSts_Fbk/ArbtrLogic_Redundancy_Protected'
 * '<S44>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/APM_CtrlSts_Fbk/Compare To Zero'
 * '<S45>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/APM_CtrlSts_Fbk/Subsystem'
 * '<S46>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/APM_CtrlSts_Fbk/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S47>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/APM_FailureReason/ArbtrLogic_Redundancy_Protected'
 * '<S48>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/APM_FailureReason/Compare To Zero'
 * '<S49>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/APM_FailureReason/Subsystem'
 * '<S50>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/APM_FailureReason/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S51>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/APM_FailureType/ArbtrLogic_Redundancy_Protected'
 * '<S52>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/APM_FailureType/Compare To Zero'
 * '<S53>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/APM_FailureType/Subsystem'
 * '<S54>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/APM_FailureType/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S55>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/APM_HV_V_Fbk/ArbtrLogic_Redundancy_Protected'
 * '<S56>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/APM_HV_V_Fbk/Compare To Zero'
 * '<S57>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/APM_HV_V_Fbk/Subsystem'
 * '<S58>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/APM_HV_V_Fbk/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S59>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/APM_LV_V_Fbk/ArbtrLogic_Redundancy_Protected'
 * '<S60>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/APM_LV_V_Fbk/Compare To Zero'
 * '<S61>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/APM_LV_V_Fbk/Subsystem'
 * '<S62>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/APM_LV_V_Fbk/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S63>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/BPCM_CntctrsMidTrmOpeningWarn/ArbtrLogic_Redundancy_Protected'
 * '<S64>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/BPCM_CntctrsMidTrmOpeningWarn/Compare To Zero'
 * '<S65>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/BPCM_CntctrsMidTrmOpeningWarn/Subsystem'
 * '<S66>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/BPCM_CntctrsMidTrmOpeningWarn/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S67>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/BPCM_CntctrsShtTrmOpeningWarn/ArbtrLogic_Redundancy_Protected'
 * '<S68>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/BPCM_CntctrsShtTrmOpeningWarn/Compare To Zero'
 * '<S69>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/BPCM_CntctrsShtTrmOpeningWarn/Subsystem'
 * '<S70>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/BPCM_CntctrsShtTrmOpeningWarn/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S71>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/BPCM_HV_Current/ArbtrLogic_Redundancy_Protected'
 * '<S72>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/BPCM_HV_Current/Compare To Zero'
 * '<S73>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/BPCM_HV_Current/Subsystem'
 * '<S74>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/BPCM_HV_Current/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S75>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/BPCM_HV_InternalVoltage/ArbtrLogic_Redundancy_Protected'
 * '<S76>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/BPCM_HV_InternalVoltage/Compare To Zero'
 * '<S77>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/BPCM_HV_InternalVoltage/Subsystem'
 * '<S78>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/BPCM_HV_InternalVoltage/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S79>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/BPCM_HV_SOC/ArbtrLogic_Redundancy_Protected'
 * '<S80>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/BPCM_HV_SOC/Compare To Zero'
 * '<S81>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/BPCM_HV_SOC/Subsystem'
 * '<S82>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/BPCM_HV_SOC/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S83>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/BPCM_HV_Temperature_Max/ArbtrLogic_Redundancy_Protected'
 * '<S84>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/BPCM_HV_Temperature_Max/Compare To Zero'
 * '<S85>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/BPCM_HV_Temperature_Max/Subsystem'
 * '<S86>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/BPCM_HV_Temperature_Max/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S87>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/BPCM_HV_Temperature_Min/ArbtrLogic_Redundancy_Protected'
 * '<S88>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/BPCM_HV_Temperature_Min/Compare To Zero'
 * '<S89>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/BPCM_HV_Temperature_Min/Subsystem'
 * '<S90>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/BPCM_HV_Temperature_Min/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S91>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/BPCM_HV_Trac_Bus_Sts/ArbtrLogic_Redundancy_Protected'
 * '<S92>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/BPCM_HV_Trac_Bus_Sts/Compare To Zero'
 * '<S93>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/BPCM_HV_Trac_Bus_Sts/Subsystem'
 * '<S94>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/BPCM_HV_Trac_Bus_Sts/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S95>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPA_HV_CnctrOpn_Req_P/ArbtrLogic_Redundancy_Protected'
 * '<S96>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPA_HV_CnctrOpn_Req_P/Compare To Zero'
 * '<S97>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPA_HV_CnctrOpn_Req_P/Subsystem'
 * '<S98>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPA_HV_CnctrOpn_Req_P/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S99>'  : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPA_MaxTorq_P/ArbtrLogic_Redundancy_Protected'
 * '<S100>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPA_MaxTorq_P/Compare To Zero'
 * '<S101>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPA_MaxTorq_P/Subsystem'
 * '<S102>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPA_MaxTorq_P/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S103>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPA_MinTorq_P/ArbtrLogic_Redundancy_Protected'
 * '<S104>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPA_MinTorq_P/Compare To Zero'
 * '<S105>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPA_MinTorq_P/Subsystem'
 * '<S106>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPA_MinTorq_P/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S107>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPA_RPM_P/ArbtrLogic_Redundancy_Protected'
 * '<S108>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPA_RPM_P/Compare To Zero'
 * '<S109>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPA_RPM_P/Subsystem'
 * '<S110>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPA_RPM_P/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S111>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPA_RPM_V_P/ArbtrLogic_Redundancy_Protected'
 * '<S112>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPA_RPM_V_P/Compare To Zero'
 * '<S113>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPA_RPM_V_P/Subsystem'
 * '<S114>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPA_RPM_V_P/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S115>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPA_Temp_P/ArbtrLogic_Redundancy_Protected'
 * '<S116>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPA_Temp_P/Compare To Zero'
 * '<S117>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPA_Temp_P/Subsystem'
 * '<S118>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPA_Temp_P/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S119>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPA_TorqAchieved_AEMD_P/ArbtrLogic_Redundancy_Protected'
 * '<S120>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPA_TorqAchieved_AEMD_P/Compare To Zero'
 * '<S121>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPA_TorqAchieved_AEMD_P/Subsystem'
 * '<S122>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPA_TorqAchieved_AEMD_P/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S123>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPA_TorqAchieved_AEMD_V_P/ArbtrLogic_Redundancy_Protected'
 * '<S124>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPA_TorqAchieved_AEMD_V_P/Compare To Zero'
 * '<S125>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPA_TorqAchieved_AEMD_V_P/Subsystem'
 * '<S126>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPA_TorqAchieved_AEMD_V_P/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S127>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPA_Torque_Achieved_P/ArbtrLogic_Redundancy_Protected'
 * '<S128>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPA_Torque_Achieved_P/Compare To Zero'
 * '<S129>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPA_Torque_Achieved_P/Subsystem'
 * '<S130>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPA_Torque_Achieved_P/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S131>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPA_Torque_Achieved_V_P/ArbtrLogic_Redundancy_Protected'
 * '<S132>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPA_Torque_Achieved_V_P/Compare To Zero'
 * '<S133>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPA_Torque_Achieved_V_P/Subsystem'
 * '<S134>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPA_Torque_Achieved_V_P/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S135>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_HV_CnctrOpn_Req_P/ArbtrLogic_Redundancy_Protected'
 * '<S136>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_HV_CnctrOpn_Req_P/Compare To Zero'
 * '<S137>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_HV_CnctrOpn_Req_P/Subsystem'
 * '<S138>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_HV_CnctrOpn_Req_P/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S139>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_MaxTorq_P/ArbtrLogic_Redundancy_Protected'
 * '<S140>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_MaxTorq_P/Compare To Zero'
 * '<S141>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_MaxTorq_P/Subsystem'
 * '<S142>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_MaxTorq_P/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S143>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_MinTorq_P/ArbtrLogic_Redundancy_Protected'
 * '<S144>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_MinTorq_P/Compare To Zero'
 * '<S145>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_MinTorq_P/Subsystem'
 * '<S146>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_MinTorq_P/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S147>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_MtrIndex_P/ArbtrLogic_Redundancy_Protected'
 * '<S148>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_MtrIndex_P/Compare To Zero'
 * '<S149>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_MtrIndex_P/Subsystem'
 * '<S150>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_MtrIndex_P/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S151>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_RPM_P/ArbtrLogic_Redundancy_Protected'
 * '<S152>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_RPM_P/Compare To Zero'
 * '<S153>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_RPM_P/Subsystem'
 * '<S154>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_RPM_P/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S155>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_RPM_V_P/ArbtrLogic_Redundancy_Protected'
 * '<S156>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_RPM_V_P/Compare To Zero'
 * '<S157>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_RPM_V_P/Subsystem'
 * '<S158>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_RPM_V_P/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S159>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_Temp_P/ArbtrLogic_Redundancy_Protected'
 * '<S160>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_Temp_P/Compare To Zero'
 * '<S161>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_Temp_P/Subsystem'
 * '<S162>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_Temp_P/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S163>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_TorqAchieved_AEMD_P/ArbtrLogic_Redundancy_Protected'
 * '<S164>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_TorqAchieved_AEMD_P/Compare To Zero'
 * '<S165>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_TorqAchieved_AEMD_P/Subsystem'
 * '<S166>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_TorqAchieved_AEMD_P/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S167>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_TorqAchieved_AEMD_V_P/ArbtrLogic_Redundancy_Protected'
 * '<S168>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_TorqAchieved_AEMD_V_P/Compare To Zero'
 * '<S169>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_TorqAchieved_AEMD_V_P/Subsystem'
 * '<S170>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_TorqAchieved_AEMD_V_P/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S171>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_Torque_Achieved_P/ArbtrLogic_Redundancy_Protected'
 * '<S172>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_Torque_Achieved_P/Compare To Zero'
 * '<S173>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_Torque_Achieved_P/Subsystem'
 * '<S174>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_Torque_Achieved_P/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S175>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_Torque_Achieved_V_P/ArbtrLogic_Redundancy_Protected'
 * '<S176>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_Torque_Achieved_V_P/Compare To Zero'
 * '<S177>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_Torque_Achieved_V_P/Subsystem'
 * '<S178>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/MCPB_Torque_Achieved_V_P/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S179>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/ProximitySts/ArbtrLogic_Redundancy_Protected'
 * '<S180>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/ProximitySts/Compare To Zero'
 * '<S181>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/ProximitySts/Subsystem'
 * '<S182>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/ProximitySts/ArbtrLogic_Redundancy_Protected/Chart'
 * '<S183>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/SGCP_HV_CnctrOpn_Req_P/ArbtrLogic_Redundancy_Protected'
 * '<S184>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/SGCP_HV_CnctrOpn_Req_P/Compare To Zero'
 * '<S185>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/SGCP_HV_CnctrOpn_Req_P/Subsystem'
 * '<S186>' : 'SRDB_FUNC_ac/SigMngt/SigMngt1/SGCP_HV_CnctrOpn_Req_P/ArbtrLogic_Redundancy_Protected/Chart'
 */
#endif                                 /* RTW_HEADER_SRDB_FUNC_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
