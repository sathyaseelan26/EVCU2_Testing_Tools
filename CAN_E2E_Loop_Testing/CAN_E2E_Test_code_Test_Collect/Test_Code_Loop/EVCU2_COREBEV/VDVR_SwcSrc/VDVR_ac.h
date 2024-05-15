/*
 * File: VDVR_ac.h
 *
 * Code generated for Simulink model 'VDVR_ac'.
 *
 * Model version                  : 9.1186
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 19:57:52 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_VDVR_ac_h_
#define RTW_HEADER_VDVR_ac_h_
#include <math.h>
#include "Rte_Type.h"
#ifndef VDVR_ac_COMMON_INCLUDES_
#define VDVR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_VDVR.h"
#endif                                 /* VDVR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals for system '<S64>/ClosedInterval1' */
typedef struct
{
    boolean LogicalOperator;           /* '<S68>/LogicalOperator' */
}
B_ClosedInterval1_VDVR_ac_T;

/* Block signals (default storage) */
typedef struct tag_B_VDVR_ac_T
{

#if Rte_SysCon_Variant_VDVR_1

    float32 TmpSignalConversionAtVeHMIR_Pct_HVBatSOC;

#define B_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    float32 TmpSignalConversionAtVeCITR_Pct_V2VRsrvB;

#define B_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    float32 VeVDVR_t_StateTimerCP;     /* '<S155>/ChrgPortLock_V2V' */

#define B_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    float32 Switch1;                   /* '<S113>/Switch1' */

#define B_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    float32 Switch1_l;                 /* '<S114>/Switch1' */

#define B_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    float32 Switch1_lj;                /* '<S83>/Switch1' */

#define B_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    float32 Switch1_g;                 /* '<S84>/Switch1' */

#define B_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    boolean TmpSignalConversionAtVeCITR_b_V2VReqOutp;

#define B_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    boolean TmpSignalConversionAtVeCITR_b_ChrgPortLo;

#define B_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    boolean FlagStpDisch;              /* '<S155>/ChrgPortLock_V2V' */

#define B_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    TeVDVR_e_VtoVStatus VeVDVR_e_VtoVStatus;/* '<S153>/Discharging_SF' */

#define B_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    TeVDVR_e_Secure_Conn_VtoX Switch1_k;/* '<S112>/Switch1' */

#define B_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    TeVDVR_e_Secure_Conn_VtoX Switch1_a;/* '<S82>/Switch1' */

#define B_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    B_ClosedInterval1_VDVR_ac_T ClosedInterval5;/* '<S66>/ClosedInterval5' */

#define B_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    B_ClosedInterval1_VDVR_ac_T ClosedInterval4;/* '<S66>/ClosedInterval4' */

#define B_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    B_ClosedInterval1_VDVR_ac_T ClosedInterval3;/* '<S66>/ClosedInterval3' */

#define B_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    B_ClosedInterval1_VDVR_ac_T ClosedInterval2;/* '<S66>/ClosedInterval2' */

#define B_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    B_ClosedInterval1_VDVR_ac_T ClosedInterval1;/* '<S66>/ClosedInterval1' */

#define B_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    B_ClosedInterval1_VDVR_ac_T ClosedInterval2_p;/* '<S65>/ClosedInterval2' */

#define B_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    B_ClosedInterval1_VDVR_ac_T ClosedInterval1_n;/* '<S65>/ClosedInterval1' */

#define B_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    B_ClosedInterval1_VDVR_ac_T ClosedInterval2_b;/* '<S64>/ClosedInterval2' */

#define B_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    B_ClosedInterval1_VDVR_ac_T ClosedInterval3_o;/* '<S64>/ClosedInterval3' */

#define B_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    B_ClosedInterval1_VDVR_ac_T ClosedInterval1_l;/* '<S64>/ClosedInterval1' */

#define B_VDVR_AC_T_VARIANT_EXISTS
#endif

#ifndef B_VDVR_AC_T_VARIANT_EXISTS

    char _rt_unused;

#endif

}
B_VDVR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_VDVR_ac_T
{

#if Rte_SysCon_Variant_VDVR_1

    float32 UnitDelay_DSTATE;          /* '<S179>/Unit Delay' */

#define DW_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    uint32 UnitDelay1_DSTATE;          /* '<S153>/Unit Delay1' */

#define DW_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    float32 VeVDVR_t_DschrgStTmr;      /* '<S153>/Discharging_SF' */

#define DW_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    uint32 EeVDVR_g_ChrgNowMaxTimetoPlugin;/* '<S52>/DataStoreMemory' */

#define DW_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    uint16 UnitDelay_DSTATE_a;         /* '<S227>/UnitDelay' */

#define DW_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    uint16 UnitDelay_DSTATE_c;         /* '<S226>/UnitDelay' */

#define DW_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    uint16 UnitDelay_DSTATE_n;         /* '<S209>/Unit Delay' */

#define DW_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    uint16 UnitDelay_DSTATE_f;         /* '<S208>/Unit Delay' */

#define DW_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    uint16 UnitDelay_DSTATE_d;         /* '<S193>/Unit Delay' */

#define DW_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    uint16 UnitDelay_DSTATE_m;         /* '<S126>/UnitDelay' */

#define DW_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    uint16 UnitDelay_DSTATE_oy;        /* '<S99>/UnitDelay' */

#define DW_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    uint16 UnitDelay_DSTATE_h;         /* '<S56>/UnitDelay' */

#define DW_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    uint16 UnitDelay_DSTATE_cd;        /* '<S55>/UnitDelay' */

#define DW_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    uint16 UnitDelay_DSTATE_e;         /* '<S54>/UnitDelay' */

#define DW_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    uint16 UnitDelay_DSTATE_a3;        /* '<S59>/UnitDelay' */

#define DW_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    boolean UnitDelay_DSTATE_fr;       /* '<S155>/UnitDelay' */

#define DW_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    boolean UnitDelay_DSTATE_h5;       /* '<S229>/UnitDelay' */

#define DW_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    boolean UnitDelay_DSTATE_hg;       /* '<S228>/UnitDelay' */

#define DW_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    boolean UnitDelay_DSTATE_cw;       /* '<S217>/UnitDelay' */

#define DW_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    boolean UnitDelay_DSTATE_fd;       /* '<S216>/UnitDelay' */

#define DW_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    boolean UnitDelay_DSTATE_ex;       /* '<S215>/UnitDelay' */

#define DW_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    boolean UnitDelay_DSTATE_dy;       /* '<S214>/UnitDelay' */

#define DW_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    boolean UnitDelay_DSTATE_ce;       /* '<S213>/UnitDelay' */

#define DW_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    boolean UnitDelay_DSTATE_pq;       /* '<S211>/Unit Delay' */

#define DW_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    boolean UnitDelay_DSTATE_j;        /* '<S210>/Unit Delay' */

#define DW_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    boolean UnitDelay_DSTATE_el;       /* '<S170>/UnitDelay' */

#define DW_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    boolean UnitDelay_DSTATE_g;        /* '<S127>/UnitDelay' */

#define DW_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    boolean UnitDelay_DSTATE_ac;       /* '<S100>/UnitDelay' */

#define DW_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    boolean UnitDelay_DSTATE_du;       /* '<S63>/UnitDelay' */

#define DW_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    boolean UnitDelay_DSTATE_i;        /* '<S62>/UnitDelay' */

#define DW_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    boolean UnitDelay_DSTATE_cm;       /* '<S61>/UnitDelay' */

#define DW_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    boolean UnitDelay1_DSTATE_n;       /* '<S59>/UnitDelay1' */

#define DW_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    boolean UnitDelay_DSTATE_frd;      /* '<S60>/UnitDelay' */

#define DW_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    boolean UnitDelay_DSTATE_l;        /* '<S43>/Unit Delay' */

#define DW_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    boolean UnitDelay_DSTATE_lp;       /* '<S42>/UnitDelay' */

#define DW_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    TeOBCR_e_ChrgPort_Req UnitDelay1_DSTATE_e;/* '<S155>/UnitDelay1' */

#define DW_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    TePMDR_e_PowerMode UnitDelay_DSTATE_om;/* '<S154>/UnitDelay' */

#define DW_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    uint8 is_active_c3_VDVR_ac;        /* '<S153>/Discharging_SF' */

#define DW_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    uint8 is_c3_VDVR_ac;               /* '<S153>/Discharging_SF' */

#define DW_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    uint8 is_active_c1_VDVR_ac;        /* '<S155>/ChrgPortLock_V2V' */

#define DW_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    uint8 is_c1_VDVR_ac;               /* '<S155>/ChrgPortLock_V2V' */

#define DW_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    boolean Flag;                      /* '<S155>/ChrgPortLock_V2V' */

#define DW_VDVR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_VDVR_1

    boolean Flag1;                     /* '<S155>/ChrgPortLock_V2V' */

#define DW_VDVR_AC_T_VARIANT_EXISTS
#endif

#ifndef DW_VDVR_AC_T_VARIANT_EXISTS

    char _rt_unused;

#endif

}
DW_VDVR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_VDVR
#include "MemMap.h"

extern VAR(B_VDVR_ac_T, VDVR_VAR_INIT) VDVR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_VDVR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_VDVR
#include "MemMap.h"

extern VAR(DW_VDVR_ac_T, VDVR_VAR_INIT) VDVR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_VDVR
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
 * '<Root>' : 'VDVR_ac'
 * '<S1>'   : 'VDVR_ac/VDVR_MedTED'
 * '<S2>'   : 'VDVR_ac/VDVR_PwrOff'
 * '<S3>'   : 'VDVR_ac/VDVR_PwrOn'
 * '<S4>'   : 'VDVR_ac/VDVR_MedTED/VDVC'
 * '<S5>'   : 'VDVR_ac/VDVR_MedTED/VDVI'
 * '<S6>'   : 'VDVR_ac/VDVR_MedTED/VDVC/EnumSetBlock'
 * '<S7>'   : 'VDVR_ac/VDVR_MedTED/VDVC/KeVDVR_b_V2VEnable_Ovrd'
 * '<S8>'   : 'VDVR_ac/VDVR_MedTED/VDVC/SetBlock'
 * '<S9>'   : 'VDVR_ac/VDVR_MedTED/VDVC/SetBlock1'
 * '<S10>'  : 'VDVR_ac/VDVR_MedTED/VDVC/Subsystem'
 * '<S11>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC'
 * '<S12>'  : 'VDVR_ac/VDVR_MedTED/VDVC/Subsystem/EnumSetBlock'
 * '<S13>'  : 'VDVR_ac/VDVR_MedTED/VDVC/Subsystem/EnumSetBlock1'
 * '<S14>'  : 'VDVR_ac/VDVR_MedTED/VDVC/Subsystem/EnumSetBlock2'
 * '<S15>'  : 'VDVR_ac/VDVR_MedTED/VDVC/Subsystem/EnumSetBlock3'
 * '<S16>'  : 'VDVR_ac/VDVR_MedTED/VDVC/Subsystem/EnumeratedValue1'
 * '<S17>'  : 'VDVR_ac/VDVR_MedTED/VDVC/Subsystem/Enumerated_Constant'
 * '<S18>'  : 'VDVR_ac/VDVR_MedTED/VDVC/Subsystem/Enumerated_Constant1'
 * '<S19>'  : 'VDVR_ac/VDVR_MedTED/VDVC/Subsystem/Enumerated_Constant6'
 * '<S20>'  : 'VDVR_ac/VDVR_MedTED/VDVC/Subsystem/SetBlock1'
 * '<S21>'  : 'VDVR_ac/VDVR_MedTED/VDVC/Subsystem/SetBlock10'
 * '<S22>'  : 'VDVR_ac/VDVR_MedTED/VDVC/Subsystem/SetBlock11'
 * '<S23>'  : 'VDVR_ac/VDVR_MedTED/VDVC/Subsystem/SetBlock12'
 * '<S24>'  : 'VDVR_ac/VDVR_MedTED/VDVC/Subsystem/SetBlock13'
 * '<S25>'  : 'VDVR_ac/VDVR_MedTED/VDVC/Subsystem/SetBlock14'
 * '<S26>'  : 'VDVR_ac/VDVR_MedTED/VDVC/Subsystem/SetBlock15'
 * '<S27>'  : 'VDVR_ac/VDVR_MedTED/VDVC/Subsystem/SetBlock2'
 * '<S28>'  : 'VDVR_ac/VDVR_MedTED/VDVC/Subsystem/SetBlock3'
 * '<S29>'  : 'VDVR_ac/VDVR_MedTED/VDVC/Subsystem/SetBlock4'
 * '<S30>'  : 'VDVR_ac/VDVR_MedTED/VDVC/Subsystem/SetBlock5'
 * '<S31>'  : 'VDVR_ac/VDVR_MedTED/VDVC/Subsystem/SetBlock6'
 * '<S32>'  : 'VDVR_ac/VDVR_MedTED/VDVC/Subsystem/SetBlock7'
 * '<S33>'  : 'VDVR_ac/VDVR_MedTED/VDVC/Subsystem/SetBlock8'
 * '<S34>'  : 'VDVR_ac/VDVR_MedTED/VDVC/Subsystem/SetBlock9'
 * '<S35>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Authentication'
 * '<S36>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing'
 * '<S37>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging'
 * '<S38>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Enable_Discharging'
 * '<S39>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/EnumSetBlock'
 * '<S40>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/SetBlock'
 * '<S41>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/SetBlock1'
 * '<S42>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Authentication/EdgeRising'
 * '<S43>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Authentication/EdgeRising1'
 * '<S44>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Authentication/Enumerated_Constant'
 * '<S45>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Authentication/Enumerated_Constant2'
 * '<S46>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Authentication/Enumerated_Constant6'
 * '<S47>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Authentication/KeVDVR_Cnt_ProxOutDbnc'
 * '<S48>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Authentication/KeVDVR_Cnt_SampleDelayRTC'
 * '<S49>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Authentication/KeVDVR_Cnt_V2V_Auth_Dbnc'
 * '<S50>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Authentication/KeVDVR_Cnt_WUDelay_RTC'
 * '<S51>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Authentication/KeVDVR_t_OneHourAuth'
 * '<S52>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Authentication/RTC_V2V_Auth'
 * '<S53>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Authentication/SetBlock'
 * '<S54>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Authentication/TurnOnDelaySample'
 * '<S55>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Authentication/TurnOnDelaySample1'
 * '<S56>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Authentication/TurnOnDelaySample2'
 * '<S57>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Authentication/clear_auth'
 * '<S58>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Authentication/set_auth'
 * '<S59>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Authentication/RTC_V2V_Auth/TurnOnDelaySample1'
 * '<S60>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Authentication/RTC_V2V_Auth/TurnOnDelaySample1/SignalLatchOnWithReset'
 * '<S61>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Authentication/TurnOnDelaySample/EdgeRising'
 * '<S62>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Authentication/TurnOnDelaySample1/EdgeRising'
 * '<S63>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Authentication/TurnOnDelaySample2/EdgeRising'
 * '<S64>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/HWBasedControl'
 * '<S65>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SWBasedControl'
 * '<S66>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SW_HW_Detection'
 * '<S67>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SW_HW_Output'
 * '<S68>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/HWBasedControl/ClosedInterval1'
 * '<S69>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/HWBasedControl/ClosedInterval2'
 * '<S70>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/HWBasedControl/ClosedInterval3'
 * '<S71>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/HWBasedControl/EnumeratedValue1'
 * '<S72>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/HWBasedControl/EnumeratedValue10'
 * '<S73>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/HWBasedControl/EnumeratedValue11'
 * '<S74>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/HWBasedControl/EnumeratedValue12'
 * '<S75>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/HWBasedControl/EnumeratedValue2'
 * '<S76>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/HWBasedControl/EnumeratedValue3'
 * '<S77>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/HWBasedControl/EnumeratedValue4'
 * '<S78>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/HWBasedControl/EnumeratedValue5'
 * '<S79>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/HWBasedControl/EnumeratedValue6'
 * '<S80>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/HWBasedControl/EnumeratedValue7'
 * '<S81>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/HWBasedControl/EnumeratedValue9'
 * '<S82>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/HWBasedControl/IfThenElseif'
 * '<S83>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/HWBasedControl/IfThenElseif1'
 * '<S84>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/HWBasedControl/IfThenElseifElse2'
 * '<S85>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/HWBasedControl/KeVDVR_Cnt_ProxIn_Dbnc'
 * '<S86>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/HWBasedControl/KeVDVR_I_ACOutCurrDflt'
 * '<S87>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/HWBasedControl/KeVDVR_I_V2LDualOut_MaxAllwdACOutCurr'
 * '<S88>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/HWBasedControl/KeVDVR_I_V2LSgl_MaxAllwdACOutCurr'
 * '<S89>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/HWBasedControl/KeVDVR_I_V2V_MaxAllwdACOutCurr'
 * '<S90>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/HWBasedControl/KeVDVR_U_ACOutVoltDflt'
 * '<S91>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/HWBasedControl/KeVDVR_U_V2LDualOutlt_ProxVoltMax'
 * '<S92>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/HWBasedControl/KeVDVR_U_V2LDualOutlt_ProxVoltMin'
 * '<S93>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/HWBasedControl/KeVDVR_U_V2LSnglOutlt_ProxVoltMax'
 * '<S94>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/HWBasedControl/KeVDVR_U_V2LSnglOutlt_ProxVoltMin'
 * '<S95>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/HWBasedControl/KeVDVR_U_V2L_MaxAllwdACOutVolt'
 * '<S96>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/HWBasedControl/KeVDVR_U_V2V_MaxAllwdACOutVolt'
 * '<S97>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/HWBasedControl/KeVDVR_U_V2V_ProxVoltMax'
 * '<S98>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/HWBasedControl/KeVDVR_U_V2V_ProxVoltMin'
 * '<S99>'  : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/HWBasedControl/TurnOnDelaySample'
 * '<S100>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/HWBasedControl/TurnOnDelaySample/EdgeRising'
 * '<S101>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SWBasedControl/ClosedInterval1'
 * '<S102>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SWBasedControl/ClosedInterval2'
 * '<S103>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SWBasedControl/EnumeratedValue1'
 * '<S104>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SWBasedControl/EnumeratedValue2'
 * '<S105>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SWBasedControl/EnumeratedValue3'
 * '<S106>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SWBasedControl/EnumeratedValue4'
 * '<S107>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SWBasedControl/EnumeratedValue5'
 * '<S108>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SWBasedControl/EnumeratedValue6'
 * '<S109>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SWBasedControl/EnumeratedValue7'
 * '<S110>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SWBasedControl/EnumeratedValue8'
 * '<S111>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SWBasedControl/EnumeratedValue9'
 * '<S112>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SWBasedControl/IfThenElseifElse'
 * '<S113>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SWBasedControl/IfThenElseifElse1'
 * '<S114>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SWBasedControl/IfThenElseifElse2'
 * '<S115>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SWBasedControl/KeVDVR_Cnt_SecureConnV2X_Dbnc'
 * '<S116>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SWBasedControl/KeVDVR_I_ACOutCurrDflt'
 * '<S117>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SWBasedControl/KeVDVR_I_V2LSgl_MaxAllwdACOutCurr'
 * '<S118>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SWBasedControl/KeVDVR_I_V2V_MaxAllwdACOutCurr'
 * '<S119>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SWBasedControl/KeVDVR_U_ACOutVoltDflt'
 * '<S120>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SWBasedControl/KeVDVR_U_V2L_MaxAllwdACOutVolt'
 * '<S121>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SWBasedControl/KeVDVR_U_V2V_MaxAllwdACOutVolt'
 * '<S122>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SWBasedControl/KeVDVR_f_V2LFreqHi'
 * '<S123>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SWBasedControl/KeVDVR_f_V2LFreqLo'
 * '<S124>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SWBasedControl/KeVDVR_f_V2VFreqHi'
 * '<S125>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SWBasedControl/KeVDVR_f_V2VFreqLo'
 * '<S126>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SWBasedControl/TurnOnDelaySample'
 * '<S127>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SWBasedControl/TurnOnDelaySample/EdgeRising'
 * '<S128>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SW_HW_Detection/ClosedInterval1'
 * '<S129>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SW_HW_Detection/ClosedInterval2'
 * '<S130>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SW_HW_Detection/ClosedInterval3'
 * '<S131>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SW_HW_Detection/ClosedInterval4'
 * '<S132>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SW_HW_Detection/ClosedInterval5'
 * '<S133>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SW_HW_Detection/KeVDVR_U_V2LDualOutlt_ProxVoltMax'
 * '<S134>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SW_HW_Detection/KeVDVR_U_V2LDualOutlt_ProxVoltMin'
 * '<S135>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SW_HW_Detection/KeVDVR_U_V2LSnglOutlt_ProxVoltMax'
 * '<S136>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SW_HW_Detection/KeVDVR_U_V2LSnglOutlt_ProxVoltMin'
 * '<S137>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SW_HW_Detection/KeVDVR_U_V2V_ProxVoltMax'
 * '<S138>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SW_HW_Detection/KeVDVR_U_V2V_ProxVoltMin'
 * '<S139>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SW_HW_Detection/KeVDVR_f_V2LFreqHi'
 * '<S140>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SW_HW_Detection/KeVDVR_f_V2LFreqLo'
 * '<S141>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SW_HW_Detection/KeVDVR_f_V2VFreqHi'
 * '<S142>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SW_HW_Detection/KeVDVR_f_V2VFreqLo'
 * '<S143>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SW_HW_Output/EnumeratedValue2'
 * '<S144>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SW_HW_Output/EnumeratedValue3'
 * '<S145>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SW_HW_Output/EnumeratedValue4'
 * '<S146>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SW_HW_Output/EnumeratedValue5'
 * '<S147>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SW_HW_Output/IfThenElseifElse'
 * '<S148>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SW_HW_Output/IfThenElseifElse1'
 * '<S149>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SW_HW_Output/IfThenElseifElse2'
 * '<S150>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SW_HW_Output/KeVDVR_I_ACOutCurrDflt'
 * '<S151>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/DetectionProcessing/SW_HW_Output/KeVDVR_U_ACOutVoltDflt'
 * '<S152>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/ChargePortLock_DischgTimeEstimation'
 * '<S153>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/DschrgSF'
 * '<S154>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/Retry_Reset'
 * '<S155>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/ChargePortLock_DischgTimeEstimation/ChargePortLock_Strategy'
 * '<S156>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/ChargePortLock_DischgTimeEstimation/Discharge_Time_Estimation'
 * '<S157>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/ChargePortLock_DischgTimeEstimation/KeVDVR_I_DschgCurrLim'
 * '<S158>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/ChargePortLock_DischgTimeEstimation/ChargePortLock_Strategy/ChrgPortLock_V2V'
 * '<S159>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/ChargePortLock_DischgTimeEstimation/ChargePortLock_Strategy/EnumSetBlock2'
 * '<S160>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/ChargePortLock_DischgTimeEstimation/ChargePortLock_Strategy/Enumerated_Constant'
 * '<S161>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/ChargePortLock_DischgTimeEstimation/ChargePortLock_Strategy/Enumerated_Constant1'
 * '<S162>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/ChargePortLock_DischgTimeEstimation/ChargePortLock_Strategy/Enumerated_Constant2'
 * '<S163>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/ChargePortLock_DischgTimeEstimation/ChargePortLock_Strategy/Enumerated_Constant3'
 * '<S164>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/ChargePortLock_DischgTimeEstimation/ChargePortLock_Strategy/Enumerated_Constant4'
 * '<S165>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/ChargePortLock_DischgTimeEstimation/ChargePortLock_Strategy/Enumerated_Constant5'
 * '<S166>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/ChargePortLock_DischgTimeEstimation/ChargePortLock_Strategy/HeVDVR_t_ExecutionRate'
 * '<S167>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/ChargePortLock_DischgTimeEstimation/ChargePortLock_Strategy/SetBlock1'
 * '<S168>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/ChargePortLock_DischgTimeEstimation/ChargePortLock_Strategy/SetBlock6'
 * '<S169>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/ChargePortLock_DischgTimeEstimation/ChargePortLock_Strategy/Signal_Processing'
 * '<S170>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/ChargePortLock_DischgTimeEstimation/ChargePortLock_Strategy/Signal_Processing/EdgeFalling'
 * '<S171>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/ChargePortLock_DischgTimeEstimation/ChargePortLock_Strategy/Signal_Processing/Enumerated_Constant'
 * '<S172>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/ChargePortLock_DischgTimeEstimation/ChargePortLock_Strategy/Signal_Processing/KeVDVR_b_ManualRel_Actv'
 * '<S173>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/ChargePortLock_DischgTimeEstimation/Discharge_Time_Estimation/Enumerated_Constant1'
 * '<S174>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/ChargePortLock_DischgTimeEstimation/Discharge_Time_Estimation/Enumerated_Constant6'
 * '<S175>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/ChargePortLock_DischgTimeEstimation/Discharge_Time_Estimation/V2V_Active'
 * '<S176>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/ChargePortLock_DischgTimeEstimation/Discharge_Time_Estimation/V2V_InstantPower'
 * '<S177>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/ChargePortLock_DischgTimeEstimation/Discharge_Time_Estimation/V2V_NoInstantPower'
 * '<S178>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/ChargePortLock_DischgTimeEstimation/Discharge_Time_Estimation/V2V_NotActive'
 * '<S179>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/ChargePortLock_DischgTimeEstimation/Discharge_Time_Estimation/V2V_Active/DigitalLowpassResetEnabled'
 * '<S180>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/ChargePortLock_DischgTimeEstimation/Discharge_Time_Estimation/V2V_Active/KeVDVR_K_DayRemain'
 * '<S181>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/ChargePortLock_DischgTimeEstimation/Discharge_Time_Estimation/V2V_Active/KeVDVR_K_DayRemain1'
 * '<S182>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/ChargePortLock_DischgTimeEstimation/Discharge_Time_Estimation/V2V_Active/KeVDVR_K_Hr2Day'
 * '<S183>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/ChargePortLock_DischgTimeEstimation/Discharge_Time_Estimation/V2V_Active/KeVDVR_K_HrRemain'
 * '<S184>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/ChargePortLock_DischgTimeEstimation/Discharge_Time_Estimation/V2V_Active/KeVDVR_K_HrRemain1'
 * '<S185>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/ChargePortLock_DischgTimeEstimation/Discharge_Time_Estimation/V2V_Active/KeVDVR_K_Min2Hr'
 * '<S186>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/ChargePortLock_DischgTimeEstimation/Discharge_Time_Estimation/V2V_Active/KeVDVR_K_W2Min'
 * '<S187>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/ChargePortLock_DischgTimeEstimation/Discharge_Time_Estimation/V2V_Active/KeVDVR_k_Dschrg_FiltCoef'
 * '<S188>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/ChargePortLock_DischgTimeEstimation/Discharge_Time_Estimation/V2V_Active/ProtectedDivision'
 * '<S189>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/ChargePortLock_DischgTimeEstimation/Discharge_Time_Estimation/V2V_Active/SetBlock'
 * '<S190>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/ChargePortLock_DischgTimeEstimation/Discharge_Time_Estimation/V2V_Active/SetBlock1'
 * '<S191>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/ChargePortLock_DischgTimeEstimation/Discharge_Time_Estimation/V2V_Active/SetBlock2'
 * '<S192>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/ChargePortLock_DischgTimeEstimation/Discharge_Time_Estimation/V2V_InstantPower/SetBlock1'
 * '<S193>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/DschrgSF/Count Down Reset Enabled'
 * '<S194>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/DschrgSF/Discharging_SF'
 * '<S195>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/DschrgSF/EnumSetBlock'
 * '<S196>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/DschrgSF/EnumSetBlock1'
 * '<S197>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/DschrgSF/EnumSetBlock2'
 * '<S198>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/DschrgSF/EnumSetBlock3'
 * '<S199>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/DschrgSF/KeVDVR_Cnt_ACCurrentCheck_Dbnc'
 * '<S200>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/DschrgSF/KeVDVR_Cnt_RTC_StrtUpdt_Dly'
 * '<S201>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/DschrgSF/KeVDVR_Cnt_StartUpdateRTC'
 * '<S202>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/DschrgSF/KeVDVR_I_CurrentLimV2V'
 * '<S203>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/DschrgSF/KeVDVR_t_RTC_Diff_LowerVal'
 * '<S204>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/DschrgSF/KeVDVR_t_RTC_Diff_UpperVal'
 * '<S205>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/DschrgSF/SetBlock'
 * '<S206>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/DschrgSF/SetBlock1'
 * '<S207>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/DschrgSF/SetBlock2'
 * '<S208>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/DschrgSF/Turn On Delay Sample'
 * '<S209>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/DschrgSF/TurnOnDelaySample'
 * '<S210>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/DschrgSF/Turn On Delay Sample/EdgeRising'
 * '<S211>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/DschrgSF/TurnOnDelaySample/EdgeRising'
 * '<S212>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/Retry_Reset/CounterResetEnabled'
 * '<S213>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/Retry_Reset/EdgeRising'
 * '<S214>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/Retry_Reset/EdgeRising1'
 * '<S215>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/Retry_Reset/EdgeRising2'
 * '<S216>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/Retry_Reset/EdgeRising4'
 * '<S217>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/Retry_Reset/EdgeRising6'
 * '<S218>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/Retry_Reset/Enum'
 * '<S219>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Discharging/Retry_Reset/KaVDVR_K_NbrRetries'
 * '<S220>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Enable_Discharging/SOC_Pwr_Chks'
 * '<S221>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Enable_Discharging/TurtleModeChk'
 * '<S222>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Enable_Discharging/SOC_Pwr_Chks/KeVDVR_Cnt_PwrLtCond_Dbnc'
 * '<S223>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Enable_Discharging/SOC_Pwr_Chks/KeVDVR_Cnt_SOCCheck_Dbnc'
 * '<S224>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Enable_Discharging/SOC_Pwr_Chks/KeVDVR_P_DschrgPwrOffset'
 * '<S225>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Enable_Discharging/SOC_Pwr_Chks/KeVDVR_Pct_SOCLimitOffset'
 * '<S226>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Enable_Discharging/SOC_Pwr_Chks/TurnOffDelaySampleModified'
 * '<S227>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Enable_Discharging/SOC_Pwr_Chks/TurnOffDelaySampleModified1'
 * '<S228>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Enable_Discharging/SOC_Pwr_Chks/TurnOffDelaySampleModified/EdgeFalling1'
 * '<S229>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Enable_Discharging/SOC_Pwr_Chks/TurnOffDelaySampleModified1/EdgeFalling1'
 * '<S230>' : 'VDVR_ac/VDVR_MedTED/VDVC/VDVC/Enable_Discharging/TurtleModeChk/Enumerated_Constant4'
 * '<S231>' : 'VDVR_ac/VDVR_MedTED/VDVI/KeVDVR_P_BattLTMaxLim_Val'
 * '<S232>' : 'VDVR_ac/VDVR_MedTED/VDVI/KeVDVR_P_HVAccPwr_Val'
 * '<S233>' : 'VDVR_ac/VDVR_MedTED/VDVI/KeVDVR_b_BPCMRdy_Ovrd'
 * '<S234>' : 'VDVR_ac/VDVR_MedTED/VDVI/KeVDVR_b_BPCMRdy_Val'
 * '<S235>' : 'VDVR_ac/VDVR_MedTED/VDVI/KeVDVR_b_BattLTMaxLim_Ovrd'
 * '<S236>' : 'VDVR_ac/VDVR_MedTED/VDVI/KeVDVR_b_DrvDrUnlcking_Ovrd'
 * '<S237>' : 'VDVR_ac/VDVR_MedTED/VDVI/KeVDVR_b_DrvDrUnlcking_Val'
 * '<S238>' : 'VDVR_ac/VDVR_MedTED/VDVI/KeVDVR_b_EVSE_PilotStat_Ovrd'
 * '<S239>' : 'VDVR_ac/VDVR_MedTED/VDVI/KeVDVR_b_EnblDschrg_Ovrd'
 * '<S240>' : 'VDVR_ac/VDVR_MedTED/VDVI/KeVDVR_b_EnblDschrg_Val'
 * '<S241>' : 'VDVR_ac/VDVR_MedTED/VDVI/KeVDVR_b_HVAccPwr_Ovrd'
 * '<S242>' : 'VDVR_ac/VDVR_MedTED/VDVI/KeVDVR_b_HoodAjarOvrd'
 * '<S243>' : 'VDVR_ac/VDVR_MedTED/VDVI/KeVDVR_b_HoodAjarVal'
 * '<S244>' : 'VDVR_ac/VDVR_MedTED/VDVI/KeVDVR_b_J1772S2Sts_Ovrd'
 * '<S245>' : 'VDVR_ac/VDVR_MedTED/VDVI/KeVDVR_b_J1772S2Sts_Val'
 * '<S246>' : 'VDVR_ac/VDVR_MedTED/VDVI/KeVDVR_b_OBCMd_Ovrd'
 * '<S247>' : 'VDVR_ac/VDVR_MedTED/VDVI/KeVDVR_b_PMMPwrMd_Ovrd'
 * '<S248>' : 'VDVR_ac/VDVR_MedTED/VDVI/KeVDVR_b_Prox_Ovrd'
 * '<S249>' : 'VDVR_ac/VDVR_MedTED/VDVI/KeVDVR_b_TurtleMdSts_Ovrd'
 * '<S250>' : 'VDVR_ac/VDVR_MedTED/VDVI/KeVDVR_e_EVSE_PilotStat_Val'
 * '<S251>' : 'VDVR_ac/VDVR_MedTED/VDVI/KeVDVR_e_OBCMd_Val'
 * '<S252>' : 'VDVR_ac/VDVR_MedTED/VDVI/KeVDVR_e_PMMPwrMd_Val'
 * '<S253>' : 'VDVR_ac/VDVR_MedTED/VDVI/KeVDVR_e_Prox_Val'
 * '<S254>' : 'VDVR_ac/VDVR_MedTED/VDVI/KeVDVR_e_TurtleMdSts_Val'
 * '<S255>' : 'VDVR_ac/VDVR_PwrOn/VariantSubsystem'
 * '<S256>' : 'VDVR_ac/VDVR_PwrOn/VariantSubsystem/VDVO_FUNC'
 * '<S257>' : 'VDVR_ac/VDVR_PwrOn/VariantSubsystem/VDVO_NF'
 * '<S258>' : 'VDVR_ac/VDVR_PwrOn/VariantSubsystem/VDVO_FUNC/DSM_Init'
 * '<S259>' : 'VDVR_ac/VDVR_PwrOn/VariantSubsystem/VDVO_FUNC/EnumeratedValue2'
 * '<S260>' : 'VDVR_ac/VDVR_PwrOn/VariantSubsystem/VDVO_FUNC/Enumerated_Constant'
 * '<S261>' : 'VDVR_ac/VDVR_PwrOn/VariantSubsystem/VDVO_FUNC/Enumerated_Constant1'
 * '<S262>' : 'VDVR_ac/VDVR_PwrOn/VariantSubsystem/VDVO_FUNC/Enumerated_Constant2'
 * '<S263>' : 'VDVR_ac/VDVR_PwrOn/VariantSubsystem/VDVO_NF/Enum Set Block'
 * '<S264>' : 'VDVR_ac/VDVR_PwrOn/VariantSubsystem/VDVO_NF/Enum Set Block1'
 * '<S265>' : 'VDVR_ac/VDVR_PwrOn/VariantSubsystem/VDVO_NF/Enum Set Block2'
 * '<S266>' : 'VDVR_ac/VDVR_PwrOn/VariantSubsystem/VDVO_NF/Enum Set Block3'
 * '<S267>' : 'VDVR_ac/VDVR_PwrOn/VariantSubsystem/VDVO_NF/Enumerated Value2'
 * '<S268>' : 'VDVR_ac/VDVR_PwrOn/VariantSubsystem/VDVO_NF/Enumerated_Constant'
 * '<S269>' : 'VDVR_ac/VDVR_PwrOn/VariantSubsystem/VDVO_NF/Enumerated_Constant1'
 * '<S270>' : 'VDVR_ac/VDVR_PwrOn/VariantSubsystem/VDVO_NF/Enumerated_Constant2'
 * '<S271>' : 'VDVR_ac/VDVR_PwrOn/VariantSubsystem/VDVO_NF/Set Block'
 * '<S272>' : 'VDVR_ac/VDVR_PwrOn/VariantSubsystem/VDVO_NF/Set Block1'
 * '<S273>' : 'VDVR_ac/VDVR_PwrOn/VariantSubsystem/VDVO_NF/Set Block10'
 * '<S274>' : 'VDVR_ac/VDVR_PwrOn/VariantSubsystem/VDVO_NF/Set Block11'
 * '<S275>' : 'VDVR_ac/VDVR_PwrOn/VariantSubsystem/VDVO_NF/Set Block12'
 * '<S276>' : 'VDVR_ac/VDVR_PwrOn/VariantSubsystem/VDVO_NF/Set Block13'
 * '<S277>' : 'VDVR_ac/VDVR_PwrOn/VariantSubsystem/VDVO_NF/Set Block14'
 * '<S278>' : 'VDVR_ac/VDVR_PwrOn/VariantSubsystem/VDVO_NF/Set Block15'
 * '<S279>' : 'VDVR_ac/VDVR_PwrOn/VariantSubsystem/VDVO_NF/Set Block2'
 * '<S280>' : 'VDVR_ac/VDVR_PwrOn/VariantSubsystem/VDVO_NF/Set Block3'
 * '<S281>' : 'VDVR_ac/VDVR_PwrOn/VariantSubsystem/VDVO_NF/Set Block4'
 * '<S282>' : 'VDVR_ac/VDVR_PwrOn/VariantSubsystem/VDVO_NF/Set Block5'
 * '<S283>' : 'VDVR_ac/VDVR_PwrOn/VariantSubsystem/VDVO_NF/Set Block6'
 * '<S284>' : 'VDVR_ac/VDVR_PwrOn/VariantSubsystem/VDVO_NF/Set Block8'
 * '<S285>' : 'VDVR_ac/VDVR_PwrOn/VariantSubsystem/VDVO_NF/Set Block9'
 */
#endif                                 /* RTW_HEADER_VDVR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
