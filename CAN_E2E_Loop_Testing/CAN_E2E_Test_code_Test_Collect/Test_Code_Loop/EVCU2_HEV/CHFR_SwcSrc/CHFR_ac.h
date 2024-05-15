/*
 * File: CHFR_ac.h
 *
 * Code generated for Simulink model 'CHFR_ac'.
 *
 * Model version                  : 1.77
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:15:30 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_CHFR_ac_h_
#define RTW_HEADER_CHFR_ac_h_
#include <math.h>
#include <string.h>
#include "Rte_Type.h"
#ifndef CHFR_ac_COMMON_INCLUDES_
#define CHFR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CHFR.h"
#endif                                 /* CHFR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_CHFR_ac_T
{

#if Rte_SysCon_Variant_CHFR_1

    sint16 ChargingFailure0;           /* '<S131>/Stateflow Chart' */

#define B_CHFR_AC_T_VARIANT_EXISTS
#endif

#ifndef B_CHFR_AC_T_VARIANT_EXISTS

    char _rt_unused;

#endif

}
B_CHFR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_CHFR_ac_T
{

#if Rte_SysCon_Variant_CHFR_1

    sint16 UnitDelay_DSTATE;           /* '<S8>/Unit Delay' */

#define DW_CHFR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHFR_1

    uint16 UnitDelay_DSTATE_i;         /* '<S161>/Unit Delay' */

#define DW_CHFR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHFR_1

    uint16 UnitDelay_DSTATE_l;         /* '<S121>/Unit Delay' */

#define DW_CHFR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHFR_1

    uint16 UnitDelay_DSTATE_d;         /* '<S126>/Unit Delay' */

#define DW_CHFR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHFR_1

    uint16 UnitDelay_DSTATE_j;         /* '<S20>/Unit Delay' */

#define DW_CHFR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHFR_1

    uint16 UnitDelay_DSTATE_le;        /* '<S97>/Unit Delay' */

#define DW_CHFR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHFR_1

    uint16 UnitDelay_DSTATE_jq;        /* '<S96>/Unit Delay' */

#define DW_CHFR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHFR_1

    uint16 UnitDelay_DSTATE_f;         /* '<S95>/Unit Delay' */

#define DW_CHFR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHFR_1

    uint16 UnitDelay_DSTATE_m;         /* '<S82>/Unit Delay' */

#define DW_CHFR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHFR_1

    uint16 UnitDelay_DSTATE_mm;        /* '<S113>/Unit Delay' */

#define DW_CHFR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHFR_1

    uint16 UnitDelay_DSTATE_g;         /* '<S74>/Unit Delay' */

#define DW_CHFR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHFR_1

    uint16 UnitDelay_DSTATE_h;         /* '<S61>/Unit Delay' */

#define DW_CHFR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHFR_1

    uint16 UnitDelay_DSTATE_k;         /* '<S60>/Unit Delay' */

#define DW_CHFR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHFR_1

    uint16 UnitDelay_DSTATE_n;         /* '<S59>/Unit Delay' */

#define DW_CHFR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHFR_1

    uint16 UnitDelay_DSTATE_nc;        /* '<S58>/Unit Delay' */

#define DW_CHFR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHFR_1

    uint16 UnitDelay_DSTATE_my;        /* '<S57>/Unit Delay' */

#define DW_CHFR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHFR_1

    uint16 UnitDelay_DSTATE_a;         /* '<S56>/Unit Delay' */

#define DW_CHFR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHFR_1

    sint16 i;                          /* '<S131>/Stateflow Chart' */

#define DW_CHFR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean UnitDelay_DSTATE_nt;       /* '<S13>/Unit Delay' */

#define DW_CHFR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean UnitDelay1_DSTATE;         /* '<S13>/Unit Delay1' */

#define DW_CHFR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean UnitDelay_DSTATE_b;        /* '<S166>/Unit Delay' */

#define DW_CHFR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean UnitDelay_DSTATE_c;        /* '<S165>/Unit Delay' */

#define DW_CHFR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean UnitDelay_DSTATE_bi;       /* '<S164>/Unit Delay' */

#define DW_CHFR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean UnitDelay_DSTATE_o;        /* '<S163>/Unit Delay' */

#define DW_CHFR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean UnitDelay_DSTATE_e;        /* '<S162>/Unit Delay' */

#define DW_CHFR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean UnitDelay_DSTATE_of;       /* '<S130>/Unit Delay' */

#define DW_CHFR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean UnitDelay_DSTATE_ik;       /* '<S127>/Unit Delay' */

#define DW_CHFR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean UnitDelay_DSTATE_d3;       /* '<S103>/Unit Delay' */

#define DW_CHFR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean UnitDelay_DSTATE_mk;       /* '<S102>/Unit Delay' */

#define DW_CHFR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean UnitDelay_DSTATE_ei;       /* '<S101>/Unit Delay' */

#define DW_CHFR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean UnitDelay_DSTATE_gd;       /* '<S100>/Unit Delay' */

#define DW_CHFR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean UnitDelay_DSTATE_c1;       /* '<S83>/Unit Delay' */

#define DW_CHFR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean UnitDelay_DSTATE_hz;       /* '<S114>/Unit Delay' */

#define DW_CHFR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean UnitDelay_DSTATE_c3;       /* '<S112>/Unit Delay' */

#define DW_CHFR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean UnitDelay_DSTATE_gv;       /* '<S104>/Unit Delay' */

#define DW_CHFR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean UnitDelay_DSTATE_p;        /* '<S75>/Unit Delay' */

#define DW_CHFR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean UnitDelay_DSTATE_ew;       /* '<S68>/Unit Delay' */

#define DW_CHFR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean UnitDelay_DSTATE_e1;       /* '<S67>/Unit Delay' */

#define DW_CHFR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean UnitDelay_DSTATE_gdc;      /* '<S66>/Unit Delay' */

#define DW_CHFR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean UnitDelay_DSTATE_ds;       /* '<S65>/Unit Delay' */

#define DW_CHFR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean UnitDelay_DSTATE_ka;       /* '<S64>/Unit Delay' */

#define DW_CHFR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean UnitDelay_DSTATE_mi;       /* '<S63>/Unit Delay' */

#define DW_CHFR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean UnitDelay_DSTATE_mg;       /* '<S55>/Unit Delay' */

#define DW_CHFR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean UnitDelay_DSTATE_ir;       /* '<S25>/Unit Delay' */

#define DW_CHFR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHFR_1

    TePMDR_e_PowerMode UnitDelay_DSTATE_p0;/* '<S137>/Unit Delay' */

#define DW_CHFR_AC_T_VARIANT_EXISTS
#endif

    uint8 StatusByte_LostCommBCCM;     /* '<Root>/DS_StatusByte_LostCommBCCM' */
    uint8 StatusByte_LostCommBCM;      /* '<Root>/DS_StatusByte_LostCommBCM' */
    uint8 StatusByte_LostCommIDCM;     /* '<Root>/DS_StatusByte_LostCommIDCM' */
    uint8 StatusByte_LostCommOBCM;     /* '<Root>/DS_StatusByte_LostCommOBCM' */
    uint8 StatusByte_LostComm_IDCM_CANC11;
                               /* '<Root>/DS_StatusByte_LostComm_IDCM_CANC11' */

#if Rte_SysCon_Variant_CHFR_1

    uint8 StatusByte_CtrlPilotCkt;     /* '<Root>/DS_StatusByte_CtrlPilotCkt' */

#define DW_CHFR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHFR_1

    uint8 StatusByte_LosCommBECM_A;   /* '<Root>/DS_StatusByte_LosCommBECM_A' */

#define DW_CHFR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHFR_1

    uint8 StatusByte_LosCommBECM_A_CANC11;
                               /* '<Root>/DS_StatusByte_LosCommBECM_A_CANC11' */

#define DW_CHFR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHFR_1

    uint8 is_active_c8_CHFR_ac;        /* '<S131>/Stateflow Chart' */

#define DW_CHFR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHFR_1

    uint8 is_c8_CHFR_ac;               /* '<S131>/Stateflow Chart' */

#define DW_CHFR_AC_T_VARIANT_EXISTS
#endif

}
DW_CHFR_ac_T;

/* Invariant block signals (default storage) */
typedef struct
{

#if Rte_SysCon_Variant_CHFR_1

    const sint16 Switch13_i;           /* '<S24>/Switch13' */

#define CONSTB_CHFR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHFR_1

    const sint16 Switch14_b;           /* '<S24>/Switch14' */

#define CONSTB_CHFR_AC_T_VARIANT_EXISTS
#endif

#ifndef CONSTB_CHFR_AC_T_VARIANT_EXISTS

    char _rt_unused;

#endif

}
ConstB_CHFR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CHFR
#include "MemMap.h"

extern VAR(B_CHFR_ac_T, CHFR_VAR_INIT) CHFR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CHFR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CHFR
#include "MemMap.h"

extern VAR(DW_CHFR_ac_T, CHFR_VAR_INIT) CHFR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CHFR
#include "MemMap.h"
#define START_SEC_CONST_UNSPECIFIED_CHFR
#include "MemMap.h"

extern CONST(ConstB_CHFR_ac_T, CHFR_VAR_INIT) CHFR_ac_ConstB;/* constant block i/o */

#define STOP_SEC_CONST_UNSPECIFIED_CHFR
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
 * '<Root>' : 'CHFR_ac'
 * '<S1>'   : 'CHFR_ac/CHFR_MedTED'
 * '<S2>'   : 'CHFR_ac/CHFR_PwrOff'
 * '<S3>'   : 'CHFR_ac/CHFR_PwrOn'
 * '<S4>'   : 'CHFR_ac/CHFR_MedTED/CHFC'
 * '<S5>'   : 'CHFR_ac/CHFR_MedTED/CHFI'
 * '<S6>'   : 'CHFR_ac/CHFR_MedTED/Output_Proc'
 * '<S7>'   : 'CHFR_ac/CHFR_MedTED/CHFC/Faults'
 * '<S8>'   : 'CHFR_ac/CHFR_MedTED/CHFC/NCR_Retry'
 * '<S9>'   : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault'
 * '<S10>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/IC_Messages'
 * '<S11>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ChrgFault_Rsn'
 * '<S12>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ChrgFault_Vectr'
 * '<S13>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ChrgSysFltLogic'
 * '<S14>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ConnectionFault'
 * '<S15>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/CurrentFault'
 * '<S16>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/CurrentFaultNF'
 * '<S17>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/KeCHFR_Cnt_UnplugDbncCnt'
 * '<S18>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/KeCHFR_b_Active'
 * '<S19>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/LOC_and_FA'
 * '<S20>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/Turn Off Delay Sample'
 * '<S21>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/VoltageFault'
 * '<S22>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/VoltageFaultNF'
 * '<S23>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ChrgFault_Rsn/IfThenElseif'
 * '<S24>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ChrgFault_Vectr/IfThenElseif'
 * '<S25>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ChrgSysFltLogic/EdgeRising1'
 * '<S26>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ChrgSysFltLogic/Enumerated Value'
 * '<S27>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ChrgSysFltLogic/Enumerated Value1'
 * '<S28>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ChrgSysFltLogic/Enumerated Value13'
 * '<S29>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ChrgSysFltLogic/Enumerated Value14'
 * '<S30>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ChrgSysFltLogic/Enumerated Value15'
 * '<S31>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ChrgSysFltLogic/Enumerated Value16'
 * '<S32>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ChrgSysFltLogic/Enumerated Value17'
 * '<S33>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ChrgSysFltLogic/Enumerated Value18'
 * '<S34>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ChrgSysFltLogic/Enumerated Value19'
 * '<S35>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ChrgSysFltLogic/Enumerated Value2'
 * '<S36>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ChrgSysFltLogic/Enumerated_Constant'
 * '<S37>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ChrgSysFltLogic/Enumerated_Constant1'
 * '<S38>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ChrgSysFltLogic/Enumerated_Constant3'
 * '<S39>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ChrgSysFltLogic/Enumerated_Constant7'
 * '<S40>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ChrgSysFltLogic/KeCHFR_Cnt_12VFault'
 * '<S41>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ChrgSysFltLogic/KeCHFR_Cnt_DbncAC_PresFlt'
 * '<S42>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ChrgSysFltLogic/KeCHFR_Cnt_DbncChrgPortFlt'
 * '<S43>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ChrgSysFltLogic/KeCHFR_Cnt_DbncOBCMSig2'
 * '<S44>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ChrgSysFltLogic/KeCHFR_Cnt_DbncStopChrg'
 * '<S45>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ChrgSysFltLogic/KeCHFR_b_Allow12VFault'
 * '<S46>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ChrgSysFltLogic/KeCHFR_b_ChargeFaultOvrd5'
 * '<S47>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ChrgSysFltLogic/KeCHFR_b_ChargeFaultOvrdVal5'
 * '<S48>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ChrgSysFltLogic/KeCHFR_b_EnblChrgFailSts1'
 * '<S49>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ChrgSysFltLogic/KeCHFR_b_EnblChrgFailSts2'
 * '<S50>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ChrgSysFltLogic/KeCHFR_b_EnblChrgFailSts3'
 * '<S51>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ChrgSysFltLogic/KeCHFR_b_EnblChrgFailSts4'
 * '<S52>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ChrgSysFltLogic/KeCHFR_b_IgnoreChrgFailStsDC'
 * '<S53>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ChrgSysFltLogic/KeCHFR_e_InterMarketsSelection'
 * '<S54>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ChrgSysFltLogic/SCALAR_BLK'
 * '<S55>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ChrgSysFltLogic/Signal Latch On With Reset'
 * '<S56>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ChrgSysFltLogic/Turn On Delay Sample1'
 * '<S57>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ChrgSysFltLogic/Turn On Delay Sample2'
 * '<S58>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ChrgSysFltLogic/Turn On Delay Sample3'
 * '<S59>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ChrgSysFltLogic/Turn On Delay Sample4'
 * '<S60>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ChrgSysFltLogic/Turn On Delay Sample5'
 * '<S61>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ChrgSysFltLogic/Turn On Delay Sample6'
 * '<S62>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ChrgSysFltLogic/getFaultActiveAndTestCompleted'
 * '<S63>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ChrgSysFltLogic/Turn On Delay Sample1/EdgeRising'
 * '<S64>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ChrgSysFltLogic/Turn On Delay Sample2/EdgeRising'
 * '<S65>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ChrgSysFltLogic/Turn On Delay Sample3/EdgeRising'
 * '<S66>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ChrgSysFltLogic/Turn On Delay Sample4/EdgeRising'
 * '<S67>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ChrgSysFltLogic/Turn On Delay Sample5/EdgeRising'
 * '<S68>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ChrgSysFltLogic/Turn On Delay Sample6/EdgeRising'
 * '<S69>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ConnectionFault/Enumerated Value'
 * '<S70>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ConnectionFault/KeCHFR_b_ChargeFaultOvrd1'
 * '<S71>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ConnectionFault/KeCHFR_b_ChargeFaultOvrdVal1'
 * '<S72>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ConnectionFault/KeCHFR_t_DbncChargingErrors'
 * '<S73>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ConnectionFault/KeCHFR_v_SpeedThreshold'
 * '<S74>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ConnectionFault/Turn On Delay Sample'
 * '<S75>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/ConnectionFault/Turn On Delay Sample/EdgeRising'
 * '<S76>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/CurrentFault/Enumerated Value'
 * '<S77>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/CurrentFault/KeCHFR_I_AC_SideCrntUpperLim'
 * '<S78>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/CurrentFault/KeCHFR_I_BattMaxCurrAlwd'
 * '<S79>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/CurrentFault/KeCHFR_b_ChargeFaultOvrd3'
 * '<S80>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/CurrentFault/KeCHFR_b_ChargeFaultOvrdVal3'
 * '<S81>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/CurrentFault/KeCHFR_t_DbncChargingErrors'
 * '<S82>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/CurrentFault/Turn On Delay Sample'
 * '<S83>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/CurrentFault/Turn On Delay Sample/EdgeRising'
 * '<S84>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/LOC_and_FA/Enumerated_Constant'
 * '<S85>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/LOC_and_FA/Enumerated_Constant1'
 * '<S86>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/LOC_and_FA/Enumerated_Constant2'
 * '<S87>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/LOC_and_FA/HeCHFR_b_LOCBPCMSecBus'
 * '<S88>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/LOC_and_FA/KeCHFR_Cnt_DbncFA'
 * '<S89>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/LOC_and_FA/KeCHFR_Cnt_DbncFA_DFIR'
 * '<S90>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/LOC_and_FA/KeCHFR_b_AllowAC_DCFA'
 * '<S91>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/LOC_and_FA/KeCHFR_b_AllowDC_ACFA'
 * '<S92>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/LOC_and_FA/KeCHFR_b_AllowDischrg_FA'
 * '<S93>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/LOC_and_FA/KeCHFR_b_LOC_BPCM'
 * '<S94>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/LOC_and_FA/KeCHFR_b_SwtchblBttryPckEnbl'
 * '<S95>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/LOC_and_FA/Turn On Delay Sample'
 * '<S96>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/LOC_and_FA/Turn On Delay Sample1'
 * '<S97>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/LOC_and_FA/Turn On Delay Sample2'
 * '<S98>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/LOC_and_FA/getFaultActiveAndTestCompleted'
 * '<S99>'  : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/LOC_and_FA/getFaultActiveAndTestCompleted1'
 * '<S100>' : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/LOC_and_FA/Turn On Delay Sample/EdgeRising'
 * '<S101>' : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/LOC_and_FA/Turn On Delay Sample1/EdgeRising'
 * '<S102>' : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/LOC_and_FA/Turn On Delay Sample2/EdgeRising'
 * '<S103>' : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/Turn Off Delay Sample/EdgeFalling'
 * '<S104>' : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/VoltageFault/EdgeFalling'
 * '<S105>' : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/VoltageFault/Enumerated_Constant'
 * '<S106>' : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/VoltageFault/KeCHFR_U_AC_VoltLowerLim'
 * '<S107>' : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/VoltageFault/KeCHFR_U_AC_VoltUpperLim'
 * '<S108>' : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/VoltageFault/KeCHFR_U_Bat_VoltUpperLim'
 * '<S109>' : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/VoltageFault/KeCHFR_b_ChargeFaultOvrd2'
 * '<S110>' : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/VoltageFault/KeCHFR_b_ChargeFaultOvrdVal2'
 * '<S111>' : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/VoltageFault/KeCHFR_t_DbncChargingErrorsV'
 * '<S112>' : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/VoltageFault/Signal Latch On With Reset'
 * '<S113>' : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/VoltageFault/Turn On Delay Sample'
 * '<S114>' : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/ChargeFault/VoltageFault/Turn On Delay Sample/EdgeRising'
 * '<S115>' : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/IC_Messages/KaCHFR_b_ChrgFault'
 * '<S116>' : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/IC_Messages/KaCHFR_b_ChrgFaultnotPI'
 * '<S117>' : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/IC_Messages/KeCHFR_Cnt_DbncChrgSysFault'
 * '<S118>' : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/IC_Messages/KeCHFR_b_ChrgFaultSelector'
 * '<S119>' : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/IC_Messages/Popup_MSGs'
 * '<S120>' : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/IC_Messages/ThermBudgEncode'
 * '<S121>' : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/IC_Messages/Turn On Delay Sample'
 * '<S122>' : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/IC_Messages/Popup_MSGs/Enumerated Value2'
 * '<S123>' : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/IC_Messages/Popup_MSGs/KaCHFR_b_MSG6'
 * '<S124>' : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/IC_Messages/Popup_MSGs/KeCHFR_Cnt_DbncMSG6'
 * '<S125>' : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/IC_Messages/Popup_MSGs/KeCHFR_b_MSG6Selector'
 * '<S126>' : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/IC_Messages/Popup_MSGs/Turn On Delay Sample'
 * '<S127>' : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/IC_Messages/Popup_MSGs/Turn On Delay Sample/EdgeRising'
 * '<S128>' : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/IC_Messages/ThermBudgEncode/KtCHFR_k_ThrmalBudEncod'
 * '<S129>' : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/IC_Messages/ThermBudgEncode/Protected Division'
 * '<S130>' : 'CHFR_ac/CHFR_MedTED/CHFC/Faults/IC_Messages/Turn On Delay Sample/EdgeRising'
 * '<S131>' : 'CHFR_ac/CHFR_MedTED/CHFC/NCR_Retry/Else'
 * '<S132>' : 'CHFR_ac/CHFR_MedTED/CHFC/NCR_Retry/If Action Subsystem'
 * '<S133>' : 'CHFR_ac/CHFR_MedTED/CHFC/NCR_Retry/Input_and_NCV'
 * '<S134>' : 'CHFR_ac/CHFR_MedTED/CHFC/NCR_Retry/KeCHFR_b_EnblCyclicNCR'
 * '<S135>' : 'CHFR_ac/CHFR_MedTED/CHFC/NCR_Retry/NCR_SF'
 * '<S136>' : 'CHFR_ac/CHFR_MedTED/CHFC/NCR_Retry/NCV_Loops'
 * '<S137>' : 'CHFR_ac/CHFR_MedTED/CHFC/NCR_Retry/Retry_Reset'
 * '<S138>' : 'CHFR_ac/CHFR_MedTED/CHFC/NCR_Retry/Else/Stateflow Chart'
 * '<S139>' : 'CHFR_ac/CHFR_MedTED/CHFC/NCR_Retry/Input_and_NCV/KeCHFR_Cnt_KR1'
 * '<S140>' : 'CHFR_ac/CHFR_MedTED/CHFC/NCR_Retry/Input_and_NCV/KeCHFR_Cnt_KR10'
 * '<S141>' : 'CHFR_ac/CHFR_MedTED/CHFC/NCR_Retry/Input_and_NCV/KeCHFR_Cnt_KR11'
 * '<S142>' : 'CHFR_ac/CHFR_MedTED/CHFC/NCR_Retry/Input_and_NCV/KeCHFR_Cnt_KR12'
 * '<S143>' : 'CHFR_ac/CHFR_MedTED/CHFC/NCR_Retry/Input_and_NCV/KeCHFR_Cnt_KR13'
 * '<S144>' : 'CHFR_ac/CHFR_MedTED/CHFC/NCR_Retry/Input_and_NCV/KeCHFR_Cnt_KR14'
 * '<S145>' : 'CHFR_ac/CHFR_MedTED/CHFC/NCR_Retry/Input_and_NCV/KeCHFR_Cnt_KR15'
 * '<S146>' : 'CHFR_ac/CHFR_MedTED/CHFC/NCR_Retry/Input_and_NCV/KeCHFR_Cnt_KR16'
 * '<S147>' : 'CHFR_ac/CHFR_MedTED/CHFC/NCR_Retry/Input_and_NCV/KeCHFR_Cnt_KR2'
 * '<S148>' : 'CHFR_ac/CHFR_MedTED/CHFC/NCR_Retry/Input_and_NCV/KeCHFR_Cnt_KR3'
 * '<S149>' : 'CHFR_ac/CHFR_MedTED/CHFC/NCR_Retry/Input_and_NCV/KeCHFR_Cnt_KR4'
 * '<S150>' : 'CHFR_ac/CHFR_MedTED/CHFC/NCR_Retry/Input_and_NCV/KeCHFR_Cnt_KR5'
 * '<S151>' : 'CHFR_ac/CHFR_MedTED/CHFC/NCR_Retry/Input_and_NCV/KeCHFR_Cnt_KR6'
 * '<S152>' : 'CHFR_ac/CHFR_MedTED/CHFC/NCR_Retry/Input_and_NCV/KeCHFR_Cnt_KR7'
 * '<S153>' : 'CHFR_ac/CHFR_MedTED/CHFC/NCR_Retry/Input_and_NCV/KeCHFR_Cnt_KR8'
 * '<S154>' : 'CHFR_ac/CHFR_MedTED/CHFC/NCR_Retry/Input_and_NCV/KeCHFR_Cnt_KR9'
 * '<S155>' : 'CHFR_ac/CHFR_MedTED/CHFC/NCR_Retry/Input_and_NCV/Not_chrg_Vector'
 * '<S156>' : 'CHFR_ac/CHFR_MedTED/CHFC/NCR_Retry/Input_and_NCV/Seq_Add'
 * '<S157>' : 'CHFR_ac/CHFR_MedTED/CHFC/NCR_Retry/Input_and_NCV/Subsystem'
 * '<S158>' : 'CHFR_ac/CHFR_MedTED/CHFC/NCR_Retry/Input_and_NCV/Not_chrg_Vector/KaCHFR_k_HPMRDefaultError'
 * '<S159>' : 'CHFR_ac/CHFR_MedTED/CHFC/NCR_Retry/Input_and_NCV/Not_chrg_Vector/KeCHFR_K_NCVSize'
 * '<S160>' : 'CHFR_ac/CHFR_MedTED/CHFC/NCR_Retry/NCV_Loops/Stateflow_Chart'
 * '<S161>' : 'CHFR_ac/CHFR_MedTED/CHFC/NCR_Retry/Retry_Reset/Counter Reset  Enabled '
 * '<S162>' : 'CHFR_ac/CHFR_MedTED/CHFC/NCR_Retry/Retry_Reset/EdgeFalling'
 * '<S163>' : 'CHFR_ac/CHFR_MedTED/CHFC/NCR_Retry/Retry_Reset/EdgeRising'
 * '<S164>' : 'CHFR_ac/CHFR_MedTED/CHFC/NCR_Retry/Retry_Reset/EdgeRising1'
 * '<S165>' : 'CHFR_ac/CHFR_MedTED/CHFC/NCR_Retry/Retry_Reset/EdgeRising2'
 * '<S166>' : 'CHFR_ac/CHFR_MedTED/CHFC/NCR_Retry/Retry_Reset/EdgeRising3'
 * '<S167>' : 'CHFR_ac/CHFR_MedTED/CHFC/NCR_Retry/Retry_Reset/Enum'
 * '<S168>' : 'CHFR_ac/CHFR_MedTED/CHFC/NCR_Retry/Retry_Reset/KaCHFR_K_NbrRetries'
 * '<S169>' : 'CHFR_ac/CHFR_MedTED/CHFC/NCR_Retry/Retry_Reset/KeCHFR_b_RetrySelector'
 * '<S170>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_ACSideVolt_L2FAOvrd'
 * '<S171>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_ACSideVolt_L2FAVal'
 * '<S172>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_ACSideVolt_L3FAOvrd'
 * '<S173>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_ACSideVolt_L3FAVal'
 * '<S174>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_AC_InputVltOBCMFAOvrd'
 * '<S175>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_AC_InputVltOBCMFAVal'
 * '<S176>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_BattSide_CurrFAOvrd'
 * '<S177>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_BattSide_CurrFAVal'
 * '<S178>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_BattSide_VoltFAOvrd'
 * '<S179>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_BattSide_VoltFAVal'
 * '<S180>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_ChargeReqOvrd'
 * '<S181>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_ChargeReqOvrdVal'
 * '<S182>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_ChargingStat_BPCMFAOvrd'
 * '<S183>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_ChargingStat_BPCMFAVal'
 * '<S184>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_ChrgFailStsFAOvrd'
 * '<S185>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_ChrgFailStsFAVal'
 * '<S186>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_ChrgFailStsOvrd'
 * '<S187>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_DCIsolStsFAOvrd'
 * '<S188>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_DCIsolStsFAVal'
 * '<S189>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_DschrgFAOvrd'
 * '<S190>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_DschrgFAVal'
 * '<S191>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_Dschrg_FailureOvrd'
 * '<S192>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_EVSEIsolSts_FAOvrd'
 * '<S193>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_EVSEIsolSts_FAVal'
 * '<S194>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_EVSEOutputCurr_FAOvrd'
 * '<S195>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_EVSEOutputCurr_FAVal'
 * '<S196>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_EVSEOutputVolt_FAOvrd'
 * '<S197>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_EVSEOutputVolt_FAVal'
 * '<S198>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_EVSE_ProxStat_Ovrd'
 * '<S199>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_HVBat_DC_CntctrStatFAOvrd'
 * '<S200>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_HVBat_DC_CntctrStatFAVal'
 * '<S201>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_HV_AuxLoadOffReqFAovrd'
 * '<S202>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_HV_AuxLoadOffReqFAovrdVal'
 * '<S203>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_HV_BatCntctrStatFAOvrd'
 * '<S204>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_HV_BatCntctrStatFAVal'
 * '<S205>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_HV_BatCurrFAOvrd'
 * '<S206>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_HV_BatCurrFAVal'
 * '<S207>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_HV_BatModTempMaxFAOvrd'
 * '<S208>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_HV_BatModTempMaxFAVal'
 * '<S209>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_HV_BatModTempMinFAOvrd'
 * '<S210>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_HV_BatModTempMinFAVal'
 * '<S211>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_HV_BatModVoltMaxFAOvrd'
 * '<S212>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_HV_BatModVoltMaxFAVal'
 * '<S213>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_HV_BatModVoltMinFAOvrd'
 * '<S214>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_HV_BatModVoltMinFAVal'
 * '<S215>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_HV_BatVoltFAOvrd'
 * '<S216>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_HV_BatVoltFAVal'
 * '<S217>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_HV_SeriesVoltFAovrd'
 * '<S218>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_HV_SeriesVoltFAovrdVal'
 * '<S219>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_IDCM_DCCAOvrd'
 * '<S220>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_IDCM_DCCAOvrdVal'
 * '<S221>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_J1772ICAFAOvrd'
 * '<S222>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_J1772ICAFAVal'
 * '<S223>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_MaxChgCurrAlwdFAOvrd'
 * '<S224>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_MaxChgCurrAlwdFAVal'
 * '<S225>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_OFCRThrmSnsStopChrgOvrd'
 * '<S226>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_OFCRThrmSnsStopChrgVal'
 * '<S227>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_Resp_Code_FAOvrd'
 * '<S228>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_Resp_Code_FAVal'
 * '<S229>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_TxMsgSelector'
 * '<S230>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_TxMsgStatFAOvrd'
 * '<S231>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_b_TxMsgStatFAVal'
 * '<S232>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_e_ChrgFailStsOvrdVal'
 * '<S233>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_e_Dschrg_FailureVal'
 * '<S234>' : 'CHFR_ac/CHFR_MedTED/CHFI/KeCHFR_e_EVSE_ProxStat_Val'
 * '<S235>' : 'CHFR_ac/CHFR_MedTED/Output_Proc/KeCHFR_b_MSG5_Ovrd'
 * '<S236>' : 'CHFR_ac/CHFR_MedTED/Output_Proc/KeCHFR_b_MSG5_Val'
 * '<S237>' : 'CHFR_ac/CHFR_MedTED/Output_Proc/KeCHFR_b_MSG6_Ovrd'
 * '<S238>' : 'CHFR_ac/CHFR_MedTED/Output_Proc/KeCHFR_b_MSG6_Val'
 * '<S239>' : 'CHFR_ac/CHFR_MedTED/Output_Proc/KeCHFR_b_MSG8_Ovrd'
 * '<S240>' : 'CHFR_ac/CHFR_MedTED/Output_Proc/KeCHFR_b_MSG8_Val'
 * '<S241>' : 'CHFR_ac/CHFR_MedTED/Output_Proc/Set Block15'
 * '<S242>' : 'CHFR_ac/CHFR_MedTED/Output_Proc/Set Block17'
 * '<S243>' : 'CHFR_ac/CHFR_MedTED/Output_Proc/Set Block20'
 * '<S244>' : 'CHFR_ac/CHFR_MedTED/Output_Proc/Set Block29'
 * '<S245>' : 'CHFR_ac/CHFR_MedTED/Output_Proc/Set Block30'
 * '<S246>' : 'CHFR_ac/CHFR_MedTED/Output_Proc/Set Block31'
 * '<S247>' : 'CHFR_ac/CHFR_MedTED/Output_Proc/Set Block32'
 * '<S248>' : 'CHFR_ac/CHFR_MedTED/Output_Proc/Set Block4'
 * '<S249>' : 'CHFR_ac/CHFR_MedTED/Output_Proc/Set Block5'
 * '<S250>' : 'CHFR_ac/CHFR_PwrOn/Variant Subsystem'
 * '<S251>' : 'CHFR_ac/CHFR_PwrOn/Variant Subsystem/CHFO_FUNC'
 * '<S252>' : 'CHFR_ac/CHFR_PwrOn/Variant Subsystem/CHFO_NF'
 * '<S253>' : 'CHFR_ac/CHFR_PwrOn/Variant Subsystem/CHFO_FUNC/DSM_Init'
 */
#endif                                 /* RTW_HEADER_CHFR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
