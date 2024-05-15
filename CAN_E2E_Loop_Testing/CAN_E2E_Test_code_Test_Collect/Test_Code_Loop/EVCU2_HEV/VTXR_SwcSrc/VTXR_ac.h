/*
 * File: VTXR_ac.h
 *
 * Code generated for Simulink model 'VTXR_ac'.
 *
 * Model version                  : 9.228
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 20:08:58 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_VTXR_ac_h_
#define RTW_HEADER_VTXR_ac_h_
#include "Rte_Type.h"
#ifndef VTXR_ac_COMMON_INCLUDES_
#define VTXR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_VTXR.h"
#endif                                 /* VTXR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"

/* MW_VALIDATE_PREPROCESSOR_VARIANT_CHOICES */
#undef MW_HAVE_ACTIVE_VARIANT_CHOICE
#undef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#if Rte_SysCon_Variant_VTXR_HMIIntrfce
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

#if Rte_SysCon_Variant_VTXR_NoHMIIntrfce
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

/* At most one variant choice can be active for block 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM', 'VTXR_ac/VTXR_MedTEB/VTXC_PreProc/VarSS_HMI_NonHMI' */
#ifdef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#error "At most one variant choice can be active for block 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM' and others"
#endif

/* MW_END_VALIDATE_PREPROCESSOR_VARIANT_CHOICES */

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals for system '<S14>/FaultChks' */
typedef struct
{
    boolean LeVTXR_b_StrtDsAllw;       /* '<S48>/Comparison1' */
}
B_FaultChks_VTXR_ac_T;

/* Block states (default storage) for system '<S68>/DfltMdDur' */
typedef struct
{
    boolean UnitDelay_DSTATE;          /* '<S94>/Unit Delay' */
}
DW_DfltMdDur_VTXR_ac_f_T;

/* Block states (default storage) for system '<S69>/ElectricMdDur' */
typedef struct
{
    boolean UnitDelay_DSTATE;          /* '<S111>/Unit Delay' */
}
DW_ElectricMdDur_VTXR_ac_l_T;

/* Block states (default storage) for system '<S72>/HybridMdDur' */
typedef struct
{
    boolean UnitDelay_DSTATE;          /* '<S151>/Unit Delay' */
}
DW_HybridMdDur_VTXR_ac_c_T;

/* Block states (default storage) for system '<S71>/GenMdDuring' */
typedef struct
{
    boolean UnitDelay_DSTATE;          /* '<S131>/Unit Delay' */
}
DW_GenMdDuring_VTXR_ac_T;

/* Block signals (default storage) */
typedef struct tag_B_VTXR_ac_T
{

#if Rte_SysCon_Variant_VTXR_HMIIntrfce || Rte_SysCon_Variant_VTXR_NoHMIIntrfce

    uint32 TmpSignalConversionAtVeSTRR_g_StrtDisAll;/* '<S1>/VeSTRR_g_StrtDisAllowRsn' */

#define B_VTXR_AC_T_VARIANT_EXISTS
#endif

    float32 OutportBufferForVeVTXR_Pct_HVBattTgtSOC_;/* '<S225>/Const3' */

#if Rte_SysCon_Variant_VTXR_HMIIntrfce

    float32 TmpSignalConversionAtVeBPCR_Pct_HV_BatPa;/* '<S1>/VeBPCR_Pct_HV_BatPackSOC_Arb' */

#define B_VTXR_AC_T_VARIANT_EXISTS
#endif

    boolean OutportBufferForVeVTXR_b_PowerPanelSts_O;/* '<S225>/Const6' */
    boolean OutportBufferForVeVTXR_b_PowPnlRemStpFnl;/* '<S225>/Const7' */

#if Rte_SysCon_Variant_VTXR_HMIIntrfce || Rte_SysCon_Variant_VTXR_NoHMIIntrfce

    boolean TmpSignalConversionAtVeHPMR_b_PropSysAct;/* '<S1>/VeHPMR_b_PropSysActv' */

#define B_VTXR_AC_T_VARIANT_EXISTS
#endif

    boolean VariantMergeForOutportPPActv;
    TeVTXR_e_PowerPanelMd OutportBufferForVeVTXR_e_PowerPanelMd_Ou;/* '<S225>/Const1' */

#if Rte_SysCon_Variant_VTXR_HMIIntrfce || Rte_SysCon_Variant_VTXR_NoHMIIntrfce

    TeESSR_e_EngStartStopSt TmpSignalConversionAtVeESSR_e_EngStartSt;/* '<S1>/VeESSR_e_EngStartStopSt' */

#define B_VTXR_AC_T_VARIANT_EXISTS
#endif

    TeAECR_e_LEDCmd OutportBufferForVeVTXR_e_HybButtonLEDSt_;/* '<S225>/Const2' */

#if Rte_SysCon_Variant_VTXR_NoHMIIntrfce

    B_FaultChks_VTXR_ac_T FaultChks_eu;/* '<S15>/FaultChks' */

#define B_VTXR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VTXR_HMIIntrfce

    B_FaultChks_VTXR_ac_T FaultChks;   /* '<S14>/FaultChks' */

#define B_VTXR_AC_T_VARIANT_EXISTS
#endif

}
B_VTXR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_VTXR_ac_T
{

#if Rte_SysCon_Variant_VTXR_NoHMIIntrfce

    float32 UnitDelay_DSTATE;          /* '<S171>/Unit Delay' */

#define DW_VTXR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VTXR_NoHMIIntrfce

    boolean UnitDelay_DSTATE_h;        /* '<S11>/Unit Delay' */

#define DW_VTXR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VTXR_NoHMIIntrfce

    boolean UnitDelay_DSTATE_i;        /* '<S211>/Unit Delay' */

#define DW_VTXR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VTXR_NoHMIIntrfce

    uint8 is_active_c2_VTXR_ac;        /* '<S73>/VTXC_StateMachine' */

#define DW_VTXR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VTXR_NoHMIIntrfce

    uint8 is_c2_VTXR_ac;               /* '<S73>/VTXC_StateMachine' */

#define DW_VTXR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VTXR_HMIIntrfce

    uint8 is_active_c3_VTXR_ac;        /* '<S21>/VTXC_StateMachine' */

#define DW_VTXR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VTXR_HMIIntrfce

    uint8 is_c3_VTXR_ac;               /* '<S21>/VTXC_StateMachine' */

#define DW_VTXR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VTXR_NoHMIIntrfce

    DW_GenMdDuring_VTXR_ac_T GenMdDuring;/* '<S71>/GenMdDuring' */

#define DW_VTXR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VTXR_NoHMIIntrfce

    DW_HybridMdDur_VTXR_ac_c_T HybridMdDur_f;/* '<S72>/HybridMdDur' */

#define DW_VTXR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VTXR_NoHMIIntrfce

    DW_ElectricMdDur_VTXR_ac_l_T ElectricMdDur_b;/* '<S69>/ElectricMdDur' */

#define DW_VTXR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VTXR_NoHMIIntrfce

    DW_DfltMdDur_VTXR_ac_f_T DfltMdDur_b;/* '<S68>/DfltMdDur' */

#define DW_VTXR_AC_T_VARIANT_EXISTS
#endif

#ifndef DW_VTXR_AC_T_VARIANT_EXISTS

    char _rt_unused;

#endif

}
DW_VTXR_ac_T;

/* Invariant block signals (default storage) */
typedef struct
{
    const TeVTXR_e_PowerPanelMd Const1;/* '<S225>/Const1' */
    const TeAECR_e_LEDCmd Const2;      /* '<S225>/Const2' */
}
ConstB_VTXR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_VTXR
#include "MemMap.h"

extern VAR(B_VTXR_ac_T, VTXR_VAR_INIT) VTXR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_VTXR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_VTXR
#include "MemMap.h"

extern VAR(DW_VTXR_ac_T, VTXR_VAR_INIT) VTXR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_VTXR
#include "MemMap.h"
#define START_SEC_CONST_UNSPECIFIED_VTXR
#include "MemMap.h"

extern CONST(ConstB_VTXR_ac_T, VTXR_VAR_INIT) VTXR_ac_ConstB;/* constant block i/o */

#define STOP_SEC_CONST_UNSPECIFIED_VTXR
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
 * '<Root>' : 'VTXR_ac'
 * '<S1>'   : 'VTXR_ac/VTXR_MedTEB'
 * '<S2>'   : 'VTXR_ac/VTXR_PwrOn'
 * '<S3>'   : 'VTXR_ac/VTXR_MedTEB/VTXC_ButtonProc'
 * '<S4>'   : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM'
 * '<S5>'   : 'VTXR_ac/VTXR_MedTEB/VTXC_PostProc'
 * '<S6>'   : 'VTXR_ac/VTXR_MedTEB/VTXC_PreProc'
 * '<S7>'   : 'VTXR_ac/VTXR_MedTEB/VTXO_Outputs'
 * '<S8>'   : 'VTXR_ac/VTXR_MedTEB/VTXC_ButtonProc/VarSS_HybBtnProc'
 * '<S9>'   : 'VTXR_ac/VTXR_MedTEB/VTXC_ButtonProc/VarSS_HybBtnProc/HMI_ButtonProc'
 * '<S10>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ButtonProc/VarSS_HybBtnProc/NonHMI_ButtonProc'
 * '<S11>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ButtonProc/VarSS_HybBtnProc/NonHMI_ButtonProc/EdgeFalling'
 * '<S12>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ButtonProc/VarSS_HybBtnProc/NonHMI_ButtonProc/Fnl_Button_Off'
 * '<S13>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM'
 * '<S14>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP'
 * '<S15>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP'
 * '<S16>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/PPInaktv'
 * '<S17>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/DefaultMd'
 * '<S18>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/ElectricMd'
 * '<S19>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/FaultChks'
 * '<S20>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/HybridMd'
 * '<S21>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/VTXC_STM'
 * '<S22>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/DefaultMd/DfltMdDur'
 * '<S23>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/DefaultMd/DfltMdEnt'
 * '<S24>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/DefaultMd/DfltMdDur/Do_Nothing'
 * '<S25>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/DefaultMd/DfltMdDur/EVMode'
 * '<S26>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/DefaultMd/DfltMdDur/ElectricMd'
 * '<S27>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/DefaultMd/DfltMdDur/HybMd'
 * '<S28>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/DefaultMd/DfltMdDur/HybMode'
 * '<S29>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/DefaultMd/DfltMdDur/Do_Nothing/Constant Value1'
 * '<S30>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/DefaultMd/DfltMdDur/Do_Nothing/Constant Value2'
 * '<S31>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/DefaultMd/DfltMdDur/EVMode/Constant Value3'
 * '<S32>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/DefaultMd/DfltMdDur/ElectricMd/Constant Value2'
 * '<S33>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/DefaultMd/DfltMdDur/HybMd/Constant Value2'
 * '<S34>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/DefaultMd/DfltMdDur/HybMode/Constant Value1'
 * '<S35>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/DefaultMd/DfltMdDur/HybMode/Constant Value3'
 * '<S36>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/DefaultMd/DfltMdEnt/Constant Value1'
 * '<S37>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/ElectricMd/ElecMdEnt'
 * '<S38>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/ElectricMd/ElectricMdDur'
 * '<S39>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/ElectricMd/ElecMdEnt/Constant Value1'
 * '<S40>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/ElectricMd/ElectricMdDur/DftlMd'
 * '<S41>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/ElectricMd/ElectricMdDur/Do_Nothing'
 * '<S42>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/ElectricMd/ElectricMdDur/HybMdChk'
 * '<S43>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/ElectricMd/ElectricMdDur/HybMdEntry'
 * '<S44>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/ElectricMd/ElectricMdDur/DftlMd/Constant Value1'
 * '<S45>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/ElectricMd/ElectricMdDur/Do_Nothing/Constant Value3'
 * '<S46>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/ElectricMd/ElectricMdDur/HybMdChk/Constant Value1'
 * '<S47>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/ElectricMd/ElectricMdDur/HybMdEntry/Constant Value1'
 * '<S48>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/FaultChks/FaultRsns'
 * '<S49>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/FaultChks/FaultRsns/KeVTXR_g_SelStrtDsAllwRsn'
 * '<S50>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/HybridMd/HybridMdDur'
 * '<S51>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/HybridMd/HybridMdEnt'
 * '<S52>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/HybridMd/HybridMdDur/Constant Value8'
 * '<S53>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/HybridMd/HybridMdDur/DfltMd'
 * '<S54>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/HybridMd/HybridMdDur/DfltMdChk'
 * '<S55>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/HybridMd/HybridMdDur/DoNothing'
 * '<S56>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/HybridMd/HybridMdDur/Do_Nothing'
 * '<S57>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/HybridMd/HybridMdDur/ElecMd'
 * '<S58>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/HybridMd/HybridMdDur/ElecMdTrg'
 * '<S59>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/HybridMd/HybridMdDur/KeVTXR_Pct_MinSOCDelta4HybMd'
 * '<S60>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/HybridMd/HybridMdDur/Set_MaxAsTgtSOC'
 * '<S61>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/HybridMd/HybridMdDur/Set_MinAsTgtSOC'
 * '<S62>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/HybridMd/HybridMdDur/DfltMd/Constant Value2'
 * '<S63>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/HybridMd/HybridMdDur/Do_Nothing/Constant Value3'
 * '<S64>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/HybridMd/HybridMdDur/ElecMd/Constant Value2'
 * '<S65>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/HybridMd/HybridMdDur/Set_MaxAsTgtSOC/KeVTXR_Pct_TgtSOCHybMd'
 * '<S66>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/HybridMd/HybridMdEnt/Constant Value1'
 * '<S67>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/HMI_PP/VTXC_STM/VTXC_StateMachine'
 * '<S68>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/DefaultMd'
 * '<S69>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/ElectricMd'
 * '<S70>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/FaultChks'
 * '<S71>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/GeneratorMd'
 * '<S72>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/HybridMd'
 * '<S73>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/VTXC_STM'
 * '<S74>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/DefaultMd/DfltMdDur'
 * '<S75>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/DefaultMd/DfltMdEnt'
 * '<S76>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/DefaultMd/DfltMdDur/Do_Nothing'
 * '<S77>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/DefaultMd/DfltMdDur/EVMode'
 * '<S78>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/DefaultMd/DfltMdDur/ElectricMd'
 * '<S79>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/DefaultMd/DfltMdDur/GenMd'
 * '<S80>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/DefaultMd/DfltMdDur/GenMode'
 * '<S81>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/DefaultMd/DfltMdDur/HybMd'
 * '<S82>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/DefaultMd/DfltMdDur/HybMode'
 * '<S83>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/DefaultMd/DfltMdDur/LEDEval'
 * '<S84>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/DefaultMd/DfltMdDur/Do_Nothing/Constant Value1'
 * '<S85>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/DefaultMd/DfltMdDur/EVMode/Constant Value3'
 * '<S86>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/DefaultMd/DfltMdDur/ElectricMd/Constant Value2'
 * '<S87>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/DefaultMd/DfltMdDur/GenMd/Constant Value2'
 * '<S88>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/DefaultMd/DfltMdDur/GenMode/Constant Value3'
 * '<S89>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/DefaultMd/DfltMdDur/HybMd/Constant Value2'
 * '<S90>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/DefaultMd/DfltMdDur/HybMode/Constant Value1'
 * '<S91>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/DefaultMd/DfltMdDur/HybMode/Constant Value3'
 * '<S92>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/DefaultMd/DfltMdDur/LEDEval/Constant Value1'
 * '<S93>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/DefaultMd/DfltMdDur/LEDEval/Constant Value3'
 * '<S94>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/DefaultMd/DfltMdDur/LEDEval/EdgeRising'
 * '<S95>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/DefaultMd/DfltMdDur/LEDEval/SetBlink'
 * '<S96>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/DefaultMd/DfltMdEnt/Constant Value1'
 * '<S97>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/DefaultMd/DfltMdEnt/KeVTXR_Pct_TgtSOCDflt'
 * '<S98>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/ElectricMd/ElecMdEnt'
 * '<S99>'  : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/ElectricMd/ElectricMdDur'
 * '<S100>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/ElectricMd/ElecMdEnt/Constant Value1'
 * '<S101>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/ElectricMd/ElecMdEnt/KeVTXR_Pct_TgtSOCDflt'
 * '<S102>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/ElectricMd/ElectricMdDur/DftlMd'
 * '<S103>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/ElectricMd/ElectricMdDur/Do_Nothing'
 * '<S104>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/ElectricMd/ElectricMdDur/HybMdChk'
 * '<S105>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/ElectricMd/ElectricMdDur/HybMdEntry'
 * '<S106>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/ElectricMd/ElectricMdDur/LEDEval'
 * '<S107>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/ElectricMd/ElectricMdDur/DftlMd/Constant Value1'
 * '<S108>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/ElectricMd/ElectricMdDur/Do_Nothing/Constant Value3'
 * '<S109>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/ElectricMd/ElectricMdDur/HybMdChk/Constant Value1'
 * '<S110>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/ElectricMd/ElectricMdDur/HybMdEntry/Constant Value1'
 * '<S111>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/ElectricMd/ElectricMdDur/LEDEval/EdgeRising'
 * '<S112>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/ElectricMd/ElectricMdDur/LEDEval/SetBlink'
 * '<S113>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/FaultChks/FaultRsns'
 * '<S114>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/FaultChks/FaultRsns/KeVTXR_g_SelStrtDsAllwRsn'
 * '<S115>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/GeneratorMd/GenMdDuring'
 * '<S116>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/GeneratorMd/GenMdEnt'
 * '<S117>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/GeneratorMd/GenMdDuring/Constant Value1'
 * '<S118>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/GeneratorMd/GenMdDuring/DfltMd'
 * '<S119>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/GeneratorMd/GenMdDuring/Do_Nothing'
 * '<S120>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/GeneratorMd/GenMdDuring/ElecMd'
 * '<S121>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/GeneratorMd/GenMdDuring/HybMdTrg'
 * '<S122>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/GeneratorMd/GenMdDuring/HybMdTrgChk'
 * '<S123>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/GeneratorMd/GenMdDuring/LEDEval'
 * '<S124>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/GeneratorMd/GenMdDuring/DfltMd/Constant Value2'
 * '<S125>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/GeneratorMd/GenMdDuring/Do_Nothing/Constant Value3'
 * '<S126>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/GeneratorMd/GenMdDuring/ElecMd/Constant Value2'
 * '<S127>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/GeneratorMd/GenMdDuring/HybMdTrg/Constant Value3'
 * '<S128>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/GeneratorMd/GenMdDuring/HybMdTrgChk/Constant Value2'
 * '<S129>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/GeneratorMd/GenMdDuring/LEDEval/Constant Value3'
 * '<S130>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/GeneratorMd/GenMdDuring/LEDEval/Constant Value4'
 * '<S131>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/GeneratorMd/GenMdDuring/LEDEval/EdgeRising'
 * '<S132>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/GeneratorMd/GenMdDuring/LEDEval/SetBlink'
 * '<S133>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/GeneratorMd/GenMdEnt/Constant Value1'
 * '<S134>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/GeneratorMd/GenMdEnt/KeVTXR_Pct_TgtSOCGenMd'
 * '<S135>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/HybridMd/HybridMdDur'
 * '<S136>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/HybridMd/HybridMdEnt'
 * '<S137>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/HybridMd/HybridMdDur/Constant Value1'
 * '<S138>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/HybridMd/HybridMdDur/Constant Value8'
 * '<S139>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/HybridMd/HybridMdDur/DfltMd'
 * '<S140>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/HybridMd/HybridMdDur/DfltMdChk'
 * '<S141>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/HybridMd/HybridMdDur/Do_Nothing'
 * '<S142>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/HybridMd/HybridMdDur/ElecMd'
 * '<S143>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/HybridMd/HybridMdDur/ElecMdTrg'
 * '<S144>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/HybridMd/HybridMdDur/GenMd'
 * '<S145>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/HybridMd/HybridMdDur/GenMdTrg'
 * '<S146>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/HybridMd/HybridMdDur/LEDEval'
 * '<S147>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/HybridMd/HybridMdDur/DfltMd/Constant Value2'
 * '<S148>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/HybridMd/HybridMdDur/Do_Nothing/Constant Value3'
 * '<S149>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/HybridMd/HybridMdDur/ElecMd/Constant Value2'
 * '<S150>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/HybridMd/HybridMdDur/GenMd/Constant Value3'
 * '<S151>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/HybridMd/HybridMdDur/LEDEval/EdgeRising'
 * '<S152>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/HybridMd/HybridMdDur/LEDEval/SetBlink'
 * '<S153>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/HybridMd/HybridMdEnt/Constant Value1'
 * '<S154>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/HybridMd/HybridMdEnt/KeVTXR_Pct_TgtSOCDflt'
 * '<S155>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/Non_HMI_PP/VTXC_STM/VTXC_StateMachine'
 * '<S156>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/PPInaktv/KeVTXR_Pct_TgtSOCDflt'
 * '<S157>' : 'VTXR_ac/VTXR_MedTEB/VTXC_ExecSTM/VarSS_PP_STM/PPInaktv/KeVTXR_e_PowPanlMdNF'
 * '<S158>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PostProc/VarSS_PostProc_PP'
 * '<S159>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PostProc/VarSS_PostProc_PP/Non_HMI_PP'
 * '<S160>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PostProc/VarSS_PostProc_PP/PPInaktv'
 * '<S161>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PostProc/VarSS_PostProc_PP/Non_HMI_PP/Blink'
 * '<S162>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PostProc/VarSS_PostProc_PP/Non_HMI_PP/Constant Value1'
 * '<S163>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PostProc/VarSS_PostProc_PP/Non_HMI_PP/OFF'
 * '<S164>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PostProc/VarSS_PostProc_PP/Non_HMI_PP/ON'
 * '<S165>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PostProc/VarSS_PostProc_PP/Non_HMI_PP/Blink/Constant Value1'
 * '<S166>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PostProc/VarSS_PostProc_PP/Non_HMI_PP/Blink/Constant Value2'
 * '<S167>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PostProc/VarSS_PostProc_PP/Non_HMI_PP/Blink/HeVTXR_t_MedTEB_dT'
 * '<S168>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PostProc/VarSS_PostProc_PP/Non_HMI_PP/Blink/KeVTXR_t_MaxTm4LEDBlink'
 * '<S169>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PostProc/VarSS_PostProc_PP/Non_HMI_PP/Blink/ResetBlink'
 * '<S170>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PostProc/VarSS_PostProc_PP/Non_HMI_PP/Blink/ResetBlinkDtct'
 * '<S171>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PostProc/VarSS_PostProc_PP/Non_HMI_PP/Blink/Stop Watch Reset Enabled'
 * '<S172>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PostProc/VarSS_PostProc_PP/Non_HMI_PP/OFF/Constant Value1'
 * '<S173>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PostProc/VarSS_PostProc_PP/Non_HMI_PP/ON/Constant Value1'
 * '<S174>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PostProc/VarSS_PostProc_PP/PPInaktv/Constant Value1'
 * '<S175>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PreProc/SoC_Slct'
 * '<S176>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PreProc/VarSS_HMI_NonHMI'
 * '<S177>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PreProc/VarSS_PP_Active'
 * '<S178>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PreProc/SoC_Slct/No_SoC_inpt'
 * '<S179>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PreProc/SoC_Slct/SoC_4fm_HMI'
 * '<S180>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PreProc/SoC_Slct/No_SoC_inpt/KeVTXR_Pct_MinSOCDflt'
 * '<S181>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PreProc/SoC_Slct/SoC_4fm_HMI/Constant Value2'
 * '<S182>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PreProc/SoC_Slct/SoC_4fm_HMI/Dflt_MiN_SOC_Slct'
 * '<S183>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PreProc/SoC_Slct/SoC_4fm_HMI/KeVTXR_Pct_MinSOCDfltNotInPark'
 * '<S184>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PreProc/SoC_Slct/SoC_4fm_HMI/KeVTXR_b_ByPassPRNDL'
 * '<S185>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PreProc/SoC_Slct/SoC_4fm_HMI/KeVTXR_b_UseV2HParam'
 * '<S186>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PreProc/SoC_Slct/SoC_4fm_HMI/KeVTXR_b_UseV2LParam'
 * '<S187>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PreProc/SoC_Slct/SoC_4fm_HMI/KeVTXR_b_UseV2VParam'
 * '<S188>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PreProc/SoC_Slct/SoC_4fm_HMI/V2H_MiN_SOC_Slct'
 * '<S189>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PreProc/SoC_Slct/SoC_4fm_HMI/V2L_MiN_SOC_Slct'
 * '<S190>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PreProc/SoC_Slct/SoC_4fm_HMI/V2V_MiN_SOC_Slct'
 * '<S191>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PreProc/SoC_Slct/SoC_4fm_HMI/Dflt_MiN_SOC_Slct/KeVTXR_Pct_MinSOCDflt'
 * '<S192>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PreProc/SoC_Slct/SoC_4fm_HMI/V2H_MiN_SOC_Slct/KeVTXR_Pct_MinSOCDflt'
 * '<S193>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PreProc/SoC_Slct/SoC_4fm_HMI/V2L_MiN_SOC_Slct/KeVTXR_Pct_MinSOCDflt'
 * '<S194>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PreProc/SoC_Slct/SoC_4fm_HMI/V2V_MiN_SOC_Slct/KeVTXR_Pct_MinSOCDflt'
 * '<S195>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PreProc/VarSS_HMI_NonHMI/HMI'
 * '<S196>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PreProc/VarSS_HMI_NonHMI/Non_HMI'
 * '<S197>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PreProc/VarSS_HMI_NonHMI/PP_Inactv'
 * '<S198>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PreProc/VarSS_HMI_NonHMI/HMI/Constant Value3'
 * '<S199>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PreProc/VarSS_HMI_NonHMI/HMI/Dflt_Mode_Req_Slct'
 * '<S200>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PreProc/VarSS_HMI_NonHMI/HMI/KeVTXR_b_ByPassPRNDL'
 * '<S201>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PreProc/VarSS_HMI_NonHMI/HMI/KeVTXR_b_UseV2HParam'
 * '<S202>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PreProc/VarSS_HMI_NonHMI/HMI/KeVTXR_b_UseV2LParam'
 * '<S203>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PreProc/VarSS_HMI_NonHMI/HMI/KeVTXR_b_UseV2VParam'
 * '<S204>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PreProc/VarSS_HMI_NonHMI/HMI/V2H_Mode_Req_Slct'
 * '<S205>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PreProc/VarSS_HMI_NonHMI/HMI/V2L_Mode_Req_Slct'
 * '<S206>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PreProc/VarSS_HMI_NonHMI/HMI/V2V_Mode_Req_Slct'
 * '<S207>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PreProc/VarSS_HMI_NonHMI/Non_HMI/ButnPrsNOPrs'
 * '<S208>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PreProc/VarSS_HMI_NonHMI/Non_HMI/Constant Value1'
 * '<S209>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PreProc/VarSS_HMI_NonHMI/Non_HMI/Constant Value2'
 * '<S210>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PreProc/VarSS_HMI_NonHMI/Non_HMI/Constant Value3'
 * '<S211>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PreProc/VarSS_HMI_NonHMI/Non_HMI/EdgeRising'
 * '<S212>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PreProc/VarSS_HMI_NonHMI/Non_HMI/KeVTXR_b_ByPassPRNDL'
 * '<S213>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PreProc/VarSS_HMI_NonHMI/Non_HMI/KeVTXR_b_DsblHybBttn'
 * '<S214>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PreProc/VarSS_PP_Active/PP_Actv'
 * '<S215>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PreProc/VarSS_PP_Active/PP_Inactv'
 * '<S216>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PreProc/VarSS_PP_Active/PP_Actv/Constant Value2'
 * '<S217>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PreProc/VarSS_PP_Active/PP_Actv/KeVTXR_b_ByPassPRNDL'
 * '<S218>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PreProc/VarSS_PP_Active/PP_Actv/KeVTXR_b_UseV2HParam'
 * '<S219>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PreProc/VarSS_PP_Active/PP_Actv/KeVTXR_b_UseV2LParam'
 * '<S220>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PreProc/VarSS_PP_Active/PP_Actv/KeVTXR_b_UseV2VParam'
 * '<S221>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PreProc/VarSS_PP_Active/PP_Actv/OffBoard_PP_Auth'
 * '<S222>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PreProc/VarSS_PP_Active/PP_Actv/V2H_PP_Auth'
 * '<S223>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PreProc/VarSS_PP_Active/PP_Actv/V2L_PP_Auth'
 * '<S224>' : 'VTXR_ac/VTXR_MedTEB/VTXC_PreProc/VarSS_PP_Active/PP_Actv/V2V_PP_Auth'
 * '<S225>' : 'VTXR_ac/VTXR_PwrOn/Sub_Out_Init'
 */
#endif                                 /* RTW_HEADER_VTXR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
