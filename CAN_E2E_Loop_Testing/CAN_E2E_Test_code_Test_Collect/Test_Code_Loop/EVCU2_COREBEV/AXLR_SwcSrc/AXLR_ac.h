/*
 * File: AXLR_ac.h
 *
 * Code generated for Simulink model 'AXLR_ac'.
 *
 * Model version                  : 9.203
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:07:43 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_AXLR_ac_h_
#define RTW_HEADER_AXLR_ac_h_
#include <math.h>
#include "Rte_Type.h"
#ifndef AXLR_ac_COMMON_INCLUDES_
#define AXLR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_AXLR.h"
#endif                                 /* AXLR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_AXLR_ac_T
{
    float32 LeAXLR_M_MinAxleTorqCap;   /* '<S185>/ConstantValue5' */
    float32 LeAXLR_Pct_ActAxleTorqRrAxleTor;/* '<S185>/ConstantValue3' */
    float32 LeAXLR_s_ElecAxleTorqCapSclr;/* '<S185>/ConstantValue1' */
    float32 LeAXLR_M_ActAxleTorq;      /* '<S185>/ConstantValue4' */
    float32 LeAXLR_M_ActAxleOutputTrq; /* '<S185>/ConstantValue9' */
    float32 OutportBufferForMinAxleTrqCruis;/* '<S185>/ConstantValue' */
    float32 OutportBufferForVeAXLR_M_MinTra;/* '<S185>/ConstantValue8' */
    float32 OutportBufferForMaxAxleTrqCruis;/* '<S185>/ConstantValue2' */
    float32 OutportBufferForActualAxleTrq;/* '<S185>/ConstantValue25' */
    float32 OutportBufferForActualOutputTrq;/* '<S185>/ConstantValue26' */
    float32 OutportBufferForToMisc;    /* '<S185>/ConstantValue6' */
    float32 OutportBufferForToFromTa;  /* '<S185>/ConstantValue10' */
    float32 OutportBufferForToFromTb;  /* '<S185>/ConstantValue11' */
    float32 OutportBufferForToFromTc;  /* '<S185>/ConstantValue12' */
    float32 OutportBufferForDrvrIntndedAxle;/* '<S185>/ConstantValue15' */
    float32 OutportBufferForFrontAxleTrqEst;/* '<S185>/ConstantValue16' */
    float32 OutportBufferForToFromTC1; /* '<S185>/ConstantValue17' */
    float32 OutportBufferForT0FromTC3; /* '<S185>/ConstantValue18' */
    float32 OutportBufferForVeAXLR_M_OutTor;/* '<S185>/ConstantValue36' */
    float32 OutportBufferForVeAXLR_M_OutT_a;/* '<S185>/ConstantValue37' */
    float32 OutportBufferForVeAXLR_M_OutT_f;/* '<S185>/ConstantValue38' */
    float32 OutportBufferForVeAXLR_M_OutT_k;/* '<S185>/ConstantValue39' */
    float32 OutportBufferForVeAXLC_M_SumMax;/* '<S185>/ConstantValue40' */
    float32 OutportBufferForVeAXLC_M_Arbitr;/* '<S185>/ConstantValue35' */
    float32 OutportBufferForVeAXLR_M_FrntAx;
                                    /* '<S185>/KeAXLR_M_FrntAxlTrqEstOutInit' */
    float32 OutportBufferForVeAXLR_M_SplitF;
                                  /* '<S185>/KeAXLR_M_SplitFrntTrqReqOutInit' */
    float32 OutportBufferForVeAXLR_M_RrAxlT;
                                      /* '<S185>/KeAXLR_M_RrAxlTrqEstOutInit' */
    float32 OutportBufferForVeAXLR_M_SplitR;
                                 /* '<S185>/KeAXLR_M_SplitRrAxlTrqReqOutInit' */
    float32 OutportBufferForVeAXLR_M_ToMinA;/* '<S185>/ConstantValue22' */
    float32 OutportBufferForVeAXLR_M_ToMaxA;/* '<S185>/ConstantValue23' */
    float32 OutportBufferForVeAXLR_M_Frnt_n;/* '<S185>/ConstantValue21' */
    float32 OutportBufferForVeAXLR_M_Frnt_p;/* '<S185>/ConstantValue7' */
    float32 OutportBufferForVeAXLR_M_RrAx_m;/* '<S185>/ConstantValue30' */
    float32 OutportBufferForVeAXLR_M_RrA_mp;/* '<S185>/ConstantValue31' */
    float32 OutportBufferForVeAXLC_M_AxleTr;/* '<S185>/ConstantValue33' */
    float32 OutportBufferForVeAXLC_M_ActAxl;/* '<S185>/ConstantValue32' */
    float32 OutportBufferForVeAXLC_M_To_CL_;/* '<S185>/ConstantValue34' */

#if Rte_SysCon_Variant_AXLR_Dual_Axis

    float32 Gain_o;                    /* '<S166>/Gain' */

#define B_AXLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_AXLR_Dual_Axis

    float32 Gain_h;                    /* '<S167>/Gain' */

#define B_AXLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_AXLR_Dual_Axis

    float32 Gain_e;                    /* '<S168>/Gain' */

#define B_AXLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_AXLR_Dual_Axis

    float32 Gain_g0;                   /* '<S169>/Gain' */

#define B_AXLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_AXLR_Dual_Axis

    float32 Product2;                  /* '<S173>/Product2' */

#define B_AXLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_AXLR_Dual_Axis

    float32 Product4;                  /* '<S173>/Product4' */

#define B_AXLR_AC_T_VARIANT_EXISTS
#endif

    float32 VariantMerge_For_Variant_Source;
    float32 VariantMerge_For_Variant_Sour_n;
    float32 VariantMerge_For_Variant_Sour_g;
    float32 VariantMerge_For_Variant_Sour_d;
    float32 OutportBufferForVeAXLC_M_MinAxl;/* '<S5>/FilterOutputTorque' */
    float32 OutportBufferForVeAXLC_Pct_ActA;/* '<S5>/FilterOutputTorque' */
    float32 OutportBufferForVeAXLC_s_ElecAx;/* '<S5>/FilterOutputTorque' */
    boolean LeAXLR_b_ActAxleTrqFA;     /* '<S185>/ConstantValue14' */
    boolean OutportBufferForActualAxleTrqFA;/* '<S185>/ConstantValue13' */
    boolean OutportBufferForVeAXLC_b_ActAxl;/* '<S5>/FilterOutputTorque' */
    boolean OutportBufferForVeAXLC_b_Actual;/* '<S5>/FilterOutputTorque' */
}
B_AXLR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_AXLR_ac_T
{
    float32 UnitDelay_DSTATE;          /* '<S11>/Unit Delay' */
    float32 UnitDelay_DSTATE_c;        /* '<S10>/Unit Delay' */
    float32 UnitDelay_DSTATE_f;        /* '<S9>/Unit Delay' */
    float32 UnitDelay_DSTATE_d;        /* '<S8>/Unit Delay' */

#if Rte_SysCon_Variant_AXLR_Dual_Axis

    float32 UnitDelay_DSTATE_a;        /* '<S171>/Unit Delay' */

#define DW_AXLR_AC_T_VARIANT_EXISTS
#endif

    float32 UnitDelay_DSTATE_j;        /* '<S157>/UnitDelay' */
}
DW_AXLR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_AXLR
#include "MemMap.h"

extern VAR(B_AXLR_ac_T, AXLR_VAR_INIT) AXLR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_AXLR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_AXLR
#include "MemMap.h"

extern VAR(DW_AXLR_ac_T, AXLR_VAR_INIT) AXLR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_AXLR
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
 * '<Root>' : 'AXLR_ac'
 * '<S1>'   : 'AXLR_ac/AXLR_MedTEB'
 * '<S2>'   : 'AXLR_ac/AXLR_PUP'
 * '<S3>'   : 'AXLR_ac/AXLR_MedTEB/AXLC_PassThrough'
 * '<S4>'   : 'AXLR_ac/AXLR_MedTEB/AXLO_125ms_ProcessOutputs'
 * '<S5>'   : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques'
 * '<S6>'   : 'AXLR_ac/AXLR_MedTEB/Axle_Min_Max_Calculation'
 * '<S7>'   : 'AXLR_ac/AXLR_MedTEB/Axle_Torque_Calculation'
 * '<S8>'   : 'AXLR_ac/AXLR_MedTEB/AXLC_PassThrough/DigitalLowpassResetEnabled'
 * '<S9>'   : 'AXLR_ac/AXLR_MedTEB/AXLC_PassThrough/DigitalLowpassResetEnabled1'
 * '<S10>'  : 'AXLR_ac/AXLR_MedTEB/AXLC_PassThrough/DigitalLowpassResetEnabled2'
 * '<S11>'  : 'AXLR_ac/AXLR_MedTEB/AXLC_PassThrough/DigitalLowpassResetEnabled3'
 * '<S12>'  : 'AXLR_ac/AXLR_MedTEB/AXLC_PassThrough/DocBlock'
 * '<S13>'  : 'AXLR_ac/AXLR_MedTEB/AXLC_PassThrough/HeAXLR_b_PhyscBasedAxleTrqDirectn'
 * '<S14>'  : 'AXLR_ac/AXLR_MedTEB/AXLC_PassThrough/KeAXLR_k_FiltCoeffFrntAxlTrqEst'
 * '<S15>'  : 'AXLR_ac/AXLR_MedTEB/AXLC_PassThrough/KeAXLR_k_FiltCoeffRrAxlTrqEst'
 * '<S16>'  : 'AXLR_ac/AXLR_MedTEB/AXLC_PassThrough/KeAXLR_k_FiltCoeffSplitFrntTrqReq'
 * '<S17>'  : 'AXLR_ac/AXLR_MedTEB/AXLC_PassThrough/KeAXLR_k_FiltCoeffSplitRrAxlTrqReq'
 * '<S18>'  : 'AXLR_ac/AXLR_MedTEB/AXLC_PassThrough/SetBlock'
 * '<S19>'  : 'AXLR_ac/AXLR_MedTEB/AXLC_PassThrough/SetBlock1'
 * '<S20>'  : 'AXLR_ac/AXLR_MedTEB/AXLC_PassThrough/SetBlock2'
 * '<S21>'  : 'AXLR_ac/AXLR_MedTEB/AXLC_PassThrough/SetBlock3'
 * '<S22>'  : 'AXLR_ac/AXLR_MedTEB/AXLO_125ms_ProcessOutputs/KeAXLR_M_ActAxleOutputTrq'
 * '<S23>'  : 'AXLR_ac/AXLR_MedTEB/AXLO_125ms_ProcessOutputs/KeAXLR_M_ActAxleTrq'
 * '<S24>'  : 'AXLR_ac/AXLR_MedTEB/AXLO_125ms_ProcessOutputs/KeAXLR_M_ActualAxleTrq'
 * '<S25>'  : 'AXLR_ac/AXLR_MedTEB/AXLO_125ms_ProcessOutputs/KeAXLR_M_ActualOutputTorque'
 * '<S26>'  : 'AXLR_ac/AXLR_MedTEB/AXLO_125ms_ProcessOutputs/KeAXLR_M_DrvrIntndedAxleTrq_Arb'
 * '<S27>'  : 'AXLR_ac/AXLR_MedTEB/AXLO_125ms_ProcessOutputs/KeAXLR_M_FrntAxlTrqEstOvrdVal'
 * '<S28>'  : 'AXLR_ac/AXLR_MedTEB/AXLO_125ms_ProcessOutputs/KeAXLR_M_MaxAxleTrqCruise'
 * '<S29>'  : 'AXLR_ac/AXLR_MedTEB/AXLO_125ms_ProcessOutputs/KeAXLR_M_MinAxleTorqCap'
 * '<S30>'  : 'AXLR_ac/AXLR_MedTEB/AXLO_125ms_ProcessOutputs/KeAXLR_M_MinAxleTrqCruise'
 * '<S31>'  : 'AXLR_ac/AXLR_MedTEB/AXLO_125ms_ProcessOutputs/KeAXLR_M_OvrrdActualAxleTrq_phy'
 * '<S32>'  : 'AXLR_ac/AXLR_MedTEB/AXLO_125ms_ProcessOutputs/KeAXLR_M_OvrrdClch1Torq_Axle'
 * '<S33>'  : 'AXLR_ac/AXLR_MedTEB/AXLO_125ms_ProcessOutputs/KeAXLR_M_OvrrdClch3Torq_Axle'
 * '<S34>'  : 'AXLR_ac/AXLR_MedTEB/AXLO_125ms_ProcessOutputs/KeAXLR_M_RrAxlTrqEstOvrdVal'
 * '<S35>'  : 'AXLR_ac/AXLR_MedTEB/AXLO_125ms_ProcessOutputs/KeAXLR_M_SplitFrntTrqReqOvrdVal'
 * '<S36>'  : 'AXLR_ac/AXLR_MedTEB/AXLO_125ms_ProcessOutputs/KeAXLR_M_SplitRrAxlTrqReqOvrdVal'
 * '<S37>'  : 'AXLR_ac/AXLR_MedTEB/AXLO_125ms_ProcessOutputs/KeAXLR_Pct_ActAxleTorqRrAxleTorqSplitVal'
 * '<S38>'  : 'AXLR_ac/AXLR_MedTEB/AXLO_125ms_ProcessOutputs/KeAXLR_b_ActAxleTrqFA_OvrrdEnbl'
 * '<S39>'  : 'AXLR_ac/AXLR_MedTEB/AXLO_125ms_ProcessOutputs/KeAXLR_b_ActAxleTrqFA_OvrrdVal'
 * '<S40>'  : 'AXLR_ac/AXLR_MedTEB/AXLO_125ms_ProcessOutputs/KeAXLR_b_ActualAxleTrqFA_OvrrdEnbl'
 * '<S41>'  : 'AXLR_ac/AXLR_MedTEB/AXLO_125ms_ProcessOutputs/KeAXLR_b_ActualAxleTrqFA_OvrrdVal'
 * '<S42>'  : 'AXLR_ac/AXLR_MedTEB/AXLO_125ms_ProcessOutputs/KeAXLR_b_FrntAxlTrqEstOvrdEnbl'
 * '<S43>'  : 'AXLR_ac/AXLR_MedTEB/AXLO_125ms_ProcessOutputs/KeAXLR_b_OvrdActAxleOutputTrq'
 * '<S44>'  : 'AXLR_ac/AXLR_MedTEB/AXLO_125ms_ProcessOutputs/KeAXLR_b_OvrdActAxleTorqRrAxleTorqSplit'
 * '<S45>'  : 'AXLR_ac/AXLR_MedTEB/AXLO_125ms_ProcessOutputs/KeAXLR_b_OvrdActAxleTrq'
 * '<S46>'  : 'AXLR_ac/AXLR_MedTEB/AXLO_125ms_ProcessOutputs/KeAXLR_b_OvrdActualAxleTrq'
 * '<S47>'  : 'AXLR_ac/AXLR_MedTEB/AXLO_125ms_ProcessOutputs/KeAXLR_b_OvrdActualOutputTorque'
 * '<S48>'  : 'AXLR_ac/AXLR_MedTEB/AXLO_125ms_ProcessOutputs/KeAXLR_b_OvrdElecAxleTorqCapSclr'
 * '<S49>'  : 'AXLR_ac/AXLR_MedTEB/AXLO_125ms_ProcessOutputs/KeAXLR_b_OvrdMaxAxleTrqCruise'
 * '<S50>'  : 'AXLR_ac/AXLR_MedTEB/AXLO_125ms_ProcessOutputs/KeAXLR_b_OvrdMinAxleTorqCap'
 * '<S51>'  : 'AXLR_ac/AXLR_MedTEB/AXLO_125ms_ProcessOutputs/KeAXLR_b_OvrdMinAxleTrqCruise'
 * '<S52>'  : 'AXLR_ac/AXLR_MedTEB/AXLO_125ms_ProcessOutputs/KeAXLR_b_OvrrdActualAxleTrq_phyEnbl'
 * '<S53>'  : 'AXLR_ac/AXLR_MedTEB/AXLO_125ms_ProcessOutputs/KeAXLR_b_OvrrdClch1Torq_AxleEnbl'
 * '<S54>'  : 'AXLR_ac/AXLR_MedTEB/AXLO_125ms_ProcessOutputs/KeAXLR_b_OvrrdClch3Torq_AxleEnbl'
 * '<S55>'  : 'AXLR_ac/AXLR_MedTEB/AXLO_125ms_ProcessOutputs/KeAXLR_b_OvrrdDrvrIntndedAxleTrq'
 * '<S56>'  : 'AXLR_ac/AXLR_MedTEB/AXLO_125ms_ProcessOutputs/KeAXLR_b_RrAxlTrqEstOvrdEnbl'
 * '<S57>'  : 'AXLR_ac/AXLR_MedTEB/AXLO_125ms_ProcessOutputs/KeAXLR_b_SplitFrntTrqReqOvrdEnbl'
 * '<S58>'  : 'AXLR_ac/AXLR_MedTEB/AXLO_125ms_ProcessOutputs/KeAXLR_b_SplitRrAxlTrqReqOvrdEnbl'
 * '<S59>'  : 'AXLR_ac/AXLR_MedTEB/AXLO_125ms_ProcessOutputs/KeAXLR_s_ElecAxleTorqCapSclr'
 * '<S60>'  : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/CalcActualAxleTorq'
 * '<S61>'  : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque'
 * '<S62>'  : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/CalcActualAxleTorq/ActualTorqCalc'
 * '<S63>'  : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/CalcActualAxleTorq/KeAXLR_b_UseToCLInActualTo'
 * '<S64>'  : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/CalcActualAxleTorq/SetBlock'
 * '<S65>'  : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/CalcActualAxleTorq/SetBlock1'
 * '<S66>'  : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/CalcActualAxleTorq/SetBlock2'
 * '<S67>'  : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/CalcActualAxleTorq/ActualTorqCalc/AXLR_DtrmnToActual'
 * '<S68>'  : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/CalcActualAxleTorq/ActualTorqCalc/AXLR_DtrmnToCommanded'
 * '<S69>'  : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/CalcActualAxleTorq/ActualTorqCalc/KeAXLR_b_ActualTo_IncludeTiCL'
 * '<S70>'  : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/CalcActualAxleTorq/ActualTorqCalc/AXLR_DtrmnToActual/DocBlock'
 * '<S71>'  : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/CalcActualAxleTorq/ActualTorqCalc/AXLR_DtrmnToActual/KeAXLR_b_UseNidotProf'
 * '<S72>'  : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/CalcActualAxleTorq/ActualTorqCalc/AXLR_DtrmnToActual/KeAXLR_b_UseZeroNidot'
 * '<S73>'  : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/CalcActualAxleTorq/ActualTorqCalc/AXLR_DtrmnToCommanded/DocBlock'
 * '<S74>'  : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/CalcActualAxleTorq/ActualTorqCalc/AXLR_DtrmnToCommanded/KeAXLR_b_UseNidotProf_ToCmnd'
 * '<S75>'  : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/CalcActualAxleTorq/ActualTorqCalc/AXLR_DtrmnToCommanded/KeAXLR_b_UseZeroNidot_ToCmnd'
 * '<S76>'  : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/CalcActualAxleTorq/ActualTorqCalc/AXLR_DtrmnToCommanded/SetBlock'
 * '<S77>'  : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/CalcActualAxleTorq/ActualTorqCalc/AXLR_DtrmnToCommanded/SetBlock1'
 * '<S78>'  : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/CalcActualAxleTorq/ActualTorqCalc/AXLR_DtrmnToCommanded/SetBlock2'
 * '<S79>'  : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/CalcActualAxleTorq/ActualTorqCalc/AXLR_DtrmnToCommanded/SetBlock3'
 * '<S80>'  : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/AXLC_DtrmnPRNDL_Coeff'
 * '<S81>'  : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/ActWhlTrqConv'
 * '<S82>'  : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/DocBlock'
 * '<S83>'  : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/HeAXLR_b_PhyscBasedAxleTrqDirectn'
 * '<S84>'  : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/KeAXLR_M_MinAxleTorqCapOvrd'
 * '<S85>'  : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/KeAXLR_M_MinAxleTorqCurrRangeOvrd'
 * '<S86>'  : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/KeAXLR_M_OutTorqMaxOffset'
 * '<S87>'  : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/KeAXLR_Pct_ActAxleTorqRrAxleTorqSplit'
 * '<S88>'  : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/KeAXLR_b_DrvrAxleTrq_PhyscsBasd'
 * '<S89>'  : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/KeAXLR_b_UseATRRDrvTrq'
 * '<S90>'  : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/KeAXLR_b_UseSysLmts4MinCruiseTrq'
 * '<S91>'  : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/KeAXLR_b_UseToCLInActualTo'
 * '<S92>'  : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/SetBlock1'
 * '<S93>'  : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/SetBlock10'
 * '<S94>'  : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/SetBlock11'
 * '<S95>'  : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/SetBlock12'
 * '<S96>'  : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/SetBlock13'
 * '<S97>'  : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/SetBlock14'
 * '<S98>'  : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/SetBlock2'
 * '<S99>'  : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/SetBlock3'
 * '<S100>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/SetBlock4'
 * '<S101>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/SetBlock5'
 * '<S102>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/SetBlock6'
 * '<S103>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/SetBlock7'
 * '<S104>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/SetBlock8'
 * '<S105>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/SetBlock9'
 * '<S106>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/Tac2Whl'
 * '<S107>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/Total_Min_Max_Calculation'
 * '<S108>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/AXLC_DtrmnPRNDL_Coeff/Drive1'
 * '<S109>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/AXLC_DtrmnPRNDL_Coeff/Drive10'
 * '<S110>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/AXLC_DtrmnPRNDL_Coeff/Drive2'
 * '<S111>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/AXLC_DtrmnPRNDL_Coeff/Drive3'
 * '<S112>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/AXLC_DtrmnPRNDL_Coeff/Drive4'
 * '<S113>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/AXLC_DtrmnPRNDL_Coeff/Drive5'
 * '<S114>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/AXLC_DtrmnPRNDL_Coeff/Drive6'
 * '<S115>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/AXLC_DtrmnPRNDL_Coeff/Drive7'
 * '<S116>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/AXLC_DtrmnPRNDL_Coeff/Drive8'
 * '<S117>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/AXLC_DtrmnPRNDL_Coeff/Drive9'
 * '<S118>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/AXLC_DtrmnPRNDL_Coeff/HeAXLR_k_PRNDCoeff_Drv'
 * '<S119>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/AXLC_DtrmnPRNDL_Coeff/HeAXLR_k_PRNDCoeff_PN'
 * '<S120>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/AXLC_DtrmnPRNDL_Coeff/HeAXLR_k_PRNDCoeff_Rev'
 * '<S121>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/AXLC_DtrmnPRNDL_Coeff/Reverse'
 * '<S122>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/AXLC_DtrmnPRNDL_Coeff/TCCM_Neutral1'
 * '<S123>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/AXLC_DtrmnPRNDL_Coeff/TCCM_Neutral2'
 * '<S124>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/ActWhlTrqConv/Enumerated_Constant1'
 * '<S125>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/ActWhlTrqConv/HeATRR_b_BSGConvByps'
 * '<S126>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/ActWhlTrqConv/HeATRR_b_RTC_Enbl'
 * '<S127>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/ActWhlTrqConv/HeTSXR_e_All_TactToDomain'
 * '<S128>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/Tac2Whl/Enumerated_Constant1'
 * '<S129>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/Tac2Whl/HeATRR_b_BSGConvByps'
 * '<S130>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/Tac2Whl/HeATRR_b_RTC_Enbl'
 * '<S131>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/Tac2Whl/HeTSXR_e_All_TactToDomain'
 * '<S132>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/Tac2Whl/RTC'
 * '<S133>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/Tac2Whl/RTC/RTC_off'
 * '<S134>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/Tac2Whl/RTC/RTC_on'
 * '<S135>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/Tac2Whl/RTC/RTC_on/Blend'
 * '<S136>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/Tac2Whl/RTC/RTC_on/HSCL_TimpRTC_NiTturb'
 * '<S137>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/Tac2Whl/RTC/RTC_on/HSCL_TimpRTC_NiTturb/KtHSCR_r_TCC_TorqRatio'
 * '<S138>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/Tac2Whl/RTC/RTC_on/HSCL_TimpRTC_NiTturb/Protected Division1'
 * '<S139>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/Tac2Whl/RTC/RTC_on/HSCL_TimpRTC_NiTturb/Set Block1'
 * '<S140>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/Tac2Whl/RTC/RTC_on/HSCL_TimpRTC_NiTturb/TimpRTC'
 * '<S141>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/Tac2Whl/RTC/RTC_on/HSCL_TimpRTC_NiTturb/TimpRTC/Subsystem'
 * '<S142>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/Tac2Whl/RTC/RTC_on/HSCL_TimpRTC_NiTturb/TimpRTC/Subsystem/KtHSCR_r_MixTCC_TimpFromNC2_CoeffsA'
 * '<S143>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/Tac2Whl/RTC/RTC_on/HSCL_TimpRTC_NiTturb/TimpRTC/Subsystem/KtHSCR_r_MixTCC_TimpFromNC2_CoeffsB'
 * '<S144>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/Tac2Whl/RTC/RTC_on/HSCL_TimpRTC_NiTturb/TimpRTC/Subsystem/KtHSCR_r_MixTCC_TimpFromNC2_CoeffsC'
 * '<S145>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/Tac2Whl/RTC/RTC_on/HSCL_TimpRTC_NiTturb/TimpRTC/Subsystem/Protected Division1'
 * '<S146>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/Tac2Whl/RTC/RTC_on/HSCL_TimpRTC_NiTturb/TimpRTC/Subsystem/Protected Division2'
 * '<S147>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/Tac2Whl/RTC/RTC_on/HSCL_TimpRTC_NiTturb/TimpRTC/Subsystem/Protected Division4'
 * '<S148>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/Total_Min_Max_Calculation/Blend_ToMinMax_DID'
 * '<S149>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/Total_Min_Max_Calculation/KeAXLR_b_UseOITR4MaxCruiseTrq'
 * '<S150>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/Total_Min_Max_Calculation/KeAXLR_b_UseOITR4MinCruiseTrq'
 * '<S151>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/Total_Min_Max_Calculation/KeAXLR_b_UsePhyBasedToMinMax'
 * '<S152>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/Total_Min_Max_Calculation/KeAXLR_b_VTVRTactToMaxOvrd'
 * '<S153>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/Total_Min_Max_Calculation/KeAXLR_b_VTVRTactToMinOvrd'
 * '<S154>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/Total_Min_Max_Calculation/KeAXLR_k_TorqMinMax_LD'
 * '<S155>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/Total_Min_Max_Calculation/KeAXLR_k_TorqMinMax_LU'
 * '<S156>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/Total_Min_Max_Calculation/ToMinMax_Physical'
 * '<S157>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/Total_Min_Max_Calculation/Blend_ToMinMax_DID/GradientLimiter'
 * '<S158>' : 'AXLR_ac/AXLR_MedTEB/AXLR_ProcessOutputTorques/FilterOutputTorque/Total_Min_Max_Calculation/Blend_ToMinMax_DID/GradientLimiter/Limiter'
 * '<S159>' : 'AXLR_ac/AXLR_MedTEB/Axle_Min_Max_Calculation/Blend_ToMinMax_DID'
 * '<S160>' : 'AXLR_ac/AXLR_MedTEB/Axle_Min_Max_Calculation/HeAXLR_b_UseMtrC4Front'
 * '<S161>' : 'AXLR_ac/AXLR_MedTEB/Axle_Min_Max_Calculation/KeAXLR_b_UsePhyBasedToMinMax'
 * '<S162>' : 'AXLR_ac/AXLR_MedTEB/Axle_Min_Max_Calculation/KeAXLR_k_TorqMinMax_LD'
 * '<S163>' : 'AXLR_ac/AXLR_MedTEB/Axle_Min_Max_Calculation/KeAXLR_k_TorqMinMax_LU'
 * '<S164>' : 'AXLR_ac/AXLR_MedTEB/Axle_Min_Max_Calculation/KtAXLR_r_FrntAxlQuadFctr'
 * '<S165>' : 'AXLR_ac/AXLR_MedTEB/Axle_Min_Max_Calculation/KtAXLR_r_RrAxlQuadFctr'
 * '<S166>' : 'AXLR_ac/AXLR_MedTEB/Axle_Min_Max_Calculation/SetBlock'
 * '<S167>' : 'AXLR_ac/AXLR_MedTEB/Axle_Min_Max_Calculation/SetBlock1'
 * '<S168>' : 'AXLR_ac/AXLR_MedTEB/Axle_Min_Max_Calculation/SetBlock2'
 * '<S169>' : 'AXLR_ac/AXLR_MedTEB/Axle_Min_Max_Calculation/SetBlock3'
 * '<S170>' : 'AXLR_ac/AXLR_MedTEB/Axle_Min_Max_Calculation/ToMinMax_Physical'
 * '<S171>' : 'AXLR_ac/AXLR_MedTEB/Axle_Min_Max_Calculation/Blend_ToMinMax_DID/GradientLimiter'
 * '<S172>' : 'AXLR_ac/AXLR_MedTEB/Axle_Min_Max_Calculation/Blend_ToMinMax_DID/GradientLimiter/Limiter'
 * '<S173>' : 'AXLR_ac/AXLR_MedTEB/Axle_Torque_Calculation/Dual_Axle'
 * '<S174>' : 'AXLR_ac/AXLR_MedTEB/Axle_Torque_Calculation/Single_Axle'
 * '<S175>' : 'AXLR_ac/AXLR_MedTEB/Axle_Torque_Calculation/Dual_Axle/KeAXLR_b_UseHTDR4RefAxlTrq'
 * '<S176>' : 'AXLR_ac/AXLR_MedTEB/Axle_Torque_Calculation/Dual_Axle/KeAXLR_b_UseTgtTrq4AxlTrqEst'
 * '<S177>' : 'AXLR_ac/AXLR_MedTEB/Axle_Torque_Calculation/Dual_Axle/SetBlock'
 * '<S178>' : 'AXLR_ac/AXLR_MedTEB/Axle_Torque_Calculation/Dual_Axle/SetBlock1'
 * '<S179>' : 'AXLR_ac/AXLR_MedTEB/Axle_Torque_Calculation/Dual_Axle/SetBlock2'
 * '<S180>' : 'AXLR_ac/AXLR_MedTEB/Axle_Torque_Calculation/Dual_Axle/SetBlock3'
 * '<S181>' : 'AXLR_ac/AXLR_MedTEB/Axle_Torque_Calculation/Single_Axle/SetBlock'
 * '<S182>' : 'AXLR_ac/AXLR_MedTEB/Axle_Torque_Calculation/Single_Axle/SetBlock1'
 * '<S183>' : 'AXLR_ac/AXLR_MedTEB/Axle_Torque_Calculation/Single_Axle/SetBlock2'
 * '<S184>' : 'AXLR_ac/AXLR_MedTEB/Axle_Torque_Calculation/Single_Axle/SetBlock3'
 * '<S185>' : 'AXLR_ac/AXLR_PUP/AXLR_ProcessOutputTorqInit'
 * '<S186>' : 'AXLR_ac/AXLR_PUP/AXLR_ProcessOutputTorqInit/KeAXLR_M_FrntAxlTrqEstOutInit'
 * '<S187>' : 'AXLR_ac/AXLR_PUP/AXLR_ProcessOutputTorqInit/KeAXLR_M_RrAxlTrqEstOutInit'
 * '<S188>' : 'AXLR_ac/AXLR_PUP/AXLR_ProcessOutputTorqInit/KeAXLR_M_SplitFrntTrqReqOutInit'
 * '<S189>' : 'AXLR_ac/AXLR_PUP/AXLR_ProcessOutputTorqInit/KeAXLR_M_SplitRrAxlTrqReqOutInit'
 * '<S190>' : 'AXLR_ac/AXLR_PUP/AXLR_ProcessOutputTorqInit/MReportModelInfo'
 */
#endif                                 /* RTW_HEADER_AXLR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
