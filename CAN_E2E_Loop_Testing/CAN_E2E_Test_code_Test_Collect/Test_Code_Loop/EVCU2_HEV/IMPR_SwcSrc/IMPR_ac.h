/*
 * File: IMPR_ac.h
 *
 * Code generated for Simulink model 'IMPR_ac'.
 *
 * Model version                  : 9.82
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 14:16:53 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_IMPR_ac_h_
#define RTW_HEADER_IMPR_ac_h_
#include <math.h>
#include "Rte_Type.h"
#ifndef IMPR_ac_COMMON_INCLUDES_
#define IMPR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_IMPR.h"
#endif                                 /* IMPR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_IMPR_ac_T
{
    boolean OutportBufferForVeIMPR_b_HighVoltageRapi;/* '<S83>/Const1' */
    boolean OutportBufferForVeIMPR_b_LossCommORC_Out;/* '<S83>/Const2' */
    boolean OutportBufferForVeIMPR_b_ImpactDetectedC;/* '<S83>/Const4' */
    boolean OutportBufferForVeIMPR_b_ImpactToggleCAN;/* '<S83>/Const3' */
    boolean OutportBufferForVeIMPR_b_VehImpactDetect;/* '<S82>/FALSE Constant' */
    boolean OutportBufferForVeIMPR_b_ImpactToogleFA;/* '<S82>/FALSE Constant1' */
    boolean OutportBufferForVeIMPI_b_VehImpactDetect;/* '<S82>/FALSE Constant2' */
    boolean OutportBufferForVeIMPI_b_ImpactToggle;/* '<S82>/FALSE Constant3' */
    boolean OutportBufferForVeIMPI_b_VehImpactDete_a;/* '<S82>/FALSE Constant4' */
    boolean OutportBufferForVeIMPI_b_ImpactToggle_C2;/* '<S82>/FALSE Constant5' */
    boolean OutportBufferForVeIMPI_b_VehImpactDete_f;/* '<S82>/FALSE Constant6' */
    boolean OutportBufferForVeIMPI_b_ImpactToggle__c;/* '<S82>/FALSE Constant7' */
    boolean OutportBufferForVeIMPI_b_VehImpactHardwi;/* '<S82>/FALSE Constant8' */
    boolean OutportBufferForVeIMPI_b_VehImpactHard_d;/* '<S82>/FALSE Constant9' */
    boolean OutportBufferForVeIMPI_b_VehImpactHard_e;/* '<S82>/FALSE Constant10' */
    boolean OutportBufferForVeIMPI_b_VehImpactHar_dt;/* '<S82>/FALSE Constant11' */
    boolean Logical;                   /* '<S8>/Logical' */
    boolean Merge_h;                   /* '<S25>/Merge' */
    boolean Merge1;                    /* '<S25>/Merge1' */
    TeDFIB_e_FaultDebounceStatus OutportBufferForVeIMPR_e_FaultSts_CntrlS;/* '<S83>/Const' */
    TeDFIB_e_FaultDebounceStatus Merge_j;/* '<S56>/Merge' */
}
B_IMPR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_IMPR_ac_T
{
    float32 UnitDelay_DSTATE;          /* '<S51>/Unit Delay' */
    uint16 NeIMPR_Cnt_HVShtDwn_MFOP;   /* '<Root>/DSM_2' */
    boolean UnitDelay_DSTATE_as;       /* '<S57>/Unit Delay' */
    boolean UnitDelay1_DSTATE;         /* '<S57>/Unit Delay1' */
    boolean UnitDelay_DSTATE_m;        /* '<S58>/Unit Delay' */
    boolean UnitDelay_DSTATE_p;        /* '<S55>/Unit Delay' */
    uint8 is_active_c13_IMPR_ac;       /* '<S8>/RuntimeEEWrite_ClearImpact' */
    uint8 is_c13_IMPR_ac;              /* '<S8>/RuntimeEEWrite_ClearImpact' */
    uint8 is_active_c11_IMPR_ac;       /* '<S25>/RuntimeEEWrite' */
    uint8 is_c11_IMPR_ac;              /* '<S25>/RuntimeEEWrite' */
}
DW_IMPR_ac_T;

/* Invariant block signals (default storage) */
typedef struct
{
    const TeDFIB_e_FaultDebounceStatus Constant;/* '<S84>/Constant' */
}
ConstB_IMPR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_IMPR
#include "MemMap.h"

extern VAR(B_IMPR_ac_T, IMPR_VAR_INIT) IMPR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_IMPR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_IMPR
#include "MemMap.h"

extern VAR(DW_IMPR_ac_T, IMPR_VAR_INIT) IMPR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_IMPR
#include "MemMap.h"
#define START_SEC_CONST_UNSPECIFIED_IMPR
#include "MemMap.h"

extern CONST(ConstB_IMPR_ac_T, IMPR_VAR_INIT) IMPR_ac_ConstB;/* constant block i/o */

#define STOP_SEC_CONST_UNSPECIFIED_IMPR
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
 * '<Root>' : 'IMPR_ac'
 * '<S1>'   : 'IMPR_ac/FsftIMPR_b_ImpactHardwire'
 * '<S2>'   : 'IMPR_ac/FsftIMPR_b_ImpactHardwireV'
 * '<S3>'   : 'IMPR_ac/FsftIMPR_b_ImpactToggle'
 * '<S4>'   : 'IMPR_ac/FsftIMPR_b_ImpactToggle_C2'
 * '<S5>'   : 'IMPR_ac/FsftIMPR_b_VehImpactDetected'
 * '<S6>'   : 'IMPR_ac/FsftIMPR_b_VehImpactDetected_C2'
 * '<S7>'   : 'IMPR_ac/IMPR_MedTEB'
 * '<S8>'   : 'IMPR_ac/IMPR_MedTEH'
 * '<S9>'   : 'IMPR_ac/IMPR_PwrOff'
 * '<S10>'  : 'IMPR_ac/IMPR_PwrOn'
 * '<S11>'  : 'IMPR_ac/PokeIMPR_b_ImpactHardwire'
 * '<S12>'  : 'IMPR_ac/PokeIMPR_b_ImpactHardwireV'
 * '<S13>'  : 'IMPR_ac/PokeIMPR_b_ImpactToggle'
 * '<S14>'  : 'IMPR_ac/PokeIMPR_b_ImpactToggle_C2'
 * '<S15>'  : 'IMPR_ac/PokeIMPR_b_ImpctDtctd_HVShtdwn'
 * '<S16>'  : 'IMPR_ac/PokeIMPR_b_VehImpactDetected'
 * '<S17>'  : 'IMPR_ac/PokeIMPR_b_VehImpactDetected_C2'
 * '<S18>'  : 'IMPR_ac/RWD9E3B_IPEETstMilgeLmt'
 * '<S19>'  : 'IMPR_ac/FsftIMPR_b_ImpactHardwire/FsftIMPR_b_ImpactHardwire_Chrt'
 * '<S20>'  : 'IMPR_ac/FsftIMPR_b_ImpactHardwireV/FsftIMPR_b_ImpactHardwireV_C2Chrt'
 * '<S21>'  : 'IMPR_ac/FsftIMPR_b_ImpactToggle/FsftIMPR_b_ImpactToggleChrt'
 * '<S22>'  : 'IMPR_ac/FsftIMPR_b_ImpactToggle_C2/FsftIMPR_b_ImpactToggle_C2Chrt'
 * '<S23>'  : 'IMPR_ac/FsftIMPR_b_VehImpactDetected/FsftIMPR_b_VehImpactDetectedChrt'
 * '<S24>'  : 'IMPR_ac/FsftIMPR_b_VehImpactDetected_C2/FsftIMPR_b_VehImpactDetected_C2Chrt'
 * '<S25>'  : 'IMPR_ac/IMPR_MedTEB/IMPC_DtrmnHVRpdShtDwn'
 * '<S26>'  : 'IMPR_ac/IMPR_MedTEB/IMPO_ProcessOutputs'
 * '<S27>'  : 'IMPR_ac/IMPR_MedTEB/IMPC_DtrmnHVRpdShtDwn/Boolean Set Block1'
 * '<S28>'  : 'IMPR_ac/IMPR_MedTEB/IMPC_DtrmnHVRpdShtDwn/HeIMPR_t_MedTEB'
 * '<S29>'  : 'IMPR_ac/IMPR_MedTEB/IMPC_DtrmnHVRpdShtDwn/IfAct'
 * '<S30>'  : 'IMPR_ac/IMPR_MedTEB/IMPC_DtrmnHVRpdShtDwn/IfAct1'
 * '<S31>'  : 'IMPR_ac/IMPR_MedTEB/IMPC_DtrmnHVRpdShtDwn/IfAct2'
 * '<S32>'  : 'IMPR_ac/IMPR_MedTEB/IMPC_DtrmnHVRpdShtDwn/IfAct3'
 * '<S33>'  : 'IMPR_ac/IMPR_MedTEB/IMPC_DtrmnHVRpdShtDwn/KeIMPC_b_EnableImpact_BSW'
 * '<S34>'  : 'IMPR_ac/IMPR_MedTEB/IMPC_DtrmnHVRpdShtDwn/KeIMPC_b_Enable_Impact'
 * '<S35>'  : 'IMPR_ac/IMPR_MedTEB/IMPC_DtrmnHVRpdShtDwn/KeIMPR_Cnt_HVShtDwn_FailLmt'
 * '<S36>'  : 'IMPR_ac/IMPR_MedTEB/IMPC_DtrmnHVRpdShtDwn/KeIMPR_Cnt_HVShtDwn_SmplLmt'
 * '<S37>'  : 'IMPR_ac/IMPR_MedTEB/IMPC_DtrmnHVRpdShtDwn/KeIMPR_Cnt_WriteAttempts'
 * '<S38>'  : 'IMPR_ac/IMPR_MedTEB/IMPC_DtrmnHVRpdShtDwn/KeIMPR_b_CntrlSysShtDwn_LtchEnbl'
 * '<S39>'  : 'IMPR_ac/IMPR_MedTEB/IMPC_DtrmnHVRpdShtDwn/KeIMPR_b_ImpactDetected'
 * '<S40>'  : 'IMPR_ac/IMPR_MedTEB/IMPC_DtrmnHVRpdShtDwn/KeIMPR_b_ImpactFromCAN'
 * '<S41>'  : 'IMPR_ac/IMPR_MedTEB/IMPC_DtrmnHVRpdShtDwn/KeIMPR_b_RuntimeLogicReset'
 * '<S42>'  : 'IMPR_ac/IMPR_MedTEB/IMPC_DtrmnHVRpdShtDwn/KeIMPR_t_TwoPulses'
 * '<S43>'  : 'IMPR_ac/IMPR_MedTEB/IMPC_DtrmnHVRpdShtDwn/ProgramRunTime_HvRpdShtdwnCmd'
 * '<S44>'  : 'IMPR_ac/IMPR_MedTEB/IMPC_DtrmnHVRpdShtDwn/ResetCountsFOMs'
 * '<S45>'  : 'IMPR_ac/IMPR_MedTEB/IMPC_DtrmnHVRpdShtDwn/RuntimeEEWrite'
 * '<S46>'  : 'IMPR_ac/IMPR_MedTEB/IMPC_DtrmnHVRpdShtDwn/SCALAR_BLK'
 * '<S47>'  : 'IMPR_ac/IMPR_MedTEB/IMPC_DtrmnHVRpdShtDwn/SCALAR_BLK1'
 * '<S48>'  : 'IMPR_ac/IMPR_MedTEB/IMPC_DtrmnHVRpdShtDwn/SWITCH_UP'
 * '<S49>'  : 'IMPR_ac/IMPR_MedTEB/IMPC_DtrmnHVRpdShtDwn/SWITCH_UP1'
 * '<S50>'  : 'IMPR_ac/IMPR_MedTEB/IMPC_DtrmnHVRpdShtDwn/SWITCH_UP2'
 * '<S51>'  : 'IMPR_ac/IMPR_MedTEB/IMPC_DtrmnHVRpdShtDwn/Turn On Delay Time'
 * '<S52>'  : 'IMPR_ac/IMPR_MedTEB/IMPC_DtrmnHVRpdShtDwn/Xof Y Test1'
 * '<S53>'  : 'IMPR_ac/IMPR_MedTEB/IMPC_DtrmnHVRpdShtDwn/IfAct2/SCALAR_BLK'
 * '<S54>'  : 'IMPR_ac/IMPR_MedTEB/IMPC_DtrmnHVRpdShtDwn/IfAct2/SCALAR_BLK1'
 * '<S55>'  : 'IMPR_ac/IMPR_MedTEB/IMPC_DtrmnHVRpdShtDwn/Turn On Delay Time/EdgeRising'
 * '<S56>'  : 'IMPR_ac/IMPR_MedTEB/IMPC_DtrmnHVRpdShtDwn/Xof Y Test1/XofY_v2'
 * '<S57>'  : 'IMPR_ac/IMPR_MedTEB/IMPC_DtrmnHVRpdShtDwn/Xof Y Test1/XofY_v2/BaseXofY'
 * '<S58>'  : 'IMPR_ac/IMPR_MedTEB/IMPC_DtrmnHVRpdShtDwn/Xof Y Test1/XofY_v2/EdgeFalling1'
 * '<S59>'  : 'IMPR_ac/IMPR_MedTEB/IMPC_DtrmnHVRpdShtDwn/Xof Y Test1/XofY_v2/Enumerated Constant16'
 * '<S60>'  : 'IMPR_ac/IMPR_MedTEB/IMPC_DtrmnHVRpdShtDwn/Xof Y Test1/XofY_v2/Fail'
 * '<S61>'  : 'IMPR_ac/IMPR_MedTEB/IMPC_DtrmnHVRpdShtDwn/Xof Y Test1/XofY_v2/Init'
 * '<S62>'  : 'IMPR_ac/IMPR_MedTEB/IMPC_DtrmnHVRpdShtDwn/Xof Y Test1/XofY_v2/Pass'
 * '<S63>'  : 'IMPR_ac/IMPR_MedTEB/IMPC_DtrmnHVRpdShtDwn/Xof Y Test1/XofY_v2/UpdateMFOP'
 * '<S64>'  : 'IMPR_ac/IMPR_MedTEB/IMPC_DtrmnHVRpdShtDwn/Xof Y Test1/XofY_v2/BaseXofY/Counter Reset  Enabled '
 * '<S65>'  : 'IMPR_ac/IMPR_MedTEB/IMPC_DtrmnHVRpdShtDwn/Xof Y Test1/XofY_v2/BaseXofY/Counter Reset  Enabled 1'
 * '<S66>'  : 'IMPR_ac/IMPR_MedTEB/IMPC_DtrmnHVRpdShtDwn/Xof Y Test1/XofY_v2/Fail/Enumerated Constant16'
 * '<S67>'  : 'IMPR_ac/IMPR_MedTEB/IMPC_DtrmnHVRpdShtDwn/Xof Y Test1/XofY_v2/Init/Enumerated Constant16'
 * '<S68>'  : 'IMPR_ac/IMPR_MedTEB/IMPC_DtrmnHVRpdShtDwn/Xof Y Test1/XofY_v2/Pass/Enumerated Constant16'
 * '<S69>'  : 'IMPR_ac/IMPR_MedTEB/IMPC_DtrmnHVRpdShtDwn/Xof Y Test1/XofY_v2/UpdateMFOP/Max Fails on Pass FOM'
 * '<S70>'  : 'IMPR_ac/IMPR_MedTEB/IMPC_DtrmnHVRpdShtDwn/Xof Y Test1/XofY_v2/UpdateMFOP/ResetLogic'
 * '<S71>'  : 'IMPR_ac/IMPR_MedTEB/IMPO_ProcessOutputs/Boolean Set Block'
 * '<S72>'  : 'IMPR_ac/IMPR_MedTEB/IMPO_ProcessOutputs/Boolean Set Block1'
 * '<S73>'  : 'IMPR_ac/IMPR_MedTEB/IMPO_ProcessOutputs/Boolean Set Block2'
 * '<S74>'  : 'IMPR_ac/IMPR_MedTEB/IMPO_ProcessOutputs/Boolean Set Block3'
 * '<S75>'  : 'IMPR_ac/IMPR_MedTEH/KeIMPC_b_ClearLatchedImpactEvents'
 * '<S76>'  : 'IMPR_ac/IMPR_MedTEH/KeIMPR_Cnt_WriteAttempts'
 * '<S77>'  : 'IMPR_ac/IMPR_MedTEH/KeIMPR_b_RuntimeLogicReset'
 * '<S78>'  : 'IMPR_ac/IMPR_MedTEH/ProgramRunTime_HvRpdShtdwnCmd'
 * '<S79>'  : 'IMPR_ac/IMPR_MedTEH/RuntimeEEWrite_ClearImpact'
 * '<S80>'  : 'IMPR_ac/IMPR_PwrOn/DSM_Init'
 * '<S81>'  : 'IMPR_ac/IMPR_PwrOn/Init_IMPC_Output'
 * '<S82>'  : 'IMPR_ac/IMPR_PwrOn/Init_IMPI_Output'
 * '<S83>'  : 'IMPR_ac/IMPR_PwrOn/Sub_Out_Init'
 * '<S84>'  : 'IMPR_ac/IMPR_PwrOn/Sub_Out_Init/Const'
 * '<S85>'  : 'IMPR_ac/PokeIMPR_b_ImpactHardwire/PokeIMPR_b_ImpactHardwire_Chrt'
 * '<S86>'  : 'IMPR_ac/PokeIMPR_b_ImpactHardwireV/PokeIMPR_b_ImpactHardwireV_Chrt'
 * '<S87>'  : 'IMPR_ac/PokeIMPR_b_ImpactToggle/PokeIMPR_b_ImpactToggleChrt'
 * '<S88>'  : 'IMPR_ac/PokeIMPR_b_ImpactToggle_C2/PokeIMPR_b_ImpactToggle_C2Chrt'
 * '<S89>'  : 'IMPR_ac/PokeIMPR_b_ImpctDtctd_HVShtdwn/PokeIMPR_b_ImpctDtctd_HVShtdwnChrt'
 * '<S90>'  : 'IMPR_ac/PokeIMPR_b_VehImpactDetected/PokeIMPR_b_VehImpactDetectedChrt'
 * '<S91>'  : 'IMPR_ac/PokeIMPR_b_VehImpactDetected_C2/PokeIMPR_b_VehImpactDetected_C2Chrt'
 * '<S92>'  : 'IMPR_ac/RWD9E3B_IPEETstMilgeLmt/Clear_Latched_Impact'
 * '<S93>'  : 'IMPR_ac/RWD9E3B_IPEETstMilgeLmt/KeIMPC_b_EnblClrImpct_DiagTool'
 * '<S94>'  : 'IMPR_ac/RWD9E3B_IPEETstMilgeLmt/Set_ImpactBit'
 */
#endif                                 /* RTW_HEADER_IMPR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
