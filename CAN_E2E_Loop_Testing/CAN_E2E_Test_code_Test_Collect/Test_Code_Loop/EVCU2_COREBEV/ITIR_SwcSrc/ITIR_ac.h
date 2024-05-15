/*
 * File: ITIR_ac.h
 *
 * Code generated for Simulink model 'ITIR_ac'.
 *
 * Model version                  : 1.82
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 14:25:35 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ITIR_ac_h_
#define RTW_HEADER_ITIR_ac_h_
#include <math.h>
#include "Rte_Type.h"
#ifndef ITIR_ac_COMMON_INCLUDES_
#define ITIR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_ITIR.h"
#endif                                 /* ITIR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include"AHS2_Enums.h"
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_ITIR_ac_T
{
    TePLTR_e_ECMVtdFreeze DataTypeConversion;/* '<S26>/DataTypeConversion' */
    TePLTR_e_ECMVtdFreeze OutportBufferForVeITIR_e_HCPVtdFreeze_Ou;/* '<S8>/Const14' */
}
B_ITIR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_ITIR_ac_T
{
    float32 UnitDelay1_DSTATE;         /* '<S54>/Unit Delay1' */
    float32 UnitDelay2_DSTATE;         /* '<S64>/Unit Delay2' */
    float32 UnitDelay2_DSTATE_j;       /* '<S65>/Unit Delay2' */
    float32 UnitDelay2_DSTATE_c;       /* '<S73>/Unit Delay2' */
    float32 UnitDelay2_DSTATE_n;       /* '<S74>/Unit Delay2' */
    float32 UnitDelay_DSTATE;          /* '<S83>/Unit Delay' */
    float32 NeITIR_E_NonGrdEnrgyEngOff_Recent;/* '<Root>/DSM_1' */
    float32 NeITIR_E_GrdEnrgyIntoBatt_Recent;/* '<Root>/DSM_11' */
    float32 NeITIR_t_TimeToResetRecentVar;/* '<Root>/DSM_14' */
    float32 AeITIR_E_NonGrdEnrgyEngOff_Lifetime;/* '<Root>/DSM_2' */
    float32 NeITIR_l_DistTravelChrgDepEngOff_Recent;/* '<Root>/DSM_21' */
    float32 NeITIR_E_GrdEnrgyChrgDepEngOff_Recent;/* '<Root>/DSM_24' */
    float32 NeITIR_E_NonGrdEnrgyEngOn_Recent;/* '<Root>/DSM_3' */
    float32 NeITIR_l_DistTravelChrgDepEngOn_Recent;/* '<Root>/DSM_30' */
    float32 AeITIR_E_NonGrdEnrgyEngOn_Lifetime;/* '<Root>/DSM_4' */
    float32 NeITIR_l_DistTravelChrgIncrease_Recent;/* '<Root>/DSM_5' */
    float32 NeITIR_E_GrdEnrgyChrgDepEngOn_Recent;/* '<Root>/DSM_9' */
    uint32 NeITIR_Cnt_FuelConsChrgDep_Recent;/* '<Root>/DSM_19' */
    uint32 NeITIR_Cnt_FuelEngIgnCycl_Recent;/* '<Root>/DSM_25' */
    uint32 NeITIR_Cnt_IgnCycl_Recent;  /* '<Root>/DSM_26' */
    uint32 NeITIR_Cnt_FuelConsChrgIncrease_Recent;/* '<Root>/DSM_7' */
    uint16 UnitDelay_DSTATE_n;         /* '<S60>/Unit Delay' */
    uint16 UnitDelay_DSTATE_h;         /* '<S59>/Unit Delay' */
    boolean UnitDelay_DSTATE_hy;       /* '<S88>/Unit Delay' */
    boolean UnitDelay_DSTATE_h2;       /* '<S87>/Unit Delay' */
    boolean UnitDelay_DSTATE_b;        /* '<S84>/Unit Delay' */
    boolean UnitDelay_DSTATE_d;        /* '<S56>/Unit Delay' */
    boolean UnitDelay_DSTATE_b0;       /* '<S55>/Unit Delay' */
    boolean UnitDelay_DSTATE_o;        /* '<S81>/Unit Delay' */
    boolean UnitDelay_DSTATE_hp;       /* '<S80>/Unit Delay' */
    boolean UnitDelay_DSTATE_i;        /* '<S79>/Unit Delay' */
    boolean UnitDelay_DSTATE_o0;       /* '<S78>/Unit Delay' */
    boolean UnitDelay_DSTATE_bg;       /* '<S77>/Unit Delay' */
    boolean UnitDelay_DSTATE_l;        /* '<S69>/Unit Delay' */
    boolean UnitDelay_DSTATE_ij;       /* '<S68>/Unit Delay' */
}
DW_ITIR_ac_T;

/* Invariant block signals (default storage) */
typedef struct
{
    const TePLTR_e_ECMVtdFreeze Const14;/* '<S8>/Const14' */
}
ConstB_ITIR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ITIR
#include "MemMap.h"

extern VAR(B_ITIR_ac_T, ITIR_VAR_INIT) ITIR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ITIR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ITIR
#include "MemMap.h"

extern VAR(DW_ITIR_ac_T, ITIR_VAR_INIT) ITIR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ITIR
#include "MemMap.h"
#define START_SEC_CONST_UNSPECIFIED_ITIR
#include "MemMap.h"

extern CONST(ConstB_ITIR_ac_T, ITIR_VAR_INIT) ITIR_ac_ConstB;/* constant block i/o */

#define STOP_SEC_CONST_UNSPECIFIED_ITIR
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
 * '<Root>' : 'ITIR_ac'
 * '<S1>'   : 'ITIR_ac/ITIR_PwrOff'
 * '<S2>'   : 'ITIR_ac/ITIR_PwrOn'
 * '<S3>'   : 'ITIR_ac/ITIR_SlowTEF'
 * '<S4>'   : 'ITIR_ac/RC130B_OBD2PIDsReset'
 * '<S5>'   : 'ITIR_ac/ITIR_PwrOn/DSM_Init'
 * '<S6>'   : 'ITIR_ac/ITIR_PwrOn/InitVal_Lifetime'
 * '<S7>'   : 'ITIR_ac/ITIR_PwrOn/ReadInitVal_ITIDs'
 * '<S8>'   : 'ITIR_ac/ITIR_PwrOn/Sub_Out_Init'
 * '<S9>'   : 'ITIR_ac/ITIR_PwrOn/InitVal_Lifetime/DocBlock'
 * '<S10>'  : 'ITIR_ac/ITIR_PwrOn/ReadInitVal_ITIDs/DocBlock'
 * '<S11>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms'
 * '<S12>'  : 'ITIR_ac/ITIR_SlowTEF/ITII_ProcessInputs'
 * '<S13>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/DocBlock'
 * '<S14>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/Routine130B_and_ITIDs'
 * '<S15>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo'
 * '<S16>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/KeITIR_b_EnblEnergyTracking'
 * '<S17>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem'
 * '<S18>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/Chart'
 * '<S19>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/Compare To Constant'
 * '<S20>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/Compare To Constant1'
 * '<S21>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/Compare To Constant3'
 * '<S22>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/Compare To Constant7'
 * '<S23>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/DistanceTrackingForChargeDepletingEngOff'
 * '<S24>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/DistanceTrackingForChargeDepletingEngRunning'
 * '<S25>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/DistanceTrackingForChargeIncreasing'
 * '<S26>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/Enum Set Block'
 * '<S27>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/Enumerated Value1'
 * '<S28>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/Enumerated Value10'
 * '<S29>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/Enumerated Value11'
 * '<S30>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/Enumerated Value12'
 * '<S31>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/Enumerated Value13'
 * '<S32>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/Enumerated Value14'
 * '<S33>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/Enumerated Value15'
 * '<S34>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/Enumerated Value18'
 * '<S35>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/Enumerated Value2'
 * '<S36>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/Enumerated Value3'
 * '<S37>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/Enumerated Value4'
 * '<S38>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/Enumerated Value5'
 * '<S39>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/Enumerated Value6'
 * '<S40>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/Enumerated Value7'
 * '<S41>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/Enumerated Value8'
 * '<S42>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/Enumerated Value9'
 * '<S43>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/Enumerated_Constant'
 * '<S44>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/Enumerated_Constant1'
 * '<S45>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/FuelConsumptionTrackingInChargeDepleting'
 * '<S46>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/FuelConsumptionTrackingInChargeIncreasing'
 * '<S47>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/FuelEngCycCntr'
 * '<S48>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/GridEnergyIntoTheBatteryTracking'
 * '<S49>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/GridEnergyTrackingInChargeDepletingEngOff'
 * '<S50>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/GridEnergyTrackingInChargeDepletingEngRunning'
 * '<S51>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/IgnCycCntr'
 * '<S52>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/NonGridEnergyEngOff'
 * '<S53>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/NonGridEnergyEngOn'
 * '<S54>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/Odometer_diff'
 * '<S55>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/Signal Latch On With Reset2'
 * '<S56>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/Signal Latch On With Reset3'
 * '<S57>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/TimeResetLifetime'
 * '<S58>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/TimeResetRecent'
 * '<S59>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/Turn On Delay Sample3'
 * '<S60>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/Turn On Delay Sample4'
 * '<S61>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/FuelConsumptionTrackingInChargeDepleting/InitValue_Arb'
 * '<S62>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/FuelConsumptionTrackingInChargeDepleting/InitValue_Arb1'
 * '<S63>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/FuelConsumptionTrackingInChargeDepleting/KeITIR_Cf_ConvertToLitres'
 * '<S64>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/FuelConsumptionTrackingInChargeDepleting/Trip_Increment'
 * '<S65>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/FuelConsumptionTrackingInChargeDepleting/Trip_Increment1'
 * '<S66>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/FuelConsumptionTrackingInChargeDepleting/Uint32Conversion'
 * '<S67>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/FuelConsumptionTrackingInChargeDepleting/Uint32Conversion1'
 * '<S68>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/FuelConsumptionTrackingInChargeDepleting/InitValue_Arb/Signal Latch On'
 * '<S69>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/FuelConsumptionTrackingInChargeDepleting/InitValue_Arb1/Signal Latch On'
 * '<S70>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/FuelConsumptionTrackingInChargeIncreasing/InitValue_Arb'
 * '<S71>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/FuelConsumptionTrackingInChargeIncreasing/InitValue_Arb1'
 * '<S72>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/FuelConsumptionTrackingInChargeIncreasing/KeITIR_Cf_ConvertToLitres'
 * '<S73>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/FuelConsumptionTrackingInChargeIncreasing/TripIncrement'
 * '<S74>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/FuelConsumptionTrackingInChargeIncreasing/TripIncrement1'
 * '<S75>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/FuelConsumptionTrackingInChargeIncreasing/Uint32Conversion'
 * '<S76>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/FuelConsumptionTrackingInChargeIncreasing/Uint32Conversion1'
 * '<S77>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/FuelConsumptionTrackingInChargeIncreasing/InitValue_Arb/Signal Latch On'
 * '<S78>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/FuelConsumptionTrackingInChargeIncreasing/InitValue_Arb1/Signal Latch On'
 * '<S79>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/FuelEngCycCntr/EdgeRising2'
 * '<S80>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/IgnCycCntr/EdgeRising2'
 * '<S81>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/Odometer_diff/EdgeRising2'
 * '<S82>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/TimeResetLifetime/Enumerated Value2'
 * '<S83>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/TimeResetRecent/Accumulator Reset'
 * '<S84>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/TimeResetRecent/EdgeRising'
 * '<S85>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/TimeResetRecent/Enumerated Value1'
 * '<S86>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/TimeResetRecent/Enumerated Value2'
 * '<S87>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/Turn On Delay Sample3/EdgeRising'
 * '<S88>'  : 'ITIR_ac/ITIR_SlowTEF/ITIC_Control_1000ms/TrackingInfo/TrackingInfoSubsystem/Turn On Delay Sample4/EdgeRising'
 * '<S89>'  : 'ITIR_ac/RC130B_OBD2PIDsReset/Enumerated Constant'
 * '<S90>'  : 'ITIR_ac/RC130B_OBD2PIDsReset/IfAct'
 */
#endif                                 /* RTW_HEADER_ITIR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
