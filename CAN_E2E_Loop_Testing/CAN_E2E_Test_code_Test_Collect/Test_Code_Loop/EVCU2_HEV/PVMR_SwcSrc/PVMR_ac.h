/*
 * File: PVMR_ac.h
 *
 * Code generated for Simulink model 'PVMR_ac'.
 *
 * Model version                  : 9.18
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 18:43:13 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_PVMR_ac_h_
#define RTW_HEADER_PVMR_ac_h_
#include <math.h>
#include <string.h>
#include "Rte_Type.h"
#ifndef PVMR_ac_COMMON_INCLUDES_
#define PVMR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_PVMR.h"
#endif                                 /* PVMR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_PVMR_ac_T
{
    float32 OutportBufferForVePVMR_m_VehMas;/* '<S136>/Const1' */
    float32 OutportBufferForVePVMR_m_VehM_l;/* '<S136>/Const2' */
    float32 OutportBufferForOutputParameter;/* '<S135>/Constant Value1' */
    float32 OutportBufferForOutputParamet_a;/* '<S135>/Constant Value2' */
    float32 OutportBufferForOutputParamet_k;/* '<S135>/Constant Value3' */
}
B_PVMR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_PVMR_ac_T
{
    float32 UnitDelay14_DSTATE;        /* '<S10>/Unit Delay14' */
    float32 UnitDelay5_DSTATE[2];      /* '<S12>/Unit Delay5' */
    float32 UnitDelay1_DSTATE;         /* '<S34>/Unit Delay1' */
    float32 UnitDelay_DSTATE;          /* '<S34>/Unit Delay' */
    float32 UnitDelay6_DSTATE;         /* '<S12>/Unit Delay6' */
    float32 UnitDelay1_DSTATE_b;       /* '<S99>/Unit Delay1' */
    float32 UnitDelay2_DSTATE;         /* '<S99>/Unit Delay2' */
    float32 UnitDelay_DSTATE_i;        /* '<S13>/Unit Delay' */
    float32 UnitDelay1_DSTATE_m;       /* '<S13>/Unit Delay1' */
    float32 UnitDelay2_DSTATE_j;       /* '<S13>/Unit Delay2' */
    float32 UnitDelay3_DSTATE;         /* '<S13>/Unit Delay3' */
    float32 UnitDelay_DSTATE_f;        /* '<S104>/Unit Delay' */
    float32 UnitDelay_DSTATE_o;        /* '<S111>/Unit Delay' */
    float32 UnitDelay2_DSTATE_g;       /* '<S111>/Unit Delay2' */
    float32 UnitDelay3_DSTATE_i;       /* '<S111>/Unit Delay3' */
    float32 UnitDelay4_DSTATE;         /* '<S111>/Unit Delay4' */
    float32 Delay_DSTATE[16];          /* '<S111>/Delay' */
    float32 UnitDelay_DSTATE_ir;       /* '<S49>/Unit Delay' */
    float32 UnitDelay_DSTATE_fj;       /* '<S16>/Unit Delay' */
    float32 UnitDelay_DSTATE_m;        /* '<S15>/Unit Delay' */
    float32 UnitDelay_DSTATE_p;        /* '<S14>/Unit Delay' */
    boolean UnitDelay4_DSTATE_a;       /* '<S12>/Unit Delay4' */
    boolean UnitDelay_DSTATE_j;        /* '<S108>/Unit Delay' */
    boolean UnitDelay_DSTATE_od;       /* '<S101>/Unit Delay' */
    boolean UnitDelay_DSTATE_iw;       /* '<S100>/Unit Delay' */
    boolean UnitDelay_DSTATE_k;        /* '<S107>/Unit Delay' */
    boolean UnitDelay_DSTATE_kh;       /* '<S106>/Unit Delay' */
    boolean UnitDelay_DSTATE_ju;       /* '<S105>/Unit Delay' */
    boolean UnitDelay_DSTATE_k0;       /* '<S50>/Unit Delay' */
    boolean UnitDelay_DSTATE_iq;       /* '<S47>/Unit Delay' */
    boolean UnitDelay_DSTATE_pj;       /* '<S46>/Unit Delay' */
    uint8 icLoad;                      /* '<S111>/Delay' */
}
DW_PVMR_ac_T;

/* Constant parameters (default storage) */
typedef struct
{
    /* Expression: single([1 0 0 0;0 1 0 0; 0 0 1 0; 0 0 0 1])
     * Referenced by: '<S111>/Constant Value1'
     */
    float32 ConstantValue1_Value[16];
}
ConstP_PVMR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_PVMR
#include "MemMap.h"

extern VAR(B_PVMR_ac_T, PVMR_VAR_INIT) PVMR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_PVMR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_PVMR
#include "MemMap.h"

extern VAR(DW_PVMR_ac_T, PVMR_VAR_INIT) PVMR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_PVMR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_PVMR
#include "MemMap.h"

extern CONST(ConstP_PVMR_ac_T, PVMR_VAR_INIT) PVMR_ac_ConstP;

#define STOP_SEC_CONST_UNSPECIFIED_PVMR
#include "MemMap.h"

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
 * '<Root>' : 'PVMR_ac'
 * '<S1>'   : 'PVMR_ac/PVMR_FastTEF'
 * '<S2>'   : 'PVMR_ac/PVMR_MedTED'
 * '<S3>'   : 'PVMR_ac/PVMR_PwrOn'
 * '<S4>'   : 'PVMR_ac/PVMR_FastTEF/PVMC_DtrmnNoDotPredicted'
 * '<S5>'   : 'PVMR_ac/PVMR_FastTEF/PVMC_DtrmnNoDotPredicted/PVML_NoDotPredictor'
 * '<S6>'   : 'PVMR_ac/PVMR_FastTEF/PVMC_DtrmnNoDotPredicted/PVML_NoDotPredictor/Set Block'
 * '<S7>'   : 'PVMR_ac/PVMR_FastTEF/PVMC_DtrmnNoDotPredicted/PVML_NoDotPredictor/Set Block1'
 * '<S8>'   : 'PVMR_ac/PVMR_FastTEF/PVMC_DtrmnNoDotPredicted/PVML_NoDotPredictor/Set Block2'
 * '<S9>'   : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation'
 * '<S10>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/Filtering'
 * '<S11>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/KePVMR_b_MassEstKlmnFltrEnbl'
 * '<S12>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate'
 * '<S13>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate'
 * '<S14>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/Filtering/Digital Lowpass Reset Enabled1'
 * '<S15>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/Filtering/Digital Lowpass Reset Enabled2'
 * '<S16>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/Filtering/Digital Lowpass Reset Enabled3'
 * '<S17>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/Filtering/KePVMR_k_AccelVehFiltCoeff'
 * '<S18>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/Filtering/KePVMR_k_AccelWheelScale'
 * '<S19>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/Filtering/KePVMR_k_LongAccelFiltCoeff'
 * '<S20>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/Filtering/KePVMR_k_LongAccelScale'
 * '<S21>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/Filtering/KePVMR_k_VehSpdFiltCoeff'
 * '<S22>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/DtrmnTransShiftState'
 * '<S23>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/KePVMR_k_gravconst'
 * '<S24>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/KePVMR_m_MassRLSMax'
 * '<S25>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/KePVMR_m_MassRLSMin'
 * '<S26>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/KtPVMR_K_arcsintodeg'
 * '<S27>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/Limiter4'
 * '<S28>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/MassEstDisable'
 * '<S29>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/MassEstimation'
 * '<S30>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/Reset_Trigger'
 * '<S31>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/Reset_conditions'
 * '<S32>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/SlopeEstDisabled'
 * '<S33>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/SlopeEstimationFromAx'
 * '<S34>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/Validity_checkKF'
 * '<S35>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/MassEstimation/Estimation'
 * '<S36>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/MassEstimation/KePVMR_k_InitEstmM'
 * '<S37>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/MassEstimation/Mkf'
 * '<S38>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/MassEstimation/measures'
 * '<S39>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/MassEstimation/Estimation/KePVMR_I_WheelsInertia'
 * '<S40>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/MassEstimation/Estimation/Protected Division'
 * '<S41>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/MassEstimation/Mkf/KaPVMR_k_KfMassEst'
 * '<S42>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/MassEstimation/Mkf/Limiter'
 * '<S43>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/MassEstimation/measures/KePVMR_k_CoastDownCoeffF0'
 * '<S44>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/MassEstimation/measures/KePVMR_k_CoastDownCoeffF1'
 * '<S45>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/MassEstimation/measures/KePVMR_k_CoastDownCoeffF2'
 * '<S46>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/Reset_Trigger/EdgeRising'
 * '<S47>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/Reset_Trigger/EdgeRising1'
 * '<S48>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/Reset_Trigger/KePVMR_t_RLSdT'
 * '<S49>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/Reset_Trigger/Turn On Delay Time'
 * '<S50>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/Reset_Trigger/Turn On Delay Time/EdgeRising'
 * '<S51>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/Reset_conditions/Constant Value6'
 * '<S52>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/Reset_conditions/KePVMR_b_ResetOvrrd'
 * '<S53>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/SlopeEstimationFromAx/KaPVMR_k_InitXSlope'
 * '<S54>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/SlopeEstimationFromAx/MKfSlopeAx'
 * '<S55>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/SlopeEstimationFromAx/Saturation'
 * '<S56>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/SlopeEstimationFromAx/Subsystem2'
 * '<S57>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/SlopeEstimationFromAx/MKfSlopeAx/KePVMR_k_KfSlopeAx1P'
 * '<S58>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/SlopeEstimationFromAx/MKfSlopeAx/KePVMR_k_KfSlopeAx2P'
 * '<S59>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/SlopeEstimationFromAx/Saturation/KePVMR_k_LwStrtnEstSlopeAx'
 * '<S60>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/SlopeEstimationFromAx/Saturation/KePVMR_k_UpprStrtnEstSlopeAx'
 * '<S61>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/SlopeEstimationFromAx/Saturation/KePVMR_k_gravconst'
 * '<S62>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/SlopeEstimationFromAx/Saturation/Limiter'
 * '<S63>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/SlopeEstimationFromAx/Subsystem2/KePVMR_t_RLSdT'
 * '<S64>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/Validity_checkKF/Constant Value10'
 * '<S65>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/Validity_checkKF/Constant Value3'
 * '<S66>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/Validity_checkKF/Constant Value4'
 * '<S67>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/Validity_checkKF/Constant Value6'
 * '<S68>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/Validity_checkKF/Constant Value7'
 * '<S69>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/Validity_checkKF/Constant Value8'
 * '<S70>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/Validity_checkKF/Constant Value9'
 * '<S71>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/Validity_checkKF/KePVMR_F_MassCalcEnblMinDriveForce'
 * '<S72>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/Validity_checkKF/KePVMR_a_MassCalcEnblMaxAccelKF'
 * '<S73>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/Validity_checkKF/KePVMR_a_MassCalcEnblMinAccelKF'
 * '<S74>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/Validity_checkKF/KePVMR_k_hgrThrshldDerAxleTq'
 * '<S75>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/Validity_checkKF/KePVMR_k_highPssFltrCoeffU'
 * '<S76>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/Validity_checkKF/KePVMR_k_highPssFltrCoeffY'
 * '<S77>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/Validity_checkKF/KePVMR_k_lwrThrshldDerAxleTq'
 * '<S78>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/Validity_checkKF/KePVMR_v_MassCalcEnblVehSpdHi'
 * '<S79>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/Validity_checkKF/KePVMR_v_MassCalcEnblVehSpdLo'
 * '<S80>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_KalmanFilter_estimate/Validity_checkKF/Protected Division'
 * '<S81>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/Invalid_data'
 * '<S82>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/KePVMR_F_A_RLSMax'
 * '<S83>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/KePVMR_F_A_RLSMin'
 * '<S84>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/KePVMR_F_B_RLSMax'
 * '<S85>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/KePVMR_F_B_RLSMin'
 * '<S86>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/KePVMR_F_C_RLSMax'
 * '<S87>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/KePVMR_F_C_RLSMin'
 * '<S88>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/KePVMR_m_MassRLSMax'
 * '<S89>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/KePVMR_m_MassRLSMin'
 * '<S90>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/Limiter'
 * '<S91>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/Limiter1'
 * '<S92>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/Limiter2'
 * '<S93>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/Limiter3'
 * '<S94>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/ResetTriggerRLS'
 * '<S95>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/ResetconditionsRLS'
 * '<S96>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/Square'
 * '<S97>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/Valid_data1'
 * '<S98>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/Validity_checkRLS'
 * '<S99>'  : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/ResetTriggerRLS/Delayed_falling_edge'
 * '<S100>' : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/ResetTriggerRLS/EdgeRising'
 * '<S101>' : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/ResetTriggerRLS/EdgeRising1'
 * '<S102>' : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/ResetTriggerRLS/KePVMR_t_RLSInhbtTm'
 * '<S103>' : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/ResetTriggerRLS/KePVMR_t_RLSdT'
 * '<S104>' : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/ResetTriggerRLS/Turn On Delay Time'
 * '<S105>' : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/ResetTriggerRLS/Delayed_falling_edge/EdgeFalling'
 * '<S106>' : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/ResetTriggerRLS/Delayed_falling_edge/EdgeFalling1'
 * '<S107>' : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/ResetTriggerRLS/Delayed_falling_edge/EdgeRising'
 * '<S108>' : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/ResetTriggerRLS/Turn On Delay Time/EdgeRising'
 * '<S109>' : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/ResetconditionsRLS/Constant Value6'
 * '<S110>' : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/ResetconditionsRLS/KePVMR_b_ResetOvrrd'
 * '<S111>' : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/Valid_data1/RLS_mdl'
 * '<S112>' : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/Valid_data1/RLS_mdl/KaPVMR_k_InitPMatrix'
 * '<S113>' : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/Valid_data1/RLS_mdl/KePVMR_k_InitEstmA'
 * '<S114>' : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/Valid_data1/RLS_mdl/KePVMR_k_InitEstmB'
 * '<S115>' : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/Valid_data1/RLS_mdl/KePVMR_k_InitEstmC'
 * '<S116>' : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/Valid_data1/RLS_mdl/KePVMR_k_InitEstmM'
 * '<S117>' : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/Valid_data1/RLS_mdl/KePVMR_v_RLS_FrgtFctr'
 * '<S118>' : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/Valid_data1/RLS_mdl/Protected Division'
 * '<S119>' : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/Validity_checkRLS/Constant Value10'
 * '<S120>' : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/Validity_checkRLS/Constant Value3'
 * '<S121>' : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/Validity_checkRLS/Constant Value4'
 * '<S122>' : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/Validity_checkRLS/Constant Value6'
 * '<S123>' : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/Validity_checkRLS/Constant Value7'
 * '<S124>' : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/Validity_checkRLS/Constant Value8'
 * '<S125>' : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/Validity_checkRLS/Constant Value9'
 * '<S126>' : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/Validity_checkRLS/KePVMR_F_MassCalcEnblMaxDriveForce'
 * '<S127>' : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/Validity_checkRLS/KePVMR_F_MassCalcEnblMinDriveForce'
 * '<S128>' : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/Validity_checkRLS/KePVMR_a_MassCalcEnblMaxAccel'
 * '<S129>' : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/Validity_checkRLS/KePVMR_a_MassCalcEnblMinAccel'
 * '<S130>' : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/Validity_checkRLS/KePVMR_b_SelectAccelSrc'
 * '<S131>' : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/Validity_checkRLS/KePVMR_v_MassCalcEnblVehSpdHi'
 * '<S132>' : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/Validity_checkRLS/KePVMR_v_MassCalcEnblVehSpdLo'
 * '<S133>' : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/Validity_checkRLS/KtPVMR_K_arcsintodeg'
 * '<S134>' : 'PVMR_ac/PVMR_MedTED/PVMRMassEstimation/PVMC_VehMass_RLS_estimate/Validity_checkRLS/Limiter'
 * '<S135>' : 'PVMR_ac/PVMR_PwrOn/PVMC_Init'
 * '<S136>' : 'PVMR_ac/PVMR_PwrOn/Sub_Out_Init'
 */
#endif                                 /* RTW_HEADER_PVMR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
