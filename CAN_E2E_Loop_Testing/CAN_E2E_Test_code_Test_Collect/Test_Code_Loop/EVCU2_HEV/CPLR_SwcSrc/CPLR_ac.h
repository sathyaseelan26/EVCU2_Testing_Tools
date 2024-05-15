/*
 * File: CPLR_ac.h
 *
 * Code generated for Simulink model 'CPLR_ac'.
 *
 * Model version                  : 9.319
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:18:23 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_CPLR_ac_h_
#define RTW_HEADER_CPLR_ac_h_
#include "Rte_Type.h"
#ifndef CPLR_ac_COMMON_INCLUDES_
#define CPLR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CPLR.h"
#endif                                 /* CPLR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_CPLR_ac_T
{

#if Rte_SysCon_Variant_CPLR_1

    float32 VeCPLR_t_StTmrChrgPrt;     /* '<S39>/ChrgPortLockB' */

#define B_CPLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CPLR_1

    float32 VeCPLR_t_StateTimer1;      /* '<S38>/Lock_Control' */

#define B_CPLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CPLR_1

    float32 VeCPLR_t_StateTimerCP;     /* '<S38>/ChrgPortMech_Type2' */

#define B_CPLR_AC_T_VARIANT_EXISTS
#endif

    uint8 OutportBufferForVeCPLR_k_ChrgPo;/* '<S161>/Const63' */

#if Rte_SysCon_Variant_CPLR_1

    uint8 Gain;                        /* '<S110>/Gain' */

#define B_CPLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CPLR_1

    uint8 ChrgPrtEnbl_BSW;             /* '<S39>/ChrgPortLockB' */

#define B_CPLR_AC_T_VARIANT_EXISTS
#endif

    boolean OutportBufferForVeCPLR_b_DVC_Ch;/* '<S161>/Const25' */
    boolean OutportBufferForVeCPLR_b_Lock_S;/* '<S161>/Const26' */
    boolean OutportBufferForVeCPLR_b_Relock;/* '<S161>/Const30' */
    boolean OutportBufferForVeCPLR_b_HMIR_M;/* '<S161>/Const34' */
    boolean OutportBufferForVeCPLR_b_ChrgPo;/* '<S161>/Const62' */
    boolean OutportBufferForVeCPLR_b_Intern;/* '<S161>/Const1' */
    boolean OutportBufferForVeCPLR_b_ChargP;/* '<S161>/Const2' */

#if Rte_SysCon_Variant_CPLR_1

    boolean OutportBufferForLock_Status;/* '<S31>/Constant Value2' */

#define B_CPLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean ChrgPort_Lock_Req;         /* '<S38>/Pulse Logic' */

#define B_CPLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean ChrgPort_Unlock_Req;       /* '<S38>/Pulse Logic' */

#define B_CPLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean Flag;                      /* '<S38>/Lock_Control' */

#define B_CPLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean BCI;                       /* '<S38>/Lock_Control' */

#define B_CPLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean Flag_m;                    /* '<S38>/ChrgPortMech_Type2' */

#define B_CPLR_AC_T_VARIANT_EXISTS
#endif

    TeOBCR_e_ChrgPort_Req OutportBufferForVeCPLR_e_ChrgPo;/* '<S161>/Const23' */
    TeOBCR_e_ChargeportLock_Sts OutportBufferForVeCPLR_e_Charge;/* '<S161>/Const3' */
}
B_CPLR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_CPLR_ac_T
{

#if Rte_SysCon_Variant_CPLR_1

    uint16 UnitDelay_DSTATE;           /* '<S11>/Unit Delay' */

#define DW_CPLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CPLR_1

    uint16 UnitDelay_DSTATE_m;         /* '<S121>/Unit Delay' */

#define DW_CPLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CPLR_1

    uint16 UnitDelay_DSTATE_h;         /* '<S120>/Unit Delay' */

#define DW_CPLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CPLR_1

    uint16 UnitDelay_DSTATE_c;         /* '<S106>/Unit Delay' */

#define DW_CPLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CPLR_1

    uint16 UnitDelay_DSTATE_mt;        /* '<S62>/Unit Delay' */

#define DW_CPLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CPLR_1

    uint16 UnitDelay_DSTATE_a;         /* '<S50>/Unit Delay' */

#define DW_CPLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean UnitDelay_DSTATE_f;        /* '<S124>/Unit Delay' */

#define DW_CPLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean UnitDelay_DSTATE_p;        /* '<S8>/Unit Delay' */

#define DW_CPLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean UnitDelay_DSTATE_k;        /* '<S38>/Unit Delay' */

#define DW_CPLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean UnitDelay_DSTATE_d;        /* '<S123>/Unit Delay' */

#define DW_CPLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean UnitDelay_DSTATE_g;        /* '<S122>/Unit Delay' */

#define DW_CPLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean UnitDelay_DSTATE_b;        /* '<S111>/Unit Delay' */

#define DW_CPLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean UnitDelay_DSTATE_fo;       /* '<S107>/Unit Delay' */

#define DW_CPLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean UnitDelay_DSTATE_a2;       /* '<S105>/Unit Delay' */

#define DW_CPLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean UnitDelay_DSTATE_j;        /* '<S79>/Unit Delay' */

#define DW_CPLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean UnitDelay_DSTATE_l;        /* '<S78>/Unit Delay' */

#define DW_CPLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean UnitDelay_DSTATE_ag;       /* '<S77>/Unit Delay' */

#define DW_CPLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean UnitDelay_DSTATE_g0;       /* '<S76>/Unit Delay' */

#define DW_CPLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean UnitDelay_DSTATE_pv;       /* '<S75>/Unit Delay' */

#define DW_CPLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean UnitDelay_DSTATE_bx;       /* '<S74>/Unit Delay' */

#define DW_CPLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean UnitDelay_DSTATE_av;       /* '<S73>/Unit Delay' */

#define DW_CPLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean UnitDelay_DSTATE_gw;       /* '<S72>/Unit Delay' */

#define DW_CPLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean UnitDelay_DSTATE_py;       /* '<S71>/Unit Delay' */

#define DW_CPLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean UnitDelay_DSTATE_i;        /* '<S70>/Unit Delay' */

#define DW_CPLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean UnitDelay_DSTATE_fu;       /* '<S69>/Unit Delay' */

#define DW_CPLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean UnitDelay_DSTATE_be;       /* '<S63>/Unit Delay' */

#define DW_CPLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean UnitDelay_DSTATE_cg;       /* '<S51>/Unit Delay' */

#define DW_CPLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CPLR_1

    TeOBCR_e_ChrgPort_Req UnitDelay1_DSTATE;/* '<S39>/Unit Delay1' */

#define DW_CPLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CPLR_1

    TeOBCR_e_DoorLockSts UnitDelay2_DSTATE;/* '<S38>/Unit Delay2' */

#define DW_CPLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CPLR_1

    TeOBCR_e_DCChrgStat UnitDelay2_DSTATE_p;/* '<S8>/Unit Delay2' */

#define DW_CPLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CPLR_1

    TeOBCR_e_ChrgSysStat UnitDelay1_DSTATE_j;/* '<S38>/Unit Delay1' */

#define DW_CPLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CPLR_1

    uint8 StatusByte_LostCommBCM;     /* '<Root>/DSM_NeOBCR_b_ManualRelease1' */

#define DW_CPLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CPLR_1

    uint8 is_active_c5_CPLR_ac;        /* '<S39>/ChrgPortLockB' */

#define DW_CPLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CPLR_1

    uint8 is_c5_CPLR_ac;               /* '<S39>/ChrgPortLockB' */

#define DW_CPLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CPLR_1

    uint8 is_active_c1_CPLR_ac;        /* '<S38>/Pulse Logic' */

#define DW_CPLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CPLR_1

    uint8 is_c1_CPLR_ac;               /* '<S38>/Pulse Logic' */

#define DW_CPLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CPLR_1

    uint8 is_active_c49_CPLR_ac;       /* '<S38>/Lock_Control' */

#define DW_CPLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CPLR_1

    uint8 is_c49_CPLR_ac;              /* '<S38>/Lock_Control' */

#define DW_CPLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CPLR_1

    uint8 is_active_c6_CPLR_ac;        /* '<S38>/ChrgPortMech_Type2' */

#define DW_CPLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CPLR_1

    uint8 is_c6_CPLR_ac;               /* '<S38>/ChrgPortMech_Type2' */

#define DW_CPLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CPLR_1

    boolean NeCPLR_b_ManualRelease;    /* '<Root>/DSM_NeOBCR_b_ManualRelease' */

#define DW_CPLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CPLR_1

    TeOBCR_e_ChargeportLock_Sts NeCPLR_e_ChargeportLockLastSts;
                                 /* '<Root>/DSM_NeOBCR_b_SmartEvse_Detected2' */

#define DW_CPLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CPLR_1

    TeOBCR_e_DoorLockSts NeCPLR_e_DoorLastSts;/* '<Root>/DSM_NeOBCR_e_DoorLastSts' */

#define DW_CPLR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CPLR_1

    TeCITR_e_RmtChargePortCmd NeCPLR_e_RemoteLockLastSts;
                                 /* '<Root>/DSM_NeOBCR_b_SmartEvse_Detected3' */

#define DW_CPLR_AC_T_VARIANT_EXISTS
#endif

#ifndef DW_CPLR_AC_T_VARIANT_EXISTS

    char _rt_unused;

#endif

}
DW_CPLR_ac_T;

/* Invariant block signals (default storage) */
typedef struct
{
    const TeOBCR_e_ChrgPort_Req Const23;/* '<S161>/Const23' */
    const TeOBCR_e_ChargeportLock_Sts Const3;/* '<S161>/Const3' */
}
ConstB_CPLR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CPLR
#include "MemMap.h"

extern VAR(B_CPLR_ac_T, CPLR_VAR_INIT) CPLR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CPLR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CPLR
#include "MemMap.h"

extern VAR(DW_CPLR_ac_T, CPLR_VAR_INIT) CPLR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CPLR
#include "MemMap.h"
#define START_SEC_CONST_UNSPECIFIED_CPLR
#include "MemMap.h"

extern CONST(ConstB_CPLR_ac_T, CPLR_VAR_INIT) CPLR_ac_ConstB;/* constant block i/o */

#define STOP_SEC_CONST_UNSPECIFIED_CPLR
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
 * '<Root>' : 'CPLR_ac'
 * '<S1>'   : 'CPLR_ac/CPLR_MedTED'
 * '<S2>'   : 'CPLR_ac/CPLR_PwrOff'
 * '<S3>'   : 'CPLR_ac/CPLR_PwrOn'
 * '<S4>'   : 'CPLR_ac/CPLR_MedTED/CPLC'
 * '<S5>'   : 'CPLR_ac/CPLR_MedTED/CPLI'
 * '<S6>'   : 'CPLR_ac/CPLR_MedTED/Output_Proc'
 * '<S7>'   : 'CPLR_ac/CPLR_MedTED/CPLC/CPLR_NF'
 * '<S8>'   : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock'
 * '<S9>'   : 'CPLR_ac/CPLR_MedTED/CPLC/KeCPLR_Cnt_UnplugDbncCnt'
 * '<S10>'  : 'CPLR_ac/CPLR_MedTED/CPLC/KeCPLR_b_Active'
 * '<S11>'  : 'CPLR_ac/CPLR_MedTED/CPLC/Turn Off Delay Sample'
 * '<S12>'  : 'CPLR_ac/CPLR_MedTED/CPLC/CPLR_NF/Enumerated Value1'
 * '<S13>'  : 'CPLR_ac/CPLR_MedTED/CPLC/CPLR_NF/Enumerated Value2'
 * '<S14>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/Enumerated Value1'
 * '<S15>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/Enumerated Value10'
 * '<S16>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/Enumerated Value11'
 * '<S17>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/Enumerated Value12'
 * '<S18>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/Enumerated Value13'
 * '<S19>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/Enumerated Value4'
 * '<S20>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/Enumerated Value7'
 * '<S21>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/Enumerated Value8'
 * '<S22>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/Enumerated Value9'
 * '<S23>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/Enumerated_Constant'
 * '<S24>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/Enumerated_Constant2'
 * '<S25>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/Enumerated_Constant3'
 * '<S26>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/KeCPLR_b_AddPPI1ToPlgIntoLck'
 * '<S27>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/KeCPLR_b_EnblChrgPortJapan'
 * '<S28>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/KeCPLR_b_EnblChrgPortNAFTA'
 * '<S29>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/KeCPLR_b_EnblPlugInLock'
 * '<S30>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/KeCPLR_e_InterMarketsSelection'
 * '<S31>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/NAFTA'
 * '<S32>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets'
 * '<S33>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/NAFTA/Enumerated Value1'
 * '<S34>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/NAFTA/Enumerated Value2'
 * '<S35>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/DVC'
 * '<S36>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/Enum Set Block'
 * '<S37>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/Faults'
 * '<S38>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF'
 * '<S39>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF_Hbridge'
 * '<S40>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/Signal_Processing'
 * '<S41>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/DVC/Enumerated Value1'
 * '<S42>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/DVC/Enumerated Value2'
 * '<S43>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/DVC/Enumerated Value3'
 * '<S44>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/Faults/KeCPLR_e_ChrgPortLock_Type'
 * '<S45>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/Faults/Mismatch'
 * '<S46>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/Faults/TypeA_Fault'
 * '<S47>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/Faults/TypeB_Fault'
 * '<S48>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/Faults/TypeC_Fault'
 * '<S49>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/Faults/getFaultActiveAndTestCompleted'
 * '<S50>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/Faults/Mismatch/Counter Reset  Enabled '
 * '<S51>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/Faults/Mismatch/EdgeRising'
 * '<S52>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/Faults/Mismatch/Enumerated Value'
 * '<S53>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/Faults/Mismatch/Enumerated Value1'
 * '<S54>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/Faults/Mismatch/Enumerated Value2'
 * '<S55>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/Faults/Mismatch/Enumerated Value3'
 * '<S56>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/Faults/Mismatch/IfThenElseif'
 * '<S57>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/Faults/Mismatch/KeCPLR_Cnt_ChrgLockFlt'
 * '<S58>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/Faults/Mismatch/KeCPLR_Cnt_Port_MisMatchFlt'
 * '<S59>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/Faults/Mismatch/KeCPLR_b_AlwLockDTC_ChrgFlt'
 * '<S60>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/Faults/Mismatch/KeCPLR_b_EnblChrgPortLckFailSts'
 * '<S61>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/Faults/Mismatch/KeCPLR_b_EnblCountMismtch'
 * '<S62>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/Faults/Mismatch/Turn On Delay Sample2'
 * '<S63>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/Faults/Mismatch/Turn On Delay Sample2/EdgeRising'
 * '<S64>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/Faults/TypeA_Fault/Enumerated Value2'
 * '<S65>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/Faults/TypeB_Fault/Enumerated Value3'
 * '<S66>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/Faults/TypeB_Fault/KeCPLR_b_HBridgeFaultDiagEnbl'
 * '<S67>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/Faults/TypeC_Fault/Enumerated Value3'
 * '<S68>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF/ChrgPortMech_Type2'
 * '<S69>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF/EdgeFalling'
 * '<S70>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF/EdgeFalling2'
 * '<S71>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF/EdgeRising1'
 * '<S72>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF/EdgeRising12'
 * '<S73>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF/EdgeRising13'
 * '<S74>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF/EdgeRising14'
 * '<S75>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF/EdgeRising15'
 * '<S76>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF/EdgeRising2'
 * '<S77>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF/EdgeRising3'
 * '<S78>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF/EdgeRising4'
 * '<S79>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF/EdgeRising5'
 * '<S80>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF/Enum Set Block'
 * '<S81>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF/Enum Set Block2'
 * '<S82>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF/Enumerated_Constant'
 * '<S83>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF/Enumerated_Constant1'
 * '<S84>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF/Enumerated_Constant12'
 * '<S85>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF/Enumerated_Constant2'
 * '<S86>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF/Enumerated_Constant3'
 * '<S87>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF/Enumerated_Constant4'
 * '<S88>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF/Enumerated_Constant8'
 * '<S89>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF/HeCPLR_t_PI_ExecutionRate'
 * '<S90>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF/KeCPLR_Cnt_DelayDoorUnlkPulse'
 * '<S91>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF/KeCPLR_b_ChrgPortMech_Type1'
 * '<S92>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF/KeCPLR_b_H2RefuelingEnbl'
 * '<S93>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF/KeCPLR_b_HdAjarUnlockInlet'
 * '<S94>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF/KeCPLR_b_ignoreRmtLKD'
 * '<S95>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF/KeCPLR_b_ignoreRmtUNLK'
 * '<S96>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF/KeCPLR_t_S2Timer'
 * '<S97>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF/Lock_Control'
 * '<S98>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF/Pulse Logic'
 * '<S99>'  : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF/Set Block1'
 * '<S100>' : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF/Set Block2'
 * '<S101>' : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF/Set Block3'
 * '<S102>' : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF/Set Block4'
 * '<S103>' : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF/Set Block6'
 * '<S104>' : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF/Set Block7'
 * '<S105>' : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF/Signal Latch On With Reset'
 * '<S106>' : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF/Turn Off Delay Sample'
 * '<S107>' : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF/Turn Off Delay Sample/EdgeFalling1'
 * '<S108>' : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF_Hbridge/ChrgPortLockB'
 * '<S109>' : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF_Hbridge/KeCPLR_t_ChrgPortEnblTh'
 * '<S110>' : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/SF_Hbridge/Set Block'
 * '<S111>' : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/Signal_Processing/EdgeFalling'
 * '<S112>' : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/Signal_Processing/Enumerated_Constant'
 * '<S113>' : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/Signal_Processing/Enumerated_Constant1'
 * '<S114>' : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/Signal_Processing/Enumerated_Constant2'
 * '<S115>' : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/Signal_Processing/Enumerated_Constant3'
 * '<S116>' : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/Signal_Processing/IfThenElseifElse'
 * '<S117>' : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/Signal_Processing/KeCPLR_Cnt_Dbnc_DoorLockSts'
 * '<S118>' : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/Signal_Processing/KeCPLR_Cnt_Dbnc_RemoteLockSts'
 * '<S119>' : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/Signal_Processing/KeCPLR_b_ManualRel_Actv'
 * '<S120>' : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/Signal_Processing/Turn On Delay Sample'
 * '<S121>' : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/Signal_Processing/Turn On Delay Sample1'
 * '<S122>' : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/Signal_Processing/Turn On Delay Sample/EdgeRising'
 * '<S123>' : 'CPLR_ac/CPLR_MedTED/CPLC/ChrgPort_Lock/OtherMarkets/Signal_Processing/Turn On Delay Sample1/EdgeRising'
 * '<S124>' : 'CPLR_ac/CPLR_MedTED/CPLC/Turn Off Delay Sample/EdgeFalling'
 * '<S125>' : 'CPLR_ac/CPLR_MedTED/CPLI/KeCPLR_b_CBC_LOC_Ovrd'
 * '<S126>' : 'CPLR_ac/CPLR_MedTED/CPLI/KeCPLR_b_CBC_LOC_Val'
 * '<S127>' : 'CPLR_ac/CPLR_MedTED/CPLI/KeCPLR_b_ChrgPortHbridgeFltOvrd'
 * '<S128>' : 'CPLR_ac/CPLR_MedTED/CPLI/KeCPLR_b_ChrgPortLckDsblOvrd'
 * '<S129>' : 'CPLR_ac/CPLR_MedTED/CPLI/KeCPLR_b_ChrgPortLckDsblVal'
 * '<S130>' : 'CPLR_ac/CPLR_MedTED/CPLI/KeCPLR_b_DschrgUnlckInletOvrd'
 * '<S131>' : 'CPLR_ac/CPLR_MedTED/CPLI/KeCPLR_b_DschrgUnlckInletVal'
 * '<S132>' : 'CPLR_ac/CPLR_MedTED/CPLI/KeCPLR_b_HVBat_DC_CntctrStatOvrd'
 * '<S133>' : 'CPLR_ac/CPLR_MedTED/CPLI/KeCPLR_b_HoodAjarOvrd'
 * '<S134>' : 'CPLR_ac/CPLR_MedTED/CPLI/KeCPLR_b_HoodAjarVal'
 * '<S135>' : 'CPLR_ac/CPLR_MedTED/CPLI/KeCPLR_b_InFieldMdOvrd'
 * '<S136>' : 'CPLR_ac/CPLR_MedTED/CPLI/KeCPLR_b_InFieldMdVal'
 * '<S137>' : 'CPLR_ac/CPLR_MedTED/CPLI/KeCPLR_b_Prox_GBT'
 * '<S138>' : 'CPLR_ac/CPLR_MedTED/CPLI/KeCPLR_b_TxGBTMsgResponse'
 * '<S139>' : 'CPLR_ac/CPLR_MedTED/CPLI/KeCPLR_d_ChrgPortHbridgeFlt_Val'
 * '<S140>' : 'CPLR_ac/CPLR_MedTED/CPLI/KeCPLR_e_HVBat_DC_CntctrStatOvrdVal'
 * '<S141>' : 'CPLR_ac/CPLR_MedTED/CPLI/KeCPLR_e_Prox_GBT'
 * '<S142>' : 'CPLR_ac/CPLR_MedTED/CPLI/KeCPLR_e_TxGBTMsgResponse'
 * '<S143>' : 'CPLR_ac/CPLR_MedTED/Output_Proc/Enum Set Block'
 * '<S144>' : 'CPLR_ac/CPLR_MedTED/Output_Proc/Enumerated_Constant'
 * '<S145>' : 'CPLR_ac/CPLR_MedTED/Output_Proc/KeCPLR_b_ChrgPortEnbl_BSW_Ovrd'
 * '<S146>' : 'CPLR_ac/CPLR_MedTED/Output_Proc/KeCPLR_b_ChrgPortReq_BSW_Ovrd'
 * '<S147>' : 'CPLR_ac/CPLR_MedTED/Output_Proc/KeCPLR_b_ChrgPortReq_BSW_Val'
 * '<S148>' : 'CPLR_ac/CPLR_MedTED/Output_Proc/KeCPLR_b_ChrgPortRq_DVCOvrd'
 * '<S149>' : 'CPLR_ac/CPLR_MedTED/Output_Proc/KeCPLR_b_ChrgPortRq_DVCVal'
 * '<S150>' : 'CPLR_ac/CPLR_MedTED/Output_Proc/KeCPLR_b_ChrgPort_ReqOvrd'
 * '<S151>' : 'CPLR_ac/CPLR_MedTED/Output_Proc/KeCPLR_b_LockStatus_Ovrd'
 * '<S152>' : 'CPLR_ac/CPLR_MedTED/Output_Proc/KeCPLR_b_LockStatus_Val'
 * '<S153>' : 'CPLR_ac/CPLR_MedTED/Output_Proc/KeCPLR_b_MSG13_Ovrd'
 * '<S154>' : 'CPLR_ac/CPLR_MedTED/Output_Proc/KeCPLR_b_MSG13_Val'
 * '<S155>' : 'CPLR_ac/CPLR_MedTED/Output_Proc/KeCPLR_e_ChrgPort_ReqVal'
 * '<S156>' : 'CPLR_ac/CPLR_MedTED/Output_Proc/KeCPLR_k_ChrgPorEnbl_BSW_Val'
 * '<S157>' : 'CPLR_ac/CPLR_MedTED/Output_Proc/Set Block1'
 * '<S158>' : 'CPLR_ac/CPLR_MedTED/Output_Proc/Set Block3'
 * '<S159>' : 'CPLR_ac/CPLR_MedTED/Output_Proc/Set Block4'
 * '<S160>' : 'CPLR_ac/CPLR_PwrOn/DSM_Init'
 * '<S161>' : 'CPLR_ac/CPLR_PwrOn/Sub_Out_Init'
 */
#endif                                 /* RTW_HEADER_CPLR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
