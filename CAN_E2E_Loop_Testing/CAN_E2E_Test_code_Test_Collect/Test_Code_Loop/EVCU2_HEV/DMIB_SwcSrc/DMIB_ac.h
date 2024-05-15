/*
 * File: DMIB_ac.h
 *
 * Code generated for Simulink model 'DMIB_ac'.
 *
 * Model version                  : 4.239
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:25:02 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_DMIB_ac_h_
#define RTW_HEADER_DMIB_ac_h_
#include <math.h>
#include "Rte_Type.h"
#ifndef DMIB_ac_COMMON_INCLUDES_
#define DMIB_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_DMIB.h"
#endif                                 /* DMIB_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals for system '<S61>/ClosedInterval' */
typedef struct
{
    boolean LogicalOperator;           /* '<S66>/Logical Operator' */
}
B_ClosedInterval_DMIB_ac_T;

/* Block signals (default storage) */
typedef struct tag_B_DMIB_ac_T
{

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

    float32 InputRaw0;                 /* '<S14>/AntiSpkFil' */

#define B_DMIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

    float32 Cnt;                       /* '<S14>/AntiSpkFil' */

#define B_DMIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

    TeDFIB_e_FaultDebounceStatus Merge;/* '<S23>/Merge' */

#define B_DMIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

    TeDFIB_e_FaultDebounceStatus Merge_n;/* '<S43>/Merge' */

#define B_DMIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

    B_ClosedInterval_DMIB_ac_T ClosedInterval3;/* '<S61>/ClosedInterval3' */

#define B_DMIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

    B_ClosedInterval_DMIB_ac_T ClosedInterval2;/* '<S61>/ClosedInterval2' */

#define B_DMIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

    B_ClosedInterval_DMIB_ac_T ClosedInterval1;/* '<S61>/ClosedInterval1' */

#define B_DMIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

    B_ClosedInterval_DMIB_ac_T ClosedInterval;/* '<S61>/ClosedInterval' */

#define B_DMIB_AC_T_VARIANT_EXISTS
#endif

#ifndef B_DMIB_AC_T_VARIANT_EXISTS

    char _rt_unused;

#endif

}
B_DMIB_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_DMIB_ac_T
{

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

    float32 UnitDelay_DSTATE;          /* '<S88>/Unit Delay' */

#define DW_DMIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

    float32 UnitDelay_DSTATE_j;        /* '<S87>/Unit Delay' */

#define DW_DMIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

    float32 UnitDelay_DSTATE_k;        /* '<S86>/Unit Delay' */

#define DW_DMIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

    float32 UnitDelay_DSTATE_f;        /* '<S85>/Unit Delay' */

#define DW_DMIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

    float32 UnitDelay_DSTATE_p;        /* '<S84>/Unit Delay' */

#define DW_DMIB_AC_T_VARIANT_EXISTS
#endif

    uint16 NeDMIB_Cnt_PadLvrSTG_MFOP;
                                 /* '<Root>/DSM_NeCDMR_Cnt_CPIMInternal_MSOF' */
    uint16 NeDMIB_Cnt_PadLvrSTB_MFOP;
                                /* '<Root>/DSM_NeCDMR_Cnt_CPIMInternal_MSOF1' */

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

    boolean UnitDelay_DSTATE_h;        /* '<S3>/Unit Delay' */

#define DW_DMIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

    boolean UnitDelay_DSTATE_bt;       /* '<S24>/Unit Delay' */

#define DW_DMIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

    boolean UnitDelay1_DSTATE;         /* '<S24>/Unit Delay1' */

#define DW_DMIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

    boolean UnitDelay_DSTATE_np;       /* '<S44>/Unit Delay' */

#define DW_DMIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

    boolean UnitDelay1_DSTATE_j;       /* '<S44>/Unit Delay1' */

#define DW_DMIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

    boolean UnitDelay_DSTATE_c;        /* '<S93>/Unit Delay' */

#define DW_DMIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

    boolean UnitDelay_DSTATE_g;        /* '<S92>/Unit Delay' */

#define DW_DMIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

    boolean UnitDelay_DSTATE_kx;       /* '<S91>/Unit Delay' */

#define DW_DMIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

    boolean UnitDelay_DSTATE_kk;       /* '<S90>/Unit Delay' */

#define DW_DMIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

    boolean UnitDelay_DSTATE_fy;       /* '<S89>/Unit Delay' */

#define DW_DMIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

    boolean UnitDelay_DSTATE_j4;       /* '<S45>/Unit Delay' */

#define DW_DMIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

    boolean UnitDelay_DSTATE_na;       /* '<S25>/Unit Delay' */

#define DW_DMIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

    TeDMIR_e_PadLvrSts UnitDelay1_DSTATE_je;/* '<S13>/Unit Delay1' */

#define DW_DMIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

    TeDMIR_e_PadLvrSts UnitDelay_DSTATE_nn;/* '<S75>/Unit Delay' */

#define DW_DMIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

    uint8 is_active_c14_DMIB_ac;       /* '<S14>/AntiSpkFil' */

#define DW_DMIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_DMIB_PaddleShifter_Presence

    uint8 is_c14_DMIB_ac;              /* '<S14>/AntiSpkFil' */

#define DW_DMIB_AC_T_VARIANT_EXISTS
#endif

}
DW_DMIB_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_DMIB
#include "MemMap.h"

extern VAR(B_DMIB_ac_T, DMIB_VAR_INIT) DMIB_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_DMIB
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_DMIB
#include "MemMap.h"

extern VAR(DW_DMIB_ac_T, DMIB_VAR_INIT) DMIB_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_DMIB
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
 * '<Root>' : 'DMIB_ac'
 * '<S1>'   : 'DMIB_ac/ADIB_PwrOff'
 * '<S2>'   : 'DMIB_ac/Init'
 * '<S3>'   : 'DMIB_ac/SigMngtAndCnvn'
 * '<S4>'   : 'DMIB_ac/Init/PaddleShifter_Init'
 * '<S5>'   : 'DMIB_ac/Init/PaddleShifter_Init/PaddleShifter_Init'
 * '<S6>'   : 'DMIB_ac/Init/PaddleShifter_Init/PaddleShifter_Init/Enumerated Constant4'
 * '<S7>'   : 'DMIB_ac/Init/PaddleShifter_Init/PaddleShifter_Init/Enumerated_Constant1'
 * '<S8>'   : 'DMIB_ac/Init/PaddleShifter_Init/PaddleShifter_Init/Enumerated_Constant4'
 * '<S9>'   : 'DMIB_ac/Init/PaddleShifter_Init/PaddleShifter_Init/KeTAIB_U_STGCktLowFltLim_HghRfrgtPSnsr'
 * '<S10>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter'
 * '<S11>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter'
 * '<S12>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/DiagSys'
 * '<S13>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/ElecToPhyCnvnSys'
 * '<S14>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/SigAcqnAndFilSys'
 * '<S15>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/DiagSys/CircHiFltSys'
 * '<S16>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/DiagSys/CircLoFltSys'
 * '<S17>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/DiagSys/ResetCountsFOMs'
 * '<S18>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/DiagSys/CircHiFltSys/KeTAIB_Cnt_STBFailLimHghRfrgtPSnsr'
 * '<S19>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/DiagSys/CircHiFltSys/KeTAIB_Cnt_STBSmplLimHghRfrgtPSnsr'
 * '<S20>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/DiagSys/CircHiFltSys/KeTAIB_Cnt_STGSmplLimCEXV_OutTSnsr1'
 * '<S21>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/DiagSys/CircHiFltSys/KeTAIB_U_STBCktHiFltLim_HghRfrgtPSnsr'
 * '<S22>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/DiagSys/CircHiFltSys/KeTAIB_b_STBDiagEnbl_HghRfrgtPSnsr'
 * '<S23>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/DiagSys/CircHiFltSys/XofY_v1'
 * '<S24>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/DiagSys/CircHiFltSys/XofY_v1/BaseXofY'
 * '<S25>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/DiagSys/CircHiFltSys/XofY_v1/EdgeFalling1'
 * '<S26>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/DiagSys/CircHiFltSys/XofY_v1/Enumerated Constant16'
 * '<S27>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/DiagSys/CircHiFltSys/XofY_v1/Fail'
 * '<S28>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/DiagSys/CircHiFltSys/XofY_v1/Init'
 * '<S29>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/DiagSys/CircHiFltSys/XofY_v1/Pass'
 * '<S30>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/DiagSys/CircHiFltSys/XofY_v1/UpdateMFOP'
 * '<S31>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/DiagSys/CircHiFltSys/XofY_v1/BaseXofY/Counter Reset  Enabled '
 * '<S32>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/DiagSys/CircHiFltSys/XofY_v1/BaseXofY/Counter Reset  Enabled 1'
 * '<S33>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/DiagSys/CircHiFltSys/XofY_v1/Fail/Enumerated Constant16'
 * '<S34>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/DiagSys/CircHiFltSys/XofY_v1/Init/Enumerated Constant16'
 * '<S35>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/DiagSys/CircHiFltSys/XofY_v1/Pass/Enumerated Constant16'
 * '<S36>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/DiagSys/CircHiFltSys/XofY_v1/UpdateMFOP/Max Fails on Pass FOM'
 * '<S37>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/DiagSys/CircHiFltSys/XofY_v1/UpdateMFOP/ResetLogic'
 * '<S38>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/DiagSys/CircLoFltSys/KeTAIB_Cnt_STGFailLimHghRfrgtPSnsr'
 * '<S39>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/DiagSys/CircLoFltSys/KeTAIB_Cnt_STGSmplLimCEXV_OutTSnsr1'
 * '<S40>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/DiagSys/CircLoFltSys/KeTAIB_Cnt_STGSmplLimHghRfrgtPSnsr'
 * '<S41>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/DiagSys/CircLoFltSys/KeTAIB_U_STGCktLowFltLim_HghRfrgtPSnsr'
 * '<S42>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/DiagSys/CircLoFltSys/KeTAIB_b_STGDiagEnbl_HghRfrgtPSnsr'
 * '<S43>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/DiagSys/CircLoFltSys/XofY_v1'
 * '<S44>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/DiagSys/CircLoFltSys/XofY_v1/BaseXofY'
 * '<S45>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/DiagSys/CircLoFltSys/XofY_v1/EdgeFalling1'
 * '<S46>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/DiagSys/CircLoFltSys/XofY_v1/Enumerated Constant16'
 * '<S47>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/DiagSys/CircLoFltSys/XofY_v1/Fail'
 * '<S48>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/DiagSys/CircLoFltSys/XofY_v1/Init'
 * '<S49>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/DiagSys/CircLoFltSys/XofY_v1/Pass'
 * '<S50>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/DiagSys/CircLoFltSys/XofY_v1/UpdateMFOP'
 * '<S51>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/DiagSys/CircLoFltSys/XofY_v1/BaseXofY/Counter Reset  Enabled '
 * '<S52>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/DiagSys/CircLoFltSys/XofY_v1/BaseXofY/Counter Reset  Enabled 1'
 * '<S53>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/DiagSys/CircLoFltSys/XofY_v1/Fail/Enumerated Constant16'
 * '<S54>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/DiagSys/CircLoFltSys/XofY_v1/Init/Enumerated Constant16'
 * '<S55>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/DiagSys/CircLoFltSys/XofY_v1/Pass/Enumerated Constant16'
 * '<S56>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/DiagSys/CircLoFltSys/XofY_v1/UpdateMFOP/Max Fails on Pass FOM'
 * '<S57>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/DiagSys/CircLoFltSys/XofY_v1/UpdateMFOP/ResetLogic'
 * '<S58>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/ElecToPhyCnvnSys/Override'
 * '<S59>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/ElecToPhyCnvnSys/Recovery'
 * '<S60>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/ElecToPhyCnvnSys/SWITCH_DOWN'
 * '<S61>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/ElecToPhyCnvnSys/Voltage2PaddleLevStatus'
 * '<S62>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/ElecToPhyCnvnSys/Override/KeTAIB_b_HghRfrgPresSnsrBypEnbl'
 * '<S63>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/ElecToPhyCnvnSys/Override/KeTAIB_p_HghRfrgPresSnsrByp'
 * '<S64>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/ElecToPhyCnvnSys/Recovery/KeTAIB_b_HghRfrgtPresSnsrRcvryEnbl'
 * '<S65>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/ElecToPhyCnvnSys/Recovery/KeTAIB_p_HghRfrgtPresSnsrRcvry'
 * '<S66>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/ElecToPhyCnvnSys/Voltage2PaddleLevStatus/ClosedInterval'
 * '<S67>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/ElecToPhyCnvnSys/Voltage2PaddleLevStatus/ClosedInterval1'
 * '<S68>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/ElecToPhyCnvnSys/Voltage2PaddleLevStatus/ClosedInterval2'
 * '<S69>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/ElecToPhyCnvnSys/Voltage2PaddleLevStatus/ClosedInterval3'
 * '<S70>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/ElecToPhyCnvnSys/Voltage2PaddleLevStatus/Enumerated Constant'
 * '<S71>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/ElecToPhyCnvnSys/Voltage2PaddleLevStatus/Enumerated Constant1'
 * '<S72>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/ElecToPhyCnvnSys/Voltage2PaddleLevStatus/Enumerated Constant2'
 * '<S73>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/ElecToPhyCnvnSys/Voltage2PaddleLevStatus/Enumerated Constant3'
 * '<S74>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/ElecToPhyCnvnSys/Voltage2PaddleLevStatus/Enumerated Constant4'
 * '<S75>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/ElecToPhyCnvnSys/Voltage2PaddleLevStatus/IfThenElseif'
 * '<S76>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/ElecToPhyCnvnSys/Voltage2PaddleLevStatus/KeTAIB_p_HghRfrgtPresSnsrRcvry'
 * '<S77>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/ElecToPhyCnvnSys/Voltage2PaddleLevStatus/KeTAIB_p_HghRfrgtPresSnsrRcvry1'
 * '<S78>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/ElecToPhyCnvnSys/Voltage2PaddleLevStatus/KeTAIB_p_HghRfrgtPresSnsrRcvry2'
 * '<S79>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/ElecToPhyCnvnSys/Voltage2PaddleLevStatus/KeTAIB_p_HghRfrgtPresSnsrRcvry3'
 * '<S80>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/ElecToPhyCnvnSys/Voltage2PaddleLevStatus/KeTAIB_p_HghRfrgtPresSnsrRcvry4'
 * '<S81>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/ElecToPhyCnvnSys/Voltage2PaddleLevStatus/KeTAIB_p_HghRfrgtPresSnsrRcvry5'
 * '<S82>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/ElecToPhyCnvnSys/Voltage2PaddleLevStatus/KeTAIB_p_HghRfrgtPresSnsrRcvry6'
 * '<S83>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/ElecToPhyCnvnSys/Voltage2PaddleLevStatus/SWITCH_DOWN'
 * '<S84>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/ElecToPhyCnvnSys/Voltage2PaddleLevStatus/Turn On Delay Time'
 * '<S85>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/ElecToPhyCnvnSys/Voltage2PaddleLevStatus/Turn On Delay Time1'
 * '<S86>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/ElecToPhyCnvnSys/Voltage2PaddleLevStatus/Turn On Delay Time2'
 * '<S87>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/ElecToPhyCnvnSys/Voltage2PaddleLevStatus/Turn On Delay Time3'
 * '<S88>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/ElecToPhyCnvnSys/Voltage2PaddleLevStatus/Turn On Delay Time4'
 * '<S89>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/ElecToPhyCnvnSys/Voltage2PaddleLevStatus/Turn On Delay Time/EdgeRising'
 * '<S90>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/ElecToPhyCnvnSys/Voltage2PaddleLevStatus/Turn On Delay Time1/EdgeRising'
 * '<S91>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/ElecToPhyCnvnSys/Voltage2PaddleLevStatus/Turn On Delay Time2/EdgeRising'
 * '<S92>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/ElecToPhyCnvnSys/Voltage2PaddleLevStatus/Turn On Delay Time3/EdgeRising'
 * '<S93>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/ElecToPhyCnvnSys/Voltage2PaddleLevStatus/Turn On Delay Time4/EdgeRising'
 * '<S94>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/SigAcqnAndFilSys/AntiSpkFil'
 * '<S95>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/SigAcqnAndFilSys/KeTAIB_Cnt_HghRfrgtPresSnsrSpikeThd'
 * '<S96>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/SigAcqnAndFilSys/KeTAIB_U_HghRfrgtPresSnsrSpikeThd'
 * '<S97>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/SigAcqnAndFilSys/KeTAIB_k_HghRfrgtPresSnsrFiltGx'
 * '<S98>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/SigAcqnAndFilSys/LoPassFil'
 * '<S99>'  : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/SigAcqnAndFilSys/LoPassFil/Inputs_selection'
 * '<S100>' : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/SigAcqnAndFilSys/LoPassFil/Low_Pass_Filter_Fcn'
 * '<S101>' : 'DMIB_ac/SigMngtAndCnvn/PaddleShifter/PaddleShifter/SigAcqnAndFilSys/LoPassFil/Outputs_assignment'
 */
#endif                                 /* RTW_HEADER_DMIB_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
