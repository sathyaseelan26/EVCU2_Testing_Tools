/*
 * File: VSDR_ac.h
 *
 * Code generated for Simulink model 'VSDR_ac'.
 *
 * Model version                  : 9.51
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 20:04:48 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_VSDR_ac_h_
#define RTW_HEADER_VSDR_ac_h_
#include <math.h>
#include "Rte_Type.h"
#ifndef VSDR_ac_COMMON_INCLUDES_
#define VSDR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_VSDR.h"
#endif                                 /* VSDR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_VSDR_ac_T
{
    float32 OutportBufferForVeVSDR_n_PrimNo;/* '<S264>/Const1' */
    float32 OutportBufferForVeVSDR_n_StratN;/* '<S264>/Const4' */
    float32 OutportBufferForVeVSDR_dn_PrimN;/* '<S264>/Const6' */
    float32 OutportBufferForVeVSDR_n_NTurb_;/* '<S264>/Const7' */
    float32 OutportBufferForVeVSDR_n_Prim_c;/* '<S264>/Const8' */
    float32 OutportBufferForVeVSDR_dn_Strat;/* '<S264>/Const9' */
    float32 OutportBufferForVeVSDR_dn_NoDot;/* '<S264>/Const11' */
    float32 OutportBufferForVeVSDR_dn_NoD_b;/* '<S264>/Const12' */
    float32 OutportBufferForVeVSDR_n_NoForI;/* '<S264>/Const13' */
    float32 OutportBufferForVeVSDR_n_WEDLef;/* '<S264>/Const14' */
    float32 OutportBufferForVeVSDR_n_WEDRig;/* '<S264>/Const17' */
    float32 Multiplication2_m;         /* '<S73>/Multiplication2' */
    boolean OutportBufferForVeVSDR_b_PrimNo;/* '<S264>/Const3' */
    boolean OutportBufferForVeVSDR_b_StratN;/* '<S264>/Const5' */
    boolean OutportBufferForVeVSDR_b_WEDLef;/* '<S264>/Const16' */
    boolean OutportBufferForVeVSDR_b_WEDRig;/* '<S264>/Const19' */
    TeVSDR_e_WEDWheelSpdSrc OutportBufferForVeVSDR_e_WEDLef;/* '<S264>/Const15' */
    TeVSDR_e_WEDWheelSpdSrc OutportBufferForVeVSDR_e_WEDRig;/* '<S264>/Const18' */
    TeVSDR_e_PrimNoSource OutportBufferForVeVSDR_e_PrimNo;/* '<S264>/Const2' */
    TeVSDR_e_PrimNoSource VeVSDC_e_PrimNoSrc;/* '<S6>/Merge1' */
    TeVSDR_e_NturbSrc OutportBufferForVeVSDR_e_NTurbS;/* '<S264>/Const10' */
}
B_VSDR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_VSDR_ac_T
{
    float32 UnitDelay_DSTATE;          /* '<S134>/UnitDelay' */
    float32 UnitDelay1_DSTATE;         /* '<S134>/UnitDelay1' */
    float32 UnitDelay1_DSTATE_e;       /* '<S12>/UnitDelay1' */
    float32 UnitDelay_DSTATE_m;        /* '<S12>/UnitDelay' */
    float32 UnitDelay1_DSTATE_o;       /* '<S56>/UnitDelay1' */
    float32 UnitDelay2_DSTATE;         /* '<S6>/UnitDelay2' */
    float32 UnitDelay1_DSTATE_a;       /* '<S234>/UnitDelay1' */
    float32 UnitDelay_DSTATE_d;        /* '<S234>/UnitDelay' */
    float32 UnitDelay_DSTATE_b;        /* '<S221>/UnitDelay' */
    float32 UnitDelay_DSTATE_l;        /* '<S220>/UnitDelay' */
    float32 UnitDelay_DSTATE_lb;       /* '<S137>/UnitDelay' */
    float32 UnitDelay_DSTATE_g;        /* '<S155>/UnitDelay' */
    float32 UnitDelay1_DSTATE_ey;      /* '<S73>/Unit Delay1' */
    float32 UnitDelay_DSTATE_j;        /* '<S73>/Unit Delay' */
    float32 UnitDelay_DSTATE_p;        /* '<S72>/Unit Delay' */
    float32 UnitDelay_DSTATE_h;        /* '<S71>/Unit Delay' */
    float32 UnitDelay_DSTATE_l0;       /* '<S51>/Unit Delay' */
    float32 UnitDelay_DSTATE_hp;       /* '<S49>/UnitDelay' */
    float32 UnitDelay_DSTATE_a;        /* '<S13>/UnitDelay' */
    boolean UnitDelay_DSTATE_f;        /* '<S56>/UnitDelay' */
    boolean UnitDelay_DSTATE_b4;       /* '<S138>/UnitDelay' */
    boolean UnitDelay_DSTATE_a3;       /* '<S66>/Unit Delay' */
    TeTRGR_e_TransRangeState UnitDelay1_DSTATE_eb;/* '<S189>/UnitDelay1' */
}
DW_VSDR_ac_T;

/* Invariant block signals (default storage) */
typedef struct
{
    const TeVSDR_e_WEDWheelSpdSrc Const15;/* '<S264>/Const15' */
    const TeVSDR_e_WEDWheelSpdSrc Const18;/* '<S264>/Const18' */
    const TeVSDR_e_PrimNoSource Const2;/* '<S264>/Const2' */
    const TeVSDR_e_NturbSrc Const10;   /* '<S264>/Const10' */
}
ConstB_VSDR_ac_T;

/* Constant parameters (default storage) */
typedef struct
{
    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S167>/Vector'
     *   '<S171>/Vector'
     */
    uint32 pooled7[2];
}
ConstP_VSDR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_VSDR
#include "MemMap.h"

extern VAR(B_VSDR_ac_T, VSDR_VAR_INIT) VSDR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_VSDR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_VSDR
#include "MemMap.h"

extern VAR(DW_VSDR_ac_T, VSDR_VAR_INIT) VSDR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_VSDR
#include "MemMap.h"
#define START_SEC_CONST_UNSPECIFIED_VSDR
#include "MemMap.h"

extern CONST(ConstB_VSDR_ac_T, VSDR_VAR_INIT) VSDR_ac_ConstB;/* constant block i/o */

#define STOP_SEC_CONST_UNSPECIFIED_VSDR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_VSDR
#include "MemMap.h"

extern CONST(ConstP_VSDR_ac_T, VSDR_VAR_INIT) VSDR_ac_ConstP;

#define STOP_SEC_CONST_UNSPECIFIED_VSDR
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
 * '<Root>' : 'VSDR_ac'
 * '<S1>'   : 'VSDR_ac/VSDR_FastTEF'
 * '<S2>'   : 'VSDR_ac/VSDR_PwrOn'
 * '<S3>'   : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds'
 * '<S4>'   : 'VSDR_ac/VSDR_FastTEF/VSDO_Outputs'
 * '<S5>'   : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalNoStrategic'
 * '<S6>'   : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo'
 * '<S7>'   : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/Calc_WhlRPM'
 * '<S8>'   : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/DocBlock'
 * '<S9>'   : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess'
 * '<S10>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NoDotForInertComp'
 * '<S11>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalNoStrategic/CalcNoStrategic'
 * '<S12>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalNoStrategic/Derivative_filtered_WithLimit'
 * '<S13>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalNoStrategic/DigitalLowpassResetEnabled'
 * '<S14>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalNoStrategic/HeVSDR_t_FastTEF_dT'
 * '<S15>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalNoStrategic/KeVSDR_K_StratNoGain'
 * '<S16>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalNoStrategic/KeVSDR_t_StratNoTimePeriod'
 * '<S17>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalNoStrategic/KtVSDR_dn_StratNodotLimit'
 * '<S18>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalNoStrategic/Strat_OutSpd_Arb'
 * '<S19>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalNoStrategic/CalcNoStrategic/Default'
 * '<S20>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalNoStrategic/CalcNoStrategic/EnumeratedValue'
 * '<S21>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalNoStrategic/CalcNoStrategic/EnumeratedValue2'
 * '<S22>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalNoStrategic/CalcNoStrategic/KaVSDR_e_StratNoSrcPriority'
 * '<S23>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalNoStrategic/CalcNoStrategic/KeVSDR_b_EnableTcaseFrStratNo'
 * '<S24>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalNoStrategic/CalcNoStrategic/SrcPrioritization'
 * '<S25>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalNoStrategic/CalcNoStrategic/UsingMtrB'
 * '<S26>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalNoStrategic/CalcNoStrategic/UsingPrimAxle'
 * '<S27>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalNoStrategic/CalcNoStrategic/UsingPrimNo'
 * '<S28>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalNoStrategic/CalcNoStrategic/UsingTOSSnsr'
 * '<S29>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalNoStrategic/CalcNoStrategic/Default/EnumeratedValue'
 * '<S30>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalNoStrategic/CalcNoStrategic/Default/KeVSDR_n_DefaultStratNo'
 * '<S31>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalNoStrategic/CalcNoStrategic/UsingMtrB/EnumeratedValue'
 * '<S32>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalNoStrategic/CalcNoStrategic/UsingMtrB/KeVSDR_Cf_CnvrtMtrBSpdToStratNo'
 * '<S33>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalNoStrategic/CalcNoStrategic/UsingPrimAxle/EnumeratedValue'
 * '<S34>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalNoStrategic/CalcNoStrategic/UsingPrimAxle/IfThenElse'
 * '<S35>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalNoStrategic/CalcNoStrategic/UsingPrimAxle/KeVSDR_Cf_CnvrtPrimWhlSpdToStratNo'
 * '<S36>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalNoStrategic/CalcNoStrategic/UsingPrimAxle/KeVSDR_b_UseFDRForPrimWhlSpdToStratNo'
 * '<S37>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalNoStrategic/CalcNoStrategic/UsingPrimNo/EnumeratedValue'
 * '<S38>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalNoStrategic/CalcNoStrategic/UsingPrimNo/KeVSDR_Cf_PrimNoToStratNo'
 * '<S39>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalNoStrategic/CalcNoStrategic/UsingTOSSnsr/EnumeratedValue'
 * '<S40>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalNoStrategic/CalcNoStrategic/UsingTOSSnsr/IfThenElse'
 * '<S41>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalNoStrategic/CalcNoStrategic/UsingTOSSnsr/KeVSDR_Cf_CnvrtTOSSensorSpdToStratNo'
 * '<S42>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalNoStrategic/CalcNoStrategic/UsingTOSSnsr/KeVSDR_b_UseFDRForTossToStratNo'
 * '<S43>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalNoStrategic/CalcNoStrategic/UsingTOSSnsr/ProtectedDivision'
 * '<S44>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalNoStrategic/Derivative_filtered_WithLimit/Limiter'
 * '<S45>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalNoStrategic/Strat_OutSpd_Arb/KeVSDR_b_UseStratNo_Raw'
 * '<S46>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalNoStrategic/Strat_OutSpd_Arb/KtVSDR_n_RefSpd_NoOffset'
 * '<S47>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalNoStrategic/Strat_OutSpd_Arb/Limiter'
 * '<S48>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/Default'
 * '<S49>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/DigitalLowpassResetEnabled'
 * '<S50>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/DocBlock'
 * '<S51>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/GradientLimiter'
 * '<S52>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/KaVSDR_e_PrimNoSrcPriority'
 * '<S53>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/KeVSDR_K_PrimNoGain'
 * '<S54>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/KeVSDR_dn_NoDot_LD'
 * '<S55>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/KeVSDR_dn_NoDot_LU'
 * '<S56>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/NoDot_Reset_Timeout_Arb'
 * '<S57>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/NoDot_triggered_Arb'
 * '<S58>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/SrcPrioritization'
 * '<S59>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/UsingFrntAxlSpd'
 * '<S60>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/UsingNturb'
 * '<S61>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/UsingRearAxlSpd'
 * '<S62>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/UsingTOSSnsr'
 * '<S63>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/Default/EnumeratedValue'
 * '<S64>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/Default/KeVSDR_n_DefaultPrimNo'
 * '<S65>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/GradientLimiter/Limiter'
 * '<S66>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/NoDot_Reset_Timeout_Arb/EdgeRising'
 * '<S67>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/NoDot_Reset_Timeout_Arb/HeVSDR_t_FastTEF_dT'
 * '<S68>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/NoDot_Reset_Timeout_Arb/KeVSDR_t_NoDotTimeout'
 * '<S69>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/NoDot_Reset_Timeout_Arb/KeVSDR_t_PrimNoDefSampTime'
 * '<S70>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/NoDot_Reset_Timeout_Arb/KeVSDR_t_PrimNoTimePeriod'
 * '<S71>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/NoDot_Reset_Timeout_Arb/StopWatchResetEnabled'
 * '<S72>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/NoDot_Reset_Timeout_Arb/StopWatchResetEnabled1'
 * '<S73>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/NoDot_triggered_Arb/Derivative_filtered'
 * '<S74>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/UsingFrntAxlSpd/EnumeratedConstant10'
 * '<S75>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/UsingFrntAxlSpd/EnumeratedConstant11'
 * '<S76>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/UsingFrntAxlSpd/EnumeratedConstant12'
 * '<S77>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/UsingFrntAxlSpd/EnumeratedConstant9'
 * '<S78>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/UsingFrntAxlSpd/EnumeratedValue4'
 * '<S79>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/UsingFrntAxlSpd/SpeedFromMtrA'
 * '<S80>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/UsingFrntAxlSpd/SpeedFromMtrB'
 * '<S81>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/UsingFrntAxlSpd/SpeedFromPrimWhls'
 * '<S82>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/UsingFrntAxlSpd/SpeedFromTOSS'
 * '<S83>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/UsingFrntAxlSpd/SpeedFromMtrA/EnumeratedValue'
 * '<S84>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/UsingFrntAxlSpd/SpeedFromMtrB/EnumeratedValue'
 * '<S85>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/UsingFrntAxlSpd/SpeedFromPrimWhls/EnumeratedValue'
 * '<S86>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/UsingFrntAxlSpd/SpeedFromTOSS/EnumeratedValue'
 * '<S87>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/UsingNturb/EnumeratedValue'
 * '<S88>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/UsingNturb/KeVSDR_Cf_CnvrtNturbToPrimTSXRNo'
 * '<S89>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/UsingRearAxlSpd/EnumeratedConstant19'
 * '<S90>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/UsingRearAxlSpd/EnumeratedConstant20'
 * '<S91>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/UsingRearAxlSpd/KeVSDR_Cf_CnvrtRearAxlSpdToPrimTSXRNo'
 * '<S92>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/UsingRearAxlSpd/SpeedFromMtrB'
 * '<S93>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/UsingRearAxlSpd/SpeedFromSecWhls'
 * '<S94>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/UsingRearAxlSpd/SpeedFromMtrB/EnumeratedValue'
 * '<S95>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/UsingRearAxlSpd/SpeedFromSecWhls/EnumeratedValue'
 * '<S96>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/UsingTOSSnsr/EnumeratedValue'
 * '<S97>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/UsingTOSSnsr/IfThenElse'
 * '<S98>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/UsingTOSSnsr/KeVSDR_Cf_CnvrtTOSSensorSpdToPrimNo'
 * '<S99>'  : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/UsingTOSSnsr/KeVSDR_b_UseFDRForTossToPrimNo'
 * '<S100>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/UsingTOSSnsr/ProtectedDivision'
 * '<S101>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/Calc_WhlRPM/Default'
 * '<S102>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/Calc_WhlRPM/Default1'
 * '<S103>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/Calc_WhlRPM/DocBlock'
 * '<S104>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/Calc_WhlRPM/EnumSetBlock'
 * '<S105>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/Calc_WhlRPM/EnumSetBlock1'
 * '<S106>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/Calc_WhlRPM/EnumeratedValue1'
 * '<S107>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/Calc_WhlRPM/EnumeratedValue2'
 * '<S108>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/Calc_WhlRPM/EnumeratedValue3'
 * '<S109>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/Calc_WhlRPM/EnumeratedValue4'
 * '<S110>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/Calc_WhlRPM/FrontWheelSpeed'
 * '<S111>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/Calc_WhlRPM/FrontWheelSpeed1'
 * '<S112>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/Calc_WhlRPM/KaVSDR_e_WEDWhlSpdSrcPriority'
 * '<S113>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/Calc_WhlRPM/RearWheelSpeed'
 * '<S114>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/Calc_WhlRPM/RearWheelSpeed1'
 * '<S115>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/Calc_WhlRPM/SrcPrioritization'
 * '<S116>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/Calc_WhlRPM/SrcPrioritization1'
 * '<S117>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/Calc_WhlRPM/Default/EnumeratedValue'
 * '<S118>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/Calc_WhlRPM/Default/KeVSDR_n_WhlSpd_Dflt'
 * '<S119>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/Calc_WhlRPM/Default1/EnumeratedValue'
 * '<S120>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/Calc_WhlRPM/Default1/KeVSDR_n_WhlSpd_Dflt'
 * '<S121>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/Calc_WhlRPM/FrontWheelSpeed/EnumeratedValue'
 * '<S122>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/Calc_WhlRPM/FrontWheelSpeed/EnumeratedValue1'
 * '<S123>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/Calc_WhlRPM/FrontWheelSpeed/IfThenElse'
 * '<S124>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/Calc_WhlRPM/FrontWheelSpeed1/EnumeratedValue'
 * '<S125>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/Calc_WhlRPM/FrontWheelSpeed1/EnumeratedValue1'
 * '<S126>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/Calc_WhlRPM/FrontWheelSpeed1/IfThenElse'
 * '<S127>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/Calc_WhlRPM/RearWheelSpeed/EnumeratedValue'
 * '<S128>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/Calc_WhlRPM/RearWheelSpeed/EnumeratedValue3'
 * '<S129>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/Calc_WhlRPM/RearWheelSpeed/IfThenElse'
 * '<S130>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/Calc_WhlRPM/RearWheelSpeed1/EnumeratedValue'
 * '<S131>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/Calc_WhlRPM/RearWheelSpeed1/EnumeratedValue3'
 * '<S132>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/Calc_WhlRPM/RearWheelSpeed1/IfThenElse'
 * '<S133>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/DocBlock'
 * '<S134>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc'
 * '<S135>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/VSDR_Prof_Slct'
 * '<S136>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/Calc_Signd_Nturb'
 * '<S137>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/DigitalLowpassResetEnabled'
 * '<S138>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/EdgeRising'
 * '<S139>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/EnumeratedValue'
 * '<S140>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/Enumerated_Constant'
 * '<S141>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/IfActionSubsystem'
 * '<S142>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/IfActionSubsystem1'
 * '<S143>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/IfActionSubsystem2'
 * '<S144>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/IfActionSubsystem3'
 * '<S145>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/IfActionSubsystem4'
 * '<S146>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/IfActionSubsystem5'
 * '<S147>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/IfActionSubsystem6'
 * '<S148>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/IfActionSubsystem7'
 * '<S149>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/KeVSDR_b_BypassTurbShapng'
 * '<S150>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/KeVSDR_b_UseSignedTurbineSpd'
 * '<S151>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/KeVSDR_k_UseFiltThresh'
 * '<S152>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/KeVSDR_t_Nturb_setToZero_EngOff'
 * '<S153>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/KeVSDR_t_Nturb_setToZero_EngOn'
 * '<S154>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/Calc_Signd_Nturb/Enumerated_Constant'
 * '<S155>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/Calc_Signd_Nturb/GradientLimiter'
 * '<S156>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/Calc_Signd_Nturb/KeVSDR_Cnt_NturbSignGrad_BlendIn'
 * '<S157>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/Calc_Signd_Nturb/KeVSDR_Cnt_NturbSignGrad_BlendOut'
 * '<S158>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/Calc_Signd_Nturb/KnownTosDirection'
 * '<S159>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/Calc_Signd_Nturb/UnkownTosDirection'
 * '<S160>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/Calc_Signd_Nturb/GradientLimiter/Limiter'
 * '<S161>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/Calc_Signd_Nturb/KnownTosDirection/EnumeratedValue1'
 * '<S162>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/Calc_Signd_Nturb/KnownTosDirection/EnumeratedValue2'
 * '<S163>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/Calc_Signd_Nturb/KnownTosDirection/Enumerated_Constant'
 * '<S164>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/Calc_Signd_Nturb/KnownTosDirection/IfThenElse'
 * '<S165>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/Calc_Signd_Nturb/KnownTosDirection/IfThenElse1'
 * '<S166>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/IfActionSubsystem/Enumerated_Constant'
 * '<S167>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/IfActionSubsystem/KtVSDR_k_FiltCoeff_NTurb0'
 * '<S168>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/IfActionSubsystem/SetBlock1'
 * '<S169>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/IfActionSubsystem/SetBlock2'
 * '<S170>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/IfActionSubsystem1/Enumerated_Constant'
 * '<S171>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/IfActionSubsystem1/KtVSDR_k_FiltCoeff'
 * '<S172>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/IfActionSubsystem1/SetBlock'
 * '<S173>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/IfActionSubsystem1/SetBlock1'
 * '<S174>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/IfActionSubsystem2/Enumerated_Constant'
 * '<S175>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/IfActionSubsystem2/KeVSDR_k_mCoeff_NturbFromNo'
 * '<S176>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/IfActionSubsystem2/SetBlock'
 * '<S177>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/IfActionSubsystem3/Enumerated_Constant'
 * '<S178>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/IfActionSubsystem3/KeVSDR_k_mCoeff_UseNturb'
 * '<S179>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/IfActionSubsystem3/SetBlock'
 * '<S180>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/IfActionSubsystem4/Enumerated_Constant'
 * '<S181>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/IfActionSubsystem4/KaTSXR_r_TCMGearRatios'
 * '<S182>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/IfActionSubsystem4/KeVSDR_b_UseSignedTurbineSpd'
 * '<S183>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/IfActionSubsystem4/KeVSDR_k_mCoeff_NturbFromNo'
 * '<S184>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/IfActionSubsystem4/SetBlock'
 * '<S185>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/IfActionSubsystem5/Enumerated_Constant'
 * '<S186>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/IfActionSubsystem5/KeVSDR_k_mCoeff_UseNturb'
 * '<S187>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/IfActionSubsystem5/SetBlock'
 * '<S188>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/Nturb_Proc/IfActionSubsystem5/SetBlock1'
 * '<S189>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/VSDR_Prof_Slct/Det_PRNDLState'
 * '<S190>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/VSDR_Prof_Slct/Det_TCMState'
 * '<S191>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/VSDR_Prof_Slct/Subsystem'
 * '<S192>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/VSDR_Prof_Slct/Det_PRNDLState/ConstantValue12'
 * '<S193>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/VSDR_Prof_Slct/Det_PRNDLState/ConstantValue3'
 * '<S194>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/VSDR_Prof_Slct/Det_PRNDLState/ConstantValue5'
 * '<S195>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/VSDR_Prof_Slct/Det_PRNDLState/ConstantValue6'
 * '<S196>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/VSDR_Prof_Slct/Det_TCMState/EnumeratedValue14'
 * '<S197>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/VSDR_Prof_Slct/Det_TCMState/EnumeratedValue15'
 * '<S198>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/VSDR_Prof_Slct/Det_TCMState/EnumeratedValue16'
 * '<S199>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/VSDR_Prof_Slct/Det_TCMState/EnumeratedValue17'
 * '<S200>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/VSDR_Prof_Slct/Det_TCMState/EnumeratedValue18'
 * '<S201>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/VSDR_Prof_Slct/Det_TCMState/EnumeratedValue19'
 * '<S202>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/VSDR_Prof_Slct/Det_TCMState/EnumeratedValue20'
 * '<S203>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/VSDR_Prof_Slct/Det_TCMState/EnumeratedValue21'
 * '<S204>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/VSDR_Prof_Slct/Det_TCMState/EnumeratedValue22'
 * '<S205>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/VSDR_Prof_Slct/Det_TCMState/EnumeratedValue23'
 * '<S206>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/VSDR_Prof_Slct/Det_TCMState/EnumeratedValue24'
 * '<S207>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/VSDR_Prof_Slct/Det_TCMState/EnumeratedValue25'
 * '<S208>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/VSDR_Prof_Slct/Det_TCMState/EnumeratedValue26'
 * '<S209>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/VSDR_Prof_Slct/Det_TCMState/EnumeratedValue27'
 * '<S210>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/VSDR_Prof_Slct/Det_TCMState/EnumeratedValue28'
 * '<S211>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/VSDR_Prof_Slct/Det_TCMState/EnumeratedValue29'
 * '<S212>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/VSDR_Prof_Slct/Det_TCMState/EnumeratedValue30'
 * '<S213>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/VSDR_Prof_Slct/Det_TCMState/EnumeratedValue31'
 * '<S214>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/VSDR_Prof_Slct/Det_TCMState/EnumeratedValue32'
 * '<S215>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/VSDR_Prof_Slct/Det_TCMState/EnumeratedValue33'
 * '<S216>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/VSDR_Prof_Slct/Det_TCMState/EnumeratedValue34'
 * '<S217>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/VSDR_Prof_Slct/Det_TCMState/EnumeratedValue35'
 * '<S218>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/VSDR_Prof_Slct/Det_TCMState/EnumeratedValue36'
 * '<S219>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/VSDR_Prof_Slct/Det_TCMState/EnumeratedValue37'
 * '<S220>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/VSDR_Prof_Slct/Subsystem/AccumulatorResetEnabledLimited'
 * '<S221>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/VSDR_Prof_Slct/Subsystem/AccumulatorResetEnabledLimited1'
 * '<S222>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/VSDR_Prof_Slct/Subsystem/ConstantValue1'
 * '<S223>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/VSDR_Prof_Slct/Subsystem/ConstantValue2'
 * '<S224>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/VSDR_Prof_Slct/Subsystem/HeVSDR_t_FastTEF_dT'
 * '<S225>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/VSDR_Prof_Slct/Subsystem/KeVSDR_V_MinVehSpdThresh'
 * '<S226>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/VSDR_Prof_Slct/Subsystem/KeVSDR_b_UseAdditionalCase'
 * '<S227>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/VSDR_Prof_Slct/Subsystem/KeVSDR_n_MaxNturbThresh'
 * '<S228>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/VSDR_Prof_Slct/Subsystem/KeVSDR_t_ClkRst_MaxTime'
 * '<S229>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/VSDR_Prof_Slct/Subsystem/SetBlock'
 * '<S230>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/VSDR_Prof_Slct/Subsystem/SetBlock1'
 * '<S231>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/VSDR_Prof_Slct/Subsystem/AccumulatorResetEnabledLimited/Limiter'
 * '<S232>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NTurb_PreProcess/VSDR_Prof_Slct/Subsystem/AccumulatorResetEnabledLimited1/Limiter'
 * '<S233>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NoDotForInertComp/Default'
 * '<S234>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NoDotForInertComp/Derivative_filtered'
 * '<S235>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NoDotForInertComp/DocBlock'
 * '<S236>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NoDotForInertComp/HeVSDR_t_FastTEF_dT'
 * '<S237>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NoDotForInertComp/KaVSDR_e_NodotForInertCompSrcPriority'
 * '<S238>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NoDotForInertComp/KtVSDR_t_NoForInertCompTimePeriod'
 * '<S239>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NoDotForInertComp/SrcPrioritization'
 * '<S240>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NoDotForInertComp/UsingPrimNo'
 * '<S241>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NoDotForInertComp/UsingTransNo'
 * '<S242>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NoDotForInertComp/Default/EnumeratedValue'
 * '<S243>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NoDotForInertComp/UsingPrimNo/EnumeratedValue'
 * '<S244>' : 'VSDR_ac/VSDR_FastTEF/MngVSDR_CalcSpeeds/NoDotForInertComp/UsingTransNo/EnumeratedValue'
 * '<S245>' : 'VSDR_ac/VSDR_FastTEF/VSDO_Outputs/BooleanSetBlock'
 * '<S246>' : 'VSDR_ac/VSDR_FastTEF/VSDO_Outputs/BooleanSetBlock1'
 * '<S247>' : 'VSDR_ac/VSDR_FastTEF/VSDO_Outputs/BooleanSetBlock2'
 * '<S248>' : 'VSDR_ac/VSDR_FastTEF/VSDO_Outputs/BooleanSetBlock3'
 * '<S249>' : 'VSDR_ac/VSDR_FastTEF/VSDO_Outputs/EnumSetBlock1'
 * '<S250>' : 'VSDR_ac/VSDR_FastTEF/VSDO_Outputs/EnumSetBlock2'
 * '<S251>' : 'VSDR_ac/VSDR_FastTEF/VSDO_Outputs/EnumSetBlock3'
 * '<S252>' : 'VSDR_ac/VSDR_FastTEF/VSDO_Outputs/EnumSetBlock5'
 * '<S253>' : 'VSDR_ac/VSDR_FastTEF/VSDO_Outputs/SetBlock1'
 * '<S254>' : 'VSDR_ac/VSDR_FastTEF/VSDO_Outputs/SetBlock2'
 * '<S255>' : 'VSDR_ac/VSDR_FastTEF/VSDO_Outputs/SetBlock20'
 * '<S256>' : 'VSDR_ac/VSDR_FastTEF/VSDO_Outputs/SetBlock24'
 * '<S257>' : 'VSDR_ac/VSDR_FastTEF/VSDO_Outputs/SetBlock26'
 * '<S258>' : 'VSDR_ac/VSDR_FastTEF/VSDO_Outputs/SetBlock3'
 * '<S259>' : 'VSDR_ac/VSDR_FastTEF/VSDO_Outputs/SetBlock35'
 * '<S260>' : 'VSDR_ac/VSDR_FastTEF/VSDO_Outputs/SetBlock4'
 * '<S261>' : 'VSDR_ac/VSDR_FastTEF/VSDO_Outputs/SetBlock6'
 * '<S262>' : 'VSDR_ac/VSDR_FastTEF/VSDO_Outputs/SetBlock8'
 * '<S263>' : 'VSDR_ac/VSDR_FastTEF/VSDO_Outputs/SetBlock9'
 * '<S264>' : 'VSDR_ac/VSDR_PwrOn/Sub_Out_Init'
 */
#endif                                 /* RTW_HEADER_VSDR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
