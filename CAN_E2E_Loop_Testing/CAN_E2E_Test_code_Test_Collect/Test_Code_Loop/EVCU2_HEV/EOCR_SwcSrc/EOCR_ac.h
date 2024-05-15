/*
 * File: EOCR_ac.h
 *
 * Code generated for Simulink model 'EOCR_ac'.
 *
 * Model version                  : 9.42
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:36:12 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_EOCR_ac_h_
#define RTW_HEADER_EOCR_ac_h_
#include <math.h>
#include "Rte_Type.h"
#ifndef EOCR_ac_COMMON_INCLUDES_
#define EOCR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_EOCR.h"
#endif                                 /* EOCR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"

/* MW_VALIDATE_PREPROCESSOR_VARIANT_CHOICES */
#undef MW_HAVE_ACTIVE_VARIANT_CHOICE
#undef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#if Rte_SysCon_Variant_EOCR_1
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

#if Rte_SysCon_Variant_EOCR_2
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

/* At most one variant choice can be active for block 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/ArbTactFactors/VariantSource', 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/CatHtgStatusRegB/VariantSource', 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/EOCC_CalcB1/VariantSource' */
#ifdef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#error "At most one variant choice can be active for block 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/ArbTactFactors/VariantSource' and others"
#endif

/*At least one variant choice must be active for block 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/ArbTactFactors/VariantSource', 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/CatHtgStatusRegB/VariantSource', 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/EOCC_CalcB1/VariantSource' */
#ifndef MW_HAVE_ACTIVE_VARIANT_CHOICE
#error "At least one variant choice must be active for block 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/ArbTactFactors/VariantSource' and others"
#endif

#undef MW_HAVE_ACTIVE_VARIANT_CHOICE
#undef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#if Rte_SysCon_Variant_EOCR_3
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

#if Rte_SysCon_Variant_EOCR_4
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

/* At most one variant choice can be active for block 'EOCR_ac/EOCR_PwrOn/Initialization_NF25or50msCalcA/VariantSource1', 'EOCR_ac/EOCR_PwrOn/Initialization_NF25or50msCalcA/VariantSource2', 'EOCR_ac/EOCR_PwrOn/Initialization_NF25or50msCalcA/VariantSource3', 'EOCR_ac/EOCR_PwrOn/Initialization_NF25or50msCalcA/VariantSource4' */
#ifdef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#error "At most one variant choice can be active for block 'EOCR_ac/EOCR_PwrOn/Initialization_NF25or50msCalcA/VariantSource1' and others"
#endif

/* MW_END_VALIDATE_PREPROCESSOR_VARIANT_CHOICES */

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_EOCR_ac_T
{
    float32 OutportBufferForEngSpd_write;/* '<S163>/Const1' */
    float32 OutportBufferForLeEOCR_n_Ni_ColdCtrl_Old;/* '<S163>/Const2' */
    float32 OutportBufferForLeEOCR_M_Ti_ColdCtrl_Old;/* '<S163>/Const3' */
    float32 OutportBufferForVeEOCC_r_TactMultwoPwrDl;/* '<S163>/Const4' */

#if Rte_SysCon_Variant_EOCR_3 || Rte_SysCon_Variant_EOCR_4

    float32 Gain;                      /* '<S172>/Gain' */

#define B_EOCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_EOCR_3 || Rte_SysCon_Variant_EOCR_4

    float32 Gain_d;                    /* '<S173>/Gain' */

#define B_EOCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_EOCR_3 || Rte_SysCon_Variant_EOCR_4

    float32 Gain_g;                    /* '<S174>/Gain' */

#define B_EOCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_EOCR_3 || Rte_SysCon_Variant_EOCR_4

    float32 Gain_gj;                   /* '<S175>/Gain' */

#define B_EOCR_AC_T_VARIANT_EXISTS
#endif

    boolean OutportBufferForCTMEnabled_write;/* '<S163>/Const' */
    boolean OutportBufferForColdCtrlStgc_woSeMdAllw_;/* '<S163>/Const5' */

#if Rte_SysCon_Variant_EOCR_3 || Rte_SysCon_Variant_EOCR_4

    boolean Gain_g4;                   /* '<S170>/Gain' */

#define B_EOCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_EOCR_3 || Rte_SysCon_Variant_EOCR_4

    boolean Gain_bq;                   /* '<S171>/Gain' */

#define B_EOCR_AC_T_VARIANT_EXISTS
#endif

}
B_EOCR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_EOCR_ac_T
{
    float32 UnitDelay1_DSTATE;         /* '<S138>/Unit Delay1' */
    float32 UnitDelay_DSTATE;          /* '<S138>/Unit Delay' */
    float32 UnitDelay_DSTATE_b;        /* '<S150>/Unit Delay' */
    float32 UnitDelay_DSTATE_k;        /* '<S20>/UnitDelay' */
    float32 UnitDelay1_DSTATE_a;       /* '<S57>/Unit Delay1' */
    float32 UnitDelay_DSTATE_a;        /* '<S57>/Unit Delay' */
    float32 UnitDelay5_DSTATE;         /* '<S5>/Unit Delay5' */
    boolean UnitDelay_DSTATE_h;        /* '<S140>/Unit Delay' */
    boolean UnitDelay2_DSTATE;         /* '<S10>/Unit Delay2' */
    boolean UnitDelay_DSTATE_i;        /* '<S91>/Unit Delay' */
    boolean UnitDelay_DSTATE_ht;       /* '<S88>/Unit Delay' */
    boolean UnitDelay_DSTATE_g;        /* '<S87>/Unit Delay' */
    boolean UnitDelay_DSTATE_o;        /* '<S76>/Unit Delay' */
    boolean UnitDelay_DSTATE_j;        /* '<S75>/Unit Delay' */
    boolean UnitDelay_DSTATE_k1;       /* '<S74>/Unit Delay' */
    boolean UnitDelay_DSTATE_m;        /* '<S61>/Unit Delay' */
    boolean UnitDelay_DSTATE_hq;       /* '<S60>/Unit Delay' */
    boolean UnitDelay_DSTATE_or;       /* '<S59>/Unit Delay' */
}
DW_EOCR_ac_T;

/* Constant parameters (default storage) */
typedef struct
{
    /* Computed Parameter: Vector_maxIndex
     * Referenced by: '<S109>/Vector'
     */
    uint32 Vector_maxIndex[2];

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S167>/Vector'
     *   '<S72>/Vector'
     */
    uint32 pooled21[2];

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S166>/Vector'
     *   '<S69>/Vector'
     */
    uint32 pooled22[2];

    /* Computed Parameter: Vector_maxIndex_p
     * Referenced by: '<S146>/Vector'
     */
    uint32 Vector_maxIndex_p[2];
}
ConstP_EOCR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_EOCR
#include "MemMap.h"

extern VAR(B_EOCR_ac_T, EOCR_VAR_INIT) EOCR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_EOCR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_EOCR
#include "MemMap.h"

extern VAR(DW_EOCR_ac_T, EOCR_VAR_INIT) EOCR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_EOCR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_EOCR
#include "MemMap.h"

extern CONST(ConstP_EOCR_ac_T, EOCR_VAR_INIT) EOCR_ac_ConstP;

#define STOP_SEC_CONST_UNSPECIFIED_EOCR
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
 * '<Root>' : 'EOCR_ac'
 * '<S1>'   : 'EOCR_ac/EOCR_MedTED1'
 * '<S2>'   : 'EOCR_ac/EOCR_MedTED2'
 * '<S3>'   : 'EOCR_ac/EOCR_PwrOn'
 * '<S4>'   : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA'
 * '<S5>'   : 'EOCR_ac/EOCR_MedTED1/EOCI_Input_Processing'
 * '<S6>'   : 'EOCR_ac/EOCR_MedTED1/ProcessOutputA'
 * '<S7>'   : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/CatHtgStatusRegA'
 * '<S8>'   : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/Checks'
 * '<S9>'   : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/EOCC_CalcA1'
 * '<S10>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/EOCC_NiTiCtrl_Fact'
 * '<S11>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/HeEOCR_b_RunTimeOvrrd'
 * '<S12>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/HeEOCR_t_RunTimeOvrrd'
 * '<S13>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/HeEOCR_t_TimeStep'
 * '<S14>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/KeEOCR_T_CatTempRunTimeReset'
 * '<S15>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/KeEOCR_T_CoolTempRunTimeReset'
 * '<S16>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/KeEOCR_b_RunTimeResetAndLogic'
 * '<S17>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/KeEOCR_n_EngSpdRunTimeEnbl'
 * '<S18>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/KeEOCR_t_RunTimeMax'
 * '<S19>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/Set Block3'
 * '<S20>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/Timer'
 * '<S21>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/TimerLogic'
 * '<S22>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/CatHtgStatusRegA/Bit Clear'
 * '<S23>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/CatHtgStatusRegA/Bit Clear1'
 * '<S24>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/CatHtgStatusRegA/Bit Clear10'
 * '<S25>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/CatHtgStatusRegA/Bit Clear13'
 * '<S26>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/CatHtgStatusRegA/Bit Clear14'
 * '<S27>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/CatHtgStatusRegA/Bit Clear2'
 * '<S28>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/CatHtgStatusRegA/Bit Clear3'
 * '<S29>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/CatHtgStatusRegA/Bit Clear4'
 * '<S30>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/CatHtgStatusRegA/Bit Clear5'
 * '<S31>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/CatHtgStatusRegA/Bit Clear6'
 * '<S32>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/CatHtgStatusRegA/Bit Clear7'
 * '<S33>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/CatHtgStatusRegA/Bit Clear8'
 * '<S34>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/CatHtgStatusRegA/Bit Clear9'
 * '<S35>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/CatHtgStatusRegA/Bit Set'
 * '<S36>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/CatHtgStatusRegA/Bit Set1'
 * '<S37>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/CatHtgStatusRegA/Bit Set10'
 * '<S38>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/CatHtgStatusRegA/Bit Set13'
 * '<S39>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/CatHtgStatusRegA/Bit Set14'
 * '<S40>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/CatHtgStatusRegA/Bit Set2'
 * '<S41>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/CatHtgStatusRegA/Bit Set3'
 * '<S42>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/CatHtgStatusRegA/Bit Set4'
 * '<S43>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/CatHtgStatusRegA/Bit Set5'
 * '<S44>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/CatHtgStatusRegA/Bit Set6'
 * '<S45>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/CatHtgStatusRegA/Bit Set7'
 * '<S46>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/CatHtgStatusRegA/Bit Set8'
 * '<S47>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/CatHtgStatusRegA/Bit Set9'
 * '<S48>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/CatHtgStatusRegA/Boolean Set Block'
 * '<S49>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/CatHtgStatusRegA/KeOPTR_r_NiTiFctrMin'
 * '<S50>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/Checks/KeEOCR_b_CWUInitCondEnbl'
 * '<S51>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/Checks/KeEOCR_t_CWUInitCondThresh'
 * '<S52>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/Checks/KtEOCR_r_CatTempMult'
 * '<S53>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/Checks/KtEOCR_r_CoolantTempMult'
 * '<S54>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/Checks/KtEOCR_r_RunTimeMult'
 * '<S55>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/EOCC_CalcA1/Boolean Set Block'
 * '<S56>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/EOCC_CalcA1/Boolean Set Block1'
 * '<S57>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/EOCC_CalcA1/Derivative_filtered'
 * '<S58>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/EOCC_CalcA1/HeEOCR_t_PwrDltDrvtvSampleTime'
 * '<S59>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/EOCC_CalcA1/Hysteresis'
 * '<S60>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/EOCC_CalcA1/Hysteresis1'
 * '<S61>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/EOCC_CalcA1/Hysteresis2'
 * '<S62>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/EOCC_CalcA1/KeEOCR_P_PwrDlt_LSP'
 * '<S63>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/EOCC_CalcA1/KeEOCR_n_NiMin_MaxLim'
 * '<S64>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/EOCC_CalcA1/KeEOCR_n_Purge_NoThrsh_Dsbl'
 * '<S65>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/EOCC_CalcA1/KeEOCR_n_Purge_NoThrsh_Enbl'
 * '<S66>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/EOCC_CalcA1/KeEOCR_r_StgcMult_LSP'
 * '<S67>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/EOCC_CalcA1/KeEOCR_r_StgcMult_RSP'
 * '<S68>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/EOCC_CalcA1/KeEOCR_t_PwrDltStgcTimePrd'
 * '<S69>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/EOCC_CalcA1/KtEOCR_M_TiCldCtrl_FrmRunTm_CatTemp'
 * '<S70>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/EOCC_CalcA1/KtEOCR_P_PwrDltStgcRSPOffset'
 * '<S71>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/EOCC_CalcA1/KtEOCR_P_PwrDltStgc_RSP'
 * '<S72>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/EOCC_CalcA1/KtEOCR_n_NiCldCtrl_FrmRunTm_No'
 * '<S73>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/EOCC_CalcA1/Limiter2'
 * '<S74>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/EOCC_NiTiCtrl_Fact/EdgeFalling'
 * '<S75>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/EOCC_NiTiCtrl_Fact/EdgeRising'
 * '<S76>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/EOCC_NiTiCtrl_Fact/EdgeRising2'
 * '<S77>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/EOCC_NiTiCtrl_Fact/Enumerated Value'
 * '<S78>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/EOCC_NiTiCtrl_Fact/Enumerated Value10'
 * '<S79>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/EOCC_NiTiCtrl_Fact/Enumerated Value11'
 * '<S80>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/EOCC_NiTiCtrl_Fact/Enumerated Value12'
 * '<S81>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/EOCC_NiTiCtrl_Fact/Enumerated Value13'
 * '<S82>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/EOCC_NiTiCtrl_Fact/KeEOCR_T_NiTiCtrl_StartECTMin'
 * '<S83>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/EOCC_NiTiCtrl_Fact/KeEOCR_b_EngStrStpEnbl'
 * '<S84>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/EOCC_NiTiCtrl_Fact/KeEOCR_b_NiTi_PropSysMdChk'
 * '<S85>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/EOCC_NiTiCtrl_Fact/KeEOCR_t_NiTiCtrl_EngOffTimeMin'
 * '<S86>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/EOCC_NiTiCtrl_Fact/Set Block'
 * '<S87>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/EOCC_NiTiCtrl_Fact/Signal Latch On With Reset1'
 * '<S88>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/EOCC_NiTiCtrl_Fact/Signal Latch On With Reset2'
 * '<S89>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/Timer/Limiter'
 * '<S90>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/TimerLogic/CatalystWarmupEnabled'
 * '<S91>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/TimerLogic/EdgeRising'
 * '<S92>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/TimerLogic/KeEOCR_n_EngSpdCatWarmUp'
 * '<S93>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/TimerLogic/NormalOperation'
 * '<S94>'  : 'EOCR_ac/EOCR_MedTED1/EOCCCalcA/TimerLogic/NormalOperation/Boolean Set Block'
 * '<S95>'  : 'EOCR_ac/EOCR_MedTED1/EOCI_Input_Processing/Digital Lowpass Reset Enabled'
 * '<S96>'  : 'EOCR_ac/EOCR_MedTED1/EOCI_Input_Processing/HeEOCR_Pct_PurgeAdjst_DfltVal'
 * '<S97>'  : 'EOCR_ac/EOCR_MedTED1/EOCI_Input_Processing/HeEOCR_T_CatTempOvrrd'
 * '<S98>'  : 'EOCR_ac/EOCR_MedTED1/EOCI_Input_Processing/HeEOCR_T_CoolTempOvrrd'
 * '<S99>'  : 'EOCR_ac/EOCR_MedTED1/EOCI_Input_Processing/HeEOCR_b_CTMOvrrdEnable'
 * '<S100>' : 'EOCR_ac/EOCR_MedTED1/EOCI_Input_Processing/HeEOCR_b_CTMOvrrdState'
 * '<S101>' : 'EOCR_ac/EOCR_MedTED1/EOCI_Input_Processing/HeEOCR_b_CatTempOvrrd'
 * '<S102>' : 'EOCR_ac/EOCR_MedTED1/EOCI_Input_Processing/HeEOCR_b_CatWarmupOvrrdEnable'
 * '<S103>' : 'EOCR_ac/EOCR_MedTED1/EOCI_Input_Processing/HeEOCR_b_CatWarmupOvrrdState'
 * '<S104>' : 'EOCR_ac/EOCR_MedTED1/EOCI_Input_Processing/HeEOCR_b_CoolTempOvrrd'
 * '<S105>' : 'EOCR_ac/EOCR_MedTED1/EOCI_Input_Processing/HeEOCR_b_EngSpdOvrrd'
 * '<S106>' : 'EOCR_ac/EOCR_MedTED1/EOCI_Input_Processing/HeEOCR_b_PurgeAdjst_Ovrd'
 * '<S107>' : 'EOCR_ac/EOCR_MedTED1/EOCI_Input_Processing/HeEOCR_n_EngSpdOvrrd'
 * '<S108>' : 'EOCR_ac/EOCR_MedTED1/EOCI_Input_Processing/KeEOCR_T_CatTempDflt'
 * '<S109>' : 'EOCR_ac/EOCR_MedTED1/EOCI_Input_Processing/KtEOCR_k_NoBsdFltrCoeff'
 * '<S110>' : 'EOCR_ac/EOCR_MedTED2/EOCCCalcB'
 * '<S111>' : 'EOCR_ac/EOCR_MedTED2/ProcessOutputsB'
 * '<S112>' : 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/ArbTactFactors'
 * '<S113>' : 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/CatHtgStatusRegB'
 * '<S114>' : 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/EOCC_CalcB1'
 * '<S115>' : 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/EOCC_ColdControl'
 * '<S116>' : 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/ArbTactFactors/IfThenElse'
 * '<S117>' : 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/ArbTactFactors/KeOPTR_r_NiTiFctrMin'
 * '<S118>' : 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/ArbTactFactors/KtEOCR_M_TiCatTempMaint'
 * '<S119>' : 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/ArbTactFactors/Set Block'
 * '<S120>' : 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/ArbTactFactors/Set Block1'
 * '<S121>' : 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/CatHtgStatusRegB/Bit Clear1'
 * '<S122>' : 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/CatHtgStatusRegB/Bit Clear2'
 * '<S123>' : 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/CatHtgStatusRegB/Bit Clear3'
 * '<S124>' : 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/CatHtgStatusRegB/Bit Clear4'
 * '<S125>' : 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/CatHtgStatusRegB/Bit Clear5'
 * '<S126>' : 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/CatHtgStatusRegB/Bit Clear6'
 * '<S127>' : 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/CatHtgStatusRegB/Bit Clear8'
 * '<S128>' : 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/CatHtgStatusRegB/Bit Set1'
 * '<S129>' : 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/CatHtgStatusRegB/Bit Set2'
 * '<S130>' : 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/CatHtgStatusRegB/Bit Set3'
 * '<S131>' : 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/CatHtgStatusRegB/Bit Set4'
 * '<S132>' : 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/CatHtgStatusRegB/Bit Set5'
 * '<S133>' : 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/CatHtgStatusRegB/Bit Set6'
 * '<S134>' : 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/CatHtgStatusRegB/Bit Set8'
 * '<S135>' : 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/CatHtgStatusRegB/Boolean Set Block'
 * '<S136>' : 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/CatHtgStatusRegB/Compare To Zero8'
 * '<S137>' : 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/CatHtgStatusRegB/KeOPTR_r_NiTiFctrMin'
 * '<S138>' : 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/EOCC_CalcB1/Derivative_filtered'
 * '<S139>' : 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/EOCC_CalcB1/HeEOCR_t_PwrDltDrvtvSampleTime'
 * '<S140>' : 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/EOCC_CalcB1/Hysteresis3'
 * '<S141>' : 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/EOCC_CalcB1/KeEOCR_P_PwrDlt_LSP'
 * '<S142>' : 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/EOCC_CalcB1/KeEOCR_b_PBattLTMaxBsdPwrDlt'
 * '<S143>' : 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/EOCC_CalcB1/KeEOCR_t_PwrDltTactTimePrd'
 * '<S144>' : 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/EOCC_CalcB1/KtEOCR_P_PwrDltStgc_RSP'
 * '<S145>' : 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/EOCC_CalcB1/KtEOCR_P_PwrDltTactRSPOffset'
 * '<S146>' : 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/EOCC_CalcB1/KtEOCR_r_PwrDltTact_Mult'
 * '<S147>' : 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/EOCC_CalcB1/Limiter1'
 * '<S148>' : 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/EOCC_CalcB1/Set Block1'
 * '<S149>' : 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/EOCC_CalcB1/Set Block2'
 * '<S150>' : 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/EOCC_ColdControl/Digital Lowpass Reset Enabled'
 * '<S151>' : 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/EOCC_ColdControl/KaEOCR_b_UseTiCL4TiColdCtrl'
 * '<S152>' : 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/EOCC_ColdControl/KaOPTR_b_LockLowSt_LwrdCreepEna'
 * '<S153>' : 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/EOCC_ColdControl/KeEOCR_b_UseNiColdArb_ForNiCold'
 * '<S154>' : 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/EOCC_ColdControl/KeEOCR_k_TiCldCapctyFiltCoef'
 * '<S155>' : 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/EOCC_ColdControl/KtEOCR_M_TiCldCapctyRsrvOffst'
 * '<S156>' : 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/EOCC_ColdControl/KtEOCR_M_TiTargetMax_Offset'
 * '<S157>' : 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/EOCC_ColdControl/KtEOCR_M_TiTargetMin_Offset'
 * '<S158>' : 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/EOCC_ColdControl/KtEOCR_n_NiTrgtAdjust'
 * '<S159>' : 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/EOCC_ColdControl/Limiter'
 * '<S160>' : 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/EOCC_ColdControl/Protected Division'
 * '<S161>' : 'EOCR_ac/EOCR_MedTED2/EOCCCalcB/EOCC_ColdControl/Protected Division1'
 * '<S162>' : 'EOCR_ac/EOCR_PwrOn/Initialization_NF25or50msCalcA'
 * '<S163>' : 'EOCR_ac/EOCR_PwrOn/Sub_Out_Init'
 * '<S164>' : 'EOCR_ac/EOCR_PwrOn/Initialization_NF25or50msCalcA/HeEOCR_b_ColdCtrl_RawInit'
 * '<S165>' : 'EOCR_ac/EOCR_PwrOn/Initialization_NF25or50msCalcA/HeEOCR_b_SeriesNiTi_AllwdInit'
 * '<S166>' : 'EOCR_ac/EOCR_PwrOn/Initialization_NF25or50msCalcA/KtEOCR_M_TiCldCtrl_FrmRunTm_CatTemp'
 * '<S167>' : 'EOCR_ac/EOCR_PwrOn/Initialization_NF25or50msCalcA/KtEOCR_n_NiCldCtrl_FrmRunTm_No'
 * '<S168>' : 'EOCR_ac/EOCR_PwrOn/Initialization_NF25or50msCalcA/Set Block1'
 * '<S169>' : 'EOCR_ac/EOCR_PwrOn/Initialization_NF25or50msCalcA/Set Block12'
 * '<S170>' : 'EOCR_ac/EOCR_PwrOn/Initialization_NF25or50msCalcA/Set Block13'
 * '<S171>' : 'EOCR_ac/EOCR_PwrOn/Initialization_NF25or50msCalcA/Set Block14'
 * '<S172>' : 'EOCR_ac/EOCR_PwrOn/Initialization_NF25or50msCalcA/Set Block15'
 * '<S173>' : 'EOCR_ac/EOCR_PwrOn/Initialization_NF25or50msCalcA/Set Block16'
 * '<S174>' : 'EOCR_ac/EOCR_PwrOn/Initialization_NF25or50msCalcA/Set Block17'
 * '<S175>' : 'EOCR_ac/EOCR_PwrOn/Initialization_NF25or50msCalcA/Set Block18'
 * '<S176>' : 'EOCR_ac/EOCR_PwrOn/Initialization_NF25or50msCalcA/Set Block19'
 * '<S177>' : 'EOCR_ac/EOCR_PwrOn/Initialization_NF25or50msCalcA/Set Block20'
 * '<S178>' : 'EOCR_ac/EOCR_PwrOn/Initialization_NF25or50msCalcA/Set Block21'
 * '<S179>' : 'EOCR_ac/EOCR_PwrOn/Initialization_NF25or50msCalcA/Set Block22'
 * '<S180>' : 'EOCR_ac/EOCR_PwrOn/Initialization_NF25or50msCalcA/Set Block23'
 * '<S181>' : 'EOCR_ac/EOCR_PwrOn/Initialization_NF25or50msCalcA/Set Block24'
 */
#endif                                 /* RTW_HEADER_EOCR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
