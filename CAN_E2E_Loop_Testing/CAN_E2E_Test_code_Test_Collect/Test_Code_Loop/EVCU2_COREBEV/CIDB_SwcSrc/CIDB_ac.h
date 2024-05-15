/*
 * File: CIDB_ac.h
 *
 * Code generated for Simulink model 'CIDB_ac'.
 *
 * Model version                  : 1.1573
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:16:51 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_CIDB_ac_h_
#define RTW_HEADER_CIDB_ac_h_
#include "Rte_Type.h"
#ifndef CIDB_ac_COMMON_INCLUDES_
#define CIDB_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CIDB.h"
#endif                                 /* CIDB_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"

/* MW_VALIDATE_PREPROCESSOR_VARIANT_CHOICES */
#undef MW_HAVE_ACTIVE_VARIANT_CHOICE
#undef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#if Rte_SysCon_Variant_CIDB_U149A_Corebev
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

#if Rte_SysCon_Variant_CIDB_U149A_Pegasus
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

/* At most one variant choice can be active for block 'CIDB_ac/CPIM_HCP_FEEDBACK/U149A_Variant_Pegasus_COREBEV', 'CIDB_ac/Initialize Function/U149A_Init' */
#ifdef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#error "At most one variant choice can be active for block 'CIDB_ac/CPIM_HCP_FEEDBACK/U149A_Variant_Pegasus_COREBEV' and others"
#endif

#undef MW_HAVE_ACTIVE_VARIANT_CHOICE
#undef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#if Rte_SysCon_Variant_CIDB_U0422_BLUEN
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

#if Rte_SysCon_Variant_CIDB_U0422_Corebev
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

#if Rte_SysCon_Variant_CIDB_U0422_Pegasus
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

/* At most one variant choice can be active for block 'CIDB_ac/ImplausibleMgmt_100ms/U0422_Variant_Pegasus_Corebev_Bluen_100ms', 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms', 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms', 'CIDB_ac/Initialize Function/Subsystem3' */
#ifdef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#error "At most one variant choice can be active for block 'CIDB_ac/ImplausibleMgmt_100ms/U0422_Variant_Pegasus_Corebev_Bluen_100ms' and others"
#endif

#undef MW_HAVE_ACTIVE_VARIANT_CHOICE
#undef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#if Rte_SysCon_Variant_CIDB_U049C_Corebev
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Pegasus
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

/* At most one variant choice can be active for block 'CIDB_ac/ImplausibleMgmt_100ms/U049C_Variant_Pegasus_COREBEV_100ms', 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms', 'CIDB_ac/ImplausibleMgmt_250ms/U049C_Variant_Pegasus_Corebev_250ms', 'CIDB_ac/ImplausibleMgmt_250ms/U049C_Variant_Pegasus_Corebev_500ms', 'CIDB_ac/Initialize Function/U049C_Init' */
#ifdef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#error "At most one variant choice can be active for block 'CIDB_ac/ImplausibleMgmt_100ms/U049C_Variant_Pegasus_COREBEV_100ms' and others"
#endif

#undef MW_HAVE_ACTIVE_VARIANT_CHOICE
#undef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#if Rte_SysCon_Variant_CIDB_U0412_BLUEN
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

#if Rte_SysCon_Variant_CIDB_U0412_Corebev
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

#if Rte_SysCon_Variant_CIDB_U0412_Pegasus
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

/* At most one variant choice can be active for block 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms', 'CIDB_ac/ImplausibleMgmt_20ms/U0412_Variant_20ms', 'CIDB_ac/Initialize Function/Subsystem1' */
#ifdef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#error "At most one variant choice can be active for block 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms' and others"
#endif

#undef MW_HAVE_ACTIVE_VARIANT_CHOICE
#undef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#if Rte_SysCon_Variant_CIDB_U0415_BLUEN
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

#if Rte_SysCon_Variant_CIDB_U0415_Corebev
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

#if Rte_SysCon_Variant_CIDB_U0415_Pegasus
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

/* At most one variant choice can be active for block 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms', 'CIDB_ac/Initialize Function/U0415_Init' */
#ifdef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#error "At most one variant choice can be active for block 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms' and others"
#endif

#undef MW_HAVE_ACTIVE_VARIANT_CHOICE
#undef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#if Rte_SysCon_Variant_CIDB_U0404_BLUEN
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

#if Rte_SysCon_Variant_CIDB_U0404_Corebev
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

#if Rte_SysCon_Variant_CIDB_U0404_Pegasus
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

/* At most one variant choice can be active for block 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms', 'CIDB_ac/Initialize Function/U0404_Init' */
#ifdef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#error "At most one variant choice can be active for block 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms' and others"
#endif

#undef MW_HAVE_ACTIVE_VARIANT_CHOICE
#undef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#if Rte_SysCon_Variant_CIDB_U044A_BLUEN
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev
#ifdef MW_HAVE_ACTIVE_VARIANT_CHOICE
#define MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#else
#define MW_HAVE_ACTIVE_VARIANT_CHOICE
#endif
#endif

/* At most one variant choice can be active for block 'CIDB_ac/Initialize Function/U044A_Init' */
#ifdef MW_HAVE_MORE_THAN_ONE_ACTIVE_CHOICE
#error "At most one variant choice can be active for block 'CIDB_ac/Initialize Function/U044A_Init'"
#endif

/* MW_END_VALIDATE_PREPROCESSOR_VARIANT_CHOICES */

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals for system '<S17>/Diagnostic Debounce' */
typedef struct
{
    TeDFIB_e_FaultDebounceStatus Status;/* '<S17>/Diagnostic Debounce' */
}
B_DiagnosticDebounce_CIDB_ac_T;

/* Block signals for system '<S168>/Diagnostic Debounce' */
typedef struct
{
    TeDFIB_e_FaultDebounceStatus Status;/* '<S168>/Diagnostic Debounce' */
}
B_DiagnosticDebounce_CIDB_ac_l_T;

/* Block signals for system '<S178>/Diagnostic Debounce' */
typedef struct
{
    TeDFIB_e_FaultDebounceStatus Status;/* '<S178>/Diagnostic Debounce' */
}
B_DiagnosticDebounce_CIDB_ac_o_T;

/* Block signals for system '<S285>/Diagnostic Debounce' */
typedef struct
{
    TeDFIB_e_FaultDebounceStatus Status;/* '<S285>/Diagnostic Debounce' */
}
B_DiagnosticDebounce_CIDB_ac_g_T;

/* Block signals for system '<S295>/Diagnostic Debounce' */
typedef struct
{
    TeDFIB_e_FaultDebounceStatus Status;/* '<S295>/Diagnostic Debounce' */
}
B_DiagnosticDebounce_CIDB_ac_j_T;

/* Block signals for system '<S395>/Diagnostic Debounce' */
typedef struct
{
    TeDFIB_e_FaultDebounceStatus Status;/* '<S395>/Diagnostic Debounce' */
}
B_DiagnosticDebounce_CIDB_ac_a_T;

/* Block signals for system '<S489>/Diagnostic Debounce' */
typedef struct
{
    TeDFIB_e_FaultDebounceStatus Status;/* '<S489>/Diagnostic Debounce' */
}
B_DiagnosticDebounce_CIDB_ac_h_T;

/* Block signals for system '<S621>/Diagnostic Debounce' */
typedef struct
{
    TeDFIB_e_FaultDebounceStatus Status;/* '<S621>/Diagnostic Debounce' */
}
B_DiagnosticDebounce_CIDB_ac_hx_T;

/* Block signals for system '<S631>/Diagnostic Debounce' */
typedef struct
{
    TeDFIB_e_FaultDebounceStatus Status;/* '<S631>/Diagnostic Debounce' */
}
B_DiagnosticDebounce_CIDB_ac_i_T;

/* Block states (default storage) for system '<S701>/U0422_BCM_FD_10' */
typedef struct
{
    boolean UnitDelay_DSTATE;          /* '<S715>/Unit Delay' */
}
DW_U0422_BCM_FD_10_CIDB_ac_T;

/* Block states (default storage) for system '<S792>/HV_CHARGER_2' */
typedef struct
{
    boolean UnitDelay_DSTATE;          /* '<S804>/Unit Delay' */
}
DW_HV_CHARGER_2_CIDB_ac_T;

/* Block signals (default storage) */
typedef struct tag_B_CIDB_ac_T
{

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

    uint8 TmpSignalConversionAtVeCANR_e_End_Time_H;/* '<S2>/VeCANR_e_End_Time_Hr1_ErrSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

    uint8 TmpSignalConversionAtVeCANR_e_End_Time_e;/* '<S2>/VeCANR_e_End_Time_Hr2_ErrSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

    uint8 TmpSignalConversionAtVeCANR_e_End_Time_M;
                                      /* '<S2>/VeCANR_e_End_Time_Min1_ErrSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

    uint8 TmpSignalConversionAtVeCANR_e_End_Time_h;
                                      /* '<S2>/VeCANR_e_End_Time_Min2_ErrSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

    uint8 TmpSignalConversionAtVeCANR_e_Start_Time;
                                     /* '<S2>/VeCANR_e_Start_Time_Hr1_ErrSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

    uint8 TmpSignalConversionAtVeCANR_e_Start_Ti_e;
                                     /* '<S2>/VeCANR_e_Start_Time_Hr2_ErrSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

    uint8 TmpSignalConversionAtVeCANR_e_Start_Ti_k;
                                    /* '<S2>/VeCANR_e_Start_Time_Min1_ErrSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

    uint8 TmpSignalConversionAtVeCANR_e_Start_Ti_i;
                                    /* '<S2>/VeCANR_e_Start_Time_Min2_ErrSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

    uint8 TmpSignalConversionAtVeCANR_e_TBM_End_Ti;
                                   /* '<S2>/VeCANR_e_TBM_End_Time_Hr1_ErrSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

    uint8 TmpSignalConversionAtVeCANR_e_TBM_End__d;
                                   /* '<S2>/VeCANR_e_TBM_End_Time_Hr2_ErrSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

    uint8 TmpSignalConversionAtVeCANR_e_TBM_End__n;
                                  /* '<S2>/VeCANR_e_TBM_End_Time_Min1_ErrSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

    uint8 TmpSignalConversionAtVeCANR_e_TBM_End__j;
                                  /* '<S2>/VeCANR_e_TBM_End_Time_Min2_ErrSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

    uint8 TmpSignalConversionAtVeCANR_e_TBM_Start_;
                                 /* '<S2>/VeCANR_e_TBM_Start_Time_Hr1_ErrSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

    uint8 TmpSignalConversionAtVeCANR_e_TBM_Star_h;
                                 /* '<S2>/VeCANR_e_TBM_Start_Time_Hr2_ErrSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

    uint8 TmpSignalConversionAtVeCANR_e_TBM_Star_p;
                                /* '<S2>/VeCANR_e_TBM_Start_Time_Min1_ErrSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

    uint8 TmpSignalConversionAtVeCANR_e_TBM_Star_n;
                                /* '<S2>/VeCANR_e_TBM_Start_Time_Min2_ErrSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

    uint8 TmpSignalConversionAtVeSR1B_y_DoorLockLa;
                                  /* '<S6>/VeSR1B_y_DoorLockLastElSts_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

    uint8 TmpSignalConversionAtVeSR1B_y_CmdIgnSts_;/* '<S6>/VeSR1B_y_CmdIgnSts_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    uint8 TmpSignalConversionAtVeCRDB_y_OBC_Temp1_;/* '<S6>/VeCRDB_y_OBC_Temp1_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    uint8 TmpSignalConversionAtVeCRDB_y_OBC_Temp2_;/* '<S6>/VeCRDB_y_OBC_Temp2_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    uint8 TmpSignalConversionAtVeCRDB_y_OBC_Temp3_;/* '<S6>/VeCRDB_y_OBC_Temp3_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    uint8 TmpSignalConversionAtVeCRDB_y_OBC_Temp4_;/* '<S6>/VeCRDB_y_OBC_Temp4_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    uint8 TmpSignalConversionAtVeCRDB_y_ChrgFailSt;/* '<S6>/VeCRDB_y_ChrgFailSts_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

    uint8 TmpSignalConversionAtVeSR1B_y_PreCondCab;
                                    /* '<S3>/VeSR1B_y_PreCondCabinSts_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    uint8 TmpSignalConversionAtVeCRDB_y_AC_Side_Cu;
                                      /* '<S3>/VeCRDB_y_AC_Side_Curr1_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    uint8 TmpSignalConversionAtVeCRDB_y_AC_Side__p;
                                      /* '<S3>/VeCRDB_y_AC_Side_Curr2_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    uint8 TmpSignalConversionAtVeCRDB_y_AC_Side__m;
                                      /* '<S3>/VeCRDB_y_AC_Side_Curr3_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    uint8 TmpSignalConversionAtVeCRDB_y_AC_Side_Vo;
                                      /* '<S3>/VeCRDB_y_AC_Side_Volt1_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    uint8 TmpSignalConversionAtVeCRDB_y_AC_Side__j;
                                      /* '<S3>/VeCRDB_y_AC_Side_Volt2_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    uint8 TmpSignalConversionAtVeCRDB_y_AC_Side__g;
                                      /* '<S3>/VeCRDB_y_AC_Side_Volt3_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    uint8 TmpSignalConversionAtVeCRDB_y_BatterySid;
                                 /* '<S3>/VeCRDB_y_BatterySideCurrent_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    uint8 TmpSignalConversionAtVeCRDB_y_BatteryS_i;
                                 /* '<S3>/VeCRDB_y_BatterySideVoltage_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    uint8 TmpSignalConversionAtVeCRDB_y_ChargeCurr;
                                      /* '<S3>/VeCRDB_y_ChargeCurrent_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    uint8 TmpSignalConversionAtVeCRDB_y_ChrgCurrAv;
                                      /* '<S3>/VeCRDB_y_ChrgCurrAvail_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    uint8 TmpSignalConversionAtVeCRDB_y_InputCurre;
                                  /* '<S3>/VeCRDB_y_InputCurrentAvail_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    uint8 TmpSignalConversionAtVeCRDB_y_J1772_Stat;/* '<S3>/VeCRDB_y_J1772_State_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    uint8 TmpSignalConversionAtVeCRDB_y_SuprtdProt;
                                 /* '<S3>/VeCRDB_y_SuprtdProtocolName_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus

    uint8 TmpSignalConversionAtVeCRDB_y_BPCM_Cell_;
                                 /* '<S5>/VeCRDB_y_BPCM_Cell_Volt_Max_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus

    uint8 TmpSignalConversionAtVeCRDB_y_BPCM_Cel_n;
                                 /* '<S5>/VeCRDB_y_BPCM_Cell_Volt_Min_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    uint8 TmpSignalConversionAtVeCRDB_y_HVCMS_EVSE;
                                 /* '<S5>/VeCRDB_y_HVCMS_EVSEMaxCurLm_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    uint8 TmpSignalConversionAtVeCRDB_y_HVCMS_EV_g;
                                 /* '<S5>/VeCRDB_y_HVCMS_EVSEMaxVltLm_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    uint8 TmpSignalConversionAtVeCRDB_y_HVCMS_EV_n;
                                 /* '<S5>/VeCRDB_y_HVCMS_EVSEMinCurLm_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    uint8 TmpSignalConversionAtVeCRDB_y_HVCMS_EV_m;
                                 /* '<S5>/VeCRDB_y_HVCMS_EVSEMinVltLm_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    uint8 TmpSignalConversionAtVeCRDB_y_HVCMS_E_no;
                                 /* '<S5>/VeCRDB_y_HVCMS_EVSEPrsntCur_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    uint8 TmpSignalConversionAtVeCRDB_y_HVCMS_EV_a;
                                 /* '<S5>/VeCRDB_y_HVCMS_EVSEPrsntVlt_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    uint8 TmpSignalConversionAtVeCRDB_y_HVCMS_Resp;
                                 /* '<S5>/VeCRDB_y_HVCMS_ResponseCode_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U048D_BLUEN || Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    uint8 TmpSignalConversionAtVeCRDB_y_APM_CtrlSt;
                                    /* '<S5>/VeCRDB_y_APM_CtrlSts_Fbk_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U048D_BLUEN || Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    uint8 TmpSignalConversionAtVeCRDB_y_APM_Failur;
                                  /* '<S5>/VeCRDB_y_APM_FailureReason_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U048D_BLUEN || Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    uint8 TmpSignalConversionAtVeCRDB_y_APM_Fail_k;
                                    /* '<S5>/VeCRDB_y_APM_FailureType_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U048D_BLUEN || Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    uint8 TmpSignalConversionAtVeCRDB_y_APM_HV_I_F;/* '<S5>/VeCRDB_y_APM_HV_I_Fbk_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U048D_BLUEN || Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    uint8 TmpSignalConversionAtVeCRDB_y_APM_HV_V_F;/* '<S5>/VeCRDB_y_APM_HV_V_Fbk_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U048D_BLUEN || Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    uint8 TmpSignalConversionAtVeCRDB_y_APM_IdcHvS;
                                  /* '<S5>/VeCRDB_y_APM_IdcHvSetPFdbk_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U048D_BLUEN || Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    uint8 TmpSignalConversionAtVeCRDB_y_APM_LV_I_F;/* '<S5>/VeCRDB_y_APM_LV_I_Fbk_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U048D_BLUEN || Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    uint8 TmpSignalConversionAtVeCRDB_y_APM_LV_V_F;/* '<S5>/VeCRDB_y_APM_LV_V_Fbk_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U048D_BLUEN || Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    uint8 TmpSignalConversionAtVeCRDB_y_APM_PSFB_T;
                                     /* '<S5>/VeCRDB_y_APM_PSFB_Temp2_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U048D_BLUEN || Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    uint8 TmpSignalConversionAtVeCRDB_y_APM_PSFB_k;
                                     /* '<S5>/VeCRDB_y_APM_PSFB_Temp1_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0404_Corebev || Rte_SysCon_Variant_CIDB_U0404_Pegasus

    uint8 TmpSignalConversionAtVeSR1B_y_ShiftLever;
                          /* '<S5>/VeSR1B_y_ShiftLeverPositionReq_FD3_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0404_BLUEN

    uint8 TmpSignalConversionAtVeSR1B_y_ShiftLev_p;
                              /* '<S5>/VeSR1B_y_ShiftLeverPosnReq_FD3_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN || Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus

    uint8 TmpSignalConversionAtVeCRDB_y_BPCM_HV_Cu;
                                    /* '<S4>/VeCRDB_y_BPCM_HV_Current_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN || Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus

    uint8 TmpSignalConversionAtVeCRDB_y_BPCM_HV_In;
                                    /* '<S4>/VeCRDB_y_BPCM_HV_IntVolt_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN || Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus

    uint8 TmpSignalConversionAtVeCRDB_y_BPCM_HV_SO;/* '<S4>/VeCRDB_y_BPCM_HV_SOC_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN || Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus

    uint8 TmpSignalConversionAtVeCRDB_y_BPCM_HV_Te;
                                   /* '<S4>/VeCRDB_y_BPCM_HV_Temp_Avg_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN || Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus

    uint8 TmpSignalConversionAtVeCRDB_y_BPCM_HV__m;
                                   /* '<S4>/VeCRDB_y_BPCM_HV_Temp_Max_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN || Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus

    uint8 TmpSignalConversionAtVeCRDB_y_BPCM_HV__p;
                                   /* '<S4>/VeCRDB_y_BPCM_HV_Temp_Min_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN || Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus

    uint8 TmpSignalConversionAtVeCRDB_y_BPCM_HV_Tr;
                                 /* '<S4>/VeCRDB_y_BPCM_HV_TracBusSts_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN || Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus

    uint8 TmpSignalConversionAtVeCRDB_y_BPCM_HVChr;
                                 /* '<S4>/VeCRDB_y_BPCM_HVChrgCurProf_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN || Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus

    uint8 TmpSignalConversionAtVeCRDB_y_BPCM_HVPwr;
                                 /* '<S4>/VeCRDB_y_BPCM_HVPwrMaxChgLT_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN || Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus

    uint8 TmpSignalConversionAtVeCRDB_y_BPCM_HVP_b;
                                 /* '<S4>/VeCRDB_y_BPCM_HVPwrMaxChgMT_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN || Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus

    uint8 TmpSignalConversionAtVeCRDB_y_BPCM_HVP_k;
                                 /* '<S4>/VeCRDB_y_BPCM_HVPwrMaxChgST_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN || Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus

    uint8 TmpSignalConversionAtVeCRDB_y_BPCM_HVP_f;
                                 /* '<S4>/VeCRDB_y_BPCM_HVPwrMxDchgLT_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN || Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus

    uint8 TmpSignalConversionAtVeCRDB_y_BPCM_HV_bv;
                                 /* '<S4>/VeCRDB_y_BPCM_HVPwrMxDchgMT_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN || Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus

    uint8 TmpSignalConversionAtVeCRDB_y_BPCM_HVP_i;
                                 /* '<S4>/VeCRDB_y_BPCM_HVPwrMxDchgST_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

    uint8 TmpSignalConversionAtVeSR1B_y_KeyInIgnSt;/* '<S4>/VeSR1B_y_KeyInIgnSts_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

    uint8 TmpSignalConversionAtVeSR1B_y_Operationa;
                                 /* '<S4>/VeSR1B_y_OperationalModeSts_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0415_BLUEN || Rte_SysCon_Variant_CIDB_U0415_Corebev || Rte_SysCon_Variant_CIDB_U0415_Pegasus

    uint8 TmpSignalConversionAtVeSR1B_y_LHFWheelSp;
                                  /* '<S4>/VeSR1B_y_LHFWheelSpeed_FD3_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0415_BLUEN || Rte_SysCon_Variant_CIDB_U0415_Corebev || Rte_SysCon_Variant_CIDB_U0415_Pegasus

    uint8 TmpSignalConversionAtVeSR1B_y_LHF_Spin_F;/* '<S4>/VeSR1B_y_LHF_Spin_FD3_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0415_BLUEN || Rte_SysCon_Variant_CIDB_U0415_Corebev || Rte_SysCon_Variant_CIDB_U0415_Pegasus

    uint8 TmpSignalConversionAtVeSR1B_y_LHRWheelSp;
                                  /* '<S4>/VeSR1B_y_LHRWheelSpeed_FD3_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0415_BLUEN || Rte_SysCon_Variant_CIDB_U0415_Corebev || Rte_SysCon_Variant_CIDB_U0415_Pegasus

    uint8 TmpSignalConversionAtVeSR1B_y_LHR_Spin_F;/* '<S4>/VeSR1B_y_LHR_Spin_FD3_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0415_Corebev || Rte_SysCon_Variant_CIDB_U0415_Pegasus

    uint8 TmpSignalConversionAtVeSR1B_y_LongAccele;
                           /* '<S4>/VeSR1B_y_LongAcceleration_BSM_FD3_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0415_BLUEN

    uint8 TmpSignalConversionAtVeSR1B_y_LongAccelt;
                                /* '<S4>/VeSR1B_y_LongAcceltn_BSM_FD3_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0415_BLUEN || Rte_SysCon_Variant_CIDB_U0415_Corebev || Rte_SysCon_Variant_CIDB_U0415_Pegasus

    uint8 TmpSignalConversionAtVeSR1B_y_RHFWheelSp;
                                  /* '<S4>/VeSR1B_y_RHFWheelSpeed_FD3_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0415_BLUEN || Rte_SysCon_Variant_CIDB_U0415_Corebev || Rte_SysCon_Variant_CIDB_U0415_Pegasus

    uint8 TmpSignalConversionAtVeSR1B_y_RHF_Spin_F;/* '<S4>/VeSR1B_y_RHF_Spin_FD3_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0415_BLUEN || Rte_SysCon_Variant_CIDB_U0415_Corebev || Rte_SysCon_Variant_CIDB_U0415_Pegasus

    uint8 TmpSignalConversionAtVeSR1B_y_RHRWheelSp;
                                  /* '<S4>/VeSR1B_y_RHRWheelSpeed_FD3_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0415_BLUEN || Rte_SysCon_Variant_CIDB_U0415_Corebev || Rte_SysCon_Variant_CIDB_U0415_Pegasus

    uint8 TmpSignalConversionAtVeSR1B_y_RHR_Spin_F;/* '<S4>/VeSR1B_y_RHR_Spin_FD3_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0415_Corebev || Rte_SysCon_Variant_CIDB_U0415_Pegasus

    uint8 TmpSignalConversionAtVeSR1B_y_VehiclSpee;
                             /* '<S4>/VeSR1B_y_VehiclSpeedVSOSig_FD14_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0415_BLUEN || Rte_SysCon_Variant_CIDB_U0415_Corebev || Rte_SysCon_Variant_CIDB_U0415_Pegasus

    uint8 TmpSignalConversionAtVeSR1B_y_VehicleSpe;
                             /* '<S4>/VeSR1B_y_VehicleSpeedVSOSig_FD3_SigSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U149A_Corebev || Rte_SysCon_Variant_CIDB_U149A_Pegasus

    uint8 TmpSignalConversionAtVeLINR_e_CPIM_IND1_;
                                     /* '<S1>/VeLINR_e_CPIM_IND1_Fdbk_ErrSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U149A_Corebev || Rte_SysCon_Variant_CIDB_U149A_Pegasus

    uint8 TmpSignalConversionAtVeLINR_e_CPIM_IND2_;
                                     /* '<S1>/VeLINR_e_CPIM_IND2_Fdbk_ErrSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U149A_Corebev || Rte_SysCon_Variant_CIDB_U149A_Pegasus

    uint8 TmpSignalConversionAtVeLINR_e_CPIM_IND3_;
                                     /* '<S1>/VeLINR_e_CPIM_IND3_Fdbk_ErrSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U149A_Corebev || Rte_SysCon_Variant_CIDB_U149A_Pegasus

    uint8 TmpSignalConversionAtVeLINR_e_CPIM_IND4_;
                                     /* '<S1>/VeLINR_e_CPIM_IND4_Fdbk_ErrSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U149A_Corebev || Rte_SysCon_Variant_CIDB_U149A_Pegasus

    uint8 TmpSignalConversionAtVeLINR_e_CPIM_IND5_;
                                     /* '<S1>/VeLINR_e_CPIM_IND5_Fdbk_ErrSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U149A_Corebev || Rte_SysCon_Variant_CIDB_U149A_Pegasus

    uint8 TmpSignalConversionAtVeLINR_e_CPIM_IND_C;
                                /* '<S1>/VeLINR_e_CPIM_IND_Color_Fdbk_ErrSts' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

    boolean TmpSignalConversionAtVeCIDB_b_IsDiagGlob;
                               /* '<S2>/VeCIDB_b_IsDiagGlobalConditionsValid' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

    boolean TmpSignalConversionAtVeCIDB_b_RstDiagCnt;/* '<S2>/VeCIDB_b_RstDiagCntr' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

    boolean NOT;                       /* '<S6>/NOT' */

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

    boolean TmpSignalConversionAtVeCIDB_b_U0422_Diag;/* '<S6>/VeCIDB_b_U0422_DiagEnbl' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus || Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    boolean TmpSignalConversionAtVeCIDB_b_RstDiagC_e;/* '<S6>/VeCIDB_b_RstDiagCntr' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    boolean TmpSignalConversionAtVeCIDB_b_U049C_Diag;/* '<S6>/VeCIDB_b_U049C_DiagEnbl' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    boolean VariantMergeForOutportVeCIDB_b_HV_CHARGE;

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    boolean VariantMergeForOutportVeCIDB_b_DUALCHARG;

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

    boolean VariantMergeForOutportVeCIDB_b_BCM_FD_10;

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

    boolean VeCIDB_b_BCM_FD_9_CalDiagEnbl;

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

    boolean TmpSignalConversionAtVeCIDB_b_U0422_Di_p;/* '<S3>/VeCIDB_b_U0422_DiagEnbl' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus || Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    boolean TmpSignalConversionAtVeCIDB_b_RstDiag_e1;/* '<S3>/VeCIDB_b_RstDiagCntr' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    boolean TmpSignalConversionAtVeCIDB_b_U057B_Diag;/* '<S3>/VeCIDB_b_U057B_DiagEnbl' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    boolean VariantMergeForOutportVeCIDB_b_HV_CHAR_c;

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

    boolean VariantMergeForOutportVeCIDB_b_BCM_FD_12;

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN || Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus

    boolean TmpSignalConversionAtVeCIDB_b_U0412_Diag;/* '<S5>/VeCIDB_b_U0412_DiagEnbl' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0404_BLUEN || Rte_SysCon_Variant_CIDB_U0404_Corebev || Rte_SysCon_Variant_CIDB_U0404_Pegasus || Rte_SysCon_Variant_CIDB_U0412_BLUEN || Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus || Rte_SysCon_Variant_CIDB_U048D_BLUEN || Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    boolean TmpSignalConversionAtVeCIDB_b_RstDia_e1h;/* '<S5>/VeCIDB_b_RstDiagCntr' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    boolean TmpSignalConversionAtVeCIDB_b_DUALCHAR_j;
                           /* '<S5>/VeCIDB_b_DUALCHARGER_THERMAL_CalDiagEnbl' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    boolean TmpSignalConversionAtVeCIDB_b_HV_CHARG_o;
                                   /* '<S5>/VeCIDB_b_HV_CHARGER1_CalDiagEnbl' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    boolean TmpSignalConversionAtVeCIDB_b_HV_CHARG_l;
                                   /* '<S5>/VeCIDB_b_HV_CHARGER2_CalDiagEnbl' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0404_BLUEN || Rte_SysCon_Variant_CIDB_U0404_Corebev || Rte_SysCon_Variant_CIDB_U0404_Pegasus || Rte_SysCon_Variant_CIDB_U048D_BLUEN || Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    boolean TmpSignalConversionAtVeCIDB_b_IsDiagGl_e;
                               /* '<S5>/VeCIDB_b_IsDiagGlobalConditionsValid' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    boolean VeCIDB_b_U049C_DiagEnbl;

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN || Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus

    boolean VariantMergeForOutportVeCIDB_b_BATTERY_H;

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

    boolean OR_c;                      /* '<S4>/OR' */

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN || Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus

    boolean TmpSignalConversionAtVeCIDB_b_BATTERY__c;
                            /* '<S4>/VeCIDB_b_BATTERY_HV_VLIMITS_CalDiagEnbl' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

    boolean TmpSignalConversionAtVeCIDB_b_BCM_FD_1_o;
                                     /* '<S4>/VeCIDB_b_BCM_FD_10_CalDiagEnbl' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

    boolean TmpSignalConversionAtVeCIDB_b_BCM_FD_1_h;
                                     /* '<S4>/VeCIDB_b_BCM_FD_12_CalDiagEnbl' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

    boolean TmpSignalConversionAtVeCIDB_b_BCM_FD_9_k;
                                      /* '<S4>/VeCIDB_b_BCM_FD_9_CalDiagEnbl' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

    boolean TmpSignalConversionAtVeDFIR_b_IsDiagGlob;

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

    boolean VariantMergeForOutportVeCIDB_b_U0422_Dia;

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN || Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus

    boolean VariantMergeForOutportVeCIDB_b_U0412_Dia;

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U149A_Corebev || Rte_SysCon_Variant_CIDB_U149A_Pegasus

    boolean TmpSignalConversionAtVeCIDB_b_IsDiagG_er;
                               /* '<S1>/VeCIDB_b_IsDiagGlobalConditionsValid' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U149A_Corebev || Rte_SysCon_Variant_CIDB_U149A_Pegasus

    boolean TmpSignalConversionAtVeCIDB_b_RstDi_e1hg;/* '<S1>/VeCIDB_b_RstDiagCntr' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U149A_Corebev || Rte_SysCon_Variant_CIDB_U149A_Pegasus

    boolean TmpSignalConversionAtVeLINR_b_CPIM_IND1_;/* '<S1>/VeLINR_b_CPIM_IND1_FailStsTO' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

    TeDFIB_e_FaultDebounceStatus Status;/* '<S76>/Diagnostic Debounce' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

    TeDFIB_e_FaultDebounceStatus Status_n;/* '<S66>/Diagnostic Debounce' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    TeDFIB_e_FaultDebounceStatus Status_e;

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    TeDFIB_e_FaultDebounceStatus Status_ed;

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

    TeDFIB_e_FaultDebounceStatus Status_edc;

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

    TeDFIB_e_FaultDebounceStatus Status_edcd;

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    TeDFIB_e_FaultDebounceStatus Status_edcdn;

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

    TeDFIB_e_FaultDebounceStatus Status_edcdnm;

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    TeDFIB_e_FaultDebounceStatus TmpSignalConversionAtVeCIDB_e_DUALCHAR_p;
                              /* '<S5>/VeCIDB_e_DUALCHARGER_THERMAL_ErrState' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    TeDFIB_e_FaultDebounceStatus TmpSignalConversionAtVeCIDB_e_HV_CHARG_f;
                                      /* '<S5>/VeCIDB_e_HV_CHARGER2_ErrState' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev || Rte_SysCon_Variant_CIDB_U049C_Pegasus

    TeDFIB_e_FaultDebounceStatus TmpSignalConversionAtVeCIDB_e_HV_CHARG_h;
                                      /* '<S5>/VeCIDB_e_HV_CHARGER1_ErrState' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U048D_BLUEN

    TeDFIB_e_FaultDebounceStatus Status_f;/* '<S595>/Diagnostic Debounce' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN || Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus

    TeDFIB_e_FaultDebounceStatus VeCIDB_e_BATTERY_HV_VLIMITS_ErrState;

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN || Rte_SysCon_Variant_CIDB_U0412_Corebev || Rte_SysCon_Variant_CIDB_U0412_Pegasus

    TeDFIB_e_FaultDebounceStatus TmpSignalConversionAtVeCIDB_e_BATTERY__h;
                               /* '<S4>/VeCIDB_e_BATTERY_HV_VLIMITS_ErrState' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

    TeDFIB_e_FaultDebounceStatus TmpSignalConversionAtVeCIDB_e_BCM_FD_9_d;/* '<S4>/VeCIDB_e_BCM_FD_9_ErrState' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

    TeDFIB_e_FaultDebounceStatus TmpSignalConversionAtVeCIDB_e_BCM_FD_1_b;/* '<S4>/VeCIDB_e_BCM_FD_10_ErrState' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN || Rte_SysCon_Variant_CIDB_U0422_Corebev || Rte_SysCon_Variant_CIDB_U0422_Pegasus

    TeDFIB_e_FaultDebounceStatus TmpSignalConversionAtVeCIDB_e_BCM_FD_1_j;/* '<S4>/VeCIDB_e_BCM_FD_12_ErrState' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Pegasus

    B_DiagnosticDebounce_CIDB_ac_i_T sf_DiagnosticDebounce_gd;/* '<S673>/Diagnostic Debounce' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Pegasus

    B_DiagnosticDebounce_CIDB_ac_hx_T sf_DiagnosticDebounce_maz;/* '<S663>/Diagnostic Debounce' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev

    B_DiagnosticDebounce_CIDB_ac_i_T sf_DiagnosticDebounce_ff;/* '<S631>/Diagnostic Debounce' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev

    B_DiagnosticDebounce_CIDB_ac_hx_T sf_DiagnosticDebounce_pc;/* '<S621>/Diagnostic Debounce' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0404_Pegasus

    B_DiagnosticDebounce_CIDB_ac_h_T sf_DiagnosticDebounce_oc;/* '<S535>/Diagnostic Debounce' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0404_Corebev

    B_DiagnosticDebounce_CIDB_ac_h_T sf_DiagnosticDebounce_cw;/* '<S512>/Diagnostic Debounce' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0404_BLUEN

    B_DiagnosticDebounce_CIDB_ac_h_T sf_DiagnosticDebounce_hy;/* '<S489>/Diagnostic Debounce' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0422_Pegasus

    B_DiagnosticDebounce_CIDB_ac_a_T sf_DiagnosticDebounce_hs;/* '<S453>/Diagnostic Debounce' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0422_Corebev

    B_DiagnosticDebounce_CIDB_ac_a_T sf_DiagnosticDebounce_ma;/* '<S424>/Diagnostic Debounce' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN

    B_DiagnosticDebounce_CIDB_ac_a_T sf_DiagnosticDebounce_nh;/* '<S395>/Diagnostic Debounce' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0415_Pegasus

    B_DiagnosticDebounce_CIDB_ac_j_T sf_DiagnosticDebounce_n;/* '<S367>/Diagnostic Debounce' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0415_Pegasus

    B_DiagnosticDebounce_CIDB_ac_g_T sf_DiagnosticDebounce_h;/* '<S357>/Diagnostic Debounce' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0415_Corebev

    B_DiagnosticDebounce_CIDB_ac_j_T sf_DiagnosticDebounce_c;/* '<S331>/Diagnostic Debounce' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0415_Corebev

    B_DiagnosticDebounce_CIDB_ac_g_T sf_DiagnosticDebounce_f;/* '<S321>/Diagnostic Debounce' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0415_BLUEN

    B_DiagnosticDebounce_CIDB_ac_j_T sf_DiagnosticDebounce_d;/* '<S295>/Diagnostic Debounce' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0415_BLUEN

    B_DiagnosticDebounce_CIDB_ac_g_T sf_DiagnosticDebounce_p;/* '<S285>/Diagnostic Debounce' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0412_Pegasus

    B_DiagnosticDebounce_CIDB_ac_o_T sf_DiagnosticDebounce_l;/* '<S254>/Diagnostic Debounce' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0412_Pegasus

    B_DiagnosticDebounce_CIDB_ac_l_T sf_DiagnosticDebounce_jg;/* '<S244>/Diagnostic Debounce' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0412_Corebev

    B_DiagnosticDebounce_CIDB_ac_o_T sf_DiagnosticDebounce_e;/* '<S216>/Diagnostic Debounce' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0412_Corebev

    B_DiagnosticDebounce_CIDB_ac_l_T sf_DiagnosticDebounce_o;/* '<S206>/Diagnostic Debounce' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN

    B_DiagnosticDebounce_CIDB_ac_o_T sf_DiagnosticDebounce_m;/* '<S178>/Diagnostic Debounce' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN

    B_DiagnosticDebounce_CIDB_ac_l_T sf_DiagnosticDebounce_j;/* '<S168>/Diagnostic Debounce' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U149A_Pegasus

    B_DiagnosticDebounce_CIDB_ac_T sf_DiagnosticDebounce_b;/* '<S40>/Diagnostic Debounce' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U149A_Corebev

    B_DiagnosticDebounce_CIDB_ac_T sf_DiagnosticDebounce;/* '<S17>/Diagnostic Debounce' */

#define B_CIDB_AC_T_VARIANT_EXISTS
#endif

}
B_CIDB_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_CIDB_ac_T
{

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

    boolean UnitDelay_DSTATE;          /* '<S84>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

    boolean UnitDelay_DSTATE_a;        /* '<S82>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U044A_Pegasus_Corebev

    boolean UnitDelay_DSTATE_f;        /* '<S72>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

    boolean UnitDelay_DSTATE_g;        /* '<S6>/Unit Delay' */

#if Rte_SysCon_Variant_CIDB_U049C_Pegasus

    boolean UnitDelay_DSTATE_n;        /* '<S791>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev

    boolean UnitDelay_DSTATE_nx;       /* '<S781>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0422_Pegasus

    boolean UnitDelay_DSTATE_h;        /* '<S769>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0422_Corebev

    boolean UnitDelay_DSTATE_nc;       /* '<S747>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN

    boolean UnitDelay_DSTATE_d;        /* '<S725>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Pegasus

    boolean UnitDelay_DSTATE_p;        /* '<S154>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev

    boolean UnitDelay_DSTATE_gk;       /* '<S144>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0422_Pegasus

    boolean UnitDelay_DSTATE_gp;       /* '<S132>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0422_Corebev

    boolean UnitDelay_DSTATE_m;        /* '<S121>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN

    boolean UnitDelay_DSTATE_e;        /* '<S110>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Pegasus

    boolean UnitDelay_DSTATE_dv;       /* '<S681>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Pegasus

    boolean UnitDelay_DSTATE_fw;       /* '<S679>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Pegasus

    boolean UnitDelay_DSTATE_eg;       /* '<S669>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev

    boolean UnitDelay_DSTATE_j;        /* '<S639>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev

    boolean UnitDelay_DSTATE_pm;       /* '<S637>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev

    boolean UnitDelay_DSTATE_i;        /* '<S627>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U048D_BLUEN

    boolean UnitDelay_DSTATE_iv;       /* '<S603>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U048D_BLUEN

    boolean UnitDelay_DSTATE_eb;       /* '<S601>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0412_Pegasus

    boolean UnitDelay_DSTATE_an;       /* '<S587>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0412_Corebev

    boolean UnitDelay_DSTATE_mq;       /* '<S576>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN

    boolean UnitDelay_DSTATE_k;        /* '<S565>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0404_Pegasus

    boolean UnitDelay_DSTATE_d0;       /* '<S543>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0404_Pegasus

    boolean UnitDelay_DSTATE_l;        /* '<S541>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0404_Corebev

    boolean UnitDelay_DSTATE_o;        /* '<S520>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0404_Corebev

    boolean UnitDelay_DSTATE_gl;       /* '<S518>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0404_BLUEN

    boolean UnitDelay_DSTATE_ep;       /* '<S497>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0404_BLUEN

    boolean UnitDelay_DSTATE_oz;       /* '<S495>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0422_Pegasus

    boolean UnitDelay_DSTATE_pv;       /* '<S461>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0422_Pegasus

    boolean UnitDelay_DSTATE_b;        /* '<S459>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0422_Corebev

    boolean UnitDelay_DSTATE_pp;       /* '<S432>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0422_Corebev

    boolean UnitDelay_DSTATE_ku;       /* '<S430>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN

    boolean UnitDelay_DSTATE_jt;       /* '<S402>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN

    boolean UnitDelay_DSTATE_nk;       /* '<S401>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0415_Pegasus

    boolean UnitDelay_DSTATE_p3;       /* '<S375>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0415_Pegasus

    boolean UnitDelay_DSTATE_l2;       /* '<S373>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0415_Pegasus

    boolean UnitDelay_DSTATE_kn;       /* '<S363>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0415_Corebev

    boolean UnitDelay_DSTATE_jv;       /* '<S339>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0415_Corebev

    boolean UnitDelay_DSTATE_be;       /* '<S337>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0415_Corebev

    boolean UnitDelay_DSTATE_f5;       /* '<S327>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0415_BLUEN

    boolean UnitDelay_DSTATE_hf;       /* '<S303>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0415_BLUEN

    boolean UnitDelay_DSTATE_mi;       /* '<S301>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0415_BLUEN

    boolean UnitDelay_DSTATE_jr;       /* '<S291>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0412_Pegasus

    boolean UnitDelay_DSTATE_ee;       /* '<S262>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0412_Pegasus

    boolean UnitDelay_DSTATE_jh;       /* '<S260>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0412_Pegasus

    boolean UnitDelay_DSTATE_hr;       /* '<S250>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0412_Corebev

    boolean UnitDelay_DSTATE_h0;       /* '<S224>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0412_Corebev

    boolean UnitDelay_DSTATE_od;       /* '<S222>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0412_Corebev

    boolean UnitDelay_DSTATE_ip;       /* '<S212>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN

    boolean UnitDelay_DSTATE_c;        /* '<S186>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN

    boolean UnitDelay_DSTATE_n0;       /* '<S184>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0412_BLUEN

    boolean UnitDelay_DSTATE_ds;       /* '<S174>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U149A_Pegasus

    boolean UnitDelay_DSTATE_o3;       /* '<S48>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U149A_Pegasus

    boolean UnitDelay_DSTATE_bd;       /* '<S46>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U149A_Corebev

    boolean UnitDelay_DSTATE_j3;       /* '<S25>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U149A_Corebev

    boolean UnitDelay_DSTATE_dg;       /* '<S23>/Unit Delay' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

    uint8 StatusByte_InvData_BECM;     /* '<Root>/Data Store Memory2' */
    uint8 StatusByte_InvData_ABS;      /* '<Root>/Data Store Memory3' */
    uint8 StatusByte_InvData_BCM;      /* '<Root>/Data Store Memory4' */
    uint8 StatusByte_InvData_ESM;      /* '<Root>/Data Store Memory1' */
    uint8 StatusByte_InvData_DM_PICM;  /* '<Root>/Data Store Memory7' */
    uint8 StatusByte_InvData_OBCM;     /* '<Root>/Data Store Memory9' */
    uint8 StatusByte_InvData_SecurGateway;/* '<Root>/Data Store Memory5' */
    uint8 StatusByte_InvData_CPIMGen2; /* '<Root>/Data Store Memory6' */

#if Rte_SysCon_Variant_CIDB_U049C_Pegasus

    DW_HV_CHARGER_2_CIDB_ac_T HV_CHARGER_2_i;/* '<S793>/HV_CHARGER_2' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U049C_Corebev

    DW_HV_CHARGER_2_CIDB_ac_T HV_CHARGER_2;/* '<S792>/HV_CHARGER_2' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0422_Pegasus

    DW_U0422_BCM_FD_10_CIDB_ac_T U0422_BCM_FD_10_m;/* '<S703>/U0422_BCM_FD_10' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0422_Corebev

    DW_U0422_BCM_FD_10_CIDB_ac_T U0422_BCM_FD_10_o;/* '<S702>/U0422_BCM_FD_10' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CIDB_U0422_BLUEN

    DW_U0422_BCM_FD_10_CIDB_ac_T U0422_BCM_FD_10;/* '<S701>/U0422_BCM_FD_10' */

#define DW_CIDB_AC_T_VARIANT_EXISTS
#endif

}
DW_CIDB_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CIDB
#include "MemMap.h"

extern VAR(B_CIDB_ac_T, CIDB_VAR_INIT) CIDB_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CIDB
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CIDB
#include "MemMap.h"

extern VAR(DW_CIDB_ac_T, CIDB_VAR_INIT) CIDB_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CIDB
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
 * '<Root>' : 'CIDB_ac'
 * '<S1>'   : 'CIDB_ac/CPIM_HCP_FEEDBACK'
 * '<S2>'   : 'CIDB_ac/ImplausibleMgmt_1000ms'
 * '<S3>'   : 'CIDB_ac/ImplausibleMgmt_100ms'
 * '<S4>'   : 'CIDB_ac/ImplausibleMgmt_10ms'
 * '<S5>'   : 'CIDB_ac/ImplausibleMgmt_20ms'
 * '<S6>'   : 'CIDB_ac/ImplausibleMgmt_250ms'
 * '<S7>'   : 'CIDB_ac/Initialize Function'
 * '<S8>'   : 'CIDB_ac/CPIM_HCP_FEEDBACK/U149A_Variant_Pegasus_COREBEV'
 * '<S9>'   : 'CIDB_ac/CPIM_HCP_FEEDBACK/U149A_Variant_Pegasus_COREBEV/U149A_COREBEV_250ms'
 * '<S10>'  : 'CIDB_ac/CPIM_HCP_FEEDBACK/U149A_Variant_Pegasus_COREBEV/U149A_Pegasus_250ms'
 * '<S11>'  : 'CIDB_ac/CPIM_HCP_FEEDBACK/U149A_Variant_Pegasus_COREBEV/U149A_COREBEV_250ms/U149A_CPIM_HCP_FEEDBACK'
 * '<S12>'  : 'CIDB_ac/CPIM_HCP_FEEDBACK/U149A_Variant_Pegasus_COREBEV/U149A_COREBEV_250ms/U149A_Enable'
 * '<S13>'  : 'CIDB_ac/CPIM_HCP_FEEDBACK/U149A_Variant_Pegasus_COREBEV/U149A_COREBEV_250ms/U149A_Report'
 * '<S14>'  : 'CIDB_ac/CPIM_HCP_FEEDBACK/U149A_Variant_Pegasus_COREBEV/U149A_COREBEV_250ms/U149A_CPIM_HCP_FEEDBACK/U149A_CPIM_HCP_FEEDBACK'
 * '<S15>'  : 'CIDB_ac/CPIM_HCP_FEEDBACK/U149A_Variant_Pegasus_COREBEV/U149A_COREBEV_250ms/U149A_CPIM_HCP_FEEDBACK/U149A_CPIM_HCP_FEEDBACK/Diagnostic Debounce CPIM_HCP_FEEDBACK'
 * '<S16>'  : 'CIDB_ac/CPIM_HCP_FEEDBACK/U149A_Variant_Pegasus_COREBEV/U149A_COREBEV_250ms/U149A_CPIM_HCP_FEEDBACK/U149A_CPIM_HCP_FEEDBACK/Diagnostic Fault Criteria CPIM_HCP_FEEDBACK'
 * '<S17>'  : 'CIDB_ac/CPIM_HCP_FEEDBACK/U149A_Variant_Pegasus_COREBEV/U149A_COREBEV_250ms/U149A_CPIM_HCP_FEEDBACK/U149A_CPIM_HCP_FEEDBACK/Diagnostic Debounce CPIM_HCP_FEEDBACK/DiagnosticDebounceImplausibleSignalSNA'
 * '<S18>'  : 'CIDB_ac/CPIM_HCP_FEEDBACK/U149A_Variant_Pegasus_COREBEV/U149A_COREBEV_250ms/U149A_CPIM_HCP_FEEDBACK/U149A_CPIM_HCP_FEEDBACK/Diagnostic Debounce CPIM_HCP_FEEDBACK/KeCIDB_Cnt_CPIM_HCP_FEEDBACK_ePT_SNAFailINC'
 * '<S19>'  : 'CIDB_ac/CPIM_HCP_FEEDBACK/U149A_Variant_Pegasus_COREBEV/U149A_COREBEV_250ms/U149A_CPIM_HCP_FEEDBACK/U149A_CPIM_HCP_FEEDBACK/Diagnostic Debounce CPIM_HCP_FEEDBACK/KeCIDB_Cnt_CPIM_HCP_FEEDBACK_ePT_SNA_FailLmt'
 * '<S20>'  : 'CIDB_ac/CPIM_HCP_FEEDBACK/U149A_Variant_Pegasus_COREBEV/U149A_COREBEV_250ms/U149A_CPIM_HCP_FEEDBACK/U149A_CPIM_HCP_FEEDBACK/Diagnostic Debounce CPIM_HCP_FEEDBACK/KeCIDB_b_CPIM_HCP_FEEDBACK_ePT_SNA_DiagEnbl'
 * '<S21>'  : 'CIDB_ac/CPIM_HCP_FEEDBACK/U149A_Variant_Pegasus_COREBEV/U149A_COREBEV_250ms/U149A_CPIM_HCP_FEEDBACK/U149A_CPIM_HCP_FEEDBACK/Diagnostic Debounce CPIM_HCP_FEEDBACK/KeCIDB_b_CPIM_HCP_FEEDBACK_ePT_SNA_FailLatchEnable'
 * '<S22>'  : 'CIDB_ac/CPIM_HCP_FEEDBACK/U149A_Variant_Pegasus_COREBEV/U149A_COREBEV_250ms/U149A_CPIM_HCP_FEEDBACK/U149A_CPIM_HCP_FEEDBACK/Diagnostic Debounce CPIM_HCP_FEEDBACK/DiagnosticDebounceImplausibleSignalSNA/Diagnostic Debounce'
 * '<S23>'  : 'CIDB_ac/CPIM_HCP_FEEDBACK/U149A_Variant_Pegasus_COREBEV/U149A_COREBEV_250ms/U149A_CPIM_HCP_FEEDBACK/U149A_CPIM_HCP_FEEDBACK/Diagnostic Debounce CPIM_HCP_FEEDBACK/DiagnosticDebounceImplausibleSignalSNA/EdgeFalling1'
 * '<S24>'  : 'CIDB_ac/CPIM_HCP_FEEDBACK/U149A_Variant_Pegasus_COREBEV/U149A_COREBEV_250ms/U149A_Enable/KeCIDB_b_U149A_DiagEnbl'
 * '<S25>'  : 'CIDB_ac/CPIM_HCP_FEEDBACK/U149A_Variant_Pegasus_COREBEV/U149A_COREBEV_250ms/U149A_Report/EdgeRising'
 * '<S26>'  : 'CIDB_ac/CPIM_HCP_FEEDBACK/U149A_Variant_Pegasus_COREBEV/U149A_COREBEV_250ms/U149A_Report/Enumerated_Constant'
 * '<S27>'  : 'CIDB_ac/CPIM_HCP_FEEDBACK/U149A_Variant_Pegasus_COREBEV/U149A_COREBEV_250ms/U149A_Report/Enumerated_Constant4'
 * '<S28>'  : 'CIDB_ac/CPIM_HCP_FEEDBACK/U149A_Variant_Pegasus_COREBEV/U149A_COREBEV_250ms/U149A_Report/Subsystem'
 * '<S29>'  : 'CIDB_ac/CPIM_HCP_FEEDBACK/U149A_Variant_Pegasus_COREBEV/U149A_COREBEV_250ms/U149A_Report/Subsystem1'
 * '<S30>'  : 'CIDB_ac/CPIM_HCP_FEEDBACK/U149A_Variant_Pegasus_COREBEV/U149A_COREBEV_250ms/U149A_Report/Subsystem2'
 * '<S31>'  : 'CIDB_ac/CPIM_HCP_FEEDBACK/U149A_Variant_Pegasus_COREBEV/U149A_COREBEV_250ms/U149A_Report/Subsystem/Enumerated_Constant4'
 * '<S32>'  : 'CIDB_ac/CPIM_HCP_FEEDBACK/U149A_Variant_Pegasus_COREBEV/U149A_COREBEV_250ms/U149A_Report/Subsystem1/Enumerated_Constant4'
 * '<S33>'  : 'CIDB_ac/CPIM_HCP_FEEDBACK/U149A_Variant_Pegasus_COREBEV/U149A_COREBEV_250ms/U149A_Report/Subsystem2/Enumerated_Constant4'
 * '<S34>'  : 'CIDB_ac/CPIM_HCP_FEEDBACK/U149A_Variant_Pegasus_COREBEV/U149A_Pegasus_250ms/U149A_CPIM_HCP_FEEDBACK'
 * '<S35>'  : 'CIDB_ac/CPIM_HCP_FEEDBACK/U149A_Variant_Pegasus_COREBEV/U149A_Pegasus_250ms/U149A_Enable'
 * '<S36>'  : 'CIDB_ac/CPIM_HCP_FEEDBACK/U149A_Variant_Pegasus_COREBEV/U149A_Pegasus_250ms/U149A_Report'
 * '<S37>'  : 'CIDB_ac/CPIM_HCP_FEEDBACK/U149A_Variant_Pegasus_COREBEV/U149A_Pegasus_250ms/U149A_CPIM_HCP_FEEDBACK/U149A_CPIM_HCP_FEEDBACK'
 * '<S38>'  : 'CIDB_ac/CPIM_HCP_FEEDBACK/U149A_Variant_Pegasus_COREBEV/U149A_Pegasus_250ms/U149A_CPIM_HCP_FEEDBACK/U149A_CPIM_HCP_FEEDBACK/Diagnostic Debounce CPIM_HCP_FEEDBACK'
 * '<S39>'  : 'CIDB_ac/CPIM_HCP_FEEDBACK/U149A_Variant_Pegasus_COREBEV/U149A_Pegasus_250ms/U149A_CPIM_HCP_FEEDBACK/U149A_CPIM_HCP_FEEDBACK/Diagnostic Fault Criteria CPIM_HCP_FEEDBACK'
 * '<S40>'  : 'CIDB_ac/CPIM_HCP_FEEDBACK/U149A_Variant_Pegasus_COREBEV/U149A_Pegasus_250ms/U149A_CPIM_HCP_FEEDBACK/U149A_CPIM_HCP_FEEDBACK/Diagnostic Debounce CPIM_HCP_FEEDBACK/DiagnosticDebounceImplausibleSignalSNA'
 * '<S41>'  : 'CIDB_ac/CPIM_HCP_FEEDBACK/U149A_Variant_Pegasus_COREBEV/U149A_Pegasus_250ms/U149A_CPIM_HCP_FEEDBACK/U149A_CPIM_HCP_FEEDBACK/Diagnostic Debounce CPIM_HCP_FEEDBACK/KeCIDB_Cnt_CPIM_HCP_FEEDBACK_ePT_SNAFailINC'
 * '<S42>'  : 'CIDB_ac/CPIM_HCP_FEEDBACK/U149A_Variant_Pegasus_COREBEV/U149A_Pegasus_250ms/U149A_CPIM_HCP_FEEDBACK/U149A_CPIM_HCP_FEEDBACK/Diagnostic Debounce CPIM_HCP_FEEDBACK/KeCIDB_Cnt_CPIM_HCP_FEEDBACK_ePT_SNA_FailLmt'
 * '<S43>'  : 'CIDB_ac/CPIM_HCP_FEEDBACK/U149A_Variant_Pegasus_COREBEV/U149A_Pegasus_250ms/U149A_CPIM_HCP_FEEDBACK/U149A_CPIM_HCP_FEEDBACK/Diagnostic Debounce CPIM_HCP_FEEDBACK/KeCIDB_b_CPIM_HCP_FEEDBACK_ePT_SNA_DiagEnbl'
 * '<S44>'  : 'CIDB_ac/CPIM_HCP_FEEDBACK/U149A_Variant_Pegasus_COREBEV/U149A_Pegasus_250ms/U149A_CPIM_HCP_FEEDBACK/U149A_CPIM_HCP_FEEDBACK/Diagnostic Debounce CPIM_HCP_FEEDBACK/KeCIDB_b_CPIM_HCP_FEEDBACK_ePT_SNA_FailLatchEnable'
 * '<S45>'  : 'CIDB_ac/CPIM_HCP_FEEDBACK/U149A_Variant_Pegasus_COREBEV/U149A_Pegasus_250ms/U149A_CPIM_HCP_FEEDBACK/U149A_CPIM_HCP_FEEDBACK/Diagnostic Debounce CPIM_HCP_FEEDBACK/DiagnosticDebounceImplausibleSignalSNA/Diagnostic Debounce'
 * '<S46>'  : 'CIDB_ac/CPIM_HCP_FEEDBACK/U149A_Variant_Pegasus_COREBEV/U149A_Pegasus_250ms/U149A_CPIM_HCP_FEEDBACK/U149A_CPIM_HCP_FEEDBACK/Diagnostic Debounce CPIM_HCP_FEEDBACK/DiagnosticDebounceImplausibleSignalSNA/EdgeFalling1'
 * '<S47>'  : 'CIDB_ac/CPIM_HCP_FEEDBACK/U149A_Variant_Pegasus_COREBEV/U149A_Pegasus_250ms/U149A_Enable/KeCIDB_b_U149A_DiagEnbl'
 * '<S48>'  : 'CIDB_ac/CPIM_HCP_FEEDBACK/U149A_Variant_Pegasus_COREBEV/U149A_Pegasus_250ms/U149A_Report/EdgeRising'
 * '<S49>'  : 'CIDB_ac/CPIM_HCP_FEEDBACK/U149A_Variant_Pegasus_COREBEV/U149A_Pegasus_250ms/U149A_Report/Enumerated_Constant'
 * '<S50>'  : 'CIDB_ac/CPIM_HCP_FEEDBACK/U149A_Variant_Pegasus_COREBEV/U149A_Pegasus_250ms/U149A_Report/Enumerated_Constant4'
 * '<S51>'  : 'CIDB_ac/CPIM_HCP_FEEDBACK/U149A_Variant_Pegasus_COREBEV/U149A_Pegasus_250ms/U149A_Report/Subsystem'
 * '<S52>'  : 'CIDB_ac/CPIM_HCP_FEEDBACK/U149A_Variant_Pegasus_COREBEV/U149A_Pegasus_250ms/U149A_Report/Subsystem1'
 * '<S53>'  : 'CIDB_ac/CPIM_HCP_FEEDBACK/U149A_Variant_Pegasus_COREBEV/U149A_Pegasus_250ms/U149A_Report/Subsystem2'
 * '<S54>'  : 'CIDB_ac/CPIM_HCP_FEEDBACK/U149A_Variant_Pegasus_COREBEV/U149A_Pegasus_250ms/U149A_Report/Subsystem/Enumerated_Constant4'
 * '<S55>'  : 'CIDB_ac/CPIM_HCP_FEEDBACK/U149A_Variant_Pegasus_COREBEV/U149A_Pegasus_250ms/U149A_Report/Subsystem1/Enumerated_Constant4'
 * '<S56>'  : 'CIDB_ac/CPIM_HCP_FEEDBACK/U149A_Variant_Pegasus_COREBEV/U149A_Pegasus_250ms/U149A_Report/Subsystem2/Enumerated_Constant4'
 * '<S57>'  : 'CIDB_ac/ImplausibleMgmt_1000ms/U044A_Variant_Pegasus_COREBEV_1000ms'
 * '<S58>'  : 'CIDB_ac/ImplausibleMgmt_1000ms/U044A_Variant_Pegasus_COREBEV_1000ms/U044A_Pegasus_COREBEV_1000ms'
 * '<S59>'  : 'CIDB_ac/ImplausibleMgmt_1000ms/U044A_Variant_Pegasus_COREBEV_1000ms/U044A_Pegasus_COREBEV_1000ms/U044A_1000ms_CHARGE_SCHEDULE_HU1'
 * '<S60>'  : 'CIDB_ac/ImplausibleMgmt_1000ms/U044A_Variant_Pegasus_COREBEV_1000ms/U044A_Pegasus_COREBEV_1000ms/U044A_1000ms_TBM_SCHEDULE_FD_1'
 * '<S61>'  : 'CIDB_ac/ImplausibleMgmt_1000ms/U044A_Variant_Pegasus_COREBEV_1000ms/U044A_Pegasus_COREBEV_1000ms/U044A_Enable'
 * '<S62>'  : 'CIDB_ac/ImplausibleMgmt_1000ms/U044A_Variant_Pegasus_COREBEV_1000ms/U044A_Pegasus_COREBEV_1000ms/U044A_Report'
 * '<S63>'  : 'CIDB_ac/ImplausibleMgmt_1000ms/U044A_Variant_Pegasus_COREBEV_1000ms/U044A_Pegasus_COREBEV_1000ms/U044A_1000ms_CHARGE_SCHEDULE_HU1/U044A_CHARGE_SCHEDULE_HU1'
 * '<S64>'  : 'CIDB_ac/ImplausibleMgmt_1000ms/U044A_Variant_Pegasus_COREBEV_1000ms/U044A_Pegasus_COREBEV_1000ms/U044A_1000ms_CHARGE_SCHEDULE_HU1/U044A_CHARGE_SCHEDULE_HU1/Diagnostic Debounce CHARGE_SCHEDULE_HU1'
 * '<S65>'  : 'CIDB_ac/ImplausibleMgmt_1000ms/U044A_Variant_Pegasus_COREBEV_1000ms/U044A_Pegasus_COREBEV_1000ms/U044A_1000ms_CHARGE_SCHEDULE_HU1/U044A_CHARGE_SCHEDULE_HU1/Diagnostic Fault Criteria CHARGE_SCHEDULE_HU1'
 * '<S66>'  : 'CIDB_ac/ImplausibleMgmt_1000ms/U044A_Variant_Pegasus_COREBEV_1000ms/U044A_Pegasus_COREBEV_1000ms/U044A_1000ms_CHARGE_SCHEDULE_HU1/U044A_CHARGE_SCHEDULE_HU1/Diagnostic Debounce CHARGE_SCHEDULE_HU1/DiagnosticDebounceImplausibleSignalSNA'
 * '<S67>'  : 'CIDB_ac/ImplausibleMgmt_1000ms/U044A_Variant_Pegasus_COREBEV_1000ms/U044A_Pegasus_COREBEV_1000ms/U044A_1000ms_CHARGE_SCHEDULE_HU1/U044A_CHARGE_SCHEDULE_HU1/Diagnostic Debounce CHARGE_SCHEDULE_HU1/KeCIDB_Cnt_CHARGE_SCHEDULE_HU1_ePT_SNAFailINC'
 * '<S68>'  : 'CIDB_ac/ImplausibleMgmt_1000ms/U044A_Variant_Pegasus_COREBEV_1000ms/U044A_Pegasus_COREBEV_1000ms/U044A_1000ms_CHARGE_SCHEDULE_HU1/U044A_CHARGE_SCHEDULE_HU1/Diagnostic Debounce CHARGE_SCHEDULE_HU1/KeCIDB_Cnt_CHARGE_SCHEDULE_HU1_ePT_SNA_FailLmt'
 * '<S69>'  : 'CIDB_ac/ImplausibleMgmt_1000ms/U044A_Variant_Pegasus_COREBEV_1000ms/U044A_Pegasus_COREBEV_1000ms/U044A_1000ms_CHARGE_SCHEDULE_HU1/U044A_CHARGE_SCHEDULE_HU1/Diagnostic Debounce CHARGE_SCHEDULE_HU1/KeCIDB_b_CHARGE_SCHEDULE_HU1_ePT_SNA_DiagEnbl'
 * '<S70>'  : 'CIDB_ac/ImplausibleMgmt_1000ms/U044A_Variant_Pegasus_COREBEV_1000ms/U044A_Pegasus_COREBEV_1000ms/U044A_1000ms_CHARGE_SCHEDULE_HU1/U044A_CHARGE_SCHEDULE_HU1/Diagnostic Debounce CHARGE_SCHEDULE_HU1/KeCIDB_b_CHARGE_SCHEDULE_HU1_ePT_SNA_FailLatchEnable'
 * '<S71>'  : 'CIDB_ac/ImplausibleMgmt_1000ms/U044A_Variant_Pegasus_COREBEV_1000ms/U044A_Pegasus_COREBEV_1000ms/U044A_1000ms_CHARGE_SCHEDULE_HU1/U044A_CHARGE_SCHEDULE_HU1/Diagnostic Debounce CHARGE_SCHEDULE_HU1/DiagnosticDebounceImplausibleSignalSNA/Diagnostic Debounce'
 * '<S72>'  : 'CIDB_ac/ImplausibleMgmt_1000ms/U044A_Variant_Pegasus_COREBEV_1000ms/U044A_Pegasus_COREBEV_1000ms/U044A_1000ms_CHARGE_SCHEDULE_HU1/U044A_CHARGE_SCHEDULE_HU1/Diagnostic Debounce CHARGE_SCHEDULE_HU1/DiagnosticDebounceImplausibleSignalSNA/EdgeFalling1'
 * '<S73>'  : 'CIDB_ac/ImplausibleMgmt_1000ms/U044A_Variant_Pegasus_COREBEV_1000ms/U044A_Pegasus_COREBEV_1000ms/U044A_1000ms_TBM_SCHEDULE_FD_1/U044A_CHARGE_SCHEDULE_HU1'
 * '<S74>'  : 'CIDB_ac/ImplausibleMgmt_1000ms/U044A_Variant_Pegasus_COREBEV_1000ms/U044A_Pegasus_COREBEV_1000ms/U044A_1000ms_TBM_SCHEDULE_FD_1/U044A_CHARGE_SCHEDULE_HU1/Diagnostic Debounce TBM_SCHEDULE_FD_1'
 * '<S75>'  : 'CIDB_ac/ImplausibleMgmt_1000ms/U044A_Variant_Pegasus_COREBEV_1000ms/U044A_Pegasus_COREBEV_1000ms/U044A_1000ms_TBM_SCHEDULE_FD_1/U044A_CHARGE_SCHEDULE_HU1/Diagnostic Fault Criteria TBM_SCHEDULE_FD_1'
 * '<S76>'  : 'CIDB_ac/ImplausibleMgmt_1000ms/U044A_Variant_Pegasus_COREBEV_1000ms/U044A_Pegasus_COREBEV_1000ms/U044A_1000ms_TBM_SCHEDULE_FD_1/U044A_CHARGE_SCHEDULE_HU1/Diagnostic Debounce TBM_SCHEDULE_FD_1/DiagnosticDebounceImplausibleSignalSNA'
 * '<S77>'  : 'CIDB_ac/ImplausibleMgmt_1000ms/U044A_Variant_Pegasus_COREBEV_1000ms/U044A_Pegasus_COREBEV_1000ms/U044A_1000ms_TBM_SCHEDULE_FD_1/U044A_CHARGE_SCHEDULE_HU1/Diagnostic Debounce TBM_SCHEDULE_FD_1/KeCIDB_Cnt_TBM_SCHEDULE_FD_1_ePT_SNAFailINC'
 * '<S78>'  : 'CIDB_ac/ImplausibleMgmt_1000ms/U044A_Variant_Pegasus_COREBEV_1000ms/U044A_Pegasus_COREBEV_1000ms/U044A_1000ms_TBM_SCHEDULE_FD_1/U044A_CHARGE_SCHEDULE_HU1/Diagnostic Debounce TBM_SCHEDULE_FD_1/KeCIDB_Cnt_TBM_SCHEDULE_FD_1_ePT_SNA_FailLmt'
 * '<S79>'  : 'CIDB_ac/ImplausibleMgmt_1000ms/U044A_Variant_Pegasus_COREBEV_1000ms/U044A_Pegasus_COREBEV_1000ms/U044A_1000ms_TBM_SCHEDULE_FD_1/U044A_CHARGE_SCHEDULE_HU1/Diagnostic Debounce TBM_SCHEDULE_FD_1/KeCIDB_b_TBM_SCHEDULE_FD_1_ePT_SNA_DiagEnbl'
 * '<S80>'  : 'CIDB_ac/ImplausibleMgmt_1000ms/U044A_Variant_Pegasus_COREBEV_1000ms/U044A_Pegasus_COREBEV_1000ms/U044A_1000ms_TBM_SCHEDULE_FD_1/U044A_CHARGE_SCHEDULE_HU1/Diagnostic Debounce TBM_SCHEDULE_FD_1/KeCIDB_b_TBM_SCHEDULE_FD_1_ePT_SNA_FailLatchEnable'
 * '<S81>'  : 'CIDB_ac/ImplausibleMgmt_1000ms/U044A_Variant_Pegasus_COREBEV_1000ms/U044A_Pegasus_COREBEV_1000ms/U044A_1000ms_TBM_SCHEDULE_FD_1/U044A_CHARGE_SCHEDULE_HU1/Diagnostic Debounce TBM_SCHEDULE_FD_1/DiagnosticDebounceImplausibleSignalSNA/Diagnostic Debounce'
 * '<S82>'  : 'CIDB_ac/ImplausibleMgmt_1000ms/U044A_Variant_Pegasus_COREBEV_1000ms/U044A_Pegasus_COREBEV_1000ms/U044A_1000ms_TBM_SCHEDULE_FD_1/U044A_CHARGE_SCHEDULE_HU1/Diagnostic Debounce TBM_SCHEDULE_FD_1/DiagnosticDebounceImplausibleSignalSNA/EdgeFalling1'
 * '<S83>'  : 'CIDB_ac/ImplausibleMgmt_1000ms/U044A_Variant_Pegasus_COREBEV_1000ms/U044A_Pegasus_COREBEV_1000ms/U044A_Enable/KeCIDB_b_U044A_DiagEnbl'
 * '<S84>'  : 'CIDB_ac/ImplausibleMgmt_1000ms/U044A_Variant_Pegasus_COREBEV_1000ms/U044A_Pegasus_COREBEV_1000ms/U044A_Report/EdgeRising'
 * '<S85>'  : 'CIDB_ac/ImplausibleMgmt_1000ms/U044A_Variant_Pegasus_COREBEV_1000ms/U044A_Pegasus_COREBEV_1000ms/U044A_Report/Enumerated_Constant'
 * '<S86>'  : 'CIDB_ac/ImplausibleMgmt_1000ms/U044A_Variant_Pegasus_COREBEV_1000ms/U044A_Pegasus_COREBEV_1000ms/U044A_Report/Enumerated_Constant2'
 * '<S87>'  : 'CIDB_ac/ImplausibleMgmt_1000ms/U044A_Variant_Pegasus_COREBEV_1000ms/U044A_Pegasus_COREBEV_1000ms/U044A_Report/Enumerated_Constant4'
 * '<S88>'  : 'CIDB_ac/ImplausibleMgmt_1000ms/U044A_Variant_Pegasus_COREBEV_1000ms/U044A_Pegasus_COREBEV_1000ms/U044A_Report/Enumerated_Constant5'
 * '<S89>'  : 'CIDB_ac/ImplausibleMgmt_1000ms/U044A_Variant_Pegasus_COREBEV_1000ms/U044A_Pegasus_COREBEV_1000ms/U044A_Report/Subsystem'
 * '<S90>'  : 'CIDB_ac/ImplausibleMgmt_1000ms/U044A_Variant_Pegasus_COREBEV_1000ms/U044A_Pegasus_COREBEV_1000ms/U044A_Report/Subsystem1'
 * '<S91>'  : 'CIDB_ac/ImplausibleMgmt_1000ms/U044A_Variant_Pegasus_COREBEV_1000ms/U044A_Pegasus_COREBEV_1000ms/U044A_Report/Subsystem2'
 * '<S92>'  : 'CIDB_ac/ImplausibleMgmt_1000ms/U044A_Variant_Pegasus_COREBEV_1000ms/U044A_Pegasus_COREBEV_1000ms/U044A_Report/Subsystem/Enumerated_Constant4'
 * '<S93>'  : 'CIDB_ac/ImplausibleMgmt_1000ms/U044A_Variant_Pegasus_COREBEV_1000ms/U044A_Pegasus_COREBEV_1000ms/U044A_Report/Subsystem1/Enumerated_Constant4'
 * '<S94>'  : 'CIDB_ac/ImplausibleMgmt_1000ms/U044A_Variant_Pegasus_COREBEV_1000ms/U044A_Pegasus_COREBEV_1000ms/U044A_Report/Subsystem2/Enumerated_Constant4'
 * '<S95>'  : 'CIDB_ac/ImplausibleMgmt_100ms/U0422_Variant_Pegasus_Corebev_Bluen_100ms'
 * '<S96>'  : 'CIDB_ac/ImplausibleMgmt_100ms/U049C_Variant_Pegasus_COREBEV_100ms'
 * '<S97>'  : 'CIDB_ac/ImplausibleMgmt_100ms/U0422_Variant_Pegasus_Corebev_Bluen_100ms/U0422_Bluen_100ms'
 * '<S98>'  : 'CIDB_ac/ImplausibleMgmt_100ms/U0422_Variant_Pegasus_Corebev_Bluen_100ms/U0422_COREBEV_100ms'
 * '<S99>'  : 'CIDB_ac/ImplausibleMgmt_100ms/U0422_Variant_Pegasus_Corebev_Bluen_100ms/U0422_Pegasus_100ms'
 * '<S100>' : 'CIDB_ac/ImplausibleMgmt_100ms/U0422_Variant_Pegasus_Corebev_Bluen_100ms/U0422_Bluen_100ms/U0422_BCM_FD_12'
 * '<S101>' : 'CIDB_ac/ImplausibleMgmt_100ms/U0422_Variant_Pegasus_Corebev_Bluen_100ms/U0422_Bluen_100ms/U0422_BCM_FD_12/U0422_BCM_FD_12'
 * '<S102>' : 'CIDB_ac/ImplausibleMgmt_100ms/U0422_Variant_Pegasus_Corebev_Bluen_100ms/U0422_Bluen_100ms/U0422_BCM_FD_12/U0422_BCM_FD_12/Diagnostic Debounce BCM_FD_12'
 * '<S103>' : 'CIDB_ac/ImplausibleMgmt_100ms/U0422_Variant_Pegasus_Corebev_Bluen_100ms/U0422_Bluen_100ms/U0422_BCM_FD_12/U0422_BCM_FD_12/Diagnostic Fault Criteria BCM_FD_12'
 * '<S104>' : 'CIDB_ac/ImplausibleMgmt_100ms/U0422_Variant_Pegasus_Corebev_Bluen_100ms/U0422_Bluen_100ms/U0422_BCM_FD_12/U0422_BCM_FD_12/Diagnostic Debounce BCM_FD_12/DiagnosticDebounceImplausibleSignalSNA'
 * '<S105>' : 'CIDB_ac/ImplausibleMgmt_100ms/U0422_Variant_Pegasus_Corebev_Bluen_100ms/U0422_Bluen_100ms/U0422_BCM_FD_12/U0422_BCM_FD_12/Diagnostic Debounce BCM_FD_12/KeCIDB_Cnt_BCM_FD_2_ePT_SNAFailINC'
 * '<S106>' : 'CIDB_ac/ImplausibleMgmt_100ms/U0422_Variant_Pegasus_Corebev_Bluen_100ms/U0422_Bluen_100ms/U0422_BCM_FD_12/U0422_BCM_FD_12/Diagnostic Debounce BCM_FD_12/KeCIDB_Cnt_BCM_FD_2_ePT_SNA_FailLmt'
 * '<S107>' : 'CIDB_ac/ImplausibleMgmt_100ms/U0422_Variant_Pegasus_Corebev_Bluen_100ms/U0422_Bluen_100ms/U0422_BCM_FD_12/U0422_BCM_FD_12/Diagnostic Debounce BCM_FD_12/KeCIDB_b_BCM_FD_2_ePT_SNA_DiagEnbl'
 * '<S108>' : 'CIDB_ac/ImplausibleMgmt_100ms/U0422_Variant_Pegasus_Corebev_Bluen_100ms/U0422_Bluen_100ms/U0422_BCM_FD_12/U0422_BCM_FD_12/Diagnostic Debounce BCM_FD_12/KeCIDB_b_BCM_FD_2_ePT_SNA_FailLatchEnable'
 * '<S109>' : 'CIDB_ac/ImplausibleMgmt_100ms/U0422_Variant_Pegasus_Corebev_Bluen_100ms/U0422_Bluen_100ms/U0422_BCM_FD_12/U0422_BCM_FD_12/Diagnostic Debounce BCM_FD_12/DiagnosticDebounceImplausibleSignalSNA/Diagnostic Debounce'
 * '<S110>' : 'CIDB_ac/ImplausibleMgmt_100ms/U0422_Variant_Pegasus_Corebev_Bluen_100ms/U0422_Bluen_100ms/U0422_BCM_FD_12/U0422_BCM_FD_12/Diagnostic Debounce BCM_FD_12/DiagnosticDebounceImplausibleSignalSNA/EdgeFalling1'
 * '<S111>' : 'CIDB_ac/ImplausibleMgmt_100ms/U0422_Variant_Pegasus_Corebev_Bluen_100ms/U0422_COREBEV_100ms/U0422_BCM_FD_12'
 * '<S112>' : 'CIDB_ac/ImplausibleMgmt_100ms/U0422_Variant_Pegasus_Corebev_Bluen_100ms/U0422_COREBEV_100ms/U0422_BCM_FD_12/U0422_BCM_FD_12'
 * '<S113>' : 'CIDB_ac/ImplausibleMgmt_100ms/U0422_Variant_Pegasus_Corebev_Bluen_100ms/U0422_COREBEV_100ms/U0422_BCM_FD_12/U0422_BCM_FD_12/Diagnostic Debounce BCM_FD_12'
 * '<S114>' : 'CIDB_ac/ImplausibleMgmt_100ms/U0422_Variant_Pegasus_Corebev_Bluen_100ms/U0422_COREBEV_100ms/U0422_BCM_FD_12/U0422_BCM_FD_12/Diagnostic Fault Criteria BCM_FD_12'
 * '<S115>' : 'CIDB_ac/ImplausibleMgmt_100ms/U0422_Variant_Pegasus_Corebev_Bluen_100ms/U0422_COREBEV_100ms/U0422_BCM_FD_12/U0422_BCM_FD_12/Diagnostic Debounce BCM_FD_12/DiagnosticDebounceImplausibleSignalSNA'
 * '<S116>' : 'CIDB_ac/ImplausibleMgmt_100ms/U0422_Variant_Pegasus_Corebev_Bluen_100ms/U0422_COREBEV_100ms/U0422_BCM_FD_12/U0422_BCM_FD_12/Diagnostic Debounce BCM_FD_12/KeCIDB_Cnt_BCM_FD_2_ePT_SNAFailINC'
 * '<S117>' : 'CIDB_ac/ImplausibleMgmt_100ms/U0422_Variant_Pegasus_Corebev_Bluen_100ms/U0422_COREBEV_100ms/U0422_BCM_FD_12/U0422_BCM_FD_12/Diagnostic Debounce BCM_FD_12/KeCIDB_Cnt_BCM_FD_2_ePT_SNA_FailLmt'
 * '<S118>' : 'CIDB_ac/ImplausibleMgmt_100ms/U0422_Variant_Pegasus_Corebev_Bluen_100ms/U0422_COREBEV_100ms/U0422_BCM_FD_12/U0422_BCM_FD_12/Diagnostic Debounce BCM_FD_12/KeCIDB_b_BCM_FD_2_ePT_SNA_DiagEnbl'
 * '<S119>' : 'CIDB_ac/ImplausibleMgmt_100ms/U0422_Variant_Pegasus_Corebev_Bluen_100ms/U0422_COREBEV_100ms/U0422_BCM_FD_12/U0422_BCM_FD_12/Diagnostic Debounce BCM_FD_12/KeCIDB_b_BCM_FD_2_ePT_SNA_FailLatchEnable'
 * '<S120>' : 'CIDB_ac/ImplausibleMgmt_100ms/U0422_Variant_Pegasus_Corebev_Bluen_100ms/U0422_COREBEV_100ms/U0422_BCM_FD_12/U0422_BCM_FD_12/Diagnostic Debounce BCM_FD_12/DiagnosticDebounceImplausibleSignalSNA/Diagnostic Debounce'
 * '<S121>' : 'CIDB_ac/ImplausibleMgmt_100ms/U0422_Variant_Pegasus_Corebev_Bluen_100ms/U0422_COREBEV_100ms/U0422_BCM_FD_12/U0422_BCM_FD_12/Diagnostic Debounce BCM_FD_12/DiagnosticDebounceImplausibleSignalSNA/EdgeFalling1'
 * '<S122>' : 'CIDB_ac/ImplausibleMgmt_100ms/U0422_Variant_Pegasus_Corebev_Bluen_100ms/U0422_Pegasus_100ms/U0422_BCM_FD_12'
 * '<S123>' : 'CIDB_ac/ImplausibleMgmt_100ms/U0422_Variant_Pegasus_Corebev_Bluen_100ms/U0422_Pegasus_100ms/U0422_BCM_FD_12/U0422_BCM_FD_12'
 * '<S124>' : 'CIDB_ac/ImplausibleMgmt_100ms/U0422_Variant_Pegasus_Corebev_Bluen_100ms/U0422_Pegasus_100ms/U0422_BCM_FD_12/U0422_BCM_FD_12/Diagnostic Debounce BCM_FD_12'
 * '<S125>' : 'CIDB_ac/ImplausibleMgmt_100ms/U0422_Variant_Pegasus_Corebev_Bluen_100ms/U0422_Pegasus_100ms/U0422_BCM_FD_12/U0422_BCM_FD_12/Diagnostic Fault Criteria BCM_FD_12'
 * '<S126>' : 'CIDB_ac/ImplausibleMgmt_100ms/U0422_Variant_Pegasus_Corebev_Bluen_100ms/U0422_Pegasus_100ms/U0422_BCM_FD_12/U0422_BCM_FD_12/Diagnostic Debounce BCM_FD_12/DiagnosticDebounceImplausibleSignalSNA'
 * '<S127>' : 'CIDB_ac/ImplausibleMgmt_100ms/U0422_Variant_Pegasus_Corebev_Bluen_100ms/U0422_Pegasus_100ms/U0422_BCM_FD_12/U0422_BCM_FD_12/Diagnostic Debounce BCM_FD_12/KeCIDB_Cnt_BCM_FD_2_ePT_SNAFailINC'
 * '<S128>' : 'CIDB_ac/ImplausibleMgmt_100ms/U0422_Variant_Pegasus_Corebev_Bluen_100ms/U0422_Pegasus_100ms/U0422_BCM_FD_12/U0422_BCM_FD_12/Diagnostic Debounce BCM_FD_12/KeCIDB_Cnt_BCM_FD_2_ePT_SNA_FailLmt'
 * '<S129>' : 'CIDB_ac/ImplausibleMgmt_100ms/U0422_Variant_Pegasus_Corebev_Bluen_100ms/U0422_Pegasus_100ms/U0422_BCM_FD_12/U0422_BCM_FD_12/Diagnostic Debounce BCM_FD_12/KeCIDB_b_BCM_FD_2_ePT_SNA_DiagEnbl'
 * '<S130>' : 'CIDB_ac/ImplausibleMgmt_100ms/U0422_Variant_Pegasus_Corebev_Bluen_100ms/U0422_Pegasus_100ms/U0422_BCM_FD_12/U0422_BCM_FD_12/Diagnostic Debounce BCM_FD_12/KeCIDB_b_BCM_FD_2_ePT_SNA_FailLatchEnable'
 * '<S131>' : 'CIDB_ac/ImplausibleMgmt_100ms/U0422_Variant_Pegasus_Corebev_Bluen_100ms/U0422_Pegasus_100ms/U0422_BCM_FD_12/U0422_BCM_FD_12/Diagnostic Debounce BCM_FD_12/DiagnosticDebounceImplausibleSignalSNA/Diagnostic Debounce'
 * '<S132>' : 'CIDB_ac/ImplausibleMgmt_100ms/U0422_Variant_Pegasus_Corebev_Bluen_100ms/U0422_Pegasus_100ms/U0422_BCM_FD_12/U0422_BCM_FD_12/Diagnostic Debounce BCM_FD_12/DiagnosticDebounceImplausibleSignalSNA/EdgeFalling1'
 * '<S133>' : 'CIDB_ac/ImplausibleMgmt_100ms/U049C_Variant_Pegasus_COREBEV_100ms/U049C_COREBEV_100ms'
 * '<S134>' : 'CIDB_ac/ImplausibleMgmt_100ms/U049C_Variant_Pegasus_COREBEV_100ms/U049C_Pegasus_100ms'
 * '<S135>' : 'CIDB_ac/ImplausibleMgmt_100ms/U049C_Variant_Pegasus_COREBEV_100ms/U049C_COREBEV_100ms/U049C HV_CHARGER1'
 * '<S136>' : 'CIDB_ac/ImplausibleMgmt_100ms/U049C_Variant_Pegasus_COREBEV_100ms/U049C_COREBEV_100ms/U049C HV_CHARGER1/Diagnostic Debounce HV_CHARGER1'
 * '<S137>' : 'CIDB_ac/ImplausibleMgmt_100ms/U049C_Variant_Pegasus_COREBEV_100ms/U049C_COREBEV_100ms/U049C HV_CHARGER1/Diagnostic Fault Criteria HV_CHARGER1'
 * '<S138>' : 'CIDB_ac/ImplausibleMgmt_100ms/U049C_Variant_Pegasus_COREBEV_100ms/U049C_COREBEV_100ms/U049C HV_CHARGER1/Diagnostic Debounce HV_CHARGER1/DiagnosticDebounceImplausibleSignalSNA'
 * '<S139>' : 'CIDB_ac/ImplausibleMgmt_100ms/U049C_Variant_Pegasus_COREBEV_100ms/U049C_COREBEV_100ms/U049C HV_CHARGER1/Diagnostic Debounce HV_CHARGER1/KeCIDB_Cnt_HV_CHARGER1_ePT_SNAFailINC'
 * '<S140>' : 'CIDB_ac/ImplausibleMgmt_100ms/U049C_Variant_Pegasus_COREBEV_100ms/U049C_COREBEV_100ms/U049C HV_CHARGER1/Diagnostic Debounce HV_CHARGER1/KeCIDB_Cnt_HV_CHARGER1_ePT_SNA_FailLmt'
 * '<S141>' : 'CIDB_ac/ImplausibleMgmt_100ms/U049C_Variant_Pegasus_COREBEV_100ms/U049C_COREBEV_100ms/U049C HV_CHARGER1/Diagnostic Debounce HV_CHARGER1/KeCIDB_b_HV_CHARGER1_ePT_SNA_DiagEnbl'
 * '<S142>' : 'CIDB_ac/ImplausibleMgmt_100ms/U049C_Variant_Pegasus_COREBEV_100ms/U049C_COREBEV_100ms/U049C HV_CHARGER1/Diagnostic Debounce HV_CHARGER1/KeCIDB_b_HV_CHARGER1_ePT_SNA_FailLatchEnable'
 * '<S143>' : 'CIDB_ac/ImplausibleMgmt_100ms/U049C_Variant_Pegasus_COREBEV_100ms/U049C_COREBEV_100ms/U049C HV_CHARGER1/Diagnostic Debounce HV_CHARGER1/DiagnosticDebounceImplausibleSignalSNA/Diagnostic Debounce'
 * '<S144>' : 'CIDB_ac/ImplausibleMgmt_100ms/U049C_Variant_Pegasus_COREBEV_100ms/U049C_COREBEV_100ms/U049C HV_CHARGER1/Diagnostic Debounce HV_CHARGER1/DiagnosticDebounceImplausibleSignalSNA/EdgeFalling1'
 * '<S145>' : 'CIDB_ac/ImplausibleMgmt_100ms/U049C_Variant_Pegasus_COREBEV_100ms/U049C_Pegasus_100ms/U049C HV_CHARGER1'
 * '<S146>' : 'CIDB_ac/ImplausibleMgmt_100ms/U049C_Variant_Pegasus_COREBEV_100ms/U049C_Pegasus_100ms/U049C HV_CHARGER1/Diagnostic Debounce HV_CHARGER1'
 * '<S147>' : 'CIDB_ac/ImplausibleMgmt_100ms/U049C_Variant_Pegasus_COREBEV_100ms/U049C_Pegasus_100ms/U049C HV_CHARGER1/Diagnostic Fault Criteria HV_CHARGER1'
 * '<S148>' : 'CIDB_ac/ImplausibleMgmt_100ms/U049C_Variant_Pegasus_COREBEV_100ms/U049C_Pegasus_100ms/U049C HV_CHARGER1/Diagnostic Debounce HV_CHARGER1/DiagnosticDebounceImplausibleSignalSNA'
 * '<S149>' : 'CIDB_ac/ImplausibleMgmt_100ms/U049C_Variant_Pegasus_COREBEV_100ms/U049C_Pegasus_100ms/U049C HV_CHARGER1/Diagnostic Debounce HV_CHARGER1/KeCIDB_Cnt_HV_CHARGER1_ePT_SNAFailINC'
 * '<S150>' : 'CIDB_ac/ImplausibleMgmt_100ms/U049C_Variant_Pegasus_COREBEV_100ms/U049C_Pegasus_100ms/U049C HV_CHARGER1/Diagnostic Debounce HV_CHARGER1/KeCIDB_Cnt_HV_CHARGER1_ePT_SNA_FailLmt'
 * '<S151>' : 'CIDB_ac/ImplausibleMgmt_100ms/U049C_Variant_Pegasus_COREBEV_100ms/U049C_Pegasus_100ms/U049C HV_CHARGER1/Diagnostic Debounce HV_CHARGER1/KeCIDB_b_HV_CHARGER1_ePT_SNA_DiagEnbl'
 * '<S152>' : 'CIDB_ac/ImplausibleMgmt_100ms/U049C_Variant_Pegasus_COREBEV_100ms/U049C_Pegasus_100ms/U049C HV_CHARGER1/Diagnostic Debounce HV_CHARGER1/KeCIDB_b_HV_CHARGER1_ePT_SNA_FailLatchEnable'
 * '<S153>' : 'CIDB_ac/ImplausibleMgmt_100ms/U049C_Variant_Pegasus_COREBEV_100ms/U049C_Pegasus_100ms/U049C HV_CHARGER1/Diagnostic Debounce HV_CHARGER1/DiagnosticDebounceImplausibleSignalSNA/Diagnostic Debounce'
 * '<S154>' : 'CIDB_ac/ImplausibleMgmt_100ms/U049C_Variant_Pegasus_COREBEV_100ms/U049C_Pegasus_100ms/U049C HV_CHARGER1/Diagnostic Debounce HV_CHARGER1/DiagnosticDebounceImplausibleSignalSNA/EdgeFalling1'
 * '<S155>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms'
 * '<S156>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms'
 * '<S157>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms'
 * '<S158>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Bluen_10ms'
 * '<S159>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Corebev_10ms'
 * '<S160>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Pegasus_10ms'
 * '<S161>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Bluen_10ms/U0412_10ms_BATTERY_HV_POWERLIMITS'
 * '<S162>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Bluen_10ms/U0412_10ms_BATTERY_HV_STATUS1'
 * '<S163>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Bluen_10ms/U0412_Enable'
 * '<S164>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Bluen_10ms/U0412_Report'
 * '<S165>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Bluen_10ms/U0412_10ms_BATTERY_HV_POWERLIMITS/U0412_BATTERY_HV_POWERLIMITS'
 * '<S166>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Bluen_10ms/U0412_10ms_BATTERY_HV_POWERLIMITS/U0412_BATTERY_HV_POWERLIMITS/Diagnostic Debounce BATTERY_HV_POWERLIMITS'
 * '<S167>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Bluen_10ms/U0412_10ms_BATTERY_HV_POWERLIMITS/U0412_BATTERY_HV_POWERLIMITS/Diagnostic Fault Criteria BATTERY_HV_POWERLIMITS'
 * '<S168>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Bluen_10ms/U0412_10ms_BATTERY_HV_POWERLIMITS/U0412_BATTERY_HV_POWERLIMITS/Diagnostic Debounce BATTERY_HV_POWERLIMITS/DiagnosticDebounceImplausibleSignalSNA'
 * '<S169>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Bluen_10ms/U0412_10ms_BATTERY_HV_POWERLIMITS/U0412_BATTERY_HV_POWERLIMITS/Diagnostic Debounce BATTERY_HV_POWERLIMITS/KeCIDB_Cnt_BATTERY_HV_POWERLIMITS_ePT_SNAFailINC'
 * '<S170>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Bluen_10ms/U0412_10ms_BATTERY_HV_POWERLIMITS/U0412_BATTERY_HV_POWERLIMITS/Diagnostic Debounce BATTERY_HV_POWERLIMITS/KeCIDB_Cnt_BATTERY_HV_POWERLIMITS_ePT_SNA_FailLmt'
 * '<S171>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Bluen_10ms/U0412_10ms_BATTERY_HV_POWERLIMITS/U0412_BATTERY_HV_POWERLIMITS/Diagnostic Debounce BATTERY_HV_POWERLIMITS/KeCIDB_b_BATTERY_HV_POWERLIMITS_ePT_SNA_DiagEnbl'
 * '<S172>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Bluen_10ms/U0412_10ms_BATTERY_HV_POWERLIMITS/U0412_BATTERY_HV_POWERLIMITS/Diagnostic Debounce BATTERY_HV_POWERLIMITS/KeCIDB_b_BATTERY_HV_POWERLIMITS_ePT_SNA_FailLatchEnable'
 * '<S173>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Bluen_10ms/U0412_10ms_BATTERY_HV_POWERLIMITS/U0412_BATTERY_HV_POWERLIMITS/Diagnostic Debounce BATTERY_HV_POWERLIMITS/DiagnosticDebounceImplausibleSignalSNA/Diagnostic Debounce'
 * '<S174>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Bluen_10ms/U0412_10ms_BATTERY_HV_POWERLIMITS/U0412_BATTERY_HV_POWERLIMITS/Diagnostic Debounce BATTERY_HV_POWERLIMITS/DiagnosticDebounceImplausibleSignalSNA/EdgeFalling1'
 * '<S175>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Bluen_10ms/U0412_10ms_BATTERY_HV_STATUS1/U0412_BATTERY_HV_STATUS1'
 * '<S176>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Bluen_10ms/U0412_10ms_BATTERY_HV_STATUS1/U0412_BATTERY_HV_STATUS1/Diagnostic Debounce BATTERY_HV_STATUS1'
 * '<S177>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Bluen_10ms/U0412_10ms_BATTERY_HV_STATUS1/U0412_BATTERY_HV_STATUS1/Diagnostic Fault Criteria BATTERY_HV_STATUS1'
 * '<S178>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Bluen_10ms/U0412_10ms_BATTERY_HV_STATUS1/U0412_BATTERY_HV_STATUS1/Diagnostic Debounce BATTERY_HV_STATUS1/DiagnosticDebounceImplausibleSignalSNA'
 * '<S179>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Bluen_10ms/U0412_10ms_BATTERY_HV_STATUS1/U0412_BATTERY_HV_STATUS1/Diagnostic Debounce BATTERY_HV_STATUS1/KeCIDB_Cnt_BATTERY_HV_STATUS1_ePT_SNAFailINC'
 * '<S180>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Bluen_10ms/U0412_10ms_BATTERY_HV_STATUS1/U0412_BATTERY_HV_STATUS1/Diagnostic Debounce BATTERY_HV_STATUS1/KeCIDB_Cnt_BATTERY_HV_STATUS1_ePT_SNA_FailLmt'
 * '<S181>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Bluen_10ms/U0412_10ms_BATTERY_HV_STATUS1/U0412_BATTERY_HV_STATUS1/Diagnostic Debounce BATTERY_HV_STATUS1/KeCIDB_b_BATTERY_HV_STATUS1_ePT_SNA_DiagEnbl'
 * '<S182>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Bluen_10ms/U0412_10ms_BATTERY_HV_STATUS1/U0412_BATTERY_HV_STATUS1/Diagnostic Debounce BATTERY_HV_STATUS1/KeCIDB_b_BATTERY_HV_STATUS1_ePT_SNA_FailLatchEnable'
 * '<S183>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Bluen_10ms/U0412_10ms_BATTERY_HV_STATUS1/U0412_BATTERY_HV_STATUS1/Diagnostic Debounce BATTERY_HV_STATUS1/DiagnosticDebounceImplausibleSignalSNA/Diagnostic Debounce'
 * '<S184>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Bluen_10ms/U0412_10ms_BATTERY_HV_STATUS1/U0412_BATTERY_HV_STATUS1/Diagnostic Debounce BATTERY_HV_STATUS1/DiagnosticDebounceImplausibleSignalSNA/EdgeFalling1'
 * '<S185>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Bluen_10ms/U0412_Enable/KeCIDB_b_IsDiagGlobalConditionValidStubEnbl4'
 * '<S186>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Bluen_10ms/U0412_Report/EdgeRising'
 * '<S187>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Bluen_10ms/U0412_Report/Enumerated_Constant'
 * '<S188>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Bluen_10ms/U0412_Report/Enumerated_Constant1'
 * '<S189>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Bluen_10ms/U0412_Report/Enumerated_Constant2'
 * '<S190>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Bluen_10ms/U0412_Report/Enumerated_Constant3'
 * '<S191>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Bluen_10ms/U0412_Report/Enumerated_Constant4'
 * '<S192>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Bluen_10ms/U0412_Report/Enumerated_Constant5'
 * '<S193>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Bluen_10ms/U0412_Report/Subsystem'
 * '<S194>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Bluen_10ms/U0412_Report/Subsystem1'
 * '<S195>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Bluen_10ms/U0412_Report/Subsystem2'
 * '<S196>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Bluen_10ms/U0412_Report/Subsystem/Enumerated_Constant4'
 * '<S197>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Bluen_10ms/U0412_Report/Subsystem1/Enumerated_Constant4'
 * '<S198>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Bluen_10ms/U0412_Report/Subsystem2/Enumerated_Constant4'
 * '<S199>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Corebev_10ms/U0412_10ms_BATTERY_HV_POWERLIMITS'
 * '<S200>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Corebev_10ms/U0412_10ms_BATTERY_HV_STATUS1'
 * '<S201>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Corebev_10ms/U0412_Enable'
 * '<S202>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Corebev_10ms/U0412_Report'
 * '<S203>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Corebev_10ms/U0412_10ms_BATTERY_HV_POWERLIMITS/U0412_BATTERY_HV_POWERLIMITS'
 * '<S204>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Corebev_10ms/U0412_10ms_BATTERY_HV_POWERLIMITS/U0412_BATTERY_HV_POWERLIMITS/Diagnostic Debounce BATTERY_HV_POWERLIMITS'
 * '<S205>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Corebev_10ms/U0412_10ms_BATTERY_HV_POWERLIMITS/U0412_BATTERY_HV_POWERLIMITS/Diagnostic Fault Criteria BATTERY_HV_POWERLIMITS'
 * '<S206>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Corebev_10ms/U0412_10ms_BATTERY_HV_POWERLIMITS/U0412_BATTERY_HV_POWERLIMITS/Diagnostic Debounce BATTERY_HV_POWERLIMITS/DiagnosticDebounceImplausibleSignalSNA'
 * '<S207>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Corebev_10ms/U0412_10ms_BATTERY_HV_POWERLIMITS/U0412_BATTERY_HV_POWERLIMITS/Diagnostic Debounce BATTERY_HV_POWERLIMITS/KeCIDB_Cnt_BATTERY_HV_POWERLIMITS_ePT_SNAFailINC'
 * '<S208>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Corebev_10ms/U0412_10ms_BATTERY_HV_POWERLIMITS/U0412_BATTERY_HV_POWERLIMITS/Diagnostic Debounce BATTERY_HV_POWERLIMITS/KeCIDB_Cnt_BATTERY_HV_POWERLIMITS_ePT_SNA_FailLmt'
 * '<S209>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Corebev_10ms/U0412_10ms_BATTERY_HV_POWERLIMITS/U0412_BATTERY_HV_POWERLIMITS/Diagnostic Debounce BATTERY_HV_POWERLIMITS/KeCIDB_b_BATTERY_HV_POWERLIMITS_ePT_SNA_DiagEnbl'
 * '<S210>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Corebev_10ms/U0412_10ms_BATTERY_HV_POWERLIMITS/U0412_BATTERY_HV_POWERLIMITS/Diagnostic Debounce BATTERY_HV_POWERLIMITS/KeCIDB_b_BATTERY_HV_POWERLIMITS_ePT_SNA_FailLatchEnable'
 * '<S211>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Corebev_10ms/U0412_10ms_BATTERY_HV_POWERLIMITS/U0412_BATTERY_HV_POWERLIMITS/Diagnostic Debounce BATTERY_HV_POWERLIMITS/DiagnosticDebounceImplausibleSignalSNA/Diagnostic Debounce'
 * '<S212>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Corebev_10ms/U0412_10ms_BATTERY_HV_POWERLIMITS/U0412_BATTERY_HV_POWERLIMITS/Diagnostic Debounce BATTERY_HV_POWERLIMITS/DiagnosticDebounceImplausibleSignalSNA/EdgeFalling1'
 * '<S213>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Corebev_10ms/U0412_10ms_BATTERY_HV_STATUS1/U0412_BATTERY_HV_STATUS1'
 * '<S214>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Corebev_10ms/U0412_10ms_BATTERY_HV_STATUS1/U0412_BATTERY_HV_STATUS1/Diagnostic Debounce BATTERY_HV_STATUS1'
 * '<S215>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Corebev_10ms/U0412_10ms_BATTERY_HV_STATUS1/U0412_BATTERY_HV_STATUS1/Diagnostic Fault Criteria BATTERY_HV_STATUS1'
 * '<S216>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Corebev_10ms/U0412_10ms_BATTERY_HV_STATUS1/U0412_BATTERY_HV_STATUS1/Diagnostic Debounce BATTERY_HV_STATUS1/DiagnosticDebounceImplausibleSignalSNA'
 * '<S217>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Corebev_10ms/U0412_10ms_BATTERY_HV_STATUS1/U0412_BATTERY_HV_STATUS1/Diagnostic Debounce BATTERY_HV_STATUS1/KeCIDB_Cnt_BATTERY_HV_STATUS1_ePT_SNAFailINC'
 * '<S218>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Corebev_10ms/U0412_10ms_BATTERY_HV_STATUS1/U0412_BATTERY_HV_STATUS1/Diagnostic Debounce BATTERY_HV_STATUS1/KeCIDB_Cnt_BATTERY_HV_STATUS1_ePT_SNA_FailLmt'
 * '<S219>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Corebev_10ms/U0412_10ms_BATTERY_HV_STATUS1/U0412_BATTERY_HV_STATUS1/Diagnostic Debounce BATTERY_HV_STATUS1/KeCIDB_b_BATTERY_HV_STATUS1_ePT_SNA_DiagEnbl'
 * '<S220>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Corebev_10ms/U0412_10ms_BATTERY_HV_STATUS1/U0412_BATTERY_HV_STATUS1/Diagnostic Debounce BATTERY_HV_STATUS1/KeCIDB_b_BATTERY_HV_STATUS1_ePT_SNA_FailLatchEnable'
 * '<S221>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Corebev_10ms/U0412_10ms_BATTERY_HV_STATUS1/U0412_BATTERY_HV_STATUS1/Diagnostic Debounce BATTERY_HV_STATUS1/DiagnosticDebounceImplausibleSignalSNA/Diagnostic Debounce'
 * '<S222>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Corebev_10ms/U0412_10ms_BATTERY_HV_STATUS1/U0412_BATTERY_HV_STATUS1/Diagnostic Debounce BATTERY_HV_STATUS1/DiagnosticDebounceImplausibleSignalSNA/EdgeFalling1'
 * '<S223>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Corebev_10ms/U0412_Enable/KeCIDB_b_IsDiagGlobalConditionValidStubEnbl4'
 * '<S224>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Corebev_10ms/U0412_Report/EdgeRising'
 * '<S225>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Corebev_10ms/U0412_Report/Enumerated_Constant'
 * '<S226>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Corebev_10ms/U0412_Report/Enumerated_Constant1'
 * '<S227>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Corebev_10ms/U0412_Report/Enumerated_Constant2'
 * '<S228>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Corebev_10ms/U0412_Report/Enumerated_Constant3'
 * '<S229>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Corebev_10ms/U0412_Report/Enumerated_Constant4'
 * '<S230>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Corebev_10ms/U0412_Report/Enumerated_Constant5'
 * '<S231>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Corebev_10ms/U0412_Report/Subsystem'
 * '<S232>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Corebev_10ms/U0412_Report/Subsystem1'
 * '<S233>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Corebev_10ms/U0412_Report/Subsystem2'
 * '<S234>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Corebev_10ms/U0412_Report/Subsystem/Enumerated_Constant4'
 * '<S235>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Corebev_10ms/U0412_Report/Subsystem1/Enumerated_Constant4'
 * '<S236>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Corebev_10ms/U0412_Report/Subsystem2/Enumerated_Constant4'
 * '<S237>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Pegasus_10ms/U0412_10ms_BATTERY_HV_POWERLIMITS'
 * '<S238>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Pegasus_10ms/U0412_10ms_BATTERY_HV_STATUS1'
 * '<S239>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Pegasus_10ms/U0412_Enable'
 * '<S240>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Pegasus_10ms/U0412_Report'
 * '<S241>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Pegasus_10ms/U0412_10ms_BATTERY_HV_POWERLIMITS/U0412_BATTERY_HV_POWERLIMITS'
 * '<S242>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Pegasus_10ms/U0412_10ms_BATTERY_HV_POWERLIMITS/U0412_BATTERY_HV_POWERLIMITS/Diagnostic Debounce BATTERY_HV_POWERLIMITS'
 * '<S243>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Pegasus_10ms/U0412_10ms_BATTERY_HV_POWERLIMITS/U0412_BATTERY_HV_POWERLIMITS/Diagnostic Fault Criteria BATTERY_HV_POWERLIMITS'
 * '<S244>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Pegasus_10ms/U0412_10ms_BATTERY_HV_POWERLIMITS/U0412_BATTERY_HV_POWERLIMITS/Diagnostic Debounce BATTERY_HV_POWERLIMITS/DiagnosticDebounceImplausibleSignalSNA'
 * '<S245>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Pegasus_10ms/U0412_10ms_BATTERY_HV_POWERLIMITS/U0412_BATTERY_HV_POWERLIMITS/Diagnostic Debounce BATTERY_HV_POWERLIMITS/KeCIDB_Cnt_BATTERY_HV_POWERLIMITS_ePT_SNAFailINC'
 * '<S246>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Pegasus_10ms/U0412_10ms_BATTERY_HV_POWERLIMITS/U0412_BATTERY_HV_POWERLIMITS/Diagnostic Debounce BATTERY_HV_POWERLIMITS/KeCIDB_Cnt_BATTERY_HV_POWERLIMITS_ePT_SNA_FailLmt'
 * '<S247>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Pegasus_10ms/U0412_10ms_BATTERY_HV_POWERLIMITS/U0412_BATTERY_HV_POWERLIMITS/Diagnostic Debounce BATTERY_HV_POWERLIMITS/KeCIDB_b_BATTERY_HV_POWERLIMITS_ePT_SNA_DiagEnbl'
 * '<S248>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Pegasus_10ms/U0412_10ms_BATTERY_HV_POWERLIMITS/U0412_BATTERY_HV_POWERLIMITS/Diagnostic Debounce BATTERY_HV_POWERLIMITS/KeCIDB_b_BATTERY_HV_POWERLIMITS_ePT_SNA_FailLatchEnable'
 * '<S249>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Pegasus_10ms/U0412_10ms_BATTERY_HV_POWERLIMITS/U0412_BATTERY_HV_POWERLIMITS/Diagnostic Debounce BATTERY_HV_POWERLIMITS/DiagnosticDebounceImplausibleSignalSNA/Diagnostic Debounce'
 * '<S250>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Pegasus_10ms/U0412_10ms_BATTERY_HV_POWERLIMITS/U0412_BATTERY_HV_POWERLIMITS/Diagnostic Debounce BATTERY_HV_POWERLIMITS/DiagnosticDebounceImplausibleSignalSNA/EdgeFalling1'
 * '<S251>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Pegasus_10ms/U0412_10ms_BATTERY_HV_STATUS1/U0412_BATTERY_HV_STATUS1'
 * '<S252>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Pegasus_10ms/U0412_10ms_BATTERY_HV_STATUS1/U0412_BATTERY_HV_STATUS1/Diagnostic Debounce BATTERY_HV_STATUS1'
 * '<S253>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Pegasus_10ms/U0412_10ms_BATTERY_HV_STATUS1/U0412_BATTERY_HV_STATUS1/Diagnostic Fault Criteria BATTERY_HV_STATUS1'
 * '<S254>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Pegasus_10ms/U0412_10ms_BATTERY_HV_STATUS1/U0412_BATTERY_HV_STATUS1/Diagnostic Debounce BATTERY_HV_STATUS1/DiagnosticDebounceImplausibleSignalSNA'
 * '<S255>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Pegasus_10ms/U0412_10ms_BATTERY_HV_STATUS1/U0412_BATTERY_HV_STATUS1/Diagnostic Debounce BATTERY_HV_STATUS1/KeCIDB_Cnt_BATTERY_HV_STATUS1_ePT_SNAFailINC'
 * '<S256>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Pegasus_10ms/U0412_10ms_BATTERY_HV_STATUS1/U0412_BATTERY_HV_STATUS1/Diagnostic Debounce BATTERY_HV_STATUS1/KeCIDB_Cnt_BATTERY_HV_STATUS1_ePT_SNA_FailLmt'
 * '<S257>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Pegasus_10ms/U0412_10ms_BATTERY_HV_STATUS1/U0412_BATTERY_HV_STATUS1/Diagnostic Debounce BATTERY_HV_STATUS1/KeCIDB_b_BATTERY_HV_STATUS1_ePT_SNA_DiagEnbl'
 * '<S258>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Pegasus_10ms/U0412_10ms_BATTERY_HV_STATUS1/U0412_BATTERY_HV_STATUS1/Diagnostic Debounce BATTERY_HV_STATUS1/KeCIDB_b_BATTERY_HV_STATUS1_ePT_SNA_FailLatchEnable'
 * '<S259>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Pegasus_10ms/U0412_10ms_BATTERY_HV_STATUS1/U0412_BATTERY_HV_STATUS1/Diagnostic Debounce BATTERY_HV_STATUS1/DiagnosticDebounceImplausibleSignalSNA/Diagnostic Debounce'
 * '<S260>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Pegasus_10ms/U0412_10ms_BATTERY_HV_STATUS1/U0412_BATTERY_HV_STATUS1/Diagnostic Debounce BATTERY_HV_STATUS1/DiagnosticDebounceImplausibleSignalSNA/EdgeFalling1'
 * '<S261>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Pegasus_10ms/U0412_Enable/KeCIDB_b_IsDiagGlobalConditionValidStubEnbl4'
 * '<S262>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Pegasus_10ms/U0412_Report/EdgeRising'
 * '<S263>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Pegasus_10ms/U0412_Report/Enumerated_Constant'
 * '<S264>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Pegasus_10ms/U0412_Report/Enumerated_Constant1'
 * '<S265>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Pegasus_10ms/U0412_Report/Enumerated_Constant2'
 * '<S266>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Pegasus_10ms/U0412_Report/Enumerated_Constant3'
 * '<S267>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Pegasus_10ms/U0412_Report/Enumerated_Constant4'
 * '<S268>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Pegasus_10ms/U0412_Report/Enumerated_Constant5'
 * '<S269>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Pegasus_10ms/U0412_Report/Subsystem'
 * '<S270>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Pegasus_10ms/U0412_Report/Subsystem1'
 * '<S271>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Pegasus_10ms/U0412_Report/Subsystem2'
 * '<S272>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Pegasus_10ms/U0412_Report/Subsystem/Enumerated_Constant4'
 * '<S273>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Pegasus_10ms/U0412_Report/Subsystem1/Enumerated_Constant4'
 * '<S274>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0412_Variant_Pegasus_Corebev_Bluen_10ms/U0412_Variant_Pegasus_10ms/U0412_Report/Subsystem2/Enumerated_Constant4'
 * '<S275>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Bluen_10ms'
 * '<S276>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_COREBEV_10ms'
 * '<S277>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Pegasus_10ms'
 * '<S278>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Bluen_10ms/U0415_10ms_BRAKE_FD_2'
 * '<S279>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Bluen_10ms/U0415_10ms_BRAKE_FD_3'
 * '<S280>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Bluen_10ms/U0415_Enable'
 * '<S281>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Bluen_10ms/U0415_Report'
 * '<S282>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Bluen_10ms/U0415_10ms_BRAKE_FD_2/U0415_BRAKE_FD_2'
 * '<S283>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Bluen_10ms/U0415_10ms_BRAKE_FD_2/U0415_BRAKE_FD_2/Diagnostic Debounce BRAKE_FD_2'
 * '<S284>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Bluen_10ms/U0415_10ms_BRAKE_FD_2/U0415_BRAKE_FD_2/Diagnostic Fault Criteria BRAKE_FD_2'
 * '<S285>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Bluen_10ms/U0415_10ms_BRAKE_FD_2/U0415_BRAKE_FD_2/Diagnostic Debounce BRAKE_FD_2/DiagnosticDebounceImplausibleSignalSNA'
 * '<S286>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Bluen_10ms/U0415_10ms_BRAKE_FD_2/U0415_BRAKE_FD_2/Diagnostic Debounce BRAKE_FD_2/KeCIDB_Cnt_BRAKE_FD_2_ePT_SNAFailINC'
 * '<S287>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Bluen_10ms/U0415_10ms_BRAKE_FD_2/U0415_BRAKE_FD_2/Diagnostic Debounce BRAKE_FD_2/KeCIDB_Cnt_BRAKE_FD_2_ePT_SNA_FailLmt'
 * '<S288>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Bluen_10ms/U0415_10ms_BRAKE_FD_2/U0415_BRAKE_FD_2/Diagnostic Debounce BRAKE_FD_2/KeCIDB_b_BRAKE_FD_2_ePT_SNA_DiagEnbl'
 * '<S289>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Bluen_10ms/U0415_10ms_BRAKE_FD_2/U0415_BRAKE_FD_2/Diagnostic Debounce BRAKE_FD_2/KeCIDB_b_BRAKE_FD_2_ePT_SNA_FailLatchEnable'
 * '<S290>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Bluen_10ms/U0415_10ms_BRAKE_FD_2/U0415_BRAKE_FD_2/Diagnostic Debounce BRAKE_FD_2/DiagnosticDebounceImplausibleSignalSNA/Diagnostic Debounce'
 * '<S291>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Bluen_10ms/U0415_10ms_BRAKE_FD_2/U0415_BRAKE_FD_2/Diagnostic Debounce BRAKE_FD_2/DiagnosticDebounceImplausibleSignalSNA/EdgeFalling1'
 * '<S292>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Bluen_10ms/U0415_10ms_BRAKE_FD_3/U0415_BRAKE_FD_3'
 * '<S293>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Bluen_10ms/U0415_10ms_BRAKE_FD_3/U0415_BRAKE_FD_3/Diagnostic Debounce BRAKE_FD_3'
 * '<S294>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Bluen_10ms/U0415_10ms_BRAKE_FD_3/U0415_BRAKE_FD_3/Diagnostic Fault Criteria BRAKE_FD_3'
 * '<S295>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Bluen_10ms/U0415_10ms_BRAKE_FD_3/U0415_BRAKE_FD_3/Diagnostic Debounce BRAKE_FD_3/DiagnosticDebounceImplausibleSignalSNA'
 * '<S296>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Bluen_10ms/U0415_10ms_BRAKE_FD_3/U0415_BRAKE_FD_3/Diagnostic Debounce BRAKE_FD_3/KeCIDB_Cnt_BRAKE_FD_3_ePT_SNAFailINC'
 * '<S297>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Bluen_10ms/U0415_10ms_BRAKE_FD_3/U0415_BRAKE_FD_3/Diagnostic Debounce BRAKE_FD_3/KeCIDB_Cnt_BRAKE_FD_3_ePT_SNA_FailLmt'
 * '<S298>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Bluen_10ms/U0415_10ms_BRAKE_FD_3/U0415_BRAKE_FD_3/Diagnostic Debounce BRAKE_FD_3/KeCIDB_b_BRAKE_FD_3_ePT_SNA_DiagEnbl'
 * '<S299>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Bluen_10ms/U0415_10ms_BRAKE_FD_3/U0415_BRAKE_FD_3/Diagnostic Debounce BRAKE_FD_3/KeCIDB_b_BRAKE_FD_3_ePT_SNA_FailLatchEnable'
 * '<S300>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Bluen_10ms/U0415_10ms_BRAKE_FD_3/U0415_BRAKE_FD_3/Diagnostic Debounce BRAKE_FD_3/DiagnosticDebounceImplausibleSignalSNA/Diagnostic Debounce'
 * '<S301>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Bluen_10ms/U0415_10ms_BRAKE_FD_3/U0415_BRAKE_FD_3/Diagnostic Debounce BRAKE_FD_3/DiagnosticDebounceImplausibleSignalSNA/EdgeFalling1'
 * '<S302>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Bluen_10ms/U0415_Enable/KeCIDB_b_IsDiagGlobalConditionValidStubEnbl4'
 * '<S303>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Bluen_10ms/U0415_Report/EdgeRising'
 * '<S304>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Bluen_10ms/U0415_Report/Enumerated_Constant'
 * '<S305>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Bluen_10ms/U0415_Report/Enumerated_Constant2'
 * '<S306>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Bluen_10ms/U0415_Report/Enumerated_Constant4'
 * '<S307>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Bluen_10ms/U0415_Report/Enumerated_Constant5'
 * '<S308>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Bluen_10ms/U0415_Report/Subsystem'
 * '<S309>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Bluen_10ms/U0415_Report/Subsystem1'
 * '<S310>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Bluen_10ms/U0415_Report/Subsystem2'
 * '<S311>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Bluen_10ms/U0415_Report/Subsystem/Enumerated_Constant4'
 * '<S312>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Bluen_10ms/U0415_Report/Subsystem1/Enumerated_Constant4'
 * '<S313>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Bluen_10ms/U0415_Report/Subsystem2/Enumerated_Constant4'
 * '<S314>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_COREBEV_10ms/U0415_10ms_BRAKE_FD_2'
 * '<S315>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_COREBEV_10ms/U0415_10ms_BRAKE_FD_3'
 * '<S316>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_COREBEV_10ms/U0415_Enable'
 * '<S317>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_COREBEV_10ms/U0415_Report'
 * '<S318>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_COREBEV_10ms/U0415_10ms_BRAKE_FD_2/U0415_BRAKE_FD_2'
 * '<S319>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_COREBEV_10ms/U0415_10ms_BRAKE_FD_2/U0415_BRAKE_FD_2/Diagnostic Debounce BRAKE_FD_2'
 * '<S320>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_COREBEV_10ms/U0415_10ms_BRAKE_FD_2/U0415_BRAKE_FD_2/Diagnostic Fault Criteria BRAKE_FD_2'
 * '<S321>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_COREBEV_10ms/U0415_10ms_BRAKE_FD_2/U0415_BRAKE_FD_2/Diagnostic Debounce BRAKE_FD_2/DiagnosticDebounceImplausibleSignalSNA'
 * '<S322>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_COREBEV_10ms/U0415_10ms_BRAKE_FD_2/U0415_BRAKE_FD_2/Diagnostic Debounce BRAKE_FD_2/KeCIDB_Cnt_BRAKE_FD_2_ePT_SNAFailINC'
 * '<S323>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_COREBEV_10ms/U0415_10ms_BRAKE_FD_2/U0415_BRAKE_FD_2/Diagnostic Debounce BRAKE_FD_2/KeCIDB_Cnt_BRAKE_FD_2_ePT_SNA_FailLmt'
 * '<S324>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_COREBEV_10ms/U0415_10ms_BRAKE_FD_2/U0415_BRAKE_FD_2/Diagnostic Debounce BRAKE_FD_2/KeCIDB_b_BRAKE_FD_2_ePT_SNA_DiagEnbl'
 * '<S325>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_COREBEV_10ms/U0415_10ms_BRAKE_FD_2/U0415_BRAKE_FD_2/Diagnostic Debounce BRAKE_FD_2/KeCIDB_b_BRAKE_FD_2_ePT_SNA_FailLatchEnable'
 * '<S326>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_COREBEV_10ms/U0415_10ms_BRAKE_FD_2/U0415_BRAKE_FD_2/Diagnostic Debounce BRAKE_FD_2/DiagnosticDebounceImplausibleSignalSNA/Diagnostic Debounce'
 * '<S327>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_COREBEV_10ms/U0415_10ms_BRAKE_FD_2/U0415_BRAKE_FD_2/Diagnostic Debounce BRAKE_FD_2/DiagnosticDebounceImplausibleSignalSNA/EdgeFalling1'
 * '<S328>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_COREBEV_10ms/U0415_10ms_BRAKE_FD_3/U0415_BRAKE_FD_3'
 * '<S329>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_COREBEV_10ms/U0415_10ms_BRAKE_FD_3/U0415_BRAKE_FD_3/Diagnostic Debounce BRAKE_FD_3'
 * '<S330>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_COREBEV_10ms/U0415_10ms_BRAKE_FD_3/U0415_BRAKE_FD_3/Diagnostic Fault Criteria BRAKE_FD_3'
 * '<S331>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_COREBEV_10ms/U0415_10ms_BRAKE_FD_3/U0415_BRAKE_FD_3/Diagnostic Debounce BRAKE_FD_3/DiagnosticDebounceImplausibleSignalSNA'
 * '<S332>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_COREBEV_10ms/U0415_10ms_BRAKE_FD_3/U0415_BRAKE_FD_3/Diagnostic Debounce BRAKE_FD_3/KeCIDB_Cnt_BRAKE_FD_3_ePT_SNAFailINC'
 * '<S333>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_COREBEV_10ms/U0415_10ms_BRAKE_FD_3/U0415_BRAKE_FD_3/Diagnostic Debounce BRAKE_FD_3/KeCIDB_Cnt_BRAKE_FD_3_ePT_SNA_FailLmt'
 * '<S334>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_COREBEV_10ms/U0415_10ms_BRAKE_FD_3/U0415_BRAKE_FD_3/Diagnostic Debounce BRAKE_FD_3/KeCIDB_b_BRAKE_FD_3_ePT_SNA_DiagEnbl'
 * '<S335>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_COREBEV_10ms/U0415_10ms_BRAKE_FD_3/U0415_BRAKE_FD_3/Diagnostic Debounce BRAKE_FD_3/KeCIDB_b_BRAKE_FD_3_ePT_SNA_FailLatchEnable'
 * '<S336>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_COREBEV_10ms/U0415_10ms_BRAKE_FD_3/U0415_BRAKE_FD_3/Diagnostic Debounce BRAKE_FD_3/DiagnosticDebounceImplausibleSignalSNA/Diagnostic Debounce'
 * '<S337>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_COREBEV_10ms/U0415_10ms_BRAKE_FD_3/U0415_BRAKE_FD_3/Diagnostic Debounce BRAKE_FD_3/DiagnosticDebounceImplausibleSignalSNA/EdgeFalling1'
 * '<S338>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_COREBEV_10ms/U0415_Enable/KeCIDB_b_IsDiagGlobalConditionValidStubEnbl4'
 * '<S339>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_COREBEV_10ms/U0415_Report/EdgeRising'
 * '<S340>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_COREBEV_10ms/U0415_Report/Enumerated_Constant'
 * '<S341>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_COREBEV_10ms/U0415_Report/Enumerated_Constant2'
 * '<S342>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_COREBEV_10ms/U0415_Report/Enumerated_Constant4'
 * '<S343>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_COREBEV_10ms/U0415_Report/Enumerated_Constant5'
 * '<S344>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_COREBEV_10ms/U0415_Report/Subsystem'
 * '<S345>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_COREBEV_10ms/U0415_Report/Subsystem1'
 * '<S346>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_COREBEV_10ms/U0415_Report/Subsystem2'
 * '<S347>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_COREBEV_10ms/U0415_Report/Subsystem/Enumerated_Constant4'
 * '<S348>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_COREBEV_10ms/U0415_Report/Subsystem1/Enumerated_Constant4'
 * '<S349>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_COREBEV_10ms/U0415_Report/Subsystem2/Enumerated_Constant4'
 * '<S350>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Pegasus_10ms/U0415_10ms_BRAKE_FD_2'
 * '<S351>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Pegasus_10ms/U0415_10ms_BRAKE_FD_3'
 * '<S352>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Pegasus_10ms/U0415_Enable'
 * '<S353>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Pegasus_10ms/U0415_Report'
 * '<S354>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Pegasus_10ms/U0415_10ms_BRAKE_FD_2/U0415_BRAKE_FD_2'
 * '<S355>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Pegasus_10ms/U0415_10ms_BRAKE_FD_2/U0415_BRAKE_FD_2/Diagnostic Debounce BRAKE_FD_2'
 * '<S356>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Pegasus_10ms/U0415_10ms_BRAKE_FD_2/U0415_BRAKE_FD_2/Diagnostic Fault Criteria BRAKE_FD_2'
 * '<S357>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Pegasus_10ms/U0415_10ms_BRAKE_FD_2/U0415_BRAKE_FD_2/Diagnostic Debounce BRAKE_FD_2/DiagnosticDebounceImplausibleSignalSNA'
 * '<S358>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Pegasus_10ms/U0415_10ms_BRAKE_FD_2/U0415_BRAKE_FD_2/Diagnostic Debounce BRAKE_FD_2/KeCIDB_Cnt_BRAKE_FD_2_ePT_SNAFailINC'
 * '<S359>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Pegasus_10ms/U0415_10ms_BRAKE_FD_2/U0415_BRAKE_FD_2/Diagnostic Debounce BRAKE_FD_2/KeCIDB_Cnt_BRAKE_FD_2_ePT_SNA_FailLmt'
 * '<S360>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Pegasus_10ms/U0415_10ms_BRAKE_FD_2/U0415_BRAKE_FD_2/Diagnostic Debounce BRAKE_FD_2/KeCIDB_b_BRAKE_FD_2_ePT_SNA_DiagEnbl'
 * '<S361>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Pegasus_10ms/U0415_10ms_BRAKE_FD_2/U0415_BRAKE_FD_2/Diagnostic Debounce BRAKE_FD_2/KeCIDB_b_BRAKE_FD_2_ePT_SNA_FailLatchEnable'
 * '<S362>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Pegasus_10ms/U0415_10ms_BRAKE_FD_2/U0415_BRAKE_FD_2/Diagnostic Debounce BRAKE_FD_2/DiagnosticDebounceImplausibleSignalSNA/Diagnostic Debounce'
 * '<S363>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Pegasus_10ms/U0415_10ms_BRAKE_FD_2/U0415_BRAKE_FD_2/Diagnostic Debounce BRAKE_FD_2/DiagnosticDebounceImplausibleSignalSNA/EdgeFalling1'
 * '<S364>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Pegasus_10ms/U0415_10ms_BRAKE_FD_3/U0415_BRAKE_FD_3'
 * '<S365>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Pegasus_10ms/U0415_10ms_BRAKE_FD_3/U0415_BRAKE_FD_3/Diagnostic Debounce BRAKE_FD_3'
 * '<S366>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Pegasus_10ms/U0415_10ms_BRAKE_FD_3/U0415_BRAKE_FD_3/Diagnostic Fault Criteria BRAKE_FD_3'
 * '<S367>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Pegasus_10ms/U0415_10ms_BRAKE_FD_3/U0415_BRAKE_FD_3/Diagnostic Debounce BRAKE_FD_3/DiagnosticDebounceImplausibleSignalSNA'
 * '<S368>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Pegasus_10ms/U0415_10ms_BRAKE_FD_3/U0415_BRAKE_FD_3/Diagnostic Debounce BRAKE_FD_3/KeCIDB_Cnt_BRAKE_FD_3_ePT_SNAFailINC'
 * '<S369>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Pegasus_10ms/U0415_10ms_BRAKE_FD_3/U0415_BRAKE_FD_3/Diagnostic Debounce BRAKE_FD_3/KeCIDB_Cnt_BRAKE_FD_3_ePT_SNA_FailLmt'
 * '<S370>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Pegasus_10ms/U0415_10ms_BRAKE_FD_3/U0415_BRAKE_FD_3/Diagnostic Debounce BRAKE_FD_3/KeCIDB_b_BRAKE_FD_3_ePT_SNA_DiagEnbl'
 * '<S371>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Pegasus_10ms/U0415_10ms_BRAKE_FD_3/U0415_BRAKE_FD_3/Diagnostic Debounce BRAKE_FD_3/KeCIDB_b_BRAKE_FD_3_ePT_SNA_FailLatchEnable'
 * '<S372>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Pegasus_10ms/U0415_10ms_BRAKE_FD_3/U0415_BRAKE_FD_3/Diagnostic Debounce BRAKE_FD_3/DiagnosticDebounceImplausibleSignalSNA/Diagnostic Debounce'
 * '<S373>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Pegasus_10ms/U0415_10ms_BRAKE_FD_3/U0415_BRAKE_FD_3/Diagnostic Debounce BRAKE_FD_3/DiagnosticDebounceImplausibleSignalSNA/EdgeFalling1'
 * '<S374>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Pegasus_10ms/U0415_Enable/KeCIDB_b_IsDiagGlobalConditionValidStubEnbl4'
 * '<S375>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Pegasus_10ms/U0415_Report/EdgeRising'
 * '<S376>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Pegasus_10ms/U0415_Report/Enumerated_Constant'
 * '<S377>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Pegasus_10ms/U0415_Report/Enumerated_Constant2'
 * '<S378>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Pegasus_10ms/U0415_Report/Enumerated_Constant4'
 * '<S379>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Pegasus_10ms/U0415_Report/Enumerated_Constant5'
 * '<S380>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Pegasus_10ms/U0415_Report/Subsystem'
 * '<S381>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Pegasus_10ms/U0415_Report/Subsystem1'
 * '<S382>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Pegasus_10ms/U0415_Report/Subsystem2'
 * '<S383>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Pegasus_10ms/U0415_Report/Subsystem/Enumerated_Constant4'
 * '<S384>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Pegasus_10ms/U0415_Report/Subsystem1/Enumerated_Constant4'
 * '<S385>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0415_Variant_Pegasus_Corebev_Bluen_10ms/U0415_Pegasus_10ms/U0415_Report/Subsystem2/Enumerated_Constant4'
 * '<S386>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_BLUEN_10ms'
 * '<S387>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_COREBEV_10ms'
 * '<S388>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_Pegasus_10ms'
 * '<S389>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_BLUEN_10ms/U0422_10ms_BCM_FD_2'
 * '<S390>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_BLUEN_10ms/U0422_BLUEN_Report'
 * '<S391>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_BLUEN_10ms/U0422_Enable'
 * '<S392>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_BLUEN_10ms/U0422_10ms_BCM_FD_2/U0422_BCM_FD_2'
 * '<S393>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_BLUEN_10ms/U0422_10ms_BCM_FD_2/U0422_BCM_FD_2/Diagnostic Debounce BCM_FD_2'
 * '<S394>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_BLUEN_10ms/U0422_10ms_BCM_FD_2/U0422_BCM_FD_2/Diagnostic Fault Criteria BCM_FD_2'
 * '<S395>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_BLUEN_10ms/U0422_10ms_BCM_FD_2/U0422_BCM_FD_2/Diagnostic Debounce BCM_FD_2/DiagnosticDebounceImplausibleSignalSNA'
 * '<S396>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_BLUEN_10ms/U0422_10ms_BCM_FD_2/U0422_BCM_FD_2/Diagnostic Debounce BCM_FD_2/KeCIDB_Cnt_BCM_FD_2_ePT_SNAFailINC'
 * '<S397>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_BLUEN_10ms/U0422_10ms_BCM_FD_2/U0422_BCM_FD_2/Diagnostic Debounce BCM_FD_2/KeCIDB_Cnt_BCM_FD_2_ePT_SNA_FailLmt'
 * '<S398>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_BLUEN_10ms/U0422_10ms_BCM_FD_2/U0422_BCM_FD_2/Diagnostic Debounce BCM_FD_2/KeCIDB_b_BCM_FD_2_ePT_SNA_DiagEnbl'
 * '<S399>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_BLUEN_10ms/U0422_10ms_BCM_FD_2/U0422_BCM_FD_2/Diagnostic Debounce BCM_FD_2/KeCIDB_b_BCM_FD_2_ePT_SNA_FailLatchEnable'
 * '<S400>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_BLUEN_10ms/U0422_10ms_BCM_FD_2/U0422_BCM_FD_2/Diagnostic Debounce BCM_FD_2/DiagnosticDebounceImplausibleSignalSNA/Diagnostic Debounce'
 * '<S401>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_BLUEN_10ms/U0422_10ms_BCM_FD_2/U0422_BCM_FD_2/Diagnostic Debounce BCM_FD_2/DiagnosticDebounceImplausibleSignalSNA/EdgeFalling1'
 * '<S402>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_BLUEN_10ms/U0422_BLUEN_Report/EdgeRising'
 * '<S403>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_BLUEN_10ms/U0422_BLUEN_Report/Enumerated_Constant'
 * '<S404>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_BLUEN_10ms/U0422_BLUEN_Report/Enumerated_Constant1'
 * '<S405>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_BLUEN_10ms/U0422_BLUEN_Report/Enumerated_Constant4'
 * '<S406>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_BLUEN_10ms/U0422_BLUEN_Report/Enumerated_Constant6'
 * '<S407>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_BLUEN_10ms/U0422_BLUEN_Report/Enumerated_Constant_'
 * '<S408>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_BLUEN_10ms/U0422_BLUEN_Report/Enumerated_Constant_1'
 * '<S409>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_BLUEN_10ms/U0422_BLUEN_Report/Enumerated_Constant_4'
 * '<S410>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_BLUEN_10ms/U0422_BLUEN_Report/Enumerated_Constant_6'
 * '<S411>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_BLUEN_10ms/U0422_BLUEN_Report/Subsystem'
 * '<S412>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_BLUEN_10ms/U0422_BLUEN_Report/Subsystem1'
 * '<S413>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_BLUEN_10ms/U0422_BLUEN_Report/Subsystem2'
 * '<S414>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_BLUEN_10ms/U0422_BLUEN_Report/Subsystem/Enumerated_Constant4'
 * '<S415>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_BLUEN_10ms/U0422_BLUEN_Report/Subsystem1/Enumerated_Constant4'
 * '<S416>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_BLUEN_10ms/U0422_BLUEN_Report/Subsystem2/Enumerated_Constant4'
 * '<S417>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_BLUEN_10ms/U0422_Enable/KeCIDB_b_U0422_DiagEnbl'
 * '<S418>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_COREBEV_10ms/U0422_10ms_BCM_FD_2'
 * '<S419>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_COREBEV_10ms/U0422_Enable'
 * '<S420>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_COREBEV_10ms/U0422_Report'
 * '<S421>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_COREBEV_10ms/U0422_10ms_BCM_FD_2/U0422_BCM_FD_2'
 * '<S422>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_COREBEV_10ms/U0422_10ms_BCM_FD_2/U0422_BCM_FD_2/Diagnostic Debounce BCM_FD_2'
 * '<S423>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_COREBEV_10ms/U0422_10ms_BCM_FD_2/U0422_BCM_FD_2/Diagnostic Fault Criteria BCM_FD_2'
 * '<S424>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_COREBEV_10ms/U0422_10ms_BCM_FD_2/U0422_BCM_FD_2/Diagnostic Debounce BCM_FD_2/DiagnosticDebounceImplausibleSignalSNA'
 * '<S425>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_COREBEV_10ms/U0422_10ms_BCM_FD_2/U0422_BCM_FD_2/Diagnostic Debounce BCM_FD_2/KeCIDB_Cnt_BCM_FD_2_ePT_SNAFailINC'
 * '<S426>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_COREBEV_10ms/U0422_10ms_BCM_FD_2/U0422_BCM_FD_2/Diagnostic Debounce BCM_FD_2/KeCIDB_Cnt_BCM_FD_2_ePT_SNA_FailLmt'
 * '<S427>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_COREBEV_10ms/U0422_10ms_BCM_FD_2/U0422_BCM_FD_2/Diagnostic Debounce BCM_FD_2/KeCIDB_b_BCM_FD_2_ePT_SNA_DiagEnbl'
 * '<S428>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_COREBEV_10ms/U0422_10ms_BCM_FD_2/U0422_BCM_FD_2/Diagnostic Debounce BCM_FD_2/KeCIDB_b_BCM_FD_2_ePT_SNA_FailLatchEnable'
 * '<S429>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_COREBEV_10ms/U0422_10ms_BCM_FD_2/U0422_BCM_FD_2/Diagnostic Debounce BCM_FD_2/DiagnosticDebounceImplausibleSignalSNA/Diagnostic Debounce'
 * '<S430>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_COREBEV_10ms/U0422_10ms_BCM_FD_2/U0422_BCM_FD_2/Diagnostic Debounce BCM_FD_2/DiagnosticDebounceImplausibleSignalSNA/EdgeFalling1'
 * '<S431>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_COREBEV_10ms/U0422_Enable/KeCIDB_b_U0422_DiagEnbl'
 * '<S432>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_COREBEV_10ms/U0422_Report/EdgeRising'
 * '<S433>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_COREBEV_10ms/U0422_Report/Enumerated_Constant'
 * '<S434>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_COREBEV_10ms/U0422_Report/Enumerated_Constant1'
 * '<S435>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_COREBEV_10ms/U0422_Report/Enumerated_Constant2'
 * '<S436>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_COREBEV_10ms/U0422_Report/Enumerated_Constant3'
 * '<S437>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_COREBEV_10ms/U0422_Report/Enumerated_Constant4'
 * '<S438>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_COREBEV_10ms/U0422_Report/Enumerated_Constant5'
 * '<S439>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_COREBEV_10ms/U0422_Report/Enumerated_Constant6'
 * '<S440>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_COREBEV_10ms/U0422_Report/Enumerated_Constant7'
 * '<S441>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_COREBEV_10ms/U0422_Report/Subsystem'
 * '<S442>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_COREBEV_10ms/U0422_Report/Subsystem1'
 * '<S443>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_COREBEV_10ms/U0422_Report/Subsystem2'
 * '<S444>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_COREBEV_10ms/U0422_Report/Subsystem/Enumerated_Constant4'
 * '<S445>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_COREBEV_10ms/U0422_Report/Subsystem1/Enumerated_Constant4'
 * '<S446>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_COREBEV_10ms/U0422_Report/Subsystem2/Enumerated_Constant4'
 * '<S447>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_Pegasus_10ms/U0422_10ms_BCM_FD_2'
 * '<S448>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_Pegasus_10ms/U0422_Enable'
 * '<S449>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_Pegasus_10ms/U0422_Report'
 * '<S450>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_Pegasus_10ms/U0422_10ms_BCM_FD_2/U0422_BCM_FD_2'
 * '<S451>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_Pegasus_10ms/U0422_10ms_BCM_FD_2/U0422_BCM_FD_2/Diagnostic Debounce BCM_FD_2'
 * '<S452>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_Pegasus_10ms/U0422_10ms_BCM_FD_2/U0422_BCM_FD_2/Diagnostic Fault Criteria BCM_FD_2'
 * '<S453>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_Pegasus_10ms/U0422_10ms_BCM_FD_2/U0422_BCM_FD_2/Diagnostic Debounce BCM_FD_2/DiagnosticDebounceImplausibleSignalSNA'
 * '<S454>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_Pegasus_10ms/U0422_10ms_BCM_FD_2/U0422_BCM_FD_2/Diagnostic Debounce BCM_FD_2/KeCIDB_Cnt_BCM_FD_2_ePT_SNAFailINC'
 * '<S455>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_Pegasus_10ms/U0422_10ms_BCM_FD_2/U0422_BCM_FD_2/Diagnostic Debounce BCM_FD_2/KeCIDB_Cnt_BCM_FD_2_ePT_SNA_FailLmt'
 * '<S456>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_Pegasus_10ms/U0422_10ms_BCM_FD_2/U0422_BCM_FD_2/Diagnostic Debounce BCM_FD_2/KeCIDB_b_BCM_FD_2_ePT_SNA_DiagEnbl'
 * '<S457>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_Pegasus_10ms/U0422_10ms_BCM_FD_2/U0422_BCM_FD_2/Diagnostic Debounce BCM_FD_2/KeCIDB_b_BCM_FD_2_ePT_SNA_FailLatchEnable'
 * '<S458>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_Pegasus_10ms/U0422_10ms_BCM_FD_2/U0422_BCM_FD_2/Diagnostic Debounce BCM_FD_2/DiagnosticDebounceImplausibleSignalSNA/Diagnostic Debounce'
 * '<S459>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_Pegasus_10ms/U0422_10ms_BCM_FD_2/U0422_BCM_FD_2/Diagnostic Debounce BCM_FD_2/DiagnosticDebounceImplausibleSignalSNA/EdgeFalling1'
 * '<S460>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_Pegasus_10ms/U0422_Enable/KeCIDB_b_U0422_DiagEnbl'
 * '<S461>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_Pegasus_10ms/U0422_Report/EdgeRising'
 * '<S462>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_Pegasus_10ms/U0422_Report/Enumerated_Constant'
 * '<S463>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_Pegasus_10ms/U0422_Report/Enumerated_Constant1'
 * '<S464>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_Pegasus_10ms/U0422_Report/Enumerated_Constant2'
 * '<S465>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_Pegasus_10ms/U0422_Report/Enumerated_Constant3'
 * '<S466>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_Pegasus_10ms/U0422_Report/Enumerated_Constant4'
 * '<S467>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_Pegasus_10ms/U0422_Report/Enumerated_Constant5'
 * '<S468>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_Pegasus_10ms/U0422_Report/Enumerated_Constant6'
 * '<S469>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_Pegasus_10ms/U0422_Report/Enumerated_Constant7'
 * '<S470>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_Pegasus_10ms/U0422_Report/Subsystem'
 * '<S471>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_Pegasus_10ms/U0422_Report/Subsystem1'
 * '<S472>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_Pegasus_10ms/U0422_Report/Subsystem2'
 * '<S473>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_Pegasus_10ms/U0422_Report/Subsystem/Enumerated_Constant4'
 * '<S474>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_Pegasus_10ms/U0422_Report/Subsystem1/Enumerated_Constant4'
 * '<S475>' : 'CIDB_ac/ImplausibleMgmt_10ms/U0422_Variant_10ms/U0422_Pegasus_10ms/U0422_Report/Subsystem2/Enumerated_Constant4'
 * '<S476>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms'
 * '<S477>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0412_Variant_20ms'
 * '<S478>' : 'CIDB_ac/ImplausibleMgmt_20ms/U048D_Variant_Bluen_20ms'
 * '<S479>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms'
 * '<S480>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_BLUEN_20ms'
 * '<S481>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_COREBEV_20ms'
 * '<S482>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_Pegasus_20ms'
 * '<S483>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_BLUEN_20ms/U0404_20ms_AGSM_FD2'
 * '<S484>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_BLUEN_20ms/U0404_Enable'
 * '<S485>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_BLUEN_20ms/U0404_Report'
 * '<S486>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_BLUEN_20ms/U0404_20ms_AGSM_FD2/U0404_AGSM_FD_2'
 * '<S487>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_BLUEN_20ms/U0404_20ms_AGSM_FD2/U0404_AGSM_FD_2/Diagnostic Debounce AGSM_FD_2'
 * '<S488>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_BLUEN_20ms/U0404_20ms_AGSM_FD2/U0404_AGSM_FD_2/Diagnostic Fault Criteria AGSM_FD_2'
 * '<S489>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_BLUEN_20ms/U0404_20ms_AGSM_FD2/U0404_AGSM_FD_2/Diagnostic Debounce AGSM_FD_2/DiagnosticDebounceImplausibleSignalSNA'
 * '<S490>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_BLUEN_20ms/U0404_20ms_AGSM_FD2/U0404_AGSM_FD_2/Diagnostic Debounce AGSM_FD_2/KeCIDB_Cnt_AGSM_FD_2_ePT_SNAFailINC'
 * '<S491>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_BLUEN_20ms/U0404_20ms_AGSM_FD2/U0404_AGSM_FD_2/Diagnostic Debounce AGSM_FD_2/KeCIDB_Cnt_AGSM_FD_2_ePT_SNA_FailLmt'
 * '<S492>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_BLUEN_20ms/U0404_20ms_AGSM_FD2/U0404_AGSM_FD_2/Diagnostic Debounce AGSM_FD_2/KeCIDB_b_AGSM_FD_2_ePT_SNA_DiagEnbl'
 * '<S493>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_BLUEN_20ms/U0404_20ms_AGSM_FD2/U0404_AGSM_FD_2/Diagnostic Debounce AGSM_FD_2/KeCIDB_b_AGSM_FD_2_ePT_SNA_FailLatchEnable'
 * '<S494>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_BLUEN_20ms/U0404_20ms_AGSM_FD2/U0404_AGSM_FD_2/Diagnostic Debounce AGSM_FD_2/DiagnosticDebounceImplausibleSignalSNA/Diagnostic Debounce'
 * '<S495>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_BLUEN_20ms/U0404_20ms_AGSM_FD2/U0404_AGSM_FD_2/Diagnostic Debounce AGSM_FD_2/DiagnosticDebounceImplausibleSignalSNA/EdgeFalling1'
 * '<S496>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_BLUEN_20ms/U0404_Enable/KeCIDB_b_U0404_DiagEnbl'
 * '<S497>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_BLUEN_20ms/U0404_Report/EdgeRising'
 * '<S498>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_BLUEN_20ms/U0404_Report/Enumerated_Constant'
 * '<S499>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_BLUEN_20ms/U0404_Report/Enumerated_Constant4'
 * '<S500>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_BLUEN_20ms/U0404_Report/Subsystem'
 * '<S501>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_BLUEN_20ms/U0404_Report/Subsystem1'
 * '<S502>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_BLUEN_20ms/U0404_Report/Subsystem2'
 * '<S503>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_BLUEN_20ms/U0404_Report/Subsystem/Enumerated_Constant4'
 * '<S504>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_BLUEN_20ms/U0404_Report/Subsystem1/Enumerated_Constant4'
 * '<S505>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_BLUEN_20ms/U0404_Report/Subsystem2/Enumerated_Constant4'
 * '<S506>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_COREBEV_20ms/U0404_20ms_AGSM_FD2'
 * '<S507>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_COREBEV_20ms/U0404_Enable'
 * '<S508>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_COREBEV_20ms/U0404_Report'
 * '<S509>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_COREBEV_20ms/U0404_20ms_AGSM_FD2/U0404_AGSM_FD_2'
 * '<S510>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_COREBEV_20ms/U0404_20ms_AGSM_FD2/U0404_AGSM_FD_2/Diagnostic Debounce AGSM_FD_2'
 * '<S511>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_COREBEV_20ms/U0404_20ms_AGSM_FD2/U0404_AGSM_FD_2/Diagnostic Fault Criteria AGSM_FD_2'
 * '<S512>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_COREBEV_20ms/U0404_20ms_AGSM_FD2/U0404_AGSM_FD_2/Diagnostic Debounce AGSM_FD_2/DiagnosticDebounceImplausibleSignalSNA'
 * '<S513>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_COREBEV_20ms/U0404_20ms_AGSM_FD2/U0404_AGSM_FD_2/Diagnostic Debounce AGSM_FD_2/KeCIDB_Cnt_AGSM_FD_2_ePT_SNAFailINC'
 * '<S514>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_COREBEV_20ms/U0404_20ms_AGSM_FD2/U0404_AGSM_FD_2/Diagnostic Debounce AGSM_FD_2/KeCIDB_Cnt_AGSM_FD_2_ePT_SNA_FailLmt'
 * '<S515>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_COREBEV_20ms/U0404_20ms_AGSM_FD2/U0404_AGSM_FD_2/Diagnostic Debounce AGSM_FD_2/KeCIDB_b_AGSM_FD_2_ePT_SNA_DiagEnbl'
 * '<S516>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_COREBEV_20ms/U0404_20ms_AGSM_FD2/U0404_AGSM_FD_2/Diagnostic Debounce AGSM_FD_2/KeCIDB_b_AGSM_FD_2_ePT_SNA_FailLatchEnable'
 * '<S517>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_COREBEV_20ms/U0404_20ms_AGSM_FD2/U0404_AGSM_FD_2/Diagnostic Debounce AGSM_FD_2/DiagnosticDebounceImplausibleSignalSNA/Diagnostic Debounce'
 * '<S518>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_COREBEV_20ms/U0404_20ms_AGSM_FD2/U0404_AGSM_FD_2/Diagnostic Debounce AGSM_FD_2/DiagnosticDebounceImplausibleSignalSNA/EdgeFalling1'
 * '<S519>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_COREBEV_20ms/U0404_Enable/KeCIDB_b_U0404_DiagEnbl'
 * '<S520>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_COREBEV_20ms/U0404_Report/EdgeRising'
 * '<S521>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_COREBEV_20ms/U0404_Report/Enumerated_Constant'
 * '<S522>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_COREBEV_20ms/U0404_Report/Enumerated_Constant4'
 * '<S523>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_COREBEV_20ms/U0404_Report/Subsystem'
 * '<S524>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_COREBEV_20ms/U0404_Report/Subsystem1'
 * '<S525>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_COREBEV_20ms/U0404_Report/Subsystem2'
 * '<S526>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_COREBEV_20ms/U0404_Report/Subsystem/Enumerated_Constant4'
 * '<S527>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_COREBEV_20ms/U0404_Report/Subsystem1/Enumerated_Constant4'
 * '<S528>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_COREBEV_20ms/U0404_Report/Subsystem2/Enumerated_Constant4'
 * '<S529>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_Pegasus_20ms/U0404_20ms_AGSM_FD2'
 * '<S530>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_Pegasus_20ms/U0404_Enable'
 * '<S531>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_Pegasus_20ms/U0404_Report'
 * '<S532>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_Pegasus_20ms/U0404_20ms_AGSM_FD2/U0404_AGSM_FD_2'
 * '<S533>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_Pegasus_20ms/U0404_20ms_AGSM_FD2/U0404_AGSM_FD_2/Diagnostic Debounce AGSM_FD_2'
 * '<S534>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_Pegasus_20ms/U0404_20ms_AGSM_FD2/U0404_AGSM_FD_2/Diagnostic Fault Criteria AGSM_FD_2'
 * '<S535>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_Pegasus_20ms/U0404_20ms_AGSM_FD2/U0404_AGSM_FD_2/Diagnostic Debounce AGSM_FD_2/DiagnosticDebounceImplausibleSignalSNA'
 * '<S536>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_Pegasus_20ms/U0404_20ms_AGSM_FD2/U0404_AGSM_FD_2/Diagnostic Debounce AGSM_FD_2/KeCIDB_Cnt_AGSM_FD_2_ePT_SNAFailINC'
 * '<S537>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_Pegasus_20ms/U0404_20ms_AGSM_FD2/U0404_AGSM_FD_2/Diagnostic Debounce AGSM_FD_2/KeCIDB_Cnt_AGSM_FD_2_ePT_SNA_FailLmt'
 * '<S538>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_Pegasus_20ms/U0404_20ms_AGSM_FD2/U0404_AGSM_FD_2/Diagnostic Debounce AGSM_FD_2/KeCIDB_b_AGSM_FD_2_ePT_SNA_DiagEnbl'
 * '<S539>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_Pegasus_20ms/U0404_20ms_AGSM_FD2/U0404_AGSM_FD_2/Diagnostic Debounce AGSM_FD_2/KeCIDB_b_AGSM_FD_2_ePT_SNA_FailLatchEnable'
 * '<S540>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_Pegasus_20ms/U0404_20ms_AGSM_FD2/U0404_AGSM_FD_2/Diagnostic Debounce AGSM_FD_2/DiagnosticDebounceImplausibleSignalSNA/Diagnostic Debounce'
 * '<S541>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_Pegasus_20ms/U0404_20ms_AGSM_FD2/U0404_AGSM_FD_2/Diagnostic Debounce AGSM_FD_2/DiagnosticDebounceImplausibleSignalSNA/EdgeFalling1'
 * '<S542>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_Pegasus_20ms/U0404_Enable/KeCIDB_b_U0404_DiagEnbl'
 * '<S543>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_Pegasus_20ms/U0404_Report/EdgeRising'
 * '<S544>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_Pegasus_20ms/U0404_Report/Enumerated_Constant'
 * '<S545>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_Pegasus_20ms/U0404_Report/Enumerated_Constant4'
 * '<S546>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_Pegasus_20ms/U0404_Report/Subsystem'
 * '<S547>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_Pegasus_20ms/U0404_Report/Subsystem1'
 * '<S548>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_Pegasus_20ms/U0404_Report/Subsystem2'
 * '<S549>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_Pegasus_20ms/U0404_Report/Subsystem/Enumerated_Constant4'
 * '<S550>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_Pegasus_20ms/U0404_Report/Subsystem1/Enumerated_Constant4'
 * '<S551>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0404_Variant_Pegasus_Corebev_BLUEN_20ms/U0404_Pegasus_20ms/U0404_Report/Subsystem2/Enumerated_Constant4'
 * '<S552>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0412_Variant_20ms/U0412_BLUEN_20ms'
 * '<S553>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0412_Variant_20ms/U0412_COREBEV_20ms'
 * '<S554>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0412_Variant_20ms/U0412_Pegasus_20ms'
 * '<S555>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0412_Variant_20ms/U0412_BLUEN_20ms/U0412_20ms_BATTERY_HV_VLIMITS'
 * '<S556>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0412_Variant_20ms/U0412_BLUEN_20ms/U0412_20ms_BATTERY_HV_VLIMITS/U0412_BATTERY_HV_VLIMITS'
 * '<S557>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0412_Variant_20ms/U0412_BLUEN_20ms/U0412_20ms_BATTERY_HV_VLIMITS/U0412_BATTERY_HV_VLIMITS/Diagnostic Debounce BATTERY_HV_VLIMITS'
 * '<S558>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0412_Variant_20ms/U0412_BLUEN_20ms/U0412_20ms_BATTERY_HV_VLIMITS/U0412_BATTERY_HV_VLIMITS/Diagnostic Fault Criteria BATTERY_HV_VLIMITS'
 * '<S559>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0412_Variant_20ms/U0412_BLUEN_20ms/U0412_20ms_BATTERY_HV_VLIMITS/U0412_BATTERY_HV_VLIMITS/Diagnostic Debounce BATTERY_HV_VLIMITS/DiagnosticDebounceImplausibleSignalSNA'
 * '<S560>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0412_Variant_20ms/U0412_BLUEN_20ms/U0412_20ms_BATTERY_HV_VLIMITS/U0412_BATTERY_HV_VLIMITS/Diagnostic Debounce BATTERY_HV_VLIMITS/KeCIDB_Cnt_BATTERY_HV_STATUS1_ePT_SNAFailINC'
 * '<S561>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0412_Variant_20ms/U0412_BLUEN_20ms/U0412_20ms_BATTERY_HV_VLIMITS/U0412_BATTERY_HV_VLIMITS/Diagnostic Debounce BATTERY_HV_VLIMITS/KeCIDB_Cnt_BATTERY_HV_STATUS1_ePT_SNA_FailLmt'
 * '<S562>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0412_Variant_20ms/U0412_BLUEN_20ms/U0412_20ms_BATTERY_HV_VLIMITS/U0412_BATTERY_HV_VLIMITS/Diagnostic Debounce BATTERY_HV_VLIMITS/KeCIDB_b_BATTERY_HV_STATUS1_ePT_SNA_DiagEnbl'
 * '<S563>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0412_Variant_20ms/U0412_BLUEN_20ms/U0412_20ms_BATTERY_HV_VLIMITS/U0412_BATTERY_HV_VLIMITS/Diagnostic Debounce BATTERY_HV_VLIMITS/KeCIDB_b_BATTERY_HV_STATUS1_ePT_SNA_FailLatchEnable'
 * '<S564>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0412_Variant_20ms/U0412_BLUEN_20ms/U0412_20ms_BATTERY_HV_VLIMITS/U0412_BATTERY_HV_VLIMITS/Diagnostic Debounce BATTERY_HV_VLIMITS/DiagnosticDebounceImplausibleSignalSNA/Diagnostic Debounce'
 * '<S565>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0412_Variant_20ms/U0412_BLUEN_20ms/U0412_20ms_BATTERY_HV_VLIMITS/U0412_BATTERY_HV_VLIMITS/Diagnostic Debounce BATTERY_HV_VLIMITS/DiagnosticDebounceImplausibleSignalSNA/EdgeFalling1'
 * '<S566>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0412_Variant_20ms/U0412_COREBEV_20ms/U0412_20ms_BATTERY_HV_VLIMITS'
 * '<S567>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0412_Variant_20ms/U0412_COREBEV_20ms/U0412_20ms_BATTERY_HV_VLIMITS/U0412_BATTERY_HV_VLIMITS'
 * '<S568>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0412_Variant_20ms/U0412_COREBEV_20ms/U0412_20ms_BATTERY_HV_VLIMITS/U0412_BATTERY_HV_VLIMITS/Diagnostic Debounce BATTERY_HV_VLIMITS'
 * '<S569>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0412_Variant_20ms/U0412_COREBEV_20ms/U0412_20ms_BATTERY_HV_VLIMITS/U0412_BATTERY_HV_VLIMITS/Diagnostic Fault Criteria BATTERY_HV_VLIMITS'
 * '<S570>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0412_Variant_20ms/U0412_COREBEV_20ms/U0412_20ms_BATTERY_HV_VLIMITS/U0412_BATTERY_HV_VLIMITS/Diagnostic Debounce BATTERY_HV_VLIMITS/DiagnosticDebounceImplausibleSignalSNA'
 * '<S571>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0412_Variant_20ms/U0412_COREBEV_20ms/U0412_20ms_BATTERY_HV_VLIMITS/U0412_BATTERY_HV_VLIMITS/Diagnostic Debounce BATTERY_HV_VLIMITS/KeCIDB_Cnt_BATTERY_HV_STATUS1_ePT_SNAFailINC'
 * '<S572>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0412_Variant_20ms/U0412_COREBEV_20ms/U0412_20ms_BATTERY_HV_VLIMITS/U0412_BATTERY_HV_VLIMITS/Diagnostic Debounce BATTERY_HV_VLIMITS/KeCIDB_Cnt_BATTERY_HV_STATUS1_ePT_SNA_FailLmt'
 * '<S573>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0412_Variant_20ms/U0412_COREBEV_20ms/U0412_20ms_BATTERY_HV_VLIMITS/U0412_BATTERY_HV_VLIMITS/Diagnostic Debounce BATTERY_HV_VLIMITS/KeCIDB_b_BATTERY_HV_STATUS1_ePT_SNA_DiagEnbl'
 * '<S574>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0412_Variant_20ms/U0412_COREBEV_20ms/U0412_20ms_BATTERY_HV_VLIMITS/U0412_BATTERY_HV_VLIMITS/Diagnostic Debounce BATTERY_HV_VLIMITS/KeCIDB_b_BATTERY_HV_STATUS1_ePT_SNA_FailLatchEnable'
 * '<S575>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0412_Variant_20ms/U0412_COREBEV_20ms/U0412_20ms_BATTERY_HV_VLIMITS/U0412_BATTERY_HV_VLIMITS/Diagnostic Debounce BATTERY_HV_VLIMITS/DiagnosticDebounceImplausibleSignalSNA/Diagnostic Debounce'
 * '<S576>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0412_Variant_20ms/U0412_COREBEV_20ms/U0412_20ms_BATTERY_HV_VLIMITS/U0412_BATTERY_HV_VLIMITS/Diagnostic Debounce BATTERY_HV_VLIMITS/DiagnosticDebounceImplausibleSignalSNA/EdgeFalling1'
 * '<S577>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0412_Variant_20ms/U0412_Pegasus_20ms/U0412_20ms_BATTERY_HV_VLIMITS'
 * '<S578>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0412_Variant_20ms/U0412_Pegasus_20ms/U0412_20ms_BATTERY_HV_VLIMITS/U0412_BATTERY_HV_VLIMITS'
 * '<S579>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0412_Variant_20ms/U0412_Pegasus_20ms/U0412_20ms_BATTERY_HV_VLIMITS/U0412_BATTERY_HV_VLIMITS/Diagnostic Debounce BATTERY_HV_VLIMITS'
 * '<S580>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0412_Variant_20ms/U0412_Pegasus_20ms/U0412_20ms_BATTERY_HV_VLIMITS/U0412_BATTERY_HV_VLIMITS/Diagnostic Fault Criteria BATTERY_HV_VLIMITS'
 * '<S581>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0412_Variant_20ms/U0412_Pegasus_20ms/U0412_20ms_BATTERY_HV_VLIMITS/U0412_BATTERY_HV_VLIMITS/Diagnostic Debounce BATTERY_HV_VLIMITS/DiagnosticDebounceImplausibleSignalSNA'
 * '<S582>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0412_Variant_20ms/U0412_Pegasus_20ms/U0412_20ms_BATTERY_HV_VLIMITS/U0412_BATTERY_HV_VLIMITS/Diagnostic Debounce BATTERY_HV_VLIMITS/KeCIDB_Cnt_BATTERY_HV_STATUS1_ePT_SNAFailINC'
 * '<S583>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0412_Variant_20ms/U0412_Pegasus_20ms/U0412_20ms_BATTERY_HV_VLIMITS/U0412_BATTERY_HV_VLIMITS/Diagnostic Debounce BATTERY_HV_VLIMITS/KeCIDB_Cnt_BATTERY_HV_STATUS1_ePT_SNA_FailLmt'
 * '<S584>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0412_Variant_20ms/U0412_Pegasus_20ms/U0412_20ms_BATTERY_HV_VLIMITS/U0412_BATTERY_HV_VLIMITS/Diagnostic Debounce BATTERY_HV_VLIMITS/KeCIDB_b_BATTERY_HV_STATUS1_ePT_SNA_DiagEnbl'
 * '<S585>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0412_Variant_20ms/U0412_Pegasus_20ms/U0412_20ms_BATTERY_HV_VLIMITS/U0412_BATTERY_HV_VLIMITS/Diagnostic Debounce BATTERY_HV_VLIMITS/KeCIDB_b_BATTERY_HV_STATUS1_ePT_SNA_FailLatchEnable'
 * '<S586>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0412_Variant_20ms/U0412_Pegasus_20ms/U0412_20ms_BATTERY_HV_VLIMITS/U0412_BATTERY_HV_VLIMITS/Diagnostic Debounce BATTERY_HV_VLIMITS/DiagnosticDebounceImplausibleSignalSNA/Diagnostic Debounce'
 * '<S587>' : 'CIDB_ac/ImplausibleMgmt_20ms/U0412_Variant_20ms/U0412_Pegasus_20ms/U0412_20ms_BATTERY_HV_VLIMITS/U0412_BATTERY_HV_VLIMITS/Diagnostic Debounce BATTERY_HV_VLIMITS/DiagnosticDebounceImplausibleSignalSNA/EdgeFalling1'
 * '<S588>' : 'CIDB_ac/ImplausibleMgmt_20ms/U048D_Variant_Bluen_20ms/U048D_BLUEN_20ms'
 * '<S589>' : 'CIDB_ac/ImplausibleMgmt_20ms/U048D_Variant_Bluen_20ms/U048D_BLUEN_20ms/U048D_20ms_APM_VDCM'
 * '<S590>' : 'CIDB_ac/ImplausibleMgmt_20ms/U048D_Variant_Bluen_20ms/U048D_BLUEN_20ms/U048D_Enable'
 * '<S591>' : 'CIDB_ac/ImplausibleMgmt_20ms/U048D_Variant_Bluen_20ms/U048D_BLUEN_20ms/U048D_Report'
 * '<S592>' : 'CIDB_ac/ImplausibleMgmt_20ms/U048D_Variant_Bluen_20ms/U048D_BLUEN_20ms/U048D_20ms_APM_VDCM/U048D_APM_VDCM'
 * '<S593>' : 'CIDB_ac/ImplausibleMgmt_20ms/U048D_Variant_Bluen_20ms/U048D_BLUEN_20ms/U048D_20ms_APM_VDCM/U048D_APM_VDCM/Diagnostic Debounce APM_VDCM'
 * '<S594>' : 'CIDB_ac/ImplausibleMgmt_20ms/U048D_Variant_Bluen_20ms/U048D_BLUEN_20ms/U048D_20ms_APM_VDCM/U048D_APM_VDCM/Diagnostic Fault Criteria APM_VDCM'
 * '<S595>' : 'CIDB_ac/ImplausibleMgmt_20ms/U048D_Variant_Bluen_20ms/U048D_BLUEN_20ms/U048D_20ms_APM_VDCM/U048D_APM_VDCM/Diagnostic Debounce APM_VDCM/DiagnosticDebounceImplausibleSignalSNA'
 * '<S596>' : 'CIDB_ac/ImplausibleMgmt_20ms/U048D_Variant_Bluen_20ms/U048D_BLUEN_20ms/U048D_20ms_APM_VDCM/U048D_APM_VDCM/Diagnostic Debounce APM_VDCM/KeCIDB_Cnt_BATTERY_HV_POWERLIMITS_ePT_SNAFailINC'
 * '<S597>' : 'CIDB_ac/ImplausibleMgmt_20ms/U048D_Variant_Bluen_20ms/U048D_BLUEN_20ms/U048D_20ms_APM_VDCM/U048D_APM_VDCM/Diagnostic Debounce APM_VDCM/KeCIDB_Cnt_BATTERY_HV_POWERLIMITS_ePT_SNA_FailLmt'
 * '<S598>' : 'CIDB_ac/ImplausibleMgmt_20ms/U048D_Variant_Bluen_20ms/U048D_BLUEN_20ms/U048D_20ms_APM_VDCM/U048D_APM_VDCM/Diagnostic Debounce APM_VDCM/KeCIDB_b_BATTERY_HV_POWERLIMITS_ePT_SNA_DiagEnbl'
 * '<S599>' : 'CIDB_ac/ImplausibleMgmt_20ms/U048D_Variant_Bluen_20ms/U048D_BLUEN_20ms/U048D_20ms_APM_VDCM/U048D_APM_VDCM/Diagnostic Debounce APM_VDCM/KeCIDB_b_BATTERY_HV_POWERLIMITS_ePT_SNA_FailLatchEnable'
 * '<S600>' : 'CIDB_ac/ImplausibleMgmt_20ms/U048D_Variant_Bluen_20ms/U048D_BLUEN_20ms/U048D_20ms_APM_VDCM/U048D_APM_VDCM/Diagnostic Debounce APM_VDCM/DiagnosticDebounceImplausibleSignalSNA/Diagnostic Debounce'
 * '<S601>' : 'CIDB_ac/ImplausibleMgmt_20ms/U048D_Variant_Bluen_20ms/U048D_BLUEN_20ms/U048D_20ms_APM_VDCM/U048D_APM_VDCM/Diagnostic Debounce APM_VDCM/DiagnosticDebounceImplausibleSignalSNA/EdgeFalling1'
 * '<S602>' : 'CIDB_ac/ImplausibleMgmt_20ms/U048D_Variant_Bluen_20ms/U048D_BLUEN_20ms/U048D_Enable/KeCIDB_b_U190F_DiagEnbl'
 * '<S603>' : 'CIDB_ac/ImplausibleMgmt_20ms/U048D_Variant_Bluen_20ms/U048D_BLUEN_20ms/U048D_Report/EdgeRising'
 * '<S604>' : 'CIDB_ac/ImplausibleMgmt_20ms/U048D_Variant_Bluen_20ms/U048D_BLUEN_20ms/U048D_Report/Enumerated_Constant1'
 * '<S605>' : 'CIDB_ac/ImplausibleMgmt_20ms/U048D_Variant_Bluen_20ms/U048D_BLUEN_20ms/U048D_Report/Enumerated_Constant7'
 * '<S606>' : 'CIDB_ac/ImplausibleMgmt_20ms/U048D_Variant_Bluen_20ms/U048D_BLUEN_20ms/U048D_Report/Subsystem'
 * '<S607>' : 'CIDB_ac/ImplausibleMgmt_20ms/U048D_Variant_Bluen_20ms/U048D_BLUEN_20ms/U048D_Report/Subsystem1'
 * '<S608>' : 'CIDB_ac/ImplausibleMgmt_20ms/U048D_Variant_Bluen_20ms/U048D_BLUEN_20ms/U048D_Report/Subsystem2'
 * '<S609>' : 'CIDB_ac/ImplausibleMgmt_20ms/U048D_Variant_Bluen_20ms/U048D_BLUEN_20ms/U048D_Report/Subsystem/Enumerated_Constant4'
 * '<S610>' : 'CIDB_ac/ImplausibleMgmt_20ms/U048D_Variant_Bluen_20ms/U048D_BLUEN_20ms/U048D_Report/Subsystem1/Enumerated_Constant4'
 * '<S611>' : 'CIDB_ac/ImplausibleMgmt_20ms/U048D_Variant_Bluen_20ms/U048D_BLUEN_20ms/U048D_Report/Subsystem2/Enumerated_Constant4'
 * '<S612>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_COREBEV_20ms'
 * '<S613>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_Pegasus_20ms'
 * '<S614>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_COREBEV_20ms/U049C_20ms_APM_VDCM'
 * '<S615>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_COREBEV_20ms/U049C_20ms_OBCM_VDCM'
 * '<S616>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_COREBEV_20ms/U049C_Enable'
 * '<S617>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_COREBEV_20ms/U049C_Report'
 * '<S618>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_COREBEV_20ms/U049C_20ms_APM_VDCM/U049C_APM_VDCM'
 * '<S619>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_COREBEV_20ms/U049C_20ms_APM_VDCM/U049C_APM_VDCM/Diagnostic Debounce APM_VDCM'
 * '<S620>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_COREBEV_20ms/U049C_20ms_APM_VDCM/U049C_APM_VDCM/Diagnostic Fault Criteria APM_VDCM'
 * '<S621>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_COREBEV_20ms/U049C_20ms_APM_VDCM/U049C_APM_VDCM/Diagnostic Debounce APM_VDCM/DiagnosticDebounceImplausibleSignalSNA'
 * '<S622>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_COREBEV_20ms/U049C_20ms_APM_VDCM/U049C_APM_VDCM/Diagnostic Debounce APM_VDCM/KeCIDB_Cnt_BATTERY_HV_POWERLIMITS_ePT_SNAFailINC'
 * '<S623>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_COREBEV_20ms/U049C_20ms_APM_VDCM/U049C_APM_VDCM/Diagnostic Debounce APM_VDCM/KeCIDB_Cnt_BATTERY_HV_POWERLIMITS_ePT_SNA_FailLmt'
 * '<S624>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_COREBEV_20ms/U049C_20ms_APM_VDCM/U049C_APM_VDCM/Diagnostic Debounce APM_VDCM/KeCIDB_b_BATTERY_HV_POWERLIMITS_ePT_SNA_DiagEnbl'
 * '<S625>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_COREBEV_20ms/U049C_20ms_APM_VDCM/U049C_APM_VDCM/Diagnostic Debounce APM_VDCM/KeCIDB_b_BATTERY_HV_POWERLIMITS_ePT_SNA_FailLatchEnable'
 * '<S626>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_COREBEV_20ms/U049C_20ms_APM_VDCM/U049C_APM_VDCM/Diagnostic Debounce APM_VDCM/DiagnosticDebounceImplausibleSignalSNA/Diagnostic Debounce'
 * '<S627>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_COREBEV_20ms/U049C_20ms_APM_VDCM/U049C_APM_VDCM/Diagnostic Debounce APM_VDCM/DiagnosticDebounceImplausibleSignalSNA/EdgeFalling1'
 * '<S628>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_COREBEV_20ms/U049C_20ms_OBCM_VDCM/U049C_OBCM_VDCM'
 * '<S629>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_COREBEV_20ms/U049C_20ms_OBCM_VDCM/U049C_OBCM_VDCM/Diagnostic Debounce OBCM_VDCM'
 * '<S630>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_COREBEV_20ms/U049C_20ms_OBCM_VDCM/U049C_OBCM_VDCM/Diagnostic Fault Criteria OBCM_VDCM'
 * '<S631>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_COREBEV_20ms/U049C_20ms_OBCM_VDCM/U049C_OBCM_VDCM/Diagnostic Debounce OBCM_VDCM/DiagnosticDebounceImplausibleSignalSNA'
 * '<S632>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_COREBEV_20ms/U049C_20ms_OBCM_VDCM/U049C_OBCM_VDCM/Diagnostic Debounce OBCM_VDCM/KeCIDB_Cnt_OBCM_VDCM_ePT_SNAFailINC'
 * '<S633>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_COREBEV_20ms/U049C_20ms_OBCM_VDCM/U049C_OBCM_VDCM/Diagnostic Debounce OBCM_VDCM/KeCIDB_Cnt_OBCM_VDCM_ePT_SNA_FailLmt'
 * '<S634>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_COREBEV_20ms/U049C_20ms_OBCM_VDCM/U049C_OBCM_VDCM/Diagnostic Debounce OBCM_VDCM/KeCIDB_b_OBCM_VDCM_ePT_SNA_DiagEnbl'
 * '<S635>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_COREBEV_20ms/U049C_20ms_OBCM_VDCM/U049C_OBCM_VDCM/Diagnostic Debounce OBCM_VDCM/KeCIDB_b_OBCM_VDCM_ePT_SNA_FailLatchEnable'
 * '<S636>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_COREBEV_20ms/U049C_20ms_OBCM_VDCM/U049C_OBCM_VDCM/Diagnostic Debounce OBCM_VDCM/DiagnosticDebounceImplausibleSignalSNA/Diagnostic Debounce'
 * '<S637>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_COREBEV_20ms/U049C_20ms_OBCM_VDCM/U049C_OBCM_VDCM/Diagnostic Debounce OBCM_VDCM/DiagnosticDebounceImplausibleSignalSNA/EdgeFalling1'
 * '<S638>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_COREBEV_20ms/U049C_Enable/KeCIDB_b_U190F_DiagEnbl'
 * '<S639>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_COREBEV_20ms/U049C_Report/EdgeRising'
 * '<S640>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_COREBEV_20ms/U049C_Report/Enumerated_Constant'
 * '<S641>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_COREBEV_20ms/U049C_Report/Enumerated_Constant1'
 * '<S642>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_COREBEV_20ms/U049C_Report/Enumerated_Constant2'
 * '<S643>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_COREBEV_20ms/U049C_Report/Enumerated_Constant3'
 * '<S644>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_COREBEV_20ms/U049C_Report/Enumerated_Constant4'
 * '<S645>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_COREBEV_20ms/U049C_Report/Enumerated_Constant5'
 * '<S646>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_COREBEV_20ms/U049C_Report/Enumerated_Constant6'
 * '<S647>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_COREBEV_20ms/U049C_Report/Enumerated_Constant7'
 * '<S648>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_COREBEV_20ms/U049C_Report/Enumerated_Constant8'
 * '<S649>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_COREBEV_20ms/U049C_Report/Enumerated_Constant9'
 * '<S650>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_COREBEV_20ms/U049C_Report/Subsystem'
 * '<S651>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_COREBEV_20ms/U049C_Report/Subsystem1'
 * '<S652>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_COREBEV_20ms/U049C_Report/Subsystem2'
 * '<S653>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_COREBEV_20ms/U049C_Report/Subsystem/Enumerated_Constant4'
 * '<S654>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_COREBEV_20ms/U049C_Report/Subsystem1/Enumerated_Constant4'
 * '<S655>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_COREBEV_20ms/U049C_Report/Subsystem2/Enumerated_Constant4'
 * '<S656>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_Pegasus_20ms/U049C_20ms_APM_VDCM'
 * '<S657>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_Pegasus_20ms/U049C_20ms_OBCM_VDCM'
 * '<S658>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_Pegasus_20ms/U049C_Enable'
 * '<S659>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_Pegasus_20ms/U049C_Report'
 * '<S660>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_Pegasus_20ms/U049C_20ms_APM_VDCM/U049C_APM_VDCM'
 * '<S661>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_Pegasus_20ms/U049C_20ms_APM_VDCM/U049C_APM_VDCM/Diagnostic Debounce APM_VDCM'
 * '<S662>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_Pegasus_20ms/U049C_20ms_APM_VDCM/U049C_APM_VDCM/Diagnostic Fault Criteria APM_VDCM'
 * '<S663>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_Pegasus_20ms/U049C_20ms_APM_VDCM/U049C_APM_VDCM/Diagnostic Debounce APM_VDCM/DiagnosticDebounceImplausibleSignalSNA'
 * '<S664>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_Pegasus_20ms/U049C_20ms_APM_VDCM/U049C_APM_VDCM/Diagnostic Debounce APM_VDCM/KeCIDB_Cnt_BATTERY_HV_POWERLIMITS_ePT_SNAFailINC'
 * '<S665>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_Pegasus_20ms/U049C_20ms_APM_VDCM/U049C_APM_VDCM/Diagnostic Debounce APM_VDCM/KeCIDB_Cnt_BATTERY_HV_POWERLIMITS_ePT_SNA_FailLmt'
 * '<S666>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_Pegasus_20ms/U049C_20ms_APM_VDCM/U049C_APM_VDCM/Diagnostic Debounce APM_VDCM/KeCIDB_b_BATTERY_HV_POWERLIMITS_ePT_SNA_DiagEnbl'
 * '<S667>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_Pegasus_20ms/U049C_20ms_APM_VDCM/U049C_APM_VDCM/Diagnostic Debounce APM_VDCM/KeCIDB_b_BATTERY_HV_POWERLIMITS_ePT_SNA_FailLatchEnable'
 * '<S668>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_Pegasus_20ms/U049C_20ms_APM_VDCM/U049C_APM_VDCM/Diagnostic Debounce APM_VDCM/DiagnosticDebounceImplausibleSignalSNA/Diagnostic Debounce'
 * '<S669>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_Pegasus_20ms/U049C_20ms_APM_VDCM/U049C_APM_VDCM/Diagnostic Debounce APM_VDCM/DiagnosticDebounceImplausibleSignalSNA/EdgeFalling1'
 * '<S670>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_Pegasus_20ms/U049C_20ms_OBCM_VDCM/U049C_OBCM_VDCM'
 * '<S671>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_Pegasus_20ms/U049C_20ms_OBCM_VDCM/U049C_OBCM_VDCM/Diagnostic Debounce OBCM_VDCM'
 * '<S672>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_Pegasus_20ms/U049C_20ms_OBCM_VDCM/U049C_OBCM_VDCM/Diagnostic Fault Criteria OBCM_VDCM'
 * '<S673>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_Pegasus_20ms/U049C_20ms_OBCM_VDCM/U049C_OBCM_VDCM/Diagnostic Debounce OBCM_VDCM/DiagnosticDebounceImplausibleSignalSNA'
 * '<S674>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_Pegasus_20ms/U049C_20ms_OBCM_VDCM/U049C_OBCM_VDCM/Diagnostic Debounce OBCM_VDCM/KeCIDB_Cnt_OBCM_VDCM_ePT_SNAFailINC'
 * '<S675>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_Pegasus_20ms/U049C_20ms_OBCM_VDCM/U049C_OBCM_VDCM/Diagnostic Debounce OBCM_VDCM/KeCIDB_Cnt_OBCM_VDCM_ePT_SNA_FailLmt'
 * '<S676>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_Pegasus_20ms/U049C_20ms_OBCM_VDCM/U049C_OBCM_VDCM/Diagnostic Debounce OBCM_VDCM/KeCIDB_b_OBCM_VDCM_ePT_SNA_DiagEnbl'
 * '<S677>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_Pegasus_20ms/U049C_20ms_OBCM_VDCM/U049C_OBCM_VDCM/Diagnostic Debounce OBCM_VDCM/KeCIDB_b_OBCM_VDCM_ePT_SNA_FailLatchEnable'
 * '<S678>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_Pegasus_20ms/U049C_20ms_OBCM_VDCM/U049C_OBCM_VDCM/Diagnostic Debounce OBCM_VDCM/DiagnosticDebounceImplausibleSignalSNA/Diagnostic Debounce'
 * '<S679>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_Pegasus_20ms/U049C_20ms_OBCM_VDCM/U049C_OBCM_VDCM/Diagnostic Debounce OBCM_VDCM/DiagnosticDebounceImplausibleSignalSNA/EdgeFalling1'
 * '<S680>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_Pegasus_20ms/U049C_Enable/KeCIDB_b_U190F_DiagEnbl'
 * '<S681>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_Pegasus_20ms/U049C_Report/EdgeRising'
 * '<S682>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_Pegasus_20ms/U049C_Report/Enumerated_Constant'
 * '<S683>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_Pegasus_20ms/U049C_Report/Enumerated_Constant1'
 * '<S684>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_Pegasus_20ms/U049C_Report/Enumerated_Constant2'
 * '<S685>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_Pegasus_20ms/U049C_Report/Enumerated_Constant3'
 * '<S686>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_Pegasus_20ms/U049C_Report/Enumerated_Constant4'
 * '<S687>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_Pegasus_20ms/U049C_Report/Enumerated_Constant5'
 * '<S688>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_Pegasus_20ms/U049C_Report/Enumerated_Constant6'
 * '<S689>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_Pegasus_20ms/U049C_Report/Enumerated_Constant7'
 * '<S690>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_Pegasus_20ms/U049C_Report/Enumerated_Constant8'
 * '<S691>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_Pegasus_20ms/U049C_Report/Enumerated_Constant9'
 * '<S692>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_Pegasus_20ms/U049C_Report/Subsystem'
 * '<S693>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_Pegasus_20ms/U049C_Report/Subsystem1'
 * '<S694>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_Pegasus_20ms/U049C_Report/Subsystem2'
 * '<S695>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_Pegasus_20ms/U049C_Report/Subsystem/Enumerated_Constant4'
 * '<S696>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_Pegasus_20ms/U049C_Report/Subsystem1/Enumerated_Constant4'
 * '<S697>' : 'CIDB_ac/ImplausibleMgmt_20ms/U049C_Variant_Pegasus_Corebev_20ms/U049C_Pegasus_20ms/U049C_Report/Subsystem2/Enumerated_Constant4'
 * '<S698>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms'
 * '<S699>' : 'CIDB_ac/ImplausibleMgmt_250ms/U049C_Variant_Pegasus_Corebev_250ms'
 * '<S700>' : 'CIDB_ac/ImplausibleMgmt_250ms/U049C_Variant_Pegasus_Corebev_500ms'
 * '<S701>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Bluen_250ms'
 * '<S702>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Corebev_250ms'
 * '<S703>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Pegasus_250ms'
 * '<S704>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Bluen_250ms/U0422_BCM_FD_10'
 * '<S705>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Bluen_250ms/U0422_BCM_FD_9'
 * '<S706>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Bluen_250ms/U0422_BCM_FD_10/U0422_BCM_FD_10'
 * '<S707>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Bluen_250ms/U0422_BCM_FD_10/U0422_BCM_FD_10/Diagnostic Debounce BCM_FD_10'
 * '<S708>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Bluen_250ms/U0422_BCM_FD_10/U0422_BCM_FD_10/Diagnostic Fault Criteria BCM_FD_10'
 * '<S709>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Bluen_250ms/U0422_BCM_FD_10/U0422_BCM_FD_10/Diagnostic Debounce BCM_FD_10/DiagnosticDebounceImplausibleSignalSNA'
 * '<S710>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Bluen_250ms/U0422_BCM_FD_10/U0422_BCM_FD_10/Diagnostic Debounce BCM_FD_10/KeCIDB_Cnt_BCM_FD_10_ePT_SNAFailINC'
 * '<S711>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Bluen_250ms/U0422_BCM_FD_10/U0422_BCM_FD_10/Diagnostic Debounce BCM_FD_10/KeCIDB_Cnt_BCM_FD_10_ePT_SNA_FailLmt'
 * '<S712>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Bluen_250ms/U0422_BCM_FD_10/U0422_BCM_FD_10/Diagnostic Debounce BCM_FD_10/KeCIDB_b_BCM_FD_10_ePT_SNA_DiagEnbl'
 * '<S713>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Bluen_250ms/U0422_BCM_FD_10/U0422_BCM_FD_10/Diagnostic Debounce BCM_FD_10/KeCIDB_b_BCM_FD_10_ePT_SNA_FailLatchEnable'
 * '<S714>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Bluen_250ms/U0422_BCM_FD_10/U0422_BCM_FD_10/Diagnostic Debounce BCM_FD_10/DiagnosticDebounceImplausibleSignalSNA/Diagnostic Debounce'
 * '<S715>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Bluen_250ms/U0422_BCM_FD_10/U0422_BCM_FD_10/Diagnostic Debounce BCM_FD_10/DiagnosticDebounceImplausibleSignalSNA/EdgeFalling1'
 * '<S716>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Bluen_250ms/U0422_BCM_FD_9/U0422_BCM_FD_9'
 * '<S717>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Bluen_250ms/U0422_BCM_FD_9/U0422_BCM_FD_9/Diagnostic Debounce BCM_FD_9'
 * '<S718>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Bluen_250ms/U0422_BCM_FD_9/U0422_BCM_FD_9/Diagnostic Fault Criteria BCM_FD_9'
 * '<S719>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Bluen_250ms/U0422_BCM_FD_9/U0422_BCM_FD_9/Diagnostic Debounce BCM_FD_9/DiagnosticDebounceImplausibleSignalSNA'
 * '<S720>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Bluen_250ms/U0422_BCM_FD_9/U0422_BCM_FD_9/Diagnostic Debounce BCM_FD_9/KeCIDB_Cnt_BCM_FD_10_ePT_SNAFailINC'
 * '<S721>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Bluen_250ms/U0422_BCM_FD_9/U0422_BCM_FD_9/Diagnostic Debounce BCM_FD_9/KeCIDB_Cnt_BCM_FD_10_ePT_SNA_FailLmt'
 * '<S722>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Bluen_250ms/U0422_BCM_FD_9/U0422_BCM_FD_9/Diagnostic Debounce BCM_FD_9/KeCIDB_b_BCM_FD_10_ePT_SNA_DiagEnbl'
 * '<S723>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Bluen_250ms/U0422_BCM_FD_9/U0422_BCM_FD_9/Diagnostic Debounce BCM_FD_9/KeCIDB_b_BCM_FD_10_ePT_SNA_FailLatchEnable'
 * '<S724>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Bluen_250ms/U0422_BCM_FD_9/U0422_BCM_FD_9/Diagnostic Debounce BCM_FD_9/DiagnosticDebounceImplausibleSignalSNA/Diagnostic Debounce'
 * '<S725>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Bluen_250ms/U0422_BCM_FD_9/U0422_BCM_FD_9/Diagnostic Debounce BCM_FD_9/DiagnosticDebounceImplausibleSignalSNA/EdgeFalling1'
 * '<S726>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Corebev_250ms/U0422_BCM_FD_10'
 * '<S727>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Corebev_250ms/U0422_BCM_FD_9'
 * '<S728>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Corebev_250ms/U0422_BCM_FD_10/U0422_BCM_FD_10'
 * '<S729>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Corebev_250ms/U0422_BCM_FD_10/U0422_BCM_FD_10/Diagnostic Debounce BCM_FD_10'
 * '<S730>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Corebev_250ms/U0422_BCM_FD_10/U0422_BCM_FD_10/Diagnostic Fault Criteria BCM_FD_10'
 * '<S731>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Corebev_250ms/U0422_BCM_FD_10/U0422_BCM_FD_10/Diagnostic Debounce BCM_FD_10/DiagnosticDebounceImplausibleSignalSNA'
 * '<S732>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Corebev_250ms/U0422_BCM_FD_10/U0422_BCM_FD_10/Diagnostic Debounce BCM_FD_10/KeCIDB_Cnt_BCM_FD_10_ePT_SNAFailINC'
 * '<S733>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Corebev_250ms/U0422_BCM_FD_10/U0422_BCM_FD_10/Diagnostic Debounce BCM_FD_10/KeCIDB_Cnt_BCM_FD_10_ePT_SNA_FailLmt'
 * '<S734>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Corebev_250ms/U0422_BCM_FD_10/U0422_BCM_FD_10/Diagnostic Debounce BCM_FD_10/KeCIDB_b_BCM_FD_10_ePT_SNA_DiagEnbl'
 * '<S735>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Corebev_250ms/U0422_BCM_FD_10/U0422_BCM_FD_10/Diagnostic Debounce BCM_FD_10/KeCIDB_b_BCM_FD_10_ePT_SNA_FailLatchEnable'
 * '<S736>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Corebev_250ms/U0422_BCM_FD_10/U0422_BCM_FD_10/Diagnostic Debounce BCM_FD_10/DiagnosticDebounceImplausibleSignalSNA/Diagnostic Debounce'
 * '<S737>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Corebev_250ms/U0422_BCM_FD_10/U0422_BCM_FD_10/Diagnostic Debounce BCM_FD_10/DiagnosticDebounceImplausibleSignalSNA/EdgeFalling1'
 * '<S738>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Corebev_250ms/U0422_BCM_FD_9/U0422_BCM_FD_9'
 * '<S739>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Corebev_250ms/U0422_BCM_FD_9/U0422_BCM_FD_9/Diagnostic Debounce BCM_FD_9'
 * '<S740>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Corebev_250ms/U0422_BCM_FD_9/U0422_BCM_FD_9/Diagnostic Fault Criteria BCM_FD_9'
 * '<S741>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Corebev_250ms/U0422_BCM_FD_9/U0422_BCM_FD_9/Diagnostic Debounce BCM_FD_9/DiagnosticDebounceImplausibleSignalSNA'
 * '<S742>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Corebev_250ms/U0422_BCM_FD_9/U0422_BCM_FD_9/Diagnostic Debounce BCM_FD_9/KeCIDB_Cnt_BCM_FD_10_ePT_SNAFailINC'
 * '<S743>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Corebev_250ms/U0422_BCM_FD_9/U0422_BCM_FD_9/Diagnostic Debounce BCM_FD_9/KeCIDB_Cnt_BCM_FD_10_ePT_SNA_FailLmt'
 * '<S744>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Corebev_250ms/U0422_BCM_FD_9/U0422_BCM_FD_9/Diagnostic Debounce BCM_FD_9/KeCIDB_b_BCM_FD_10_ePT_SNA_DiagEnbl'
 * '<S745>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Corebev_250ms/U0422_BCM_FD_9/U0422_BCM_FD_9/Diagnostic Debounce BCM_FD_9/KeCIDB_b_BCM_FD_10_ePT_SNA_FailLatchEnable'
 * '<S746>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Corebev_250ms/U0422_BCM_FD_9/U0422_BCM_FD_9/Diagnostic Debounce BCM_FD_9/DiagnosticDebounceImplausibleSignalSNA/Diagnostic Debounce'
 * '<S747>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Corebev_250ms/U0422_BCM_FD_9/U0422_BCM_FD_9/Diagnostic Debounce BCM_FD_9/DiagnosticDebounceImplausibleSignalSNA/EdgeFalling1'
 * '<S748>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Pegasus_250ms/U0422_BCM_FD_10'
 * '<S749>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Pegasus_250ms/U0422_BCM_FD_9'
 * '<S750>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Pegasus_250ms/U0422_BCM_FD_10/U0422_BCM_FD_10'
 * '<S751>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Pegasus_250ms/U0422_BCM_FD_10/U0422_BCM_FD_10/Diagnostic Debounce BCM_FD_10'
 * '<S752>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Pegasus_250ms/U0422_BCM_FD_10/U0422_BCM_FD_10/Diagnostic Fault Criteria BCM_FD_10'
 * '<S753>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Pegasus_250ms/U0422_BCM_FD_10/U0422_BCM_FD_10/Diagnostic Debounce BCM_FD_10/DiagnosticDebounceImplausibleSignalSNA'
 * '<S754>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Pegasus_250ms/U0422_BCM_FD_10/U0422_BCM_FD_10/Diagnostic Debounce BCM_FD_10/KeCIDB_Cnt_BCM_FD_10_ePT_SNAFailINC'
 * '<S755>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Pegasus_250ms/U0422_BCM_FD_10/U0422_BCM_FD_10/Diagnostic Debounce BCM_FD_10/KeCIDB_Cnt_BCM_FD_10_ePT_SNA_FailLmt'
 * '<S756>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Pegasus_250ms/U0422_BCM_FD_10/U0422_BCM_FD_10/Diagnostic Debounce BCM_FD_10/KeCIDB_b_BCM_FD_10_ePT_SNA_DiagEnbl'
 * '<S757>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Pegasus_250ms/U0422_BCM_FD_10/U0422_BCM_FD_10/Diagnostic Debounce BCM_FD_10/KeCIDB_b_BCM_FD_10_ePT_SNA_FailLatchEnable'
 * '<S758>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Pegasus_250ms/U0422_BCM_FD_10/U0422_BCM_FD_10/Diagnostic Debounce BCM_FD_10/DiagnosticDebounceImplausibleSignalSNA/Diagnostic Debounce'
 * '<S759>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Pegasus_250ms/U0422_BCM_FD_10/U0422_BCM_FD_10/Diagnostic Debounce BCM_FD_10/DiagnosticDebounceImplausibleSignalSNA/EdgeFalling1'
 * '<S760>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Pegasus_250ms/U0422_BCM_FD_9/U0422_BCM_FD_9'
 * '<S761>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Pegasus_250ms/U0422_BCM_FD_9/U0422_BCM_FD_9/Diagnostic Debounce BCM_FD_9'
 * '<S762>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Pegasus_250ms/U0422_BCM_FD_9/U0422_BCM_FD_9/Diagnostic Fault Criteria BCM_FD_9'
 * '<S763>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Pegasus_250ms/U0422_BCM_FD_9/U0422_BCM_FD_9/Diagnostic Debounce BCM_FD_9/DiagnosticDebounceImplausibleSignalSNA'
 * '<S764>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Pegasus_250ms/U0422_BCM_FD_9/U0422_BCM_FD_9/Diagnostic Debounce BCM_FD_9/KeCIDB_Cnt_BCM_FD_10_ePT_SNAFailINC'
 * '<S765>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Pegasus_250ms/U0422_BCM_FD_9/U0422_BCM_FD_9/Diagnostic Debounce BCM_FD_9/KeCIDB_Cnt_BCM_FD_10_ePT_SNA_FailLmt'
 * '<S766>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Pegasus_250ms/U0422_BCM_FD_9/U0422_BCM_FD_9/Diagnostic Debounce BCM_FD_9/KeCIDB_b_BCM_FD_10_ePT_SNA_DiagEnbl'
 * '<S767>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Pegasus_250ms/U0422_BCM_FD_9/U0422_BCM_FD_9/Diagnostic Debounce BCM_FD_9/KeCIDB_b_BCM_FD_10_ePT_SNA_FailLatchEnable'
 * '<S768>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Pegasus_250ms/U0422_BCM_FD_9/U0422_BCM_FD_9/Diagnostic Debounce BCM_FD_9/DiagnosticDebounceImplausibleSignalSNA/Diagnostic Debounce'
 * '<S769>' : 'CIDB_ac/ImplausibleMgmt_250ms/U0422_Variant_Pegasus_Corebev_Bluen_250_500ms/U0422_Pegasus_250ms/U0422_BCM_FD_9/U0422_BCM_FD_9/Diagnostic Debounce BCM_FD_9/DiagnosticDebounceImplausibleSignalSNA/EdgeFalling1'
 * '<S770>' : 'CIDB_ac/ImplausibleMgmt_250ms/U049C_Variant_Pegasus_Corebev_250ms/U049C_Corebev_250ms'
 * '<S771>' : 'CIDB_ac/ImplausibleMgmt_250ms/U049C_Variant_Pegasus_Corebev_250ms/U049C_Pegasus_250ms'
 * '<S772>' : 'CIDB_ac/ImplausibleMgmt_250ms/U049C_Variant_Pegasus_Corebev_250ms/U049C_Corebev_250ms/U049C DUALCHARGER_THERMAL'
 * '<S773>' : 'CIDB_ac/ImplausibleMgmt_250ms/U049C_Variant_Pegasus_Corebev_250ms/U049C_Corebev_250ms/U049C DUALCHARGER_THERMAL/Diagnostic Debounce DUALCHARGER_THERMAL'
 * '<S774>' : 'CIDB_ac/ImplausibleMgmt_250ms/U049C_Variant_Pegasus_Corebev_250ms/U049C_Corebev_250ms/U049C DUALCHARGER_THERMAL/Diagnostic Fault Criteria DUALCHARGER_THERMAL'
 * '<S775>' : 'CIDB_ac/ImplausibleMgmt_250ms/U049C_Variant_Pegasus_Corebev_250ms/U049C_Corebev_250ms/U049C DUALCHARGER_THERMAL/Diagnostic Debounce DUALCHARGER_THERMAL/DiagnosticDebounceImplausibleSignalSNA'
 * '<S776>' : 'CIDB_ac/ImplausibleMgmt_250ms/U049C_Variant_Pegasus_Corebev_250ms/U049C_Corebev_250ms/U049C DUALCHARGER_THERMAL/Diagnostic Debounce DUALCHARGER_THERMAL/KeCIDB_Cnt_DUALCHARGER_THERMAL_ePT_SNAFailINC'
 * '<S777>' : 'CIDB_ac/ImplausibleMgmt_250ms/U049C_Variant_Pegasus_Corebev_250ms/U049C_Corebev_250ms/U049C DUALCHARGER_THERMAL/Diagnostic Debounce DUALCHARGER_THERMAL/KeCIDB_Cnt_DUALCHARGER_THERMAL_ePT_SNA_FailLmt'
 * '<S778>' : 'CIDB_ac/ImplausibleMgmt_250ms/U049C_Variant_Pegasus_Corebev_250ms/U049C_Corebev_250ms/U049C DUALCHARGER_THERMAL/Diagnostic Debounce DUALCHARGER_THERMAL/KeCIDB_b_DUALCHARGER_THERMAL_ePT_SNA_DiagEnbl'
 * '<S779>' : 'CIDB_ac/ImplausibleMgmt_250ms/U049C_Variant_Pegasus_Corebev_250ms/U049C_Corebev_250ms/U049C DUALCHARGER_THERMAL/Diagnostic Debounce DUALCHARGER_THERMAL/KeCIDB_b_DUALCHARGER_THERMAL_ePT_SNA_FailLatchEnable'
 * '<S780>' : 'CIDB_ac/ImplausibleMgmt_250ms/U049C_Variant_Pegasus_Corebev_250ms/U049C_Corebev_250ms/U049C DUALCHARGER_THERMAL/Diagnostic Debounce DUALCHARGER_THERMAL/DiagnosticDebounceImplausibleSignalSNA/Diagnostic Debounce'
 * '<S781>' : 'CIDB_ac/ImplausibleMgmt_250ms/U049C_Variant_Pegasus_Corebev_250ms/U049C_Corebev_250ms/U049C DUALCHARGER_THERMAL/Diagnostic Debounce DUALCHARGER_THERMAL/DiagnosticDebounceImplausibleSignalSNA/EdgeFalling1'
 * '<S782>' : 'CIDB_ac/ImplausibleMgmt_250ms/U049C_Variant_Pegasus_Corebev_250ms/U049C_Pegasus_250ms/U049C DUALCHARGER_THERMAL'
 * '<S783>' : 'CIDB_ac/ImplausibleMgmt_250ms/U049C_Variant_Pegasus_Corebev_250ms/U049C_Pegasus_250ms/U049C DUALCHARGER_THERMAL/Diagnostic Debounce DUALCHARGER_THERMAL'
 * '<S784>' : 'CIDB_ac/ImplausibleMgmt_250ms/U049C_Variant_Pegasus_Corebev_250ms/U049C_Pegasus_250ms/U049C DUALCHARGER_THERMAL/Diagnostic Fault Criteria DUALCHARGER_THERMAL'
 * '<S785>' : 'CIDB_ac/ImplausibleMgmt_250ms/U049C_Variant_Pegasus_Corebev_250ms/U049C_Pegasus_250ms/U049C DUALCHARGER_THERMAL/Diagnostic Debounce DUALCHARGER_THERMAL/DiagnosticDebounceImplausibleSignalSNA'
 * '<S786>' : 'CIDB_ac/ImplausibleMgmt_250ms/U049C_Variant_Pegasus_Corebev_250ms/U049C_Pegasus_250ms/U049C DUALCHARGER_THERMAL/Diagnostic Debounce DUALCHARGER_THERMAL/KeCIDB_Cnt_DUALCHARGER_THERMAL_ePT_SNAFailINC'
 * '<S787>' : 'CIDB_ac/ImplausibleMgmt_250ms/U049C_Variant_Pegasus_Corebev_250ms/U049C_Pegasus_250ms/U049C DUALCHARGER_THERMAL/Diagnostic Debounce DUALCHARGER_THERMAL/KeCIDB_Cnt_DUALCHARGER_THERMAL_ePT_SNA_FailLmt'
 * '<S788>' : 'CIDB_ac/ImplausibleMgmt_250ms/U049C_Variant_Pegasus_Corebev_250ms/U049C_Pegasus_250ms/U049C DUALCHARGER_THERMAL/Diagnostic Debounce DUALCHARGER_THERMAL/KeCIDB_b_DUALCHARGER_THERMAL_ePT_SNA_DiagEnbl'
 * '<S789>' : 'CIDB_ac/ImplausibleMgmt_250ms/U049C_Variant_Pegasus_Corebev_250ms/U049C_Pegasus_250ms/U049C DUALCHARGER_THERMAL/Diagnostic Debounce DUALCHARGER_THERMAL/KeCIDB_b_DUALCHARGER_THERMAL_ePT_SNA_FailLatchEnable'
 * '<S790>' : 'CIDB_ac/ImplausibleMgmt_250ms/U049C_Variant_Pegasus_Corebev_250ms/U049C_Pegasus_250ms/U049C DUALCHARGER_THERMAL/Diagnostic Debounce DUALCHARGER_THERMAL/DiagnosticDebounceImplausibleSignalSNA/Diagnostic Debounce'
 * '<S791>' : 'CIDB_ac/ImplausibleMgmt_250ms/U049C_Variant_Pegasus_Corebev_250ms/U049C_Pegasus_250ms/U049C DUALCHARGER_THERMAL/Diagnostic Debounce DUALCHARGER_THERMAL/DiagnosticDebounceImplausibleSignalSNA/EdgeFalling1'
 * '<S792>' : 'CIDB_ac/ImplausibleMgmt_250ms/U049C_Variant_Pegasus_Corebev_500ms/U049C_Variant_Corebev_500ms'
 * '<S793>' : 'CIDB_ac/ImplausibleMgmt_250ms/U049C_Variant_Pegasus_Corebev_500ms/U049C_Variant_Pegasus_500ms'
 * '<S794>' : 'CIDB_ac/ImplausibleMgmt_250ms/U049C_Variant_Pegasus_Corebev_500ms/U049C_Variant_Corebev_500ms/HV_CHARGER_2'
 * '<S795>' : 'CIDB_ac/ImplausibleMgmt_250ms/U049C_Variant_Pegasus_Corebev_500ms/U049C_Variant_Corebev_500ms/HV_CHARGER_2/U049C HV_CHARGER2'
 * '<S796>' : 'CIDB_ac/ImplausibleMgmt_250ms/U049C_Variant_Pegasus_Corebev_500ms/U049C_Variant_Corebev_500ms/HV_CHARGER_2/U049C HV_CHARGER2/Diagnostic Debounce HV_CHARGER2'
 * '<S797>' : 'CIDB_ac/ImplausibleMgmt_250ms/U049C_Variant_Pegasus_Corebev_500ms/U049C_Variant_Corebev_500ms/HV_CHARGER_2/U049C HV_CHARGER2/Diagnostic Fault Criteria HV_CHARGER2'
 * '<S798>' : 'CIDB_ac/ImplausibleMgmt_250ms/U049C_Variant_Pegasus_Corebev_500ms/U049C_Variant_Corebev_500ms/HV_CHARGER_2/U049C HV_CHARGER2/Diagnostic Debounce HV_CHARGER2/DiagnosticDebounceImplausibleSignalSNA'
 * '<S799>' : 'CIDB_ac/ImplausibleMgmt_250ms/U049C_Variant_Pegasus_Corebev_500ms/U049C_Variant_Corebev_500ms/HV_CHARGER_2/U049C HV_CHARGER2/Diagnostic Debounce HV_CHARGER2/KeCIDB_Cnt_HV_CHARGER2_ePT_SNAFailINC'
 * '<S800>' : 'CIDB_ac/ImplausibleMgmt_250ms/U049C_Variant_Pegasus_Corebev_500ms/U049C_Variant_Corebev_500ms/HV_CHARGER_2/U049C HV_CHARGER2/Diagnostic Debounce HV_CHARGER2/KeCIDB_Cnt_HV_CHARGER2_ePT_SNA_FailLmt'
 * '<S801>' : 'CIDB_ac/ImplausibleMgmt_250ms/U049C_Variant_Pegasus_Corebev_500ms/U049C_Variant_Corebev_500ms/HV_CHARGER_2/U049C HV_CHARGER2/Diagnostic Debounce HV_CHARGER2/KeCIDB_b_HV_CHARGER2_ePT_SNA_DiagEnbl'
 * '<S802>' : 'CIDB_ac/ImplausibleMgmt_250ms/U049C_Variant_Pegasus_Corebev_500ms/U049C_Variant_Corebev_500ms/HV_CHARGER_2/U049C HV_CHARGER2/Diagnostic Debounce HV_CHARGER2/KeCIDB_b_HV_CHARGER2_ePT_SNA_DiagEnbl1'
 * '<S803>' : 'CIDB_ac/ImplausibleMgmt_250ms/U049C_Variant_Pegasus_Corebev_500ms/U049C_Variant_Corebev_500ms/HV_CHARGER_2/U049C HV_CHARGER2/Diagnostic Debounce HV_CHARGER2/DiagnosticDebounceImplausibleSignalSNA/Diagnostic Debounce'
 * '<S804>' : 'CIDB_ac/ImplausibleMgmt_250ms/U049C_Variant_Pegasus_Corebev_500ms/U049C_Variant_Corebev_500ms/HV_CHARGER_2/U049C HV_CHARGER2/Diagnostic Debounce HV_CHARGER2/DiagnosticDebounceImplausibleSignalSNA/EdgeFalling1'
 * '<S805>' : 'CIDB_ac/ImplausibleMgmt_250ms/U049C_Variant_Pegasus_Corebev_500ms/U049C_Variant_Pegasus_500ms/HV_CHARGER_2'
 * '<S806>' : 'CIDB_ac/ImplausibleMgmt_250ms/U049C_Variant_Pegasus_Corebev_500ms/U049C_Variant_Pegasus_500ms/HV_CHARGER_2/U049C HV_CHARGER2'
 * '<S807>' : 'CIDB_ac/ImplausibleMgmt_250ms/U049C_Variant_Pegasus_Corebev_500ms/U049C_Variant_Pegasus_500ms/HV_CHARGER_2/U049C HV_CHARGER2/Diagnostic Debounce HV_CHARGER2'
 * '<S808>' : 'CIDB_ac/ImplausibleMgmt_250ms/U049C_Variant_Pegasus_Corebev_500ms/U049C_Variant_Pegasus_500ms/HV_CHARGER_2/U049C HV_CHARGER2/Diagnostic Fault Criteria HV_CHARGER2'
 * '<S809>' : 'CIDB_ac/ImplausibleMgmt_250ms/U049C_Variant_Pegasus_Corebev_500ms/U049C_Variant_Pegasus_500ms/HV_CHARGER_2/U049C HV_CHARGER2/Diagnostic Debounce HV_CHARGER2/DiagnosticDebounceImplausibleSignalSNA'
 * '<S810>' : 'CIDB_ac/ImplausibleMgmt_250ms/U049C_Variant_Pegasus_Corebev_500ms/U049C_Variant_Pegasus_500ms/HV_CHARGER_2/U049C HV_CHARGER2/Diagnostic Debounce HV_CHARGER2/KeCIDB_Cnt_HV_CHARGER2_ePT_SNAFailINC'
 * '<S811>' : 'CIDB_ac/ImplausibleMgmt_250ms/U049C_Variant_Pegasus_Corebev_500ms/U049C_Variant_Pegasus_500ms/HV_CHARGER_2/U049C HV_CHARGER2/Diagnostic Debounce HV_CHARGER2/KeCIDB_Cnt_HV_CHARGER2_ePT_SNA_FailLmt'
 * '<S812>' : 'CIDB_ac/ImplausibleMgmt_250ms/U049C_Variant_Pegasus_Corebev_500ms/U049C_Variant_Pegasus_500ms/HV_CHARGER_2/U049C HV_CHARGER2/Diagnostic Debounce HV_CHARGER2/KeCIDB_b_HV_CHARGER2_ePT_SNA_DiagEnbl'
 * '<S813>' : 'CIDB_ac/ImplausibleMgmt_250ms/U049C_Variant_Pegasus_Corebev_500ms/U049C_Variant_Pegasus_500ms/HV_CHARGER_2/U049C HV_CHARGER2/Diagnostic Debounce HV_CHARGER2/KeCIDB_b_HV_CHARGER2_ePT_SNA_DiagEnbl1'
 * '<S814>' : 'CIDB_ac/ImplausibleMgmt_250ms/U049C_Variant_Pegasus_Corebev_500ms/U049C_Variant_Pegasus_500ms/HV_CHARGER_2/U049C HV_CHARGER2/Diagnostic Debounce HV_CHARGER2/DiagnosticDebounceImplausibleSignalSNA/Diagnostic Debounce'
 * '<S815>' : 'CIDB_ac/ImplausibleMgmt_250ms/U049C_Variant_Pegasus_Corebev_500ms/U049C_Variant_Pegasus_500ms/HV_CHARGER_2/U049C HV_CHARGER2/Diagnostic Debounce HV_CHARGER2/DiagnosticDebounceImplausibleSignalSNA/EdgeFalling1'
 * '<S816>' : 'CIDB_ac/Initialize Function/Subsystem1'
 * '<S817>' : 'CIDB_ac/Initialize Function/Subsystem3'
 * '<S818>' : 'CIDB_ac/Initialize Function/U0404_Init'
 * '<S819>' : 'CIDB_ac/Initialize Function/U0415_Init'
 * '<S820>' : 'CIDB_ac/Initialize Function/U044A_Init'
 * '<S821>' : 'CIDB_ac/Initialize Function/U048D_Init'
 * '<S822>' : 'CIDB_ac/Initialize Function/U049C_Init'
 * '<S823>' : 'CIDB_ac/Initialize Function/U149A_Init'
 * '<S824>' : 'CIDB_ac/Initialize Function/Subsystem1/U0412_BLUEN_Init'
 * '<S825>' : 'CIDB_ac/Initialize Function/Subsystem1/U0412_Corebev_Init'
 * '<S826>' : 'CIDB_ac/Initialize Function/Subsystem1/U0412_Pegasus_Init'
 * '<S827>' : 'CIDB_ac/Initialize Function/Subsystem1/U0412_BLUEN_Init/Enumerated_Constant4'
 * '<S828>' : 'CIDB_ac/Initialize Function/Subsystem1/U0412_Corebev_Init/Enumerated_Constant4'
 * '<S829>' : 'CIDB_ac/Initialize Function/Subsystem1/U0412_Pegasus_Init/Enumerated_Constant4'
 * '<S830>' : 'CIDB_ac/Initialize Function/Subsystem3/U0422_BLUEN_Init'
 * '<S831>' : 'CIDB_ac/Initialize Function/Subsystem3/U0422_Corebev_Init'
 * '<S832>' : 'CIDB_ac/Initialize Function/Subsystem3/U0422_Pegasus_Init'
 * '<S833>' : 'CIDB_ac/Initialize Function/Subsystem3/U0422_BLUEN_Init/Enumerated_Constant2'
 * '<S834>' : 'CIDB_ac/Initialize Function/Subsystem3/U0422_Corebev_Init/Enumerated_Constant2'
 * '<S835>' : 'CIDB_ac/Initialize Function/Subsystem3/U0422_Pegasus_Init/Enumerated_Constant2'
 * '<S836>' : 'CIDB_ac/Initialize Function/U0404_Init/U0404_BLUEN_Init'
 * '<S837>' : 'CIDB_ac/Initialize Function/U0404_Init/U0404_Corebev_Init'
 * '<S838>' : 'CIDB_ac/Initialize Function/U0404_Init/U0404_Pegasus_Init'
 * '<S839>' : 'CIDB_ac/Initialize Function/U0404_Init/U0404_BLUEN_Init/Enumerated_Constant7'
 * '<S840>' : 'CIDB_ac/Initialize Function/U0404_Init/U0404_Corebev_Init/Enumerated_Constant7'
 * '<S841>' : 'CIDB_ac/Initialize Function/U0404_Init/U0404_Pegasus_Init/Enumerated_Constant7'
 * '<S842>' : 'CIDB_ac/Initialize Function/U0415_Init/U0415_Bluen_Init'
 * '<S843>' : 'CIDB_ac/Initialize Function/U0415_Init/U0415_Corebev_Init'
 * '<S844>' : 'CIDB_ac/Initialize Function/U0415_Init/U0415_Pegasus_Init'
 * '<S845>' : 'CIDB_ac/Initialize Function/U0415_Init/U0415_Bluen_Init/Enumerated_Constant1'
 * '<S846>' : 'CIDB_ac/Initialize Function/U0415_Init/U0415_Corebev_Init/Enumerated_Constant1'
 * '<S847>' : 'CIDB_ac/Initialize Function/U0415_Init/U0415_Pegasus_Init/Enumerated_Constant1'
 * '<S848>' : 'CIDB_ac/Initialize Function/U044A_Init/U044A_BLUEN_Init'
 * '<S849>' : 'CIDB_ac/Initialize Function/U044A_Init/U044A_Init'
 * '<S850>' : 'CIDB_ac/Initialize Function/U044A_Init/U044A_BLUEN_Init/Enumerated_Constant7'
 * '<S851>' : 'CIDB_ac/Initialize Function/U044A_Init/U044A_Init/Enumerated_Constant7'
 * '<S852>' : 'CIDB_ac/Initialize Function/U048D_Init/U048D_Bluen_Init'
 * '<S853>' : 'CIDB_ac/Initialize Function/U048D_Init/U048D_Bluen_Init/Enumerated_Constant7'
 * '<S854>' : 'CIDB_ac/Initialize Function/U049C_Init/U049C_Corebev_Init'
 * '<S855>' : 'CIDB_ac/Initialize Function/U049C_Init/U049C_Pegasus_Init'
 * '<S856>' : 'CIDB_ac/Initialize Function/U049C_Init/U049C_Corebev_Init/Enumerated_Constant7'
 * '<S857>' : 'CIDB_ac/Initialize Function/U049C_Init/U049C_Pegasus_Init/Enumerated_Constant7'
 * '<S858>' : 'CIDB_ac/Initialize Function/U149A_Init/U149A_Corebev_Init'
 * '<S859>' : 'CIDB_ac/Initialize Function/U149A_Init/U149A_Pegasus_Init'
 * '<S860>' : 'CIDB_ac/Initialize Function/U149A_Init/U149A_Corebev_Init/Enumerated_Constant7'
 * '<S861>' : 'CIDB_ac/Initialize Function/U149A_Init/U149A_Pegasus_Init/Enumerated_Constant7'
 */
#endif                                 /* RTW_HEADER_CIDB_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
