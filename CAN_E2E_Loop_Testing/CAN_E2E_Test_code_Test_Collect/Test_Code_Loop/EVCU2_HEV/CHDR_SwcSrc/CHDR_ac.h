/*
 * File: CHDR_ac.h
 *
 * Code generated for Simulink model 'CHDR_ac'.
 *
 * Model version                  : 1.636
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:14:34 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_CHDR_ac_h_
#define RTW_HEADER_CHDR_ac_h_
#include <math.h>
#include "Rte_Type.h"
#ifndef CHDR_ac_COMMON_INCLUDES_
#define CHDR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CHDR.h"
#endif                                 /* CHDR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_CHDR_ac_T
{

#if Rte_SysCon_Variant_CHDR_FUNC

    float64 CHDMOStateTimer;           /* '<S8>/CHAdeMO' */

#define B_CHDR_AC_T_VARIANT_EXISTS
#endif

    float32 VariantMergeForOutportVeCHDR_I_;
    float32 VariantMergeForOutportVeCHDR__p;
    float32 VariantMergeForOutportVeCHDR_K_;
    float32 VariantMergeForOutportVeCHDR_Pc;
    float32 VariantMergeForOutportVeCHDR_U_;
    float32 VariantMergeForOutportVeCHDR_q_;
    float32 VariantMergeForOutportVeCHDR_t_;
    float32 VariantMergeForOutportVeCHDR__g;
    float32 VariantMergeForOutportVeCHDR__d;

#if Rte_SysCon_Variant_CHDR_FUNC

    float32 OutportBufferForChrgdRefrncCnst;

#define B_CHDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    float32 OutportBufferForMaxChrgTime_min;

#define B_CHDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    float32 OutportBufferForMaxChrgTime_sec;

#define B_CHDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    float32 CHDMOexitReason;           /* '<S8>/CHAdeMO' */

#define B_CHDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    float32 HVCM_EV_TargetCurr;        /* '<S8>/CHAdeMO' */

#define B_CHDR_AC_T_VARIANT_EXISTS
#endif

    boolean VariantMergeForOutportVaCHDR_b_[4];
    boolean VariantMergeForOutportVeCHDR_b_;
    boolean VariantMergeForOutportVeCHDR__n;
    boolean VariantMergeForOutportVeCHDR_gq;
    boolean VariantMergeForOutportVeCHDR__h;
    boolean VariantMergeForOutportVeCHDR_hb;
    boolean VariantMergeForOutportVeCHDR__m;
    boolean VariantMergeForOutportVeCHDR__f;
    boolean VariantMergeForOutportVeCHDR_hv;
    boolean VariantMergeForOutportVeCHDR_fg;
    boolean VariantMergeForOutportVeCHDR__i;
    boolean VariantMergeForOutportVeCHDR__a;
    boolean VariantMergeForOutportVeCHDR__o;
    boolean VariantMergeForOutportVeCHDR_on;
    boolean VariantMergeForOutportVeCHDR_ni;
    boolean VariantMergeForOutportVeCHDR_pi;
    boolean VariantMergeForOutportVeCHDR_fd;

#if Rte_SysCon_Variant_CHDR_FUNC

    boolean TmpSignalConversionAtSecureConn;

#define B_CHDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    boolean OutportBufferForEVCU_CP3Cmd;/* '<S3>/Const1' */

#define B_CHDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    boolean OutportBufferForEVContactorSts;/* '<S3>/Const2' */

#define B_CHDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    boolean DCChargeInitialized;       /* '<S8>/CHAdeMO' */

#define B_CHDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    boolean HVCM_DC_Isolation_Disable_Comma;/* '<S8>/CHAdeMO' */

#define B_CHDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    boolean HVCM_EV_Ready;             /* '<S8>/CHAdeMO' */

#define B_CHDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    boolean vehicle_status;            /* '<S8>/CHAdeMO' */

#define B_CHDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    boolean HVCMS_ReadyToChargeState;  /* '<S8>/CHAdeMO' */

#define B_CHDR_AC_T_VARIANT_EXISTS
#endif

    TeOBCR_e_DCCntctrCmd VariantMergeForOutportVeCHDR_e_;

#if Rte_SysCon_Variant_CHDR_FUNC

    TeOBCR_e_DCCntctrCmd DC_CntctrCmd; /* '<S8>/CHAdeMO' */

#define B_CHDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    TeIDCR_e_OBCM_CP3Sts TmpSignalConversionAtOBCMCP3Sts;

#define B_CHDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    TeIDCR_e_OBCM_CP2Sts TmpSignalConversionAtOBCMCP2Sts;

#define B_CHDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    TeIDCR_e_OBCM_CP1Sts TmpSignalConversionAtOBCMCP1Sts;

#define B_CHDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    TeIDCR_e_EVSE_Error TmpSignalConversionAtEVSE_Error;

#define B_CHDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    TeIDCR_e_EVSE_ChrgStopControl TmpSignalConversionAtEVSE_ChrgS;

#define B_CHDR_AC_T_VARIANT_EXISTS
#endif

    TeIDCR_e_CHAdeMOPrtcl VariantMergeForOutportVeCHDR_nv;

#if Rte_SysCon_Variant_CHDR_FUNC

    TeIDCR_e_CHAdeMOPrtcl OutportBufferForCHAdeMOProtocol;

#define B_CHDR_AC_T_VARIANT_EXISTS
#endif

    TeCHDR_e_CHDMOChrgSysStat VariantMergeForOutportVeCHDR__c;

#if Rte_SysCon_Variant_CHDR_FUNC

    TeCHDR_e_CHDMOChrgSysStat CHDMOChrgSysStat;/* '<S8>/CHAdeMO' */

#define B_CHDR_AC_T_VARIANT_EXISTS
#endif

}
B_CHDR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_CHDR_ac_T
{
    float64 CHDMOChargeTimer;          /* '<S8>/CHAdeMO' */

#if Rte_SysCon_Variant_CHDR_FUNC

    float64 CHDMOinitStateTimer;       /* '<S8>/CHAdeMO' */

#define DW_CHDR_AC_T_VARIANT_EXISTS
#endif

    float64 DCCHDMOStateTimer;         /* '<S8>/CHAdeMO' */

#if Rte_SysCon_Variant_CHDR_FUNC

    float64 ShtdwnTypeCHDMO;           /* '<S8>/CHAdeMO' */

#define DW_CHDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    float32 UnitDelay2_DSTATE;         /* '<S35>/Unit Delay2' */

#define DW_CHDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    uint16 UnitDelay_DSTATE;           /* '<S36>/Unit Delay' */

#define DW_CHDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    uint16 UnitDelay_DSTATE_m;         /* '<S64>/Unit Delay' */

#define DW_CHDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    uint16 UnitDelay_DSTATE_g;         /* '<S63>/Unit Delay' */

#define DW_CHDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    uint16 UnitDelay_DSTATE_p;         /* '<S51>/Unit Delay' */

#define DW_CHDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    uint16 UnitDelay_DSTATE_l;         /* '<S50>/Unit Delay' */

#define DW_CHDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    uint16 UnitDelay_DSTATE_h;         /* '<S49>/Unit Delay' */

#define DW_CHDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    uint16 UnitDelay_DSTATE_f;         /* '<S48>/Unit Delay' */

#define DW_CHDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    uint16 UnitDelay_DSTATE_hg;        /* '<S47>/Unit Delay' */

#define DW_CHDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    uint16 UnitDelay_DSTATE_h5;        /* '<S46>/Unit Delay' */

#define DW_CHDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    boolean UnitDelay6_DSTATE;         /* '<S35>/Unit Delay6' */

#define DW_CHDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    boolean UnitDelay3_DSTATE;         /* '<S34>/Unit Delay3' */

#define DW_CHDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    boolean UnitDelay_DSTATE_a;        /* '<S67>/Unit Delay' */

#define DW_CHDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    boolean UnitDelay_DSTATE_i;        /* '<S66>/Unit Delay' */

#define DW_CHDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    boolean UnitDelay_DSTATE_d;        /* '<S65>/Unit Delay' */

#define DW_CHDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    boolean UnitDelay_DSTATE_k;        /* '<S57>/Unit Delay' */

#define DW_CHDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    boolean UnitDelay_DSTATE_kn;       /* '<S56>/Unit Delay' */

#define DW_CHDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    boolean UnitDelay_DSTATE_e;        /* '<S55>/Unit Delay' */

#define DW_CHDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    boolean UnitDelay_DSTATE_du;       /* '<S54>/Unit Delay' */

#define DW_CHDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    boolean UnitDelay_DSTATE_iy;       /* '<S53>/Unit Delay' */

#define DW_CHDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    boolean UnitDelay_DSTATE_o;        /* '<S52>/Unit Delay' */

#define DW_CHDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    boolean UnitDelay_DSTATE_m2;       /* '<S8>/Unit Delay' */

#define DW_CHDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    boolean UnitDelay1_DSTATE;         /* '<S8>/Unit Delay1' */

#define DW_CHDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    boolean UnitDelay2_DSTATE_c;       /* '<S8>/Unit Delay2' */

#define DW_CHDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    boolean UnitDelay3_DSTATE_c;       /* '<S8>/Unit Delay3' */

#define DW_CHDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    boolean UnitDelay_DSTATE_mr;       /* '<S20>/Unit Delay' */

#define DW_CHDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    uint8 is_active_c1_CHDR_ac;        /* '<S8>/CHAdeMO' */

#define DW_CHDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    uint8 is_c1_CHDR_ac;               /* '<S8>/CHAdeMO' */

#define DW_CHDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    uint8 is_CHDMOShutdown;            /* '<S8>/CHAdeMO' */

#define DW_CHDR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHDR_FUNC

    uint8 is_CHDMOCommunication;       /* '<S8>/CHAdeMO' */

#define DW_CHDR_AC_T_VARIANT_EXISTS
#endif

}
DW_CHDR_ac_T;

/* Invariant block signals (default storage) */
typedef struct
{

#if Rte_SysCon_Variant_CHDR_FUNC

    const TeIDCR_e_CHAdeMOPrtcl Constant;/* '<S31>/Constant' */

#define CONSTB_CHDR_AC_T_VARIANT_EXISTS
#endif

#ifndef CONSTB_CHDR_AC_T_VARIANT_EXISTS

    char _rt_unused;

#endif

}
ConstB_CHDR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CHDR
#include "MemMap.h"

extern VAR(B_CHDR_ac_T, CHDR_VAR_INIT) CHDR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CHDR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CHDR
#include "MemMap.h"

extern VAR(DW_CHDR_ac_T, CHDR_VAR_INIT) CHDR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CHDR
#include "MemMap.h"
#define START_SEC_CONST_UNSPECIFIED_CHDR
#include "MemMap.h"

extern CONST(ConstB_CHDR_ac_T, CHDR_VAR_INIT) CHDR_ac_ConstB;/* constant block i/o */

#define STOP_SEC_CONST_UNSPECIFIED_CHDR
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
 * '<Root>' : 'CHDR_ac'
 * '<S1>'   : 'CHDR_ac/CHDR_MedTED'
 * '<S2>'   : 'CHDR_ac/CHDR_PwrOn'
 * '<S3>'   : 'CHDR_ac/CHDR_MedTED/CHDC'
 * '<S4>'   : 'CHDR_ac/CHDR_MedTED/CHDI'
 * '<S5>'   : 'CHDR_ac/CHDR_MedTED/Output_Proc'
 * '<S6>'   : 'CHDR_ac/CHDR_MedTED/CHDC/CHDR_OBCR_Integration'
 * '<S7>'   : 'CHDR_ac/CHDR_MedTED/CHDC/Checks'
 * '<S8>'   : 'CHDR_ac/CHDR_MedTED/CHDC/DC_CHDMO_SF'
 * '<S9>'   : 'CHDR_ac/CHDR_MedTED/CHDC/Flags_Monitoring'
 * '<S10>'  : 'CHDR_ac/CHDR_MedTED/CHDC/Signals_Processing'
 * '<S11>'  : 'CHDR_ac/CHDR_MedTED/CHDC/CHDR_OBCR_Integration/Enumerated Constant1'
 * '<S12>'  : 'CHDR_ac/CHDR_MedTED/CHDC/CHDR_OBCR_Integration/Enumerated Constant2'
 * '<S13>'  : 'CHDR_ac/CHDR_MedTED/CHDC/CHDR_OBCR_Integration/Enumerated Constant3'
 * '<S14>'  : 'CHDR_ac/CHDR_MedTED/CHDC/CHDR_OBCR_Integration/Enumerated Constant4'
 * '<S15>'  : 'CHDR_ac/CHDR_MedTED/CHDC/CHDR_OBCR_Integration/Enumerated Constant5'
 * '<S16>'  : 'CHDR_ac/CHDR_MedTED/CHDC/CHDR_OBCR_Integration/Enumerated Constant6'
 * '<S17>'  : 'CHDR_ac/CHDR_MedTED/CHDC/CHDR_OBCR_Integration/Enumerated Constant7'
 * '<S18>'  : 'CHDR_ac/CHDR_MedTED/CHDC/CHDR_OBCR_Integration/Enumerated Constant8'
 * '<S19>'  : 'CHDR_ac/CHDR_MedTED/CHDC/Checks/KeCHDR_I_ChrgCrntMin'
 * '<S20>'  : 'CHDR_ac/CHDR_MedTED/CHDC/Checks/Subsystem1'
 * '<S21>'  : 'CHDR_ac/CHDR_MedTED/CHDC/Checks/Subsystem1/Enumerated Constant'
 * '<S22>'  : 'CHDR_ac/CHDR_MedTED/CHDC/Checks/Subsystem1/Enumerated Constant3'
 * '<S23>'  : 'CHDR_ac/CHDR_MedTED/CHDC/Checks/Subsystem1/Enumerated Constant4'
 * '<S24>'  : 'CHDR_ac/CHDR_MedTED/CHDC/DC_CHDMO_SF/CHAdeMO'
 * '<S25>'  : 'CHDR_ac/CHDR_MedTED/CHDC/DC_CHDMO_SF/Enum Set Block2'
 * '<S26>'  : 'CHDR_ac/CHDR_MedTED/CHDC/Flags_Monitoring/CHDMO_ChrgSysFlt'
 * '<S27>'  : 'CHDR_ac/CHDR_MedTED/CHDC/Flags_Monitoring/EVSE_ParamChck'
 * '<S28>'  : 'CHDR_ac/CHDR_MedTED/CHDC/Flags_Monitoring/EVSE_ParamChck/Enumerated Constant1'
 * '<S29>'  : 'CHDR_ac/CHDR_MedTED/CHDC/Flags_Monitoring/EVSE_ParamChck/Enumerated Constant2'
 * '<S30>'  : 'CHDR_ac/CHDR_MedTED/CHDC/Signals_Processing/Enumerated Constant1'
 * '<S31>'  : 'CHDR_ac/CHDR_MedTED/CHDC/Signals_Processing/Enumerated Constant2'
 * '<S32>'  : 'CHDR_ac/CHDR_MedTED/CHDC/Signals_Processing/Error_Flags_to_EVSE'
 * '<S33>'  : 'CHDR_ac/CHDR_MedTED/CHDC/Signals_Processing/KeCHDR_Cnt_DbncChrgPrmsionEnbl'
 * '<S34>'  : 'CHDR_ac/CHDR_MedTED/CHDC/Signals_Processing/Signals_to_EVSE'
 * '<S35>'  : 'CHDR_ac/CHDR_MedTED/CHDC/Signals_Processing/Subsystem1'
 * '<S36>'  : 'CHDR_ac/CHDR_MedTED/CHDC/Signals_Processing/Turn Off Delay Sample'
 * '<S37>'  : 'CHDR_ac/CHDR_MedTED/CHDC/Signals_Processing/Error_Flags_to_EVSE/Enumerated Constant2'
 * '<S38>'  : 'CHDR_ac/CHDR_MedTED/CHDC/Signals_Processing/Error_Flags_to_EVSE/KeCHDR_Cnt_DbncCrntDvtionErrFlag'
 * '<S39>'  : 'CHDR_ac/CHDR_MedTED/CHDC/Signals_Processing/Error_Flags_to_EVSE/KeCHDR_Cnt_DbncOvrTempFlag'
 * '<S40>'  : 'CHDR_ac/CHDR_MedTED/CHDC/Signals_Processing/Error_Flags_to_EVSE/KeCHDR_Cnt_DbncOvrVoltFlag'
 * '<S41>'  : 'CHDR_ac/CHDR_MedTED/CHDC/Signals_Processing/Error_Flags_to_EVSE/KeCHDR_Cnt_DbncUndrVoltFlag'
 * '<S42>'  : 'CHDR_ac/CHDR_MedTED/CHDC/Signals_Processing/Error_Flags_to_EVSE/KeCHDR_Cnt_DbncVhclDrvStsFlag'
 * '<S43>'  : 'CHDR_ac/CHDR_MedTED/CHDC/Signals_Processing/Error_Flags_to_EVSE/KeCHDR_Cnt_DbncVoltDvtionErrFlag'
 * '<S44>'  : 'CHDR_ac/CHDR_MedTED/CHDC/Signals_Processing/Error_Flags_to_EVSE/KeCHDR_I_CrntDvtionThrshld'
 * '<S45>'  : 'CHDR_ac/CHDR_MedTED/CHDC/Signals_Processing/Error_Flags_to_EVSE/KeCHDR_U_VoltDvtionThrshld'
 * '<S46>'  : 'CHDR_ac/CHDR_MedTED/CHDC/Signals_Processing/Error_Flags_to_EVSE/Turn On Delay Sample'
 * '<S47>'  : 'CHDR_ac/CHDR_MedTED/CHDC/Signals_Processing/Error_Flags_to_EVSE/Turn On Delay Sample1'
 * '<S48>'  : 'CHDR_ac/CHDR_MedTED/CHDC/Signals_Processing/Error_Flags_to_EVSE/Turn On Delay Sample2'
 * '<S49>'  : 'CHDR_ac/CHDR_MedTED/CHDC/Signals_Processing/Error_Flags_to_EVSE/Turn On Delay Sample3'
 * '<S50>'  : 'CHDR_ac/CHDR_MedTED/CHDC/Signals_Processing/Error_Flags_to_EVSE/Turn On Delay Sample4'
 * '<S51>'  : 'CHDR_ac/CHDR_MedTED/CHDC/Signals_Processing/Error_Flags_to_EVSE/Turn On Delay Sample5'
 * '<S52>'  : 'CHDR_ac/CHDR_MedTED/CHDC/Signals_Processing/Error_Flags_to_EVSE/Turn On Delay Sample/EdgeRising'
 * '<S53>'  : 'CHDR_ac/CHDR_MedTED/CHDC/Signals_Processing/Error_Flags_to_EVSE/Turn On Delay Sample1/EdgeRising'
 * '<S54>'  : 'CHDR_ac/CHDR_MedTED/CHDC/Signals_Processing/Error_Flags_to_EVSE/Turn On Delay Sample2/EdgeRising'
 * '<S55>'  : 'CHDR_ac/CHDR_MedTED/CHDC/Signals_Processing/Error_Flags_to_EVSE/Turn On Delay Sample3/EdgeRising'
 * '<S56>'  : 'CHDR_ac/CHDR_MedTED/CHDC/Signals_Processing/Error_Flags_to_EVSE/Turn On Delay Sample4/EdgeRising'
 * '<S57>'  : 'CHDR_ac/CHDR_MedTED/CHDC/Signals_Processing/Error_Flags_to_EVSE/Turn On Delay Sample5/EdgeRising'
 * '<S58>'  : 'CHDR_ac/CHDR_MedTED/CHDC/Signals_Processing/Signals_to_EVSE/Enumerated Constant'
 * '<S59>'  : 'CHDR_ac/CHDR_MedTED/CHDC/Signals_Processing/Signals_to_EVSE/Enumerated Constant1'
 * '<S60>'  : 'CHDR_ac/CHDR_MedTED/CHDC/Signals_Processing/Signals_to_EVSE/KeCHDR_Pct_ChrgRateRefConstnt'
 * '<S61>'  : 'CHDR_ac/CHDR_MedTED/CHDC/Signals_Processing/Subsystem1/KeCHDR_Cnt_Dbnc_DCBusCurr'
 * '<S62>'  : 'CHDR_ac/CHDR_MedTED/CHDC/Signals_Processing/Subsystem1/KeCHDR_I_DC_MinCurrentPresent'
 * '<S63>'  : 'CHDR_ac/CHDR_MedTED/CHDC/Signals_Processing/Subsystem1/Turn On Delay Sample2'
 * '<S64>'  : 'CHDR_ac/CHDR_MedTED/CHDC/Signals_Processing/Subsystem1/Turn On Delay Sample3'
 * '<S65>'  : 'CHDR_ac/CHDR_MedTED/CHDC/Signals_Processing/Subsystem1/Turn On Delay Sample2/EdgeRising'
 * '<S66>'  : 'CHDR_ac/CHDR_MedTED/CHDC/Signals_Processing/Subsystem1/Turn On Delay Sample3/EdgeRising'
 * '<S67>'  : 'CHDR_ac/CHDR_MedTED/CHDC/Signals_Processing/Turn Off Delay Sample/EdgeFalling'
 * '<S68>'  : 'CHDR_ac/CHDR_MedTED/CHDI/KeCHDR_I_EVSEOutputCurr_Val'
 * '<S69>'  : 'CHDR_ac/CHDR_MedTED/CHDI/KeCHDR_I_HV_BatCurr_Val'
 * '<S70>'  : 'CHDR_ac/CHDR_MedTED/CHDI/KeCHDR_T_HV_BatModTempMax_Val'
 * '<S71>'  : 'CHDR_ac/CHDR_MedTED/CHDI/KeCHDR_T_HV_BatModTemp_Val'
 * '<S72>'  : 'CHDR_ac/CHDR_MedTED/CHDI/KeCHDR_U_EVSEOutputVolt_Val'
 * '<S73>'  : 'CHDR_ac/CHDR_MedTED/CHDI/KeCHDR_U_HV_BatVolt_Val'
 * '<S74>'  : 'CHDR_ac/CHDR_MedTED/CHDI/KeCHDR_U_MaxPkVltAlld_Val'
 * '<S75>'  : 'CHDR_ac/CHDR_MedTED/CHDI/KeCHDR_U_MinPkVltAlld_Val'
 * '<S76>'  : 'CHDR_ac/CHDR_MedTED/CHDI/KeCHDR_b_EVSEOutputCurr_Ovrd'
 * '<S77>'  : 'CHDR_ac/CHDR_MedTED/CHDI/KeCHDR_b_EVSEOutputVolt_Ovrd'
 * '<S78>'  : 'CHDR_ac/CHDR_MedTED/CHDI/KeCHDR_b_EVSE_ChrgSysErr_Ovrd'
 * '<S79>'  : 'CHDR_ac/CHDR_MedTED/CHDI/KeCHDR_b_EVSE_ChrgSysErr_Val'
 * '<S80>'  : 'CHDR_ac/CHDR_MedTED/CHDI/KeCHDR_b_EVSE_EnergizingState_Ovrd'
 * '<S81>'  : 'CHDR_ac/CHDR_MedTED/CHDI/KeCHDR_b_EVSE_EnergizingState_Val'
 * '<S82>'  : 'CHDR_ac/CHDR_MedTED/CHDI/KeCHDR_b_FullAmpHrCap_Ovrd'
 * '<S83>'  : 'CHDR_ac/CHDR_MedTED/CHDI/KeCHDR_b_HV_BatCurr_Ovrd'
 * '<S84>'  : 'CHDR_ac/CHDR_MedTED/CHDI/KeCHDR_b_HV_BatModTempMax_Ovrd'
 * '<S85>'  : 'CHDR_ac/CHDR_MedTED/CHDI/KeCHDR_b_HV_BatModTemp_Ovrd'
 * '<S86>'  : 'CHDR_ac/CHDR_MedTED/CHDI/KeCHDR_b_HV_BatVolt_Ovrd'
 * '<S87>'  : 'CHDR_ac/CHDR_MedTED/CHDI/KeCHDR_b_MaxPkVltAlld_Ovrd'
 * '<S88>'  : 'CHDR_ac/CHDR_MedTED/CHDI/KeCHDR_b_MinPkVltAlld_Ovrd'
 * '<S89>'  : 'CHDR_ac/CHDR_MedTED/CHDI/KeCHDR_b_OBCM_Timeout_Ovrd'
 * '<S90>'  : 'CHDR_ac/CHDR_MedTED/CHDI/KeCHDR_b_OBCM_Timeout_Val'
 * '<S91>'  : 'CHDR_ac/CHDR_MedTED/CHDI/KeCHDR_q_FullAmpHrCap_Val'
 * '<S92>'  : 'CHDR_ac/CHDR_MedTED/Output_Proc/Enum Set Block'
 * '<S93>'  : 'CHDR_ac/CHDR_MedTED/Output_Proc/Enum Set Block1'
 * '<S94>'  : 'CHDR_ac/CHDR_MedTED/Output_Proc/Enum Set Block2'
 * '<S95>'  : 'CHDR_ac/CHDR_MedTED/Output_Proc/Set Block'
 * '<S96>'  : 'CHDR_ac/CHDR_MedTED/Output_Proc/Set Block1'
 * '<S97>'  : 'CHDR_ac/CHDR_MedTED/Output_Proc/Set Block10'
 * '<S98>'  : 'CHDR_ac/CHDR_MedTED/Output_Proc/Set Block11'
 * '<S99>'  : 'CHDR_ac/CHDR_MedTED/Output_Proc/Set Block12'
 * '<S100>' : 'CHDR_ac/CHDR_MedTED/Output_Proc/Set Block13'
 * '<S101>' : 'CHDR_ac/CHDR_MedTED/Output_Proc/Set Block14'
 * '<S102>' : 'CHDR_ac/CHDR_MedTED/Output_Proc/Set Block15'
 * '<S103>' : 'CHDR_ac/CHDR_MedTED/Output_Proc/Set Block16'
 * '<S104>' : 'CHDR_ac/CHDR_MedTED/Output_Proc/Set Block17'
 * '<S105>' : 'CHDR_ac/CHDR_MedTED/Output_Proc/Set Block18'
 * '<S106>' : 'CHDR_ac/CHDR_MedTED/Output_Proc/Set Block19'
 * '<S107>' : 'CHDR_ac/CHDR_MedTED/Output_Proc/Set Block2'
 * '<S108>' : 'CHDR_ac/CHDR_MedTED/Output_Proc/Set Block20'
 * '<S109>' : 'CHDR_ac/CHDR_MedTED/Output_Proc/Set Block22'
 * '<S110>' : 'CHDR_ac/CHDR_MedTED/Output_Proc/Set Block23'
 * '<S111>' : 'CHDR_ac/CHDR_MedTED/Output_Proc/Set Block24'
 * '<S112>' : 'CHDR_ac/CHDR_MedTED/Output_Proc/Set Block25'
 * '<S113>' : 'CHDR_ac/CHDR_MedTED/Output_Proc/Set Block28'
 * '<S114>' : 'CHDR_ac/CHDR_MedTED/Output_Proc/Set Block3'
 * '<S115>' : 'CHDR_ac/CHDR_MedTED/Output_Proc/Set Block4'
 * '<S116>' : 'CHDR_ac/CHDR_MedTED/Output_Proc/Set Block5'
 * '<S117>' : 'CHDR_ac/CHDR_MedTED/Output_Proc/Set Block6'
 * '<S118>' : 'CHDR_ac/CHDR_MedTED/Output_Proc/Set Block7'
 * '<S119>' : 'CHDR_ac/CHDR_MedTED/Output_Proc/Set Block8'
 * '<S120>' : 'CHDR_ac/CHDR_MedTED/Output_Proc/Set Block9'
 * '<S121>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init'
 * '<S122>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem'
 * '<S123>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/FUNC'
 * '<S124>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/NF'
 * '<S125>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/FUNC/KeCHDR_I_ChrgCurr_Min_Out_Init'
 * '<S126>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/FUNC/KeCHDR_I_EV_TargetCurr_Out_Init'
 * '<S127>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/FUNC/KeCHDR_K_CHDMOexitReason_Out_Init'
 * '<S128>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/FUNC/KeCHDR_Pct_ChrgRateRefConstnt_Out_Init'
 * '<S129>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/FUNC/KeCHDR_U_EVTarget_Volt_Out_Init'
 * '<S130>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/FUNC/KeCHDR_b_CHDMOFA_Out_Init'
 * '<S131>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/FUNC/KeCHDR_b_CHDMOValidPlugIn_Out_Init'
 * '<S132>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/FUNC/KeCHDR_b_DCChrgInitialization_Out_Init'
 * '<S133>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/FUNC/KeCHDR_b_EVCU_CP3Cmd_Out_Init'
 * '<S134>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/FUNC/KeCHDR_b_EVContactorSts_Out_Init'
 * '<S135>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/FUNC/KeCHDR_b_EV_Ready_Out_Init'
 * '<S136>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/FUNC/KeCHDR_b_HVBatt_CrntDvtionError_Out_Init'
 * '<S137>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/FUNC/KeCHDR_b_HVBatt_VoltDvtionError_Out_Init'
 * '<S138>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/FUNC/KeCHDR_b_IsoDis_Cmd_Out_Init'
 * '<S139>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/FUNC/KeCHDR_b_OverTemp_Flag_Out_Init'
 * '<S140>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/FUNC/KeCHDR_b_OvrVolt_Flag_Out_Init'
 * '<S141>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/FUNC/KeCHDR_b_RdytoChrgStat_Out_Init'
 * '<S142>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/FUNC/KeCHDR_b_StopReqBeforeCharge_Out_Init'
 * '<S143>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/FUNC/KeCHDR_b_UndrVolt_Flag_Out_Init'
 * '<S144>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/FUNC/KeCHDR_b_Vehicle_Status_Out_Init'
 * '<S145>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/FUNC/KeCHDR_b_VhclDrveSts_Flag_Out_Init'
 * '<S146>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/FUNC/KeCHDR_e_CHAdeMO_Protocol_Out_Init'
 * '<S147>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/FUNC/KeCHDR_e_CHDMOChrgSysStat_Out_Init'
 * '<S148>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/FUNC/KeCHDR_e_DC_CntctrCmd_Out_Init'
 * '<S149>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/FUNC/KeCHDR_q_TotalBattCapacityOut_Init'
 * '<S150>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/FUNC/KeCHDR_t_EstChrg_Time_Out_Init'
 * '<S151>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/FUNC/KeCHDR_t_MaxChrgTime_min_Out_Init'
 * '<S152>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/FUNC/KeCHDR_t_MaxChrgTime_sec_Out_Init'
 * '<S153>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/NF/KeCHDR_I_ChrgCurr_Min_Out_Init'
 * '<S154>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/NF/KeCHDR_I_EV_TargetCurr_Out_Init'
 * '<S155>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/NF/KeCHDR_K_CHDMOexitReason_Out_Init'
 * '<S156>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/NF/KeCHDR_Pct_ChrgRateRefConstnt_Out_Init'
 * '<S157>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/NF/KeCHDR_U_EVTarget_Volt_Out_Init'
 * '<S158>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/NF/KeCHDR_b_CHDMOFA_Out_Init'
 * '<S159>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/NF/KeCHDR_b_CHDMOValidPlugIn_Out_Init'
 * '<S160>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/NF/KeCHDR_b_DCChrgInitialization_Out_Init'
 * '<S161>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/NF/KeCHDR_b_EVCU_CP3Cmd_Out_Init'
 * '<S162>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/NF/KeCHDR_b_EVContactorSts_Out_Init'
 * '<S163>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/NF/KeCHDR_b_EV_Ready_Out_Init'
 * '<S164>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/NF/KeCHDR_b_HVBatt_CrntDvtionError_Out_Init'
 * '<S165>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/NF/KeCHDR_b_HVBatt_VoltDvtionError_Out_Init'
 * '<S166>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/NF/KeCHDR_b_IsoDis_Cmd_Out_Init'
 * '<S167>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/NF/KeCHDR_b_OverTemp_Flag_Out_Init'
 * '<S168>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/NF/KeCHDR_b_OvrVolt_Flag_Out_Init'
 * '<S169>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/NF/KeCHDR_b_RdytoChrgStat_Out_Init'
 * '<S170>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/NF/KeCHDR_b_StopReqBeforeCharge_Out_Init'
 * '<S171>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/NF/KeCHDR_b_UndrVolt_Flag_Out_Init'
 * '<S172>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/NF/KeCHDR_b_Vehicle_Status_Out_Init'
 * '<S173>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/NF/KeCHDR_b_VhclDrveSts_Flag_Out_Init'
 * '<S174>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/NF/KeCHDR_e_CHAdeMO_Protocol_Out_Init'
 * '<S175>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/NF/KeCHDR_e_CHDMOChrgSysStat_Out_Init'
 * '<S176>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/NF/KeCHDR_e_DC_CntctrCmd_Out_Init'
 * '<S177>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/NF/KeCHDR_q_TotalBattCapacityOut_Init'
 * '<S178>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/NF/KeCHDR_t_EstChrg_Time_Out_Init'
 * '<S179>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/NF/KeCHDR_t_MaxChrgTime_min_Out_Init'
 * '<S180>' : 'CHDR_ac/CHDR_PwrOn/Sub_Out_Init/Subsystem/NF/KeCHDR_t_MaxChrgTime_sec_Out_Init'
 */
#endif                                 /* RTW_HEADER_CHDR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
