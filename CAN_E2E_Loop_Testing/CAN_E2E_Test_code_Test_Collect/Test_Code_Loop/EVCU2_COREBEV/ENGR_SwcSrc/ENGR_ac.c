/*
 * File: ENGR_ac.c
 *
 * Code generated for Simulink model 'ENGR_ac'.
 *
 * Model version                  : 9.178
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:36:51 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ENGR_ac.h"

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_ENGR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_ENGR_1 && Rte_SysCon_Variant_ENGR_2

static volatile CONST(TeSTRR_e_AutoStopStartOvrrd, ENGR_VAR_INIT)
    HaENGR_e_OvrrdStpNotAllwd[16] =
{
    CeSTRR_e_OvrrdInvalid, CeSTRR_e_OvrrdInvalid, CeSTRR_e_OvrrdInvalid,
    CeSTRR_e_OvrrdInvalid, CeSTRR_e_OvrrdInvalid, CeSTRR_e_OvrrdInvalid,
    CeSTRR_e_OvrrdInvalid, CeSTRR_e_OvrrdInvalid, CeSTRR_e_OvrrdInvalid,
    CeSTRR_e_OvrrdInvalid, CeSTRR_e_OvrrdInvalid, CeSTRR_e_OvrrdInvalid,
    CeSTRR_e_OvrrdInvalid, CeSTRR_e_OvrrdInvalid, CeSTRR_e_OvrrdInvalid,
    CeSTRR_e_OvrrdInvalid
};                                     /* Referenced by: '<S144>/Calib' */

#endif

#if Rte_SysCon_Variant_ENGR_1 && Rte_SysCon_Variant_ENGR_2

static volatile CONST(TeSTRR_e_AutoStopStartOvrrd, ENGR_VAR_INIT)
    HaENGR_e_OvrrdStrtNotAllwd[8] =
{
    CeSTRR_e_OvrrdInvalid, CeSTRR_e_OvrrdInvalid, CeSTRR_e_OvrrdInvalid,
    CeSTRR_e_OvrrdInvalid, CeSTRR_e_OvrrdInvalid, CeSTRR_e_OvrrdInvalid,
    CeSTRR_e_OvrrdInvalid, CeSTRR_e_OvrrdInvalid
};                                     /* Referenced by: '<S147>/Calib' */

#endif

#if Rte_SysCon_Variant_ENGR_1 && Rte_SysCon_Variant_ENGR_2

static volatile CONST(TeSTRR_e_AutoStopStartOvrrd, ENGR_VAR_INIT)
    HeENGR_e_LoC_Cntrdctn_ePMBD = CeSTRR_e_OvrrdInvalid;/* Referenced by: '<S135>/Calib' */

#endif

#if Rte_SysCon_Variant_ENGR_2

static volatile CONST(TeENGR_e_ECMComFail_C1CAN, ENGR_VAR_INIT)
    KaENGR_e_ECMComFail_C1[8] =
{
    CeENGR_e_NoFaultECM_C1, CeENGR_e_LoC_HCP_ECM_C1, CeENGR_e_LoC_TCM_ECM_C1,
    CeENGR_e_LoC_TCM_HCP_ECM_C1, CeENGR_e_undefine4ECM_C1,
    CeENGR_e_undefine5ECM_C1, CeENGR_e_undefine6ECM_C1,
    CeENGR_e_BusFailECM_C1CAN
};                                     /* Referenced by: '<S258>/Calib' */

#endif

#if Rte_SysCon_Variant_ENGR_2

static volatile CONST(TeENGR_e_ECMComFail_ePTCAN, ENGR_VAR_INIT)
    KaENGR_e_ECMComFail_ePT[8] =
{
    CeENGR_e_NoFaultECM_ePT, CeENGR_e_LoC_HCP_ECM_ePT, CeENGR_e_LoC_TCM_ECM_ePT,
    CeENGR_e_LoC_TCM_HCP_ECM_ePT, CeENGR_e_undefine4ECM_ePT,
    CeENGR_e_undefine5ECM_ePT, CeENGR_e_undefine6ECM_ePT,
    CeENGR_e_BusFailECM_ePTCAN
};                                     /* Referenced by: '<S260>/Calib' */

#endif

#if Rte_SysCon_Variant_ENGR_2

static volatile CONST(TeENGR_e_ETRQ_Mode, ENGR_VAR_INIT) KaENGR_e_ETRQ_Mode_Map
    [7] =
{
    CeENGR_e_Preposition, CeENGR_e_DriverControl, CeENGR_e_Idle,
    CeENGR_e_Shutdown, CeENGR_e_HEV_Stop_Pending, CeENGR_e_HEV_Start_Pending,
    CeENGR_e_ETRQ_Mode_SNA
};                                     /* Referenced by: '<S265>/Calib' */

#endif

#if Rte_SysCon_Variant_ENGR_2

static volatile CONST(TeSTRR_e_AutoStopStartOvrrd, ENGR_VAR_INIT)
    KaENGR_e_EngStrtStpOvrrd_Map[16] =
{
    CeSTRR_e_OvrrdInvalid, CeSTRR_e_NoOvrrd, CeSTRR_e_OvrrdEngOn,
    CeSTRR_e_OvrrdEngOn, CeSTRR_e_NoOvrrd, CeSTRR_e_NoOvrrd,
    CeSTRR_e_OvrrdEngOff, CeSTRR_e_OvrrdImmedStop, CeSTRR_e_NoOvrrd,
    CeSTRR_e_OvrrdEngOn, CeSTRR_e_NoOvrrd, CeSTRR_e_OvrrdEngOn,
    CeSTRR_e_OvrrdEngOn, CeSTRR_e_OvrrdEngOn, CeSTRR_e_OvrrdInvalid,
    CeSTRR_e_OvrrdInvalid
};                                     /* Referenced by: '<S126>/Calib' */

#endif

#if Rte_SysCon_Variant_ENGR_2

static volatile CONST(TePTAR_e_ImmediateTorqRespType, ENGR_VAR_INIT)
    KaENGR_e_HybActEngTorqRespType_Map[3] =
{
    CePTAR_e_Inactive, CePTAR_e_PleasibilityLimited, CePTAR_e_MaximumRange
};                                     /* Referenced by: '<S273>/Calib' */

#endif

#if Rte_SysCon_Variant_ENGR_2

static volatile CONST(sint16, ENGR_VAR_INIT)
    KaENGR_i_EngStrtStpOvrrd_HEVESSMode[160] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 1, 3, 3, 3,
    2, 2, 6, 6, 6, 6, 3, 3, 3, 3, 3, 3, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 5, 5,
    5, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 7,
    7, 7, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 9, 9, 9, 3, 9, 9, 6, 6, 6, 6, 10,
    3, 10, 3, 10, 10, 6, 6, 6, 6, 11, 11, 11, 3, 11, 11, 6, 6, 6, 6, 12, 3, 12,
    3, 6, 6, 6, 6, 6, 6, 6, 3, 3, 3, 6, 3, 6, 6, 14, 14, 14, 14, 14, 14, 14, 14,
    14, 14, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15
} ;                                    /* Referenced by: '<S127>/Calib' */

#endif

#if Rte_SysCon_Variant_ENGR_2

static volatile CONST(sint16, ENGR_VAR_INIT) KaENGR_i_EngStrtStpOvrrd_HybFB_ECM
    [32] =
{
    0, 6, 6, 6, 2, 6, 3, 6, 6, 6, 5, 6, 6, 6, 7, 7, 6, 6, 9, 6, 10, 6, 11, 6, 12,
    6, 13, 6, 14, 6, 6, 6
} ;                                    /* Referenced by: '<S128>/Calib' */

#endif

#if Rte_SysCon_Variant_ENGR_2

static volatile CONST(sint16, ENGR_VAR_INIT) KaENGR_i_EngStrtStpOvrrd_RemStop[32]
    =
{
    0, 6, 6, 6, 2, 6, 3, 6, 6, 6, 5, 6, 6, 6, 7, 7, 6, 6, 9, 6, 10, 6, 11, 6, 12,
    6, 13, 6, 14, 6, 6, 6
} ;                                    /* Referenced by: '<S129>/Calib' */

#endif

#if Rte_SysCon_Variant_ENGR_2

static volatile CONST(float32, ENGR_VAR_INIT) KeENGR_K_EngStrtTrigFiltCoef =
    0.05F;                             /* Referenced by: '<S111>/Calib' */

#endif

#if Rte_SysCon_Variant_ENGR_2

static volatile CONST(float32, ENGR_VAR_INIT) KeENGR_M_MinEngStrtTorqSnsd =
    -20.0F;                            /* Referenced by: '<S112>/Calib' */

#endif

#if Rte_SysCon_Variant_ENGR_2

static volatile CONST(float32, ENGR_VAR_INIT) KeENGR_T_CatalystTempDflt = 750.0F;/* Referenced by:
                                                                      * '<S6>/FsftENGR_T_CatalystTempChrt'
                                                                      * '<S37>/PokeENGR_T_CatalystTempChrt'
                                                                      * '<S161>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ENGR_2

static volatile CONST(float32, ENGR_VAR_INIT) KeENGR_T_EngCoolantTempDflt =
    80.0F;                             /* Referenced by:
                                        * '<S7>/FsftENGR_T_EngCoolantTempChrt'
                                        * '<S38>/PokeENGR_T_EngCoolantTempChrt'
                                        * '<S162>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ENGR_2

static volatile CONST(float32, ENGR_VAR_INIT) KeENGR_T_EngineOilTempInit = 80.0F;/* Referenced by: '<S163>/Calib' */

#endif

#if Rte_SysCon_Variant_ENGR_2

static volatile CONST(float32, ENGR_VAR_INIT) KeENGR_T_ExhaustGasTempInit =
    200.0F;                            /* Referenced by: '<S164>/Calib' */

#endif

#if Rte_SysCon_Variant_ENGR_2

static volatile CONST(float32, ENGR_VAR_INIT) KeENGR_T_InductionAirTempDflt =
    20.0F;                             /* Referenced by:
                                        * '<S9>/FsftENGR_T_InductionAirTempChrt'
                                        * '<S41>/PokeENGR_T_InductionAirTempChrt'
                                        * '<S165>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ENGR_2

static volatile CONST(boolean, ENGR_VAR_INIT) KeENGR_b_ECM_LHOM_Trans_OvrdEnb =
    0;                                 /* Referenced by: '<S113>/Calib' */

#endif

#if Rte_SysCon_Variant_ENGR_1 && Rte_SysCon_Variant_ENGR_2

static volatile CONST(boolean, ENGR_VAR_INIT) KeENGR_b_EnblDrvMdInteractn = 1;/* Referenced by: '<S145>/Calib' */

#endif

#if Rte_SysCon_Variant_ENGR_2

static volatile CONST(boolean, ENGR_VAR_INIT) KeENGR_b_EnblEngStrtStpOvrrdLatch =
    1;                                 /* Referenced by: '<S130>/Calib' */

#endif

#if Rte_SysCon_Variant_ENGR_2

static volatile CONST(boolean, ENGR_VAR_INIT) KeENGR_b_EngTrqEnbl_Ovrd = 1;/* Referenced by: '<S114>/Calib' */

#endif

#if Rte_SysCon_Variant_ENGR_2

static volatile CONST(boolean, ENGR_VAR_INIT) KeENGR_b_EngTrqEnbl_OvrdEnb = 0;/* Referenced by: '<S115>/Calib' */

#endif

#if Rte_SysCon_Variant_ENGR_2

static volatile CONST(boolean, ENGR_VAR_INIT) KeENGR_b_KickDnReqDflt = 0;
                           /* Referenced by: '<S21>/FsftENGR_b_KickDnReqChrt' */

#endif

#if Rte_SysCon_Variant_ENGR_2

static volatile CONST(boolean, ENGR_VAR_INIT) KeENGR_b_Lv12PwrFreeOvrd = 0;/* Referenced by: '<S116>/Calib' */

#endif

#if Rte_SysCon_Variant_ENGR_2

static volatile CONST(boolean, ENGR_VAR_INIT) KeENGR_b_Lv12PwrFreeOvrdEnb = 0;/* Referenced by: '<S117>/Calib' */

#endif

#if Rte_SysCon_Variant_ENGR_2

static volatile CONST(boolean, ENGR_VAR_INIT) KeENGR_b_PnLimitActvFlgInit = 0;/* Referenced by: '<S187>/Calib' */

#endif

#if Rte_SysCon_Variant_ENGR_2

static volatile CONST(float32, ENGR_VAR_INIT) KeENGR_dm_ExhMassFlowInit = 70.0F;/* Referenced by: '<S166>/Calib' */

#endif

#if Rte_SysCon_Variant_ENGR_2

static volatile CONST(TeENGR_e_ECMComFail_C1CAN, ENGR_VAR_INIT)
    KeENGR_e_ComFailDflt_C1CAN = CeENGR_e_NoFaultECM_C1;/* Referenced by:
                                                         * '<S28>/FsftENGR_e_ComFailDflt_C1CANChrt'
                                                         * '<S73>/PokeENGR_e_ComFail_C1CANChrt'
                                                         */

#endif

#if Rte_SysCon_Variant_ENGR_2

static volatile CONST(TeENGR_e_ECMComFail_ePTCAN, ENGR_VAR_INIT)
    KeENGR_e_ComFailDflt_ePTCAN = CeENGR_e_NoFaultECM_ePT;/* Referenced by:
                                                           * '<S29>/FsftENGR_e_ComFailDflt_ePTCANChrt'
                                                           * '<S74>/PokeENGR_e_ComFail_ePTCANChrt'
                                                           */

#endif

#if Rte_SysCon_Variant_ENGR_2

static volatile CONST(TeENGR_e_ECMComFail_C1CAN, ENGR_VAR_INIT)
    KeENGR_e_ComFailInit_C1CAN = CeENGR_e_NoFaultECM_C1;/* Referenced by: '<S188>/Calib' */

#endif

#if Rte_SysCon_Variant_ENGR_2

static volatile CONST(TeENGR_e_ECMComFail_ePTCAN, ENGR_VAR_INIT)
    KeENGR_e_ComFailInit_ePTCAN = CeENGR_e_NoFaultECM_ePT;/* Referenced by: '<S189>/Calib' */

#endif

#if Rte_SysCon_Variant_ENGR_3

static volatile CONST(TeENGR_e_EngineSts, ENGR_VAR_INIT)
    KeENGR_e_EngineSts_NotPSA = CeENGR_e_Engine_Off;/* Referenced by: '<S100>/Calib' */

#endif

#if Rte_SysCon_Variant_ENGR_3

static volatile CONST(TeENGR_e_EngineSts, ENGR_VAR_INIT) KeENGR_e_EngineSts_PSA =
    CeENGR_e_Engine_on;                /* Referenced by: '<S101>/Calib' */

#endif

#if Rte_SysCon_Variant_ENGR_2

static volatile CONST(TeENGR_e_ETRQ_Mode, ENGR_VAR_INIT)
    KeENGR_e_Loc_ETRQ_ModeSignal = CeENGR_e_DriverControl;/* Referenced by: '<S118>/Calib' */

#endif

#if Rte_SysCon_Variant_ENGR_2

static volatile CONST(sint16, ENGR_VAR_INIT) KeENGR_i_ECM_LHOM_Trans_Ovrd = 0;/* Referenced by: '<S119>/Calib' */

#endif

#if Rte_SysCon_Variant_ENGR_2

static volatile CONST(float32, ENGR_VAR_INIT) KeENGR_p_EngManfldAbsPrsDflt =
    100.0F;                            /* Referenced by:
                                        * '<S32>/FsftENGR_p_EngManfldAbsPrsChrt'
                                        * '<S167>/Calib'
                                        */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_ENGR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ENGR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_ENGR_2

static VAR(float32, ENGR_VAR_INIT) VeENGC_M_EngStrtTorqSnsdFlt;/* '<S108>/Switch1' */

#endif

#if Rte_SysCon_Variant_ENGR_2

static VAR(boolean, ENGR_VAR_INIT) VeENGC_b_CondTrueETRQ_Loc;/* '<S102>/Logical5' */

#endif

#if Rte_SysCon_Variant_ENGR_2

static VAR(boolean, ENGR_VAR_INIT) VeENGC_b_EngCombustionCmnd_SnsdTorq;/* '<S102>/Comparison' */

#endif

#if Rte_SysCon_Variant_ENGR_2

static VAR(TeENGR_e_ETRQ_Mode, ENGR_VAR_INIT) VeENGC_e_ETRQ_Mode;/* '<S102>/Switch8' */

#endif

#if Rte_SysCon_Variant_ENGR_2

static VAR(sint16, ENGR_VAR_INIT) VeENGC_e_EngStOvrrd_Final;/* '<S105>/Switch7' */

#endif

#if Rte_SysCon_Variant_ENGR_2

static VAR(sint16, ENGR_VAR_INIT) VeENGC_e_EngStOvrrd_PreLatch;/* '<S105>/Switch11' */

#endif

#if Rte_SysCon_Variant_ENGR_2

static VAR(TeENGR_e_ESS_Engine_State, ENGR_VAR_INIT)
    VeENGC_e_EngStrtStpOvrrd_Raw;      /* '<S105>/Switch9' */

#endif

#if Rte_SysCon_Variant_ENGR_1 && Rte_SysCon_Variant_ENGR_2

static VAR(TeSTRR_e_AutoStopStartOvrrd, ENGR_VAR_INIT)
    VeENGC_e_EngStrtStpOvrrd_ePMBD_raw;/* '<S134>/Merge1' */

#endif

#if Rte_SysCon_Variant_ENGR_2

static VAR(boolean, ENGR_VAR_INIT) VeENGR_b_CaptureIAT_PUP;/* '<Root>/DSM_1' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ENGR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_ENGR
#include "MemMap.h"

CONST(ConstB_ENGR_ac_T, ENGR_VAR_INIT) ENGR_ac_ConstB =
{

#if Rte_SysCon_Variant_ENGR_3

    CeSTRR_e_NoAction,                 /* '<S156>/Constant' */

#define CONSTB_ENGR_AC_T_VARIANT_EXISTS
#endif

    CeSTRR_e_NoAction,                 /* '<S175>/Constant' */

#if Rte_SysCon_Variant_ENGR_3

    CeSTRR_e_OvrrdInvalid,             /* '<S157>/Constant' */

#endif

#if Rte_SysCon_Variant_ENGR_3

    CeENGR_e_StsMiL_Fail_NotPrsnt,     /* '<S159>/Constant' */

#endif

#if Rte_SysCon_Variant_ENGR_2

    CeENGR_e_StsMiL_Fail_NotPrsnt,     /* '<S183>/Constant' */

#endif

#if Rte_SysCon_Variant_ENGR_2

    CeENGR_e_Engine_OverridableID,     /* '<S176>/Constant' */

#endif

#if Rte_SysCon_Variant_ENGR_2

    CeENGR_e_ESS_Ready,                /* '<S179>/Constant' */

#endif

    CeENGR_e_Engine_Off,               /* '<S154>/Const2' */
    CeENGR_e_Inactive,                 /* '<S160>/Constant' */
    CeENGR_e_DFSO_Disabled,            /* '<S177>/Constant' */
    CeENGR_e_DFSO_Disabled,            /* '<S173>/Constant' */

#if Rte_SysCon_Variant_ENGR_3

    CeENGR_e_DriverControl,            /* '<S158>/Constant' */

#endif

#if Rte_SysCon_Variant_ENGR_2

    CeENGR_e_Preposition,              /* '<S184>/Constant' */

#endif

#if Rte_SysCon_Variant_ENGR_2

    CeENGR_e_ENS_STOPPED,              /* '<S178>/Constant' */

#endif

    CeENGR_e_ENS_STOPPED,              /* '<S180>/Constant' */
    CeENGR_e_Stopped,                  /* '<S181>/Constant' */
    CeENGR_e_Default,                  /* '<S182>/Constant' */
    CeENGR_e_AllCylindersActive,       /* '<S172>/Constant' */
    CeENGR_e_AllPhasersParked          /* '<S174>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_ENGR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ENGR
#include "MemMap.h"

VAR(B_ENGR_ac_T, ENGR_VAR_INIT) ENGR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ENGR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ENGR
#include "MemMap.h"

VAR(DW_ENGR_ac_T, ENGR_VAR_INIT) ENGR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ENGR
#include "MemMap.h"

/* Model step function for TID1 */
#if Rte_SysCon_Variant_ENGR_4

FUNC(void, ENGR_CODE) ENGR_FastTEF(void) /* Explicit Task: FastTEF */
{

#if Rte_SysCon_Variant_ENGR_4
#endif

}

#endif

/* Model step function for TID2 */
FUNC(void, ENGR_CODE) ENGR_MedTEB(void) /* Explicit Task: MedTEB */
{

#if Rte_SysCon_Variant_ENGR_2

    boolean tmpRead;

#endif

#if Rte_SysCon_Variant_ENGR_2

    boolean tmpRead_0;

#endif

#if Rte_SysCon_Variant_ENGR_2

    TeESSR_e_EngStrtStpMd tmpRead_1;

#endif

#if Rte_SysCon_Variant_ENGR_3

    boolean tmpRead_2;

#endif

#if Rte_SysCon_Variant_ENGR_2

    boolean rtb_TmpSignalConversionAtVeENGR_b_EngStr;

#endif

#if Rte_SysCon_Variant_ENGR_2

    boolean rtb_TmpSignalConversionAtVeENGR_b_EngCom;

#endif

#if Rte_SysCon_Variant_ENGR_2

    boolean rtb_TmpSignalConversionAtVeENGR_b_EngC_a;

#endif

#if Rte_SysCon_Variant_ENGR_2

    sint16 rtb_TmpSignalConversionAtVeENGR_i_ECM_LH;

#endif

#if Rte_SysCon_Variant_ENGR_2

    boolean rtb_TmpSignalConversionAtVeENGR_b_LV12Pw;

#endif

#if Rte_SysCon_Variant_ENGR_2

    boolean rtb_TmpSignalConversionAtVeENGR_b_EngTrq;

#endif

#if Rte_SysCon_Variant_ENGR_2

    boolean rtb_TmpSignalConversionAtVeENGR_b_EngS_n;

#endif

#if Rte_SysCon_Variant_ENGR_2

    boolean rtb_TmpSignalConversionAtVeENGR_b_EngS_f;

#endif

#if Rte_SysCon_Variant_ENGR_2

    boolean rtb_VeENGR_b_StpNotAllwd_write_IRV;

#endif

#if Rte_SysCon_Variant_ENGR_2

    boolean rtb_VeENGR_b_StrtNotAllwd_write_IRV;

#endif

#if Rte_SysCon_Variant_ENGR_2

    boolean rtb_VeENGR_b_StpNotAllwdIDFA_write_IRV;

#endif

#if Rte_SysCon_Variant_ENGR_2

    boolean rtb_VeENGR_b_StrtNotAllwdIDFA_write_IRV;

#endif

#if Rte_SysCon_Variant_ENGR_2

    boolean rtb_VeENGR_b_StpNotAllwdFA_write_IRV;

#endif

#if Rte_SysCon_Variant_ENGR_2

    boolean rtb_VeENGR_b_StrtNotAllwdFA_write_IRV;

#endif

#if Rte_SysCon_Variant_ENGR_2

    boolean rtb_TmpSignalConversionAtVeENGR_b_Cmprss;

#endif

#if Rte_SysCon_Variant_ENGR_1 && Rte_SysCon_Variant_ENGR_2

    boolean rtb_Logical2_l;

#endif

#if Rte_SysCon_Variant_ENGR_1 && Rte_SysCon_Variant_ENGR_2

    boolean rtb_Logical1_n;

#endif

#if Rte_SysCon_Variant_ENGR_2

    boolean rtb_OR1_n;

#endif

#if Rte_SysCon_Variant_ENGR_2

    float32 rtb_TmpSignalConversionAtVeTITR_M_SnsdEn;

#endif

#if Rte_SysCon_Variant_ENGR_2

    TeENGR_e_StsMiL_ECM rtb_TmpSignalConversionAtVeENGR_e_StsMil;

#endif

#if Rte_SysCon_Variant_ENGR_2

    TeENGR_e_ESS_Engine_State rtb_TmpSignalConversionAtVeENGR_e_EngStr;

#endif

#if Rte_SysCon_Variant_ENGR_2

    TeENGR_e_ETRQ_Mode rtb_TmpSignalConversionAtVeENGR_e_ETRQ_M;

#endif

#if Rte_SysCon_Variant_ENGR_2

    TeENGR_e_ESS_Engine_State rtb_TmpSignalConversionAtVeENGR_e_EngS_p;

#endif

#if Rte_SysCon_Variant_ENGR_2

    TeENGR_e_StopNotAllowedID rtb_VeENGR_e_StpNotAllwdID_write_IRV;

#endif

#if Rte_SysCon_Variant_ENGR_2

    TeENGR_e_StartNotAllowedID rtb_VeENGR_e_StrtNotAllwdID_write_IRV;

#endif

#if Rte_SysCon_Variant_ENGR_2

    TeSTRR_e_EngStrtStopType rtb_TmpSignalConversionAtVeENGR_e_EngReq;

#endif

#if Rte_SysCon_Variant_ENGR_2

    TeDMDR_e_DrvMd rtb_VM_Conditional_Signal_DrvMdArb_23;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/ENGR_MedTEB'
     */
    /* SignalConversion generated from: '<S2>/VeENGR_e_StsMil_ECM_read' incorporates:
     *  SignalConversion generated from: '<S2>/VeENGR_b_CmprssnTest_read'
     *  SignalConversion generated from: '<S2>/VeENGR_b_EngCombustionCmndFA_read'
     *  SignalConversion generated from: '<S2>/VeENGR_b_EngCombustionCmnd_read'
     *  SignalConversion generated from: '<S2>/VeENGR_b_EngStrtStpOvrrdFA_read'
     *  SignalConversion generated from: '<S2>/VeENGR_b_EngStrtStpOvrrd_C1FA_read'
     *  SignalConversion generated from: '<S2>/VeENGR_b_EngStrtStpOvrrd_C1Sgnl_Rcvd_read'
     *  SignalConversion generated from: '<S2>/VeENGR_b_EngTrq_Enbl_Rq_TCM_read'
     *  SignalConversion generated from: '<S2>/VeENGR_b_LV12PwrFreeRq_read'
     *  SignalConversion generated from: '<S2>/VeENGR_e_ETRQ_Mode_read'
     *  SignalConversion generated from: '<S2>/VeENGR_e_EngReqStrtType_read'
     *  SignalConversion generated from: '<S2>/VeENGR_e_EngStrtStpOvrrd_C1_read'
     *  SignalConversion generated from: '<S2>/VeENGR_e_EngStrtStpOvrrd_read'
     *  SignalConversion generated from: '<S2>/VeENGR_i_ECM_LHOM_Trans_read'
     *  SignalConversion generated from: '<S2>/VeTITR_M_SnsdEng_Flt'
     */
#if Rte_SysCon_Variant_ENGR_2

    /* SignalConversion generated from: '<S2>/VeENGR_e_StsMil_ECM_read' incorporates:
     *  Merge: '<Root>/Merge_51'
     */
    rtb_TmpSignalConversionAtVeENGR_e_StsMil =
        Rte_IrvRead_ENGR_MedTEB_VeENGR_e_StsMil_ECM_write_IRV();

    /* SignalConversion generated from: '<S2>/VeENGR_e_EngStrtStpOvrrd_read' incorporates:
     *  Merge: '<Root>/Merge_23'
     */
    rtb_TmpSignalConversionAtVeENGR_e_EngStr =
        Rte_IrvRead_ENGR_MedTEB_VeENGR_e_EngStrtStpOvrrd_write_IRV();

    /* SignalConversion generated from: '<S2>/VeENGR_b_EngStrtStpOvrrdFA_read' incorporates:
     *  Merge: '<Root>/Merge_33_Irv'
     */
    rtb_TmpSignalConversionAtVeENGR_b_EngStr =
        Rte_IrvRead_ENGR_MedTEB_VeENGR_b_EngStrtStpOvrrdFA_write_IRV();

    /* SignalConversion generated from: '<S2>/VeTITR_M_SnsdEng_Flt' incorporates:
     *  Inport: '<Root>/VeTITR_M_SnsdEng_Flt'
     */
    (void)Rte_Read_VeTITR_M_SnsdEng_Flt_Value
        (&rtb_TmpSignalConversionAtVeTITR_M_SnsdEn);

    /* SignalConversion generated from: '<S2>/VeENGR_b_EngCombustionCmnd_read' incorporates:
     *  Merge: '<Root>/Merge_22'
     */
    rtb_TmpSignalConversionAtVeENGR_b_EngCom =
        Rte_IrvRead_ENGR_MedTEB_VeENGR_b_EngCombustionCmnd_write_IRV();

    /* SignalConversion generated from: '<S2>/VeENGR_b_EngCombustionCmndFA_read' incorporates:
     *  Merge: '<Root>/Merge_32'
     */
    rtb_TmpSignalConversionAtVeENGR_b_EngC_a =
        Rte_IrvRead_ENGR_MedTEB_VeENGR_b_EngCombustionCmndFA_write_IRV();

    /* SignalConversion generated from: '<S2>/VeENGR_i_ECM_LHOM_Trans_read' incorporates:
     *  Merge: '<Root>/Merge_42'
     */
    rtb_TmpSignalConversionAtVeENGR_i_ECM_LH =
        Rte_IrvRead_ENGR_MedTEB_VeENGR_i_ECM_LHOM_Trans_write_IRV();

    /* SignalConversion generated from: '<S2>/VeENGR_b_LV12PwrFreeRq_read' incorporates:
     *  Merge: '<Root>/Merge_43'
     */
    rtb_TmpSignalConversionAtVeENGR_b_LV12Pw =
        Rte_IrvRead_ENGR_MedTEB_VeENGR_b_LV12PwrFreeRq_write_IRV();

    /* SignalConversion generated from: '<S2>/VeENGR_b_EngTrq_Enbl_Rq_TCM_read' incorporates:
     *  Merge: '<Root>/Merge_44'
     */
    rtb_TmpSignalConversionAtVeENGR_b_EngTrq =
        Rte_IrvRead_ENGR_MedTEB_VeENGR_b_EngTrq_Enbl_Rq_TCM_write_IRV();

    /* SignalConversion generated from: '<S2>/VeENGR_e_ETRQ_Mode_read' incorporates:
     *  Merge: '<Root>/Merge_34'
     */
    rtb_TmpSignalConversionAtVeENGR_e_ETRQ_M =
        Rte_IrvRead_ENGR_MedTEB_VeENGR_e_ETRQ_Mode_write_IRV();

    /* SignalConversion generated from: '<S2>/VeENGR_e_EngStrtStpOvrrd_C1_read' incorporates:
     *  Merge: '<Root>/Merge_55'
     */
    rtb_TmpSignalConversionAtVeENGR_e_EngS_p =
        Rte_IrvRead_ENGR_MedTEB_VeENGR_e_EngStrtStpOvrrd_C1_write_IRV();

    /* SignalConversion generated from: '<S2>/VeENGR_b_EngStrtStpOvrrd_C1FA_read' incorporates:
     *  Merge: '<Root>/Merge_56'
     */
    rtb_TmpSignalConversionAtVeENGR_b_EngS_n =
        Rte_IrvRead_ENGR_MedTEB_VeENGR_b_EngStrtStpOvrrdFA_C1_write_IRV();

    /* SignalConversion generated from: '<S2>/VeENGR_b_EngStrtStpOvrrd_C1Sgnl_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_57'
     */
    rtb_TmpSignalConversionAtVeENGR_b_EngS_f =
        Rte_IrvRead_ENGR_MedTEB_VeENGR_b_EngStrtStpOvrrd_SgnlRcvd_C1_write_IRV();

    /* SignalConversion generated from: '<S2>/VeENGR_e_EngReqStrtType_read' incorporates:
     *  Merge: '<Root>/Merge_21'
     */
    rtb_TmpSignalConversionAtVeENGR_e_EngReq =
        Rte_IrvRead_ENGR_MedTEB_VeENGR_e_EngReqStrtType_IRV();

    /* SignalConversion generated from: '<S2>/VeENGR_b_CmprssnTest_read' incorporates:
     *  Merge: '<Root>/Merge_73'
     */
    rtb_TmpSignalConversionAtVeENGR_b_Cmprss =
        Rte_IrvRead_ENGR_MedTEB_VeENGR_b_CmprssnTest_IRV();

#endif

    /* End of SignalConversion generated from: '<S2>/VeENGR_e_StsMil_ECM_read' */

    /* SignalConversion generated from: '<S2>/VeENGR_b_StpNotAllwd_read' incorporates:
     *  SignalConversion generated from: '<S2>/VeENGR_b_StpNotAllwdFA_read'
     *  SignalConversion generated from: '<S2>/VeENGR_b_StpNotAllwdIDFA_read'
     *  SignalConversion generated from: '<S2>/VeENGR_b_StrtNotAllwdFA_read'
     *  SignalConversion generated from: '<S2>/VeENGR_b_StrtNotAllwdIDFA_read'
     *  SignalConversion generated from: '<S2>/VeENGR_b_StrtNotAllwd_read'
     *  SignalConversion generated from: '<S2>/VeENGR_e_StpNotAllwdID_read'
     *  SignalConversion generated from: '<S2>/VeENGR_e_StrtNotAllwdID_read'
     */
#if Rte_SysCon_Variant_ENGR_1 && Rte_SysCon_Variant_ENGR_2

    /* VariantMerge generated from: '<S97>/VeENGI_b_StopNotAllowed' incorporates:
     *  Merge: '<Root>/Merge_61'
     */
    rtb_VeENGR_b_StpNotAllwd_write_IRV =
        Rte_IrvRead_ENGR_MedTEB_VeENGR_b_StpNotAllwd_write_IRV();

    /* VariantMerge generated from: '<S97>/VeENGI_b_StartNotAllowed' incorporates:
     *  Merge: '<Root>/Merge_17'
     */
    rtb_VeENGR_b_StrtNotAllwd_write_IRV =
        Rte_IrvRead_ENGR_MedTEB_VeENGR_b_StrtNotAllwd_write_IRV();

    /* VariantMerge generated from: '<S97>/VeENGI_e_StopNotAllowedID' incorporates:
     *  Merge: '<Root>/Merge_14'
     */
    rtb_VeENGR_e_StpNotAllwdID_write_IRV =
        Rte_IrvRead_ENGR_MedTEB_VeENGR_e_StpNotAllwdID_write_IRV();

    /* VariantMerge generated from: '<S97>/VeENGI_e_StartNotAllowedID' incorporates:
     *  Merge: '<Root>/Merge_19'
     */
    rtb_VeENGR_e_StrtNotAllwdID_write_IRV =
        Rte_IrvRead_ENGR_MedTEB_VeENGR_e_StrtNotAllwdID_write_IRV();

    /* VariantMerge generated from: '<S97>/VeENGI_b_StopNotAllowedIDFA' incorporates:
     *  Merge: '<Root>/Merge_28'
     */
    rtb_VeENGR_b_StpNotAllwdIDFA_write_IRV =
        Rte_IrvRead_ENGR_MedTEB_VeENGR_b_StpNotAllwdIDFA_write_IRV();

    /* VariantMerge generated from: '<S97>/VeENGI_b_StartNotAllowedIDFA' incorporates:
     *  Merge: '<Root>/Merge_30'
     */
    rtb_VeENGR_b_StrtNotAllwdIDFA_write_IRV =
        Rte_IrvRead_ENGR_MedTEB_VeENGR_b_StrtNotAllwdIDFA_write_IRV();

    /* VariantMerge generated from: '<S97>/VeENGI_b_StopNotAllowedFA' incorporates:
     *  Merge: '<Root>/Merge_41'
     */
    rtb_VeENGR_b_StpNotAllwdFA_write_IRV =
        Rte_IrvRead_ENGR_MedTEB_VeENGR_b_StpNotAllwdFA_write_IRV();

    /* VariantMerge generated from: '<S97>/VeENGI_b_StartNotAllowedFA' incorporates:
     *  Merge: '<Root>/Merge_52'
     */
    rtb_VeENGR_b_StrtNotAllwdFA_write_IRV =
        Rte_IrvRead_ENGR_MedTEB_VeENGR_b_StrtNotAllwdFA_write_IRV();

#endif

    /* End of SignalConversion generated from: '<S2>/VeENGR_b_StpNotAllwd_read' */
#if Rte_SysCon_Variant_ENGR_2 || Rte_SysCon_Variant_ENGR_3

    /* S-Function (fcgen): '<S2>/FcnCallGen' */
#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<S2>/ENGC_Process_10 ms' */
    /* Outputs for Atomic SubSystem: '<S102>/EdgeRising' */
    /* Logic: '<S109>/OR1' incorporates:
     *  UnitDelay: '<S109>/Unit Delay'
     */
    rtb_OR1_n = !ENGR_ac_DW.UnitDelay_DSTATE_f;

    /* Update for UnitDelay: '<S109>/Unit Delay' incorporates:
     *  Constant: '<S102>/TRUE Constant1'
     */
    ENGR_ac_DW.UnitDelay_DSTATE_f = true;

    /* Outputs for Atomic SubSystem: '<S102>/Digital Lowpass Reset Enabled' */
    /* Switch: '<S108>/Switch1' incorporates:
     *  Logic: '<S109>/AND'
     */
    if (rtb_OR1_n)
    {
        /* Switch: '<S108>/Switch1' */
        VeENGC_M_EngStrtTorqSnsdFlt = rtb_TmpSignalConversionAtVeTITR_M_SnsdEn;
    }
    else
    {
        /* Switch: '<S108>/Switch1' incorporates:
         *  Constant: '<S111>/Calib'
         *  Product: '<S108>/Multiplication'
         *  Sum: '<S108>/Subtraction'
         *  Sum: '<S108>/Summation'
         *  UnitDelay: '<S108>/Unit Delay'
         */
        VeENGC_M_EngStrtTorqSnsdFlt = ((rtb_TmpSignalConversionAtVeTITR_M_SnsdEn
            - VeENGC_M_EngStrtTorqSnsdFlt) * KeENGR_K_EngStrtTrigFiltCoef) +
            VeENGC_M_EngStrtTorqSnsdFlt;
    }

    /* End of Switch: '<S108>/Switch1' */
    /* End of Outputs for SubSystem: '<S102>/Digital Lowpass Reset Enabled' */
    /* End of Outputs for SubSystem: '<S102>/EdgeRising' */

    /* RelationalOperator: '<S102>/Comparison' incorporates:
     *  Constant: '<S112>/Calib'
     */
    VeENGC_b_EngCombustionCmnd_SnsdTorq = (VeENGC_M_EngStrtTorqSnsdFlt >
        KeENGR_M_MinEngStrtTorqSnsd);

    /* Switch: '<S102>/Switch2' incorporates:
     *  Logic: '<S102>/Logical'
     *  Logic: '<S102>/Logical2'
     */
    if (rtb_TmpSignalConversionAtVeENGR_b_EngC_a &&
            (!rtb_TmpSignalConversionAtVeENGR_b_EngCom))
    {
        /* Logic: '<S134>/Logical5' */
        rtb_TmpSignalConversionAtVeENGR_b_EngCom =
            VeENGC_b_EngCombustionCmnd_SnsdTorq;
    }

    /* End of Switch: '<S102>/Switch2' */

    /* Logic: '<S107>/AND' */
    ENGR_ac_B.AND_i = rtb_TmpSignalConversionAtVeENGR_b_EngCom;

    /* Logic: '<S102>/Logical5' incorporates:
     *  Constant: '<S110>/Constant'
     *  RelationalOperator: '<S102>/Comparison5'
     */
    VeENGC_b_CondTrueETRQ_Loc = (rtb_TmpSignalConversionAtVeENGR_b_EngCom &&
        (((uint32)rtb_TmpSignalConversionAtVeENGR_e_ETRQ_M) ==
         CeENGR_e_ETRQ_Mode_SNA));

    /* Switch: '<S102>/Switch8' */
    if (VeENGC_b_CondTrueETRQ_Loc)
    {
        /* Switch: '<S102>/Switch8' incorporates:
         *  Constant: '<S118>/Calib'
         */
        VeENGC_e_ETRQ_Mode = KeENGR_e_Loc_ETRQ_ModeSignal;
    }
    else
    {
        /* Switch: '<S102>/Switch8' */
        VeENGC_e_ETRQ_Mode = rtb_TmpSignalConversionAtVeENGR_e_ETRQ_M;
    }

    /* End of Switch: '<S102>/Switch8' */

    /* Switch: '<S102>/Switch4' incorporates:
     *  Constant: '<S113>/Calib'
     */
    if (KeENGR_b_ECM_LHOM_Trans_OvrdEnb)
    {
        /* Switch: '<S102>/Switch4' incorporates:
         *  Constant: '<S119>/Calib'
         */
        ENGR_ac_B.Switch4 = KeENGR_i_ECM_LHOM_Trans_Ovrd;
    }
    else
    {
        /* Switch: '<S102>/Switch4' */
        ENGR_ac_B.Switch4 = rtb_TmpSignalConversionAtVeENGR_i_ECM_LH;
    }

    /* End of Switch: '<S102>/Switch4' */

    /* Switch: '<S102>/Switch5' incorporates:
     *  Constant: '<S117>/Calib'
     */
    if (KeENGR_b_Lv12PwrFreeOvrdEnb)
    {
        /* Switch: '<S102>/Switch5' incorporates:
         *  Constant: '<S116>/Calib'
         */
        ENGR_ac_B.Switch5 = KeENGR_b_Lv12PwrFreeOvrd;
    }
    else
    {
        /* Switch: '<S102>/Switch5' */
        ENGR_ac_B.Switch5 = rtb_TmpSignalConversionAtVeENGR_b_LV12Pw;
    }

    /* End of Switch: '<S102>/Switch5' */

    /* Switch: '<S102>/Switch6' incorporates:
     *  Constant: '<S115>/Calib'
     */
    if (KeENGR_b_EngTrqEnbl_OvrdEnb)
    {
        /* Switch: '<S102>/Switch6' incorporates:
         *  Constant: '<S114>/Calib'
         */
        ENGR_ac_B.Switch6 = KeENGR_b_EngTrqEnbl_Ovrd;
    }
    else
    {
        /* Switch: '<S102>/Switch6' */
        ENGR_ac_B.Switch6 = rtb_TmpSignalConversionAtVeENGR_b_EngTrq;
    }

    /* End of Switch: '<S102>/Switch6' */

    /* RelationalOperator: '<S105>/Comparison1' */
    rtb_TmpSignalConversionAtVeENGR_b_EngC_a = (VeENGC_e_EngStOvrrd_PreLatch ==
        6);

    /* Switch: '<S105>/Switch9' incorporates:
     *  Logic: '<S105>/Logical6'
     */
    if (rtb_TmpSignalConversionAtVeENGR_b_EngStr &&
            rtb_TmpSignalConversionAtVeENGR_b_EngS_f)
    {
        /* Switch: '<S105>/Switch9' incorporates:
         *  SignalConversion generated from: '<S2>/VeENGR_e_EngStrtStpOvrrd_C1_read'
         */
        VeENGC_e_EngStrtStpOvrrd_Raw = rtb_TmpSignalConversionAtVeENGR_e_EngS_p;
    }
    else
    {
        /* Switch: '<S105>/Switch9' incorporates:
         *  SignalConversion generated from: '<S2>/VeENGR_e_EngStrtStpOvrrd_read'
         */
        VeENGC_e_EngStrtStpOvrrd_Raw = rtb_TmpSignalConversionAtVeENGR_e_EngStr;
    }

    /* End of Switch: '<S105>/Switch9' */

    /* Switch: '<S105>/Switch1' incorporates:
     *  Logic: '<S105>/Logical7'
     */
    if (rtb_TmpSignalConversionAtVeENGR_b_EngS_f &&
            rtb_TmpSignalConversionAtVeENGR_b_EngStr)
    {
        /* Logic: '<S134>/Logical5' */
        rtb_TmpSignalConversionAtVeENGR_b_EngCom =
            rtb_TmpSignalConversionAtVeENGR_b_EngS_n;
    }
    else
    {
        /* Logic: '<S134>/Logical5' */
        rtb_TmpSignalConversionAtVeENGR_b_EngCom =
            rtb_TmpSignalConversionAtVeENGR_b_EngStr;
    }

    /* End of Switch: '<S105>/Switch1' */

    /* Switch: '<S105>/Switch11' incorporates:
     *  Inport: '<Root>/VeESSR_e_EngStrtStpMd'
     *  Inport: '<Root>/VeSRAR_b_HybFeedback_ECM'
     *  Inport: '<Root>/VeSTRR_b_RemedialStop'
     */
    if (rtb_TmpSignalConversionAtVeENGR_b_EngCom)
    {
        (void)Rte_Read_VeESSR_e_EngStrtStpMd_Value(&tmpRead_1);
        (void)Rte_Read_VeSRAR_b_HybFeedback_ECM_Value(&tmpRead_0);
        (void)Rte_Read_VeSTRR_b_RemedialStop_Value(&tmpRead);

        /* Switch: '<S105>/Switch11' incorporates:
         *  Constant: '<S127>/Calib'
         *  Constant: '<S128>/Calib'
         *  Constant: '<S129>/Calib'
         *  DataTypeConversion: '<S105>/Data Type Conversion'
         *  DataTypeConversion: '<S105>/Data Type Conversion4'
         *  Inport: '<Root>/VeESSR_e_EngStrtStpMd'
         *  Inport: '<Root>/VeSRAR_b_HybFeedback_ECM'
         *  Inport: '<Root>/VeSTRR_b_RemedialStop'
         *  Logic: '<S105>/NOT1'
         *  Selector: '<S105>/Selector'
         *  Selector: '<S105>/Selector1'
         *  Selector: '<S105>/Selector2'
         *  Switch: '<S105>/Switch'
         *  Switch: '<S105>/Switch9'
         */
        VeENGC_e_EngStOvrrd_PreLatch = KaENGR_i_EngStrtStpOvrrd_HEVESSMode
            [(((sint32)KaENGR_i_EngStrtStpOvrrd_HybFB_ECM[(((sint32)
                 KaENGR_i_EngStrtStpOvrrd_RemStop[(VeENGC_e_EngStrtStpOvrrd_Raw <<
                  1U) + (tmpRead ? ((TeENGR_e_ESS_Engine_State)1) :
                         ((TeENGR_e_ESS_Engine_State)0))]) * 2) + ((sint32)
                ((!tmpRead_0) ? 1 : 0))]) * 10) + ((sint32)tmpRead_1)];
    }
    else
    {
        /* Switch: '<S105>/Switch11' incorporates:
         *  DataTypeConversion: '<S105>/Data Type Conversion4'
         *  Switch: '<S105>/Switch9'
         */
        VeENGC_e_EngStOvrrd_PreLatch = VeENGC_e_EngStrtStpOvrrd_Raw;
    }

    /* End of Switch: '<S105>/Switch11' */

    /* Outputs for Atomic SubSystem: '<S105>/Signal Latch On With Reset' */
    /* Merge: '<S134>/Merge2' incorporates:
     *  UnitDelay: '<S132>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeENGR_b_EngStr = ENGR_ac_DW.UnitDelay_DSTATE_a;

    /* Logic: '<S132>/OR1' incorporates:
     *  Logic: '<S105>/Logical1'
     *  Logic: '<S105>/Logical3'
     *  Logic: '<S132>/NOT'
     *  Logic: '<S132>/OR'
     *  RelationalOperator: '<S105>/Comparison2'
     *  RelationalOperator: '<S105>/Comparison3'
     *  RelationalOperator: '<S105>/Comparison6'
     *  UnitDelay: '<S132>/Unit Delay'
     */
    ENGR_ac_DW.UnitDelay_DSTATE_a = (((VeENGC_e_EngStOvrrd_PreLatch == 8) &&
        rtb_TmpSignalConversionAtVeENGR_b_EngC_a) ||
        (((VeENGC_e_EngStOvrrd_PreLatch != 1) && (VeENGC_e_EngStOvrrd_PreLatch
        != 2)) && (ENGR_ac_DW.UnitDelay_DSTATE_a)));

    /* End of Outputs for SubSystem: '<S105>/Signal Latch On With Reset' */

    /* Switch: '<S105>/Switch7' incorporates:
     *  Constant: '<S130>/Calib'
     *  Logic: '<S105>/Logical4'
     *  UnitDelay: '<S132>/Unit Delay'
     */
    if ((KeENGR_b_EnblEngStrtStpOvrrdLatch) && (ENGR_ac_DW.UnitDelay_DSTATE_a))
    {
        /* Switch: '<S105>/Switch7' */
        VeENGC_e_EngStOvrrd_Final = 6;
    }
    else
    {
        /* Switch: '<S105>/Switch7' */
        VeENGC_e_EngStOvrrd_Final = VeENGC_e_EngStOvrrd_PreLatch;
    }

    /* End of Switch: '<S105>/Switch7' */

    /* Gain: '<S131>/Gain' */
    ENGR_ac_B.Gain = VeENGC_e_EngStOvrrd_Final;

    /* SignalConversion generated from: '<S97>/VeENGI_b_StartNotAllowedFA' incorporates:
     *  SignalConversion generated from: '<S97>/VeENGI_b_StartNotAllowedIDFA'
     *  SignalConversion generated from: '<S97>/VeENGI_b_StopNotAllowedFA'
     *  SignalConversion generated from: '<S97>/VeENGI_b_StopNotAllowedIDFA'
     *  SignalConversion generated from: '<S97>/VeENGI_b_StopNotAllowed'
     */
#if !Rte_SysCon_Variant_ENGR_1 || !Rte_SysCon_Variant_ENGR_2

    /* VariantMerge generated from: '<S97>/VeENGI_b_StartNotAllowedFA' */
    rtb_VeENGR_b_StrtNotAllwdFA_write_IRV =
        Rte_IrvRead_ENGR_MedTEB_VeENGR_b_StrtNotAllwdFA_write_IRV();

    /* VariantMerge generated from: '<S97>/VeENGI_b_StartNotAllowedIDFA' */
    rtb_VeENGR_b_StrtNotAllwdIDFA_write_IRV =
        Rte_IrvRead_ENGR_MedTEB_VeENGR_b_StrtNotAllwdIDFA_write_IRV();

    /* VariantMerge generated from: '<S97>/VeENGI_b_StopNotAllowedIDFA' */
    rtb_VeENGR_b_StpNotAllwdIDFA_write_IRV =
        Rte_IrvRead_ENGR_MedTEB_VeENGR_b_StpNotAllwdIDFA_write_IRV();

    /* VariantMerge generated from: '<S97>/VeENGI_b_StopNotAllowedFA' */
    rtb_VeENGR_b_StpNotAllwdFA_write_IRV =
        Rte_IrvRead_ENGR_MedTEB_VeENGR_b_StpNotAllwdFA_write_IRV();

    /* VariantMerge generated from: '<S97>/VeENGI_b_StopNotAllowed' */
    rtb_VeENGR_b_StpNotAllwd_write_IRV =
        Rte_IrvRead_ENGR_MedTEB_VeENGR_b_StpNotAllwd_write_IRV();

#endif

    /* End of SignalConversion generated from: '<S97>/VeENGI_b_StartNotAllowedFA' */

    /* Logic: '<S133>/Logical2' */
#if Rte_SysCon_Variant_ENGR_1

    /* Logic: '<S133>/Logical2' */
    rtb_Logical2_l = (rtb_VeENGR_b_StpNotAllwdIDFA_write_IRV ||
                      rtb_VeENGR_b_StpNotAllwdFA_write_IRV);

#endif

    /* End of Logic: '<S133>/Logical2' */

    /* SignalConversion generated from: '<S97>/VeENGI_b_StartNotAllowed' */
#if !Rte_SysCon_Variant_ENGR_1 || !Rte_SysCon_Variant_ENGR_2

    /* VariantMerge generated from: '<S97>/VeENGI_b_StartNotAllowed' */
    rtb_VeENGR_b_StrtNotAllwd_write_IRV =
        Rte_IrvRead_ENGR_MedTEB_VeENGR_b_StrtNotAllwd_write_IRV();

#endif

    /* End of SignalConversion generated from: '<S97>/VeENGI_b_StartNotAllowed' */

    /* RelationalOperator: '<S134>/Comparison9' incorporates:
     *  Logic: '<S133>/Logical1'
     *  Logic: '<S133>/Logical4'
     *  Logic: '<S134>/Logical1'
     *  Logic: '<S134>/Logical5'
     *  Logic: '<S134>/Logical6'
     *  RelationalOperator: '<S134>/Comparison11'
     *  RelationalOperator: '<S134>/Comparison12'
     *  RelationalOperator: '<S134>/Comparison7'
     */
#if Rte_SysCon_Variant_ENGR_1

    /* RelationalOperator: '<S134>/Comparison9' */
    rtb_TmpSignalConversionAtVeENGR_b_EngStr =
        !rtb_VeENGR_b_StpNotAllwd_write_IRV;
    rtb_VeENGR_b_StrtNotAllwd_write_IRV = !rtb_VeENGR_b_StrtNotAllwd_write_IRV;

    /* Logic: '<S134>/Logical5' */
    rtb_TmpSignalConversionAtVeENGR_b_EngCom =
        (rtb_TmpSignalConversionAtVeENGR_b_EngStr &&
         rtb_VeENGR_b_StrtNotAllwd_write_IRV);

    /* Merge: '<S134>/Merge2' */
    rtb_TmpSignalConversionAtVeENGR_b_EngStr =
        (rtb_VeENGR_b_StpNotAllwd_write_IRV &&
         rtb_VeENGR_b_StrtNotAllwd_write_IRV);

    /* Logic: '<S133>/Logical1' */
    rtb_Logical1_n = ((rtb_VeENGR_b_StrtNotAllwdFA_write_IRV ||
                       rtb_VeENGR_b_StrtNotAllwdIDFA_write_IRV) ||
                      (rtb_Logical2_l &&
                       (rtb_TmpSignalConversionAtVeENGR_b_EngCom ||
                        rtb_TmpSignalConversionAtVeENGR_b_EngStr)));

#endif

    /* End of RelationalOperator: '<S134>/Comparison9' */

    /* SignalConversion generated from: '<S97>/DrvMdArb' incorporates:
     *  SignalConversion generated from: '<S97>/VeENGI_e_StartNotAllowedID'
     *  SignalConversion generated from: '<S97>/VeENGI_e_StopNotAllowedID'
     */
#if Rte_SysCon_Variant_ENGR_1 && Rte_SysCon_Variant_ENGR_2

    /* VariantMerge generated from: '<S97>/DrvMdArb' incorporates:
     *  Inport: '<Root>/VeDMDR_e_DrvMdArb'
     */
    (void)Rte_Read_VeDMDR_e_DrvMdArb_Value
        (&rtb_VM_Conditional_Signal_DrvMdArb_23);

#elif !Rte_SysCon_Variant_ENGR_1 || !Rte_SysCon_Variant_ENGR_2

    /* VariantMerge generated from: '<S97>/VeENGI_e_StartNotAllowedID' incorporates:
     *  SignalConversion generated from: '<S97>/VeENGI_e_StartNotAllowedID'
     */
    rtb_VeENGR_e_StrtNotAllwdID_write_IRV =
        Rte_IrvRead_ENGR_MedTEB_VeENGR_e_StrtNotAllwdID_write_IRV();

    /* VariantMerge generated from: '<S97>/VeENGI_e_StopNotAllowedID' incorporates:
     *  SignalConversion generated from: '<S97>/VeENGI_e_StopNotAllowedID'
     */
    rtb_VeENGR_e_StpNotAllwdID_write_IRV =
        Rte_IrvRead_ENGR_MedTEB_VeENGR_e_StpNotAllwdID_write_IRV();

    /* VariantMerge generated from: '<S97>/DrvMdArb' incorporates:
     *  SignalConversion generated from: '<S97>/DrvMdArb'
     */
    rtb_VM_Conditional_Signal_DrvMdArb_23 = CeDMDR_e_NoDrvMd;

#endif

    /* End of SignalConversion generated from: '<S97>/DrvMdArb' */

    /* If: '<S134>/StrtStp_Allwd' incorporates:
     *  Logic: '<S134>/Logical2'
     *  Logic: '<S134>/Logical3'
     *  RelationalOperator: '<S134>/Comparison1'
     *  SignalConversion generated from: '<S97>/Variant_Source1'
     *  SignalConversion generated from: '<S97>/Variant_Source'
     *  Switch: '<S133>/Switch1'
     */
#if Rte_SysCon_Variant_ENGR_1

    if (rtb_TmpSignalConversionAtVeENGR_b_EngCom)
    {
        /* Outputs for IfAction SubSystem: '<S134>/u1' incorporates:
         *  ActionPort: '<S137>/Action Port'
         */
        /* Merge: '<S134>/Merge1' incorporates:
         *  Constant: '<S140>/Constant'
         *  SignalConversion generated from: '<S137>/No_Ovrrd'
         */
        VeENGC_e_EngStrtStpOvrrd_ePMBD_raw = CeSTRR_e_NoOvrrd;

        /* Merge: '<S134>/Merge2' incorporates:
         *  Constant: '<S137>/TRUE Constant'
         *  SignalConversion generated from: '<S137>/ECM_EVAllowed'
         */
        rtb_TmpSignalConversionAtVeENGR_b_EngStr = true;

        /* End of Outputs for SubSystem: '<S134>/u1' */
    }
    else if (rtb_TmpSignalConversionAtVeENGR_b_EngStr)
    {
        /* Outputs for IfAction SubSystem: '<S134>/u2' incorporates:
         *  ActionPort: '<S138>/Action Port'
         */
        /* RelationalOperator: '<S138>/Comparison8' incorporates:
         *  Constant: '<S142>/Constant'
         */
        rtb_TmpSignalConversionAtVeENGR_b_EngStr = (((uint32)
            rtb_VeENGR_e_StpNotAllwdID_write_IRV) ==
            CeENGR_e_Engine_OverridableID);

        /* Switch: '<S138>/Switch1' incorporates:
         *  Constant: '<S136>/Constant'
         *  Constant: '<S145>/Calib'
         *  Logic: '<S138>/Logical4'
         *  VariantMerge generated from: '<S97>/DrvMdArb'
         */
        if ((rtb_TmpSignalConversionAtVeENGR_b_EngStr && (CeDMDR_e_EV ==
                ((uint32)rtb_VM_Conditional_Signal_DrvMdArb_23))) &&
                (KeENGR_b_EnblDrvMdInteractn))
        {
            /* Merge: '<S134>/Merge1' incorporates:
             *  Constant: '<S143>/Constant'
             */
            VeENGC_e_EngStrtStpOvrrd_ePMBD_raw = CeSTRR_e_NoOvrrd;
        }
        else
        {
            /* Merge: '<S134>/Merge1' incorporates:
             *  Constant: '<S144>/Calib'
             *  Selector: '<S138>/Selector'
             */
            VeENGC_e_EngStrtStpOvrrd_ePMBD_raw = HaENGR_e_OvrrdStpNotAllwd
                [(rtb_VeENGR_e_StpNotAllwdID_write_IRV)];
        }

        /* End of Switch: '<S138>/Switch1' */
        /* End of Outputs for SubSystem: '<S134>/u2' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S134>/u3' incorporates:
         *  ActionPort: '<S139>/Action Port'
         */
        /* Merge: '<S134>/Merge2' incorporates:
         *  Constant: '<S146>/Constant'
         *  RelationalOperator: '<S139>/Comparison8'
         */
        rtb_TmpSignalConversionAtVeENGR_b_EngStr = (((uint32)
            rtb_VeENGR_e_StrtNotAllwdID_write_IRV) != CeENGR_e_Disable);

        /* Merge: '<S134>/Merge1' incorporates:
         *  Constant: '<S147>/Calib'
         *  Selector: '<S139>/Selector'
         */
        VeENGC_e_EngStrtStpOvrrd_ePMBD_raw = HaENGR_e_OvrrdStrtNotAllwd
            [(rtb_VeENGR_e_StrtNotAllwdID_write_IRV)];

        /* End of Outputs for SubSystem: '<S134>/u3' */
    }

    if (rtb_Logical1_n)
    {
        /* VariantMerge generated from: '<S97>/Variant_Source' incorporates:
         *  Constant: '<S135>/Calib'
         */
        ENGR_ac_B.VariantMerge_For_Variant_Source_Varia_hy =
            HeENGR_e_LoC_Cntrdctn_ePMBD;
    }
    else
    {
        /* VariantMerge generated from: '<S97>/Variant_Source' incorporates:
         *  Merge: '<S134>/Merge1'
         */
        ENGR_ac_B.VariantMerge_For_Variant_Source_Varia_hy =
            VeENGC_e_EngStrtStpOvrrd_ePMBD_raw;
    }

    /* VariantMerge generated from: '<S97>/Variant_Source1' */
    ENGR_ac_B.VariantMerge_For_Variant_Source_Variant_ =
        (rtb_TmpSignalConversionAtVeENGR_b_EngStr &&
         ((!rtb_VeENGR_b_StrtNotAllwdIDFA_write_IRV) &&
          (!rtb_VeENGR_b_StpNotAllwdIDFA_write_IRV)));

#else

    /* VariantMerge generated from: '<S97>/Variant_Source1' incorporates:
     *  Constant: '<S105>/FALSE Constant3'
     *  SignalConversion generated from: '<S97>/Variant_Source1'
     */
    ENGR_ac_B.VariantMerge_For_Variant_Source_Variant_ = false;

    /* VariantMerge generated from: '<S97>/Variant_Source' incorporates:
     *  Constant: '<S126>/Calib'
     *  Selector: '<S105>/Selector3'
     *  SignalConversion generated from: '<S97>/Variant_Source'
     */
    ENGR_ac_B.VariantMerge_For_Variant_Source_Varia_hy =
        KaENGR_e_EngStrtStpOvrrd_Map[(VeENGC_e_EngStOvrrd_Final)];

#endif

    /* End of If: '<S134>/StrtStp_Allwd' */

    /* Switch: '<S103>/Switch1' */
    if (rtb_TmpSignalConversionAtVeENGR_b_Cmprss)
    {
        /* Switch: '<S103>/Switch1' incorporates:
         *  Constant: '<S120>/Constant'
         */
        ENGR_ac_B.Switch1 = CeSTRR_e_CompressTst;
    }
    else
    {
        /* Switch: '<S103>/Switch1' incorporates:
         *  SignalConversion generated from: '<S2>/VeENGR_e_EngReqStrtType_read'
         */
        ENGR_ac_B.Switch1 = rtb_TmpSignalConversionAtVeENGR_e_EngReq;
    }

    /* End of Switch: '<S103>/Switch1' */
    /* End of Outputs for SubSystem: '<S2>/ENGC_Process_10 ms' */

    /* Outputs for Function Call SubSystem: '<S2>/ENGO_ProcessOutput' */
    /* DataStoreRead: '<S98>/Data Store Read' */
    ENGR_ac_B.DataStoreRead = ENGR_ac_DW.NeENGR_b_ECT_SnsrFA;

    /* DataStoreRead: '<S98>/Data Store Read1' */
    ENGR_ac_B.DataStoreRead1 = ENGR_ac_DW.NeENGR_b_IAT_SnsrFA;

    /* DataTypeConversion: '<S148>/DataTypeConversion' incorporates:
     *  Switch: '<S102>/Switch8'
     */
    ENGR_ac_B.DataTypeConversion_j = VeENGC_e_ETRQ_Mode;

    /* DataTypeConversion: '<S149>/DataTypeConversion' incorporates:
     *  SignalConversion generated from: '<S2>/VeENGR_e_StsMil_ECM_read'
     */
    ENGR_ac_B.DataTypeConversion = rtb_TmpSignalConversionAtVeENGR_e_StsMil;

    /* End of Outputs for SubSystem: '<S2>/ENGO_ProcessOutput' */
#endif

#if Rte_SysCon_Variant_ENGR_3

    /* Inport: '<Root>/VeHPMR_b_PropSysActv' */
    (void)Rte_Read_VeHPMR_b_PropSysActv_Value(&tmpRead_2);

    /* Outputs for Function Call SubSystem: '<S2>/ENGC_NF_Process_10ms' */
    /* Switch: '<S96>/Switch7' */
    if (tmpRead_2)
    {
        /* Switch: '<S96>/Switch7' incorporates:
         *  Constant: '<S101>/Calib'
         */
        ENGR_ac_B.VeENGR_e_EngineSts = KeENGR_e_EngineSts_PSA;
    }
    else
    {
        /* Switch: '<S96>/Switch7' incorporates:
         *  Constant: '<S100>/Calib'
         */
        ENGR_ac_B.VeENGR_e_EngineSts = KeENGR_e_EngineSts_NotPSA;
    }

    /* End of Switch: '<S96>/Switch7' */
    /* End of Outputs for SubSystem: '<S2>/ENGC_NF_Process_10ms' */
#endif

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
#endif

    /* SignalConversion generated from: '<S2>/EngineSts' */
#if Rte_SysCon_Variant_ENGR_3

    /* Outport: '<Root>/VeENGR_e_EngineSts' incorporates:
     *  Switch: '<S96>/Switch7'
     */
    (void)Rte_Write_VeENGR_e_EngineSts_Value(ENGR_ac_B.VeENGR_e_EngineSts);

#endif

    /* End of SignalConversion generated from: '<S2>/EngineSts' */

    /* SignalConversion generated from: '<S2>/VeENGR_b_ECM_EVAllowed' incorporates:
     *  SignalConversion generated from: '<S2>/VeENGR_b_ECT_SnsrFA'
     *  SignalConversion generated from: '<S2>/VeENGR_b_EngCombustionCmnd'
     *  SignalConversion generated from: '<S2>/VeENGR_b_EngTrq_Enbl_Rq_TCM'
     *  SignalConversion generated from: '<S2>/VeENGR_b_IAT_SnsrFA'
     *  SignalConversion generated from: '<S2>/VeENGR_b_LV12PwrFreeRq'
     *  SignalConversion generated from: '<S2>/VeENGR_e_ESS_Engine_State_EE'
     *  SignalConversion generated from: '<S2>/VeENGR_e_ETRQ_Mode'
     *  SignalConversion generated from: '<S2>/VeENGR_e_EngReqStrtType'
     *  SignalConversion generated from: '<S2>/VeENGR_e_EngStrtStpOvrrd'
     *  SignalConversion generated from: '<S2>/VeENGR_e_StsMiL_ECM'
     *  SignalConversion generated from: '<S2>/VeENGR_i_ECM_LHOM_Trans'
     */
#if Rte_SysCon_Variant_ENGR_2

    /* Outport: '<Root>/VeENGR_b_ECM_EVAllowed' */
    (void)Rte_Write_VeENGR_b_ECM_EVAllowed_Value
        (ENGR_ac_B.VariantMerge_For_Variant_Source_Variant_);

    /* Outport: '<Root>/VeENGR_b_ECT_SnsrFA' */
    (void)Rte_Write_VeENGR_b_ECT_SnsrFA_Value(ENGR_ac_B.DataStoreRead);

    /* Outport: '<Root>/VeENGR_b_EngCombustionCmnd' */
    (void)Rte_Write_VeENGR_b_EngCombustionCmnd_Value(ENGR_ac_B.AND_i);

    /* Outport: '<Root>/VeENGR_b_EngTrq_Enbl_Rq_TCM' */
    (void)Rte_Write_VeENGR_b_EngTrq_Enbl_Rq_TCM_Value(ENGR_ac_B.Switch6);

    /* Outport: '<Root>/VeENGR_b_IAT_SnsrFA' */
    (void)Rte_Write_VeENGR_b_IAT_SnsrFA_Value(ENGR_ac_B.DataStoreRead1);

    /* Outport: '<Root>/VeENGR_b_LV12PwrFreeRq' */
    (void)Rte_Write_VeENGR_b_LV12PwrFreeRq_Value(ENGR_ac_B.Switch5);

    /* Outport: '<Root>/VeENGR_e_ESS_Engine_State_EE' */
    (void)Rte_Write_VeENGR_e_ESS_Engine_State_EE_Value(ENGR_ac_B.Gain);

    /* Outport: '<Root>/VeENGR_e_ETRQ_Mode' incorporates:
     *  DataTypeConversion: '<S148>/DataTypeConversion'
     */
    (void)Rte_Write_VeENGR_e_ETRQ_Mode_Value(ENGR_ac_B.DataTypeConversion_j);

    /* Outport: '<Root>/VeENGR_e_EngReqStrtType' incorporates:
     *  Switch: '<S103>/Switch1'
     */
    (void)Rte_Write_VeENGR_e_EngReqStrtType_Value(ENGR_ac_B.Switch1);

    /* Outport: '<Root>/VeENGR_e_EngStrtStpOvrrd' incorporates:
     *  VariantMerge generated from: '<S97>/Variant_Source'
     */
    (void)Rte_Write_VeENGR_e_EngStrtStpOvrrd_Value
        (ENGR_ac_B.VariantMerge_For_Variant_Source_Varia_hy);

    /* Outport: '<Root>/VeENGR_e_StsMiL_ECM' incorporates:
     *  DataTypeConversion: '<S149>/DataTypeConversion'
     */
    (void)Rte_Write_VeENGR_e_StsMiL_ECM_Value(ENGR_ac_B.DataTypeConversion);

    /* Outport: '<Root>/VeENGR_i_ECM_LHOM_Trans' */
    (void)Rte_Write_VeENGR_i_ECM_LHOM_Trans_Value(ENGR_ac_B.Switch4);

#endif

    /* End of SignalConversion generated from: '<S2>/VeENGR_b_ECM_EVAllowed' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
}

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) FsftENGR_P_OilDil_EngMinPwrReq(void)
{

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftENGR_P_OilDil_EngMinPwrReq' */
    /* Outport: '<Root>/VeENGR_P_OilDil_EngMinPwrReq' incorporates:
     *  Chart: '<S5>/FsftENGR_P_OilDil_EngMinPwrReqChrt'
     *  SignalConversion generated from: '<S5>/VeENGR_P_OilDil_EngMinPwrReqFA'
     */
    /* Gateway: FsftENGR_P_OilDil_EngMinPwrReq/FsftENGR_P_OilDil_EngMinPwrReqChrt */
    /* During: FsftENGR_P_OilDil_EngMinPwrReq/FsftENGR_P_OilDil_EngMinPwrReqChrt */
    /* Entry Internal: FsftENGR_P_OilDil_EngMinPwrReq/FsftENGR_P_OilDil_EngMinPwrReqChrt */
    /* Transition: '<S190>:2' */
    (void)Rte_Write_VeENGR_P_OilDil_EngMinPwrReq_Value(0.0F);

    /* End of Outputs for SubSystem: '<Root>/FsftENGR_P_OilDil_EngMinPwrReq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) FsftENGR_T_CatalystTemp(void)
{

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftENGR_T_CatalystTemp' */
    /* Outport: '<Root>/VeENGR_T_CatalystTemp' incorporates:
     *  Chart: '<S6>/FsftENGR_T_CatalystTempChrt'
     *  SignalConversion generated from: '<S6>/VeENGR_T_CatalystTemp'
     */
    /* Gateway: FsftENGR_T_CatalystTemp/FsftENGR_T_CatalystTempChrt */
    /* During: FsftENGR_T_CatalystTemp/FsftENGR_T_CatalystTempChrt */
    /* Entry Internal: FsftENGR_T_CatalystTemp/FsftENGR_T_CatalystTempChrt */
    /* Transition: '<S191>:2' */
    (void)Rte_Write_VeENGR_T_CatalystTemp_Value(KeENGR_T_CatalystTempDflt);

    /* Outport: '<Root>/VeENGR_b_CatalystTempFA' incorporates:
     *  Chart: '<S6>/FsftENGR_T_CatalystTempChrt'
     *  SignalConversion generated from: '<S6>/VeENGR_b_CatalystTempFA'
     */
    (void)Rte_Write_VeENGR_b_CatalystTempFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftENGR_T_CatalystTemp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) FsftENGR_T_EngCoolantTemp(void)
{

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftENGR_T_EngCoolantTemp' */
    /* Chart: '<S7>/FsftENGR_T_EngCoolantTempChrt' */
    /* Gateway: FsftENGR_T_EngCoolantTemp/FsftENGR_T_EngCoolantTempChrt */
    /* During: FsftENGR_T_EngCoolantTemp/FsftENGR_T_EngCoolantTempChrt */
    /* Entry Internal: FsftENGR_T_EngCoolantTemp/FsftENGR_T_EngCoolantTempChrt */
    /* Transition: '<S192>:50' */
    ENGR_ac_DW.NeENGR_b_ECT_SnsrFA = true;

    /* Outport: '<Root>/VeENGR_T_EngCoolantTemp' incorporates:
     *  Chart: '<S7>/FsftENGR_T_EngCoolantTempChrt'
     *  SignalConversion generated from: '<S7>/VeENGR_T_EngCoolantTempFsft'
     */
    (void)Rte_Write_VeENGR_T_EngCoolantTemp_Value(KeENGR_T_EngCoolantTempDflt);

    /* Outport: '<Root>/VeENGR_b_ECT_Sgnl_Rcvd' incorporates:
     *  Chart: '<S7>/FsftENGR_T_EngCoolantTempChrt'
     *  SignalConversion generated from: '<S7>/VeENGR_b_EngCoolantTempSgnl_Rcvd'
     */
    (void)Rte_Write_VeENGR_b_ECT_Sgnl_Rcvd_Value(false);

    /* End of Outputs for SubSystem: '<Root>/FsftENGR_T_EngCoolantTemp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) FsftENGR_T_ExhaustGasTemp(void)
{

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftENGR_T_ExhaustGasTemp' */
    /* Outport: '<Root>/VeENGR_b_ExhaustGasTempFA' incorporates:
     *  Chart: '<S8>/FsftENGR_T_ExhaustGasTempChrt'
     *  SignalConversion generated from: '<S8>/VeENGR_b_ExhaustGasTempFA'
     */
    /* Gateway: FsftENGR_T_ExhaustGasTemp/FsftENGR_T_ExhaustGasTempChrt */
    /* During: FsftENGR_T_ExhaustGasTemp/FsftENGR_T_ExhaustGasTempChrt */
    /* Entry Internal: FsftENGR_T_ExhaustGasTemp/FsftENGR_T_ExhaustGasTempChrt */
    /* Transition: '<S193>:2' */
    (void)Rte_Write_VeENGR_b_ExhaustGasTempFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftENGR_T_ExhaustGasTemp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) FsftENGR_T_InductionAirTemp(void)
{

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftENGR_T_InductionAirTemp' */
    /* Chart: '<S9>/FsftENGR_T_InductionAirTempChrt' */
    /* Gateway: FsftENGR_T_InductionAirTemp/FsftENGR_T_InductionAirTempChrt */
    /* During: FsftENGR_T_InductionAirTemp/FsftENGR_T_InductionAirTempChrt */
    /* Entry Internal: FsftENGR_T_InductionAirTemp/FsftENGR_T_InductionAirTempChrt */
    /* Transition: '<S194>:50' */
    ENGR_ac_DW.NeENGR_b_IAT_SnsrFA = true;

    /* Outport: '<Root>/VeENGR_T_InductionAirTemp' incorporates:
     *  Chart: '<S9>/FsftENGR_T_InductionAirTempChrt'
     *  SignalConversion generated from: '<S9>/VeENGR_T_InductionAirTempFsft'
     */
    (void)Rte_Write_VeENGR_T_InductionAirTemp_Value
        (KeENGR_T_InductionAirTempDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftENGR_T_InductionAirTemp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) FsftENGR_b_AllwEVECM(void)
{
    /* (no output/update code required) */
}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) FsftENGR_b_CondOkForCylDeac(void)
{

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftENGR_b_CondOkForCylDeac' */
    /* Outport: '<Root>/VeENGR_b_CondOkForCylDeac' incorporates:
     *  Chart: '<S11>/FsftENGR_b_CondOkForCylDeacChrt'
     *  SignalConversion generated from: '<S11>/VeENGR_b_CondOkForCylDeac'
     */
    /* Gateway: FsftENGR_b_CondOkForCylDeac/FsftENGR_b_CondOkForCylDeacChrt */
    /* During: FsftENGR_b_CondOkForCylDeac/FsftENGR_b_CondOkForCylDeacChrt */
    /* Entry Internal: FsftENGR_b_CondOkForCylDeac/FsftENGR_b_CondOkForCylDeacChrt */
    /* Transition: '<S196>:2' */
    (void)Rte_Write_VeENGR_b_CondOkForCylDeac_Value(false);

    /* End of Outputs for SubSystem: '<Root>/FsftENGR_b_CondOkForCylDeac' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) FsftENGR_b_ECMReqRemStop(void)
{
    /* (no output/update code required) */
}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) FsftENGR_b_ECM_Feedback_HCP(void)
{

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftENGR_b_ECM_Feedback_HCP' */
    /* Outport: '<Root>/VeENGR_b_ECM_Feedback_HCP' incorporates:
     *  Chart: '<S13>/FsftENGR_b_ECM_Feedback_HCPChrt'
     *  SignalConversion generated from: '<S13>/VeENGR_b_ECM_Feedback_HCP'
     */
    /* Gateway: FsftENGR_b_ECM_Feedback_HCP/FsftENGR_b_ECM_Feedback_HCPChrt */
    /* During: FsftENGR_b_ECM_Feedback_HCP/FsftENGR_b_ECM_Feedback_HCPChrt */
    /* Entry Internal: FsftENGR_b_ECM_Feedback_HCP/FsftENGR_b_ECM_Feedback_HCPChrt */
    /* Transition: '<S198>:2' */
    (void)Rte_Write_VeENGR_b_ECM_Feedback_HCP_Value(false);

    /* End of Outputs for SubSystem: '<Root>/FsftENGR_b_ECM_Feedback_HCP' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) FsftENGR_b_EXH_MASS_FLOW(void)
{

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftENGR_b_EXH_MASS_FLOW' */
    /* Outport: '<Root>/VeENGR_b_ExhMassFlowFA' incorporates:
     *  Chart: '<S14>/FsftENGR_b_EXH_MASS_FLOWChrt'
     *  SignalConversion generated from: '<S14>/VeENGR_b_EXH_MASS_FLOWFA'
     */
    /* Gateway: FsftENGR_b_EXH_MASS_FLOW/FsftENGR_b_EXH_MASS_FLOWChrt */
    /* During: FsftENGR_b_EXH_MASS_FLOW/FsftENGR_b_EXH_MASS_FLOWChrt */
    /* Entry Internal: FsftENGR_b_EXH_MASS_FLOW/FsftENGR_b_EXH_MASS_FLOWChrt */
    /* Transition: '<S199>:2' */
    (void)Rte_Write_VeENGR_b_ExhMassFlowFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftENGR_b_EXH_MASS_FLOW' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) FsftENGR_b_EngCombustionCmnd(void)
{

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftENGR_b_EngCombustionCmnd' */
    /* Merge: '<Root>/Merge_32' incorporates:
     *  Chart: '<S15>/FsftENGR_b_EngCombustionCmndChrt'
     *  SignalConversion generated from: '<S15>/VeENGR_b_EngCombustionCmndFA_write'
     */
    /* Gateway: FsftENGR_b_EngCombustionCmnd/FsftENGR_b_EngCombustionCmndChrt */
    /* During: FsftENGR_b_EngCombustionCmnd/FsftENGR_b_EngCombustionCmndChrt */
    /* Entry Internal: FsftENGR_b_EngCombustionCmnd/FsftENGR_b_EngCombustionCmndChrt */
    /* Transition: '<S200>:2' */
    Rte_IrvWrite_FsftENGR_b_EngCombustionCmnd_VeENGR_b_EngCombustionCmndFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftENGR_b_EngCombustionCmnd' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) FsftENGR_b_EngModeRun(void)
{
    /* (no output/update code required) */
}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) FsftENGR_b_EngStrtStpOvrrd_C1(void)
{

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftENGR_b_EngStrtStpOvrrd_C1' */
    /* Merge: '<Root>/Merge_56' incorporates:
     *  Chart: '<S17>/FsftENGR_b_EngStrtStpOvrrd_C1Chrt'
     *  SignalConversion generated from: '<S17>/VeENGR_b_EngStrtStpOvrrd_C1FA_write'
     */
    /* Gateway: FsftENGR_b_EngStrtStpOvrrd_C1/FsftENGR_b_EngStrtStpOvrrd_C1Chrt */
    /* During: FsftENGR_b_EngStrtStpOvrrd_C1/FsftENGR_b_EngStrtStpOvrrd_C1Chrt */
    /* Entry Internal: FsftENGR_b_EngStrtStpOvrrd_C1/FsftENGR_b_EngStrtStpOvrrd_C1Chrt */
    /* Transition: '<S202>:2' */
    Rte_IrvWrite_FsftENGR_b_EngStrtStpOvrrd_C1_VeENGR_b_EngStrtStpOvrrdFA_C1_write_IRV
        (true);

    /* Merge: '<Root>/Merge_57' incorporates:
     *  Chart: '<S17>/FsftENGR_b_EngStrtStpOvrrd_C1Chrt'
     *  SignalConversion generated from: '<S17>/VeENGR_b_EngStrtStpOvrrd_C1Sgnl_Rcvd_write'
     */
    Rte_IrvWrite_FsftENGR_b_EngStrtStpOvrrd_C1_VeENGR_b_EngStrtStpOvrrd_SgnlRcvd_C1_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftENGR_b_EngStrtStpOvrrd_C1' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) FsftENGR_b_Engine_Oil_Temp(void)
{

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftENGR_b_Engine_Oil_Temp' */
    /* Outport: '<Root>/VeENGR_b_EngineOilTempFA' incorporates:
     *  Chart: '<S18>/FsftENGR_b_Engine_Oil_TempChrt'
     *  SignalConversion generated from: '<S18>/VeENGR_b_Engine_Oil_TempFA'
     */
    /* Gateway: FsftENGR_b_Engine_Oil_Temp/FsftENGR_b_Engine_Oil_TempChrt */
    /* During: FsftENGR_b_Engine_Oil_Temp/FsftENGR_b_Engine_Oil_TempChrt */
    /* Entry Internal: FsftENGR_b_Engine_Oil_Temp/FsftENGR_b_Engine_Oil_TempChrt */
    /* Transition: '<S203>:2' */
    (void)Rte_Write_VeENGR_b_EngineOilTempFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftENGR_b_Engine_Oil_Temp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) FsftENGR_b_FuelConsumptionFA(void)
{

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftENGR_b_FuelConsumptionFA' */
    /* Outport: '<Root>/VeENGR_b_FuelConsFA' incorporates:
     *  Chart: '<S19>/FsftENGR_b_FuelConsumptionFAChrt'
     *  SignalConversion generated from: '<S19>/VeENGR_b_FuelConsumptionFAFA'
     */
    /* Gateway: FsftENGR_b_FuelConsumptionFA/FsftENGR_b_FuelConsumptionFAChrt */
    /* During: FsftENGR_b_FuelConsumptionFA/FsftENGR_b_FuelConsumptionFAChrt */
    /* Entry Internal: FsftENGR_b_FuelConsumptionFA/FsftENGR_b_FuelConsumptionFAChrt */
    /* Transition: '<S204>:2' */
    (void)Rte_Write_VeENGR_b_FuelConsFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftENGR_b_FuelConsumptionFA' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) FsftENGR_b_FuelLevel2(void)
{

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftENGR_b_FuelLevel2' */
    /* Outport: '<Root>/VeENGR_b_FuelLevel2_SgnlRcvd' incorporates:
     *  Chart: '<S20>/FsftENGR_b_FuelLevel2Chrt'
     *  SignalConversion generated from: '<S20>/VeENGR_b_FuelLevel2FA'
     */
    /* Gateway: FsftENGR_b_FuelLevel2/FsftENGR_b_FuelLevel2Chrt */
    /* During: FsftENGR_b_FuelLevel2/FsftENGR_b_FuelLevel2Chrt */
    /* Entry Internal: FsftENGR_b_FuelLevel2/FsftENGR_b_FuelLevel2Chrt */
    /* Transition: '<S205>:2' */
    (void)Rte_Write_VeENGR_b_FuelLevel2_SgnlRcvd_Value(false);

    /* End of Outputs for SubSystem: '<Root>/FsftENGR_b_FuelLevel2' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) FsftENGR_b_KickDnReq(void)
{

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftENGR_b_KickDnReq' */
    /* Outport: '<Root>/VeENGR_b_KickDnReq' incorporates:
     *  Chart: '<S21>/FsftENGR_b_KickDnReqChrt'
     *  SignalConversion generated from: '<S21>/VeENGR_b_KickDnReq'
     */
    /* Gateway: FsftENGR_b_KickDnReq/FsftENGR_b_KickDnReqChrt */
    /* During: FsftENGR_b_KickDnReq/FsftENGR_b_KickDnReqChrt */
    /* Entry Internal: FsftENGR_b_KickDnReq/FsftENGR_b_KickDnReqChrt */
    /* Transition: '<S206>:2' */
    (void)Rte_Write_VeENGR_b_KickDnReq_Value(KeENGR_b_KickDnReqDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftENGR_b_KickDnReq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) FsftENGR_b_OilDil_EngMinPwrEnbl(void)
{

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftENGR_b_OilDil_EngMinPwrEnbl' */
    /* Outport: '<Root>/VeENGR_b_OilDil_EngMinPwrEnbl' incorporates:
     *  Chart: '<S22>/FsftENGR_b_OilDil_EngMinPwrEnblChrt'
     *  SignalConversion generated from: '<S22>/VeENGR_b_OilDil_EngMinPwrEnblFA'
     */
    /* Gateway: FsftENGR_b_OilDil_EngMinPwrEnbl/FsftENGR_b_OilDil_EngMinPwrEnblChrt */
    /* During: FsftENGR_b_OilDil_EngMinPwrEnbl/FsftENGR_b_OilDil_EngMinPwrEnblChrt */
    /* Entry Internal: FsftENGR_b_OilDil_EngMinPwrEnbl/FsftENGR_b_OilDil_EngMinPwrEnblChrt */
    /* Transition: '<S207>:2' */
    (void)Rte_Write_VeENGR_b_OilDil_EngMinPwrEnbl_Value(false);

    /* End of Outputs for SubSystem: '<Root>/FsftENGR_b_OilDil_EngMinPwrEnbl' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) FsftENGR_b_PnLimitActvFlg(void)
{

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftENGR_b_PnLimitActvFlg' */
    /* Outport: '<Root>/VeENGR_b_PnLimitActvFlgFA' incorporates:
     *  Chart: '<S23>/FsftENGR_b_PnLimitActvFlgChrt'
     *  SignalConversion generated from: '<S23>/VeENGR_b_PnLimitActvFlgFA'
     */
    /* Gateway: FsftENGR_b_PnLimitActvFlg/FsftENGR_b_PnLimitActvFlgChrt */
    /* During: FsftENGR_b_PnLimitActvFlg/FsftENGR_b_PnLimitActvFlgChrt */
    /* Entry Internal: FsftENGR_b_PnLimitActvFlg/FsftENGR_b_PnLimitActvFlgChrt */
    /* Transition: '<S208>:2' */
    (void)Rte_Write_VeENGR_b_PnLimitActvFlgFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftENGR_b_PnLimitActvFlg' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) FsftENGR_b_StpNotAllwd(void)
{

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftENGR_b_StpNotAllwd' */
    /* SignalConversion generated from: '<S24>/FsftENGR_b_StpNotAllwdChrt' incorporates:
     *  SignalConversion generated from: '<S24>/VeENGR_b_StpNotAllwdFA_write'
     */
    /* Gateway: FsftENGR_b_StpNotAllwd/FsftENGR_b_StpNotAllwdChrt */
    /* During: FsftENGR_b_StpNotAllwd/FsftENGR_b_StpNotAllwdChrt */
    /* Entry Internal: FsftENGR_b_StpNotAllwd/FsftENGR_b_StpNotAllwdChrt */
    /* Transition: '<S209>:2' */
#if Rte_SysCon_Variant_ENGR_1 && Rte_SysCon_Variant_ENGR_2

    /* Merge: '<Root>/Merge_41' incorporates:
     *  Chart: '<S24>/FsftENGR_b_StpNotAllwdChrt'
     */
    Rte_IrvWrite_FsftENGR_b_StpNotAllwd_VeENGR_b_StpNotAllwdFA_write_IRV(true);

#endif

    /* End of SignalConversion generated from: '<S24>/FsftENGR_b_StpNotAllwdChrt' */
    /* End of Outputs for SubSystem: '<Root>/FsftENGR_b_StpNotAllwd' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) FsftENGR_b_StpNotAllwdID(void)
{

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftENGR_b_StpNotAllwdID' */
    /* SignalConversion generated from: '<S25>/FsftENGR_b_StpNotAllwdIDChrt' incorporates:
     *  SignalConversion generated from: '<S25>/VeENGR_b_StpNotAllwdIDFA_write'
     */
    /* Gateway: FsftENGR_b_StpNotAllwdID/FsftENGR_b_StpNotAllwdIDChrt */
    /* During: FsftENGR_b_StpNotAllwdID/FsftENGR_b_StpNotAllwdIDChrt */
    /* Entry Internal: FsftENGR_b_StpNotAllwdID/FsftENGR_b_StpNotAllwdIDChrt */
    /* Transition: '<S210>:2' */
#if Rte_SysCon_Variant_ENGR_1 && Rte_SysCon_Variant_ENGR_2

    /* Merge: '<Root>/Merge_28' incorporates:
     *  Chart: '<S25>/FsftENGR_b_StpNotAllwdIDChrt'
     */
    Rte_IrvWrite_FsftENGR_b_StpNotAllwdID_VeENGR_b_StpNotAllwdIDFA_write_IRV
        (true);

#endif

    /* End of SignalConversion generated from: '<S25>/FsftENGR_b_StpNotAllwdIDChrt' */
    /* End of Outputs for SubSystem: '<Root>/FsftENGR_b_StpNotAllwdID' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) FsftENGR_b_StrtNotAllwd(void)
{

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftENGR_b_StrtNotAllwd' */
    /* SignalConversion generated from: '<S26>/FsftENGR_b_StrtNotAllwdChrt' incorporates:
     *  SignalConversion generated from: '<S26>/VeENGR_b_StrtNotAllwdFA_write'
     */
    /* Gateway: FsftENGR_b_StrtNotAllwd/FsftENGR_b_StrtNotAllwdChrt */
    /* During: FsftENGR_b_StrtNotAllwd/FsftENGR_b_StrtNotAllwdChrt */
    /* Entry Internal: FsftENGR_b_StrtNotAllwd/FsftENGR_b_StrtNotAllwdChrt */
    /* Transition: '<S211>:2' */
#if Rte_SysCon_Variant_ENGR_1 && Rte_SysCon_Variant_ENGR_2

    /* Merge: '<Root>/Merge_52' incorporates:
     *  Chart: '<S26>/FsftENGR_b_StrtNotAllwdChrt'
     */
    Rte_IrvWrite_FsftENGR_b_StrtNotAllwd_VeENGR_b_StrtNotAllwdFA_write_IRV(true);

#endif

    /* End of SignalConversion generated from: '<S26>/FsftENGR_b_StrtNotAllwdChrt' */
    /* End of Outputs for SubSystem: '<Root>/FsftENGR_b_StrtNotAllwd' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) FsftENGR_b_StrtNotAllwdID(void)
{

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftENGR_b_StrtNotAllwdID' */
    /* SignalConversion generated from: '<S27>/FsftENGR_b_StrtNotAllwdIDChrt' incorporates:
     *  SignalConversion generated from: '<S27>/VeENGR_b_StrtNotAllwdIDFA_write'
     */
    /* Gateway: FsftENGR_b_StrtNotAllwdID/FsftENGR_b_StrtNotAllwdIDChrt */
    /* During: FsftENGR_b_StrtNotAllwdID/FsftENGR_b_StrtNotAllwdIDChrt */
    /* Entry Internal: FsftENGR_b_StrtNotAllwdID/FsftENGR_b_StrtNotAllwdIDChrt */
    /* Transition: '<S212>:2' */
#if Rte_SysCon_Variant_ENGR_1 && Rte_SysCon_Variant_ENGR_2

    /* Merge: '<Root>/Merge_30' incorporates:
     *  Chart: '<S27>/FsftENGR_b_StrtNotAllwdIDChrt'
     */
    Rte_IrvWrite_FsftENGR_b_StrtNotAllwdID_VeENGR_b_StrtNotAllwdIDFA_write_IRV
        (true);

#endif

    /* End of SignalConversion generated from: '<S27>/FsftENGR_b_StrtNotAllwdIDChrt' */
    /* End of Outputs for SubSystem: '<Root>/FsftENGR_b_StrtNotAllwdID' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) FsftENGR_e_ComFailDflt_C1CAN(void)
{

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftENGR_e_ComFailDflt_C1CAN' */
    /* Outport: '<Root>/VeENGR_e_ComFailECM_C1CAN' incorporates:
     *  Chart: '<S28>/FsftENGR_e_ComFailDflt_C1CANChrt'
     *  SignalConversion generated from: '<S28>/VeENGR_e_ComFailDflt_C1CAN'
     */
    /* Gateway: FsftENGR_e_ComFailDflt_C1CAN/FsftENGR_e_ComFailDflt_C1CANChrt */
    /* During: FsftENGR_e_ComFailDflt_C1CAN/FsftENGR_e_ComFailDflt_C1CANChrt */
    /* Entry Internal: FsftENGR_e_ComFailDflt_C1CAN/FsftENGR_e_ComFailDflt_C1CANChrt */
    /* Transition: '<S213>:2' */
    (void)Rte_Write_VeENGR_e_ComFailECM_C1CAN_Value(KeENGR_e_ComFailDflt_C1CAN);

    /* End of Outputs for SubSystem: '<Root>/FsftENGR_e_ComFailDflt_C1CAN' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) FsftENGR_e_ComFailDflt_ePTCAN(void)
{

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftENGR_e_ComFailDflt_ePTCAN' */
    /* Outport: '<Root>/VeENGR_e_ComFailECM_ePtCAN' incorporates:
     *  Chart: '<S29>/FsftENGR_e_ComFailDflt_ePTCANChrt'
     *  SignalConversion generated from: '<S29>/VeENGR_e_ComFailDflt_ePTCAN'
     */
    /* Gateway: FsftENGR_e_ComFailDflt_ePTCAN/FsftENGR_e_ComFailDflt_ePTCANChrt */
    /* During: FsftENGR_e_ComFailDflt_ePTCAN/FsftENGR_e_ComFailDflt_ePTCANChrt */
    /* Entry Internal: FsftENGR_e_ComFailDflt_ePTCAN/FsftENGR_e_ComFailDflt_ePTCANChrt */
    /* Transition: '<S214>:2' */
    (void)Rte_Write_VeENGR_e_ComFailECM_ePtCAN_Value(KeENGR_e_ComFailDflt_ePTCAN);

    /* End of Outputs for SubSystem: '<Root>/FsftENGR_e_ComFailDflt_ePTCAN' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) FsftENGR_e_CylinderDeacMode(void)
{

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftENGR_e_CylinderDeacMode' */
    /* Outport: '<Root>/VeENGR_e_CylinderDeacMode' incorporates:
     *  Chart: '<S30>/FsftENGR_e_CylinderDeacModeChrt'
     *  SignalConversion generated from: '<S30>/VeENGR_e_CylinderDeacMode'
     */
    /* Gateway: FsftENGR_e_CylinderDeacMode/FsftENGR_e_CylinderDeacModeChrt */
    /* During: FsftENGR_e_CylinderDeacMode/FsftENGR_e_CylinderDeacModeChrt */
    /* Entry Internal: FsftENGR_e_CylinderDeacMode/FsftENGR_e_CylinderDeacModeChrt */
    /* Transition: '<S215>:2' */
    (void)Rte_Write_VeENGR_e_CylinderDeacMode_Value(CeENGR_e_AllCylindersActive);

    /* SignalConversion generated from: '<S30>/FsftENGR_e_CylinderDeacModeChrt' incorporates:
     *  SignalConversion generated from: '<S30>/VeENGR_e_CylinderDeacMode_write'
     */
#if Rte_SysCon_Variant_ENGR_2 && Rte_SysCon_Variant_ENGR_4

    /* Merge: '<Root>/Merge_45_Irv' incorporates:
     *  Chart: '<S30>/FsftENGR_e_CylinderDeacModeChrt'
     */
    Rte_IrvWrite_FsftENGR_e_CylinderDeacMode_VeENGR_e_CylinderDeacMode_write_IRV
        (CeENGR_e_AllCylindersActive);

#endif

    /* End of SignalConversion generated from: '<S30>/FsftENGR_e_CylinderDeacModeChrt' */
    /* End of Outputs for SubSystem: '<Root>/FsftENGR_e_CylinderDeacMode' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) FsftENGR_e_EngStrtStpOvrrd(void)
{

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftENGR_e_EngStrtStpOvrrd' */
    /* Outport: '<Root>/VeENGR_b_EngStrtStpOvrrdFA' incorporates:
     *  Chart: '<S31>/FsftENGR_e_EngStrtStpOvrrdChrt'
     *  SignalConversion generated from: '<S31>/VeENGR_b_EngStrtStpOvrrdFA'
     */
    /* Gateway: FsftENGR_e_EngStrtStpOvrrd/FsftENGR_e_EngStrtStpOvrrdChrt */
    /* During: FsftENGR_e_EngStrtStpOvrrd/FsftENGR_e_EngStrtStpOvrrdChrt */
    /* Entry Internal: FsftENGR_e_EngStrtStpOvrrd/FsftENGR_e_EngStrtStpOvrrdChrt */
    /* Transition: '<S216>:2' */
    (void)Rte_Write_VeENGR_b_EngStrtStpOvrrdFA_Value(true);

    /* Merge: '<Root>/Merge_33_Irv' incorporates:
     *  Chart: '<S31>/FsftENGR_e_EngStrtStpOvrrdChrt'
     *  SignalConversion generated from: '<S31>/VeENGR_b_EngStrtStpOvrrdFA_write'
     */
    Rte_IrvWrite_FsftENGR_e_EngStrtStpOvrrd_VeENGR_b_EngStrtStpOvrrdFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftENGR_e_EngStrtStpOvrrd' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) FsftENGR_p_EngManfldAbsPrs(void)
{

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftENGR_p_EngManfldAbsPrs' */
    /* Outport: '<Root>/VeENGR_p_EngManfldAbsPrs' incorporates:
     *  Chart: '<S32>/FsftENGR_p_EngManfldAbsPrsChrt'
     *  SignalConversion generated from: '<S32>/VeENGR_p_EngManfldAbsPrs'
     */
    /* Gateway: FsftENGR_p_EngManfldAbsPrs/FsftENGR_p_EngManfldAbsPrsChrt */
    /* During: FsftENGR_p_EngManfldAbsPrs/FsftENGR_p_EngManfldAbsPrsChrt */
    /* Entry Internal: FsftENGR_p_EngManfldAbsPrs/FsftENGR_p_EngManfldAbsPrsChrt */
    /* Transition: '<S217>:2' */
    (void)Rte_Write_VeENGR_p_EngManfldAbsPrs_Value(KeENGR_p_EngManfldAbsPrsDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftENGR_p_EngManfldAbsPrs' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_P_OilDil_EngMinPwrReq(VAR(float32, AUTOMATIC)
    LeENGR_P_OilDil_EngMinPwrReq)
{

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_P_OilDil_EngMinPwrReq);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_P_OilDil_EngMinPwrReq' */
    /* Outport: '<Root>/VeENGR_P_OilDil_EngMinPwrReq' incorporates:
     *  SignalConversion generated from: '<S33>/VeENGR_P_OilDil_EngMinPwrReq'
     *  SignalConversion generated from: '<S33>/LeENGR_P_OilDil_EngMinPwrReq'
     */
    /* Gateway: PokeENGR_P_OilDil_EngMinPwrReq/PokeENGR_P_OilDil_EngMinPwrReqChrt */
    /* During: PokeENGR_P_OilDil_EngMinPwrReq/PokeENGR_P_OilDil_EngMinPwrReqChrt */
    /* Entry Internal: PokeENGR_P_OilDil_EngMinPwrReq/PokeENGR_P_OilDil_EngMinPwrReqChrt */
    /* Transition: '<S218>:2' */
    (void)Rte_Write_VeENGR_P_OilDil_EngMinPwrReq_Value
        (LeENGR_P_OilDil_EngMinPwrReq);

    /* End of Outputs for SubSystem: '<Root>/PokeENGR_P_OilDil_EngMinPwrReq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_Pct_CalcLoad_OBD(VAR(float32, AUTOMATIC)
    LeENGR_Pct_CalcLoad_OBD)
{

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_Pct_CalcLoad_OBD);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_Pct_CalcLoad_OBD' */
    /* Outport: '<Root>/VeENGR_Pct_CalcLoad_OBD' incorporates:
     *  SignalConversion generated from: '<S34>/VeENGR_Pct_CalcLoad_OBD'
     *  SignalConversion generated from: '<S34>/LeENGR_Pct_CalcLoad_OBD'
     */
    /* Gateway: PokeENGR_Pct_CalcLoad_OBD/PokeENGR_Pct_CalcLoad_OBDChrt */
    /* During: PokeENGR_Pct_CalcLoad_OBD/PokeENGR_Pct_CalcLoad_OBDChrt */
    /* Entry Internal: PokeENGR_Pct_CalcLoad_OBD/PokeENGR_Pct_CalcLoad_OBDChrt */
    /* Transition: '<S219>:2' */
    (void)Rte_Write_VeENGR_Pct_CalcLoad_OBD_Value(LeENGR_Pct_CalcLoad_OBD);

    /* End of Outputs for SubSystem: '<Root>/PokeENGR_Pct_CalcLoad_OBD' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_Pct_FuelLevel2(VAR(float32, AUTOMATIC)
    LeENGR_Pct_FuelLevel2)
{

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_Pct_FuelLevel2);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_Pct_FuelLevel2' */
    /* Outport: '<Root>/VeENGR_Pct_FuelLevel2' incorporates:
     *  SignalConversion generated from: '<S35>/VeENGR_Pct_FuelLevel2'
     *  SignalConversion generated from: '<S35>/LeENGR_Pct_FuelLevel2'
     */
    /* Gateway: PokeENGR_Pct_FuelLevel2/PokeENGR_Pct_FuelLevel2Chrt */
    /* During: PokeENGR_Pct_FuelLevel2/PokeENGR_Pct_FuelLevel2Chrt */
    /* Entry Internal: PokeENGR_Pct_FuelLevel2/PokeENGR_Pct_FuelLevel2Chrt */
    /* Transition: '<S220>:2' */
    (void)Rte_Write_VeENGR_Pct_FuelLevel2_Value(LeENGR_Pct_FuelLevel2);

    /* Outport: '<Root>/VeENGR_b_FuelLevel2_SgnlRcvd' incorporates:
     *  Chart: '<S35>/PokeENGR_Pct_FuelLevel2Chrt'
     *  SignalConversion generated from: '<S35>/VeENGR_b_FuelLevel2_SgnlRcvd'
     */
    (void)Rte_Write_VeENGR_b_FuelLevel2_SgnlRcvd_Value(true);

    /* End of Outputs for SubSystem: '<Root>/PokeENGR_Pct_FuelLevel2' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_Pct_PurgeIntensity(VAR(float32, AUTOMATIC)
    LeENGR_Pct_PurgeIntensity)
{

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_Pct_PurgeIntensity);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_Pct_PurgeIntensity' */
    /* Outport: '<Root>/VeENGR_Pct_PurgeIntensity' incorporates:
     *  SignalConversion generated from: '<S36>/VeENGR_Pct_PurgeIntensity'
     *  SignalConversion generated from: '<S36>/LeENGR_Pct_PurgeIntensity'
     */
    /* Gateway: PokeENGR_Pct_PurgeIntensity/PokeENGR_Pct_PurgeIntensityChrt */
    /* During: PokeENGR_Pct_PurgeIntensity/PokeENGR_Pct_PurgeIntensityChrt */
    /* Entry Internal: PokeENGR_Pct_PurgeIntensity/PokeENGR_Pct_PurgeIntensityChrt */
    /* Transition: '<S221>:2' */
    (void)Rte_Write_VeENGR_Pct_PurgeIntensity_Value(LeENGR_Pct_PurgeIntensity);

    /* End of Outputs for SubSystem: '<Root>/PokeENGR_Pct_PurgeIntensity' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_T_CatalystTemp(VAR(float32, AUTOMATIC)
    LeENGR_T_CatalystTemp, VAR(boolean, AUTOMATIC) LeENGR_b_CatalystTempFA)
{

#if Rte_SysCon_Variant_ENGR_2

    boolean rtb_LeENGR_b_CatalystTempFA_out_a;

#endif

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_T_CatalystTemp);

#endif

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_b_CatalystTempFA);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_T_CatalystTemp' */
    /* Chart: '<S37>/PokeENGR_T_CatalystTempChrt' incorporates:
     *  SignalConversion generated from: '<S37>/LeENGR_b_CatalystTempFA'
     */
    /* Gateway: PokeENGR_T_CatalystTemp/PokeENGR_T_CatalystTempChrt */
    /* During: PokeENGR_T_CatalystTemp/PokeENGR_T_CatalystTempChrt */
    /* Entry Internal: PokeENGR_T_CatalystTemp/PokeENGR_T_CatalystTempChrt */
    /* Transition: '<S222>:2' */
    if (!LeENGR_b_CatalystTempFA)
    {
        /* SignalConversion generated from: '<S37>/VeENGR_T_CatalystTemp' incorporates:
         *  Outport: '<Root>/VeENGR_T_CatalystTemp'
         *  SignalConversion generated from: '<S37>/LeENGR_T_CatalystTemp'
         */
        /* Transition: '<S222>:3' */
        /* Transition: '<S222>:15' */
        (void)Rte_Write_VeENGR_T_CatalystTemp_Value(LeENGR_T_CatalystTemp);
        rtb_LeENGR_b_CatalystTempFA_out_a = false;

        /* Transition: '<S222>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S37>/VeENGR_T_CatalystTemp' incorporates:
         *  Outport: '<Root>/VeENGR_T_CatalystTemp'
         */
        /* Transition: '<S222>:4' */
        (void)Rte_Write_VeENGR_T_CatalystTemp_Value(KeENGR_T_CatalystTempDflt);
        rtb_LeENGR_b_CatalystTempFA_out_a = true;
    }

    /* End of Chart: '<S37>/PokeENGR_T_CatalystTempChrt' */

    /* Outport: '<Root>/VeENGR_b_CatalystTempFA' incorporates:
     *  SignalConversion generated from: '<S37>/VeENGR_b_CatalystTempFA'
     */
    (void)Rte_Write_VeENGR_b_CatalystTempFA_Value
        (rtb_LeENGR_b_CatalystTempFA_out_a);

    /* End of Outputs for SubSystem: '<Root>/PokeENGR_T_CatalystTemp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_T_EngCoolantTemp(VAR(float32, AUTOMATIC)
    LeENGI_T_EngCoolantTemp, VAR(boolean, AUTOMATIC) LeENGI_b_ECT_SnsrFA)
{

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGI_T_EngCoolantTemp);

#endif

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGI_b_ECT_SnsrFA);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_T_EngCoolantTemp' */
    /* Chart: '<S38>/PokeENGR_T_EngCoolantTempChrt' incorporates:
     *  SignalConversion generated from: '<S38>/LeENGI_b_ECT_SnsrFA'
     */
    /* Gateway: PokeENGR_T_EngCoolantTemp/PokeENGR_T_EngCoolantTempChrt */
    /* During: PokeENGR_T_EngCoolantTemp/PokeENGR_T_EngCoolantTempChrt */
    /* Entry Internal: PokeENGR_T_EngCoolantTemp/PokeENGR_T_EngCoolantTempChrt */
    /* Transition: '<S223>:2' */
    ENGR_ac_DW.NeENGR_b_ECT_SnsrFA = LeENGI_b_ECT_SnsrFA;
    if (LeENGI_b_ECT_SnsrFA)
    {
        /* SignalConversion generated from: '<S38>/VeENGR_T_EngCoolantTempPoke' incorporates:
         *  Outport: '<Root>/VeENGR_T_EngCoolantTemp'
         */
        /* Transition: '<S223>:14' */
        /* Transition: '<S223>:38' */
        (void)Rte_Write_VeENGR_T_EngCoolantTemp_Value
            (KeENGR_T_EngCoolantTempDflt);

        /* Transition: '<S223>:40' */
    }
    else
    {
        /* SignalConversion generated from: '<S38>/VeENGR_T_EngCoolantTempPoke' incorporates:
         *  Outport: '<Root>/VeENGR_T_EngCoolantTemp'
         *  SignalConversion generated from: '<S38>/LeENGI_T_EngCoolantTemp'
         */
        /* Transition: '<S223>:36' */
        (void)Rte_Write_VeENGR_T_EngCoolantTemp_Value(LeENGI_T_EngCoolantTemp);
    }

    /* Outport: '<Root>/VeENGR_b_ECT_Sgnl_Rcvd' incorporates:
     *  Chart: '<S38>/PokeENGR_T_EngCoolantTempChrt'
     *  SignalConversion generated from: '<S38>/VeENGR_b_EngCoolantTempSgnl_Rcvd'
     */
    (void)Rte_Write_VeENGR_b_ECT_Sgnl_Rcvd_Value(true);

    /* End of Outputs for SubSystem: '<Root>/PokeENGR_T_EngCoolantTemp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_T_Engine_Oil_Temp(VAR(float32, AUTOMATIC)
    LeENGR_T_Engine_Oil_Temp, VAR(boolean, AUTOMATIC) LeENGR_b_Engine_Oil_TempFA)
{

#if Rte_SysCon_Variant_ENGR_2

    boolean rtb_LeENGR_b_Engine_Oil_TempFA_out_n;

#endif

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_T_Engine_Oil_Temp);

#endif

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_b_Engine_Oil_TempFA);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_T_Engine_Oil_Temp' */
    /* Chart: '<S39>/PokeENGR_T_Engine_Oil_TempChrt' incorporates:
     *  SignalConversion generated from: '<S39>/LeENGR_T_Engine_Oil_Temp'
     *  SignalConversion generated from: '<S39>/LeENGR_b_Engine_Oil_TempFA'
     */
    /* Gateway: PokeENGR_T_Engine_Oil_Temp/PokeENGR_T_Engine_Oil_TempChrt */
    /* During: PokeENGR_T_Engine_Oil_Temp/PokeENGR_T_Engine_Oil_TempChrt */
    /* Entry Internal: PokeENGR_T_Engine_Oil_Temp/PokeENGR_T_Engine_Oil_TempChrt */
    /* Transition: '<S224>:2' */
    if (!LeENGR_b_Engine_Oil_TempFA)
    {
        /* Transition: '<S224>:3' */
        /* Transition: '<S224>:15' */
        ENGR_ac_B.LeENGR_T_Engine_Oil_Temp_out = LeENGR_T_Engine_Oil_Temp;
        rtb_LeENGR_b_Engine_Oil_TempFA_out_n = false;

        /* Transition: '<S224>:18' */
    }
    else
    {
        /* Transition: '<S224>:4' */
        rtb_LeENGR_b_Engine_Oil_TempFA_out_n = true;
    }

    /* End of Chart: '<S39>/PokeENGR_T_Engine_Oil_TempChrt' */

    /* Outport: '<Root>/VeENGR_T_EngineOilTemp' incorporates:
     *  SignalConversion generated from: '<S39>/VeENGR_T_Engine_Oil_Temp'
     */
    (void)Rte_Write_VeENGR_T_EngineOilTemp_Value
        (ENGR_ac_B.LeENGR_T_Engine_Oil_Temp_out);

    /* Outport: '<Root>/VeENGR_b_EngineOilTempFA' incorporates:
     *  SignalConversion generated from: '<S39>/VeENGR_b_Engine_Oil_TempFA'
     */
    (void)Rte_Write_VeENGR_b_EngineOilTempFA_Value
        (rtb_LeENGR_b_Engine_Oil_TempFA_out_n);

    /* End of Outputs for SubSystem: '<Root>/PokeENGR_T_Engine_Oil_Temp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_T_ExhaustGasTemp(VAR(float32, AUTOMATIC)
    LeENGR_T_ExhaustGasTemp, VAR(boolean, AUTOMATIC) LeENGR_b_ExhaustGasTempFA)
{

#if Rte_SysCon_Variant_ENGR_2

    boolean rtb_LeENGR_b_ExhaustGasTempFA_out_c;

#endif

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_T_ExhaustGasTemp);

#endif

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_b_ExhaustGasTempFA);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_T_ExhaustGasTemp' */
    /* Chart: '<S40>/PokeENGR_T_ExhaustGasTempChrt' incorporates:
     *  SignalConversion generated from: '<S40>/LeENGR_T_ExhaustGasTemp'
     *  SignalConversion generated from: '<S40>/LeENGR_b_ExhaustGasTempFA'
     */
    /* Gateway: PokeENGR_T_ExhaustGasTemp/PokeENGR_T_ExhaustGasTempChrt */
    /* During: PokeENGR_T_ExhaustGasTemp/PokeENGR_T_ExhaustGasTempChrt */
    /* Entry Internal: PokeENGR_T_ExhaustGasTemp/PokeENGR_T_ExhaustGasTempChrt */
    /* Transition: '<S225>:2' */
    if (!LeENGR_b_ExhaustGasTempFA)
    {
        /* Transition: '<S225>:3' */
        /* Transition: '<S225>:15' */
        ENGR_ac_B.LeENGR_T_ExhaustGasTemp_out = LeENGR_T_ExhaustGasTemp;
        rtb_LeENGR_b_ExhaustGasTempFA_out_c = false;

        /* Transition: '<S225>:18' */
    }
    else
    {
        /* Transition: '<S225>:4' */
        rtb_LeENGR_b_ExhaustGasTempFA_out_c = true;
    }

    /* End of Chart: '<S40>/PokeENGR_T_ExhaustGasTempChrt' */

    /* Outport: '<Root>/VeENGR_T_ExhaustGasTemp' incorporates:
     *  SignalConversion generated from: '<S40>/VeENGR_T_ExhaustGasTemp'
     */
    (void)Rte_Write_VeENGR_T_ExhaustGasTemp_Value
        (ENGR_ac_B.LeENGR_T_ExhaustGasTemp_out);

    /* Outport: '<Root>/VeENGR_b_ExhaustGasTempFA' incorporates:
     *  SignalConversion generated from: '<S40>/VeENGR_b_ExhaustGasTempFA'
     */
    (void)Rte_Write_VeENGR_b_ExhaustGasTempFA_Value
        (rtb_LeENGR_b_ExhaustGasTempFA_out_c);

    /* End of Outputs for SubSystem: '<Root>/PokeENGR_T_ExhaustGasTemp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_T_InductionAirTemp(VAR(float32, AUTOMATIC)
    LeENGI_T_InductionAirTemp, VAR(boolean, AUTOMATIC) LeENGI_b_IAT_SnsrFA)
{

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGI_T_InductionAirTemp);

#endif

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGI_b_IAT_SnsrFA);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_T_InductionAirTemp' */
    /* Chart: '<S41>/PokeENGR_T_InductionAirTempChrt' incorporates:
     *  SignalConversion generated from: '<S41>/LeENGI_b_IAT_SnsrFA'
     */
    /* Gateway: PokeENGR_T_InductionAirTemp/PokeENGR_T_InductionAirTempChrt */
    /* During: PokeENGR_T_InductionAirTemp/PokeENGR_T_InductionAirTempChrt */
    /* Entry Internal: PokeENGR_T_InductionAirTemp/PokeENGR_T_InductionAirTempChrt */
    /* Transition: '<S226>:2' */
    ENGR_ac_DW.NeENGR_b_IAT_SnsrFA = LeENGI_b_IAT_SnsrFA;
    if (LeENGI_b_IAT_SnsrFA)
    {
        /* SignalConversion generated from: '<S41>/VeENGR_T_InductionAirTempPoke' incorporates:
         *  Outport: '<Root>/VeENGR_T_InductionAirTemp'
         */
        /* Transition: '<S226>:14' */
        /* Transition: '<S226>:56' */
        (void)Rte_Write_VeENGR_T_InductionAirTemp_Value
            (KeENGR_T_InductionAirTempDflt);
    }
    else
    {
        /* SignalConversion generated from: '<S41>/VeENGR_T_InductionAirTempPoke' incorporates:
         *  Outport: '<Root>/VeENGR_T_InductionAirTemp'
         *  SignalConversion generated from: '<S41>/LeENGI_T_InductionAirTemp'
         */
        /* Transition: '<S226>:16' */
        (void)Rte_Write_VeENGR_T_InductionAirTemp_Value
            (LeENGI_T_InductionAirTemp);

        /* Transition: '<S226>:57' */
    }

    if (VeENGR_b_CaptureIAT_PUP)
    {
        /* Transition: '<S226>:33' */
        /* Transition: '<S226>:46' */
        VeENGR_b_CaptureIAT_PUP = false;

        /* Transition: '<S226>:59' */
    }
    else
    {
        /* Transition: '<S226>:34' */
    }

    /* End of Chart: '<S41>/PokeENGR_T_InductionAirTempChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeENGR_T_InductionAirTemp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_V_FuelConsumption(VAR(float32, AUTOMATIC)
    LeENGR_V_FuelConsumption, VAR(boolean, AUTOMATIC) LeENGR_b_FuelConsumptionFA)
{

#if Rte_SysCon_Variant_ENGR_2

    boolean rtb_LeENGR_b_FuelConsumptionFA_out;

#endif

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_V_FuelConsumption);

#endif

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_b_FuelConsumptionFA);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_V_FuelConsumption' */
    /* Chart: '<S42>/PokeENGR_V_FuelConsumptionChrt' incorporates:
     *  SignalConversion generated from: '<S42>/LeENGR_V_FuelConsumption'
     *  SignalConversion generated from: '<S42>/LeENGR_b_FuelConsumptionFA'
     */
    /* Gateway: PokeENGR_V_FuelConsumption/PokeENGR_V_FuelConsumptionChrt */
    /* During: PokeENGR_V_FuelConsumption/PokeENGR_V_FuelConsumptionChrt */
    /* Entry Internal: PokeENGR_V_FuelConsumption/PokeENGR_V_FuelConsumptionChrt */
    /* Transition: '<S227>:2' */
    if (!LeENGR_b_FuelConsumptionFA)
    {
        /* Transition: '<S227>:3' */
        /* Transition: '<S227>:15' */
        ENGR_ac_B.LeENGR_V_FuelConsumption_out = LeENGR_V_FuelConsumption;
        rtb_LeENGR_b_FuelConsumptionFA_out = false;

        /* Transition: '<S227>:18' */
    }
    else
    {
        /* Transition: '<S227>:4' */
        rtb_LeENGR_b_FuelConsumptionFA_out = true;
    }

    /* End of Chart: '<S42>/PokeENGR_V_FuelConsumptionChrt' */

    /* Outport: '<Root>/VeENGR_V_FuelConsumption' incorporates:
     *  SignalConversion generated from: '<S42>/VeENGR_V_FuelConsumption'
     */
    (void)Rte_Write_VeENGR_V_FuelConsumption_Value
        (ENGR_ac_B.LeENGR_V_FuelConsumption_out);

    /* Outport: '<Root>/VeENGR_b_FuelConsFA' incorporates:
     *  SignalConversion generated from: '<S42>/VeENGR_b_FuelConsumptionFA'
     */
    (void)Rte_Write_VeENGR_b_FuelConsFA_Value(rtb_LeENGR_b_FuelConsumptionFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeENGR_V_FuelConsumption' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_b_AllwEVECM(VAR(boolean, AUTOMATIC)
    LeENGR_b_AllwEVECM)
{

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_b_AllwEVECM);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_b_AllwEVECM' */
    /* Outport: '<Root>/VeENGR_b_AllwEVECM' incorporates:
     *  SignalConversion generated from: '<S43>/VeENGR_b_AllwEVECM'
     *  SignalConversion generated from: '<S43>/LeENGR_b_AllwEVECM'
     */
    /* Gateway: PokeENGR_b_AllwEVECM/PokeENGR_b_AllwEVECMChrt */
    /* During: PokeENGR_b_AllwEVECM/PokeENGR_b_AllwEVECMChrt */
    /* Entry Internal: PokeENGR_b_AllwEVECM/PokeENGR_b_AllwEVECMChrt */
    /* Transition: '<S228>:2' */
    (void)Rte_Write_VeENGR_b_AllwEVECM_Value(LeENGR_b_AllwEVECM);

    /* End of Outputs for SubSystem: '<Root>/PokeENGR_b_AllwEVECM' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_b_CatTempMaintEnabled(VAR(boolean, AUTOMATIC)
    LeENGR_b_CatTempMaintEnabled)
{

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_b_CatTempMaintEnabled);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_b_CatTempMaintEnabled' */
    /* Outport: '<Root>/VeENGR_b_CatTempMaintEnabled' incorporates:
     *  SignalConversion generated from: '<S44>/VeENGR_b_CatTempMaintEnabled'
     *  SignalConversion generated from: '<S44>/LeENGR_b_CatTempMaintEnabled'
     */
    /* Gateway: PokeENGR_b_CatTempMaintEnabled/PokeENGR_b_CatTempMaintEnabledChrt */
    /* During: PokeENGR_b_CatTempMaintEnabled/PokeENGR_b_CatTempMaintEnabledChrt */
    /* Entry Internal: PokeENGR_b_CatTempMaintEnabled/PokeENGR_b_CatTempMaintEnabledChrt */
    /* Transition: '<S229>:2' */
    (void)Rte_Write_VeENGR_b_CatTempMaintEnabled_Value
        (LeENGR_b_CatTempMaintEnabled);

    /* End of Outputs for SubSystem: '<Root>/PokeENGR_b_CatTempMaintEnabled' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_b_CatalystWarmUpEnabled(VAR(boolean, AUTOMATIC)
    LeENGR_b_CatalystWarmUpEnabled)
{

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_b_CatalystWarmUpEnabled);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_b_CatalystWarmUpEnabled' */
    /* Outport: '<Root>/VeENGR_b_CatalystWarmUpEnabled' incorporates:
     *  SignalConversion generated from: '<S45>/VeENGR_b_CatalystWarmUpEnabled'
     *  SignalConversion generated from: '<S45>/LeENGR_b_CatalystWarmUpEnabled'
     */
    /* Gateway: PokeENGR_b_CatalystWarmUpEnabled/PokeENGR_b_CatalystWarmUpEnabledChrt */
    /* During: PokeENGR_b_CatalystWarmUpEnabled/PokeENGR_b_CatalystWarmUpEnabledChrt */
    /* Entry Internal: PokeENGR_b_CatalystWarmUpEnabled/PokeENGR_b_CatalystWarmUpEnabledChrt */
    /* Transition: '<S230>:2' */
    (void)Rte_Write_VeENGR_b_CatalystWarmUpEnabled_Value
        (LeENGR_b_CatalystWarmUpEnabled);

    /* End of Outputs for SubSystem: '<Root>/PokeENGR_b_CatalystWarmUpEnabled' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_b_CmprssnTest(VAR(boolean, AUTOMATIC)
    LeENGR_b_CmprssnTest)
{

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_b_CmprssnTest);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_b_CmprssnTest' */
    /* Merge: '<Root>/Merge_73' incorporates:
     *  SignalConversion generated from: '<S46>/LeENGR_b_CmprssnTest'
     *  SignalConversion generated from: '<S46>/VeENGR_b_CmprssnTest'
     */
    /* Gateway: PokeENGR_b_CmprssnTest/PokeENGR_b_CmprssnTestChrt */
    /* During: PokeENGR_b_CmprssnTest/PokeENGR_b_CmprssnTestChrt */
    /* Entry Internal: PokeENGR_b_CmprssnTest/PokeENGR_b_CmprssnTestChrt */
    /* Transition: '<S231>:2' */
    Rte_IrvWrite_PokeENGR_b_CmprssnTest_VeENGR_b_CmprssnTest_IRV
        (LeENGR_b_CmprssnTest);

    /* End of Outputs for SubSystem: '<Root>/PokeENGR_b_CmprssnTest' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_b_CondOkForCylDeac(VAR(boolean, AUTOMATIC)
    LeENGR_b_CondOkForCylDeac)
{

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_b_CondOkForCylDeac);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_b_CondOkForCylDeac' */
    /* Outport: '<Root>/VeENGR_b_CondOkForCylDeac' incorporates:
     *  SignalConversion generated from: '<S47>/VeENGR_b_CondOkForCylDeac'
     *  SignalConversion generated from: '<S47>/LeENGR_b_CondOkForCylDeac'
     */
    /* Gateway: PokeENGR_b_CondOkForCylDeac/PokeENGR_b_CondOkForCylDeacChrt */
    /* During: PokeENGR_b_CondOkForCylDeac/PokeENGR_b_CondOkForCylDeacChrt */
    /* Entry Internal: PokeENGR_b_CondOkForCylDeac/PokeENGR_b_CondOkForCylDeacChrt */
    /* Transition: '<S232>:2' */
    (void)Rte_Write_VeENGR_b_CondOkForCylDeac_Value(LeENGR_b_CondOkForCylDeac);

    /* End of Outputs for SubSystem: '<Root>/PokeENGR_b_CondOkForCylDeac' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_b_ECM_Feedback_HCP(VAR(boolean, AUTOMATIC)
    LeENGR_b_ECM_Feedback_HCP)
{

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_b_ECM_Feedback_HCP);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_b_ECM_Feedback_HCP' */
    /* Outport: '<Root>/VeENGR_b_ECM_Feedback_HCP' incorporates:
     *  SignalConversion generated from: '<S48>/VeENGR_b_ECM_Feedback_HCP'
     *  SignalConversion generated from: '<S48>/LeENGR_b_ECM_Feedback_HCP'
     */
    /* Gateway: PokeENGR_b_ECM_Feedback_HCP/PokeENGR_b_ECM_Feedback_HCPChrt */
    /* During: PokeENGR_b_ECM_Feedback_HCP/PokeENGR_b_ECM_Feedback_HCPChrt */
    /* Entry Internal: PokeENGR_b_ECM_Feedback_HCP/PokeENGR_b_ECM_Feedback_HCPChrt */
    /* Transition: '<S233>:2' */
    (void)Rte_Write_VeENGR_b_ECM_Feedback_HCP_Value(LeENGR_b_ECM_Feedback_HCP);

    /* End of Outputs for SubSystem: '<Root>/PokeENGR_b_ECM_Feedback_HCP' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_b_ESS_ReqEngOff(VAR(boolean, AUTOMATIC)
    LeENGR_b_ESS_ReqEngOff)
{
    UNUSED_PARAMETER(LeENGR_b_ESS_ReqEngOff);
}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_b_ESS_ReqEngStart(VAR(boolean, AUTOMATIC)
    LeENGR_b_ESS_ReqEngStart)
{
    UNUSED_PARAMETER(LeENGR_b_ESS_ReqEngStart);
}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_b_EngCombustionCmnd(VAR(boolean, AUTOMATIC)
    LeENGR_b_EngCombustionCmnd, VAR(boolean, AUTOMATIC)
    LeENGR_b_EngCombustionCmndFA)
{

#if Rte_SysCon_Variant_ENGR_2

    boolean rtb_LeENGR_b_EngCombustionCmndFA_out_j;

#endif

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_b_EngCombustionCmnd);

#endif

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_b_EngCombustionCmndFA);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_b_EngCombustionCmnd' */
    /* Chart: '<S51>/PokeENGR_b_EngCombustionCmndChrt' incorporates:
     *  SignalConversion generated from: '<S51>/LeENGR_b_EngCombustionCmndFA'
     *  SignalConversion generated from: '<S51>/LeENGR_b_EngCombustionCmnd'
     */
    /* Gateway: PokeENGR_b_EngCombustionCmnd/PokeENGR_b_EngCombustionCmndChrt */
    /* During: PokeENGR_b_EngCombustionCmnd/PokeENGR_b_EngCombustionCmndChrt */
    /* Entry Internal: PokeENGR_b_EngCombustionCmnd/PokeENGR_b_EngCombustionCmndChrt */
    /* Transition: '<S236>:2' */
    if (!LeENGR_b_EngCombustionCmndFA)
    {
        /* Transition: '<S236>:3' */
        /* Transition: '<S236>:15' */
        ENGR_ac_B.LeENGR_b_EngCombustionCmnd_out = LeENGR_b_EngCombustionCmnd;
        rtb_LeENGR_b_EngCombustionCmndFA_out_j = false;

        /* Transition: '<S236>:18' */
    }
    else
    {
        /* Transition: '<S236>:4' */
        rtb_LeENGR_b_EngCombustionCmndFA_out_j = true;
    }

    /* End of Chart: '<S51>/PokeENGR_b_EngCombustionCmndChrt' */

    /* Merge: '<Root>/Merge_32' incorporates:
     *  SignalConversion generated from: '<S51>/VeENGR_b_EngCombustionCmndFA_write'
     * */
    Rte_IrvWrite_PokeENGR_b_EngCombustionCmnd_VeENGR_b_EngCombustionCmndFA_write_IRV
        (rtb_LeENGR_b_EngCombustionCmndFA_out_j);

    /* Merge: '<Root>/Merge_22' incorporates:
     *  SignalConversion generated from: '<S51>/VeENGR_b_EngCombustionCmnd_write'
     * */
    Rte_IrvWrite_PokeENGR_b_EngCombustionCmnd_VeENGR_b_EngCombustionCmnd_write_IRV
        (ENGR_ac_B.LeENGR_b_EngCombustionCmnd_out);

    /* End of Outputs for SubSystem: '<Root>/PokeENGR_b_EngCombustionCmnd' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_b_EngDFSO_Allow(VAR(boolean, AUTOMATIC)
    LeENGR_b_EngDFSO_Allow)
{

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_b_EngDFSO_Allow);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_b_EngDFSO_Allow' */
    /* Outport: '<Root>/VeENGR_b_EngDFSO_Allow' incorporates:
     *  SignalConversion generated from: '<S52>/VeENGR_b_EngDFSO_Allow'
     *  SignalConversion generated from: '<S52>/LeENGR_b_EngDFSO_Allow'
     */
    /* Gateway: PokeENGR_b_EngDFSO_Allow/PokeENGR_b_EngDFSO_AllowChrt */
    /* During: PokeENGR_b_EngDFSO_Allow/PokeENGR_b_EngDFSO_AllowChrt */
    /* Entry Internal: PokeENGR_b_EngDFSO_Allow/PokeENGR_b_EngDFSO_AllowChrt */
    /* Transition: '<S237>:2' */
    (void)Rte_Write_VeENGR_b_EngDFSO_Allow_Value(LeENGR_b_EngDFSO_Allow);

    /* End of Outputs for SubSystem: '<Root>/PokeENGR_b_EngDFSO_Allow' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_b_EngMfLrnRPMCtrlReq(VAR(boolean, AUTOMATIC)
    LeENGR_b_EngMfLrnRPMCtrlReq)
{
    UNUSED_PARAMETER(LeENGR_b_EngMfLrnRPMCtrlReq);
}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_b_EngModeRun(VAR(boolean, AUTOMATIC)
    LeENGR_b_EngModeRun)
{
    UNUSED_PARAMETER(LeENGR_b_EngModeRun);
}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_b_EngOffRecom(VAR(boolean, AUTOMATIC)
    LeENGR_b_EngOffRecom)
{

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_b_EngOffRecom);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_b_EngOffRecom' */
    /* Outport: '<Root>/VeENGR_b_EngOffRecom' incorporates:
     *  SignalConversion generated from: '<S55>/VeENGR_b_EngOffRecom'
     *  SignalConversion generated from: '<S55>/LeENGR_b_EngOffRecom'
     */
    /* Gateway: PokeENGR_b_EngOffRecom/PokeENGR_b_EngOffRecomChrt */
    /* During: PokeENGR_b_EngOffRecom/PokeENGR_b_EngOffRecomChrt */
    /* Entry Internal: PokeENGR_b_EngOffRecom/PokeENGR_b_EngOffRecomChrt */
    /* Transition: '<S240>:2' */
    (void)Rte_Write_VeENGR_b_EngOffRecom_Value(LeENGR_b_EngOffRecom);

    /* End of Outputs for SubSystem: '<Root>/PokeENGR_b_EngOffRecom' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_b_EngSysDsbld(VAR(boolean, AUTOMATIC)
    LeENGR_b_EngSysDsbld)
{
    UNUSED_PARAMETER(LeENGR_b_EngSysDsbld);
}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_b_EngSysLowFuel(VAR(boolean, AUTOMATIC)
    LeENGR_b_EngSysLowFuel)
{

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_b_EngSysLowFuel);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_b_EngSysLowFuel' */
    /* Outport: '<Root>/VeENGR_b_EngSysLowFuel' incorporates:
     *  SignalConversion generated from: '<S57>/VeENGR_b_EngSysLowFuel'
     *  SignalConversion generated from: '<S57>/LeENGR_b_EngSysLowFuel'
     */
    /* Gateway: PokeENGR_b_EngSysLowFuel/PokeENGR_b_EngSysLowFuelChrt */
    /* During: PokeENGR_b_EngSysLowFuel/PokeENGR_b_EngSysLowFuelChrt */
    /* Entry Internal: PokeENGR_b_EngSysLowFuel/PokeENGR_b_EngSysLowFuelChrt */
    /* Transition: '<S242>:2' */
    (void)Rte_Write_VeENGR_b_EngSysLowFuel_Value(LeENGR_b_EngSysLowFuel);

    /* End of Outputs for SubSystem: '<Root>/PokeENGR_b_EngSysLowFuel' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_b_EngTLCLearnReq(VAR(boolean, AUTOMATIC)
    LeENGR_b_EngTLCLearnReq)
{

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_b_EngTLCLearnReq);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_b_EngTLCLearnReq' */
    /* Outport: '<Root>/VeENGR_b_EngTLCLearnReq' incorporates:
     *  SignalConversion generated from: '<S58>/VeENGR_b_EngTLCLearnReq'
     *  SignalConversion generated from: '<S58>/LeENGR_b_EngTLCLearnReq'
     */
    /* Gateway: PokeENGR_b_EngTLCLearnReq/PokeENGR_b_EngTLCLearnReqChrt */
    /* During: PokeENGR_b_EngTLCLearnReq/PokeENGR_b_EngTLCLearnReqChrt */
    /* Entry Internal: PokeENGR_b_EngTLCLearnReq/PokeENGR_b_EngTLCLearnReqChrt */
    /* Transition: '<S243>:2' */
    (void)Rte_Write_VeENGR_b_EngTLCLearnReq_Value(LeENGR_b_EngTLCLearnReq);

    /* End of Outputs for SubSystem: '<Root>/PokeENGR_b_EngTLCLearnReq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_b_EngTrq_Enbl_Rq_TCM(VAR(boolean, AUTOMATIC)
    LeENGR_b_EngTrq_Enbl_Rq_TCM)
{

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_b_EngTrq_Enbl_Rq_TCM);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_b_EngTrq_Enbl_Rq_TCM' */
    /* Merge: '<Root>/Merge_44' incorporates:
     *  SignalConversion generated from: '<S59>/LeENGR_b_EngTrq_Enbl_Rq_TCM'
     *  SignalConversion generated from: '<S59>/VeENGR_b_EngTrq_Enbl_Rq_TCM_write'
     */
    /* Gateway: PokeENGR_b_EngTrq_Enbl_Rq_TCM/PokeENGR_b_EngTrq_Enbl_Rq_TCMChrt */
    /* During: PokeENGR_b_EngTrq_Enbl_Rq_TCM/PokeENGR_b_EngTrq_Enbl_Rq_TCMChrt */
    /* Entry Internal: PokeENGR_b_EngTrq_Enbl_Rq_TCM/PokeENGR_b_EngTrq_Enbl_Rq_TCMChrt */
    /* Transition: '<S244>:2' */
    Rte_IrvWrite_PokeENGR_b_EngTrq_Enbl_Rq_TCM_VeENGR_b_EngTrq_Enbl_Rq_TCM_write_IRV
        (LeENGR_b_EngTrq_Enbl_Rq_TCM);

    /* End of Outputs for SubSystem: '<Root>/PokeENGR_b_EngTrq_Enbl_Rq_TCM' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_b_EngineStallDetected(VAR(boolean, AUTOMATIC)
    LeENGR_b_EngineStallDetected)
{

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_b_EngineStallDetected);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_b_EngineStallDetected' */
    /* Outport: '<Root>/VeENGR_b_EngineStallDetected' incorporates:
     *  SignalConversion generated from: '<S60>/VeENGR_b_EngineStallDetected'
     *  SignalConversion generated from: '<S60>/LeENGR_b_EngineStallDetected'
     */
    /* Gateway: PokeENGR_b_EngineStallDetected/PokeENGR_b_EngineStallDetectedChrt */
    /* During: PokeENGR_b_EngineStallDetected/PokeENGR_b_EngineStallDetectedChrt */
    /* Entry Internal: PokeENGR_b_EngineStallDetected/PokeENGR_b_EngineStallDetectedChrt */
    /* Transition: '<S245>:2' */
    (void)Rte_Write_VeENGR_b_EngineStallDetected_Value
        (LeENGR_b_EngineStallDetected);

    /* End of Outputs for SubSystem: '<Root>/PokeENGR_b_EngineStallDetected' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_b_GasFlowActuator(VAR(boolean, AUTOMATIC)
    LeENGR_b_GasFlowActuator)
{

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_b_GasFlowActuator);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_b_GasFlowActuator' */
    /* Outport: '<Root>/VeENGR_b_GasFlowActuator' incorporates:
     *  SignalConversion generated from: '<S61>/VeENGR_b_GasFlowActuator'
     *  SignalConversion generated from: '<S61>/LeENGR_b_GasFlowActuator'
     */
    /* Gateway: PokeENGR_b_GasFlowActuator/PokeENGR_b_GasFlowActuatorChrt */
    /* During: PokeENGR_b_GasFlowActuator/PokeENGR_b_GasFlowActuatorChrt */
    /* Entry Internal: PokeENGR_b_GasFlowActuator/PokeENGR_b_GasFlowActuatorChrt */
    /* Transition: '<S246>:2' */
    (void)Rte_Write_VeENGR_b_GasFlowActuator_Value(LeENGR_b_GasFlowActuator);

    /* End of Outputs for SubSystem: '<Root>/PokeENGR_b_GasFlowActuator' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_b_KickDnReq(VAR(boolean, AUTOMATIC)
    LeENGR_b_KickDnReq)
{

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_b_KickDnReq);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_b_KickDnReq' */
    /* Outport: '<Root>/VeENGR_b_KickDnReq' incorporates:
     *  SignalConversion generated from: '<S62>/VeENGR_b_KickDnReq'
     *  SignalConversion generated from: '<S62>/LeENGR_b_KickDnReq'
     */
    /* Gateway: PokeENGR_b_KickDnReq/PokeENGR_b_KickDnReqChrt */
    /* During: PokeENGR_b_KickDnReq/PokeENGR_b_KickDnReqChrt */
    /* Entry Internal: PokeENGR_b_KickDnReq/PokeENGR_b_KickDnReqChrt */
    /* Transition: '<S247>:2' */
    (void)Rte_Write_VeENGR_b_KickDnReq_Value(LeENGR_b_KickDnReq);

    /* End of Outputs for SubSystem: '<Root>/PokeENGR_b_KickDnReq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_b_LV12PwrFreeRq(VAR(boolean, AUTOMATIC)
    LeENGR_b_LV12PwrFreeRq)
{

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_b_LV12PwrFreeRq);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_b_LV12PwrFreeRq' */
    /* Merge: '<Root>/Merge_43' incorporates:
     *  SignalConversion generated from: '<S63>/LeENGR_b_LV12PwrFreeRq'
     *  SignalConversion generated from: '<S63>/VeENGR_b_LV12PwrFreeRq_write'
     */
    /* Gateway: PokeENGR_b_LV12PwrFreeRq/PokeENGR_b_LV12PwrFreeRqChrt */
    /* During: PokeENGR_b_LV12PwrFreeRq/PokeENGR_b_LV12PwrFreeRqChrt */
    /* Entry Internal: PokeENGR_b_LV12PwrFreeRq/PokeENGR_b_LV12PwrFreeRqChrt */
    /* Transition: '<S248>:2' */
    Rte_IrvWrite_PokeENGR_b_LV12PwrFreeRq_VeENGR_b_LV12PwrFreeRq_write_IRV
        (LeENGR_b_LV12PwrFreeRq);

    /* End of Outputs for SubSystem: '<Root>/PokeENGR_b_LV12PwrFreeRq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_b_OilDil_EngMinPwrEnbl(VAR(boolean, AUTOMATIC)
    LeENGR_b_OilDil_EngMinPwrEnbl)
{

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_b_OilDil_EngMinPwrEnbl);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_b_OilDil_EngMinPwrEnbl' */
    /* Outport: '<Root>/VeENGR_b_OilDil_EngMinPwrEnbl' incorporates:
     *  SignalConversion generated from: '<S64>/VeENGR_b_OilDil_EngMinPwrEnbl'
     *  SignalConversion generated from: '<S64>/LeENGR_b_OilDil_EngMinPwrEnbl'
     */
    /* Gateway: PokeENGR_b_OilDil_EngMinPwrEnbl/PokeENGR_b_OilDil_EngMinPwrEnblChrt */
    /* During: PokeENGR_b_OilDil_EngMinPwrEnbl/PokeENGR_b_OilDil_EngMinPwrEnblChrt */
    /* Entry Internal: PokeENGR_b_OilDil_EngMinPwrEnbl/PokeENGR_b_OilDil_EngMinPwrEnblChrt */
    /* Transition: '<S249>:2' */
    (void)Rte_Write_VeENGR_b_OilDil_EngMinPwrEnbl_Value
        (LeENGR_b_OilDil_EngMinPwrEnbl);

    /* End of Outputs for SubSystem: '<Root>/PokeENGR_b_OilDil_EngMinPwrEnbl' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_b_PCMSVSReq(VAR(boolean, AUTOMATIC)
    LeENGR_b_PCMSVSReq)
{
    UNUSED_PARAMETER(LeENGR_b_PCMSVSReq);
}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_b_PnLimitActvFlg(VAR(boolean, AUTOMATIC)
    LeENGR_b_PnLimitActvFlg, VAR(boolean, AUTOMATIC) LeENGR_b_PnLimitActvFlgFA)
{

#if Rte_SysCon_Variant_ENGR_2

    boolean rtb_LeENGR_b_PnLimitActvFlgFA_out_e;

#endif

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_b_PnLimitActvFlg);

#endif

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_b_PnLimitActvFlgFA);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_b_PnLimitActvFlg' */
    /* Chart: '<S66>/PokeENGR_b_PnLimitActvFlgChrt' incorporates:
     *  SignalConversion generated from: '<S66>/LeENGR_b_PnLimitActvFlgFA'
     *  SignalConversion generated from: '<S66>/LeENGR_b_PnLimitActvFlg'
     */
    /* Gateway: PokeENGR_b_PnLimitActvFlg/PokeENGR_b_PnLimitActvFlgChrt */
    /* During: PokeENGR_b_PnLimitActvFlg/PokeENGR_b_PnLimitActvFlgChrt */
    /* Entry Internal: PokeENGR_b_PnLimitActvFlg/PokeENGR_b_PnLimitActvFlgChrt */
    /* Transition: '<S251>:2' */
    if (!LeENGR_b_PnLimitActvFlgFA)
    {
        /* Transition: '<S251>:3' */
        /* Transition: '<S251>:15' */
        ENGR_ac_B.LeENGR_b_PnLimitActvFlg_out = LeENGR_b_PnLimitActvFlg;
        rtb_LeENGR_b_PnLimitActvFlgFA_out_e = false;

        /* Transition: '<S251>:18' */
    }
    else
    {
        /* Transition: '<S251>:4' */
        rtb_LeENGR_b_PnLimitActvFlgFA_out_e = true;
    }

    /* End of Chart: '<S66>/PokeENGR_b_PnLimitActvFlgChrt' */

    /* Outport: '<Root>/VeENGR_b_PnLimitActvFlg' incorporates:
     *  SignalConversion generated from: '<S66>/VeENGR_b_PnLimitActvFlg'
     */
    (void)Rte_Write_VeENGR_b_PnLimitActvFlg_Value
        (ENGR_ac_B.LeENGR_b_PnLimitActvFlg_out);

    /* Outport: '<Root>/VeENGR_b_PnLimitActvFlgFA' incorporates:
     *  SignalConversion generated from: '<S66>/VeENGR_b_PnLimitActvFlgFA'
     */
    (void)Rte_Write_VeENGR_b_PnLimitActvFlgFA_Value
        (rtb_LeENGR_b_PnLimitActvFlgFA_out_e);

    /* End of Outputs for SubSystem: '<Root>/PokeENGR_b_PnLimitActvFlg' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_b_StpNotAllwd(VAR(boolean, AUTOMATIC)
    LeENGR_b_StpNotAllwd, VAR(boolean, AUTOMATIC) LeENGR_b_StpNotAllwdFA)
{

#if Rte_SysCon_Variant_ENGR_2

    boolean rtb_LeENGR_b_StpNotAllwdFA_out_j;

#endif

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_b_StpNotAllwd);

#endif

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_b_StpNotAllwdFA);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_b_StpNotAllwd' */
    /* Chart: '<S67>/PokeENGR_b_StpNotAllwdChrt' incorporates:
     *  SignalConversion generated from: '<S67>/LeENGR_b_StpNotAllwdFA'
     *  SignalConversion generated from: '<S67>/LeENGR_b_StpNotAllwd'
     */
    /* Gateway: PokeENGR_b_StpNotAllwd/PokeENGR_b_StpNotAllwdChrt */
    /* During: PokeENGR_b_StpNotAllwd/PokeENGR_b_StpNotAllwdChrt */
    /* Entry Internal: PokeENGR_b_StpNotAllwd/PokeENGR_b_StpNotAllwdChrt */
    /* Transition: '<S252>:2' */
    if (!LeENGR_b_StpNotAllwdFA)
    {
        /* Transition: '<S252>:3' */
        /* Transition: '<S252>:15' */
        ENGR_ac_B.LeENGR_b_StpNotAllwd_out = LeENGR_b_StpNotAllwd;
        rtb_LeENGR_b_StpNotAllwdFA_out_j = false;

        /* Transition: '<S252>:18' */
    }
    else
    {
        /* Transition: '<S252>:4' */
        rtb_LeENGR_b_StpNotAllwdFA_out_j = true;
    }

    /* End of Chart: '<S67>/PokeENGR_b_StpNotAllwdChrt' */

    /* SignalConversion generated from: '<S67>/PokeENGR_b_StpNotAllwdChrt' incorporates:
     *  SignalConversion generated from: '<S67>/VeENGR_b_StpNotAllwdFA_write'
     *  SignalConversion generated from: '<S67>/VeENGR_b_StpNotAllwd_write'
     */
#if Rte_SysCon_Variant_ENGR_1 && Rte_SysCon_Variant_ENGR_2

    /* Merge: '<Root>/Merge_41' */
    Rte_IrvWrite_PokeENGR_b_StpNotAllwd_VeENGR_b_StpNotAllwdFA_write_IRV
        (rtb_LeENGR_b_StpNotAllwdFA_out_j);

    /* Merge: '<Root>/Merge_61' */
    Rte_IrvWrite_PokeENGR_b_StpNotAllwd_VeENGR_b_StpNotAllwd_write_IRV
        (ENGR_ac_B.LeENGR_b_StpNotAllwd_out);

#endif

    /* End of SignalConversion generated from: '<S67>/PokeENGR_b_StpNotAllwdChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeENGR_b_StpNotAllwd' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_b_StrtNotAllwd(VAR(boolean, AUTOMATIC)
    LeENGR_b_StrtNotAllwd, VAR(boolean, AUTOMATIC) LeENGR_b_StrtNotAllwdFA)
{

#if Rte_SysCon_Variant_ENGR_2

    boolean rtb_LeENGR_b_StrtNotAllwdFA_out_m;

#endif

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_b_StrtNotAllwd);

#endif

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_b_StrtNotAllwdFA);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_b_StrtNotAllwd' */
    /* Chart: '<S68>/PokeENGR_b_StrtNotAllwdChrt' incorporates:
     *  SignalConversion generated from: '<S68>/LeENGR_b_StrtNotAllwdFA'
     *  SignalConversion generated from: '<S68>/LeENGR_b_StrtNotAllwd'
     */
    /* Gateway: PokeENGR_b_StrtNotAllwd/PokeENGR_b_StrtNotAllwdChrt */
    /* During: PokeENGR_b_StrtNotAllwd/PokeENGR_b_StrtNotAllwdChrt */
    /* Entry Internal: PokeENGR_b_StrtNotAllwd/PokeENGR_b_StrtNotAllwdChrt */
    /* Transition: '<S253>:2' */
    if (!LeENGR_b_StrtNotAllwdFA)
    {
        /* Transition: '<S253>:3' */
        /* Transition: '<S253>:15' */
        ENGR_ac_B.LeENGR_b_StrtNotAllwd_out = LeENGR_b_StrtNotAllwd;
        rtb_LeENGR_b_StrtNotAllwdFA_out_m = false;

        /* Transition: '<S253>:18' */
    }
    else
    {
        /* Transition: '<S253>:4' */
        rtb_LeENGR_b_StrtNotAllwdFA_out_m = true;
    }

    /* End of Chart: '<S68>/PokeENGR_b_StrtNotAllwdChrt' */

    /* SignalConversion generated from: '<S68>/PokeENGR_b_StrtNotAllwdChrt' incorporates:
     *  SignalConversion generated from: '<S68>/VeENGR_b_StrtNotAllwdFA_write'
     *  SignalConversion generated from: '<S68>/VeENGR_b_StrtNotAllwd_write'
     */
#if Rte_SysCon_Variant_ENGR_1 && Rte_SysCon_Variant_ENGR_2

    /* Merge: '<Root>/Merge_52' */
    Rte_IrvWrite_PokeENGR_b_StrtNotAllwd_VeENGR_b_StrtNotAllwdFA_write_IRV
        (rtb_LeENGR_b_StrtNotAllwdFA_out_m);

    /* Merge: '<Root>/Merge_17' */
    Rte_IrvWrite_PokeENGR_b_StrtNotAllwd_VeENGR_b_StrtNotAllwd_write_IRV
        (ENGR_ac_B.LeENGR_b_StrtNotAllwd_out);

#endif

    /* End of SignalConversion generated from: '<S68>/PokeENGR_b_StrtNotAllwdChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeENGR_b_StrtNotAllwd' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_b_WarmUpCycCmplt(VAR(boolean, AUTOMATIC)
    LeENGR_b_WarmUpCycCmplt)
{

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_b_WarmUpCycCmplt);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_b_WarmUpCycCmplt' */
    /* Outport: '<Root>/VeENGR_b_WarmUpCycCmplt' incorporates:
     *  SignalConversion generated from: '<S69>/VeENGR_b_WarmUpCycCmplt'
     *  SignalConversion generated from: '<S69>/LeENGR_b_WarmUpCycCmplt'
     */
    /* Gateway: PokeENGR_b_WarmUpCycCmplt/PokeENGR_b_WarmUpCycCmpltChrt */
    /* During: PokeENGR_b_WarmUpCycCmplt/PokeENGR_b_WarmUpCycCmpltChrt */
    /* Entry Internal: PokeENGR_b_WarmUpCycCmplt/PokeENGR_b_WarmUpCycCmpltChrt */
    /* Transition: '<S254>:2' */
    (void)Rte_Write_VeENGR_b_WarmUpCycCmplt_Value(LeENGR_b_WarmUpCycCmplt);

    /* End of Outputs for SubSystem: '<Root>/PokeENGR_b_WarmUpCycCmplt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_b_ZylAbs(VAR(boolean, AUTOMATIC) LeENGR_b_ZylAbs)
{

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_b_ZylAbs);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_b_ZylAbs' */
    /* Outport: '<Root>/VeENGR_b_ZylAbs' incorporates:
     *  SignalConversion generated from: '<S70>/VeENGR_b_ZylAbs'
     *  SignalConversion generated from: '<S70>/LeENGR_b_ZylAbs'
     */
    /* Gateway: PokeENGR_b_ZylAbs/PokeENGR_b_ZylAbsChrt */
    /* During: PokeENGR_b_ZylAbs/PokeENGR_b_ZylAbsChrt */
    /* Entry Internal: PokeENGR_b_ZylAbs/PokeENGR_b_ZylAbsChrt */
    /* Transition: '<S255>:2' */
    (void)Rte_Write_VeENGR_b_ZylAbs_Value(LeENGR_b_ZylAbs);

    /* End of Outputs for SubSystem: '<Root>/PokeENGR_b_ZylAbs' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_dm_EXH_MASS_FLOW(VAR(float32, AUTOMATIC)
    LeENGR_dm_EXH_MASS_FLOW, VAR(boolean, AUTOMATIC) LeENGR_b_EXH_MASS_FLOWFA)
{

#if Rte_SysCon_Variant_ENGR_2

    boolean rtb_LeENGR_b_EXH_MASS_FLOWFA_out;

#endif

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_dm_EXH_MASS_FLOW);

#endif

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_b_EXH_MASS_FLOWFA);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_dm_EXH_MASS_FLOW' */
    /* Chart: '<S71>/PokeENGR_dm_EXH_MASS_FLOWChrt' incorporates:
     *  SignalConversion generated from: '<S71>/LeENGR_b_EXH_MASS_FLOWFA'
     *  SignalConversion generated from: '<S71>/LeENGR_dm_EXH_MASS_FLOW'
     */
    /* Gateway: PokeENGR_dm_EXH_MASS_FLOW/PokeENGR_dm_EXH_MASS_FLOWChrt */
    /* During: PokeENGR_dm_EXH_MASS_FLOW/PokeENGR_dm_EXH_MASS_FLOWChrt */
    /* Entry Internal: PokeENGR_dm_EXH_MASS_FLOW/PokeENGR_dm_EXH_MASS_FLOWChrt */
    /* Transition: '<S256>:2' */
    if (!LeENGR_b_EXH_MASS_FLOWFA)
    {
        /* Transition: '<S256>:3' */
        /* Transition: '<S256>:15' */
        ENGR_ac_B.LeENGR_dm_EXH_MASS_FLOW_out = LeENGR_dm_EXH_MASS_FLOW;
        rtb_LeENGR_b_EXH_MASS_FLOWFA_out = false;

        /* Transition: '<S256>:18' */
    }
    else
    {
        /* Transition: '<S256>:4' */
        rtb_LeENGR_b_EXH_MASS_FLOWFA_out = true;
    }

    /* End of Chart: '<S71>/PokeENGR_dm_EXH_MASS_FLOWChrt' */

    /* Outport: '<Root>/VeENGR_b_ExhMassFlowFA' incorporates:
     *  SignalConversion generated from: '<S71>/VeENGR_b_EXH_MASS_FLOWFA'
     */
    (void)Rte_Write_VeENGR_b_ExhMassFlowFA_Value
        (rtb_LeENGR_b_EXH_MASS_FLOWFA_out);

    /* Outport: '<Root>/VeENGR_dm_ExhMassFlow' incorporates:
     *  SignalConversion generated from: '<S71>/VeENGR_dm_EXH_MASS_FLOW'
     */
    (void)Rte_Write_VeENGR_dm_ExhMassFlow_Value
        (ENGR_ac_B.LeENGR_dm_EXH_MASS_FLOW_out);

    /* End of Outputs for SubSystem: '<Root>/PokeENGR_dm_EXH_MASS_FLOW' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_e_Cam_Phsr_Stat(VAR(TeENGR_e_Cam_Phsr_Stat,
    AUTOMATIC) LeENGR_e_Cam_Phsr_Stat)
{

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_e_Cam_Phsr_Stat);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_e_Cam_Phsr_Stat' */
    /* Outport: '<Root>/VeENGR_e_Cam_Phsr_Stat' incorporates:
     *  SignalConversion generated from: '<S72>/VeENGR_e_Cam_Phsr_Stat'
     *  SignalConversion generated from: '<S72>/LeENGR_e_Cam_Phsr_Stat'
     */
    /* Gateway: PokeENGR_e_Cam_Phsr_Stat/PokeENGR_e_Cam_Phsr_StatChrt */
    /* During: PokeENGR_e_Cam_Phsr_Stat/PokeENGR_e_Cam_Phsr_StatChrt */
    /* Entry Internal: PokeENGR_e_Cam_Phsr_Stat/PokeENGR_e_Cam_Phsr_StatChrt */
    /* Transition: '<S257>:2' */
    (void)Rte_Write_VeENGR_e_Cam_Phsr_Stat_Value(LeENGR_e_Cam_Phsr_Stat);

    /* End of Outputs for SubSystem: '<Root>/PokeENGR_e_Cam_Phsr_Stat' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_e_ComFail_C1CAN(VAR(TeENGR_e_ECMComFail_C1CAN,
    AUTOMATIC) LeENGR_e_ComFail_C1CAN, VAR(boolean, AUTOMATIC)
    LeENGR_b_ComFail_C1CANFA)
{

#if Rte_SysCon_Variant_ENGR_2

    TeENGR_e_ECMComFail_C1CAN rtb_LeENGR_e_ComFail_C1CAN_out;

#endif

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_e_ComFail_C1CAN);

#endif

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_b_ComFail_C1CANFA);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_e_ComFail_C1CAN' */
    /* Chart: '<S73>/PokeENGR_e_ComFail_C1CANChrt' incorporates:
     *  Constant: '<S258>/Calib'
     *  SignalConversion generated from: '<S73>/LeENGR_b_ComFail_C1CANFA'
     *  SignalConversion generated from: '<S73>/LeENGR_e_ComFail_C1CAN'
     */
    /* Gateway: PokeENGR_e_ComFail_C1CAN/PokeENGR_e_ComFail_C1CANChrt */
    /* During: PokeENGR_e_ComFail_C1CAN/PokeENGR_e_ComFail_C1CANChrt */
    /* Entry Internal: PokeENGR_e_ComFail_C1CAN/PokeENGR_e_ComFail_C1CANChrt */
    /* Transition: '<S259>:2' */
    if (!LeENGR_b_ComFail_C1CANFA)
    {
        /* Transition: '<S259>:3' */
        /* Transition: '<S259>:15' */
        rtb_LeENGR_e_ComFail_C1CAN_out = KaENGR_e_ECMComFail_C1
            [(LeENGR_e_ComFail_C1CAN)];

        /* Transition: '<S259>:18' */
    }
    else
    {
        /* Transition: '<S259>:4' */
        rtb_LeENGR_e_ComFail_C1CAN_out = KeENGR_e_ComFailDflt_C1CAN;
    }

    /* End of Chart: '<S73>/PokeENGR_e_ComFail_C1CANChrt' */

    /* Outport: '<Root>/VeENGR_e_ComFailECM_C1CAN' incorporates:
     *  SignalConversion generated from: '<S73>/VeENGR_e_ComFail_C1CAN'
     */
    (void)Rte_Write_VeENGR_e_ComFailECM_C1CAN_Value
        (rtb_LeENGR_e_ComFail_C1CAN_out);

    /* End of Outputs for SubSystem: '<Root>/PokeENGR_e_ComFail_C1CAN' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_e_ComFail_ePTCAN(VAR(TeENGR_e_ECMComFail_ePTCAN,
    AUTOMATIC) LeENGR_e_ComFail_ePTCAN, VAR(boolean, AUTOMATIC)
    LeENGR_b_ComFail_ePTCANFA)
{

#if Rte_SysCon_Variant_ENGR_2

    TeENGR_e_ECMComFail_ePTCAN rtb_LeENGR_e_ComFail_ePTCAN_out;

#endif

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_e_ComFail_ePTCAN);

#endif

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_b_ComFail_ePTCANFA);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_e_ComFail_ePTCAN' */
    /* Chart: '<S74>/PokeENGR_e_ComFail_ePTCANChrt' incorporates:
     *  Constant: '<S260>/Calib'
     *  SignalConversion generated from: '<S74>/LeENGR_b_ComFail_ePTCANFA'
     *  SignalConversion generated from: '<S74>/LeENGR_e_ComFail_ePTCAN'
     */
    /* Gateway: PokeENGR_e_ComFail_ePTCAN/PokeENGR_e_ComFail_ePTCANChrt */
    /* During: PokeENGR_e_ComFail_ePTCAN/PokeENGR_e_ComFail_ePTCANChrt */
    /* Entry Internal: PokeENGR_e_ComFail_ePTCAN/PokeENGR_e_ComFail_ePTCANChrt */
    /* Transition: '<S261>:2' */
    if (!LeENGR_b_ComFail_ePTCANFA)
    {
        /* Transition: '<S261>:3' */
        /* Transition: '<S261>:15' */
        rtb_LeENGR_e_ComFail_ePTCAN_out = KaENGR_e_ECMComFail_ePT
            [(LeENGR_e_ComFail_ePTCAN)];

        /* Transition: '<S261>:18' */
    }
    else
    {
        /* Transition: '<S261>:4' */
        rtb_LeENGR_e_ComFail_ePTCAN_out = KeENGR_e_ComFailDflt_ePTCAN;
    }

    /* End of Chart: '<S74>/PokeENGR_e_ComFail_ePTCANChrt' */

    /* Outport: '<Root>/VeENGR_e_ComFailECM_ePtCAN' incorporates:
     *  SignalConversion generated from: '<S74>/VeENGR_e_ComFail_ePTCAN'
     */
    (void)Rte_Write_VeENGR_e_ComFailECM_ePtCAN_Value
        (rtb_LeENGR_e_ComFail_ePTCAN_out);

    /* End of Outputs for SubSystem: '<Root>/PokeENGR_e_ComFail_ePTCAN' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_e_CylinderDeacMode(VAR(TeENGR_e_CylinderDeacModes,
    AUTOMATIC) LeENGR_e_CylinderDeacMode)
{

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_e_CylinderDeacMode);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_e_CylinderDeacMode' */
    /* Outport: '<Root>/VeENGR_e_CylinderDeacMode' incorporates:
     *  SignalConversion generated from: '<S75>/VeENGR_e_CylinderDeacMode'
     *  SignalConversion generated from: '<S75>/LeENGR_e_CylinderDeacMode'
     */
    /* Gateway: PokeENGR_e_CylinderDeacMode/PokeENGR_e_CylinderDeacModeChrt */
    /* During: PokeENGR_e_CylinderDeacMode/PokeENGR_e_CylinderDeacModeChrt */
    /* Entry Internal: PokeENGR_e_CylinderDeacMode/PokeENGR_e_CylinderDeacModeChrt */
    /* Transition: '<S262>:2' */
    (void)Rte_Write_VeENGR_e_CylinderDeacMode_Value(LeENGR_e_CylinderDeacMode);

    /* SignalConversion generated from: '<S75>/PokeENGR_e_CylinderDeacModeChrt' incorporates:
     *  SignalConversion generated from: '<S75>/VeENGR_e_CylinderDeacMode_write'
     */
#if Rte_SysCon_Variant_ENGR_2 && Rte_SysCon_Variant_ENGR_4

    /* Merge: '<Root>/Merge_45_Irv' incorporates:
     *  SignalConversion generated from: '<S75>/LeENGR_e_CylinderDeacMode'
     */
    Rte_IrvWrite_PokeENGR_e_CylinderDeacMode_VeENGR_e_CylinderDeacMode_write_IRV
        (LeENGR_e_CylinderDeacMode);

#endif

    /* End of SignalConversion generated from: '<S75>/PokeENGR_e_CylinderDeacModeChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeENGR_e_CylinderDeacMode' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_e_ECMReqRemStop(VAR(TeENGR_e_ECMReqRemStop,
    AUTOMATIC) LeENGR_e_ECMReqRemStop, VAR(boolean, AUTOMATIC)
    LeENGR_b_ECMReqRemStopFA)
{

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_e_ECMReqRemStop);

#endif

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_b_ECMReqRemStopFA);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_e_ECMReqRemStop' */
    /* Chart: '<S76>/PokeENGR_e_ECMReqRemStopChrt' incorporates:
     *  SignalConversion generated from: '<S76>/LeENGR_b_ECMReqRemStopFA'
     *  SignalConversion generated from: '<S76>/LeENGR_e_ECMReqRemStop'
     */
    /* Gateway: PokeENGR_e_ECMReqRemStop/PokeENGR_e_ECMReqRemStopChrt */
    /* During: PokeENGR_e_ECMReqRemStop/PokeENGR_e_ECMReqRemStopChrt */
    /* Entry Internal: PokeENGR_e_ECMReqRemStop/PokeENGR_e_ECMReqRemStopChrt */
    /* Transition: '<S263>:2' */
    if (!LeENGR_b_ECMReqRemStopFA)
    {
        /* Transition: '<S263>:3' */
        /* Transition: '<S263>:15' */
        ENGR_ac_B.LeENGR_e_ECMReqRemStop_out = LeENGR_e_ECMReqRemStop;

        /* Transition: '<S263>:18' */
    }
    else
    {
        /* Transition: '<S263>:4' */
    }

    /* End of Chart: '<S76>/PokeENGR_e_ECMReqRemStopChrt' */

    /* Outport: '<Root>/VeENGR_e_ECMReqRemStop' incorporates:
     *  SignalConversion generated from: '<S76>/VeENGR_e_ECMReqRemStop'
     */
    (void)Rte_Write_VeENGR_e_ECMReqRemStop_Value
        (ENGR_ac_B.LeENGR_e_ECMReqRemStop_out);

    /* End of Outputs for SubSystem: '<Root>/PokeENGR_e_ECMReqRemStop' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_e_ESSEngSt(VAR(TeENGR_e_ESSEngSt, AUTOMATIC)
    LeENGR_e_ESSEngSt)
{

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_e_ESSEngSt);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_e_ESSEngSt' */
    /* Outport: '<Root>/VeENGR_e_ESSEngSt' incorporates:
     *  SignalConversion generated from: '<S77>/VeENGR_e_ESSEngSt'
     *  SignalConversion generated from: '<S77>/LeENGR_e_ESSEngSt'
     */
    /* Gateway: PokeENGR_e_ESSEngSt/PokeENGR_e_ESSEngStChrt */
    /* During: PokeENGR_e_ESSEngSt/PokeENGR_e_ESSEngStChrt */
    /* Entry Internal: PokeENGR_e_ESSEngSt/PokeENGR_e_ESSEngStChrt */
    /* Transition: '<S264>:2' */
    (void)Rte_Write_VeENGR_e_ESSEngSt_Value(LeENGR_e_ESSEngSt);

    /* End of Outputs for SubSystem: '<Root>/PokeENGR_e_ESSEngSt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_e_ETRQ_Mode(VAR(TeENGR_e_ETRQ_Mode, AUTOMATIC)
    LeENGR_e_ETRQ_Mode, VAR(boolean, AUTOMATIC) LeENGR_b_ETRQ_ModeFA)
{

#if Rte_SysCon_Variant_ENGR_2

    TeENGR_e_ETRQ_Mode rtb_LeENGR_e_ETRQ_Mode_out;

#endif

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_e_ETRQ_Mode);

#endif

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_b_ETRQ_ModeFA);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_e_ETRQ_Mode' */
    /* Chart: '<S78>/PokeENGR_e_ETRQ_ModeChrt' incorporates:
     *  Constant: '<S265>/Calib'
     *  SignalConversion generated from: '<S78>/LeENGR_b_ETRQ_ModeFA'
     *  SignalConversion generated from: '<S78>/LeENGR_e_ETRQ_Mode'
     */
    /* Gateway: PokeENGR_e_ETRQ_Mode/PokeENGR_e_ETRQ_ModeChrt */
    /* During: PokeENGR_e_ETRQ_Mode/PokeENGR_e_ETRQ_ModeChrt */
    /* Entry Internal: PokeENGR_e_ETRQ_Mode/PokeENGR_e_ETRQ_ModeChrt */
    /* Transition: '<S266>:2' */
    if (!LeENGR_b_ETRQ_ModeFA)
    {
        /* Transition: '<S266>:3' */
        /* Transition: '<S266>:15' */
        rtb_LeENGR_e_ETRQ_Mode_out = KaENGR_e_ETRQ_Mode_Map[(LeENGR_e_ETRQ_Mode)];

        /* Transition: '<S266>:18' */
    }
    else
    {
        /* Transition: '<S266>:4' */
        rtb_LeENGR_e_ETRQ_Mode_out = CeENGR_e_ETRQ_Mode_SNA;
    }

    /* End of Chart: '<S78>/PokeENGR_e_ETRQ_ModeChrt' */

    /* Merge: '<Root>/Merge_34' incorporates:
     *  SignalConversion generated from: '<S78>/VeENGR_e_ETRQ_Mode_write'
     * */
    Rte_IrvWrite_PokeENGR_e_ETRQ_Mode_VeENGR_e_ETRQ_Mode_write_IRV
        (rtb_LeENGR_e_ETRQ_Mode_out);

    /* End of Outputs for SubSystem: '<Root>/PokeENGR_e_ETRQ_Mode' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_e_EngDFSO_Req(VAR(TeENGR_e_EngDFSO_St, AUTOMATIC)
    LeENGR_e_EngDFSO_Req)
{

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_e_EngDFSO_Req);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_e_EngDFSO_Req' */
    /* Outport: '<Root>/VeENGR_e_EngDFSO_Req' incorporates:
     *  SignalConversion generated from: '<S79>/VeENGR_e_EngDFSO_Req'
     *  SignalConversion generated from: '<S79>/LeENGR_e_EngDFSO_Req'
     */
    /* Gateway: PokeENGR_e_EngDFSO_Req/PokeENGR_e_EngDFSO_ReqChrt */
    /* During: PokeENGR_e_EngDFSO_Req/PokeENGR_e_EngDFSO_ReqChrt */
    /* Entry Internal: PokeENGR_e_EngDFSO_Req/PokeENGR_e_EngDFSO_ReqChrt */
    /* Transition: '<S267>:2' */
    (void)Rte_Write_VeENGR_e_EngDFSO_Req_Value(LeENGR_e_EngDFSO_Req);

    /* End of Outputs for SubSystem: '<Root>/PokeENGR_e_EngDFSO_Req' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_e_EngDFSO_St(VAR(TeENGR_e_EngDFSO_St, AUTOMATIC)
    LeENGR_e_EngDFSO_St)
{

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_e_EngDFSO_St);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_e_EngDFSO_St' */
    /* Outport: '<Root>/VeENGR_e_EngDFSO_St' incorporates:
     *  SignalConversion generated from: '<S80>/VeENGR_e_EngDFSO_St'
     *  SignalConversion generated from: '<S80>/LeENGR_e_EngDFSO_St'
     */
    /* Gateway: PokeENGR_e_EngDFSO_St/PokeENGR_e_EngDFSO_StChrt */
    /* During: PokeENGR_e_EngDFSO_St/PokeENGR_e_EngDFSO_StChrt */
    /* Entry Internal: PokeENGR_e_EngDFSO_St/PokeENGR_e_EngDFSO_StChrt */
    /* Transition: '<S268>:2' */
    (void)Rte_Write_VeENGR_e_EngDFSO_St_Value(LeENGR_e_EngDFSO_St);

    /* End of Outputs for SubSystem: '<Root>/PokeENGR_e_EngDFSO_St' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_e_EngReqStrtType(VAR(TeSTRR_e_EngStrtStopType,
    AUTOMATIC) LeENGR_e_EngReqStrtType)
{

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_e_EngReqStrtType);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_e_EngReqStrtType' */
    /* Merge: '<Root>/Merge_21' incorporates:
     *  SignalConversion generated from: '<S81>/LeENGR_e_EngReqStrtType'
     *  SignalConversion generated from: '<S81>/VeENGR_e_EngReqStrtType'
     */
    /* Gateway: PokeENGR_e_EngReqStrtType/PokeENGR_e_EngReqStrtTypeChrt */
    /* During: PokeENGR_e_EngReqStrtType/PokeENGR_e_EngReqStrtTypeChrt */
    /* Entry Internal: PokeENGR_e_EngReqStrtType/PokeENGR_e_EngReqStrtTypeChrt */
    /* Transition: '<S269>:2' */
    Rte_IrvWrite_PokeENGR_e_EngReqStrtType_VeENGR_e_EngReqStrtType_IRV
        (LeENGR_e_EngReqStrtType);

    /* End of Outputs for SubSystem: '<Root>/PokeENGR_e_EngReqStrtType' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_e_EngStrtStpOvrrd(VAR(TeENGR_e_ESS_Engine_State,
    AUTOMATIC) LeENGR_e_EngStrtStpOvrrd, VAR(boolean, AUTOMATIC)
    LeENGR_b_EngStrtStpOvrrdFA)
{

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_e_EngStrtStpOvrrd);

#endif

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_b_EngStrtStpOvrrdFA);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_e_EngStrtStpOvrrd' */
    /* Outport: '<Root>/VeENGR_b_EngStrtStpOvrrdFA' incorporates:
     *  SignalConversion generated from: '<S82>/VeENGR_b_EngStrtStpOvrrdFA'
     *  SignalConversion generated from: '<S82>/LeENGR_b_EngStrtStpOvrrdFA'
     */
    /* Gateway: PokeENGR_e_EngStrtStpOvrrd/PokeENGR_e_EngStrtStpOvrrdChrt */
    /* During: PokeENGR_e_EngStrtStpOvrrd/PokeENGR_e_EngStrtStpOvrrdChrt */
    /* Entry Internal: PokeENGR_e_EngStrtStpOvrrd/PokeENGR_e_EngStrtStpOvrrdChrt */
    /* Transition: '<S270>:2' */
    (void)Rte_Write_VeENGR_b_EngStrtStpOvrrdFA_Value(LeENGR_b_EngStrtStpOvrrdFA);

    /* Merge: '<Root>/Merge_33_Irv' incorporates:
     *  SignalConversion generated from: '<S82>/LeENGR_b_EngStrtStpOvrrdFA'
     *  SignalConversion generated from: '<S82>/VeENGR_b_EngStrtStpOvrrdFA_write'
     */
    Rte_IrvWrite_PokeENGR_e_EngStrtStpOvrrd_VeENGR_b_EngStrtStpOvrrdFA_write_IRV
        (LeENGR_b_EngStrtStpOvrrdFA);

    /* Merge: '<Root>/Merge_23' incorporates:
     *  SignalConversion generated from: '<S82>/LeENGR_e_EngStrtStpOvrrd'
     *  SignalConversion generated from: '<S82>/VeENGR_e_EngStrtStpOvrrd_write'
     */
    Rte_IrvWrite_PokeENGR_e_EngStrtStpOvrrd_VeENGR_e_EngStrtStpOvrrd_write_IRV
        (LeENGR_e_EngStrtStpOvrrd);

    /* End of Outputs for SubSystem: '<Root>/PokeENGR_e_EngStrtStpOvrrd' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_e_EngStrtStpOvrrd_C1(VAR
    (TeENGR_e_ESS_Engine_State, AUTOMATIC) LeENGR_e_EngStrtStpOvrrd_C1, VAR
    (boolean, AUTOMATIC) LeENGR_b_EngStrtStpOvrrd_C1FA)
{

#if Rte_SysCon_Variant_ENGR_2

    boolean rtb_LeENGR_b_EngStrtStpOvrrd_C1FA_out_l;

#endif

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_e_EngStrtStpOvrrd_C1);

#endif

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_b_EngStrtStpOvrrd_C1FA);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_e_EngStrtStpOvrrd_C1' */
    /* Chart: '<S83>/PokeENGR_e_EngStrtStpOvrrd_C1Chrt' incorporates:
     *  SignalConversion generated from: '<S83>/LeENGR_b_EngStrtStpOvrrd_C1FA'
     *  SignalConversion generated from: '<S83>/LeENGR_e_EngStrtStpOvrrd_C1'
     */
    /* Gateway: PokeENGR_e_EngStrtStpOvrrd_C1/PokeENGR_e_EngStrtStpOvrrd_C1Chrt */
    /* During: PokeENGR_e_EngStrtStpOvrrd_C1/PokeENGR_e_EngStrtStpOvrrd_C1Chrt */
    /* Entry Internal: PokeENGR_e_EngStrtStpOvrrd_C1/PokeENGR_e_EngStrtStpOvrrd_C1Chrt */
    /* Transition: '<S271>:2' */
    if (!LeENGR_b_EngStrtStpOvrrd_C1FA)
    {
        /* Transition: '<S271>:3' */
        /* Transition: '<S271>:15' */
        ENGR_ac_B.LeENGR_e_EngStrtStpOvrrd_C1_out = LeENGR_e_EngStrtStpOvrrd_C1;
        rtb_LeENGR_b_EngStrtStpOvrrd_C1FA_out_l = false;
        ENGR_ac_B.LeENGR_b_EngStrtStpOvrrd_C1Sgnl_Rcvd = true;

        /* Transition: '<S271>:18' */
    }
    else
    {
        /* Transition: '<S271>:4' */
        rtb_LeENGR_b_EngStrtStpOvrrd_C1FA_out_l = true;
    }

    /* End of Chart: '<S83>/PokeENGR_e_EngStrtStpOvrrd_C1Chrt' */

    /* Merge: '<Root>/Merge_56' incorporates:
     *  SignalConversion generated from: '<S83>/VeENGR_b_EngStrtStpOvrrd_C1FA_write'
     * */
    Rte_IrvWrite_PokeENGR_e_EngStrtStpOvrrd_C1_VeENGR_b_EngStrtStpOvrrdFA_C1_write_IRV
        (rtb_LeENGR_b_EngStrtStpOvrrd_C1FA_out_l);

    /* Merge: '<Root>/Merge_57' incorporates:
     *  SignalConversion generated from: '<S83>/VeENGR_b_EngStrtStpOvrrd_C1Sgnl_Rcvd_write'
     * */
    Rte_IrvWrite_PokeENGR_e_EngStrtStpOvrrd_C1_VeENGR_b_EngStrtStpOvrrd_SgnlRcvd_C1_write_IRV
        (ENGR_ac_B.LeENGR_b_EngStrtStpOvrrd_C1Sgnl_Rcvd);

    /* Merge: '<Root>/Merge_55' incorporates:
     *  SignalConversion generated from: '<S83>/VeENGR_e_EngStrtStpOvrrd_C1_write'
     * */
    Rte_IrvWrite_PokeENGR_e_EngStrtStpOvrrd_C1_VeENGR_e_EngStrtStpOvrrd_C1_write_IRV
        (ENGR_ac_B.LeENGR_e_EngStrtStpOvrrd_C1_out);

    /* End of Outputs for SubSystem: '<Root>/PokeENGR_e_EngStrtStpOvrrd_C1' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_e_EngineMaintenanceSts(VAR
    (TeENGR_e_EngineMaintenanceSts, AUTOMATIC) LeENGR_e_EngineMaintenanceSts)
{

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_e_EngineMaintenanceSts);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_e_EngineMaintenanceSts' */
    /* Outport: '<Root>/VeENGR_e_EngineMaintenanceSts' incorporates:
     *  SignalConversion generated from: '<S84>/VeENGR_e_EngineMaintenanceSts'
     *  SignalConversion generated from: '<S84>/LeENGR_e_EngineMaintenanceSts'
     */
    /* Gateway: PokeENGR_e_EngineMaintenanceSts/PokeENGR_e_EngineMaintenanceStsChrt */
    /* During: PokeENGR_e_EngineMaintenanceSts/PokeENGR_e_EngineMaintenanceStsChrt */
    /* Entry Internal: PokeENGR_e_EngineMaintenanceSts/PokeENGR_e_EngineMaintenanceStsChrt */
    /* Transition: '<S272>:2' */
    (void)Rte_Write_VeENGR_e_EngineMaintenanceSts_Value
        (LeENGR_e_EngineMaintenanceSts);

    /* End of Outputs for SubSystem: '<Root>/PokeENGR_e_EngineMaintenanceSts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_e_HybActEngTorqRespType(VAR
    (TePTAR_e_ImmediateTorqRespType, AUTOMATIC) LeENGR_e_HybActEngTorqRespType)
{
    UNUSED_PARAMETER(LeENGR_e_HybActEngTorqRespType);
}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_e_StpNotAllwdID(VAR(TeENGR_e_StopNotAllowedID,
    AUTOMATIC) LeENGR_e_StpNotAllwdID, VAR(boolean, AUTOMATIC)
    LeENGR_b_StpNotAllwdIDFA)
{

#if Rte_SysCon_Variant_ENGR_2

    boolean rtb_LeENGR_b_StpNotAllwdIDFA_out_g;

#endif

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_e_StpNotAllwdID);

#endif

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_b_StpNotAllwdIDFA);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_e_StpNotAllwdID' */
    /* Chart: '<S86>/PokeENGR_e_StpNotAllwdIDChrt' incorporates:
     *  SignalConversion generated from: '<S86>/LeENGR_b_StpNotAllwdIDFA'
     *  SignalConversion generated from: '<S86>/LeENGR_e_StpNotAllwdID'
     */
    /* Gateway: PokeENGR_e_StpNotAllwdID/PokeENGR_e_StpNotAllwdIDChrt */
    /* During: PokeENGR_e_StpNotAllwdID/PokeENGR_e_StpNotAllwdIDChrt */
    /* Entry Internal: PokeENGR_e_StpNotAllwdID/PokeENGR_e_StpNotAllwdIDChrt */
    /* Transition: '<S275>:2' */
    if (!LeENGR_b_StpNotAllwdIDFA)
    {
        /* Transition: '<S275>:3' */
        /* Transition: '<S275>:15' */
        ENGR_ac_B.LeENGR_e_StpNotAllwdID_out = LeENGR_e_StpNotAllwdID;
        rtb_LeENGR_b_StpNotAllwdIDFA_out_g = false;

        /* Transition: '<S275>:18' */
    }
    else
    {
        /* Transition: '<S275>:4' */
        rtb_LeENGR_b_StpNotAllwdIDFA_out_g = true;
    }

    /* End of Chart: '<S86>/PokeENGR_e_StpNotAllwdIDChrt' */

    /* SignalConversion generated from: '<S86>/PokeENGR_e_StpNotAllwdIDChrt' incorporates:
     *  SignalConversion generated from: '<S86>/VeENGR_b_StpNotAllwdIDFA_write'
     *  SignalConversion generated from: '<S86>/VeENGR_e_StpNotAllwdID_write'
     */
#if Rte_SysCon_Variant_ENGR_1 && Rte_SysCon_Variant_ENGR_2

    /* Merge: '<Root>/Merge_28' */
    Rte_IrvWrite_PokeENGR_e_StpNotAllwdID_VeENGR_b_StpNotAllwdIDFA_write_IRV
        (rtb_LeENGR_b_StpNotAllwdIDFA_out_g);

    /* Merge: '<Root>/Merge_14' */
    Rte_IrvWrite_PokeENGR_e_StpNotAllwdID_VeENGR_e_StpNotAllwdID_write_IRV
        (ENGR_ac_B.LeENGR_e_StpNotAllwdID_out);

#endif

    /* End of SignalConversion generated from: '<S86>/PokeENGR_e_StpNotAllwdIDChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeENGR_e_StpNotAllwdID' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_e_StrtNotAllwdID(VAR(TeENGR_e_StartNotAllowedID,
    AUTOMATIC) LeENGR_e_StrtNotAllwdID, VAR(boolean, AUTOMATIC)
    LeENGR_b_StrtNotAllwdIDFA)
{

#if Rte_SysCon_Variant_ENGR_2

    boolean rtb_LeENGR_b_StrtNotAllwdIDFA_out_c;

#endif

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_e_StrtNotAllwdID);

#endif

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_b_StrtNotAllwdIDFA);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_e_StrtNotAllwdID' */
    /* Chart: '<S87>/PokeENGR_e_StrtNotAllwdIDChrt' incorporates:
     *  SignalConversion generated from: '<S87>/LeENGR_b_StrtNotAllwdIDFA'
     *  SignalConversion generated from: '<S87>/LeENGR_e_StrtNotAllwdID'
     */
    /* Gateway: PokeENGR_e_StrtNotAllwdID/PokeENGR_e_StrtNotAllwdIDChrt */
    /* During: PokeENGR_e_StrtNotAllwdID/PokeENGR_e_StrtNotAllwdIDChrt */
    /* Entry Internal: PokeENGR_e_StrtNotAllwdID/PokeENGR_e_StrtNotAllwdIDChrt */
    /* Transition: '<S276>:2' */
    if (!LeENGR_b_StrtNotAllwdIDFA)
    {
        /* Transition: '<S276>:3' */
        /* Transition: '<S276>:15' */
        ENGR_ac_B.LeENGR_e_StrtNotAllwdID_out = LeENGR_e_StrtNotAllwdID;
        rtb_LeENGR_b_StrtNotAllwdIDFA_out_c = false;

        /* Transition: '<S276>:18' */
    }
    else
    {
        /* Transition: '<S276>:4' */
        rtb_LeENGR_b_StrtNotAllwdIDFA_out_c = true;
    }

    /* End of Chart: '<S87>/PokeENGR_e_StrtNotAllwdIDChrt' */

    /* SignalConversion generated from: '<S87>/PokeENGR_e_StrtNotAllwdIDChrt' incorporates:
     *  SignalConversion generated from: '<S87>/VeENGR_b_StrtNotAllwdIDFA_write'
     *  SignalConversion generated from: '<S87>/VeENGR_e_StrtNotAllwdID_write'
     */
#if Rte_SysCon_Variant_ENGR_1 && Rte_SysCon_Variant_ENGR_2

    /* Merge: '<Root>/Merge_30' */
    Rte_IrvWrite_PokeENGR_e_StrtNotAllwdID_VeENGR_b_StrtNotAllwdIDFA_write_IRV
        (rtb_LeENGR_b_StrtNotAllwdIDFA_out_c);

    /* Merge: '<Root>/Merge_19' */
    Rte_IrvWrite_PokeENGR_e_StrtNotAllwdID_VeENGR_e_StrtNotAllwdID_write_IRV
        (ENGR_ac_B.LeENGR_e_StrtNotAllwdID_out);

#endif

    /* End of SignalConversion generated from: '<S87>/PokeENGR_e_StrtNotAllwdIDChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeENGR_e_StrtNotAllwdID' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_e_StsMil_ECM(VAR(TeENGR_e_StsMiL_ECM, AUTOMATIC)
    LeENGR_e_StsMil_ECM)
{

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_e_StsMil_ECM);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_e_StsMil_ECM' */
    /* Merge: '<Root>/Merge_51' incorporates:
     *  SignalConversion generated from: '<S88>/LeENGR_e_StsMil_ECM'
     *  SignalConversion generated from: '<S88>/VeENGR_e_StsMil_ECM_write'
     */
    /* Gateway: PokeENGR_e_StsMil_ECM/PokeENGR_e_StsMil_ECMChrt */
    /* During: PokeENGR_e_StsMil_ECM/PokeENGR_e_StsMil_ECMChrt */
    /* Entry Internal: PokeENGR_e_StsMil_ECM/PokeENGR_e_StsMil_ECMChrt */
    /* Transition: '<S277>:2' */
    Rte_IrvWrite_PokeENGR_e_StsMil_ECM_VeENGR_e_StsMil_ECM_write_IRV
        (LeENGR_e_StsMil_ECM);

    /* End of Outputs for SubSystem: '<Root>/PokeENGR_e_StsMil_ECM' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_i_ECM_LHOM_Trans(VAR(sint16, AUTOMATIC)
    LeENGR_i_ECM_LHOM_Trans)
{

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_i_ECM_LHOM_Trans);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_i_ECM_LHOM_Trans' */
    /* Merge: '<Root>/Merge_42' incorporates:
     *  SignalConversion generated from: '<S89>/LeENGR_i_ECM_LHOM_Trans'
     *  SignalConversion generated from: '<S89>/VeENGR_i_ECM_LHOM_Trans_write'
     */
    /* Gateway: PokeENGR_i_ECM_LHOM_Trans/PokeENGR_i_ECM_LHOM_TransChrt */
    /* During: PokeENGR_i_ECM_LHOM_Trans/PokeENGR_i_ECM_LHOM_TransChrt */
    /* Entry Internal: PokeENGR_i_ECM_LHOM_Trans/PokeENGR_i_ECM_LHOM_TransChrt */
    /* Transition: '<S278>:2' */
    Rte_IrvWrite_PokeENGR_i_ECM_LHOM_Trans_VeENGR_i_ECM_LHOM_Trans_write_IRV
        (LeENGR_i_ECM_LHOM_Trans);

    /* End of Outputs for SubSystem: '<Root>/PokeENGR_i_ECM_LHOM_Trans' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_m_CylAirIntake(VAR(float32, AUTOMATIC)
    LeENGR_m_CylAirIntake)
{

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_m_CylAirIntake);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_m_CylAirIntake' */
    /* Outport: '<Root>/VeENGR_m_CylAirIntake' incorporates:
     *  SignalConversion generated from: '<S90>/VeENGR_m_CylAirIntake'
     *  SignalConversion generated from: '<S90>/LeENGR_m_CylAirIntake'
     */
    /* Gateway: PokeENGR_m_CylAirIntake/PokeENGR_m_CylAirIntakeChrt */
    /* During: PokeENGR_m_CylAirIntake/PokeENGR_m_CylAirIntakeChrt */
    /* Entry Internal: PokeENGR_m_CylAirIntake/PokeENGR_m_CylAirIntakeChrt */
    /* Transition: '<S279>:2' */
    (void)Rte_Write_VeENGR_m_CylAirIntake_Value(LeENGR_m_CylAirIntake);

    /* End of Outputs for SubSystem: '<Root>/PokeENGR_m_CylAirIntake' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_p_EngManfldAbsPrs(VAR(float32, AUTOMATIC)
    LeENGR_p_EngManfldAbsPrs, VAR(boolean, AUTOMATIC) LeENGR_b_EngManfldAbsPrsFA)
{

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_p_EngManfldAbsPrs);

#endif

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_b_EngManfldAbsPrsFA);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_p_EngManfldAbsPrs' */
    /* Chart: '<S91>/PokeENGR_p_EngManfldAbsPrsChrt' incorporates:
     *  SignalConversion generated from: '<S91>/LeENGR_b_EngManfldAbsPrsFA'
     *  SignalConversion generated from: '<S91>/LeENGR_p_EngManfldAbsPrs'
     */
    /* Gateway: PokeENGR_p_EngManfldAbsPrs/PokeENGR_p_EngManfldAbsPrsChrt */
    /* During: PokeENGR_p_EngManfldAbsPrs/PokeENGR_p_EngManfldAbsPrsChrt */
    /* Entry Internal: PokeENGR_p_EngManfldAbsPrs/PokeENGR_p_EngManfldAbsPrsChrt */
    /* Transition: '<S280>:2' */
    if (!LeENGR_b_EngManfldAbsPrsFA)
    {
        /* Transition: '<S280>:3' */
        /* Transition: '<S280>:15' */
        ENGR_ac_B.LeENGR_p_EngManfldAbsPrs_out = LeENGR_p_EngManfldAbsPrs;

        /* Transition: '<S280>:18' */
    }
    else
    {
        /* Transition: '<S280>:4' */
    }

    /* End of Chart: '<S91>/PokeENGR_p_EngManfldAbsPrsChrt' */

    /* Outport: '<Root>/VeENGR_p_EngManfldAbsPrs' incorporates:
     *  SignalConversion generated from: '<S91>/VeENGR_p_EngManfldAbsPrs'
     */
    (void)Rte_Write_VeENGR_p_EngManfldAbsPrs_Value
        (ENGR_ac_B.LeENGR_p_EngManfldAbsPrs_out);

    /* End of Outputs for SubSystem: '<Root>/PokeENGR_p_EngManfldAbsPrs' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) PokeENGR_t_EngOffTime(VAR(float32, AUTOMATIC)
    LeENGR_t_EngOffTime, VAR(boolean, AUTOMATIC) LeENGR_b_EngOffTimeFA)
{

#if Rte_SysCon_Variant_ENGR_2

    boolean rtb_LeENGR_b_EngOffTimeFA_out;

#endif

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_t_EngOffTime);

#endif

#if !Rte_SysCon_Variant_ENGR_2

    UNUSED_PARAMETER(LeENGR_b_EngOffTimeFA);

#endif

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeENGR_t_EngOffTime' */
    /* Chart: '<S92>/PokeENGR_t_EngOffTimeChrt' incorporates:
     *  SignalConversion generated from: '<S92>/LeENGR_b_EngOffTimeFA'
     *  SignalConversion generated from: '<S92>/LeENGR_t_EngOffTime'
     */
    /* Gateway: PokeENGR_t_EngOffTime/PokeENGR_t_EngOffTimeChrt */
    /* During: PokeENGR_t_EngOffTime/PokeENGR_t_EngOffTimeChrt */
    /* Entry Internal: PokeENGR_t_EngOffTime/PokeENGR_t_EngOffTimeChrt */
    /* Transition: '<S281>:2' */
    if (!LeENGR_b_EngOffTimeFA)
    {
        /* Transition: '<S281>:3' */
        /* Transition: '<S281>:15' */
        ENGR_ac_B.LeENGR_t_EngOffTime_out = LeENGR_t_EngOffTime;
        rtb_LeENGR_b_EngOffTimeFA_out = false;

        /* Transition: '<S281>:18' */
    }
    else
    {
        /* Transition: '<S281>:4' */
        rtb_LeENGR_b_EngOffTimeFA_out = true;
    }

    /* End of Chart: '<S92>/PokeENGR_t_EngOffTimeChrt' */

    /* Outport: '<Root>/VeENGR_b_EngOffTimeFA' incorporates:
     *  SignalConversion generated from: '<S92>/VeENGR_b_EngOffTimeFA'
     */
    (void)Rte_Write_VeENGR_b_EngOffTimeFA_Value(rtb_LeENGR_b_EngOffTimeFA_out);

    /* Outport: '<Root>/VeENGR_t_EngOffTime' incorporates:
     *  SignalConversion generated from: '<S92>/VeENGR_t_EngOffTime'
     */
    (void)Rte_Write_VeENGR_t_EngOffTime_Value(ENGR_ac_B.LeENGR_t_EngOffTime_out);

    /* End of Outputs for SubSystem: '<Root>/PokeENGR_t_EngOffTime' */
#endif

}

#endif

/* Output function */
FUNC(void, ENGR_CODE) ENGR_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/ENGR_PwrOff'
     */
    /* Outport: '<Root>/NeENGR_b_ECT_SnsrFA_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeENGR_b_ECT_SnsrFA'
     */
    (void)Rte_Write_NeENGR_b_ECT_SnsrFA_NeENGR_b_ECT_SnsrFA
        (ENGR_ac_DW.NeENGR_b_ECT_SnsrFA);

    /* Outport: '<Root>/NeENGR_b_IAT_SnsrFA_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeENGR_b_IAT_SnsrFA'
     */
    (void)Rte_Write_NeENGR_b_IAT_SnsrFA_NeENGR_b_IAT_SnsrFA
        (ENGR_ac_DW.NeENGR_b_IAT_SnsrFA);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Output function */
FUNC(void, ENGR_CODE) ENGR_PwrOn(void)
{

#if Rte_SysCon_Variant_ENGR_2

    boolean rtb_OutportBufferForVeENGR_b_CmprssnTe_p;

#endif

#if Rte_SysCon_Variant_ENGR_2

    boolean rtb_OutportBufferForVeENGR_b_EngCombus_l;

#endif

#if Rte_SysCon_Variant_ENGR_2

    boolean rtb_OutportBufferForVeENGR_b_EngCombu_mm;

#endif

#if Rte_SysCon_Variant_ENGR_2

    boolean rtb_OutportBufferForVeENGR_b_EngTrq_En_k;

#endif

#if Rte_SysCon_Variant_ENGR_2

    boolean rtb_OutportBufferForVeENGR_b_LV12PwrFr_l;

#endif

#if Rte_SysCon_Variant_ENGR_2

    boolean rtb_OutportBufferForVeENGR_b_StpNotAllwd;

#endif

#if Rte_SysCon_Variant_ENGR_2

    boolean rtb_OutportBufferForVeENGR_b_StpNotAll_a;

#endif

#if Rte_SysCon_Variant_ENGR_2

    boolean rtb_OutportBufferForVeENGR_b_StpNotAll_b;

#endif

#if Rte_SysCon_Variant_ENGR_2

    boolean rtb_OutportBufferForVeENGR_b_StrtNotAllw;

#endif

#if Rte_SysCon_Variant_ENGR_2

    boolean rtb_OutportBufferForVeENGR_b_StrtNotAl_b;

#endif

#if Rte_SysCon_Variant_ENGR_2

    boolean rtb_OutportBufferForVeENGR_b_StrtNotAl_o;

#endif

#if Rte_SysCon_Variant_ENGR_2

    sint16 rtb_OutportBufferForVeENGR_i_ECM_LHOM__p;

#endif

#if Rte_SysCon_Variant_ENGR_2

    TeENGR_e_ETRQ_Mode rtb_OutportBufferForVeENGR_e_ETRQ_Mode_m;

#endif

#if Rte_SysCon_Variant_ENGR_2

    TeENGR_e_ESS_Engine_State rtb_OutportBufferForVeENGR_e_EngStrtSt_f;

#endif

#if Rte_SysCon_Variant_ENGR_2

    TeENGR_e_StopNotAllowedID rtb_OutportBufferForVeENGR_e_StpNotAllwd;

#endif

#if Rte_SysCon_Variant_ENGR_2

    TeENGR_e_StartNotAllowedID rtb_OutportBufferForVeENGR_e_StrtNotAllw;

#endif

#if Rte_SysCon_Variant_ENGR_2

    TeENGR_e_StsMiL_ECM rtb_OutportBufferForVeENGR_e_StsMil_EC_p;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/ENGR_PwrOn'
     */
    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/DSM_Init'
     */
    /* DataStoreWrite: '<S150>/NeENGR_b_IAT_SnsrFA' incorporates:
     *  Inport: '<Root>/NeENGR_b_IAT_SnsrFA_PM_In'
     */
    (void)Rte_Read_NeENGR_b_IAT_SnsrFA_Rx_NeENGR_b_IAT_SnsrFA
        (&ENGR_ac_DW.NeENGR_b_IAT_SnsrFA);

    /* DataStoreWrite: '<S150>/NeENGR_b_ECT_SnsrFA' incorporates:
     *  Inport: '<Root>/NeENGR_b_ECT_SnsrFA_PM_In'
     */
    (void)Rte_Read_NeENGR_b_ECT_SnsrFA_Rx_NeENGR_b_ECT_SnsrFA
        (&ENGR_ac_DW.NeENGR_b_ECT_SnsrFA);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Init ENGI Output'
     */
    /* DataStoreWrite: '<S152>/Data Store Write1' incorporates:
     *  Constant: '<S152>/TRUE Constant1'
     *  Gain: '<S169>/Gain'
     *  Gain: '<S170>/Gain'
     *  SignalConversion generated from: '<S152>/VariantSource4'
     */
#if Rte_SysCon_Variant_ENGR_2

    VeENGR_b_CaptureIAT_PUP = true;

    /* VariantMerge generated from: '<S152>/VariantSource4' incorporates:
     *  Constant: '<S152>/TRUE Constant1'
     *  Constant: '<S165>/Calib'
     */
    ENGR_ac_B.VariantMerge_For_Variant_Source_VariantS =
        KeENGR_T_InductionAirTempDflt;

    /* VariantMerge generated from: '<S152>/VariantSource1' incorporates:
     *  Constant: '<S167>/Calib'
     */
    ENGR_ac_B.VariantMerge_For_Variant_Source_Varian_c =
        KeENGR_p_EngManfldAbsPrsDflt;

#else

    /* VariantMerge generated from: '<S152>/VariantSource4' incorporates:
     *  Constant: '<S152>/Constant Value1'
     *  SignalConversion generated from: '<S152>/VariantSource4'
     */
    ENGR_ac_B.VariantMerge_For_Variant_Source_VariantS = 20.0F;

#endif

    /* End of DataStoreWrite: '<S152>/Data Store Write1' */

    /* Gain: '<S168>/Gain' incorporates:
     *  SignalConversion generated from: '<S152>/VariantSource1'
     */
#if Rte_SysCon_Variant_ENGR_2

    /* VariantMerge generated from: '<S152>/VariantSource2' incorporates:
     *  Constant: '<S162>/Calib'
     */
    ENGR_ac_B.VariantMerge_For_Variant_Source_Varian_h =
        KeENGR_T_EngCoolantTempDflt;

#else

    /* VariantMerge generated from: '<S152>/VariantSource1' incorporates:
     *  Constant: '<S152>/Constant Value2'
     *  SignalConversion generated from: '<S152>/VariantSource1'
     */
    ENGR_ac_B.VariantMerge_For_Variant_Source_Varian_c = 100.0F;

#endif

    /* End of Gain: '<S168>/Gain' */

    /* Gain: '<S171>/Gain' incorporates:
     *  SignalConversion generated from: '<S152>/VariantSource2'
     */
#if Rte_SysCon_Variant_ENGR_2

    /* VariantMerge generated from: '<S152>/VariantSource3' incorporates:
     *  Constant: '<S161>/Calib'
     */
    ENGR_ac_B.VariantMerge_For_Variant_Source_Varian_g =
        KeENGR_T_CatalystTempDflt;

#else

    /* VariantMerge generated from: '<S152>/VariantSource2' incorporates:
     *  Constant: '<S152>/Constant Value5'
     *  SignalConversion generated from: '<S152>/VariantSource2'
     */
    ENGR_ac_B.VariantMerge_For_Variant_Source_Varian_h = 80.0F;

#endif

    /* End of Gain: '<S171>/Gain' */

    /* SignalConversion generated from: '<S152>/VariantSource5' incorporates:
     *  Constant: '<S152>/FALSE Constant15'
     *  Constant: '<S152>/TRUE Constant4'
     *  SignalConversion generated from: '<S152>/VariantSource3'
     */
#if Rte_SysCon_Variant_ENGR_2

    /* VariantMerge generated from: '<S152>/VariantSource5' */
    ENGR_ac_B.VariantMerge_For_Variant_Source_Varia_gh = true;

#else

    /* VariantMerge generated from: '<S152>/VariantSource3' incorporates:
     *  Constant: '<S152>/Constant Value6'
     *  SignalConversion generated from: '<S152>/VariantSource3'
     */
    ENGR_ac_B.VariantMerge_For_Variant_Source_Varian_g = 750.0F;
    ENGR_ac_B.FALSEConstant15 = false;

    /* VariantMerge generated from: '<S152>/VariantSource5' incorporates:
     *  Constant: '<S152>/FALSE Constant15'
     *  SignalConversion generated from: '<S152>/VariantSource5'
     */
    ENGR_ac_B.VariantMerge_For_Variant_Source_Varia_gh =
        ENGR_ac_B.FALSEConstant15;

#endif

    /* End of SignalConversion generated from: '<S152>/VariantSource5' */

    /* SignalConversion generated from: '<S152>/LeENGR_Pct_CalcLoad_OBD' */
    ENGR_ac_B.OutportBufferForLeENGR_Pct_CalcLoad_OBD = 0.0F;

    /* SignalConversion generated from: '<S152>/LeENGI_b_ECTTempSgRx' */
    ENGR_ac_B.OutportBufferForLeENGI_b_ECTTempSgRx = false;

    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Process_Engine_Status__Init ENGI Output'
     */
    /* SignalConversion generated from: '<S152>/VeENGR_T_ExhaustGasTemp' incorporates:
     *  Constant: '<S153>/TRUE Constant2'
     *  Constant: '<S163>/Calib'
     *  Constant: '<S164>/Calib'
     *  Constant: '<S166>/Calib'
     *  DataStoreWrite: '<S153>/Data Store Write'
     *  SignalConversion generated from: '<S152>/VeENGR_T_EngineOilTemp'
     *  SignalConversion generated from: '<S152>/VeENGR_b_EngineOilTempFA'
     *  SignalConversion generated from: '<S152>/VeENGR_b_ExhMassFlowFA'
     *  SignalConversion generated from: '<S152>/VeENGR_b_ExhaustGasTempFA'
     *  SignalConversion generated from: '<S152>/VeENGR_dm_ExhMassFlow'
     */
#if Rte_SysCon_Variant_ENGR_2

    ENGR_ac_B.Calib = KeENGR_T_ExhaustGasTempInit;

    /* SignalConversion generated from: '<S152>/VeENGR_T_ExhaustGasTemp' incorporates:
     *  Constant: '<S164>/Calib'
     */
    ENGR_ac_B.OutportBufferForVeENGR_T_ExhaustGasTemp = ENGR_ac_B.Calib;

    /* SignalConversion generated from: '<S152>/VeENGR_b_ExhaustGasTempFA' */
    ENGR_ac_B.OutportBufferForVeENGR_b_ExhaustGasTempF = false;
    ENGR_ac_B.Calib_p = KeENGR_T_EngineOilTempInit;

    /* SignalConversion generated from: '<S152>/VeENGR_T_EngineOilTemp' incorporates:
     *  Constant: '<S163>/Calib'
     */
    ENGR_ac_B.OutportBufferForVeENGR_T_EngineOilTemp = ENGR_ac_B.Calib_p;

    /* SignalConversion generated from: '<S152>/VeENGR_b_EngineOilTempFA' */
    ENGR_ac_B.OutportBufferForVeENGR_b_EngineOilTempFA = false;
    ENGR_ac_B.Calib_b = KeENGR_dm_ExhMassFlowInit;

    /* SignalConversion generated from: '<S152>/VeENGR_dm_ExhMassFlow' incorporates:
     *  Constant: '<S166>/Calib'
     */
    ENGR_ac_B.OutportBufferForVeENGR_dm_ExhMassFlow = ENGR_ac_B.Calib_b;

    /* SignalConversion generated from: '<S152>/VeENGR_b_ExhMassFlowFA' */
    ENGR_ac_B.OutportBufferForVeENGR_b_ExhMassFlowFA = false;
    VeENGR_b_CaptureIAT_PUP = true;

#endif

    /* End of SignalConversion generated from: '<S152>/VeENGR_T_ExhaustGasTemp' */

    /* SignalConversion generated from: '<S152>/VeENGR_b_FuelLevel2_SgnlRcvd' */
    ENGR_ac_B.OutportBufferForVeENGR_b_FuelLevel2_Sgnl = false;

    /* SignalConversion generated from: '<S152>/VeENGR_Pct_FuelLevel2' */
    ENGR_ac_B.OutportBufferForVeENGR_Pct_FuelLevel2 = 0.0F;

    /* SignalConversion generated from: '<S152>/VeENGR_m_CylAirIntake' */
    ENGR_ac_B.OutportBufferForVeENGR_m_CylAirIntake = 0.0F;

    /* SignalConversion generated from: '<S152>/VeENGR_b_OilDil_EngMinPwrEnbl' */
    ENGR_ac_B.OutportBufferForVeENGR_b_OilDil_EngMinPw = false;

    /* SignalConversion generated from: '<S152>/VeENGR_P_OilDil_EngMinPwrReq' */
    ENGR_ac_B.OutportBufferForVeENGR_P_OilDil_EngMinPw = 0.0F;

    /* SignalConversion generated from: '<S152>/VeENGR_b_GasFlowActuator' */
    ENGR_ac_B.OutportBufferForVeENGR_b_GasFlowActuator = false;

    /* SignalConversion generated from: '<S152>/VeENGR_e_EngineMaintenanceSts' incorporates:
     *  Constant: '<S160>/Constant'
     */
    ENGR_ac_B.OutportBufferForVeENGR_e_EngineMaintenan =
        ENGR_ac_ConstB.Constant_e;

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Process_Engine_Status__Init ENGI Output'
     */
    /* SignalConversion generated from: '<S153>/VeENGR_b_CondOkForCylDeac' */
    ENGR_ac_B.OutportBufferForVeENGR_b_CondOkForCylDea = false;

    /* SignalConversion generated from: '<S153>/VeENGR_e_CylinderDeacMode' incorporates:
     *  Constant: '<S172>/Constant'
     */
    ENGR_ac_B.OutportBufferForVeENGR_e_CylinderDeacMod =
        ENGR_ac_ConstB.Constant_n;

    /* SignalConversion generated from: '<S153>/VeENGR_b_EngDFSO_Allow' */
    ENGR_ac_B.OutportBufferForVeENGR_b_EngDFSO_Allow = false;

    /* SignalConversion generated from: '<S153>/VeENGR_e_EngDFSO_Req' incorporates:
     *  Constant: '<S177>/Constant'
     */
    ENGR_ac_B.OutportBufferForVeENGR_e_EngDFSO_Req = ENGR_ac_ConstB.Constant_h;

    /* SignalConversion generated from: '<S153>/VeENGR_e_EngDFSO_St' incorporates:
     *  Constant: '<S173>/Constant'
     */
    ENGR_ac_B.OutportBufferForVeENGR_e_EngDFSO_St = ENGR_ac_ConstB.Constant_l;

    /* SignalConversion generated from: '<S153>/VeENGR_e_Cam_Phsr_Stat' incorporates:
     *  Constant: '<S174>/Constant'
     */
    ENGR_ac_B.OutportBufferForVeENGR_e_Cam_Phsr_Stat =
        ENGR_ac_ConstB.Constant_ab;

    /* SignalConversion generated from: '<S153>/VeENGR_b_EngSysLowFuel' */
    ENGR_ac_B.OutportBufferForVeENGR_b_EngSysLowFuel = false;

    /* SignalConversion generated from: '<S153>/VeENGR_b_EngTLCLearnReq' */
    ENGR_ac_B.OutportBufferForVeENGR_b_EngTLCLearnReq = false;

    /* SignalConversion generated from: '<S153>/VeENGR_b_WarmUpCycCmplt' */
    ENGR_ac_B.OutportBufferForVeENGR_b_WarmUpCycCmplt = false;

    /* SignalConversion generated from: '<S153>/VeENGR_y_ZylAbs' */
    ENGR_ac_B.OutportBufferForVeENGR_y_ZylAbs = false;

    /* SignalConversion generated from: '<S153>/VeENGR_y_EngOffRecom' */
    ENGR_ac_B.OutportBufferForVeENGR_y_EngOffRecom = false;

    /* SignalConversion generated from: '<S153>/VeENGR_e_EngReqStrtType' incorporates:
     *  Constant: '<S175>/Constant'
     */
    ENGR_ac_B.OutportBufferForVeENGR_e_EngReqStrtTyp_c =
        ENGR_ac_ConstB.Constant_o;

    /* SignalConversion generated from: '<S153>/VeENGR_b_EngCombustionCmnd' incorporates:
     *  SignalConversion generated from: '<S153>/VeENGR_b_EngCombustionCmndFA'
     *  SignalConversion generated from: '<S153>/VeENGR_e_ETRQ_Mode'
     *  SignalConversion generated from: '<S153>/VeENGR_e_EngStrtStpOvrrd'
     */
#if Rte_SysCon_Variant_ENGR_2

    /* SignalConversion generated from: '<S153>/VeENGR_b_EngCombustionCmnd' */
    ENGR_ac_B.OutportBufferForVeENGR_b_EngCombustion_o = false;

    /* SignalConversion generated from: '<S153>/VeENGR_b_EngCombustionCmndFA' */
    ENGR_ac_B.OutportBufferForVeENGR_b_EngCombustion_j = false;

    /* SignalConversion generated from: '<S153>/VeENGR_e_EngStrtStpOvrrd' incorporates:
     *  Constant: '<S178>/Constant'
     */
    ENGR_ac_B.OutportBufferForVeENGR_e_EngStrtStpOvr_k =
        ENGR_ac_ConstB.Constant_lr;

    /* SignalConversion generated from: '<S153>/VeENGR_e_ETRQ_Mode' incorporates:
     *  Constant: '<S184>/Constant'
     */
    ENGR_ac_B.OutportBufferForVeENGR_e_ETRQ_Mode_j = ENGR_ac_ConstB.Constant_f;

#endif

    /* End of SignalConversion generated from: '<S153>/VeENGR_b_EngCombustionCmnd' */

    /* SignalConversion generated from: '<S153>/VeENGR_b_EngStrtStpOvrrdFA' */
    ENGR_ac_B.OutportBufferForVeENGR_b_EngStrtStpOvrrd = false;

    /* SignalConversion generated from: '<S153>/VeENGR_t_EngOffTime' */
    ENGR_ac_B.OutportBufferForVeENGR_t_EngOffTime = 0.0F;

    /* SignalConversion generated from: '<S153>/VeENGR_b_EngOffTimeFA' */
    ENGR_ac_B.OutportBufferForVeENGR_b_EngOffTimeFA = false;

    /* SignalConversion generated from: '<S153>/VeENGR_b_CatalystWarmUpEnabled' */
    ENGR_ac_B.OutportBufferForVeENGR_b_CatalystWarmUpE = false;

    /* SignalConversion generated from: '<S153>/VeENGR_b_Feedback_HCP' */
    ENGR_ac_B.OutportBufferForVeENGR_b_Feedback_HCP = true;

    /* SignalConversion generated from: '<S153>/VeENGR_b_AllwEVECM' */
    ENGR_ac_B.OutportBufferForVeENGR_b_AllwEVECM = false;

    /* SignalConversion generated from: '<S153>/VeENGR_V_FuelConsumption' */
    ENGR_ac_B.OutportBufferForVeENGR_V_FuelConsumption = 0.0F;

    /* SignalConversion generated from: '<S153>/VeENGR_b_FuelConsumptionFA' */
    ENGR_ac_B.OutportBufferForVeENGR_b_FuelConsumption = false;

    /* SignalConversion generated from: '<S153>/VeENGR_e_ECMReqRemStop' incorporates:
     *  Constant: '<S182>/Constant'
     */
    ENGR_ac_B.OutportBufferForVeENGR_e_ECMReqRemStop =
        ENGR_ac_ConstB.Constant_ex;

    /* SignalConversion generated from: '<S153>/VeENGR_i_ECM_LHOM_Trans' incorporates:
     *  SignalConversion generated from: '<S153>/VeENGR_b_EngTrq_Enbl_Rq_TCM'
     *  SignalConversion generated from: '<S153>/VeENGR_b_LV12PwrFreeRq'
     */
#if Rte_SysCon_Variant_ENGR_2

    /* SignalConversion generated from: '<S153>/VeENGR_i_ECM_LHOM_Trans' */
    ENGR_ac_B.OutportBufferForVeENGR_i_ECM_LHOM_Tran_o = 0;

    /* SignalConversion generated from: '<S153>/VeENGR_b_LV12PwrFreeRq' */
    ENGR_ac_B.OutportBufferForVeENGR_b_LV12PwrFreeRq_d = false;

    /* SignalConversion generated from: '<S153>/VeENGR_b_EngTrq_Enbl_Rq_TCM' */
    ENGR_ac_B.OutportBufferForVeENGR_b_EngTrq_Enbl_R_c = true;

#endif

    /* End of SignalConversion generated from: '<S153>/VeENGR_i_ECM_LHOM_Trans' */

    /* SignalConversion generated from: '<S153>/VeENGR_b_KickDn' */
    ENGR_ac_B.OutportBufferForVeENGR_b_KickDn = false;

    /* SignalConversion generated from: '<S153>/VariantSource4' incorporates:
     *  Constant: '<S185>/Constant'
     *  Constant: '<S188>/Calib'
     */
#if Rte_SysCon_Variant_ENGR_2

    ENGR_ac_B.Calib_pm = KeENGR_e_ComFailInit_C1CAN;

    /* VariantMerge generated from: '<S153>/VariantSource4' incorporates:
     *  Constant: '<S188>/Calib'
     */
    ENGR_ac_B.VariantMerge_For_Variant_Source_Varian_a = ENGR_ac_B.Calib_pm;

#else

    ENGR_ac_B.Constant_f = CeENGR_e_NoFaultECM_C1;

#endif

    /* End of SignalConversion generated from: '<S153>/VariantSource4' */

    /* SignalConversion generated from: '<S153>/VariantSource5' incorporates:
     *  Constant: '<S186>/Constant'
     *  Constant: '<S189>/Calib'
     *  SignalConversion generated from: '<S153>/VariantSource4'
     */
#if Rte_SysCon_Variant_ENGR_2

    ENGR_ac_B.Calib_k = KeENGR_e_ComFailInit_ePTCAN;

    /* VariantMerge generated from: '<S153>/VariantSource5' incorporates:
     *  Constant: '<S189>/Calib'
     */
    ENGR_ac_B.VariantMerge_For_Variant_Source_Vari_ghj = ENGR_ac_B.Calib_k;

#else

    /* VariantMerge generated from: '<S153>/VariantSource4' incorporates:
     *  Constant: '<S185>/Constant'
     *  SignalConversion generated from: '<S153>/VariantSource4'
     */
    ENGR_ac_B.VariantMerge_For_Variant_Source_Varian_a = ENGR_ac_B.Constant_f;
    ENGR_ac_B.Constant = CeENGR_e_NoFaultECM_ePT;

    /* VariantMerge generated from: '<S153>/VariantSource5' incorporates:
     *  Constant: '<S186>/Constant'
     *  SignalConversion generated from: '<S153>/VariantSource5'
     */
    ENGR_ac_B.VariantMerge_For_Variant_Source_Vari_ghj = ENGR_ac_B.Constant;

#endif

    /* End of SignalConversion generated from: '<S153>/VariantSource5' */

    /* SignalConversion generated from: '<S153>/VeENGR_b_EngineStallDetected' */
    ENGR_ac_B.OutportBufferForVeENGR_b_EngineStallDete = false;

    /* SignalConversion generated from: '<S153>/VeENGR_b_CatTempMaintEnabled' */
    ENGR_ac_B.OutportBufferForVeENGR_b_CatTempMaintEna = false;

    /* SignalConversion generated from: '<S153>/VeENGR_e_StsMil_ECM' incorporates:
     *  Constant: '<S187>/Calib'
     *  SignalConversion generated from: '<S153>/VeENGR_b_CmprssnTest'
     *  SignalConversion generated from: '<S153>/VeENGR_b_PnLimitActvFlg'
     *  SignalConversion generated from: '<S153>/VeENGR_b_PnLimitActvFlgFA'
     *  SignalConversion generated from: '<S153>/VeENGR_b_StpNotAllwd'
     *  SignalConversion generated from: '<S153>/VeENGR_b_StpNotAllwdFA'
     *  SignalConversion generated from: '<S153>/VeENGR_b_StpNotAllwdIDFA'
     *  SignalConversion generated from: '<S153>/VeENGR_b_StrtNotAllwd'
     *  SignalConversion generated from: '<S153>/VeENGR_b_StrtNotAllwdFA'
     *  SignalConversion generated from: '<S153>/VeENGR_b_StrtNotAllwdIDFA'
     *  SignalConversion generated from: '<S153>/VeENGR_e_StpNotAllwdID'
     *  SignalConversion generated from: '<S153>/VeENGR_e_StrtNotAllwdID'
     */
#if Rte_SysCon_Variant_ENGR_2

    /* SignalConversion generated from: '<S153>/VeENGR_e_StsMil_ECM' incorporates:
     *  Constant: '<S183>/Constant'
     */
    ENGR_ac_B.OutportBufferForVeENGR_e_StsMil_ECM_i = ENGR_ac_ConstB.Constant_c;

    /* SignalConversion generated from: '<S153>/VeENGR_b_StpNotAllwd' */
    ENGR_ac_B.OutportBufferForVeENGR_b_StpNotAllwd = false;

    /* SignalConversion generated from: '<S153>/VeENGR_b_StrtNotAllwd' */
    ENGR_ac_B.OutportBufferForVeENGR_b_StrtNotAllwd = false;

    /* SignalConversion generated from: '<S153>/VeENGR_e_StpNotAllwdID' incorporates:
     *  Constant: '<S176>/Constant'
     */
    ENGR_ac_B.OutportBufferForVeENGR_e_StpNotAllwdID = ENGR_ac_ConstB.Constant_a;

    /* SignalConversion generated from: '<S153>/VeENGR_e_StrtNotAllwdID' incorporates:
     *  Constant: '<S179>/Constant'
     */
    ENGR_ac_B.OutportBufferForVeENGR_e_StrtNotAllwdID =
        ENGR_ac_ConstB.Constant_g;

    /* SignalConversion generated from: '<S153>/VeENGR_b_StpNotAllwdIDFA' */
    ENGR_ac_B.OutportBufferForVeENGR_b_StpNotAllwdIDFA = false;

    /* SignalConversion generated from: '<S153>/VeENGR_b_StrtNotAllwdIDFA' */
    ENGR_ac_B.OutportBufferForVeENGR_b_StrtNotAllwdIDF = false;

    /* SignalConversion generated from: '<S153>/VeENGR_b_StpNotAllwdFA' */
    ENGR_ac_B.OutportBufferForVeENGR_b_StpNotAllwdFA = false;

    /* SignalConversion generated from: '<S153>/VeENGR_b_StrtNotAllwdFA' */
    ENGR_ac_B.OutportBufferForVeENGR_b_StrtNotAllwdFA = false;
    ENGR_ac_B.Calib_o = KeENGR_b_PnLimitActvFlgInit;

    /* SignalConversion generated from: '<S153>/VeENGR_b_PnLimitActvFlg' incorporates:
     *  Constant: '<S187>/Calib'
     */
    ENGR_ac_B.OutportBufferForVeENGR_b_PnLimitActvFlg = ENGR_ac_B.Calib_o;

    /* SignalConversion generated from: '<S153>/VeENGR_b_PnLimitActvFlgFA' */
    ENGR_ac_B.OutportBufferForVeENGR_b_PnLimitActvFlgF = false;

    /* SignalConversion generated from: '<S153>/VeENGR_b_CmprssnTest' */
    ENGR_ac_B.OutportBufferForVeENGR_b_CmprssnTest = false;

#endif

    /* End of SignalConversion generated from: '<S153>/VeENGR_e_StsMil_ECM' */

    /* SignalConversion generated from: '<S153>/VeENGR_e_EngStrtStpOvrrd_C1' incorporates:
     *  Constant: '<S180>/Constant'
     */
    ENGR_ac_B.OutportBufferForVeENGR_e_EngStrtStpOvr_a =
        ENGR_ac_ConstB.Constant_dt;

    /* SignalConversion generated from: '<S153>/VeENGR_b_EngStrtStpOvrrdFA_C1' */
    ENGR_ac_B.OutportBufferForVeENGR_b_EngStrtStpOvr_n = false;

    /* SignalConversion generated from: '<S153>/VeENGR_b_EngStrtStpOvrrd_SgnlRcvd_C1' */
    ENGR_ac_B.OutportBufferForVeENGR_b_EngStrtStpOvr_a = false;

    /* SignalConversion generated from: '<S153>/VeENGR_e_ESSEngSt' incorporates:
     *  Constant: '<S181>/Constant'
     */
    ENGR_ac_B.OutportBufferForVeENGR_e_ESSEngSt = ENGR_ac_ConstB.Constant_cq;

    /* SignalConversion generated from: '<S153>/VeENGR_Pct_PurgeIntensity' */
    ENGR_ac_B.OutportBufferForVeENGR_Pct_PurgeIntensit = 0.0F;

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/ENGO_ProcessOutput_init'
     */
    /* SignalConversion generated from: '<S151>/VeENGR_b_EngCombustionCmnd' incorporates:
     *  DataTypeConversion: '<S151>/DTCBlk14'
     *  SignalConversion generated from: '<S151>/VeENGR_b_EngTrq_Enbl_Rq_TCM'
     *  SignalConversion generated from: '<S151>/VeENGR_b_LV12PwrFreeRq'
     *  SignalConversion generated from: '<S151>/VeENGR_e_ETRQ_Mode'
     *  SignalConversion generated from: '<S151>/VeENGR_e_EngReqStrtType'
     *  SignalConversion generated from: '<S151>/VeENGR_e_EngStrtStpOvrrd'
     *  SignalConversion generated from: '<S151>/VeENGR_e_StsMil_ECM'
     *  SignalConversion generated from: '<S151>/VeENGR_i_ECM_LHOM_Trans'
     */
#if Rte_SysCon_Variant_ENGR_3

    /* SignalConversion generated from: '<S151>/VeENGR_b_EngCombustionCmnd' */
    ENGR_ac_B.OutportBufferForVeENGR_b_EngCombustionCm = false;

    /* SignalConversion generated from: '<S151>/VeENGR_e_EngStrtStpOvrrd' incorporates:
     *  Constant: '<S157>/Constant'
     */
    ENGR_ac_B.OutportBufferForVeENGR_e_EngStrtStpOvrrd =
        ENGR_ac_ConstB.Constant_d;

    /* DataTypeConversion: '<S151>/DTCBlk14' incorporates:
     *  Constant: '<S155>/Constant'
     */
    ENGR_ac_B.DTCBlk14 = CeENGR_e_ENS_STOPPED;

    /* SignalConversion generated from: '<S151>/VeENGR_e_ETRQ_Mode' incorporates:
     *  Constant: '<S158>/Constant'
     */
    ENGR_ac_B.OutportBufferForVeENGR_e_ETRQ_Mode = ENGR_ac_ConstB.Constant_p;

    /* SignalConversion generated from: '<S151>/VeENGR_i_ECM_LHOM_Trans' */
    ENGR_ac_B.OutportBufferForVeENGR_i_ECM_LHOM_Trans = 0;

    /* SignalConversion generated from: '<S151>/VeENGR_b_LV12PwrFreeRq' */
    ENGR_ac_B.OutportBufferForVeENGR_b_LV12PwrFreeRq = false;

    /* SignalConversion generated from: '<S151>/VeENGR_b_EngTrq_Enbl_Rq_TCM' */
    ENGR_ac_B.OutportBufferForVeENGR_b_EngTrq_Enbl_Rq_ = true;

    /* SignalConversion generated from: '<S151>/VeENGR_e_StsMil_ECM' incorporates:
     *  Constant: '<S159>/Constant'
     */
    ENGR_ac_B.OutportBufferForVeENGR_e_StsMil_ECM = ENGR_ac_ConstB.Constant_k;

    /* SignalConversion generated from: '<S151>/VeENGR_e_EngReqStrtType' incorporates:
     *  Constant: '<S156>/Constant'
     */
    ENGR_ac_B.OutportBufferForVeENGR_e_EngReqStrtType = ENGR_ac_ConstB.Constant;

#endif

    /* End of SignalConversion generated from: '<S151>/VeENGR_b_EngCombustionCmnd' */

    /* DataStoreRead: '<S151>/Data Store Read' incorporates:
     *  DataStoreRead: '<S151>/Data Store Read1'
     *  SignalConversion generated from: '<S151>/VariantSource10'
     *  SignalConversion generated from: '<S151>/VariantSource9'
     */
#if Rte_SysCon_Variant_ENGR_2

    /* VariantMerge generated from: '<S151>/VariantSource9' */
    ENGR_ac_B.VariantMerge_For_Variant_Source_Varian_j =
        ENGR_ac_DW.NeENGR_b_ECT_SnsrFA;

    /* VariantMerge generated from: '<S151>/VariantSource10' */
    ENGR_ac_B.VariantMerge_For_Variant_Source_Varian_i =
        ENGR_ac_DW.NeENGR_b_IAT_SnsrFA;

#else

    /* VariantMerge generated from: '<S151>/VariantSource9' incorporates:
     *  Constant: '<S151>/FALSE Constant3'
     *  SignalConversion generated from: '<S151>/VariantSource9'
     */
    ENGR_ac_B.VariantMerge_For_Variant_Source_Varian_j = false;

    /* VariantMerge generated from: '<S151>/VariantSource10' incorporates:
     *  Constant: '<S151>/FALSE Constant7'
     *  SignalConversion generated from: '<S151>/VariantSource10'
     */
    ENGR_ac_B.VariantMerge_For_Variant_Source_Varian_i = false;

#endif

    /* End of DataStoreRead: '<S151>/Data Store Read' */

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S154>/VeENGR_b_ECM_EVAllowed_Out_Init' */
    ENGR_ac_B.OutportBufferForVeENGR_b_ECM_EVAllowed_O = false;

    /* SignalConversion generated from: '<S154>/VeENGR_e_EngineSts_Out_Init' incorporates:
     *  Constant: '<S154>/Const2'
     */
    ENGR_ac_B.OutportBufferForVeENGR_e_EngineSts_Out_I = ENGR_ac_ConstB.Const2;

    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Outport: '<Root>/VeENGR_e_ComFailECM_C1CAN' incorporates:
     *  SignalConversion generated from: '<S4>/Comm_e_ComFailECM_C1CAN'
     *  VariantMerge generated from: '<S153>/VariantSource4'
     */
    (void)Rte_Write_VeENGR_e_ComFailECM_C1CAN_Value
        (ENGR_ac_B.VariantMerge_For_Variant_Source_Varian_a);

    /* Outport: '<Root>/VeENGR_e_ComFailECM_ePtCAN' incorporates:
     *  SignalConversion generated from: '<S4>/Comm_e_ComFailECM_ePtCAN'
     *  VariantMerge generated from: '<S153>/VariantSource5'
     */
    (void)Rte_Write_VeENGR_e_ComFailECM_ePtCAN_Value
        (ENGR_ac_B.VariantMerge_For_Variant_Source_Vari_ghj);

    /* SignalConversion generated from: '<S4>/ENGO_ProcessOutput_init__VeENGR_b_EngCombustionCmnd' incorporates:
     *  SignalConversion generated from: '<S4>/ENGO_ProcessOutput_init__VeENGR_b_EngTrq_Enbl_Rq_TCM'
     *  SignalConversion generated from: '<S4>/ENGO_ProcessOutput_init__VeENGR_b_LV12PwrFreeRq'
     *  SignalConversion generated from: '<S4>/ENGO_ProcessOutput_init__VeENGR_e_ETRQ_Mode'
     *  SignalConversion generated from: '<S4>/ENGO_ProcessOutput_init__VeENGR_e_EngReqStrtType'
     *  SignalConversion generated from: '<S4>/ENGO_ProcessOutput_init__VeENGR_e_EngStrtStpOvrrd'
     *  SignalConversion generated from: '<S4>/ENGO_ProcessOutput_init__VeENGR_e_StsMil_ECM'
     *  SignalConversion generated from: '<S4>/ENGO_ProcessOutput_init__VeENGR_i_ECM_LHOM_Trans'
     */
#if Rte_SysCon_Variant_ENGR_3

    /* Outport: '<Root>/VeENGR_b_EngCombustionCmnd' */
    (void)Rte_Write_VeENGR_b_EngCombustionCmnd_Value
        (ENGR_ac_B.OutportBufferForVeENGR_b_EngCombustionCm);

    /* Outport: '<Root>/VeENGR_b_EngTrq_Enbl_Rq_TCM' */
    (void)Rte_Write_VeENGR_b_EngTrq_Enbl_Rq_TCM_Value
        (ENGR_ac_B.OutportBufferForVeENGR_b_EngTrq_Enbl_Rq_);

    /* Outport: '<Root>/VeENGR_b_LV12PwrFreeRq' */
    (void)Rte_Write_VeENGR_b_LV12PwrFreeRq_Value
        (ENGR_ac_B.OutportBufferForVeENGR_b_LV12PwrFreeRq);

    /* Outport: '<Root>/VeENGR_e_ETRQ_Mode' incorporates:
     *  SignalConversion generated from: '<S151>/VeENGR_e_ETRQ_Mode'
     */
    (void)Rte_Write_VeENGR_e_ETRQ_Mode_Value
        (ENGR_ac_B.OutportBufferForVeENGR_e_ETRQ_Mode);

    /* Outport: '<Root>/VeENGR_e_EngReqStrtType' incorporates:
     *  SignalConversion generated from: '<S151>/VeENGR_e_EngReqStrtType'
     */
    (void)Rte_Write_VeENGR_e_EngReqStrtType_Value
        (ENGR_ac_B.OutportBufferForVeENGR_e_EngReqStrtType);

    /* Outport: '<Root>/VeENGR_e_EngStrtStpOvrrd' incorporates:
     *  SignalConversion generated from: '<S151>/VeENGR_e_EngStrtStpOvrrd'
     */
    (void)Rte_Write_VeENGR_e_EngStrtStpOvrrd_Value
        (ENGR_ac_B.OutportBufferForVeENGR_e_EngStrtStpOvrrd);

    /* Outport: '<Root>/VeENGR_e_StsMiL_ECM' incorporates:
     *  SignalConversion generated from: '<S151>/VeENGR_e_StsMil_ECM'
     */
    (void)Rte_Write_VeENGR_e_StsMiL_ECM_Value
        (ENGR_ac_B.OutportBufferForVeENGR_e_StsMil_ECM);

    /* Outport: '<Root>/VeENGR_i_ECM_LHOM_Trans' */
    (void)Rte_Write_VeENGR_i_ECM_LHOM_Trans_Value
        (ENGR_ac_B.OutportBufferForVeENGR_i_ECM_LHOM_Trans);

#endif

    /* End of SignalConversion generated from: '<S4>/ENGO_ProcessOutput_init__VeENGR_b_EngCombustionCmnd' */

    /* Outport: '<Root>/VeENGR_b_ECT_Sgnl_Rcvd' incorporates:
     *  SignalConversion generated from: '<S4>/LeENGI_b_ECTTempSgRx'
     */
    (void)Rte_Write_VeENGR_b_ECT_Sgnl_Rcvd_Value
        (ENGR_ac_B.OutportBufferForLeENGI_b_ECTTempSgRx);

    /* Outport: '<Root>/VeENGR_Pct_CalcLoad_OBD' incorporates:
     *  SignalConversion generated from: '<S4>/LeENGR_Pct_CalcLoad_OBD'
     */
    (void)Rte_Write_VeENGR_Pct_CalcLoad_OBD_Value
        (ENGR_ac_B.OutportBufferForLeENGR_Pct_CalcLoad_OBD);

    /* Outport: '<Root>/VeENGR_T_CatalystTemp' incorporates:
     *  SignalConversion generated from: '<S4>/LeENGR_T_CatalystTemp'
     */
    (void)Rte_Write_VeENGR_T_CatalystTemp_Value
        (ENGR_ac_B.VariantMerge_For_Variant_Source_Varian_g);

    /* Outport: '<Root>/VeENGR_b_CatalystTempFA' incorporates:
     *  SignalConversion generated from: '<S4>/LeENGR_T_CatalystTemp_FA'
     */
    (void)Rte_Write_VeENGR_b_CatalystTempFA_Value
        (ENGR_ac_B.VariantMerge_For_Variant_Source_Varia_gh);

    /* Outport: '<Root>/VeENGR_T_EngCoolantTemp' incorporates:
     *  SignalConversion generated from: '<S4>/LeENGR_T_EngCoolantTemp'
     */
    (void)Rte_Write_VeENGR_T_EngCoolantTemp_Value
        (ENGR_ac_B.VariantMerge_For_Variant_Source_Varian_h);

    /* Outport: '<Root>/VeENGR_T_InductionAirTemp' incorporates:
     *  SignalConversion generated from: '<S4>/LeENGR_T_InductionAirTemp'
     */
    (void)Rte_Write_VeENGR_T_InductionAirTemp_Value
        (ENGR_ac_B.VariantMerge_For_Variant_Source_VariantS);

    /* Outport: '<Root>/VeENGR_p_EngManfldAbsPrs' incorporates:
     *  SignalConversion generated from: '<S4>/LeENGR_p_EngManfldAbsPrs'
     */
    (void)Rte_Write_VeENGR_p_EngManfldAbsPrs_Value
        (ENGR_ac_B.VariantMerge_For_Variant_Source_Varian_c);

    /* Outport: '<Root>/VeENGR_P_OilDil_EngMinPwrReq' incorporates:
     *  SignalConversion generated from: '<S4>/VeENGR_P_OilDil_EngMinPwrReq'
     */
    (void)Rte_Write_VeENGR_P_OilDil_EngMinPwrReq_Value
        (ENGR_ac_B.OutportBufferForVeENGR_P_OilDil_EngMinPw);

    /* Outport: '<Root>/VeENGR_Pct_FuelLevel2' incorporates:
     *  SignalConversion generated from: '<S4>/VeENGR_Pct_FuelLevel2'
     */
    (void)Rte_Write_VeENGR_Pct_FuelLevel2_Value
        (ENGR_ac_B.OutportBufferForVeENGR_Pct_FuelLevel2);

    /* Outport: '<Root>/VeENGR_Pct_PurgeIntensity' incorporates:
     *  SignalConversion generated from: '<S4>/VeENGR_Pct_PurgeIntensity'
     */
    (void)Rte_Write_VeENGR_Pct_PurgeIntensity_Value
        (ENGR_ac_B.OutportBufferForVeENGR_Pct_PurgeIntensit);

    /* SignalConversion generated from: '<S4>/VeENGR_T_EngineOilTemp' incorporates:
     *  SignalConversion generated from: '<S4>/VeENGR_T_ExhaustGasTemp'
     */
#if Rte_SysCon_Variant_ENGR_2

    /* Outport: '<Root>/VeENGR_T_EngineOilTemp' */
    (void)Rte_Write_VeENGR_T_EngineOilTemp_Value
        (ENGR_ac_B.OutportBufferForVeENGR_T_EngineOilTemp);

    /* Outport: '<Root>/VeENGR_T_ExhaustGasTemp' */
    (void)Rte_Write_VeENGR_T_ExhaustGasTemp_Value
        (ENGR_ac_B.OutportBufferForVeENGR_T_ExhaustGasTemp);

#endif

    /* End of SignalConversion generated from: '<S4>/VeENGR_T_EngineOilTemp' */

    /* Outport: '<Root>/VeENGR_V_FuelConsumption' incorporates:
     *  SignalConversion generated from: '<S4>/VeENGR_V_FuelConsumption'
     */
    (void)Rte_Write_VeENGR_V_FuelConsumption_Value
        (ENGR_ac_B.OutportBufferForVeENGR_V_FuelConsumption);

    /* Outport: '<Root>/VeENGR_b_AllwEVECM' incorporates:
     *  SignalConversion generated from: '<S4>/VeENGR_b_AllwEVECM'
     */
    (void)Rte_Write_VeENGR_b_AllwEVECM_Value
        (ENGR_ac_B.OutportBufferForVeENGR_b_AllwEVECM);

    /* Outport: '<Root>/VeENGR_b_CatTempMaintEnabled' incorporates:
     *  SignalConversion generated from: '<S4>/VeENGR_b_CatTempMaintEnabled'
     */
    (void)Rte_Write_VeENGR_b_CatTempMaintEnabled_Value
        (ENGR_ac_B.OutportBufferForVeENGR_b_CatTempMaintEna);

    /* Outport: '<Root>/VeENGR_b_CatalystWarmUpEnabled' incorporates:
     *  SignalConversion generated from: '<S4>/VeENGR_b_CatalystWarmUpEnabled'
     */
    (void)Rte_Write_VeENGR_b_CatalystWarmUpEnabled_Value
        (ENGR_ac_B.OutportBufferForVeENGR_b_CatalystWarmUpE);

    /* SignalConversion generated from: '<S4>/VeENGR_b_CmprssnTest' */
#if Rte_SysCon_Variant_ENGR_2

    /* SignalConversion generated from: '<S4>/VeENGR_b_CmprssnTest' */
    rtb_OutportBufferForVeENGR_b_CmprssnTe_p =
        ENGR_ac_B.OutportBufferForVeENGR_b_CmprssnTest;

#endif

    /* End of SignalConversion generated from: '<S4>/VeENGR_b_CmprssnTest' */

    /* Outport: '<Root>/VeENGR_b_CondOkForCylDeac' incorporates:
     *  SignalConversion generated from: '<S4>/VeENGR_b_CondOkForCylDeac'
     */
    (void)Rte_Write_VeENGR_b_CondOkForCylDeac_Value
        (ENGR_ac_B.OutportBufferForVeENGR_b_CondOkForCylDea);

    /* Outport: '<Root>/VeENGR_b_ECM_EVAllowed' incorporates:
     *  SignalConversion generated from: '<S4>/VeENGR_b_ECM_EVAllowed_Out_Init'
     */
    (void)Rte_Write_VeENGR_b_ECM_EVAllowed_Value
        (ENGR_ac_B.OutportBufferForVeENGR_b_ECM_EVAllowed_O);

    /* Outport: '<Root>/VeENGR_b_ECT_SnsrFA' incorporates:
     *  SignalConversion generated from: '<S4>/VeENGR_b_ECT_SnsrFA'
     */
    (void)Rte_Write_VeENGR_b_ECT_SnsrFA_Value
        (ENGR_ac_B.VariantMerge_For_Variant_Source_Varian_j);

    /* SignalConversion generated from: '<S4>/VeENGR_b_EngCombustionCmndFA_write' incorporates:
     *  SignalConversion generated from: '<S4>/VeENGR_b_EngCombustionCmnd_write'
     */
#if Rte_SysCon_Variant_ENGR_2

    /* SignalConversion generated from: '<S4>/VeENGR_b_EngCombustionCmndFA_write' */
    rtb_OutportBufferForVeENGR_b_EngCombus_l =
        ENGR_ac_B.OutportBufferForVeENGR_b_EngCombustion_j;

    /* SignalConversion generated from: '<S4>/VeENGR_b_EngCombustionCmnd_write' */
    rtb_OutportBufferForVeENGR_b_EngCombu_mm =
        ENGR_ac_B.OutportBufferForVeENGR_b_EngCombustion_o;

#endif

    /* End of SignalConversion generated from: '<S4>/VeENGR_b_EngCombustionCmndFA_write' */

    /* Outport: '<Root>/VeENGR_b_EngDFSO_Allow' incorporates:
     *  SignalConversion generated from: '<S4>/VeENGR_b_EngDFSO_Allow'
     */
    (void)Rte_Write_VeENGR_b_EngDFSO_Allow_Value
        (ENGR_ac_B.OutportBufferForVeENGR_b_EngDFSO_Allow);

    /* Outport: '<Root>/VeENGR_b_EngOffTimeFA' incorporates:
     *  SignalConversion generated from: '<S4>/VeENGR_b_EngOffTimeFA'
     */
    (void)Rte_Write_VeENGR_b_EngOffTimeFA_Value
        (ENGR_ac_B.OutportBufferForVeENGR_b_EngOffTimeFA);

    /* Outport: '<Root>/VeENGR_b_EngStrtStpOvrrdFA' incorporates:
     *  SignalConversion generated from: '<S4>/VeENGR_b_EngStrtStpOvrrdFA'
     */
    (void)Rte_Write_VeENGR_b_EngStrtStpOvrrdFA_Value
        (ENGR_ac_B.OutportBufferForVeENGR_b_EngStrtStpOvrrd);

    /* Outport: '<Root>/VeENGR_b_EngSysLowFuel' incorporates:
     *  SignalConversion generated from: '<S4>/VeENGR_b_EngSysLowFuel'
     */
    (void)Rte_Write_VeENGR_b_EngSysLowFuel_Value
        (ENGR_ac_B.OutportBufferForVeENGR_b_EngSysLowFuel);

    /* Outport: '<Root>/VeENGR_b_EngTLCLearnReq' incorporates:
     *  SignalConversion generated from: '<S4>/VeENGR_b_EngTLCLearnReq'
     */
    (void)Rte_Write_VeENGR_b_EngTLCLearnReq_Value
        (ENGR_ac_B.OutportBufferForVeENGR_b_EngTLCLearnReq);

    /* SignalConversion generated from: '<S4>/VeENGR_b_EngTrq_Enbl_Rq_TCM_write' incorporates:
     *  SignalConversion generated from: '<S4>/VeENGR_b_EngineOilTempFA'
     */
#if Rte_SysCon_Variant_ENGR_2

    /* SignalConversion generated from: '<S4>/VeENGR_b_EngTrq_Enbl_Rq_TCM_write' */
    rtb_OutportBufferForVeENGR_b_EngTrq_En_k =
        ENGR_ac_B.OutportBufferForVeENGR_b_EngTrq_Enbl_R_c;

    /* Outport: '<Root>/VeENGR_b_EngineOilTempFA' */
    (void)Rte_Write_VeENGR_b_EngineOilTempFA_Value
        (ENGR_ac_B.OutportBufferForVeENGR_b_EngineOilTempFA);

#endif

    /* End of SignalConversion generated from: '<S4>/VeENGR_b_EngTrq_Enbl_Rq_TCM_write' */

    /* Outport: '<Root>/VeENGR_b_EngineStallDetected' incorporates:
     *  SignalConversion generated from: '<S4>/VeENGR_b_EngineStallDetected'
     */
    (void)Rte_Write_VeENGR_b_EngineStallDetected_Value
        (ENGR_ac_B.OutportBufferForVeENGR_b_EngineStallDete);

    /* SignalConversion generated from: '<S4>/VeENGR_b_ExhMassFlowFA' incorporates:
     *  SignalConversion generated from: '<S4>/VeENGR_b_ExhaustGasTempFA'
     */
#if Rte_SysCon_Variant_ENGR_2

    /* Outport: '<Root>/VeENGR_b_ExhMassFlowFA' */
    (void)Rte_Write_VeENGR_b_ExhMassFlowFA_Value
        (ENGR_ac_B.OutportBufferForVeENGR_b_ExhMassFlowFA);

    /* Outport: '<Root>/VeENGR_b_ExhaustGasTempFA' */
    (void)Rte_Write_VeENGR_b_ExhaustGasTempFA_Value
        (ENGR_ac_B.OutportBufferForVeENGR_b_ExhaustGasTempF);

#endif

    /* End of SignalConversion generated from: '<S4>/VeENGR_b_ExhMassFlowFA' */

    /* Outport: '<Root>/VeENGR_b_ECM_Feedback_HCP' incorporates:
     *  SignalConversion generated from: '<S4>/VeENGR_b_Feedback_HCP'
     */
    (void)Rte_Write_VeENGR_b_ECM_Feedback_HCP_Value
        (ENGR_ac_B.OutportBufferForVeENGR_b_Feedback_HCP);

    /* Outport: '<Root>/VeENGR_b_FuelConsFA' incorporates:
     *  SignalConversion generated from: '<S4>/VeENGR_b_FuelConsumptionFA'
     */
    (void)Rte_Write_VeENGR_b_FuelConsFA_Value
        (ENGR_ac_B.OutportBufferForVeENGR_b_FuelConsumption);

    /* Outport: '<Root>/VeENGR_b_FuelLevel2_SgnlRcvd' incorporates:
     *  SignalConversion generated from: '<S4>/VeENGR_b_FuelLevel2_SgnlRcvd'
     */
    (void)Rte_Write_VeENGR_b_FuelLevel2_SgnlRcvd_Value
        (ENGR_ac_B.OutportBufferForVeENGR_b_FuelLevel2_Sgnl);

    /* Outport: '<Root>/VeENGR_b_GasFlowActuator' incorporates:
     *  SignalConversion generated from: '<S4>/VeENGR_b_GasFlowActuator'
     */
    (void)Rte_Write_VeENGR_b_GasFlowActuator_Value
        (ENGR_ac_B.OutportBufferForVeENGR_b_GasFlowActuator);

    /* Outport: '<Root>/VeENGR_b_IAT_SnsrFA' incorporates:
     *  SignalConversion generated from: '<S4>/VeENGR_b_IAT_SnsrFA'
     */
    (void)Rte_Write_VeENGR_b_IAT_SnsrFA_Value
        (ENGR_ac_B.VariantMerge_For_Variant_Source_Varian_i);

    /* Outport: '<Root>/VeENGR_b_KickDnReq' incorporates:
     *  SignalConversion generated from: '<S4>/VeENGR_b_KickDn'
     */
    (void)Rte_Write_VeENGR_b_KickDnReq_Value
        (ENGR_ac_B.OutportBufferForVeENGR_b_KickDn);

    /* SignalConversion generated from: '<S4>/VeENGR_b_LV12PwrFreeRq_write' */
#if Rte_SysCon_Variant_ENGR_2

    /* SignalConversion generated from: '<S4>/VeENGR_b_LV12PwrFreeRq_write' */
    rtb_OutportBufferForVeENGR_b_LV12PwrFr_l =
        ENGR_ac_B.OutportBufferForVeENGR_b_LV12PwrFreeRq_d;

#endif

    /* End of SignalConversion generated from: '<S4>/VeENGR_b_LV12PwrFreeRq_write' */

    /* Outport: '<Root>/VeENGR_b_OilDil_EngMinPwrEnbl' incorporates:
     *  SignalConversion generated from: '<S4>/VeENGR_b_OilDil_EngMinPwrEnbl'
     */
    (void)Rte_Write_VeENGR_b_OilDil_EngMinPwrEnbl_Value
        (ENGR_ac_B.OutportBufferForVeENGR_b_OilDil_EngMinPw);

    /* SignalConversion generated from: '<S4>/VeENGR_b_PnLimitActvFlg' incorporates:
     *  SignalConversion generated from: '<S4>/VeENGR_b_PnLimitActvFlgFA'
     *  SignalConversion generated from: '<S4>/VeENGR_b_StpNotAllwdFA_write'
     *  SignalConversion generated from: '<S4>/VeENGR_b_StpNotAllwdIDFA_write'
     *  SignalConversion generated from: '<S4>/VeENGR_b_StpNotAllwd_write'
     *  SignalConversion generated from: '<S4>/VeENGR_b_StrtNotAllwdFA_write'
     *  SignalConversion generated from: '<S4>/VeENGR_b_StrtNotAllwdIDFA_write'
     *  SignalConversion generated from: '<S4>/VeENGR_b_StrtNotAllwd_write'
     */
#if Rte_SysCon_Variant_ENGR_2

    /* Outport: '<Root>/VeENGR_b_PnLimitActvFlg' */
    (void)Rte_Write_VeENGR_b_PnLimitActvFlg_Value
        (ENGR_ac_B.OutportBufferForVeENGR_b_PnLimitActvFlg);

    /* Outport: '<Root>/VeENGR_b_PnLimitActvFlgFA' */
    (void)Rte_Write_VeENGR_b_PnLimitActvFlgFA_Value
        (ENGR_ac_B.OutportBufferForVeENGR_b_PnLimitActvFlgF);

    /* SignalConversion generated from: '<S4>/VeENGR_b_StpNotAllwdFA_write' */
    rtb_OutportBufferForVeENGR_b_StpNotAllwd =
        ENGR_ac_B.OutportBufferForVeENGR_b_StpNotAllwdFA;

    /* SignalConversion generated from: '<S4>/VeENGR_b_StpNotAllwdIDFA_write' */
    rtb_OutportBufferForVeENGR_b_StpNotAll_a =
        ENGR_ac_B.OutportBufferForVeENGR_b_StpNotAllwdIDFA;

    /* SignalConversion generated from: '<S4>/VeENGR_b_StpNotAllwd_write' */
    rtb_OutportBufferForVeENGR_b_StpNotAll_b =
        ENGR_ac_B.OutportBufferForVeENGR_b_StpNotAllwd;

    /* SignalConversion generated from: '<S4>/VeENGR_b_StrtNotAllwdFA_write' */
    rtb_OutportBufferForVeENGR_b_StrtNotAllw =
        ENGR_ac_B.OutportBufferForVeENGR_b_StrtNotAllwdFA;

    /* SignalConversion generated from: '<S4>/VeENGR_b_StrtNotAllwdIDFA_write' */
    rtb_OutportBufferForVeENGR_b_StrtNotAl_b =
        ENGR_ac_B.OutportBufferForVeENGR_b_StrtNotAllwdIDF;

    /* SignalConversion generated from: '<S4>/VeENGR_b_StrtNotAllwd_write' */
    rtb_OutportBufferForVeENGR_b_StrtNotAl_o =
        ENGR_ac_B.OutportBufferForVeENGR_b_StrtNotAllwd;

#endif

    /* End of SignalConversion generated from: '<S4>/VeENGR_b_PnLimitActvFlg' */

    /* Outport: '<Root>/VeENGR_b_WarmUpCycCmplt' incorporates:
     *  SignalConversion generated from: '<S4>/VeENGR_b_WarmUpCycCmplt'
     */
    (void)Rte_Write_VeENGR_b_WarmUpCycCmplt_Value
        (ENGR_ac_B.OutportBufferForVeENGR_b_WarmUpCycCmplt);

    /* SignalConversion generated from: '<S4>/VeENGR_dm_ExhMassFlow' */
#if Rte_SysCon_Variant_ENGR_2

    /* Outport: '<Root>/VeENGR_dm_ExhMassFlow' */
    (void)Rte_Write_VeENGR_dm_ExhMassFlow_Value
        (ENGR_ac_B.OutportBufferForVeENGR_dm_ExhMassFlow);

#endif

    /* End of SignalConversion generated from: '<S4>/VeENGR_dm_ExhMassFlow' */

    /* Outport: '<Root>/VeENGR_e_Cam_Phsr_Stat' incorporates:
     *  SignalConversion generated from: '<S153>/VeENGR_e_Cam_Phsr_Stat'
     *  SignalConversion generated from: '<S4>/VeENGR_e_Cam_Phsr_Stat'
     */
    (void)Rte_Write_VeENGR_e_Cam_Phsr_Stat_Value
        (ENGR_ac_B.OutportBufferForVeENGR_e_Cam_Phsr_Stat);

    /* Outport: '<Root>/VeENGR_e_CylinderDeacMode' incorporates:
     *  SignalConversion generated from: '<S153>/VeENGR_e_CylinderDeacMode'
     *  SignalConversion generated from: '<S4>/VeENGR_e_CylinderDeacMode'
     */
    (void)Rte_Write_VeENGR_e_CylinderDeacMode_Value
        (ENGR_ac_B.OutportBufferForVeENGR_e_CylinderDeacMod);

    /* Outport: '<Root>/VeENGR_e_ECMReqRemStop' incorporates:
     *  SignalConversion generated from: '<S153>/VeENGR_e_ECMReqRemStop'
     *  SignalConversion generated from: '<S4>/VeENGR_e_ECMReqRemStop'
     */
    (void)Rte_Write_VeENGR_e_ECMReqRemStop_Value
        (ENGR_ac_B.OutportBufferForVeENGR_e_ECMReqRemStop);

    /* Outport: '<Root>/VeENGR_e_ESSEngSt' incorporates:
     *  SignalConversion generated from: '<S153>/VeENGR_e_ESSEngSt'
     *  SignalConversion generated from: '<S4>/VeENGR_e_ESSEngSt'
     */
    (void)Rte_Write_VeENGR_e_ESSEngSt_Value
        (ENGR_ac_B.OutportBufferForVeENGR_e_ESSEngSt);

    /* SignalConversion generated from: '<S4>/VeENGR_e_ESS_Engine_State_EE' */
#if Rte_SysCon_Variant_ENGR_3

    /* Outport: '<Root>/VeENGR_e_ESS_Engine_State_EE' */
    (void)Rte_Write_VeENGR_e_ESS_Engine_State_EE_Value(ENGR_ac_B.DTCBlk14);

#endif

    /* End of SignalConversion generated from: '<S4>/VeENGR_e_ESS_Engine_State_EE' */

    /* SignalConversion generated from: '<S4>/VeENGR_e_ETRQ_Mode_write' */
#if Rte_SysCon_Variant_ENGR_2

    /* SignalConversion generated from: '<S4>/VeENGR_e_ETRQ_Mode_write' incorporates:
     *  SignalConversion generated from: '<S153>/VeENGR_e_ETRQ_Mode'
     */
    rtb_OutportBufferForVeENGR_e_ETRQ_Mode_m =
        ENGR_ac_B.OutportBufferForVeENGR_e_ETRQ_Mode_j;

#endif

    /* End of SignalConversion generated from: '<S4>/VeENGR_e_ETRQ_Mode_write' */

    /* Outport: '<Root>/VeENGR_e_EngDFSO_Req' incorporates:
     *  SignalConversion generated from: '<S153>/VeENGR_e_EngDFSO_Req'
     *  SignalConversion generated from: '<S4>/VeENGR_e_EngDFSO_Req'
     */
    (void)Rte_Write_VeENGR_e_EngDFSO_Req_Value
        (ENGR_ac_B.OutportBufferForVeENGR_e_EngDFSO_Req);

    /* Outport: '<Root>/VeENGR_e_EngDFSO_St' incorporates:
     *  SignalConversion generated from: '<S153>/VeENGR_e_EngDFSO_St'
     *  SignalConversion generated from: '<S4>/VeENGR_e_EngDFSO_St'
     */
    (void)Rte_Write_VeENGR_e_EngDFSO_St_Value
        (ENGR_ac_B.OutportBufferForVeENGR_e_EngDFSO_St);

    /* SignalConversion generated from: '<S4>/VeENGR_e_EngStrtStpOvrrd_write' */
#if Rte_SysCon_Variant_ENGR_2

    /* SignalConversion generated from: '<S4>/VeENGR_e_EngStrtStpOvrrd_write' incorporates:
     *  SignalConversion generated from: '<S153>/VeENGR_e_EngStrtStpOvrrd'
     */
    rtb_OutportBufferForVeENGR_e_EngStrtSt_f =
        ENGR_ac_B.OutportBufferForVeENGR_e_EngStrtStpOvr_k;

#endif

    /* End of SignalConversion generated from: '<S4>/VeENGR_e_EngStrtStpOvrrd_write' */

    /* Outport: '<Root>/VeENGR_e_EngineMaintenanceSts' incorporates:
     *  SignalConversion generated from: '<S152>/VeENGR_e_EngineMaintenanceSts'
     *  SignalConversion generated from: '<S4>/VeENGR_e_EngineMaintenanceSts'
     */
    (void)Rte_Write_VeENGR_e_EngineMaintenanceSts_Value
        (ENGR_ac_B.OutportBufferForVeENGR_e_EngineMaintenan);

    /* Outport: '<Root>/VeENGR_e_EngineSts' incorporates:
     *  SignalConversion generated from: '<S154>/VeENGR_e_EngineSts_Out_Init'
     *  SignalConversion generated from: '<S4>/VeENGR_e_EngineSts_Out_Init'
     */
    (void)Rte_Write_VeENGR_e_EngineSts_Value
        (ENGR_ac_B.OutportBufferForVeENGR_e_EngineSts_Out_I);

    /* SignalConversion generated from: '<S4>/VeENGR_e_StpNotAllwdID_write' incorporates:
     *  SignalConversion generated from: '<S4>/VeENGR_e_StrtNotAllwdID_write'
     *  SignalConversion generated from: '<S4>/VeENGR_e_StsMil_ECM_write'
     *  SignalConversion generated from: '<S4>/VeENGR_i_ECM_LHOM_Trans_write'
     */
#if Rte_SysCon_Variant_ENGR_2

    /* SignalConversion generated from: '<S4>/VeENGR_e_StpNotAllwdID_write' incorporates:
     *  SignalConversion generated from: '<S153>/VeENGR_e_StpNotAllwdID'
     */
    rtb_OutportBufferForVeENGR_e_StpNotAllwd =
        ENGR_ac_B.OutportBufferForVeENGR_e_StpNotAllwdID;

    /* SignalConversion generated from: '<S4>/VeENGR_e_StrtNotAllwdID_write' incorporates:
     *  SignalConversion generated from: '<S153>/VeENGR_e_StrtNotAllwdID'
     */
    rtb_OutportBufferForVeENGR_e_StrtNotAllw =
        ENGR_ac_B.OutportBufferForVeENGR_e_StrtNotAllwdID;

    /* SignalConversion generated from: '<S4>/VeENGR_e_StsMil_ECM_write' incorporates:
     *  SignalConversion generated from: '<S153>/VeENGR_e_StsMil_ECM'
     */
    rtb_OutportBufferForVeENGR_e_StsMil_EC_p =
        ENGR_ac_B.OutportBufferForVeENGR_e_StsMil_ECM_i;

    /* SignalConversion generated from: '<S4>/VeENGR_i_ECM_LHOM_Trans_write' */
    rtb_OutportBufferForVeENGR_i_ECM_LHOM__p =
        ENGR_ac_B.OutportBufferForVeENGR_i_ECM_LHOM_Tran_o;

#endif

    /* End of SignalConversion generated from: '<S4>/VeENGR_e_StpNotAllwdID_write' */

    /* Outport: '<Root>/VeENGR_m_CylAirIntake' incorporates:
     *  SignalConversion generated from: '<S4>/VeENGR_m_CylAirIntake'
     */
    (void)Rte_Write_VeENGR_m_CylAirIntake_Value
        (ENGR_ac_B.OutportBufferForVeENGR_m_CylAirIntake);

    /* Outport: '<Root>/VeENGR_t_EngOffTime' incorporates:
     *  SignalConversion generated from: '<S4>/VeENGR_t_EngOffTime'
     */
    (void)Rte_Write_VeENGR_t_EngOffTime_Value
        (ENGR_ac_B.OutportBufferForVeENGR_t_EngOffTime);

    /* Outport: '<Root>/VeENGR_b_EngOffRecom' incorporates:
     *  SignalConversion generated from: '<S4>/VeENGR_y_EngOffRecom'
     */
    (void)Rte_Write_VeENGR_b_EngOffRecom_Value
        (ENGR_ac_B.OutportBufferForVeENGR_y_EngOffRecom);

    /* Outport: '<Root>/VeENGR_b_ZylAbs' incorporates:
     *  SignalConversion generated from: '<S4>/VeENGR_y_ZylAbs'
     */
    (void)Rte_Write_VeENGR_b_ZylAbs_Value
        (ENGR_ac_B.OutportBufferForVeENGR_y_ZylAbs);

    /* SignalConversion generated from: '<S4>/VeENGR_b_CmprssnTest' incorporates:
     *  SignalConversion generated from: '<S4>/VeENGR_b_EngCombustionCmndFA_write'
     *  SignalConversion generated from: '<S4>/VeENGR_b_EngCombustionCmnd_write'
     */
#if Rte_SysCon_Variant_ENGR_2

    /* Merge: '<Root>/Merge_73' */
    Rte_IrvWrite_ENGR_PwrOn_VeENGR_b_CmprssnTest_IRV
        (rtb_OutportBufferForVeENGR_b_CmprssnTe_p);

    /* Merge: '<Root>/Merge_32' */
    Rte_IrvWrite_ENGR_PwrOn_VeENGR_b_EngCombustionCmndFA_write_IRV
        (rtb_OutportBufferForVeENGR_b_EngCombus_l);

    /* Merge: '<Root>/Merge_22' */
    Rte_IrvWrite_ENGR_PwrOn_VeENGR_b_EngCombustionCmnd_write_IRV
        (rtb_OutportBufferForVeENGR_b_EngCombu_mm);

#endif

    /* End of SignalConversion generated from: '<S4>/VeENGR_b_CmprssnTest' */

    /* Merge: '<Root>/Merge_56' incorporates:
     *  SignalConversion generated from: '<S4>/VeENGR_b_EngStrtStpOvrrdFA_C1_write'
     * */
    Rte_IrvWrite_ENGR_PwrOn_VeENGR_b_EngStrtStpOvrrdFA_C1_write_IRV
        (ENGR_ac_B.OutportBufferForVeENGR_b_EngStrtStpOvr_n);

    /* Merge: '<Root>/Merge_33_Irv' incorporates:
     *  SignalConversion generated from: '<S4>/VeENGR_b_EngStrtStpOvrrdFA_write'
     * */
    Rte_IrvWrite_ENGR_PwrOn_VeENGR_b_EngStrtStpOvrrdFA_write_IRV
        (ENGR_ac_B.OutportBufferForVeENGR_b_EngStrtStpOvrrd);

    /* Merge: '<Root>/Merge_57' incorporates:
     *  SignalConversion generated from: '<S4>/VeENGR_b_EngStrtStpOvrrd_SgnlRcvd_C1_write'
     * */
    Rte_IrvWrite_ENGR_PwrOn_VeENGR_b_EngStrtStpOvrrd_SgnlRcvd_C1_write_IRV
        (ENGR_ac_B.OutportBufferForVeENGR_b_EngStrtStpOvr_a);

    /* SignalConversion generated from: '<S4>/VeENGR_b_EngTrq_Enbl_Rq_TCM_write' incorporates:
     *  SignalConversion generated from: '<S4>/VeENGR_b_LV12PwrFreeRq_write'
     *  SignalConversion generated from: '<S4>/VeENGR_b_StpNotAllwdFA_write'
     *  SignalConversion generated from: '<S4>/VeENGR_b_StpNotAllwdIDFA_write'
     *  SignalConversion generated from: '<S4>/VeENGR_b_StpNotAllwd_write'
     *  SignalConversion generated from: '<S4>/VeENGR_b_StrtNotAllwdFA_write'
     *  SignalConversion generated from: '<S4>/VeENGR_b_StrtNotAllwdIDFA_write'
     *  SignalConversion generated from: '<S4>/VeENGR_b_StrtNotAllwd_write'
     */
#if Rte_SysCon_Variant_ENGR_2

    /* Merge: '<Root>/Merge_44' */
    Rte_IrvWrite_ENGR_PwrOn_VeENGR_b_EngTrq_Enbl_Rq_TCM_write_IRV
        (rtb_OutportBufferForVeENGR_b_EngTrq_En_k);

    /* Merge: '<Root>/Merge_43' */
    Rte_IrvWrite_ENGR_PwrOn_VeENGR_b_LV12PwrFreeRq_write_IRV
        (rtb_OutportBufferForVeENGR_b_LV12PwrFr_l);

    /* Merge: '<Root>/Merge_41' */
    Rte_IrvWrite_ENGR_PwrOn_VeENGR_b_StpNotAllwdFA_write_IRV
        (rtb_OutportBufferForVeENGR_b_StpNotAllwd);

    /* Merge: '<Root>/Merge_28' */
    Rte_IrvWrite_ENGR_PwrOn_VeENGR_b_StpNotAllwdIDFA_write_IRV
        (rtb_OutportBufferForVeENGR_b_StpNotAll_a);

    /* Merge: '<Root>/Merge_61' */
    Rte_IrvWrite_ENGR_PwrOn_VeENGR_b_StpNotAllwd_write_IRV
        (rtb_OutportBufferForVeENGR_b_StpNotAll_b);

    /* Merge: '<Root>/Merge_52' */
    Rte_IrvWrite_ENGR_PwrOn_VeENGR_b_StrtNotAllwdFA_write_IRV
        (rtb_OutportBufferForVeENGR_b_StrtNotAllw);

    /* Merge: '<Root>/Merge_30' */
    Rte_IrvWrite_ENGR_PwrOn_VeENGR_b_StrtNotAllwdIDFA_write_IRV
        (rtb_OutportBufferForVeENGR_b_StrtNotAl_b);

    /* Merge: '<Root>/Merge_17' */
    Rte_IrvWrite_ENGR_PwrOn_VeENGR_b_StrtNotAllwd_write_IRV
        (rtb_OutportBufferForVeENGR_b_StrtNotAl_o);

#endif

    /* End of SignalConversion generated from: '<S4>/VeENGR_b_EngTrq_Enbl_Rq_TCM_write' */

    /* Merge: '<Root>/Merge_45_Irv' incorporates:
     *  SignalConversion generated from: '<S153>/VeENGR_e_CylinderDeacMode'
     *  SignalConversion generated from: '<S4>/VeENGR_e_CylinderDeacMode_write'
     * */
    Rte_IrvWrite_ENGR_PwrOn_VeENGR_e_CylinderDeacMode_write_IRV
        (ENGR_ac_B.OutportBufferForVeENGR_e_CylinderDeacMod);

    /* SignalConversion generated from: '<S4>/VeENGR_e_ETRQ_Mode_write' */
#if Rte_SysCon_Variant_ENGR_2

    /* Merge: '<Root>/Merge_34' incorporates:
     *  SignalConversion generated from: '<S4>/VeENGR_e_ETRQ_Mode_write'
     */
    Rte_IrvWrite_ENGR_PwrOn_VeENGR_e_ETRQ_Mode_write_IRV
        (rtb_OutportBufferForVeENGR_e_ETRQ_Mode_m);

#endif

    /* End of SignalConversion generated from: '<S4>/VeENGR_e_ETRQ_Mode_write' */

    /* Merge: '<Root>/Merge_21' incorporates:
     *  SignalConversion generated from: '<S153>/VeENGR_e_EngReqStrtType'
     *  SignalConversion generated from: '<S4>/VeENGR_e_EngReqStrtType'
     * */
    Rte_IrvWrite_ENGR_PwrOn_VeENGR_e_EngReqStrtType_IRV
        (ENGR_ac_B.OutportBufferForVeENGR_e_EngReqStrtTyp_c);

    /* Merge: '<Root>/Merge_55' incorporates:
     *  SignalConversion generated from: '<S153>/VeENGR_e_EngStrtStpOvrrd_C1'
     *  SignalConversion generated from: '<S4>/VeENGR_e_EngStrtStpOvrrd_C1_write'
     * */
    Rte_IrvWrite_ENGR_PwrOn_VeENGR_e_EngStrtStpOvrrd_C1_write_IRV
        (ENGR_ac_B.OutportBufferForVeENGR_e_EngStrtStpOvr_a);

    /* SignalConversion generated from: '<S4>/VeENGR_e_EngStrtStpOvrrd_write' incorporates:
     *  SignalConversion generated from: '<S4>/VeENGR_e_StpNotAllwdID_write'
     *  SignalConversion generated from: '<S4>/VeENGR_e_StrtNotAllwdID_write'
     *  SignalConversion generated from: '<S4>/VeENGR_e_StsMil_ECM_write'
     *  SignalConversion generated from: '<S4>/VeENGR_i_ECM_LHOM_Trans_write'
     */
#if Rte_SysCon_Variant_ENGR_2

    /* Merge: '<Root>/Merge_23' incorporates:
     *  SignalConversion generated from: '<S4>/VeENGR_e_EngStrtStpOvrrd_write'
     */
    Rte_IrvWrite_ENGR_PwrOn_VeENGR_e_EngStrtStpOvrrd_write_IRV
        (rtb_OutportBufferForVeENGR_e_EngStrtSt_f);

    /* Merge: '<Root>/Merge_14' incorporates:
     *  SignalConversion generated from: '<S4>/VeENGR_e_StpNotAllwdID_write'
     */
    Rte_IrvWrite_ENGR_PwrOn_VeENGR_e_StpNotAllwdID_write_IRV
        (rtb_OutportBufferForVeENGR_e_StpNotAllwd);

    /* Merge: '<Root>/Merge_19' incorporates:
     *  SignalConversion generated from: '<S4>/VeENGR_e_StrtNotAllwdID_write'
     */
    Rte_IrvWrite_ENGR_PwrOn_VeENGR_e_StrtNotAllwdID_write_IRV
        (rtb_OutportBufferForVeENGR_e_StrtNotAllw);

    /* Merge: '<Root>/Merge_51' incorporates:
     *  SignalConversion generated from: '<S4>/VeENGR_e_StsMil_ECM_write'
     */
    Rte_IrvWrite_ENGR_PwrOn_VeENGR_e_StsMil_ECM_write_IRV
        (rtb_OutportBufferForVeENGR_e_StsMil_EC_p);

    /* Merge: '<Root>/Merge_42' */
    Rte_IrvWrite_ENGR_PwrOn_VeENGR_i_ECM_LHOM_Trans_write_IRV
        (rtb_OutportBufferForVeENGR_i_ECM_LHOM__p);

#endif

    /* End of SignalConversion generated from: '<S4>/VeENGR_e_EngStrtStpOvrrd_write' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) TmotENGR_b_EngCoolantTemp(void)
{

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/TmotENGR_b_EngCoolantTemp' */
    /* Outport: '<Root>/VeENGR_b_ECT_Sgnl_Rcvd' incorporates:
     *  Chart: '<S93>/TmotENGR_b_EngCoolantTempChrt'
     *  SignalConversion generated from: '<S93>/VeENGR_b_EngCoolantTempSgnl_Rcvd'
     */
    /* Gateway: TmotENGR_b_EngCoolantTemp/TmotENGR_b_EngCoolantTempChrt */
    /* During: TmotENGR_b_EngCoolantTemp/TmotENGR_b_EngCoolantTempChrt */
    /* Entry Internal: TmotENGR_b_EngCoolantTemp/TmotENGR_b_EngCoolantTempChrt */
    /* Transition: '<S282>:2' */
    (void)Rte_Write_VeENGR_b_ECT_Sgnl_Rcvd_Value(false);

    /* End of Outputs for SubSystem: '<Root>/TmotENGR_b_EngCoolantTemp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) TmotENGR_b_EngStrtStpOvrrd_C1(void)
{

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/TmotENGR_b_EngStrtStpOvrrd_C1' */
    /* Merge: '<Root>/Merge_57' incorporates:
     *  Chart: '<S94>/TmotENGR_b_EngStrtStpOvrrd_C1Chrt'
     *  SignalConversion generated from: '<S94>/VeENGR_b_EngStrtStpOvrrd_C1Sgnl_Rcvd_write'
     */
    /* Gateway: TmotENGR_b_EngStrtStpOvrrd_C1/TmotENGR_b_EngStrtStpOvrrd_C1Chrt */
    /* During: TmotENGR_b_EngStrtStpOvrrd_C1/TmotENGR_b_EngStrtStpOvrrd_C1Chrt */
    /* Entry Internal: TmotENGR_b_EngStrtStpOvrrd_C1/TmotENGR_b_EngStrtStpOvrrd_C1Chrt */
    /* Transition: '<S283>:2' */
    Rte_IrvWrite_TmotENGR_b_EngStrtStpOvrrd_C1_VeENGR_b_EngStrtStpOvrrd_SgnlRcvd_C1_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotENGR_b_EngStrtStpOvrrd_C1' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ENGR_2

FUNC(void, ENGR_CODE) TmotENGR_b_FuelLevel2(void)
{

#if Rte_SysCon_Variant_ENGR_2

    /* Outputs for Function Call SubSystem: '<Root>/TmotENGR_b_FuelLevel2' */
    /* Outport: '<Root>/VeENGR_b_FuelLevel2_SgnlRcvd' incorporates:
     *  Chart: '<S95>/TmotENGR_b_FuelLevel2Chrt'
     *  SignalConversion generated from: '<S95>/VeENGR_b_FuelLevel2_SgnlRcvd'
     */
    /* Gateway: TmotENGR_b_FuelLevel2/TmotENGR_b_FuelLevel2Chrt */
    /* During: TmotENGR_b_FuelLevel2/TmotENGR_b_FuelLevel2Chrt */
    /* Entry Internal: TmotENGR_b_FuelLevel2/TmotENGR_b_FuelLevel2Chrt */
    /* Transition: '<S284>:2' */
    (void)Rte_Write_VeENGR_b_FuelLevel2_SgnlRcvd_Value(false);

    /* End of Outputs for SubSystem: '<Root>/TmotENGR_b_FuelLevel2' */
#endif

}

#endif

/* Model initialize function */
FUNC(void, ENGR_CODE) ENGR_ac_Init(void)
{
    /* Registration code */

    /* block I/O */
    {

#if Rte_SysCon_Variant_ENGR_2

        ENGR_ac_B.LeENGR_e_EngStrtStpOvrrd_C1_out = CeENGR_e_ENS_STOPPED;

#endif

#if Rte_SysCon_Variant_ENGR_2

        ENGR_ac_B.OutportBufferForVeENGR_e_EngStrtStpOvr_k =
            CeENGR_e_ENS_STOPPED;

#endif

        ENGR_ac_B.OutportBufferForVeENGR_e_EngStrtStpOvr_a =
            CeENGR_e_ENS_STOPPED;
    }

    /* custom signals */
#if Rte_SysCon_Variant_ENGR_2

    VeENGC_e_EngStrtStpOvrrd_Raw = CeENGR_e_ENS_STOPPED;

#endif

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/ENGR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Init ENGI Output'
     */
    /* SystemInitialize for SignalConversion generated from: '<S152>/VariantSource5' incorporates:
     *  Constant: '<S152>/TRUE Constant4'
     *  Constant: '<S163>/Calib'
     *  Constant: '<S164>/Calib'
     *  Constant: '<S166>/Calib'
     *  SignalConversion generated from: '<S152>/VeENGR_T_EngineOilTemp'
     *  SignalConversion generated from: '<S152>/VeENGR_T_ExhaustGasTemp'
     *  SignalConversion generated from: '<S152>/VeENGR_b_EngineOilTempFA'
     *  SignalConversion generated from: '<S152>/VeENGR_b_ExhMassFlowFA'
     *  SignalConversion generated from: '<S152>/VeENGR_b_ExhaustGasTempFA'
     *  SignalConversion generated from: '<S152>/VeENGR_dm_ExhMassFlow'
     */
#if Rte_SysCon_Variant_ENGR_2

    ENGR_ac_B.Calib = KeENGR_T_ExhaustGasTempInit;
    ENGR_ac_B.Calib_p = KeENGR_T_EngineOilTempInit;
    ENGR_ac_B.Calib_b = KeENGR_dm_ExhMassFlowInit;

    /* SystemInitialize for VariantMerge generated from: '<S152>/VariantSource5' incorporates:
     *  Constant: '<S163>/Calib'
     *  Constant: '<S164>/Calib'
     *  Constant: '<S166>/Calib'
     */
    ENGR_ac_B.VariantMerge_For_Variant_Source_Varia_gh = true;

    /* SystemInitialize for SignalConversion generated from: '<S152>/VeENGR_T_ExhaustGasTemp' */
    ENGR_ac_B.OutportBufferForVeENGR_T_ExhaustGasTemp = ENGR_ac_B.Calib;

    /* SystemInitialize for SignalConversion generated from: '<S152>/VeENGR_T_EngineOilTemp' */
    ENGR_ac_B.OutportBufferForVeENGR_T_EngineOilTemp = ENGR_ac_B.Calib_p;

    /* SystemInitialize for SignalConversion generated from: '<S152>/VeENGR_dm_ExhMassFlow' */
    ENGR_ac_B.OutportBufferForVeENGR_dm_ExhMassFlow = ENGR_ac_B.Calib_b;

#else

    /* SystemInitialize for VariantMerge generated from: '<S152>/VariantSource5' incorporates:
     *  SignalConversion generated from: '<S152>/VariantSource5'
     */
    ENGR_ac_B.VariantMerge_For_Variant_Source_Varia_gh =
        ENGR_ac_B.FALSEConstant15;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S152>/VariantSource5' */

    /* SystemInitialize for SignalConversion generated from: '<S152>/VeENGR_e_EngineMaintenanceSts' incorporates:
     *  Constant: '<S160>/Constant'
     */
    ENGR_ac_B.OutportBufferForVeENGR_e_EngineMaintenan =
        ENGR_ac_ConstB.Constant_e;

    /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Process_Engine_Status__Init ENGI Output'
     */
    /* SystemInitialize for SignalConversion generated from: '<S153>/VeENGR_b_EngCombustionCmnd' incorporates:
     *  Constant: '<S187>/Calib'
     *  Constant: '<S188>/Calib'
     *  Constant: '<S189>/Calib'
     *  SignalConversion generated from: '<S153>/VeENGR_b_EngCombustionCmndFA'
     *  SignalConversion generated from: '<S153>/VeENGR_e_ETRQ_Mode'
     *  SignalConversion generated from: '<S153>/VeENGR_e_EngStrtStpOvrrd'
     */
#if Rte_SysCon_Variant_ENGR_2

    ENGR_ac_B.Calib_pm = KeENGR_e_ComFailInit_C1CAN;
    ENGR_ac_B.Calib_k = KeENGR_e_ComFailInit_ePTCAN;
    ENGR_ac_B.Calib_o = KeENGR_b_PnLimitActvFlgInit;

    /* SystemInitialize for SignalConversion generated from: '<S153>/VeENGR_e_EngStrtStpOvrrd' incorporates:
     *  Constant: '<S178>/Constant'
     *  Constant: '<S187>/Calib'
     *  Constant: '<S188>/Calib'
     *  Constant: '<S189>/Calib'
     */
    ENGR_ac_B.OutportBufferForVeENGR_e_EngStrtStpOvr_k =
        ENGR_ac_ConstB.Constant_lr;

    /* SystemInitialize for SignalConversion generated from: '<S153>/VeENGR_e_ETRQ_Mode' incorporates:
     *  Constant: '<S184>/Constant'
     */
    ENGR_ac_B.OutportBufferForVeENGR_e_ETRQ_Mode_j = ENGR_ac_ConstB.Constant_f;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S153>/VeENGR_b_EngCombustionCmnd' */

    /* SystemInitialize for SignalConversion generated from: '<S153>/VeENGR_e_CylinderDeacMode' incorporates:
     *  Constant: '<S172>/Constant'
     */
    ENGR_ac_B.OutportBufferForVeENGR_e_CylinderDeacMod =
        ENGR_ac_ConstB.Constant_n;

    /* SystemInitialize for SignalConversion generated from: '<S153>/VeENGR_e_EngDFSO_Req' incorporates:
     *  Constant: '<S177>/Constant'
     */
    ENGR_ac_B.OutportBufferForVeENGR_e_EngDFSO_Req = ENGR_ac_ConstB.Constant_h;

    /* SystemInitialize for SignalConversion generated from: '<S153>/VeENGR_e_EngDFSO_St' incorporates:
     *  Constant: '<S173>/Constant'
     */
    ENGR_ac_B.OutportBufferForVeENGR_e_EngDFSO_St = ENGR_ac_ConstB.Constant_l;

    /* SystemInitialize for SignalConversion generated from: '<S153>/VeENGR_e_Cam_Phsr_Stat' incorporates:
     *  Constant: '<S174>/Constant'
     */
    ENGR_ac_B.OutportBufferForVeENGR_e_Cam_Phsr_Stat =
        ENGR_ac_ConstB.Constant_ab;

    /* SystemInitialize for SignalConversion generated from: '<S153>/VeENGR_e_EngReqStrtType' incorporates:
     *  Constant: '<S175>/Constant'
     */
    ENGR_ac_B.OutportBufferForVeENGR_e_EngReqStrtTyp_c =
        ENGR_ac_ConstB.Constant_o;

    /* SystemInitialize for SignalConversion generated from: '<S153>/VeENGR_b_Feedback_HCP' */
    ENGR_ac_B.OutportBufferForVeENGR_b_Feedback_HCP = true;

    /* SystemInitialize for SignalConversion generated from: '<S153>/VeENGR_e_ECMReqRemStop' incorporates:
     *  Constant: '<S182>/Constant'
     */
    ENGR_ac_B.OutportBufferForVeENGR_e_ECMReqRemStop =
        ENGR_ac_ConstB.Constant_ex;

    /* SystemInitialize for SignalConversion generated from: '<S153>/VeENGR_i_ECM_LHOM_Trans' incorporates:
     *  SignalConversion generated from: '<S153>/VeENGR_b_EngTrq_Enbl_Rq_TCM'
     *  SignalConversion generated from: '<S153>/VeENGR_b_LV12PwrFreeRq'
     *  SignalConversion generated from: '<S153>/VariantSource4'
     *  SignalConversion generated from: '<S153>/VariantSource5'
     * */
#if Rte_SysCon_Variant_ENGR_2

    /* SystemInitialize for SignalConversion generated from: '<S153>/VeENGR_b_EngTrq_Enbl_Rq_TCM' */
    ENGR_ac_B.OutportBufferForVeENGR_b_EngTrq_Enbl_R_c = true;

    /* SystemInitialize for VariantMerge generated from: '<S153>/VariantSource4' incorporates:
     *  Constant: '<S188>/Calib'
     */
    ENGR_ac_B.VariantMerge_For_Variant_Source_Varian_a = ENGR_ac_B.Calib_pm;

    /* SystemInitialize for VariantMerge generated from: '<S153>/VariantSource5' incorporates:
     *  Constant: '<S189>/Calib'
     */
    ENGR_ac_B.VariantMerge_For_Variant_Source_Vari_ghj = ENGR_ac_B.Calib_k;

#else

    /* SystemInitialize for VariantMerge generated from: '<S153>/VariantSource4' incorporates:
     *  Constant: '<S185>/Constant'
     *  SignalConversion generated from: '<S153>/VariantSource4'
     */
    ENGR_ac_B.VariantMerge_For_Variant_Source_Varian_a = ENGR_ac_B.Constant_f;

    /* SystemInitialize for VariantMerge generated from: '<S153>/VariantSource5' incorporates:
     *  Constant: '<S186>/Constant'
     *  SignalConversion generated from: '<S153>/VariantSource5'
     */
    ENGR_ac_B.VariantMerge_For_Variant_Source_Vari_ghj = ENGR_ac_B.Constant;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S153>/VeENGR_i_ECM_LHOM_Trans' */

    /* SystemInitialize for SignalConversion generated from: '<S153>/VeENGR_e_StsMil_ECM' incorporates:
     *  SignalConversion generated from: '<S153>/VeENGR_b_CmprssnTest'
     *  SignalConversion generated from: '<S153>/VeENGR_b_PnLimitActvFlg'
     *  SignalConversion generated from: '<S153>/VeENGR_b_PnLimitActvFlgFA'
     *  SignalConversion generated from: '<S153>/VeENGR_b_StpNotAllwd'
     *  SignalConversion generated from: '<S153>/VeENGR_b_StpNotAllwdFA'
     *  SignalConversion generated from: '<S153>/VeENGR_b_StpNotAllwdIDFA'
     *  SignalConversion generated from: '<S153>/VeENGR_b_StrtNotAllwd'
     *  SignalConversion generated from: '<S153>/VeENGR_b_StrtNotAllwdFA'
     *  SignalConversion generated from: '<S153>/VeENGR_b_StrtNotAllwdIDFA'
     *  SignalConversion generated from: '<S153>/VeENGR_e_StpNotAllwdID'
     *  SignalConversion generated from: '<S153>/VeENGR_e_StrtNotAllwdID'
     */
#if Rte_SysCon_Variant_ENGR_2

    /* SystemInitialize for SignalConversion generated from: '<S153>/VeENGR_e_StsMil_ECM' incorporates:
     *  Constant: '<S183>/Constant'
     */
    ENGR_ac_B.OutportBufferForVeENGR_e_StsMil_ECM_i = ENGR_ac_ConstB.Constant_c;

    /* SystemInitialize for SignalConversion generated from: '<S153>/VeENGR_e_StpNotAllwdID' incorporates:
     *  Constant: '<S176>/Constant'
     */
    ENGR_ac_B.OutportBufferForVeENGR_e_StpNotAllwdID = ENGR_ac_ConstB.Constant_a;

    /* SystemInitialize for SignalConversion generated from: '<S153>/VeENGR_e_StrtNotAllwdID' incorporates:
     *  Constant: '<S179>/Constant'
     */
    ENGR_ac_B.OutportBufferForVeENGR_e_StrtNotAllwdID =
        ENGR_ac_ConstB.Constant_g;

    /* SystemInitialize for SignalConversion generated from: '<S153>/VeENGR_b_PnLimitActvFlg' */
    ENGR_ac_B.OutportBufferForVeENGR_b_PnLimitActvFlg = ENGR_ac_B.Calib_o;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S153>/VeENGR_e_StsMil_ECM' */

    /* SystemInitialize for SignalConversion generated from: '<S153>/VeENGR_e_EngStrtStpOvrrd_C1' incorporates:
     *  Constant: '<S180>/Constant'
     */
    ENGR_ac_B.OutportBufferForVeENGR_e_EngStrtStpOvr_a =
        ENGR_ac_ConstB.Constant_dt;

    /* SystemInitialize for SignalConversion generated from: '<S153>/VeENGR_e_ESSEngSt' incorporates:
     *  Constant: '<S181>/Constant'
     */
    ENGR_ac_B.OutportBufferForVeENGR_e_ESSEngSt = ENGR_ac_ConstB.Constant_cq;

    /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/ENGO_ProcessOutput_init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S151>/VeENGR_b_EngCombustionCmnd' incorporates:
     *  SignalConversion generated from: '<S151>/VeENGR_b_EngTrq_Enbl_Rq_TCM'
     *  SignalConversion generated from: '<S151>/VeENGR_b_LV12PwrFreeRq'
     *  SignalConversion generated from: '<S151>/VeENGR_e_ETRQ_Mode'
     *  SignalConversion generated from: '<S151>/VeENGR_e_EngReqStrtType'
     *  SignalConversion generated from: '<S151>/VeENGR_e_EngStrtStpOvrrd'
     *  SignalConversion generated from: '<S151>/VeENGR_e_StsMil_ECM'
     *  SignalConversion generated from: '<S151>/VeENGR_i_ECM_LHOM_Trans'
     */
#if Rte_SysCon_Variant_ENGR_3

    /* SystemInitialize for SignalConversion generated from: '<S151>/VeENGR_e_EngStrtStpOvrrd' incorporates:
     *  Constant: '<S157>/Constant'
     */
    ENGR_ac_B.OutportBufferForVeENGR_e_EngStrtStpOvrrd =
        ENGR_ac_ConstB.Constant_d;

    /* SystemInitialize for SignalConversion generated from: '<S151>/VeENGR_e_ETRQ_Mode' incorporates:
     *  Constant: '<S158>/Constant'
     */
    ENGR_ac_B.OutportBufferForVeENGR_e_ETRQ_Mode = ENGR_ac_ConstB.Constant_p;

    /* SystemInitialize for SignalConversion generated from: '<S151>/VeENGR_b_EngTrq_Enbl_Rq_TCM' */
    ENGR_ac_B.OutportBufferForVeENGR_b_EngTrq_Enbl_Rq_ = true;

    /* SystemInitialize for SignalConversion generated from: '<S151>/VeENGR_e_StsMil_ECM' incorporates:
     *  Constant: '<S159>/Constant'
     */
    ENGR_ac_B.OutportBufferForVeENGR_e_StsMil_ECM = ENGR_ac_ConstB.Constant_k;

    /* SystemInitialize for SignalConversion generated from: '<S151>/VeENGR_e_EngReqStrtType' incorporates:
     *  Constant: '<S156>/Constant'
     */
    ENGR_ac_B.OutportBufferForVeENGR_e_EngReqStrtType = ENGR_ac_ConstB.Constant;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S151>/VeENGR_b_EngCombustionCmnd' */

    /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S154>/VeENGR_e_EngineSts_Out_Init' incorporates:
     *  Constant: '<S154>/Const2'
     */
    ENGR_ac_B.OutportBufferForVeENGR_e_EngineSts_Out_I = ENGR_ac_ConstB.Const2;

    /* End of SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for Outport: '<Root>/VeENGR_e_CylinderDeacMode' incorporates:
     *  Merge: '<Root>/Merge_45'
     */
    (void)Rte_Write_VeENGR_e_CylinderDeacMode_Value(CeENGR_e_AllCylindersActive);

    /* SystemInitialize for Outport: '<Root>/VeENGR_e_EngDFSO_Req' incorporates:
     *  Merge: '<Root>/Merge_54'
     */
    (void)Rte_Write_VeENGR_e_EngDFSO_Req_Value(CeENGR_e_DFSO_Disabled);

    /* SystemInitialize for Outport: '<Root>/VeENGR_e_EngDFSO_St' incorporates:
     *  Merge: '<Root>/Merge_59'
     */
    (void)Rte_Write_VeENGR_e_EngDFSO_St_Value(CeENGR_e_DFSO_Disabled);

    /* SystemInitialize for Outport: '<Root>/VeENGR_e_Cam_Phsr_Stat' incorporates:
     *  Merge: '<Root>/Merge_60'
     */
    (void)Rte_Write_VeENGR_e_Cam_Phsr_Stat_Value(CeENGR_e_AllPhasersParked);

#if Rte_SysCon_Variant_ENGR_2

    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeENGR_b_EngCombustionCmnd' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeENGR_b_StpNotAllwd' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeENGR_b_StrtNotAllwd' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeENGR_e_EngStrtStpOvrrd_C1' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeENGR_e_StpNotAllwdID' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeENGR_e_StrtNotAllwdID' */
    /* SystemInitialize for Function Call SubSystem: '<Root>/PokeENGR_e_EngStrtStpOvrrd_C1' */
    /* SystemInitialize for Chart: '<S83>/PokeENGR_e_EngStrtStpOvrrd_C1Chrt' */
    ENGR_ac_B.LeENGR_e_EngStrtStpOvrrd_C1_out = CeENGR_e_ENS_STOPPED;

    /* End of SystemInitialize for SubSystem: '<Root>/PokeENGR_e_EngStrtStpOvrrd_C1' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeENGR_e_StrtNotAllwdID' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeENGR_e_StpNotAllwdID' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeENGR_e_EngStrtStpOvrrd_C1' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeENGR_b_StrtNotAllwd' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeENGR_b_StpNotAllwd' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeENGR_b_EngCombustionCmnd' */
#endif

    /* SystemInitialize for Merge: '<Root>/Merge_74' incorporates:
     *  Merge: '<Root>/Merge_65'
     *  Merge: '<Root>/Merge_66'
     *  Merge: '<Root>/Merge_68'
     */
#if Rte_SysCon_Variant_ENGR_2 || Rte_SysCon_Variant_ENGR_3

    /* SystemInitialize for Outport: '<Root>/VeENGR_e_EngReqStrtType' */
    (void)Rte_Write_VeENGR_e_EngReqStrtType_Value(CeSTRR_e_NoAction);

    /* SystemInitialize for Outport: '<Root>/VeENGR_e_EngStrtStpOvrrd' */
    (void)Rte_Write_VeENGR_e_EngStrtStpOvrrd_Value(CeSTRR_e_NoOvrrd);

    /* SystemInitialize for Outport: '<Root>/VeENGR_e_ETRQ_Mode' */
    (void)Rte_Write_VeENGR_e_ETRQ_Mode_Value(CeENGR_e_Preposition);

#endif

    /* End of SystemInitialize for Merge: '<Root>/Merge_74' */

    /* SystemInitialize for Outport: '<Root>/VeENGR_e_ECMReqRemStop' incorporates:
     *  Merge: '<Root>/Merge_39'
     */
    (void)Rte_Write_VeENGR_e_ECMReqRemStop_Value(CeENGR_e_Default);

    /* SystemInitialize for Outport: '<Root>/VeENGR_e_ComFailECM_C1CAN' incorporates:
     *  Merge: '<Root>/Merge_50'
     */
    (void)Rte_Write_VeENGR_e_ComFailECM_C1CAN_Value(CeENGR_e_NoFaultECM_C1);

    /* SystemInitialize for Outport: '<Root>/VeENGR_e_ComFailECM_ePtCAN' incorporates:
     *  Merge: '<Root>/Merge_49'
     */
    (void)Rte_Write_VeENGR_e_ComFailECM_ePtCAN_Value(CeENGR_e_NoFaultECM_ePT);

    /* SystemInitialize for Merge: '<Root>/Merge_64' */
#if Rte_SysCon_Variant_ENGR_2 || Rte_SysCon_Variant_ENGR_3

    /* SystemInitialize for Outport: '<Root>/VeENGR_e_StsMiL_ECM' */
    (void)Rte_Write_VeENGR_e_StsMiL_ECM_Value(CeENGR_e_StsMiL_Fail_NotPrsnt);

#endif

    /* End of SystemInitialize for Merge: '<Root>/Merge_64' */

    /* SystemInitialize for Outport: '<Root>/VeENGR_e_ESSEngSt' incorporates:
     *  Merge: '<Root>/Merge_53'
     */
    (void)Rte_Write_VeENGR_e_ESSEngSt_Value(CeENGR_e_Stopped);

    /* SystemInitialize for Outport: '<Root>/VeENGR_e_EngineSts' incorporates:
     *  Merge: '<Root>/Merge_Outport_53'
     */
    (void)Rte_Write_VeENGR_e_EngineSts_Value(CeENGR_e_Engine_Off);

    /* SystemInitialize for Outport: '<Root>/VeENGR_e_EngineMaintenanceSts' incorporates:
     *  Merge: '<Root>/Merge_81'
     */
    (void)Rte_Write_VeENGR_e_EngineMaintenanceSts_Value(CeENGR_e_Inactive);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
