/*
 * File: TIDR_ac.h
 *
 * Code generated for Simulink model 'TIDR_ac'.
 *
 * Model version                  : 9.21
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 19:33:00 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_TIDR_ac_h_
#define RTW_HEADER_TIDR_ac_h_
#include <math.h>
#include "Rte_Type.h"
#ifndef TIDR_ac_COMMON_INCLUDES_
#define TIDR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_TIDR.h"
#endif                                 /* TIDR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_TIDR_ac_T
{
    boolean OutportBufferForVeTIDR_b_EngTrqHVBattLoF;/* '<S98>/Const1' */
    boolean OutportBufferForVeTIDR_b_EngTrqHVBattHiF;/* '<S98>/Const2' */
    boolean OutportBufferForVeTIDR_b_ActEngTrqPerfLo;/* '<S98>/Const3' */
    boolean OutportBufferForVeTIDR_b_ActEngTrqPerfHi;/* '<S98>/Const4' */
    TeDFIB_e_FaultDebounceStatus OutportBufferForVeTIDR_e_FaultSts_EngTor;/* '<S98>/Const' */
    TeDFIB_e_FaultDebounceStatus OutportBufferForVeTIDR_e_FaultSts_EngT_a;/* '<S98>/Const5' */
    TeDFIB_e_FaultDebounceStatus OutportBufferForVeTIDR_e_FaultSts_HybSys;/* '<S98>/Const6' */
    TeDFIB_e_FaultDebounceStatus OutportBufferForVeTIDR_e_FaultSts_HybS_o;/* '<S98>/Const7' */
    TeDFIB_e_FaultDebounceStatus OutportBufferForVeTIDR_e_FaultSts_HybS_p;/* '<S98>/Const8' */
}
B_TIDR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_TIDR_ac_T
{

#if Rte_SysCon_Variant_TIDR_1

    float32 UnitDelay_DSTATE;          /* '<S49>/Unit Delay' */

#define DW_TIDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TIDR_1

    uint16 UnitDelay_DSTATE_e;         /* '<S76>/Unit Delay' */

#define DW_TIDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TIDR_1

    uint16 UnitDelay_DSTATE_d;         /* '<S75>/Unit Delay' */

#define DW_TIDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TIDR_1

    uint16 UnitDelay_DSTATE_g;         /* '<S74>/Unit Delay' */

#define DW_TIDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TIDR_1

    uint16 UnitDelay_DSTATE_l;         /* '<S73>/Unit Delay' */

#define DW_TIDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TIDR_1

    uint16 UnitDelay_DSTATE_m;         /* '<S61>/Unit Delay' */

#define DW_TIDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TIDR_1

    uint16 UnitDelay_DSTATE_f;         /* '<S60>/Unit Delay' */

#define DW_TIDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TIDR_1

    uint16 UnitDelay_DSTATE_ln;        /* '<S59>/Unit Delay' */

#define DW_TIDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TIDR_1

    uint16 UnitDelay_DSTATE_gg;        /* '<S58>/Unit Delay' */

#define DW_TIDR_AC_T_VARIANT_EXISTS
#endif

    uint16 NeTIDR_Cnt_EngTrqHiFlt_MFOP;
                                  /* '<Root>/DSM_NeTIDR_Cnt_EngTrqHiFlt_MFOP' */
    uint16 NeTIDR_Cnt_EngTrqHiFlt_MSOF;
                                  /* '<Root>/DSM_NeTIDR_Cnt_EngTrqHiFlt_MSOF' */
    uint16 NeTIDR_Cnt_EngTrqLoFlt_MFOP;
                                  /* '<Root>/DSM_NeTIDR_Cnt_EngTrqLoFlt_MFOP' */
    uint16 NeTIDR_Cnt_EngTrqLoFlt_MSOF;
                                  /* '<Root>/DSM_NeTIDR_Cnt_EngTrqLoFlt_MSOF' */

#if Rte_SysCon_Variant_TIDR_1

    boolean UnitDelay1_DSTATE;         /* '<S68>/Unit Delay1' */

#define DW_TIDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TIDR_1

    boolean UnitDelay_DSTATE_c;        /* '<S27>/Unit Delay' */

#define DW_TIDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TIDR_1

    boolean UnitDelay_DSTATE_n;        /* '<S68>/Unit Delay' */

#define DW_TIDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TIDR_1

    boolean UnitDelay1_DSTATE_o;       /* '<S69>/Unit Delay1' */

#define DW_TIDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TIDR_1

    boolean UnitDelay1_DSTATE_on;      /* '<S27>/Unit Delay1' */

#define DW_TIDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TIDR_1

    boolean UnitDelay_DSTATE_f5;       /* '<S69>/Unit Delay' */

#define DW_TIDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TIDR_1

    boolean UnitDelay1_DSTATE_m;       /* '<S53>/Unit Delay1' */

#define DW_TIDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TIDR_1

    boolean UnitDelay_DSTATE_ex;       /* '<S20>/Unit Delay' */

#define DW_TIDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TIDR_1

    boolean UnitDelay_DSTATE_ll;       /* '<S53>/Unit Delay' */

#define DW_TIDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TIDR_1

    boolean UnitDelay1_DSTATE_j;       /* '<S54>/Unit Delay1' */

#define DW_TIDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TIDR_1

    boolean UnitDelay1_DSTATE_m0;      /* '<S20>/Unit Delay1' */

#define DW_TIDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TIDR_1

    boolean UnitDelay_DSTATE_j;        /* '<S54>/Unit Delay' */

#define DW_TIDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TIDR_1

    boolean UnitDelay_DSTATE_k;        /* '<S82>/Unit Delay' */

#define DW_TIDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TIDR_1

    boolean UnitDelay_DSTATE_fy;       /* '<S70>/Unit Delay' */

#define DW_TIDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TIDR_1

    boolean UnitDelay_DSTATE_g1;       /* '<S50>/Unit Delay' */

#define DW_TIDR_AC_T_VARIANT_EXISTS
#endif

    TeDFIB_e_FaultDebounceStatus VeTIDR_e_FaultSts_EngTorqPerfHi;
                               /* '<Root>/DS_VeTIDR_e_FaultSts_EngTorqPerfHi' */
    TeDFIB_e_FaultDebounceStatus VeTIDR_e_FaultSts_EngTorqPerfLo;
                               /* '<Root>/DS_VeTIDR_e_FaultSts_EngTorqPerfLo' */
    TeDFIB_e_FaultDebounceStatus VeTIDR_e_FaultSts_HybSysPerf1;
                                 /* '<Root>/DS_VeTIDR_e_FaultSts_HybSysPerf1' */
    TeDFIB_e_FaultDebounceStatus VeTIDR_e_FaultSts_HybSysPerf2;
                                 /* '<Root>/DS_VeTIDR_e_FaultSts_HybSysPerf2' */
    TeDFIB_e_FaultDebounceStatus VeTIDR_e_FaultSts_HybSysPerf5;
                                 /* '<Root>/DS_VeTIDR_e_FaultSts_HybSysPerf5' */
}
DW_TIDR_ac_T;

/* Invariant block signals (default storage) */
typedef struct
{
    const boolean Const1;              /* '<S98>/Const1' */
    const boolean Const2;              /* '<S98>/Const2' */
    const boolean Const3;              /* '<S98>/Const3' */
    const boolean Const4;              /* '<S98>/Const4' */
    const TeDFIB_e_FaultDebounceStatus Constant;/* '<S99>/Constant' */
    const TeDFIB_e_FaultDebounceStatus Constant_e;/* '<S100>/Constant' */
    const TeDFIB_e_FaultDebounceStatus Constant_i;/* '<S101>/Constant' */
    const TeDFIB_e_FaultDebounceStatus Constant_b;/* '<S102>/Constant' */
    const TeDFIB_e_FaultDebounceStatus Constant_d;/* '<S103>/Constant' */
}
ConstB_TIDR_ac_T;

/* Constant parameters (default storage) */
typedef struct
{

#if Rte_SysCon_Variant_TIDR_1

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S52>/Vector'
     *   '<S67>/Vector'
     */
    uint32 pooled2[2];

#define CONSTP_TIDR_AC_T_VARIANT_EXISTS
#endif

#ifndef CONSTP_TIDR_AC_T_VARIANT_EXISTS

    char _rt_unused;

#endif

}
ConstP_TIDR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TIDR
#include "MemMap.h"

extern VAR(B_TIDR_ac_T, TIDR_VAR_INIT) TIDR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TIDR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TIDR
#include "MemMap.h"

extern VAR(DW_TIDR_ac_T, TIDR_VAR_INIT) TIDR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TIDR
#include "MemMap.h"
#define START_SEC_CONST_UNSPECIFIED_TIDR
#include "MemMap.h"

extern CONST(ConstB_TIDR_ac_T, TIDR_VAR_INIT) TIDR_ac_ConstB;/* constant block i/o */

#define STOP_SEC_CONST_UNSPECIFIED_TIDR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_TIDR
#include "MemMap.h"

extern CONST(ConstP_TIDR_ac_T, TIDR_VAR_INIT) TIDR_ac_ConstP;

#define STOP_SEC_CONST_UNSPECIFIED_TIDR
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
 * '<Root>' : 'TIDR_ac'
 * '<S1>'   : 'TIDR_ac/TIDR_MedTEB'
 * '<S2>'   : 'TIDR_ac/TIDR_PwrOff'
 * '<S3>'   : 'TIDR_ac/TIDR_PwrOn'
 * '<S4>'   : 'TIDR_ac/TIDR_MedTEB/TITD'
 * '<S5>'   : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs'
 * '<S6>'   : 'TIDR_ac/TIDR_MedTEB/TITD/HybridPerfDiag'
 * '<S7>'   : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/Boolean Set Block'
 * '<S8>'   : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/Boolean Set Block1'
 * '<S9>'   : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/Boolean Set Block2'
 * '<S10>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/Boolean Set Block3'
 * '<S11>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag'
 * '<S12>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag_Stub'
 * '<S13>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/Enable_ResetCounts'
 * '<S14>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/Event_EngTorqPerfHi_ReportTestFailed_2'
 * '<S15>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/Event_EngTorqPerfHi_ReportTestPassed_3'
 * '<S16>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/Event_EngTorqPerfLo_ReportTestFailed_1'
 * '<S17>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/Event_EngTorqPerfLo_ReportTestPassed_4'
 * '<S18>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/General_Enable'
 * '<S19>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/HiEnable_Fail_Criteria'
 * '<S20>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/HiEngTrq_Pass_Fail'
 * '<S21>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/KeTIDR_Cnt_EngTrqHVBattFailLmt'
 * '<S22>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/KeTIDR_Cnt_EngTrqHVBattPassLmt'
 * '<S23>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/KeTIDR_Cnt_EngTrqHVBattSmplLmt'
 * '<S24>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/KeTIDR_b_EnblP1B11'
 * '<S25>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/KeTIDR_b_EnblP1B12'
 * '<S26>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/LoEnable_Fail_Criteria'
 * '<S27>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/LoEngTrq_Pass_Fail'
 * '<S28>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/Pass_Criteria'
 * '<S29>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/Subsystem'
 * '<S30>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/Subsystem1'
 * '<S31>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/Subsystem2'
 * '<S32>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/Subsystem3'
 * '<S33>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/Subsystem4'
 * '<S34>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/Event_EngTorqPerfHi_ReportTestFailed_2/Enumerated Constant16'
 * '<S35>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/Event_EngTorqPerfHi_ReportTestPassed_3/Enumerated Constant16'
 * '<S36>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/Event_EngTorqPerfLo_ReportTestFailed_1/Enumerated Constant16'
 * '<S37>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/Event_EngTorqPerfLo_ReportTestPassed_4/Enumerated Constant16'
 * '<S38>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/General_Enable/Enumerated Value'
 * '<S39>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/General_Enable/Enumerated Value1'
 * '<S40>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/General_Enable/KeTIDR_T_EngCoolMin'
 * '<S41>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/General_Enable/KeTIDR_b_EngSysDsbldEnbl'
 * '<S42>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/General_Enable/KeTIDR_b_EngTrqHVBattEnbl'
 * '<S43>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/General_Enable/KeTIDR_n_EngIdleMax'
 * '<S44>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/General_Enable/KeTIDR_n_EngIdleMin'
 * '<S45>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/General_Enable/KeTIDR_t_EngIdleDly'
 * '<S46>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/General_Enable/KeTIDR_t_dT'
 * '<S47>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/General_Enable/KeTIDR_v_VehicleSpdMin'
 * '<S48>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/General_Enable/OpenInterval'
 * '<S49>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/General_Enable/Turn On Delay Time'
 * '<S50>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/General_Enable/Turn On Delay Time/EdgeRising'
 * '<S51>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/HiEnable_Fail_Criteria/KtTIDR_I_BatCurrHiFailThrsh'
 * '<S52>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/HiEnable_Fail_Criteria/KtTIDR_M_EngTrqHiFailThrsh'
 * '<S53>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/HiEngTrq_Pass_Fail/FailBaseXofY'
 * '<S54>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/HiEngTrq_Pass_Fail/PassBaseXofY'
 * '<S55>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/HiEngTrq_Pass_Fail/Signal Latch On With Reset'
 * '<S56>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/HiEngTrq_Pass_Fail/UpdateMFOP'
 * '<S57>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/HiEngTrq_Pass_Fail/UpdateMSOF'
 * '<S58>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/HiEngTrq_Pass_Fail/FailBaseXofY/Counter Reset  Enabled '
 * '<S59>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/HiEngTrq_Pass_Fail/FailBaseXofY/Counter Reset  Enabled 1'
 * '<S60>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/HiEngTrq_Pass_Fail/PassBaseXofY/Counter Reset  Enabled '
 * '<S61>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/HiEngTrq_Pass_Fail/PassBaseXofY/Counter Reset  Enabled 1'
 * '<S62>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/HiEngTrq_Pass_Fail/UpdateMFOP/Max Fails on Pass FOM'
 * '<S63>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/HiEngTrq_Pass_Fail/UpdateMFOP/ResetLogic'
 * '<S64>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/HiEngTrq_Pass_Fail/UpdateMSOF/Min Sample on Fail'
 * '<S65>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/HiEngTrq_Pass_Fail/UpdateMSOF/ResetLogic'
 * '<S66>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/LoEnable_Fail_Criteria/KtTIDR_I_BatCurrLoFailThrsh'
 * '<S67>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/LoEnable_Fail_Criteria/KtTIDR_M_EngTrqLoFailThrsh'
 * '<S68>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/LoEngTrq_Pass_Fail/FailBaseXofY'
 * '<S69>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/LoEngTrq_Pass_Fail/PassBaseXofY'
 * '<S70>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/LoEngTrq_Pass_Fail/Signal Latch On With Reset'
 * '<S71>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/LoEngTrq_Pass_Fail/UpdateMFOP'
 * '<S72>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/LoEngTrq_Pass_Fail/UpdateMSOF'
 * '<S73>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/LoEngTrq_Pass_Fail/FailBaseXofY/Counter Reset  Enabled '
 * '<S74>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/LoEngTrq_Pass_Fail/FailBaseXofY/Counter Reset  Enabled 1'
 * '<S75>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/LoEngTrq_Pass_Fail/PassBaseXofY/Counter Reset  Enabled '
 * '<S76>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/LoEngTrq_Pass_Fail/PassBaseXofY/Counter Reset  Enabled 1'
 * '<S77>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/LoEngTrq_Pass_Fail/UpdateMFOP/Max Fails on Pass FOM'
 * '<S78>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/LoEngTrq_Pass_Fail/UpdateMFOP/ResetLogic'
 * '<S79>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/LoEngTrq_Pass_Fail/UpdateMSOF/Min Sample on Fail'
 * '<S80>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/LoEngTrq_Pass_Fail/UpdateMSOF/ResetLogic'
 * '<S81>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/Pass_Criteria/KtTIDR_M_EngTrqDeltaPassThrsh'
 * '<S82>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/Subsystem/Hysteresis'
 * '<S83>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/Subsystem/KeTIDR_Pct_BatSOC_LSP'
 * '<S84>'  : 'TIDR_ac/TIDR_MedTEB/TITD/EngTrqPerfDTCs/EngTorqPerfDiag/Subsystem/KeTIDR_Pct_BatSOC_RSP'
 * '<S85>'  : 'TIDR_ac/TIDR_MedTEB/TITD/HybridPerfDiag/Event_HybSysPerf1_ReportTestFailed_5'
 * '<S86>'  : 'TIDR_ac/TIDR_MedTEB/TITD/HybridPerfDiag/Event_HybSysPerf1_ReportTestPassed_8'
 * '<S87>'  : 'TIDR_ac/TIDR_MedTEB/TITD/HybridPerfDiag/Event_HybSysPerf2_ReportTestFailed_6'
 * '<S88>'  : 'TIDR_ac/TIDR_MedTEB/TITD/HybridPerfDiag/Event_HybSysPerf2_ReportTestPassed_9'
 * '<S89>'  : 'TIDR_ac/TIDR_MedTEB/TITD/HybridPerfDiag/Event_HybSysPerf5_ReportTestFailed_7'
 * '<S90>'  : 'TIDR_ac/TIDR_MedTEB/TITD/HybridPerfDiag/Event_HybSysPerf5_ReportTestPassed_10'
 * '<S91>'  : 'TIDR_ac/TIDR_MedTEB/TITD/HybridPerfDiag/Event_HybSysPerf1_ReportTestFailed_5/Enumerated Constant16'
 * '<S92>'  : 'TIDR_ac/TIDR_MedTEB/TITD/HybridPerfDiag/Event_HybSysPerf1_ReportTestPassed_8/Enumerated Constant16'
 * '<S93>'  : 'TIDR_ac/TIDR_MedTEB/TITD/HybridPerfDiag/Event_HybSysPerf2_ReportTestFailed_6/Enumerated Constant16'
 * '<S94>'  : 'TIDR_ac/TIDR_MedTEB/TITD/HybridPerfDiag/Event_HybSysPerf2_ReportTestPassed_9/Enumerated Constant16'
 * '<S95>'  : 'TIDR_ac/TIDR_MedTEB/TITD/HybridPerfDiag/Event_HybSysPerf5_ReportTestFailed_7/Enumerated Constant16'
 * '<S96>'  : 'TIDR_ac/TIDR_MedTEB/TITD/HybridPerfDiag/Event_HybSysPerf5_ReportTestPassed_10/Enumerated Constant16'
 * '<S97>'  : 'TIDR_ac/TIDR_PwrOn/DSM_Init'
 * '<S98>'  : 'TIDR_ac/TIDR_PwrOn/Sub_Out_Init'
 * '<S99>'  : 'TIDR_ac/TIDR_PwrOn/Sub_Out_Init/Const'
 * '<S100>' : 'TIDR_ac/TIDR_PwrOn/Sub_Out_Init/Const5'
 * '<S101>' : 'TIDR_ac/TIDR_PwrOn/Sub_Out_Init/Const6'
 * '<S102>' : 'TIDR_ac/TIDR_PwrOn/Sub_Out_Init/Const7'
 * '<S103>' : 'TIDR_ac/TIDR_PwrOn/Sub_Out_Init/Const8'
 */
#endif                                 /* RTW_HEADER_TIDR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
