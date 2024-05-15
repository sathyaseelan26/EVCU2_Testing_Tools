/*
 * File: VTHR_ac.h
 *
 * Code generated for Simulink model 'VTHR_ac'.
 *
 * Model version                  : 9.1252
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 20:05:47 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_VTHR_ac_h_
#define RTW_HEADER_VTHR_ac_h_
#include "Rte_Type.h"
#ifndef VTHR_ac_COMMON_INCLUDES_
#define VTHR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_VTHR.h"
#endif                                 /* VTHR_ac_COMMON_INCLUDES_ */

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
 * '<Root>' : 'VTHR_ac'
 * '<S1>'   : 'VTHR_ac/VTHR_MedTED'
 * '<S2>'   : 'VTHR_ac/VTHR_PwrOn'
 * '<S3>'   : 'VTHR_ac/VTHR_MedTED/VTHC'
 * '<S4>'   : 'VTHR_ac/VTHR_MedTED/VTHI'
 * '<S5>'   : 'VTHR_ac/VTHR_MedTED/VTHC/KeVTHR_b_V2HEnable_Ovrd'
 * '<S6>'   : 'VTHR_ac/VTHR_MedTED/VTHC/Subsystem'
 * '<S7>'   : 'VTHR_ac/VTHR_MedTED/VTHC/VTHC'
 * '<S8>'   : 'VTHR_ac/VTHR_MedTED/VTHC/Subsystem/EnumSetBlock1'
 * '<S9>'   : 'VTHR_ac/VTHR_MedTED/VTHC/Subsystem/EnumSetBlock4'
 * '<S10>'  : 'VTHR_ac/VTHR_MedTED/VTHC/Subsystem/EnumSetBlock5'
 * '<S11>'  : 'VTHR_ac/VTHR_MedTED/VTHC/Subsystem/Enumerated_Constant1'
 * '<S12>'  : 'VTHR_ac/VTHR_MedTED/VTHC/Subsystem/Enumerated_Constant2'
 * '<S13>'  : 'VTHR_ac/VTHR_MedTED/VTHC/Subsystem/Enumerated_Constant3'
 * '<S14>'  : 'VTHR_ac/VTHR_MedTED/VTHC/Subsystem/Set Block4'
 * '<S15>'  : 'VTHR_ac/VTHR_MedTED/VTHC/Subsystem/Set Block5'
 * '<S16>'  : 'VTHR_ac/VTHR_MedTED/VTHC/Subsystem/Set Block8'
 * '<S17>'  : 'VTHR_ac/VTHR_MedTED/VTHC/Subsystem/SetBlock1'
 * '<S18>'  : 'VTHR_ac/VTHR_MedTED/VTHC/Subsystem/SetBlock16'
 * '<S19>'  : 'VTHR_ac/VTHR_MedTED/VTHC/Subsystem/SetBlock17'
 * '<S20>'  : 'VTHR_ac/VTHR_MedTED/VTHC/Subsystem/SetBlock18'
 * '<S21>'  : 'VTHR_ac/VTHR_MedTED/VTHC/Subsystem/SetBlock19'
 * '<S22>'  : 'VTHR_ac/VTHR_MedTED/VTHC/Subsystem/SetBlock21'
 * '<S23>'  : 'VTHR_ac/VTHR_MedTED/VTHC/Subsystem/SetBlock22'
 * '<S24>'  : 'VTHR_ac/VTHR_MedTED/VTHC/Subsystem/SetBlock23'
 * '<S25>'  : 'VTHR_ac/VTHR_MedTED/VTHC/Subsystem/SetBlock24'
 * '<S26>'  : 'VTHR_ac/VTHR_MedTED/VTHC/Subsystem/SetBlock25'
 * '<S27>'  : 'VTHR_ac/VTHR_MedTED/VTHC/VTHC/KeVTHR_P_V2H_DschgCap_Val'
 * '<S28>'  : 'VTHR_ac/VTHR_MedTED/VTHC/VTHC/KeVTHR_P_V2H_EVMaxPwrLim_Val'
 * '<S29>'  : 'VTHR_ac/VTHR_MedTED/VTHC/VTHC/KeVTHR_P_V2H_InstPwrDraw_Val'
 * '<S30>'  : 'VTHR_ac/VTHR_MedTED/VTHC/VTHC/KeVTHR_Pct_V2H_BattBulkSOC_Val'
 * '<S31>'  : 'VTHR_ac/VTHR_MedTED/VTHC/VTHC/KeVTHR_Pct_V2H_ResrvBattSts_Val'
 * '<S32>'  : 'VTHR_ac/VTHR_MedTED/VTHC/VTHC/KeVTHR_b_Rdy4shutdown_Val'
 * '<S33>'  : 'VTHR_ac/VTHR_MedTED/VTHC/VTHC/KeVTHR_b_V2H_Detected_Val'
 * '<S34>'  : 'VTHR_ac/VTHR_MedTED/VTHC/VTHC/KeVTHR_b_V2H_MdSts_Val'
 * '<S35>'  : 'VTHR_ac/VTHR_MedTED/VTHC/VTHC/KeVTHR_b_V2H_SelEnergyTransType_Val'
 * '<S36>'  : 'VTHR_ac/VTHR_MedTED/VTHC/VTHC/KeVTHR_t_V2H_TotPwrDays_Val'
 * '<S37>'  : 'VTHR_ac/VTHR_MedTED/VTHC/VTHC/KeVTHR_t_V2H_TotPwrMin_Val'
 * '<S38>'  : 'VTHR_ac/VTHR_MedTED/VTHC/VTHC/SCALAR_BLK'
 * '<S39>'  : 'VTHR_ac/VTHR_MedTED/VTHC/VTHC/SCALAR_BLK1'
 * '<S40>'  : 'VTHR_ac/VTHR_MedTED/VTHC/VTHC/SCALAR_BLK2'
 * '<S41>'  : 'VTHR_ac/VTHR_MedTED/VTHC/VTHC/SCALAR_BLK3'
 * '<S42>'  : 'VTHR_ac/VTHR_MedTED/VTHC/VTHC/V2H_ACTIVE_Enable'
 * '<S43>'  : 'VTHR_ac/VTHR_MedTED/VTHI/KeVTHR_P_BattLTMaxLim_Val'
 * '<S44>'  : 'VTHR_ac/VTHR_MedTED/VTHI/KeVTHR_P_HVAccPwr_Val'
 * '<S45>'  : 'VTHR_ac/VTHR_MedTED/VTHI/KeVTHR_b_BPCMRdy_Ovrd'
 * '<S46>'  : 'VTHR_ac/VTHR_MedTED/VTHI/KeVTHR_b_BPCMRdy_Val'
 * '<S47>'  : 'VTHR_ac/VTHR_MedTED/VTHI/KeVTHR_b_BattLTMaxLim_Ovrd'
 * '<S48>'  : 'VTHR_ac/VTHR_MedTED/VTHI/KeVTHR_b_DrvDrUnlcking_Ovrd'
 * '<S49>'  : 'VTHR_ac/VTHR_MedTED/VTHI/KeVTHR_b_DrvDrUnlcking_Val'
 * '<S50>'  : 'VTHR_ac/VTHR_MedTED/VTHI/KeVTHR_b_EVSE_PilotStat_Ovrd'
 * '<S51>'  : 'VTHR_ac/VTHR_MedTED/VTHI/KeVTHR_b_EnblDschrg_Ovrd'
 * '<S52>'  : 'VTHR_ac/VTHR_MedTED/VTHI/KeVTHR_b_EnblDschrg_Val'
 * '<S53>'  : 'VTHR_ac/VTHR_MedTED/VTHI/KeVTHR_b_HVAccPwr_Ovrd'
 * '<S54>'  : 'VTHR_ac/VTHR_MedTED/VTHI/KeVTHR_b_HoodAjarOvrd'
 * '<S55>'  : 'VTHR_ac/VTHR_MedTED/VTHI/KeVTHR_b_HoodAjarVal'
 * '<S56>'  : 'VTHR_ac/VTHR_MedTED/VTHI/KeVTHR_b_J1772S2Sts_Ovrd'
 * '<S57>'  : 'VTHR_ac/VTHR_MedTED/VTHI/KeVTHR_b_J1772S2Sts_Val'
 * '<S58>'  : 'VTHR_ac/VTHR_MedTED/VTHI/KeVTHR_b_OBCMd_Ovrd'
 * '<S59>'  : 'VTHR_ac/VTHR_MedTED/VTHI/KeVTHR_b_PMMPwrMd_Ovrd'
 * '<S60>'  : 'VTHR_ac/VTHR_MedTED/VTHI/KeVTHR_b_Prox_Ovrd'
 * '<S61>'  : 'VTHR_ac/VTHR_MedTED/VTHI/KeVTHR_b_TurtleMdSts_Ovrd'
 * '<S62>'  : 'VTHR_ac/VTHR_MedTED/VTHI/KeVTHR_e_EVSE_PilotStat_Val'
 * '<S63>'  : 'VTHR_ac/VTHR_MedTED/VTHI/KeVTHR_e_OBCMd_Val'
 * '<S64>'  : 'VTHR_ac/VTHR_MedTED/VTHI/KeVTHR_e_PMMPwrMd_Val'
 * '<S65>'  : 'VTHR_ac/VTHR_MedTED/VTHI/KeVTHR_e_Prox_Val'
 * '<S66>'  : 'VTHR_ac/VTHR_MedTED/VTHI/KeVTHR_e_TurtleMdSts_Val'
 * '<S67>'  : 'VTHR_ac/VTHR_PwrOn/VariantSubsystem'
 * '<S68>'  : 'VTHR_ac/VTHR_PwrOn/VariantSubsystem/VTHO_FUNC'
 * '<S69>'  : 'VTHR_ac/VTHR_PwrOn/VariantSubsystem/VTHO_NF'
 * '<S70>'  : 'VTHR_ac/VTHR_PwrOn/VariantSubsystem/VTHO_FUNC/Enumerated_Constant1'
 * '<S71>'  : 'VTHR_ac/VTHR_PwrOn/VariantSubsystem/VTHO_FUNC/Enumerated_Constant3'
 * '<S72>'  : 'VTHR_ac/VTHR_PwrOn/VariantSubsystem/VTHO_FUNC/Enumerated_Constant4'
 * '<S73>'  : 'VTHR_ac/VTHR_PwrOn/VariantSubsystem/VTHO_NF/Enum Set Block1'
 * '<S74>'  : 'VTHR_ac/VTHR_PwrOn/VariantSubsystem/VTHO_NF/Enum Set Block2'
 * '<S75>'  : 'VTHR_ac/VTHR_PwrOn/VariantSubsystem/VTHO_NF/Enum Set Block5'
 * '<S76>'  : 'VTHR_ac/VTHR_PwrOn/VariantSubsystem/VTHO_NF/Enumerated_Constant2'
 * '<S77>'  : 'VTHR_ac/VTHR_PwrOn/VariantSubsystem/VTHO_NF/Enumerated_Constant3'
 * '<S78>'  : 'VTHR_ac/VTHR_PwrOn/VariantSubsystem/VTHO_NF/Enumerated_Constant4'
 * '<S79>'  : 'VTHR_ac/VTHR_PwrOn/VariantSubsystem/VTHO_NF/Set Block1'
 * '<S80>'  : 'VTHR_ac/VTHR_PwrOn/VariantSubsystem/VTHO_NF/Set Block10'
 * '<S81>'  : 'VTHR_ac/VTHR_PwrOn/VariantSubsystem/VTHO_NF/Set Block11'
 * '<S82>'  : 'VTHR_ac/VTHR_PwrOn/VariantSubsystem/VTHO_NF/Set Block12'
 * '<S83>'  : 'VTHR_ac/VTHR_PwrOn/VariantSubsystem/VTHO_NF/Set Block2'
 * '<S84>'  : 'VTHR_ac/VTHR_PwrOn/VariantSubsystem/VTHO_NF/Set Block21'
 * '<S85>'  : 'VTHR_ac/VTHR_PwrOn/VariantSubsystem/VTHO_NF/Set Block3'
 * '<S86>'  : 'VTHR_ac/VTHR_PwrOn/VariantSubsystem/VTHO_NF/Set Block4'
 * '<S87>'  : 'VTHR_ac/VTHR_PwrOn/VariantSubsystem/VTHO_NF/Set Block5'
 * '<S88>'  : 'VTHR_ac/VTHR_PwrOn/VariantSubsystem/VTHO_NF/Set Block6'
 * '<S89>'  : 'VTHR_ac/VTHR_PwrOn/VariantSubsystem/VTHO_NF/Set Block7'
 * '<S90>'  : 'VTHR_ac/VTHR_PwrOn/VariantSubsystem/VTHO_NF/Set Block8'
 * '<S91>'  : 'VTHR_ac/VTHR_PwrOn/VariantSubsystem/VTHO_NF/Set Block9'
 */
#endif                                 /* RTW_HEADER_VTHR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
