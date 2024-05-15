/*
 * File: AADR_ac.h
 *
 * Code generated for Simulink model 'AADR_ac'.
 *
 * Model version                  : 9.87
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:01:44 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_AADR_ac_h_
#define RTW_HEADER_AADR_ac_h_
#include <math.h>
#include "Rte_Type.h"
#ifndef AADR_ac_COMMON_INCLUDES_
#define AADR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_AADR.h"
#endif                                 /* AADR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_AADR_ac_T
{

#if Rte_SysCon_Variant_AADR_1

    float32 LeAADR_Pct_AAD_CurrPos_out;/* '<S13>/PokeAADR_e_AAD_CurrPosChrt' */

#define B_AADR_AC_T_VARIANT_EXISTS
#endif

    float32 OutportBufferForPct_AAD_CurrPos_Init;
                                      /* '<S134>/KeAADR_Pct_AAD_CurrPos_Init' */
    boolean OutportBufferForb_AAD_CalReq_Init;/* '<S133>/FALSE_Constant1' */
    boolean OutportBufferForb_AAD_InitialIP_CalRq_In;/* '<S133>/FALSE_Constant2' */
    boolean OutportBufferForAAD_CalibrationActv_Init;/* '<S134>/FALSE_Constant1' */
    boolean OutportBufferForAAD_ErrUnderVolt_Init;/* '<S134>/FALSE_Constant2' */
    boolean OutportBufferForAAD_ErrOverVolt_Init;/* '<S134>/FALSE_Constant3' */
    boolean OutportBufferForAAD_ErrOverTemp_Init;/* '<S134>/FALSE_Constant4' */
    boolean OutportBufferForAAD_ErrMechStuck_Init;/* '<S134>/FALSE_Constant5' */
    boolean OutportBufferForAAD_ErrMechBreak_Init;/* '<S134>/FALSE_Constant6' */
    boolean OutportBufferForAAD_ResErr_Init;/* '<S134>/FALSE_Constant7' */
    boolean OutportBufferForAAD_CurrPosFA_Init;/* '<S134>/FALSE_Constant9' */
    boolean OutportBufferForEOL_AAD_OperationModeEnb;/* '<S134>/FALSE_Constant8' */

#if Rte_SysCon_Variant_AADR_1

    boolean TmpSignalConversionAtVeHPMR_b_PropSysAct;

#define B_AADR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_AADR_1

    boolean VeAADC_b_AAD_CalReq;       /* '<S18>/AAD_Control_Calib' */

#define B_AADR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_AADR_1

    boolean VeAADC_b_AAD_CalibrationFail;/* '<S18>/AAD_Control_Calib' */

#define B_AADR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_AADR_1

    boolean VeAADC_b_AAD_InitialIP_CalRq;/* '<S18>/AAD_Control_Calib' */

#define B_AADR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_AADR_1

    boolean VeAADC_b_AAD_DiagEnable;   /* '<S18>/AAD_Control_Calib' */

#define B_AADR_AC_T_VARIANT_EXISTS
#endif

    TeTAIR_e_IO_CntrlSt OutportBufferForEOL_AAD_IO_CntrlSt_Init;/* '<S134>/Enumerated_Constant3' */
    TeDFIB_e_FaultDebounceStatus OutportBufferForVeAADR_e_FaultSts_ActAir;/* '<S136>/ConstValue_FaultSts' */

#if Rte_SysCon_Variant_AADR_1

    TeDFIB_e_FaultDebounceStatus Merge;/* '<S26>/Merge' */

#define B_AADR_AC_T_VARIANT_EXISTS
#endif

    TeAADR_e_AAD_Pos OutportBufferFore_AAD_PosReq_Init;/* '<S133>/Enumerated_Constant2' */
    TeAADR_e_AAD_Pos OutportBufferFore_AAD_CurrPos_Init;/* '<S134>/Enumerated_Constant2' */
    TeAADR_e_AAD_Pos OutportBufferForEOL_AAD_PstnCmnd_Init;/* '<S134>/Enumerated_Constant' */

#if Rte_SysCon_Variant_AADR_1

    TeAADR_e_AAD_Pos VeAADC_e_AAD_PosReq;/* '<S18>/AAD_Control_Calib' */

#define B_AADR_AC_T_VARIANT_EXISTS
#endif

    TeAADR_e_AAD_EOLCalibration OutportBufferFore_AAD_EOLCalResults_Init;/* '<S133>/Enumerated_Constant1' */
    TeAADR_e_AAD_Calibration_Sts OutportBufferForAAD_CalibrationSts_Init;/* '<S134>/Enumerated_Constant1' */
}
B_AADR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_AADR_ac_T
{

#if Rte_SysCon_Variant_AADR_1

    float32 UnitDelay_DSTATE;          /* '<S129>/Unit Delay' */

#define DW_AADR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_AADR_1

    float32 UnitDelay_DSTATE_j;        /* '<S128>/Unit Delay' */

#define DW_AADR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_AADR_1

    float32 UnitDelay_DSTATE_a;        /* '<S127>/Unit Delay' */

#define DW_AADR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_AADR_1

    float32 UnitDelay_DSTATE_n;        /* '<S64>/Unit Delay' */

#define DW_AADR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_AADR_1

    float32 UnitDelay_DSTATE_e;        /* '<S60>/Unit Delay' */

#define DW_AADR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_AADR_1

    float32 LeAADR_t_AAD_StartWaitTime;/* '<S18>/AAD_Control_Calib' */

#define DW_AADR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_AADR_1

    float32 LeAADR_t_AAD_CalWaitTime;  /* '<S18>/AAD_Control_Calib' */

#define DW_AADR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_AADR_1

    float32 LeAADR_t_AAD_FaultWaitTime;/* '<S18>/AAD_Control_Calib' */

#define DW_AADR_AC_T_VARIANT_EXISTS
#endif

    uint16 NeAADR_Cnt_AAD_PerfDiag_MFOP;
                                 /* '<Root>/DSM_NeAADR_Cnt_AAD_PerfDiag_MFOP' */

#if Rte_SysCon_Variant_AADR_1

    boolean UnitDelay_DSTATE_p;        /* '<S132>/Unit Delay' */

#define DW_AADR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_AADR_1

    boolean UnitDelay_DSTATE_c;        /* '<S131>/Unit Delay' */

#define DW_AADR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_AADR_1

    boolean UnitDelay_DSTATE_i;        /* '<S130>/Unit Delay' */

#define DW_AADR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_AADR_1

    boolean UnitDelay_DSTATE_l;        /* '<S27>/Unit Delay' */

#define DW_AADR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_AADR_1

    boolean UnitDelay1_DSTATE;         /* '<S27>/Unit Delay1' */

#define DW_AADR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_AADR_1

    boolean UnitDelay_DSTATE_o;        /* '<S65>/Unit Delay' */

#define DW_AADR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_AADR_1

    boolean UnitDelay_DSTATE_m;        /* '<S62>/Unit Delay' */

#define DW_AADR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_AADR_1

    boolean UnitDelay_DSTATE_j2;       /* '<S59>/Unit Delay' */

#define DW_AADR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_AADR_1

    boolean UnitDelay_DSTATE_l4;       /* '<S28>/Unit Delay' */

#define DW_AADR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_AADR_1

    TeAADR_e_AAD_Pos UnitDelay3_DSTATE;/* '<S20>/Unit Delay3' */

#define DW_AADR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_AADR_1

    uint8 StatusByte_LIN1_BusOff;      /* '<Root>/DS_StatusByte_LIN1_BusOff' */

#define DW_AADR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_AADR_1

    uint8 StatusByte_LIN2_BusOff;      /* '<Root>/DS_StatusByte_LIN2_BusOff' */

#define DW_AADR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_AADR_1

    uint8 StatusByte_LostCommActAirDamMod;
                               /* '<Root>/DS_StatusByte_LostCommActAirDamMod' */

#define DW_AADR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_AADR_1

    uint8 is_active_c2_AADR_ac;        /* '<S18>/AAD_Control_Calib' */

#define DW_AADR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_AADR_1

    uint8 is_c2_AADR_ac;               /* '<S18>/AAD_Control_Calib' */

#define DW_AADR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_AADR_1

    uint8 is_AAD_EOL_DID;              /* '<S18>/AAD_Control_Calib' */

#define DW_AADR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_AADR_1

    uint8 is_AAD_NORMAL_CONTROL;       /* '<S18>/AAD_Control_Calib' */

#define DW_AADR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_AADR_1

    uint8 is_AAD_CAL_SEQ;              /* '<S18>/AAD_Control_Calib' */

#define DW_AADR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_AADR_1

    uint8 is_AAD_OPERATIONAL;          /* '<S18>/AAD_Control_Calib' */

#define DW_AADR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_AADR_1

    uint8 LeAADR_Cnt_AAD_CalAttempt;   /* '<S18>/AAD_Control_Calib' */

#define DW_AADR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_AADR_1

    boolean LeAADR_b_CalAfterBatDiscDone;/* '<S18>/AAD_Control_Calib' */

#define DW_AADR_AC_T_VARIANT_EXISTS
#endif

}
DW_AADR_ac_T;

/* Invariant block signals (default storage) */
typedef struct
{
    const TeTAIR_e_IO_CntrlSt Constant;/* '<S142>/Constant' */
    const TeDFIB_e_FaultDebounceStatus Constant_g;/* '<S144>/Constant' */
    const TeAADR_e_AAD_Pos Constant_l; /* '<S138>/Constant' */
    const TeAADR_e_AAD_Pos Constant_i; /* '<S141>/Constant' */
    const TeAADR_e_AAD_Pos Constant_m; /* '<S139>/Constant' */
    const TeAADR_e_AAD_EOLCalibration Constant_c;/* '<S137>/Constant' */
    const TeAADR_e_AAD_Calibration_Sts Constant_h;/* '<S140>/Constant' */
}
ConstB_AADR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_AADR
#include "MemMap.h"

extern VAR(B_AADR_ac_T, AADR_VAR_INIT) AADR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_AADR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_AADR
#include "MemMap.h"

extern VAR(DW_AADR_ac_T, AADR_VAR_INIT) AADR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_AADR
#include "MemMap.h"
#define START_SEC_CONST_UNSPECIFIED_AADR
#include "MemMap.h"

extern CONST(ConstB_AADR_ac_T, AADR_VAR_INIT) AADR_ac_ConstB;/* constant block i/o */

#define STOP_SEC_CONST_UNSPECIFIED_AADR
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
 * '<Root>' : 'AADR_ac'
 * '<S1>'   : 'AADR_ac/AADR_MedTEH'
 * '<S2>'   : 'AADR_ac/AADR_PwrOff'
 * '<S3>'   : 'AADR_ac/AADR_PwrOn'
 * '<S4>'   : 'AADR_ac/FsftAADR_b_AAD_CurrPos'
 * '<S5>'   : 'AADR_ac/PokeAADR_b_AAD_CalibrationActv'
 * '<S6>'   : 'AADR_ac/PokeAADR_b_AAD_ErrMechBreak'
 * '<S7>'   : 'AADR_ac/PokeAADR_b_AAD_ErrMechStuck'
 * '<S8>'   : 'AADR_ac/PokeAADR_b_AAD_ErrOverTemp'
 * '<S9>'   : 'AADR_ac/PokeAADR_b_AAD_ErrOverVolt'
 * '<S10>'  : 'AADR_ac/PokeAADR_b_AAD_ErrUnderVolt'
 * '<S11>'  : 'AADR_ac/PokeAADR_b_AAD_ResErr'
 * '<S12>'  : 'AADR_ac/PokeAADR_e_AAD_CalibrationSts'
 * '<S13>'  : 'AADR_ac/PokeAADR_e_AAD_CurrPos'
 * '<S14>'  : 'AADR_ac/Runnable_DVC_AAD_Calibration_Start'
 * '<S15>'  : 'AADR_ac/Runnable_DVC_AAD_OperationModeEnbl'
 * '<S16>'  : 'AADR_ac/Runnable_DVC_AAD_PstnCmnd'
 * '<S17>'  : 'AADR_ac/AADR_MedTEH/AADD'
 * '<S18>'  : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control'
 * '<S19>'  : 'AADR_ac/AADR_MedTEH/AADD/AAD_PerfDiag'
 * '<S20>'  : 'AADR_ac/AADR_MedTEH/AADD/Enable_Condition'
 * '<S21>'  : 'AADR_ac/AADR_MedTEH/AADD/Enable_ResetCounts'
 * '<S22>'  : 'AADR_ac/AADR_MedTEH/AADD/Fail_Symptom'
 * '<S23>'  : 'AADR_ac/AADR_MedTEH/AADD/AAD_PerfDiag/KeAADR_Cnt_AAD_PerfDiag_FailCnt'
 * '<S24>'  : 'AADR_ac/AADR_MedTEH/AADD/AAD_PerfDiag/KeAADR_Cnt_AAD_PerfDiag_SmpCnt'
 * '<S25>'  : 'AADR_ac/AADR_MedTEH/AADD/AAD_PerfDiag/KeAADR_b_AAD_PerfDiag_XYEnbl'
 * '<S26>'  : 'AADR_ac/AADR_MedTEH/AADD/AAD_PerfDiag/XofY_v2'
 * '<S27>'  : 'AADR_ac/AADR_MedTEH/AADD/AAD_PerfDiag/XofY_v2/BaseXofY'
 * '<S28>'  : 'AADR_ac/AADR_MedTEH/AADD/AAD_PerfDiag/XofY_v2/EdgeFalling1'
 * '<S29>'  : 'AADR_ac/AADR_MedTEH/AADD/AAD_PerfDiag/XofY_v2/Enumerated Constant16'
 * '<S30>'  : 'AADR_ac/AADR_MedTEH/AADD/AAD_PerfDiag/XofY_v2/Fail'
 * '<S31>'  : 'AADR_ac/AADR_MedTEH/AADD/AAD_PerfDiag/XofY_v2/Init'
 * '<S32>'  : 'AADR_ac/AADR_MedTEH/AADD/AAD_PerfDiag/XofY_v2/Pass'
 * '<S33>'  : 'AADR_ac/AADR_MedTEH/AADD/AAD_PerfDiag/XofY_v2/UpdateMFOP'
 * '<S34>'  : 'AADR_ac/AADR_MedTEH/AADD/AAD_PerfDiag/XofY_v2/BaseXofY/Counter Reset  Enabled '
 * '<S35>'  : 'AADR_ac/AADR_MedTEH/AADD/AAD_PerfDiag/XofY_v2/BaseXofY/Counter Reset  Enabled 1'
 * '<S36>'  : 'AADR_ac/AADR_MedTEH/AADD/AAD_PerfDiag/XofY_v2/Fail/Enumerated Constant16'
 * '<S37>'  : 'AADR_ac/AADR_MedTEH/AADD/AAD_PerfDiag/XofY_v2/Init/Enumerated Constant16'
 * '<S38>'  : 'AADR_ac/AADR_MedTEH/AADD/AAD_PerfDiag/XofY_v2/Pass/Enumerated Constant16'
 * '<S39>'  : 'AADR_ac/AADR_MedTEH/AADD/AAD_PerfDiag/XofY_v2/UpdateMFOP/Max Fails on Pass FOM'
 * '<S40>'  : 'AADR_ac/AADR_MedTEH/AADD/AAD_PerfDiag/XofY_v2/UpdateMFOP/ResetLogic'
 * '<S41>'  : 'AADR_ac/AADR_MedTEH/AADD/Enable_Condition/Enumerated_Constant1'
 * '<S42>'  : 'AADR_ac/AADR_MedTEH/AADD/Enable_Condition/Enumerated_Constant2'
 * '<S43>'  : 'AADR_ac/AADR_MedTEH/AADD/Enable_Condition/Enumerated_Constant3'
 * '<S44>'  : 'AADR_ac/AADR_MedTEH/AADD/Enable_Condition/EvtInfo_LIN1_BusOff_FaultActiveTOC_3'
 * '<S45>'  : 'AADR_ac/AADR_MedTEH/AADD/Enable_Condition/EvtInfo_LIN2_BusOff_FaultActiveTOC_4'
 * '<S46>'  : 'AADR_ac/AADR_MedTEH/AADD/Enable_Condition/EvtInfo_LostCommActAirDamMod_FaultActiveTOC_5'
 * '<S47>'  : 'AADR_ac/AADR_MedTEH/AADD/Enable_Condition/KeAADR_b_AADCommBus_Slct'
 * '<S48>'  : 'AADR_ac/AADR_MedTEH/AADD/Enable_Condition/KeAADR_b_AAD_Diag_CalFail_Enbl'
 * '<S49>'  : 'AADR_ac/AADR_MedTEH/AADD/Enable_Condition/KeAADR_b_AAD_Diag_Errors_Enbl'
 * '<S50>'  : 'AADR_ac/AADR_MedTEH/AADD/Enable_Condition/KeAADR_b_AAD_Diag_OverVolt_Enbl'
 * '<S51>'  : 'AADR_ac/AADR_MedTEH/AADD/Enable_Condition/KeAADR_b_AAD_IsDiagGlblCnd_Ovrd'
 * '<S52>'  : 'AADR_ac/AADR_MedTEH/AADD/Enable_Condition/KeAADR_b_AAD_PerfDiag_LINBusOff_Ovrd'
 * '<S53>'  : 'AADR_ac/AADR_MedTEH/AADD/Enable_Condition/KeAADR_b_AAD_PerfDiag_LOC_Ovrd'
 * '<S54>'  : 'AADR_ac/AADR_MedTEH/AADD/Enable_Condition/KeAADR_b_AAD_PropSysActv_Ovrd'
 * '<S55>'  : 'AADR_ac/AADR_MedTEH/AADD/Enable_Condition/KeAADR_b_AAD_SNAEnblCndsOV'
 * '<S56>'  : 'AADR_ac/AADR_MedTEH/AADD/Enable_Condition/KeAADR_e_AAD_DeployPos'
 * '<S57>'  : 'AADR_ac/AADR_MedTEH/AADD/Enable_Condition/KeAADR_t_AAD_FA_WaitTime'
 * '<S58>'  : 'AADR_ac/AADR_MedTEH/AADD/Enable_Condition/KeAADR_t_AAD_Perf_PosReqNoChgTime_Enbl'
 * '<S59>'  : 'AADR_ac/AADR_MedTEH/AADD/Enable_Condition/Signal_Latch_On'
 * '<S60>'  : 'AADR_ac/AADR_MedTEH/AADD/Enable_Condition/Turn_On_Delay_Time'
 * '<S61>'  : 'AADR_ac/AADR_MedTEH/AADD/Enable_Condition/Turn_On_Delay_Time_with_Resetable_delay'
 * '<S62>'  : 'AADR_ac/AADR_MedTEH/AADD/Enable_Condition/Turn_On_Delay_Time/EdgeRising'
 * '<S63>'  : 'AADR_ac/AADR_MedTEH/AADD/Enable_Condition/Turn_On_Delay_Time_with_Resetable_delay/EdgeRising_with_resetable_delay'
 * '<S64>'  : 'AADR_ac/AADR_MedTEH/AADD/Enable_Condition/Turn_On_Delay_Time_with_Resetable_delay/Unit_Delay_Reset_Enabled'
 * '<S65>'  : 'AADR_ac/AADR_MedTEH/AADD/Enable_Condition/Turn_On_Delay_Time_with_Resetable_delay/EdgeRising_with_resetable_delay/Unit_Delay_Reset_Enabled'
 * '<S66>'  : 'AADR_ac/AADR_MedTEH/AADD/Fail_Symptom/Enumerated_Constant1'
 * '<S67>'  : 'AADR_ac/AADR_MedTEH/AADD/Fail_Symptom/KeAADR_b_AAD_Diag_CalFail_Enbl'
 * '<S68>'  : 'AADR_ac/AADR_MedTEH/AADD/Fail_Symptom/KeAADR_b_AAD_Diag_Errors_Enbl'
 * '<S69>'  : 'AADR_ac/AADR_MedTEH/AADD/Fail_Symptom/KeAADR_b_AAD_Diag_OverVolt_Enbl'
 * '<S70>'  : 'AADR_ac/AADR_MedTEH/AADD/Fail_Symptom/KeAADR_b_AAD_SNAFaultEnable'
 * '<S71>'  : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/AAD_CalRoutineResults'
 * '<S72>'  : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/AAD_Control_Calib'
 * '<S73>'  : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/AAD_IsCalibrated'
 * '<S74>'  : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/Boolean_Set_Block'
 * '<S75>'  : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/Boolean_Set_Block1'
 * '<S76>'  : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/Deploy'
 * '<S77>'  : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/EnableConditionsForCalibration'
 * '<S78>'  : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/Enum_Set_Block1'
 * '<S79>'  : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/EvtInfo_LIN1_BusOff_FaultActiveTOC_7'
 * '<S80>'  : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/EvtInfo_LIN2_BusOff_FaultActiveTOC_8'
 * '<S81>'  : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/EvtInfo_LostCommActAirDamMod_FaultActiveTOC_6'
 * '<S82>'  : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/KeAADR_Cnt_AAD_MaxCalTry'
 * '<S83>'  : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/KeAADR_Cnt_MaxKeyCyclefromLstCal'
 * '<S84>'  : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/KeAADR_b_AADCommBus_Slct'
 * '<S85>'  : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/KeAADR_e_AAD_DefaultPos'
 * '<S86>'  : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/KeAADR_e_AAD_DeployPos'
 * '<S87>'  : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/KeAADR_e_AAD_RetractPos'
 * '<S88>'  : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/KeAADR_t_AAD_CalWaitTime'
 * '<S89>'  : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/KeAADR_t_AAD_FaultWaitTime'
 * '<S90>'  : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/KeAADR_t_AAD_StartWaitTime'
 * '<S91>'  : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/KeAADR_t_AAD_TimeBeforeNextCal'
 * '<S92>'  : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/KeAADR_t_AAD_TskRate'
 * '<S93>'  : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/KeAADR_t_AAD_WaitTimeCommRx'
 * '<S94>'  : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/Retract'
 * '<S95>'  : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/AAD_CalRoutineResults/Enumerated_Constant1'
 * '<S96>'  : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/AAD_CalRoutineResults/Enumerated_Constant2'
 * '<S97>'  : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/AAD_CalRoutineResults/Enumerated_Constant3'
 * '<S98>'  : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/AAD_IsCalibrated/Enumerated_Constant'
 * '<S99>'  : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/Deploy/Enumerated_Value1'
 * '<S100>' : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/Deploy/Enumerated_Value3'
 * '<S101>' : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/Deploy/KeAADR_U_AAD_MaxBattVltg_Alw'
 * '<S102>' : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/Deploy/KeAADR_U_AAD_MinBattVltg_Alw'
 * '<S103>' : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/Deploy/KeAADR_a_AAD_MaxLatAccel'
 * '<S104>' : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/Deploy/KeAADR_a_AAD_MaxLongAccel'
 * '<S105>' : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/Deploy/KeAADR_v_AAD_VehSpdThrToDeploy'
 * '<S106>' : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/EnableConditionsForCalibration/Enumerated_Value1'
 * '<S107>' : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/EnableConditionsForCalibration/Enumerated_Value2'
 * '<S108>' : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/EnableConditionsForCalibration/Enumerated_Value3'
 * '<S109>' : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/EnableConditionsForCalibration/KeAADR_T_AAD_MinAmbTempForCal'
 * '<S110>' : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/EnableConditionsForCalibration/KeAADR_U_AAD_MaxBattVltg_Alw'
 * '<S111>' : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/EnableConditionsForCalibration/KeAADR_U_AAD_MinBattVltg_Alw'
 * '<S112>' : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/EnableConditionsForCalibration/KeAADR_v_AAD_MaxVehSpdToEnblCal'
 * '<S113>' : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/EnableConditionsForCalibration/KeAADR_v_AAD_MinVehSpdToEnblCal'
 * '<S114>' : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/Retract/Enumerated_Value1'
 * '<S115>' : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/Retract/Enumerated_Value2'
 * '<S116>' : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/Retract/Enumerated_Value3'
 * '<S117>' : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/Retract/Enumerated_Value4'
 * '<S118>' : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/Retract/KeAADR_U_AAD_MaxBattVltg_Alw'
 * '<S119>' : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/Retract/KeAADR_e_AAD_TrrnMdStOne'
 * '<S120>' : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/Retract/KeAADR_e_AAD_TrrnMdStThree'
 * '<S121>' : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/Retract/KeAADR_e_AAD_TrrnMdStTwo'
 * '<S122>' : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/Retract/KeAADR_t_AAD_TmDlyABSDetected'
 * '<S123>' : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/Retract/KeAADR_t_AAD_TmDlyASDetected'
 * '<S124>' : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/Retract/KeAADR_t_AAD_TmDlyToRetract'
 * '<S125>' : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/Retract/KeAADR_t_AAD_TskRate'
 * '<S126>' : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/Retract/KeAADR_v_AAD_VehSpdThrToRetract'
 * '<S127>' : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/Retract/Turn_Off_Delay_Time'
 * '<S128>' : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/Retract/Turn_Off_Delay_Time1'
 * '<S129>' : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/Retract/Turn_On_Delay_Time'
 * '<S130>' : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/Retract/Turn_Off_Delay_Time/EdgeFalling'
 * '<S131>' : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/Retract/Turn_Off_Delay_Time1/EdgeFalling'
 * '<S132>' : 'AADR_ac/AADR_MedTEH/AAD_Calib_Control/Retract/Turn_On_Delay_Time/EdgeRising'
 * '<S133>' : 'AADR_ac/AADR_PwrOn/AADO_Init'
 * '<S134>' : 'AADR_ac/AADR_PwrOn/AAD_INIT_Cals'
 * '<S135>' : 'AADR_ac/AADR_PwrOn/DSM_Init'
 * '<S136>' : 'AADR_ac/AADR_PwrOn/Sub_Out_Init'
 * '<S137>' : 'AADR_ac/AADR_PwrOn/AADO_Init/Enumerated_Constant1'
 * '<S138>' : 'AADR_ac/AADR_PwrOn/AADO_Init/Enumerated_Constant2'
 * '<S139>' : 'AADR_ac/AADR_PwrOn/AAD_INIT_Cals/Enumerated_Constant'
 * '<S140>' : 'AADR_ac/AADR_PwrOn/AAD_INIT_Cals/Enumerated_Constant1'
 * '<S141>' : 'AADR_ac/AADR_PwrOn/AAD_INIT_Cals/Enumerated_Constant2'
 * '<S142>' : 'AADR_ac/AADR_PwrOn/AAD_INIT_Cals/Enumerated_Constant3'
 * '<S143>' : 'AADR_ac/AADR_PwrOn/AAD_INIT_Cals/KeAADR_Pct_AAD_CurrPos_Init'
 * '<S144>' : 'AADR_ac/AADR_PwrOn/Sub_Out_Init/ConstValue_FaultSts'
 * '<S145>' : 'AADR_ac/FsftAADR_b_AAD_CurrPos/FsftAADR_b_AAD_CurrPosChrt'
 * '<S146>' : 'AADR_ac/PokeAADR_b_AAD_CalibrationActv/PokeAADR_b_AAD_CalibrationActvChrt'
 * '<S147>' : 'AADR_ac/PokeAADR_b_AAD_ErrMechBreak/PokeAADR_b_AAD_ErrMechBreakChrt'
 * '<S148>' : 'AADR_ac/PokeAADR_b_AAD_ErrMechStuck/PokeAADR_b_AAD_ErrMechStuckChrt'
 * '<S149>' : 'AADR_ac/PokeAADR_b_AAD_ErrOverTemp/PokeAADR_b_AAD_ErrOverTempChrt'
 * '<S150>' : 'AADR_ac/PokeAADR_b_AAD_ErrOverVolt/PokeAADR_b_AAD_ErrOverVoltChrt'
 * '<S151>' : 'AADR_ac/PokeAADR_b_AAD_ErrUnderVolt/PokeAADR_b_AAD_ErrUnderVoltChrt'
 * '<S152>' : 'AADR_ac/PokeAADR_b_AAD_ResErr/PokeAADR_b_AAD_ResErrChrt'
 * '<S153>' : 'AADR_ac/PokeAADR_e_AAD_CalibrationSts/PokeAADR_e_AAD_CalibrationStsChrt'
 * '<S154>' : 'AADR_ac/PokeAADR_e_AAD_CurrPos/PokeAADR_e_AAD_CurrPosChrt'
 * '<S155>' : 'AADR_ac/Runnable_DVC_AAD_Calibration_Start/Enumerated_Constant'
 * '<S156>' : 'AADR_ac/Runnable_DVC_AAD_PstnCmnd/Enumerated_Constant'
 * '<S157>' : 'AADR_ac/Runnable_DVC_AAD_PstnCmnd/Enumerated_Constant1'
 * '<S158>' : 'AADR_ac/Runnable_DVC_AAD_PstnCmnd/Enumerated_Constant2'
 * '<S159>' : 'AADR_ac/Runnable_DVC_AAD_PstnCmnd/Enumerated_Constant3'
 * '<S160>' : 'AADR_ac/Runnable_DVC_AAD_PstnCmnd/Enumerated_Constant4'
 */
#endif                                 /* RTW_HEADER_AADR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
