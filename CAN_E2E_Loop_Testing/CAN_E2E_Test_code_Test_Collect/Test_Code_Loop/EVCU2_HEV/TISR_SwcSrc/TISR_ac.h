/*
 * File: TISR_ac.h
 *
 * Code generated for Simulink model 'TISR_ac'.
 *
 * Model version                  : 9.82
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 19:42:54 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_TISR_ac_h_
#define RTW_HEADER_TISR_ac_h_
#include <math.h>
#include "Rte_Type.h"
#ifndef TISR_ac_COMMON_INCLUDES_
#define TISR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_TISR.h"
#endif                                 /* TISR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_TISR_ac_T
{
    float32 OutportBufferForVeTISR_n_TransMinInputSp;/* '<S223>/Const4' */
    float32 OutportBufferForRawSnsdOutput_Init;/* '<S222>/Constant Value' */
    float32 OutportBufferForLe_TISR_n_DirectionSign_;
                                   /* '<S222>/KeTISR_n_DirectionSign_InitVal' */
    float32 OutportBufferForLeTISR_phi_TransInAng720;
                              /* '<S222>/KeTISR_phi_TransInAng720Est_InitVal' */
    float32 OutportBufferForVeTISR_n_TransMinInput_h;
                                    /* '<S222>/KeTISR_n_DfltTransMinInputSpd' */
    float32 OutportBufferForVeTISR_n_TransMinInput_j;
                                /* '<S222>/KeTISR_n_DfltTransMinInputSpdPHEV' */
    float32 TmpSignalConversionAtVeESPR_n_EngineSpee;
    float32 TmpSignalConversionAtVeESPR_n_EngineSp_n;
    float32 TmpSignalConversionAtVeTISR_n_InputSpdSn;
    float32 TmpSignalConversionAtVeTISR_n_DirectionS;
    float32 VariantMerge_For_Variant_Source_VS1;
    float32 VariantMerge_For_Variant_Source_VS2;
    float32 VariantMerge_For_Variant_Source_VS5;
    float32 VariantMerge_For_Variant_Source_VS6;
    boolean OutportBufferForVeTISR_b_InputSpdRatlFlt;/* '<S223>/Const1' */
    boolean OutportBufferForVeTISR_b_IUMPR_P0C2FFail;/* '<S223>/Const3' */
    boolean OutportBufferForSnsrInputSpdRawFA;
                                      /* '<S222>/KeTISR_b_NiSensorFA_InitVal' */
    boolean OutportBufferForLeTISR_b_TransInAng720Es;
                             /* '<S222>/KeTISR_b_TransInAng720EstErr_InitVal' */
    boolean TmpSignalConversionAtVeESPR_b_CrnkSnsrFA;
    boolean TmpSignalConversionAtVeESPR_b_EngineSpee;
    boolean TmpSignalConversionAtVeTISR_b_SnsrInputS;
    boolean VariantMerge_For_Variant_Source_VS3;
    boolean VariantMerge_For_Variant_Source_VS4;
    boolean VariantMergeForOutportVeTISR_b_InputSpdR;
    TeTISR_e_InpSpdDfltSource OutportBufferForVeTISR_e_InpSpdSource_Ou;/* '<S223>/Const2' */
    TeTISR_e_InpSpdDfltSource Merge5;  /* '<S121>/Merge5' */
    TeMSPR_e_MotorSpeedSrc VariantMerge_For_Variant_Source_VS7;
    TeMSPR_e_MotorSpeedSrc VariantMerge_For_Variant_Source_VS8;
    TeHSER_e_SteadyStates TmpSignalConversionAtVeHSER_e_HTDR_State;
    TeDFIB_e_FaultDebounceStatus OutportBufferForVeTISR_e_FaultSts_CM_DM_;/* '<S223>/Const' */
    TeDFIB_e_FaultDebounceStatus VariantMergeForOutportVeTISR_e_FaultSts_;
}
B_TISR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_TISR_ac_T
{

#if Rte_SysCon_Variant_TISR_1

    float32 UnitDelay_DSTATE;          /* '<S94>/Unit Delay' */

#define DW_TISR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TISR_1

    float32 UnitDelay_DSTATE_k;        /* '<S85>/Unit Delay' */

#define DW_TISR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TISR_1

    float32 UnitDelay_DSTATE_f;        /* '<S76>/Unit Delay' */

#define DW_TISR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TISR_1

    float32 UnitDelay_DSTATE_j;        /* '<S67>/Unit Delay' */

#define DW_TISR_AC_T_VARIANT_EXISTS
#endif

    float32 UnitDelay_DSTATE_h;        /* '<S156>/Unit Delay' */
    float32 UnitDelay1_DSTATE;         /* '<S156>/Unit Delay1' */
    float32 UnitDelay1_DSTATE_o;       /* '<S170>/Unit Delay1' */
    float32 UnitDelay_DSTATE_f2;       /* '<S170>/Unit Delay' */
    float32 UnitDelay_DSTATE_hc;       /* '<S126>/Unit Delay' */
    float32 UnitDelay_DSTATE_jq;       /* '<S125>/Unit Delay' */

#if Rte_SysCon_Variant_TISR_1

    uint16 UnitDelay_DSTATE_b;         /* '<S100>/Unit Delay' */

#define DW_TISR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TISR_1

    uint16 UnitDelay_DSTATE_b1;        /* '<S91>/Unit Delay' */

#define DW_TISR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TISR_1

    uint16 UnitDelay_DSTATE_g;         /* '<S82>/Unit Delay' */

#define DW_TISR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TISR_1

    uint16 UnitDelay_DSTATE_h1;        /* '<S73>/Unit Delay' */

#define DW_TISR_AC_T_VARIANT_EXISTS
#endif

    uint16 NeTISD_Cnt_SpdRatlFlt_MFOP;
                                   /* '<Root>/DSM_NeTISD_Cnt_SpdRatlFlt_MFOP' */

#if Rte_SysCon_Variant_TISR_1

    boolean UnitDelay_DSTATE_l;        /* '<S102>/Unit Delay' */

#define DW_TISR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TISR_1

    boolean UnitDelay1_DSTATE_a;       /* '<S102>/Unit Delay1' */

#define DW_TISR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TISR_1

    boolean UnitDelay_DSTATE_o;        /* '<S103>/Unit Delay' */

#define DW_TISR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TISR_1

    boolean UnitDelay_DSTATE_kw;       /* '<S101>/Unit Delay' */

#define DW_TISR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TISR_1

    boolean UnitDelay_DSTATE_n;        /* '<S92>/Unit Delay' */

#define DW_TISR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TISR_1

    boolean UnitDelay_DSTATE_fe;       /* '<S83>/Unit Delay' */

#define DW_TISR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TISR_1

    boolean UnitDelay_DSTATE_e;        /* '<S74>/Unit Delay' */

#define DW_TISR_AC_T_VARIANT_EXISTS
#endif

    boolean UnitDelay_DSTATE_i;        /* '<S169>/Unit Delay' */
}
DW_TISR_ac_T;

/* Invariant block signals (default storage) */
typedef struct
{
    const TeTISR_e_InpSpdDfltSource Const2;/* '<S223>/Const2' */
    const TeDFIB_e_FaultDebounceStatus Constant;/* '<S231>/Constant' */
}
ConstB_TISR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TISR
#include "MemMap.h"

extern VAR(B_TISR_ac_T, TISR_VAR_INIT) TISR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TISR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TISR
#include "MemMap.h"

extern VAR(DW_TISR_ac_T, TISR_VAR_INIT) TISR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TISR
#include "MemMap.h"
#define START_SEC_CONST_UNSPECIFIED_TISR
#include "MemMap.h"

extern CONST(ConstB_TISR_ac_T, TISR_VAR_INIT) TISR_ac_ConstB;/* constant block i/o */

#define STOP_SEC_CONST_UNSPECIFIED_TISR
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
 * '<Root>' : 'TISR_ac'
 * '<S1>'   : 'TISR_ac/FsftTISR_n_TransMinInputSpd'
 * '<S2>'   : 'TISR_ac/FsftTISR_n_TransMinInputSpdPHEV'
 * '<S3>'   : 'TISR_ac/PokeTISR_n_DirectionSign'
 * '<S4>'   : 'TISR_ac/PokeTISR_n_InputSpdSnsdRaw'
 * '<S5>'   : 'TISR_ac/PokeTISR_n_TransMinInputSpd'
 * '<S6>'   : 'TISR_ac/PokeTISR_n_TransMinInputSpdPHEV'
 * '<S7>'   : 'TISR_ac/PokeTISR_phi_TransInAng720Est'
 * '<S8>'   : 'TISR_ac/TISR_FastTEF'
 * '<S9>'   : 'TISR_ac/TISR_PwrOff'
 * '<S10>'  : 'TISR_ac/TISR_PwrOn'
 * '<S11>'  : 'TISR_ac/FsftTISR_n_TransMinInputSpd/FsftTISR_n_TransMinInputSpdChrt'
 * '<S12>'  : 'TISR_ac/FsftTISR_n_TransMinInputSpdPHEV/FsftTISR_n_TransMinInputSpdPHEVChrt'
 * '<S13>'  : 'TISR_ac/PokeTISR_n_DirectionSign/PokeTISR_n_DirectionSignChrt'
 * '<S14>'  : 'TISR_ac/PokeTISR_n_InputSpdSnsdRaw/PokeTISR_n_InputSpdSnsdRawChrt'
 * '<S15>'  : 'TISR_ac/PokeTISR_n_TransMinInputSpd/PokeTISR_n_TransMinInputSpdChrt'
 * '<S16>'  : 'TISR_ac/PokeTISR_n_TransMinInputSpdPHEV/PokeTISR_n_TransMinInputSpdPHEVChrt'
 * '<S17>'  : 'TISR_ac/PokeTISR_phi_TransInAng720Est/PokeTISR_phi_TransInAng720EstChrt'
 * '<S18>'  : 'TISR_ac/TISR_FastTEF/Process_Output'
 * '<S19>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality'
 * '<S20>'  : 'TISR_ac/TISR_FastTEF/TISC_InSpd'
 * '<S21>'  : 'TISR_ac/TISR_FastTEF/TISI_PreProcessing'
 * '<S22>'  : 'TISR_ac/TISR_FastTEF/Process_Output/Boolean Set Block'
 * '<S23>'  : 'TISR_ac/TISR_FastTEF/Process_Output/Set Block'
 * '<S24>'  : 'TISR_ac/TISR_FastTEF/Process_Output/Set Block1'
 * '<S25>'  : 'TISR_ac/TISR_FastTEF/Process_Output/Set Block2'
 * '<S26>'  : 'TISR_ac/TISR_FastTEF/Process_Output/Set Block3'
 * '<S27>'  : 'TISR_ac/TISR_FastTEF/Process_Output/Set Block4'
 * '<S28>'  : 'TISR_ac/TISR_FastTEF/Process_Output/Set Block5'
 * '<S29>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/KeTISD_b_CANEngSpdOvrdEnbl'
 * '<S30>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/KeTISD_b_EngSpdBfCkFAOvrdEnbl'
 * '<S31>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/KeTISD_b_EngSpdBfCkFAOvrdVal'
 * '<S32>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/KeTISD_b_EngSpdBfCkOvrdEnbl'
 * '<S33>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/KeTISD_b_EngSpdCANFAOvrdEnbl'
 * '<S34>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/KeTISD_b_EngSpdCANFAOvrdVal'
 * '<S35>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/KeTISD_b_EngSpdMSPRFAOvrdEnbl'
 * '<S36>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/KeTISD_b_EngSpdMSPRFAOvrdVal'
 * '<S37>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/KeTISD_b_EngSpdMSPROvrdEnbl'
 * '<S38>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/KeTISD_b_EngSpdSensorFAOvrdEnbl'
 * '<S39>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/KeTISD_b_EngSpdSensorFAOvrdVal'
 * '<S40>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/KeTISD_b_EngSpdSensorOvrdEnbl'
 * '<S41>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/KeTISD_b_TransInSpdOvrdEnbl'
 * '<S42>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/KeTISD_n_CANEngSpdOvrdVal'
 * '<S43>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/KeTISD_n_EngSpdBfCkOvrdVal'
 * '<S44>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/KeTISD_n_EngSpdMSPROvrdVal'
 * '<S45>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/KeTISD_n_EngSpdSensorOvrdVal'
 * '<S46>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/KeTISD_n_TransInSpdOvrdVal'
 * '<S47>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/MReport Model Info'
 * '<S48>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/ResetCounts_FOMs'
 * '<S49>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck'
 * '<S50>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck'
 * '<S51>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheckStub'
 * '<S52>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/Disable at CAN Spd Loss or  Deceleration'
 * '<S53>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/Disable at MSPR Spd Loss or  Deceleration'
 * '<S54>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/Disable at SPI Spd Loss or  Deceleration '
 * '<S55>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/Disable at Sensor Spd Loss or  Deceleration'
 * '<S56>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/KeTISD_Cnt_NumOfEngSpdSources'
 * '<S57>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/KeTISD_Cnt_SpdRatlFlt_FailCnt'
 * '<S58>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/KeTISD_Cnt_SpdRatlFlt_SmpCnt'
 * '<S59>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/KeTISD_b_SpdRatlFlt_LtchEnbl'
 * '<S60>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/KeTISD_n_AboveSwtchOvrTolerance'
 * '<S61>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/KeTISD_n_BelowSwtchOvrTolerance'
 * '<S62>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/KeTISD_n_HiLoSwtchOver'
 * '<S63>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/KeTISD_n_TransInSpdMin'
 * '<S64>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/MReport Model Info'
 * '<S65>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/XofY_v2'
 * '<S66>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/Disable at CAN Spd Loss or  Deceleration/ClosedInterval'
 * '<S67>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/Disable at CAN Spd Loss or  Deceleration/DeltaOneStep1'
 * '<S68>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/Disable at CAN Spd Loss or  Deceleration/KeTISD_Cnt_DrpoutSgnlDly_CAN'
 * '<S69>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/Disable at CAN Spd Loss or  Deceleration/KeTISD_n_SpdRatlDsblHigh_CAN'
 * '<S70>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/Disable at CAN Spd Loss or  Deceleration/KeTISD_n_SpdRatlDsblLow_CAN'
 * '<S71>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/Disable at CAN Spd Loss or  Deceleration/KeTISD_n_SpdRatlDsblNiDecl_CAN'
 * '<S72>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/Disable at CAN Spd Loss or  Deceleration/MReport Model Info'
 * '<S73>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/Disable at CAN Spd Loss or  Deceleration/Turn Off Delay Sample1'
 * '<S74>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/Disable at CAN Spd Loss or  Deceleration/Turn Off Delay Sample1/EdgeFalling1'
 * '<S75>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/Disable at MSPR Spd Loss or  Deceleration/ClosedInterval'
 * '<S76>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/Disable at MSPR Spd Loss or  Deceleration/DeltaOneStep'
 * '<S77>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/Disable at MSPR Spd Loss or  Deceleration/KeTISD_Cnt_DrpoutSgnlDly_Mtr'
 * '<S78>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/Disable at MSPR Spd Loss or  Deceleration/KeTISD_n_SpdRatlDsblHigh_Mtr'
 * '<S79>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/Disable at MSPR Spd Loss or  Deceleration/KeTISD_n_SpdRatlDsblLow_Mtr'
 * '<S80>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/Disable at MSPR Spd Loss or  Deceleration/KeTISD_n_SpdRatlDsblNiDecl_Mtr'
 * '<S81>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/Disable at MSPR Spd Loss or  Deceleration/MReport Model Info'
 * '<S82>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/Disable at MSPR Spd Loss or  Deceleration/Turn Off Delay Sample'
 * '<S83>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/Disable at MSPR Spd Loss or  Deceleration/Turn Off Delay Sample/EdgeFalling1'
 * '<S84>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/Disable at SPI Spd Loss or  Deceleration /ClosedInterval'
 * '<S85>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/Disable at SPI Spd Loss or  Deceleration /DeltaOneStep'
 * '<S86>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/Disable at SPI Spd Loss or  Deceleration /KeTISD_Cnt_DrpoutSgnlDly_BfCk'
 * '<S87>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/Disable at SPI Spd Loss or  Deceleration /KeTISD_n_SpdRatlDsblHigh_BfCk'
 * '<S88>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/Disable at SPI Spd Loss or  Deceleration /KeTISD_n_SpdRatlDsblLow_BfCk'
 * '<S89>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/Disable at SPI Spd Loss or  Deceleration /KeTISD_n_SpdRatlDsblNiDecl_BfCk'
 * '<S90>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/Disable at SPI Spd Loss or  Deceleration /MReport Model Info'
 * '<S91>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/Disable at SPI Spd Loss or  Deceleration /Turn Off Delay Sample'
 * '<S92>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/Disable at SPI Spd Loss or  Deceleration /Turn Off Delay Sample/EdgeFalling1'
 * '<S93>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/Disable at Sensor Spd Loss or  Deceleration/ClosedInterval'
 * '<S94>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/Disable at Sensor Spd Loss or  Deceleration/DeltaOneStep'
 * '<S95>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/Disable at Sensor Spd Loss or  Deceleration/KeTISD_Cnt_DrpoutSgnlDly_Snsr'
 * '<S96>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/Disable at Sensor Spd Loss or  Deceleration/KeTISD_n_SpdRatlDsblHigh_Snsr'
 * '<S97>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/Disable at Sensor Spd Loss or  Deceleration/KeTISD_n_SpdRatlDsblLow_Snsr'
 * '<S98>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/Disable at Sensor Spd Loss or  Deceleration/KeTISD_n_SpdRatlDsblNiDecl_Snsr'
 * '<S99>'  : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/Disable at Sensor Spd Loss or  Deceleration/MReport Model Info'
 * '<S100>' : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/Disable at Sensor Spd Loss or  Deceleration/Turn Off Delay Sample'
 * '<S101>' : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/Disable at Sensor Spd Loss or  Deceleration/Turn Off Delay Sample/EdgeFalling1'
 * '<S102>' : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/XofY_v2/BaseXofY'
 * '<S103>' : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/XofY_v2/EdgeFalling1'
 * '<S104>' : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/XofY_v2/Enumerated Constant16'
 * '<S105>' : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/XofY_v2/Fail'
 * '<S106>' : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/XofY_v2/Init'
 * '<S107>' : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/XofY_v2/Pass'
 * '<S108>' : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/XofY_v2/UpdateMFOP'
 * '<S109>' : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/XofY_v2/BaseXofY/Counter Reset  Enabled '
 * '<S110>' : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/XofY_v2/BaseXofY/Counter Reset  Enabled 1'
 * '<S111>' : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/XofY_v2/Fail/Enumerated Constant16'
 * '<S112>' : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/XofY_v2/Init/Enumerated Constant16'
 * '<S113>' : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/XofY_v2/Pass/Enumerated Constant16'
 * '<S114>' : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/XofY_v2/UpdateMFOP/Max Fails on Pass FOM'
 * '<S115>' : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheck/XofY_v2/UpdateMFOP/ResetLogic'
 * '<S116>' : 'TISR_ac/TISR_FastTEF/Speed Rationality/SpeedRationalityCheck/SpeedRationalityCheckStub/Enumerated Constant16'
 * '<S117>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/MReport Model Info'
 * '<S118>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd'
 * '<S119>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/DocBlock'
 * '<S120>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/MReport Model Info'
 * '<S121>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_DetermineInputSpeed'
 * '<S122>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_NiFromSensor'
 * '<S123>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_NifromMSPR'
 * '<S124>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISI_RationalityChk'
 * '<S125>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_DetermineInputSpeed/Digital Lowpass Reset Enabled'
 * '<S126>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_DetermineInputSpeed/Digital Lowpass Reset Enabled1'
 * '<S127>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_DetermineInputSpeed/If Action Subsystem1'
 * '<S128>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_DetermineInputSpeed/If Action Subsystem2'
 * '<S129>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_DetermineInputSpeed/If Action Subsystem3'
 * '<S130>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_DetermineInputSpeed/If Action Subsystem4'
 * '<S131>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_DetermineInputSpeed/If Action Subsystem6'
 * '<S132>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_DetermineInputSpeed/KaTISR_e_InputSpeedSrcPriority'
 * '<S133>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_DetermineInputSpeed/KeTISR_K_InputAccelFilterConst'
 * '<S134>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_DetermineInputSpeed/KeTISR_K_InputSpeedFilterConst'
 * '<S135>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_DetermineInputSpeed/Set Block'
 * '<S136>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_DetermineInputSpeed/Set Block1'
 * '<S137>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_DetermineInputSpeed/Set Block2'
 * '<S138>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_DetermineInputSpeed/SourcePrioritization'
 * '<S139>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_DetermineInputSpeed/If Action Subsystem1/Enumerated Value'
 * '<S140>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_DetermineInputSpeed/If Action Subsystem1/KeTISR_dn_DefaultInputAccel'
 * '<S141>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_DetermineInputSpeed/If Action Subsystem1/KeTISR_n_DefaultInputSpeed'
 * '<S142>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_DetermineInputSpeed/If Action Subsystem1/Set Block'
 * '<S143>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_DetermineInputSpeed/If Action Subsystem1/Set Block1'
 * '<S144>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_DetermineInputSpeed/If Action Subsystem2/Enumerated Value'
 * '<S145>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_DetermineInputSpeed/If Action Subsystem2/Set Block'
 * '<S146>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_DetermineInputSpeed/If Action Subsystem2/Set Block1'
 * '<S147>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_DetermineInputSpeed/If Action Subsystem3/Enumerated Value1'
 * '<S148>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_DetermineInputSpeed/If Action Subsystem3/Set Block'
 * '<S149>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_DetermineInputSpeed/If Action Subsystem3/Set Block1'
 * '<S150>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_DetermineInputSpeed/If Action Subsystem4/Enumerated Value2'
 * '<S151>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_DetermineInputSpeed/If Action Subsystem4/Set Block'
 * '<S152>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_DetermineInputSpeed/If Action Subsystem4/Set Block1'
 * '<S153>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_DetermineInputSpeed/If Action Subsystem6/Enumerated Value3'
 * '<S154>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_DetermineInputSpeed/If Action Subsystem6/Set Block'
 * '<S155>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_DetermineInputSpeed/If Action Subsystem6/Set Block1'
 * '<S156>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_NiFromSensor/DetrTISRDirection'
 * '<S157>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_NiFromSensor/Initialization_of_Direction'
 * '<S158>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_NiFromSensor/RationalDotLimit'
 * '<S159>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_NiFromSensor/Set Block3'
 * '<S160>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_NiFromSensor/DetrTISRDirection/If Action Subsystem'
 * '<S161>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_NiFromSensor/DetrTISRDirection/If Action Subsystem1'
 * '<S162>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_NiFromSensor/DetrTISRDirection/KeTISR_n_DirSwtchMaxSpeed'
 * '<S163>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_NiFromSensor/DetrTISRDirection/KeTISR_t_DirRampTime'
 * '<S164>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_NiFromSensor/DetrTISRDirection/KeTISR_t_dT'
 * '<S165>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_NiFromSensor/DetrTISRDirection/Ramp'
 * '<S166>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_NiFromSensor/DetrTISRDirection/Ramp/Limiter1'
 * '<S167>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_NiFromSensor/DetrTISRDirection/Ramp/Limiter2'
 * '<S168>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_NiFromSensor/DetrTISRDirection/Ramp/Protected Division'
 * '<S169>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_NiFromSensor/Initialization_of_Direction/EdgeRising'
 * '<S170>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_NiFromSensor/RationalDotLimit/Derivative_filtered'
 * '<S171>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_NiFromSensor/RationalDotLimit/KeTISR_dn_NiDotMaxSensLim'
 * '<S172>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_NiFromSensor/RationalDotLimit/KeTISR_dn_NiDotMinSensLim'
 * '<S173>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_NiFromSensor/RationalDotLimit/KeTISR_t_NiDotSnsrTimePeriod'
 * '<S174>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_NiFromSensor/RationalDotLimit/KeTISR_t_dT'
 * '<S175>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_NiFromSensor/RationalDotLimit/Limiter'
 * '<S176>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_NifromMSPR/Constant Value3'
 * '<S177>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_NifromMSPR/Constant Value5'
 * '<S178>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_NifromMSPR/If Action Subsystem'
 * '<S179>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_NifromMSPR/If Action Subsystem1'
 * '<S180>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_NifromMSPR/If Action Subsystem2'
 * '<S181>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_NifromMSPR/If Action Subsystem5'
 * '<S182>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_NifromMSPR/KeTISR_b_NiAlwaysConnectedToMotor'
 * '<S183>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_NifromMSPR/If Action Subsystem/Enumerated Value2'
 * '<S184>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_NifromMSPR/If Action Subsystem/Enumerated Value3'
 * '<S185>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_NifromMSPR/If Action Subsystem/IfThenElse'
 * '<S186>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_NifromMSPR/If Action Subsystem/IfThenElse1'
 * '<S187>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_NifromMSPR/If Action Subsystem/KeTISR_r_M2_NiFromNa_NCnDep'
 * '<S188>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_NifromMSPR/If Action Subsystem/KeTISR_r_M2_NiFromNb_NCnDep'
 * '<S189>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_NifromMSPR/If Action Subsystem1/Enumerated Value2'
 * '<S190>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_NifromMSPR/If Action Subsystem1/Enumerated Value3'
 * '<S191>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_NifromMSPR/If Action Subsystem1/IfThenElse'
 * '<S192>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_NifromMSPR/If Action Subsystem1/IfThenElse1'
 * '<S193>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_NifromMSPR/If Action Subsystem1/KeTISR_r_M1_NiFromNa_NCnDep'
 * '<S194>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_NifromMSPR/If Action Subsystem1/KeTISR_r_M1_NiFromNb_NCnDep'
 * '<S195>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_NifromMSPR/If Action Subsystem2/Enumerated Value2'
 * '<S196>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_NifromMSPR/If Action Subsystem2/Enumerated Value3'
 * '<S197>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_NifromMSPR/If Action Subsystem2/IfThenElse'
 * '<S198>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_NifromMSPR/If Action Subsystem2/IfThenElse1'
 * '<S199>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_NifromMSPR/If Action Subsystem2/KeTISR_r_All_NiFromNa_NCnDep'
 * '<S200>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_NifromMSPR/If Action Subsystem2/KeTISR_r_All_NiFromNb_NCnDep'
 * '<S201>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_NifromMSPR/If Action Subsystem5/KeTISR_dn_DefaultNiDotfromMSPR'
 * '<S202>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_NifromMSPR/If Action Subsystem5/KeTISR_n_DefaultNifromMSPR'
 * '<S203>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISI_RationalityChk/If Action Subsystem'
 * '<S204>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISI_RationalityChk/If Action Subsystem1'
 * '<S205>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISI_RationalityChk/If Action Subsystem2'
 * '<S206>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISI_RationalityChk/If Action Subsystem3'
 * '<S207>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISI_RationalityChk/KeTISR_n_MinDelt4NiMax'
 * '<S208>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISI_RationalityChk/KeTISR_n_MinDelt4NiMin'
 * '<S209>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISI_RationalityChk/KeTISR_scl_NiMaxScaleDelt'
 * '<S210>' : 'TISR_ac/TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISI_RationalityChk/KeTISR_scl_NiMinScaleDelt'
 * '<S211>' : 'TISR_ac/TISR_FastTEF/TISI_PreProcessing/AllProg'
 * '<S212>' : 'TISR_ac/TISR_FastTEF/TISI_PreProcessing/Peg'
 * '<S213>' : 'TISR_ac/TISR_FastTEF/TISI_PreProcessing/TISI_SCA1_Ovrd'
 * '<S214>' : 'TISR_ac/TISR_FastTEF/TISI_PreProcessing/TISI_SCA1_Ovrd/KeTISR_b_UseTransMinInputSpdPHEV'
 * '<S215>' : 'TISR_ac/TISR_FastTEF/TISI_PreProcessing/TISI_SCA1_Ovrd/KeTISR_k_TransMinInputSpdGain'
 * '<S216>' : 'TISR_ac/TISR_FastTEF/TISI_PreProcessing/TISI_SCA1_Ovrd/KeTISR_n_TransMinInputSpdMaxLim'
 * '<S217>' : 'TISR_ac/TISR_FastTEF/TISI_PreProcessing/TISI_SCA1_Ovrd/KeTISR_n_TransMinInputSpdMinLim'
 * '<S218>' : 'TISR_ac/TISR_FastTEF/TISI_PreProcessing/TISI_SCA1_Ovrd/KeTISR_n_TransMinInputSpdOffset1'
 * '<S219>' : 'TISR_ac/TISR_FastTEF/TISI_PreProcessing/TISI_SCA1_Ovrd/KeTISR_n_TransMinInputSpdOffset2'
 * '<S220>' : 'TISR_ac/TISR_FastTEF/TISI_PreProcessing/TISI_SCA1_Ovrd/Limiter'
 * '<S221>' : 'TISR_ac/TISR_PwrOn/DSM_Init'
 * '<S222>' : 'TISR_ac/TISR_PwrOn/InitTISIOutput'
 * '<S223>' : 'TISR_ac/TISR_PwrOn/Sub_Out_Init'
 * '<S224>' : 'TISR_ac/TISR_PwrOn/TISC_InitInSpd'
 * '<S225>' : 'TISR_ac/TISR_PwrOn/InitTISIOutput/KeTISR_b_NiSensorFA_InitVal'
 * '<S226>' : 'TISR_ac/TISR_PwrOn/InitTISIOutput/KeTISR_b_TransInAng720EstErr_InitVal'
 * '<S227>' : 'TISR_ac/TISR_PwrOn/InitTISIOutput/KeTISR_n_DfltTransMinInputSpd'
 * '<S228>' : 'TISR_ac/TISR_PwrOn/InitTISIOutput/KeTISR_n_DfltTransMinInputSpdPHEV'
 * '<S229>' : 'TISR_ac/TISR_PwrOn/InitTISIOutput/KeTISR_n_DirectionSign_InitVal'
 * '<S230>' : 'TISR_ac/TISR_PwrOn/InitTISIOutput/KeTISR_phi_TransInAng720Est_InitVal'
 * '<S231>' : 'TISR_ac/TISR_PwrOn/Sub_Out_Init/Const'
 * '<S232>' : 'TISR_ac/TISR_PwrOn/TISC_InitInSpd/Boolean Set Block'
 * '<S233>' : 'TISR_ac/TISR_PwrOn/TISC_InitInSpd/Boolean Set Block1'
 * '<S234>' : 'TISR_ac/TISR_PwrOn/TISC_InitInSpd/Set Block'
 * '<S235>' : 'TISR_ac/TISR_PwrOn/TISC_InitInSpd/Set Block1'
 * '<S236>' : 'TISR_ac/TISR_PwrOn/TISC_InitInSpd/Set Block2'
 * '<S237>' : 'TISR_ac/TISR_PwrOn/TISC_InitInSpd/Set Block3'
 */
#endif                                 /* RTW_HEADER_TISR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
