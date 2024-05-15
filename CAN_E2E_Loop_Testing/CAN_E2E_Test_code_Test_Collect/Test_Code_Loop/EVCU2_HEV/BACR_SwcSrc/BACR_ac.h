/*
 * File: BACR_ac.h
 *
 * Code generated for Simulink model 'BACR_ac'.
 *
 * Model version                  : 9.140
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:08:11 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_BACR_ac_h_
#define RTW_HEADER_BACR_ac_h_
#include <math.h>
#include "Rte_Type.h"
#ifndef BACR_ac_COMMON_INCLUDES_
#define BACR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_BACR.h"
#endif                                 /* BACR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block states (default storage) for system '<S39>/Default' */
typedef struct
{
    boolean UnitDelay_DSTATE;          /* '<S88>/Unit Delay' */
    boolean UnitDelay_DSTATE_a;        /* '<S87>/Unit Delay' */
}
DW_Default_BACR_ac_T;

/* Block signals (default storage) */
typedef struct tag_B_BACR_ac_T
{
    float32 OutportBufferForVeBACR_r_ElecPwrTorq_Ped;/* '<S344>/Constant Value1' */
    float32 Merge1[2];                 /* '<S20>/Merge1' */
    float32 Merge2[2];                 /* '<S20>/Merge2' */
    float32 Merge3[2];                 /* '<S20>/Merge3' */
    boolean OutportBufferForHybridEVType_init;/* '<S344>/KeBACR_b_HEVSt_Supported' */
    boolean OutportBufferForHybridEVType;/* '<S6>/KeBACR_b_HEVSt_Supported' */
    boolean Comparison2;               /* '<S199>/Comparison2' */
}
B_BACR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_BACR_ac_T
{
    float32 UnitDelay1_DSTATE;         /* '<S270>/Unit Delay1' */
    float32 UnitDelay2_DSTATE;         /* '<S270>/Unit Delay2' */
    float32 UnitDelay6_DSTATE;         /* '<S270>/Unit Delay6' */
    float32 UnitDelay_DSTATE[3];       /* '<S299>/Unit Delay' */
    float32 UnitDelay_DSTATE_m;        /* '<S272>/Unit Delay' */
    float32 UnitDelay_DSTATE_a;        /* '<S242>/Unit Delay' */
    float32 UnitDelay_DSTATE_i;        /* '<S21>/Unit Delay' */
    float32 UnitDelay3_DSTATE;         /* '<S199>/Unit Delay3' */
    float32 UnitDelay_DSTATE_l;        /* '<S199>/Unit Delay' */
    float32 UnitDelay3_DSTATE_a;       /* '<S66>/Unit Delay3' */
    float32 UnitDelay_DSTATE_d;        /* '<S66>/Unit Delay' */
    float32 UnitDelay_DSTATE_b[2];     /* '<S50>/Unit Delay' */
    float32 UnitDelay_DSTATE_h[2];     /* '<S110>/Unit Delay' */
    float32 UnitDelay3_DSTATE_aa;      /* '<S110>/Unit Delay3' */
    float32 UnitDelay_DSTATE_l2;       /* '<S71>/Unit Delay' */
    float32 UnitDelay3_DSTATE_h;       /* '<S181>/Unit Delay3' */
    float32 UnitDelay_DSTATE_o;        /* '<S181>/Unit Delay' */
    float32 UnitDelay3_DSTATE_p;       /* '<S143>/Unit Delay3' */
    float32 UnitDelay_DSTATE_p;        /* '<S143>/Unit Delay' */
    float32 UnitDelay_DSTATE_af;       /* '<S134>/Unit Delay' */
    float32 UnitDelay1_DSTATE_d;       /* '<S134>/Unit Delay1' */
    float32 UnitDelay2_DSTATE_p;       /* '<S134>/Unit Delay2' */
    float32 UnitDelay_DSTATE_la;       /* '<S155>/Unit Delay' */
    float32 UnitDelay_DSTATE_c;        /* '<S154>/Unit Delay' */
    float32 UnitDelay_DSTATE_n;        /* '<S153>/Unit Delay' */

#if Rte_SysCon_Variant_BACR_OilDilutionPshiftEnbl

    float32 UnitDelay_DSTATE_op;       /* '<S25>/Unit Delay' */

#define DW_BACR_AC_T_VARIANT_EXISTS
#endif

    float32 UnitDelay_DSTATE_my;       /* '<S303>/Unit Delay' */
    float32 NeBACR_t_EngRunTimeInPlant;/* '<Root>/DSM_1' */
    sint16 UnitDelay1_DSTATE_a;        /* '<S20>/Unit Delay1' */
    uint16 UnitDelay_DSTATE_k;         /* '<S250>/Unit Delay' */
    uint8 UnitDelay_DSTATE_dm;         /* '<S220>/Unit Delay' */
    boolean UnitDelay1_DSTATE_dp;      /* '<S8>/Unit Delay1' */
    boolean UnitDelay_DSTATE_d5;       /* '<S286>/Unit Delay' */
    boolean UnitDelay_DSTATE_cs;       /* '<S252>/Unit Delay' */
    boolean UnitDelay_DSTATE_bg;       /* '<S251>/Unit Delay' */
    boolean UnitDelay_DSTATE_f;        /* '<S240>/Unit Delay' */
    boolean UnitDelay_DSTATE_cp;       /* '<S224>/Unit Delay' */
    boolean UnitDelay_DSTATE_a2;       /* '<S248>/Unit Delay' */
    boolean UnitDelay_DSTATE_a2l;      /* '<S247>/Unit Delay' */
    boolean UnitDelay_DSTATE_bu;       /* '<S246>/Unit Delay' */
    boolean UnitDelay_DSTATE_nh;       /* '<S219>/Unit Delay' */
    boolean UnitDelay_DSTATE_g;        /* '<S218>/Unit Delay' */
    boolean UnitDelay1_DSTATE_o;       /* '<S199>/Unit Delay1' */
    boolean UnitDelay_DSTATE_lb;       /* '<S191>/Unit Delay' */
    boolean UnitDelay_DSTATE_ai;       /* '<S190>/Unit Delay' */
    boolean UnitDelay1_DSTATE_f;       /* '<S66>/Unit Delay1' */
    boolean UnitDelay1_DSTATE_ac;      /* '<S110>/Unit Delay1' */
    boolean UnitDelay_DSTATE_ek;       /* '<S117>/Unit Delay' */
    boolean UnitDelay_DSTATE_j;        /* '<S111>/Unit Delay' */
    boolean UnitDelay_DSTATE_oa;       /* '<S42>/Unit Delay' */
    boolean UnitDelay_DSTATE_gn;       /* '<S41>/Unit Delay' */
    boolean UnitDelay1_DSTATE_k;       /* '<S181>/Unit Delay1' */
    boolean UnitDelay1_DSTATE_l;       /* '<S143>/Unit Delay1' */
    boolean UnitDelay_DSTATE_hc;       /* '<S156>/Unit Delay' */
    sint8 If_ActiveSubsystem;          /* '<S20>/If' */
    sint8 If_ActiveSubsystem_c;        /* '<S21>/If' */
    boolean NeBACR_b_ChargeDepleting;  /* '<Root>/DSM_2' */
    DW_Default_BACR_ac_T Default1;     /* '<S39>/Default1' */
    DW_Default_BACR_ac_T Default;      /* '<S39>/Default' */
}
DW_BACR_ac_T;

/* Constant parameters (default storage) */
typedef struct
{
    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S284>/Vector'
     *   '<S93>/Vector'
     *   '<S94>/Vector'
     *   '<S101>/Vector'
     *   '<S102>/Vector'
     *   '<S103>/Vector'
     *   '<S104>/Vector'
     *   '<S105>/Vector'
     */
    uint32 pooled8[2];

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S60>/Vector'
     *   '<S61>/Vector'
     *   '<S62>/Vector'
     *   '<S63>/Vector'
     */
    uint32 pooled9[2];

    /* Computed Parameter: Vector_maxIndex
     * Referenced by: '<S47>/Vector'
     */
    uint32 Vector_maxIndex[2];

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S48>/Vector'
     *   '<S131>/Vector'
     *   '<S170>/Vector'
     */
    uint32 pooled10[2];

    /* Computed Parameter: Vector_maxIndex_k
     * Referenced by: '<S75>/Vector'
     */
    uint32 Vector_maxIndex_k[2];

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S130>/Vector'
     *   '<S169>/Vector'
     *   '<S74>/Vector'
     */
    uint32 pooled11[2];

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S259>/Vector'
     *   '<S260>/Vector'
     */
    uint32 pooled12[2];

    /* Computed Parameter: Vector_maxIndex_b
     * Referenced by: '<S300>/Vector'
     */
    uint32 Vector_maxIndex_b[2];

    /* Computed Parameter: Vector_maxIndex_f
     * Referenced by: '<S285>/Vector'
     */
    uint32 Vector_maxIndex_f[2];
}
ConstP_BACR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_BACR
#include "MemMap.h"

extern VAR(B_BACR_ac_T, BACR_VAR_INIT) BACR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_BACR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_BACR
#include "MemMap.h"

extern VAR(DW_BACR_ac_T, BACR_VAR_INIT) BACR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_BACR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_BACR
#include "MemMap.h"

extern CONST(ConstP_BACR_ac_T, BACR_VAR_INIT) BACR_ac_ConstP;

#define STOP_SEC_CONST_UNSPECIFIED_BACR
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
 * '<Root>' : 'BACR_ac'
 * '<S1>'   : 'BACR_ac/BACR_MedTED'
 * '<S2>'   : 'BACR_ac/BACR_PwrOff'
 * '<S3>'   : 'BACR_ac/BACR_PwrOn'
 * '<S4>'   : 'BACR_ac/BACR_MedTED/BACC_Controls'
 * '<S5>'   : 'BACR_ac/BACR_MedTED/BACI_Input_Processing'
 * '<S6>'   : 'BACR_ac/BACR_MedTED/BACO_Output_Processing'
 * '<S7>'   : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift'
 * '<S8>'   : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Charge_Sustaining'
 * '<S9>'   : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Electric_Power_PedalFactor'
 * '<S10>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Target_SOC_Arbitration'
 * '<S11>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/DocBlock'
 * '<S12>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/IdlePshift'
 * '<S13>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/LimitBattPwrshift'
 * '<S14>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/Model Info1'
 * '<S15>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/PowerShiftRL'
 * '<S16>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/DocBlock'
 * '<S17>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/OilDilution_PshiftMinLim'
 * '<S18>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Set Block1'
 * '<S19>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Set Block2'
 * '<S20>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem'
 * '<S21>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/TopOfCharge_PowerShift'
 * '<S22>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/OilDilution_PshiftMinLim/Bypass'
 * '<S23>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/OilDilution_PshiftMinLim/Enable'
 * '<S24>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/OilDilution_PshiftMinLim/Bypass/Set Block'
 * '<S25>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/OilDilution_PshiftMinLim/Enable/Digital Lowpass Reset Enabled'
 * '<S26>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/OilDilution_PshiftMinLim/Enable/KeBACR_b_OilDilnMinEngPwrReq_Enbl'
 * '<S27>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/OilDilution_PshiftMinLim/Enable/KeBACR_k_OilDilnMinEngPwr_FiltCoef'
 * '<S28>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE'
 * '<S29>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/Enumerated Constant1'
 * '<S30>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/Enumerated Constant2'
 * '<S31>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/Enumerated Constant3'
 * '<S32>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/PARK_NEUTRAL'
 * '<S33>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/Reverse'
 * '<S34>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/ArbDrvCostFactors'
 * '<S35>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/ArbDrvPShift'
 * '<S36>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/BACC_NiTo_Based_PowerShift'
 * '<S37>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/BACC_NoPoBasedOffset_SOCLimits'
 * '<S38>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/BACC_TargetSOC_Drive'
 * '<S39>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/BACC_dSOC_Po_Based_PowerShift'
 * '<S40>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/DocBlock'
 * '<S41>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/Hysteresis'
 * '<S42>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/Hysteresis1'
 * '<S43>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/InPlant_PshiftArb'
 * '<S44>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/KeBACR_n_PshiftDCloadOffstDr_No_LSP'
 * '<S45>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/KeBACR_n_PshiftDCloadOffstDr_No_RSP'
 * '<S46>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/KtBACR_P_AHH_SOCBsd_PShftOffset'
 * '<S47>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/KtBACR_P_NoPoBased_PwrShft_Offset'
 * '<S48>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/KtBACR_P_PwrShftOffst_DCloadBsd_Dr'
 * '<S49>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/KtBACR_r_DCLoad_PShftFctr'
 * '<S50>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/RaceStart_PowerShift'
 * '<S51>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/RaceStart_SOCCostFactor'
 * '<S52>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/SCALAR_BLK'
 * '<S53>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/SCALAR_BLK2'
 * '<S54>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/Set Block1'
 * '<S55>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/Set Block2'
 * '<S56>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/Set Block3'
 * '<S57>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/Square'
 * '<S58>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/ArbDrvCostFactors/ArbNegCostFact'
 * '<S59>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/ArbDrvCostFactors/ArbPosCostFact'
 * '<S60>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/ArbDrvCostFactors/KtBACR_r_CostFactSOC_Neg_Drive_Po'
 * '<S61>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/ArbDrvCostFactors/KtBACR_r_CostFactSOC_Neg_Drive_Stgc'
 * '<S62>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/ArbDrvCostFactors/KtBACR_r_CostFactSOC_Pos_Drive_Po'
 * '<S63>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/ArbDrvCostFactors/KtBACR_r_CostFactSOC_Pos_Drive_Stgc'
 * '<S64>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/ArbDrvCostFactors/ArbNegCostFact/KeBACR_r_AddlCostFactNegT_NiTiTrnstn'
 * '<S65>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/ArbDrvCostFactors/ArbPosCostFact/KeBACR_r_AddlCostFactPosT_NiTiTrnstn'
 * '<S66>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/ArbDrvPShift/Blend_x_yTerm_TimeBased'
 * '<S67>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/ArbDrvPShift/HeBACR_t_dT'
 * '<S68>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/ArbDrvPShift/KeBACR_t_OptPbatPshftBlndTm'
 * '<S69>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/ArbDrvPShift/KeOPTR_r_NiTiFctrMin'
 * '<S70>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/ArbDrvPShift/Blend_x_yTerm_TimeBased/Protected Division'
 * '<S71>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/BACC_NiTo_Based_PowerShift/GradientLimiter'
 * '<S72>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/BACC_NiTo_Based_PowerShift/KeBACR_r_NoTiBsd_TranstnLD'
 * '<S73>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/BACC_NiTo_Based_PowerShift/KeBACR_r_NoTiBsd_TranstnLU'
 * '<S74>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/BACC_NiTo_Based_PowerShift/KtBACR_P_CWU_PBatShift_Drive'
 * '<S75>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/BACC_NiTo_Based_PowerShift/KtBACR_P_NiToBsd_PBatShift_Drive'
 * '<S76>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/BACC_NiTo_Based_PowerShift/GradientLimiter/Limiter'
 * '<S77>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/BACC_NoPoBasedOffset_SOCLimits/KeBACR_Pct_NoPoBsdOffset_SOCMax'
 * '<S78>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/BACC_NoPoBasedOffset_SOCLimits/KeBACR_Pct_NoPoBsdOffset_SOCMin'
 * '<S79>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/BACC_TargetSOC_Drive/DocBlock'
 * '<S80>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/BACC_TargetSOC_Drive/KtBACR_Pct_TargetSOC_Drv_PoBsd'
 * '<S81>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/BACC_dSOC_Po_Based_PowerShift/Default'
 * '<S82>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/BACC_dSOC_Po_Based_PowerShift/Default1'
 * '<S83>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/BACC_dSOC_Po_Based_PowerShift/Idx1'
 * '<S84>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/BACC_dSOC_Po_Based_PowerShift/Idx2'
 * '<S85>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/BACC_dSOC_Po_Based_PowerShift/Idx3'
 * '<S86>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/BACC_dSOC_Po_Based_PowerShift/KaBACR_i_TrrnDrvMdPshftStratSel'
 * '<S87>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/BACC_dSOC_Po_Based_PowerShift/Default/Hysteresis'
 * '<S88>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/BACC_dSOC_Po_Based_PowerShift/Default/Hysteresis1'
 * '<S89>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/BACC_dSOC_Po_Based_PowerShift/Default/KeBACR_T_BattTempMax_4PwrShift_LSP'
 * '<S90>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/BACC_dSOC_Po_Based_PowerShift/Default/KeBACR_T_BattTempMax_4PwrShift_RSP'
 * '<S91>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/BACC_dSOC_Po_Based_PowerShift/Default/KeBACR_T_BattTempMin_4PwrShift_LSP'
 * '<S92>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/BACC_dSOC_Po_Based_PowerShift/Default/KeBACR_T_BattTempMin_4PwrShift_RSP'
 * '<S93>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/BACC_dSOC_Po_Based_PowerShift/Default/KtBACR_P_CostFactSOC_PBatShift_Drive_LoHiTBatt'
 * '<S94>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/BACC_dSOC_Po_Based_PowerShift/Default/KtBACR_P_CostFactSOC_PBatShift_Drive_Po'
 * '<S95>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/BACC_dSOC_Po_Based_PowerShift/Default1/Hysteresis'
 * '<S96>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/BACC_dSOC_Po_Based_PowerShift/Default1/Hysteresis1'
 * '<S97>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/BACC_dSOC_Po_Based_PowerShift/Default1/KeBACR_T_BattTempMax_4PwrShift_LSP'
 * '<S98>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/BACC_dSOC_Po_Based_PowerShift/Default1/KeBACR_T_BattTempMax_4PwrShift_RSP'
 * '<S99>'  : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/BACC_dSOC_Po_Based_PowerShift/Default1/KeBACR_T_BattTempMin_4PwrShift_LSP'
 * '<S100>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/BACC_dSOC_Po_Based_PowerShift/Default1/KeBACR_T_BattTempMin_4PwrShift_RSP'
 * '<S101>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/BACC_dSOC_Po_Based_PowerShift/Default1/KtBACR_P_CostFactSOC_PBatShift_Drive_LoHiTBatt'
 * '<S102>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/BACC_dSOC_Po_Based_PowerShift/Default1/KtBACR_P_CostFactSOC_PBatShift_Drive_Po'
 * '<S103>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/BACC_dSOC_Po_Based_PowerShift/Idx1/KtBACR_P_CostFactSOC_PBatShift_Drive_Po'
 * '<S104>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/BACC_dSOC_Po_Based_PowerShift/Idx2/KtBACR_P_CostFactSOC_PBatShift_Drive_Po2'
 * '<S105>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/BACC_dSOC_Po_Based_PowerShift/Idx3/KtBACR_P_CostFactSOC_PBatShift_Drive_LoHiTBatt'
 * '<S106>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/InPlant_PshiftArb/KeBACR_P_InPlant_Pshift4ChrgDisAlw'
 * '<S107>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/InPlant_PshiftArb/KeBACR_b_InPlntEnblPshiftDIDCtrl'
 * '<S108>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/InPlant_PshiftArb/KtBACR_P_InPlant_PBatPshift'
 * '<S109>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/InPlant_PshiftArb/KtBACR_r_InPlant_PBatPshift_Mult_Drive'
 * '<S110>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/RaceStart_PowerShift/Blend_x_yTerm_TimeBased'
 * '<S111>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/RaceStart_PowerShift/EdgeFalling'
 * '<S112>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/RaceStart_PowerShift/HeBACR_t_dT'
 * '<S113>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/RaceStart_PowerShift/KeBACR_Pct_RaceStrtExitPedal'
 * '<S114>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/RaceStart_PowerShift/KeBACR_b_AddMtrALoss'
 * '<S115>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/RaceStart_PowerShift/KeBACR_b_EnblRaceStartPshift'
 * '<S116>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/RaceStart_PowerShift/KeBACR_t_RaceStrtPshiftBlndTime'
 * '<S117>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/RaceStart_PowerShift/Signal Latch On With Reset'
 * '<S118>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/RaceStart_PowerShift/Blend_x_yTerm_TimeBased/Protected Division'
 * '<S119>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/RaceStart_SOCCostFactor/KeBACR_r_SOCCostFac_RaceStrt_Neg'
 * '<S120>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/RaceStart_SOCCostFactor/KeBACR_r_SOCCostFac_RaceStrt_Pos'
 * '<S121>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/RaceStart_SOCCostFactor/Set Block1'
 * '<S122>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/RaceStart_SOCCostFactor/Set Block2'
 * '<S123>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/RaceStart_SOCCostFactor/Set Block3'
 * '<S124>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/DRIVE/RaceStart_SOCCostFactor/Set Block4'
 * '<S125>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/PARK_NEUTRAL/ArbNegCostFact'
 * '<S126>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/PARK_NEUTRAL/ArbPNPShift'
 * '<S127>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/PARK_NEUTRAL/ArbPosCostFact'
 * '<S128>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/PARK_NEUTRAL/DocBlock'
 * '<S129>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/PARK_NEUTRAL/InPlant_PshiftArb'
 * '<S130>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/PARK_NEUTRAL/KtBACR_P_CWU_PBatShift_PN'
 * '<S131>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/PARK_NEUTRAL/KtBACR_P_CostFactSOC_PBatShift_PN'
 * '<S132>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/PARK_NEUTRAL/KtBACR_r_CostFactSOC_Neg_PN'
 * '<S133>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/PARK_NEUTRAL/KtBACR_r_CostFactSOC_Pos_PN'
 * '<S134>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/PARK_NEUTRAL/Pshift_PlugInCharging'
 * '<S135>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/PARK_NEUTRAL/Set Block'
 * '<S136>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/PARK_NEUTRAL/Set Block1'
 * '<S137>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/PARK_NEUTRAL/Set Block2'
 * '<S138>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/PARK_NEUTRAL/Set Block3'
 * '<S139>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/PARK_NEUTRAL/Set Block4'
 * '<S140>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/PARK_NEUTRAL/Set Block7'
 * '<S141>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/PARK_NEUTRAL/Set Block8'
 * '<S142>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/PARK_NEUTRAL/ArbNegCostFact/KeBACR_r_AddlCostFactNegT_NiTiTrnstn'
 * '<S143>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/PARK_NEUTRAL/ArbPNPShift/Blend_x_yTerm_TimeBased'
 * '<S144>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/PARK_NEUTRAL/ArbPNPShift/HeBACR_t_dT'
 * '<S145>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/PARK_NEUTRAL/ArbPNPShift/KeBACR_t_OptPbatPshftBlndTm'
 * '<S146>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/PARK_NEUTRAL/ArbPNPShift/KeOPTR_r_NiTiFctrMin'
 * '<S147>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/PARK_NEUTRAL/ArbPNPShift/Blend_x_yTerm_TimeBased/Protected Division'
 * '<S148>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/PARK_NEUTRAL/ArbPosCostFact/KeBACR_r_AddlCostFactPosT_NiTiTrnstn'
 * '<S149>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/PARK_NEUTRAL/InPlant_PshiftArb/KeBACR_P_InPlant_Pshift4ChrgDisAlw'
 * '<S150>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/PARK_NEUTRAL/InPlant_PshiftArb/KeBACR_b_InPlntEnblPshiftDIDCtrl'
 * '<S151>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/PARK_NEUTRAL/InPlant_PshiftArb/KtBACR_P_InPlant_PBatPshift'
 * '<S152>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/PARK_NEUTRAL/InPlant_PshiftArb/KtBACR_r_InPlant_PBatPshift_Mult_PN'
 * '<S153>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/PARK_NEUTRAL/Pshift_PlugInCharging/Digital Lowpass Reset Enabled'
 * '<S154>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/PARK_NEUTRAL/Pshift_PlugInCharging/Digital Lowpass Reset Enabled1'
 * '<S155>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/PARK_NEUTRAL/Pshift_PlugInCharging/Digital Lowpass Reset Enabled2'
 * '<S156>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/PARK_NEUTRAL/Pshift_PlugInCharging/EdgeRising'
 * '<S157>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/PARK_NEUTRAL/Pshift_PlugInCharging/KeBACR_b_EnblPlugInPshift'
 * '<S158>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/PARK_NEUTRAL/Pshift_PlugInCharging/KeBACR_k_PlugInPshiftIdle_FilterCoef'
 * '<S159>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/PARK_NEUTRAL/Pshift_PlugInCharging/KeBACR_k_PlugInPshiftStgc_FilterCoef'
 * '<S160>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/PARK_NEUTRAL/Pshift_PlugInCharging/KeBACR_k_PlugInPshiftTact_FilterCoef'
 * '<S161>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/PARK_NEUTRAL/Pshift_PlugInCharging/Set Block'
 * '<S162>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/PARK_NEUTRAL/Pshift_PlugInCharging/Set Block1'
 * '<S163>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/PARK_NEUTRAL/Pshift_PlugInCharging/Set Block2'
 * '<S164>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/Reverse/ArbNegCostFact'
 * '<S165>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/Reverse/ArbPosCostFact'
 * '<S166>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/Reverse/ArbRevPShift'
 * '<S167>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/Reverse/DocBlock'
 * '<S168>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/Reverse/InPlant_PshiftArb'
 * '<S169>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/Reverse/KtBACR_P_CWU_PBatShift_Rev'
 * '<S170>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/Reverse/KtBACR_P_CostFactSOC_PBatShift_Rev'
 * '<S171>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/Reverse/KtBACR_r_CostFactSOC_Neg_Rev'
 * '<S172>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/Reverse/KtBACR_r_CostFactSOC_Pos_Rev'
 * '<S173>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/Reverse/Set Block1'
 * '<S174>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/Reverse/Set Block2'
 * '<S175>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/Reverse/Set Block3'
 * '<S176>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/Reverse/Set Block4'
 * '<S177>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/Reverse/Set Block7'
 * '<S178>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/Reverse/Set Block8'
 * '<S179>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/Reverse/ArbNegCostFact/KeBACR_r_AddlCostFactNegT_NiTiTrnstn'
 * '<S180>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/Reverse/ArbPosCostFact/KeBACR_r_AddlCostFactPosT_NiTiTrnstn'
 * '<S181>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/Reverse/ArbRevPShift/Blend_x_yTerm_TimeBased'
 * '<S182>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/Reverse/ArbRevPShift/HeBACR_t_dT'
 * '<S183>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/Reverse/ArbRevPShift/KeBACR_t_OptPbatPshftBlndTm'
 * '<S184>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/Reverse/ArbRevPShift/KeOPTR_r_NiTiFctrMin'
 * '<S185>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/Reverse/ArbRevPShift/Blend_x_yTerm_TimeBased/Protected Division'
 * '<S186>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/Reverse/InPlant_PshiftArb/KeBACR_P_InPlant_Pshift4ChrgDisAlw'
 * '<S187>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/Reverse/InPlant_PshiftArb/KeBACR_b_InPlntEnblPshiftDIDCtrl'
 * '<S188>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/Reverse/InPlant_PshiftArb/KtBACR_P_InPlant_PBatPshift'
 * '<S189>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/Subsystem/Reverse/InPlant_PshiftArb/KtBACR_r_InPlant_PBatPshift_Mult_Rev'
 * '<S190>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/TopOfCharge_PowerShift/EdgeFalling2'
 * '<S191>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/TopOfCharge_PowerShift/EdgeRising'
 * '<S192>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/TopOfCharge_PowerShift/KeBACR_P_OilDiln_PshiftMaxLimOffset'
 * '<S193>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/TopOfCharge_PowerShift/KeBACR_Pct_SOC_TopOfCharge'
 * '<S194>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/TopOfCharge_PowerShift/KeBACR_Pct_TopOfChrgPshift_ExitSOC'
 * '<S195>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/TopOfCharge_PowerShift/Passthrough'
 * '<S196>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/TopOfCharge_PowerShift/PowerShift_TopOfCharge'
 * '<S197>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/TopOfCharge_PowerShift/Set Block1'
 * '<S198>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/TopOfCharge_PowerShift/Signal Latch On With Reset'
 * '<S199>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/TopOfCharge_PowerShift/Passthrough/Blend_x_yTerm_TimeBased'
 * '<S200>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/TopOfCharge_PowerShift/Passthrough/HeBACR_t_dT'
 * '<S201>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/TopOfCharge_PowerShift/Passthrough/KeBACR_t_TOCPwrShftExit_BlendTime'
 * '<S202>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/TopOfCharge_PowerShift/Passthrough/Blend_x_yTerm_TimeBased/Protected Division'
 * '<S203>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/TopOfCharge_PowerShift/PowerShift_TopOfCharge/KtBACR_P_PwrShift_TopOfChrg'
 * '<S204>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/TopOfCharge_PowerShift/PowerShift_TopOfCharge/KtBACR_r_CostFactSOC_Neg_TOC'
 * '<S205>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/TopOfCharge_PowerShift/PowerShift_TopOfCharge/KtBACR_r_CostFactSOC_Pos_TOC'
 * '<S206>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/TopOfCharge_PowerShift/PowerShift_TopOfCharge/Set Block1'
 * '<S207>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/TopOfCharge_PowerShift/PowerShift_TopOfCharge/Set Block2'
 * '<S208>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Battery_PowerShift/TopOfCharge_PowerShift/PowerShift_TopOfCharge/Set Block3'
 * '<S209>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Charge_Sustaining/Charge_Depleting'
 * '<S210>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Charge_Sustaining/Charge_Depleting_DS'
 * '<S211>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Charge_Sustaining/Charge_Incrsng'
 * '<S212>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Charge_Sustaining/Charge_Sustaining'
 * '<S213>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Charge_Sustaining/Charge_Sustaining_DS'
 * '<S214>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Charge_Sustaining/Constant Value1'
 * '<S215>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Charge_Sustaining/Constant Value5'
 * '<S216>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Charge_Sustaining/Constant Value7'
 * '<S217>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Charge_Sustaining/DocBlock'
 * '<S218>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Charge_Sustaining/EdgeFalling'
 * '<S219>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Charge_Sustaining/EdgeRising'
 * '<S220>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Charge_Sustaining/FALSE_Debounce'
 * '<S221>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Charge_Sustaining/HeBACR_b_CDSOC_Ovrd'
 * '<S222>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Charge_Sustaining/HeBACR_t_dT'
 * '<S223>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Charge_Sustaining/Hysteresis'
 * '<S224>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Charge_Sustaining/Hysteresis1'
 * '<S225>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Charge_Sustaining/KaBACR_b_DrvMd_IsCImode'
 * '<S226>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Charge_Sustaining/KaBACR_b_PwrPnlMd_IsCImode'
 * '<S227>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Charge_Sustaining/KaBACR_b_TcaseStat_IsCImode'
 * '<S228>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Charge_Sustaining/KaBACR_b_TrnMd_IsCImode'
 * '<S229>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Charge_Sustaining/KeBACR_Pct_ChrgDplgtSOCHyst'
 * '<S230>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Charge_Sustaining/KeBACR_Pct_ChrgIncrSOCDeltaLSP'
 * '<S231>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Charge_Sustaining/KeBACR_Pct_ChrgIncrSOCDeltaRSP'
 * '<S232>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Charge_Sustaining/KeBACR_Pct_ChrgSustnSOCHyst'
 * '<S233>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Charge_Sustaining/KeBACR_b_CStoCDPlugInChrg_Ovrd'
 * '<S234>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Charge_Sustaining/KeBACR_b_ChrgIncrEngCond'
 * '<S235>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Charge_Sustaining/KeBACR_b_ChrgStVehTypeIndpdnt'
 * '<S236>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Charge_Sustaining/KeBACR_b_ChrgSustEngCond'
 * '<S237>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Charge_Sustaining/KeBACR_b_DsblCDPluginChrg'
 * '<S238>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Charge_Sustaining/KeBACR_e_HybridEV_Type'
 * '<S239>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Charge_Sustaining/Not_PSA'
 * '<S240>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Charge_Sustaining/Signal Latch On With Reset'
 * '<S241>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Charge_Sustaining/TRUE_Debounce'
 * '<S242>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Charge_Sustaining/Turn On Delay Time'
 * '<S243>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Charge_Sustaining/Charge_Depleting/Constant Value7'
 * '<S244>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Charge_Sustaining/Charge_Incrsng/Constant Value7'
 * '<S245>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Charge_Sustaining/Charge_Sustaining/Constant Value7'
 * '<S246>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Charge_Sustaining/FALSE_Debounce/EdgeFalling1'
 * '<S247>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Charge_Sustaining/FALSE_Debounce/EdgeRising'
 * '<S248>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Charge_Sustaining/FALSE_Debounce/Signal Latch Off'
 * '<S249>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Charge_Sustaining/Not_PSA/Constant Value7'
 * '<S250>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Charge_Sustaining/TRUE_Debounce/Turn On Delay Sample'
 * '<S251>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Charge_Sustaining/TRUE_Debounce/Turn On Delay Sample/EdgeRising'
 * '<S252>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Charge_Sustaining/Turn On Delay Time/EdgeRising'
 * '<S253>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Electric_Power_PedalFactor/Constant Value7'
 * '<S254>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Electric_Power_PedalFactor/DocBlock'
 * '<S255>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Electric_Power_PedalFactor/GradientLimiter'
 * '<S256>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Electric_Power_PedalFactor/KeBACR_r_ElectrPdlFact_LD'
 * '<S257>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Electric_Power_PedalFactor/KeBACR_r_ElectrPdlFact_LU'
 * '<S258>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Electric_Power_PedalFactor/KtBACR_r_ElectrPdlFact_BattTemp'
 * '<S259>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Electric_Power_PedalFactor/KtBACR_r_ElectrPdlFact_MtrATorq'
 * '<S260>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Electric_Power_PedalFactor/KtBACR_r_ElectrPdlFact_MtrBTorq'
 * '<S261>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Electric_Power_PedalFactor/KtBACR_r_ElectrPdlFact_PBattMax'
 * '<S262>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Electric_Power_PedalFactor/KtBACR_r_ElectrPdlFact_SOC'
 * '<S263>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Electric_Power_PedalFactor/GradientLimiter/Limiter'
 * '<S264>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Target_SOC_Arbitration/DocBlock'
 * '<S265>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Target_SOC_Arbitration/KeBACR_Pct_TargetSOCOffset_Rev'
 * '<S266>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Target_SOC_Arbitration/KeBACR_Pct_TargetSOC_D_Min'
 * '<S267>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Target_SOC_Arbitration/KtBACR_Pct_TargetSOC_D_Max'
 * '<S268>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Target_SOC_Arbitration/KtBACR_Pct_TargetSOC_PN'
 * '<S269>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Target_SOC_Arbitration/Limiter'
 * '<S270>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Target_SOC_Arbitration/TgtSOC_OffstBlnd'
 * '<S271>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Target_SOC_Arbitration/TgtSOC_OffstBlnd/Enumerated_Constant'
 * '<S272>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Target_SOC_Arbitration/TgtSOC_OffstBlnd/GradientLimiter'
 * '<S273>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Target_SOC_Arbitration/TgtSOC_OffstBlnd/IfThenElse4'
 * '<S274>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Target_SOC_Arbitration/TgtSOC_OffstBlnd/KaBACR_b_EnblHldTgtSOC'
 * '<S275>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Target_SOC_Arbitration/TgtSOC_OffstBlnd/KaBACR_b_UseRawTgtSOC4StrtStpArb'
 * '<S276>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Target_SOC_Arbitration/TgtSOC_OffstBlnd/KaBACR_b_UseTargetSOCRaw'
 * '<S277>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Target_SOC_Arbitration/TgtSOC_OffstBlnd/KaBACR_i_DrvSelMdSOCStratSel'
 * '<S278>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Target_SOC_Arbitration/TgtSOC_OffstBlnd/KaBACR_r_DrvSelMdSOCStratCals'
 * '<S279>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Target_SOC_Arbitration/TgtSOC_OffstBlnd/KeBACR_i_PwrPnlGenMdStratidx'
 * '<S280>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Target_SOC_Arbitration/TgtSOC_OffstBlnd/KeBACR_i_SOCIncMdStratidx'
 * '<S281>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Target_SOC_Arbitration/TgtSOC_OffstBlnd/Limiter'
 * '<S282>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Target_SOC_Arbitration/TgtSOC_OffstBlnd/Limiter4'
 * '<S283>' : 'BACR_ac/BACR_MedTED/BACC_Controls/BACC_Target_SOC_Arbitration/TgtSOC_OffstBlnd/GradientLimiter/Limiter'
 * '<S284>' : 'BACR_ac/BACR_MedTED/BACC_Controls/IdlePshift/KtBACR_P_CostFactSOC_PBatShift_Drive_Po'
 * '<S285>' : 'BACR_ac/BACR_MedTED/BACC_Controls/IdlePshift/KtBACR_P_dSOC_DCLoadPshiftOffset'
 * '<S286>' : 'BACR_ac/BACR_MedTED/BACC_Controls/LimitBattPwrshift/Hysteresis'
 * '<S287>' : 'BACR_ac/BACR_MedTED/BACC_Controls/LimitBattPwrshift/KeBACR_P_GPFSrvcReq_Pshift'
 * '<S288>' : 'BACR_ac/BACR_MedTED/BACC_Controls/LimitBattPwrshift/KeBACR_P_PbatMin_Dflt'
 * '<S289>' : 'BACR_ac/BACR_MedTED/BACC_Controls/LimitBattPwrshift/KeBACR_Pct_deltaSOC_ContChargePwrLmt_LSP'
 * '<S290>' : 'BACR_ac/BACR_MedTED/BACC_Controls/LimitBattPwrshift/KeBACR_Pct_deltaSOC_ContChargePwrLmt_RSP'
 * '<S291>' : 'BACR_ac/BACR_MedTED/BACC_Controls/LimitBattPwrshift/KeBACR_b_GPFSrvcReq_PshiftOvrrdEnbl'
 * '<S292>' : 'BACR_ac/BACR_MedTED/BACC_Controls/LimitBattPwrshift/KeBACR_b_InPlntEnblPshiftOpng'
 * '<S293>' : 'BACR_ac/BACR_MedTED/BACC_Controls/LimitBattPwrshift/KeBACR_r_BatPwrShft_LTMax_FactMN'
 * '<S294>' : 'BACR_ac/BACR_MedTED/BACC_Controls/LimitBattPwrshift/KeBACR_r_BatPwrShft_LTMin_FactMX'
 * '<S295>' : 'BACR_ac/BACR_MedTED/BACC_Controls/LimitBattPwrshift/KtBACR_P_SOCPshiftOpng'
 * '<S296>' : 'BACR_ac/BACR_MedTED/BACC_Controls/LimitBattPwrshift/Limiter'
 * '<S297>' : 'BACR_ac/BACR_MedTED/BACC_Controls/LimitBattPwrshift/Limiter1'
 * '<S298>' : 'BACR_ac/BACR_MedTED/BACC_Controls/LimitBattPwrshift/Limiter2'
 * '<S299>' : 'BACR_ac/BACR_MedTED/BACC_Controls/PowerShiftRL/GradientLimiter'
 * '<S300>' : 'BACR_ac/BACR_MedTED/BACC_Controls/PowerShiftRL/KtBACR_dP_BattPwrShftRt_2DLT'
 * '<S301>' : 'BACR_ac/BACR_MedTED/BACC_Controls/PowerShiftRL/Set Block'
 * '<S302>' : 'BACR_ac/BACR_MedTED/BACC_Controls/PowerShiftRL/GradientLimiter/Limiter'
 * '<S303>' : 'BACR_ac/BACR_MedTED/BACI_Input_Processing/Accumulator Reset'
 * '<S304>' : 'BACR_ac/BACR_MedTED/BACI_Input_Processing/Constant Value14'
 * '<S305>' : 'BACR_ac/BACR_MedTED/BACI_Input_Processing/Constant Value15'
 * '<S306>' : 'BACR_ac/BACR_MedTED/BACI_Input_Processing/Constant Value4'
 * '<S307>' : 'BACR_ac/BACR_MedTED/BACI_Input_Processing/Constant Value5'
 * '<S308>' : 'BACR_ac/BACR_MedTED/BACI_Input_Processing/Digital Lowpass Reset Enabled'
 * '<S309>' : 'BACR_ac/BACR_MedTED/BACI_Input_Processing/DocBlock'
 * '<S310>' : 'BACR_ac/BACR_MedTED/BACI_Input_Processing/HeBACR_b_EOCRenableCat'
 * '<S311>' : 'BACR_ac/BACR_MedTED/BACI_Input_Processing/HeBACR_b_EOCRenableCatval'
 * '<S312>' : 'BACR_ac/BACR_MedTED/BACI_Input_Processing/HeBACR_t_dT'
 * '<S313>' : 'BACR_ac/BACR_MedTED/BACI_Input_Processing/IfThenElseifElse'
 * '<S314>' : 'BACR_ac/BACR_MedTED/BACI_Input_Processing/KeBACR_b_InPlntAllwChrgOvrrdVal'
 * '<S315>' : 'BACR_ac/BACR_MedTED/BACI_Input_Processing/KeBACR_b_OvrrdInPlntAllwChrg'
 * '<S316>' : 'BACR_ac/BACR_MedTED/BACI_Input_Processing/KeBACR_b_ResetToEngRunTime'
 * '<S317>' : 'BACR_ac/BACR_MedTED/BACI_Input_Processing/KtBACR_k_SOCBlnc_NoBasedFltrCoeff'
 * '<S318>' : 'BACR_ac/BACR_MedTED/BACI_Input_Processing/Model Info1'
 * '<S319>' : 'BACR_ac/BACR_MedTED/BACI_Input_Processing/Protected Division'
 * '<S320>' : 'BACR_ac/BACR_MedTED/BACI_Input_Processing/Protected Division1'
 * '<S321>' : 'BACR_ac/BACR_MedTED/BACI_Input_Processing/Protected Division2'
 * '<S322>' : 'BACR_ac/BACR_MedTED/BACI_Input_Processing/Set Block1'
 * '<S323>' : 'BACR_ac/BACR_MedTED/BACI_Input_Processing/Set Block3'
 * '<S324>' : 'BACR_ac/BACR_MedTED/BACI_Input_Processing/Set Block4'
 * '<S325>' : 'BACR_ac/BACR_MedTED/BACO_Output_Processing/Constant Value2'
 * '<S326>' : 'BACR_ac/BACR_MedTED/BACO_Output_Processing/Constant Value3'
 * '<S327>' : 'BACR_ac/BACR_MedTED/BACO_Output_Processing/Enum Set Block'
 * '<S328>' : 'BACR_ac/BACR_MedTED/BACO_Output_Processing/Enum Set Block1'
 * '<S329>' : 'BACR_ac/BACR_MedTED/BACO_Output_Processing/HeBACR_b_ElecPwrTorq_Ovrd'
 * '<S330>' : 'BACR_ac/BACR_MedTED/BACO_Output_Processing/KeBACR_b_ChargeSustnOvrd'
 * '<S331>' : 'BACR_ac/BACR_MedTED/BACO_Output_Processing/KeBACR_b_HEVChrgSt4Md9TIDSpprt'
 * '<S332>' : 'BACR_ac/BACR_MedTED/BACO_Output_Processing/KeBACR_b_HEVSt_Supported'
 * '<S333>' : 'BACR_ac/BACR_MedTED/BACO_Output_Processing/KeBACR_b_Md9TIDSupported'
 * '<S334>' : 'BACR_ac/BACR_MedTED/BACO_Output_Processing/KeBACR_e_ChargeSustnOvrdVal'
 * '<S335>' : 'BACR_ac/BACR_MedTED/BACO_Output_Processing/KeBACR_e_HybridEV_Type'
 * '<S336>' : 'BACR_ac/BACR_MedTED/BACO_Output_Processing/KeBACR_r_ElecPwrTorq_PedalFact'
 * '<S337>' : 'BACR_ac/BACR_MedTED/BACO_Output_Processing/Set Block2'
 * '<S338>' : 'BACR_ac/BACR_MedTED/BACO_Output_Processing/Set Block3'
 * '<S339>' : 'BACR_ac/BACR_MedTED/BACO_Output_Processing/Set Block4'
 * '<S340>' : 'BACR_ac/BACR_MedTED/BACO_Output_Processing/Set Block5'
 * '<S341>' : 'BACR_ac/BACR_MedTED/BACO_Output_Processing/Set Block6'
 * '<S342>' : 'BACR_ac/BACR_MedTED/BACO_Output_Processing/Set Block7'
 * '<S343>' : 'BACR_ac/BACR_MedTED/BACO_Output_Processing/Set Block9'
 * '<S344>' : 'BACR_ac/BACR_PwrOn/BACO_Initialization'
 * '<S345>' : 'BACR_ac/BACR_PwrOn/DSM_Init'
 * '<S346>' : 'BACR_ac/BACR_PwrOn/BACO_Initialization/Constant Value3'
 * '<S347>' : 'BACR_ac/BACR_PwrOn/BACO_Initialization/Constant Value4'
 * '<S348>' : 'BACR_ac/BACR_PwrOn/BACO_Initialization/Constant Value7'
 * '<S349>' : 'BACR_ac/BACR_PwrOn/BACO_Initialization/Enum Set Block1'
 * '<S350>' : 'BACR_ac/BACR_PwrOn/BACO_Initialization/KeBACR_b_HEVChrgSt4Md9TIDSpprt'
 * '<S351>' : 'BACR_ac/BACR_PwrOn/BACO_Initialization/KeBACR_b_HEVSt_Supported'
 * '<S352>' : 'BACR_ac/BACR_PwrOn/BACO_Initialization/KeBACR_b_Md9TIDSupported'
 * '<S353>' : 'BACR_ac/BACR_PwrOn/BACO_Initialization/KeBACR_e_HybridEV_Type'
 * '<S354>' : 'BACR_ac/BACR_PwrOn/BACO_Initialization/Set Block1'
 * '<S355>' : 'BACR_ac/BACR_PwrOn/BACO_Initialization/Set Block10'
 * '<S356>' : 'BACR_ac/BACR_PwrOn/BACO_Initialization/Set Block11'
 * '<S357>' : 'BACR_ac/BACR_PwrOn/BACO_Initialization/Set Block12'
 * '<S358>' : 'BACR_ac/BACR_PwrOn/BACO_Initialization/Set Block3'
 * '<S359>' : 'BACR_ac/BACR_PwrOn/BACO_Initialization/Set Block4'
 * '<S360>' : 'BACR_ac/BACR_PwrOn/BACO_Initialization/Set Block5'
 * '<S361>' : 'BACR_ac/BACR_PwrOn/BACO_Initialization/Set Block6'
 * '<S362>' : 'BACR_ac/BACR_PwrOn/BACO_Initialization/Set Block7'
 * '<S363>' : 'BACR_ac/BACR_PwrOn/BACO_Initialization/Set Block9'
 */
#endif                                 /* RTW_HEADER_BACR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
