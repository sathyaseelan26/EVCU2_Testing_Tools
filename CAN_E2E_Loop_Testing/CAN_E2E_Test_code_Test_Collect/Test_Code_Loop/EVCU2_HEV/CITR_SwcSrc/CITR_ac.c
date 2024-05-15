/*
 * File: CITR_ac.c
 *
 * Code generated for Simulink model 'CITR_ac'.
 *
 * Model version                  : 9.327
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:27:06 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CITR_ac.h"

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_CITR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(TeOBCR_e_DoorLockSts, CITR_VAR_INIT)
    KaCITR_e_DoorLockLastElSts[8] =
{
    CeOBCR_e_LKD, CeOBCR_e_Drv_Dr_Unlkd, CeOBCR_e_All_Dr_Unlkd, CeOBCR_e_DoorSNA,
    CeOBCR_e_DoorSNA, CeOBCR_e_DoorSNA, CeOBCR_e_DoorSNA, CeOBCR_e_DoorSNA
};                                     /* Referenced by:
                                        * '<S975>/Calib'
                                        * '<S977>/Calib'
                                        */

static volatile CONST(TeOBCR_e_PwrLimReq, CITR_VAR_INIT)
    KaCITR_e_PowerLimit_Req[8] =
{
    CeOBCR_e_PwrLimReq_NoChange, CeOBCR_e_PwrLimReq_Min, CeOBCR_e_PwrLimReq_Slow,
    CeOBCR_e_PwrLimReq_Reduced, CeOBCR_e_PwrLimReq_Quick, CeOBCR_e_PwrLimReq_Max,
    CeOBCR_e_PwrLimReq_NoChange, CeOBCR_e_PwrLimReq_SNA
};                                     /* Referenced by:
                                        * '<S1009>/Calib'
                                        * '<S1011>/Calib'
                                        */

static volatile CONST(TeCITR_e_RRM_VP_Level, CITR_VAR_INIT)
    KaCITR_e_RRM_VP_Level[18] =
{
    CeCITR_e_RRM_VP_Absent, CeCITR_e_RRM_VP_Level2, CeCITR_e_RRM_VP_Level4,
    CeCITR_e_RRM_VP_Level3, CeCITR_e_RRM_VP_Level4, CeCITR_e_RRM_VP_Absent,
    CeCITR_e_RRM_VP_Absent, CeCITR_e_RRM_VP_Absent, CeCITR_e_RRM_VP_Absent,
    CeCITR_e_RRM_VP_Absent, CeCITR_e_RRM_VP_Absent, CeCITR_e_RRM_VP_Absent,
    CeCITR_e_RRM_VP_Absent, CeCITR_e_RRM_VP_Absent, CeCITR_e_RRM_VP_Absent,
    CeCITR_e_RRM_VP_Absent, CeCITR_e_RRM_VP_Absent, CeCITR_e_RRM_NotUsed
};                                     /* Referenced by: '<S457>/Calib' */

static volatile CONST(uint16, CITR_VAR_INIT) KeCITR_Cnt_DbncLockSense = 3U;/* Referenced by: '<S446>/Calib' */
static volatile CONST(uint16, CITR_VAR_INIT) KeCITR_Cnt_DbncLockSenseOff = 20U;/* Referenced by: '<S447>/Calib' */
static volatile CONST(uint16, CITR_VAR_INIT) KeCITR_Cnt_DbncPortReset = 10U;/* Referenced by: '<S472>/Calib' */
static volatile CONST(uint16, CITR_VAR_INIT) KeCITR_Cnt_Dbnc_BCM_Cmd = 4U;/* Referenced by: '<S458>/Calib' */
static volatile CONST(float32, CITR_VAR_INIT) KeCITR_U_LockStsDtrmn_MnLim =
    4.03F;                             /* Referenced by: '<S484>/Calib' */
static volatile CONST(float32, CITR_VAR_INIT) KeCITR_U_LockStsDtrmn_MxLim =
    4.43F;                             /* Referenced by: '<S485>/Calib' */
static volatile CONST(float32, CITR_VAR_INIT) KeCITR_U_UnLockStsDtrmn_MnLim =
    1.46F;                             /* Referenced by: '<S486>/Calib' */
static volatile CONST(float32, CITR_VAR_INIT) KeCITR_U_UnLockStsDtrmn_MxLim =
    1.86F;                             /* Referenced by: '<S487>/Calib' */
static volatile CONST(boolean, CITR_VAR_INIT) KeCITR_b_DoorLockLastElSts_P1P4_GC
    = 0;                               /* Referenced by: '<S459>/Calib' */
static volatile CONST(boolean, CITR_VAR_INIT) KeCITR_b_HBridge_ChrgPortLck = 0;/* Referenced by: '<S477>/Calib' */
static volatile CONST(boolean, CITR_VAR_INIT) KeCITR_b_PwrLimReq_P1P4_GC = 0;/* Referenced by: '<S460>/Calib' */
static volatile CONST(boolean, CITR_VAR_INIT) KeCITR_b_SOC_Max_Lev_Init = 1;/* Referenced by: '<S519>/Calib' */
static volatile CONST(TeOBCR_e_ChrgPortLockType, CITR_VAR_INIT)
    KeCITR_e_ChrgPortLock_Type = CeOBCR_e_ChrgPortLock_TypeA;/* Referenced by: '<S461>/Calib' */
static volatile CONST(TeOBCR_e_DoorLockSts, CITR_VAR_INIT)
    KeCITR_e_DoorLkSts_Init = CeOBCR_e_LKD;/* Referenced by: '<S520>/Calib' */
static volatile CONST(TeOBCR_e_PwrLimReq, CITR_VAR_INIT) KeCITR_e_PwrLimReq_Init
    = CeOBCR_e_PwrLimReq_NoChange;     /* Referenced by: '<S521>/Calib' */

#define STOP_SEC_CALIB_UNSPECIFIED_CITR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CITR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(boolean, CITR_VAR_INIT) VeCITR_b_ChrgPortLockSts_B;/* '<S455>/Logical2' */
static VAR(boolean, CITR_VAR_INIT) VeCITR_b_ChrgPortLockSts_C;/* '<S456>/Logical2' */
static VAR(boolean, CITR_VAR_INIT) VeCITR_b_LockStatus_A;/* '<S454>/Logical2' */
static VAR(boolean, CITR_VAR_INIT) VeCITR_b_LockStsA_Test1;/* '<S473>/OR1' */
static VAR(boolean, CITR_VAR_INIT) VeCITR_b_LockStsA_Test2;/* '<S454>/Logical4' */
static VAR(boolean, CITR_VAR_INIT) VeCITR_b_LockStsA_Test3;/* '<S454>/Logical5' */
static VAR(boolean, CITR_VAR_INIT) VeCITR_b_PortLockBCM_Ne;/* '<S452>/Data Store Read1' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CITR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_CITR
#include "MemMap.h"

CONST(ConstB_CITR_ac_T, CITR_VAR_INIT) CITR_ac_ConstB =
{
    CeVTLR_e_NoFaultPP2,               /* '<S581>/Constant' */
    CeVTLR_e_NoFault,                  /* '<S567>/Constant' */
    CeODCR_e_Return_ECU_Cntrl,         /* '<S538>/Constant' */
    CeODCR_e_Return_ECU_Cntrl,         /* '<S537>/Constant' */
    CeODCR_e_Return_ECU_Cntrl,         /* '<S516>/Constant' */
    CeOBCR_e_PwrLimReq_SNA,            /* '<S503>/Const4' */
    CeOBCR_e_LKD,                      /* '<S503>/Const1' */
    CeOBCR_e_DCChrg_TestSts_NotInit,   /* '<S517>/Constant' */
    CeOBCR_e_DefaultLock_Sts,          /* '<S503>/Const9' */
    CeCITR_e_SchType_NoSelection,      /* '<S592>/Constant' */
    CeCITR_e_SchType_NoSelection,      /* '<S589>/Constant' */
    CeCITR_e_SchType_NoSelection,      /* '<S512>/Constant' */
    CeCITR_e_SchType_NoSelection,      /* '<S590>/Constant' */
    CeCITR_e_SchType_NoSelection,      /* '<S588>/Constant' */
    CeCITR_e_SchType_NoSelection,      /* '<S511>/Constant' */
    CeCITR_e_AnyTime,                  /* '<S595>/Constant' */
    CeCITR_e_AnyTime,                  /* '<S593>/Constant' */
    CeCITR_e_AnyTime,                  /* '<S594>/Constant' */
    CeCITR_e_AnyTime,                  /* '<S591>/Constant' */
    CeCITR_e_Default,                  /* '<S507>/Constant' */
    CeCITR_e_RRM_VP_Absent,            /* '<S514>/Constant' */
    CeCITR_e_LED_No_Fault,             /* '<S578>/Constant' */
    CeCITR_e_LED_No_Fault,             /* '<S582>/Constant' */
    CeCITR_e_PP_LED_Color_Init,        /* '<S571>/Constant' */
    CeCITR_e_PP_LED_Color_Init,        /* '<S572>/Constant' */
    CeCITR_e_PP_LED_Color_Init,        /* '<S573>/Constant' */
    CeCITR_e_PP_LED_Color_Init,        /* '<S579>/Constant' */
    CeCITR_e_PP_LED_Color_Init,        /* '<S580>/Constant' */
    CeCITR_e_No_Fault,                 /* '<S585>/Constant' */
    CeCITR_e_No_Fault,                 /* '<S583>/Constant' */
    CeCITR_e_NoFOTA,                   /* '<S597>/Constant' */
    CeCITR_e_Installation_Default,     /* '<S598>/Constant' */
    CeCITR_e_DateTm_24,                /* '<S596>/Constant' */
    CeCITR_e_DEFAULT,                  /* '<S508>/Constant' */
    CeCITR_e_ChrgrFlap_Closed,         /* '<S518>/Constant' */
    CeCITR_e_No_Selection,             /* '<S506>/Constant' */
    CeCITR_e_No_Selection,             /* '<S505>/Constant' */
    CeCITR_e_No_Selection,             /* '<S509>/Constant' */
    CeCITR_e_No_Selection,             /* '<S510>/Constant' */
    CeCITR_e_CPIMLock_Nofailure,       /* '<S513>/Constant' */
    CeCITR_e_ChrgPortDoor_Closed,      /* '<S515>/Constant' */
    CeCITR_e_CPIM_LEDNormal,           /* '<S568>/Constant' */
    CeCITR_e_CPIM_LEDNormal,           /* '<S569>/Constant' */
    CeCITR_e_CPIM_LEDNormal,           /* '<S570>/Constant' */
    CeCITR_e_CPIM_LEDNormal,           /* '<S576>/Constant' */
    CeCITR_e_CPIM_LEDNormal,           /* '<S577>/Constant' */
    CeCITR_e_CPIM_LEDNormal,           /* '<S540>/Constant' */
    CeCITR_e_CPIM_LEDNormal,           /* '<S541>/Constant' */
    CeCITR_e_CPIM_LEDNormal,           /* '<S552>/Constant' */
    CeCITR_e_CPIM_LEDNormal,           /* '<S560>/Constant' */
    CeCITR_e_CPIM_LEDNormal,           /* '<S561>/Constant' */
    CeCITR_e_CPIM_LEDNormal,           /* '<S562>/Constant' */
    CeCITR_e_CPIM_LEDNormal,           /* '<S563>/Constant' */
    CeCITR_e_CPIM_LEDNormal,           /* '<S564>/Constant' */
    CeCITR_e_CPIM_Ind_Off,             /* '<S584>/Constant' */
    CeCITR_e_CPIM_Ind_Off,             /* '<S586>/Constant' */
    CeCITR_e_CPIM_Ind_Off,             /* '<S587>/Constant' */
    CeCITR_e_CPIM_Ind_Off,             /* '<S574>/Constant' */
    CeCITR_e_CPIM_Ind_Off,             /* '<S575>/Constant' */
    CeCITR_e_CPIM_Ind_Off,             /* '<S539>/Constant' */
    CeCITR_e_CPIM_Ind_Off,             /* '<S523>/Constant' */
    CeCITR_e_CPIM_Ind_Off,             /* '<S524>/Constant' */
    CeCITR_e_CPIM_Ind_Off,             /* '<S525>/Constant' */
    CeCITR_e_CPIM_Ind_Off,             /* '<S528>/Constant' */
    CeCITR_e_CPIM_Ind_Off,             /* '<S565>/Constant' */
    CeCITR_e_CPIM_Ind_Off,             /* '<S566>/Constant' */
    CeCITR_e_CPIM_Ind_Off,             /* '<S542>/Constant' */
    CeCITR_e_CPIM_Ind_Off,             /* '<S543>/Constant' */
    CeCITR_e_CPIM_Ind_Off,             /* '<S544>/Constant' */
    CeCITR_e_CPIM_Icon_OFF,            /* '<S530>/Constant' */
    CeCITR_e_CPIM_Icon_OFF,            /* '<S527>/Constant' */
    CeCITR_e_CPIM_Icon_OFF,            /* '<S546>/Constant' */
    CeCITR_e_CPIM_Icon_OFF,            /* '<S547>/Constant' */
    CeCITR_e_CPIM_NoColor,             /* '<S526>/Constant' */
    CeCITR_e_CPIM_NoColor,             /* '<S545>/Constant' */
    CeCITR_e_CPIM_NoBlink,             /* '<S522>/Constant' */
    CeCITR_e_BCIM_LEDNormal,           /* '<S555>/Constant' */
    CeCITR_e_BCIM_LEDNormal,           /* '<S556>/Constant' */
    CeCITR_e_BCIM_LEDNormal,           /* '<S557>/Constant' */
    CeCITR_e_BCIM_LEDNormal,           /* '<S558>/Constant' */
    CeCITR_e_BCIM_LEDNormal,           /* '<S550>/Constant' */
    CeCITR_e_BCIM_Ind_Off,             /* '<S529>/Constant' */
    CeCITR_e_BCIM_Ind_Off,             /* '<S532>/Constant' */
    CeCITR_e_BCIM_Ind_Off,             /* '<S533>/Constant' */
    CeCITR_e_BCIM_Ind_Off,             /* '<S534>/Constant' */
    CeCITR_e_BCIM_Ind_Off,             /* '<S535>/Constant' */
    CeCITR_e_BCIM_Ind_Off,             /* '<S548>/Constant' */
    CeCITR_e_BCIM_Ind_Off,             /* '<S549>/Constant' */
    CeCITR_e_BCIM_Ind_Off,             /* '<S551>/Constant' */
    CeCITR_e_BCIM_Ind_Off,             /* '<S553>/Constant' */
    CeCITR_e_BCIM_Ind_Off,             /* '<S554>/Constant' */
    CeCITR_e_BCIM_NoColor,             /* '<S531>/Constant' */
    CeCITR_e_BCIM_NoColor,             /* '<S559>/Constant' */
    CeCITR_e_BCIM_NoBlink              /* '<S536>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_CITR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CITR
#include "MemMap.h"

VAR(B_CITR_ac_T, CITR_VAR_INIT) CITR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CITR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CITR
#include "MemMap.h"

VAR(DW_CITR_ac_T, CITR_VAR_INIT) CITR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CITR
#include "MemMap.h"

static FUNC(void, CITR_CODE_LOCAL) CITR__FsftCITR_Pct_HU_ImmChrgTarget2Chrt
    (P2VAR(B_FsftCITR_Pct_HU_ImmChrgTarget2Chrt_C_T, AUTOMATIC, CITR_VAR_INIT)
     localB);
static FUNC(void, CITR_CODE_LOCAL) CITR_FsftCITR_Pct_TBM_ExtChrgTarget2Chrt
    (P2VAR(B_FsftCITR_Pct_TBM_ExtChrgTarget2Chrt__T, AUTOMATIC, CITR_VAR_INIT)
     localB);
static FUNC(void, CITR_CODE_LOCAL) CITR_ac_FsftCITR_e_HU_ChrgSchedType1Chrt
    (P2VAR(B_FsftCITR_e_HU_ChrgSchedType1Chrt_CIT_T, AUTOMATIC, CITR_VAR_INIT)
     localB);

/*
 * Output and update for atomic system:
 *    '<S15>/FsftCITR_Pct_HU_ImmChrgTarget2Chrt'
 *    '<S26>/FsftCITR_b_CoopCh_VehLocationChrt'
 *    '<S13>/FsftCITR_Pct_HU_ExtChrgTarget2Chrt'
 *    '<S14>/FsftCITR_Pct_HU_ImmChrgTarget1Chrt'
 */
static FUNC(void, CITR_CODE_LOCAL) CITR__FsftCITR_Pct_HU_ImmChrgTarget2Chrt
    (P2VAR(B_FsftCITR_Pct_HU_ImmChrgTarget2Chrt_C_T, AUTOMATIC, CITR_VAR_INIT)
     localB)
{
    /* Chart: '<S15>/FsftCITR_Pct_HU_ImmChrgTarget2Chrt' */
    /* Gateway: FsftCITR_Pct_HU_ImmChrgTarget2/FsftCITR_Pct_HU_ImmChrgTarget2Chrt */
    /* During: FsftCITR_Pct_HU_ImmChrgTarget2/FsftCITR_Pct_HU_ImmChrgTarget2Chrt */
    /* Entry Internal: FsftCITR_Pct_HU_ImmChrgTarget2/FsftCITR_Pct_HU_ImmChrgTarget2Chrt */
    /* Transition: '<S609>:2' */
    localB->LeCITR_b_HU_ExtChrgTarget2FA_out = true;
}

/*
 * Output and update for atomic system:
 *    '<S17>/FsftCITR_Pct_TBM_ExtChrgTarget2Chrt'
 *    '<S18>/FsftCITR_Pct_TBM_ImmChrgTarget1Chrt'
 */
static FUNC(void, CITR_CODE_LOCAL) CITR_FsftCITR_Pct_TBM_ExtChrgTarget2Chrt
    (P2VAR(B_FsftCITR_Pct_TBM_ExtChrgTarget2Chrt__T, AUTOMATIC, CITR_VAR_INIT)
     localB)
{
    /* Chart: '<S17>/FsftCITR_Pct_TBM_ExtChrgTarget2Chrt' */
    /* Gateway: FsftCITR_Pct_TBM_ExtChrgTarget2/FsftCITR_Pct_TBM_ExtChrgTarget2Chrt */
    /* During: FsftCITR_Pct_TBM_ExtChrgTarget2/FsftCITR_Pct_TBM_ExtChrgTarget2Chrt */
    /* Entry Internal: FsftCITR_Pct_TBM_ExtChrgTarget2/FsftCITR_Pct_TBM_ExtChrgTarget2Chrt */
    /* Transition: '<S611>:2' */
    localB->LeCITR_b_TBM_ExtChrgTarget2FA_out = true;
}

/*
 * Output and update for atomic system:
 *    '<S140>/FsftCITR_e_HU_ChrgSchedType1Chrt'
 *    '<S141>/FsftCITR_e_HU_ChrgSchedType2Chrt'
 */
static FUNC(void, CITR_CODE_LOCAL) CITR_ac_FsftCITR_e_HU_ChrgSchedType1Chrt
    (P2VAR(B_FsftCITR_e_HU_ChrgSchedType1Chrt_CIT_T, AUTOMATIC, CITR_VAR_INIT)
     localB)
{
    /* Chart: '<S140>/FsftCITR_e_HU_ChrgSchedType1Chrt' */
    /* Gateway: FsftCITR_e_HU_ChrgSchedType1/FsftCITR_e_HU_ChrgSchedType1Chrt */
    /* During: FsftCITR_e_HU_ChrgSchedType1/FsftCITR_e_HU_ChrgSchedType1Chrt */
    /* Entry Internal: FsftCITR_e_HU_ChrgSchedType1/FsftCITR_e_HU_ChrgSchedType1Chrt */
    /* Transition: '<S734>:2' */
    localB->LeCITR_b_HU_ChrgSchedType1FA_out = true;
}

/* Model step function for TID1 */
FUNC(void, CITR_CODE) CITR_FastTEF(void) /* Explicit Task: FastTEF */
{
    sint32 tmp;
    boolean rtb_AND_b;
    boolean rtb_TmpSignalConversionAtVeCITR_b_Chr_oc;

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/CITR_FastTEF'
     */
    /* SignalConversion generated from: '<S1>/VeCITR_b_ChrgPort_Fdbk_read' incorporates:
     *  Merge: '<Root>/Merge_3'
     */
    rtb_TmpSignalConversionAtVeCITR_b_Chr_oc =
        Rte_IrvRead_CITR_FastTEF_ChrgPort_Sense_Init_write_IRV();

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/InitBlock1'
     */
    /* Outputs for Atomic SubSystem: '<S444>/Turn On Delay Sample3' */
    /* Outputs for Atomic SubSystem: '<S449>/EdgeRising' */
    /* Logic: '<S451>/AND' incorporates:
     *  Logic: '<S451>/OR1'
     *  UnitDelay: '<S451>/Unit Delay'
     */
    rtb_AND_b = (rtb_TmpSignalConversionAtVeCITR_b_Chr_oc &&
                 (!CITR_ac_DW.UnitDelay_DSTATE_l));

    /* Update for UnitDelay: '<S451>/Unit Delay' */
    CITR_ac_DW.UnitDelay_DSTATE_l = rtb_TmpSignalConversionAtVeCITR_b_Chr_oc;

    /* End of Outputs for SubSystem: '<S449>/EdgeRising' */

    /* Switch: '<S449>/Switch1' incorporates:
     *  Constant: '<S446>/Calib'
     *  Constant: '<S449>/Constant Value'
     *  Constant: '<S449>/Constant Value1'
     *  Logic: '<S449>/OR'
     *  Logic: '<S449>/OR1'
     *  MinMax: '<S449>/Minimum'
     *  Sum: '<S449>/Summation'
     *  UnitDelay: '<S449>/Unit Delay'
     */
    if ((!rtb_TmpSignalConversionAtVeCITR_b_Chr_oc) || rtb_AND_b)
    {
        CITR_ac_DW.UnitDelay_DSTATE_o = 0U;
    }
    else if (KeCITR_Cnt_DbncLockSense < ((uint16)(((uint32)
                CITR_ac_DW.UnitDelay_DSTATE_o) + 1U)))
    {
        /* MinMax: '<S449>/Minimum' incorporates:
         *  Constant: '<S446>/Calib'
         */
        CITR_ac_DW.UnitDelay_DSTATE_o = KeCITR_Cnt_DbncLockSense;
    }
    else
    {
        /* MinMax: '<S449>/Minimum' incorporates:
         *  Constant: '<S449>/Constant Value'
         *  Sum: '<S449>/Summation'
         *  UnitDelay: '<S449>/Unit Delay'
         */
        CITR_ac_DW.UnitDelay_DSTATE_o = (uint16)(((uint32)
            CITR_ac_DW.UnitDelay_DSTATE_o) + 1U);
    }

    /* End of Switch: '<S449>/Switch1' */

    /* Logic: '<S449>/AND' incorporates:
     *  Constant: '<S446>/Calib'
     *  RelationalOperator: '<S449>/Greater  Than'
     *  UnitDelay: '<S449>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCITR_b_Chr_oc =
        (rtb_TmpSignalConversionAtVeCITR_b_Chr_oc &&
         (CITR_ac_DW.UnitDelay_DSTATE_o >= KeCITR_Cnt_DbncLockSense));

    /* End of Outputs for SubSystem: '<S444>/Turn On Delay Sample3' */

    /* Outputs for Atomic SubSystem: '<S444>/Turn Off Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S448>/EdgeFalling1' */
    /* Logic: '<S450>/AND' incorporates:
     *  Logic: '<S450>/OR1'
     *  UnitDelay: '<S450>/Unit Delay'
     */
    rtb_AND_b = ((!rtb_TmpSignalConversionAtVeCITR_b_Chr_oc) &&
                 (CITR_ac_DW.UnitDelay_DSTATE_h));

    /* Update for UnitDelay: '<S450>/Unit Delay' */
    CITR_ac_DW.UnitDelay_DSTATE_h = rtb_TmpSignalConversionAtVeCITR_b_Chr_oc;

    /* End of Outputs for SubSystem: '<S448>/EdgeFalling1' */

    /* Switch: '<S448>/Switch' incorporates:
     *  Constant: '<S447>/Calib'
     *  Sum: '<S448>/Summation'
     *  UnitDelay: '<S448>/Unit Delay'
     */
    if (rtb_AND_b)
    {
        CITR_ac_DW.UnitDelay_DSTATE_g = KeCITR_Cnt_DbncLockSenseOff;
    }
    else
    {
        /* Sum: '<S448>/Summation' incorporates:
         *  Constant: '<S448>/Constant Value'
         *  UnitDelay: '<S448>/Unit Delay'
         */
        tmp = ((sint32)CITR_ac_DW.UnitDelay_DSTATE_g) - 1;
        if ((((sint32)CITR_ac_DW.UnitDelay_DSTATE_g) - 1) < 0)
        {
            tmp = 0;
        }

        CITR_ac_DW.UnitDelay_DSTATE_g = (uint16)tmp;
    }

    /* End of Switch: '<S448>/Switch' */

    /* Logic: '<S448>/AND' incorporates:
     *  Constant: '<S448>/Constant Value2'
     *  RelationalOperator: '<S448>/Greater  Than'
     *  UnitDelay: '<S448>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCITR_b_Chr_oc =
        (rtb_TmpSignalConversionAtVeCITR_b_Chr_oc || (((sint32)
           CITR_ac_DW.UnitDelay_DSTATE_g) > 0));

    /* End of Outputs for SubSystem: '<S444>/Turn Off Delay Sample' */

    /* Outport: '<Root>/VeCITR_b_ChrgPortDoorSts' incorporates:
     *  Constant: '<S445>/Constant'
     *  Merge: '<Root>/Merge_9'
     *  RelationalOperator: '<S444>/Comparison4'
     *  SignalConversion generated from: '<S1>/ChrgPortDoorSts'
     *  SignalConversion generated from: '<S1>/VeCITR_e_ChrgPortDoor_Sts_read'
     */
    (void)Rte_Write_VeCITR_b_ChrgPortDoorSts_Value(((uint32)
        Rte_IrvRead_CITR_FastTEF_ChrgPortDoorSts_Init_write_IRV()) ==
        CeCITR_e_ChrgPortDoor_Opened);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeCITR_b_Lock_Sense' incorporates:
     *  SignalConversion generated from: '<S1>/LockSense'
     */
    (void)Rte_Write_VeCITR_b_Lock_Sense_Value
        (rtb_TmpSignalConversionAtVeCITR_b_Chr_oc);

    /* Merge: '<Root>/LockSense_IRV_Merge1' incorporates:
     *  SignalConversion generated from: '<S1>/LockSense_write'
     * */
    Rte_IrvWrite_CITR_FastTEF_LockSense_write_IRV
        (rtb_TmpSignalConversionAtVeCITR_b_Chr_oc);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
}

/* Model step function for TID2 */
FUNC(void, CITR_CODE) CITR_MedTED(void) /* Explicit Task: MedTED */
{
    float32 rtb_TmpSignalConversionAtVeCITR_U_ChrgPo;
    TeOBCR_e_ChrgPortLock_Sts Switch1_a;
    TeOBCR_e_ChrgPort_Req tmpRead;
    TeOBCR_e_DoorLockSts tmp;
    TeOBCR_e_PwrLimReq tmp_0;
    TePRXR_e_RRM_VP_Level tmpRead_0;
    boolean rtb_AND_nb;
    boolean rtb_AND_o;
    boolean rtb_TmpSignalConversionAtVeCITR_b_Chrg_a;
    boolean rtb_TmpSignalConversionAtVeCITR_b_Chrg_c;
    boolean rtb_TmpSignalConversionAtVeCITR_b_Chrg_e;
    boolean rtb_TmpSignalConversionAtVeCITR_b_Chrg_o;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/CITR_MedTED'
     */
    /* SignalConversion generated from: '<S2>/VeCITR_b_ChrgPort_BCM_CmdSgnl_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_8_Irv'
     */
    rtb_TmpSignalConversionAtVeCITR_b_Chrg_e =
        Rte_IrvRead_CITR_MedTED_ChrgPort_BCM_Cmd_SgnlRcvd_Init_write_IRV();

    /* SignalConversion generated from: '<S2>/VeCITR_U_ChrgPortLock_StsB_read' incorporates:
     *  Merge: '<Root>/Merge_4_Irv'
     */
    rtb_TmpSignalConversionAtVeCITR_U_ChrgPo =
        Rte_IrvRead_CITR_MedTED_ChrgPortLock_StsB_Init_write_IRV();

    /* SignalConversion generated from: '<S2>/VeCITR_b_ChrgPortLock_StsBFA_read' incorporates:
     *  Merge: '<Root>/Merge_5_Irv'
     */
    rtb_TmpSignalConversionAtVeCITR_b_Chrg_c =
        Rte_IrvRead_CITR_MedTED_ChrgPortLock_StsB_FA_Init_write_IRV();

    /* SignalConversion generated from: '<S2>/VeCITR_b_ChrgPortLock_StsC_read' incorporates:
     *  Merge: '<Root>/Merge_6_Irv'
     */
    rtb_TmpSignalConversionAtVeCITR_b_Chrg_o =
        Rte_IrvRead_CITR_MedTED_ChrgPortLock_StsC_Init_write_IRV();

    /* SignalConversion generated from: '<S2>/VeCITR_b_ChrgPortLock_StsCFA_read' incorporates:
     *  Merge: '<Root>/Merge_7_Irv'
     */
    rtb_TmpSignalConversionAtVeCITR_b_Chrg_a =
        Rte_IrvRead_CITR_MedTED_ChrgPortLock_StsC_FA_Init_write_IRV();

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/ChrgPort'
     */
    /* Outputs for Atomic SubSystem: '<S452>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S463>/EdgeRising' */
    /* Logic: '<S488>/AND' incorporates:
     *  Logic: '<S488>/OR1'
     *  UnitDelay: '<S488>/Unit Delay'
     */
    rtb_AND_nb = (rtb_TmpSignalConversionAtVeCITR_b_Chrg_e &&
                  (!CITR_ac_DW.UnitDelay_DSTATE_f));

    /* Update for UnitDelay: '<S488>/Unit Delay' */
    CITR_ac_DW.UnitDelay_DSTATE_f = rtb_TmpSignalConversionAtVeCITR_b_Chrg_e;

    /* End of Outputs for SubSystem: '<S463>/EdgeRising' */

    /* Switch: '<S463>/Switch1' incorporates:
     *  Constant: '<S458>/Calib'
     *  Constant: '<S463>/Constant Value'
     *  Constant: '<S463>/Constant Value1'
     *  Logic: '<S463>/OR'
     *  Logic: '<S463>/OR1'
     *  MinMax: '<S463>/Minimum'
     *  Sum: '<S463>/Summation'
     *  UnitDelay: '<S463>/Unit Delay'
     */
    if ((!rtb_TmpSignalConversionAtVeCITR_b_Chrg_e) || rtb_AND_nb)
    {
        CITR_ac_DW.UnitDelay_DSTATE = 0U;
    }
    else if (KeCITR_Cnt_Dbnc_BCM_Cmd < ((uint16)(((uint32)
                CITR_ac_DW.UnitDelay_DSTATE) + 1U)))
    {
        /* MinMax: '<S463>/Minimum' incorporates:
         *  Constant: '<S458>/Calib'
         */
        CITR_ac_DW.UnitDelay_DSTATE = KeCITR_Cnt_Dbnc_BCM_Cmd;
    }
    else
    {
        /* MinMax: '<S463>/Minimum' incorporates:
         *  Constant: '<S463>/Constant Value'
         *  Sum: '<S463>/Summation'
         *  UnitDelay: '<S463>/Unit Delay'
         */
        CITR_ac_DW.UnitDelay_DSTATE = (uint16)(((uint32)
            CITR_ac_DW.UnitDelay_DSTATE) + 1U);
    }

    /* End of Switch: '<S463>/Switch1' */
    /* End of Outputs for SubSystem: '<S452>/Turn On Delay Sample1' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeOBCR_e_ChrgPort_Req' */
    (void)Rte_Read_VeOBCR_e_ChrgPort_Req_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/CITR_MedTED'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/ChrgPort'
     */
    /* DataStoreRead: '<S452>/Data Store Read1' */
    VeCITR_b_PortLockBCM_Ne = CITR_ac_DW.NeCITR_b_PortLockBCM_Cmd;

    /* Outputs for Atomic SubSystem: '<S452>/Turn On Delay Sample1' */
    /* Switch: '<S452>/Switch1' incorporates:
     *  Constant: '<S458>/Calib'
     *  Logic: '<S463>/AND'
     *  RelationalOperator: '<S463>/Greater  Than'
     *  UnitDelay: '<S463>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeCITR_b_Chrg_e && (CITR_ac_DW.UnitDelay_DSTATE
         >= KeCITR_Cnt_Dbnc_BCM_Cmd))
    {
        /* Switch: '<S452>/Switch1' incorporates:
         *  Merge: '<Root>/Merge_34_Irv'
         *  SignalConversion generated from: '<S2>/VeCITR_b_ChrgPort_BCM_Cmd_read'
         */
        rtb_TmpSignalConversionAtVeCITR_b_Chrg_e =
            Rte_IrvRead_CITR_MedTED_ChrgPort_BCM_Cmd_Init_write_IRV();
    }
    else
    {
        /* Switch: '<S452>/Switch1' */
        rtb_TmpSignalConversionAtVeCITR_b_Chrg_e = VeCITR_b_PortLockBCM_Ne;
    }

    /* End of Switch: '<S452>/Switch1' */
    /* End of Outputs for SubSystem: '<S452>/Turn On Delay Sample1' */

    /* DataStoreWrite: '<S452>/Data Store Write1' */
    CITR_ac_DW.NeCITR_b_PortLockBCM_Cmd =
        rtb_TmpSignalConversionAtVeCITR_b_Chrg_e;

    /* Logic: '<S454>/Logical3' incorporates:
     *  Constant: '<S471>/Constant'
     *  Inport: '<Root>/VeOBCR_e_ChrgPort_Req'
     *  Logic: '<S454>/Logical8'
     *  RelationalOperator: '<S454>/Comparison5'
     */
    rtb_AND_nb = ((!rtb_TmpSignalConversionAtVeCITR_b_Chrg_e) && (((uint32)
                    tmpRead) == CeOBCR_e_UnlockInlet));

    /* Outputs for Atomic SubSystem: '<S454>/Turn On Delay Sample2' */
    /* Outputs for Atomic SubSystem: '<S474>/EdgeRising' */
    /* Logic: '<S475>/AND' incorporates:
     *  Logic: '<S475>/OR1'
     *  UnitDelay: '<S475>/Unit Delay'
     */
    rtb_AND_o = (rtb_AND_nb && (!CITR_ac_DW.UnitDelay_DSTATE_n));

    /* Update for UnitDelay: '<S475>/Unit Delay' */
    CITR_ac_DW.UnitDelay_DSTATE_n = rtb_AND_nb;

    /* End of Outputs for SubSystem: '<S474>/EdgeRising' */

    /* Switch: '<S474>/Switch1' incorporates:
     *  Constant: '<S472>/Calib'
     *  Constant: '<S474>/Constant Value'
     *  Constant: '<S474>/Constant Value1'
     *  Logic: '<S474>/OR'
     *  Logic: '<S474>/OR1'
     *  MinMax: '<S474>/Minimum'
     *  Sum: '<S474>/Summation'
     *  UnitDelay: '<S474>/Unit Delay'
     */
    if ((!rtb_AND_nb) || rtb_AND_o)
    {
        CITR_ac_DW.UnitDelay_DSTATE_b = 0U;
    }
    else if (KeCITR_Cnt_DbncPortReset < ((uint16)(((uint32)
                CITR_ac_DW.UnitDelay_DSTATE_b) + 1U)))
    {
        /* MinMax: '<S474>/Minimum' incorporates:
         *  Constant: '<S472>/Calib'
         */
        CITR_ac_DW.UnitDelay_DSTATE_b = KeCITR_Cnt_DbncPortReset;
    }
    else
    {
        /* MinMax: '<S474>/Minimum' incorporates:
         *  Constant: '<S474>/Constant Value'
         *  Sum: '<S474>/Summation'
         *  UnitDelay: '<S474>/Unit Delay'
         */
        CITR_ac_DW.UnitDelay_DSTATE_b = (uint16)(((uint32)
            CITR_ac_DW.UnitDelay_DSTATE_b) + 1U);
    }

    /* End of Switch: '<S474>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S454>/Signal Latch On With Reset1' */
    /* Logic: '<S473>/NOT' incorporates:
     *  Constant: '<S472>/Calib'
     *  Logic: '<S454>/Logical6'
     *  Logic: '<S474>/AND'
     *  RelationalOperator: '<S474>/Greater  Than'
     *  UnitDelay: '<S474>/Unit Delay'
     */
    rtb_AND_nb = ((!rtb_AND_nb) || (CITR_ac_DW.UnitDelay_DSTATE_b <
                   KeCITR_Cnt_DbncPortReset));

    /* End of Outputs for SubSystem: '<S454>/Turn On Delay Sample2' */

    /* Logic: '<S473>/OR1' incorporates:
     *  Logic: '<S473>/NOT'
     *  Logic: '<S473>/OR'
     *  Merge: '<Root>/LockSense_IRV_Merge1'
     *  SignalConversion generated from: '<S2>/LockSense_Read'
     *  UnitDelay: '<S473>/Unit Delay'
     */
    VeCITR_b_LockStsA_Test1 = ((Rte_IrvRead_CITR_MedTED_LockSense_write_IRV()) ||
        (rtb_AND_nb && (VeCITR_b_LockStsA_Test1)));

    /* End of Outputs for SubSystem: '<S454>/Signal Latch On With Reset1' */

    /* Logic: '<S454>/Logical4' incorporates:
     *  DataStoreRead: '<S454>/Data Store Read2'
     */
    VeCITR_b_LockStsA_Test2 = ((VeCITR_b_LockStsA_Test1) ||
        (CITR_ac_DW.NeCITR_b_Lock_Status));

    /* Logic: '<S454>/Logical5' */
    VeCITR_b_LockStsA_Test3 = ((VeCITR_b_LockStsA_Test2) && rtb_AND_nb);

    /* DataStoreWrite: '<S454>/Data Store Write2' */
    CITR_ac_DW.NeCITR_b_Lock_Status = VeCITR_b_LockStsA_Test3;

    /* Logic: '<S454>/Logical2' incorporates:
     *  DataStoreRead: '<S454>/Data Store Read3'
     */
    VeCITR_b_LockStatus_A = ((CITR_ac_DW.NeCITR_b_Lock_Status) &&
        rtb_TmpSignalConversionAtVeCITR_b_Chrg_e);

    /* RelationalOperator: '<S453>/Comparison2' incorporates:
     *  Constant: '<S461>/Calib'
     *  Constant: '<S466>/Constant'
     */
    rtb_AND_o = (((uint32)KeCITR_e_ChrgPortLock_Type) ==
                 CeOBCR_e_ChrgPortLock_TypeC);

    /* Outputs for Atomic SubSystem: '<S462>/ClosedInterval' */
    /* Switch: '<S483>/Switch1' incorporates:
     *  Constant: '<S484>/Calib'
     *  Constant: '<S485>/Calib'
     *  Constant: '<S486>/Calib'
     *  Constant: '<S487>/Calib'
     *  Logic: '<S478>/Logical Operator'
     *  Logic: '<S479>/Logical Operator'
     *  RelationalOperator: '<S478>/Relatonal Operator'
     *  RelationalOperator: '<S478>/Relatonal Operator1'
     *  RelationalOperator: '<S479>/Relatonal Operator'
     *  RelationalOperator: '<S479>/Relatonal Operator1'
     *  Switch: '<S483>/Switch2'
     */
    if ((rtb_TmpSignalConversionAtVeCITR_U_ChrgPo >= KeCITR_U_LockStsDtrmn_MnLim)
        && (rtb_TmpSignalConversionAtVeCITR_U_ChrgPo <=
            KeCITR_U_LockStsDtrmn_MxLim))
    {
        /* Switch: '<S483>/Switch1' incorporates:
         *  Constant: '<S480>/Constant'
         */
        Switch1_a = CeOBCR_e_InletLocked;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S462>/ClosedInterval1' */
        if ((rtb_TmpSignalConversionAtVeCITR_U_ChrgPo >=
                KeCITR_U_UnLockStsDtrmn_MnLim) &&
                (rtb_TmpSignalConversionAtVeCITR_U_ChrgPo <=
                 KeCITR_U_UnLockStsDtrmn_MxLim))
        {
            /* Switch: '<S483>/Switch2' incorporates:
             *  Constant: '<S481>/Constant'
             *  Switch: '<S483>/Switch1'
             */
            Switch1_a = CeOBCR_e_InletUnlocked;
        }
        else
        {
            /* Switch: '<S483>/Switch1' incorporates:
             *  Constant: '<S482>/Constant'
             *  Switch: '<S483>/Switch2'
             */
            Switch1_a = CeOBCR_e_DefaultLock_Sts;
        }

        /* End of Outputs for SubSystem: '<S462>/ClosedInterval1' */
    }

    /* End of Switch: '<S483>/Switch1' */
    /* End of Outputs for SubSystem: '<S462>/ClosedInterval' */

    /* Logic: '<S455>/Logical2' incorporates:
     *  Constant: '<S476>/Constant'
     *  Constant: '<S477>/Calib'
     *  Logic: '<S455>/Logical1'
     *  Logic: '<S455>/Logical3'
     *  RelationalOperator: '<S455>/Comparison4'
     */
    VeCITR_b_ChrgPortLockSts_B = ((((KeCITR_b_HBridge_ChrgPortLck) ||
        rtb_TmpSignalConversionAtVeCITR_b_Chrg_e) && (((uint32)Switch1_a) ==
        CeOBCR_e_InletLocked)) && (!rtb_TmpSignalConversionAtVeCITR_b_Chrg_c));

    /* Logic: '<S456>/Logical2' incorporates:
     *  Logic: '<S456>/Logical1'
     */
    VeCITR_b_ChrgPortLockSts_C = (rtb_TmpSignalConversionAtVeCITR_b_Chrg_o &&
        (!rtb_TmpSignalConversionAtVeCITR_b_Chrg_a));

    /* Switch: '<S468>/Switch1' incorporates:
     *  Constant: '<S464>/Constant'
     *  Constant: '<S465>/Constant'
     *  RelationalOperator: '<S453>/Comparison1'
     *  RelationalOperator: '<S453>/Comparison4'
     *  Switch: '<S468>/Switch2'
     *  Switch: '<S469>/Switch1'
     *  Switch: '<S469>/Switch2'
     *  Switch: '<S470>/Switch1'
     *  Switch: '<S470>/Switch2'
     */
    if (((uint32)KeCITR_e_ChrgPortLock_Type) == CeOBCR_e_ChrgPortLock_TypeA)
    {
        /* Switch: '<S468>/Switch1' */
        rtb_AND_nb = VeCITR_b_LockStatus_A;

        /* Switch: '<S469>/Switch1' incorporates:
         *  Constant: '<S452>/FALSE Constant1'
         */
        rtb_TmpSignalConversionAtVeCITR_b_Chrg_c = false;

        /* SignalConversion generated from: '<S2>/ChrgPortSts' incorporates:
         *  Outport: '<Root>/VeCITR_b_ChrgPortSts'
         */
        (void)Rte_Write_VeCITR_b_ChrgPortSts_Value
            (rtb_TmpSignalConversionAtVeCITR_b_Chrg_e);
    }
    else
    {
        if (((uint32)KeCITR_e_ChrgPortLock_Type) == CeOBCR_e_ChrgPortLock_TypeB)
        {
            /* Switch: '<S468>/Switch1' incorporates:
             *  Switch: '<S468>/Switch2'
             */
            rtb_AND_nb = VeCITR_b_ChrgPortLockSts_B;

            /* Switch: '<S470>/Switch2' incorporates:
             *  Constant: '<S467>/Constant'
             *  RelationalOperator: '<S453>/Comparison5'
             */
            rtb_TmpSignalConversionAtVeCITR_b_Chrg_o = (((uint32)Switch1_a) ==
                CeOBCR_e_InletLocked);
        }
        else
        {
            /* Switch: '<S468>/Switch1' incorporates:
             *  Switch: '<S468>/Switch2'
             *  Switch: '<S468>/Switch3'
             */
            rtb_AND_nb = (rtb_AND_o && (VeCITR_b_ChrgPortLockSts_C));

            /* Switch: '<S469>/Switch1' incorporates:
             *  Switch: '<S469>/Switch2'
             *  Switch: '<S469>/Switch3'
             */
            rtb_TmpSignalConversionAtVeCITR_b_Chrg_c = (rtb_AND_o &&
                rtb_TmpSignalConversionAtVeCITR_b_Chrg_a);

            /* Switch: '<S470>/Switch2' incorporates:
             *  Switch: '<S470>/Switch3'
             */
            rtb_TmpSignalConversionAtVeCITR_b_Chrg_o = (rtb_AND_o &&
                rtb_TmpSignalConversionAtVeCITR_b_Chrg_o);
        }

        /* SignalConversion generated from: '<S2>/ChrgPortSts' incorporates:
         *  Outport: '<Root>/VeCITR_b_ChrgPortSts'
         */
        (void)Rte_Write_VeCITR_b_ChrgPortSts_Value
            (rtb_TmpSignalConversionAtVeCITR_b_Chrg_o);
    }

    /* End of Switch: '<S468>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VePRXR_e_RRM_VP_Level' */
    (void)Rte_Read_VePRXR_e_RRM_VP_Level_Value(&tmpRead_0);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/CITR_MedTED'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/ChrgPort'
     */
    /* SignalConversion generated from: '<S452>/HBridge_ChrgPortLck_Cal' incorporates:
     *  Constant: '<S477>/Calib'
     */
    CITR_ac_B.OutportBufferForHBridge_ChrgPortLck_Cal =
        KeCITR_b_HBridge_ChrgPortLck;

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeCITR_b_ChrgPortLockSts' incorporates:
     *  SignalConversion generated from: '<S2>/ChrgPortLockSts'
     */
    (void)Rte_Write_VeCITR_b_ChrgPortLockSts_Value(rtb_AND_nb);

    /* Outport: '<Root>/VeCITR_b_ChrgPortLockSts_FA' incorporates:
     *  SignalConversion generated from: '<S2>/ChrgPortLockSts_FA'
     */
    (void)Rte_Write_VeCITR_b_ChrgPortLockSts_FA_Value
        (rtb_TmpSignalConversionAtVeCITR_b_Chrg_c);

    /* Outport: '<Root>/VeCITR_e_ChrgPortLock_StsB' incorporates:
     *  SignalConversion generated from: '<S2>/ChrgPortLock_StsB'
     *  Switch: '<S483>/Switch1'
     */
    (void)Rte_Write_VeCITR_e_ChrgPortLock_StsB_Value(Switch1_a);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/ChrgPort'
     */
    /* Switch: '<S452>/Switch16' incorporates:
     *  Constant: '<S459>/Calib'
     *  Merge: '<Root>/Merge_1'
     *  Merge: '<Root>/Merge_18'
     *  SignalConversion generated from: '<S2>/VeCITR_e_DoorLockLastElSts_2_read'
     *  SignalConversion generated from: '<S2>/VeCITR_e_DoorLockLastElSts_read'
     */
    if (KeCITR_b_DoorLockLastElSts_P1P4_GC)
    {
        tmp = Rte_IrvRead_CITR_MedTED_DoorLockLastElSts_2_Init_write_IRV();
    }
    else
    {
        tmp = Rte_IrvRead_CITR_MedTED_DoorLockLastElSts_Init_write_IRV();
    }

    /* Outport: '<Root>/VeCITR_e_DoorLockLastElSts' incorporates:
     *  SignalConversion generated from: '<S2>/DoorLockLastElSts'
     *  Switch: '<S452>/Switch16'
     */
    (void)Rte_Write_VeCITR_e_DoorLockLastElSts_Value(tmp);

    /* Switch: '<S452>/Switch2' incorporates:
     *  Constant: '<S459>/Calib'
     *  Merge: '<Root>/Merge_10'
     *  Merge: '<Root>/Merge_19'
     *  SignalConversion generated from: '<S2>/VeCITR_b_DoorLockLastElStsSgnl_Rcvd_read'
     *  SignalConversion generated from: '<S2>/VeCITR_b_DoorLockLastElSts_2Sgnl_Rcvd_read'
     */
    if (KeCITR_b_DoorLockLastElSts_P1P4_GC)
    {
        rtb_TmpSignalConversionAtVeCITR_b_Chrg_c =
            Rte_IrvRead_CITR_MedTED_DoorLockLastElSts_2_SgnlRcvd_Init_write_IRV();
    }
    else
    {
        rtb_TmpSignalConversionAtVeCITR_b_Chrg_c =
            Rte_IrvRead_CITR_MedTED_DoorLockLastElSts_SgnlRcvd_Init_write_IRV();
    }

    /* End of Switch: '<S452>/Switch2' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeCITR_b_DoorLockLastElSts_Rcvd' incorporates:
     *  SignalConversion generated from: '<S2>/DoorLockLastElSts_Rcvd'
     */
    (void)Rte_Write_VeCITR_b_DoorLockLastElSts_Rcvd_Value
        (rtb_TmpSignalConversionAtVeCITR_b_Chrg_c);

    /* Outport: '<Root>/VeCITR_b_HBridge_ChrgPortLck_Cal' incorporates:
     *  SignalConversion generated from: '<S2>/HBridge_ChrgPortLck_Cal'
     */
    (void)Rte_Write_VeCITR_b_HBridge_ChrgPortLck_Cal_Value
        (CITR_ac_B.OutportBufferForHBridge_ChrgPortLck_Cal);

    /* Outport: '<Root>/VeCITR_b_PortLockBCM_Cmd' incorporates:
     *  SignalConversion generated from: '<S2>/PortLockBCM_Cmd'
     */
    (void)Rte_Write_VeCITR_b_PortLockBCM_Cmd_Value
        (rtb_TmpSignalConversionAtVeCITR_b_Chrg_e);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/ChrgPort'
     */
    /* Switch: '<S452>/Switch3' incorporates:
     *  Constant: '<S460>/Calib'
     *  Merge: '<Root>/Merge_11'
     *  Merge: '<Root>/Merge_23'
     *  SignalConversion generated from: '<S2>/VeCITR_e_PowerLimit_Req_2_read'
     *  SignalConversion generated from: '<S2>/VeCITR_e_PowerLimit_Req_read'
     */
    if (KeCITR_b_PwrLimReq_P1P4_GC)
    {
        tmp_0 = Rte_IrvRead_CITR_MedTED_PwrLimReq_2_Init_write_IRV();
    }
    else
    {
        tmp_0 = Rte_IrvRead_CITR_MedTED_PwrLimReq_Init_write_IRV();
    }

    /* Outport: '<Root>/VeCITR_e_PwrLimReq' incorporates:
     *  SignalConversion generated from: '<S2>/PowerLimit_Req'
     *  Switch: '<S452>/Switch3'
     */
    (void)Rte_Write_VeCITR_e_PwrLimReq_Value(tmp_0);

    /* Switch: '<S452>/Switch4' incorporates:
     *  Constant: '<S460>/Calib'
     *  Merge: '<Root>/Merge_25'
     *  Merge: '<Root>/Merge_31'
     *  SignalConversion generated from: '<S2>/VeCITR_b_PowerLimitReqFA_read'
     *  SignalConversion generated from: '<S2>/VeCITR_b_PowerLimitReq_2FA_read'
     */
    if (KeCITR_b_PwrLimReq_P1P4_GC)
    {
        rtb_TmpSignalConversionAtVeCITR_b_Chrg_c =
            Rte_IrvRead_CITR_MedTED_PwrLimReq_FA_2_Init_write_IRV();
    }
    else
    {
        rtb_TmpSignalConversionAtVeCITR_b_Chrg_c =
            Rte_IrvRead_CITR_MedTED_PwrLimReq_FA_Init_write_IRV();
    }

    /* End of Switch: '<S452>/Switch4' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeCITR_b_PwrLimReq_FA' incorporates:
     *  SignalConversion generated from: '<S2>/PwrLimReq_FA'
     */
    (void)Rte_Write_VeCITR_b_PwrLimReq_FA_Value
        (rtb_TmpSignalConversionAtVeCITR_b_Chrg_c);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/ChrgPort'
     */
    /* Switch: '<S452>/Switch5' incorporates:
     *  Constant: '<S460>/Calib'
     *  Merge: '<Root>/Merge_24'
     *  Merge: '<Root>/Merge_32'
     *  SignalConversion generated from: '<S2>/VeCITR_b_PowerLimitReqSgnl_2Rcvd_read'
     *  SignalConversion generated from: '<S2>/VeCITR_b_PowerLimitReqSgnl_Rcvd_read'
     */
    if (KeCITR_b_PwrLimReq_P1P4_GC)
    {
        rtb_TmpSignalConversionAtVeCITR_b_Chrg_c =
            Rte_IrvRead_CITR_MedTED_PwrLimReq_SgnlRcvd_2_Init_write_IRV();
    }
    else
    {
        rtb_TmpSignalConversionAtVeCITR_b_Chrg_c =
            Rte_IrvRead_CITR_MedTED_PwrLimReq_SgnlRcvd_Init_write_IRV();
    }

    /* End of Switch: '<S452>/Switch5' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeCITR_b_PwrLimReq_SgnlRcvd' incorporates:
     *  SignalConversion generated from: '<S2>/PwrLimReq_SgnlRcvd'
     */
    (void)Rte_Write_VeCITR_b_PwrLimReq_SgnlRcvd_Value
        (rtb_TmpSignalConversionAtVeCITR_b_Chrg_c);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/ChrgPort'
     */
    /* Outport: '<Root>/VeCITR_e_RRM_VP_Level' incorporates:
     *  Constant: '<S457>/Calib'
     *  DataTypeConversion: '<S452>/Data Type Conversion1'
     *  Inport: '<Root>/VePRXR_e_RRM_VP_Level'
     *  Selector: '<S452>/Selector'
     *  SignalConversion generated from: '<S2>/RRM_VP_Level'
     */
    (void)Rte_Write_VeCITR_e_RRM_VP_Level_Value(KaCITR_e_RRM_VP_Level[(tmpRead_0)]);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
}

/* Output function */
FUNC(void, CITR_CODE) DIDWrite_RWDB604_DCChrg_TestSts(void)
{
    TeOBCR_e_DCChrg_TestSts tmpRead;

    /* Inport: '<Root>/VeDCAB_e_RWDB604_DCChrg_TestSts_DidWrite' */
    (void)Rte_Read_VeDCAB_e_RWDB604_DCChrg_TestSts_DidWrite_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/DIDWrite_RWDB604_DCChrg_TestSts' incorporates:
     *  SubSystem: '<Root>/Poke_DID_RWDB604_DCChrg_TestSts_DidWrite'
     */
    /* Outport: '<Root>/VeCITR_e_DCChrg_TestSts' incorporates:
     *  Inport: '<Root>/VeDCAB_e_RWDB604_DCChrg_TestSts_DidWrite'
     *  SignalConversion generated from: '<S425>/VeDCAB_e_RWDB604_DCChrg_TestSts_DidWrite'
     */
    (void)Rte_Write_VeCITR_e_DCChrg_TestSts_Value(tmpRead);

    /* Switch: '<S425>/Switch1' incorporates:
     *  Constant: '<S425>/Constant'
     *  Constant: '<S425>/Constant1'
     *  Constant: '<S425>/Constant2'
     *  RelationalOperator: '<S425>/Relational Operator'
     *  Sum: '<S425>/Sum'
     *  UnitDelay: '<S425>/Unit Delay'
     */
    if (((sint32)CITR_ac_DW.UnitDelay_DSTATE_b2) > 5)
    {
        CITR_ac_DW.UnitDelay_DSTATE_b2 = 0U;
    }
    else
    {
        CITR_ac_DW.UnitDelay_DSTATE_b2 = (uint8)(((uint32)
            CITR_ac_DW.UnitDelay_DSTATE_b2) + 1U);
    }

    /* End of Switch: '<S425>/Switch1' */

    /* Outport: '<Root>/VeCITR_Cnt_DCEOL_SgnlRcvd' incorporates:
     *  SignalConversion generated from: '<S425>/VeCITR_Cnt_DCEOL_SgnlRcvd'
     *  UnitDelay: '<S425>/Unit Delay'
     */
    (void)Rte_Write_VeCITR_Cnt_DCEOL_SgnlRcvd_Value
        (CITR_ac_DW.UnitDelay_DSTATE_b2);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/DIDWrite_RWDB604_DCChrg_TestSts' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_I_PP2CurrentDrawSens1(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_I_PP2CurrentDrawSens1' */
    /* Outport: '<Root>/VeCITR_b_PP2CurrentDrawSens1FA' incorporates:
     *  Chart: '<S5>/FsftCITR_I_PP2CurrentDrawSens1Chrt'
     *  SignalConversion generated from: '<S5>/VeCITR_b_PP2CurrentDrawSens1FA'
     */
    /* Gateway: FsftCITR_I_PP2CurrentDrawSens1/FsftCITR_I_PP2CurrentDrawSens1Chrt */
    /* During: FsftCITR_I_PP2CurrentDrawSens1/FsftCITR_I_PP2CurrentDrawSens1Chrt */
    /* Entry Internal: FsftCITR_I_PP2CurrentDrawSens1/FsftCITR_I_PP2CurrentDrawSens1Chrt */
    /* Transition: '<S599>:2' */
    (void)Rte_Write_VeCITR_b_PP2CurrentDrawSens1FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_I_PP2CurrentDrawSens1' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_I_PP2CurrentDrawSens2(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_I_PP2CurrentDrawSens2' */
    /* Outport: '<Root>/VeCITR_b_PP2CurrentDrawSens2FA' incorporates:
     *  Chart: '<S6>/FsftCITR_I_PP2CurrentDrawSens2Chrt'
     *  SignalConversion generated from: '<S6>/VeCITR_b_PP2CurrentDrawSens2FA'
     */
    /* Gateway: FsftCITR_I_PP2CurrentDrawSens2/FsftCITR_I_PP2CurrentDrawSens2Chrt */
    /* During: FsftCITR_I_PP2CurrentDrawSens2/FsftCITR_I_PP2CurrentDrawSens2Chrt */
    /* Entry Internal: FsftCITR_I_PP2CurrentDrawSens2/FsftCITR_I_PP2CurrentDrawSens2Chrt */
    /* Transition: '<S600>:2' */
    (void)Rte_Write_VeCITR_b_PP2CurrentDrawSens2FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_I_PP2CurrentDrawSens2' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_I_PPCurrentDrawSens1(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_I_PPCurrentDrawSens1' */
    /* Outport: '<Root>/VeCITR_b_PPCurrentDrawSens1FA' incorporates:
     *  Chart: '<S7>/FsftCITR_I_PPCurrentDrawSens1Chrt'
     *  SignalConversion generated from: '<S7>/VeCITR_b_PPCurrentDrawSens1FA'
     */
    /* Gateway: FsftCITR_I_PPCurrentDrawSens1/FsftCITR_I_PPCurrentDrawSens1Chrt */
    /* During: FsftCITR_I_PPCurrentDrawSens1/FsftCITR_I_PPCurrentDrawSens1Chrt */
    /* Entry Internal: FsftCITR_I_PPCurrentDrawSens1/FsftCITR_I_PPCurrentDrawSens1Chrt */
    /* Transition: '<S601>:2' */
    (void)Rte_Write_VeCITR_b_PPCurrentDrawSens1FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_I_PPCurrentDrawSens1' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_I_PPCurrentDrawSens2(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_I_PPCurrentDrawSens2' */
    /* Outport: '<Root>/VeCITR_b_PPCurrentDrawSens2FA' incorporates:
     *  Chart: '<S8>/FsftCITR_I_PPCurrentDrawSens2Chrt'
     *  SignalConversion generated from: '<S8>/VeCITR_b_PPCurrentDrawSens2FA'
     */
    /* Gateway: FsftCITR_I_PPCurrentDrawSens2/FsftCITR_I_PPCurrentDrawSens2Chrt */
    /* During: FsftCITR_I_PPCurrentDrawSens2/FsftCITR_I_PPCurrentDrawSens2Chrt */
    /* Entry Internal: FsftCITR_I_PPCurrentDrawSens2/FsftCITR_I_PPCurrentDrawSens2Chrt */
    /* Transition: '<S602>:2' */
    (void)Rte_Write_VeCITR_b_PPCurrentDrawSens2FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_I_PPCurrentDrawSens2' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_P_ChargingDestinationPwr(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_P_ChargingDestinationPwr' */
    /* Outport: '<Root>/VeCITR_b_ChargingDestinationPwr_FA' incorporates:
     *  Chart: '<S9>/FsftCITR_P_ChargingDestinationPwrChrt'
     *  SignalConversion generated from: '<S9>/VeCITR_b_ChargingDestinationPwrFA'
     */
    /* Gateway: FsftCITR_P_ChargingDestinationPwr/FsftCITR_P_ChargingDestinationPwrChrt */
    /* During: FsftCITR_P_ChargingDestinationPwr/FsftCITR_P_ChargingDestinationPwrChrt */
    /* Entry Internal: FsftCITR_P_ChargingDestinationPwr/FsftCITR_P_ChargingDestinationPwrChrt */
    /* Transition: '<S603>:2' */
    (void)Rte_Write_VeCITR_b_ChargingDestinationPwr_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_P_ChargingDestinationPwr' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_P_PP2RatedPower(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_P_PP2RatedPower' */
    /* Outport: '<Root>/VeCITR_b_PP2RatedPowerFA' incorporates:
     *  Chart: '<S10>/FsftCITR_P_PP2RatedPowerChrt'
     *  SignalConversion generated from: '<S10>/VeCITR_b_PP2RatedPowerFA'
     */
    /* Gateway: FsftCITR_P_PP2RatedPower/FsftCITR_P_PP2RatedPowerChrt */
    /* During: FsftCITR_P_PP2RatedPower/FsftCITR_P_PP2RatedPowerChrt */
    /* Entry Internal: FsftCITR_P_PP2RatedPower/FsftCITR_P_PP2RatedPowerChrt */
    /* Transition: '<S604>:2' */
    (void)Rte_Write_VeCITR_b_PP2RatedPowerFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_P_PP2RatedPower' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_P_PPRatedPower(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_P_PPRatedPower' */
    /* Outport: '<Root>/VeCITR_b_PPRatedPowerFA' incorporates:
     *  Chart: '<S11>/FsftCITR_P_PPRatedPowerChrt'
     *  SignalConversion generated from: '<S11>/VeCITR_b_PPRatedPowerFA'
     */
    /* Gateway: FsftCITR_P_PPRatedPower/FsftCITR_P_PPRatedPowerChrt */
    /* During: FsftCITR_P_PPRatedPower/FsftCITR_P_PPRatedPowerChrt */
    /* Entry Internal: FsftCITR_P_PPRatedPower/FsftCITR_P_PPRatedPowerChrt */
    /* Transition: '<S605>:2' */
    (void)Rte_Write_VeCITR_b_PPRatedPowerFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_P_PPRatedPower' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_Pct_HU_ExtChrgTarget1(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_Pct_HU_ExtChrgTarget1' */
    /* Outport: '<Root>/VeCITR_b_HU_ExtChrgTarget1FA' incorporates:
     *  Chart: '<S12>/FsftCITR_Pct_HU_ExtChrgTarget1Chrt'
     *  SignalConversion generated from: '<S12>/VeCITR_b_HU_ExtChrgTarget1FA'
     */
    /* Gateway: FsftCITR_Pct_HU_ExtChrgTarget1/FsftCITR_Pct_HU_ExtChrgTarget1Chrt */
    /* During: FsftCITR_Pct_HU_ExtChrgTarget1/FsftCITR_Pct_HU_ExtChrgTarget1Chrt */
    /* Entry Internal: FsftCITR_Pct_HU_ExtChrgTarget1/FsftCITR_Pct_HU_ExtChrgTarget1Chrt */
    /* Transition: '<S606>:2' */
    (void)Rte_Write_VeCITR_b_HU_ExtChrgTarget1FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_Pct_HU_ExtChrgTarget1' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_Pct_HU_ExtChrgTarget2(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_Pct_HU_ExtChrgTarget2' */
    /* Chart: '<S13>/FsftCITR_Pct_HU_ExtChrgTarget2Chrt' */
    CITR__FsftCITR_Pct_HU_ImmChrgTarget2Chrt
        (&CITR_ac_B.sf_FsftCITR_Pct_HU_ExtChrgTarget2Chrt);

    /* Outport: '<Root>/VeCITR_b_HU_ExtChrgTarget2FA' incorporates:
     *  SignalConversion generated from: '<S13>/VeCITR_b_HU_ExtChrgTarget2FA'
     */
    (void)Rte_Write_VeCITR_b_HU_ExtChrgTarget2FA_Value
        (CITR_ac_B.sf_FsftCITR_Pct_HU_ExtChrgTarget2Chrt.LeCITR_b_HU_ExtChrgTarget2FA_out);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_Pct_HU_ExtChrgTarget2' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_Pct_HU_ImmChrgTarget1(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_Pct_HU_ImmChrgTarget1' */
    /* Chart: '<S14>/FsftCITR_Pct_HU_ImmChrgTarget1Chrt' */
    CITR__FsftCITR_Pct_HU_ImmChrgTarget2Chrt
        (&CITR_ac_B.sf_FsftCITR_Pct_HU_ImmChrgTarget1Chrt);

    /* Outport: '<Root>/VeCITR_b_HU_ImmChrgTarget1FA' incorporates:
     *  SignalConversion generated from: '<S14>/VeCITR_b_HU_ImmChrgTarget1FA'
     */
    (void)Rte_Write_VeCITR_b_HU_ImmChrgTarget1FA_Value
        (CITR_ac_B.sf_FsftCITR_Pct_HU_ImmChrgTarget1Chrt.LeCITR_b_HU_ExtChrgTarget2FA_out);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_Pct_HU_ImmChrgTarget1' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_Pct_HU_ImmChrgTarget2(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_Pct_HU_ImmChrgTarget2' */
    /* Chart: '<S15>/FsftCITR_Pct_HU_ImmChrgTarget2Chrt' */
    CITR__FsftCITR_Pct_HU_ImmChrgTarget2Chrt
        (&CITR_ac_B.sf_FsftCITR_Pct_HU_ImmChrgTarget2Chrt);

    /* Outport: '<Root>/VeCITR_b_HU_ImmChrgTarget2FA' incorporates:
     *  SignalConversion generated from: '<S15>/VeCITR_b_HU_ImmChrgTarget2FA'
     */
    (void)Rte_Write_VeCITR_b_HU_ImmChrgTarget2FA_Value
        (CITR_ac_B.sf_FsftCITR_Pct_HU_ImmChrgTarget2Chrt.LeCITR_b_HU_ExtChrgTarget2FA_out);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_Pct_HU_ImmChrgTarget2' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_Pct_TBM_ExtChrgTarget1(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_Pct_TBM_ExtChrgTarget1' */
    /* Outport: '<Root>/VeCITR_b_TBM_ExtChrgTarget1FA' incorporates:
     *  Chart: '<S16>/FsftCITR_Pct_TBM_ExtChrgTarget1Chrt'
     *  SignalConversion generated from: '<S16>/VeCITR_b_TBM_ExtChrgTarget1FA'
     */
    /* Gateway: FsftCITR_Pct_TBM_ExtChrgTarget1/FsftCITR_Pct_TBM_ExtChrgTarget1Chrt */
    /* During: FsftCITR_Pct_TBM_ExtChrgTarget1/FsftCITR_Pct_TBM_ExtChrgTarget1Chrt */
    /* Entry Internal: FsftCITR_Pct_TBM_ExtChrgTarget1/FsftCITR_Pct_TBM_ExtChrgTarget1Chrt */
    /* Transition: '<S610>:2' */
    (void)Rte_Write_VeCITR_b_TBM_ExtChrgTarget1FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_Pct_TBM_ExtChrgTarget1' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_Pct_TBM_ExtChrgTarget2(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_Pct_TBM_ExtChrgTarget2' */
    /* Chart: '<S17>/FsftCITR_Pct_TBM_ExtChrgTarget2Chrt' */
    CITR_FsftCITR_Pct_TBM_ExtChrgTarget2Chrt
        (&CITR_ac_B.sf_FsftCITR_Pct_TBM_ExtChrgTarget2Chrt);

    /* Outport: '<Root>/VeCITR_b_TBM_ExtChrgTarget2FA' incorporates:
     *  SignalConversion generated from: '<S17>/VeCITR_b_TBM_ExtChrgTarget2FA'
     */
    (void)Rte_Write_VeCITR_b_TBM_ExtChrgTarget2FA_Value
        (CITR_ac_B.sf_FsftCITR_Pct_TBM_ExtChrgTarget2Chrt.LeCITR_b_TBM_ExtChrgTarget2FA_out);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_Pct_TBM_ExtChrgTarget2' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_Pct_TBM_ImmChrgTarget1(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_Pct_TBM_ImmChrgTarget1' */
    /* Chart: '<S18>/FsftCITR_Pct_TBM_ImmChrgTarget1Chrt' */
    CITR_FsftCITR_Pct_TBM_ExtChrgTarget2Chrt
        (&CITR_ac_B.sf_FsftCITR_Pct_TBM_ImmChrgTarget1Chrt);

    /* Outport: '<Root>/VeCITR_b_TBM_ImmChrgTarget1FA' incorporates:
     *  SignalConversion generated from: '<S18>/VeCITR_b_TBM_ImmChrgTarget1FA'
     */
    (void)Rte_Write_VeCITR_b_TBM_ImmChrgTarget1FA_Value
        (CITR_ac_B.sf_FsftCITR_Pct_TBM_ImmChrgTarget1Chrt.LeCITR_b_TBM_ExtChrgTarget2FA_out);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_Pct_TBM_ImmChrgTarget1' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_Pct_TBM_ImmChrgTarget2(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_Pct_TBM_ImmChrgTarget2' */
    /* Outport: '<Root>/VeCITR_b_TBM_ImmChrgTarget2FA' incorporates:
     *  Chart: '<S19>/FsftCITR_Pct_TBM_ImmChrgTarget2Chrt'
     *  SignalConversion generated from: '<S19>/VeCITR_b_TBM_ImmChrgTarget2FA'
     */
    /* Gateway: FsftCITR_Pct_TBM_ImmChrgTarget2/FsftCITR_Pct_TBM_ImmChrgTarget2Chrt */
    /* During: FsftCITR_Pct_TBM_ImmChrgTarget2/FsftCITR_Pct_TBM_ImmChrgTarget2Chrt */
    /* Entry Internal: FsftCITR_Pct_TBM_ImmChrgTarget2/FsftCITR_Pct_TBM_ImmChrgTarget2Chrt */
    /* Transition: '<S613>:2' */
    (void)Rte_Write_VeCITR_b_TBM_ImmChrgTarget2FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_Pct_TBM_ImmChrgTarget2' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_Pct_V2HRsrvBatt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_Pct_V2HRsrvBatt' */
    /* Outport: '<Root>/VeCITR_b_V2HRsrvBattFA' incorporates:
     *  Chart: '<S20>/FsftCITR_Pct_V2HRsrvBattChrt'
     *  SignalConversion generated from: '<S20>/VeCITR_b_V2HRsrvBattFA'
     */
    /* Gateway: FsftCITR_Pct_V2HRsrvBatt/FsftCITR_Pct_V2HRsrvBattChrt */
    /* During: FsftCITR_Pct_V2HRsrvBatt/FsftCITR_Pct_V2HRsrvBattChrt */
    /* Entry Internal: FsftCITR_Pct_V2HRsrvBatt/FsftCITR_Pct_V2HRsrvBattChrt */
    /* Transition: '<S614>:2' */
    (void)Rte_Write_VeCITR_b_V2HRsrvBattFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_Pct_V2HRsrvBatt' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_Pct_V2LRsrvBatt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_Pct_V2LRsrvBatt' */
    /* Outport: '<Root>/VeCITR_b_V2LRsrvBattFA' incorporates:
     *  Chart: '<S21>/FsftCITR_Pct_V2LRsrvBattChrt'
     *  SignalConversion generated from: '<S21>/VeCITR_b_V2LRsrvBattFA'
     */
    /* Gateway: FsftCITR_Pct_V2LRsrvBatt/FsftCITR_Pct_V2LRsrvBattChrt */
    /* During: FsftCITR_Pct_V2LRsrvBatt/FsftCITR_Pct_V2LRsrvBattChrt */
    /* Entry Internal: FsftCITR_Pct_V2LRsrvBatt/FsftCITR_Pct_V2LRsrvBattChrt */
    /* Transition: '<S615>:2' */
    (void)Rte_Write_VeCITR_b_V2LRsrvBattFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_Pct_V2LRsrvBatt' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_Pct_V2VRsrvBatt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_Pct_V2VRsrvBatt' */
    /* Outport: '<Root>/VeCITR_b_V2VRsrvBattFA' incorporates:
     *  Chart: '<S22>/FsftCITR_Pct_V2VRsrvBattChrt'
     *  SignalConversion generated from: '<S22>/VeCITR_b_V2VRsrvBattFA'
     */
    /* Gateway: FsftCITR_Pct_V2VRsrvBatt/FsftCITR_Pct_V2VRsrvBattChrt */
    /* During: FsftCITR_Pct_V2VRsrvBatt/FsftCITR_Pct_V2VRsrvBattChrt */
    /* Entry Internal: FsftCITR_Pct_V2VRsrvBatt/FsftCITR_Pct_V2VRsrvBattChrt */
    /* Transition: '<S616>:2' */
    (void)Rte_Write_VeCITR_b_V2VRsrvBattFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_Pct_V2VRsrvBatt' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_ChrgPortDoor_Sts(void)
{
    /* Gateway: FsftCITR_b_ChrgPortDoor_Sts/FsftCITR_b_ChrgPortDoor_StsChrt */
    /* During: FsftCITR_b_ChrgPortDoor_Sts/FsftCITR_b_ChrgPortDoor_StsChrt */
    /* Entry Internal: FsftCITR_b_ChrgPortDoor_Sts/FsftCITR_b_ChrgPortDoor_StsChrt */
    /* Transition: '<S617>:2' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_ChrgPortLock_StsC(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_ChrgPortLock_StsC' */
    /* Outport: '<Root>/VeCITR_b_ChrgPortLock_StsC_FA' incorporates:
     *  Chart: '<S24>/FsftCITR_b_ChrgPortLock_StsCChrt'
     *  SignalConversion generated from: '<S24>/VeCITR_b_ChrgPortLock_StsCFA'
     */
    /* Gateway: FsftCITR_b_ChrgPortLock_StsC/FsftCITR_b_ChrgPortLock_StsCChrt */
    /* During: FsftCITR_b_ChrgPortLock_StsC/FsftCITR_b_ChrgPortLock_StsCChrt */
    /* Entry Internal: FsftCITR_b_ChrgPortLock_StsC/FsftCITR_b_ChrgPortLock_StsCChrt */
    /* Transition: '<S618>:2' */
    (void)Rte_Write_VeCITR_b_ChrgPortLock_StsC_FA_Value(true);

    /* Merge: '<Root>/Merge_7_Irv' incorporates:
     *  Chart: '<S24>/FsftCITR_b_ChrgPortLock_StsCChrt'
     *  SignalConversion generated from: '<S24>/VeCITR_b_ChrgPortLock_StsCFA_write'
     */
    Rte_IrvWrite_FsftCITR_b_ChrgPortLock_StsC_ChrgPortLock_StsC_FA_Init_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_ChrgPortLock_StsC' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_ChrgPort_BCM_Cmd(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_ChrgPort_BCM_Cmd' */
    /* Outport: '<Root>/VeCITR_b_ChrgPort_BCM_Cmd_Rcvd' incorporates:
     *  Chart: '<S25>/FsftCITR_b_ChrgPort_BCM_CmdChrt'
     *  SignalConversion generated from: '<S25>/VeCITR_b_ChrgPort_BCM_CmdSgnl_Rcvd'
     */
    /* Gateway: FsftCITR_b_ChrgPort_BCM_Cmd/FsftCITR_b_ChrgPort_BCM_CmdChrt */
    /* During: FsftCITR_b_ChrgPort_BCM_Cmd/FsftCITR_b_ChrgPort_BCM_CmdChrt */
    /* Entry Internal: FsftCITR_b_ChrgPort_BCM_Cmd/FsftCITR_b_ChrgPort_BCM_CmdChrt */
    /* Transition: '<S619>:2' */
    (void)Rte_Write_VeCITR_b_ChrgPort_BCM_Cmd_Rcvd_Value(false);

    /* Merge: '<Root>/Merge_8_Irv' incorporates:
     *  Chart: '<S25>/FsftCITR_b_ChrgPort_BCM_CmdChrt'
     *  SignalConversion generated from: '<S25>/VeCITR_b_ChrgPort_BCM_CmdSgnl_Rcvd_write'
     */
    Rte_IrvWrite_FsftCITR_b_ChrgPort_BCM_Cmd_ChrgPort_BCM_Cmd_SgnlRcvd_Init_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_ChrgPort_BCM_Cmd' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_CoopCh_VehLocation(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_CoopCh_VehLocation' */
    /* Chart: '<S26>/FsftCITR_b_CoopCh_VehLocationChrt' */
    CITR__FsftCITR_Pct_HU_ImmChrgTarget2Chrt
        (&CITR_ac_B.sf_FsftCITR_b_CoopCh_VehLocationChrt);

    /* Outport: '<Root>/VeCITR_b_CoopCh_VehLocationFA' incorporates:
     *  SignalConversion generated from: '<S26>/VeCITR_b_CoopCh_VehLocationFA'
     */
    (void)Rte_Write_VeCITR_b_CoopCh_VehLocationFA_Value
        (CITR_ac_B.sf_FsftCITR_b_CoopCh_VehLocationChrt.LeCITR_b_HU_ExtChrgTarget2FA_out);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_CoopCh_VehLocation' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_DC_PwrLev(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_DC_PwrLev' */
    /* Outport: '<Root>/VeCITR_b_DC_PwrLev_FA' incorporates:
     *  Chart: '<S27>/FsftCITR_b_DC_PwrLevChrt'
     *  SignalConversion generated from: '<S27>/VeCITR_b_DC_PwrLev_FA'
     */
    /* Gateway: FsftCITR_b_DC_PwrLev/FsftCITR_b_DC_PwrLevChrt */
    /* During: FsftCITR_b_DC_PwrLev/FsftCITR_b_DC_PwrLevChrt */
    /* Entry Internal: FsftCITR_b_DC_PwrLev/FsftCITR_b_DC_PwrLevChrt */
    /* Transition: '<S621>:2' */
    (void)Rte_Write_VeCITR_b_DC_PwrLev_FA_Value(true);

    /* Outport: '<Root>/VeCITR_b_DC_PwrLev_SgnlRcvd' incorporates:
     *  Chart: '<S27>/FsftCITR_b_DC_PwrLevChrt'
     *  SignalConversion generated from: '<S27>/VeCITR_b_DC_PwrLev_SgnlRcvd'
     */
    (void)Rte_Write_VeCITR_b_DC_PwrLev_SgnlRcvd_Value(false);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_DC_PwrLev' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_DateTmDay(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_DateTmDay' */
    /* Outport: '<Root>/VeCITR_b_DateTmDay_FA' incorporates:
     *  Chart: '<S28>/FsftCITR_b_DateTmDayChrt'
     *  SignalConversion generated from: '<S28>/VeCITR_b_DateTmDayFA'
     */
    /* Gateway: FsftCITR_b_DateTmDay/FsftCITR_b_DateTmDayChrt */
    /* During: FsftCITR_b_DateTmDay/FsftCITR_b_DateTmDayChrt */
    /* Entry Internal: FsftCITR_b_DateTmDay/FsftCITR_b_DateTmDayChrt */
    /* Transition: '<S622>:2' */
    (void)Rte_Write_VeCITR_b_DateTmDay_FA_Value(true);

    /* Outport: '<Root>/VeCITR_b_DateTmDay_SgnlRcvd' incorporates:
     *  Chart: '<S28>/FsftCITR_b_DateTmDayChrt'
     *  SignalConversion generated from: '<S28>/VeCITR_b_DateTmDaySgnl_Rcvd'
     */
    (void)Rte_Write_VeCITR_b_DateTmDay_SgnlRcvd_Value(false);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_DateTmDay' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_DateTmFormat(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_DateTmFormat' */
    /* Outport: '<Root>/VeCITR_b_DateTmFormat_FA' incorporates:
     *  Chart: '<S29>/FsftCITR_b_DateTmFormatChrt'
     *  SignalConversion generated from: '<S29>/VeCITR_b_DateTmFormatFA'
     */
    /* Gateway: FsftCITR_b_DateTmFormat/FsftCITR_b_DateTmFormatChrt */
    /* During: FsftCITR_b_DateTmFormat/FsftCITR_b_DateTmFormatChrt */
    /* Entry Internal: FsftCITR_b_DateTmFormat/FsftCITR_b_DateTmFormatChrt */
    /* Transition: '<S623>:2' */
    (void)Rte_Write_VeCITR_b_DateTmFormat_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_DateTmFormat' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_Date_Day1(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_Date_Day1' */
    /* Outport: '<Root>/VeCITR_b_Date_Day1_FA' incorporates:
     *  Chart: '<S30>/FsftCITR_b_Date_Day1Chrt'
     *  SignalConversion generated from: '<S30>/VeCITR_b_Date_Day1FA'
     */
    /* Gateway: FsftCITR_b_Date_Day1/FsftCITR_b_Date_Day1Chrt */
    /* During: FsftCITR_b_Date_Day1/FsftCITR_b_Date_Day1Chrt */
    /* Entry Internal: FsftCITR_b_Date_Day1/FsftCITR_b_Date_Day1Chrt */
    /* Transition: '<S624>:2' */
    (void)Rte_Write_VeCITR_b_Date_Day1_FA_Value(true);

    /* Outport: '<Root>/VeCITR_b_Date_Day1_SgnlRcvd' incorporates:
     *  Chart: '<S30>/FsftCITR_b_Date_Day1Chrt'
     *  SignalConversion generated from: '<S30>/VeCITR_b_Date_Day1Sgnl_Rcvd'
     */
    (void)Rte_Write_VeCITR_b_Date_Day1_SgnlRcvd_Value(false);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_Date_Day1' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_HU_Sch1_CabTemp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_HU_Sch1_CabTemp' */
    /* Outport: '<Root>/VeCITR_b_HU_Sch1_TemperatureFA' incorporates:
     *  Chart: '<S31>/FsftCITR_b_HU_Sch1_CabTempChrt'
     *  SignalConversion generated from: '<S31>/VeCITR_b_HU_Sch1_CabTempFA'
     */
    /* Gateway: FsftCITR_b_HU_Sch1_CabTemp/FsftCITR_b_HU_Sch1_CabTempChrt */
    /* During: FsftCITR_b_HU_Sch1_CabTemp/FsftCITR_b_HU_Sch1_CabTempChrt */
    /* Entry Internal: FsftCITR_b_HU_Sch1_CabTemp/FsftCITR_b_HU_Sch1_CabTempChrt */
    /* Transition: '<S625>:2' */
    (void)Rte_Write_VeCITR_b_HU_Sch1_TemperatureFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_HU_Sch1_CabTemp' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_HU_Sch1_Day(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_HU_Sch1_Day' */
    /* Outport: '<Root>/VeCITR_b_HU_Sch1_Day_FA' incorporates:
     *  Chart: '<S32>/FsftCITR_b_HU_Sch1_DayChrt'
     *  SignalConversion generated from: '<S32>/VeCITR_b_HU_Sch1_DayFA'
     */
    /* Gateway: FsftCITR_b_HU_Sch1_Day/FsftCITR_b_HU_Sch1_DayChrt */
    /* During: FsftCITR_b_HU_Sch1_Day/FsftCITR_b_HU_Sch1_DayChrt */
    /* Entry Internal: FsftCITR_b_HU_Sch1_Day/FsftCITR_b_HU_Sch1_DayChrt */
    /* Transition: '<S626>:2' */
    (void)Rte_Write_VeCITR_b_HU_Sch1_Day_FA_Value(true);

    /* Outport: '<Root>/VeCITR_b_HU_Sch1_Day_SgnlRcvd' incorporates:
     *  Chart: '<S32>/FsftCITR_b_HU_Sch1_DayChrt'
     *  SignalConversion generated from: '<S32>/VeCITR_b_HU_Sch1_DaySgnl_Rcvd'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch1_Day_SgnlRcvd_Value(false);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_HU_Sch1_Day' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_HU_Sch1_End_Time_Hr(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_HU_Sch1_End_Time_Hr' */
    /* Outport: '<Root>/VeCITR_b_HU_Sch1_End_Time_HrFA' incorporates:
     *  Chart: '<S33>/FsftCITR_b_HU_Sch1_End_Time_HrChrt'
     *  SignalConversion generated from: '<S33>/VeCITR_b_HU_Sch1_End_Time_HrFA'
     */
    /* Gateway: FsftCITR_b_HU_Sch1_End_Time_Hr/FsftCITR_b_HU_Sch1_End_Time_HrChrt */
    /* During: FsftCITR_b_HU_Sch1_End_Time_Hr/FsftCITR_b_HU_Sch1_End_Time_HrChrt */
    /* Entry Internal: FsftCITR_b_HU_Sch1_End_Time_Hr/FsftCITR_b_HU_Sch1_End_Time_HrChrt */
    /* Transition: '<S627>:2' */
    (void)Rte_Write_VeCITR_b_HU_Sch1_End_Time_HrFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_HU_Sch1_End_Time_Hr' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_HU_Sch1_End_Time_Min(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_HU_Sch1_End_Time_Min' */
    /* Outport: '<Root>/VeCITR_b_HU_Sch1_End_Time_MinFA' incorporates:
     *  Chart: '<S34>/FsftCITR_b_HU_Sch1_End_Time_MinChrt'
     *  SignalConversion generated from: '<S34>/VeCITR_b_HU_Sch1_End_Time_MinFA'
     */
    /* Gateway: FsftCITR_b_HU_Sch1_End_Time_Min/FsftCITR_b_HU_Sch1_End_Time_MinChrt */
    /* During: FsftCITR_b_HU_Sch1_End_Time_Min/FsftCITR_b_HU_Sch1_End_Time_MinChrt */
    /* Entry Internal: FsftCITR_b_HU_Sch1_End_Time_Min/FsftCITR_b_HU_Sch1_End_Time_MinChrt */
    /* Transition: '<S628>:2' */
    (void)Rte_Write_VeCITR_b_HU_Sch1_End_Time_MinFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_HU_Sch1_End_Time_Min' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_HU_Sch1_Start_Time_Hr(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_HU_Sch1_Start_Time_Hr' */
    /* Outport: '<Root>/VeCITR_b_HU_Sch1_Start_Time_HrFA' incorporates:
     *  Chart: '<S35>/FsftCITR_b_HU_Sch1_Start_Time_HrChrt'
     *  SignalConversion generated from: '<S35>/VeCITR_b_HU_Sch1_Start_Time_HrFA'
     */
    /* Gateway: FsftCITR_b_HU_Sch1_Start_Time_Hr/FsftCITR_b_HU_Sch1_Start_Time_HrChrt */
    /* During: FsftCITR_b_HU_Sch1_Start_Time_Hr/FsftCITR_b_HU_Sch1_Start_Time_HrChrt */
    /* Entry Internal: FsftCITR_b_HU_Sch1_Start_Time_Hr/FsftCITR_b_HU_Sch1_Start_Time_HrChrt */
    /* Transition: '<S629>:2' */
    (void)Rte_Write_VeCITR_b_HU_Sch1_Start_Time_HrFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_HU_Sch1_Start_Time_Hr' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_HU_Sch1_Start_Time_Min(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_HU_Sch1_Start_Time_Min' */
    /* Outport: '<Root>/VeCITR_b_HU_Sch1_Start_Time_MinFA' incorporates:
     *  Chart: '<S36>/FsftCITR_b_HU_Sch1_Start_Time_MinChrt'
     *  SignalConversion generated from: '<S36>/VeCITR_b_HU_Sch1_Start_Time_MinFA'
     */
    /* Gateway: FsftCITR_b_HU_Sch1_Start_Time_Min/FsftCITR_b_HU_Sch1_Start_Time_MinChrt */
    /* During: FsftCITR_b_HU_Sch1_Start_Time_Min/FsftCITR_b_HU_Sch1_Start_Time_MinChrt */
    /* Entry Internal: FsftCITR_b_HU_Sch1_Start_Time_Min/FsftCITR_b_HU_Sch1_Start_Time_MinChrt */
    /* Transition: '<S630>:2' */
    (void)Rte_Write_VeCITR_b_HU_Sch1_Start_Time_MinFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_HU_Sch1_Start_Time_Min' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_HU_Sch1_Type(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_HU_Sch1_Type' */
    /* Outport: '<Root>/VeCITR_b_HU_Sch1_TypeFA' incorporates:
     *  Chart: '<S37>/FsftCITR_b_HU_Sch1_TypeChrt'
     *  SignalConversion generated from: '<S37>/VeCITR_b_HU_Sch1_TypeFA'
     */
    /* Gateway: FsftCITR_b_HU_Sch1_Type/FsftCITR_b_HU_Sch1_TypeChrt */
    /* During: FsftCITR_b_HU_Sch1_Type/FsftCITR_b_HU_Sch1_TypeChrt */
    /* Entry Internal: FsftCITR_b_HU_Sch1_Type/FsftCITR_b_HU_Sch1_TypeChrt */
    /* Transition: '<S631>:2' */
    (void)Rte_Write_VeCITR_b_HU_Sch1_TypeFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_HU_Sch1_Type' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_HU_Sch2_CabTemp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_HU_Sch2_CabTemp' */
    /* Outport: '<Root>/VeCITR_b_HU_Sch2_TemperatureFA' incorporates:
     *  Chart: '<S38>/FsftCITR_b_HU_Sch2_CabTempChrt'
     *  SignalConversion generated from: '<S38>/VeCITR_b_HU_Sch2_CabTempFA'
     */
    /* Gateway: FsftCITR_b_HU_Sch2_CabTemp/FsftCITR_b_HU_Sch2_CabTempChrt */
    /* During: FsftCITR_b_HU_Sch2_CabTemp/FsftCITR_b_HU_Sch2_CabTempChrt */
    /* Entry Internal: FsftCITR_b_HU_Sch2_CabTemp/FsftCITR_b_HU_Sch2_CabTempChrt */
    /* Transition: '<S632>:2' */
    (void)Rte_Write_VeCITR_b_HU_Sch2_TemperatureFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_HU_Sch2_CabTemp' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_HU_Sch2_Day(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_HU_Sch2_Day' */
    /* Outport: '<Root>/VeCITR_b_HU_Sch2_Day_FA' incorporates:
     *  Chart: '<S39>/FsftCITR_b_HU_Sch2_DayChrt'
     *  SignalConversion generated from: '<S39>/VeCITR_b_HU_Sch2_DayFA'
     */
    /* Gateway: FsftCITR_b_HU_Sch2_Day/FsftCITR_b_HU_Sch2_DayChrt */
    /* During: FsftCITR_b_HU_Sch2_Day/FsftCITR_b_HU_Sch2_DayChrt */
    /* Entry Internal: FsftCITR_b_HU_Sch2_Day/FsftCITR_b_HU_Sch2_DayChrt */
    /* Transition: '<S633>:2' */
    (void)Rte_Write_VeCITR_b_HU_Sch2_Day_FA_Value(true);

    /* Outport: '<Root>/VeCITR_b_HU_Sch2_Day_SgnlRcvd' incorporates:
     *  Chart: '<S39>/FsftCITR_b_HU_Sch2_DayChrt'
     *  SignalConversion generated from: '<S39>/VeCITR_b_HU_Sch2_DaySgnl_Rcvd'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch2_Day_SgnlRcvd_Value(false);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_HU_Sch2_Day' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_HU_Sch2_End_Time_Hr(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_HU_Sch2_End_Time_Hr' */
    /* Outport: '<Root>/VeCITR_b_HU_Sch2_End_Time_HrFA' incorporates:
     *  Chart: '<S40>/FsftCITR_b_HU_Sch2_End_Time_HrChrt'
     *  SignalConversion generated from: '<S40>/VeCITR_b_HU_Sch2_End_Time_HrFA'
     */
    /* Gateway: FsftCITR_b_HU_Sch2_End_Time_Hr/FsftCITR_b_HU_Sch2_End_Time_HrChrt */
    /* During: FsftCITR_b_HU_Sch2_End_Time_Hr/FsftCITR_b_HU_Sch2_End_Time_HrChrt */
    /* Entry Internal: FsftCITR_b_HU_Sch2_End_Time_Hr/FsftCITR_b_HU_Sch2_End_Time_HrChrt */
    /* Transition: '<S634>:2' */
    (void)Rte_Write_VeCITR_b_HU_Sch2_End_Time_HrFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_HU_Sch2_End_Time_Hr' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_HU_Sch2_End_Time_Min(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_HU_Sch2_End_Time_Min' */
    /* Outport: '<Root>/VeCITR_b_HU_Sch2_End_Time_MinFA' incorporates:
     *  Chart: '<S41>/FsftCITR_b_HU_Sch2_End_Time_MinChrt'
     *  SignalConversion generated from: '<S41>/VeCITR_b_HU_Sch2_End_Time_MinFA'
     */
    /* Gateway: FsftCITR_b_HU_Sch2_End_Time_Min/FsftCITR_b_HU_Sch2_End_Time_MinChrt */
    /* During: FsftCITR_b_HU_Sch2_End_Time_Min/FsftCITR_b_HU_Sch2_End_Time_MinChrt */
    /* Entry Internal: FsftCITR_b_HU_Sch2_End_Time_Min/FsftCITR_b_HU_Sch2_End_Time_MinChrt */
    /* Transition: '<S635>:2' */
    (void)Rte_Write_VeCITR_b_HU_Sch2_End_Time_MinFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_HU_Sch2_End_Time_Min' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_HU_Sch2_Start_Time_Hr(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_HU_Sch2_Start_Time_Hr' */
    /* Outport: '<Root>/VeCITR_b_HU_Sch2_Start_Time_HrFA' incorporates:
     *  Chart: '<S42>/FsftCITR_b_HU_Sch2_Start_Time_HrChrt'
     *  SignalConversion generated from: '<S42>/VeCITR_b_HU_Sch2_Start_Time_HrFA'
     */
    /* Gateway: FsftCITR_b_HU_Sch2_Start_Time_Hr/FsftCITR_b_HU_Sch2_Start_Time_HrChrt */
    /* During: FsftCITR_b_HU_Sch2_Start_Time_Hr/FsftCITR_b_HU_Sch2_Start_Time_HrChrt */
    /* Entry Internal: FsftCITR_b_HU_Sch2_Start_Time_Hr/FsftCITR_b_HU_Sch2_Start_Time_HrChrt */
    /* Transition: '<S636>:2' */
    (void)Rte_Write_VeCITR_b_HU_Sch2_Start_Time_HrFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_HU_Sch2_Start_Time_Hr' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_HU_Sch2_Start_Time_Min(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_HU_Sch2_Start_Time_Min' */
    /* Outport: '<Root>/VeCITR_b_HU_Sch2_Start_Time_MinFA' incorporates:
     *  Chart: '<S43>/FsftCITR_b_HU_Sch2_Start_Time_MinChrt'
     *  SignalConversion generated from: '<S43>/VeCITR_b_HU_Sch2_Start_Time_MinFA'
     */
    /* Gateway: FsftCITR_b_HU_Sch2_Start_Time_Min/FsftCITR_b_HU_Sch2_Start_Time_MinChrt */
    /* During: FsftCITR_b_HU_Sch2_Start_Time_Min/FsftCITR_b_HU_Sch2_Start_Time_MinChrt */
    /* Entry Internal: FsftCITR_b_HU_Sch2_Start_Time_Min/FsftCITR_b_HU_Sch2_Start_Time_MinChrt */
    /* Transition: '<S637>:2' */
    (void)Rte_Write_VeCITR_b_HU_Sch2_Start_Time_MinFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_HU_Sch2_Start_Time_Min' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_HU_Sch2_Type(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_HU_Sch2_Type' */
    /* Outport: '<Root>/VeCITR_b_HU_Sch2_TypeFA' incorporates:
     *  Chart: '<S44>/FsftCITR_b_HU_Sch2_TypeChrt'
     *  SignalConversion generated from: '<S44>/VeCITR_b_HU_Sch2_TypeFA'
     */
    /* Gateway: FsftCITR_b_HU_Sch2_Type/FsftCITR_b_HU_Sch2_TypeChrt */
    /* During: FsftCITR_b_HU_Sch2_Type/FsftCITR_b_HU_Sch2_TypeChrt */
    /* Entry Internal: FsftCITR_b_HU_Sch2_Type/FsftCITR_b_HU_Sch2_TypeChrt */
    /* Transition: '<S638>:2' */
    (void)Rte_Write_VeCITR_b_HU_Sch2_TypeFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_HU_Sch2_Type' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_HU_Sch3_Allow(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_HU_Sch3_Allow' */
    /* Outport: '<Root>/VeCITR_b_HU_Sch3_AllowFA' incorporates:
     *  Chart: '<S45>/FsftCITR_b_HU_Sch3_AllowChrt'
     *  SignalConversion generated from: '<S45>/VeCITR_b_HU_Sch3_AllowFA'
     */
    /* Gateway: FsftCITR_b_HU_Sch3_Allow/FsftCITR_b_HU_Sch3_AllowChrt */
    /* During: FsftCITR_b_HU_Sch3_Allow/FsftCITR_b_HU_Sch3_AllowChrt */
    /* Entry Internal: FsftCITR_b_HU_Sch3_Allow/FsftCITR_b_HU_Sch3_AllowChrt */
    /* Transition: '<S639>:2' */
    (void)Rte_Write_VeCITR_b_HU_Sch3_AllowFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_HU_Sch3_Allow' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_HU_Sch3_CabTemp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_HU_Sch3_CabTemp' */
    /* Outport: '<Root>/VeCITR_b_HU_Sch3_TemperatureFA' incorporates:
     *  Chart: '<S46>/FsftCITR_b_HU_Sch3_CabTempChrt'
     *  SignalConversion generated from: '<S46>/VeCITR_b_HU_Sch3_CabTempFA'
     */
    /* Gateway: FsftCITR_b_HU_Sch3_CabTemp/FsftCITR_b_HU_Sch3_CabTempChrt */
    /* During: FsftCITR_b_HU_Sch3_CabTemp/FsftCITR_b_HU_Sch3_CabTempChrt */
    /* Entry Internal: FsftCITR_b_HU_Sch3_CabTemp/FsftCITR_b_HU_Sch3_CabTempChrt */
    /* Transition: '<S640>:2' */
    (void)Rte_Write_VeCITR_b_HU_Sch3_TemperatureFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_HU_Sch3_CabTemp' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_HU_Sch3_Day(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_HU_Sch3_Day' */
    /* Outport: '<Root>/VeCITR_b_HU_Sch3_Day_FA' incorporates:
     *  Chart: '<S47>/FsftCITR_b_HU_Sch3_DayChrt'
     *  SignalConversion generated from: '<S47>/VeCITR_b_HU_Sch3_DayFA'
     */
    /* Gateway: FsftCITR_b_HU_Sch3_Day/FsftCITR_b_HU_Sch3_DayChrt */
    /* During: FsftCITR_b_HU_Sch3_Day/FsftCITR_b_HU_Sch3_DayChrt */
    /* Entry Internal: FsftCITR_b_HU_Sch3_Day/FsftCITR_b_HU_Sch3_DayChrt */
    /* Transition: '<S641>:2' */
    (void)Rte_Write_VeCITR_b_HU_Sch3_Day_FA_Value(true);

    /* Outport: '<Root>/VeCITR_b_HU_Sch3_Day_SgnlRcvd' incorporates:
     *  Chart: '<S47>/FsftCITR_b_HU_Sch3_DayChrt'
     *  SignalConversion generated from: '<S47>/VeCITR_b_HU_Sch3_DaySgnl_Rcvd'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch3_Day_SgnlRcvd_Value(false);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_HU_Sch3_Day' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_HU_Sch3_End_Time_Hr(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_HU_Sch3_End_Time_Hr' */
    /* Outport: '<Root>/VeCITR_b_HU_Sch3_End_Time_HrFA' incorporates:
     *  Chart: '<S48>/FsftCITR_b_HU_Sch3_End_Time_HrChrt'
     *  SignalConversion generated from: '<S48>/VeCITR_b_HU_Sch3_End_Time_HrFA'
     */
    /* Gateway: FsftCITR_b_HU_Sch3_End_Time_Hr/FsftCITR_b_HU_Sch3_End_Time_HrChrt */
    /* During: FsftCITR_b_HU_Sch3_End_Time_Hr/FsftCITR_b_HU_Sch3_End_Time_HrChrt */
    /* Entry Internal: FsftCITR_b_HU_Sch3_End_Time_Hr/FsftCITR_b_HU_Sch3_End_Time_HrChrt */
    /* Transition: '<S642>:2' */
    (void)Rte_Write_VeCITR_b_HU_Sch3_End_Time_HrFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_HU_Sch3_End_Time_Hr' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_HU_Sch3_End_Time_Min(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_HU_Sch3_End_Time_Min' */
    /* Outport: '<Root>/VeCITR_b_HU_Sch3_End_Time_MinFA' incorporates:
     *  Chart: '<S49>/FsftCITR_b_HU_Sch3_End_Time_MinChrt'
     *  SignalConversion generated from: '<S49>/VeCITR_b_HU_Sch3_End_Time_MinFA'
     */
    /* Gateway: FsftCITR_b_HU_Sch3_End_Time_Min/FsftCITR_b_HU_Sch3_End_Time_MinChrt */
    /* During: FsftCITR_b_HU_Sch3_End_Time_Min/FsftCITR_b_HU_Sch3_End_Time_MinChrt */
    /* Entry Internal: FsftCITR_b_HU_Sch3_End_Time_Min/FsftCITR_b_HU_Sch3_End_Time_MinChrt */
    /* Transition: '<S643>:2' */
    (void)Rte_Write_VeCITR_b_HU_Sch3_End_Time_MinFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_HU_Sch3_End_Time_Min' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_HU_Sch3_Start_Time_Hr(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_HU_Sch3_Start_Time_Hr' */
    /* Outport: '<Root>/VeCITR_b_HU_Sch3_Start_Time_HrFA' incorporates:
     *  Chart: '<S50>/FsftCITR_b_HU_Sch3_Start_Time_HrChrt'
     *  SignalConversion generated from: '<S50>/VeCITR_b_HU_Sch3_Start_Time_HrFA'
     */
    /* Gateway: FsftCITR_b_HU_Sch3_Start_Time_Hr/FsftCITR_b_HU_Sch3_Start_Time_HrChrt */
    /* During: FsftCITR_b_HU_Sch3_Start_Time_Hr/FsftCITR_b_HU_Sch3_Start_Time_HrChrt */
    /* Entry Internal: FsftCITR_b_HU_Sch3_Start_Time_Hr/FsftCITR_b_HU_Sch3_Start_Time_HrChrt */
    /* Transition: '<S644>:2' */
    (void)Rte_Write_VeCITR_b_HU_Sch3_Start_Time_HrFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_HU_Sch3_Start_Time_Hr' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_HU_Sch3_Start_Time_Min(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_HU_Sch3_Start_Time_Min' */
    /* Outport: '<Root>/VeCITR_b_HU_Sch3_Start_Time_MinFA' incorporates:
     *  Chart: '<S51>/FsftCITR_b_HU_Sch3_Start_Time_MinChrt'
     *  SignalConversion generated from: '<S51>/VeCITR_b_HU_Sch3_Start_Time_MinFA'
     */
    /* Gateway: FsftCITR_b_HU_Sch3_Start_Time_Min/FsftCITR_b_HU_Sch3_Start_Time_MinChrt */
    /* During: FsftCITR_b_HU_Sch3_Start_Time_Min/FsftCITR_b_HU_Sch3_Start_Time_MinChrt */
    /* Entry Internal: FsftCITR_b_HU_Sch3_Start_Time_Min/FsftCITR_b_HU_Sch3_Start_Time_MinChrt */
    /* Transition: '<S645>:2' */
    (void)Rte_Write_VeCITR_b_HU_Sch3_Start_Time_MinFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_HU_Sch3_Start_Time_Min' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_HU_Sch3_Type(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_HU_Sch3_Type' */
    /* Outport: '<Root>/VeCITR_b_HU_Sch3_TypeFA' incorporates:
     *  Chart: '<S52>/FsftCITR_b_HU_Sch3_TypeChrt'
     *  SignalConversion generated from: '<S52>/VeCITR_b_HU_Sch3_TypeFA'
     */
    /* Gateway: FsftCITR_b_HU_Sch3_Type/FsftCITR_b_HU_Sch3_TypeChrt */
    /* During: FsftCITR_b_HU_Sch3_Type/FsftCITR_b_HU_Sch3_TypeChrt */
    /* Entry Internal: FsftCITR_b_HU_Sch3_Type/FsftCITR_b_HU_Sch3_TypeChrt */
    /* Transition: '<S646>:2' */
    (void)Rte_Write_VeCITR_b_HU_Sch3_TypeFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_HU_Sch3_Type' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_HU_Sch4_Allow(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_HU_Sch4_Allow' */
    /* Outport: '<Root>/VeCITR_b_HU_Sch4_AllowFA' incorporates:
     *  Chart: '<S53>/FsftCITR_b_HU_Sch4_AllowChrt'
     *  SignalConversion generated from: '<S53>/VeCITR_b_HU_Sch4_AllowFA'
     */
    /* Gateway: FsftCITR_b_HU_Sch4_Allow/FsftCITR_b_HU_Sch4_AllowChrt */
    /* During: FsftCITR_b_HU_Sch4_Allow/FsftCITR_b_HU_Sch4_AllowChrt */
    /* Entry Internal: FsftCITR_b_HU_Sch4_Allow/FsftCITR_b_HU_Sch4_AllowChrt */
    /* Transition: '<S647>:2' */
    (void)Rte_Write_VeCITR_b_HU_Sch4_AllowFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_HU_Sch4_Allow' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_HU_Sch4_CabTemp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_HU_Sch4_CabTemp' */
    /* Outport: '<Root>/VeCITR_b_HU_Sch4_TemperatureFA' incorporates:
     *  Chart: '<S54>/FsftCITR_b_HU_Sch4_CabTempChrt'
     *  SignalConversion generated from: '<S54>/VeCITR_b_HU_Sch4_CabTempFA'
     */
    /* Gateway: FsftCITR_b_HU_Sch4_CabTemp/FsftCITR_b_HU_Sch4_CabTempChrt */
    /* During: FsftCITR_b_HU_Sch4_CabTemp/FsftCITR_b_HU_Sch4_CabTempChrt */
    /* Entry Internal: FsftCITR_b_HU_Sch4_CabTemp/FsftCITR_b_HU_Sch4_CabTempChrt */
    /* Transition: '<S648>:2' */
    (void)Rte_Write_VeCITR_b_HU_Sch4_TemperatureFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_HU_Sch4_CabTemp' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_HU_Sch4_Day(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_HU_Sch4_Day' */
    /* Outport: '<Root>/VeCITR_b_HU_Sch4_Day_FA' incorporates:
     *  Chart: '<S55>/FsftCITR_b_HU_Sch4_DayChrt'
     *  SignalConversion generated from: '<S55>/VeCITR_b_HU_Sch4_DayFA'
     */
    /* Gateway: FsftCITR_b_HU_Sch4_Day/FsftCITR_b_HU_Sch4_DayChrt */
    /* During: FsftCITR_b_HU_Sch4_Day/FsftCITR_b_HU_Sch4_DayChrt */
    /* Entry Internal: FsftCITR_b_HU_Sch4_Day/FsftCITR_b_HU_Sch4_DayChrt */
    /* Transition: '<S649>:2' */
    (void)Rte_Write_VeCITR_b_HU_Sch4_Day_FA_Value(true);

    /* Outport: '<Root>/VeCITR_b_HU_Sch4_Day_SgnlRcvd' incorporates:
     *  Chart: '<S55>/FsftCITR_b_HU_Sch4_DayChrt'
     *  SignalConversion generated from: '<S55>/VeCITR_b_HU_Sch4_DaySgnl_Rcvd'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch4_Day_SgnlRcvd_Value(false);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_HU_Sch4_Day' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_HU_Sch4_Start_Time_Hr(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_HU_Sch4_Start_Time_Hr' */
    /* Outport: '<Root>/VeCITR_b_HU_Sch4_Start_Time_HrFA' incorporates:
     *  Chart: '<S56>/FsftCITR_b_HU_Sch4_Start_Time_HrChrt'
     *  SignalConversion generated from: '<S56>/VeCITR_b_HU_Sch4_Start_Time_HrFA'
     */
    /* Gateway: FsftCITR_b_HU_Sch4_Start_Time_Hr/FsftCITR_b_HU_Sch4_Start_Time_HrChrt */
    /* During: FsftCITR_b_HU_Sch4_Start_Time_Hr/FsftCITR_b_HU_Sch4_Start_Time_HrChrt */
    /* Entry Internal: FsftCITR_b_HU_Sch4_Start_Time_Hr/FsftCITR_b_HU_Sch4_Start_Time_HrChrt */
    /* Transition: '<S650>:2' */
    (void)Rte_Write_VeCITR_b_HU_Sch4_Start_Time_HrFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_HU_Sch4_Start_Time_Hr' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_HU_Sch4_Start_Time_Min(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_HU_Sch4_Start_Time_Min' */
    /* Outport: '<Root>/VeCITR_b_HU_Sch4_Start_Time_MinFA' incorporates:
     *  Chart: '<S57>/FsftCITR_b_HU_Sch4_Start_Time_MinChrt'
     *  SignalConversion generated from: '<S57>/VeCITR_b_HU_Sch4_Start_Time_MinFA'
     */
    /* Gateway: FsftCITR_b_HU_Sch4_Start_Time_Min/FsftCITR_b_HU_Sch4_Start_Time_MinChrt */
    /* During: FsftCITR_b_HU_Sch4_Start_Time_Min/FsftCITR_b_HU_Sch4_Start_Time_MinChrt */
    /* Entry Internal: FsftCITR_b_HU_Sch4_Start_Time_Min/FsftCITR_b_HU_Sch4_Start_Time_MinChrt */
    /* Transition: '<S651>:2' */
    (void)Rte_Write_VeCITR_b_HU_Sch4_Start_Time_MinFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_HU_Sch4_Start_Time_Min' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_PP2ACPresentSens1(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_PP2ACPresentSens1' */
    /* Outport: '<Root>/VeCITR_b_PP2ACPresentSens1FA' incorporates:
     *  Chart: '<S58>/FsftCITR_b_PP2ACPresentSens1Chrt'
     *  SignalConversion generated from: '<S58>/VeCITR_b_PP2ACPresentSens1FA'
     */
    /* Gateway: FsftCITR_b_PP2ACPresentSens1/FsftCITR_b_PP2ACPresentSens1Chrt */
    /* During: FsftCITR_b_PP2ACPresentSens1/FsftCITR_b_PP2ACPresentSens1Chrt */
    /* Entry Internal: FsftCITR_b_PP2ACPresentSens1/FsftCITR_b_PP2ACPresentSens1Chrt */
    /* Transition: '<S652>:2' */
    (void)Rte_Write_VeCITR_b_PP2ACPresentSens1FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_PP2ACPresentSens1' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_PP2ACPresentSens2(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_PP2ACPresentSens2' */
    /* Outport: '<Root>/VeCITR_b_PP2ACPresentSens2FA' incorporates:
     *  Chart: '<S59>/FsftCITR_b_PP2ACPresentSens2Chrt'
     *  SignalConversion generated from: '<S59>/VeCITR_b_PP2ACPresentSens2FA'
     */
    /* Gateway: FsftCITR_b_PP2ACPresentSens2/FsftCITR_b_PP2ACPresentSens2Chrt */
    /* During: FsftCITR_b_PP2ACPresentSens2/FsftCITR_b_PP2ACPresentSens2Chrt */
    /* Entry Internal: FsftCITR_b_PP2ACPresentSens2/FsftCITR_b_PP2ACPresentSens2Chrt */
    /* Transition: '<S653>:2' */
    (void)Rte_Write_VeCITR_b_PP2ACPresentSens2FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_PP2ACPresentSens2' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_PP2ButtonSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_PP2ButtonSts' */
    /* Outport: '<Root>/VeCITR_b_PP2ButtonStsFA' incorporates:
     *  Chart: '<S60>/FsftCITR_b_PP2ButtonStsChrt'
     *  SignalConversion generated from: '<S60>/VeCITR_b_PP2ButtonStsFA'
     */
    /* Gateway: FsftCITR_b_PP2ButtonSts/FsftCITR_b_PP2ButtonStsChrt */
    /* During: FsftCITR_b_PP2ButtonSts/FsftCITR_b_PP2ButtonStsChrt */
    /* Entry Internal: FsftCITR_b_PP2ButtonSts/FsftCITR_b_PP2ButtonStsChrt */
    /* Transition: '<S654>:2' */
    (void)Rte_Write_VeCITR_b_PP2ButtonStsFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_PP2ButtonSts' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_PP2LidSwitchSts240(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_PP2LidSwitchSts' */
    /* Outport: '<Root>/VeCITR_b_PP2LidSwitchSts240FA' incorporates:
     *  Chart: '<S61>/FsftCITR_b_PP2LidSwitchSts240Chrt'
     *  SignalConversion generated from: '<S61>/VeCITR_b_PP2LidSwitchSts240FA'
     */
    /* Gateway: FsftCITR_b_PP2LidSwitchSts/FsftCITR_b_PP2LidSwitchSts240Chrt */
    /* During: FsftCITR_b_PP2LidSwitchSts/FsftCITR_b_PP2LidSwitchSts240Chrt */
    /* Entry Internal: FsftCITR_b_PP2LidSwitchSts/FsftCITR_b_PP2LidSwitchSts240Chrt */
    /* Transition: '<S655>:2' */
    (void)Rte_Write_VeCITR_b_PP2LidSwitchSts240FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_PP2LidSwitchSts' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_PP2LidSwitchSts120A(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_PP2LidSwitchSts120A' */
    /* Outport: '<Root>/VeCITR_b_PP2LidSwitchSts120AFA' incorporates:
     *  Chart: '<S62>/FsftCITR_b_PP2LidSwitchSts120AChrt'
     *  SignalConversion generated from: '<S62>/VeCITR_b_PP2LidSwitchSts120AFA'
     */
    /* Gateway: FsftCITR_b_PP2LidSwitchSts120A/FsftCITR_b_PP2LidSwitchSts120AChrt */
    /* During: FsftCITR_b_PP2LidSwitchSts120A/FsftCITR_b_PP2LidSwitchSts120AChrt */
    /* Entry Internal: FsftCITR_b_PP2LidSwitchSts120A/FsftCITR_b_PP2LidSwitchSts120AChrt */
    /* Transition: '<S656>:2' */
    (void)Rte_Write_VeCITR_b_PP2LidSwitchSts120AFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_PP2LidSwitchSts120A' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_PP2LidSwitchSts120B(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_PP2LidSwitchSts120B' */
    /* Outport: '<Root>/VeCITR_b_PP2LidSwitchSts120BFA' incorporates:
     *  Chart: '<S63>/FsftCITR_b_PP2LidSwitchSts120BChrt'
     *  SignalConversion generated from: '<S63>/VeCITR_b_PP2LidSwitchSts120BFA'
     */
    /* Gateway: FsftCITR_b_PP2LidSwitchSts120B/FsftCITR_b_PP2LidSwitchSts120BChrt */
    /* During: FsftCITR_b_PP2LidSwitchSts120B/FsftCITR_b_PP2LidSwitchSts120BChrt */
    /* Entry Internal: FsftCITR_b_PP2LidSwitchSts120B/FsftCITR_b_PP2LidSwitchSts120BChrt */
    /* Transition: '<S657>:2' */
    (void)Rte_Write_VeCITR_b_PP2LidSwitchSts120BFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_PP2LidSwitchSts120B' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_PP2_Gnd_Fault_Det(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_PP2_Gnd_Fault_Det' */
    /* Outport: '<Root>/VeCITR_b_PP2_Gnd_Fault_Detected_FA' incorporates:
     *  Chart: '<S64>/FsftCITR_b_PP2_Gnd_Fault_DetChrt'
     *  SignalConversion generated from: '<S64>/VeCITR_b_PP2_Gnd_Fault_Det_FA'
     */
    /* Gateway: FsftCITR_b_PP2_Gnd_Fault_Det/FsftCITR_b_PP2_Gnd_Fault_DetChrt */
    /* During: FsftCITR_b_PP2_Gnd_Fault_Det/FsftCITR_b_PP2_Gnd_Fault_DetChrt */
    /* Entry Internal: FsftCITR_b_PP2_Gnd_Fault_Det/FsftCITR_b_PP2_Gnd_Fault_DetChrt */
    /* Transition: '<S658>:2' */
    (void)Rte_Write_VeCITR_b_PP2_Gnd_Fault_Detected_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_PP2_Gnd_Fault_Det' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_PP2_LIN_Cksm_Err(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_PP2_LIN_Cksm_Err' */
    /* Outport: '<Root>/VeCITR_b_PP2_LIN_Checksum_Error_FA' incorporates:
     *  Chart: '<S65>/FsftCITR_b_PP2_LIN_Cksm_ErrChrt'
     *  SignalConversion generated from: '<S65>/VeCITR_b_PP2_LIN_Cksm_Err_FA'
     */
    /* Gateway: FsftCITR_b_PP2_LIN_Cksm_Err/FsftCITR_b_PP2_LIN_Cksm_ErrChrt */
    /* During: FsftCITR_b_PP2_LIN_Cksm_Err/FsftCITR_b_PP2_LIN_Cksm_ErrChrt */
    /* Entry Internal: FsftCITR_b_PP2_LIN_Cksm_Err/FsftCITR_b_PP2_LIN_Cksm_ErrChrt */
    /* Transition: '<S659>:2' */
    (void)Rte_Write_VeCITR_b_PP2_LIN_Checksum_Error_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_PP2_LIN_Cksm_Err' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_PP2_LIN_Data_Err(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_PP2_LIN_Data_Err' */
    /* Outport: '<Root>/VeCITR_b_PP2_LIN_Data_Error_FA' incorporates:
     *  Chart: '<S66>/FsftCITR_b_PP2_LIN_Data_ErrChrt'
     *  SignalConversion generated from: '<S66>/VeCITR_b_PP2_LIN_Data_Err_FA'
     */
    /* Gateway: FsftCITR_b_PP2_LIN_Data_Err/FsftCITR_b_PP2_LIN_Data_ErrChrt */
    /* During: FsftCITR_b_PP2_LIN_Data_Err/FsftCITR_b_PP2_LIN_Data_ErrChrt */
    /* Entry Internal: FsftCITR_b_PP2_LIN_Data_Err/FsftCITR_b_PP2_LIN_Data_ErrChrt */
    /* Transition: '<S660>:2' */
    (void)Rte_Write_VeCITR_b_PP2_LIN_Data_Error_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_PP2_LIN_Data_Err' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_PP2_LIN_Parity_Err(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_PP2_LIN_Parity_Err' */
    /* Outport: '<Root>/VeCITR_b_PP2_LIN_Parity_Error_FA' incorporates:
     *  Chart: '<S67>/FsftCITR_b_PP2_LIN_Parity_ErrChrt'
     *  SignalConversion generated from: '<S67>/VeCITR_b_PP2_LIN_Parity_Err_FA'
     */
    /* Gateway: FsftCITR_b_PP2_LIN_Parity_Err/FsftCITR_b_PP2_LIN_Parity_ErrChrt */
    /* During: FsftCITR_b_PP2_LIN_Parity_Err/FsftCITR_b_PP2_LIN_Parity_ErrChrt */
    /* Entry Internal: FsftCITR_b_PP2_LIN_Parity_Err/FsftCITR_b_PP2_LIN_Parity_ErrChrt */
    /* Transition: '<S661>:2' */
    (void)Rte_Write_VeCITR_b_PP2_LIN_Parity_Error_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_PP2_LIN_Parity_Err' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_PPACPresentSens1(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_PPACPresentSens1' */
    /* Outport: '<Root>/VeCITR_b_PPACPresentSens1FA' incorporates:
     *  Chart: '<S68>/FsftCITR_b_PPACPresentSens1Chrt'
     *  SignalConversion generated from: '<S68>/VeCITR_b_PPACPresentSens1FA'
     */
    /* Gateway: FsftCITR_b_PPACPresentSens1/FsftCITR_b_PPACPresentSens1Chrt */
    /* During: FsftCITR_b_PPACPresentSens1/FsftCITR_b_PPACPresentSens1Chrt */
    /* Entry Internal: FsftCITR_b_PPACPresentSens1/FsftCITR_b_PPACPresentSens1Chrt */
    /* Transition: '<S662>:2' */
    (void)Rte_Write_VeCITR_b_PPACPresentSens1FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_PPACPresentSens1' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_PPACPresentSens2(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_PPACPresentSens2' */
    /* Outport: '<Root>/VeCITR_b_PPACPresentSens2FA' incorporates:
     *  Chart: '<S69>/FsftCITR_b_PPACPresentSens2Chrt'
     *  SignalConversion generated from: '<S69>/VeCITR_b_PPACPresentSens2FA'
     */
    /* Gateway: FsftCITR_b_PPACPresentSens2/FsftCITR_b_PPACPresentSens2Chrt */
    /* During: FsftCITR_b_PPACPresentSens2/FsftCITR_b_PPACPresentSens2Chrt */
    /* Entry Internal: FsftCITR_b_PPACPresentSens2/FsftCITR_b_PPACPresentSens2Chrt */
    /* Transition: '<S663>:2' */
    (void)Rte_Write_VeCITR_b_PPACPresentSens2FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_PPACPresentSens2' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_PPButtonSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_PPButtonSts' */
    /* Outport: '<Root>/VeCITR_b_PPButtonStsFA' incorporates:
     *  Chart: '<S70>/FsftCITR_b_PPButtonStsChrt'
     *  SignalConversion generated from: '<S70>/VeCITR_b_PPButtonStsFA'
     */
    /* Gateway: FsftCITR_b_PPButtonSts/FsftCITR_b_PPButtonStsChrt */
    /* During: FsftCITR_b_PPButtonSts/FsftCITR_b_PPButtonStsChrt */
    /* Entry Internal: FsftCITR_b_PPButtonSts/FsftCITR_b_PPButtonStsChrt */
    /* Transition: '<S664>:2' */
    (void)Rte_Write_VeCITR_b_PPButtonStsFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_PPButtonSts' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_PPLidSwitchSts120A(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_PPLidSwitchSts120A' */
    /* Outport: '<Root>/VeCITR_b_PPLidSwitchSts120AFA' incorporates:
     *  Chart: '<S71>/FsftCITR_b_PPLidSwitchSts120AChrt'
     *  SignalConversion generated from: '<S71>/VeCITR_b_PPLidSwitchSts120AFA'
     */
    /* Gateway: FsftCITR_b_PPLidSwitchSts120A/FsftCITR_b_PPLidSwitchSts120AChrt */
    /* During: FsftCITR_b_PPLidSwitchSts120A/FsftCITR_b_PPLidSwitchSts120AChrt */
    /* Entry Internal: FsftCITR_b_PPLidSwitchSts120A/FsftCITR_b_PPLidSwitchSts120AChrt */
    /* Transition: '<S665>:2' */
    (void)Rte_Write_VeCITR_b_PPLidSwitchSts120AFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_PPLidSwitchSts120A' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_PPLidSwitchSts120B(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_PPLidSwitchSts120B' */
    /* Outport: '<Root>/VeCITR_b_PPLidSwitchSts120BFA' incorporates:
     *  Chart: '<S72>/FsftCITR_b_PPLidSwitchSts120BChrt'
     *  SignalConversion generated from: '<S72>/VeCITR_b_PPLidSwitchSts120BFA'
     */
    /* Gateway: FsftCITR_b_PPLidSwitchSts120B/FsftCITR_b_PPLidSwitchSts120BChrt */
    /* During: FsftCITR_b_PPLidSwitchSts120B/FsftCITR_b_PPLidSwitchSts120BChrt */
    /* Entry Internal: FsftCITR_b_PPLidSwitchSts120B/FsftCITR_b_PPLidSwitchSts120BChrt */
    /* Transition: '<S666>:2' */
    (void)Rte_Write_VeCITR_b_PPLidSwitchSts120BFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_PPLidSwitchSts120B' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_PPLidSwitchSts240(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_PPLidSwitchSts240' */
    /* Outport: '<Root>/VeCITR_b_PPLidSwitchSts240FA' incorporates:
     *  Chart: '<S73>/FsftCITR_b_PPLidSwitchSts240Chrt'
     *  SignalConversion generated from: '<S73>/VeCITR_b_PPLidSwitchSts240FA'
     */
    /* Gateway: FsftCITR_b_PPLidSwitchSts240/FsftCITR_b_PPLidSwitchSts240Chrt */
    /* During: FsftCITR_b_PPLidSwitchSts240/FsftCITR_b_PPLidSwitchSts240Chrt */
    /* Entry Internal: FsftCITR_b_PPLidSwitchSts240/FsftCITR_b_PPLidSwitchSts240Chrt */
    /* Transition: '<S667>:2' */
    (void)Rte_Write_VeCITR_b_PPLidSwitchSts240FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_PPLidSwitchSts240' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_PP_Gnd_Fault_Det(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_PP_Gnd_Fault_Det' */
    /* Outport: '<Root>/VeCITR_b_PP_Gnd_Fault_Detected_FA' incorporates:
     *  Chart: '<S74>/FsftCITR_b_PP_Gnd_Fault_DetChrt'
     *  SignalConversion generated from: '<S74>/VeCITR_b_PP_Gnd_Fault_Det_FA'
     */
    /* Gateway: FsftCITR_b_PP_Gnd_Fault_Det/FsftCITR_b_PP_Gnd_Fault_DetChrt */
    /* During: FsftCITR_b_PP_Gnd_Fault_Det/FsftCITR_b_PP_Gnd_Fault_DetChrt */
    /* Entry Internal: FsftCITR_b_PP_Gnd_Fault_Det/FsftCITR_b_PP_Gnd_Fault_DetChrt */
    /* Transition: '<S668>:2' */
    (void)Rte_Write_VeCITR_b_PP_Gnd_Fault_Detected_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_PP_Gnd_Fault_Det' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_PP_LIN_Cksm_Err(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_PP_LIN_Cksm_Err' */
    /* Outport: '<Root>/VeCITR_b_PP_LIN_Checksum_Error_FA' incorporates:
     *  Chart: '<S75>/FsftCITR_b_PP_LIN_Cksm_ErrChrt'
     *  SignalConversion generated from: '<S75>/VeCITR_b_PP_LIN_Cksm_Err_FA'
     */
    /* Gateway: FsftCITR_b_PP_LIN_Cksm_Err/FsftCITR_b_PP_LIN_Cksm_ErrChrt */
    /* During: FsftCITR_b_PP_LIN_Cksm_Err/FsftCITR_b_PP_LIN_Cksm_ErrChrt */
    /* Entry Internal: FsftCITR_b_PP_LIN_Cksm_Err/FsftCITR_b_PP_LIN_Cksm_ErrChrt */
    /* Transition: '<S669>:2' */
    (void)Rte_Write_VeCITR_b_PP_LIN_Checksum_Error_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_PP_LIN_Cksm_Err' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_PP_LIN_Data_Err(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_PP_LIN_Data_Err' */
    /* Outport: '<Root>/VeCITR_b_PP_LIN_Data_Error_FA' incorporates:
     *  Chart: '<S76>/FsftCITR_b_PP_LIN_Data_ErrChrt'
     *  SignalConversion generated from: '<S76>/VeCITR_b_PP_LIN_Data_Err_FA'
     */
    /* Gateway: FsftCITR_b_PP_LIN_Data_Err/FsftCITR_b_PP_LIN_Data_ErrChrt */
    /* During: FsftCITR_b_PP_LIN_Data_Err/FsftCITR_b_PP_LIN_Data_ErrChrt */
    /* Entry Internal: FsftCITR_b_PP_LIN_Data_Err/FsftCITR_b_PP_LIN_Data_ErrChrt */
    /* Transition: '<S670>:2' */
    (void)Rte_Write_VeCITR_b_PP_LIN_Data_Error_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_PP_LIN_Data_Err' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_PP_LIN_Parity_Err(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_PP_LIN_Parity_Err' */
    /* Outport: '<Root>/VeCITR_b_PP_LIN_Parity_Error_FA' incorporates:
     *  Chart: '<S77>/FsftCITR_b_PP_LIN_Parity_ErrChrt'
     *  SignalConversion generated from: '<S77>/VeCITR_b_PP_LIN_Parity_Err_FA'
     */
    /* Gateway: FsftCITR_b_PP_LIN_Parity_Err/FsftCITR_b_PP_LIN_Parity_ErrChrt */
    /* During: FsftCITR_b_PP_LIN_Parity_Err/FsftCITR_b_PP_LIN_Parity_ErrChrt */
    /* Entry Internal: FsftCITR_b_PP_LIN_Parity_Err/FsftCITR_b_PP_LIN_Parity_ErrChrt */
    /* Transition: '<S671>:2' */
    (void)Rte_Write_VeCITR_b_PP_LIN_Parity_Error_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_PP_LIN_Parity_Err' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_RsErrSPP(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_RsErrSPP' */
    /* Outport: '<Root>/VeCITR_b_RsErrSPPFA' incorporates:
     *  Chart: '<S78>/FsftCITR_b_RsErrSPPChrt'
     *  SignalConversion generated from: '<S78>/VeCITR_b_RsErrSPPFA'
     */
    /* Gateway: FsftCITR_b_RsErrSPP/FsftCITR_b_RsErrSPPChrt */
    /* During: FsftCITR_b_RsErrSPP/FsftCITR_b_RsErrSPPChrt */
    /* Entry Internal: FsftCITR_b_RsErrSPP/FsftCITR_b_RsErrSPPChrt */
    /* Transition: '<S672>:2' */
    (void)Rte_Write_VeCITR_b_RsErrSPPFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_RsErrSPP' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_RsErrSPP2(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_RsErrSPP2' */
    /* Outport: '<Root>/VeCITR_b_RsErrSPP2FA' incorporates:
     *  Chart: '<S79>/FsftCITR_b_RsErrSPP2Chrt'
     *  SignalConversion generated from: '<S79>/VeCITR_b_RsErrSPP2FA'
     */
    /* Gateway: FsftCITR_b_RsErrSPP2/FsftCITR_b_RsErrSPP2Chrt */
    /* During: FsftCITR_b_RsErrSPP2/FsftCITR_b_RsErrSPP2Chrt */
    /* Entry Internal: FsftCITR_b_RsErrSPP2/FsftCITR_b_RsErrSPP2Chrt */
    /* Transition: '<S673>:2' */
    (void)Rte_Write_VeCITR_b_RsErrSPP2FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_RsErrSPP2' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_SOC_Max_Lev(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_SOC_Max_Lev' */
    /* Outport: '<Root>/VeCITR_b_SOC_Max_Lev_FA' incorporates:
     *  Chart: '<S80>/FsftCITR_b_SOC_Max_LevChrt'
     *  SignalConversion generated from: '<S80>/VeCITR_b_SOC_Max_LevFA'
     */
    /* Gateway: FsftCITR_b_SOC_Max_Lev/FsftCITR_b_SOC_Max_LevChrt */
    /* During: FsftCITR_b_SOC_Max_Lev/FsftCITR_b_SOC_Max_LevChrt */
    /* Entry Internal: FsftCITR_b_SOC_Max_Lev/FsftCITR_b_SOC_Max_LevChrt */
    /* Transition: '<S674>:2' */
    (void)Rte_Write_VeCITR_b_SOC_Max_Lev_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_SOC_Max_Lev' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_TBMStopChrg(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_TBMStopChrg' */
    /* Outport: '<Root>/VeCITR_b_TBMStopChrgFA' incorporates:
     *  Chart: '<S81>/FsftCITR_b_TBMStopChrgChrt'
     *  SignalConversion generated from: '<S81>/VeCITR_b_TBMStopChrgFA'
     */
    /* Gateway: FsftCITR_b_TBMStopChrg/FsftCITR_b_TBMStopChrgChrt */
    /* During: FsftCITR_b_TBMStopChrg/FsftCITR_b_TBMStopChrgChrt */
    /* Entry Internal: FsftCITR_b_TBMStopChrg/FsftCITR_b_TBMStopChrgChrt */
    /* Transition: '<S675>:2' */
    (void)Rte_Write_VeCITR_b_TBMStopChrgFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_TBMStopChrg' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_TBM_Sch1_CabTemp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_TBM_Sch1_CabTemp' */
    /* Outport: '<Root>/VeCITR_b_TBM_Sch1_TemperatureFA' incorporates:
     *  Chart: '<S82>/FsftCITR_b_TBM_Sch1_CabTempChrt'
     *  SignalConversion generated from: '<S82>/VeCITR_b_TBM_Sch1_CabTempFA'
     */
    /* Gateway: FsftCITR_b_TBM_Sch1_CabTemp/FsftCITR_b_TBM_Sch1_CabTempChrt */
    /* During: FsftCITR_b_TBM_Sch1_CabTemp/FsftCITR_b_TBM_Sch1_CabTempChrt */
    /* Entry Internal: FsftCITR_b_TBM_Sch1_CabTemp/FsftCITR_b_TBM_Sch1_CabTempChrt */
    /* Transition: '<S676>:2' */
    (void)Rte_Write_VeCITR_b_TBM_Sch1_TemperatureFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_TBM_Sch1_CabTemp' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_TBM_Sch1_Day(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_TBM_Sch1_Day' */
    /* Outport: '<Root>/VeCITR_b_TBM_Sch1_Day_FA' incorporates:
     *  Chart: '<S83>/FsftCITR_b_TBM_Sch1_DayChrt'
     *  SignalConversion generated from: '<S83>/VeCITR_b_TBM_Sch1_DayFA'
     */
    /* Gateway: FsftCITR_b_TBM_Sch1_Day/FsftCITR_b_TBM_Sch1_DayChrt */
    /* During: FsftCITR_b_TBM_Sch1_Day/FsftCITR_b_TBM_Sch1_DayChrt */
    /* Entry Internal: FsftCITR_b_TBM_Sch1_Day/FsftCITR_b_TBM_Sch1_DayChrt */
    /* Transition: '<S677>:2' */
    (void)Rte_Write_VeCITR_b_TBM_Sch1_Day_FA_Value(true);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch1_Day_SgnlRcvd' incorporates:
     *  Chart: '<S83>/FsftCITR_b_TBM_Sch1_DayChrt'
     *  SignalConversion generated from: '<S83>/VeCITR_b_TBM_Sch1_DaySgnl_Rcvd'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch1_Day_SgnlRcvd_Value(false);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_TBM_Sch1_Day' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_TBM_Sch1_End_Time_Hr(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_TBM_Sch1_End_Time_Hr' */
    /* Outport: '<Root>/VeCITR_b_TBM_Sch1_End_Time_HrFA' incorporates:
     *  Chart: '<S84>/FsftCITR_b_TBM_Sch1_End_Time_HrChrt'
     *  SignalConversion generated from: '<S84>/VeCITR_b_TBM_Sch1_End_Time_HrFA'
     */
    /* Gateway: FsftCITR_b_TBM_Sch1_End_Time_Hr/FsftCITR_b_TBM_Sch1_End_Time_HrChrt */
    /* During: FsftCITR_b_TBM_Sch1_End_Time_Hr/FsftCITR_b_TBM_Sch1_End_Time_HrChrt */
    /* Entry Internal: FsftCITR_b_TBM_Sch1_End_Time_Hr/FsftCITR_b_TBM_Sch1_End_Time_HrChrt */
    /* Transition: '<S678>:2' */
    (void)Rte_Write_VeCITR_b_TBM_Sch1_End_Time_HrFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_TBM_Sch1_End_Time_Hr' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_TBM_Sch1_End_Time_Min(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_TBM_Sch1_End_Time_Min' */
    /* Outport: '<Root>/VeCITR_b_TBM_Sch1_End_Time_MinFA' incorporates:
     *  Chart: '<S85>/FsftCITR_b_TBM_Sch1_End_Time_MinChrt'
     *  SignalConversion generated from: '<S85>/VeCITR_b_TBM_Sch1_End_Time_MinFA'
     */
    /* Gateway: FsftCITR_b_TBM_Sch1_End_Time_Min/FsftCITR_b_TBM_Sch1_End_Time_MinChrt */
    /* During: FsftCITR_b_TBM_Sch1_End_Time_Min/FsftCITR_b_TBM_Sch1_End_Time_MinChrt */
    /* Entry Internal: FsftCITR_b_TBM_Sch1_End_Time_Min/FsftCITR_b_TBM_Sch1_End_Time_MinChrt */
    /* Transition: '<S679>:2' */
    (void)Rte_Write_VeCITR_b_TBM_Sch1_End_Time_MinFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_TBM_Sch1_End_Time_Min' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_TBM_Sch1_Start_Time_Hr(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_TBM_Sch1_Start_Time_Hr' */
    /* Outport: '<Root>/VeCITR_b_TBM_Sch1_Start_Time_HrFA' incorporates:
     *  Chart: '<S86>/FsftCITR_b_TBM_Sch1_Start_Time_HrChrt'
     *  SignalConversion generated from: '<S86>/VeCITR_b_TBM_Sch1_Start_Time_HrFA'
     */
    /* Gateway: FsftCITR_b_TBM_Sch1_Start_Time_Hr/FsftCITR_b_TBM_Sch1_Start_Time_HrChrt */
    /* During: FsftCITR_b_TBM_Sch1_Start_Time_Hr/FsftCITR_b_TBM_Sch1_Start_Time_HrChrt */
    /* Entry Internal: FsftCITR_b_TBM_Sch1_Start_Time_Hr/FsftCITR_b_TBM_Sch1_Start_Time_HrChrt */
    /* Transition: '<S680>:2' */
    (void)Rte_Write_VeCITR_b_TBM_Sch1_Start_Time_HrFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_TBM_Sch1_Start_Time_Hr' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_TBM_Sch1_Start_Time_Min(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_TBM_Sch1_Start_Time_Min' */
    /* Outport: '<Root>/VeCITR_b_TBM_Sch1_Start_Time_MinFA' incorporates:
     *  Chart: '<S87>/FsftCITR_b_TBM_Sch1_Start_Time_MinChrt'
     *  SignalConversion generated from: '<S87>/VeCITR_b_TBM_Sch1_Start_Time_MinFA'
     */
    /* Gateway: FsftCITR_b_TBM_Sch1_Start_Time_Min/FsftCITR_b_TBM_Sch1_Start_Time_MinChrt */
    /* During: FsftCITR_b_TBM_Sch1_Start_Time_Min/FsftCITR_b_TBM_Sch1_Start_Time_MinChrt */
    /* Entry Internal: FsftCITR_b_TBM_Sch1_Start_Time_Min/FsftCITR_b_TBM_Sch1_Start_Time_MinChrt */
    /* Transition: '<S681>:2' */
    (void)Rte_Write_VeCITR_b_TBM_Sch1_Start_Time_MinFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_TBM_Sch1_Start_Time_Min' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_TBM_Sch1_Type(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_TBM_Sch1_Type' */
    /* Outport: '<Root>/VeCITR_b_TBM_Sch1_TypeFA' incorporates:
     *  Chart: '<S88>/FsftCITR_b_TBM_Sch1_TypeChrt'
     *  SignalConversion generated from: '<S88>/VeCITR_b_TBM_Sch1_TypeFA'
     */
    /* Gateway: FsftCITR_b_TBM_Sch1_Type/FsftCITR_b_TBM_Sch1_TypeChrt */
    /* During: FsftCITR_b_TBM_Sch1_Type/FsftCITR_b_TBM_Sch1_TypeChrt */
    /* Entry Internal: FsftCITR_b_TBM_Sch1_Type/FsftCITR_b_TBM_Sch1_TypeChrt */
    /* Transition: '<S682>:2' */
    (void)Rte_Write_VeCITR_b_TBM_Sch1_TypeFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_TBM_Sch1_Type' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_TBM_Sch2_CabTemp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_TBM_Sch2_CabTemp' */
    /* Outport: '<Root>/VeCITR_b_TBM_Sch2_TemperatureFA' incorporates:
     *  Chart: '<S89>/FsftCITR_b_TBM_Sch2_CabTempChrt'
     *  SignalConversion generated from: '<S89>/VeCITR_b_TBM_Sch2_CabTempFA'
     */
    /* Gateway: FsftCITR_b_TBM_Sch2_CabTemp/FsftCITR_b_TBM_Sch2_CabTempChrt */
    /* During: FsftCITR_b_TBM_Sch2_CabTemp/FsftCITR_b_TBM_Sch2_CabTempChrt */
    /* Entry Internal: FsftCITR_b_TBM_Sch2_CabTemp/FsftCITR_b_TBM_Sch2_CabTempChrt */
    /* Transition: '<S683>:2' */
    (void)Rte_Write_VeCITR_b_TBM_Sch2_TemperatureFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_TBM_Sch2_CabTemp' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_TBM_Sch2_Day(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_TBM_Sch2_Day' */
    /* Outport: '<Root>/VeCITR_b_TBM_Sch2_Day_FA' incorporates:
     *  Chart: '<S90>/FsftCITR_b_TBM_Sch2_DayChrt'
     *  SignalConversion generated from: '<S90>/VeCITR_b_TBM_Sch2_DayFA'
     */
    /* Gateway: FsftCITR_b_TBM_Sch2_Day/FsftCITR_b_TBM_Sch2_DayChrt */
    /* During: FsftCITR_b_TBM_Sch2_Day/FsftCITR_b_TBM_Sch2_DayChrt */
    /* Entry Internal: FsftCITR_b_TBM_Sch2_Day/FsftCITR_b_TBM_Sch2_DayChrt */
    /* Transition: '<S684>:2' */
    (void)Rte_Write_VeCITR_b_TBM_Sch2_Day_FA_Value(true);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch2_Day_SgnlRcvd' incorporates:
     *  Chart: '<S90>/FsftCITR_b_TBM_Sch2_DayChrt'
     *  SignalConversion generated from: '<S90>/VeCITR_b_TBM_Sch2_DaySgnl_Rcvd'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch2_Day_SgnlRcvd_Value(false);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_TBM_Sch2_Day' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_TBM_Sch2_End_Time_Hr(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_TBM_Sch2_End_Time_Hr' */
    /* Outport: '<Root>/VeCITR_b_TBM_Sch2_End_Time_HrFA' incorporates:
     *  Chart: '<S91>/FsftCITR_b_TBM_Sch2_End_Time_HrChrt'
     *  SignalConversion generated from: '<S91>/VeCITR_b_TBM_Sch2_End_Time_HrFA'
     */
    /* Gateway: FsftCITR_b_TBM_Sch2_End_Time_Hr/FsftCITR_b_TBM_Sch2_End_Time_HrChrt */
    /* During: FsftCITR_b_TBM_Sch2_End_Time_Hr/FsftCITR_b_TBM_Sch2_End_Time_HrChrt */
    /* Entry Internal: FsftCITR_b_TBM_Sch2_End_Time_Hr/FsftCITR_b_TBM_Sch2_End_Time_HrChrt */
    /* Transition: '<S685>:2' */
    (void)Rte_Write_VeCITR_b_TBM_Sch2_End_Time_HrFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_TBM_Sch2_End_Time_Hr' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_TBM_Sch2_End_Time_Min(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_TBM_Sch2_End_Time_Min' */
    /* Outport: '<Root>/VeCITR_b_TBM_Sch2_End_Time_MinFA' incorporates:
     *  Chart: '<S92>/FsftCITR_b_TBM_Sch2_End_Time_MinChrt'
     *  SignalConversion generated from: '<S92>/VeCITR_b_TBM_Sch2_End_Time_MinFA'
     */
    /* Gateway: FsftCITR_b_TBM_Sch2_End_Time_Min/FsftCITR_b_TBM_Sch2_End_Time_MinChrt */
    /* During: FsftCITR_b_TBM_Sch2_End_Time_Min/FsftCITR_b_TBM_Sch2_End_Time_MinChrt */
    /* Entry Internal: FsftCITR_b_TBM_Sch2_End_Time_Min/FsftCITR_b_TBM_Sch2_End_Time_MinChrt */
    /* Transition: '<S686>:2' */
    (void)Rte_Write_VeCITR_b_TBM_Sch2_End_Time_MinFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_TBM_Sch2_End_Time_Min' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_TBM_Sch2_Start_Time_Hr(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_TBM_Sch2_Start_Time_Hr' */
    /* Outport: '<Root>/VeCITR_b_TBM_Sch2_Start_Time_HrFA' incorporates:
     *  Chart: '<S93>/FsftCITR_b_TBM_Sch2_Start_Time_HrChrt'
     *  SignalConversion generated from: '<S93>/VeCITR_b_TBM_Sch2_Start_Time_HrFA'
     */
    /* Gateway: FsftCITR_b_TBM_Sch2_Start_Time_Hr/FsftCITR_b_TBM_Sch2_Start_Time_HrChrt */
    /* During: FsftCITR_b_TBM_Sch2_Start_Time_Hr/FsftCITR_b_TBM_Sch2_Start_Time_HrChrt */
    /* Entry Internal: FsftCITR_b_TBM_Sch2_Start_Time_Hr/FsftCITR_b_TBM_Sch2_Start_Time_HrChrt */
    /* Transition: '<S687>:2' */
    (void)Rte_Write_VeCITR_b_TBM_Sch2_Start_Time_HrFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_TBM_Sch2_Start_Time_Hr' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_TBM_Sch2_Start_Time_Min(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_TBM_Sch2_Start_Time_Min' */
    /* Outport: '<Root>/VeCITR_b_TBM_Sch2_Start_Time_MinFA' incorporates:
     *  Chart: '<S94>/FsftCITR_b_TBM_Sch2_Start_Time_MinChrt'
     *  SignalConversion generated from: '<S94>/VeCITR_b_TBM_Sch2_Start_Time_MinFA'
     */
    /* Gateway: FsftCITR_b_TBM_Sch2_Start_Time_Min/FsftCITR_b_TBM_Sch2_Start_Time_MinChrt */
    /* During: FsftCITR_b_TBM_Sch2_Start_Time_Min/FsftCITR_b_TBM_Sch2_Start_Time_MinChrt */
    /* Entry Internal: FsftCITR_b_TBM_Sch2_Start_Time_Min/FsftCITR_b_TBM_Sch2_Start_Time_MinChrt */
    /* Transition: '<S688>:2' */
    (void)Rte_Write_VeCITR_b_TBM_Sch2_Start_Time_MinFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_TBM_Sch2_Start_Time_Min' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_TBM_Sch2_Type(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_TBM_Sch2_Type' */
    /* Outport: '<Root>/VeCITR_b_TBM_Sch2_TypeFA' incorporates:
     *  Chart: '<S95>/FsftCITR_b_TBM_Sch2_TypeChrt'
     *  SignalConversion generated from: '<S95>/VeCITR_b_TBM_Sch2_TypeFA'
     */
    /* Gateway: FsftCITR_b_TBM_Sch2_Type/FsftCITR_b_TBM_Sch2_TypeChrt */
    /* During: FsftCITR_b_TBM_Sch2_Type/FsftCITR_b_TBM_Sch2_TypeChrt */
    /* Entry Internal: FsftCITR_b_TBM_Sch2_Type/FsftCITR_b_TBM_Sch2_TypeChrt */
    /* Transition: '<S689>:2' */
    (void)Rte_Write_VeCITR_b_TBM_Sch2_TypeFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_TBM_Sch2_Type' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_TBM_Sch3_Allow(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_TBM_Sch3_Allow' */
    /* Outport: '<Root>/VeCITR_b_TBM_Sch3_AllowFA' incorporates:
     *  Chart: '<S96>/FsftCITR_b_TBM_Sch3_AllowChrt'
     *  SignalConversion generated from: '<S96>/VeCITR_b_TBM_Sch3_AllowFA'
     */
    /* Gateway: FsftCITR_b_TBM_Sch3_Allow/FsftCITR_b_TBM_Sch3_AllowChrt */
    /* During: FsftCITR_b_TBM_Sch3_Allow/FsftCITR_b_TBM_Sch3_AllowChrt */
    /* Entry Internal: FsftCITR_b_TBM_Sch3_Allow/FsftCITR_b_TBM_Sch3_AllowChrt */
    /* Transition: '<S690>:2' */
    (void)Rte_Write_VeCITR_b_TBM_Sch3_AllowFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_TBM_Sch3_Allow' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_TBM_Sch3_CabTemp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_TBM_Sch3_CabTemp' */
    /* Outport: '<Root>/VeCITR_b_TBM_Sch3_TemperatureFA' incorporates:
     *  Chart: '<S97>/FsftCITR_b_TBM_Sch3_CabTempChrt'
     *  SignalConversion generated from: '<S97>/VeCITR_b_TBM_Sch3_CabTempFA'
     */
    /* Gateway: FsftCITR_b_TBM_Sch3_CabTemp/FsftCITR_b_TBM_Sch3_CabTempChrt */
    /* During: FsftCITR_b_TBM_Sch3_CabTemp/FsftCITR_b_TBM_Sch3_CabTempChrt */
    /* Entry Internal: FsftCITR_b_TBM_Sch3_CabTemp/FsftCITR_b_TBM_Sch3_CabTempChrt */
    /* Transition: '<S691>:2' */
    (void)Rte_Write_VeCITR_b_TBM_Sch3_TemperatureFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_TBM_Sch3_CabTemp' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_TBM_Sch3_Day(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_TBM_Sch3_Day' */
    /* Outport: '<Root>/VeCITR_b_TBM_Sch3_Day_FA' incorporates:
     *  Chart: '<S98>/FsftCITR_b_TBM_Sch3_DayChrt'
     *  SignalConversion generated from: '<S98>/VeCITR_b_TBM_Sch3_DayFA'
     */
    /* Gateway: FsftCITR_b_TBM_Sch3_Day/FsftCITR_b_TBM_Sch3_DayChrt */
    /* During: FsftCITR_b_TBM_Sch3_Day/FsftCITR_b_TBM_Sch3_DayChrt */
    /* Entry Internal: FsftCITR_b_TBM_Sch3_Day/FsftCITR_b_TBM_Sch3_DayChrt */
    /* Transition: '<S692>:2' */
    (void)Rte_Write_VeCITR_b_TBM_Sch3_Day_FA_Value(true);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch3_Day_SgnlRcvd' incorporates:
     *  Chart: '<S98>/FsftCITR_b_TBM_Sch3_DayChrt'
     *  SignalConversion generated from: '<S98>/VeCITR_b_TBM_Sch3_DaySgnl_Rcvd'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch3_Day_SgnlRcvd_Value(false);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_TBM_Sch3_Day' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_TBM_Sch3_End_Time_Hr(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_TBM_Sch3_End_Time_Hr' */
    /* Outport: '<Root>/VeCITR_b_TBM_Sch3_End_Time_HrFA' incorporates:
     *  Chart: '<S99>/FsftCITR_b_TBM_Sch3_End_Time_HrChrt'
     *  SignalConversion generated from: '<S99>/VeCITR_b_TBM_Sch3_End_Time_HrFA'
     */
    /* Gateway: FsftCITR_b_TBM_Sch3_End_Time_Hr/FsftCITR_b_TBM_Sch3_End_Time_HrChrt */
    /* During: FsftCITR_b_TBM_Sch3_End_Time_Hr/FsftCITR_b_TBM_Sch3_End_Time_HrChrt */
    /* Entry Internal: FsftCITR_b_TBM_Sch3_End_Time_Hr/FsftCITR_b_TBM_Sch3_End_Time_HrChrt */
    /* Transition: '<S693>:2' */
    (void)Rte_Write_VeCITR_b_TBM_Sch3_End_Time_HrFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_TBM_Sch3_End_Time_Hr' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_TBM_Sch3_End_Time_Min(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_TBM_Sch3_End_Time_Min' */
    /* Outport: '<Root>/VeCITR_b_TBM_Sch3_End_Time_MinFA' incorporates:
     *  Chart: '<S100>/FsftCITR_b_TBM_Sch3_End_Time_MinChrt'
     *  SignalConversion generated from: '<S100>/VeCITR_b_TBM_Sch3_End_Time_MinFA'
     */
    /* Gateway: FsftCITR_b_TBM_Sch3_End_Time_Min/FsftCITR_b_TBM_Sch3_End_Time_MinChrt */
    /* During: FsftCITR_b_TBM_Sch3_End_Time_Min/FsftCITR_b_TBM_Sch3_End_Time_MinChrt */
    /* Entry Internal: FsftCITR_b_TBM_Sch3_End_Time_Min/FsftCITR_b_TBM_Sch3_End_Time_MinChrt */
    /* Transition: '<S694>:2' */
    (void)Rte_Write_VeCITR_b_TBM_Sch3_End_Time_MinFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_TBM_Sch3_End_Time_Min' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_TBM_Sch3_Start_Time_Hr(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_TBM_Sch3_Start_Time_Hr' */
    /* Outport: '<Root>/VeCITR_b_TBM_Sch3_Start_Time_HrFA' incorporates:
     *  Chart: '<S101>/FsftCITR_b_TBM_Sch3_Start_Time_HrChrt'
     *  SignalConversion generated from: '<S101>/VeCITR_b_TBM_Sch3_Start_Time_HrFA'
     */
    /* Gateway: FsftCITR_b_TBM_Sch3_Start_Time_Hr/FsftCITR_b_TBM_Sch3_Start_Time_HrChrt */
    /* During: FsftCITR_b_TBM_Sch3_Start_Time_Hr/FsftCITR_b_TBM_Sch3_Start_Time_HrChrt */
    /* Entry Internal: FsftCITR_b_TBM_Sch3_Start_Time_Hr/FsftCITR_b_TBM_Sch3_Start_Time_HrChrt */
    /* Transition: '<S695>:2' */
    (void)Rte_Write_VeCITR_b_TBM_Sch3_Start_Time_HrFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_TBM_Sch3_Start_Time_Hr' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_TBM_Sch3_Start_Time_Min(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_TBM_Sch3_Start_Time_Min' */
    /* Outport: '<Root>/VeCITR_b_TBM_Sch3_Start_Time_MinFA' incorporates:
     *  Chart: '<S102>/FsftCITR_b_TBM_Sch3_Start_Time_MinChrt'
     *  SignalConversion generated from: '<S102>/VeCITR_b_TBM_Sch3_Start_Time_MinFA'
     */
    /* Gateway: FsftCITR_b_TBM_Sch3_Start_Time_Min/FsftCITR_b_TBM_Sch3_Start_Time_MinChrt */
    /* During: FsftCITR_b_TBM_Sch3_Start_Time_Min/FsftCITR_b_TBM_Sch3_Start_Time_MinChrt */
    /* Entry Internal: FsftCITR_b_TBM_Sch3_Start_Time_Min/FsftCITR_b_TBM_Sch3_Start_Time_MinChrt */
    /* Transition: '<S696>:2' */
    (void)Rte_Write_VeCITR_b_TBM_Sch3_Start_Time_MinFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_TBM_Sch3_Start_Time_Min' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_TBM_Sch3_Type(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_TBM_Sch3_Type' */
    /* Outport: '<Root>/VeCITR_b_TBM_Sch3_TypeFA' incorporates:
     *  Chart: '<S103>/FsftCITR_b_TBM_Sch3_TypeChrt'
     *  SignalConversion generated from: '<S103>/VeCITR_b_TBM_Sch3_TypeFA'
     */
    /* Gateway: FsftCITR_b_TBM_Sch3_Type/FsftCITR_b_TBM_Sch3_TypeChrt */
    /* During: FsftCITR_b_TBM_Sch3_Type/FsftCITR_b_TBM_Sch3_TypeChrt */
    /* Entry Internal: FsftCITR_b_TBM_Sch3_Type/FsftCITR_b_TBM_Sch3_TypeChrt */
    /* Transition: '<S697>:2' */
    (void)Rte_Write_VeCITR_b_TBM_Sch3_TypeFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_TBM_Sch3_Type' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_TBM_Sch4_Allow(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_TBM_Sch4_Allow' */
    /* Outport: '<Root>/VeCITR_b_TBM_Sch4_AllowFA' incorporates:
     *  Chart: '<S104>/FsftCITR_b_TBM_Sch4_AllowChrt'
     *  SignalConversion generated from: '<S104>/VeCITR_b_TBM_Sch4_AllowFA'
     */
    /* Gateway: FsftCITR_b_TBM_Sch4_Allow/FsftCITR_b_TBM_Sch4_AllowChrt */
    /* During: FsftCITR_b_TBM_Sch4_Allow/FsftCITR_b_TBM_Sch4_AllowChrt */
    /* Entry Internal: FsftCITR_b_TBM_Sch4_Allow/FsftCITR_b_TBM_Sch4_AllowChrt */
    /* Transition: '<S698>:2' */
    (void)Rte_Write_VeCITR_b_TBM_Sch4_AllowFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_TBM_Sch4_Allow' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_TBM_Sch4_CabTemp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_TBM_Sch4_CabTemp' */
    /* Outport: '<Root>/VeCITR_b_TBM_Sch4_TemperatureFA' incorporates:
     *  Chart: '<S105>/FsftCITR_b_TBM_Sch4_CabTempChrt'
     *  SignalConversion generated from: '<S105>/VeCITR_b_TBM_Sch4_CabTempFA'
     */
    /* Gateway: FsftCITR_b_TBM_Sch4_CabTemp/FsftCITR_b_TBM_Sch4_CabTempChrt */
    /* During: FsftCITR_b_TBM_Sch4_CabTemp/FsftCITR_b_TBM_Sch4_CabTempChrt */
    /* Entry Internal: FsftCITR_b_TBM_Sch4_CabTemp/FsftCITR_b_TBM_Sch4_CabTempChrt */
    /* Transition: '<S699>:2' */
    (void)Rte_Write_VeCITR_b_TBM_Sch4_TemperatureFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_TBM_Sch4_CabTemp' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_TBM_Sch4_Day(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_TBM_Sch4_Day' */
    /* Outport: '<Root>/VeCITR_b_TBM_Sch4_Day_FA' incorporates:
     *  Chart: '<S106>/FsftCITR_b_TBM_Sch4_DayChrt'
     *  SignalConversion generated from: '<S106>/VeCITR_b_TBM_Sch4_DayFA'
     */
    /* Gateway: FsftCITR_b_TBM_Sch4_Day/FsftCITR_b_TBM_Sch4_DayChrt */
    /* During: FsftCITR_b_TBM_Sch4_Day/FsftCITR_b_TBM_Sch4_DayChrt */
    /* Entry Internal: FsftCITR_b_TBM_Sch4_Day/FsftCITR_b_TBM_Sch4_DayChrt */
    /* Transition: '<S700>:2' */
    (void)Rte_Write_VeCITR_b_TBM_Sch4_Day_FA_Value(true);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch4_Day_SgnlRcvd' incorporates:
     *  Chart: '<S106>/FsftCITR_b_TBM_Sch4_DayChrt'
     *  SignalConversion generated from: '<S106>/VeCITR_b_TBM_Sch4_DaySgnl_Rcvd'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch4_Day_SgnlRcvd_Value(false);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_TBM_Sch4_Day' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_TBM_Sch4_Start_Time_Hr(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_TBM_Sch4_Start_Time_Hr' */
    /* Outport: '<Root>/VeCITR_b_TBM_Sch4_Start_Time_HrFA' incorporates:
     *  Chart: '<S107>/FsftCITR_b_TBM_Sch4_Start_Time_HrChrt'
     *  SignalConversion generated from: '<S107>/VeCITR_b_TBM_Sch4_Start_Time_HrFA'
     */
    /* Gateway: FsftCITR_b_TBM_Sch4_Start_Time_Hr/FsftCITR_b_TBM_Sch4_Start_Time_HrChrt */
    /* During: FsftCITR_b_TBM_Sch4_Start_Time_Hr/FsftCITR_b_TBM_Sch4_Start_Time_HrChrt */
    /* Entry Internal: FsftCITR_b_TBM_Sch4_Start_Time_Hr/FsftCITR_b_TBM_Sch4_Start_Time_HrChrt */
    /* Transition: '<S701>:2' */
    (void)Rte_Write_VeCITR_b_TBM_Sch4_Start_Time_HrFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_TBM_Sch4_Start_Time_Hr' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_TBM_Sch4_Start_Time_Min(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_TBM_Sch4_Start_Time_Min' */
    /* Outport: '<Root>/VeCITR_b_TBM_Sch4_Start_Time_MinFA' incorporates:
     *  Chart: '<S108>/FsftCITR_b_TBM_Sch4_Start_Time_MinChrt'
     *  SignalConversion generated from: '<S108>/VeCITR_b_TBM_Sch4_Start_Time_MinFA'
     */
    /* Gateway: FsftCITR_b_TBM_Sch4_Start_Time_Min/FsftCITR_b_TBM_Sch4_Start_Time_MinChrt */
    /* During: FsftCITR_b_TBM_Sch4_Start_Time_Min/FsftCITR_b_TBM_Sch4_Start_Time_MinChrt */
    /* Entry Internal: FsftCITR_b_TBM_Sch4_Start_Time_Min/FsftCITR_b_TBM_Sch4_Start_Time_MinChrt */
    /* Transition: '<S702>:2' */
    (void)Rte_Write_VeCITR_b_TBM_Sch4_Start_Time_MinFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_TBM_Sch4_Start_Time_Min' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_V2HModeReq(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_V2HModeReq' */
    /* Outport: '<Root>/VeCITR_b_V2HModeReqFA' incorporates:
     *  Chart: '<S109>/FsftCITR_b_V2HModeReqChrt'
     *  SignalConversion generated from: '<S109>/VeCITR_b_V2HModeReqFA'
     */
    /* Gateway: FsftCITR_b_V2HModeReq/FsftCITR_b_V2HModeReqChrt */
    /* During: FsftCITR_b_V2HModeReq/FsftCITR_b_V2HModeReqChrt */
    /* Entry Internal: FsftCITR_b_V2HModeReq/FsftCITR_b_V2HModeReqChrt */
    /* Transition: '<S703>:2' */
    (void)Rte_Write_VeCITR_b_V2HModeReqFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_V2HModeReq' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_V2HReq(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_V2HReq' */
    /* Outport: '<Root>/VeCITR_b_V2HReqFA' incorporates:
     *  Chart: '<S110>/FsftCITR_b_V2HReqChrt'
     *  SignalConversion generated from: '<S110>/VeCITR_b_V2HReqFA'
     */
    /* Gateway: FsftCITR_b_V2HReq/FsftCITR_b_V2HReqChrt */
    /* During: FsftCITR_b_V2HReq/FsftCITR_b_V2HReqChrt */
    /* Entry Internal: FsftCITR_b_V2HReq/FsftCITR_b_V2HReqChrt */
    /* Transition: '<S704>:2' */
    (void)Rte_Write_VeCITR_b_V2HReqFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_V2HReq' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_V2HSubmit(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_V2HSubmit' */
    /* Outport: '<Root>/VeCITR_b_V2HSubmitFA' incorporates:
     *  Chart: '<S111>/FsftCITR_b_V2HSubmitChrt'
     *  SignalConversion generated from: '<S111>/VeCITR_b_V2HSubmitFA'
     */
    /* Gateway: FsftCITR_b_V2HSubmit/FsftCITR_b_V2HSubmitChrt */
    /* During: FsftCITR_b_V2HSubmit/FsftCITR_b_V2HSubmitChrt */
    /* Entry Internal: FsftCITR_b_V2HSubmit/FsftCITR_b_V2HSubmitChrt */
    /* Transition: '<S705>:2' */
    (void)Rte_Write_VeCITR_b_V2HSubmitFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_V2HSubmit' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_V2LModeReq(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_V2LModeReq' */
    /* Outport: '<Root>/VeCITR_b_V2LModeReqFA' incorporates:
     *  Chart: '<S112>/FsftCITR_b_V2LModeReqChrt'
     *  SignalConversion generated from: '<S112>/VeCITR_b_V2LModeReqFA'
     */
    /* Gateway: FsftCITR_b_V2LModeReq/FsftCITR_b_V2LModeReqChrt */
    /* During: FsftCITR_b_V2LModeReq/FsftCITR_b_V2LModeReqChrt */
    /* Entry Internal: FsftCITR_b_V2LModeReq/FsftCITR_b_V2LModeReqChrt */
    /* Transition: '<S706>:2' */
    (void)Rte_Write_VeCITR_b_V2LModeReqFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_V2LModeReq' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_V2LSubmit(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_V2LSubmit' */
    /* Outport: '<Root>/VeCITR_b_V2LSubmitFA' incorporates:
     *  Chart: '<S113>/FsftCITR_b_V2LSubmitChrt'
     *  SignalConversion generated from: '<S113>/VeCITR_b_V2LSubmitFA'
     */
    /* Gateway: FsftCITR_b_V2LSubmit/FsftCITR_b_V2LSubmitChrt */
    /* During: FsftCITR_b_V2LSubmit/FsftCITR_b_V2LSubmitChrt */
    /* Entry Internal: FsftCITR_b_V2LSubmit/FsftCITR_b_V2LSubmitChrt */
    /* Transition: '<S707>:2' */
    (void)Rte_Write_VeCITR_b_V2LSubmitFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_V2LSubmit' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_V2LTrunkReq(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_V2LTrunkReq' */
    /* Outport: '<Root>/VeCITR_b_V2LTrunkReqFA' incorporates:
     *  Chart: '<S114>/FsftCITR_b_V2LTrunkReqChrt'
     *  SignalConversion generated from: '<S114>/VeCITR_b_V2LTrunkReqFA'
     */
    /* Gateway: FsftCITR_b_V2LTrunkReq/FsftCITR_b_V2LTrunkReqChrt */
    /* During: FsftCITR_b_V2LTrunkReq/FsftCITR_b_V2LTrunkReqChrt */
    /* Entry Internal: FsftCITR_b_V2LTrunkReq/FsftCITR_b_V2LTrunkReqChrt */
    /* Transition: '<S708>:2' */
    (void)Rte_Write_VeCITR_b_V2LTrunkReqFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_V2LTrunkReq' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_V2L_AllReq(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_V2L_AllReq' */
    /* Outport: '<Root>/VeCITR_b_V2L_AllReqFA' incorporates:
     *  Chart: '<S115>/FsftCITR_b_V2L_AllReqChrt'
     *  SignalConversion generated from: '<S115>/VeCITR_b_V2L_AllReqFA'
     */
    /* Gateway: FsftCITR_b_V2L_AllReq/FsftCITR_b_V2L_AllReqChrt */
    /* During: FsftCITR_b_V2L_AllReq/FsftCITR_b_V2L_AllReqChrt */
    /* Entry Internal: FsftCITR_b_V2L_AllReq/FsftCITR_b_V2L_AllReqChrt */
    /* Transition: '<S709>:2' */
    (void)Rte_Write_VeCITR_b_V2L_AllReqFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_V2L_AllReq' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_V2L_FrunkReq(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_V2L_FrunkReq' */
    /* Outport: '<Root>/VeCITR_b_V2L_FrunkReqFA' incorporates:
     *  Chart: '<S116>/FsftCITR_b_V2L_FrunkReqChrt'
     *  SignalConversion generated from: '<S116>/VeCITR_b_V2L_FrunkReqFA'
     */
    /* Gateway: FsftCITR_b_V2L_FrunkReq/FsftCITR_b_V2L_FrunkReqChrt */
    /* During: FsftCITR_b_V2L_FrunkReq/FsftCITR_b_V2L_FrunkReqChrt */
    /* Entry Internal: FsftCITR_b_V2L_FrunkReq/FsftCITR_b_V2L_FrunkReqChrt */
    /* Transition: '<S710>:2' */
    (void)Rte_Write_VeCITR_b_V2L_FrunkReqFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_V2L_FrunkReq' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_V2VModeReq(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_V2VModeReq' */
    /* Outport: '<Root>/VeCITR_b_V2VModeReqFA' incorporates:
     *  Chart: '<S117>/FsftCITR_b_V2VModeReqChrt'
     *  SignalConversion generated from: '<S117>/VeCITR_b_V2VModeReqFA'
     */
    /* Gateway: FsftCITR_b_V2VModeReq/FsftCITR_b_V2VModeReqChrt */
    /* During: FsftCITR_b_V2VModeReq/FsftCITR_b_V2VModeReqChrt */
    /* Entry Internal: FsftCITR_b_V2VModeReq/FsftCITR_b_V2VModeReqChrt */
    /* Transition: '<S711>:2' */
    (void)Rte_Write_VeCITR_b_V2VModeReqFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_V2VModeReq' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_V2VReq(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_V2VReq' */
    /* Outport: '<Root>/VeCITR_b_V2VReqFA' incorporates:
     *  Chart: '<S118>/FsftCITR_b_V2VReqChrt'
     *  SignalConversion generated from: '<S118>/VeCITR_b_V2VReqFA'
     */
    /* Gateway: FsftCITR_b_V2VReq/FsftCITR_b_V2VReqChrt */
    /* During: FsftCITR_b_V2VReq/FsftCITR_b_V2VReqChrt */
    /* Entry Internal: FsftCITR_b_V2VReq/FsftCITR_b_V2VReqChrt */
    /* Transition: '<S712>:2' */
    (void)Rte_Write_VeCITR_b_V2VReqFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_V2VReq' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_b_V2VSubmit(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_b_V2VSubmit' */
    /* Outport: '<Root>/VeCITR_b_V2VSubmitFA' incorporates:
     *  Chart: '<S119>/FsftCITR_b_V2VSubmitChrt'
     *  SignalConversion generated from: '<S119>/VeCITR_b_V2VSubmitFA'
     */
    /* Gateway: FsftCITR_b_V2VSubmit/FsftCITR_b_V2VSubmitChrt */
    /* During: FsftCITR_b_V2VSubmit/FsftCITR_b_V2VSubmitChrt */
    /* Entry Internal: FsftCITR_b_V2VSubmit/FsftCITR_b_V2VSubmitChrt */
    /* Transition: '<S713>:2' */
    (void)Rte_Write_VeCITR_b_V2VSubmitFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_b_V2VSubmit' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_e_BCIM_Ind1_Fdbk(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_e_BCIM_Ind1_Fdbk' */
    /* Outport: '<Root>/VeCITR_b_BCIM_Ind1_FdbkFA' incorporates:
     *  Chart: '<S120>/FsftCITR_e_BCIM_Ind1_FdbkChrt'
     *  SignalConversion generated from: '<S120>/VeCITR_b_BCIM_Ind1_FdbkFA'
     */
    /* Gateway: FsftCITR_e_BCIM_Ind1_Fdbk/FsftCITR_e_BCIM_Ind1_FdbkChrt */
    /* During: FsftCITR_e_BCIM_Ind1_Fdbk/FsftCITR_e_BCIM_Ind1_FdbkChrt */
    /* Entry Internal: FsftCITR_e_BCIM_Ind1_Fdbk/FsftCITR_e_BCIM_Ind1_FdbkChrt */
    /* Transition: '<S714>:2' */
    (void)Rte_Write_VeCITR_b_BCIM_Ind1_FdbkFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_e_BCIM_Ind1_Fdbk' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_e_BCIM_Ind2_Fdbk(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_e_BCIM_Ind2_Fdbk' */
    /* Outport: '<Root>/VeCITR_b_BCIM_Ind2_FdbkFA' incorporates:
     *  Chart: '<S121>/FsftCITR_e_BCIM_Ind2_FdbkChrt'
     *  SignalConversion generated from: '<S121>/VeCITR_b_BCIM_Ind2_FdbkFA'
     */
    /* Gateway: FsftCITR_e_BCIM_Ind2_Fdbk/FsftCITR_e_BCIM_Ind2_FdbkChrt */
    /* During: FsftCITR_e_BCIM_Ind2_Fdbk/FsftCITR_e_BCIM_Ind2_FdbkChrt */
    /* Entry Internal: FsftCITR_e_BCIM_Ind2_Fdbk/FsftCITR_e_BCIM_Ind2_FdbkChrt */
    /* Transition: '<S715>:2' */
    (void)Rte_Write_VeCITR_b_BCIM_Ind2_FdbkFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_e_BCIM_Ind2_Fdbk' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_e_BCIM_Ind3_Fdbk(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_e_BCIM_Ind3_Fdbk' */
    /* Outport: '<Root>/VeCITR_b_BCIM_Ind3_FdbkFA' incorporates:
     *  Chart: '<S122>/FsftCITR_e_BCIM_Ind3_FdbkChrt'
     *  SignalConversion generated from: '<S122>/VeCITR_b_BCIM_Ind3_FdbkFA'
     */
    /* Gateway: FsftCITR_e_BCIM_Ind3_Fdbk/FsftCITR_e_BCIM_Ind3_FdbkChrt */
    /* During: FsftCITR_e_BCIM_Ind3_Fdbk/FsftCITR_e_BCIM_Ind3_FdbkChrt */
    /* Entry Internal: FsftCITR_e_BCIM_Ind3_Fdbk/FsftCITR_e_BCIM_Ind3_FdbkChrt */
    /* Transition: '<S716>:2' */
    (void)Rte_Write_VeCITR_b_BCIM_Ind3_FdbkFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_e_BCIM_Ind3_Fdbk' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_e_BCIM_Ind4_Fdbk(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_e_BCIM_Ind4_Fdbk' */
    /* Outport: '<Root>/VeCITR_b_BCIM_Ind4_FdbkFA' incorporates:
     *  Chart: '<S123>/FsftCITR_e_BCIM_Ind4_FdbkChrt'
     *  SignalConversion generated from: '<S123>/VeCITR_b_BCIM_Ind4_FdbkFA'
     */
    /* Gateway: FsftCITR_e_BCIM_Ind4_Fdbk/FsftCITR_e_BCIM_Ind4_FdbkChrt */
    /* During: FsftCITR_e_BCIM_Ind4_Fdbk/FsftCITR_e_BCIM_Ind4_FdbkChrt */
    /* Entry Internal: FsftCITR_e_BCIM_Ind4_Fdbk/FsftCITR_e_BCIM_Ind4_FdbkChrt */
    /* Transition: '<S717>:2' */
    (void)Rte_Write_VeCITR_b_BCIM_Ind4_FdbkFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_e_BCIM_Ind4_Fdbk' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_e_BCIM_Ind5_Fdbk(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_e_BCIM_Ind5_Fdbk' */
    /* Outport: '<Root>/VeCITR_b_BCIM_Ind5_FdbkFA' incorporates:
     *  Chart: '<S124>/FsftCITR_e_BCIM_Ind5_FdbkChrt'
     *  SignalConversion generated from: '<S124>/VeCITR_b_BCIM_Ind5_FdbkFA'
     */
    /* Gateway: FsftCITR_e_BCIM_Ind5_Fdbk/FsftCITR_e_BCIM_Ind5_FdbkChrt */
    /* During: FsftCITR_e_BCIM_Ind5_Fdbk/FsftCITR_e_BCIM_Ind5_FdbkChrt */
    /* Entry Internal: FsftCITR_e_BCIM_Ind5_Fdbk/FsftCITR_e_BCIM_Ind5_FdbkChrt */
    /* Transition: '<S718>:2' */
    (void)Rte_Write_VeCITR_b_BCIM_Ind5_FdbkFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_e_BCIM_Ind5_Fdbk' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_e_BCIM_Ind_Color_Fdbk(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_e_BCIM_Ind_Color_Fdbk' */
    /* Outport: '<Root>/VeCITR_b_BCIM_Ind_Color_FdbkFA' incorporates:
     *  Chart: '<S125>/FsftCITR_e_BCIM_Ind_Color_FdbkChrt'
     *  SignalConversion generated from: '<S125>/VeCITR_b_BCIM_Ind_Color_FdbkFA'
     */
    /* Gateway: FsftCITR_e_BCIM_Ind_Color_Fdbk/FsftCITR_e_BCIM_Ind_Color_FdbkChrt */
    /* During: FsftCITR_e_BCIM_Ind_Color_Fdbk/FsftCITR_e_BCIM_Ind_Color_FdbkChrt */
    /* Entry Internal: FsftCITR_e_BCIM_Ind_Color_Fdbk/FsftCITR_e_BCIM_Ind_Color_FdbkChrt */
    /* Transition: '<S719>:2' */
    (void)Rte_Write_VeCITR_b_BCIM_Ind_Color_FdbkFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_e_BCIM_Ind_Color_Fdbk' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_e_CPIM_Icon1_Sts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_e_CPIM_Icon1_Sts' */
    /* Outport: '<Root>/VeCITR_b_CPIM_Icon1_StsFA' incorporates:
     *  Chart: '<S126>/FsftCITR_e_CPIM_Icon1_StsChrt'
     *  SignalConversion generated from: '<S126>/VeCITR_b_CPIM_Icon1_StsFA'
     */
    /* Gateway: FsftCITR_e_CPIM_Icon1_Sts/FsftCITR_e_CPIM_Icon1_StsChrt */
    /* During: FsftCITR_e_CPIM_Icon1_Sts/FsftCITR_e_CPIM_Icon1_StsChrt */
    /* Entry Internal: FsftCITR_e_CPIM_Icon1_Sts/FsftCITR_e_CPIM_Icon1_StsChrt */
    /* Transition: '<S720>:2' */
    (void)Rte_Write_VeCITR_b_CPIM_Icon1_StsFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_e_CPIM_Icon1_Sts' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_e_CPIM_Icon2_Sts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_e_CPIM_Icon2_Sts' */
    /* Outport: '<Root>/VeCITR_b_CPIM_Icon2_StsFA' incorporates:
     *  Chart: '<S127>/FsftCITR_e_CPIM_Icon2_StsChrt'
     *  SignalConversion generated from: '<S127>/VeCITR_b_CPIM_Icon2_StsFA'
     */
    /* Gateway: FsftCITR_e_CPIM_Icon2_Sts/FsftCITR_e_CPIM_Icon2_StsChrt */
    /* During: FsftCITR_e_CPIM_Icon2_Sts/FsftCITR_e_CPIM_Icon2_StsChrt */
    /* Entry Internal: FsftCITR_e_CPIM_Icon2_Sts/FsftCITR_e_CPIM_Icon2_StsChrt */
    /* Transition: '<S721>:2' */
    (void)Rte_Write_VeCITR_b_CPIM_Icon2_StsFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_e_CPIM_Icon2_Sts' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_e_CPIM_Ind1_Fdbk(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_e_CPIM_Ind1_Fdbk' */
    /* Outport: '<Root>/VeCITR_b_CPIM_Ind1_FdbkFA' incorporates:
     *  Chart: '<S128>/FsftCITR_e_CPIM_Ind1_FdbkChrt'
     *  SignalConversion generated from: '<S128>/VeCITR_b_CPIM_Ind1_FdbkFA'
     */
    /* Gateway: FsftCITR_e_CPIM_Ind1_Fdbk/FsftCITR_e_CPIM_Ind1_FdbkChrt */
    /* During: FsftCITR_e_CPIM_Ind1_Fdbk/FsftCITR_e_CPIM_Ind1_FdbkChrt */
    /* Entry Internal: FsftCITR_e_CPIM_Ind1_Fdbk/FsftCITR_e_CPIM_Ind1_FdbkChrt */
    /* Transition: '<S722>:2' */
    (void)Rte_Write_VeCITR_b_CPIM_Ind1_FdbkFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_e_CPIM_Ind1_Fdbk' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_e_CPIM_Ind2_Fdbk(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_e_CPIM_Ind2_Fdbk' */
    /* Outport: '<Root>/VeCITR_b_CPIM_Ind2_FdbkFA' incorporates:
     *  Chart: '<S129>/FsftCITR_e_CPIM_Ind2_FdbkChrt'
     *  SignalConversion generated from: '<S129>/VeCITR_b_CPIM_Ind2_FdbkFA'
     */
    /* Gateway: FsftCITR_e_CPIM_Ind2_Fdbk/FsftCITR_e_CPIM_Ind2_FdbkChrt */
    /* During: FsftCITR_e_CPIM_Ind2_Fdbk/FsftCITR_e_CPIM_Ind2_FdbkChrt */
    /* Entry Internal: FsftCITR_e_CPIM_Ind2_Fdbk/FsftCITR_e_CPIM_Ind2_FdbkChrt */
    /* Transition: '<S723>:2' */
    (void)Rte_Write_VeCITR_b_CPIM_Ind2_FdbkFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_e_CPIM_Ind2_Fdbk' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_e_CPIM_Ind3_Fdbk(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_e_CPIM_Ind3_Fdbk' */
    /* Outport: '<Root>/VeCITR_b_CPIM_Ind3_FdbkFA' incorporates:
     *  Chart: '<S130>/FsftCITR_e_CPIM_Ind3_FdbkChrt'
     *  SignalConversion generated from: '<S130>/VeCITR_b_CPIM_Ind3_FdbkFA'
     */
    /* Gateway: FsftCITR_e_CPIM_Ind3_Fdbk/FsftCITR_e_CPIM_Ind3_FdbkChrt */
    /* During: FsftCITR_e_CPIM_Ind3_Fdbk/FsftCITR_e_CPIM_Ind3_FdbkChrt */
    /* Entry Internal: FsftCITR_e_CPIM_Ind3_Fdbk/FsftCITR_e_CPIM_Ind3_FdbkChrt */
    /* Transition: '<S724>:2' */
    (void)Rte_Write_VeCITR_b_CPIM_Ind3_FdbkFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_e_CPIM_Ind3_Fdbk' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_e_CPIM_Ind4_Fdbk(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_e_CPIM_Ind4_Fdbk' */
    /* Outport: '<Root>/VeCITR_b_CPIM_Ind4_FdbkFA' incorporates:
     *  Chart: '<S131>/FsftCITR_e_CPIM_Ind4_FdbkChrt'
     *  SignalConversion generated from: '<S131>/VeCITR_b_CPIM_Ind4_FdbkFA'
     */
    /* Gateway: FsftCITR_e_CPIM_Ind4_Fdbk/FsftCITR_e_CPIM_Ind4_FdbkChrt */
    /* During: FsftCITR_e_CPIM_Ind4_Fdbk/FsftCITR_e_CPIM_Ind4_FdbkChrt */
    /* Entry Internal: FsftCITR_e_CPIM_Ind4_Fdbk/FsftCITR_e_CPIM_Ind4_FdbkChrt */
    /* Transition: '<S725>:2' */
    (void)Rte_Write_VeCITR_b_CPIM_Ind4_FdbkFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_e_CPIM_Ind4_Fdbk' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_e_CPIM_Ind5_Fdbk(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_e_CPIM_Ind5_Fdbk' */
    /* Outport: '<Root>/VeCITR_b_CPIM_Ind5_FdbkFA' incorporates:
     *  Chart: '<S132>/FsftCITR_e_CPIM_Ind5_FdbkChrt'
     *  SignalConversion generated from: '<S132>/VeCITR_b_CPIM_Ind5_FdbkFA'
     */
    /* Gateway: FsftCITR_e_CPIM_Ind5_Fdbk/FsftCITR_e_CPIM_Ind5_FdbkChrt */
    /* During: FsftCITR_e_CPIM_Ind5_Fdbk/FsftCITR_e_CPIM_Ind5_FdbkChrt */
    /* Entry Internal: FsftCITR_e_CPIM_Ind5_Fdbk/FsftCITR_e_CPIM_Ind5_FdbkChrt */
    /* Transition: '<S726>:2' */
    (void)Rte_Write_VeCITR_b_CPIM_Ind5_FdbkFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_e_CPIM_Ind5_Fdbk' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_e_CPIM_Ind_Color_Fdbk(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_e_CPIM_Ind_Color_Fdbk' */
    /* Outport: '<Root>/VeCITR_b_CPIM_Ind_Color_FdbkFA' incorporates:
     *  Chart: '<S133>/FsftCITR_e_CPIM_Ind_Color_FdbkChrt'
     *  SignalConversion generated from: '<S133>/VeCITR_b_CPIM_Ind_Color_FdbkFA'
     */
    /* Gateway: FsftCITR_e_CPIM_Ind_Color_Fdbk/FsftCITR_e_CPIM_Ind_Color_FdbkChrt */
    /* During: FsftCITR_e_CPIM_Ind_Color_Fdbk/FsftCITR_e_CPIM_Ind_Color_FdbkChrt */
    /* Entry Internal: FsftCITR_e_CPIM_Ind_Color_Fdbk/FsftCITR_e_CPIM_Ind_Color_FdbkChrt */
    /* Transition: '<S727>:2' */
    (void)Rte_Write_VeCITR_b_CPIM_Ind_Color_FdbkFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_e_CPIM_Ind_Color_Fdbk' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_e_ChrgPortLock_FailSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_e_ChrgPortLock_FailSts' */
    /* Outport: '<Root>/VeCITR_b_ChrgPortLock_FailStsFA' incorporates:
     *  Chart: '<S134>/FsftCITR_e_ChrgPortLock_FailStsChrt'
     *  SignalConversion generated from: '<S134>/VeCITR_b_ChrgPortLock_FailStsFA'
     */
    /* Gateway: FsftCITR_e_ChrgPortLock_FailSts/FsftCITR_e_ChrgPortLock_FailStsChrt */
    /* During: FsftCITR_e_ChrgPortLock_FailSts/FsftCITR_e_ChrgPortLock_FailStsChrt */
    /* Entry Internal: FsftCITR_e_ChrgPortLock_FailSts/FsftCITR_e_ChrgPortLock_FailStsChrt */
    /* Transition: '<S728>:2' */
    (void)Rte_Write_VeCITR_b_ChrgPortLock_FailStsFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_e_ChrgPortLock_FailSts' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_e_ChrgrFlapSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_e_ChrgrFlapSts' */
    /* Outport: '<Root>/VeCITR_b_ChrgrFlapSts_FA' incorporates:
     *  Chart: '<S135>/FsftCITR_e_ChrgrFlapStsChrt'
     *  SignalConversion generated from: '<S135>/VeCITR_b_ChrgrFlapStsFA'
     */
    /* Gateway: FsftCITR_e_ChrgrFlapSts/FsftCITR_e_ChrgrFlapStsChrt */
    /* During: FsftCITR_e_ChrgrFlapSts/FsftCITR_e_ChrgrFlapStsChrt */
    /* Entry Internal: FsftCITR_e_ChrgrFlapSts/FsftCITR_e_ChrgrFlapStsChrt */
    /* Transition: '<S729>:2' */
    (void)Rte_Write_VeCITR_b_ChrgrFlapSts_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_e_ChrgrFlapSts' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_e_CoopCh_ChrgCmd(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_e_CoopCh_ChrgCmd' */
    /* Outport: '<Root>/VeCITR_b_CoopCh_ChrgCmdFA' incorporates:
     *  Chart: '<S136>/FsftCITR_e_CoopCh_ChrgCmdChrt'
     *  SignalConversion generated from: '<S136>/VeCITR_b_CoopCh_ChrgCmdFA'
     */
    /* Gateway: FsftCITR_e_CoopCh_ChrgCmd/FsftCITR_e_CoopCh_ChrgCmdChrt */
    /* During: FsftCITR_e_CoopCh_ChrgCmd/FsftCITR_e_CoopCh_ChrgCmdChrt */
    /* Entry Internal: FsftCITR_e_CoopCh_ChrgCmd/FsftCITR_e_CoopCh_ChrgCmdChrt */
    /* Transition: '<S730>:2' */
    (void)Rte_Write_VeCITR_b_CoopCh_ChrgCmdFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_e_CoopCh_ChrgCmd' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_e_DoorLockLastElSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_e_DoorLockLastElSts' */
    /* Merge: '<Root>/Merge_20' incorporates:
     *  Chart: '<S137>/FsftCITR_e_DoorLockLastElStsChrt'
     *  SignalConversion generated from: '<S137>/VeCITR_b_DoorLockLastElStsFA_write'
     */
    /* Gateway: FsftCITR_e_DoorLockLastElSts/FsftCITR_e_DoorLockLastElStsChrt */
    /* During: FsftCITR_e_DoorLockLastElSts/FsftCITR_e_DoorLockLastElStsChrt */
    /* Entry Internal: FsftCITR_e_DoorLockLastElSts/FsftCITR_e_DoorLockLastElStsChrt */
    /* Transition: '<S731>:2' */
    Rte_IrvWrite_FsftCITR_e_DoorLockLastElSts_DoorLockLastElSts_FA_Init_write_IRV
        (true);

    /* Merge: '<Root>/Merge_10' incorporates:
     *  Chart: '<S137>/FsftCITR_e_DoorLockLastElStsChrt'
     *  SignalConversion generated from: '<S137>/VeCITR_b_DoorLockLastElStsSgnl_Rcvd_write'
     */
    Rte_IrvWrite_FsftCITR_e_DoorLockLastElSts_DoorLockLastElSts_SgnlRcvd_Init_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_e_DoorLockLastElSts' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_e_DoorLockLastElSts_2(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_e_DoorLockLastElSts_2' */
    /* Merge: '<Root>/Merge_21' incorporates:
     *  Chart: '<S138>/FsftCITR_e_DoorLockLastElSts_2Chrt'
     *  SignalConversion generated from: '<S138>/VeCITR_b_DoorLockLastElSts_2FA_write'
     */
    /* Gateway: FsftCITR_e_DoorLockLastElSts_2/FsftCITR_e_DoorLockLastElSts_2Chrt */
    /* During: FsftCITR_e_DoorLockLastElSts_2/FsftCITR_e_DoorLockLastElSts_2Chrt */
    /* Entry Internal: FsftCITR_e_DoorLockLastElSts_2/FsftCITR_e_DoorLockLastElSts_2Chrt */
    /* Transition: '<S732>:2' */
    Rte_IrvWrite_FsftCITR_e_DoorLockLastElSts_2_DoorLockLastElSts_2_FA_Init_write_IRV
        (true);

    /* Merge: '<Root>/Merge_19' incorporates:
     *  Chart: '<S138>/FsftCITR_e_DoorLockLastElSts_2Chrt'
     *  SignalConversion generated from: '<S138>/VeCITR_b_DoorLockLastElSts_2Sgnl_Rcvd_write'
     */
    Rte_IrvWrite_FsftCITR_e_DoorLockLastElSts_2_DoorLockLastElSts_2_SgnlRcvd_Init_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_e_DoorLockLastElSts_2' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_e_FOTA_Install_Type(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_e_FOTA_Install_Type' */
    /* Outport: '<Root>/VeCITR_b_FOTA_Install_Type_FA' incorporates:
     *  Chart: '<S139>/FsftCITR_e_FOTA_Install_TypeChrt'
     *  SignalConversion generated from: '<S139>/VeCITR_b_FOTA_Install_TypeFA'
     */
    /* Gateway: FsftCITR_e_FOTA_Install_Type/FsftCITR_e_FOTA_Install_TypeChrt */
    /* During: FsftCITR_e_FOTA_Install_Type/FsftCITR_e_FOTA_Install_TypeChrt */
    /* Entry Internal: FsftCITR_e_FOTA_Install_Type/FsftCITR_e_FOTA_Install_TypeChrt */
    /* Transition: '<S733>:2' */
    (void)Rte_Write_VeCITR_b_FOTA_Install_Type_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_e_FOTA_Install_Type' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_e_HU_ChrgSchedType1(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_e_HU_ChrgSchedType1' */
    /* Chart: '<S140>/FsftCITR_e_HU_ChrgSchedType1Chrt' */
    CITR_ac_FsftCITR_e_HU_ChrgSchedType1Chrt
        (&CITR_ac_B.sf_FsftCITR_e_HU_ChrgSchedType1Chrt);

    /* Outport: '<Root>/VeCITR_b_HU_ChrgSchedType1FA' incorporates:
     *  SignalConversion generated from: '<S140>/VeCITR_b_HU_ChrgSchedType1FA'
     */
    (void)Rte_Write_VeCITR_b_HU_ChrgSchedType1FA_Value
        (CITR_ac_B.sf_FsftCITR_e_HU_ChrgSchedType1Chrt.LeCITR_b_HU_ChrgSchedType1FA_out);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_e_HU_ChrgSchedType1' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_e_HU_ChrgSchedType2(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_e_HU_ChrgSchedType2' */
    /* Chart: '<S141>/FsftCITR_e_HU_ChrgSchedType2Chrt' */
    CITR_ac_FsftCITR_e_HU_ChrgSchedType1Chrt
        (&CITR_ac_B.sf_FsftCITR_e_HU_ChrgSchedType2Chrt);

    /* Outport: '<Root>/VeCITR_b_HU_ChrgSchedType2FA' incorporates:
     *  SignalConversion generated from: '<S141>/VeCITR_b_HU_ChrgSchedType2FA'
     */
    (void)Rte_Write_VeCITR_b_HU_ChrgSchedType2FA_Value
        (CITR_ac_B.sf_FsftCITR_e_HU_ChrgSchedType2Chrt.LeCITR_b_HU_ChrgSchedType1FA_out);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_e_HU_ChrgSchedType2' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_e_PP2Fault(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_e_PP2Fault' */
    /* Outport: '<Root>/VeCITR_b_PP2FaultFA' incorporates:
     *  Chart: '<S142>/FsftCITR_e_PP2FaultChrt'
     *  SignalConversion generated from: '<S142>/VeCITR_b_PP2FaultFA'
     */
    /* Gateway: FsftCITR_e_PP2Fault/FsftCITR_e_PP2FaultChrt */
    /* During: FsftCITR_e_PP2Fault/FsftCITR_e_PP2FaultChrt */
    /* Entry Internal: FsftCITR_e_PP2Fault/FsftCITR_e_PP2FaultChrt */
    /* Transition: '<S736>:2' */
    (void)Rte_Write_VeCITR_b_PP2FaultFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_e_PP2Fault' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_e_PP2FaultRsn(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_e_PP2FaultRsn' */
    /* Outport: '<Root>/VeCITR_b_PP2FaultRsnFA' incorporates:
     *  Chart: '<S143>/FsftCITR_e_PP2FaultRsnChrt'
     *  SignalConversion generated from: '<S143>/VeCITR_b_PP2FaultRsnFA'
     */
    /* Gateway: FsftCITR_e_PP2FaultRsn/FsftCITR_e_PP2FaultRsnChrt */
    /* During: FsftCITR_e_PP2FaultRsn/FsftCITR_e_PP2FaultRsnChrt */
    /* Entry Internal: FsftCITR_e_PP2FaultRsn/FsftCITR_e_PP2FaultRsnChrt */
    /* Transition: '<S737>:2' */
    (void)Rte_Write_VeCITR_b_PP2FaultRsnFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_e_PP2FaultRsn' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_e_PP2LEDFault(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_e_PP2LEDFault' */
    /* Outport: '<Root>/VeCITR_b_PP2LEDFaultFA' incorporates:
     *  Chart: '<S144>/FsftCITR_e_PP2LEDFaultChrt'
     *  SignalConversion generated from: '<S144>/VeCITR_b_PP2LEDFaultFA'
     */
    /* Gateway: FsftCITR_e_PP2LEDFault/FsftCITR_e_PP2LEDFaultChrt */
    /* During: FsftCITR_e_PP2LEDFault/FsftCITR_e_PP2LEDFaultChrt */
    /* Entry Internal: FsftCITR_e_PP2LEDFault/FsftCITR_e_PP2LEDFaultChrt */
    /* Transition: '<S738>:2' */
    (void)Rte_Write_VeCITR_b_PP2LEDFaultFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_e_PP2LEDFault' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_e_PP2_LED_A_ColorFeedback(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_e_PP2_LED_A_ColorFeedback' */
    /* Outport: '<Root>/VeCITR_b_PP2_LED_A_Color_Feedback_FA' incorporates:
     *  Chart: '<S145>/FsftCITR_e_PP2_LED_A_ColorFeedbackChrt'
     *  SignalConversion generated from: '<S145>/VeCITR_b_PP2_LED_A_Color_Feedback_FA'
     */
    /* Gateway: FsftCITR_e_PP2_LED_A_ColorFeedback/FsftCITR_e_PP2_LED_A_ColorFeedbackChrt */
    /* During: FsftCITR_e_PP2_LED_A_ColorFeedback/FsftCITR_e_PP2_LED_A_ColorFeedbackChrt */
    /* Entry Internal: FsftCITR_e_PP2_LED_A_ColorFeedback/FsftCITR_e_PP2_LED_A_ColorFeedbackChrt */
    /* Transition: '<S739>:2' */
    (void)Rte_Write_VeCITR_b_PP2_LED_A_Color_Feedback_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_e_PP2_LED_A_ColorFeedback' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_e_PP2_LED_A_FailSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_e_PP2_LED_A_FailSts' */
    /* Outport: '<Root>/VeCITR_b_PP2_LED_A_FailStatus_FA' incorporates:
     *  Chart: '<S146>/FsftCITR_e_PP2_LED_A_FailStsChrt'
     *  SignalConversion generated from: '<S146>/VeCITR_b_PP2_LED_A_FailSts_FA'
     */
    /* Gateway: FsftCITR_e_PP2_LED_A_FailSts/FsftCITR_e_PP2_LED_A_FailStsChrt */
    /* During: FsftCITR_e_PP2_LED_A_FailSts/FsftCITR_e_PP2_LED_A_FailStsChrt */
    /* Entry Internal: FsftCITR_e_PP2_LED_A_FailSts/FsftCITR_e_PP2_LED_A_FailStsChrt */
    /* Transition: '<S740>:2' */
    (void)Rte_Write_VeCITR_b_PP2_LED_A_FailStatus_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_e_PP2_LED_A_FailSts' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_e_PP2_LED_A_Feedback(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_e_PP2_LED_A_Feedback' */
    /* Outport: '<Root>/VeCITR_b_PP2_LED_A_Feedback_FA' incorporates:
     *  Chart: '<S147>/FsftCITR_e_PP2_LED_A_FeedbackChrt'
     *  SignalConversion generated from: '<S147>/VeCITR_b_PP2_LED_A_Feedback_FA'
     */
    /* Gateway: FsftCITR_e_PP2_LED_A_Feedback/FsftCITR_e_PP2_LED_A_FeedbackChrt */
    /* During: FsftCITR_e_PP2_LED_A_Feedback/FsftCITR_e_PP2_LED_A_FeedbackChrt */
    /* Entry Internal: FsftCITR_e_PP2_LED_A_Feedback/FsftCITR_e_PP2_LED_A_FeedbackChrt */
    /* Transition: '<S741>:2' */
    (void)Rte_Write_VeCITR_b_PP2_LED_A_Feedback_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_e_PP2_LED_A_Feedback' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_e_PP2_LED_B_FailSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_e_PP2_LED_B_FailSts' */
    /* Outport: '<Root>/VeCITR_b_PP2_LED_B_FailStatus_FA' incorporates:
     *  Chart: '<S148>/FsftCITR_e_PP2_LED_B_FailStsChrt'
     *  SignalConversion generated from: '<S148>/VeCITR_b_PP2_LED_B_FailSts_FA'
     */
    /* Gateway: FsftCITR_e_PP2_LED_B_FailSts/FsftCITR_e_PP2_LED_B_FailStsChrt */
    /* During: FsftCITR_e_PP2_LED_B_FailSts/FsftCITR_e_PP2_LED_B_FailStsChrt */
    /* Entry Internal: FsftCITR_e_PP2_LED_B_FailSts/FsftCITR_e_PP2_LED_B_FailStsChrt */
    /* Transition: '<S742>:2' */
    (void)Rte_Write_VeCITR_b_PP2_LED_B_FailStatus_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_e_PP2_LED_B_FailSts' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_e_PP2_LED_B_Feedback(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_e_PP2_LED_B_Feedback' */
    /* Outport: '<Root>/VeCITR_b_PP2_LED_B_Feedback_FA' incorporates:
     *  Chart: '<S149>/FsftCITR_e_PP2_LED_B_FeedbackChrt'
     *  SignalConversion generated from: '<S149>/VeCITR_b_PP2_LED_B_Feedback_FA'
     */
    /* Gateway: FsftCITR_e_PP2_LED_B_Feedback/FsftCITR_e_PP2_LED_B_FeedbackChrt */
    /* During: FsftCITR_e_PP2_LED_B_Feedback/FsftCITR_e_PP2_LED_B_FeedbackChrt */
    /* Entry Internal: FsftCITR_e_PP2_LED_B_Feedback/FsftCITR_e_PP2_LED_B_FeedbackChrt */
    /* Transition: '<S743>:2' */
    (void)Rte_Write_VeCITR_b_PP2_LED_B_Feedback_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_e_PP2_LED_B_Feedback' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_e_PPFault(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_e_PPFault' */
    /* Outport: '<Root>/VeCITR_b_PPFaultFA' incorporates:
     *  Chart: '<S150>/FsftCITR_e_PPFaultChrt'
     *  SignalConversion generated from: '<S150>/VeCITR_b_PPFaultFA'
     */
    /* Gateway: FsftCITR_e_PPFault/FsftCITR_e_PPFaultChrt */
    /* During: FsftCITR_e_PPFault/FsftCITR_e_PPFaultChrt */
    /* Entry Internal: FsftCITR_e_PPFault/FsftCITR_e_PPFaultChrt */
    /* Transition: '<S744>:2' */
    (void)Rte_Write_VeCITR_b_PPFaultFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_e_PPFault' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_e_PPFaultRsn(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_e_PPFaultRsn' */
    /* Outport: '<Root>/VeCITR_b_PPFaultRsnFA' incorporates:
     *  Chart: '<S151>/FsftCITR_e_PPFaultRsnChrt'
     *  SignalConversion generated from: '<S151>/VeCITR_b_PPFaultRsnFA'
     */
    /* Gateway: FsftCITR_e_PPFaultRsn/FsftCITR_e_PPFaultRsnChrt */
    /* During: FsftCITR_e_PPFaultRsn/FsftCITR_e_PPFaultRsnChrt */
    /* Entry Internal: FsftCITR_e_PPFaultRsn/FsftCITR_e_PPFaultRsnChrt */
    /* Transition: '<S745>:2' */
    (void)Rte_Write_VeCITR_b_PPFaultRsnFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_e_PPFaultRsn' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_e_PPLEDFault(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_e_PPLEDFault' */
    /* Outport: '<Root>/VeCITR_b_PPLEDFaultFA' incorporates:
     *  Chart: '<S152>/FsftCITR_e_PPLEDFaultChrt'
     *  SignalConversion generated from: '<S152>/VeCITR_b_PPLEDFaultFA'
     */
    /* Gateway: FsftCITR_e_PPLEDFault/FsftCITR_e_PPLEDFaultChrt */
    /* During: FsftCITR_e_PPLEDFault/FsftCITR_e_PPLEDFaultChrt */
    /* Entry Internal: FsftCITR_e_PPLEDFault/FsftCITR_e_PPLEDFaultChrt */
    /* Transition: '<S746>:2' */
    (void)Rte_Write_VeCITR_b_PPLEDFaultFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_e_PPLEDFault' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_e_PP_LED_A_ColorFeedback(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_e_PP_LED_A_ColorFeedback' */
    /* Outport: '<Root>/VeCITR_b_PP_LED_A_Color_Feedback_FA' incorporates:
     *  Chart: '<S153>/FsftCITR_e_PP_LED_A_ColorFeedbackChrt'
     *  SignalConversion generated from: '<S153>/VeCITR_b_PP_LED_A_Color_Feedback_FA'
     */
    /* Gateway: FsftCITR_e_PP_LED_A_ColorFeedback/FsftCITR_e_PP_LED_A_ColorFeedbackChrt */
    /* During: FsftCITR_e_PP_LED_A_ColorFeedback/FsftCITR_e_PP_LED_A_ColorFeedbackChrt */
    /* Entry Internal: FsftCITR_e_PP_LED_A_ColorFeedback/FsftCITR_e_PP_LED_A_ColorFeedbackChrt */
    /* Transition: '<S747>:2' */
    (void)Rte_Write_VeCITR_b_PP_LED_A_Color_Feedback_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_e_PP_LED_A_ColorFeedback' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_e_PP_LED_A_FailSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_e_PP_LED_A_FailSts' */
    /* Outport: '<Root>/VeCITR_b_PP_LED_A_FailStatus_FA' incorporates:
     *  Chart: '<S154>/FsftCITR_e_PP_LED_A_FailStsChrt'
     *  SignalConversion generated from: '<S154>/VeCITR_b_PP_LED_A_FailSts_FA'
     */
    /* Gateway: FsftCITR_e_PP_LED_A_FailSts/FsftCITR_e_PP_LED_A_FailStsChrt */
    /* During: FsftCITR_e_PP_LED_A_FailSts/FsftCITR_e_PP_LED_A_FailStsChrt */
    /* Entry Internal: FsftCITR_e_PP_LED_A_FailSts/FsftCITR_e_PP_LED_A_FailStsChrt */
    /* Transition: '<S748>:2' */
    (void)Rte_Write_VeCITR_b_PP_LED_A_FailStatus_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_e_PP_LED_A_FailSts' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_e_PP_LED_A_Feedback(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_e_PP_LED_A_Feedback' */
    /* Outport: '<Root>/VeCITR_b_PP_LED_A_Feedback_FA' incorporates:
     *  Chart: '<S155>/FsftCITR_e_PP_LED_A_FeedbackChrt'
     *  SignalConversion generated from: '<S155>/VeCITR_b_PP_LED_A_Feedback_FA'
     */
    /* Gateway: FsftCITR_e_PP_LED_A_Feedback/FsftCITR_e_PP_LED_A_FeedbackChrt */
    /* During: FsftCITR_e_PP_LED_A_Feedback/FsftCITR_e_PP_LED_A_FeedbackChrt */
    /* Entry Internal: FsftCITR_e_PP_LED_A_Feedback/FsftCITR_e_PP_LED_A_FeedbackChrt */
    /* Transition: '<S749>:2' */
    (void)Rte_Write_VeCITR_b_PP_LED_A_Feedback_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_e_PP_LED_A_Feedback' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_e_PP_LED_B_ColorFeedback(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_e_PP_LED_B_ColorFeedback' */
    /* Outport: '<Root>/VeCITR_b_PP_LED_B_Color_Feedback_FA' incorporates:
     *  Chart: '<S156>/FsftCITR_e_PP_LED_B_ColorFeedbackChrt'
     *  SignalConversion generated from: '<S156>/VeCITR_b_PP_LED_B_Color_Feedback_FA'
     */
    /* Gateway: FsftCITR_e_PP_LED_B_ColorFeedback/FsftCITR_e_PP_LED_B_ColorFeedbackChrt */
    /* During: FsftCITR_e_PP_LED_B_ColorFeedback/FsftCITR_e_PP_LED_B_ColorFeedbackChrt */
    /* Entry Internal: FsftCITR_e_PP_LED_B_ColorFeedback/FsftCITR_e_PP_LED_B_ColorFeedbackChrt */
    /* Transition: '<S750>:2' */
    (void)Rte_Write_VeCITR_b_PP_LED_B_Color_Feedback_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_e_PP_LED_B_ColorFeedback' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_e_PP2_LED_B_ColorFeedback(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_e_PP_LED_B_ColorFeedback1' */
    /* Outport: '<Root>/VeCITR_b_PP2_LED_B_Color_Feedback_FA' incorporates:
     *  Chart: '<S157>/FsftCITR_e_PP2_LED_B_ColorFeedbackChrt'
     *  SignalConversion generated from: '<S157>/VeCITR_b_PP2_LED_B_Color_Feedback_FA'
     */
    /* Gateway: FsftCITR_e_PP_LED_B_ColorFeedback1/FsftCITR_e_PP2_LED_B_ColorFeedbackChrt */
    /* During: FsftCITR_e_PP_LED_B_ColorFeedback1/FsftCITR_e_PP2_LED_B_ColorFeedbackChrt */
    /* Entry Internal: FsftCITR_e_PP_LED_B_ColorFeedback1/FsftCITR_e_PP2_LED_B_ColorFeedbackChrt */
    /* Transition: '<S751>:2' */
    (void)Rte_Write_VeCITR_b_PP2_LED_B_Color_Feedback_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_e_PP_LED_B_ColorFeedback1' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_e_PP_LED_B_FailSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_e_PP_LED_B_FailSts' */
    /* Outport: '<Root>/VeCITR_b_PP_LED_B_FailStatus_FA' incorporates:
     *  Chart: '<S158>/FsftCITR_e_PP_LED_B_FailStsChrt'
     *  SignalConversion generated from: '<S158>/VeCITR_b_PP_LED_B_FailSts_FA'
     */
    /* Gateway: FsftCITR_e_PP_LED_B_FailSts/FsftCITR_e_PP_LED_B_FailStsChrt */
    /* During: FsftCITR_e_PP_LED_B_FailSts/FsftCITR_e_PP_LED_B_FailStsChrt */
    /* Entry Internal: FsftCITR_e_PP_LED_B_FailSts/FsftCITR_e_PP_LED_B_FailStsChrt */
    /* Transition: '<S752>:2' */
    (void)Rte_Write_VeCITR_b_PP_LED_B_FailStatus_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_e_PP_LED_B_FailSts' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_e_PP_LED_B_Feedback(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_e_PP_LED_B_Feedback' */
    /* Outport: '<Root>/VeCITR_b_PP_LED_B_Feedback_FA' incorporates:
     *  Chart: '<S159>/FsftCITR_e_PP_LED_B_FeedbackChrt'
     *  SignalConversion generated from: '<S159>/VeCITR_b_PP_LED_B_Feedback_FA'
     */
    /* Gateway: FsftCITR_e_PP_LED_B_Feedback/FsftCITR_e_PP_LED_B_FeedbackChrt */
    /* During: FsftCITR_e_PP_LED_B_Feedback/FsftCITR_e_PP_LED_B_FeedbackChrt */
    /* Entry Internal: FsftCITR_e_PP_LED_B_Feedback/FsftCITR_e_PP_LED_B_FeedbackChrt */
    /* Transition: '<S753>:2' */
    (void)Rte_Write_VeCITR_b_PP_LED_B_Feedback_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_e_PP_LED_B_Feedback' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_e_PP_LED_C_ColorFeedback(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_e_PP_LED_C_ColorFeedback' */
    /* Outport: '<Root>/VeCITR_b_PP_LED_C_Color_Feedback_FA' incorporates:
     *  Chart: '<S160>/FsftCITR_e_PP_LED_C_ColorFeedbackChrt'
     *  SignalConversion generated from: '<S160>/VeCITR_b_PP_LED_C_Color_Feedback_FA'
     */
    /* Gateway: FsftCITR_e_PP_LED_C_ColorFeedback/FsftCITR_e_PP_LED_C_ColorFeedbackChrt */
    /* During: FsftCITR_e_PP_LED_C_ColorFeedback/FsftCITR_e_PP_LED_C_ColorFeedbackChrt */
    /* Entry Internal: FsftCITR_e_PP_LED_C_ColorFeedback/FsftCITR_e_PP_LED_C_ColorFeedbackChrt */
    /* Transition: '<S754>:2' */
    (void)Rte_Write_VeCITR_b_PP_LED_C_Color_Feedback_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_e_PP_LED_C_ColorFeedback' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_e_PP_LED_C_FailSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_e_PP_LED_C_FailSts' */
    /* Outport: '<Root>/VeCITR_b_PP_LED_C_FailStatus_FA' incorporates:
     *  Chart: '<S161>/FsftCITR_e_PP_LED_C_FailStsChrt'
     *  SignalConversion generated from: '<S161>/VeCITR_b_PP_LED_C_FailSts_FA'
     */
    /* Gateway: FsftCITR_e_PP_LED_C_FailSts/FsftCITR_e_PP_LED_C_FailStsChrt */
    /* During: FsftCITR_e_PP_LED_C_FailSts/FsftCITR_e_PP_LED_C_FailStsChrt */
    /* Entry Internal: FsftCITR_e_PP_LED_C_FailSts/FsftCITR_e_PP_LED_C_FailStsChrt */
    /* Transition: '<S755>:2' */
    (void)Rte_Write_VeCITR_b_PP_LED_C_FailStatus_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_e_PP_LED_C_FailSts' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_e_PP_LED_C_Feedback(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_e_PP_LED_C_Feedback' */
    /* Outport: '<Root>/VeCITR_b_PP_LED_C_Feedback_FA' incorporates:
     *  Chart: '<S162>/FsftCITR_e_PP_LED_C_FeedbackChrt'
     *  SignalConversion generated from: '<S162>/VeCITR_b_PP_LED_C_Feedback_FA'
     */
    /* Gateway: FsftCITR_e_PP_LED_C_Feedback/FsftCITR_e_PP_LED_C_FeedbackChrt */
    /* During: FsftCITR_e_PP_LED_C_Feedback/FsftCITR_e_PP_LED_C_FeedbackChrt */
    /* Entry Internal: FsftCITR_e_PP_LED_C_Feedback/FsftCITR_e_PP_LED_C_FeedbackChrt */
    /* Transition: '<S756>:2' */
    (void)Rte_Write_VeCITR_b_PP_LED_C_Feedback_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_e_PP_LED_C_Feedback' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_e_PowerLimitReq(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_e_PowerLimitReq' */
    /* Merge: '<Root>/Merge_31' incorporates:
     *  Chart: '<S163>/FsftCITR_e_PowerLimitReqChrt'
     *  SignalConversion generated from: '<S163>/VeCITR_b_PowerLimitReqFA_write'
     */
    /* Gateway: FsftCITR_e_PowerLimitReq/FsftCITR_e_PowerLimitReqChrt */
    /* During: FsftCITR_e_PowerLimitReq/FsftCITR_e_PowerLimitReqChrt */
    /* Entry Internal: FsftCITR_e_PowerLimitReq/FsftCITR_e_PowerLimitReqChrt */
    /* Transition: '<S757>:2' */
    Rte_IrvWrite_FsftCITR_e_PowerLimitReq_PwrLimReq_FA_Init_write_IRV(true);

    /* Merge: '<Root>/Merge_32' incorporates:
     *  Chart: '<S163>/FsftCITR_e_PowerLimitReqChrt'
     *  SignalConversion generated from: '<S163>/VeCITR_b_PowerLimitReqSgnl_Rcvd_write'
     */
    Rte_IrvWrite_FsftCITR_e_PowerLimitReq_PwrLimReq_SgnlRcvd_Init_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_e_PowerLimitReq' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_e_PowerLimitReq_2(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_e_PowerLimitReq_2' */
    /* Merge: '<Root>/Merge_24' incorporates:
     *  Chart: '<S164>/FsftCITR_e_PowerLimitReq_2Chrt'
     *  SignalConversion generated from: '<S164>/VeCITR_b_PowerLimitReqSgnl_2Rcvd_write'
     */
    /* Gateway: FsftCITR_e_PowerLimitReq_2/FsftCITR_e_PowerLimitReq_2Chrt */
    /* During: FsftCITR_e_PowerLimitReq_2/FsftCITR_e_PowerLimitReq_2Chrt */
    /* Entry Internal: FsftCITR_e_PowerLimitReq_2/FsftCITR_e_PowerLimitReq_2Chrt */
    /* Transition: '<S758>:2' */
    Rte_IrvWrite_FsftCITR_e_PowerLimitReq_2_PwrLimReq_SgnlRcvd_2_Init_write_IRV
        (false);

    /* Merge: '<Root>/Merge_25' incorporates:
     *  Chart: '<S164>/FsftCITR_e_PowerLimitReq_2Chrt'
     *  SignalConversion generated from: '<S164>/VeCITR_b_PowerLimitReq_2FA_write'
     */
    Rte_IrvWrite_FsftCITR_e_PowerLimitReq_2_PwrLimReq_FA_2_Init_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_e_PowerLimitReq_2' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_e_RmtChrgPortLkCmd(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_e_RmtChrgPortLkCmd' */
    /* Outport: '<Root>/VeCITR_b_RmtChrgPortLkCmdFA' incorporates:
     *  Chart: '<S165>/FsftCITR_e_RmtChrgPortLkCmdChrt'
     *  SignalConversion generated from: '<S165>/VeCITR_b_RmtChrgPortLkCmdFA'
     */
    /* Gateway: FsftCITR_e_RmtChrgPortLkCmd/FsftCITR_e_RmtChrgPortLkCmdChrt */
    /* During: FsftCITR_e_RmtChrgPortLkCmd/FsftCITR_e_RmtChrgPortLkCmdChrt */
    /* Entry Internal: FsftCITR_e_RmtChrgPortLkCmd/FsftCITR_e_RmtChrgPortLkCmdChrt */
    /* Transition: '<S759>:2' */
    (void)Rte_Write_VeCITR_b_RmtChrgPortLkCmdFA_Value(true);

    /* Outport: '<Root>/VeCITR_b_RmtChrgPortLkCmd_SgnlRcvd' incorporates:
     *  Chart: '<S165>/FsftCITR_e_RmtChrgPortLkCmdChrt'
     *  SignalConversion generated from: '<S165>/VeCITR_b_RmtChrgPortLkCmd_SgnlRcvd'
     */
    (void)Rte_Write_VeCITR_b_RmtChrgPortLkCmd_SgnlRcvd_Value(false);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_e_RmtChrgPortLkCmd' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_e_TBM_ChrgSchedType1(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_e_TBM_ChrgSchedType1' */
    /* Outport: '<Root>/VeCITR_b_TBM_ChrgSchedType1FA' incorporates:
     *  Chart: '<S166>/FsftCITR_e_TBM_ChrgSchedType1Chrt'
     *  SignalConversion generated from: '<S166>/VeCITR_b_TBM_ChrgSchedType1FA'
     */
    /* Gateway: FsftCITR_e_TBM_ChrgSchedType1/FsftCITR_e_TBM_ChrgSchedType1Chrt */
    /* During: FsftCITR_e_TBM_ChrgSchedType1/FsftCITR_e_TBM_ChrgSchedType1Chrt */
    /* Entry Internal: FsftCITR_e_TBM_ChrgSchedType1/FsftCITR_e_TBM_ChrgSchedType1Chrt */
    /* Transition: '<S760>:2' */
    (void)Rte_Write_VeCITR_b_TBM_ChrgSchedType1FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_e_TBM_ChrgSchedType1' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_e_TBM_ChrgSchedType2(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_e_TBM_ChrgSchedType2' */
    /* Outport: '<Root>/VeCITR_b_TBM_ChrgSchedType2FA' incorporates:
     *  Chart: '<S167>/FsftCITR_e_TBM_ChrgSchedType2Chrt'
     *  SignalConversion generated from: '<S167>/VeCITR_b_TBM_ChrgSchedType2FA'
     */
    /* Gateway: FsftCITR_e_TBM_ChrgSchedType2/FsftCITR_e_TBM_ChrgSchedType2Chrt */
    /* During: FsftCITR_e_TBM_ChrgSchedType2/FsftCITR_e_TBM_ChrgSchedType2Chrt */
    /* Entry Internal: FsftCITR_e_TBM_ChrgSchedType2/FsftCITR_e_TBM_ChrgSchedType2Chrt */
    /* Transition: '<S761>:2' */
    (void)Rte_Write_VeCITR_b_TBM_ChrgSchedType2FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_e_TBM_ChrgSchedType2' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_l_DistanceToCharge(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_l_DistanceToCharge' */
    /* Outport: '<Root>/VeCITR_b_DistanceToCharge_FA' incorporates:
     *  Chart: '<S168>/FsftCITR_l_DistanceToChargeChrt'
     *  SignalConversion generated from: '<S168>/VeCITR_b_DistanceToChargeFA'
     */
    /* Gateway: FsftCITR_l_DistanceToCharge/FsftCITR_l_DistanceToChargeChrt */
    /* During: FsftCITR_l_DistanceToCharge/FsftCITR_l_DistanceToChargeChrt */
    /* Entry Internal: FsftCITR_l_DistanceToCharge/FsftCITR_l_DistanceToChargeChrt */
    /* Transition: '<S762>:2' */
    (void)Rte_Write_VeCITR_b_DistanceToCharge_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_l_DistanceToCharge' */
}

/* Output function */
FUNC(void, CITR_CODE) FsftCITR_t_TimeToCharge(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCITR_t_TimeToCharge' */
    /* Outport: '<Root>/VeCITR_b_TimeToCharge_FA' incorporates:
     *  Chart: '<S169>/FsftCITR_t_TimeToChargeChrt'
     *  SignalConversion generated from: '<S169>/VeCITR_b_TimeToChargeFA'
     */
    /* Gateway: FsftCITR_t_TimeToCharge/FsftCITR_t_TimeToChargeChrt */
    /* During: FsftCITR_t_TimeToCharge/FsftCITR_t_TimeToChargeChrt */
    /* Entry Internal: FsftCITR_t_TimeToCharge/FsftCITR_t_TimeToChargeChrt */
    /* Transition: '<S763>:2' */
    (void)Rte_Write_VeCITR_b_TimeToCharge_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCITR_t_TimeToCharge' */
}

/* Output function */
FUNC(void, CITR_CODE) IOControl_Charge_Port_Lock(void)
{
    TeDCAB_e_IOControlOpType rtb_TmpSignalConversionAtVeDCAB_e_IOCont;
    TeODCR_e_IO_CntrlSt rtb_TmpSignalConversionAtVeDCAB;
    boolean tmpRead;

    /* RootInportFunctionCallGenerator generated from: '<Root>/IOControl_Charge_Port_Lock' incorporates:
     *  SubSystem: '<Root>/Runnable_Charge_Port_Lock'
     */
    /* SignalConversion generated from: '<S426>/VeDCAB_e_IOControl_Charge_Port_Lock_Op' incorporates:
     *  Inport: '<Root>/VeDCAB_e_IOControl_Charge_Port_Lock_Op'
     */
    (void)Rte_Read_VeDCAB_e_IOControl_Charge_Port_Lock_Op_Value
        (&rtb_TmpSignalConversionAtVeDCAB_e_IOCont);

    /* Switch: '<S426>/Switch' incorporates:
     *  Constant: '<S1023>/Constant'
     *  Constant: '<S1027>/Constant'
     *  Constant: '<S1028>/Constant'
     *  RelationalOperator: '<S426>/Equal'
     *  RelationalOperator: '<S426>/Equal1'
     *  RelationalOperator: '<S426>/Equal2'
     *  Switch: '<S426>/Switch1'
     *  Switch: '<S426>/Switch2'
     */
    if (((uint32)rtb_TmpSignalConversionAtVeDCAB_e_IOCont) ==
            CeDCAB_e_IO_ShortTermAdj)
    {
        /* Outport: '<Root>/VeCITR_e_DVC_ChrgPort_IO' incorporates:
         *  Constant: '<S1024>/Constant'
         */
        (void)Rte_Write_VeCITR_e_DVC_ChrgPort_IO_Value(CeODCR_e_ShortTermAdjust);
    }
    else
    {
        if (((uint32)rtb_TmpSignalConversionAtVeDCAB_e_IOCont) ==
                CeDCAB_e_IO_FreezeCurrentSt)
        {
            /* Switch: '<S426>/Switch2' incorporates:
             *  Constant: '<S1029>/Constant'
             */
            rtb_TmpSignalConversionAtVeDCAB = CeODCR_e_FreezeCurrentSt;
        }
        else if (((uint32)rtb_TmpSignalConversionAtVeDCAB_e_IOCont) ==
                 CeDCAB_e_IO_ResetToDefault)
        {
            /* Switch: '<S426>/Switch1' incorporates:
             *  Constant: '<S1025>/Constant'
             *  Switch: '<S426>/Switch2'
             */
            rtb_TmpSignalConversionAtVeDCAB = CeODCR_e_Return_Default_Cntrl;
        }
        else
        {
            /* Switch: '<S426>/Switch2' incorporates:
             *  Constant: '<S1026>/Constant'
             *  Switch: '<S426>/Switch1'
             */
            rtb_TmpSignalConversionAtVeDCAB = CeODCR_e_Return_ECU_Cntrl;
        }

        /* Outport: '<Root>/VeCITR_e_DVC_ChrgPort_IO' incorporates:
         *  Constant: '<S1027>/Constant'
         *  RelationalOperator: '<S426>/Equal1'
         *  Switch: '<S426>/Switch1'
         *  Switch: '<S426>/Switch2'
         */
        (void)Rte_Write_VeCITR_e_DVC_ChrgPort_IO_Value
            (rtb_TmpSignalConversionAtVeDCAB);
    }

    /* End of Switch: '<S426>/Switch' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/IOControl_Charge_Port_Lock' */

    /* Inport: '<Root>/VeDCAB_b_IOCtrlD014ChargePortRq' */
    (void)Rte_Read_VeDCAB_b_IOCtrlD014ChargePortRq_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/IOControl_Charge_Port_Lock' incorporates:
     *  SubSystem: '<Root>/Runnable_Charge_Port_Lock'
     */
    /* Outport: '<Root>/VeCITR_b_DVC_ChrgPortRq' incorporates:
     *  SignalConversion generated from: '<S426>/VeDCAB_b_IOCtrlD014ChargePortRq'
     */
    (void)Rte_Write_VeCITR_b_DVC_ChrgPortRq_Value(tmpRead);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/IOControl_Charge_Port_Lock' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_I_PP2CurrentDrawSens1(VAR(float32, AUTOMATIC)
    LeCITR_I_PP2CurrentDrawSens1, VAR(boolean, AUTOMATIC)
    LeCITR_b_PP2CurrentDrawSens1FA)
{
    boolean rtb_LeCITR_b_PP2CurrentDrawSens1FA_out_e;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_I_PP2CurrentDrawSens1' */
    /* Chart: '<S170>/PokeCITR_I_PP2CurrentDrawSens1Chrt' incorporates:
     *  SignalConversion generated from: '<S170>/LeCITR_e_FOTA_Installation_Status1'
     *  SignalConversion generated from: '<S170>/LeCITR_e_FOTA_Installation_Status'
     */
    /* Gateway: PokeCITR_I_PP2CurrentDrawSens1/PokeCITR_I_PP2CurrentDrawSens1Chrt */
    /* During: PokeCITR_I_PP2CurrentDrawSens1/PokeCITR_I_PP2CurrentDrawSens1Chrt */
    /* Entry Internal: PokeCITR_I_PP2CurrentDrawSens1/PokeCITR_I_PP2CurrentDrawSens1Chrt */
    /* Transition: '<S764>:2' */
    if (!LeCITR_b_PP2CurrentDrawSens1FA)
    {
        /* Transition: '<S764>:20' */
        /* Transition: '<S764>:23' */
        CITR_ac_B.LeCITR_I_PP2CurrentDrawSens1_out =
            LeCITR_I_PP2CurrentDrawSens1;
        rtb_LeCITR_b_PP2CurrentDrawSens1FA_out_e = false;

        /* Transition: '<S764>:25' */
    }
    else
    {
        /* Transition: '<S764>:24' */
        rtb_LeCITR_b_PP2CurrentDrawSens1FA_out_e = true;
    }

    /* End of Chart: '<S170>/PokeCITR_I_PP2CurrentDrawSens1Chrt' */

    /* Outport: '<Root>/VeCITR_I_PP2CurrentDrawSens1' incorporates:
     *  SignalConversion generated from: '<S170>/VeCITR_I_PP2CurrentDrawSens1'
     */
    (void)Rte_Write_VeCITR_I_PP2CurrentDrawSens1_Value
        (CITR_ac_B.LeCITR_I_PP2CurrentDrawSens1_out);

    /* Outport: '<Root>/VeCITR_b_PP2CurrentDrawSens1FA' incorporates:
     *  SignalConversion generated from: '<S170>/VeCITR_b_PP2CurrentDrawSens1FA'
     */
    (void)Rte_Write_VeCITR_b_PP2CurrentDrawSens1FA_Value
        (rtb_LeCITR_b_PP2CurrentDrawSens1FA_out_e);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_I_PP2CurrentDrawSens1' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_I_PP2CurrentDrawSens2(VAR(float32, AUTOMATIC)
    LeCITR_I_PP2CurrentDrawSens2, VAR(boolean, AUTOMATIC)
    LeCITR_b_PP2CurrentDrawSens2FA)
{
    boolean rtb_LeCITR_b_PP2CurrentDrawSens2FA_out_c;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_I_PP2CurrentDrawSens2' */
    /* Chart: '<S171>/PokeCITR_I_PP2CurrentDrawSens2Chrt' incorporates:
     *  SignalConversion generated from: '<S171>/LeCITR_e_FOTA_Installation_Status1'
     *  SignalConversion generated from: '<S171>/LeCITR_e_FOTA_Installation_Status'
     */
    /* Gateway: PokeCITR_I_PP2CurrentDrawSens2/PokeCITR_I_PP2CurrentDrawSens2Chrt */
    /* During: PokeCITR_I_PP2CurrentDrawSens2/PokeCITR_I_PP2CurrentDrawSens2Chrt */
    /* Entry Internal: PokeCITR_I_PP2CurrentDrawSens2/PokeCITR_I_PP2CurrentDrawSens2Chrt */
    /* Transition: '<S765>:2' */
    if (!LeCITR_b_PP2CurrentDrawSens2FA)
    {
        /* Transition: '<S765>:20' */
        /* Transition: '<S765>:23' */
        CITR_ac_B.LeCITR_I_PP2CurrentDrawSens2_out =
            LeCITR_I_PP2CurrentDrawSens2;
        rtb_LeCITR_b_PP2CurrentDrawSens2FA_out_c = false;

        /* Transition: '<S765>:25' */
    }
    else
    {
        /* Transition: '<S765>:24' */
        rtb_LeCITR_b_PP2CurrentDrawSens2FA_out_c = true;
    }

    /* End of Chart: '<S171>/PokeCITR_I_PP2CurrentDrawSens2Chrt' */

    /* Outport: '<Root>/VeCITR_I_PP2CurrentDrawSens2' incorporates:
     *  SignalConversion generated from: '<S171>/VeCITR_I_PP2CurrentDrawSens2'
     */
    (void)Rte_Write_VeCITR_I_PP2CurrentDrawSens2_Value
        (CITR_ac_B.LeCITR_I_PP2CurrentDrawSens2_out);

    /* Outport: '<Root>/VeCITR_b_PP2CurrentDrawSens2FA' incorporates:
     *  SignalConversion generated from: '<S171>/VeCITR_b_PP2CurrentDrawSens2FA'
     */
    (void)Rte_Write_VeCITR_b_PP2CurrentDrawSens2FA_Value
        (rtb_LeCITR_b_PP2CurrentDrawSens2FA_out_c);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_I_PP2CurrentDrawSens2' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_I_PPCurrentDrawSens1(VAR(float32, AUTOMATIC)
    LeCITR_I_PPCurrentDrawSens1, VAR(boolean, AUTOMATIC)
    LeCITR_b_PPCurrentDrawSens1FA)
{
    boolean rtb_LeCITR_b_PPCurrentDrawSens1FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_I_PPCurrentDrawSens1' */
    /* Chart: '<S172>/PokeCITR_I_PPCurrentDrawSens1Chrt' incorporates:
     *  SignalConversion generated from: '<S172>/LeCITR_e_FOTA_Installation_Status1'
     *  SignalConversion generated from: '<S172>/LeCITR_e_FOTA_Installation_Status'
     */
    /* Gateway: PokeCITR_I_PPCurrentDrawSens1/PokeCITR_I_PPCurrentDrawSens1Chrt */
    /* During: PokeCITR_I_PPCurrentDrawSens1/PokeCITR_I_PPCurrentDrawSens1Chrt */
    /* Entry Internal: PokeCITR_I_PPCurrentDrawSens1/PokeCITR_I_PPCurrentDrawSens1Chrt */
    /* Transition: '<S766>:2' */
    if (!LeCITR_b_PPCurrentDrawSens1FA)
    {
        /* Transition: '<S766>:20' */
        /* Transition: '<S766>:23' */
        CITR_ac_B.LeCITR_I_PPCurrentDrawSens1_out = LeCITR_I_PPCurrentDrawSens1;
        rtb_LeCITR_b_PPCurrentDrawSens1FA_out = false;

        /* Transition: '<S766>:25' */
    }
    else
    {
        /* Transition: '<S766>:24' */
        rtb_LeCITR_b_PPCurrentDrawSens1FA_out = true;
    }

    /* End of Chart: '<S172>/PokeCITR_I_PPCurrentDrawSens1Chrt' */

    /* Outport: '<Root>/VeCITR_I_PPCurrentDrawSens1' incorporates:
     *  SignalConversion generated from: '<S172>/VeCITR_I_PPCurrentDrawSens1'
     */
    (void)Rte_Write_VeCITR_I_PPCurrentDrawSens1_Value
        (CITR_ac_B.LeCITR_I_PPCurrentDrawSens1_out);

    /* Outport: '<Root>/VeCITR_b_PPCurrentDrawSens1FA' incorporates:
     *  SignalConversion generated from: '<S172>/VeCITR_b_PPCurrentDrawSens1FA'
     */
    (void)Rte_Write_VeCITR_b_PPCurrentDrawSens1FA_Value
        (rtb_LeCITR_b_PPCurrentDrawSens1FA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_I_PPCurrentDrawSens1' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_I_PPCurrentDrawSens2(VAR(float32, AUTOMATIC)
    LeCITR_I_PPCurrentDrawSens2, VAR(boolean, AUTOMATIC)
    LeCITR_b_PPCurrentDrawSens2FA)
{
    boolean rtb_LeCITR_b_PPCurrentDrawSens2FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_I_PPCurrentDrawSens2' */
    /* Chart: '<S173>/PokeCITR_I_PPCurrentDrawSens2Chrt' incorporates:
     *  SignalConversion generated from: '<S173>/LeCITR_e_FOTA_Installation_Status1'
     *  SignalConversion generated from: '<S173>/LeCITR_e_FOTA_Installation_Status'
     */
    /* Gateway: PokeCITR_I_PPCurrentDrawSens2/PokeCITR_I_PPCurrentDrawSens2Chrt */
    /* During: PokeCITR_I_PPCurrentDrawSens2/PokeCITR_I_PPCurrentDrawSens2Chrt */
    /* Entry Internal: PokeCITR_I_PPCurrentDrawSens2/PokeCITR_I_PPCurrentDrawSens2Chrt */
    /* Transition: '<S767>:2' */
    if (!LeCITR_b_PPCurrentDrawSens2FA)
    {
        /* Transition: '<S767>:20' */
        /* Transition: '<S767>:23' */
        CITR_ac_B.LeCITR_I_PPCurrentDrawSens2_out = LeCITR_I_PPCurrentDrawSens2;
        rtb_LeCITR_b_PPCurrentDrawSens2FA_out = false;

        /* Transition: '<S767>:25' */
    }
    else
    {
        /* Transition: '<S767>:24' */
        rtb_LeCITR_b_PPCurrentDrawSens2FA_out = true;
    }

    /* End of Chart: '<S173>/PokeCITR_I_PPCurrentDrawSens2Chrt' */

    /* Outport: '<Root>/VeCITR_I_PPCurrentDrawSens2' incorporates:
     *  SignalConversion generated from: '<S173>/VeCITR_I_PPCurrentDrawSens2'
     */
    (void)Rte_Write_VeCITR_I_PPCurrentDrawSens2_Value
        (CITR_ac_B.LeCITR_I_PPCurrentDrawSens2_out);

    /* Outport: '<Root>/VeCITR_b_PPCurrentDrawSens2FA' incorporates:
     *  SignalConversion generated from: '<S173>/VeCITR_b_PPCurrentDrawSens2FA'
     */
    (void)Rte_Write_VeCITR_b_PPCurrentDrawSens2FA_Value
        (rtb_LeCITR_b_PPCurrentDrawSens2FA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_I_PPCurrentDrawSens2' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_ChrgPortHbridgeFlt(VAR(sint16, AUTOMATIC)
    LeCITR_K_ChrgPortHbridgeFlt)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_ChrgPortHbridgeFlt' */
    /* Outport: '<Root>/VeCITR_d_ChrgPortHbridgeFlt' incorporates:
     *  SignalConversion generated from: '<S174>/VeCITR_K_ChrgPortHbridgeFlt'
     *  SignalConversion generated from: '<S174>/LeCITR_K_ChrgPortHbridgeFlt'
     */
    /* Gateway: PokeCITR_K_ChrgPortHbridgeFlt/PokeCITR_K_ChrgPortHbridgeFltChrt */
    /* During: PokeCITR_K_ChrgPortHbridgeFlt/PokeCITR_K_ChrgPortHbridgeFltChrt */
    /* Entry Internal: PokeCITR_K_ChrgPortHbridgeFlt/PokeCITR_K_ChrgPortHbridgeFltChrt */
    /* Transition: '<S768>:2' */
    (void)Rte_Write_VeCITR_d_ChrgPortHbridgeFlt_Value
        (LeCITR_K_ChrgPortHbridgeFlt);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_ChrgPortHbridgeFlt' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_DateTmDay(VAR(float32, AUTOMATIC)
    LeCITR_K_DateTmDay, VAR(boolean, AUTOMATIC) LeCITR_b_DateTmDayFA)
{
    boolean rtb_LeCITR_b_DateTmDayFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_DateTmDay' */
    /* Chart: '<S175>/PokeCITR_K_DateTmDayChrt' incorporates:
     *  SignalConversion generated from: '<S175>/LeCITR_K_DateTmDay'
     *  SignalConversion generated from: '<S175>/LeCITR_b_DateTmDayFA'
     */
    /* Gateway: PokeCITR_K_DateTmDay/PokeCITR_K_DateTmDayChrt */
    /* During: PokeCITR_K_DateTmDay/PokeCITR_K_DateTmDayChrt */
    /* Entry Internal: PokeCITR_K_DateTmDay/PokeCITR_K_DateTmDayChrt */
    /* Transition: '<S769>:2' */
    if (!LeCITR_b_DateTmDayFA)
    {
        /* Transition: '<S769>:3' */
        /* Transition: '<S769>:15' */
        CITR_ac_B.LeCITR_K_DateTmDay_out = LeCITR_K_DateTmDay;
        rtb_LeCITR_b_DateTmDayFA_out = false;
        CITR_ac_B.LeCITR_b_DateTmDaySgnl_Rcvd = true;

        /* Transition: '<S769>:18' */
    }
    else
    {
        /* Transition: '<S769>:4' */
        rtb_LeCITR_b_DateTmDayFA_out = true;
    }

    /* End of Chart: '<S175>/PokeCITR_K_DateTmDayChrt' */

    /* Outport: '<Root>/VeCITR_K_DateTmDay' incorporates:
     *  SignalConversion generated from: '<S175>/VeCITR_K_DateTmDay'
     */
    (void)Rte_Write_VeCITR_K_DateTmDay_Value(CITR_ac_B.LeCITR_K_DateTmDay_out);

    /* Outport: '<Root>/VeCITR_b_DateTmDay_FA' incorporates:
     *  SignalConversion generated from: '<S175>/VeCITR_b_DateTmDayFA'
     */
    (void)Rte_Write_VeCITR_b_DateTmDay_FA_Value(rtb_LeCITR_b_DateTmDayFA_out);

    /* Outport: '<Root>/VeCITR_b_DateTmDay_SgnlRcvd' incorporates:
     *  SignalConversion generated from: '<S175>/VeCITR_b_DateTmDaySgnl_Rcvd'
     */
    (void)Rte_Write_VeCITR_b_DateTmDay_SgnlRcvd_Value
        (CITR_ac_B.LeCITR_b_DateTmDaySgnl_Rcvd);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_DateTmDay' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_DateTmHour(VAR(float32, AUTOMATIC)
    LeCITR_K_DateTmHour)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_DateTmHour' */
    /* Outport: '<Root>/VeCITR_K_DateTmHour' incorporates:
     *  SignalConversion generated from: '<S176>/VeCITR_K_DateTmHour'
     *  SignalConversion generated from: '<S176>/LeCITR_K_DateTmHour'
     */
    /* Gateway: PokeCITR_K_DateTmHour/PokeCITR_K_DateTmHourChrt */
    /* During: PokeCITR_K_DateTmHour/PokeCITR_K_DateTmHourChrt */
    /* Entry Internal: PokeCITR_K_DateTmHour/PokeCITR_K_DateTmHourChrt */
    /* Transition: '<S770>:2' */
    (void)Rte_Write_VeCITR_K_DateTmHour_Value(LeCITR_K_DateTmHour);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_DateTmHour' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_DateTmMin(VAR(float32, AUTOMATIC)
    LeCITR_K_DateTmMin)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_DateTmMin' */
    /* Outport: '<Root>/VeCITR_K_DateTmMin' incorporates:
     *  SignalConversion generated from: '<S177>/VeCITR_K_DateTmMin'
     *  SignalConversion generated from: '<S177>/LeCITR_K_DateTmMin'
     */
    /* Gateway: PokeCITR_K_DateTmMin/PokeCITR_K_DateTmMinChrt */
    /* During: PokeCITR_K_DateTmMin/PokeCITR_K_DateTmMinChrt */
    /* Entry Internal: PokeCITR_K_DateTmMin/PokeCITR_K_DateTmMinChrt */
    /* Transition: '<S771>:2' */
    (void)Rte_Write_VeCITR_K_DateTmMin_Value(LeCITR_K_DateTmMin);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_DateTmMin' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_DateTmMon(VAR(float32, AUTOMATIC)
    LeCITR_K_DateTmMon)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_DateTmMon' */
    /* Outport: '<Root>/VeCITR_K_DateTmMon' incorporates:
     *  SignalConversion generated from: '<S178>/VeCITR_K_DateTmMon'
     *  SignalConversion generated from: '<S178>/LeCITR_K_DateTmMon'
     */
    /* Gateway: PokeCITR_K_DateTmMon/PokeCITR_K_DateTmMonChrt */
    /* During: PokeCITR_K_DateTmMon/PokeCITR_K_DateTmMonChrt */
    /* Entry Internal: PokeCITR_K_DateTmMon/PokeCITR_K_DateTmMonChrt */
    /* Transition: '<S772>:2' */
    (void)Rte_Write_VeCITR_K_DateTmMon_Value(LeCITR_K_DateTmMon);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_DateTmMon' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_DateTmSec(VAR(float32, AUTOMATIC)
    LeCITR_K_DateTmSec)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_DateTmSec' */
    /* Outport: '<Root>/VeCITR_K_DateTmSec' incorporates:
     *  SignalConversion generated from: '<S179>/VeCITR_K_DateTmSec'
     *  SignalConversion generated from: '<S179>/LeCITR_K_DateTmSec'
     */
    /* Gateway: PokeCITR_K_DateTmSec/PokeCITR_K_DateTmSecChrt */
    /* During: PokeCITR_K_DateTmSec/PokeCITR_K_DateTmSecChrt */
    /* Entry Internal: PokeCITR_K_DateTmSec/PokeCITR_K_DateTmSecChrt */
    /* Transition: '<S773>:2' */
    (void)Rte_Write_VeCITR_K_DateTmSec_Value(LeCITR_K_DateTmSec);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_DateTmSec' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_DateTmYear(VAR(float32, AUTOMATIC)
    LeCITR_K_DateTmYear)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_DateTmYear' */
    /* Outport: '<Root>/VeCITR_K_DateTmYear' incorporates:
     *  SignalConversion generated from: '<S180>/VeCITR_K_DateTmYear'
     *  SignalConversion generated from: '<S180>/LeCITR_K_DateTmYear'
     */
    /* Gateway: PokeCITR_K_DateTmYear/PokeCITR_K_DateTmYearChrt */
    /* During: PokeCITR_K_DateTmYear/PokeCITR_K_DateTmYearChrt */
    /* Entry Internal: PokeCITR_K_DateTmYear/PokeCITR_K_DateTmYearChrt */
    /* Transition: '<S774>:2' */
    (void)Rte_Write_VeCITR_K_DateTmYear_Value(LeCITR_K_DateTmYear);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_DateTmYear' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_Date_Day1(VAR(float32, AUTOMATIC)
    LeCITR_K_Date_Day1, VAR(boolean, AUTOMATIC) LeCITR_b_Date_Day1FA)
{
    boolean rtb_LeCITR_b_Date_Day1FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_Date_Day1' */
    /* Chart: '<S181>/PokeCITR_K_Date_Day1Chrt' incorporates:
     *  SignalConversion generated from: '<S181>/LeCITR_K_Date_Day1'
     *  SignalConversion generated from: '<S181>/LeCITR_b_Date_Day1FA'
     */
    /* Gateway: PokeCITR_K_Date_Day1/PokeCITR_K_Date_Day1Chrt */
    /* During: PokeCITR_K_Date_Day1/PokeCITR_K_Date_Day1Chrt */
    /* Entry Internal: PokeCITR_K_Date_Day1/PokeCITR_K_Date_Day1Chrt */
    /* Transition: '<S775>:2' */
    if (!LeCITR_b_Date_Day1FA)
    {
        /* Transition: '<S775>:3' */
        /* Transition: '<S775>:15' */
        CITR_ac_B.LeCITR_K_Date_Day1_out = LeCITR_K_Date_Day1;
        rtb_LeCITR_b_Date_Day1FA_out = false;
        CITR_ac_B.LeCITR_b_Date_Day1Sgnl_Rcvd = true;

        /* Transition: '<S775>:18' */
    }
    else
    {
        /* Transition: '<S775>:4' */
        rtb_LeCITR_b_Date_Day1FA_out = true;
    }

    /* End of Chart: '<S181>/PokeCITR_K_Date_Day1Chrt' */

    /* Outport: '<Root>/VeCITR_K_Date_Day1' incorporates:
     *  SignalConversion generated from: '<S181>/VeCITR_K_Date_Day1'
     */
    (void)Rte_Write_VeCITR_K_Date_Day1_Value(CITR_ac_B.LeCITR_K_Date_Day1_out);

    /* Outport: '<Root>/VeCITR_b_Date_Day1_FA' incorporates:
     *  SignalConversion generated from: '<S181>/VeCITR_b_Date_Day1FA'
     */
    (void)Rte_Write_VeCITR_b_Date_Day1_FA_Value(rtb_LeCITR_b_Date_Day1FA_out);

    /* Outport: '<Root>/VeCITR_b_Date_Day1_SgnlRcvd' incorporates:
     *  SignalConversion generated from: '<S181>/VeCITR_b_Date_Day1Sgnl_Rcvd'
     */
    (void)Rte_Write_VeCITR_b_Date_Day1_SgnlRcvd_Value
        (CITR_ac_B.LeCITR_b_Date_Day1Sgnl_Rcvd);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_Date_Day1' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_Date_Day2(VAR(float32, AUTOMATIC)
    LeCITR_K_Date_Day2)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_Date_Day2' */
    /* Outport: '<Root>/VeCITR_K_Date_Day2' incorporates:
     *  SignalConversion generated from: '<S182>/VeCITR_K_Date_Day2'
     *  SignalConversion generated from: '<S182>/LeCITR_K_Date_Day2'
     */
    /* Gateway: PokeCITR_K_Date_Day2/PokeCITR_K_Date_Day2Chrt */
    /* During: PokeCITR_K_Date_Day2/PokeCITR_K_Date_Day2Chrt */
    /* Entry Internal: PokeCITR_K_Date_Day2/PokeCITR_K_Date_Day2Chrt */
    /* Transition: '<S776>:2' */
    (void)Rte_Write_VeCITR_K_Date_Day2_Value(LeCITR_K_Date_Day2);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_Date_Day2' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_Date_Month1(VAR(float32, AUTOMATIC)
    LeCITR_K_Date_Month1)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_Date_Month1' */
    /* Outport: '<Root>/VeCITR_K_Date_Month1' incorporates:
     *  SignalConversion generated from: '<S183>/VeCITR_K_Date_Month1'
     *  SignalConversion generated from: '<S183>/LeCITR_K_Date_Month1'
     */
    /* Gateway: PokeCITR_K_Date_Month1/PokeCITR_K_Date_Month1Chrt */
    /* During: PokeCITR_K_Date_Month1/PokeCITR_K_Date_Month1Chrt */
    /* Entry Internal: PokeCITR_K_Date_Month1/PokeCITR_K_Date_Month1Chrt */
    /* Transition: '<S777>:2' */
    (void)Rte_Write_VeCITR_K_Date_Month1_Value(LeCITR_K_Date_Month1);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_Date_Month1' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_Date_Month2(VAR(float32, AUTOMATIC)
    LeCITR_K_Date_Month2)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_Date_Month2' */
    /* Outport: '<Root>/VeCITR_K_Date_Month2' incorporates:
     *  SignalConversion generated from: '<S184>/VeCITR_K_Date_Month2'
     *  SignalConversion generated from: '<S184>/LeCITR_K_Date_Month2'
     */
    /* Gateway: PokeCITR_K_Date_Month2/PokeCITR_K_Date_Month2Chrt */
    /* During: PokeCITR_K_Date_Month2/PokeCITR_K_Date_Month2Chrt */
    /* Entry Internal: PokeCITR_K_Date_Month2/PokeCITR_K_Date_Month2Chrt */
    /* Transition: '<S778>:2' */
    (void)Rte_Write_VeCITR_K_Date_Month2_Value(LeCITR_K_Date_Month2);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_Date_Month2' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_Date_Year1(VAR(float32, AUTOMATIC)
    LeCITR_K_Date_Year1)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_Date_Year1' */
    /* Outport: '<Root>/VeCITR_K_Date_Year1' incorporates:
     *  SignalConversion generated from: '<S185>/VeCITR_K_Date_Year1'
     *  SignalConversion generated from: '<S185>/LeCITR_K_Date_Year1'
     */
    /* Gateway: PokeCITR_K_Date_Year1/PokeCITR_K_Date_Year1Chrt */
    /* During: PokeCITR_K_Date_Year1/PokeCITR_K_Date_Year1Chrt */
    /* Entry Internal: PokeCITR_K_Date_Year1/PokeCITR_K_Date_Year1Chrt */
    /* Transition: '<S779>:2' */
    (void)Rte_Write_VeCITR_K_Date_Year1_Value(LeCITR_K_Date_Year1);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_Date_Year1' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_Date_Year2(VAR(float32, AUTOMATIC)
    LeCITR_K_Date_Year2)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_Date_Year2' */
    /* Outport: '<Root>/VeCITR_K_Date_Year2' incorporates:
     *  SignalConversion generated from: '<S186>/VeCITR_K_Date_Year2'
     *  SignalConversion generated from: '<S186>/LeCITR_K_Date_Year2'
     */
    /* Gateway: PokeCITR_K_Date_Year2/PokeCITR_K_Date_Year2Chrt */
    /* During: PokeCITR_K_Date_Year2/PokeCITR_K_Date_Year2Chrt */
    /* Entry Internal: PokeCITR_K_Date_Year2/PokeCITR_K_Date_Year2Chrt */
    /* Transition: '<S780>:2' */
    (void)Rte_Write_VeCITR_K_Date_Year2_Value(LeCITR_K_Date_Year2);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_Date_Year2' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_Date_Year3(VAR(float32, AUTOMATIC)
    LeCITR_K_Date_Year3)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_Date_Year3' */
    /* Outport: '<Root>/VeCITR_K_Date_Year3' incorporates:
     *  SignalConversion generated from: '<S187>/VeCITR_K_Date_Year3'
     *  SignalConversion generated from: '<S187>/LeCITR_K_Date_Year3'
     */
    /* Gateway: PokeCITR_K_Date_Year3/PokeCITR_K_Date_Year3Chrt */
    /* During: PokeCITR_K_Date_Year3/PokeCITR_K_Date_Year3Chrt */
    /* Entry Internal: PokeCITR_K_Date_Year3/PokeCITR_K_Date_Year3Chrt */
    /* Transition: '<S781>:2' */
    (void)Rte_Write_VeCITR_K_Date_Year3_Value(LeCITR_K_Date_Year3);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_Date_Year3' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_Date_Year4(VAR(float32, AUTOMATIC)
    LeCITR_K_Date_Year4)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_Date_Year4' */
    /* Outport: '<Root>/VeCITR_K_Date_Year4' incorporates:
     *  SignalConversion generated from: '<S188>/VeCITR_K_Date_Year4'
     *  SignalConversion generated from: '<S188>/LeCITR_K_Date_Year4'
     */
    /* Gateway: PokeCITR_K_Date_Year4/PokeCITR_K_Date_Year4Chrt */
    /* During: PokeCITR_K_Date_Year4/PokeCITR_K_Date_Year4Chrt */
    /* Entry Internal: PokeCITR_K_Date_Year4/PokeCITR_K_Date_Year4Chrt */
    /* Transition: '<S782>:2' */
    (void)Rte_Write_VeCITR_K_Date_Year4_Value(LeCITR_K_Date_Year4);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_Date_Year4' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_HU_Sch1_Day(VAR(uint8, AUTOMATIC)
    LeCITR_K_HU_Sch1_Day, VAR(boolean, AUTOMATIC) LeCITR_b_HU_Sch1_DayFA)
{
    boolean rtb_LeCITR_b_HU_Sch1_DayFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_HU_Sch1_Day' */
    /* Chart: '<S189>/PokeCITR_K_HU_Sch1_DayChrt' incorporates:
     *  SignalConversion generated from: '<S189>/LeCITR_K_HU_Sch1_Day'
     *  SignalConversion generated from: '<S189>/LeCITR_b_HU_Sch1_DayFA'
     */
    /* Gateway: PokeCITR_K_HU_Sch1_Day/PokeCITR_K_HU_Sch1_DayChrt */
    /* During: PokeCITR_K_HU_Sch1_Day/PokeCITR_K_HU_Sch1_DayChrt */
    /* Entry Internal: PokeCITR_K_HU_Sch1_Day/PokeCITR_K_HU_Sch1_DayChrt */
    /* Transition: '<S783>:2' */
    if (!LeCITR_b_HU_Sch1_DayFA)
    {
        /* Transition: '<S783>:3' */
        /* Transition: '<S783>:15' */
        CITR_ac_B.LeCITR_K_HU_Sch1_Day_out = LeCITR_K_HU_Sch1_Day;
        rtb_LeCITR_b_HU_Sch1_DayFA_out = false;
        CITR_ac_B.LeCITR_b_HU_Sch1_DaySgnl_Rcvd = true;

        /* Transition: '<S783>:18' */
    }
    else
    {
        /* Transition: '<S783>:4' */
        rtb_LeCITR_b_HU_Sch1_DayFA_out = true;
    }

    /* End of Chart: '<S189>/PokeCITR_K_HU_Sch1_DayChrt' */

    /* Outport: '<Root>/VeCITR_K_HU_Sch1_Day' incorporates:
     *  SignalConversion generated from: '<S189>/VeCITR_K_HU_Sch1_Day'
     */
    (void)Rte_Write_VeCITR_K_HU_Sch1_Day_Value
        (CITR_ac_B.LeCITR_K_HU_Sch1_Day_out);

    /* Outport: '<Root>/VeCITR_b_HU_Sch1_Day_FA' incorporates:
     *  SignalConversion generated from: '<S189>/VeCITR_b_HU_Sch1_DayFA'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch1_Day_FA_Value(rtb_LeCITR_b_HU_Sch1_DayFA_out);

    /* Outport: '<Root>/VeCITR_b_HU_Sch1_Day_SgnlRcvd' incorporates:
     *  SignalConversion generated from: '<S189>/VeCITR_b_HU_Sch1_DaySgnl_Rcvd'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch1_Day_SgnlRcvd_Value
        (CITR_ac_B.LeCITR_b_HU_Sch1_DaySgnl_Rcvd);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_HU_Sch1_Day' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_HU_Sch1_End_Time_Hr(VAR(sint16, AUTOMATIC)
    LeCITR_K_HU_Sch1_End_Time_Hr, VAR(boolean, AUTOMATIC)
    LeCITR_b_HU_Sch1_End_Time_HrFA)
{
    boolean rtb_LeCITR_b_HU_Sch1_End_Time_HrFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_HU_Sch1_End_Time_Hr' */
    /* Chart: '<S190>/PokeCITR_K_HU_Sch1_End_Time_HrChrt' incorporates:
     *  SignalConversion generated from: '<S190>/LeCITR_K_HU_Sch1_End_Time_Hr'
     *  SignalConversion generated from: '<S190>/LeCITR_b_HU_Sch1_End_Time_HrFA'
     */
    /* Gateway: PokeCITR_K_HU_Sch1_End_Time_Hr/PokeCITR_K_HU_Sch1_End_Time_HrChrt */
    /* During: PokeCITR_K_HU_Sch1_End_Time_Hr/PokeCITR_K_HU_Sch1_End_Time_HrChrt */
    /* Entry Internal: PokeCITR_K_HU_Sch1_End_Time_Hr/PokeCITR_K_HU_Sch1_End_Time_HrChrt */
    /* Transition: '<S784>:2' */
    if (!LeCITR_b_HU_Sch1_End_Time_HrFA)
    {
        /* Transition: '<S784>:3' */
        /* Transition: '<S784>:15' */
        CITR_ac_B.LeCITR_K_HU_Sch1_End_Time_Hr_out =
            LeCITR_K_HU_Sch1_End_Time_Hr;
        rtb_LeCITR_b_HU_Sch1_End_Time_HrFA_out = false;

        /* Transition: '<S784>:18' */
    }
    else
    {
        /* Transition: '<S784>:4' */
        rtb_LeCITR_b_HU_Sch1_End_Time_HrFA_out = true;
    }

    /* End of Chart: '<S190>/PokeCITR_K_HU_Sch1_End_Time_HrChrt' */

    /* Outport: '<Root>/VeCITR_K_HU_Sch1_End_Time_Hr' incorporates:
     *  SignalConversion generated from: '<S190>/VeCITR_K_HU_Sch1_End_Time_Hr'
     */
    (void)Rte_Write_VeCITR_K_HU_Sch1_End_Time_Hr_Value
        (CITR_ac_B.LeCITR_K_HU_Sch1_End_Time_Hr_out);

    /* Outport: '<Root>/VeCITR_b_HU_Sch1_End_Time_HrFA' incorporates:
     *  SignalConversion generated from: '<S190>/VeCITR_b_HU_Sch1_End_Time_HrFA'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch1_End_Time_HrFA_Value
        (rtb_LeCITR_b_HU_Sch1_End_Time_HrFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_HU_Sch1_End_Time_Hr' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_HU_Sch1_End_Time_Min(VAR(sint16, AUTOMATIC)
    LeCITR_K_HU_Sch1_End_Time_Min, VAR(boolean, AUTOMATIC)
    LeCITR_b_HU_Sch1_End_Time_MinFA)
{
    boolean rtb_LeCITR_b_HU_Sch1_End_Time_MinFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_HU_Sch1_End_Time_Min' */
    /* Chart: '<S191>/PokeCITR_K_HU_Sch1_End_Time_MinChrt' incorporates:
     *  SignalConversion generated from: '<S191>/LeCITR_K_HU_Sch1_End_Time_Min'
     *  SignalConversion generated from: '<S191>/LeCITR_b_HU_Sch1_End_Time_MinFA'
     */
    /* Gateway: PokeCITR_K_HU_Sch1_End_Time_Min/PokeCITR_K_HU_Sch1_End_Time_MinChrt */
    /* During: PokeCITR_K_HU_Sch1_End_Time_Min/PokeCITR_K_HU_Sch1_End_Time_MinChrt */
    /* Entry Internal: PokeCITR_K_HU_Sch1_End_Time_Min/PokeCITR_K_HU_Sch1_End_Time_MinChrt */
    /* Transition: '<S785>:2' */
    if (!LeCITR_b_HU_Sch1_End_Time_MinFA)
    {
        /* Transition: '<S785>:3' */
        /* Transition: '<S785>:15' */
        CITR_ac_B.LeCITR_K_HU_Sch1_End_Time_Min_out =
            LeCITR_K_HU_Sch1_End_Time_Min;
        rtb_LeCITR_b_HU_Sch1_End_Time_MinFA_out = false;

        /* Transition: '<S785>:18' */
    }
    else
    {
        /* Transition: '<S785>:4' */
        rtb_LeCITR_b_HU_Sch1_End_Time_MinFA_out = true;
    }

    /* End of Chart: '<S191>/PokeCITR_K_HU_Sch1_End_Time_MinChrt' */

    /* Outport: '<Root>/VeCITR_K_HU_Sch1_End_Time_Min' incorporates:
     *  SignalConversion generated from: '<S191>/VeCITR_K_HU_Sch1_End_Time_Min'
     */
    (void)Rte_Write_VeCITR_K_HU_Sch1_End_Time_Min_Value
        (CITR_ac_B.LeCITR_K_HU_Sch1_End_Time_Min_out);

    /* Outport: '<Root>/VeCITR_b_HU_Sch1_End_Time_MinFA' incorporates:
     *  SignalConversion generated from: '<S191>/VeCITR_b_HU_Sch1_End_Time_MinFA'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch1_End_Time_MinFA_Value
        (rtb_LeCITR_b_HU_Sch1_End_Time_MinFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_HU_Sch1_End_Time_Min' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_HU_Sch1_Start_Time_Hr(VAR(sint16, AUTOMATIC)
    LeCITR_K_HU_Sch1_Start_Time_Hr, VAR(boolean, AUTOMATIC)
    LeCITR_b_HU_Sch1_Start_Time_HrFA)
{
    boolean rtb_LeCITR_b_HU_Sch1_Start_Time_HrFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_HU_Sch1_Start_Time_Hr' */
    /* Chart: '<S192>/PokeCITR_K_HU_Sch1_Start_Time_HrChrt' incorporates:
     *  SignalConversion generated from: '<S192>/LeCITR_K_HU_Sch1_Start_Time_Hr'
     *  SignalConversion generated from: '<S192>/LeCITR_b_HU_Sch1_Start_Time_HrFA'
     */
    /* Gateway: PokeCITR_K_HU_Sch1_Start_Time_Hr/PokeCITR_K_HU_Sch1_Start_Time_HrChrt */
    /* During: PokeCITR_K_HU_Sch1_Start_Time_Hr/PokeCITR_K_HU_Sch1_Start_Time_HrChrt */
    /* Entry Internal: PokeCITR_K_HU_Sch1_Start_Time_Hr/PokeCITR_K_HU_Sch1_Start_Time_HrChrt */
    /* Transition: '<S786>:2' */
    if (!LeCITR_b_HU_Sch1_Start_Time_HrFA)
    {
        /* Transition: '<S786>:3' */
        /* Transition: '<S786>:15' */
        CITR_ac_B.LeCITR_K_HU_Sch1_Start_Time_Hr_out =
            LeCITR_K_HU_Sch1_Start_Time_Hr;
        rtb_LeCITR_b_HU_Sch1_Start_Time_HrFA_out = false;

        /* Transition: '<S786>:18' */
    }
    else
    {
        /* Transition: '<S786>:4' */
        rtb_LeCITR_b_HU_Sch1_Start_Time_HrFA_out = true;
    }

    /* End of Chart: '<S192>/PokeCITR_K_HU_Sch1_Start_Time_HrChrt' */

    /* Outport: '<Root>/VeCITR_K_HU_Sch1_Start_Time_Hr' incorporates:
     *  SignalConversion generated from: '<S192>/VeCITR_K_HU_Sch1_Start_Time_Hr'
     */
    (void)Rte_Write_VeCITR_K_HU_Sch1_Start_Time_Hr_Value
        (CITR_ac_B.LeCITR_K_HU_Sch1_Start_Time_Hr_out);

    /* Outport: '<Root>/VeCITR_b_HU_Sch1_Start_Time_HrFA' incorporates:
     *  SignalConversion generated from: '<S192>/VeCITR_b_HU_Sch1_Start_Time_HrFA'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch1_Start_Time_HrFA_Value
        (rtb_LeCITR_b_HU_Sch1_Start_Time_HrFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_HU_Sch1_Start_Time_Hr' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_HU_Sch1_Start_Time_Min(VAR(sint16, AUTOMATIC)
    LeCITR_K_HU_Sch1_Start_Time_Min, VAR(boolean, AUTOMATIC)
    LeCITR_b_HU_Sch1_Start_Time_MinFA)
{
    boolean rtb_LeCITR_b_HU_Sch1_Start_Time_MinFA_ou;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_HU_Sch1_Start_Time_Min' */
    /* Chart: '<S193>/PokeCITR_K_HU_Sch1_Start_Time_MinChrt' incorporates:
     *  SignalConversion generated from: '<S193>/LeCITR_K_HU_Sch1_Start_Time_Min'
     *  SignalConversion generated from: '<S193>/LeCITR_b_HU_Sch1_Start_Time_MinFA'
     */
    /* Gateway: PokeCITR_K_HU_Sch1_Start_Time_Min/PokeCITR_K_HU_Sch1_Start_Time_MinChrt */
    /* During: PokeCITR_K_HU_Sch1_Start_Time_Min/PokeCITR_K_HU_Sch1_Start_Time_MinChrt */
    /* Entry Internal: PokeCITR_K_HU_Sch1_Start_Time_Min/PokeCITR_K_HU_Sch1_Start_Time_MinChrt */
    /* Transition: '<S787>:2' */
    if (!LeCITR_b_HU_Sch1_Start_Time_MinFA)
    {
        /* Transition: '<S787>:3' */
        /* Transition: '<S787>:15' */
        CITR_ac_B.LeCITR_K_HU_Sch1_Start_Time_Min_out =
            LeCITR_K_HU_Sch1_Start_Time_Min;
        rtb_LeCITR_b_HU_Sch1_Start_Time_MinFA_ou = false;

        /* Transition: '<S787>:18' */
    }
    else
    {
        /* Transition: '<S787>:4' */
        rtb_LeCITR_b_HU_Sch1_Start_Time_MinFA_ou = true;
    }

    /* End of Chart: '<S193>/PokeCITR_K_HU_Sch1_Start_Time_MinChrt' */

    /* Outport: '<Root>/VeCITR_K_HU_Sch1_Start_Time_Min' incorporates:
     *  SignalConversion generated from: '<S193>/VeCITR_K_HU_Sch1_Start_Time_Min'
     */
    (void)Rte_Write_VeCITR_K_HU_Sch1_Start_Time_Min_Value
        (CITR_ac_B.LeCITR_K_HU_Sch1_Start_Time_Min_out);

    /* Outport: '<Root>/VeCITR_b_HU_Sch1_Start_Time_MinFA' incorporates:
     *  SignalConversion generated from: '<S193>/VeCITR_b_HU_Sch1_Start_Time_MinFA'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch1_Start_Time_MinFA_Value
        (rtb_LeCITR_b_HU_Sch1_Start_Time_MinFA_ou);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_HU_Sch1_Start_Time_Min' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_HU_Sch2_Day(VAR(uint8, AUTOMATIC)
    LeCITR_K_HU_Sch2_Day, VAR(boolean, AUTOMATIC) LeCITR_b_HU_Sch2_DayFA)
{
    boolean rtb_LeCITR_b_HU_Sch2_DayFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_HU_Sch2_Day' */
    /* Chart: '<S194>/PokeCITR_K_HU_Sch2_DayChrt' incorporates:
     *  SignalConversion generated from: '<S194>/LeCITR_K_HU_Sch2_Day'
     *  SignalConversion generated from: '<S194>/LeCITR_b_HU_Sch2_DayFA'
     */
    /* Gateway: PokeCITR_K_HU_Sch2_Day/PokeCITR_K_HU_Sch2_DayChrt */
    /* During: PokeCITR_K_HU_Sch2_Day/PokeCITR_K_HU_Sch2_DayChrt */
    /* Entry Internal: PokeCITR_K_HU_Sch2_Day/PokeCITR_K_HU_Sch2_DayChrt */
    /* Transition: '<S788>:2' */
    if (!LeCITR_b_HU_Sch2_DayFA)
    {
        /* Transition: '<S788>:3' */
        /* Transition: '<S788>:15' */
        CITR_ac_B.LeCITR_K_HU_Sch2_Day_out = LeCITR_K_HU_Sch2_Day;
        rtb_LeCITR_b_HU_Sch2_DayFA_out = false;
        CITR_ac_B.LeCITR_b_HU_Sch2_DaySgnl_Rcvd = true;

        /* Transition: '<S788>:18' */
    }
    else
    {
        /* Transition: '<S788>:4' */
        rtb_LeCITR_b_HU_Sch2_DayFA_out = true;
    }

    /* End of Chart: '<S194>/PokeCITR_K_HU_Sch2_DayChrt' */

    /* Outport: '<Root>/VeCITR_K_HU_Sch2_Day' incorporates:
     *  SignalConversion generated from: '<S194>/VeCITR_K_HU_Sch2_Day'
     */
    (void)Rte_Write_VeCITR_K_HU_Sch2_Day_Value
        (CITR_ac_B.LeCITR_K_HU_Sch2_Day_out);

    /* Outport: '<Root>/VeCITR_b_HU_Sch2_Day_FA' incorporates:
     *  SignalConversion generated from: '<S194>/VeCITR_b_HU_Sch2_DayFA'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch2_Day_FA_Value(rtb_LeCITR_b_HU_Sch2_DayFA_out);

    /* Outport: '<Root>/VeCITR_b_HU_Sch2_Day_SgnlRcvd' incorporates:
     *  SignalConversion generated from: '<S194>/VeCITR_b_HU_Sch2_DaySgnl_Rcvd'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch2_Day_SgnlRcvd_Value
        (CITR_ac_B.LeCITR_b_HU_Sch2_DaySgnl_Rcvd);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_HU_Sch2_Day' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_HU_Sch2_End_Time_Hr(VAR(sint16, AUTOMATIC)
    LeCITR_K_HU_Sch2_End_Time_Hr, VAR(boolean, AUTOMATIC)
    LeCITR_b_HU_Sch2_End_Time_HrFA)
{
    boolean rtb_LeCITR_b_HU_Sch2_End_Time_HrFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_HU_Sch2_End_Time_Hr' */
    /* Chart: '<S195>/PokeCITR_K_HU_Sch2_End_Time_HrChrt' incorporates:
     *  SignalConversion generated from: '<S195>/LeCITR_K_HU_Sch2_End_Time_Hr'
     *  SignalConversion generated from: '<S195>/LeCITR_b_HU_Sch2_End_Time_HrFA'
     */
    /* Gateway: PokeCITR_K_HU_Sch2_End_Time_Hr/PokeCITR_K_HU_Sch2_End_Time_HrChrt */
    /* During: PokeCITR_K_HU_Sch2_End_Time_Hr/PokeCITR_K_HU_Sch2_End_Time_HrChrt */
    /* Entry Internal: PokeCITR_K_HU_Sch2_End_Time_Hr/PokeCITR_K_HU_Sch2_End_Time_HrChrt */
    /* Transition: '<S789>:2' */
    if (!LeCITR_b_HU_Sch2_End_Time_HrFA)
    {
        /* Transition: '<S789>:3' */
        /* Transition: '<S789>:15' */
        CITR_ac_B.LeCITR_K_HU_Sch2_End_Time_Hr_out =
            LeCITR_K_HU_Sch2_End_Time_Hr;
        rtb_LeCITR_b_HU_Sch2_End_Time_HrFA_out = false;

        /* Transition: '<S789>:18' */
    }
    else
    {
        /* Transition: '<S789>:4' */
        rtb_LeCITR_b_HU_Sch2_End_Time_HrFA_out = true;
    }

    /* End of Chart: '<S195>/PokeCITR_K_HU_Sch2_End_Time_HrChrt' */

    /* Outport: '<Root>/VeCITR_K_HU_Sch2_End_Time_Hr' incorporates:
     *  SignalConversion generated from: '<S195>/VeCITR_K_HU_Sch2_End_Time_Hr'
     */
    (void)Rte_Write_VeCITR_K_HU_Sch2_End_Time_Hr_Value
        (CITR_ac_B.LeCITR_K_HU_Sch2_End_Time_Hr_out);

    /* Outport: '<Root>/VeCITR_b_HU_Sch2_End_Time_HrFA' incorporates:
     *  SignalConversion generated from: '<S195>/VeCITR_b_HU_Sch2_End_Time_HrFA'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch2_End_Time_HrFA_Value
        (rtb_LeCITR_b_HU_Sch2_End_Time_HrFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_HU_Sch2_End_Time_Hr' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_HU_Sch2_End_Time_Min(VAR(sint16, AUTOMATIC)
    LeCITR_K_HU_Sch2_End_Time_Min, VAR(boolean, AUTOMATIC)
    LeCITR_b_HU_Sch2_End_Time_MinFA)
{
    boolean rtb_LeCITR_b_HU_Sch2_End_Time_MinFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_HU_Sch2_End_Time_Min' */
    /* Chart: '<S196>/PokeCITR_K_HU_Sch2_End_Time_MinChrt' incorporates:
     *  SignalConversion generated from: '<S196>/LeCITR_K_HU_Sch2_End_Time_Min'
     *  SignalConversion generated from: '<S196>/LeCITR_b_HU_Sch2_End_Time_MinFA'
     */
    /* Gateway: PokeCITR_K_HU_Sch2_End_Time_Min/PokeCITR_K_HU_Sch2_End_Time_MinChrt */
    /* During: PokeCITR_K_HU_Sch2_End_Time_Min/PokeCITR_K_HU_Sch2_End_Time_MinChrt */
    /* Entry Internal: PokeCITR_K_HU_Sch2_End_Time_Min/PokeCITR_K_HU_Sch2_End_Time_MinChrt */
    /* Transition: '<S790>:2' */
    if (!LeCITR_b_HU_Sch2_End_Time_MinFA)
    {
        /* Transition: '<S790>:3' */
        /* Transition: '<S790>:15' */
        CITR_ac_B.LeCITR_K_HU_Sch2_End_Time_Min_out =
            LeCITR_K_HU_Sch2_End_Time_Min;
        rtb_LeCITR_b_HU_Sch2_End_Time_MinFA_out = false;

        /* Transition: '<S790>:18' */
    }
    else
    {
        /* Transition: '<S790>:4' */
        rtb_LeCITR_b_HU_Sch2_End_Time_MinFA_out = true;
    }

    /* End of Chart: '<S196>/PokeCITR_K_HU_Sch2_End_Time_MinChrt' */

    /* Outport: '<Root>/VeCITR_K_HU_Sch2_End_Time_Min' incorporates:
     *  SignalConversion generated from: '<S196>/VeCITR_K_HU_Sch2_End_Time_Min'
     */
    (void)Rte_Write_VeCITR_K_HU_Sch2_End_Time_Min_Value
        (CITR_ac_B.LeCITR_K_HU_Sch2_End_Time_Min_out);

    /* Outport: '<Root>/VeCITR_b_HU_Sch2_End_Time_MinFA' incorporates:
     *  SignalConversion generated from: '<S196>/VeCITR_b_HU_Sch2_End_Time_MinFA'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch2_End_Time_MinFA_Value
        (rtb_LeCITR_b_HU_Sch2_End_Time_MinFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_HU_Sch2_End_Time_Min' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_HU_Sch2_Start_Time_Hr(VAR(sint16, AUTOMATIC)
    LeCITR_K_HU_Sch2_Start_Time_Hr, VAR(boolean, AUTOMATIC)
    LeCITR_b_HU_Sch2_Start_Time_HrFA)
{
    boolean rtb_LeCITR_b_HU_Sch2_Start_Time_HrFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_HU_Sch2_Start_Time_Hr' */
    /* Chart: '<S197>/PokeCITR_K_HU_Sch2_Start_Time_HrChrt' incorporates:
     *  SignalConversion generated from: '<S197>/LeCITR_K_HU_Sch2_Start_Time_Hr'
     *  SignalConversion generated from: '<S197>/LeCITR_b_HU_Sch2_Start_Time_HrFA'
     */
    /* Gateway: PokeCITR_K_HU_Sch2_Start_Time_Hr/PokeCITR_K_HU_Sch2_Start_Time_HrChrt */
    /* During: PokeCITR_K_HU_Sch2_Start_Time_Hr/PokeCITR_K_HU_Sch2_Start_Time_HrChrt */
    /* Entry Internal: PokeCITR_K_HU_Sch2_Start_Time_Hr/PokeCITR_K_HU_Sch2_Start_Time_HrChrt */
    /* Transition: '<S791>:2' */
    if (!LeCITR_b_HU_Sch2_Start_Time_HrFA)
    {
        /* Transition: '<S791>:3' */
        /* Transition: '<S791>:15' */
        CITR_ac_B.LeCITR_K_HU_Sch2_Start_Time_Hr_out =
            LeCITR_K_HU_Sch2_Start_Time_Hr;
        rtb_LeCITR_b_HU_Sch2_Start_Time_HrFA_out = false;

        /* Transition: '<S791>:18' */
    }
    else
    {
        /* Transition: '<S791>:4' */
        rtb_LeCITR_b_HU_Sch2_Start_Time_HrFA_out = true;
    }

    /* End of Chart: '<S197>/PokeCITR_K_HU_Sch2_Start_Time_HrChrt' */

    /* Outport: '<Root>/VeCITR_K_HU_Sch2_Start_Time_Hr' incorporates:
     *  SignalConversion generated from: '<S197>/VeCITR_K_HU_Sch2_Start_Time_Hr'
     */
    (void)Rte_Write_VeCITR_K_HU_Sch2_Start_Time_Hr_Value
        (CITR_ac_B.LeCITR_K_HU_Sch2_Start_Time_Hr_out);

    /* Outport: '<Root>/VeCITR_b_HU_Sch2_Start_Time_HrFA' incorporates:
     *  SignalConversion generated from: '<S197>/VeCITR_b_HU_Sch2_Start_Time_HrFA'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch2_Start_Time_HrFA_Value
        (rtb_LeCITR_b_HU_Sch2_Start_Time_HrFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_HU_Sch2_Start_Time_Hr' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_HU_Sch2_Start_Time_Min(VAR(sint16, AUTOMATIC)
    LeCITR_K_HU_Sch2_Start_Time_Min, VAR(boolean, AUTOMATIC)
    LeCITR_b_HU_Sch2_Start_Time_MinFA)
{
    boolean rtb_LeCITR_b_HU_Sch2_Start_Time_MinFA_ou;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_HU_Sch2_Start_Time_Min' */
    /* Chart: '<S198>/PokeCITR_K_HU_Sch2_Start_Time_MinChrt' incorporates:
     *  SignalConversion generated from: '<S198>/LeCITR_K_HU_Sch2_Start_Time_Min'
     *  SignalConversion generated from: '<S198>/LeCITR_b_HU_Sch2_Start_Time_MinFA'
     */
    /* Gateway: PokeCITR_K_HU_Sch2_Start_Time_Min/PokeCITR_K_HU_Sch2_Start_Time_MinChrt */
    /* During: PokeCITR_K_HU_Sch2_Start_Time_Min/PokeCITR_K_HU_Sch2_Start_Time_MinChrt */
    /* Entry Internal: PokeCITR_K_HU_Sch2_Start_Time_Min/PokeCITR_K_HU_Sch2_Start_Time_MinChrt */
    /* Transition: '<S792>:2' */
    if (!LeCITR_b_HU_Sch2_Start_Time_MinFA)
    {
        /* Transition: '<S792>:3' */
        /* Transition: '<S792>:15' */
        CITR_ac_B.LeCITR_K_HU_Sch2_Start_Time_Min_out =
            LeCITR_K_HU_Sch2_Start_Time_Min;
        rtb_LeCITR_b_HU_Sch2_Start_Time_MinFA_ou = false;

        /* Transition: '<S792>:18' */
    }
    else
    {
        /* Transition: '<S792>:4' */
        rtb_LeCITR_b_HU_Sch2_Start_Time_MinFA_ou = true;
    }

    /* End of Chart: '<S198>/PokeCITR_K_HU_Sch2_Start_Time_MinChrt' */

    /* Outport: '<Root>/VeCITR_K_HU_Sch2_Start_Time_Min' incorporates:
     *  SignalConversion generated from: '<S198>/VeCITR_K_HU_Sch2_Start_Time_Min'
     */
    (void)Rte_Write_VeCITR_K_HU_Sch2_Start_Time_Min_Value
        (CITR_ac_B.LeCITR_K_HU_Sch2_Start_Time_Min_out);

    /* Outport: '<Root>/VeCITR_b_HU_Sch2_Start_Time_MinFA' incorporates:
     *  SignalConversion generated from: '<S198>/VeCITR_b_HU_Sch2_Start_Time_MinFA'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch2_Start_Time_MinFA_Value
        (rtb_LeCITR_b_HU_Sch2_Start_Time_MinFA_ou);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_HU_Sch2_Start_Time_Min' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_HU_Sch3_Day(VAR(uint8, AUTOMATIC)
    LeCITR_K_HU_Sch3_Day, VAR(boolean, AUTOMATIC) LeCITR_b_HU_Sch3_DayFA)
{
    boolean rtb_LeCITR_b_HU_Sch3_DayFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_HU_Sch3_Day' */
    /* Chart: '<S199>/PokeCITR_K_HU_Sch3_DayChrt' incorporates:
     *  SignalConversion generated from: '<S199>/LeCITR_K_HU_Sch3_Day'
     *  SignalConversion generated from: '<S199>/LeCITR_b_HU_Sch3_DayFA'
     */
    /* Gateway: PokeCITR_K_HU_Sch3_Day/PokeCITR_K_HU_Sch3_DayChrt */
    /* During: PokeCITR_K_HU_Sch3_Day/PokeCITR_K_HU_Sch3_DayChrt */
    /* Entry Internal: PokeCITR_K_HU_Sch3_Day/PokeCITR_K_HU_Sch3_DayChrt */
    /* Transition: '<S793>:2' */
    if (!LeCITR_b_HU_Sch3_DayFA)
    {
        /* Transition: '<S793>:3' */
        /* Transition: '<S793>:15' */
        CITR_ac_B.LeCITR_K_HU_Sch3_Day_out = LeCITR_K_HU_Sch3_Day;
        rtb_LeCITR_b_HU_Sch3_DayFA_out = false;
        CITR_ac_B.LeCITR_b_HU_Sch3_DaySgnl_Rcvd = true;

        /* Transition: '<S793>:18' */
    }
    else
    {
        /* Transition: '<S793>:4' */
        rtb_LeCITR_b_HU_Sch3_DayFA_out = true;
    }

    /* End of Chart: '<S199>/PokeCITR_K_HU_Sch3_DayChrt' */

    /* Outport: '<Root>/VeCITR_K_HU_Sch3_Day' incorporates:
     *  SignalConversion generated from: '<S199>/VeCITR_K_HU_Sch3_Day'
     */
    (void)Rte_Write_VeCITR_K_HU_Sch3_Day_Value
        (CITR_ac_B.LeCITR_K_HU_Sch3_Day_out);

    /* Outport: '<Root>/VeCITR_b_HU_Sch3_Day_FA' incorporates:
     *  SignalConversion generated from: '<S199>/VeCITR_b_HU_Sch3_DayFA'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch3_Day_FA_Value(rtb_LeCITR_b_HU_Sch3_DayFA_out);

    /* Outport: '<Root>/VeCITR_b_HU_Sch3_Day_SgnlRcvd' incorporates:
     *  SignalConversion generated from: '<S199>/VeCITR_b_HU_Sch3_DaySgnl_Rcvd'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch3_Day_SgnlRcvd_Value
        (CITR_ac_B.LeCITR_b_HU_Sch3_DaySgnl_Rcvd);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_HU_Sch3_Day' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_HU_Sch3_End_Time_Hr(VAR(sint16, AUTOMATIC)
    LeCITR_K_HU_Sch3_End_Time_Hr, VAR(boolean, AUTOMATIC)
    LeCITR_b_HU_Sch3_End_Time_HrFA)
{
    boolean rtb_LeCITR_b_HU_Sch3_End_Time_HrFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_HU_Sch3_End_Time_Hr' */
    /* Chart: '<S200>/PokeCITR_K_HU_Sch3_End_Time_HrChrt' incorporates:
     *  SignalConversion generated from: '<S200>/LeCITR_K_HU_Sch3_End_Time_Hr'
     *  SignalConversion generated from: '<S200>/LeCITR_b_HU_Sch3_End_Time_HrFA'
     */
    /* Gateway: PokeCITR_K_HU_Sch3_End_Time_Hr/PokeCITR_K_HU_Sch3_End_Time_HrChrt */
    /* During: PokeCITR_K_HU_Sch3_End_Time_Hr/PokeCITR_K_HU_Sch3_End_Time_HrChrt */
    /* Entry Internal: PokeCITR_K_HU_Sch3_End_Time_Hr/PokeCITR_K_HU_Sch3_End_Time_HrChrt */
    /* Transition: '<S794>:2' */
    if (!LeCITR_b_HU_Sch3_End_Time_HrFA)
    {
        /* Transition: '<S794>:3' */
        /* Transition: '<S794>:15' */
        CITR_ac_B.LeCITR_K_HU_Sch3_End_Time_Hr_out =
            LeCITR_K_HU_Sch3_End_Time_Hr;
        rtb_LeCITR_b_HU_Sch3_End_Time_HrFA_out = false;

        /* Transition: '<S794>:18' */
    }
    else
    {
        /* Transition: '<S794>:4' */
        rtb_LeCITR_b_HU_Sch3_End_Time_HrFA_out = true;
    }

    /* End of Chart: '<S200>/PokeCITR_K_HU_Sch3_End_Time_HrChrt' */

    /* Outport: '<Root>/VeCITR_K_HU_Sch3_End_Time_Hr' incorporates:
     *  SignalConversion generated from: '<S200>/VeCITR_K_HU_Sch3_End_Time_Hr'
     */
    (void)Rte_Write_VeCITR_K_HU_Sch3_End_Time_Hr_Value
        (CITR_ac_B.LeCITR_K_HU_Sch3_End_Time_Hr_out);

    /* Outport: '<Root>/VeCITR_b_HU_Sch3_End_Time_HrFA' incorporates:
     *  SignalConversion generated from: '<S200>/VeCITR_b_HU_Sch3_End_Time_HrFA'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch3_End_Time_HrFA_Value
        (rtb_LeCITR_b_HU_Sch3_End_Time_HrFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_HU_Sch3_End_Time_Hr' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_HU_Sch3_End_Time_Min(VAR(sint16, AUTOMATIC)
    LeCITR_K_HU_Sch3_End_Time_Min, VAR(boolean, AUTOMATIC)
    LeCITR_b_HU_Sch3_End_Time_MinFA)
{
    boolean rtb_LeCITR_b_HU_Sch3_End_Time_MinFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_HU_Sch3_End_Time_Min' */
    /* Chart: '<S201>/PokeCITR_K_HU_Sch3_End_Time_MinChrt' incorporates:
     *  SignalConversion generated from: '<S201>/LeCITR_K_HU_Sch3_End_Time_Min'
     *  SignalConversion generated from: '<S201>/LeCITR_b_HU_Sch3_End_Time_MinFA'
     */
    /* Gateway: PokeCITR_K_HU_Sch3_End_Time_Min/PokeCITR_K_HU_Sch3_End_Time_MinChrt */
    /* During: PokeCITR_K_HU_Sch3_End_Time_Min/PokeCITR_K_HU_Sch3_End_Time_MinChrt */
    /* Entry Internal: PokeCITR_K_HU_Sch3_End_Time_Min/PokeCITR_K_HU_Sch3_End_Time_MinChrt */
    /* Transition: '<S795>:2' */
    if (!LeCITR_b_HU_Sch3_End_Time_MinFA)
    {
        /* Transition: '<S795>:3' */
        /* Transition: '<S795>:15' */
        CITR_ac_B.LeCITR_K_HU_Sch3_End_Time_Min_out =
            LeCITR_K_HU_Sch3_End_Time_Min;
        rtb_LeCITR_b_HU_Sch3_End_Time_MinFA_out = false;

        /* Transition: '<S795>:18' */
    }
    else
    {
        /* Transition: '<S795>:4' */
        rtb_LeCITR_b_HU_Sch3_End_Time_MinFA_out = true;
    }

    /* End of Chart: '<S201>/PokeCITR_K_HU_Sch3_End_Time_MinChrt' */

    /* Outport: '<Root>/VeCITR_K_HU_Sch3_End_Time_Min' incorporates:
     *  SignalConversion generated from: '<S201>/VeCITR_K_HU_Sch3_End_Time_Min'
     */
    (void)Rte_Write_VeCITR_K_HU_Sch3_End_Time_Min_Value
        (CITR_ac_B.LeCITR_K_HU_Sch3_End_Time_Min_out);

    /* Outport: '<Root>/VeCITR_b_HU_Sch3_End_Time_MinFA' incorporates:
     *  SignalConversion generated from: '<S201>/VeCITR_b_HU_Sch3_End_Time_MinFA'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch3_End_Time_MinFA_Value
        (rtb_LeCITR_b_HU_Sch3_End_Time_MinFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_HU_Sch3_End_Time_Min' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_HU_Sch3_Start_Time_Hr(VAR(sint16, AUTOMATIC)
    LeCITR_K_HU_Sch3_Start_Time_Hr, VAR(boolean, AUTOMATIC)
    LeCITR_b_HU_Sch3_Start_Time_HrFA)
{
    boolean rtb_LeCITR_b_HU_Sch3_Start_Time_HrFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_HU_Sch3_Start_Time_Hr' */
    /* Chart: '<S202>/PokeCITR_K_HU_Sch3_Start_Time_HrChrt' incorporates:
     *  SignalConversion generated from: '<S202>/LeCITR_K_HU_Sch3_Start_Time_Hr'
     *  SignalConversion generated from: '<S202>/LeCITR_b_HU_Sch3_Start_Time_HrFA'
     */
    /* Gateway: PokeCITR_K_HU_Sch3_Start_Time_Hr/PokeCITR_K_HU_Sch3_Start_Time_HrChrt */
    /* During: PokeCITR_K_HU_Sch3_Start_Time_Hr/PokeCITR_K_HU_Sch3_Start_Time_HrChrt */
    /* Entry Internal: PokeCITR_K_HU_Sch3_Start_Time_Hr/PokeCITR_K_HU_Sch3_Start_Time_HrChrt */
    /* Transition: '<S796>:2' */
    if (!LeCITR_b_HU_Sch3_Start_Time_HrFA)
    {
        /* Transition: '<S796>:3' */
        /* Transition: '<S796>:15' */
        CITR_ac_B.LeCITR_K_HU_Sch3_Start_Time_Hr_out =
            LeCITR_K_HU_Sch3_Start_Time_Hr;
        rtb_LeCITR_b_HU_Sch3_Start_Time_HrFA_out = false;

        /* Transition: '<S796>:18' */
    }
    else
    {
        /* Transition: '<S796>:4' */
        rtb_LeCITR_b_HU_Sch3_Start_Time_HrFA_out = true;
    }

    /* End of Chart: '<S202>/PokeCITR_K_HU_Sch3_Start_Time_HrChrt' */

    /* Outport: '<Root>/VeCITR_K_HU_Sch3_Start_Time_Hr' incorporates:
     *  SignalConversion generated from: '<S202>/VeCITR_K_HU_Sch3_Start_Time_Hr'
     */
    (void)Rte_Write_VeCITR_K_HU_Sch3_Start_Time_Hr_Value
        (CITR_ac_B.LeCITR_K_HU_Sch3_Start_Time_Hr_out);

    /* Outport: '<Root>/VeCITR_b_HU_Sch3_Start_Time_HrFA' incorporates:
     *  SignalConversion generated from: '<S202>/VeCITR_b_HU_Sch3_Start_Time_HrFA'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch3_Start_Time_HrFA_Value
        (rtb_LeCITR_b_HU_Sch3_Start_Time_HrFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_HU_Sch3_Start_Time_Hr' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_HU_Sch3_Start_Time_Min(VAR(sint16, AUTOMATIC)
    LeCITR_K_HU_Sch3_Start_Time_Min, VAR(boolean, AUTOMATIC)
    LeCITR_b_HU_Sch3_Start_Time_MinFA)
{
    boolean rtb_LeCITR_b_HU_Sch3_Start_Time_MinFA_ou;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_HU_Sch3_Start_Time_Min' */
    /* Chart: '<S203>/PokeCITR_K_HU_Sch3_Start_Time_MinChrt' incorporates:
     *  SignalConversion generated from: '<S203>/LeCITR_K_HU_Sch3_Start_Time_Min'
     *  SignalConversion generated from: '<S203>/LeCITR_b_HU_Sch3_Start_Time_MinFA'
     */
    /* Gateway: PokeCITR_K_HU_Sch3_Start_Time_Min/PokeCITR_K_HU_Sch3_Start_Time_MinChrt */
    /* During: PokeCITR_K_HU_Sch3_Start_Time_Min/PokeCITR_K_HU_Sch3_Start_Time_MinChrt */
    /* Entry Internal: PokeCITR_K_HU_Sch3_Start_Time_Min/PokeCITR_K_HU_Sch3_Start_Time_MinChrt */
    /* Transition: '<S797>:2' */
    if (!LeCITR_b_HU_Sch3_Start_Time_MinFA)
    {
        /* Transition: '<S797>:3' */
        /* Transition: '<S797>:15' */
        CITR_ac_B.LeCITR_K_HU_Sch3_Start_Time_Min_out =
            LeCITR_K_HU_Sch3_Start_Time_Min;
        rtb_LeCITR_b_HU_Sch3_Start_Time_MinFA_ou = false;

        /* Transition: '<S797>:18' */
    }
    else
    {
        /* Transition: '<S797>:4' */
        rtb_LeCITR_b_HU_Sch3_Start_Time_MinFA_ou = true;
    }

    /* End of Chart: '<S203>/PokeCITR_K_HU_Sch3_Start_Time_MinChrt' */

    /* Outport: '<Root>/VeCITR_K_HU_Sch3_Start_Time_Min' incorporates:
     *  SignalConversion generated from: '<S203>/VeCITR_K_HU_Sch3_Start_Time_Min'
     */
    (void)Rte_Write_VeCITR_K_HU_Sch3_Start_Time_Min_Value
        (CITR_ac_B.LeCITR_K_HU_Sch3_Start_Time_Min_out);

    /* Outport: '<Root>/VeCITR_b_HU_Sch3_Start_Time_MinFA' incorporates:
     *  SignalConversion generated from: '<S203>/VeCITR_b_HU_Sch3_Start_Time_MinFA'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch3_Start_Time_MinFA_Value
        (rtb_LeCITR_b_HU_Sch3_Start_Time_MinFA_ou);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_HU_Sch3_Start_Time_Min' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_HU_Sch4_Day(VAR(uint8, AUTOMATIC)
    LeCITR_K_HU_Sch4_Day, VAR(boolean, AUTOMATIC) LeCITR_b_HU_Sch4_DayFA)
{
    boolean rtb_LeCITR_b_HU_Sch4_DayFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_HU_Sch4_Day' */
    /* Chart: '<S204>/PokeCITR_K_HU_Sch4_DayChrt' incorporates:
     *  SignalConversion generated from: '<S204>/LeCITR_K_HU_Sch4_Day'
     *  SignalConversion generated from: '<S204>/LeCITR_b_HU_Sch4_DayFA'
     */
    /* Gateway: PokeCITR_K_HU_Sch4_Day/PokeCITR_K_HU_Sch4_DayChrt */
    /* During: PokeCITR_K_HU_Sch4_Day/PokeCITR_K_HU_Sch4_DayChrt */
    /* Entry Internal: PokeCITR_K_HU_Sch4_Day/PokeCITR_K_HU_Sch4_DayChrt */
    /* Transition: '<S798>:2' */
    if (!LeCITR_b_HU_Sch4_DayFA)
    {
        /* Transition: '<S798>:3' */
        /* Transition: '<S798>:15' */
        CITR_ac_B.LeCITR_K_HU_Sch4_Day_out = LeCITR_K_HU_Sch4_Day;
        rtb_LeCITR_b_HU_Sch4_DayFA_out = false;
        CITR_ac_B.LeCITR_b_HU_Sch4_DaySgnl_Rcvd = true;

        /* Transition: '<S798>:18' */
    }
    else
    {
        /* Transition: '<S798>:4' */
        rtb_LeCITR_b_HU_Sch4_DayFA_out = true;
    }

    /* End of Chart: '<S204>/PokeCITR_K_HU_Sch4_DayChrt' */

    /* Outport: '<Root>/VeCITR_K_HU_Sch4_Day' incorporates:
     *  SignalConversion generated from: '<S204>/VeCITR_K_HU_Sch4_Day'
     */
    (void)Rte_Write_VeCITR_K_HU_Sch4_Day_Value
        (CITR_ac_B.LeCITR_K_HU_Sch4_Day_out);

    /* Outport: '<Root>/VeCITR_b_HU_Sch4_Day_FA' incorporates:
     *  SignalConversion generated from: '<S204>/VeCITR_b_HU_Sch4_DayFA'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch4_Day_FA_Value(rtb_LeCITR_b_HU_Sch4_DayFA_out);

    /* Outport: '<Root>/VeCITR_b_HU_Sch4_Day_SgnlRcvd' incorporates:
     *  SignalConversion generated from: '<S204>/VeCITR_b_HU_Sch4_DaySgnl_Rcvd'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch4_Day_SgnlRcvd_Value
        (CITR_ac_B.LeCITR_b_HU_Sch4_DaySgnl_Rcvd);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_HU_Sch4_Day' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_HU_Sch4_Start_Time_Hr(VAR(sint16, AUTOMATIC)
    LeCITR_K_HU_Sch4_Start_Time_Hr, VAR(boolean, AUTOMATIC)
    LeCITR_b_HU_Sch4_Start_Time_HrFA)
{
    boolean rtb_LeCITR_b_HU_Sch4_Start_Time_HrFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_HU_Sch4_Start_Time_Hr' */
    /* Chart: '<S205>/PokeCITR_K_HU_Sch4_Start_Time_HrChrt' incorporates:
     *  SignalConversion generated from: '<S205>/LeCITR_K_HU_Sch4_Start_Time_Hr'
     *  SignalConversion generated from: '<S205>/LeCITR_b_HU_Sch4_Start_Time_HrFA'
     */
    /* Gateway: PokeCITR_K_HU_Sch4_Start_Time_Hr/PokeCITR_K_HU_Sch4_Start_Time_HrChrt */
    /* During: PokeCITR_K_HU_Sch4_Start_Time_Hr/PokeCITR_K_HU_Sch4_Start_Time_HrChrt */
    /* Entry Internal: PokeCITR_K_HU_Sch4_Start_Time_Hr/PokeCITR_K_HU_Sch4_Start_Time_HrChrt */
    /* Transition: '<S799>:2' */
    if (!LeCITR_b_HU_Sch4_Start_Time_HrFA)
    {
        /* Transition: '<S799>:3' */
        /* Transition: '<S799>:15' */
        CITR_ac_B.LeCITR_K_HU_Sch4_Start_Time_Hr_out =
            LeCITR_K_HU_Sch4_Start_Time_Hr;
        rtb_LeCITR_b_HU_Sch4_Start_Time_HrFA_out = false;

        /* Transition: '<S799>:18' */
    }
    else
    {
        /* Transition: '<S799>:4' */
        rtb_LeCITR_b_HU_Sch4_Start_Time_HrFA_out = true;
    }

    /* End of Chart: '<S205>/PokeCITR_K_HU_Sch4_Start_Time_HrChrt' */

    /* Outport: '<Root>/VeCITR_K_HU_Sch4_Start_Time_Hr' incorporates:
     *  SignalConversion generated from: '<S205>/VeCITR_K_HU_Sch4_Start_Time_Hr'
     */
    (void)Rte_Write_VeCITR_K_HU_Sch4_Start_Time_Hr_Value
        (CITR_ac_B.LeCITR_K_HU_Sch4_Start_Time_Hr_out);

    /* Outport: '<Root>/VeCITR_b_HU_Sch4_Start_Time_HrFA' incorporates:
     *  SignalConversion generated from: '<S205>/VeCITR_b_HU_Sch4_Start_Time_HrFA'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch4_Start_Time_HrFA_Value
        (rtb_LeCITR_b_HU_Sch4_Start_Time_HrFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_HU_Sch4_Start_Time_Hr' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_HU_Sch4_Start_Time_Min(VAR(sint16, AUTOMATIC)
    LeCITR_K_HU_Sch4_Start_Time_Min, VAR(boolean, AUTOMATIC)
    LeCITR_b_HU_Sch4_Start_Time_MinFA)
{
    boolean rtb_LeCITR_b_HU_Sch4_Start_Time_MinFA_ou;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_HU_Sch4_Start_Time_Min' */
    /* Chart: '<S206>/PokeCITR_K_HU_Sch4_Start_Time_MinChrt' incorporates:
     *  SignalConversion generated from: '<S206>/LeCITR_K_HU_Sch4_Start_Time_Min'
     *  SignalConversion generated from: '<S206>/LeCITR_b_HU_Sch4_Start_Time_MinFA'
     */
    /* Gateway: PokeCITR_K_HU_Sch4_Start_Time_Min/PokeCITR_K_HU_Sch4_Start_Time_MinChrt */
    /* During: PokeCITR_K_HU_Sch4_Start_Time_Min/PokeCITR_K_HU_Sch4_Start_Time_MinChrt */
    /* Entry Internal: PokeCITR_K_HU_Sch4_Start_Time_Min/PokeCITR_K_HU_Sch4_Start_Time_MinChrt */
    /* Transition: '<S800>:2' */
    if (!LeCITR_b_HU_Sch4_Start_Time_MinFA)
    {
        /* Transition: '<S800>:3' */
        /* Transition: '<S800>:15' */
        CITR_ac_B.LeCITR_K_HU_Sch4_Start_Time_Min_out =
            LeCITR_K_HU_Sch4_Start_Time_Min;
        rtb_LeCITR_b_HU_Sch4_Start_Time_MinFA_ou = false;

        /* Transition: '<S800>:18' */
    }
    else
    {
        /* Transition: '<S800>:4' */
        rtb_LeCITR_b_HU_Sch4_Start_Time_MinFA_ou = true;
    }

    /* End of Chart: '<S206>/PokeCITR_K_HU_Sch4_Start_Time_MinChrt' */

    /* Outport: '<Root>/VeCITR_K_HU_Sch4_Start_Time_Min' incorporates:
     *  SignalConversion generated from: '<S206>/VeCITR_K_HU_Sch4_Start_Time_Min'
     */
    (void)Rte_Write_VeCITR_K_HU_Sch4_Start_Time_Min_Value
        (CITR_ac_B.LeCITR_K_HU_Sch4_Start_Time_Min_out);

    /* Outport: '<Root>/VeCITR_b_HU_Sch4_Start_Time_MinFA' incorporates:
     *  SignalConversion generated from: '<S206>/VeCITR_b_HU_Sch4_Start_Time_MinFA'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch4_Start_Time_MinFA_Value
        (rtb_LeCITR_b_HU_Sch4_Start_Time_MinFA_ou);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_HU_Sch4_Start_Time_Min' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_TBM_Sch1_Day(VAR(uint8, AUTOMATIC)
    LeCITR_K_TBM_Sch1_Day, VAR(boolean, AUTOMATIC) LeCITR_b_TBM_Sch1_DayFA)
{
    boolean rtb_LeCITR_b_TBM_Sch1_DayFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_TBM_Sch1_Day' */
    /* Chart: '<S207>/PokeCITR_K_TBM_Sch1_DayChrt' incorporates:
     *  SignalConversion generated from: '<S207>/LeCITR_K_TBM_Sch1_Day'
     *  SignalConversion generated from: '<S207>/LeCITR_b_TBM_Sch1_DayFA'
     */
    /* Gateway: PokeCITR_K_TBM_Sch1_Day/PokeCITR_K_TBM_Sch1_DayChrt */
    /* During: PokeCITR_K_TBM_Sch1_Day/PokeCITR_K_TBM_Sch1_DayChrt */
    /* Entry Internal: PokeCITR_K_TBM_Sch1_Day/PokeCITR_K_TBM_Sch1_DayChrt */
    /* Transition: '<S801>:2' */
    if (!LeCITR_b_TBM_Sch1_DayFA)
    {
        /* Transition: '<S801>:3' */
        /* Transition: '<S801>:15' */
        CITR_ac_B.LeCITR_K_TBM_Sch1_Day_out = LeCITR_K_TBM_Sch1_Day;
        rtb_LeCITR_b_TBM_Sch1_DayFA_out = false;
        CITR_ac_B.LeCITR_b_TBM_Sch1_DaySgnl_Rcvd = true;

        /* Transition: '<S801>:18' */
    }
    else
    {
        /* Transition: '<S801>:4' */
        rtb_LeCITR_b_TBM_Sch1_DayFA_out = true;
    }

    /* End of Chart: '<S207>/PokeCITR_K_TBM_Sch1_DayChrt' */

    /* Outport: '<Root>/VeCITR_K_TBM_Sch1_Day' incorporates:
     *  SignalConversion generated from: '<S207>/VeCITR_K_TBM_Sch1_Day'
     */
    (void)Rte_Write_VeCITR_K_TBM_Sch1_Day_Value
        (CITR_ac_B.LeCITR_K_TBM_Sch1_Day_out);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch1_Day_FA' incorporates:
     *  SignalConversion generated from: '<S207>/VeCITR_b_TBM_Sch1_DayFA'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch1_Day_FA_Value
        (rtb_LeCITR_b_TBM_Sch1_DayFA_out);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch1_Day_SgnlRcvd' incorporates:
     *  SignalConversion generated from: '<S207>/VeCITR_b_TBM_Sch1_DaySgnl_Rcvd'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch1_Day_SgnlRcvd_Value
        (CITR_ac_B.LeCITR_b_TBM_Sch1_DaySgnl_Rcvd);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_TBM_Sch1_Day' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_TBM_Sch1_End_Time_Hr(VAR(sint16, AUTOMATIC)
    LeCITR_K_TBM_Sch1_End_Time_Hr, VAR(boolean, AUTOMATIC)
    LeCITR_b_TBM_Sch1_End_Time_HrFA)
{
    boolean rtb_LeCITR_b_TBM_Sch1_End_Time_HrFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_TBM_Sch1_End_Time_Hr' */
    /* Chart: '<S208>/PokeCITR_K_TBM_Sch1_End_Time_HrChrt' incorporates:
     *  SignalConversion generated from: '<S208>/LeCITR_K_TBM_Sch1_End_Time_Hr'
     *  SignalConversion generated from: '<S208>/LeCITR_b_TBM_Sch1_End_Time_HrFA'
     */
    /* Gateway: PokeCITR_K_TBM_Sch1_End_Time_Hr/PokeCITR_K_TBM_Sch1_End_Time_HrChrt */
    /* During: PokeCITR_K_TBM_Sch1_End_Time_Hr/PokeCITR_K_TBM_Sch1_End_Time_HrChrt */
    /* Entry Internal: PokeCITR_K_TBM_Sch1_End_Time_Hr/PokeCITR_K_TBM_Sch1_End_Time_HrChrt */
    /* Transition: '<S802>:2' */
    if (!LeCITR_b_TBM_Sch1_End_Time_HrFA)
    {
        /* Transition: '<S802>:3' */
        /* Transition: '<S802>:15' */
        CITR_ac_B.LeCITR_K_TBM_Sch1_End_Time_Hr_out =
            LeCITR_K_TBM_Sch1_End_Time_Hr;
        rtb_LeCITR_b_TBM_Sch1_End_Time_HrFA_out = false;

        /* Transition: '<S802>:18' */
    }
    else
    {
        /* Transition: '<S802>:4' */
        rtb_LeCITR_b_TBM_Sch1_End_Time_HrFA_out = true;
    }

    /* End of Chart: '<S208>/PokeCITR_K_TBM_Sch1_End_Time_HrChrt' */

    /* Outport: '<Root>/VeCITR_K_TBM_Sch1_End_Time_Hr' incorporates:
     *  SignalConversion generated from: '<S208>/VeCITR_K_TBM_Sch1_End_Time_Hr'
     */
    (void)Rte_Write_VeCITR_K_TBM_Sch1_End_Time_Hr_Value
        (CITR_ac_B.LeCITR_K_TBM_Sch1_End_Time_Hr_out);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch1_End_Time_HrFA' incorporates:
     *  SignalConversion generated from: '<S208>/VeCITR_b_TBM_Sch1_End_Time_HrFA'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch1_End_Time_HrFA_Value
        (rtb_LeCITR_b_TBM_Sch1_End_Time_HrFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_TBM_Sch1_End_Time_Hr' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_TBM_Sch1_End_Time_Min(VAR(sint16, AUTOMATIC)
    LeCITR_K_TBM_Sch1_End_Time_Min, VAR(boolean, AUTOMATIC)
    LeCITR_b_TBM_Sch1_End_Time_MinFA)
{
    boolean rtb_LeCITR_b_TBM_Sch1_End_Time_MinFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_TBM_Sch1_End_Time_Min' */
    /* Chart: '<S209>/PokeCITR_K_TBM_Sch1_End_Time_MinChrt' incorporates:
     *  SignalConversion generated from: '<S209>/LeCITR_K_TBM_Sch1_End_Time_Min'
     *  SignalConversion generated from: '<S209>/LeCITR_b_TBM_Sch1_End_Time_MinFA'
     */
    /* Gateway: PokeCITR_K_TBM_Sch1_End_Time_Min/PokeCITR_K_TBM_Sch1_End_Time_MinChrt */
    /* During: PokeCITR_K_TBM_Sch1_End_Time_Min/PokeCITR_K_TBM_Sch1_End_Time_MinChrt */
    /* Entry Internal: PokeCITR_K_TBM_Sch1_End_Time_Min/PokeCITR_K_TBM_Sch1_End_Time_MinChrt */
    /* Transition: '<S803>:2' */
    if (!LeCITR_b_TBM_Sch1_End_Time_MinFA)
    {
        /* Transition: '<S803>:3' */
        /* Transition: '<S803>:15' */
        CITR_ac_B.LeCITR_K_TBM_Sch1_End_Time_Min_out =
            LeCITR_K_TBM_Sch1_End_Time_Min;
        rtb_LeCITR_b_TBM_Sch1_End_Time_MinFA_out = false;

        /* Transition: '<S803>:18' */
    }
    else
    {
        /* Transition: '<S803>:4' */
        rtb_LeCITR_b_TBM_Sch1_End_Time_MinFA_out = true;
    }

    /* End of Chart: '<S209>/PokeCITR_K_TBM_Sch1_End_Time_MinChrt' */

    /* Outport: '<Root>/VeCITR_K_TBM_Sch1_End_Time_Min' incorporates:
     *  SignalConversion generated from: '<S209>/VeCITR_K_TBM_Sch1_End_Time_Min'
     */
    (void)Rte_Write_VeCITR_K_TBM_Sch1_End_Time_Min_Value
        (CITR_ac_B.LeCITR_K_TBM_Sch1_End_Time_Min_out);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch1_End_Time_MinFA' incorporates:
     *  SignalConversion generated from: '<S209>/VeCITR_b_TBM_Sch1_End_Time_MinFA'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch1_End_Time_MinFA_Value
        (rtb_LeCITR_b_TBM_Sch1_End_Time_MinFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_TBM_Sch1_End_Time_Min' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_TBM_Sch1_Start_Time_Hr(VAR(sint16, AUTOMATIC)
    LeCITR_K_TBM_Sch1_Start_Time_Hr, VAR(boolean, AUTOMATIC)
    LeCITR_b_TBM_Sch1_Start_Time_HrFA)
{
    boolean rtb_LeCITR_b_TBM_Sch1_Start_Time_HrFA_ou;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_TBM_Sch1_Start_Time_Hr' */
    /* Chart: '<S210>/PokeCITR_K_TBM_Sch1_Start_Time_HrChrt' incorporates:
     *  SignalConversion generated from: '<S210>/LeCITR_K_TBM_Sch1_Start_Time_Hr'
     *  SignalConversion generated from: '<S210>/LeCITR_b_TBM_Sch1_Start_Time_HrFA'
     */
    /* Gateway: PokeCITR_K_TBM_Sch1_Start_Time_Hr/PokeCITR_K_TBM_Sch1_Start_Time_HrChrt */
    /* During: PokeCITR_K_TBM_Sch1_Start_Time_Hr/PokeCITR_K_TBM_Sch1_Start_Time_HrChrt */
    /* Entry Internal: PokeCITR_K_TBM_Sch1_Start_Time_Hr/PokeCITR_K_TBM_Sch1_Start_Time_HrChrt */
    /* Transition: '<S804>:2' */
    if (!LeCITR_b_TBM_Sch1_Start_Time_HrFA)
    {
        /* Transition: '<S804>:3' */
        /* Transition: '<S804>:15' */
        CITR_ac_B.LeCITR_K_TBM_Sch1_Start_Time_Hr_out =
            LeCITR_K_TBM_Sch1_Start_Time_Hr;
        rtb_LeCITR_b_TBM_Sch1_Start_Time_HrFA_ou = false;

        /* Transition: '<S804>:18' */
    }
    else
    {
        /* Transition: '<S804>:4' */
        rtb_LeCITR_b_TBM_Sch1_Start_Time_HrFA_ou = true;
    }

    /* End of Chart: '<S210>/PokeCITR_K_TBM_Sch1_Start_Time_HrChrt' */

    /* Outport: '<Root>/VeCITR_K_TBM_Sch1_Start_Time_Hr' incorporates:
     *  SignalConversion generated from: '<S210>/VeCITR_K_TBM_Sch1_Start_Time_Hr'
     */
    (void)Rte_Write_VeCITR_K_TBM_Sch1_Start_Time_Hr_Value
        (CITR_ac_B.LeCITR_K_TBM_Sch1_Start_Time_Hr_out);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch1_Start_Time_HrFA' incorporates:
     *  SignalConversion generated from: '<S210>/VeCITR_b_TBM_Sch1_Start_Time_HrFA'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch1_Start_Time_HrFA_Value
        (rtb_LeCITR_b_TBM_Sch1_Start_Time_HrFA_ou);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_TBM_Sch1_Start_Time_Hr' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_TBM_Sch1_Start_Time_Min(VAR(sint16, AUTOMATIC)
    LeCITR_K_TBM_Sch1_Start_Time_Min, VAR(boolean, AUTOMATIC)
    LeCITR_b_TBM_Sch1_Start_Time_MinFA)
{
    boolean rtb_LeCITR_b_TBM_Sch1_Start_Time_MinFA_o;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_TBM_Sch1_Start_Time_Min' */
    /* Chart: '<S211>/PokeCITR_K_TBM_Sch1_Start_Time_MinChrt' incorporates:
     *  SignalConversion generated from: '<S211>/LeCITR_K_TBM_Sch1_Start_Time_Min'
     *  SignalConversion generated from: '<S211>/LeCITR_b_TBM_Sch1_Start_Time_MinFA'
     */
    /* Gateway: PokeCITR_K_TBM_Sch1_Start_Time_Min/PokeCITR_K_TBM_Sch1_Start_Time_MinChrt */
    /* During: PokeCITR_K_TBM_Sch1_Start_Time_Min/PokeCITR_K_TBM_Sch1_Start_Time_MinChrt */
    /* Entry Internal: PokeCITR_K_TBM_Sch1_Start_Time_Min/PokeCITR_K_TBM_Sch1_Start_Time_MinChrt */
    /* Transition: '<S805>:2' */
    if (!LeCITR_b_TBM_Sch1_Start_Time_MinFA)
    {
        /* Transition: '<S805>:3' */
        /* Transition: '<S805>:15' */
        CITR_ac_B.LeCITR_K_TBM_Sch1_Start_Time_Min_out =
            LeCITR_K_TBM_Sch1_Start_Time_Min;
        rtb_LeCITR_b_TBM_Sch1_Start_Time_MinFA_o = false;

        /* Transition: '<S805>:18' */
    }
    else
    {
        /* Transition: '<S805>:4' */
        rtb_LeCITR_b_TBM_Sch1_Start_Time_MinFA_o = true;
    }

    /* End of Chart: '<S211>/PokeCITR_K_TBM_Sch1_Start_Time_MinChrt' */

    /* Outport: '<Root>/VeCITR_K_TBM_Sch1_Start_Time_Min' incorporates:
     *  SignalConversion generated from: '<S211>/VeCITR_K_TBM_Sch1_Start_Time_Min'
     */
    (void)Rte_Write_VeCITR_K_TBM_Sch1_Start_Time_Min_Value
        (CITR_ac_B.LeCITR_K_TBM_Sch1_Start_Time_Min_out);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch1_Start_Time_MinFA' incorporates:
     *  SignalConversion generated from: '<S211>/VeCITR_b_TBM_Sch1_Start_Time_MinFA'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch1_Start_Time_MinFA_Value
        (rtb_LeCITR_b_TBM_Sch1_Start_Time_MinFA_o);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_TBM_Sch1_Start_Time_Min' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_TBM_Sch2_Day(VAR(uint8, AUTOMATIC)
    LeCITR_K_TBM_Sch2_Day, VAR(boolean, AUTOMATIC) LeCITR_b_TBM_Sch2_DayFA)
{
    boolean rtb_LeCITR_b_TBM_Sch2_DayFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_TBM_Sch2_Day' */
    /* Chart: '<S212>/PokeCITR_K_TBM_Sch2_DayChrt' incorporates:
     *  SignalConversion generated from: '<S212>/LeCITR_K_TBM_Sch2_Day'
     *  SignalConversion generated from: '<S212>/LeCITR_b_TBM_Sch2_DayFA'
     */
    /* Gateway: PokeCITR_K_TBM_Sch2_Day/PokeCITR_K_TBM_Sch2_DayChrt */
    /* During: PokeCITR_K_TBM_Sch2_Day/PokeCITR_K_TBM_Sch2_DayChrt */
    /* Entry Internal: PokeCITR_K_TBM_Sch2_Day/PokeCITR_K_TBM_Sch2_DayChrt */
    /* Transition: '<S806>:2' */
    if (!LeCITR_b_TBM_Sch2_DayFA)
    {
        /* Transition: '<S806>:3' */
        /* Transition: '<S806>:15' */
        CITR_ac_B.LeCITR_K_TBM_Sch2_Day_out = LeCITR_K_TBM_Sch2_Day;
        rtb_LeCITR_b_TBM_Sch2_DayFA_out = false;
        CITR_ac_B.LeCITR_b_TBM_Sch2_DaySgnl_Rcvd = true;

        /* Transition: '<S806>:18' */
    }
    else
    {
        /* Transition: '<S806>:4' */
        rtb_LeCITR_b_TBM_Sch2_DayFA_out = true;
    }

    /* End of Chart: '<S212>/PokeCITR_K_TBM_Sch2_DayChrt' */

    /* Outport: '<Root>/VeCITR_K_TBM_Sch2_Day' incorporates:
     *  SignalConversion generated from: '<S212>/VeCITR_K_TBM_Sch2_Day'
     */
    (void)Rte_Write_VeCITR_K_TBM_Sch2_Day_Value
        (CITR_ac_B.LeCITR_K_TBM_Sch2_Day_out);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch2_Day_FA' incorporates:
     *  SignalConversion generated from: '<S212>/VeCITR_b_TBM_Sch2_DayFA'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch2_Day_FA_Value
        (rtb_LeCITR_b_TBM_Sch2_DayFA_out);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch2_Day_SgnlRcvd' incorporates:
     *  SignalConversion generated from: '<S212>/VeCITR_b_TBM_Sch2_DaySgnl_Rcvd'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch2_Day_SgnlRcvd_Value
        (CITR_ac_B.LeCITR_b_TBM_Sch2_DaySgnl_Rcvd);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_TBM_Sch2_Day' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_TBM_Sch2_End_Time_Hr(VAR(sint16, AUTOMATIC)
    LeCITR_K_TBM_Sch2_End_Time_Hr, VAR(boolean, AUTOMATIC)
    LeCITR_b_TBM_Sch2_End_Time_HrFA)
{
    boolean rtb_LeCITR_b_TBM_Sch2_End_Time_HrFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_TBM_Sch2_End_Time_Hr' */
    /* Chart: '<S213>/PokeCITR_K_TBM_Sch2_End_Time_HrChrt' incorporates:
     *  SignalConversion generated from: '<S213>/LeCITR_K_TBM_Sch2_End_Time_Hr'
     *  SignalConversion generated from: '<S213>/LeCITR_b_TBM_Sch2_End_Time_HrFA'
     */
    /* Gateway: PokeCITR_K_TBM_Sch2_End_Time_Hr/PokeCITR_K_TBM_Sch2_End_Time_HrChrt */
    /* During: PokeCITR_K_TBM_Sch2_End_Time_Hr/PokeCITR_K_TBM_Sch2_End_Time_HrChrt */
    /* Entry Internal: PokeCITR_K_TBM_Sch2_End_Time_Hr/PokeCITR_K_TBM_Sch2_End_Time_HrChrt */
    /* Transition: '<S807>:2' */
    if (!LeCITR_b_TBM_Sch2_End_Time_HrFA)
    {
        /* Transition: '<S807>:3' */
        /* Transition: '<S807>:15' */
        CITR_ac_B.LeCITR_K_TBM_Sch2_End_Time_Hr_out =
            LeCITR_K_TBM_Sch2_End_Time_Hr;
        rtb_LeCITR_b_TBM_Sch2_End_Time_HrFA_out = false;

        /* Transition: '<S807>:18' */
    }
    else
    {
        /* Transition: '<S807>:4' */
        rtb_LeCITR_b_TBM_Sch2_End_Time_HrFA_out = true;
    }

    /* End of Chart: '<S213>/PokeCITR_K_TBM_Sch2_End_Time_HrChrt' */

    /* Outport: '<Root>/VeCITR_K_TBM_Sch2_End_Time_Hr' incorporates:
     *  SignalConversion generated from: '<S213>/VeCITR_K_TBM_Sch2_End_Time_Hr'
     */
    (void)Rte_Write_VeCITR_K_TBM_Sch2_End_Time_Hr_Value
        (CITR_ac_B.LeCITR_K_TBM_Sch2_End_Time_Hr_out);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch2_End_Time_HrFA' incorporates:
     *  SignalConversion generated from: '<S213>/VeCITR_b_TBM_Sch2_End_Time_HrFA'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch2_End_Time_HrFA_Value
        (rtb_LeCITR_b_TBM_Sch2_End_Time_HrFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_TBM_Sch2_End_Time_Hr' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_TBM_Sch2_End_Time_Min(VAR(sint16, AUTOMATIC)
    LeCITR_K_TBM_Sch2_End_Time_Min, VAR(boolean, AUTOMATIC)
    LeCITR_b_TBM_Sch2_End_Time_MinFA)
{
    boolean rtb_LeCITR_b_TBM_Sch2_End_Time_MinFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_TBM_Sch2_End_Time_Min' */
    /* Chart: '<S214>/PokeCITR_K_TBM_Sch2_End_Time_MinChrt' incorporates:
     *  SignalConversion generated from: '<S214>/LeCITR_K_TBM_Sch2_End_Time_Min'
     *  SignalConversion generated from: '<S214>/LeCITR_b_TBM_Sch2_End_Time_MinFA'
     */
    /* Gateway: PokeCITR_K_TBM_Sch2_End_Time_Min/PokeCITR_K_TBM_Sch2_End_Time_MinChrt */
    /* During: PokeCITR_K_TBM_Sch2_End_Time_Min/PokeCITR_K_TBM_Sch2_End_Time_MinChrt */
    /* Entry Internal: PokeCITR_K_TBM_Sch2_End_Time_Min/PokeCITR_K_TBM_Sch2_End_Time_MinChrt */
    /* Transition: '<S808>:2' */
    if (!LeCITR_b_TBM_Sch2_End_Time_MinFA)
    {
        /* Transition: '<S808>:3' */
        /* Transition: '<S808>:15' */
        CITR_ac_B.LeCITR_K_TBM_Sch2_End_Time_Min_out =
            LeCITR_K_TBM_Sch2_End_Time_Min;
        rtb_LeCITR_b_TBM_Sch2_End_Time_MinFA_out = false;

        /* Transition: '<S808>:18' */
    }
    else
    {
        /* Transition: '<S808>:4' */
        rtb_LeCITR_b_TBM_Sch2_End_Time_MinFA_out = true;
    }

    /* End of Chart: '<S214>/PokeCITR_K_TBM_Sch2_End_Time_MinChrt' */

    /* Outport: '<Root>/VeCITR_K_TBM_Sch2_End_Time_Min' incorporates:
     *  SignalConversion generated from: '<S214>/VeCITR_K_TBM_Sch2_End_Time_Min'
     */
    (void)Rte_Write_VeCITR_K_TBM_Sch2_End_Time_Min_Value
        (CITR_ac_B.LeCITR_K_TBM_Sch2_End_Time_Min_out);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch2_End_Time_MinFA' incorporates:
     *  SignalConversion generated from: '<S214>/VeCITR_b_TBM_Sch2_End_Time_MinFA'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch2_End_Time_MinFA_Value
        (rtb_LeCITR_b_TBM_Sch2_End_Time_MinFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_TBM_Sch2_End_Time_Min' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_TBM_Sch2_Start_Time_Hr(VAR(sint16, AUTOMATIC)
    LeCITR_K_TBM_Sch2_Start_Time_Hr, VAR(boolean, AUTOMATIC)
    LeCITR_b_TBM_Sch2_Start_Time_HrFA)
{
    boolean rtb_LeCITR_b_TBM_Sch2_Start_Time_HrFA_ou;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_TBM_Sch2_Start_Time_Hr' */
    /* Chart: '<S215>/PokeCITR_K_TBM_Sch2_Start_Time_HrChrt' incorporates:
     *  SignalConversion generated from: '<S215>/LeCITR_K_TBM_Sch2_Start_Time_Hr'
     *  SignalConversion generated from: '<S215>/LeCITR_b_TBM_Sch2_Start_Time_HrFA'
     */
    /* Gateway: PokeCITR_K_TBM_Sch2_Start_Time_Hr/PokeCITR_K_TBM_Sch2_Start_Time_HrChrt */
    /* During: PokeCITR_K_TBM_Sch2_Start_Time_Hr/PokeCITR_K_TBM_Sch2_Start_Time_HrChrt */
    /* Entry Internal: PokeCITR_K_TBM_Sch2_Start_Time_Hr/PokeCITR_K_TBM_Sch2_Start_Time_HrChrt */
    /* Transition: '<S809>:2' */
    if (!LeCITR_b_TBM_Sch2_Start_Time_HrFA)
    {
        /* Transition: '<S809>:3' */
        /* Transition: '<S809>:15' */
        CITR_ac_B.LeCITR_K_TBM_Sch2_Start_Time_Hr_out =
            LeCITR_K_TBM_Sch2_Start_Time_Hr;
        rtb_LeCITR_b_TBM_Sch2_Start_Time_HrFA_ou = false;

        /* Transition: '<S809>:18' */
    }
    else
    {
        /* Transition: '<S809>:4' */
        rtb_LeCITR_b_TBM_Sch2_Start_Time_HrFA_ou = true;
    }

    /* End of Chart: '<S215>/PokeCITR_K_TBM_Sch2_Start_Time_HrChrt' */

    /* Outport: '<Root>/VeCITR_K_TBM_Sch2_Start_Time_Hr' incorporates:
     *  SignalConversion generated from: '<S215>/VeCITR_K_TBM_Sch2_Start_Time_Hr'
     */
    (void)Rte_Write_VeCITR_K_TBM_Sch2_Start_Time_Hr_Value
        (CITR_ac_B.LeCITR_K_TBM_Sch2_Start_Time_Hr_out);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch2_Start_Time_HrFA' incorporates:
     *  SignalConversion generated from: '<S215>/VeCITR_b_TBM_Sch2_Start_Time_HrFA'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch2_Start_Time_HrFA_Value
        (rtb_LeCITR_b_TBM_Sch2_Start_Time_HrFA_ou);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_TBM_Sch2_Start_Time_Hr' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_TBM_Sch2_Start_Time_Min(VAR(sint16, AUTOMATIC)
    LeCITR_K_TBM_Sch2_Start_Time_Min, VAR(boolean, AUTOMATIC)
    LeCITR_b_TBM_Sch2_Start_Time_MinFA)
{
    boolean rtb_LeCITR_b_TBM_Sch2_Start_Time_MinFA_o;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_TBM_Sch2_Start_Time_Min' */
    /* Chart: '<S216>/PokeCITR_K_TBM_Sch2_Start_Time_MinChrt' incorporates:
     *  SignalConversion generated from: '<S216>/LeCITR_K_TBM_Sch2_Start_Time_Min'
     *  SignalConversion generated from: '<S216>/LeCITR_b_TBM_Sch2_Start_Time_MinFA'
     */
    /* Gateway: PokeCITR_K_TBM_Sch2_Start_Time_Min/PokeCITR_K_TBM_Sch2_Start_Time_MinChrt */
    /* During: PokeCITR_K_TBM_Sch2_Start_Time_Min/PokeCITR_K_TBM_Sch2_Start_Time_MinChrt */
    /* Entry Internal: PokeCITR_K_TBM_Sch2_Start_Time_Min/PokeCITR_K_TBM_Sch2_Start_Time_MinChrt */
    /* Transition: '<S810>:2' */
    if (!LeCITR_b_TBM_Sch2_Start_Time_MinFA)
    {
        /* Transition: '<S810>:3' */
        /* Transition: '<S810>:15' */
        CITR_ac_B.LeCITR_K_TBM_Sch2_Start_Time_Min_out =
            LeCITR_K_TBM_Sch2_Start_Time_Min;
        rtb_LeCITR_b_TBM_Sch2_Start_Time_MinFA_o = false;

        /* Transition: '<S810>:18' */
    }
    else
    {
        /* Transition: '<S810>:4' */
        rtb_LeCITR_b_TBM_Sch2_Start_Time_MinFA_o = true;
    }

    /* End of Chart: '<S216>/PokeCITR_K_TBM_Sch2_Start_Time_MinChrt' */

    /* Outport: '<Root>/VeCITR_K_TBM_Sch2_Start_Time_Min' incorporates:
     *  SignalConversion generated from: '<S216>/VeCITR_K_TBM_Sch2_Start_Time_Min'
     */
    (void)Rte_Write_VeCITR_K_TBM_Sch2_Start_Time_Min_Value
        (CITR_ac_B.LeCITR_K_TBM_Sch2_Start_Time_Min_out);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch2_Start_Time_MinFA' incorporates:
     *  SignalConversion generated from: '<S216>/VeCITR_b_TBM_Sch2_Start_Time_MinFA'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch2_Start_Time_MinFA_Value
        (rtb_LeCITR_b_TBM_Sch2_Start_Time_MinFA_o);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_TBM_Sch2_Start_Time_Min' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_TBM_Sch3_Day(VAR(uint8, AUTOMATIC)
    LeCITR_K_TBM_Sch3_Day, VAR(boolean, AUTOMATIC) LeCITR_b_TBM_Sch3_DayFA)
{
    boolean rtb_LeCITR_b_TBM_Sch3_DayFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_TBM_Sch3_Day' */
    /* Chart: '<S217>/PokeCITR_K_TBM_Sch3_DayChrt' incorporates:
     *  SignalConversion generated from: '<S217>/LeCITR_K_TBM_Sch3_Day'
     *  SignalConversion generated from: '<S217>/LeCITR_b_TBM_Sch3_DayFA'
     */
    /* Gateway: PokeCITR_K_TBM_Sch3_Day/PokeCITR_K_TBM_Sch3_DayChrt */
    /* During: PokeCITR_K_TBM_Sch3_Day/PokeCITR_K_TBM_Sch3_DayChrt */
    /* Entry Internal: PokeCITR_K_TBM_Sch3_Day/PokeCITR_K_TBM_Sch3_DayChrt */
    /* Transition: '<S811>:2' */
    if (!LeCITR_b_TBM_Sch3_DayFA)
    {
        /* Transition: '<S811>:3' */
        /* Transition: '<S811>:15' */
        CITR_ac_B.LeCITR_K_TBM_Sch3_Day_out = LeCITR_K_TBM_Sch3_Day;
        rtb_LeCITR_b_TBM_Sch3_DayFA_out = false;
        CITR_ac_B.LeCITR_b_TBM_Sch3_DaySgnl_Rcvd = true;

        /* Transition: '<S811>:18' */
    }
    else
    {
        /* Transition: '<S811>:4' */
        rtb_LeCITR_b_TBM_Sch3_DayFA_out = true;
    }

    /* End of Chart: '<S217>/PokeCITR_K_TBM_Sch3_DayChrt' */

    /* Outport: '<Root>/VeCITR_K_TBM_Sch3_Day' incorporates:
     *  SignalConversion generated from: '<S217>/VeCITR_K_TBM_Sch3_Day'
     */
    (void)Rte_Write_VeCITR_K_TBM_Sch3_Day_Value
        (CITR_ac_B.LeCITR_K_TBM_Sch3_Day_out);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch3_Day_FA' incorporates:
     *  SignalConversion generated from: '<S217>/VeCITR_b_TBM_Sch3_DayFA'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch3_Day_FA_Value
        (rtb_LeCITR_b_TBM_Sch3_DayFA_out);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch3_Day_SgnlRcvd' incorporates:
     *  SignalConversion generated from: '<S217>/VeCITR_b_TBM_Sch3_DaySgnl_Rcvd'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch3_Day_SgnlRcvd_Value
        (CITR_ac_B.LeCITR_b_TBM_Sch3_DaySgnl_Rcvd);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_TBM_Sch3_Day' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_TBM_Sch3_End_Time_Hr(VAR(sint16, AUTOMATIC)
    LeCITR_K_TBM_Sch3_End_Time_Hr, VAR(boolean, AUTOMATIC)
    LeCITR_b_TBM_Sch3_End_Time_HrFA)
{
    boolean rtb_LeCITR_b_TBM_Sch3_End_Time_HrFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_TBM_Sch3_End_Time_Hr' */
    /* Chart: '<S218>/PokeCITR_K_TBM_Sch3_End_Time_HrChrt' incorporates:
     *  SignalConversion generated from: '<S218>/LeCITR_K_TBM_Sch3_End_Time_Hr'
     *  SignalConversion generated from: '<S218>/LeCITR_b_TBM_Sch3_End_Time_HrFA'
     */
    /* Gateway: PokeCITR_K_TBM_Sch3_End_Time_Hr/PokeCITR_K_TBM_Sch3_End_Time_HrChrt */
    /* During: PokeCITR_K_TBM_Sch3_End_Time_Hr/PokeCITR_K_TBM_Sch3_End_Time_HrChrt */
    /* Entry Internal: PokeCITR_K_TBM_Sch3_End_Time_Hr/PokeCITR_K_TBM_Sch3_End_Time_HrChrt */
    /* Transition: '<S812>:2' */
    if (!LeCITR_b_TBM_Sch3_End_Time_HrFA)
    {
        /* Transition: '<S812>:3' */
        /* Transition: '<S812>:15' */
        CITR_ac_B.LeCITR_K_TBM_Sch3_End_Time_Hr_out =
            LeCITR_K_TBM_Sch3_End_Time_Hr;
        rtb_LeCITR_b_TBM_Sch3_End_Time_HrFA_out = false;

        /* Transition: '<S812>:18' */
    }
    else
    {
        /* Transition: '<S812>:4' */
        rtb_LeCITR_b_TBM_Sch3_End_Time_HrFA_out = true;
    }

    /* End of Chart: '<S218>/PokeCITR_K_TBM_Sch3_End_Time_HrChrt' */

    /* Outport: '<Root>/VeCITR_K_TBM_Sch3_End_Time_Hr' incorporates:
     *  SignalConversion generated from: '<S218>/VeCITR_K_TBM_Sch3_End_Time_Hr'
     */
    (void)Rte_Write_VeCITR_K_TBM_Sch3_End_Time_Hr_Value
        (CITR_ac_B.LeCITR_K_TBM_Sch3_End_Time_Hr_out);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch3_End_Time_HrFA' incorporates:
     *  SignalConversion generated from: '<S218>/VeCITR_b_TBM_Sch3_End_Time_HrFA'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch3_End_Time_HrFA_Value
        (rtb_LeCITR_b_TBM_Sch3_End_Time_HrFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_TBM_Sch3_End_Time_Hr' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_TBM_Sch3_End_Time_Min(VAR(sint16, AUTOMATIC)
    LeCITR_K_TBM_Sch3_End_Time_Min, VAR(boolean, AUTOMATIC)
    LeCITR_b_TBM_Sch3_End_Time_MinFA)
{
    boolean rtb_LeCITR_b_TBM_Sch3_End_Time_MinFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_TBM_Sch3_End_Time_Min' */
    /* Chart: '<S219>/PokeCITR_K_TBM_Sch3_End_Time_MinChrt' incorporates:
     *  SignalConversion generated from: '<S219>/LeCITR_K_TBM_Sch3_End_Time_Min'
     *  SignalConversion generated from: '<S219>/LeCITR_b_TBM_Sch3_End_Time_MinFA'
     */
    /* Gateway: PokeCITR_K_TBM_Sch3_End_Time_Min/PokeCITR_K_TBM_Sch3_End_Time_MinChrt */
    /* During: PokeCITR_K_TBM_Sch3_End_Time_Min/PokeCITR_K_TBM_Sch3_End_Time_MinChrt */
    /* Entry Internal: PokeCITR_K_TBM_Sch3_End_Time_Min/PokeCITR_K_TBM_Sch3_End_Time_MinChrt */
    /* Transition: '<S813>:2' */
    if (!LeCITR_b_TBM_Sch3_End_Time_MinFA)
    {
        /* Transition: '<S813>:3' */
        /* Transition: '<S813>:15' */
        CITR_ac_B.LeCITR_K_TBM_Sch3_End_Time_Min_out =
            LeCITR_K_TBM_Sch3_End_Time_Min;
        rtb_LeCITR_b_TBM_Sch3_End_Time_MinFA_out = false;

        /* Transition: '<S813>:18' */
    }
    else
    {
        /* Transition: '<S813>:4' */
        rtb_LeCITR_b_TBM_Sch3_End_Time_MinFA_out = true;
    }

    /* End of Chart: '<S219>/PokeCITR_K_TBM_Sch3_End_Time_MinChrt' */

    /* Outport: '<Root>/VeCITR_K_TBM_Sch3_End_Time_Min' incorporates:
     *  SignalConversion generated from: '<S219>/VeCITR_K_TBM_Sch3_End_Time_Min'
     */
    (void)Rte_Write_VeCITR_K_TBM_Sch3_End_Time_Min_Value
        (CITR_ac_B.LeCITR_K_TBM_Sch3_End_Time_Min_out);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch3_End_Time_MinFA' incorporates:
     *  SignalConversion generated from: '<S219>/VeCITR_b_TBM_Sch3_End_Time_MinFA'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch3_End_Time_MinFA_Value
        (rtb_LeCITR_b_TBM_Sch3_End_Time_MinFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_TBM_Sch3_End_Time_Min' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_TBM_Sch3_Start_Time_Hr(VAR(sint16, AUTOMATIC)
    LeCITR_K_TBM_Sch3_Start_Time_Hr, VAR(boolean, AUTOMATIC)
    LeCITR_b_TBM_Sch3_Start_Time_HrFA)
{
    boolean rtb_LeCITR_b_TBM_Sch3_Start_Time_HrFA_ou;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_TBM_Sch3_Start_Time_Hr' */
    /* Chart: '<S220>/PokeCITR_K_TBM_Sch3_Start_Time_HrChrt' incorporates:
     *  SignalConversion generated from: '<S220>/LeCITR_K_TBM_Sch3_Start_Time_Hr'
     *  SignalConversion generated from: '<S220>/LeCITR_b_TBM_Sch3_Start_Time_HrFA'
     */
    /* Gateway: PokeCITR_K_TBM_Sch3_Start_Time_Hr/PokeCITR_K_TBM_Sch3_Start_Time_HrChrt */
    /* During: PokeCITR_K_TBM_Sch3_Start_Time_Hr/PokeCITR_K_TBM_Sch3_Start_Time_HrChrt */
    /* Entry Internal: PokeCITR_K_TBM_Sch3_Start_Time_Hr/PokeCITR_K_TBM_Sch3_Start_Time_HrChrt */
    /* Transition: '<S814>:2' */
    if (!LeCITR_b_TBM_Sch3_Start_Time_HrFA)
    {
        /* Transition: '<S814>:3' */
        /* Transition: '<S814>:15' */
        CITR_ac_B.LeCITR_K_TBM_Sch3_Start_Time_Hr_out =
            LeCITR_K_TBM_Sch3_Start_Time_Hr;
        rtb_LeCITR_b_TBM_Sch3_Start_Time_HrFA_ou = false;

        /* Transition: '<S814>:18' */
    }
    else
    {
        /* Transition: '<S814>:4' */
        rtb_LeCITR_b_TBM_Sch3_Start_Time_HrFA_ou = true;
    }

    /* End of Chart: '<S220>/PokeCITR_K_TBM_Sch3_Start_Time_HrChrt' */

    /* Outport: '<Root>/VeCITR_K_TBM_Sch3_Start_Time_Hr' incorporates:
     *  SignalConversion generated from: '<S220>/VeCITR_K_TBM_Sch3_Start_Time_Hr'
     */
    (void)Rte_Write_VeCITR_K_TBM_Sch3_Start_Time_Hr_Value
        (CITR_ac_B.LeCITR_K_TBM_Sch3_Start_Time_Hr_out);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch3_Start_Time_HrFA' incorporates:
     *  SignalConversion generated from: '<S220>/VeCITR_b_TBM_Sch3_Start_Time_HrFA'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch3_Start_Time_HrFA_Value
        (rtb_LeCITR_b_TBM_Sch3_Start_Time_HrFA_ou);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_TBM_Sch3_Start_Time_Hr' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_TBM_Sch3_Start_Time_Min(VAR(sint16, AUTOMATIC)
    LeCITR_K_TBM_Sch3_Start_Time_Min, VAR(boolean, AUTOMATIC)
    LeCITR_b_TBM_Sch3_Start_Time_MinFA)
{
    boolean rtb_LeCITR_b_TBM_Sch3_Start_Time_MinFA_o;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_TBM_Sch3_Start_Time_Min' */
    /* Chart: '<S221>/PokeCITR_K_TBM_Sch3_Start_Time_MinChrt' incorporates:
     *  SignalConversion generated from: '<S221>/LeCITR_K_TBM_Sch3_Start_Time_Min'
     *  SignalConversion generated from: '<S221>/LeCITR_b_TBM_Sch3_Start_Time_MinFA'
     */
    /* Gateway: PokeCITR_K_TBM_Sch3_Start_Time_Min/PokeCITR_K_TBM_Sch3_Start_Time_MinChrt */
    /* During: PokeCITR_K_TBM_Sch3_Start_Time_Min/PokeCITR_K_TBM_Sch3_Start_Time_MinChrt */
    /* Entry Internal: PokeCITR_K_TBM_Sch3_Start_Time_Min/PokeCITR_K_TBM_Sch3_Start_Time_MinChrt */
    /* Transition: '<S815>:2' */
    if (!LeCITR_b_TBM_Sch3_Start_Time_MinFA)
    {
        /* Transition: '<S815>:3' */
        /* Transition: '<S815>:15' */
        CITR_ac_B.LeCITR_K_TBM_Sch3_Start_Time_Min_out =
            LeCITR_K_TBM_Sch3_Start_Time_Min;
        rtb_LeCITR_b_TBM_Sch3_Start_Time_MinFA_o = false;

        /* Transition: '<S815>:18' */
    }
    else
    {
        /* Transition: '<S815>:4' */
        rtb_LeCITR_b_TBM_Sch3_Start_Time_MinFA_o = true;
    }

    /* End of Chart: '<S221>/PokeCITR_K_TBM_Sch3_Start_Time_MinChrt' */

    /* Outport: '<Root>/VeCITR_K_TBM_Sch3_Start_Time_Min' incorporates:
     *  SignalConversion generated from: '<S221>/VeCITR_K_TBM_Sch3_Start_Time_Min'
     */
    (void)Rte_Write_VeCITR_K_TBM_Sch3_Start_Time_Min_Value
        (CITR_ac_B.LeCITR_K_TBM_Sch3_Start_Time_Min_out);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch3_Start_Time_MinFA' incorporates:
     *  SignalConversion generated from: '<S221>/VeCITR_b_TBM_Sch3_Start_Time_MinFA'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch3_Start_Time_MinFA_Value
        (rtb_LeCITR_b_TBM_Sch3_Start_Time_MinFA_o);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_TBM_Sch3_Start_Time_Min' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_TBM_Sch4_Day(VAR(uint8, AUTOMATIC)
    LeCITR_K_TBM_Sch4_Day, VAR(boolean, AUTOMATIC) LeCITR_b_TBM_Sch4_DayFA)
{
    boolean rtb_LeCITR_b_TBM_Sch4_DayFA_out_b;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_TBM_Sch4_Day' */
    /* Chart: '<S222>/PokeCITR_K_TBM_Sch4_DayChrt' incorporates:
     *  SignalConversion generated from: '<S222>/LeCITR_K_TBM_Sch4_Day'
     *  SignalConversion generated from: '<S222>/LeCITR_b_TBM_Sch4_DayFA'
     */
    /* Gateway: PokeCITR_K_TBM_Sch4_Day/PokeCITR_K_TBM_Sch4_DayChrt */
    /* During: PokeCITR_K_TBM_Sch4_Day/PokeCITR_K_TBM_Sch4_DayChrt */
    /* Entry Internal: PokeCITR_K_TBM_Sch4_Day/PokeCITR_K_TBM_Sch4_DayChrt */
    /* Transition: '<S816>:2' */
    if (!LeCITR_b_TBM_Sch4_DayFA)
    {
        /* Transition: '<S816>:3' */
        /* Transition: '<S816>:15' */
        CITR_ac_B.LeCITR_K_TBM_Sch4_Day_out = LeCITR_K_TBM_Sch4_Day;
        rtb_LeCITR_b_TBM_Sch4_DayFA_out_b = false;
        CITR_ac_B.LeCITR_b_TBM_Sch4_DaySgnl_Rcvd = true;

        /* Transition: '<S816>:18' */
    }
    else
    {
        /* Transition: '<S816>:4' */
        rtb_LeCITR_b_TBM_Sch4_DayFA_out_b = true;
    }

    /* End of Chart: '<S222>/PokeCITR_K_TBM_Sch4_DayChrt' */

    /* Outport: '<Root>/VeCITR_K_TBM_Sch4_Day' incorporates:
     *  SignalConversion generated from: '<S222>/VeCITR_K_TBM_Sch4_Day'
     */
    (void)Rte_Write_VeCITR_K_TBM_Sch4_Day_Value
        (CITR_ac_B.LeCITR_K_TBM_Sch4_Day_out);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch4_Day_FA' incorporates:
     *  SignalConversion generated from: '<S222>/VeCITR_b_TBM_Sch4_DayFA'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch4_Day_FA_Value
        (rtb_LeCITR_b_TBM_Sch4_DayFA_out_b);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch4_Day_SgnlRcvd' incorporates:
     *  SignalConversion generated from: '<S222>/VeCITR_b_TBM_Sch4_DaySgnl_Rcvd'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch4_Day_SgnlRcvd_Value
        (CITR_ac_B.LeCITR_b_TBM_Sch4_DaySgnl_Rcvd);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_TBM_Sch4_Day' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_TBM_Sch4_Start_Time_Hr(VAR(sint16, AUTOMATIC)
    LeCITR_K_TBM_Sch4_Start_Time_Hr, VAR(boolean, AUTOMATIC)
    LeCITR_b_TBM_Sch4_Start_Time_HrFA)
{
    boolean rtb_LeCITR_b_TBM_Sch4_Start_Time_HrFA__l;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_TBM_Sch4_Start_Time_Hr' */
    /* Chart: '<S223>/PokeCITR_K_TBM_Sch4_Start_Time_HrChrt' incorporates:
     *  SignalConversion generated from: '<S223>/LeCITR_K_TBM_Sch4_Start_Time_Hr'
     *  SignalConversion generated from: '<S223>/LeCITR_b_TBM_Sch4_Start_Time_HrFA'
     */
    /* Gateway: PokeCITR_K_TBM_Sch4_Start_Time_Hr/PokeCITR_K_TBM_Sch4_Start_Time_HrChrt */
    /* During: PokeCITR_K_TBM_Sch4_Start_Time_Hr/PokeCITR_K_TBM_Sch4_Start_Time_HrChrt */
    /* Entry Internal: PokeCITR_K_TBM_Sch4_Start_Time_Hr/PokeCITR_K_TBM_Sch4_Start_Time_HrChrt */
    /* Transition: '<S817>:2' */
    if (!LeCITR_b_TBM_Sch4_Start_Time_HrFA)
    {
        /* Transition: '<S817>:3' */
        /* Transition: '<S817>:15' */
        CITR_ac_B.LeCITR_K_TBM_Sch4_Start_Time_Hr_out =
            LeCITR_K_TBM_Sch4_Start_Time_Hr;
        rtb_LeCITR_b_TBM_Sch4_Start_Time_HrFA__l = false;

        /* Transition: '<S817>:18' */
    }
    else
    {
        /* Transition: '<S817>:4' */
        rtb_LeCITR_b_TBM_Sch4_Start_Time_HrFA__l = true;
    }

    /* End of Chart: '<S223>/PokeCITR_K_TBM_Sch4_Start_Time_HrChrt' */

    /* Outport: '<Root>/VeCITR_K_TBM_Sch4_Start_Time_Hr' incorporates:
     *  SignalConversion generated from: '<S223>/VeCITR_K_TBM_Sch4_Start_Time_Hr'
     */
    (void)Rte_Write_VeCITR_K_TBM_Sch4_Start_Time_Hr_Value
        (CITR_ac_B.LeCITR_K_TBM_Sch4_Start_Time_Hr_out);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch4_Start_Time_HrFA' incorporates:
     *  SignalConversion generated from: '<S223>/VeCITR_b_TBM_Sch4_Start_Time_HrFA'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch4_Start_Time_HrFA_Value
        (rtb_LeCITR_b_TBM_Sch4_Start_Time_HrFA__l);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_TBM_Sch4_Start_Time_Hr' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_TBM_Sch4_Start_Time_Min(VAR(sint16, AUTOMATIC)
    LeCITR_K_TBM_Sch4_Start_Time_Min, VAR(boolean, AUTOMATIC)
    LeCITR_b_TBM_Sch4_Start_Time_MinFA)
{
    boolean rtb_LeCITR_b_TBM_Sch4_Start_Time_MinFA_k;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_TBM_Sch4_Start_Time_Min' */
    /* Chart: '<S224>/PokeCITR_K_TBM_Sch4_Start_Time_MinChrt' incorporates:
     *  SignalConversion generated from: '<S224>/LeCITR_K_TBM_Sch4_Start_Time_Min'
     *  SignalConversion generated from: '<S224>/LeCITR_b_TBM_Sch4_Start_Time_MinFA'
     */
    /* Gateway: PokeCITR_K_TBM_Sch4_Start_Time_Min/PokeCITR_K_TBM_Sch4_Start_Time_MinChrt */
    /* During: PokeCITR_K_TBM_Sch4_Start_Time_Min/PokeCITR_K_TBM_Sch4_Start_Time_MinChrt */
    /* Entry Internal: PokeCITR_K_TBM_Sch4_Start_Time_Min/PokeCITR_K_TBM_Sch4_Start_Time_MinChrt */
    /* Transition: '<S818>:2' */
    if (!LeCITR_b_TBM_Sch4_Start_Time_MinFA)
    {
        /* Transition: '<S818>:3' */
        /* Transition: '<S818>:15' */
        CITR_ac_B.LeCITR_K_TBM_Sch4_Start_Time_Min_out =
            LeCITR_K_TBM_Sch4_Start_Time_Min;
        rtb_LeCITR_b_TBM_Sch4_Start_Time_MinFA_k = false;

        /* Transition: '<S818>:18' */
    }
    else
    {
        /* Transition: '<S818>:4' */
        rtb_LeCITR_b_TBM_Sch4_Start_Time_MinFA_k = true;
    }

    /* End of Chart: '<S224>/PokeCITR_K_TBM_Sch4_Start_Time_MinChrt' */

    /* Outport: '<Root>/VeCITR_K_TBM_Sch4_Start_Time_Min' incorporates:
     *  SignalConversion generated from: '<S224>/VeCITR_K_TBM_Sch4_Start_Time_Min'
     */
    (void)Rte_Write_VeCITR_K_TBM_Sch4_Start_Time_Min_Value
        (CITR_ac_B.LeCITR_K_TBM_Sch4_Start_Time_Min_out);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch4_Start_Time_MinFA' incorporates:
     *  SignalConversion generated from: '<S224>/VeCITR_b_TBM_Sch4_Start_Time_MinFA'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch4_Start_Time_MinFA_Value
        (rtb_LeCITR_b_TBM_Sch4_Start_Time_MinFA_k);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_TBM_Sch4_Start_Time_Min' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_Time_Hour1(VAR(float32, AUTOMATIC)
    LeCITR_K_Time_Hour1)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_Time_Hour1' */
    /* Outport: '<Root>/VeCITR_K_Time_Hour1' incorporates:
     *  SignalConversion generated from: '<S225>/VeCITR_K_Time_Hour1'
     *  SignalConversion generated from: '<S225>/LeCITR_K_Time_Hour1'
     */
    /* Gateway: PokeCITR_K_Time_Hour1/PokeCITR_K_Time_Hour1Chrt */
    /* During: PokeCITR_K_Time_Hour1/PokeCITR_K_Time_Hour1Chrt */
    /* Entry Internal: PokeCITR_K_Time_Hour1/PokeCITR_K_Time_Hour1Chrt */
    /* Transition: '<S819>:2' */
    (void)Rte_Write_VeCITR_K_Time_Hour1_Value(LeCITR_K_Time_Hour1);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_Time_Hour1' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_Time_Hour2(VAR(float32, AUTOMATIC)
    LeCITR_K_Time_Hour2)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_Time_Hour2' */
    /* Outport: '<Root>/VeCITR_K_Time_Hour2' incorporates:
     *  SignalConversion generated from: '<S226>/VeCITR_K_Time_Hour2'
     *  SignalConversion generated from: '<S226>/LeCITR_K_Time_Hour2'
     */
    /* Gateway: PokeCITR_K_Time_Hour2/PokeCITR_K_Time_Hour2Chrt */
    /* During: PokeCITR_K_Time_Hour2/PokeCITR_K_Time_Hour2Chrt */
    /* Entry Internal: PokeCITR_K_Time_Hour2/PokeCITR_K_Time_Hour2Chrt */
    /* Transition: '<S820>:2' */
    (void)Rte_Write_VeCITR_K_Time_Hour2_Value(LeCITR_K_Time_Hour2);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_Time_Hour2' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_Time_Minute1(VAR(float32, AUTOMATIC)
    LeCITR_K_Time_Minute1)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_Time_Minute1' */
    /* Outport: '<Root>/VeCITR_K_Time_Minute1' incorporates:
     *  SignalConversion generated from: '<S227>/VeCITR_K_Time_Minute1'
     *  SignalConversion generated from: '<S227>/LeCITR_K_Time_Minute1'
     */
    /* Gateway: PokeCITR_K_Time_Minute1/PokeCITR_K_Time_Minute1Chrt */
    /* During: PokeCITR_K_Time_Minute1/PokeCITR_K_Time_Minute1Chrt */
    /* Entry Internal: PokeCITR_K_Time_Minute1/PokeCITR_K_Time_Minute1Chrt */
    /* Transition: '<S821>:2' */
    (void)Rte_Write_VeCITR_K_Time_Minute1_Value(LeCITR_K_Time_Minute1);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_Time_Minute1' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_K_Time_Minute2(VAR(float32, AUTOMATIC)
    LeCITR_K_Time_Minute2)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_K_Time_Minute2' */
    /* Outport: '<Root>/VeCITR_K_Time_Minute2' incorporates:
     *  SignalConversion generated from: '<S228>/VeCITR_K_Time_Minute2'
     *  SignalConversion generated from: '<S228>/LeCITR_K_Time_Minute2'
     */
    /* Gateway: PokeCITR_K_Time_Minute2/PokeCITR_K_Time_Minute2Chrt */
    /* During: PokeCITR_K_Time_Minute2/PokeCITR_K_Time_Minute2Chrt */
    /* Entry Internal: PokeCITR_K_Time_Minute2/PokeCITR_K_Time_Minute2Chrt */
    /* Transition: '<S822>:2' */
    (void)Rte_Write_VeCITR_K_Time_Minute2_Value(LeCITR_K_Time_Minute2);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_K_Time_Minute2' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_P_ChargingDestinationPwr(VAR(float32, AUTOMATIC)
    LeCITR_P_ChargingDestinationPwr, VAR(boolean, AUTOMATIC)
    LeCITR_b_ChargingDestinationPwrFA)
{
    boolean rtb_LeCITR_b_ChargingDestinationPwrFA_ou;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_P_ChargingDestinationPwr' */
    /* Chart: '<S229>/PokeCITR_P_ChargingDestinationPwrChrt' incorporates:
     *  SignalConversion generated from: '<S229>/LeCITR_P_ChargingDestinationPwr'
     *  SignalConversion generated from: '<S229>/LeCITR_b_ChargingDestinationPwrFA'
     */
    /* Gateway: PokeCITR_P_ChargingDestinationPwr/PokeCITR_P_ChargingDestinationPwrChrt */
    /* During: PokeCITR_P_ChargingDestinationPwr/PokeCITR_P_ChargingDestinationPwrChrt */
    /* Entry Internal: PokeCITR_P_ChargingDestinationPwr/PokeCITR_P_ChargingDestinationPwrChrt */
    /* Transition: '<S823>:2' */
    if (!LeCITR_b_ChargingDestinationPwrFA)
    {
        /* Transition: '<S823>:3' */
        /* Transition: '<S823>:15' */
        CITR_ac_B.LeCITR_P_ChargingDestinationPwr_out =
            LeCITR_P_ChargingDestinationPwr;
        rtb_LeCITR_b_ChargingDestinationPwrFA_ou = false;

        /* Transition: '<S823>:18' */
    }
    else
    {
        /* Transition: '<S823>:4' */
        rtb_LeCITR_b_ChargingDestinationPwrFA_ou = true;
    }

    /* End of Chart: '<S229>/PokeCITR_P_ChargingDestinationPwrChrt' */

    /* Outport: '<Root>/VeCITR_P_ChargingDestinationPwr' incorporates:
     *  SignalConversion generated from: '<S229>/VeCITR_P_ChargingDestinationPwr'
     */
    (void)Rte_Write_VeCITR_P_ChargingDestinationPwr_Value
        (CITR_ac_B.LeCITR_P_ChargingDestinationPwr_out);

    /* Outport: '<Root>/VeCITR_b_ChargingDestinationPwr_FA' incorporates:
     *  SignalConversion generated from: '<S229>/VeCITR_b_ChargingDestinationPwrFA'
     */
    (void)Rte_Write_VeCITR_b_ChargingDestinationPwr_FA_Value
        (rtb_LeCITR_b_ChargingDestinationPwrFA_ou);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_P_ChargingDestinationPwr' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_P_PP2RatedPower(VAR(float32, AUTOMATIC)
    LeCITR_P_PP2RatedPower, VAR(boolean, AUTOMATIC) LeCITR_b_PP2RatedPowerFA)
{
    boolean rtb_LeCITR_b_PP2RatedPowerFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_P_PP2RatedPower' */
    /* Chart: '<S230>/PokeCITR_P_PP2RatedPowerChrt' incorporates:
     *  SignalConversion generated from: '<S230>/LeCITR_e_FOTA_Installation_Status1'
     *  SignalConversion generated from: '<S230>/LeCITR_e_FOTA_Installation_Status'
     */
    /* Gateway: PokeCITR_P_PP2RatedPower/PokeCITR_P_PP2RatedPowerChrt */
    /* During: PokeCITR_P_PP2RatedPower/PokeCITR_P_PP2RatedPowerChrt */
    /* Entry Internal: PokeCITR_P_PP2RatedPower/PokeCITR_P_PP2RatedPowerChrt */
    /* Transition: '<S824>:2' */
    if (!LeCITR_b_PP2RatedPowerFA)
    {
        /* Transition: '<S824>:20' */
        /* Transition: '<S824>:23' */
        CITR_ac_B.LeCITR_P_PP2RatedPower_out = LeCITR_P_PP2RatedPower;
        rtb_LeCITR_b_PP2RatedPowerFA_out = false;

        /* Transition: '<S824>:25' */
    }
    else
    {
        /* Transition: '<S824>:24' */
        rtb_LeCITR_b_PP2RatedPowerFA_out = true;
    }

    /* End of Chart: '<S230>/PokeCITR_P_PP2RatedPowerChrt' */

    /* Outport: '<Root>/VeCITR_P_PP2RatedPower' incorporates:
     *  SignalConversion generated from: '<S230>/VeCITR_P_PP2RatedPower'
     */
    (void)Rte_Write_VeCITR_P_PP2RatedPower_Value
        (CITR_ac_B.LeCITR_P_PP2RatedPower_out);

    /* Outport: '<Root>/VeCITR_b_PP2RatedPowerFA' incorporates:
     *  SignalConversion generated from: '<S230>/VeCITR_b_PP2RatedPowerFA'
     */
    (void)Rte_Write_VeCITR_b_PP2RatedPowerFA_Value
        (rtb_LeCITR_b_PP2RatedPowerFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_P_PP2RatedPower' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_P_PPRatedPower(VAR(float32, AUTOMATIC)
    LeCITR_P_PPRatedPower, VAR(boolean, AUTOMATIC) LeCITR_b_PPRatedPowerFA)
{
    boolean rtb_LeCITR_b_PPRatedPowerFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_P_PPRatedPower' */
    /* Chart: '<S231>/PokeCITR_P_PPRatedPowerChrt' incorporates:
     *  SignalConversion generated from: '<S231>/LeCITR_e_FOTA_Installation_Status1'
     *  SignalConversion generated from: '<S231>/LeCITR_e_FOTA_Installation_Status'
     */
    /* Gateway: PokeCITR_P_PPRatedPower/PokeCITR_P_PPRatedPowerChrt */
    /* During: PokeCITR_P_PPRatedPower/PokeCITR_P_PPRatedPowerChrt */
    /* Entry Internal: PokeCITR_P_PPRatedPower/PokeCITR_P_PPRatedPowerChrt */
    /* Transition: '<S825>:2' */
    if (!LeCITR_b_PPRatedPowerFA)
    {
        /* Transition: '<S825>:20' */
        /* Transition: '<S825>:23' */
        CITR_ac_B.LeCITR_P_PPRatedPower_out = LeCITR_P_PPRatedPower;
        rtb_LeCITR_b_PPRatedPowerFA_out = false;

        /* Transition: '<S825>:25' */
    }
    else
    {
        /* Transition: '<S825>:24' */
        rtb_LeCITR_b_PPRatedPowerFA_out = true;
    }

    /* End of Chart: '<S231>/PokeCITR_P_PPRatedPowerChrt' */

    /* Outport: '<Root>/VeCITR_P_PPRatedPower' incorporates:
     *  SignalConversion generated from: '<S231>/VeCITR_P_PPRatedPower'
     */
    (void)Rte_Write_VeCITR_P_PPRatedPower_Value
        (CITR_ac_B.LeCITR_P_PPRatedPower_out);

    /* Outport: '<Root>/VeCITR_b_PPRatedPowerFA' incorporates:
     *  SignalConversion generated from: '<S231>/VeCITR_b_PPRatedPowerFA'
     */
    (void)Rte_Write_VeCITR_b_PPRatedPowerFA_Value
        (rtb_LeCITR_b_PPRatedPowerFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_P_PPRatedPower' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_Pct_HU_ExtChrgTarget1(VAR(float32, AUTOMATIC)
    LeCITR_Pct_HU_ExtChrgTarget1, VAR(boolean, AUTOMATIC)
    LeCITR_b_HU_ExtChrgTarget1FA)
{
    boolean rtb_LeCITR_b_HU_ExtChrgTarget1FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_Pct_HU_ExtChrgTarget1' */
    /* Chart: '<S232>/PokeCITR_Pct_HU_ExtChrgTarget1Chrt' incorporates:
     *  SignalConversion generated from: '<S232>/LeCITR_e_FOTA_Installation_Status1'
     *  SignalConversion generated from: '<S232>/LeCITR_e_FOTA_Installation_Status'
     */
    /* Gateway: PokeCITR_Pct_HU_ExtChrgTarget1/PokeCITR_Pct_HU_ExtChrgTarget1Chrt */
    /* During: PokeCITR_Pct_HU_ExtChrgTarget1/PokeCITR_Pct_HU_ExtChrgTarget1Chrt */
    /* Entry Internal: PokeCITR_Pct_HU_ExtChrgTarget1/PokeCITR_Pct_HU_ExtChrgTarget1Chrt */
    /* Transition: '<S826>:2' */
    if (!LeCITR_b_HU_ExtChrgTarget1FA)
    {
        /* Transition: '<S826>:20' */
        /* Transition: '<S826>:23' */
        CITR_ac_B.LeCITR_Pct_HU_ExtChrgTarget1_out =
            LeCITR_Pct_HU_ExtChrgTarget1;
        rtb_LeCITR_b_HU_ExtChrgTarget1FA_out = false;

        /* Transition: '<S826>:25' */
    }
    else
    {
        /* Transition: '<S826>:24' */
        rtb_LeCITR_b_HU_ExtChrgTarget1FA_out = true;
    }

    /* End of Chart: '<S232>/PokeCITR_Pct_HU_ExtChrgTarget1Chrt' */

    /* Outport: '<Root>/VeCITR_Pct_HU_ExtChrgTarget1' incorporates:
     *  SignalConversion generated from: '<S232>/VeCITR_Pct_HU_ExtChrgTarget1'
     */
    (void)Rte_Write_VeCITR_Pct_HU_ExtChrgTarget1_Value
        (CITR_ac_B.LeCITR_Pct_HU_ExtChrgTarget1_out);

    /* Outport: '<Root>/VeCITR_b_HU_ExtChrgTarget1FA' incorporates:
     *  SignalConversion generated from: '<S232>/VeCITR_b_HU_ExtChrgTarget1FA'
     */
    (void)Rte_Write_VeCITR_b_HU_ExtChrgTarget1FA_Value
        (rtb_LeCITR_b_HU_ExtChrgTarget1FA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_Pct_HU_ExtChrgTarget1' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_Pct_HU_ExtChrgTarget2(VAR(float32, AUTOMATIC)
    LeCITR_Pct_HU_ExtChrgTarget2, VAR(boolean, AUTOMATIC)
    LeCITR_b_HU_ExtChrgTarget2FA)
{
    boolean rtb_LeCITR_b_HU_ExtChrgTarget2FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_Pct_HU_ExtChrgTarget2' */
    /* Chart: '<S233>/PokeCITR_Pct_HU_ExtChrgTarget2Chrt' incorporates:
     *  SignalConversion generated from: '<S233>/LeCITR_e_FOTA_Installation_Status1'
     *  SignalConversion generated from: '<S233>/LeCITR_e_FOTA_Installation_Status'
     */
    /* Gateway: PokeCITR_Pct_HU_ExtChrgTarget2/PokeCITR_Pct_HU_ExtChrgTarget2Chrt */
    /* During: PokeCITR_Pct_HU_ExtChrgTarget2/PokeCITR_Pct_HU_ExtChrgTarget2Chrt */
    /* Entry Internal: PokeCITR_Pct_HU_ExtChrgTarget2/PokeCITR_Pct_HU_ExtChrgTarget2Chrt */
    /* Transition: '<S827>:2' */
    if (!LeCITR_b_HU_ExtChrgTarget2FA)
    {
        /* Transition: '<S827>:20' */
        /* Transition: '<S827>:23' */
        CITR_ac_B.LeCITR_Pct_HU_ExtChrgTarget2_out =
            LeCITR_Pct_HU_ExtChrgTarget2;
        rtb_LeCITR_b_HU_ExtChrgTarget2FA_out = false;

        /* Transition: '<S827>:25' */
    }
    else
    {
        /* Transition: '<S827>:24' */
        rtb_LeCITR_b_HU_ExtChrgTarget2FA_out = true;
    }

    /* End of Chart: '<S233>/PokeCITR_Pct_HU_ExtChrgTarget2Chrt' */

    /* Outport: '<Root>/VeCITR_Pct_HU_ExtChrgTarget2' incorporates:
     *  SignalConversion generated from: '<S233>/VeCITR_Pct_HU_ExtChrgTarget2'
     */
    (void)Rte_Write_VeCITR_Pct_HU_ExtChrgTarget2_Value
        (CITR_ac_B.LeCITR_Pct_HU_ExtChrgTarget2_out);

    /* Outport: '<Root>/VeCITR_b_HU_ExtChrgTarget2FA' incorporates:
     *  SignalConversion generated from: '<S233>/VeCITR_b_HU_ExtChrgTarget2FA'
     */
    (void)Rte_Write_VeCITR_b_HU_ExtChrgTarget2FA_Value
        (rtb_LeCITR_b_HU_ExtChrgTarget2FA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_Pct_HU_ExtChrgTarget2' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_Pct_HU_ImmChrgTarget1(VAR(float32, AUTOMATIC)
    LeCITR_Pct_HU_ImmChrgTarget1, VAR(boolean, AUTOMATIC)
    LeCITR_b_HU_ImmChrgTarget1FA)
{
    boolean rtb_LeCITR_b_HU_ImmChrgTarget1FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_Pct_HU_ImmChrgTarget1' */
    /* Chart: '<S234>/PokeCITR_Pct_HU_ImmChrgTarget1Chrt' incorporates:
     *  SignalConversion generated from: '<S234>/LeCITR_e_FOTA_Installation_Status1'
     *  SignalConversion generated from: '<S234>/LeCITR_e_FOTA_Installation_Status'
     */
    /* Gateway: PokeCITR_Pct_HU_ImmChrgTarget1/PokeCITR_Pct_HU_ImmChrgTarget1Chrt */
    /* During: PokeCITR_Pct_HU_ImmChrgTarget1/PokeCITR_Pct_HU_ImmChrgTarget1Chrt */
    /* Entry Internal: PokeCITR_Pct_HU_ImmChrgTarget1/PokeCITR_Pct_HU_ImmChrgTarget1Chrt */
    /* Transition: '<S828>:2' */
    if (!LeCITR_b_HU_ImmChrgTarget1FA)
    {
        /* Transition: '<S828>:20' */
        /* Transition: '<S828>:23' */
        CITR_ac_B.LeCITR_Pct_HU_ImmChrgTarget1_out =
            LeCITR_Pct_HU_ImmChrgTarget1;
        rtb_LeCITR_b_HU_ImmChrgTarget1FA_out = false;

        /* Transition: '<S828>:25' */
    }
    else
    {
        /* Transition: '<S828>:24' */
        rtb_LeCITR_b_HU_ImmChrgTarget1FA_out = true;
    }

    /* End of Chart: '<S234>/PokeCITR_Pct_HU_ImmChrgTarget1Chrt' */

    /* Outport: '<Root>/VeCITR_Pct_HU_ImmChrgTarget1' incorporates:
     *  SignalConversion generated from: '<S234>/VeCITR_Pct_HU_ImmChrgTarget1'
     */
    (void)Rte_Write_VeCITR_Pct_HU_ImmChrgTarget1_Value
        (CITR_ac_B.LeCITR_Pct_HU_ImmChrgTarget1_out);

    /* Outport: '<Root>/VeCITR_b_HU_ImmChrgTarget1FA' incorporates:
     *  SignalConversion generated from: '<S234>/VeCITR_b_HU_ImmChrgTarget1FA'
     */
    (void)Rte_Write_VeCITR_b_HU_ImmChrgTarget1FA_Value
        (rtb_LeCITR_b_HU_ImmChrgTarget1FA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_Pct_HU_ImmChrgTarget1' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_Pct_HU_ImmChrgTarget2(VAR(float32, AUTOMATIC)
    LeCITR_Pct_HU_ImmChrgTarget2, VAR(boolean, AUTOMATIC)
    LeCITR_b_HU_ImmChrgTarget2FA)
{
    boolean rtb_LeCITR_b_HU_ImmChrgTarget2FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_Pct_HU_ImmChrgTarget2' */
    /* Chart: '<S235>/PokeCITR_Pct_HU_ImmChrgTarget2Chrt' incorporates:
     *  SignalConversion generated from: '<S235>/LeCITR_e_FOTA_Installation_Status1'
     *  SignalConversion generated from: '<S235>/LeCITR_e_FOTA_Installation_Status'
     */
    /* Gateway: PokeCITR_Pct_HU_ImmChrgTarget2/PokeCITR_Pct_HU_ImmChrgTarget2Chrt */
    /* During: PokeCITR_Pct_HU_ImmChrgTarget2/PokeCITR_Pct_HU_ImmChrgTarget2Chrt */
    /* Entry Internal: PokeCITR_Pct_HU_ImmChrgTarget2/PokeCITR_Pct_HU_ImmChrgTarget2Chrt */
    /* Transition: '<S829>:2' */
    if (!LeCITR_b_HU_ImmChrgTarget2FA)
    {
        /* Transition: '<S829>:20' */
        /* Transition: '<S829>:23' */
        CITR_ac_B.LeCITR_Pct_HU_ImmChrgTarget2_out =
            LeCITR_Pct_HU_ImmChrgTarget2;
        rtb_LeCITR_b_HU_ImmChrgTarget2FA_out = false;

        /* Transition: '<S829>:25' */
    }
    else
    {
        /* Transition: '<S829>:24' */
        rtb_LeCITR_b_HU_ImmChrgTarget2FA_out = true;
    }

    /* End of Chart: '<S235>/PokeCITR_Pct_HU_ImmChrgTarget2Chrt' */

    /* Outport: '<Root>/VeCITR_Pct_HU_ImmChrgTarget2' incorporates:
     *  SignalConversion generated from: '<S235>/VeCITR_Pct_HU_ImmChrgTarget2'
     */
    (void)Rte_Write_VeCITR_Pct_HU_ImmChrgTarget2_Value
        (CITR_ac_B.LeCITR_Pct_HU_ImmChrgTarget2_out);

    /* Outport: '<Root>/VeCITR_b_HU_ImmChrgTarget2FA' incorporates:
     *  SignalConversion generated from: '<S235>/VeCITR_b_HU_ImmChrgTarget2FA'
     */
    (void)Rte_Write_VeCITR_b_HU_ImmChrgTarget2FA_Value
        (rtb_LeCITR_b_HU_ImmChrgTarget2FA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_Pct_HU_ImmChrgTarget2' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_Pct_TBM_ExtChrgTarget1(VAR(float32, AUTOMATIC)
    LeCITR_Pct_TBM_ExtChrgTarget1, VAR(boolean, AUTOMATIC)
    LeCITR_b_TBM_ExtChrgTarget1FA)
{
    boolean rtb_LeCITR_b_TBM_ExtChrgTarget1FA_out_f;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_Pct_TBM_ExtChrgTarget1' */
    /* Chart: '<S236>/PokeCITR_Pct_TBM_ExtChrgTarget1Chrt' incorporates:
     *  SignalConversion generated from: '<S236>/LeCITR_e_FOTA_Installation_Status1'
     *  SignalConversion generated from: '<S236>/LeCITR_e_FOTA_Installation_Status'
     */
    /* Gateway: PokeCITR_Pct_TBM_ExtChrgTarget1/PokeCITR_Pct_TBM_ExtChrgTarget1Chrt */
    /* During: PokeCITR_Pct_TBM_ExtChrgTarget1/PokeCITR_Pct_TBM_ExtChrgTarget1Chrt */
    /* Entry Internal: PokeCITR_Pct_TBM_ExtChrgTarget1/PokeCITR_Pct_TBM_ExtChrgTarget1Chrt */
    /* Transition: '<S830>:2' */
    if (!LeCITR_b_TBM_ExtChrgTarget1FA)
    {
        /* Transition: '<S830>:20' */
        /* Transition: '<S830>:23' */
        CITR_ac_B.LeCITR_Pct_TBM_ExtChrgTarget1_out =
            LeCITR_Pct_TBM_ExtChrgTarget1;
        rtb_LeCITR_b_TBM_ExtChrgTarget1FA_out_f = false;

        /* Transition: '<S830>:25' */
    }
    else
    {
        /* Transition: '<S830>:24' */
        rtb_LeCITR_b_TBM_ExtChrgTarget1FA_out_f = true;
    }

    /* End of Chart: '<S236>/PokeCITR_Pct_TBM_ExtChrgTarget1Chrt' */

    /* Outport: '<Root>/VeCITR_Pct_TBM_ExtChrgTarget1' incorporates:
     *  SignalConversion generated from: '<S236>/VeCITR_Pct_TBM_ExtChrgTarget1'
     */
    (void)Rte_Write_VeCITR_Pct_TBM_ExtChrgTarget1_Value
        (CITR_ac_B.LeCITR_Pct_TBM_ExtChrgTarget1_out);

    /* Outport: '<Root>/VeCITR_b_TBM_ExtChrgTarget1FA' incorporates:
     *  SignalConversion generated from: '<S236>/VeCITR_b_TBM_ExtChrgTarget1FA'
     */
    (void)Rte_Write_VeCITR_b_TBM_ExtChrgTarget1FA_Value
        (rtb_LeCITR_b_TBM_ExtChrgTarget1FA_out_f);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_Pct_TBM_ExtChrgTarget1' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_Pct_TBM_ExtChrgTarget2(VAR(float32, AUTOMATIC)
    LeCITR_Pct_TBM_ExtChrgTarget2, VAR(boolean, AUTOMATIC)
    LeCITR_b_TBM_ExtChrgTarget2FA)
{
    boolean rtb_LeCITR_b_TBM_ExtChrgTarget2FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_Pct_TBM_ExtChrgTarget2' */
    /* Chart: '<S237>/PokeCITR_Pct_TBM_ExtChrgTarget2Chrt' incorporates:
     *  SignalConversion generated from: '<S237>/LeCITR_e_FOTA_Installation_Status1'
     *  SignalConversion generated from: '<S237>/LeCITR_e_FOTA_Installation_Status'
     */
    /* Gateway: PokeCITR_Pct_TBM_ExtChrgTarget2/PokeCITR_Pct_TBM_ExtChrgTarget2Chrt */
    /* During: PokeCITR_Pct_TBM_ExtChrgTarget2/PokeCITR_Pct_TBM_ExtChrgTarget2Chrt */
    /* Entry Internal: PokeCITR_Pct_TBM_ExtChrgTarget2/PokeCITR_Pct_TBM_ExtChrgTarget2Chrt */
    /* Transition: '<S831>:2' */
    if (!LeCITR_b_TBM_ExtChrgTarget2FA)
    {
        /* Transition: '<S831>:20' */
        /* Transition: '<S831>:23' */
        CITR_ac_B.LeCITR_Pct_TBM_ExtChrgTarget2_out =
            LeCITR_Pct_TBM_ExtChrgTarget2;
        rtb_LeCITR_b_TBM_ExtChrgTarget2FA_out = false;

        /* Transition: '<S831>:25' */
    }
    else
    {
        /* Transition: '<S831>:24' */
        rtb_LeCITR_b_TBM_ExtChrgTarget2FA_out = true;
    }

    /* End of Chart: '<S237>/PokeCITR_Pct_TBM_ExtChrgTarget2Chrt' */

    /* Outport: '<Root>/VeCITR_Pct_TBM_ExtChrgTarget2' incorporates:
     *  SignalConversion generated from: '<S237>/VeCITR_Pct_TBM_ExtChrgTarget2'
     */
    (void)Rte_Write_VeCITR_Pct_TBM_ExtChrgTarget2_Value
        (CITR_ac_B.LeCITR_Pct_TBM_ExtChrgTarget2_out);

    /* Outport: '<Root>/VeCITR_b_TBM_ExtChrgTarget2FA' incorporates:
     *  SignalConversion generated from: '<S237>/VeCITR_b_TBM_ExtChrgTarget2FA'
     */
    (void)Rte_Write_VeCITR_b_TBM_ExtChrgTarget2FA_Value
        (rtb_LeCITR_b_TBM_ExtChrgTarget2FA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_Pct_TBM_ExtChrgTarget2' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_Pct_TBM_ImmChrgTarget1(VAR(float32, AUTOMATIC)
    LeCITR_Pct_TBM_ImmChrgTarget1, VAR(boolean, AUTOMATIC)
    LeCITR_b_TBM_ImmChrgTarget1FA)
{
    boolean rtb_LeCITR_b_TBM_ImmChrgTarget1FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_Pct_TBM_ImmChrgTarget1' */
    /* Chart: '<S238>/PokeCITR_Pct_TBM_ImmChrgTarget1Chrt' incorporates:
     *  SignalConversion generated from: '<S238>/LeCITR_e_FOTA_Installation_Status1'
     *  SignalConversion generated from: '<S238>/LeCITR_e_FOTA_Installation_Status'
     */
    /* Gateway: PokeCITR_Pct_TBM_ImmChrgTarget1/PokeCITR_Pct_TBM_ImmChrgTarget1Chrt */
    /* During: PokeCITR_Pct_TBM_ImmChrgTarget1/PokeCITR_Pct_TBM_ImmChrgTarget1Chrt */
    /* Entry Internal: PokeCITR_Pct_TBM_ImmChrgTarget1/PokeCITR_Pct_TBM_ImmChrgTarget1Chrt */
    /* Transition: '<S832>:2' */
    if (!LeCITR_b_TBM_ImmChrgTarget1FA)
    {
        /* Transition: '<S832>:20' */
        /* Transition: '<S832>:23' */
        CITR_ac_B.LeCITR_Pct_TBM_ImmChrgTarget1_out =
            LeCITR_Pct_TBM_ImmChrgTarget1;
        rtb_LeCITR_b_TBM_ImmChrgTarget1FA_out = false;

        /* Transition: '<S832>:25' */
    }
    else
    {
        /* Transition: '<S832>:24' */
        rtb_LeCITR_b_TBM_ImmChrgTarget1FA_out = true;
    }

    /* End of Chart: '<S238>/PokeCITR_Pct_TBM_ImmChrgTarget1Chrt' */

    /* Outport: '<Root>/VeCITR_Pct_TBM_ImmChrgTarget1' incorporates:
     *  SignalConversion generated from: '<S238>/VeCITR_Pct_TBM_ImmChrgTarget1'
     */
    (void)Rte_Write_VeCITR_Pct_TBM_ImmChrgTarget1_Value
        (CITR_ac_B.LeCITR_Pct_TBM_ImmChrgTarget1_out);

    /* Outport: '<Root>/VeCITR_b_TBM_ImmChrgTarget1FA' incorporates:
     *  SignalConversion generated from: '<S238>/VeCITR_b_TBM_ImmChrgTarget1FA'
     */
    (void)Rte_Write_VeCITR_b_TBM_ImmChrgTarget1FA_Value
        (rtb_LeCITR_b_TBM_ImmChrgTarget1FA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_Pct_TBM_ImmChrgTarget1' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_Pct_TBM_ImmChrgTarget2(VAR(float32, AUTOMATIC)
    LeCITR_Pct_TBM_ImmChrgTarget2, VAR(boolean, AUTOMATIC)
    LeCITR_b_TBM_ImmChrgTarget2FA)
{
    boolean rtb_LeCITR_b_TBM_ImmChrgTarget2FA_out_l;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_Pct_TBM_ImmChrgTarget2' */
    /* Chart: '<S239>/PokeCITR_Pct_TBM_ImmChrgTarget2Chrt' incorporates:
     *  SignalConversion generated from: '<S239>/LeCITR_e_FOTA_Installation_Status1'
     *  SignalConversion generated from: '<S239>/LeCITR_e_FOTA_Installation_Status'
     */
    /* Gateway: PokeCITR_Pct_TBM_ImmChrgTarget2/PokeCITR_Pct_TBM_ImmChrgTarget2Chrt */
    /* During: PokeCITR_Pct_TBM_ImmChrgTarget2/PokeCITR_Pct_TBM_ImmChrgTarget2Chrt */
    /* Entry Internal: PokeCITR_Pct_TBM_ImmChrgTarget2/PokeCITR_Pct_TBM_ImmChrgTarget2Chrt */
    /* Transition: '<S833>:2' */
    if (!LeCITR_b_TBM_ImmChrgTarget2FA)
    {
        /* Transition: '<S833>:20' */
        /* Transition: '<S833>:23' */
        CITR_ac_B.LeCITR_Pct_TBM_ImmChrgTarget2_out =
            LeCITR_Pct_TBM_ImmChrgTarget2;
        rtb_LeCITR_b_TBM_ImmChrgTarget2FA_out_l = false;

        /* Transition: '<S833>:25' */
    }
    else
    {
        /* Transition: '<S833>:24' */
        rtb_LeCITR_b_TBM_ImmChrgTarget2FA_out_l = true;
    }

    /* End of Chart: '<S239>/PokeCITR_Pct_TBM_ImmChrgTarget2Chrt' */

    /* Outport: '<Root>/VeCITR_Pct_TBM_ImmChrgTarget2' incorporates:
     *  SignalConversion generated from: '<S239>/VeCITR_Pct_TBM_ImmChrgTarget2'
     */
    (void)Rte_Write_VeCITR_Pct_TBM_ImmChrgTarget2_Value
        (CITR_ac_B.LeCITR_Pct_TBM_ImmChrgTarget2_out);

    /* Outport: '<Root>/VeCITR_b_TBM_ImmChrgTarget2FA' incorporates:
     *  SignalConversion generated from: '<S239>/VeCITR_b_TBM_ImmChrgTarget2FA'
     */
    (void)Rte_Write_VeCITR_b_TBM_ImmChrgTarget2FA_Value
        (rtb_LeCITR_b_TBM_ImmChrgTarget2FA_out_l);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_Pct_TBM_ImmChrgTarget2' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_Pct_V2HRsrvBatt(VAR(float32, AUTOMATIC)
    LeCITR_Pct_V2HRsrvBatt, VAR(boolean, AUTOMATIC) LeCITR_b_V2HRsrvBattFA)
{
    boolean rtb_LeCITR_b_V2HRsrvBattFA_out_k;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_Pct_V2HRsrvBatt' */
    /* Chart: '<S240>/PokeCITR_Pct_V2HRsrvBattChrt' incorporates:
     *  SignalConversion generated from: '<S240>/LeCITR_e_FOTA_Installation_Status1'
     *  SignalConversion generated from: '<S240>/LeCITR_e_FOTA_Installation_Status'
     */
    /* Gateway: PokeCITR_Pct_V2HRsrvBatt/PokeCITR_Pct_V2HRsrvBattChrt */
    /* During: PokeCITR_Pct_V2HRsrvBatt/PokeCITR_Pct_V2HRsrvBattChrt */
    /* Entry Internal: PokeCITR_Pct_V2HRsrvBatt/PokeCITR_Pct_V2HRsrvBattChrt */
    /* Transition: '<S834>:2' */
    if (!LeCITR_b_V2HRsrvBattFA)
    {
        /* Transition: '<S834>:20' */
        /* Transition: '<S834>:23' */
        CITR_ac_B.LeCITR_Pct_V2HRsrvBatt_out = LeCITR_Pct_V2HRsrvBatt;
        rtb_LeCITR_b_V2HRsrvBattFA_out_k = false;

        /* Transition: '<S834>:25' */
    }
    else
    {
        /* Transition: '<S834>:24' */
        rtb_LeCITR_b_V2HRsrvBattFA_out_k = true;
    }

    /* End of Chart: '<S240>/PokeCITR_Pct_V2HRsrvBattChrt' */

    /* Outport: '<Root>/VeCITR_Pct_V2HRsrvBatt' incorporates:
     *  SignalConversion generated from: '<S240>/VeCITR_Pct_V2HRsrvBatt'
     */
    (void)Rte_Write_VeCITR_Pct_V2HRsrvBatt_Value
        (CITR_ac_B.LeCITR_Pct_V2HRsrvBatt_out);

    /* Outport: '<Root>/VeCITR_b_V2HRsrvBattFA' incorporates:
     *  SignalConversion generated from: '<S240>/VeCITR_b_V2HRsrvBattFA'
     */
    (void)Rte_Write_VeCITR_b_V2HRsrvBattFA_Value
        (rtb_LeCITR_b_V2HRsrvBattFA_out_k);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_Pct_V2HRsrvBatt' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_Pct_V2LRsrvBatt(VAR(float32, AUTOMATIC)
    LeCITR_Pct_V2LRsrvBatt, VAR(boolean, AUTOMATIC) LeCITR_b_V2LRsrvBattFA)
{
    boolean rtb_LeCITR_b_V2LRsrvBattFA_out_l;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_Pct_V2LRsrvBatt' */
    /* Chart: '<S241>/PokeCITR_Pct_V2LRsrvBattChrt' incorporates:
     *  SignalConversion generated from: '<S241>/LeCITR_e_FOTA_Installation_Status1'
     *  SignalConversion generated from: '<S241>/LeCITR_e_FOTA_Installation_Status'
     */
    /* Gateway: PokeCITR_Pct_V2LRsrvBatt/PokeCITR_Pct_V2LRsrvBattChrt */
    /* During: PokeCITR_Pct_V2LRsrvBatt/PokeCITR_Pct_V2LRsrvBattChrt */
    /* Entry Internal: PokeCITR_Pct_V2LRsrvBatt/PokeCITR_Pct_V2LRsrvBattChrt */
    /* Transition: '<S835>:2' */
    if (!LeCITR_b_V2LRsrvBattFA)
    {
        /* Transition: '<S835>:20' */
        /* Transition: '<S835>:23' */
        CITR_ac_B.LeCITR_Pct_V2LRsrvBatt_out = LeCITR_Pct_V2LRsrvBatt;
        rtb_LeCITR_b_V2LRsrvBattFA_out_l = false;

        /* Transition: '<S835>:25' */
    }
    else
    {
        /* Transition: '<S835>:24' */
        rtb_LeCITR_b_V2LRsrvBattFA_out_l = true;
    }

    /* End of Chart: '<S241>/PokeCITR_Pct_V2LRsrvBattChrt' */

    /* Outport: '<Root>/VeCITR_Pct_V2LRsrvBatt' incorporates:
     *  SignalConversion generated from: '<S241>/VeCITR_Pct_V2LRsrvBatt'
     */
    (void)Rte_Write_VeCITR_Pct_V2LRsrvBatt_Value
        (CITR_ac_B.LeCITR_Pct_V2LRsrvBatt_out);

    /* Outport: '<Root>/VeCITR_b_V2LRsrvBattFA' incorporates:
     *  SignalConversion generated from: '<S241>/VeCITR_b_V2LRsrvBattFA'
     */
    (void)Rte_Write_VeCITR_b_V2LRsrvBattFA_Value
        (rtb_LeCITR_b_V2LRsrvBattFA_out_l);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_Pct_V2LRsrvBatt' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_Pct_V2VRsrvBatt(VAR(float32, AUTOMATIC)
    LeCITR_Pct_V2VRsrvBatt, VAR(boolean, AUTOMATIC) LeCITR_b_V2VRsrvBattFA)
{
    boolean rtb_LeCITR_b_V2VRsrvBattFA_out_d;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_Pct_V2VRsrvBatt' */
    /* Chart: '<S242>/PokeCITR_Pct_V2VRsrvBattChrt' incorporates:
     *  SignalConversion generated from: '<S242>/LeCITR_e_FOTA_Installation_Status1'
     *  SignalConversion generated from: '<S242>/LeCITR_e_FOTA_Installation_Status'
     */
    /* Gateway: PokeCITR_Pct_V2VRsrvBatt/PokeCITR_Pct_V2VRsrvBattChrt */
    /* During: PokeCITR_Pct_V2VRsrvBatt/PokeCITR_Pct_V2VRsrvBattChrt */
    /* Entry Internal: PokeCITR_Pct_V2VRsrvBatt/PokeCITR_Pct_V2VRsrvBattChrt */
    /* Transition: '<S836>:2' */
    if (!LeCITR_b_V2VRsrvBattFA)
    {
        /* Transition: '<S836>:20' */
        /* Transition: '<S836>:23' */
        CITR_ac_B.LeCITR_Pct_V2VRsrvBatt_out = LeCITR_Pct_V2VRsrvBatt;
        rtb_LeCITR_b_V2VRsrvBattFA_out_d = false;

        /* Transition: '<S836>:25' */
    }
    else
    {
        /* Transition: '<S836>:24' */
        rtb_LeCITR_b_V2VRsrvBattFA_out_d = true;
    }

    /* End of Chart: '<S242>/PokeCITR_Pct_V2VRsrvBattChrt' */

    /* Outport: '<Root>/VeCITR_Pct_V2VRsrvBatt' incorporates:
     *  SignalConversion generated from: '<S242>/VeCITR_Pct_V2VRsrvBatt'
     */
    (void)Rte_Write_VeCITR_Pct_V2VRsrvBatt_Value
        (CITR_ac_B.LeCITR_Pct_V2VRsrvBatt_out);

    /* Outport: '<Root>/VeCITR_b_V2VRsrvBattFA' incorporates:
     *  SignalConversion generated from: '<S242>/VeCITR_b_V2VRsrvBattFA'
     */
    (void)Rte_Write_VeCITR_b_V2VRsrvBattFA_Value
        (rtb_LeCITR_b_V2VRsrvBattFA_out_d);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_Pct_V2VRsrvBatt' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_T_HU_Sch1_CabTemp(VAR(float32, AUTOMATIC)
    LeCITR_T_HU_Sch1_CabTemp, VAR(boolean, AUTOMATIC) LeCITR_b_HU_Sch1_CabTempFA)
{
    boolean rtb_LeCITR_b_HU_Sch1_CabTempFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_T_HU_Sch1_CabTemp' */
    /* Chart: '<S243>/PokeCITR_T_HU_Sch1_CabTempChrt' incorporates:
     *  SignalConversion generated from: '<S243>/LeCITR_T_HU_Sch1_CabTemp'
     *  SignalConversion generated from: '<S243>/LeCITR_b_HU_Sch1_CabTempFA'
     */
    /* Gateway: PokeCITR_T_HU_Sch1_CabTemp/PokeCITR_T_HU_Sch1_CabTempChrt */
    /* During: PokeCITR_T_HU_Sch1_CabTemp/PokeCITR_T_HU_Sch1_CabTempChrt */
    /* Entry Internal: PokeCITR_T_HU_Sch1_CabTemp/PokeCITR_T_HU_Sch1_CabTempChrt */
    /* Transition: '<S837>:2' */
    if (!LeCITR_b_HU_Sch1_CabTempFA)
    {
        /* Transition: '<S837>:3' */
        /* Transition: '<S837>:15' */
        CITR_ac_B.LeCITR_T_HU_Sch1_CabTemp_out = LeCITR_T_HU_Sch1_CabTemp;
        rtb_LeCITR_b_HU_Sch1_CabTempFA_out = false;

        /* Transition: '<S837>:18' */
    }
    else
    {
        /* Transition: '<S837>:4' */
        rtb_LeCITR_b_HU_Sch1_CabTempFA_out = true;
    }

    /* End of Chart: '<S243>/PokeCITR_T_HU_Sch1_CabTempChrt' */

    /* Outport: '<Root>/VeCITR_T_HU_Sch1_Temperature' incorporates:
     *  SignalConversion generated from: '<S243>/VeCITR_T_HU_Sch1_CabTemp'
     */
    (void)Rte_Write_VeCITR_T_HU_Sch1_Temperature_Value
        (CITR_ac_B.LeCITR_T_HU_Sch1_CabTemp_out);

    /* Outport: '<Root>/VeCITR_b_HU_Sch1_TemperatureFA' incorporates:
     *  SignalConversion generated from: '<S243>/VeCITR_b_HU_Sch1_CabTempFA'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch1_TemperatureFA_Value
        (rtb_LeCITR_b_HU_Sch1_CabTempFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_T_HU_Sch1_CabTemp' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_T_HU_Sch2_CabTemp(VAR(float32, AUTOMATIC)
    LeCITR_T_HU_Sch2_CabTemp, VAR(boolean, AUTOMATIC) LeCITR_b_HU_Sch2_CabTempFA)
{
    boolean rtb_LeCITR_b_HU_Sch2_CabTempFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_T_HU_Sch2_CabTemp' */
    /* Chart: '<S244>/PokeCITR_T_HU_Sch2_CabTempChrt' incorporates:
     *  SignalConversion generated from: '<S244>/LeCITR_T_HU_Sch2_CabTemp'
     *  SignalConversion generated from: '<S244>/LeCITR_b_HU_Sch2_CabTempFA'
     */
    /* Gateway: PokeCITR_T_HU_Sch2_CabTemp/PokeCITR_T_HU_Sch2_CabTempChrt */
    /* During: PokeCITR_T_HU_Sch2_CabTemp/PokeCITR_T_HU_Sch2_CabTempChrt */
    /* Entry Internal: PokeCITR_T_HU_Sch2_CabTemp/PokeCITR_T_HU_Sch2_CabTempChrt */
    /* Transition: '<S838>:2' */
    if (!LeCITR_b_HU_Sch2_CabTempFA)
    {
        /* Transition: '<S838>:3' */
        /* Transition: '<S838>:15' */
        CITR_ac_B.LeCITR_T_HU_Sch2_CabTemp_out = LeCITR_T_HU_Sch2_CabTemp;
        rtb_LeCITR_b_HU_Sch2_CabTempFA_out = false;

        /* Transition: '<S838>:18' */
    }
    else
    {
        /* Transition: '<S838>:4' */
        rtb_LeCITR_b_HU_Sch2_CabTempFA_out = true;
    }

    /* End of Chart: '<S244>/PokeCITR_T_HU_Sch2_CabTempChrt' */

    /* Outport: '<Root>/VeCITR_T_HU_Sch2_Temperature' incorporates:
     *  SignalConversion generated from: '<S244>/VeCITR_T_HU_Sch2_CabTemp'
     */
    (void)Rte_Write_VeCITR_T_HU_Sch2_Temperature_Value
        (CITR_ac_B.LeCITR_T_HU_Sch2_CabTemp_out);

    /* Outport: '<Root>/VeCITR_b_HU_Sch2_TemperatureFA' incorporates:
     *  SignalConversion generated from: '<S244>/VeCITR_b_HU_Sch2_CabTempFA'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch2_TemperatureFA_Value
        (rtb_LeCITR_b_HU_Sch2_CabTempFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_T_HU_Sch2_CabTemp' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_T_HU_Sch3_CabTemp(VAR(float32, AUTOMATIC)
    LeCITR_T_HU_Sch3_CabTemp, VAR(boolean, AUTOMATIC) LeCITR_b_HU_Sch3_CabTempFA)
{
    boolean rtb_LeCITR_b_HU_Sch3_CabTempFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_T_HU_Sch3_CabTemp' */
    /* Chart: '<S245>/PokeCITR_T_HU_Sch3_CabTempChrt' incorporates:
     *  SignalConversion generated from: '<S245>/LeCITR_T_HU_Sch3_CabTemp'
     *  SignalConversion generated from: '<S245>/LeCITR_b_HU_Sch3_CabTempFA'
     */
    /* Gateway: PokeCITR_T_HU_Sch3_CabTemp/PokeCITR_T_HU_Sch3_CabTempChrt */
    /* During: PokeCITR_T_HU_Sch3_CabTemp/PokeCITR_T_HU_Sch3_CabTempChrt */
    /* Entry Internal: PokeCITR_T_HU_Sch3_CabTemp/PokeCITR_T_HU_Sch3_CabTempChrt */
    /* Transition: '<S839>:2' */
    if (!LeCITR_b_HU_Sch3_CabTempFA)
    {
        /* Transition: '<S839>:3' */
        /* Transition: '<S839>:15' */
        CITR_ac_B.LeCITR_T_HU_Sch3_CabTemp_out = LeCITR_T_HU_Sch3_CabTemp;
        rtb_LeCITR_b_HU_Sch3_CabTempFA_out = false;

        /* Transition: '<S839>:18' */
    }
    else
    {
        /* Transition: '<S839>:4' */
        rtb_LeCITR_b_HU_Sch3_CabTempFA_out = true;
    }

    /* End of Chart: '<S245>/PokeCITR_T_HU_Sch3_CabTempChrt' */

    /* Outport: '<Root>/VeCITR_T_HU_Sch3_Temperature' incorporates:
     *  SignalConversion generated from: '<S245>/VeCITR_T_HU_Sch3_CabTemp'
     */
    (void)Rte_Write_VeCITR_T_HU_Sch3_Temperature_Value
        (CITR_ac_B.LeCITR_T_HU_Sch3_CabTemp_out);

    /* Outport: '<Root>/VeCITR_b_HU_Sch3_TemperatureFA' incorporates:
     *  SignalConversion generated from: '<S245>/VeCITR_b_HU_Sch3_CabTempFA'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch3_TemperatureFA_Value
        (rtb_LeCITR_b_HU_Sch3_CabTempFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_T_HU_Sch3_CabTemp' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_T_HU_Sch4_CabTemp(VAR(float32, AUTOMATIC)
    LeCITR_T_HU_Sch4_CabTemp, VAR(boolean, AUTOMATIC) LeCITR_b_HU_Sch4_CabTempFA)
{
    boolean rtb_LeCITR_b_HU_Sch4_CabTempFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_T_HU_Sch4_CabTemp' */
    /* Chart: '<S246>/PokeCITR_T_HU_Sch4_CabTempChrt' incorporates:
     *  SignalConversion generated from: '<S246>/LeCITR_T_HU_Sch4_CabTemp'
     *  SignalConversion generated from: '<S246>/LeCITR_b_HU_Sch4_CabTempFA'
     */
    /* Gateway: PokeCITR_T_HU_Sch4_CabTemp/PokeCITR_T_HU_Sch4_CabTempChrt */
    /* During: PokeCITR_T_HU_Sch4_CabTemp/PokeCITR_T_HU_Sch4_CabTempChrt */
    /* Entry Internal: PokeCITR_T_HU_Sch4_CabTemp/PokeCITR_T_HU_Sch4_CabTempChrt */
    /* Transition: '<S840>:2' */
    if (!LeCITR_b_HU_Sch4_CabTempFA)
    {
        /* Transition: '<S840>:3' */
        /* Transition: '<S840>:15' */
        CITR_ac_B.LeCITR_T_HU_Sch4_CabTemp_out = LeCITR_T_HU_Sch4_CabTemp;
        rtb_LeCITR_b_HU_Sch4_CabTempFA_out = false;

        /* Transition: '<S840>:18' */
    }
    else
    {
        /* Transition: '<S840>:4' */
        rtb_LeCITR_b_HU_Sch4_CabTempFA_out = true;
    }

    /* End of Chart: '<S246>/PokeCITR_T_HU_Sch4_CabTempChrt' */

    /* Outport: '<Root>/VeCITR_T_HU_Sch4_Temperature' incorporates:
     *  SignalConversion generated from: '<S246>/VeCITR_T_HU_Sch4_CabTemp'
     */
    (void)Rte_Write_VeCITR_T_HU_Sch4_Temperature_Value
        (CITR_ac_B.LeCITR_T_HU_Sch4_CabTemp_out);

    /* Outport: '<Root>/VeCITR_b_HU_Sch4_TemperatureFA' incorporates:
     *  SignalConversion generated from: '<S246>/VeCITR_b_HU_Sch4_CabTempFA'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch4_TemperatureFA_Value
        (rtb_LeCITR_b_HU_Sch4_CabTempFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_T_HU_Sch4_CabTemp' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_T_TBM_Sch1_CabTemp(VAR(float32, AUTOMATIC)
    LeCITR_T_TBM_Sch1_CabTemp, VAR(boolean, AUTOMATIC)
    LeCITR_b_TBM_Sch1_CabTempFA)
{
    boolean rtb_LeCITR_b_TBM_Sch1_CabTempFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_T_TBM_Sch1_CabTemp' */
    /* Chart: '<S247>/PokeCITR_T_TBM_Sch1_CabTempChrt' incorporates:
     *  SignalConversion generated from: '<S247>/LeCITR_T_TBM_Sch1_CabTemp'
     *  SignalConversion generated from: '<S247>/LeCITR_b_TBM_Sch1_CabTempFA'
     */
    /* Gateway: PokeCITR_T_TBM_Sch1_CabTemp/PokeCITR_T_TBM_Sch1_CabTempChrt */
    /* During: PokeCITR_T_TBM_Sch1_CabTemp/PokeCITR_T_TBM_Sch1_CabTempChrt */
    /* Entry Internal: PokeCITR_T_TBM_Sch1_CabTemp/PokeCITR_T_TBM_Sch1_CabTempChrt */
    /* Transition: '<S841>:2' */
    if (!LeCITR_b_TBM_Sch1_CabTempFA)
    {
        /* Transition: '<S841>:3' */
        /* Transition: '<S841>:15' */
        CITR_ac_B.LeCITR_T_TBM_Sch1_CabTemp_out = LeCITR_T_TBM_Sch1_CabTemp;
        rtb_LeCITR_b_TBM_Sch1_CabTempFA_out = false;

        /* Transition: '<S841>:18' */
    }
    else
    {
        /* Transition: '<S841>:4' */
        rtb_LeCITR_b_TBM_Sch1_CabTempFA_out = true;
    }

    /* End of Chart: '<S247>/PokeCITR_T_TBM_Sch1_CabTempChrt' */

    /* Outport: '<Root>/VeCITR_T_TBM_Sch1_Temperature' incorporates:
     *  SignalConversion generated from: '<S247>/VeCITR_T_TBM_Sch1_CabTemp'
     */
    (void)Rte_Write_VeCITR_T_TBM_Sch1_Temperature_Value
        (CITR_ac_B.LeCITR_T_TBM_Sch1_CabTemp_out);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch1_TemperatureFA' incorporates:
     *  SignalConversion generated from: '<S247>/VeCITR_b_TBM_Sch1_CabTempFA'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch1_TemperatureFA_Value
        (rtb_LeCITR_b_TBM_Sch1_CabTempFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_T_TBM_Sch1_CabTemp' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_T_TBM_Sch2_CabTemp(VAR(float32, AUTOMATIC)
    LeCITR_T_TBM_Sch2_CabTemp, VAR(boolean, AUTOMATIC)
    LeCITR_b_TBM_Sch2_CabTempFA)
{
    boolean rtb_LeCITR_b_TBM_Sch2_CabTempFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_T_TBM_Sch2_CabTemp' */
    /* Chart: '<S248>/PokeCITR_T_TBM_Sch2_CabTempChrt' incorporates:
     *  SignalConversion generated from: '<S248>/LeCITR_T_TBM_Sch2_CabTemp'
     *  SignalConversion generated from: '<S248>/LeCITR_b_TBM_Sch2_CabTempFA'
     */
    /* Gateway: PokeCITR_T_TBM_Sch2_CabTemp/PokeCITR_T_TBM_Sch2_CabTempChrt */
    /* During: PokeCITR_T_TBM_Sch2_CabTemp/PokeCITR_T_TBM_Sch2_CabTempChrt */
    /* Entry Internal: PokeCITR_T_TBM_Sch2_CabTemp/PokeCITR_T_TBM_Sch2_CabTempChrt */
    /* Transition: '<S842>:2' */
    if (!LeCITR_b_TBM_Sch2_CabTempFA)
    {
        /* Transition: '<S842>:3' */
        /* Transition: '<S842>:15' */
        CITR_ac_B.LeCITR_T_TBM_Sch2_CabTemp_out = LeCITR_T_TBM_Sch2_CabTemp;
        rtb_LeCITR_b_TBM_Sch2_CabTempFA_out = false;

        /* Transition: '<S842>:18' */
    }
    else
    {
        /* Transition: '<S842>:4' */
        rtb_LeCITR_b_TBM_Sch2_CabTempFA_out = true;
    }

    /* End of Chart: '<S248>/PokeCITR_T_TBM_Sch2_CabTempChrt' */

    /* Outport: '<Root>/VeCITR_T_TBM_Sch2_Temperature' incorporates:
     *  SignalConversion generated from: '<S248>/VeCITR_T_TBM_Sch2_CabTemp'
     */
    (void)Rte_Write_VeCITR_T_TBM_Sch2_Temperature_Value
        (CITR_ac_B.LeCITR_T_TBM_Sch2_CabTemp_out);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch2_TemperatureFA' incorporates:
     *  SignalConversion generated from: '<S248>/VeCITR_b_TBM_Sch2_CabTempFA'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch2_TemperatureFA_Value
        (rtb_LeCITR_b_TBM_Sch2_CabTempFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_T_TBM_Sch2_CabTemp' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_T_TBM_Sch3_CabTemp(VAR(float32, AUTOMATIC)
    LeCITR_T_TBM_Sch3_CabTemp, VAR(boolean, AUTOMATIC)
    LeCITR_b_TBM_Sch3_CabTempFA)
{
    boolean rtb_LeCITR_b_TBM_Sch3_CabTempFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_T_TBM_Sch3_CabTemp' */
    /* Chart: '<S249>/PokeCITR_T_TBM_Sch3_CabTempChrt' incorporates:
     *  SignalConversion generated from: '<S249>/LeCITR_T_TBM_Sch3_CabTemp'
     *  SignalConversion generated from: '<S249>/LeCITR_b_TBM_Sch3_CabTempFA'
     */
    /* Gateway: PokeCITR_T_TBM_Sch3_CabTemp/PokeCITR_T_TBM_Sch3_CabTempChrt */
    /* During: PokeCITR_T_TBM_Sch3_CabTemp/PokeCITR_T_TBM_Sch3_CabTempChrt */
    /* Entry Internal: PokeCITR_T_TBM_Sch3_CabTemp/PokeCITR_T_TBM_Sch3_CabTempChrt */
    /* Transition: '<S843>:2' */
    if (!LeCITR_b_TBM_Sch3_CabTempFA)
    {
        /* Transition: '<S843>:3' */
        /* Transition: '<S843>:15' */
        CITR_ac_B.LeCITR_T_TBM_Sch3_CabTemp_out = LeCITR_T_TBM_Sch3_CabTemp;
        rtb_LeCITR_b_TBM_Sch3_CabTempFA_out = false;

        /* Transition: '<S843>:18' */
    }
    else
    {
        /* Transition: '<S843>:4' */
        rtb_LeCITR_b_TBM_Sch3_CabTempFA_out = true;
    }

    /* End of Chart: '<S249>/PokeCITR_T_TBM_Sch3_CabTempChrt' */

    /* Outport: '<Root>/VeCITR_T_TBM_Sch3_Temperature' incorporates:
     *  SignalConversion generated from: '<S249>/VeCITR_T_TBM_Sch3_CabTemp'
     */
    (void)Rte_Write_VeCITR_T_TBM_Sch3_Temperature_Value
        (CITR_ac_B.LeCITR_T_TBM_Sch3_CabTemp_out);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch3_TemperatureFA' incorporates:
     *  SignalConversion generated from: '<S249>/VeCITR_b_TBM_Sch3_CabTempFA'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch3_TemperatureFA_Value
        (rtb_LeCITR_b_TBM_Sch3_CabTempFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_T_TBM_Sch3_CabTemp' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_T_TBM_Sch4_CabTemp(VAR(float32, AUTOMATIC)
    LeCITR_T_TBM_Sch4_CabTemp, VAR(boolean, AUTOMATIC)
    LeCITR_b_TBM_Sch4_CabTempFA)
{
    boolean rtb_LeCITR_b_TBM_Sch4_CabTempFA_out_h;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_T_TBM_Sch4_CabTemp' */
    /* Chart: '<S250>/PokeCITR_T_TBM_Sch4_CabTempChrt' incorporates:
     *  SignalConversion generated from: '<S250>/LeCITR_T_TBM_Sch4_CabTemp'
     *  SignalConversion generated from: '<S250>/LeCITR_b_TBM_Sch4_CabTempFA'
     */
    /* Gateway: PokeCITR_T_TBM_Sch4_CabTemp/PokeCITR_T_TBM_Sch4_CabTempChrt */
    /* During: PokeCITR_T_TBM_Sch4_CabTemp/PokeCITR_T_TBM_Sch4_CabTempChrt */
    /* Entry Internal: PokeCITR_T_TBM_Sch4_CabTemp/PokeCITR_T_TBM_Sch4_CabTempChrt */
    /* Transition: '<S844>:2' */
    if (!LeCITR_b_TBM_Sch4_CabTempFA)
    {
        /* Transition: '<S844>:3' */
        /* Transition: '<S844>:15' */
        CITR_ac_B.LeCITR_T_TBM_Sch4_CabTemp_out = LeCITR_T_TBM_Sch4_CabTemp;
        rtb_LeCITR_b_TBM_Sch4_CabTempFA_out_h = false;

        /* Transition: '<S844>:18' */
    }
    else
    {
        /* Transition: '<S844>:4' */
        rtb_LeCITR_b_TBM_Sch4_CabTempFA_out_h = true;
    }

    /* End of Chart: '<S250>/PokeCITR_T_TBM_Sch4_CabTempChrt' */

    /* Outport: '<Root>/VeCITR_T_TBM_Sch4_Temperature' incorporates:
     *  SignalConversion generated from: '<S250>/VeCITR_T_TBM_Sch4_CabTemp'
     */
    (void)Rte_Write_VeCITR_T_TBM_Sch4_Temperature_Value
        (CITR_ac_B.LeCITR_T_TBM_Sch4_CabTemp_out);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch4_TemperatureFA' incorporates:
     *  SignalConversion generated from: '<S250>/VeCITR_b_TBM_Sch4_CabTempFA'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch4_TemperatureFA_Value
        (rtb_LeCITR_b_TBM_Sch4_CabTempFA_out_h);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_T_TBM_Sch4_CabTemp' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_U_ChrgPortLock_StsB(VAR(float32, AUTOMATIC)
    LeCITR_U_ChrgPortLock_StsB, VAR(boolean, AUTOMATIC)
    LeCITR_b_ChrgPortLock_StsBFA)
{
    boolean rtb_LeCITR_b_ChrgPortLock_StsBFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_U_ChrgPortLock_StsB' */
    /* Chart: '<S251>/PokeCITR_U_ChrgPortLock_StsBChrt' incorporates:
     *  SignalConversion generated from: '<S251>/LeCITR_U_ChrgPortLock_StsB'
     *  SignalConversion generated from: '<S251>/LeCITR_b_ChrgPortLock_StsBFA'
     */
    /* Gateway: PokeCITR_U_ChrgPortLock_StsB/PokeCITR_U_ChrgPortLock_StsBChrt */
    /* During: PokeCITR_U_ChrgPortLock_StsB/PokeCITR_U_ChrgPortLock_StsBChrt */
    /* Entry Internal: PokeCITR_U_ChrgPortLock_StsB/PokeCITR_U_ChrgPortLock_StsBChrt */
    /* Transition: '<S845>:2' */
    if (!LeCITR_b_ChrgPortLock_StsBFA)
    {
        /* Transition: '<S845>:3' */
        /* Transition: '<S845>:15' */
        CITR_ac_B.LeCITR_U_ChrgPortLock_StsB_out = LeCITR_U_ChrgPortLock_StsB;
        rtb_LeCITR_b_ChrgPortLock_StsBFA_out = false;

        /* Transition: '<S845>:18' */
    }
    else
    {
        /* Transition: '<S845>:4' */
        rtb_LeCITR_b_ChrgPortLock_StsBFA_out = true;
    }

    /* End of Chart: '<S251>/PokeCITR_U_ChrgPortLock_StsBChrt' */

    /* Outport: '<Root>/VeCITR_U_ChrgPortLock_StsB' incorporates:
     *  SignalConversion generated from: '<S251>/VeCITR_U_ChrgPortLock_StsB'
     */
    (void)Rte_Write_VeCITR_U_ChrgPortLock_StsB_Value
        (CITR_ac_B.LeCITR_U_ChrgPortLock_StsB_out);

    /* Outport: '<Root>/VeCITR_b_ChrgPortLock_StsB_FA' incorporates:
     *  SignalConversion generated from: '<S251>/VeCITR_b_ChrgPortLock_StsBFA'
     */
    (void)Rte_Write_VeCITR_b_ChrgPortLock_StsB_FA_Value
        (rtb_LeCITR_b_ChrgPortLock_StsBFA_out);

    /* Merge: '<Root>/Merge_4_Irv' incorporates:
     *  SignalConversion generated from: '<S251>/VeCITR_U_ChrgPortLock_StsB_write'
     * */
    Rte_IrvWrite_PokeCITR_U_ChrgPortLock_StsB_ChrgPortLock_StsB_Init_write_IRV
        (CITR_ac_B.LeCITR_U_ChrgPortLock_StsB_out);

    /* Merge: '<Root>/Merge_5_Irv' incorporates:
     *  SignalConversion generated from: '<S251>/VeCITR_b_ChrgPortLock_StsBFA_write'
     * */
    Rte_IrvWrite_PokeCITR_U_ChrgPortLock_StsB_ChrgPortLock_StsB_FA_Init_write_IRV
        (rtb_LeCITR_b_ChrgPortLock_StsBFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_U_ChrgPortLock_StsB' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_BCIM_LIN_Chksum_Error(VAR(boolean, AUTOMATIC)
    LeCITR_b_BCIM_LIN_Chksum_Error)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_BCIM_LIN_Chksum_Error' */
    /* Outport: '<Root>/VeCITR_b_BCIM_LINChkSumErr' incorporates:
     *  SignalConversion generated from: '<S252>/VeCITR_b_BCIM_LIN_Chksum_Error'
     *  SignalConversion generated from: '<S252>/LeCITR_b_BCIM_LIN_Chksum_Error'
     */
    /* Gateway: PokeCITR_b_BCIM_LIN_Chksum_Error/PokeCITR_b_BCIM_LIN_Chksum_ErrorChrt */
    /* During: PokeCITR_b_BCIM_LIN_Chksum_Error/PokeCITR_b_BCIM_LIN_Chksum_ErrorChrt */
    /* Entry Internal: PokeCITR_b_BCIM_LIN_Chksum_Error/PokeCITR_b_BCIM_LIN_Chksum_ErrorChrt */
    /* Transition: '<S846>:2' */
    (void)Rte_Write_VeCITR_b_BCIM_LINChkSumErr_Value
        (LeCITR_b_BCIM_LIN_Chksum_Error);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_BCIM_LIN_Chksum_Error' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_BCIM_LIN_Data_Error(VAR(boolean, AUTOMATIC)
    LeCITR_b_BCIM_LIN_Data_Error)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_BCIM_LIN_Data_Error' */
    /* Outport: '<Root>/VeCITR_b_BCIM_LINDataErr' incorporates:
     *  SignalConversion generated from: '<S253>/VeCITR_b_BCIM_LIN_Data_Error'
     *  SignalConversion generated from: '<S253>/LeCITR_b_BCIM_LIN_Data_Error'
     */
    /* Gateway: PokeCITR_b_BCIM_LIN_Data_Error/PokeCITR_b_BCIM_LIN_Data_ErrorChrt */
    /* During: PokeCITR_b_BCIM_LIN_Data_Error/PokeCITR_b_BCIM_LIN_Data_ErrorChrt */
    /* Entry Internal: PokeCITR_b_BCIM_LIN_Data_Error/PokeCITR_b_BCIM_LIN_Data_ErrorChrt */
    /* Transition: '<S847>:2' */
    (void)Rte_Write_VeCITR_b_BCIM_LINDataErr_Value(LeCITR_b_BCIM_LIN_Data_Error);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_BCIM_LIN_Data_Error' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_BCIM_LIN_Parity_Error(VAR(boolean, AUTOMATIC)
    LeCITR_b_BCIM_LIN_Parity_Error)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_BCIM_LIN_Parity_Error' */
    /* Outport: '<Root>/VeCITR_b_BCIM_LINParityErr' incorporates:
     *  SignalConversion generated from: '<S254>/VeCITR_b_BCIM_LIN_Parity_Error'
     *  SignalConversion generated from: '<S254>/LeCITR_b_BCIM_LIN_Parity_Error'
     */
    /* Gateway: PokeCITR_b_BCIM_LIN_Parity_Error/PokeCITR_b_BCIM_LIN_Parity_ErrorChrt */
    /* During: PokeCITR_b_BCIM_LIN_Parity_Error/PokeCITR_b_BCIM_LIN_Parity_ErrorChrt */
    /* Entry Internal: PokeCITR_b_BCIM_LIN_Parity_Error/PokeCITR_b_BCIM_LIN_Parity_ErrorChrt */
    /* Transition: '<S848>:2' */
    (void)Rte_Write_VeCITR_b_BCIM_LINParityErr_Value
        (LeCITR_b_BCIM_LIN_Parity_Error);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_BCIM_LIN_Parity_Error' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_BCIM_Over_Temp(VAR(boolean, AUTOMATIC)
    LeCITR_b_BCIM_Over_Temp)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_BCIM_Over_Temp' */
    /* Outport: '<Root>/VeCITR_b_BCIM_OverTemp' incorporates:
     *  SignalConversion generated from: '<S255>/VeCITR_b_BCIM_Over_Temp'
     *  SignalConversion generated from: '<S255>/LeCITR_b_BCIM_Over_Temp'
     */
    /* Gateway: PokeCITR_b_BCIM_Over_Temp/PokeCITR_b_BCIM_Over_TempChrt */
    /* During: PokeCITR_b_BCIM_Over_Temp/PokeCITR_b_BCIM_Over_TempChrt */
    /* Entry Internal: PokeCITR_b_BCIM_Over_Temp/PokeCITR_b_BCIM_Over_TempChrt */
    /* Transition: '<S849>:2' */
    (void)Rte_Write_VeCITR_b_BCIM_OverTemp_Value(LeCITR_b_BCIM_Over_Temp);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_BCIM_Over_Temp' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_BCIM_Undervolt(VAR(boolean, AUTOMATIC)
    LeCITR_b_BCIM_Undervolt)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_BCIM_Undervolt' */
    /* Outport: '<Root>/VeCITR_b_BCIM_UnderVolt' incorporates:
     *  SignalConversion generated from: '<S256>/VeCITR_b_BCIM_Undervolt'
     *  SignalConversion generated from: '<S256>/LeCITR_b_BCIM_Undervolt'
     */
    /* Gateway: PokeCITR_b_BCIM_Undervolt/PokeCITR_b_BCIM_UndervoltChrt */
    /* During: PokeCITR_b_BCIM_Undervolt/PokeCITR_b_BCIM_UndervoltChrt */
    /* Entry Internal: PokeCITR_b_BCIM_Undervolt/PokeCITR_b_BCIM_UndervoltChrt */
    /* Transition: '<S850>:2' */
    (void)Rte_Write_VeCITR_b_BCIM_UnderVolt_Value(LeCITR_b_BCIM_Undervolt);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_BCIM_Undervolt' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_CPIM_BlueLED_Sts(VAR(boolean, AUTOMATIC)
    LeCITR_b_CPIM_BlueLED_Sts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_CPIM_BlueLED_Sts' */
    /* Outport: '<Root>/VeCITR_b_CPIM_BlueLED_Sts' incorporates:
     *  SignalConversion generated from: '<S257>/VeCITR_b_CPIM_BlueLED_Sts'
     *  SignalConversion generated from: '<S257>/LeCITR_b_CPIM_BlueLED_Sts'
     */
    /* Gateway: PokeCITR_b_CPIM_BlueLED_Sts/PokeCITR_b_CPIM_BlueLED_StsChrt */
    /* During: PokeCITR_b_CPIM_BlueLED_Sts/PokeCITR_b_CPIM_BlueLED_StsChrt */
    /* Entry Internal: PokeCITR_b_CPIM_BlueLED_Sts/PokeCITR_b_CPIM_BlueLED_StsChrt */
    /* Transition: '<S851>:2' */
    (void)Rte_Write_VeCITR_b_CPIM_BlueLED_Sts_Value(LeCITR_b_CPIM_BlueLED_Sts);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_CPIM_BlueLED_Sts' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_CPIM_GreenLED_Sts(VAR(boolean, AUTOMATIC)
    LeCITR_b_CPIM_GreenLED_Sts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_CPIM_GreenLED_Sts' */
    /* Outport: '<Root>/VeCITR_b_CPIM_GreenLED_Sts' incorporates:
     *  SignalConversion generated from: '<S258>/VeCITR_b_CPIM_GreenLED_Sts'
     *  SignalConversion generated from: '<S258>/LeCITR_b_CPIM_GreenLED_Sts'
     */
    /* Gateway: PokeCITR_b_CPIM_GreenLED_Sts/PokeCITR_b_CPIM_GreenLED_StsChrt */
    /* During: PokeCITR_b_CPIM_GreenLED_Sts/PokeCITR_b_CPIM_GreenLED_StsChrt */
    /* Entry Internal: PokeCITR_b_CPIM_GreenLED_Sts/PokeCITR_b_CPIM_GreenLED_StsChrt */
    /* Transition: '<S852>:2' */
    (void)Rte_Write_VeCITR_b_CPIM_GreenLED_Sts_Value(LeCITR_b_CPIM_GreenLED_Sts);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_CPIM_GreenLED_Sts' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_CPIM_LINChkSumErr(VAR(boolean, AUTOMATIC)
    LeCITR_b_CPIM_LINChkSumErr)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_CPIM_LINChkSumErr' */
    /* Outport: '<Root>/VeCITR_b_CPIM_LINChkSumErr' incorporates:
     *  SignalConversion generated from: '<S259>/VeCITR_b_CPIM_LINChkSumErr'
     *  SignalConversion generated from: '<S259>/LeCITR_b_CPIM_LINChkSumErr'
     */
    /* Gateway: PokeCITR_b_CPIM_LINChkSumErr/PokeCITR_b_CPIM_LINChkSumErrChrt */
    /* During: PokeCITR_b_CPIM_LINChkSumErr/PokeCITR_b_CPIM_LINChkSumErrChrt */
    /* Entry Internal: PokeCITR_b_CPIM_LINChkSumErr/PokeCITR_b_CPIM_LINChkSumErrChrt */
    /* Transition: '<S853>:2' */
    (void)Rte_Write_VeCITR_b_CPIM_LINChkSumErr_Value(LeCITR_b_CPIM_LINChkSumErr);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_CPIM_LINChkSumErr' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_CPIM_LINDataErr(VAR(boolean, AUTOMATIC)
    LeCITR_b_CPIM_LINDataErr)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_CPIM_LINDataErr' */
    /* Outport: '<Root>/VeCITR_b_CPIM_LINDataErr' incorporates:
     *  SignalConversion generated from: '<S260>/VeCITR_b_CPIM_LINDataErr'
     *  SignalConversion generated from: '<S260>/LeCITR_b_CPIM_LINDataErr'
     */
    /* Gateway: PokeCITR_b_CPIM_LINDataErr/PokeCITR_b_CPIM_LINDataErrChrt */
    /* During: PokeCITR_b_CPIM_LINDataErr/PokeCITR_b_CPIM_LINDataErrChrt */
    /* Entry Internal: PokeCITR_b_CPIM_LINDataErr/PokeCITR_b_CPIM_LINDataErrChrt */
    /* Transition: '<S854>:2' */
    (void)Rte_Write_VeCITR_b_CPIM_LINDataErr_Value(LeCITR_b_CPIM_LINDataErr);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_CPIM_LINDataErr' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_CPIM_LINParityErr(VAR(boolean, AUTOMATIC)
    LeCITR_b_CPIM_LINParityErr)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_CPIM_LINParityErr' */
    /* Outport: '<Root>/VeCITR_b_CPIM_LINParityErr' incorporates:
     *  SignalConversion generated from: '<S261>/VeCITR_b_CPIM_LINParityErr'
     *  SignalConversion generated from: '<S261>/LeCITR_b_CPIM_LINParityErr'
     */
    /* Gateway: PokeCITR_b_CPIM_LINParityErr/PokeCITR_b_CPIM_LINParityErrChrt */
    /* During: PokeCITR_b_CPIM_LINParityErr/PokeCITR_b_CPIM_LINParityErrChrt */
    /* Entry Internal: PokeCITR_b_CPIM_LINParityErr/PokeCITR_b_CPIM_LINParityErrChrt */
    /* Transition: '<S855>:2' */
    (void)Rte_Write_VeCITR_b_CPIM_LINParityErr_Value(LeCITR_b_CPIM_LINParityErr);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_CPIM_LINParityErr' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_CPIM_OverTemp(VAR(boolean, AUTOMATIC)
    LeCITR_b_CPIM_OverTemp)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_CPIM_OverTemp' */
    /* Outport: '<Root>/VeCITR_b_CPIM_OverTemp' incorporates:
     *  SignalConversion generated from: '<S262>/VeCITR_b_CPIM_OverTemp'
     *  SignalConversion generated from: '<S262>/LeCITR_b_CPIM_OverTemp'
     */
    /* Gateway: PokeCITR_b_CPIM_OverTemp/PokeCITR_b_CPIM_OverTempChrt */
    /* During: PokeCITR_b_CPIM_OverTemp/PokeCITR_b_CPIM_OverTempChrt */
    /* Entry Internal: PokeCITR_b_CPIM_OverTemp/PokeCITR_b_CPIM_OverTempChrt */
    /* Transition: '<S856>:2' */
    (void)Rte_Write_VeCITR_b_CPIM_OverTemp_Value(LeCITR_b_CPIM_OverTemp);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_CPIM_OverTemp' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_CPIM_RedLED_Sts(VAR(boolean, AUTOMATIC)
    LeCITR_b_CPIM_RedLED_Sts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_CPIM_RedLED_Sts' */
    /* Outport: '<Root>/VeCITR_b_CPIM_RedLED_Sts' incorporates:
     *  SignalConversion generated from: '<S263>/VeCITR_b_CPIM_RedLED_Sts'
     *  SignalConversion generated from: '<S263>/LeCITR_b_CPIM_RedLED_Sts'
     */
    /* Gateway: PokeCITR_b_CPIM_RedLED_Sts/PokeCITR_b_CPIM_RedLED_StsChrt */
    /* During: PokeCITR_b_CPIM_RedLED_Sts/PokeCITR_b_CPIM_RedLED_StsChrt */
    /* Entry Internal: PokeCITR_b_CPIM_RedLED_Sts/PokeCITR_b_CPIM_RedLED_StsChrt */
    /* Transition: '<S857>:2' */
    (void)Rte_Write_VeCITR_b_CPIM_RedLED_Sts_Value(LeCITR_b_CPIM_RedLED_Sts);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_CPIM_RedLED_Sts' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_CPIM_UnderVolt(VAR(boolean, AUTOMATIC)
    LeCITR_b_CPIM_UnderVolt)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_CPIM_UnderVolt' */
    /* Outport: '<Root>/VeCITR_b_CPIM_UnderVolt' incorporates:
     *  SignalConversion generated from: '<S264>/VeCITR_b_CPIM_UnderVolt'
     *  SignalConversion generated from: '<S264>/LeCITR_b_CPIM_UnderVolt'
     */
    /* Gateway: PokeCITR_b_CPIM_UnderVolt/PokeCITR_b_CPIM_UnderVoltChrt */
    /* During: PokeCITR_b_CPIM_UnderVolt/PokeCITR_b_CPIM_UnderVoltChrt */
    /* Entry Internal: PokeCITR_b_CPIM_UnderVolt/PokeCITR_b_CPIM_UnderVoltChrt */
    /* Transition: '<S858>:2' */
    (void)Rte_Write_VeCITR_b_CPIM_UnderVolt_Value(LeCITR_b_CPIM_UnderVolt);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_CPIM_UnderVolt' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_ChargeNow(VAR(boolean, AUTOMATIC)
    LeCITR_b_ChargeNow)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_ChargeNow' */
    /* Outport: '<Root>/VeCITR_b_ChargeNow' incorporates:
     *  SignalConversion generated from: '<S265>/VeCITR_b_ChargeNow'
     *  SignalConversion generated from: '<S265>/LeCITR_b_ChargeNow'
     */
    /* Gateway: PokeCITR_b_ChargeNow/PokeCITR_b_ChargeNowChrt */
    /* During: PokeCITR_b_ChargeNow/PokeCITR_b_ChargeNowChrt */
    /* Entry Internal: PokeCITR_b_ChargeNow/PokeCITR_b_ChargeNowChrt */
    /* Transition: '<S859>:2' */
    (void)Rte_Write_VeCITR_b_ChargeNow_Value(LeCITR_b_ChargeNow);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_ChargeNow' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_ChrgPortButton_FailSts(VAR(boolean, AUTOMATIC)
    LeCITR_b_ChrgPortButton_FailSts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_ChrgPortButton_FailSts' */
    /* Outport: '<Root>/VeCITR_b_ChrgPortButton_FailSts' incorporates:
     *  SignalConversion generated from: '<S266>/VeCITR_b_ChrgPortButton_FailSts'
     *  SignalConversion generated from: '<S266>/LeCITR_b_ChrgPortButton_FailSts'
     */
    /* Gateway: PokeCITR_b_ChrgPortButton_FailSts/PokeCITR_b_ChrgPortButton_FailStsChrt */
    /* During: PokeCITR_b_ChrgPortButton_FailSts/PokeCITR_b_ChrgPortButton_FailStsChrt */
    /* Entry Internal: PokeCITR_b_ChrgPortButton_FailSts/PokeCITR_b_ChrgPortButton_FailStsChrt */
    /* Transition: '<S860>:2' */
    (void)Rte_Write_VeCITR_b_ChrgPortButton_FailSts_Value
        (LeCITR_b_ChrgPortButton_FailSts);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_ChrgPortButton_FailSts' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_ChrgPortButton_Sts(VAR(boolean, AUTOMATIC)
    LeCITR_b_ChrgPortButton_Sts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_ChrgPortButton_Sts' */
    /* Outport: '<Root>/VeCITR_b_ChrgPortButton_Sts' incorporates:
     *  SignalConversion generated from: '<S267>/VeCITR_b_ChrgPortButton_Sts'
     *  SignalConversion generated from: '<S267>/LeCITR_b_ChrgPortButton_Sts'
     */
    /* Gateway: PokeCITR_b_ChrgPortButton_Sts/PokeCITR_b_ChrgPortButton_StsChrt */
    /* During: PokeCITR_b_ChrgPortButton_Sts/PokeCITR_b_ChrgPortButton_StsChrt */
    /* Entry Internal: PokeCITR_b_ChrgPortButton_Sts/PokeCITR_b_ChrgPortButton_StsChrt */
    /* Transition: '<S861>:2' */
    (void)Rte_Write_VeCITR_b_ChrgPortButton_Sts_Value
        (LeCITR_b_ChrgPortButton_Sts);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_ChrgPortButton_Sts' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_ChrgPortLock_StsC(VAR(boolean, AUTOMATIC)
    LeCITR_b_ChrgPortLock_StsC, VAR(boolean, AUTOMATIC)
    LeCITR_b_ChrgPortLock_StsCFA)
{
    boolean rtb_LeCITR_b_ChrgPortLock_StsCFA_out_o;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_ChrgPortLock_StsC' */
    /* Chart: '<S268>/PokeCITR_b_ChrgPortLock_StsCChrt' incorporates:
     *  SignalConversion generated from: '<S268>/LeCITR_b_ChrgPortLock_StsCFA'
     *  SignalConversion generated from: '<S268>/LeCITR_b_ChrgPortLock_StsC'
     */
    /* Gateway: PokeCITR_b_ChrgPortLock_StsC/PokeCITR_b_ChrgPortLock_StsCChrt */
    /* During: PokeCITR_b_ChrgPortLock_StsC/PokeCITR_b_ChrgPortLock_StsCChrt */
    /* Entry Internal: PokeCITR_b_ChrgPortLock_StsC/PokeCITR_b_ChrgPortLock_StsCChrt */
    /* Transition: '<S862>:2' */
    if (!LeCITR_b_ChrgPortLock_StsCFA)
    {
        /* Transition: '<S862>:3' */
        /* Transition: '<S862>:15' */
        CITR_ac_B.LeCITR_b_ChrgPortLock_StsC_out = LeCITR_b_ChrgPortLock_StsC;
        rtb_LeCITR_b_ChrgPortLock_StsCFA_out_o = false;

        /* Transition: '<S862>:18' */
    }
    else
    {
        /* Transition: '<S862>:4' */
        rtb_LeCITR_b_ChrgPortLock_StsCFA_out_o = true;
    }

    /* End of Chart: '<S268>/PokeCITR_b_ChrgPortLock_StsCChrt' */

    /* Outport: '<Root>/VeCITR_b_ChrgPortLock_StsC' incorporates:
     *  SignalConversion generated from: '<S268>/VeCITR_b_ChrgPortLock_StsC'
     */
    (void)Rte_Write_VeCITR_b_ChrgPortLock_StsC_Value
        (CITR_ac_B.LeCITR_b_ChrgPortLock_StsC_out);

    /* Outport: '<Root>/VeCITR_b_ChrgPortLock_StsC_FA' incorporates:
     *  SignalConversion generated from: '<S268>/VeCITR_b_ChrgPortLock_StsCFA'
     */
    (void)Rte_Write_VeCITR_b_ChrgPortLock_StsC_FA_Value
        (rtb_LeCITR_b_ChrgPortLock_StsCFA_out_o);

    /* Merge: '<Root>/Merge_7_Irv' incorporates:
     *  SignalConversion generated from: '<S268>/VeCITR_b_ChrgPortLock_StsCFA_write'
     * */
    Rte_IrvWrite_PokeCITR_b_ChrgPortLock_StsC_ChrgPortLock_StsC_FA_Init_write_IRV
        (rtb_LeCITR_b_ChrgPortLock_StsCFA_out_o);

    /* Merge: '<Root>/Merge_6_Irv' incorporates:
     *  SignalConversion generated from: '<S268>/VeCITR_b_ChrgPortLock_StsC_write'
     * */
    Rte_IrvWrite_PokeCITR_b_ChrgPortLock_StsC_ChrgPortLock_StsC_Init_write_IRV
        (CITR_ac_B.LeCITR_b_ChrgPortLock_StsC_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_ChrgPortLock_StsC' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_ChrgPort_BCM_Cmd(VAR(boolean, AUTOMATIC)
    LeCITR_b_ChrgPort_BCM_Cmd)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_ChrgPort_BCM_Cmd' */
    /* Outport: '<Root>/VeCITR_b_ChrgPort_BCM_Cmd_Out' incorporates:
     *  SignalConversion generated from: '<S269>/VeCITR_b_ChrgPort_BCM_Cmd'
     *  SignalConversion generated from: '<S269>/LeCITR_b_ChrgPort_BCM_Cmd'
     */
    /* Gateway: PokeCITR_b_ChrgPort_BCM_Cmd/PokeCITR_b_ChrgPort_BCM_CmdChrt */
    /* During: PokeCITR_b_ChrgPort_BCM_Cmd/PokeCITR_b_ChrgPort_BCM_CmdChrt */
    /* Entry Internal: PokeCITR_b_ChrgPort_BCM_Cmd/PokeCITR_b_ChrgPort_BCM_CmdChrt */
    /* Transition: '<S863>:2' */
    /* Transition: '<S863>:15' */
    (void)Rte_Write_VeCITR_b_ChrgPort_BCM_Cmd_Out_Value
        (LeCITR_b_ChrgPort_BCM_Cmd);

    /* Outport: '<Root>/VeCITR_b_ChrgPort_BCM_Cmd_Rcvd' incorporates:
     *  Chart: '<S269>/PokeCITR_b_ChrgPort_BCM_CmdChrt'
     *  SignalConversion generated from: '<S269>/VeCITR_b_ChrgPort_BCM_CmdSgnl_Rcvd'
     */
    (void)Rte_Write_VeCITR_b_ChrgPort_BCM_Cmd_Rcvd_Value(true);

    /* Merge: '<Root>/Merge_8_Irv' incorporates:
     *  Chart: '<S269>/PokeCITR_b_ChrgPort_BCM_CmdChrt'
     *  SignalConversion generated from: '<S269>/VeCITR_b_ChrgPort_BCM_CmdSgnl_Rcvd_write'
     */
    Rte_IrvWrite_PokeCITR_b_ChrgPort_BCM_Cmd_ChrgPort_BCM_Cmd_SgnlRcvd_Init_write_IRV
        (true);

    /* Merge: '<Root>/Merge_34_Irv' incorporates:
     *  SignalConversion generated from: '<S269>/LeCITR_b_ChrgPort_BCM_Cmd'
     *  SignalConversion generated from: '<S269>/VeCITR_b_ChrgPort_BCM_Cmd_write'
     */
    Rte_IrvWrite_PokeCITR_b_ChrgPort_BCM_Cmd_ChrgPort_BCM_Cmd_Init_write_IRV
        (LeCITR_b_ChrgPort_BCM_Cmd);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_ChrgPort_BCM_Cmd' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_ChrgPort_Fdbk(VAR(boolean, AUTOMATIC)
    LeCITR_b_ChrgPort_Fdbk, VAR(boolean, AUTOMATIC) LeCITR_b_ChrgPort_FdbkFA)
{
    UNUSED_PARAMETER(LeCITR_b_ChrgPort_FdbkFA);

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_ChrgPort_Fdbk' */
    /* Merge: '<Root>/Merge_3' incorporates:
     *  SignalConversion generated from: '<S270>/LeCITR_b_ChrgPort_Fdbk'
     *  SignalConversion generated from: '<S270>/VeCITR_b_ChrgPort_Fdbk_write'
     */
    /* Gateway: PokeCITR_b_ChrgPort_Fdbk/PokeCITR_b_ChrgPort_FdbkChrt */
    /* During: PokeCITR_b_ChrgPort_Fdbk/PokeCITR_b_ChrgPort_FdbkChrt */
    /* Entry Internal: PokeCITR_b_ChrgPort_Fdbk/PokeCITR_b_ChrgPort_FdbkChrt */
    /* Transition: '<S864>:2' */
    Rte_IrvWrite_PokeCITR_b_ChrgPort_Fdbk_ChrgPort_Sense_Init_write_IRV
        (LeCITR_b_ChrgPort_Fdbk);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_ChrgPort_Fdbk' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_CoopCh_VehLocation(VAR(boolean, AUTOMATIC)
    LeCITR_b_CoopCh_VehLocation, VAR(boolean, AUTOMATIC)
    LeCITR_b_CoopCh_VehLocationFA)
{
    boolean rtb_LeCITR_b_CoopCh_VehLocationFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_CoopCh_VehLocation' */
    /* Chart: '<S271>/PokeCITR_b_CoopCh_VehLocationChrt' incorporates:
     *  SignalConversion generated from: '<S271>/LeCITR_e_FOTA_Installation_Status1'
     *  SignalConversion generated from: '<S271>/LeCITR_e_FOTA_Installation_Status'
     */
    /* Gateway: PokeCITR_b_CoopCh_VehLocation/PokeCITR_b_CoopCh_VehLocationChrt */
    /* During: PokeCITR_b_CoopCh_VehLocation/PokeCITR_b_CoopCh_VehLocationChrt */
    /* Entry Internal: PokeCITR_b_CoopCh_VehLocation/PokeCITR_b_CoopCh_VehLocationChrt */
    /* Transition: '<S865>:2' */
    if (!LeCITR_b_CoopCh_VehLocationFA)
    {
        /* Transition: '<S865>:20' */
        /* Transition: '<S865>:23' */
        CITR_ac_B.LeCITR_b_CoopCh_VehLocation_out = LeCITR_b_CoopCh_VehLocation;
        rtb_LeCITR_b_CoopCh_VehLocationFA_out = false;

        /* Transition: '<S865>:25' */
    }
    else
    {
        /* Transition: '<S865>:24' */
        rtb_LeCITR_b_CoopCh_VehLocationFA_out = true;
    }

    /* End of Chart: '<S271>/PokeCITR_b_CoopCh_VehLocationChrt' */

    /* Outport: '<Root>/VeCITR_b_CoopCh_VehLocation' incorporates:
     *  SignalConversion generated from: '<S271>/VeCITR_b_CoopCh_VehLocation'
     */
    (void)Rte_Write_VeCITR_b_CoopCh_VehLocation_Value
        (CITR_ac_B.LeCITR_b_CoopCh_VehLocation_out);

    /* Outport: '<Root>/VeCITR_b_CoopCh_VehLocationFA' incorporates:
     *  SignalConversion generated from: '<S271>/VeCITR_b_CoopCh_VehLocationFA'
     */
    (void)Rte_Write_VeCITR_b_CoopCh_VehLocationFA_Value
        (rtb_LeCITR_b_CoopCh_VehLocationFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_CoopCh_VehLocation' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_DC_PwrLev(VAR(boolean, AUTOMATIC)
    LeCITR_b_DC_PwrLev)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_DC_PwrLev' */
    /* Outport: '<Root>/VeCITR_b_DC_PwrLev' incorporates:
     *  SignalConversion generated from: '<S272>/VeCITR_b_DC_PwrLev'
     *  SignalConversion generated from: '<S272>/LeCITR_b_DC_PwrLev'
     */
    /* Gateway: PokeCITR_b_DC_PwrLev/PokeCITR_b_DC_PwrLevChrt */
    /* During: PokeCITR_b_DC_PwrLev/PokeCITR_b_DC_PwrLevChrt */
    /* Entry Internal: PokeCITR_b_DC_PwrLev/PokeCITR_b_DC_PwrLevChrt */
    /* Transition: '<S866>:2' */
    (void)Rte_Write_VeCITR_b_DC_PwrLev_Value(LeCITR_b_DC_PwrLev);

    /* Outport: '<Root>/VeCITR_b_DC_PwrLev_FA' incorporates:
     *  Chart: '<S272>/PokeCITR_b_DC_PwrLevChrt'
     *  SignalConversion generated from: '<S272>/VeCITR_b_DC_PwrLev_FA'
     */
    (void)Rte_Write_VeCITR_b_DC_PwrLev_FA_Value(false);

    /* Outport: '<Root>/VeCITR_b_DC_PwrLev_SgnlRcvd' incorporates:
     *  Chart: '<S272>/PokeCITR_b_DC_PwrLevChrt'
     *  SignalConversion generated from: '<S272>/VeCITR_b_DC_PwrLev_SgnlRcvd'
     */
    (void)Rte_Write_VeCITR_b_DC_PwrLev_SgnlRcvd_Value(true);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_DC_PwrLev' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_Drv_Dr_Unlocking(VAR(boolean, AUTOMATIC)
    LeCITR_b_Drv_Dr_Unlocking)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_Drv_Dr_Unlocking' */
    /* Outport: '<Root>/VeCITR_b_Drv_Dr_Unlocking' incorporates:
     *  SignalConversion generated from: '<S273>/VeCITR_b_Drv_Dr_Unlocking'
     *  SignalConversion generated from: '<S273>/LeCITR_b_Drv_Dr_Unlocking'
     */
    /* Gateway: PokeCITR_b_Drv_Dr_Unlocking/PokeCITR_b_Drv_Dr_UnlockingChrt */
    /* During: PokeCITR_b_Drv_Dr_Unlocking/PokeCITR_b_Drv_Dr_UnlockingChrt */
    /* Entry Internal: PokeCITR_b_Drv_Dr_Unlocking/PokeCITR_b_Drv_Dr_UnlockingChrt */
    /* Transition: '<S867>:2' */
    (void)Rte_Write_VeCITR_b_Drv_Dr_Unlocking_Value(LeCITR_b_Drv_Dr_Unlocking);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_Drv_Dr_Unlocking' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_HU_Sch1_ChargeUntilFull(VAR(boolean, AUTOMATIC)
    LeCITR_b_HU_Sch1_ChargeUntilFull)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_HU_Sch1_ChargeUntilFull' */
    /* Outport: '<Root>/VeCITR_b_HU_Sch1_ChargeUntilFull' incorporates:
     *  SignalConversion generated from: '<S274>/VeCITR_b_HU_Sch1_ChargeUntilFull'
     *  SignalConversion generated from: '<S274>/LeCITR_b_HU_Sch1_ChargeUntilFull'
     */
    /* Gateway: PokeCITR_b_HU_Sch1_ChargeUntilFull/PokeCITR_b_HU_Sch1_ChargeUntilFullChrt */
    /* During: PokeCITR_b_HU_Sch1_ChargeUntilFull/PokeCITR_b_HU_Sch1_ChargeUntilFullChrt */
    /* Entry Internal: PokeCITR_b_HU_Sch1_ChargeUntilFull/PokeCITR_b_HU_Sch1_ChargeUntilFullChrt */
    /* Transition: '<S868>:2' */
    (void)Rte_Write_VeCITR_b_HU_Sch1_ChargeUntilFull_Value
        (LeCITR_b_HU_Sch1_ChargeUntilFull);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_HU_Sch1_ChargeUntilFull' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_HU_Sch1_Do_Not_Repeat(VAR(boolean, AUTOMATIC)
    LeCITR_b_HU_Sch1_Do_Not_Repeat)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_HU_Sch1_Do_Not_Repeat' */
    /* Outport: '<Root>/VeCITR_b_HU_Sch1_Do_Not_Repeat' incorporates:
     *  SignalConversion generated from: '<S275>/VeCITR_b_HU_Sch1_Do_Not_Repeat'
     *  SignalConversion generated from: '<S275>/LeCITR_b_HU_Sch1_Do_Not_Repeat'
     */
    /* Gateway: PokeCITR_b_HU_Sch1_Do_Not_Repeat/PokeCITR_b_HU_Sch1_Do_Not_RepeatChrt */
    /* During: PokeCITR_b_HU_Sch1_Do_Not_Repeat/PokeCITR_b_HU_Sch1_Do_Not_RepeatChrt */
    /* Entry Internal: PokeCITR_b_HU_Sch1_Do_Not_Repeat/PokeCITR_b_HU_Sch1_Do_Not_RepeatChrt */
    /* Transition: '<S869>:2' */
    (void)Rte_Write_VeCITR_b_HU_Sch1_Do_Not_Repeat_Value
        (LeCITR_b_HU_Sch1_Do_Not_Repeat);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_HU_Sch1_Do_Not_Repeat' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_HU_Sch1_Enbl(VAR(boolean, AUTOMATIC)
    LeCITR_b_HU_Sch1_Enbl)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_HU_Sch1_Enbl' */
    /* Outport: '<Root>/VeCITR_b_HU_Sch1_Enbl' incorporates:
     *  SignalConversion generated from: '<S276>/VeCITR_b_HU_Sch1_Enbl'
     *  SignalConversion generated from: '<S276>/LeCITR_b_HU_Sch1_Enbl'
     */
    /* Gateway: PokeCITR_b_HU_Sch1_Enbl/PokeCITR_b_HU_Sch1_EnblChrt */
    /* During: PokeCITR_b_HU_Sch1_Enbl/PokeCITR_b_HU_Sch1_EnblChrt */
    /* Entry Internal: PokeCITR_b_HU_Sch1_Enbl/PokeCITR_b_HU_Sch1_EnblChrt */
    /* Transition: '<S870>:2' */
    (void)Rte_Write_VeCITR_b_HU_Sch1_Enbl_Value(LeCITR_b_HU_Sch1_Enbl);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_HU_Sch1_Enbl' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_HU_Sch1_Priority(VAR(boolean, AUTOMATIC)
    LeCITR_b_HU_Sch1_Priority)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_HU_Sch1_Priority' */
    /* Outport: '<Root>/VeCITR_b_HU_Sch1_Priority' incorporates:
     *  SignalConversion generated from: '<S277>/VeCITR_b_HU_Sch1_Priority'
     *  SignalConversion generated from: '<S277>/LeCITR_b_HU_Sch1_Priority'
     */
    /* Gateway: PokeCITR_b_HU_Sch1_Priority/PokeCITR_b_HU_Sch1_PriorityChrt */
    /* During: PokeCITR_b_HU_Sch1_Priority/PokeCITR_b_HU_Sch1_PriorityChrt */
    /* Entry Internal: PokeCITR_b_HU_Sch1_Priority/PokeCITR_b_HU_Sch1_PriorityChrt */
    /* Transition: '<S871>:2' */
    (void)Rte_Write_VeCITR_b_HU_Sch1_Priority_Value(LeCITR_b_HU_Sch1_Priority);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_HU_Sch1_Priority' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_HU_Sch1_Submit(VAR(boolean, AUTOMATIC)
    LeCITR_b_HU_Sch1_Submit)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_HU_Sch1_Submit' */
    /* Outport: '<Root>/VeCITR_b_HU_Sch1_Submit' incorporates:
     *  SignalConversion generated from: '<S278>/VeCITR_b_HU_Sch1_Submit'
     *  SignalConversion generated from: '<S278>/LeCITR_b_HU_Sch1_Submit'
     */
    /* Gateway: PokeCITR_b_HU_Sch1_Submit/PokeCITR_b_HU_Sch1_SubmitChrt */
    /* During: PokeCITR_b_HU_Sch1_Submit/PokeCITR_b_HU_Sch1_SubmitChrt */
    /* Entry Internal: PokeCITR_b_HU_Sch1_Submit/PokeCITR_b_HU_Sch1_SubmitChrt */
    /* Transition: '<S872>:2' */
    (void)Rte_Write_VeCITR_b_HU_Sch1_Submit_Value(LeCITR_b_HU_Sch1_Submit);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_HU_Sch1_Submit' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_HU_Sch2_ChargeUntilFull(VAR(boolean, AUTOMATIC)
    LeCITR_b_HU_Sch2_ChargeUntilFull)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_HU_Sch2_ChargeUntilFull' */
    /* Outport: '<Root>/VeCITR_b_HU_Sch2_ChargeUntilFull' incorporates:
     *  SignalConversion generated from: '<S279>/VeCITR_b_HU_Sch2_ChargeUntilFull'
     *  SignalConversion generated from: '<S279>/LeCITR_b_HU_Sch2_ChargeUntilFull'
     */
    /* Gateway: PokeCITR_b_HU_Sch2_ChargeUntilFull/PokeCITR_b_HU_Sch2_ChargeUntilFullChrt */
    /* During: PokeCITR_b_HU_Sch2_ChargeUntilFull/PokeCITR_b_HU_Sch2_ChargeUntilFullChrt */
    /* Entry Internal: PokeCITR_b_HU_Sch2_ChargeUntilFull/PokeCITR_b_HU_Sch2_ChargeUntilFullChrt */
    /* Transition: '<S873>:2' */
    (void)Rte_Write_VeCITR_b_HU_Sch2_ChargeUntilFull_Value
        (LeCITR_b_HU_Sch2_ChargeUntilFull);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_HU_Sch2_ChargeUntilFull' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_HU_Sch2_Do_Not_Repeat(VAR(boolean, AUTOMATIC)
    LeCITR_b_HU_Sch2_Do_Not_Repeat)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_HU_Sch2_Do_Not_Repeat' */
    /* Outport: '<Root>/VeCITR_b_HU_Sch2_Do_Not_Repeat' incorporates:
     *  SignalConversion generated from: '<S280>/VeCITR_b_HU_Sch2_Do_Not_Repeat'
     *  SignalConversion generated from: '<S280>/LeCITR_b_HU_Sch2_Do_Not_Repeat'
     */
    /* Gateway: PokeCITR_b_HU_Sch2_Do_Not_Repeat/PokeCITR_b_HU_Sch2_Do_Not_RepeatChrt */
    /* During: PokeCITR_b_HU_Sch2_Do_Not_Repeat/PokeCITR_b_HU_Sch2_Do_Not_RepeatChrt */
    /* Entry Internal: PokeCITR_b_HU_Sch2_Do_Not_Repeat/PokeCITR_b_HU_Sch2_Do_Not_RepeatChrt */
    /* Transition: '<S874>:2' */
    (void)Rte_Write_VeCITR_b_HU_Sch2_Do_Not_Repeat_Value
        (LeCITR_b_HU_Sch2_Do_Not_Repeat);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_HU_Sch2_Do_Not_Repeat' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_HU_Sch2_Enbl(VAR(boolean, AUTOMATIC)
    LeCITR_b_HU_Sch2_Enbl)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_HU_Sch2_Enbl' */
    /* Outport: '<Root>/VeCITR_b_HU_Sch2_Enbl' incorporates:
     *  SignalConversion generated from: '<S281>/VeCITR_b_HU_Sch2_Enbl'
     *  SignalConversion generated from: '<S281>/LeCITR_b_HU_Sch2_Enbl'
     */
    /* Gateway: PokeCITR_b_HU_Sch2_Enbl/PokeCITR_b_HU_Sch2_EnblChrt */
    /* During: PokeCITR_b_HU_Sch2_Enbl/PokeCITR_b_HU_Sch2_EnblChrt */
    /* Entry Internal: PokeCITR_b_HU_Sch2_Enbl/PokeCITR_b_HU_Sch2_EnblChrt */
    /* Transition: '<S875>:2' */
    (void)Rte_Write_VeCITR_b_HU_Sch2_Enbl_Value(LeCITR_b_HU_Sch2_Enbl);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_HU_Sch2_Enbl' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_HU_Sch2_Priority(VAR(boolean, AUTOMATIC)
    LeCITR_b_HU_Sch2_Priority)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_HU_Sch2_Priority' */
    /* Outport: '<Root>/VeCITR_b_HU_Sch2_Priority' incorporates:
     *  SignalConversion generated from: '<S282>/VeCITR_b_HU_Sch2_Priority'
     *  SignalConversion generated from: '<S282>/LeCITR_b_HU_Sch2_Priority'
     */
    /* Gateway: PokeCITR_b_HU_Sch2_Priority/PokeCITR_b_HU_Sch2_PriorityChrt */
    /* During: PokeCITR_b_HU_Sch2_Priority/PokeCITR_b_HU_Sch2_PriorityChrt */
    /* Entry Internal: PokeCITR_b_HU_Sch2_Priority/PokeCITR_b_HU_Sch2_PriorityChrt */
    /* Transition: '<S876>:2' */
    (void)Rte_Write_VeCITR_b_HU_Sch2_Priority_Value(LeCITR_b_HU_Sch2_Priority);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_HU_Sch2_Priority' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_HU_Sch2_Submit(VAR(boolean, AUTOMATIC)
    LeCITR_b_HU_Sch2_Submit)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_HU_Sch2_Submit' */
    /* Outport: '<Root>/VeCITR_b_HU_Sch2_Submit' incorporates:
     *  SignalConversion generated from: '<S283>/VeCITR_b_HU_Sch2_Submit'
     *  SignalConversion generated from: '<S283>/LeCITR_b_HU_Sch2_Submit'
     */
    /* Gateway: PokeCITR_b_HU_Sch2_Submit/PokeCITR_b_HU_Sch2_SubmitChrt */
    /* During: PokeCITR_b_HU_Sch2_Submit/PokeCITR_b_HU_Sch2_SubmitChrt */
    /* Entry Internal: PokeCITR_b_HU_Sch2_Submit/PokeCITR_b_HU_Sch2_SubmitChrt */
    /* Transition: '<S877>:2' */
    (void)Rte_Write_VeCITR_b_HU_Sch2_Submit_Value(LeCITR_b_HU_Sch2_Submit);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_HU_Sch2_Submit' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_HU_Sch3_ChargeUntilFull(VAR(boolean, AUTOMATIC)
    LeCITR_b_HU_Sch3_ChargeUntilFull)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_HU_Sch3_ChargeUntilFull' */
    /* Outport: '<Root>/VeCITR_b_HU_Sch3_ChargeUntilFull' incorporates:
     *  SignalConversion generated from: '<S284>/VeCITR_b_HU_Sch3_ChargeUntilFull'
     *  SignalConversion generated from: '<S284>/LeCITR_b_HU_Sch3_ChargeUntilFull'
     */
    /* Gateway: PokeCITR_b_HU_Sch3_ChargeUntilFull/PokeCITR_b_HU_Sch3_ChargeUntilFullChrt */
    /* During: PokeCITR_b_HU_Sch3_ChargeUntilFull/PokeCITR_b_HU_Sch3_ChargeUntilFullChrt */
    /* Entry Internal: PokeCITR_b_HU_Sch3_ChargeUntilFull/PokeCITR_b_HU_Sch3_ChargeUntilFullChrt */
    /* Transition: '<S878>:2' */
    (void)Rte_Write_VeCITR_b_HU_Sch3_ChargeUntilFull_Value
        (LeCITR_b_HU_Sch3_ChargeUntilFull);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_HU_Sch3_ChargeUntilFull' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_HU_Sch3_Do_Not_Repeat(VAR(boolean, AUTOMATIC)
    LeCITR_b_HU_Sch3_Do_Not_Repeat)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_HU_Sch3_Do_Not_Repeat' */
    /* Outport: '<Root>/VeCITR_b_HU_Sch3_Do_Not_Repeat' incorporates:
     *  SignalConversion generated from: '<S285>/VeCITR_b_HU_Sch3_Do_Not_Repeat'
     *  SignalConversion generated from: '<S285>/LeCITR_b_HU_Sch3_Do_Not_Repeat'
     */
    /* Gateway: PokeCITR_b_HU_Sch3_Do_Not_Repeat/PokeCITR_b_HU_Sch3_Do_Not_RepeatChrt */
    /* During: PokeCITR_b_HU_Sch3_Do_Not_Repeat/PokeCITR_b_HU_Sch3_Do_Not_RepeatChrt */
    /* Entry Internal: PokeCITR_b_HU_Sch3_Do_Not_Repeat/PokeCITR_b_HU_Sch3_Do_Not_RepeatChrt */
    /* Transition: '<S879>:2' */
    (void)Rte_Write_VeCITR_b_HU_Sch3_Do_Not_Repeat_Value
        (LeCITR_b_HU_Sch3_Do_Not_Repeat);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_HU_Sch3_Do_Not_Repeat' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_HU_Sch3_Enbl(VAR(boolean, AUTOMATIC)
    LeCITR_b_HU_Sch3_Enbl)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_HU_Sch3_Enbl' */
    /* Outport: '<Root>/VeCITR_b_HU_Sch3_Enbl' incorporates:
     *  SignalConversion generated from: '<S286>/VeCITR_b_HU_Sch3_Enbl'
     *  SignalConversion generated from: '<S286>/LeCITR_b_HU_Sch3_Enbl'
     */
    /* Gateway: PokeCITR_b_HU_Sch3_Enbl/PokeCITR_b_HU_Sch3_EnblChrt */
    /* During: PokeCITR_b_HU_Sch3_Enbl/PokeCITR_b_HU_Sch3_EnblChrt */
    /* Entry Internal: PokeCITR_b_HU_Sch3_Enbl/PokeCITR_b_HU_Sch3_EnblChrt */
    /* Transition: '<S880>:2' */
    (void)Rte_Write_VeCITR_b_HU_Sch3_Enbl_Value(LeCITR_b_HU_Sch3_Enbl);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_HU_Sch3_Enbl' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_HU_Sch3_Priority(VAR(boolean, AUTOMATIC)
    LeCITR_b_HU_Sch3_Priority)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_HU_Sch3_Priority' */
    /* Outport: '<Root>/VeCITR_b_HU_Sch3_Priority' incorporates:
     *  SignalConversion generated from: '<S287>/VeCITR_b_HU_Sch3_Priority'
     *  SignalConversion generated from: '<S287>/LeCITR_b_HU_Sch3_Priority'
     */
    /* Gateway: PokeCITR_b_HU_Sch3_Priority/PokeCITR_b_HU_Sch3_PriorityChrt */
    /* During: PokeCITR_b_HU_Sch3_Priority/PokeCITR_b_HU_Sch3_PriorityChrt */
    /* Entry Internal: PokeCITR_b_HU_Sch3_Priority/PokeCITR_b_HU_Sch3_PriorityChrt */
    /* Transition: '<S881>:2' */
    (void)Rte_Write_VeCITR_b_HU_Sch3_Priority_Value(LeCITR_b_HU_Sch3_Priority);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_HU_Sch3_Priority' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_HU_Sch3_Submit(VAR(boolean, AUTOMATIC)
    LeCITR_b_HU_Sch3_Submit)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_HU_Sch3_Submit' */
    /* Outport: '<Root>/VeCITR_b_HU_Sch3_Submit' incorporates:
     *  SignalConversion generated from: '<S288>/VeCITR_b_HU_Sch3_Submit'
     *  SignalConversion generated from: '<S288>/LeCITR_b_HU_Sch3_Submit'
     */
    /* Gateway: PokeCITR_b_HU_Sch3_Submit/PokeCITR_b_HU_Sch3_SubmitChrt */
    /* During: PokeCITR_b_HU_Sch3_Submit/PokeCITR_b_HU_Sch3_SubmitChrt */
    /* Entry Internal: PokeCITR_b_HU_Sch3_Submit/PokeCITR_b_HU_Sch3_SubmitChrt */
    /* Transition: '<S882>:2' */
    (void)Rte_Write_VeCITR_b_HU_Sch3_Submit_Value(LeCITR_b_HU_Sch3_Submit);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_HU_Sch3_Submit' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_HU_Sch4_Enbl(VAR(boolean, AUTOMATIC)
    LeCITR_b_HU_Sch4_Enbl)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_HU_Sch4_Enbl' */
    /* Outport: '<Root>/VeCITR_b_HU_Sch4_Enbl' incorporates:
     *  SignalConversion generated from: '<S289>/VeCITR_b_HU_Sch4_Enbl'
     *  SignalConversion generated from: '<S289>/LeCITR_b_HU_Sch4_Enbl'
     */
    /* Gateway: PokeCITR_b_HU_Sch4_Enbl/PokeCITR_b_HU_Sch4_EnblChrt */
    /* During: PokeCITR_b_HU_Sch4_Enbl/PokeCITR_b_HU_Sch4_EnblChrt */
    /* Entry Internal: PokeCITR_b_HU_Sch4_Enbl/PokeCITR_b_HU_Sch4_EnblChrt */
    /* Transition: '<S883>:2' */
    (void)Rte_Write_VeCITR_b_HU_Sch4_Enbl_Value(LeCITR_b_HU_Sch4_Enbl);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_HU_Sch4_Enbl' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_HU_Sch4_Submit(VAR(boolean, AUTOMATIC)
    LeCITR_b_HU_Sch4_Submit)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_HU_Sch4_Submit' */
    /* Outport: '<Root>/VeCITR_b_HU_Sch4_Submit' incorporates:
     *  SignalConversion generated from: '<S290>/VeCITR_b_HU_Sch4_Submit'
     *  SignalConversion generated from: '<S290>/LeCITR_b_HU_Sch4_Submit'
     */
    /* Gateway: PokeCITR_b_HU_Sch4_Submit/PokeCITR_b_HU_Sch4_SubmitChrt */
    /* During: PokeCITR_b_HU_Sch4_Submit/PokeCITR_b_HU_Sch4_SubmitChrt */
    /* Entry Internal: PokeCITR_b_HU_Sch4_Submit/PokeCITR_b_HU_Sch4_SubmitChrt */
    /* Transition: '<S884>:2' */
    (void)Rte_Write_VeCITR_b_HU_Sch4_Submit_Value(LeCITR_b_HU_Sch4_Submit);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_HU_Sch4_Submit' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_Icon1_FailSts(VAR(boolean, AUTOMATIC)
    LeCITR_b_Icon1_FailSts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_Icon1_FailSts' */
    /* Outport: '<Root>/VeCITR_b_CPIM_Icon1_FailSts' incorporates:
     *  SignalConversion generated from: '<S291>/VeCITR_b_Icon1_FailSts'
     *  SignalConversion generated from: '<S291>/LeCITR_b_Icon1_FailSts'
     */
    /* Gateway: PokeCITR_b_Icon1_FailSts/PokeCITR_b_Icon1_FailStsChrt */
    /* During: PokeCITR_b_Icon1_FailSts/PokeCITR_b_Icon1_FailStsChrt */
    /* Entry Internal: PokeCITR_b_Icon1_FailSts/PokeCITR_b_Icon1_FailStsChrt */
    /* Transition: '<S885>:2' */
    (void)Rte_Write_VeCITR_b_CPIM_Icon1_FailSts_Value(LeCITR_b_Icon1_FailSts);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_Icon1_FailSts' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_Icon2_FailSts(VAR(boolean, AUTOMATIC)
    LeCITR_b_Icon2_FailSts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_Icon2_FailSts' */
    /* Outport: '<Root>/VeCITR_b_CPIM_Icon2_FailSts' incorporates:
     *  SignalConversion generated from: '<S292>/VeCITR_b_Icon2_FailSts'
     *  SignalConversion generated from: '<S292>/LeCITR_b_Icon2_FailSts'
     */
    /* Gateway: PokeCITR_b_Icon2_FailSts/PokeCITR_b_Icon2_FailStsChrt */
    /* During: PokeCITR_b_Icon2_FailSts/PokeCITR_b_Icon2_FailStsChrt */
    /* Entry Internal: PokeCITR_b_Icon2_FailSts/PokeCITR_b_Icon2_FailStsChrt */
    /* Transition: '<S886>:2' */
    (void)Rte_Write_VeCITR_b_CPIM_Icon2_FailSts_Value(LeCITR_b_Icon2_FailSts);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_Icon2_FailSts' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_PP2ACPresentSens1(VAR(boolean, AUTOMATIC)
    LeCITR_b_PP2ACPresentSens1, VAR(boolean, AUTOMATIC)
    LeCITR_b_PP2ACPresentSens1FA)
{
    UNUSED_PARAMETER(LeCITR_b_PP2ACPresentSens1);

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_PP2ACPresentSens1' */
    /* Chart: '<S293>/PokeCITR_b_PP2ACPresentSens1Chrt' incorporates:
     *  SignalConversion generated from: '<S293>/LeCITR_e_FOTA_Installation_Status1'
     */
    /* Gateway: PokeCITR_b_PP2ACPresentSens1/PokeCITR_b_PP2ACPresentSens1Chrt */
    /* During: PokeCITR_b_PP2ACPresentSens1/PokeCITR_b_PP2ACPresentSens1Chrt */
    /* Entry Internal: PokeCITR_b_PP2ACPresentSens1/PokeCITR_b_PP2ACPresentSens1Chrt */
    /* Transition: '<S887>:2' */
    if (!LeCITR_b_PP2ACPresentSens1FA)
    {
        /* Transition: '<S887>:20' */
        /* Transition: '<S887>:23' */
        CITR_ac_B.LeCITR_b_PP2ACPresentSens1_out = false;

        /* Transition: '<S887>:25' */
    }
    else
    {
        /* Transition: '<S887>:24' */
        CITR_ac_B.LeCITR_b_PP2ACPresentSens1FA_out = true;
    }

    /* End of Chart: '<S293>/PokeCITR_b_PP2ACPresentSens1Chrt' */

    /* Outport: '<Root>/VeCITR_b_PP2ACPresentSens1' incorporates:
     *  SignalConversion generated from: '<S293>/VeCITR_b_PP2ACPresentSens1'
     */
    (void)Rte_Write_VeCITR_b_PP2ACPresentSens1_Value
        (CITR_ac_B.LeCITR_b_PP2ACPresentSens1_out);

    /* Outport: '<Root>/VeCITR_b_PP2ACPresentSens1FA' incorporates:
     *  SignalConversion generated from: '<S293>/VeCITR_b_PP2ACPresentSens1FA'
     */
    (void)Rte_Write_VeCITR_b_PP2ACPresentSens1FA_Value
        (CITR_ac_B.LeCITR_b_PP2ACPresentSens1FA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_PP2ACPresentSens1' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_PP2ACPresentSens2(VAR(boolean, AUTOMATIC)
    LeCITR_b_PP2ACPresentSens2, VAR(boolean, AUTOMATIC)
    LeCITR_b_PP2ACPresentSens2FA)
{
    UNUSED_PARAMETER(LeCITR_b_PP2ACPresentSens2);

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_PP2ACPresentSens2' */
    /* Chart: '<S294>/PokeCITR_b_PP2ACPresentSens2Chrt' incorporates:
     *  SignalConversion generated from: '<S294>/LeCITR_e_FOTA_Installation_Status1'
     */
    /* Gateway: PokeCITR_b_PP2ACPresentSens2/PokeCITR_b_PP2ACPresentSens2Chrt */
    /* During: PokeCITR_b_PP2ACPresentSens2/PokeCITR_b_PP2ACPresentSens2Chrt */
    /* Entry Internal: PokeCITR_b_PP2ACPresentSens2/PokeCITR_b_PP2ACPresentSens2Chrt */
    /* Transition: '<S888>:2' */
    if (!LeCITR_b_PP2ACPresentSens2FA)
    {
        /* Transition: '<S888>:20' */
        /* Transition: '<S888>:23' */
        CITR_ac_B.LeCITR_b_PP2ACPresentSens2_out = false;

        /* Transition: '<S888>:25' */
    }
    else
    {
        /* Transition: '<S888>:24' */
        CITR_ac_B.LeCITR_b_PP2ACPresentSens2FA_out = true;
    }

    /* End of Chart: '<S294>/PokeCITR_b_PP2ACPresentSens2Chrt' */

    /* Outport: '<Root>/VeCITR_b_PP2ACPresentSens2' incorporates:
     *  SignalConversion generated from: '<S294>/VeCITR_b_PP2ACPresentSens2'
     */
    (void)Rte_Write_VeCITR_b_PP2ACPresentSens2_Value
        (CITR_ac_B.LeCITR_b_PP2ACPresentSens2_out);

    /* Outport: '<Root>/VeCITR_b_PP2ACPresentSens2FA' incorporates:
     *  SignalConversion generated from: '<S294>/VeCITR_b_PP2ACPresentSens2FA'
     */
    (void)Rte_Write_VeCITR_b_PP2ACPresentSens2FA_Value
        (CITR_ac_B.LeCITR_b_PP2ACPresentSens2FA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_PP2ACPresentSens2' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_PP2ButtonSts(VAR(boolean, AUTOMATIC)
    LeCITR_b_PP2ButtonSts, VAR(boolean, AUTOMATIC) LeCITR_b_PP2ButtonStsFA)
{
    boolean rtb_LeCITR_b_PP2ButtonStsFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_PP2ButtonSts' */
    /* Chart: '<S295>/PokeCITR_b_PP2ButtonStsChrt' incorporates:
     *  SignalConversion generated from: '<S295>/LeCITR_e_FOTA_Installation_Status1'
     *  SignalConversion generated from: '<S295>/LeCITR_e_FOTA_Installation_Status'
     */
    /* Gateway: PokeCITR_b_PP2ButtonSts/PokeCITR_b_PP2ButtonStsChrt */
    /* During: PokeCITR_b_PP2ButtonSts/PokeCITR_b_PP2ButtonStsChrt */
    /* Entry Internal: PokeCITR_b_PP2ButtonSts/PokeCITR_b_PP2ButtonStsChrt */
    /* Transition: '<S889>:2' */
    if (!LeCITR_b_PP2ButtonStsFA)
    {
        /* Transition: '<S889>:20' */
        /* Transition: '<S889>:23' */
        CITR_ac_B.LeCITR_b_PP2ButtonSts_out = LeCITR_b_PP2ButtonSts;
        rtb_LeCITR_b_PP2ButtonStsFA_out = false;

        /* Transition: '<S889>:25' */
    }
    else
    {
        /* Transition: '<S889>:24' */
        rtb_LeCITR_b_PP2ButtonStsFA_out = true;
    }

    /* End of Chart: '<S295>/PokeCITR_b_PP2ButtonStsChrt' */

    /* Outport: '<Root>/VeCITR_b_PP2ButtonSts' incorporates:
     *  SignalConversion generated from: '<S295>/VeCITR_b_PP2ButtonSts'
     */
    (void)Rte_Write_VeCITR_b_PP2ButtonSts_Value
        (CITR_ac_B.LeCITR_b_PP2ButtonSts_out);

    /* Outport: '<Root>/VeCITR_b_PP2ButtonStsFA' incorporates:
     *  SignalConversion generated from: '<S295>/VeCITR_b_PP2ButtonStsFA'
     */
    (void)Rte_Write_VeCITR_b_PP2ButtonStsFA_Value
        (rtb_LeCITR_b_PP2ButtonStsFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_PP2ButtonSts' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_PP2LidSwitchSts240(VAR(boolean, AUTOMATIC)
    LeCITR_b_PP2LidSwitchSts240, VAR(boolean, AUTOMATIC)
    LeCITR_b_PP2LidSwitchSts240FA)
{
    boolean rtb_LeCITR_b_PP2LidSwitchSts240FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_PP2LidSwitchSts' */
    /* Chart: '<S296>/PokeCITR_b_PP2LidSwitchSts240Chrt' incorporates:
     *  SignalConversion generated from: '<S296>/LeCITR_e_FOTA_Installation_Status1'
     *  SignalConversion generated from: '<S296>/LeCITR_e_FOTA_Installation_Status'
     */
    /* Gateway: PokeCITR_b_PP2LidSwitchSts/PokeCITR_b_PP2LidSwitchSts240Chrt */
    /* During: PokeCITR_b_PP2LidSwitchSts/PokeCITR_b_PP2LidSwitchSts240Chrt */
    /* Entry Internal: PokeCITR_b_PP2LidSwitchSts/PokeCITR_b_PP2LidSwitchSts240Chrt */
    /* Transition: '<S890>:2' */
    if (!LeCITR_b_PP2LidSwitchSts240FA)
    {
        /* Transition: '<S890>:20' */
        /* Transition: '<S890>:23' */
        CITR_ac_B.LeCITR_b_PP2LidSwitchSts240_out = LeCITR_b_PP2LidSwitchSts240;
        rtb_LeCITR_b_PP2LidSwitchSts240FA_out = false;

        /* Transition: '<S890>:25' */
    }
    else
    {
        /* Transition: '<S890>:24' */
        rtb_LeCITR_b_PP2LidSwitchSts240FA_out = true;
    }

    /* End of Chart: '<S296>/PokeCITR_b_PP2LidSwitchSts240Chrt' */

    /* Outport: '<Root>/VeCITR_b_PP2LidSwitchSts240' incorporates:
     *  SignalConversion generated from: '<S296>/VeCITR_b_PP2LidSwitchSts240'
     */
    (void)Rte_Write_VeCITR_b_PP2LidSwitchSts240_Value
        (CITR_ac_B.LeCITR_b_PP2LidSwitchSts240_out);

    /* Outport: '<Root>/VeCITR_b_PP2LidSwitchSts240FA' incorporates:
     *  SignalConversion generated from: '<S296>/VeCITR_b_PP2LidSwitchSts240FA'
     */
    (void)Rte_Write_VeCITR_b_PP2LidSwitchSts240FA_Value
        (rtb_LeCITR_b_PP2LidSwitchSts240FA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_PP2LidSwitchSts' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_PP2LidSwitchSts120A(VAR(boolean, AUTOMATIC)
    LeCITR_b_PP2LidSwitchSts120A, VAR(boolean, AUTOMATIC)
    LeCITR_b_PP2LidSwitchSts120AFA)
{
    boolean rtb_LeCITR_b_PP2LidSwitchSts120AFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_PP2LidSwitchSts120A' */
    /* Chart: '<S297>/PokeCITR_b_PP2LidSwitchSts120AChrt' incorporates:
     *  SignalConversion generated from: '<S297>/LeCITR_e_FOTA_Installation_Status1'
     *  SignalConversion generated from: '<S297>/LeCITR_e_FOTA_Installation_Status'
     */
    /* Gateway: PokeCITR_b_PP2LidSwitchSts120A/PokeCITR_b_PP2LidSwitchSts120AChrt */
    /* During: PokeCITR_b_PP2LidSwitchSts120A/PokeCITR_b_PP2LidSwitchSts120AChrt */
    /* Entry Internal: PokeCITR_b_PP2LidSwitchSts120A/PokeCITR_b_PP2LidSwitchSts120AChrt */
    /* Transition: '<S891>:2' */
    if (!LeCITR_b_PP2LidSwitchSts120AFA)
    {
        /* Transition: '<S891>:20' */
        /* Transition: '<S891>:23' */
        CITR_ac_B.LeCITR_b_PP2LidSwitchSts120A_out =
            LeCITR_b_PP2LidSwitchSts120A;
        rtb_LeCITR_b_PP2LidSwitchSts120AFA_out = false;

        /* Transition: '<S891>:25' */
    }
    else
    {
        /* Transition: '<S891>:24' */
        rtb_LeCITR_b_PP2LidSwitchSts120AFA_out = true;
    }

    /* End of Chart: '<S297>/PokeCITR_b_PP2LidSwitchSts120AChrt' */

    /* Outport: '<Root>/VeCITR_b_PP2LidSwitchSts120A' incorporates:
     *  SignalConversion generated from: '<S297>/VeCITR_b_PP2LidSwitchSts120A'
     */
    (void)Rte_Write_VeCITR_b_PP2LidSwitchSts120A_Value
        (CITR_ac_B.LeCITR_b_PP2LidSwitchSts120A_out);

    /* Outport: '<Root>/VeCITR_b_PP2LidSwitchSts120AFA' incorporates:
     *  SignalConversion generated from: '<S297>/VeCITR_b_PP2LidSwitchSts120AFA'
     */
    (void)Rte_Write_VeCITR_b_PP2LidSwitchSts120AFA_Value
        (rtb_LeCITR_b_PP2LidSwitchSts120AFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_PP2LidSwitchSts120A' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_PP2LidSwitchSts120B(VAR(boolean, AUTOMATIC)
    LeCITR_b_PP2LidSwitchSts120B, VAR(boolean, AUTOMATIC)
    LeCITR_b_PP2LidSwitchSts120BFA)
{
    boolean rtb_LeCITR_b_PP2LidSwitchSts120BFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_PP2LidSwitchSts120B' */
    /* Chart: '<S298>/PokeCITR_b_PP2LidSwitchSts120BChrt' incorporates:
     *  SignalConversion generated from: '<S298>/LeCITR_e_FOTA_Installation_Status1'
     *  SignalConversion generated from: '<S298>/LeCITR_e_FOTA_Installation_Status'
     */
    /* Gateway: PokeCITR_b_PP2LidSwitchSts120B/PokeCITR_b_PP2LidSwitchSts120BChrt */
    /* During: PokeCITR_b_PP2LidSwitchSts120B/PokeCITR_b_PP2LidSwitchSts120BChrt */
    /* Entry Internal: PokeCITR_b_PP2LidSwitchSts120B/PokeCITR_b_PP2LidSwitchSts120BChrt */
    /* Transition: '<S892>:2' */
    if (!LeCITR_b_PP2LidSwitchSts120BFA)
    {
        /* Transition: '<S892>:20' */
        /* Transition: '<S892>:23' */
        CITR_ac_B.LeCITR_b_PP2LidSwitchSts120B_out =
            LeCITR_b_PP2LidSwitchSts120B;
        rtb_LeCITR_b_PP2LidSwitchSts120BFA_out = false;

        /* Transition: '<S892>:25' */
    }
    else
    {
        /* Transition: '<S892>:24' */
        rtb_LeCITR_b_PP2LidSwitchSts120BFA_out = true;
    }

    /* End of Chart: '<S298>/PokeCITR_b_PP2LidSwitchSts120BChrt' */

    /* Outport: '<Root>/VeCITR_b_PP2LidSwitchSts120B' incorporates:
     *  SignalConversion generated from: '<S298>/VeCITR_b_PP2LidSwitchSts120B'
     */
    (void)Rte_Write_VeCITR_b_PP2LidSwitchSts120B_Value
        (CITR_ac_B.LeCITR_b_PP2LidSwitchSts120B_out);

    /* Outport: '<Root>/VeCITR_b_PP2LidSwitchSts120BFA' incorporates:
     *  SignalConversion generated from: '<S298>/VeCITR_b_PP2LidSwitchSts120BFA'
     */
    (void)Rte_Write_VeCITR_b_PP2LidSwitchSts120BFA_Value
        (rtb_LeCITR_b_PP2LidSwitchSts120BFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_PP2LidSwitchSts120B' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_PP2_Gnd_Fault_Det(VAR(boolean, AUTOMATIC)
    LeCITR_b_PP2_Gnd_Fault_Det, VAR(boolean, AUTOMATIC)
    LeCITR_b_PP2_Gnd_Fault_Det_FA)
{
    boolean rtb_LeCITR_b_PP2_Gnd_Fault_Det_FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_PP2_Gnd_Fault_Det' */
    /* Chart: '<S299>/PokeCITR_b_PP2_Gnd_Fault_DetChrt' incorporates:
     *  SignalConversion generated from: '<S299>/LeCITR_b_SOC_Max_Lev1'
     *  SignalConversion generated from: '<S299>/LeCITR_b_SOC_Max_Lev'
     */
    /* Gateway: PokeCITR_b_PP2_Gnd_Fault_Det/PokeCITR_b_PP2_Gnd_Fault_DetChrt */
    /* During: PokeCITR_b_PP2_Gnd_Fault_Det/PokeCITR_b_PP2_Gnd_Fault_DetChrt */
    /* Entry Internal: PokeCITR_b_PP2_Gnd_Fault_Det/PokeCITR_b_PP2_Gnd_Fault_DetChrt */
    /* Transition: '<S893>:2' */
    if (!LeCITR_b_PP2_Gnd_Fault_Det_FA)
    {
        /* Transition: '<S893>:27' */
        /* Transition: '<S893>:28' */
        CITR_ac_B.LeCITR_b_PP2_Gnd_Fault_Det_out = LeCITR_b_PP2_Gnd_Fault_Det;
        rtb_LeCITR_b_PP2_Gnd_Fault_Det_FA_out = false;
    }
    else
    {
        /* Transition: '<S893>:29' */
        rtb_LeCITR_b_PP2_Gnd_Fault_Det_FA_out = true;

        /* Transition: '<S893>:30' */
    }

    /* End of Chart: '<S299>/PokeCITR_b_PP2_Gnd_Fault_DetChrt' */

    /* Outport: '<Root>/VeCITR_b_PP2_Gnd_Fault_Detected' incorporates:
     *  SignalConversion generated from: '<S299>/VeCITR_b_PP2_Gnd_Fault_Det'
     */
    (void)Rte_Write_VeCITR_b_PP2_Gnd_Fault_Detected_Value
        (CITR_ac_B.LeCITR_b_PP2_Gnd_Fault_Det_out);

    /* Outport: '<Root>/VeCITR_b_PP2_Gnd_Fault_Detected_FA' incorporates:
     *  SignalConversion generated from: '<S299>/VeCITR_b_PP2_Gnd_Fault_Det_FA'
     */
    (void)Rte_Write_VeCITR_b_PP2_Gnd_Fault_Detected_FA_Value
        (rtb_LeCITR_b_PP2_Gnd_Fault_Det_FA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_PP2_Gnd_Fault_Det' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_PP2_LIN_Cksm_Err(VAR(boolean, AUTOMATIC)
    LeCITR_b_PP2_LIN_Cksm_Err, VAR(boolean, AUTOMATIC)
    LeCITR_b_PP2_LIN_Cksm_Err_FA)
{
    boolean rtb_LeCITR_b_PP2_LIN_Cksm_Err_FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_PP2_LIN_Cksm_Err' */
    /* Chart: '<S300>/PokeCITR_b_PP2_LIN_Cksm_ErrChrt' incorporates:
     *  SignalConversion generated from: '<S300>/LeCITR_b_SOC_Max_Lev1'
     *  SignalConversion generated from: '<S300>/LeCITR_b_SOC_Max_Lev'
     */
    /* Gateway: PokeCITR_b_PP2_LIN_Cksm_Err/PokeCITR_b_PP2_LIN_Cksm_ErrChrt */
    /* During: PokeCITR_b_PP2_LIN_Cksm_Err/PokeCITR_b_PP2_LIN_Cksm_ErrChrt */
    /* Entry Internal: PokeCITR_b_PP2_LIN_Cksm_Err/PokeCITR_b_PP2_LIN_Cksm_ErrChrt */
    /* Transition: '<S894>:2' */
    if (!LeCITR_b_PP2_LIN_Cksm_Err_FA)
    {
        /* Transition: '<S894>:27' */
        /* Transition: '<S894>:28' */
        CITR_ac_B.LeCITR_b_PP2_LIN_Cksm_Err_out = LeCITR_b_PP2_LIN_Cksm_Err;
        rtb_LeCITR_b_PP2_LIN_Cksm_Err_FA_out = false;
    }
    else
    {
        /* Transition: '<S894>:29' */
        rtb_LeCITR_b_PP2_LIN_Cksm_Err_FA_out = true;

        /* Transition: '<S894>:30' */
    }

    /* End of Chart: '<S300>/PokeCITR_b_PP2_LIN_Cksm_ErrChrt' */

    /* Outport: '<Root>/VeCITR_b_PP2_LIN_Checksum_Error' incorporates:
     *  SignalConversion generated from: '<S300>/VeCITR_b_PP2_LIN_Cksm_Err'
     */
    (void)Rte_Write_VeCITR_b_PP2_LIN_Checksum_Error_Value
        (CITR_ac_B.LeCITR_b_PP2_LIN_Cksm_Err_out);

    /* Outport: '<Root>/VeCITR_b_PP2_LIN_Checksum_Error_FA' incorporates:
     *  SignalConversion generated from: '<S300>/VeCITR_b_PP2_LIN_Cksm_Err_FA'
     */
    (void)Rte_Write_VeCITR_b_PP2_LIN_Checksum_Error_FA_Value
        (rtb_LeCITR_b_PP2_LIN_Cksm_Err_FA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_PP2_LIN_Cksm_Err' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_PP2_LIN_Data_Err(VAR(boolean, AUTOMATIC)
    LeCITR_b_PP2_LIN_Data_Err, VAR(boolean, AUTOMATIC)
    LeCITR_b_PP2_LIN_Data_Err_FA)
{
    boolean rtb_LeCITR_b_PP2_LIN_Data_Err_FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_PP2_LIN_Data_Err' */
    /* Chart: '<S301>/PokeCITR_b_PP2_LIN_Data_ErrChrt' incorporates:
     *  SignalConversion generated from: '<S301>/LeCITR_b_SOC_Max_Lev1'
     *  SignalConversion generated from: '<S301>/LeCITR_b_SOC_Max_Lev'
     */
    /* Gateway: PokeCITR_b_PP2_LIN_Data_Err/PokeCITR_b_PP2_LIN_Data_ErrChrt */
    /* During: PokeCITR_b_PP2_LIN_Data_Err/PokeCITR_b_PP2_LIN_Data_ErrChrt */
    /* Entry Internal: PokeCITR_b_PP2_LIN_Data_Err/PokeCITR_b_PP2_LIN_Data_ErrChrt */
    /* Transition: '<S895>:2' */
    if (!LeCITR_b_PP2_LIN_Data_Err_FA)
    {
        /* Transition: '<S895>:27' */
        /* Transition: '<S895>:28' */
        CITR_ac_B.LeCITR_b_PP2_LIN_Data_Err_out = LeCITR_b_PP2_LIN_Data_Err;
        rtb_LeCITR_b_PP2_LIN_Data_Err_FA_out = false;
    }
    else
    {
        /* Transition: '<S895>:29' */
        rtb_LeCITR_b_PP2_LIN_Data_Err_FA_out = true;

        /* Transition: '<S895>:30' */
    }

    /* End of Chart: '<S301>/PokeCITR_b_PP2_LIN_Data_ErrChrt' */

    /* Outport: '<Root>/VeCITR_b_PP2_LIN_Data_Error' incorporates:
     *  SignalConversion generated from: '<S301>/VeCITR_b_PP2_LIN_Data_Err'
     */
    (void)Rte_Write_VeCITR_b_PP2_LIN_Data_Error_Value
        (CITR_ac_B.LeCITR_b_PP2_LIN_Data_Err_out);

    /* Outport: '<Root>/VeCITR_b_PP2_LIN_Data_Error_FA' incorporates:
     *  SignalConversion generated from: '<S301>/VeCITR_b_PP2_LIN_Data_Err_FA'
     */
    (void)Rte_Write_VeCITR_b_PP2_LIN_Data_Error_FA_Value
        (rtb_LeCITR_b_PP2_LIN_Data_Err_FA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_PP2_LIN_Data_Err' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_PP2_LIN_Parity_Err(VAR(boolean, AUTOMATIC)
    LeCITR_b_PP2_LIN_Parity_Err, VAR(boolean, AUTOMATIC)
    LeCITR_b_PP2_LIN_Parity_Err_FA)
{
    boolean rtb_LeCITR_b_PP2_LIN_Parity_Err_FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_PP2_LIN_Parity_Err' */
    /* Chart: '<S302>/PokeCITR_b_PP2_LIN_Parity_ErrChrt' incorporates:
     *  SignalConversion generated from: '<S302>/LeCITR_b_SOC_Max_Lev1'
     *  SignalConversion generated from: '<S302>/LeCITR_b_SOC_Max_Lev'
     */
    /* Gateway: PokeCITR_b_PP2_LIN_Parity_Err/PokeCITR_b_PP2_LIN_Parity_ErrChrt */
    /* During: PokeCITR_b_PP2_LIN_Parity_Err/PokeCITR_b_PP2_LIN_Parity_ErrChrt */
    /* Entry Internal: PokeCITR_b_PP2_LIN_Parity_Err/PokeCITR_b_PP2_LIN_Parity_ErrChrt */
    /* Transition: '<S896>:2' */
    if (!LeCITR_b_PP2_LIN_Parity_Err_FA)
    {
        /* Transition: '<S896>:27' */
        /* Transition: '<S896>:28' */
        CITR_ac_B.LeCITR_b_PP2_LIN_Parity_Err_out = LeCITR_b_PP2_LIN_Parity_Err;
        rtb_LeCITR_b_PP2_LIN_Parity_Err_FA_out = false;
    }
    else
    {
        /* Transition: '<S896>:29' */
        rtb_LeCITR_b_PP2_LIN_Parity_Err_FA_out = true;

        /* Transition: '<S896>:30' */
    }

    /* End of Chart: '<S302>/PokeCITR_b_PP2_LIN_Parity_ErrChrt' */

    /* Outport: '<Root>/VeCITR_b_PP2_LIN_Parity_Error' incorporates:
     *  SignalConversion generated from: '<S302>/VeCITR_b_PP2_LIN_Parity_Err'
     */
    (void)Rte_Write_VeCITR_b_PP2_LIN_Parity_Error_Value
        (CITR_ac_B.LeCITR_b_PP2_LIN_Parity_Err_out);

    /* Outport: '<Root>/VeCITR_b_PP2_LIN_Parity_Error_FA' incorporates:
     *  SignalConversion generated from: '<S302>/VeCITR_b_PP2_LIN_Parity_Err_FA'
     */
    (void)Rte_Write_VeCITR_b_PP2_LIN_Parity_Error_FA_Value
        (rtb_LeCITR_b_PP2_LIN_Parity_Err_FA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_PP2_LIN_Parity_Err' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_PPACPresentSens1(VAR(boolean, AUTOMATIC)
    LeCITR_b_PPACPresentSens1, VAR(boolean, AUTOMATIC)
    LeCITR_b_PPACPresentSens1FA)
{
    UNUSED_PARAMETER(LeCITR_b_PPACPresentSens1);

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_PPACPresentSens1' */
    /* Chart: '<S303>/PokeCITR_b_PPACPresentSens1Chrt' incorporates:
     *  SignalConversion generated from: '<S303>/LeCITR_e_FOTA_Installation_Status1'
     */
    /* Gateway: PokeCITR_b_PPACPresentSens1/PokeCITR_b_PPACPresentSens1Chrt */
    /* During: PokeCITR_b_PPACPresentSens1/PokeCITR_b_PPACPresentSens1Chrt */
    /* Entry Internal: PokeCITR_b_PPACPresentSens1/PokeCITR_b_PPACPresentSens1Chrt */
    /* Transition: '<S897>:2' */
    if (!LeCITR_b_PPACPresentSens1FA)
    {
        /* Transition: '<S897>:20' */
        /* Transition: '<S897>:23' */
        CITR_ac_B.LeCITR_b_PPACPresentSens1_out = false;

        /* Transition: '<S897>:25' */
    }
    else
    {
        /* Transition: '<S897>:24' */
        CITR_ac_B.LeCITR_b_PPACPresentSens1FA_out = true;
    }

    /* End of Chart: '<S303>/PokeCITR_b_PPACPresentSens1Chrt' */

    /* Outport: '<Root>/VeCITR_b_PPACPresentSens1' incorporates:
     *  SignalConversion generated from: '<S303>/VeCITR_b_PPACPresentSens1'
     */
    (void)Rte_Write_VeCITR_b_PPACPresentSens1_Value
        (CITR_ac_B.LeCITR_b_PPACPresentSens1_out);

    /* Outport: '<Root>/VeCITR_b_PPACPresentSens1FA' incorporates:
     *  SignalConversion generated from: '<S303>/VeCITR_b_PPACPresentSens1FA'
     */
    (void)Rte_Write_VeCITR_b_PPACPresentSens1FA_Value
        (CITR_ac_B.LeCITR_b_PPACPresentSens1FA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_PPACPresentSens1' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_PPACPresentSens2(VAR(boolean, AUTOMATIC)
    LeCITR_b_PPACPresentSens2, VAR(boolean, AUTOMATIC)
    LeCITR_b_PPACPresentSens2FA)
{
    UNUSED_PARAMETER(LeCITR_b_PPACPresentSens2);

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_PPACPresentSens2' */
    /* Chart: '<S304>/PokeCITR_b_PPACPresentSens2Chrt' incorporates:
     *  SignalConversion generated from: '<S304>/LeCITR_e_FOTA_Installation_Status1'
     */
    /* Gateway: PokeCITR_b_PPACPresentSens2/PokeCITR_b_PPACPresentSens2Chrt */
    /* During: PokeCITR_b_PPACPresentSens2/PokeCITR_b_PPACPresentSens2Chrt */
    /* Entry Internal: PokeCITR_b_PPACPresentSens2/PokeCITR_b_PPACPresentSens2Chrt */
    /* Transition: '<S898>:2' */
    if (!LeCITR_b_PPACPresentSens2FA)
    {
        /* Transition: '<S898>:20' */
        /* Transition: '<S898>:23' */
        CITR_ac_B.LeCITR_b_PPACPresentSens2_out = false;

        /* Transition: '<S898>:25' */
    }
    else
    {
        /* Transition: '<S898>:24' */
        CITR_ac_B.LeCITR_b_PPACPresentSens2FA_out = true;
    }

    /* End of Chart: '<S304>/PokeCITR_b_PPACPresentSens2Chrt' */

    /* Outport: '<Root>/VeCITR_b_PPACPresentSens2' incorporates:
     *  SignalConversion generated from: '<S304>/VeCITR_b_PPACPresentSens2'
     */
    (void)Rte_Write_VeCITR_b_PPACPresentSens2_Value
        (CITR_ac_B.LeCITR_b_PPACPresentSens2_out);

    /* Outport: '<Root>/VeCITR_b_PPACPresentSens2FA' incorporates:
     *  SignalConversion generated from: '<S304>/VeCITR_b_PPACPresentSens2FA'
     */
    (void)Rte_Write_VeCITR_b_PPACPresentSens2FA_Value
        (CITR_ac_B.LeCITR_b_PPACPresentSens2FA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_PPACPresentSens2' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_PPButtonSts(VAR(boolean, AUTOMATIC)
    LeCITR_b_PPButtonSts, VAR(boolean, AUTOMATIC) LeCITR_b_PPButtonStsFA)
{
    boolean rtb_LeCITR_b_PPButtonStsFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_PPButtonSts' */
    /* Chart: '<S305>/PokeCITR_b_PPButtonStsChrt' incorporates:
     *  SignalConversion generated from: '<S305>/LeCITR_e_FOTA_Installation_Status1'
     *  SignalConversion generated from: '<S305>/LeCITR_e_FOTA_Installation_Status'
     */
    /* Gateway: PokeCITR_b_PPButtonSts/PokeCITR_b_PPButtonStsChrt */
    /* During: PokeCITR_b_PPButtonSts/PokeCITR_b_PPButtonStsChrt */
    /* Entry Internal: PokeCITR_b_PPButtonSts/PokeCITR_b_PPButtonStsChrt */
    /* Transition: '<S899>:2' */
    if (!LeCITR_b_PPButtonStsFA)
    {
        /* Transition: '<S899>:20' */
        /* Transition: '<S899>:23' */
        CITR_ac_B.LeCITR_b_PPButtonSts_out = LeCITR_b_PPButtonSts;
        rtb_LeCITR_b_PPButtonStsFA_out = false;

        /* Transition: '<S899>:25' */
    }
    else
    {
        /* Transition: '<S899>:24' */
        rtb_LeCITR_b_PPButtonStsFA_out = true;
    }

    /* End of Chart: '<S305>/PokeCITR_b_PPButtonStsChrt' */

    /* Outport: '<Root>/VeCITR_b_PPButtonSts' incorporates:
     *  SignalConversion generated from: '<S305>/VeCITR_b_PPButtonSts'
     */
    (void)Rte_Write_VeCITR_b_PPButtonSts_Value
        (CITR_ac_B.LeCITR_b_PPButtonSts_out);

    /* Outport: '<Root>/VeCITR_b_PPButtonStsFA' incorporates:
     *  SignalConversion generated from: '<S305>/VeCITR_b_PPButtonStsFA'
     */
    (void)Rte_Write_VeCITR_b_PPButtonStsFA_Value(rtb_LeCITR_b_PPButtonStsFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_PPButtonSts' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_PPLidSwitchSts120A(VAR(boolean, AUTOMATIC)
    LeCITR_b_PPLidSwitchSts120A, VAR(boolean, AUTOMATIC)
    LeCITR_b_PPLidSwitchSts120AFA)
{
    boolean rtb_LeCITR_b_PPLidSwitchSts120AFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_PPLidSwitchSts120A' */
    /* Chart: '<S306>/PokeCITR_b_PPLidSwitchSts120AChrt' incorporates:
     *  SignalConversion generated from: '<S306>/LeCITR_e_FOTA_Installation_Status1'
     *  SignalConversion generated from: '<S306>/LeCITR_e_FOTA_Installation_Status'
     */
    /* Gateway: PokeCITR_b_PPLidSwitchSts120A/PokeCITR_b_PPLidSwitchSts120AChrt */
    /* During: PokeCITR_b_PPLidSwitchSts120A/PokeCITR_b_PPLidSwitchSts120AChrt */
    /* Entry Internal: PokeCITR_b_PPLidSwitchSts120A/PokeCITR_b_PPLidSwitchSts120AChrt */
    /* Transition: '<S900>:2' */
    if (!LeCITR_b_PPLidSwitchSts120AFA)
    {
        /* Transition: '<S900>:20' */
        /* Transition: '<S900>:23' */
        CITR_ac_B.LeCITR_b_PPLidSwitchSts120A_out = LeCITR_b_PPLidSwitchSts120A;
        rtb_LeCITR_b_PPLidSwitchSts120AFA_out = false;

        /* Transition: '<S900>:25' */
    }
    else
    {
        /* Transition: '<S900>:24' */
        rtb_LeCITR_b_PPLidSwitchSts120AFA_out = true;
    }

    /* End of Chart: '<S306>/PokeCITR_b_PPLidSwitchSts120AChrt' */

    /* Outport: '<Root>/VeCITR_b_PPLidSwitchSts120A' incorporates:
     *  SignalConversion generated from: '<S306>/VeCITR_b_PPLidSwitchSts120A'
     */
    (void)Rte_Write_VeCITR_b_PPLidSwitchSts120A_Value
        (CITR_ac_B.LeCITR_b_PPLidSwitchSts120A_out);

    /* Outport: '<Root>/VeCITR_b_PPLidSwitchSts120AFA' incorporates:
     *  SignalConversion generated from: '<S306>/VeCITR_b_PPLidSwitchSts120AFA'
     */
    (void)Rte_Write_VeCITR_b_PPLidSwitchSts120AFA_Value
        (rtb_LeCITR_b_PPLidSwitchSts120AFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_PPLidSwitchSts120A' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_PPLidSwitchSts120B(VAR(boolean, AUTOMATIC)
    LeCITR_b_PPLidSwitchSts120B, VAR(boolean, AUTOMATIC)
    LeCITR_b_PPLidSwitchSts120BFA)
{
    boolean rtb_LeCITR_b_PPLidSwitchSts120BFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_PPLidSwitchSts120B' */
    /* Chart: '<S307>/PokeCITR_b_PPLidSwitchSts120BChrt' incorporates:
     *  SignalConversion generated from: '<S307>/LeCITR_e_FOTA_Installation_Status1'
     *  SignalConversion generated from: '<S307>/LeCITR_e_FOTA_Installation_Status'
     */
    /* Gateway: PokeCITR_b_PPLidSwitchSts120B/PokeCITR_b_PPLidSwitchSts120BChrt */
    /* During: PokeCITR_b_PPLidSwitchSts120B/PokeCITR_b_PPLidSwitchSts120BChrt */
    /* Entry Internal: PokeCITR_b_PPLidSwitchSts120B/PokeCITR_b_PPLidSwitchSts120BChrt */
    /* Transition: '<S901>:2' */
    if (!LeCITR_b_PPLidSwitchSts120BFA)
    {
        /* Transition: '<S901>:20' */
        /* Transition: '<S901>:23' */
        CITR_ac_B.LeCITR_b_PPLidSwitchSts120B_out = LeCITR_b_PPLidSwitchSts120B;
        rtb_LeCITR_b_PPLidSwitchSts120BFA_out = false;

        /* Transition: '<S901>:25' */
    }
    else
    {
        /* Transition: '<S901>:24' */
        rtb_LeCITR_b_PPLidSwitchSts120BFA_out = true;
    }

    /* End of Chart: '<S307>/PokeCITR_b_PPLidSwitchSts120BChrt' */

    /* Outport: '<Root>/VeCITR_b_PPLidSwitchSts120B' incorporates:
     *  SignalConversion generated from: '<S307>/VeCITR_b_PPLidSwitchSts120B'
     */
    (void)Rte_Write_VeCITR_b_PPLidSwitchSts120B_Value
        (CITR_ac_B.LeCITR_b_PPLidSwitchSts120B_out);

    /* Outport: '<Root>/VeCITR_b_PPLidSwitchSts120BFA' incorporates:
     *  SignalConversion generated from: '<S307>/VeCITR_b_PPLidSwitchSts120BFA'
     */
    (void)Rte_Write_VeCITR_b_PPLidSwitchSts120BFA_Value
        (rtb_LeCITR_b_PPLidSwitchSts120BFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_PPLidSwitchSts120B' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_PPLidSwitchSts240(VAR(boolean, AUTOMATIC)
    LeCITR_b_PPLidSwitchSts240, VAR(boolean, AUTOMATIC)
    LeCITR_b_PPLidSwitchSts240FA)
{
    boolean rtb_LeCITR_b_PPLidSwitchSts240FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_PPLidSwitchSts240' */
    /* Chart: '<S308>/PokeCITR_b_PPLidSwitchSts240Chrt' incorporates:
     *  SignalConversion generated from: '<S308>/LeCITR_e_FOTA_Installation_Status1'
     *  SignalConversion generated from: '<S308>/LeCITR_e_FOTA_Installation_Status'
     */
    /* Gateway: PokeCITR_b_PPLidSwitchSts240/PokeCITR_b_PPLidSwitchSts240Chrt */
    /* During: PokeCITR_b_PPLidSwitchSts240/PokeCITR_b_PPLidSwitchSts240Chrt */
    /* Entry Internal: PokeCITR_b_PPLidSwitchSts240/PokeCITR_b_PPLidSwitchSts240Chrt */
    /* Transition: '<S902>:2' */
    if (!LeCITR_b_PPLidSwitchSts240FA)
    {
        /* Transition: '<S902>:20' */
        /* Transition: '<S902>:23' */
        CITR_ac_B.LeCITR_b_PPLidSwitchSts240_out = LeCITR_b_PPLidSwitchSts240;
        rtb_LeCITR_b_PPLidSwitchSts240FA_out = false;

        /* Transition: '<S902>:25' */
    }
    else
    {
        /* Transition: '<S902>:24' */
        rtb_LeCITR_b_PPLidSwitchSts240FA_out = true;
    }

    /* End of Chart: '<S308>/PokeCITR_b_PPLidSwitchSts240Chrt' */

    /* Outport: '<Root>/VeCITR_b_PPLidSwitchSts240' incorporates:
     *  SignalConversion generated from: '<S308>/VeCITR_b_PPLidSwitchSts240'
     */
    (void)Rte_Write_VeCITR_b_PPLidSwitchSts240_Value
        (CITR_ac_B.LeCITR_b_PPLidSwitchSts240_out);

    /* Outport: '<Root>/VeCITR_b_PPLidSwitchSts240FA' incorporates:
     *  SignalConversion generated from: '<S308>/VeCITR_b_PPLidSwitchSts240FA'
     */
    (void)Rte_Write_VeCITR_b_PPLidSwitchSts240FA_Value
        (rtb_LeCITR_b_PPLidSwitchSts240FA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_PPLidSwitchSts240' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_PP_Gnd_Fault_Det(VAR(boolean, AUTOMATIC)
    LeCITR_b_PP_Gnd_Fault_Det, VAR(boolean, AUTOMATIC)
    LeCITR_b_PP_Gnd_Fault_Det_FA)
{
    boolean rtb_LeCITR_b_PP_Gnd_Fault_Det_FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_PP_Gnd_Fault_Det' */
    /* Chart: '<S309>/PokeCITR_b_PP_Gnd_Fault_DetChrt' incorporates:
     *  SignalConversion generated from: '<S309>/LeCITR_b_SOC_Max_Lev1'
     *  SignalConversion generated from: '<S309>/LeCITR_b_SOC_Max_Lev'
     */
    /* Gateway: PokeCITR_b_PP_Gnd_Fault_Det/PokeCITR_b_PP_Gnd_Fault_DetChrt */
    /* During: PokeCITR_b_PP_Gnd_Fault_Det/PokeCITR_b_PP_Gnd_Fault_DetChrt */
    /* Entry Internal: PokeCITR_b_PP_Gnd_Fault_Det/PokeCITR_b_PP_Gnd_Fault_DetChrt */
    /* Transition: '<S903>:2' */
    if (!LeCITR_b_PP_Gnd_Fault_Det_FA)
    {
        /* Transition: '<S903>:27' */
        /* Transition: '<S903>:28' */
        CITR_ac_B.LeCITR_b_PP_Gnd_Fault_Det_out = LeCITR_b_PP_Gnd_Fault_Det;
        rtb_LeCITR_b_PP_Gnd_Fault_Det_FA_out = false;
    }
    else
    {
        /* Transition: '<S903>:29' */
        rtb_LeCITR_b_PP_Gnd_Fault_Det_FA_out = true;

        /* Transition: '<S903>:30' */
    }

    /* End of Chart: '<S309>/PokeCITR_b_PP_Gnd_Fault_DetChrt' */

    /* Outport: '<Root>/VeCITR_b_PP_Gnd_Fault_Detected' incorporates:
     *  SignalConversion generated from: '<S309>/VeCITR_b_PP_Gnd_Fault_Det'
     */
    (void)Rte_Write_VeCITR_b_PP_Gnd_Fault_Detected_Value
        (CITR_ac_B.LeCITR_b_PP_Gnd_Fault_Det_out);

    /* Outport: '<Root>/VeCITR_b_PP_Gnd_Fault_Detected_FA' incorporates:
     *  SignalConversion generated from: '<S309>/VeCITR_b_PP_Gnd_Fault_Det_FA'
     */
    (void)Rte_Write_VeCITR_b_PP_Gnd_Fault_Detected_FA_Value
        (rtb_LeCITR_b_PP_Gnd_Fault_Det_FA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_PP_Gnd_Fault_Det' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_PP_LIN_Cksm_Err(VAR(boolean, AUTOMATIC)
    LeCITR_b_PP_LIN_Cksm_Err, VAR(boolean, AUTOMATIC)
    LeCITR_b_PP_LIN_Cksm_Err_FA)
{
    boolean rtb_LeCITR_b_PP_LIN_Cksm_Err_FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_PP_LIN_Cksm_Err' */
    /* Chart: '<S310>/PokeCITR_b_PP_LIN_Cksm_ErrChrt' incorporates:
     *  SignalConversion generated from: '<S310>/LeCITR_b_SOC_Max_Lev1'
     *  SignalConversion generated from: '<S310>/LeCITR_b_SOC_Max_Lev'
     */
    /* Gateway: PokeCITR_b_PP_LIN_Cksm_Err/PokeCITR_b_PP_LIN_Cksm_ErrChrt */
    /* During: PokeCITR_b_PP_LIN_Cksm_Err/PokeCITR_b_PP_LIN_Cksm_ErrChrt */
    /* Entry Internal: PokeCITR_b_PP_LIN_Cksm_Err/PokeCITR_b_PP_LIN_Cksm_ErrChrt */
    /* Transition: '<S904>:2' */
    if (!LeCITR_b_PP_LIN_Cksm_Err_FA)
    {
        /* Transition: '<S904>:27' */
        /* Transition: '<S904>:28' */
        CITR_ac_B.LeCITR_b_PP_LIN_Cksm_Err_out = LeCITR_b_PP_LIN_Cksm_Err;
        rtb_LeCITR_b_PP_LIN_Cksm_Err_FA_out = false;
    }
    else
    {
        /* Transition: '<S904>:29' */
        rtb_LeCITR_b_PP_LIN_Cksm_Err_FA_out = true;

        /* Transition: '<S904>:30' */
    }

    /* End of Chart: '<S310>/PokeCITR_b_PP_LIN_Cksm_ErrChrt' */

    /* Outport: '<Root>/VeCITR_b_PP_LIN_Checksum_Error' incorporates:
     *  SignalConversion generated from: '<S310>/VeCITR_b_PP_LIN_Cksm_Err'
     */
    (void)Rte_Write_VeCITR_b_PP_LIN_Checksum_Error_Value
        (CITR_ac_B.LeCITR_b_PP_LIN_Cksm_Err_out);

    /* Outport: '<Root>/VeCITR_b_PP_LIN_Checksum_Error_FA' incorporates:
     *  SignalConversion generated from: '<S310>/VeCITR_b_PP_LIN_Cksm_Err_FA'
     */
    (void)Rte_Write_VeCITR_b_PP_LIN_Checksum_Error_FA_Value
        (rtb_LeCITR_b_PP_LIN_Cksm_Err_FA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_PP_LIN_Cksm_Err' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_PP_LIN_Data_Err(VAR(boolean, AUTOMATIC)
    LeCITR_b_PP_LIN_Data_Err, VAR(boolean, AUTOMATIC)
    LeCITR_b_PP_LIN_Data_Err_FA)
{
    boolean rtb_LeCITR_b_PP_LIN_Data_Err_FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_PP_LIN_Data_Err' */
    /* Chart: '<S311>/PokeCITR_b_PP_LIN_Data_ErrChrt' incorporates:
     *  SignalConversion generated from: '<S311>/LeCITR_b_SOC_Max_Lev1'
     *  SignalConversion generated from: '<S311>/LeCITR_b_SOC_Max_Lev'
     */
    /* Gateway: PokeCITR_b_PP_LIN_Data_Err/PokeCITR_b_PP_LIN_Data_ErrChrt */
    /* During: PokeCITR_b_PP_LIN_Data_Err/PokeCITR_b_PP_LIN_Data_ErrChrt */
    /* Entry Internal: PokeCITR_b_PP_LIN_Data_Err/PokeCITR_b_PP_LIN_Data_ErrChrt */
    /* Transition: '<S905>:2' */
    if (!LeCITR_b_PP_LIN_Data_Err_FA)
    {
        /* Transition: '<S905>:27' */
        /* Transition: '<S905>:28' */
        CITR_ac_B.LeCITR_b_PP_LIN_Data_Err_out = LeCITR_b_PP_LIN_Data_Err;
        rtb_LeCITR_b_PP_LIN_Data_Err_FA_out = false;
    }
    else
    {
        /* Transition: '<S905>:29' */
        rtb_LeCITR_b_PP_LIN_Data_Err_FA_out = true;

        /* Transition: '<S905>:30' */
    }

    /* End of Chart: '<S311>/PokeCITR_b_PP_LIN_Data_ErrChrt' */

    /* Outport: '<Root>/VeCITR_b_PP_LIN_Data_Error' incorporates:
     *  SignalConversion generated from: '<S311>/VeCITR_b_PP_LIN_Data_Err'
     */
    (void)Rte_Write_VeCITR_b_PP_LIN_Data_Error_Value
        (CITR_ac_B.LeCITR_b_PP_LIN_Data_Err_out);

    /* Outport: '<Root>/VeCITR_b_PP_LIN_Data_Error_FA' incorporates:
     *  SignalConversion generated from: '<S311>/VeCITR_b_PP_LIN_Data_Err_FA'
     */
    (void)Rte_Write_VeCITR_b_PP_LIN_Data_Error_FA_Value
        (rtb_LeCITR_b_PP_LIN_Data_Err_FA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_PP_LIN_Data_Err' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_PP_LIN_Parity_Err(VAR(boolean, AUTOMATIC)
    LeCITR_b_PP_LIN_Parity_Err, VAR(boolean, AUTOMATIC)
    LeCITR_b_PP_LIN_Parity_Err_FA)
{
    boolean rtb_LeCITR_b_PP_LIN_Parity_Err_FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_PP_LIN_Parity_Err' */
    /* Chart: '<S312>/PokeCITR_b_PP_LIN_Parity_ErrChrt' incorporates:
     *  SignalConversion generated from: '<S312>/LeCITR_b_SOC_Max_Lev1'
     *  SignalConversion generated from: '<S312>/LeCITR_b_SOC_Max_Lev'
     */
    /* Gateway: PokeCITR_b_PP_LIN_Parity_Err/PokeCITR_b_PP_LIN_Parity_ErrChrt */
    /* During: PokeCITR_b_PP_LIN_Parity_Err/PokeCITR_b_PP_LIN_Parity_ErrChrt */
    /* Entry Internal: PokeCITR_b_PP_LIN_Parity_Err/PokeCITR_b_PP_LIN_Parity_ErrChrt */
    /* Transition: '<S906>:2' */
    if (!LeCITR_b_PP_LIN_Parity_Err_FA)
    {
        /* Transition: '<S906>:27' */
        /* Transition: '<S906>:28' */
        CITR_ac_B.LeCITR_b_PP_LIN_Parity_Err_out = LeCITR_b_PP_LIN_Parity_Err;
        rtb_LeCITR_b_PP_LIN_Parity_Err_FA_out = false;
    }
    else
    {
        /* Transition: '<S906>:29' */
        rtb_LeCITR_b_PP_LIN_Parity_Err_FA_out = true;

        /* Transition: '<S906>:30' */
    }

    /* End of Chart: '<S312>/PokeCITR_b_PP_LIN_Parity_ErrChrt' */

    /* Outport: '<Root>/VeCITR_b_PP_LIN_Parity_Error_FA' incorporates:
     *  SignalConversion generated from: '<S312>/VeCITR_bPP_LIN_Parity_Err_FA'
     */
    (void)Rte_Write_VeCITR_b_PP_LIN_Parity_Error_FA_Value
        (rtb_LeCITR_b_PP_LIN_Parity_Err_FA_out);

    /* Outport: '<Root>/VeCITR_b_PP_LIN_Parity_Error' incorporates:
     *  SignalConversion generated from: '<S312>/VeCITR_b_PP_LIN_Parity_Err'
     */
    (void)Rte_Write_VeCITR_b_PP_LIN_Parity_Error_Value
        (CITR_ac_B.LeCITR_b_PP_LIN_Parity_Err_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_PP_LIN_Parity_Err' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_RsErrSPP(VAR(boolean, AUTOMATIC)
    LeCITR_b_RsErrSPP, VAR(boolean, AUTOMATIC) LeCITR_b_RsErrSPPFA)
{
    UNUSED_PARAMETER(LeCITR_b_RsErrSPP);

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_RsErrSPP' */
    /* Chart: '<S313>/PokeCITR_b_RsErrSPPChrt' incorporates:
     *  SignalConversion generated from: '<S313>/LeCITR_e_FOTA_Installation_Status1'
     */
    /* Gateway: PokeCITR_b_RsErrSPP/PokeCITR_b_RsErrSPPChrt */
    /* During: PokeCITR_b_RsErrSPP/PokeCITR_b_RsErrSPPChrt */
    /* Entry Internal: PokeCITR_b_RsErrSPP/PokeCITR_b_RsErrSPPChrt */
    /* Transition: '<S907>:2' */
    if (!LeCITR_b_RsErrSPPFA)
    {
        /* Transition: '<S907>:20' */
        /* Transition: '<S907>:23' */
        CITR_ac_B.LeCITR_b_RsErrSPP_out = false;

        /* Transition: '<S907>:25' */
    }
    else
    {
        /* Transition: '<S907>:24' */
        CITR_ac_B.LeCITR_b_RsErrSPPFA_out = true;
    }

    /* End of Chart: '<S313>/PokeCITR_b_RsErrSPPChrt' */

    /* Outport: '<Root>/VeCITR_b_RsErrSPP' incorporates:
     *  SignalConversion generated from: '<S313>/VeCITR_b_RsErrSPP'
     */
    (void)Rte_Write_VeCITR_b_RsErrSPP_Value(CITR_ac_B.LeCITR_b_RsErrSPP_out);

    /* Outport: '<Root>/VeCITR_b_RsErrSPPFA' incorporates:
     *  SignalConversion generated from: '<S313>/VeCITR_b_RsErrSPPFA'
     */
    (void)Rte_Write_VeCITR_b_RsErrSPPFA_Value(CITR_ac_B.LeCITR_b_RsErrSPPFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_RsErrSPP' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_RsErrSPP2(VAR(boolean, AUTOMATIC)
    LeCITR_b_RsErrSPP2, VAR(boolean, AUTOMATIC) LeCITR_b_RsErrSPP2FA)
{
    UNUSED_PARAMETER(LeCITR_b_RsErrSPP2);

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_RsErrSPP2' */
    /* Chart: '<S314>/PokeCITR_b_RsErrSPP2Chrt' incorporates:
     *  SignalConversion generated from: '<S314>/LeCITR_e_FOTA_Installation_Status1'
     */
    /* Gateway: PokeCITR_b_RsErrSPP2/PokeCITR_b_RsErrSPP2Chrt */
    /* During: PokeCITR_b_RsErrSPP2/PokeCITR_b_RsErrSPP2Chrt */
    /* Entry Internal: PokeCITR_b_RsErrSPP2/PokeCITR_b_RsErrSPP2Chrt */
    /* Transition: '<S908>:2' */
    if (!LeCITR_b_RsErrSPP2FA)
    {
        /* Transition: '<S908>:20' */
        /* Transition: '<S908>:23' */
        CITR_ac_B.LeCITR_b_RsErrSPP2_out = false;

        /* Transition: '<S908>:25' */
    }
    else
    {
        /* Transition: '<S908>:24' */
        CITR_ac_B.LeCITR_b_RsErrSPP2FA_out = true;
    }

    /* End of Chart: '<S314>/PokeCITR_b_RsErrSPP2Chrt' */

    /* Outport: '<Root>/VeCITR_b_RsErrSPP2' incorporates:
     *  SignalConversion generated from: '<S314>/VeCITR_b_RsErrSPP2'
     */
    (void)Rte_Write_VeCITR_b_RsErrSPP2_Value(CITR_ac_B.LeCITR_b_RsErrSPP2_out);

    /* Outport: '<Root>/VeCITR_b_RsErrSPP2FA' incorporates:
     *  SignalConversion generated from: '<S314>/VeCITR_b_RsErrSPP2FA'
     */
    (void)Rte_Write_VeCITR_b_RsErrSPP2FA_Value
        (CITR_ac_B.LeCITR_b_RsErrSPP2FA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_RsErrSPP2' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_SOC_Max_Lev(VAR(boolean, AUTOMATIC)
    LeCITR_b_SOC_Max_Lev)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_SOC_Max_Lev' */
    /* Outport: '<Root>/VeCITR_b_SOC_Max_Lev' incorporates:
     *  SignalConversion generated from: '<S315>/VeCITR_b_SOC_Max_Lev'
     *  SignalConversion generated from: '<S315>/LeCITR_b_SOC_Max_Lev'
     */
    /* Gateway: PokeCITR_b_SOC_Max_Lev/PokeCITR_b_SOC_Max_LevChrt */
    /* During: PokeCITR_b_SOC_Max_Lev/PokeCITR_b_SOC_Max_LevChrt */
    /* Entry Internal: PokeCITR_b_SOC_Max_Lev/PokeCITR_b_SOC_Max_LevChrt */
    /* Transition: '<S909>:2' */
    (void)Rte_Write_VeCITR_b_SOC_Max_Lev_Value(LeCITR_b_SOC_Max_Lev);

    /* Outport: '<Root>/VeCITR_b_SOC_Max_Lev_FA' incorporates:
     *  Chart: '<S315>/PokeCITR_b_SOC_Max_LevChrt'
     *  SignalConversion generated from: '<S315>/VeCITR_b_SOC_Max_LevFA'
     */
    (void)Rte_Write_VeCITR_b_SOC_Max_Lev_FA_Value(false);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_SOC_Max_Lev' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_TBMStopChrg(VAR(boolean, AUTOMATIC)
    LeCITR_b_TBMStopChrg, VAR(boolean, AUTOMATIC) LeCITR_b_TBMStopChrgFA)
{
    boolean rtb_LeCITR_b_TBMStopChrgFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_TBMStopChrg' */
    /* Chart: '<S316>/PokeCITR_b_TBMStopChrgChrt' incorporates:
     *  SignalConversion generated from: '<S316>/LeCITR_e_FOTA_Installation_Status1'
     *  SignalConversion generated from: '<S316>/LeCITR_e_FOTA_Installation_Status'
     */
    /* Gateway: PokeCITR_b_TBMStopChrg/PokeCITR_b_TBMStopChrgChrt */
    /* During: PokeCITR_b_TBMStopChrg/PokeCITR_b_TBMStopChrgChrt */
    /* Entry Internal: PokeCITR_b_TBMStopChrg/PokeCITR_b_TBMStopChrgChrt */
    /* Transition: '<S910>:2' */
    if (!LeCITR_b_TBMStopChrgFA)
    {
        /* Transition: '<S910>:20' */
        /* Transition: '<S910>:23' */
        CITR_ac_B.LeCITR_b_TBMStopChrg_out = LeCITR_b_TBMStopChrg;
        rtb_LeCITR_b_TBMStopChrgFA_out = false;

        /* Transition: '<S910>:25' */
    }
    else
    {
        /* Transition: '<S910>:24' */
        rtb_LeCITR_b_TBMStopChrgFA_out = true;
    }

    /* End of Chart: '<S316>/PokeCITR_b_TBMStopChrgChrt' */

    /* Outport: '<Root>/VeCITR_b_TBMStopChrg' incorporates:
     *  SignalConversion generated from: '<S316>/VeCITR_b_TBMStopChrg'
     */
    (void)Rte_Write_VeCITR_b_TBMStopChrg_Value
        (CITR_ac_B.LeCITR_b_TBMStopChrg_out);

    /* Outport: '<Root>/VeCITR_b_TBMStopChrgFA' incorporates:
     *  SignalConversion generated from: '<S316>/VeCITR_b_TBMStopChrgFA'
     */
    (void)Rte_Write_VeCITR_b_TBMStopChrgFA_Value(rtb_LeCITR_b_TBMStopChrgFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_TBMStopChrg' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_TBM_Charge_Now(VAR(boolean, AUTOMATIC)
    LeCITR_b_TBM_Charge_Now)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_TBM_Charge_Now' */
    /* Outport: '<Root>/VeCITR_b_TBM_ChargeNow' incorporates:
     *  SignalConversion generated from: '<S317>/VeCITR_b_TBM_Charge_Now'
     *  SignalConversion generated from: '<S317>/LeCITR_b_TBM_Charge_Now'
     */
    /* Gateway: PokeCITR_b_TBM_Charge_Now/PokeCITR_b_TBM_Charge_NowChrt */
    /* During: PokeCITR_b_TBM_Charge_Now/PokeCITR_b_TBM_Charge_NowChrt */
    /* Entry Internal: PokeCITR_b_TBM_Charge_Now/PokeCITR_b_TBM_Charge_NowChrt */
    /* Transition: '<S911>:2' */
    (void)Rte_Write_VeCITR_b_TBM_ChargeNow_Value(LeCITR_b_TBM_Charge_Now);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_TBM_Charge_Now' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_TBM_Sch1_ChargeUntilFull(VAR(boolean, AUTOMATIC)
    LeCITR_b_TBM_Sch1_ChargeUntilFull)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_TBM_Sch1_ChargeUntilFull' */
    /* Outport: '<Root>/VeCITR_b_TBM_Sch1_ChargeUntilFull' incorporates:
     *  SignalConversion generated from: '<S318>/VeCITR_b_TBM_Sch1_ChargeUntilFull'
     *  SignalConversion generated from: '<S318>/LeCITR_b_TBM_Sch1_ChargeUntilFull'
     */
    /* Gateway: PokeCITR_b_TBM_Sch1_ChargeUntilFull/PokeCITR_b_TBM_Sch1_ChargeUntilFullChrt */
    /* During: PokeCITR_b_TBM_Sch1_ChargeUntilFull/PokeCITR_b_TBM_Sch1_ChargeUntilFullChrt */
    /* Entry Internal: PokeCITR_b_TBM_Sch1_ChargeUntilFull/PokeCITR_b_TBM_Sch1_ChargeUntilFullChrt */
    /* Transition: '<S912>:2' */
    (void)Rte_Write_VeCITR_b_TBM_Sch1_ChargeUntilFull_Value
        (LeCITR_b_TBM_Sch1_ChargeUntilFull);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_TBM_Sch1_ChargeUntilFull' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_TBM_Sch1_Do_Not_Repeat(VAR(boolean, AUTOMATIC)
    LeCITR_b_TBM_Sch1_Do_Not_Repeat)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_TBM_Sch1_Do_Not_Repeat' */
    /* Outport: '<Root>/VeCITR_b_TBM_Sch1_Do_Not_Repeat' incorporates:
     *  SignalConversion generated from: '<S319>/VeCITR_b_TBM_Sch1_Do_Not_Repeat'
     *  SignalConversion generated from: '<S319>/LeCITR_b_TBM_Sch1_Do_Not_Repeat'
     */
    /* Gateway: PokeCITR_b_TBM_Sch1_Do_Not_Repeat/PokeCITR_b_TBM_Sch1_Do_Not_RepeatChrt */
    /* During: PokeCITR_b_TBM_Sch1_Do_Not_Repeat/PokeCITR_b_TBM_Sch1_Do_Not_RepeatChrt */
    /* Entry Internal: PokeCITR_b_TBM_Sch1_Do_Not_Repeat/PokeCITR_b_TBM_Sch1_Do_Not_RepeatChrt */
    /* Transition: '<S913>:2' */
    (void)Rte_Write_VeCITR_b_TBM_Sch1_Do_Not_Repeat_Value
        (LeCITR_b_TBM_Sch1_Do_Not_Repeat);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_TBM_Sch1_Do_Not_Repeat' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_TBM_Sch1_Enbl(VAR(boolean, AUTOMATIC)
    LeCITR_b_TBM_Sch1_Enbl)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_TBM_Sch1_Enbl' */
    /* Outport: '<Root>/VeCITR_b_TBM_Sch1_Enbl' incorporates:
     *  SignalConversion generated from: '<S320>/VeCITR_b_TBM_Sch1_Enbl'
     *  SignalConversion generated from: '<S320>/LeCITR_b_TBM_Sch1_Enbl'
     */
    /* Gateway: PokeCITR_b_TBM_Sch1_Enbl/PokeCITR_b_TBM_Sch1_EnblChrt */
    /* During: PokeCITR_b_TBM_Sch1_Enbl/PokeCITR_b_TBM_Sch1_EnblChrt */
    /* Entry Internal: PokeCITR_b_TBM_Sch1_Enbl/PokeCITR_b_TBM_Sch1_EnblChrt */
    /* Transition: '<S914>:2' */
    (void)Rte_Write_VeCITR_b_TBM_Sch1_Enbl_Value(LeCITR_b_TBM_Sch1_Enbl);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_TBM_Sch1_Enbl' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_TBM_Sch1_Priority(VAR(boolean, AUTOMATIC)
    LeCITR_b_TBM_Sch1_Priority)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_TBM_Sch1_Priority' */
    /* Outport: '<Root>/VeCITR_b_TBM_Sch1_Priority' incorporates:
     *  SignalConversion generated from: '<S321>/VeCITR_b_TBM_Sch1_Priority'
     *  SignalConversion generated from: '<S321>/LeCITR_b_TBM_Sch1_Priority'
     */
    /* Gateway: PokeCITR_b_TBM_Sch1_Priority/PokeCITR_b_TBM_Sch1_PriorityChrt */
    /* During: PokeCITR_b_TBM_Sch1_Priority/PokeCITR_b_TBM_Sch1_PriorityChrt */
    /* Entry Internal: PokeCITR_b_TBM_Sch1_Priority/PokeCITR_b_TBM_Sch1_PriorityChrt */
    /* Transition: '<S915>:2' */
    (void)Rte_Write_VeCITR_b_TBM_Sch1_Priority_Value(LeCITR_b_TBM_Sch1_Priority);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_TBM_Sch1_Priority' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_TBM_Sch1_Submit(VAR(boolean, AUTOMATIC)
    LeCITR_b_TBM_Sch1_Submit)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_TBM_Sch1_Submit' */
    /* Outport: '<Root>/VeCITR_b_TBM_Sch1_Submit' incorporates:
     *  SignalConversion generated from: '<S322>/VeCITR_b_TBM_Sch1_Submit'
     *  SignalConversion generated from: '<S322>/LeCITR_b_TBM_Sch1_Submit'
     */
    /* Gateway: PokeCITR_b_TBM_Sch1_Submit/PokeCITR_b_TBM_Sch1_SubmitChrt */
    /* During: PokeCITR_b_TBM_Sch1_Submit/PokeCITR_b_TBM_Sch1_SubmitChrt */
    /* Entry Internal: PokeCITR_b_TBM_Sch1_Submit/PokeCITR_b_TBM_Sch1_SubmitChrt */
    /* Transition: '<S916>:2' */
    (void)Rte_Write_VeCITR_b_TBM_Sch1_Submit_Value(LeCITR_b_TBM_Sch1_Submit);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_TBM_Sch1_Submit' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_TBM_Sch2_ChargeUntilFull(VAR(boolean, AUTOMATIC)
    LeCITR_b_TBM_Sch2_ChargeUntilFull)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_TBM_Sch2_ChargeUntilFull' */
    /* Outport: '<Root>/VeCITR_b_TBM_Sch2_ChargeUntilFull' incorporates:
     *  SignalConversion generated from: '<S323>/VeCITR_b_TBM_Sch2_ChargeUntilFull'
     *  SignalConversion generated from: '<S323>/LeCITR_b_TBM_Sch2_ChargeUntilFull'
     */
    /* Gateway: PokeCITR_b_TBM_Sch2_ChargeUntilFull/PokeCITR_b_TBM_Sch2_ChargeUntilFullChrt */
    /* During: PokeCITR_b_TBM_Sch2_ChargeUntilFull/PokeCITR_b_TBM_Sch2_ChargeUntilFullChrt */
    /* Entry Internal: PokeCITR_b_TBM_Sch2_ChargeUntilFull/PokeCITR_b_TBM_Sch2_ChargeUntilFullChrt */
    /* Transition: '<S917>:2' */
    (void)Rte_Write_VeCITR_b_TBM_Sch2_ChargeUntilFull_Value
        (LeCITR_b_TBM_Sch2_ChargeUntilFull);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_TBM_Sch2_ChargeUntilFull' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_TBM_Sch2_Do_Not_Repeat(VAR(boolean, AUTOMATIC)
    LeCITR_b_TBM_Sch2_Do_Not_Repeat)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_TBM_Sch2_Do_Not_Repeat' */
    /* Outport: '<Root>/VeCITR_b_TBM_Sch2_Do_Not_Repeat' incorporates:
     *  SignalConversion generated from: '<S324>/VeCITR_b_TBM_Sch2_Do_Not_Repeat'
     *  SignalConversion generated from: '<S324>/LeCITR_b_TBM_Sch2_Do_Not_Repeat'
     */
    /* Gateway: PokeCITR_b_TBM_Sch2_Do_Not_Repeat/PokeCITR_b_TBM_Sch2_Do_Not_RepeatChrt */
    /* During: PokeCITR_b_TBM_Sch2_Do_Not_Repeat/PokeCITR_b_TBM_Sch2_Do_Not_RepeatChrt */
    /* Entry Internal: PokeCITR_b_TBM_Sch2_Do_Not_Repeat/PokeCITR_b_TBM_Sch2_Do_Not_RepeatChrt */
    /* Transition: '<S918>:2' */
    (void)Rte_Write_VeCITR_b_TBM_Sch2_Do_Not_Repeat_Value
        (LeCITR_b_TBM_Sch2_Do_Not_Repeat);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_TBM_Sch2_Do_Not_Repeat' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_TBM_Sch2_Enbl(VAR(boolean, AUTOMATIC)
    LeCITR_b_TBM_Sch2_Enbl)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_TBM_Sch2_Enbl' */
    /* Outport: '<Root>/VeCITR_b_TBM_Sch2_Enbl' incorporates:
     *  SignalConversion generated from: '<S325>/VeCITR_b_TBM_Sch2_Enbl'
     *  SignalConversion generated from: '<S325>/LeCITR_b_TBM_Sch2_Enbl'
     */
    /* Gateway: PokeCITR_b_TBM_Sch2_Enbl/PokeCITR_b_TBM_Sch2_EnblChrt */
    /* During: PokeCITR_b_TBM_Sch2_Enbl/PokeCITR_b_TBM_Sch2_EnblChrt */
    /* Entry Internal: PokeCITR_b_TBM_Sch2_Enbl/PokeCITR_b_TBM_Sch2_EnblChrt */
    /* Transition: '<S919>:2' */
    (void)Rte_Write_VeCITR_b_TBM_Sch2_Enbl_Value(LeCITR_b_TBM_Sch2_Enbl);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_TBM_Sch2_Enbl' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_TBM_Sch2_Priority(VAR(boolean, AUTOMATIC)
    LeCITR_b_TBM_Sch2_Priority)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_TBM_Sch2_Priority' */
    /* Outport: '<Root>/VeCITR_b_TBM_Sch2_Priority' incorporates:
     *  SignalConversion generated from: '<S326>/VeCITR_b_TBM_Sch2_Priority'
     *  SignalConversion generated from: '<S326>/LeCITR_b_TBM_Sch2_Priority'
     */
    /* Gateway: PokeCITR_b_TBM_Sch2_Priority/PokeCITR_b_TBM_Sch2_PriorityChrt */
    /* During: PokeCITR_b_TBM_Sch2_Priority/PokeCITR_b_TBM_Sch2_PriorityChrt */
    /* Entry Internal: PokeCITR_b_TBM_Sch2_Priority/PokeCITR_b_TBM_Sch2_PriorityChrt */
    /* Transition: '<S920>:2' */
    (void)Rte_Write_VeCITR_b_TBM_Sch2_Priority_Value(LeCITR_b_TBM_Sch2_Priority);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_TBM_Sch2_Priority' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_TBM_Sch2_Submit(VAR(boolean, AUTOMATIC)
    LeCITR_b_TBM_Sch2_Submit)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_TBM_Sch2_Submit' */
    /* Outport: '<Root>/VeCITR_b_TBM_Sch2_Submit' incorporates:
     *  SignalConversion generated from: '<S327>/VeCITR_b_TBM_Sch2_Submit'
     *  SignalConversion generated from: '<S327>/LeCITR_b_TBM_Sch2_Submit'
     */
    /* Gateway: PokeCITR_b_TBM_Sch2_Submit/PokeCITR_b_TBM_Sch2_SubmitChrt */
    /* During: PokeCITR_b_TBM_Sch2_Submit/PokeCITR_b_TBM_Sch2_SubmitChrt */
    /* Entry Internal: PokeCITR_b_TBM_Sch2_Submit/PokeCITR_b_TBM_Sch2_SubmitChrt */
    /* Transition: '<S921>:2' */
    (void)Rte_Write_VeCITR_b_TBM_Sch2_Submit_Value(LeCITR_b_TBM_Sch2_Submit);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_TBM_Sch2_Submit' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_TBM_Sch3_ChargeUntilFull(VAR(boolean, AUTOMATIC)
    LeCITR_b_TBM_Sch3_ChargeUntilFull)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_TBM_Sch3_ChargeUntilFull' */
    /* Outport: '<Root>/VeCITR_b_TBM_Sch3_ChargeUntilFull' incorporates:
     *  SignalConversion generated from: '<S328>/VeCITR_b_TBM_Sch3_ChargeUntilFull'
     *  SignalConversion generated from: '<S328>/LeCITR_b_TBM_Sch3_ChargeUntilFull'
     */
    /* Gateway: PokeCITR_b_TBM_Sch3_ChargeUntilFull/PokeCITR_b_TBM_Sch3_ChargeUntilFullChrt */
    /* During: PokeCITR_b_TBM_Sch3_ChargeUntilFull/PokeCITR_b_TBM_Sch3_ChargeUntilFullChrt */
    /* Entry Internal: PokeCITR_b_TBM_Sch3_ChargeUntilFull/PokeCITR_b_TBM_Sch3_ChargeUntilFullChrt */
    /* Transition: '<S922>:2' */
    (void)Rte_Write_VeCITR_b_TBM_Sch3_ChargeUntilFull_Value
        (LeCITR_b_TBM_Sch3_ChargeUntilFull);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_TBM_Sch3_ChargeUntilFull' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_TBM_Sch3_Do_Not_Repeat(VAR(boolean, AUTOMATIC)
    LeCITR_b_TBM_Sch3_Do_Not_Repeat)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_TBM_Sch3_Do_Not_Repeat' */
    /* Outport: '<Root>/VeCITR_b_TBM_Sch3_Do_Not_Repeat' incorporates:
     *  SignalConversion generated from: '<S329>/VeCITR_b_TBM_Sch3_Do_Not_Repeat'
     *  SignalConversion generated from: '<S329>/LeCITR_b_TBM_Sch3_Do_Not_Repeat'
     */
    /* Gateway: PokeCITR_b_TBM_Sch3_Do_Not_Repeat/PokeCITR_b_TBM_Sch3_Do_Not_RepeatChrt */
    /* During: PokeCITR_b_TBM_Sch3_Do_Not_Repeat/PokeCITR_b_TBM_Sch3_Do_Not_RepeatChrt */
    /* Entry Internal: PokeCITR_b_TBM_Sch3_Do_Not_Repeat/PokeCITR_b_TBM_Sch3_Do_Not_RepeatChrt */
    /* Transition: '<S923>:2' */
    (void)Rte_Write_VeCITR_b_TBM_Sch3_Do_Not_Repeat_Value
        (LeCITR_b_TBM_Sch3_Do_Not_Repeat);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_TBM_Sch3_Do_Not_Repeat' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_TBM_Sch3_Enbl(VAR(boolean, AUTOMATIC)
    LeCITR_b_TBM_Sch3_Enbl)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_TBM_Sch3_Enbl' */
    /* Outport: '<Root>/VeCITR_b_TBM_Sch3_Enbl' incorporates:
     *  SignalConversion generated from: '<S330>/VeCITR_b_TBM_Sch3_Enbl'
     *  SignalConversion generated from: '<S330>/LeCITR_b_TBM_Sch3_Enbl'
     */
    /* Gateway: PokeCITR_b_TBM_Sch3_Enbl/PokeCITR_b_TBM_Sch3_EnblChrt */
    /* During: PokeCITR_b_TBM_Sch3_Enbl/PokeCITR_b_TBM_Sch3_EnblChrt */
    /* Entry Internal: PokeCITR_b_TBM_Sch3_Enbl/PokeCITR_b_TBM_Sch3_EnblChrt */
    /* Transition: '<S924>:2' */
    (void)Rte_Write_VeCITR_b_TBM_Sch3_Enbl_Value(LeCITR_b_TBM_Sch3_Enbl);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_TBM_Sch3_Enbl' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_TBM_Sch3_Priority(VAR(boolean, AUTOMATIC)
    LeCITR_b_TBM_Sch3_Priority)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_TBM_Sch3_Priority' */
    /* Outport: '<Root>/VeCITR_b_TBM_Sch3_Priority' incorporates:
     *  SignalConversion generated from: '<S331>/VeCITR_b_TBM_Sch3_Priority'
     *  SignalConversion generated from: '<S331>/LeCITR_b_TBM_Sch3_Priority'
     */
    /* Gateway: PokeCITR_b_TBM_Sch3_Priority/PokeCITR_b_TBM_Sch3_PriorityChrt */
    /* During: PokeCITR_b_TBM_Sch3_Priority/PokeCITR_b_TBM_Sch3_PriorityChrt */
    /* Entry Internal: PokeCITR_b_TBM_Sch3_Priority/PokeCITR_b_TBM_Sch3_PriorityChrt */
    /* Transition: '<S925>:2' */
    (void)Rte_Write_VeCITR_b_TBM_Sch3_Priority_Value(LeCITR_b_TBM_Sch3_Priority);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_TBM_Sch3_Priority' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_TBM_Sch3_Submit(VAR(boolean, AUTOMATIC)
    LeCITR_b_TBM_Sch3_Submit)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_TBM_Sch3_Submit' */
    /* Outport: '<Root>/VeCITR_b_TBM_Sch3_Submit' incorporates:
     *  SignalConversion generated from: '<S332>/VeCITR_b_TBM_Sch3_Submit'
     *  SignalConversion generated from: '<S332>/LeCITR_b_TBM_Sch3_Submit'
     */
    /* Gateway: PokeCITR_b_TBM_Sch3_Submit/PokeCITR_b_TBM_Sch3_SubmitChrt */
    /* During: PokeCITR_b_TBM_Sch3_Submit/PokeCITR_b_TBM_Sch3_SubmitChrt */
    /* Entry Internal: PokeCITR_b_TBM_Sch3_Submit/PokeCITR_b_TBM_Sch3_SubmitChrt */
    /* Transition: '<S926>:2' */
    (void)Rte_Write_VeCITR_b_TBM_Sch3_Submit_Value(LeCITR_b_TBM_Sch3_Submit);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_TBM_Sch3_Submit' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_TBM_Sch4_Enbl(VAR(boolean, AUTOMATIC)
    LeCITR_b_TBM_Sch4_Enbl)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_TBM_Sch4_Enbl' */
    /* Outport: '<Root>/VeCITR_b_TBM_Sch4_Enbl' incorporates:
     *  SignalConversion generated from: '<S333>/VeCITR_b_TBM_Sch4_Enbl'
     *  SignalConversion generated from: '<S333>/LeCITR_b_TBM_Sch4_Enbl'
     */
    /* Gateway: PokeCITR_b_TBM_Sch4_Enbl/PokeCITR_b_TBM_Sch4_EnblChrt */
    /* During: PokeCITR_b_TBM_Sch4_Enbl/PokeCITR_b_TBM_Sch4_EnblChrt */
    /* Entry Internal: PokeCITR_b_TBM_Sch4_Enbl/PokeCITR_b_TBM_Sch4_EnblChrt */
    /* Transition: '<S927>:2' */
    (void)Rte_Write_VeCITR_b_TBM_Sch4_Enbl_Value(LeCITR_b_TBM_Sch4_Enbl);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_TBM_Sch4_Enbl' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_TBM_Sch4_Submit(VAR(boolean, AUTOMATIC)
    LeCITR_b_TBM_Sch4_Submit)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_TBM_Sch4_Submit' */
    /* Outport: '<Root>/VeCITR_b_TBM_Sch4_Submit' incorporates:
     *  SignalConversion generated from: '<S334>/VeCITR_b_TBM_Sch4_Submit'
     *  SignalConversion generated from: '<S334>/LeCITR_b_TBM_Sch4_Submit'
     */
    /* Gateway: PokeCITR_b_TBM_Sch4_Submit/PokeCITR_b_TBM_Sch4_SubmitChrt */
    /* During: PokeCITR_b_TBM_Sch4_Submit/PokeCITR_b_TBM_Sch4_SubmitChrt */
    /* Entry Internal: PokeCITR_b_TBM_Sch4_Submit/PokeCITR_b_TBM_Sch4_SubmitChrt */
    /* Transition: '<S928>:2' */
    (void)Rte_Write_VeCITR_b_TBM_Sch4_Submit_Value(LeCITR_b_TBM_Sch4_Submit);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_TBM_Sch4_Submit' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_V2HModeReq(VAR(boolean, AUTOMATIC)
    LeCITR_b_V2HModeReq, VAR(boolean, AUTOMATIC) LeCITR_b_V2HModeReqFA)
{
    boolean rtb_LeCITR_b_V2HModeReqFA_out_l;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_V2HModeReq' */
    /* Chart: '<S335>/PokeCITR_b_V2HModeReqChrt' incorporates:
     *  SignalConversion generated from: '<S335>/LeCITR_e_FOTA_Installation_Status1'
     *  SignalConversion generated from: '<S335>/LeCITR_e_FOTA_Installation_Status'
     */
    /* Gateway: PokeCITR_b_V2HModeReq/PokeCITR_b_V2HModeReqChrt */
    /* During: PokeCITR_b_V2HModeReq/PokeCITR_b_V2HModeReqChrt */
    /* Entry Internal: PokeCITR_b_V2HModeReq/PokeCITR_b_V2HModeReqChrt */
    /* Transition: '<S929>:2' */
    if (!LeCITR_b_V2HModeReqFA)
    {
        /* Transition: '<S929>:20' */
        /* Transition: '<S929>:23' */
        CITR_ac_B.LeCITR_b_V2HModeReq_out = LeCITR_b_V2HModeReq;
        rtb_LeCITR_b_V2HModeReqFA_out_l = false;

        /* Transition: '<S929>:25' */
    }
    else
    {
        /* Transition: '<S929>:24' */
        rtb_LeCITR_b_V2HModeReqFA_out_l = true;
    }

    /* End of Chart: '<S335>/PokeCITR_b_V2HModeReqChrt' */

    /* Outport: '<Root>/VeCITR_b_V2HModeReq' incorporates:
     *  SignalConversion generated from: '<S335>/VeCITR_b_V2HModeReq'
     */
    (void)Rte_Write_VeCITR_b_V2HModeReq_Value(CITR_ac_B.LeCITR_b_V2HModeReq_out);

    /* Outport: '<Root>/VeCITR_b_V2HModeReqFA' incorporates:
     *  SignalConversion generated from: '<S335>/VeCITR_b_V2HModeReqFA'
     */
    (void)Rte_Write_VeCITR_b_V2HModeReqFA_Value(rtb_LeCITR_b_V2HModeReqFA_out_l);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_V2HModeReq' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_V2HReq(VAR(boolean, AUTOMATIC) LeCITR_b_V2HReq,
    VAR(boolean, AUTOMATIC) LeCITR_b_V2HReqFA)
{
    boolean rtb_LeCITR_b_V2HReqFA_out_d;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_V2HReq' */
    /* Chart: '<S336>/PokeCITR_b_V2HReqChrt' incorporates:
     *  SignalConversion generated from: '<S336>/LeCITR_e_FOTA_Installation_Status1'
     *  SignalConversion generated from: '<S336>/LeCITR_e_FOTA_Installation_Status'
     */
    /* Gateway: PokeCITR_b_V2HReq/PokeCITR_b_V2HReqChrt */
    /* During: PokeCITR_b_V2HReq/PokeCITR_b_V2HReqChrt */
    /* Entry Internal: PokeCITR_b_V2HReq/PokeCITR_b_V2HReqChrt */
    /* Transition: '<S930>:2' */
    if (!LeCITR_b_V2HReqFA)
    {
        /* Transition: '<S930>:20' */
        /* Transition: '<S930>:23' */
        CITR_ac_B.LeCITR_b_V2HReq_out = LeCITR_b_V2HReq;
        rtb_LeCITR_b_V2HReqFA_out_d = false;

        /* Transition: '<S930>:25' */
    }
    else
    {
        /* Transition: '<S930>:24' */
        rtb_LeCITR_b_V2HReqFA_out_d = true;
    }

    /* End of Chart: '<S336>/PokeCITR_b_V2HReqChrt' */

    /* Outport: '<Root>/VeCITR_b_V2HReq' incorporates:
     *  SignalConversion generated from: '<S336>/VeCITR_b_V2HReq'
     */
    (void)Rte_Write_VeCITR_b_V2HReq_Value(CITR_ac_B.LeCITR_b_V2HReq_out);

    /* Outport: '<Root>/VeCITR_b_V2HReqFA' incorporates:
     *  SignalConversion generated from: '<S336>/VeCITR_b_V2HReqFA'
     */
    (void)Rte_Write_VeCITR_b_V2HReqFA_Value(rtb_LeCITR_b_V2HReqFA_out_d);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_V2HReq' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_V2HSubmit(VAR(boolean, AUTOMATIC)
    LeCITR_b_V2HSubmit, VAR(boolean, AUTOMATIC) LeCITR_b_V2HSubmitFA)
{
    boolean rtb_LeCITR_b_V2HSubmitFA_out_k;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_V2HSubmit' */
    /* Chart: '<S337>/PokeCITR_b_V2HSubmitChrt' incorporates:
     *  SignalConversion generated from: '<S337>/LeCITR_e_FOTA_Installation_Status1'
     *  SignalConversion generated from: '<S337>/LeCITR_e_FOTA_Installation_Status'
     */
    /* Gateway: PokeCITR_b_V2HSubmit/PokeCITR_b_V2HSubmitChrt */
    /* During: PokeCITR_b_V2HSubmit/PokeCITR_b_V2HSubmitChrt */
    /* Entry Internal: PokeCITR_b_V2HSubmit/PokeCITR_b_V2HSubmitChrt */
    /* Transition: '<S931>:2' */
    if (!LeCITR_b_V2HSubmitFA)
    {
        /* Transition: '<S931>:20' */
        /* Transition: '<S931>:23' */
        CITR_ac_B.LeCITR_b_V2HSubmit_out = LeCITR_b_V2HSubmit;
        rtb_LeCITR_b_V2HSubmitFA_out_k = false;

        /* Transition: '<S931>:25' */
    }
    else
    {
        /* Transition: '<S931>:24' */
        rtb_LeCITR_b_V2HSubmitFA_out_k = true;
    }

    /* End of Chart: '<S337>/PokeCITR_b_V2HSubmitChrt' */

    /* Outport: '<Root>/VeCITR_b_V2HSubmit' incorporates:
     *  SignalConversion generated from: '<S337>/VeCITR_b_V2HSubmit'
     */
    (void)Rte_Write_VeCITR_b_V2HSubmit_Value(CITR_ac_B.LeCITR_b_V2HSubmit_out);

    /* Outport: '<Root>/VeCITR_b_V2HSubmitFA' incorporates:
     *  SignalConversion generated from: '<S337>/VeCITR_b_V2HSubmitFA'
     */
    (void)Rte_Write_VeCITR_b_V2HSubmitFA_Value(rtb_LeCITR_b_V2HSubmitFA_out_k);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_V2HSubmit' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_V2LModeReq(VAR(boolean, AUTOMATIC)
    LeCITR_b_V2LModeReq, VAR(boolean, AUTOMATIC) LeCITR_b_V2LModeReqFA)
{
    boolean rtb_LeCITR_b_V2LModeReqFA_out_n;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_V2LModeReq' */
    /* Chart: '<S338>/PokeCITR_b_V2LModeReqChrt' incorporates:
     *  SignalConversion generated from: '<S338>/LeCITR_e_FOTA_Installation_Status1'
     *  SignalConversion generated from: '<S338>/LeCITR_e_FOTA_Installation_Status'
     */
    /* Gateway: PokeCITR_b_V2LModeReq/PokeCITR_b_V2LModeReqChrt */
    /* During: PokeCITR_b_V2LModeReq/PokeCITR_b_V2LModeReqChrt */
    /* Entry Internal: PokeCITR_b_V2LModeReq/PokeCITR_b_V2LModeReqChrt */
    /* Transition: '<S932>:2' */
    if (!LeCITR_b_V2LModeReqFA)
    {
        /* Transition: '<S932>:20' */
        /* Transition: '<S932>:23' */
        CITR_ac_B.LeCITR_b_V2LModeReq_out = LeCITR_b_V2LModeReq;
        rtb_LeCITR_b_V2LModeReqFA_out_n = false;

        /* Transition: '<S932>:25' */
    }
    else
    {
        /* Transition: '<S932>:24' */
        rtb_LeCITR_b_V2LModeReqFA_out_n = true;
    }

    /* End of Chart: '<S338>/PokeCITR_b_V2LModeReqChrt' */

    /* Outport: '<Root>/VeCITR_b_V2LModeReq' incorporates:
     *  SignalConversion generated from: '<S338>/VeCITR_b_V2LModeReq'
     */
    (void)Rte_Write_VeCITR_b_V2LModeReq_Value(CITR_ac_B.LeCITR_b_V2LModeReq_out);

    /* Outport: '<Root>/VeCITR_b_V2LModeReqFA' incorporates:
     *  SignalConversion generated from: '<S338>/VeCITR_b_V2LModeReqFA'
     */
    (void)Rte_Write_VeCITR_b_V2LModeReqFA_Value(rtb_LeCITR_b_V2LModeReqFA_out_n);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_V2LModeReq' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_V2LSubmit(VAR(boolean, AUTOMATIC)
    LeCITR_b_V2LSubmit, VAR(boolean, AUTOMATIC) LeCITR_b_V2LSubmitFA)
{
    boolean rtb_LeCITR_b_V2LSubmitFA_out_e;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_V2LSubmit' */
    /* Chart: '<S339>/PokeCITR_b_V2LSubmitChrt' incorporates:
     *  SignalConversion generated from: '<S339>/LeCITR_e_FOTA_Installation_Status1'
     *  SignalConversion generated from: '<S339>/LeCITR_e_FOTA_Installation_Status'
     */
    /* Gateway: PokeCITR_b_V2LSubmit/PokeCITR_b_V2LSubmitChrt */
    /* During: PokeCITR_b_V2LSubmit/PokeCITR_b_V2LSubmitChrt */
    /* Entry Internal: PokeCITR_b_V2LSubmit/PokeCITR_b_V2LSubmitChrt */
    /* Transition: '<S933>:2' */
    if (!LeCITR_b_V2LSubmitFA)
    {
        /* Transition: '<S933>:20' */
        /* Transition: '<S933>:23' */
        CITR_ac_B.LeCITR_b_V2LSubmit_out = LeCITR_b_V2LSubmit;
        rtb_LeCITR_b_V2LSubmitFA_out_e = false;

        /* Transition: '<S933>:25' */
    }
    else
    {
        /* Transition: '<S933>:24' */
        rtb_LeCITR_b_V2LSubmitFA_out_e = true;
    }

    /* End of Chart: '<S339>/PokeCITR_b_V2LSubmitChrt' */

    /* Outport: '<Root>/VeCITR_b_V2LSubmit' incorporates:
     *  SignalConversion generated from: '<S339>/VeCITR_b_V2LSubmit'
     */
    (void)Rte_Write_VeCITR_b_V2LSubmit_Value(CITR_ac_B.LeCITR_b_V2LSubmit_out);

    /* Outport: '<Root>/VeCITR_b_V2LSubmitFA' incorporates:
     *  SignalConversion generated from: '<S339>/VeCITR_b_V2LSubmitFA'
     */
    (void)Rte_Write_VeCITR_b_V2LSubmitFA_Value(rtb_LeCITR_b_V2LSubmitFA_out_e);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_V2LSubmit' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_V2LTrunkReq(VAR(boolean, AUTOMATIC)
    LeCITR_b_V2LTrunkReq, VAR(boolean, AUTOMATIC) LeCITR_b_V2LTrunkReqFA)
{
    boolean rtb_LeCITR_b_V2LTrunkReqFA_out_p;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_V2LTrunkReq' */
    /* Chart: '<S340>/PokeCITR_b_V2LTrunkReqChrt' incorporates:
     *  SignalConversion generated from: '<S340>/LeCITR_e_FOTA_Installation_Status1'
     *  SignalConversion generated from: '<S340>/LeCITR_e_FOTA_Installation_Status'
     */
    /* Gateway: PokeCITR_b_V2LTrunkReq/PokeCITR_b_V2LTrunkReqChrt */
    /* During: PokeCITR_b_V2LTrunkReq/PokeCITR_b_V2LTrunkReqChrt */
    /* Entry Internal: PokeCITR_b_V2LTrunkReq/PokeCITR_b_V2LTrunkReqChrt */
    /* Transition: '<S934>:2' */
    if (!LeCITR_b_V2LTrunkReqFA)
    {
        /* Transition: '<S934>:20' */
        /* Transition: '<S934>:23' */
        CITR_ac_B.LeCITR_b_V2LTrunkReq_out = LeCITR_b_V2LTrunkReq;
        rtb_LeCITR_b_V2LTrunkReqFA_out_p = false;

        /* Transition: '<S934>:25' */
    }
    else
    {
        /* Transition: '<S934>:24' */
        rtb_LeCITR_b_V2LTrunkReqFA_out_p = true;
    }

    /* End of Chart: '<S340>/PokeCITR_b_V2LTrunkReqChrt' */

    /* Outport: '<Root>/VeCITR_b_V2LTrunkReq' incorporates:
     *  SignalConversion generated from: '<S340>/VeCITR_b_V2LTrunkReq'
     */
    (void)Rte_Write_VeCITR_b_V2LTrunkReq_Value
        (CITR_ac_B.LeCITR_b_V2LTrunkReq_out);

    /* Outport: '<Root>/VeCITR_b_V2LTrunkReqFA' incorporates:
     *  SignalConversion generated from: '<S340>/VeCITR_b_V2LTrunkReqFA'
     */
    (void)Rte_Write_VeCITR_b_V2LTrunkReqFA_Value
        (rtb_LeCITR_b_V2LTrunkReqFA_out_p);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_V2LTrunkReq' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_V2L_AllReq(VAR(boolean, AUTOMATIC)
    LeCITR_b_V2L_AllReq, VAR(boolean, AUTOMATIC) LeCITR_b_V2L_AllReqFA)
{
    boolean rtb_LeCITR_b_V2L_AllReqFA_out_p;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_V2L_AllReq' */
    /* Chart: '<S341>/PokeCITR_b_V2L_AllReqChrt' incorporates:
     *  SignalConversion generated from: '<S341>/LeCITR_e_FOTA_Installation_Status1'
     *  SignalConversion generated from: '<S341>/LeCITR_e_FOTA_Installation_Status'
     */
    /* Gateway: PokeCITR_b_V2L_AllReq/PokeCITR_b_V2L_AllReqChrt */
    /* During: PokeCITR_b_V2L_AllReq/PokeCITR_b_V2L_AllReqChrt */
    /* Entry Internal: PokeCITR_b_V2L_AllReq/PokeCITR_b_V2L_AllReqChrt */
    /* Transition: '<S935>:2' */
    if (!LeCITR_b_V2L_AllReqFA)
    {
        /* Transition: '<S935>:20' */
        /* Transition: '<S935>:23' */
        CITR_ac_B.LeCITR_b_V2L_AllReq_out = LeCITR_b_V2L_AllReq;
        rtb_LeCITR_b_V2L_AllReqFA_out_p = false;

        /* Transition: '<S935>:25' */
    }
    else
    {
        /* Transition: '<S935>:24' */
        rtb_LeCITR_b_V2L_AllReqFA_out_p = true;
    }

    /* End of Chart: '<S341>/PokeCITR_b_V2L_AllReqChrt' */

    /* Outport: '<Root>/VeCITR_b_V2L_AllReq' incorporates:
     *  SignalConversion generated from: '<S341>/VeCITR_b_V2L_AllReq'
     */
    (void)Rte_Write_VeCITR_b_V2L_AllReq_Value(CITR_ac_B.LeCITR_b_V2L_AllReq_out);

    /* Outport: '<Root>/VeCITR_b_V2L_AllReqFA' incorporates:
     *  SignalConversion generated from: '<S341>/VeCITR_b_V2L_AllReqFA'
     */
    (void)Rte_Write_VeCITR_b_V2L_AllReqFA_Value(rtb_LeCITR_b_V2L_AllReqFA_out_p);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_V2L_AllReq' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_V2L_FrunkReq(VAR(boolean, AUTOMATIC)
    LeCITR_b_V2L_FrunkReq, VAR(boolean, AUTOMATIC) LeCITR_b_V2L_FrunkReqFA)
{
    boolean rtb_LeCITR_b_V2L_FrunkReqFA_out_f;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_V2L_FrunkReq' */
    /* Chart: '<S342>/PokeCITR_b_V2L_FrunkReqChrt' incorporates:
     *  SignalConversion generated from: '<S342>/LeCITR_e_FOTA_Installation_Status1'
     *  SignalConversion generated from: '<S342>/LeCITR_e_FOTA_Installation_Status'
     */
    /* Gateway: PokeCITR_b_V2L_FrunkReq/PokeCITR_b_V2L_FrunkReqChrt */
    /* During: PokeCITR_b_V2L_FrunkReq/PokeCITR_b_V2L_FrunkReqChrt */
    /* Entry Internal: PokeCITR_b_V2L_FrunkReq/PokeCITR_b_V2L_FrunkReqChrt */
    /* Transition: '<S936>:2' */
    if (!LeCITR_b_V2L_FrunkReqFA)
    {
        /* Transition: '<S936>:20' */
        /* Transition: '<S936>:23' */
        CITR_ac_B.LeCITR_b_V2L_FrunkReq_out = LeCITR_b_V2L_FrunkReq;
        rtb_LeCITR_b_V2L_FrunkReqFA_out_f = false;

        /* Transition: '<S936>:25' */
    }
    else
    {
        /* Transition: '<S936>:24' */
        rtb_LeCITR_b_V2L_FrunkReqFA_out_f = true;
    }

    /* End of Chart: '<S342>/PokeCITR_b_V2L_FrunkReqChrt' */

    /* Outport: '<Root>/VeCITR_b_V2L_FrunkReq' incorporates:
     *  SignalConversion generated from: '<S342>/VeCITR_b_V2L_FrunkReq'
     */
    (void)Rte_Write_VeCITR_b_V2L_FrunkReq_Value
        (CITR_ac_B.LeCITR_b_V2L_FrunkReq_out);

    /* Outport: '<Root>/VeCITR_b_V2L_FrunkReqFA' incorporates:
     *  SignalConversion generated from: '<S342>/VeCITR_b_V2L_FrunkReqFA'
     */
    (void)Rte_Write_VeCITR_b_V2L_FrunkReqFA_Value
        (rtb_LeCITR_b_V2L_FrunkReqFA_out_f);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_V2L_FrunkReq' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_V2VModeReq(VAR(boolean, AUTOMATIC)
    LeCITR_b_V2VModeReq, VAR(boolean, AUTOMATIC) LeCITR_b_V2VModeReqFA)
{
    boolean rtb_LeCITR_b_V2VModeReqFA_out_m;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_V2VModeReq' */
    /* Chart: '<S343>/PokeCITR_b_V2VModeReqChrt' incorporates:
     *  SignalConversion generated from: '<S343>/LeCITR_e_FOTA_Installation_Status1'
     *  SignalConversion generated from: '<S343>/LeCITR_e_FOTA_Installation_Status'
     */
    /* Gateway: PokeCITR_b_V2VModeReq/PokeCITR_b_V2VModeReqChrt */
    /* During: PokeCITR_b_V2VModeReq/PokeCITR_b_V2VModeReqChrt */
    /* Entry Internal: PokeCITR_b_V2VModeReq/PokeCITR_b_V2VModeReqChrt */
    /* Transition: '<S937>:2' */
    if (!LeCITR_b_V2VModeReqFA)
    {
        /* Transition: '<S937>:20' */
        /* Transition: '<S937>:23' */
        CITR_ac_B.LeCITR_b_V2VModeReq_out = LeCITR_b_V2VModeReq;
        rtb_LeCITR_b_V2VModeReqFA_out_m = false;

        /* Transition: '<S937>:25' */
    }
    else
    {
        /* Transition: '<S937>:24' */
        rtb_LeCITR_b_V2VModeReqFA_out_m = true;
    }

    /* End of Chart: '<S343>/PokeCITR_b_V2VModeReqChrt' */

    /* Outport: '<Root>/VeCITR_b_V2VModeReq' incorporates:
     *  SignalConversion generated from: '<S343>/VeCITR_b_V2VModeReq'
     */
    (void)Rte_Write_VeCITR_b_V2VModeReq_Value(CITR_ac_B.LeCITR_b_V2VModeReq_out);

    /* Outport: '<Root>/VeCITR_b_V2VModeReqFA' incorporates:
     *  SignalConversion generated from: '<S343>/VeCITR_b_V2VModeReqFA'
     */
    (void)Rte_Write_VeCITR_b_V2VModeReqFA_Value(rtb_LeCITR_b_V2VModeReqFA_out_m);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_V2VModeReq' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_V2VReq(VAR(boolean, AUTOMATIC) LeCITR_b_V2VReq,
    VAR(boolean, AUTOMATIC) LeCITR_b_V2VReqFA)
{
    boolean rtb_LeCITR_b_V2VReqFA_out_h;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_V2VReq' */
    /* Chart: '<S344>/PokeCITR_b_V2VReqChrt' incorporates:
     *  SignalConversion generated from: '<S344>/LeCITR_e_FOTA_Installation_Status1'
     *  SignalConversion generated from: '<S344>/LeCITR_e_FOTA_Installation_Status'
     */
    /* Gateway: PokeCITR_b_V2VReq/PokeCITR_b_V2VReqChrt */
    /* During: PokeCITR_b_V2VReq/PokeCITR_b_V2VReqChrt */
    /* Entry Internal: PokeCITR_b_V2VReq/PokeCITR_b_V2VReqChrt */
    /* Transition: '<S938>:2' */
    if (!LeCITR_b_V2VReqFA)
    {
        /* Transition: '<S938>:20' */
        /* Transition: '<S938>:23' */
        CITR_ac_B.LeCITR_b_V2VReq_out = LeCITR_b_V2VReq;
        rtb_LeCITR_b_V2VReqFA_out_h = false;

        /* Transition: '<S938>:25' */
    }
    else
    {
        /* Transition: '<S938>:24' */
        rtb_LeCITR_b_V2VReqFA_out_h = true;
    }

    /* End of Chart: '<S344>/PokeCITR_b_V2VReqChrt' */

    /* Outport: '<Root>/VeCITR_b_V2VReq' incorporates:
     *  SignalConversion generated from: '<S344>/VeCITR_b_V2VReq'
     */
    (void)Rte_Write_VeCITR_b_V2VReq_Value(CITR_ac_B.LeCITR_b_V2VReq_out);

    /* Outport: '<Root>/VeCITR_b_V2VReqFA' incorporates:
     *  SignalConversion generated from: '<S344>/VeCITR_b_V2VReqFA'
     */
    (void)Rte_Write_VeCITR_b_V2VReqFA_Value(rtb_LeCITR_b_V2VReqFA_out_h);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_V2VReq' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_b_V2VSubmit(VAR(boolean, AUTOMATIC)
    LeCITR_b_V2VSubmit, VAR(boolean, AUTOMATIC) LeCITR_b_V2VSubmitFA)
{
    boolean rtb_LeCITR_b_V2VSubmitFA_out_n;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_b_V2VSubmit' */
    /* Chart: '<S345>/PokeCITR_b_V2VSubmitChrt' incorporates:
     *  SignalConversion generated from: '<S345>/LeCITR_e_FOTA_Installation_Status1'
     *  SignalConversion generated from: '<S345>/LeCITR_e_FOTA_Installation_Status'
     */
    /* Gateway: PokeCITR_b_V2VSubmit/PokeCITR_b_V2VSubmitChrt */
    /* During: PokeCITR_b_V2VSubmit/PokeCITR_b_V2VSubmitChrt */
    /* Entry Internal: PokeCITR_b_V2VSubmit/PokeCITR_b_V2VSubmitChrt */
    /* Transition: '<S939>:2' */
    if (!LeCITR_b_V2VSubmitFA)
    {
        /* Transition: '<S939>:20' */
        /* Transition: '<S939>:23' */
        CITR_ac_B.LeCITR_b_V2VSubmit_out = LeCITR_b_V2VSubmit;
        rtb_LeCITR_b_V2VSubmitFA_out_n = false;

        /* Transition: '<S939>:25' */
    }
    else
    {
        /* Transition: '<S939>:24' */
        rtb_LeCITR_b_V2VSubmitFA_out_n = true;
    }

    /* End of Chart: '<S345>/PokeCITR_b_V2VSubmitChrt' */

    /* Outport: '<Root>/VeCITR_b_V2VSubmit' incorporates:
     *  SignalConversion generated from: '<S345>/VeCITR_b_V2VSubmit'
     */
    (void)Rte_Write_VeCITR_b_V2VSubmit_Value(CITR_ac_B.LeCITR_b_V2VSubmit_out);

    /* Outport: '<Root>/VeCITR_b_V2VSubmitFA' incorporates:
     *  SignalConversion generated from: '<S345>/VeCITR_b_V2VSubmitFA'
     */
    (void)Rte_Write_VeCITR_b_V2VSubmitFA_Value(rtb_LeCITR_b_V2VSubmitFA_out_n);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_b_V2VSubmit' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_BCIM_Ind1_FailSts(VAR(TeCITR_e_BCIM_LED_Sts,
    AUTOMATIC) LeCITR_e_BCIM_Ind1_FailSts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_BCIM_Ind1_FailSts' */
    /* Outport: '<Root>/VeCITR_e_BCIM_Ind1_FailSts' incorporates:
     *  SignalConversion generated from: '<S346>/VeCITR_e_BCIM_Ind1_FailSts'
     *  SignalConversion generated from: '<S346>/LeCITR_e_BCIM_Ind1_FailSts'
     */
    /* Gateway: PokeCITR_e_BCIM_Ind1_FailSts/PokeCITR_e_BCIM_Ind1_FailStsChrt */
    /* During: PokeCITR_e_BCIM_Ind1_FailSts/PokeCITR_e_BCIM_Ind1_FailStsChrt */
    /* Entry Internal: PokeCITR_e_BCIM_Ind1_FailSts/PokeCITR_e_BCIM_Ind1_FailStsChrt */
    /* Transition: '<S940>:2' */
    (void)Rte_Write_VeCITR_e_BCIM_Ind1_FailSts_Value(LeCITR_e_BCIM_Ind1_FailSts);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_BCIM_Ind1_FailSts' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_BCIM_Ind1_Fdbk(VAR(TeCITR_e_BCIM_Indication,
    AUTOMATIC) LeCITR_e_BCIM_Ind1_Fdbk, VAR(boolean, AUTOMATIC)
    LeCITR_b_BCIM_Ind1_FdbkFA)
{
    boolean rtb_LeCITR_b_BCIM_Ind1_FdbkFA_out_e;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_BCIM_Ind1_Fdbk' */
    /* Chart: '<S347>/PokeCITR_e_BCIM_Ind1_FdbkChrt' incorporates:
     *  SignalConversion generated from: '<S347>/LeCITR_b_BCIM_Ind1_FdbkFA'
     *  SignalConversion generated from: '<S347>/LeCITR_e_BCIM_Ind1_Fdbk'
     */
    /* Gateway: PokeCITR_e_BCIM_Ind1_Fdbk/PokeCITR_e_BCIM_Ind1_FdbkChrt */
    /* During: PokeCITR_e_BCIM_Ind1_Fdbk/PokeCITR_e_BCIM_Ind1_FdbkChrt */
    /* Entry Internal: PokeCITR_e_BCIM_Ind1_Fdbk/PokeCITR_e_BCIM_Ind1_FdbkChrt */
    /* Transition: '<S941>:2' */
    if (!LeCITR_b_BCIM_Ind1_FdbkFA)
    {
        /* Transition: '<S941>:3' */
        /* Transition: '<S941>:15' */
        CITR_ac_B.LeCITR_e_BCIM_Ind1_Fdbk_out = LeCITR_e_BCIM_Ind1_Fdbk;
        rtb_LeCITR_b_BCIM_Ind1_FdbkFA_out_e = false;

        /* Transition: '<S941>:18' */
    }
    else
    {
        /* Transition: '<S941>:4' */
        rtb_LeCITR_b_BCIM_Ind1_FdbkFA_out_e = true;
    }

    /* End of Chart: '<S347>/PokeCITR_e_BCIM_Ind1_FdbkChrt' */

    /* Outport: '<Root>/VeCITR_b_BCIM_Ind1_FdbkFA' incorporates:
     *  SignalConversion generated from: '<S347>/VeCITR_b_BCIM_Ind1_FdbkFA'
     */
    (void)Rte_Write_VeCITR_b_BCIM_Ind1_FdbkFA_Value
        (rtb_LeCITR_b_BCIM_Ind1_FdbkFA_out_e);

    /* Outport: '<Root>/VeCITR_e_BCIM_Ind1_Fdbk' incorporates:
     *  SignalConversion generated from: '<S347>/VeCITR_e_BCIM_Ind1_Fdbk'
     */
    (void)Rte_Write_VeCITR_e_BCIM_Ind1_Fdbk_Value
        (CITR_ac_B.LeCITR_e_BCIM_Ind1_Fdbk_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_BCIM_Ind1_Fdbk' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_BCIM_Ind2_FailSts(VAR(TeCITR_e_BCIM_LED_Sts,
    AUTOMATIC) LeCITR_e_BCIM_Ind2_FailSts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_BCIM_Ind2_FailSts' */
    /* Outport: '<Root>/VeCITR_e_BCIM_Ind2_FailSts' incorporates:
     *  SignalConversion generated from: '<S348>/VeCITR_e_BCIM_Ind2_FailSts'
     *  SignalConversion generated from: '<S348>/LeCITR_e_BCIM_Ind2_FailSts'
     */
    /* Gateway: PokeCITR_e_BCIM_Ind2_FailSts/PokeCITR_e_BCIM_Ind2_FailStsChrt */
    /* During: PokeCITR_e_BCIM_Ind2_FailSts/PokeCITR_e_BCIM_Ind2_FailStsChrt */
    /* Entry Internal: PokeCITR_e_BCIM_Ind2_FailSts/PokeCITR_e_BCIM_Ind2_FailStsChrt */
    /* Transition: '<S942>:2' */
    (void)Rte_Write_VeCITR_e_BCIM_Ind2_FailSts_Value(LeCITR_e_BCIM_Ind2_FailSts);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_BCIM_Ind2_FailSts' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_BCIM_Ind2_Fdbk(VAR(TeCITR_e_BCIM_Indication,
    AUTOMATIC) LeCITR_e_BCIM_Ind2_Fdbk, VAR(boolean, AUTOMATIC)
    LeCITR_b_BCIM_Ind2_FdbkFA)
{
    boolean rtb_LeCITR_b_BCIM_Ind2_FdbkFA_out_l;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_BCIM_Ind2_Fdbk' */
    /* Chart: '<S349>/PokeCITR_e_BCIM_Ind2_FdbkChrt' incorporates:
     *  SignalConversion generated from: '<S349>/LeCITR_b_BCIM_Ind2_FdbkFA'
     *  SignalConversion generated from: '<S349>/LeCITR_e_BCIM_Ind2_Fdbk'
     */
    /* Gateway: PokeCITR_e_BCIM_Ind2_Fdbk/PokeCITR_e_BCIM_Ind2_FdbkChrt */
    /* During: PokeCITR_e_BCIM_Ind2_Fdbk/PokeCITR_e_BCIM_Ind2_FdbkChrt */
    /* Entry Internal: PokeCITR_e_BCIM_Ind2_Fdbk/PokeCITR_e_BCIM_Ind2_FdbkChrt */
    /* Transition: '<S943>:2' */
    if (!LeCITR_b_BCIM_Ind2_FdbkFA)
    {
        /* Transition: '<S943>:3' */
        /* Transition: '<S943>:15' */
        CITR_ac_B.LeCITR_e_BCIM_Ind2_Fdbk_out = LeCITR_e_BCIM_Ind2_Fdbk;
        rtb_LeCITR_b_BCIM_Ind2_FdbkFA_out_l = false;

        /* Transition: '<S943>:18' */
    }
    else
    {
        /* Transition: '<S943>:4' */
        rtb_LeCITR_b_BCIM_Ind2_FdbkFA_out_l = true;
    }

    /* End of Chart: '<S349>/PokeCITR_e_BCIM_Ind2_FdbkChrt' */

    /* Outport: '<Root>/VeCITR_b_BCIM_Ind2_FdbkFA' incorporates:
     *  SignalConversion generated from: '<S349>/VeCITR_b_BCIM_Ind2_FdbkFA'
     */
    (void)Rte_Write_VeCITR_b_BCIM_Ind2_FdbkFA_Value
        (rtb_LeCITR_b_BCIM_Ind2_FdbkFA_out_l);

    /* Outport: '<Root>/VeCITR_e_BCIM_Ind2_Fdbk' incorporates:
     *  SignalConversion generated from: '<S349>/VeCITR_e_BCIM_Ind2_Fdbk'
     */
    (void)Rte_Write_VeCITR_e_BCIM_Ind2_Fdbk_Value
        (CITR_ac_B.LeCITR_e_BCIM_Ind2_Fdbk_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_BCIM_Ind2_Fdbk' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_BCIM_Ind3_FailSts(VAR(TeCITR_e_BCIM_LED_Sts,
    AUTOMATIC) LeCITR_e_BCIM_Ind3_FailSts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_BCIM_Ind3_FailSts' */
    /* Outport: '<Root>/VeCITR_e_BCIM_Ind3_FailSts' incorporates:
     *  SignalConversion generated from: '<S350>/VeCITR_e_BCIM_Ind3_FailSts'
     *  SignalConversion generated from: '<S350>/LeCITR_e_BCIM_Ind3_FailSts'
     */
    /* Gateway: PokeCITR_e_BCIM_Ind3_FailSts/PokeCITR_e_BCIM_Ind3_FailStsChrt */
    /* During: PokeCITR_e_BCIM_Ind3_FailSts/PokeCITR_e_BCIM_Ind3_FailStsChrt */
    /* Entry Internal: PokeCITR_e_BCIM_Ind3_FailSts/PokeCITR_e_BCIM_Ind3_FailStsChrt */
    /* Transition: '<S944>:2' */
    (void)Rte_Write_VeCITR_e_BCIM_Ind3_FailSts_Value(LeCITR_e_BCIM_Ind3_FailSts);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_BCIM_Ind3_FailSts' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_BCIM_Ind3_Fdbk(VAR(TeCITR_e_BCIM_Indication,
    AUTOMATIC) LeCITR_e_BCIM_Ind3_Fdbk, VAR(boolean, AUTOMATIC)
    LeCITR_b_BCIM_Ind3_FdbkFA)
{
    boolean rtb_LeCITR_b_BCIM_Ind3_FdbkFA_out_c;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_BCIM_Ind3_Fdbk' */
    /* Chart: '<S351>/PokeCITR_e_BCIM_Ind3_FdbkChrt' incorporates:
     *  SignalConversion generated from: '<S351>/LeCITR_b_BCIM_Ind3_FdbkFA'
     *  SignalConversion generated from: '<S351>/LeCITR_e_BCIM_Ind3_Fdbk'
     */
    /* Gateway: PokeCITR_e_BCIM_Ind3_Fdbk/PokeCITR_e_BCIM_Ind3_FdbkChrt */
    /* During: PokeCITR_e_BCIM_Ind3_Fdbk/PokeCITR_e_BCIM_Ind3_FdbkChrt */
    /* Entry Internal: PokeCITR_e_BCIM_Ind3_Fdbk/PokeCITR_e_BCIM_Ind3_FdbkChrt */
    /* Transition: '<S945>:2' */
    if (!LeCITR_b_BCIM_Ind3_FdbkFA)
    {
        /* Transition: '<S945>:3' */
        /* Transition: '<S945>:15' */
        CITR_ac_B.LeCITR_e_BCIM_Ind3_Fdbk_out = LeCITR_e_BCIM_Ind3_Fdbk;
        rtb_LeCITR_b_BCIM_Ind3_FdbkFA_out_c = false;

        /* Transition: '<S945>:18' */
    }
    else
    {
        /* Transition: '<S945>:4' */
        rtb_LeCITR_b_BCIM_Ind3_FdbkFA_out_c = true;
    }

    /* End of Chart: '<S351>/PokeCITR_e_BCIM_Ind3_FdbkChrt' */

    /* Outport: '<Root>/VeCITR_b_BCIM_Ind3_FdbkFA' incorporates:
     *  SignalConversion generated from: '<S351>/VeCITR_b_BCIM_Ind3_FdbkFA'
     */
    (void)Rte_Write_VeCITR_b_BCIM_Ind3_FdbkFA_Value
        (rtb_LeCITR_b_BCIM_Ind3_FdbkFA_out_c);

    /* Outport: '<Root>/VeCITR_e_BCIM_Ind3_Fdbk' incorporates:
     *  SignalConversion generated from: '<S351>/VeCITR_e_BCIM_Ind3_Fdbk'
     */
    (void)Rte_Write_VeCITR_e_BCIM_Ind3_Fdbk_Value
        (CITR_ac_B.LeCITR_e_BCIM_Ind3_Fdbk_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_BCIM_Ind3_Fdbk' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_BCIM_Ind4_FailSts(VAR(TeCITR_e_BCIM_LED_Sts,
    AUTOMATIC) LeCITR_e_BCIM_Ind4_FailSts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_BCIM_Ind4_FailSts' */
    /* Outport: '<Root>/VeCITR_e_BCIM_Ind4_FailSts' incorporates:
     *  SignalConversion generated from: '<S352>/VeCITR_e_BCIM_Ind4_FailSts'
     *  SignalConversion generated from: '<S352>/LeCITR_e_BCIM_Ind4_FailSts'
     */
    /* Gateway: PokeCITR_e_BCIM_Ind4_FailSts/PokeCITR_e_BCIM_Ind4_FailStsChrt */
    /* During: PokeCITR_e_BCIM_Ind4_FailSts/PokeCITR_e_BCIM_Ind4_FailStsChrt */
    /* Entry Internal: PokeCITR_e_BCIM_Ind4_FailSts/PokeCITR_e_BCIM_Ind4_FailStsChrt */
    /* Transition: '<S946>:2' */
    (void)Rte_Write_VeCITR_e_BCIM_Ind4_FailSts_Value(LeCITR_e_BCIM_Ind4_FailSts);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_BCIM_Ind4_FailSts' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_BCIM_Ind4_Fdbk(VAR(TeCITR_e_BCIM_Indication,
    AUTOMATIC) LeCITR_e_BCIM_Ind4_Fdbk, VAR(boolean, AUTOMATIC)
    LeCITR_b_BCIM_Ind4_FdbkFA)
{
    boolean rtb_LeCITR_b_BCIM_Ind4_FdbkFA_out_p;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_BCIM_Ind4_Fdbk' */
    /* Chart: '<S353>/PokeCITR_e_BCIM_Ind4_FdbkChrt' incorporates:
     *  SignalConversion generated from: '<S353>/LeCITR_b_BCIM_Ind4_FdbkFA'
     *  SignalConversion generated from: '<S353>/LeCITR_e_BCIM_Ind4_Fdbk'
     */
    /* Gateway: PokeCITR_e_BCIM_Ind4_Fdbk/PokeCITR_e_BCIM_Ind4_FdbkChrt */
    /* During: PokeCITR_e_BCIM_Ind4_Fdbk/PokeCITR_e_BCIM_Ind4_FdbkChrt */
    /* Entry Internal: PokeCITR_e_BCIM_Ind4_Fdbk/PokeCITR_e_BCIM_Ind4_FdbkChrt */
    /* Transition: '<S947>:2' */
    if (!LeCITR_b_BCIM_Ind4_FdbkFA)
    {
        /* Transition: '<S947>:3' */
        /* Transition: '<S947>:15' */
        CITR_ac_B.LeCITR_e_BCIM_Ind4_Fdbk_out = LeCITR_e_BCIM_Ind4_Fdbk;
        rtb_LeCITR_b_BCIM_Ind4_FdbkFA_out_p = false;

        /* Transition: '<S947>:18' */
    }
    else
    {
        /* Transition: '<S947>:4' */
        rtb_LeCITR_b_BCIM_Ind4_FdbkFA_out_p = true;
    }

    /* End of Chart: '<S353>/PokeCITR_e_BCIM_Ind4_FdbkChrt' */

    /* Outport: '<Root>/VeCITR_b_BCIM_Ind4_FdbkFA' incorporates:
     *  SignalConversion generated from: '<S353>/VeCITR_b_BCIM_Ind4_FdbkFA'
     */
    (void)Rte_Write_VeCITR_b_BCIM_Ind4_FdbkFA_Value
        (rtb_LeCITR_b_BCIM_Ind4_FdbkFA_out_p);

    /* Outport: '<Root>/VeCITR_e_BCIM_Ind4_Fdbk' incorporates:
     *  SignalConversion generated from: '<S353>/VeCITR_e_BCIM_Ind4_Fdbk'
     */
    (void)Rte_Write_VeCITR_e_BCIM_Ind4_Fdbk_Value
        (CITR_ac_B.LeCITR_e_BCIM_Ind4_Fdbk_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_BCIM_Ind4_Fdbk' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_BCIM_Ind5_FailSts(VAR(TeCITR_e_BCIM_LED_Sts,
    AUTOMATIC) LeCITR_e_BCIM_Ind5_FailSts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_BCIM_Ind5_FailSts' */
    /* Outport: '<Root>/VeCITR_e_BCIM_Ind5_FailSts' incorporates:
     *  SignalConversion generated from: '<S354>/VeCITR_e_BCIM_Ind5_FailSts'
     *  SignalConversion generated from: '<S354>/LeCITR_e_BCIM_Ind5_FailSts'
     */
    /* Gateway: PokeCITR_e_BCIM_Ind5_FailSts/PokeCITR_e_BCIM_Ind5_FailStsChrt */
    /* During: PokeCITR_e_BCIM_Ind5_FailSts/PokeCITR_e_BCIM_Ind5_FailStsChrt */
    /* Entry Internal: PokeCITR_e_BCIM_Ind5_FailSts/PokeCITR_e_BCIM_Ind5_FailStsChrt */
    /* Transition: '<S948>:2' */
    (void)Rte_Write_VeCITR_e_BCIM_Ind5_FailSts_Value(LeCITR_e_BCIM_Ind5_FailSts);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_BCIM_Ind5_FailSts' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_BCIM_Ind5_Fdbk(VAR(TeCITR_e_BCIM_Indication,
    AUTOMATIC) LeCITR_e_BCIM_Ind5_Fdbk, VAR(boolean, AUTOMATIC)
    LeCITR_b_BCIM_Ind5_FdbkFA)
{
    boolean rtb_LeCITR_b_BCIM_Ind5_FdbkFA_out_h;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_BCIM_Ind5_Fdbk' */
    /* Chart: '<S355>/PokeCITR_e_BCIM_Ind5_FdbkChrt' incorporates:
     *  SignalConversion generated from: '<S355>/LeCITR_b_BCIM_Ind5_FdbkFA'
     *  SignalConversion generated from: '<S355>/LeCITR_e_BCIM_Ind5_Fdbk'
     */
    /* Gateway: PokeCITR_e_BCIM_Ind5_Fdbk/PokeCITR_e_BCIM_Ind5_FdbkChrt */
    /* During: PokeCITR_e_BCIM_Ind5_Fdbk/PokeCITR_e_BCIM_Ind5_FdbkChrt */
    /* Entry Internal: PokeCITR_e_BCIM_Ind5_Fdbk/PokeCITR_e_BCIM_Ind5_FdbkChrt */
    /* Transition: '<S949>:2' */
    if (!LeCITR_b_BCIM_Ind5_FdbkFA)
    {
        /* Transition: '<S949>:3' */
        /* Transition: '<S949>:15' */
        CITR_ac_B.LeCITR_e_BCIM_Ind5_Fdbk_out = LeCITR_e_BCIM_Ind5_Fdbk;
        rtb_LeCITR_b_BCIM_Ind5_FdbkFA_out_h = false;

        /* Transition: '<S949>:18' */
    }
    else
    {
        /* Transition: '<S949>:4' */
        rtb_LeCITR_b_BCIM_Ind5_FdbkFA_out_h = true;
    }

    /* End of Chart: '<S355>/PokeCITR_e_BCIM_Ind5_FdbkChrt' */

    /* Outport: '<Root>/VeCITR_b_BCIM_Ind5_FdbkFA' incorporates:
     *  SignalConversion generated from: '<S355>/VeCITR_b_BCIM_Ind5_FdbkFA'
     */
    (void)Rte_Write_VeCITR_b_BCIM_Ind5_FdbkFA_Value
        (rtb_LeCITR_b_BCIM_Ind5_FdbkFA_out_h);

    /* Outport: '<Root>/VeCITR_e_BCIM_Ind5_Fdbk' incorporates:
     *  SignalConversion generated from: '<S355>/VeCITR_e_BCIM_Ind5_Fdbk'
     */
    (void)Rte_Write_VeCITR_e_BCIM_Ind5_Fdbk_Value
        (CITR_ac_B.LeCITR_e_BCIM_Ind5_Fdbk_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_BCIM_Ind5_Fdbk' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_BCIM_Ind_Color_Fdbk(VAR(TeCITR_e_BCIM_Color,
    AUTOMATIC) LeCITR_e_BCIM_Ind_Color_Fdbk, VAR(boolean, AUTOMATIC)
    LeCITR_b_BCIM_Ind_Color_FdbkFA)
{
    boolean rtb_LeCITR_b_BCIM_Ind_Color_FdbkFA_out_m;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_BCIM_Ind_Color_Fdbk' */
    /* Chart: '<S356>/PokeCITR_e_BCIM_Ind_Color_FdbkChrt' incorporates:
     *  SignalConversion generated from: '<S356>/LeCITR_b_BCIM_Ind_Color_FdbkFA'
     *  SignalConversion generated from: '<S356>/LeCITR_e_BCIM_Ind_Color_Fdbk'
     */
    /* Gateway: PokeCITR_e_BCIM_Ind_Color_Fdbk/PokeCITR_e_BCIM_Ind_Color_FdbkChrt */
    /* During: PokeCITR_e_BCIM_Ind_Color_Fdbk/PokeCITR_e_BCIM_Ind_Color_FdbkChrt */
    /* Entry Internal: PokeCITR_e_BCIM_Ind_Color_Fdbk/PokeCITR_e_BCIM_Ind_Color_FdbkChrt */
    /* Transition: '<S950>:2' */
    if (!LeCITR_b_BCIM_Ind_Color_FdbkFA)
    {
        /* Transition: '<S950>:3' */
        /* Transition: '<S950>:15' */
        CITR_ac_B.LeCITR_e_BCIM_Ind_Color_Fdbk_out =
            LeCITR_e_BCIM_Ind_Color_Fdbk;
        rtb_LeCITR_b_BCIM_Ind_Color_FdbkFA_out_m = false;

        /* Transition: '<S950>:18' */
    }
    else
    {
        /* Transition: '<S950>:4' */
        rtb_LeCITR_b_BCIM_Ind_Color_FdbkFA_out_m = true;
    }

    /* End of Chart: '<S356>/PokeCITR_e_BCIM_Ind_Color_FdbkChrt' */

    /* Outport: '<Root>/VeCITR_b_BCIM_Ind_Color_FdbkFA' incorporates:
     *  SignalConversion generated from: '<S356>/VeCITR_b_BCIM_Ind_Color_FdbkFA'
     */
    (void)Rte_Write_VeCITR_b_BCIM_Ind_Color_FdbkFA_Value
        (rtb_LeCITR_b_BCIM_Ind_Color_FdbkFA_out_m);

    /* Outport: '<Root>/VeCITR_e_BCIM_Ind_Color_Fdbk' incorporates:
     *  SignalConversion generated from: '<S356>/VeCITR_e_BCIM_Ind_Color_Fdbk'
     */
    (void)Rte_Write_VeCITR_e_BCIM_Ind_Color_Fdbk_Value
        (CITR_ac_B.LeCITR_e_BCIM_Ind_Color_Fdbk_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_BCIM_Ind_Color_Fdbk' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_CPIM_BlueLED_FailSts(VAR(TeCITR_e_CPIM_LED_Sts,
    AUTOMATIC) LeCITR_e_CPIM_BlueLED_FailSts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_CPIM_BlueLED_FailSts' */
    /* Outport: '<Root>/VeCITR_e_CPIM_BlueLED_FailSts' incorporates:
     *  SignalConversion generated from: '<S357>/VeCITR_e_CPIM_BlueLED_FailSts'
     *  SignalConversion generated from: '<S357>/LeCITR_e_CPIM_BlueLED_FailSts'
     */
    /* Gateway: PokeCITR_e_CPIM_BlueLED_FailSts/PokeCITR_e_CPIM_BlueLED_FailStsChrt */
    /* During: PokeCITR_e_CPIM_BlueLED_FailSts/PokeCITR_e_CPIM_BlueLED_FailStsChrt */
    /* Entry Internal: PokeCITR_e_CPIM_BlueLED_FailSts/PokeCITR_e_CPIM_BlueLED_FailStsChrt */
    /* Transition: '<S951>:2' */
    (void)Rte_Write_VeCITR_e_CPIM_BlueLED_FailSts_Value
        (LeCITR_e_CPIM_BlueLED_FailSts);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_CPIM_BlueLED_FailSts' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_CPIM_GreenLED_FailSts(VAR(TeCITR_e_CPIM_LED_Sts,
    AUTOMATIC) LeCITR_e_CPIM_GreenLED_FailSts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_CPIM_GreenLED_FailSts' */
    /* Outport: '<Root>/VeCITR_e_CPIM_GreenLED_FailSts' incorporates:
     *  SignalConversion generated from: '<S358>/VeCITR_e_CPIM_GreenLED_FailSts'
     *  SignalConversion generated from: '<S358>/LeCITR_e_CPIM_GreenLED_FailSts'
     */
    /* Gateway: PokeCITR_e_CPIM_GreenLED_FailSts/PokeCITR_e_CPIM_GreenLED_FailStsChrt */
    /* During: PokeCITR_e_CPIM_GreenLED_FailSts/PokeCITR_e_CPIM_GreenLED_FailStsChrt */
    /* Entry Internal: PokeCITR_e_CPIM_GreenLED_FailSts/PokeCITR_e_CPIM_GreenLED_FailStsChrt */
    /* Transition: '<S952>:2' */
    (void)Rte_Write_VeCITR_e_CPIM_GreenLED_FailSts_Value
        (LeCITR_e_CPIM_GreenLED_FailSts);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_CPIM_GreenLED_FailSts' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_CPIM_Icon1_Sts(VAR(TeCITR_e_CPIM_Icon_Ind,
    AUTOMATIC) LeCITR_e_CPIM_Icon1_Sts, VAR(boolean, AUTOMATIC)
    LeCITR_b_CPIM_Icon1_StsFA)
{
    boolean rtb_LeCITR_b_CPIM_Icon1_StsFA_out_n;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_CPIM_Icon1_Sts' */
    /* Chart: '<S359>/PokeCITR_e_CPIM_Icon1_StsChrt' incorporates:
     *  SignalConversion generated from: '<S359>/LeCITR_b_CPIM_Icon1_StsFA'
     *  SignalConversion generated from: '<S359>/LeCITR_e_CPIM_Icon1_Sts'
     */
    /* Gateway: PokeCITR_e_CPIM_Icon1_Sts/PokeCITR_e_CPIM_Icon1_StsChrt */
    /* During: PokeCITR_e_CPIM_Icon1_Sts/PokeCITR_e_CPIM_Icon1_StsChrt */
    /* Entry Internal: PokeCITR_e_CPIM_Icon1_Sts/PokeCITR_e_CPIM_Icon1_StsChrt */
    /* Transition: '<S953>:2' */
    if (!LeCITR_b_CPIM_Icon1_StsFA)
    {
        /* Transition: '<S953>:3' */
        /* Transition: '<S953>:15' */
        CITR_ac_B.LeCITR_e_CPIM_Icon1_Sts_out = LeCITR_e_CPIM_Icon1_Sts;
        rtb_LeCITR_b_CPIM_Icon1_StsFA_out_n = false;

        /* Transition: '<S953>:18' */
    }
    else
    {
        /* Transition: '<S953>:4' */
        rtb_LeCITR_b_CPIM_Icon1_StsFA_out_n = true;
    }

    /* End of Chart: '<S359>/PokeCITR_e_CPIM_Icon1_StsChrt' */

    /* Outport: '<Root>/VeCITR_b_CPIM_Icon1_StsFA' incorporates:
     *  SignalConversion generated from: '<S359>/VeCITR_b_CPIM_Icon1_StsFA'
     */
    (void)Rte_Write_VeCITR_b_CPIM_Icon1_StsFA_Value
        (rtb_LeCITR_b_CPIM_Icon1_StsFA_out_n);

    /* Outport: '<Root>/VeCITR_e_CPIM_Icon1_Sts' incorporates:
     *  SignalConversion generated from: '<S359>/VeCITR_e_CPIM_Icon1_Sts'
     */
    (void)Rte_Write_VeCITR_e_CPIM_Icon1_Sts_Value
        (CITR_ac_B.LeCITR_e_CPIM_Icon1_Sts_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_CPIM_Icon1_Sts' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_CPIM_Icon2_Sts(VAR(TeCITR_e_CPIM_Icon_Ind,
    AUTOMATIC) LeCITR_e_CPIM_Icon2_Sts, VAR(boolean, AUTOMATIC)
    LeCITR_b_CPIM_Icon2_StsFA)
{
    boolean rtb_LeCITR_b_CPIM_Icon2_StsFA_out_k;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_CPIM_Icon2_Sts' */
    /* Chart: '<S360>/PokeCITR_e_CPIM_Icon2_StsChrt' incorporates:
     *  SignalConversion generated from: '<S360>/LeCITR_b_CPIM_Icon2_StsFA'
     *  SignalConversion generated from: '<S360>/LeCITR_e_CPIM_Icon2_Sts'
     */
    /* Gateway: PokeCITR_e_CPIM_Icon2_Sts/PokeCITR_e_CPIM_Icon2_StsChrt */
    /* During: PokeCITR_e_CPIM_Icon2_Sts/PokeCITR_e_CPIM_Icon2_StsChrt */
    /* Entry Internal: PokeCITR_e_CPIM_Icon2_Sts/PokeCITR_e_CPIM_Icon2_StsChrt */
    /* Transition: '<S954>:2' */
    if (!LeCITR_b_CPIM_Icon2_StsFA)
    {
        /* Transition: '<S954>:3' */
        /* Transition: '<S954>:15' */
        CITR_ac_B.LeCITR_e_CPIM_Icon2_Sts_out = LeCITR_e_CPIM_Icon2_Sts;
        rtb_LeCITR_b_CPIM_Icon2_StsFA_out_k = false;

        /* Transition: '<S954>:18' */
    }
    else
    {
        /* Transition: '<S954>:4' */
        rtb_LeCITR_b_CPIM_Icon2_StsFA_out_k = true;
    }

    /* End of Chart: '<S360>/PokeCITR_e_CPIM_Icon2_StsChrt' */

    /* Outport: '<Root>/VeCITR_b_CPIM_Icon2_StsFA' incorporates:
     *  SignalConversion generated from: '<S360>/VeCITR_b_CPIM_Icon2_StsFA'
     */
    (void)Rte_Write_VeCITR_b_CPIM_Icon2_StsFA_Value
        (rtb_LeCITR_b_CPIM_Icon2_StsFA_out_k);

    /* Outport: '<Root>/VeCITR_e_CPIM_Icon2_Sts' incorporates:
     *  SignalConversion generated from: '<S360>/VeCITR_e_CPIM_Icon2_Sts'
     */
    (void)Rte_Write_VeCITR_e_CPIM_Icon2_Sts_Value
        (CITR_ac_B.LeCITR_e_CPIM_Icon2_Sts_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_CPIM_Icon2_Sts' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_CPIM_Ind1_FailSts(VAR(TeCITR_e_CPIM_LED_Sts,
    AUTOMATIC) LeCITR_e_CPIM_Ind1_FailSts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_CPIM_Ind1_FailSts' */
    /* Outport: '<Root>/VeCITR_e_CPIM_Ind1_FailSts' incorporates:
     *  SignalConversion generated from: '<S361>/VeCITR_e_CPIM_Ind1_FailSts'
     *  SignalConversion generated from: '<S361>/LeCITR_e_CPIM_Ind1_FailSts'
     */
    /* Gateway: PokeCITR_e_CPIM_Ind1_FailSts/PokeCITR_e_CPIM_Ind1_FailStsChrt */
    /* During: PokeCITR_e_CPIM_Ind1_FailSts/PokeCITR_e_CPIM_Ind1_FailStsChrt */
    /* Entry Internal: PokeCITR_e_CPIM_Ind1_FailSts/PokeCITR_e_CPIM_Ind1_FailStsChrt */
    /* Transition: '<S955>:2' */
    (void)Rte_Write_VeCITR_e_CPIM_Ind1_FailSts_Value(LeCITR_e_CPIM_Ind1_FailSts);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_CPIM_Ind1_FailSts' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_CPIM_Ind1_Fdbk(VAR(TeCITR_e_CPIM_Indication,
    AUTOMATIC) LeCITR_e_CPIM_Ind1_Fdbk, VAR(boolean, AUTOMATIC)
    LeCITR_b_CPIM_Ind1_FdbkFA)
{
    boolean rtb_LeCITR_b_CPIM_Ind1_FdbkFA_out_l;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_CPIM_Ind1_Fdbk' */
    /* Chart: '<S362>/PokeCITR_e_CPIM_Ind1_FdbkChrt' incorporates:
     *  SignalConversion generated from: '<S362>/LeCITR_b_CPIM_Ind1_FdbkFA'
     *  SignalConversion generated from: '<S362>/LeCITR_e_CPIM_Ind1_Fdbk'
     */
    /* Gateway: PokeCITR_e_CPIM_Ind1_Fdbk/PokeCITR_e_CPIM_Ind1_FdbkChrt */
    /* During: PokeCITR_e_CPIM_Ind1_Fdbk/PokeCITR_e_CPIM_Ind1_FdbkChrt */
    /* Entry Internal: PokeCITR_e_CPIM_Ind1_Fdbk/PokeCITR_e_CPIM_Ind1_FdbkChrt */
    /* Transition: '<S956>:2' */
    if (!LeCITR_b_CPIM_Ind1_FdbkFA)
    {
        /* Transition: '<S956>:3' */
        /* Transition: '<S956>:15' */
        CITR_ac_B.LeCITR_e_CPIM_Ind1_Fdbk_out = LeCITR_e_CPIM_Ind1_Fdbk;
        rtb_LeCITR_b_CPIM_Ind1_FdbkFA_out_l = false;

        /* Transition: '<S956>:18' */
    }
    else
    {
        /* Transition: '<S956>:4' */
        rtb_LeCITR_b_CPIM_Ind1_FdbkFA_out_l = true;
    }

    /* End of Chart: '<S362>/PokeCITR_e_CPIM_Ind1_FdbkChrt' */

    /* Outport: '<Root>/VeCITR_b_CPIM_Ind1_FdbkFA' incorporates:
     *  SignalConversion generated from: '<S362>/VeCITR_b_CPIM_Ind1_FdbkFA'
     */
    (void)Rte_Write_VeCITR_b_CPIM_Ind1_FdbkFA_Value
        (rtb_LeCITR_b_CPIM_Ind1_FdbkFA_out_l);

    /* Outport: '<Root>/VeCITR_e_CPIM_Ind1_Fdbk' incorporates:
     *  SignalConversion generated from: '<S362>/VeCITR_e_CPIM_Ind1_Fdbk'
     */
    (void)Rte_Write_VeCITR_e_CPIM_Ind1_Fdbk_Value
        (CITR_ac_B.LeCITR_e_CPIM_Ind1_Fdbk_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_CPIM_Ind1_Fdbk' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_CPIM_Ind2_FailSts(VAR(TeCITR_e_CPIM_LED_Sts,
    AUTOMATIC) LeCITR_e_CPIM_Ind2_FailSts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_CPIM_Ind2_FailSts' */
    /* Outport: '<Root>/VeCITR_e_CPIM_Ind2_FailSts' incorporates:
     *  SignalConversion generated from: '<S363>/VeCITR_e_CPIM_Ind2_FailSts'
     *  SignalConversion generated from: '<S363>/LeCITR_e_CPIM_Ind2_FailSts'
     */
    /* Gateway: PokeCITR_e_CPIM_Ind2_FailSts/PokeCITR_e_CPIM_Ind2_FailStsChrt */
    /* During: PokeCITR_e_CPIM_Ind2_FailSts/PokeCITR_e_CPIM_Ind2_FailStsChrt */
    /* Entry Internal: PokeCITR_e_CPIM_Ind2_FailSts/PokeCITR_e_CPIM_Ind2_FailStsChrt */
    /* Transition: '<S957>:2' */
    (void)Rte_Write_VeCITR_e_CPIM_Ind2_FailSts_Value(LeCITR_e_CPIM_Ind2_FailSts);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_CPIM_Ind2_FailSts' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_CPIM_Ind2_Fdbk(VAR(TeCITR_e_CPIM_Indication,
    AUTOMATIC) LeCITR_e_CPIM_Ind2_Fdbk, VAR(boolean, AUTOMATIC)
    LeCITR_b_CPIM_Ind2_FdbkFA)
{
    boolean rtb_LeCITR_b_CPIM_Ind2_FdbkFA_out_g;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_CPIM_Ind2_Fdbk' */
    /* Chart: '<S364>/PokeCITR_e_CPIM_Ind2_FdbkChrt' incorporates:
     *  SignalConversion generated from: '<S364>/LeCITR_b_CPIM_Ind2_FdbkFA'
     *  SignalConversion generated from: '<S364>/LeCITR_e_CPIM_Ind2_Fdbk'
     */
    /* Gateway: PokeCITR_e_CPIM_Ind2_Fdbk/PokeCITR_e_CPIM_Ind2_FdbkChrt */
    /* During: PokeCITR_e_CPIM_Ind2_Fdbk/PokeCITR_e_CPIM_Ind2_FdbkChrt */
    /* Entry Internal: PokeCITR_e_CPIM_Ind2_Fdbk/PokeCITR_e_CPIM_Ind2_FdbkChrt */
    /* Transition: '<S958>:2' */
    if (!LeCITR_b_CPIM_Ind2_FdbkFA)
    {
        /* Transition: '<S958>:3' */
        /* Transition: '<S958>:15' */
        CITR_ac_B.LeCITR_e_CPIM_Ind2_Fdbk_out = LeCITR_e_CPIM_Ind2_Fdbk;
        rtb_LeCITR_b_CPIM_Ind2_FdbkFA_out_g = false;

        /* Transition: '<S958>:18' */
    }
    else
    {
        /* Transition: '<S958>:4' */
        rtb_LeCITR_b_CPIM_Ind2_FdbkFA_out_g = true;
    }

    /* End of Chart: '<S364>/PokeCITR_e_CPIM_Ind2_FdbkChrt' */

    /* Outport: '<Root>/VeCITR_b_CPIM_Ind2_FdbkFA' incorporates:
     *  SignalConversion generated from: '<S364>/VeCITR_b_CPIM_Ind2_FdbkFA'
     */
    (void)Rte_Write_VeCITR_b_CPIM_Ind2_FdbkFA_Value
        (rtb_LeCITR_b_CPIM_Ind2_FdbkFA_out_g);

    /* Outport: '<Root>/VeCITR_e_CPIM_Ind2_Fdbk' incorporates:
     *  SignalConversion generated from: '<S364>/VeCITR_e_CPIM_Ind2_Fdbk'
     */
    (void)Rte_Write_VeCITR_e_CPIM_Ind2_Fdbk_Value
        (CITR_ac_B.LeCITR_e_CPIM_Ind2_Fdbk_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_CPIM_Ind2_Fdbk' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_CPIM_Ind3_FailSts(VAR(TeCITR_e_CPIM_LED_Sts,
    AUTOMATIC) LeCITR_e_CPIM_Ind3_FailSts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_CPIM_Ind3_FailSts' */
    /* Outport: '<Root>/VeCITR_e_CPIM_Ind3_FailSts' incorporates:
     *  SignalConversion generated from: '<S365>/VeCITR_e_CPIM_Ind3_FailSts'
     *  SignalConversion generated from: '<S365>/LeCITR_e_CPIM_Ind3_FailSts'
     */
    /* Gateway: PokeCITR_e_CPIM_Ind3_FailSts/PokeCITR_e_CPIM_Ind3_FailStsChrt */
    /* During: PokeCITR_e_CPIM_Ind3_FailSts/PokeCITR_e_CPIM_Ind3_FailStsChrt */
    /* Entry Internal: PokeCITR_e_CPIM_Ind3_FailSts/PokeCITR_e_CPIM_Ind3_FailStsChrt */
    /* Transition: '<S959>:2' */
    (void)Rte_Write_VeCITR_e_CPIM_Ind3_FailSts_Value(LeCITR_e_CPIM_Ind3_FailSts);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_CPIM_Ind3_FailSts' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_CPIM_Ind3_Fdbk(VAR(TeCITR_e_CPIM_Indication,
    AUTOMATIC) LeCITR_e_CPIM_Ind3_Fdbk, VAR(boolean, AUTOMATIC)
    LeCITR_b_CPIM_Ind3_FdbkFA)
{
    boolean rtb_LeCITR_b_CPIM_Ind3_FdbkFA_out_p;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_CPIM_Ind3_Fdbk' */
    /* Chart: '<S366>/PokeCITR_e_CPIM_Ind3_FdbkChrt' incorporates:
     *  SignalConversion generated from: '<S366>/LeCITR_b_CPIM_Ind3_FdbkFA'
     *  SignalConversion generated from: '<S366>/LeCITR_e_CPIM_Ind3_Fdbk'
     */
    /* Gateway: PokeCITR_e_CPIM_Ind3_Fdbk/PokeCITR_e_CPIM_Ind3_FdbkChrt */
    /* During: PokeCITR_e_CPIM_Ind3_Fdbk/PokeCITR_e_CPIM_Ind3_FdbkChrt */
    /* Entry Internal: PokeCITR_e_CPIM_Ind3_Fdbk/PokeCITR_e_CPIM_Ind3_FdbkChrt */
    /* Transition: '<S960>:2' */
    if (!LeCITR_b_CPIM_Ind3_FdbkFA)
    {
        /* Transition: '<S960>:3' */
        /* Transition: '<S960>:15' */
        CITR_ac_B.LeCITR_e_CPIM_Ind3_Fdbk_out = LeCITR_e_CPIM_Ind3_Fdbk;
        rtb_LeCITR_b_CPIM_Ind3_FdbkFA_out_p = false;

        /* Transition: '<S960>:18' */
    }
    else
    {
        /* Transition: '<S960>:4' */
        rtb_LeCITR_b_CPIM_Ind3_FdbkFA_out_p = true;
    }

    /* End of Chart: '<S366>/PokeCITR_e_CPIM_Ind3_FdbkChrt' */

    /* Outport: '<Root>/VeCITR_b_CPIM_Ind3_FdbkFA' incorporates:
     *  SignalConversion generated from: '<S366>/VeCITR_b_CPIM_Ind3_FdbkFA'
     */
    (void)Rte_Write_VeCITR_b_CPIM_Ind3_FdbkFA_Value
        (rtb_LeCITR_b_CPIM_Ind3_FdbkFA_out_p);

    /* Outport: '<Root>/VeCITR_e_CPIM_Ind3_Fdbk' incorporates:
     *  SignalConversion generated from: '<S366>/VeCITR_e_CPIM_Ind3_Fdbk'
     */
    (void)Rte_Write_VeCITR_e_CPIM_Ind3_Fdbk_Value
        (CITR_ac_B.LeCITR_e_CPIM_Ind3_Fdbk_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_CPIM_Ind3_Fdbk' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_CPIM_Ind4_FailSts(VAR(TeCITR_e_CPIM_LED_Sts,
    AUTOMATIC) LeCITR_e_CPIM_Ind4_FailSts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_CPIM_Ind4_FailSts' */
    /* Outport: '<Root>/VeCITR_e_CPIM_Ind4_FailSts' incorporates:
     *  SignalConversion generated from: '<S367>/VeCITR_e_CPIM_Ind4_FailSts'
     *  SignalConversion generated from: '<S367>/LeCITR_e_CPIM_Ind4_FailSts'
     */
    /* Gateway: PokeCITR_e_CPIM_Ind4_FailSts/PokeCITR_e_CPIM_Ind4_FailStsChrt */
    /* During: PokeCITR_e_CPIM_Ind4_FailSts/PokeCITR_e_CPIM_Ind4_FailStsChrt */
    /* Entry Internal: PokeCITR_e_CPIM_Ind4_FailSts/PokeCITR_e_CPIM_Ind4_FailStsChrt */
    /* Transition: '<S961>:2' */
    (void)Rte_Write_VeCITR_e_CPIM_Ind4_FailSts_Value(LeCITR_e_CPIM_Ind4_FailSts);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_CPIM_Ind4_FailSts' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_CPIM_Ind4_Fdbk(VAR(TeCITR_e_CPIM_Indication,
    AUTOMATIC) LeCITR_e_CPIM_Ind4_Fdbk, VAR(boolean, AUTOMATIC)
    LeCITR_b_CPIM_Ind4_FdbkFA)
{
    boolean rtb_LeCITR_b_CPIM_Ind4_FdbkFA_out_i;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_CPIM_Ind4_Fdbk' */
    /* Chart: '<S368>/PokeCITR_e_CPIM_Ind4_FdbkChrt' incorporates:
     *  SignalConversion generated from: '<S368>/LeCITR_b_CPIM_Ind4_FdbkFA'
     *  SignalConversion generated from: '<S368>/LeCITR_e_CPIM_Ind4_Fdbk'
     */
    /* Gateway: PokeCITR_e_CPIM_Ind4_Fdbk/PokeCITR_e_CPIM_Ind4_FdbkChrt */
    /* During: PokeCITR_e_CPIM_Ind4_Fdbk/PokeCITR_e_CPIM_Ind4_FdbkChrt */
    /* Entry Internal: PokeCITR_e_CPIM_Ind4_Fdbk/PokeCITR_e_CPIM_Ind4_FdbkChrt */
    /* Transition: '<S962>:2' */
    if (!LeCITR_b_CPIM_Ind4_FdbkFA)
    {
        /* Transition: '<S962>:3' */
        /* Transition: '<S962>:15' */
        CITR_ac_B.LeCITR_e_CPIM_Ind4_Fdbk_out = LeCITR_e_CPIM_Ind4_Fdbk;
        rtb_LeCITR_b_CPIM_Ind4_FdbkFA_out_i = false;

        /* Transition: '<S962>:18' */
    }
    else
    {
        /* Transition: '<S962>:4' */
        rtb_LeCITR_b_CPIM_Ind4_FdbkFA_out_i = true;
    }

    /* End of Chart: '<S368>/PokeCITR_e_CPIM_Ind4_FdbkChrt' */

    /* Outport: '<Root>/VeCITR_b_CPIM_Ind4_FdbkFA' incorporates:
     *  SignalConversion generated from: '<S368>/VeCITR_b_CPIM_Ind4_FdbkFA'
     */
    (void)Rte_Write_VeCITR_b_CPIM_Ind4_FdbkFA_Value
        (rtb_LeCITR_b_CPIM_Ind4_FdbkFA_out_i);

    /* Outport: '<Root>/VeCITR_e_CPIM_Ind4_Fdbk' incorporates:
     *  SignalConversion generated from: '<S368>/VeCITR_e_CPIM_Ind4_Fdbk'
     */
    (void)Rte_Write_VeCITR_e_CPIM_Ind4_Fdbk_Value
        (CITR_ac_B.LeCITR_e_CPIM_Ind4_Fdbk_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_CPIM_Ind4_Fdbk' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_CPIM_Ind5_FailSts(VAR(TeCITR_e_CPIM_LED_Sts,
    AUTOMATIC) LeCITR_e_CPIM_Ind5_FailSts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_CPIM_Ind5_FailSts' */
    /* Outport: '<Root>/VeCITR_e_CPIM_Ind5_FailSts' incorporates:
     *  SignalConversion generated from: '<S369>/VeCITR_e_CPIM_Ind5_FailSts'
     *  SignalConversion generated from: '<S369>/LeCITR_e_CPIM_Ind5_FailSts'
     */
    /* Gateway: PokeCITR_e_CPIM_Ind5_FailSts/PokeCITR_e_CPIM_Ind5_FailStsChrt */
    /* During: PokeCITR_e_CPIM_Ind5_FailSts/PokeCITR_e_CPIM_Ind5_FailStsChrt */
    /* Entry Internal: PokeCITR_e_CPIM_Ind5_FailSts/PokeCITR_e_CPIM_Ind5_FailStsChrt */
    /* Transition: '<S963>:2' */
    (void)Rte_Write_VeCITR_e_CPIM_Ind5_FailSts_Value(LeCITR_e_CPIM_Ind5_FailSts);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_CPIM_Ind5_FailSts' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_CPIM_Ind5_Fdbk(VAR(TeCITR_e_CPIM_Indication,
    AUTOMATIC) LeCITR_e_CPIM_Ind5_Fdbk, VAR(boolean, AUTOMATIC)
    LeCITR_b_CPIM_Ind5_FdbkFA)
{
    boolean rtb_LeCITR_b_CPIM_Ind5_FdbkFA_out_e;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_CPIM_Ind5_Fdbk' */
    /* Chart: '<S370>/PokeCITR_e_CPIM_Ind5_FdbkChrt' incorporates:
     *  SignalConversion generated from: '<S370>/LeCITR_b_CPIM_Ind5_FdbkFA'
     *  SignalConversion generated from: '<S370>/LeCITR_e_CPIM_Ind5_Fdbk'
     */
    /* Gateway: PokeCITR_e_CPIM_Ind5_Fdbk/PokeCITR_e_CPIM_Ind5_FdbkChrt */
    /* During: PokeCITR_e_CPIM_Ind5_Fdbk/PokeCITR_e_CPIM_Ind5_FdbkChrt */
    /* Entry Internal: PokeCITR_e_CPIM_Ind5_Fdbk/PokeCITR_e_CPIM_Ind5_FdbkChrt */
    /* Transition: '<S964>:2' */
    if (!LeCITR_b_CPIM_Ind5_FdbkFA)
    {
        /* Transition: '<S964>:3' */
        /* Transition: '<S964>:15' */
        CITR_ac_B.LeCITR_e_CPIM_Ind5_Fdbk_out = LeCITR_e_CPIM_Ind5_Fdbk;
        rtb_LeCITR_b_CPIM_Ind5_FdbkFA_out_e = false;

        /* Transition: '<S964>:18' */
    }
    else
    {
        /* Transition: '<S964>:4' */
        rtb_LeCITR_b_CPIM_Ind5_FdbkFA_out_e = true;
    }

    /* End of Chart: '<S370>/PokeCITR_e_CPIM_Ind5_FdbkChrt' */

    /* Outport: '<Root>/VeCITR_b_CPIM_Ind5_FdbkFA' incorporates:
     *  SignalConversion generated from: '<S370>/VeCITR_b_CPIM_Ind5_FdbkFA'
     */
    (void)Rte_Write_VeCITR_b_CPIM_Ind5_FdbkFA_Value
        (rtb_LeCITR_b_CPIM_Ind5_FdbkFA_out_e);

    /* Outport: '<Root>/VeCITR_e_CPIM_Ind5_Fdbk' incorporates:
     *  SignalConversion generated from: '<S370>/VeCITR_e_CPIM_Ind5_Fdbk'
     */
    (void)Rte_Write_VeCITR_e_CPIM_Ind5_Fdbk_Value
        (CITR_ac_B.LeCITR_e_CPIM_Ind5_Fdbk_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_CPIM_Ind5_Fdbk' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_CPIM_Ind_Color_Fdbk(VAR(TeCITR_e_CPIM_Color,
    AUTOMATIC) LeCITR_e_CPIM_Ind_Color_Fdbk, VAR(boolean, AUTOMATIC)
    LeCITR_b_CPIM_Ind_Color_FdbkFA)
{
    boolean rtb_LeCITR_b_CPIM_Ind_Color_FdbkFA_out_a;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_CPIM_Ind_Color_Fdbk' */
    /* Chart: '<S371>/PokeCITR_e_CPIM_Ind_Color_FdbkChrt' incorporates:
     *  SignalConversion generated from: '<S371>/LeCITR_b_CPIM_Ind_Color_FdbkFA'
     *  SignalConversion generated from: '<S371>/LeCITR_e_CPIM_Ind_Color_Fdbk'
     */
    /* Gateway: PokeCITR_e_CPIM_Ind_Color_Fdbk/PokeCITR_e_CPIM_Ind_Color_FdbkChrt */
    /* During: PokeCITR_e_CPIM_Ind_Color_Fdbk/PokeCITR_e_CPIM_Ind_Color_FdbkChrt */
    /* Entry Internal: PokeCITR_e_CPIM_Ind_Color_Fdbk/PokeCITR_e_CPIM_Ind_Color_FdbkChrt */
    /* Transition: '<S965>:2' */
    if (!LeCITR_b_CPIM_Ind_Color_FdbkFA)
    {
        /* Transition: '<S965>:3' */
        /* Transition: '<S965>:15' */
        CITR_ac_B.LeCITR_e_CPIM_Ind_Color_Fdbk_out =
            LeCITR_e_CPIM_Ind_Color_Fdbk;
        rtb_LeCITR_b_CPIM_Ind_Color_FdbkFA_out_a = false;

        /* Transition: '<S965>:18' */
    }
    else
    {
        /* Transition: '<S965>:4' */
        rtb_LeCITR_b_CPIM_Ind_Color_FdbkFA_out_a = true;
    }

    /* End of Chart: '<S371>/PokeCITR_e_CPIM_Ind_Color_FdbkChrt' */

    /* Outport: '<Root>/VeCITR_b_CPIM_Ind_Color_FdbkFA' incorporates:
     *  SignalConversion generated from: '<S371>/VeCITR_b_CPIM_Ind_Color_FdbkFA'
     */
    (void)Rte_Write_VeCITR_b_CPIM_Ind_Color_FdbkFA_Value
        (rtb_LeCITR_b_CPIM_Ind_Color_FdbkFA_out_a);

    /* Outport: '<Root>/VeCITR_e_CPIM_Ind_Color_Fdbk' incorporates:
     *  SignalConversion generated from: '<S371>/VeCITR_e_CPIM_Ind_Color_Fdbk'
     */
    (void)Rte_Write_VeCITR_e_CPIM_Ind_Color_Fdbk_Value
        (CITR_ac_B.LeCITR_e_CPIM_Ind_Color_Fdbk_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_CPIM_Ind_Color_Fdbk' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_CPIM_RedLED_FailSts(VAR(TeCITR_e_CPIM_LED_Sts,
    AUTOMATIC) LeCITR_e_CPIM_RedLED_FailSts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_CPIM_RedLED_FailSts' */
    /* Outport: '<Root>/VeCITR_e_CPIM_RedLED_FailSts' incorporates:
     *  SignalConversion generated from: '<S372>/VeCITR_e_CPIM_RedLED_FailSts'
     *  SignalConversion generated from: '<S372>/LeCITR_e_CPIM_RedLED_FailSts'
     */
    /* Gateway: PokeCITR_e_CPIM_RedLED_FailSts/PokeCITR_e_CPIM_RedLED_FailStsChrt */
    /* During: PokeCITR_e_CPIM_RedLED_FailSts/PokeCITR_e_CPIM_RedLED_FailStsChrt */
    /* Entry Internal: PokeCITR_e_CPIM_RedLED_FailSts/PokeCITR_e_CPIM_RedLED_FailStsChrt */
    /* Transition: '<S966>:2' */
    (void)Rte_Write_VeCITR_e_CPIM_RedLED_FailSts_Value
        (LeCITR_e_CPIM_RedLED_FailSts);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_CPIM_RedLED_FailSts' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_ChrgPortDoor_Sts(VAR(TeCITR_e_ChrgPortDoor_Sts,
    AUTOMATIC) LeCITR_e_ChrgPortDoor_Sts, VAR(boolean, AUTOMATIC)
    LeCITR_b_ChrgPortDoor_StsFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_ChrgPortDoor_Sts' */
    /* Chart: '<S373>/PokeCITR_e_ChrgPortDoor_StsChrt' incorporates:
     *  SignalConversion generated from: '<S373>/LeCITR_b_ChrgPortDoor_StsFA'
     *  SignalConversion generated from: '<S373>/LeCITR_e_ChrgPortDoor_Sts'
     */
    /* Gateway: PokeCITR_e_ChrgPortDoor_Sts/PokeCITR_e_ChrgPortDoor_StsChrt */
    /* During: PokeCITR_e_ChrgPortDoor_Sts/PokeCITR_e_ChrgPortDoor_StsChrt */
    /* Entry Internal: PokeCITR_e_ChrgPortDoor_Sts/PokeCITR_e_ChrgPortDoor_StsChrt */
    /* Transition: '<S967>:2' */
    if (!LeCITR_b_ChrgPortDoor_StsFA)
    {
        /* Transition: '<S967>:3' */
        /* Transition: '<S967>:15' */
        CITR_ac_B.LeCITR_e_ChrgPortDoor_Sts_out = LeCITR_e_ChrgPortDoor_Sts;

        /* Transition: '<S967>:18' */
    }
    else
    {
        /* Transition: '<S967>:4' */
    }

    /* End of Chart: '<S373>/PokeCITR_e_ChrgPortDoor_StsChrt' */

    /* Merge: '<Root>/Merge_9' incorporates:
     *  SignalConversion generated from: '<S373>/VeCITR_e_ChrgPortDoor_Sts_write'
     * */
    Rte_IrvWrite_PokeCITR_e_ChrgPortDoor_Sts_ChrgPortDoorSts_Init_write_IRV
        (CITR_ac_B.LeCITR_e_ChrgPortDoor_Sts_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_ChrgPortDoor_Sts' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_ChrgPortLock_FailSts(VAR
    (TeCITR_e_ChrgPortLck_FailSts, AUTOMATIC) LeCITR_e_ChrgPortLock_FailSts, VAR
    (boolean, AUTOMATIC) LeCITR_b_ChrgPortLock_FailStsFA)
{
    boolean rtb_LeCITR_b_ChrgPortLock_FailStsFA_ou_o;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_ChrgPortLock_FailSts' */
    /* Chart: '<S374>/PokeCITR_e_ChrgPortLock_FailStsChrt' incorporates:
     *  SignalConversion generated from: '<S374>/LeCITR_b_ChrgPortLock_FailStsFA'
     *  SignalConversion generated from: '<S374>/LeCITR_e_ChrgPortLock_FailSts'
     */
    /* Gateway: PokeCITR_e_ChrgPortLock_FailSts/PokeCITR_e_ChrgPortLock_FailStsChrt */
    /* During: PokeCITR_e_ChrgPortLock_FailSts/PokeCITR_e_ChrgPortLock_FailStsChrt */
    /* Entry Internal: PokeCITR_e_ChrgPortLock_FailSts/PokeCITR_e_ChrgPortLock_FailStsChrt */
    /* Transition: '<S968>:2' */
    if (!LeCITR_b_ChrgPortLock_FailStsFA)
    {
        /* Transition: '<S968>:3' */
        /* Transition: '<S968>:15' */
        CITR_ac_B.LeCITR_e_ChrgPortLock_FailSts_out =
            LeCITR_e_ChrgPortLock_FailSts;
        rtb_LeCITR_b_ChrgPortLock_FailStsFA_ou_o = false;

        /* Transition: '<S968>:18' */
    }
    else
    {
        /* Transition: '<S968>:4' */
        rtb_LeCITR_b_ChrgPortLock_FailStsFA_ou_o = true;
    }

    /* End of Chart: '<S374>/PokeCITR_e_ChrgPortLock_FailStsChrt' */

    /* Outport: '<Root>/VeCITR_b_ChrgPortLock_FailStsFA' incorporates:
     *  SignalConversion generated from: '<S374>/VeCITR_b_ChrgPortLock_FailStsFA'
     */
    (void)Rte_Write_VeCITR_b_ChrgPortLock_FailStsFA_Value
        (rtb_LeCITR_b_ChrgPortLock_FailStsFA_ou_o);

    /* Outport: '<Root>/VeCITR_e_CPIM_ChrgPortLock_FailSts' incorporates:
     *  SignalConversion generated from: '<S374>/VeCITR_e_ChrgPortLock_FailSts'
     */
    (void)Rte_Write_VeCITR_e_CPIM_ChrgPortLock_FailSts_Value
        (CITR_ac_B.LeCITR_e_ChrgPortLock_FailSts_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_ChrgPortLock_FailSts' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_ChrgrFlapSts(VAR(TeCITR_e_ChrgrFlapSts,
    AUTOMATIC) LeCITR_e_ChrgrFlapSts, VAR(boolean, AUTOMATIC)
    LeCITR_b_ChrgrFlapStsFA)
{
    boolean rtb_LeCITR_b_ChrgrFlapStsFA_out_b;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_ChrgrFlapSts' */
    /* Chart: '<S375>/PokeCITR_e_ChrgrFlapStsChrt' incorporates:
     *  SignalConversion generated from: '<S375>/LeCITR_b_ChrgrFlapStsFA'
     *  SignalConversion generated from: '<S375>/LeCITR_e_ChrgrFlapSts'
     */
    /* Gateway: PokeCITR_e_ChrgrFlapSts/PokeCITR_e_ChrgrFlapStsChrt */
    /* During: PokeCITR_e_ChrgrFlapSts/PokeCITR_e_ChrgrFlapStsChrt */
    /* Entry Internal: PokeCITR_e_ChrgrFlapSts/PokeCITR_e_ChrgrFlapStsChrt */
    /* Transition: '<S969>:2' */
    if (!LeCITR_b_ChrgrFlapStsFA)
    {
        /* Transition: '<S969>:3' */
        /* Transition: '<S969>:15' */
        CITR_ac_B.LeCITR_e_ChrgrFlapSts_out = LeCITR_e_ChrgrFlapSts;
        rtb_LeCITR_b_ChrgrFlapStsFA_out_b = false;

        /* Transition: '<S969>:18' */
    }
    else
    {
        /* Transition: '<S969>:4' */
        rtb_LeCITR_b_ChrgrFlapStsFA_out_b = true;
    }

    /* End of Chart: '<S375>/PokeCITR_e_ChrgrFlapStsChrt' */

    /* Outport: '<Root>/VeCITR_b_ChrgrFlapSts_FA' incorporates:
     *  SignalConversion generated from: '<S375>/VeCITR_b_ChrgrFlapStsFA'
     */
    (void)Rte_Write_VeCITR_b_ChrgrFlapSts_FA_Value
        (rtb_LeCITR_b_ChrgrFlapStsFA_out_b);

    /* Outport: '<Root>/VeCITR_e_ChrgrFlapSts' incorporates:
     *  SignalConversion generated from: '<S375>/VeCITR_e_ChrgrFlapSts'
     */
    (void)Rte_Write_VeCITR_e_ChrgrFlapSts_Value
        (CITR_ac_B.LeCITR_e_ChrgrFlapSts_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_ChrgrFlapSts' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_CoopCh_ChrgCmd(VAR(TeCITR_e_CoopChargeCmd,
    AUTOMATIC) LeCITR_e_CoopCh_ChrgCmd, VAR(boolean, AUTOMATIC)
    LeCITR_b_CoopCh_ChrgCmdFA)
{
    boolean rtb_LeCITR_b_CoopCh_ChrgCmdFA_out_n;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_CoopCh_ChrgCmd' */
    /* Chart: '<S376>/PokeCITR_e_CoopCh_ChrgCmdChrt' incorporates:
     *  SignalConversion generated from: '<S376>/LeCITR_e_FOTA_Installation_Status1'
     *  SignalConversion generated from: '<S376>/LeCITR_e_FOTA_Installation_Status'
     */
    /* Gateway: PokeCITR_e_CoopCh_ChrgCmd/PokeCITR_e_CoopCh_ChrgCmdChrt */
    /* During: PokeCITR_e_CoopCh_ChrgCmd/PokeCITR_e_CoopCh_ChrgCmdChrt */
    /* Entry Internal: PokeCITR_e_CoopCh_ChrgCmd/PokeCITR_e_CoopCh_ChrgCmdChrt */
    /* Transition: '<S970>:2' */
    if (!LeCITR_b_CoopCh_ChrgCmdFA)
    {
        /* Transition: '<S970>:20' */
        /* Transition: '<S970>:23' */
        CITR_ac_B.LeCITR_e_CoopCh_ChrgCmd_out = LeCITR_e_CoopCh_ChrgCmd;
        rtb_LeCITR_b_CoopCh_ChrgCmdFA_out_n = false;

        /* Transition: '<S970>:25' */
    }
    else
    {
        /* Transition: '<S970>:24' */
        rtb_LeCITR_b_CoopCh_ChrgCmdFA_out_n = true;
    }

    /* End of Chart: '<S376>/PokeCITR_e_CoopCh_ChrgCmdChrt' */

    /* Outport: '<Root>/VeCITR_b_CoopCh_ChrgCmdFA' incorporates:
     *  SignalConversion generated from: '<S376>/VeCITR_b_CoopCh_ChrgCmdFA'
     */
    (void)Rte_Write_VeCITR_b_CoopCh_ChrgCmdFA_Value
        (rtb_LeCITR_b_CoopCh_ChrgCmdFA_out_n);

    /* Outport: '<Root>/VeCITR_e_CoopCh_ChrgCmd' incorporates:
     *  SignalConversion generated from: '<S376>/VeCITR_e_CoopCh_ChrgCmd'
     */
    (void)Rte_Write_VeCITR_e_CoopCh_ChrgCmd_Value
        (CITR_ac_B.LeCITR_e_CoopCh_ChrgCmd_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_CoopCh_ChrgCmd' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_DVC_IO_BCIM(VAR(TeODCR_e_IO_CntrlSt, AUTOMATIC)
    LeCITR_e_BCIM_IO, VAR(TeCITR_e_BCIM_Indication, AUTOMATIC)
    LeCITR_e_BCIM_Ind1, VAR(TeCITR_e_BCIM_Indication, AUTOMATIC)
    LeCITR_e_BCIM_Ind2, VAR(TeCITR_e_BCIM_Indication, AUTOMATIC)
    LeCITR_e_BCIM_Ind3, VAR(TeCITR_e_BCIM_Indication, AUTOMATIC)
    LeCITR_e_BCIM_Ind4, VAR(TeCITR_e_BCIM_Indication, AUTOMATIC)
    LeCITR_e_BCIM_Ind5, VAR(TeCITR_e_BCIM_BlinkRate, AUTOMATIC)
    LeCITR_e_BCIM_BlinkRate)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_DVC_IO_BCIM' */
    /* Outport: '<Root>/VeCITR_e_DVC_BCIM_BlinkRate' incorporates:
     *  SignalConversion generated from: '<S377>/VeCITR_e_DVC_BCIM_BlinkRate'
     *  SignalConversion generated from: '<S377>/LeCITR_e_BCIM_BlinkRate'
     */
    /* Gateway: PokeCITR_e_DVC_IO_BCIM/PokeCITR_e_DVC_IO_BCIMChrt */
    /* During: PokeCITR_e_DVC_IO_BCIM/PokeCITR_e_DVC_IO_BCIMChrt */
    /* Entry Internal: PokeCITR_e_DVC_IO_BCIM/PokeCITR_e_DVC_IO_BCIMChrt */
    /* Transition: '<S971>:2' */
    (void)Rte_Write_VeCITR_e_DVC_BCIM_BlinkRate_Value(LeCITR_e_BCIM_BlinkRate);

    /* Outport: '<Root>/VeCITR_e_DVC_BCIM_IO' incorporates:
     *  SignalConversion generated from: '<S377>/VeCITR_e_DVC_BCIM_IO'
     *  SignalConversion generated from: '<S377>/LeCITR_e_BCIM_IO'
     */
    (void)Rte_Write_VeCITR_e_DVC_BCIM_IO_Value(LeCITR_e_BCIM_IO);

    /* Outport: '<Root>/VeCITR_e_DVC_BCIM_Ind1' incorporates:
     *  SignalConversion generated from: '<S377>/VeCITR_e_DVC_BCIM_Ind1'
     *  SignalConversion generated from: '<S377>/LeCITR_e_BCIM_Ind1'
     */
    (void)Rte_Write_VeCITR_e_DVC_BCIM_Ind1_Value(LeCITR_e_BCIM_Ind1);

    /* Outport: '<Root>/VeCITR_e_DVC_BCIM_Ind2' incorporates:
     *  SignalConversion generated from: '<S377>/VeCITR_e_DVC_BCIM_Ind2'
     *  SignalConversion generated from: '<S377>/LeCITR_e_BCIM_Ind2'
     */
    (void)Rte_Write_VeCITR_e_DVC_BCIM_Ind2_Value(LeCITR_e_BCIM_Ind2);

    /* Outport: '<Root>/VeCITR_e_DVC_BCIM_Ind3' incorporates:
     *  SignalConversion generated from: '<S377>/VeCITR_e_DVC_BCIM_Ind3'
     *  SignalConversion generated from: '<S377>/LeCITR_e_BCIM_Ind3'
     */
    (void)Rte_Write_VeCITR_e_DVC_BCIM_Ind3_Value(LeCITR_e_BCIM_Ind3);

    /* Outport: '<Root>/VeCITR_e_DVC_BCIM_Ind4' incorporates:
     *  SignalConversion generated from: '<S377>/VeCITR_e_DVC_BCIM_Ind4'
     *  SignalConversion generated from: '<S377>/LeCITR_e_BCIM_Ind4'
     */
    (void)Rte_Write_VeCITR_e_DVC_BCIM_Ind4_Value(LeCITR_e_BCIM_Ind4);

    /* Outport: '<Root>/VeCITR_e_DVC_BCIM_Ind5' incorporates:
     *  SignalConversion generated from: '<S377>/VeCITR_e_DVC_BCIM_Ind5'
     *  SignalConversion generated from: '<S377>/LeCITR_e_BCIM_Ind5'
     */
    (void)Rte_Write_VeCITR_e_DVC_BCIM_Ind5_Value(LeCITR_e_BCIM_Ind5);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_DVC_IO_BCIM' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_DVC_IO_BCIM_JL(VAR(TeODCR_e_IO_CntrlSt,
    AUTOMATIC) LeCITR_e_BCIM_IO_JL, VAR(TeCITR_e_BCIM_Indication, AUTOMATIC)
    LeCITR_e_BCIM_Ind1_JL, VAR(TeCITR_e_BCIM_Indication, AUTOMATIC)
    LeCITR_e_BCIM_Ind2_JL, VAR(TeCITR_e_BCIM_Indication, AUTOMATIC)
    LeCITR_e_BCIM_Ind3_JL, VAR(TeCITR_e_BCIM_Indication, AUTOMATIC)
    LeCITR_e_BCIM_Ind4_JL, VAR(TeCITR_e_BCIM_Indication, AUTOMATIC)
    LeCITR_e_BCIM_Ind5_JL, VAR(TeCITR_e_BCIM_BlinkRate, AUTOMATIC)
    LeCITR_e_BCIM_BlinkRate_JL, VAR(TeCITR_e_BCIM_Color, AUTOMATIC)
    LeCITR_e_BCIM_Color_JL)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_DVC_IO_BCIM_JL' */
    /* Outport: '<Root>/VeCITR_e_DVC_BCIM_BlinkRate' incorporates:
     *  SignalConversion generated from: '<S378>/VeCITR_e_DVC_BCIM_BlinkRate_JL'
     *  SignalConversion generated from: '<S378>/LeCITR_e_BCIM_BlinkRate_JL'
     */
    /* Gateway: PokeCITR_e_DVC_IO_BCIM_JL/PokeCITR_e_DVC_IO_BCIM_JLChrt */
    /* During: PokeCITR_e_DVC_IO_BCIM_JL/PokeCITR_e_DVC_IO_BCIM_JLChrt */
    /* Entry Internal: PokeCITR_e_DVC_IO_BCIM_JL/PokeCITR_e_DVC_IO_BCIM_JLChrt */
    /* Transition: '<S972>:2' */
    (void)Rte_Write_VeCITR_e_DVC_BCIM_BlinkRate_Value(LeCITR_e_BCIM_BlinkRate_JL);

    /* Outport: '<Root>/VeCITR_e_DVC_BCIM_Color' incorporates:
     *  SignalConversion generated from: '<S378>/VeCITR_e_DVC_BCIM_Color_JL'
     *  SignalConversion generated from: '<S378>/LeCITR_e_BCIM_Color_JL'
     */
    (void)Rte_Write_VeCITR_e_DVC_BCIM_Color_Value(LeCITR_e_BCIM_Color_JL);

    /* Outport: '<Root>/VeCITR_e_DVC_BCIM_IO' incorporates:
     *  SignalConversion generated from: '<S378>/VeCITR_e_DVC_BCIM_IO_JL'
     *  SignalConversion generated from: '<S378>/LeCITR_e_BCIM_IO_JL'
     */
    (void)Rte_Write_VeCITR_e_DVC_BCIM_IO_Value(LeCITR_e_BCIM_IO_JL);

    /* Outport: '<Root>/VeCITR_e_DVC_BCIM_Ind1' incorporates:
     *  SignalConversion generated from: '<S378>/VeCITR_e_DVC_BCIM_Ind1_JL'
     *  SignalConversion generated from: '<S378>/LeCITR_e_BCIM_Ind1_JL'
     */
    (void)Rte_Write_VeCITR_e_DVC_BCIM_Ind1_Value(LeCITR_e_BCIM_Ind1_JL);

    /* Outport: '<Root>/VeCITR_e_DVC_BCIM_Ind2' incorporates:
     *  SignalConversion generated from: '<S378>/VeCITR_e_DVC_BCIM_Ind2_JL'
     *  SignalConversion generated from: '<S378>/LeCITR_e_BCIM_Ind2_JL'
     */
    (void)Rte_Write_VeCITR_e_DVC_BCIM_Ind2_Value(LeCITR_e_BCIM_Ind2_JL);

    /* Outport: '<Root>/VeCITR_e_DVC_BCIM_Ind3' incorporates:
     *  SignalConversion generated from: '<S378>/VeCITR_e_DVC_BCIM_Ind3_JL'
     *  SignalConversion generated from: '<S378>/LeCITR_e_BCIM_Ind3_JL'
     */
    (void)Rte_Write_VeCITR_e_DVC_BCIM_Ind3_Value(LeCITR_e_BCIM_Ind3_JL);

    /* Outport: '<Root>/VeCITR_e_DVC_BCIM_Ind4' incorporates:
     *  SignalConversion generated from: '<S378>/VeCITR_e_DVC_BCIM_Ind4_JL'
     *  SignalConversion generated from: '<S378>/LeCITR_e_BCIM_Ind4_JL'
     */
    (void)Rte_Write_VeCITR_e_DVC_BCIM_Ind4_Value(LeCITR_e_BCIM_Ind4_JL);

    /* Outport: '<Root>/VeCITR_e_DVC_BCIM_Ind5' incorporates:
     *  SignalConversion generated from: '<S378>/VeCITR_e_DVC_BCIM_Ind5_JL'
     *  SignalConversion generated from: '<S378>/LeCITR_e_BCIM_Ind5_JL'
     */
    (void)Rte_Write_VeCITR_e_DVC_BCIM_Ind5_Value(LeCITR_e_BCIM_Ind5_JL);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_DVC_IO_BCIM_JL' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_DVC_IO_CPIM(VAR(TeODCR_e_IO_CntrlSt, AUTOMATIC)
    LeCITR_e_CPIM_IO, VAR(TeCITR_e_CPIM_Indication, AUTOMATIC)
    LeCITR_e_CPIM_Ind1, VAR(TeCITR_e_CPIM_Color, AUTOMATIC) LeCITR_e_CPIM_Color,
    VAR(TeCITR_e_CPIM_Indication, AUTOMATIC) LeCITR_e_CPIM_Ind3, VAR
    (TeCITR_e_CPIM_Indication, AUTOMATIC) LeCITR_e_CPIM_Ind2, VAR
    (TeCITR_e_CPIM_Indication, AUTOMATIC) LeCITR_e_CPIM_Ind5, VAR
    (TeCITR_e_CPIM_Indication, AUTOMATIC) LeCITR_e_CPIM_Ind4, VAR
    (TeCITR_e_CPIM_Icon_Ind, AUTOMATIC) LeCITR_e_CPIM_IconI2, VAR
    (TeCITR_e_CPIM_Icon_Ind, AUTOMATIC) LeCITR_e_CPIM_IconI1, VAR
    (TeCITR_e_CPIM_BlinkRate, AUTOMATIC) LeCITR_e_CPIM_BlinkRate)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_DVC_IO_CPIM' */
    /* Outport: '<Root>/VeCITR_e_DVC_CPIMBlinkRate' incorporates:
     *  SignalConversion generated from: '<S379>/VeCITR_e_DVC_CPIM_BlinkRate'
     *  SignalConversion generated from: '<S379>/LeCITR_e_CPIM_BlinkRate'
     */
    /* Gateway: PokeCITR_e_DVC_IO_CPIM/PokeCITR_e_DVC_IO_CPIMChrt */
    /* During: PokeCITR_e_DVC_IO_CPIM/PokeCITR_e_DVC_IO_CPIMChrt */
    /* Entry Internal: PokeCITR_e_DVC_IO_CPIM/PokeCITR_e_DVC_IO_CPIMChrt */
    /* Transition: '<S973>:2' */
    (void)Rte_Write_VeCITR_e_DVC_CPIMBlinkRate_Value(LeCITR_e_CPIM_BlinkRate);

    /* Outport: '<Root>/VeCITR_e_DVC_CPIM_Color' incorporates:
     *  SignalConversion generated from: '<S379>/VeCITR_e_DVC_CPIM_Color'
     *  SignalConversion generated from: '<S379>/LeCITR_e_CPIM_Color'
     */
    (void)Rte_Write_VeCITR_e_DVC_CPIM_Color_Value(LeCITR_e_CPIM_Color);

    /* Outport: '<Root>/VeCITR_e_DVC_CPIM_IO' incorporates:
     *  SignalConversion generated from: '<S379>/VeCITR_e_DVC_CPIM_IO'
     *  SignalConversion generated from: '<S379>/LeCITR_e_CPIM_IO'
     */
    (void)Rte_Write_VeCITR_e_DVC_CPIM_IO_Value(LeCITR_e_CPIM_IO);

    /* Outport: '<Root>/VeCITR_e_DVC_CPIM_IconI1' incorporates:
     *  SignalConversion generated from: '<S379>/VeCITR_e_DVC_CPIM_IconI1'
     *  SignalConversion generated from: '<S379>/LeCITR_e_CPIM_IconI1'
     */
    (void)Rte_Write_VeCITR_e_DVC_CPIM_IconI1_Value(LeCITR_e_CPIM_IconI1);

    /* Outport: '<Root>/VeCITR_e_DVC_CPIM_IconI2' incorporates:
     *  SignalConversion generated from: '<S379>/VeCITR_e_DVC_CPIM_IconI2'
     *  SignalConversion generated from: '<S379>/LeCITR_e_CPIM_IconI2'
     */
    (void)Rte_Write_VeCITR_e_DVC_CPIM_IconI2_Value(LeCITR_e_CPIM_IconI2);

    /* Outport: '<Root>/VeCITR_e_DVC_CPIM_Ind1' incorporates:
     *  SignalConversion generated from: '<S379>/VeCITR_e_DVC_CPIM_Ind1'
     *  SignalConversion generated from: '<S379>/LeCITR_e_CPIM_Ind1'
     */
    (void)Rte_Write_VeCITR_e_DVC_CPIM_Ind1_Value(LeCITR_e_CPIM_Ind1);

    /* Outport: '<Root>/VeCITR_e_DVC_CPIM_Ind2' incorporates:
     *  SignalConversion generated from: '<S379>/VeCITR_e_DVC_CPIM_Ind2'
     *  SignalConversion generated from: '<S379>/LeCITR_e_CPIM_Ind2'
     */
    (void)Rte_Write_VeCITR_e_DVC_CPIM_Ind2_Value(LeCITR_e_CPIM_Ind2);

    /* Outport: '<Root>/VeCITR_e_DVC_CPIM_Ind3' incorporates:
     *  SignalConversion generated from: '<S379>/VeCITR_e_DVC_CPIM_Ind3'
     *  SignalConversion generated from: '<S379>/LeCITR_e_CPIM_Ind3'
     */
    (void)Rte_Write_VeCITR_e_DVC_CPIM_Ind3_Value(LeCITR_e_CPIM_Ind3);

    /* Outport: '<Root>/VeCITR_e_DVC_CPIM_Ind4' incorporates:
     *  SignalConversion generated from: '<S379>/VeCITR_e_DVC_CPIM_Ind4'
     *  SignalConversion generated from: '<S379>/LeCITR_e_CPIM_Ind4'
     */
    (void)Rte_Write_VeCITR_e_DVC_CPIM_Ind4_Value(LeCITR_e_CPIM_Ind4);

    /* Outport: '<Root>/VeCITR_e_DVC_CPIM_Ind5' incorporates:
     *  SignalConversion generated from: '<S379>/VeCITR_e_DVC_CPIM_Ind5'
     *  SignalConversion generated from: '<S379>/LeCITR_e_CPIM_Ind5'
     */
    (void)Rte_Write_VeCITR_e_DVC_CPIM_Ind5_Value(LeCITR_e_CPIM_Ind5);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_DVC_IO_CPIM' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_DateTmFormat(VAR(TeCITR_e_DateTmFormat,
    AUTOMATIC) LeCITR_e_DateTmFormat, VAR(boolean, AUTOMATIC)
    LeCITR_b_DateTmFormatFA)
{
    boolean rtb_LeCITR_b_DateTmFormatFA_out_k;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_DateTmFormat' */
    /* Chart: '<S380>/PokeCITR_e_DateTmFormatChrt' incorporates:
     *  SignalConversion generated from: '<S380>/LeCITR_b_DateTmFormatFA'
     *  SignalConversion generated from: '<S380>/LeCITR_e_DateTmFormat'
     */
    /* Gateway: PokeCITR_e_DateTmFormat/PokeCITR_e_DateTmFormatChrt */
    /* During: PokeCITR_e_DateTmFormat/PokeCITR_e_DateTmFormatChrt */
    /* Entry Internal: PokeCITR_e_DateTmFormat/PokeCITR_e_DateTmFormatChrt */
    /* Transition: '<S974>:2' */
    if (!LeCITR_b_DateTmFormatFA)
    {
        /* Transition: '<S974>:3' */
        /* Transition: '<S974>:15' */
        CITR_ac_B.LeCITR_e_DateTmFormat_out = LeCITR_e_DateTmFormat;
        rtb_LeCITR_b_DateTmFormatFA_out_k = false;

        /* Transition: '<S974>:18' */
    }
    else
    {
        /* Transition: '<S974>:4' */
        rtb_LeCITR_b_DateTmFormatFA_out_k = true;
    }

    /* End of Chart: '<S380>/PokeCITR_e_DateTmFormatChrt' */

    /* Outport: '<Root>/VeCITR_b_DateTmFormat_FA' incorporates:
     *  SignalConversion generated from: '<S380>/VeCITR_b_DateTmFormatFA'
     */
    (void)Rte_Write_VeCITR_b_DateTmFormat_FA_Value
        (rtb_LeCITR_b_DateTmFormatFA_out_k);

    /* Outport: '<Root>/VeCITR_e_DateTmFormat' incorporates:
     *  SignalConversion generated from: '<S380>/VeCITR_e_DateTmFormat'
     */
    (void)Rte_Write_VeCITR_e_DateTmFormat_Value
        (CITR_ac_B.LeCITR_e_DateTmFormat_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_DateTmFormat' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_DoorLockLastElSts(VAR(TeOBCR_e_DoorLockSts,
    AUTOMATIC) LeCITR_e_DoorLockLastElSts, VAR(boolean, AUTOMATIC)
    LeCITR_b_DoorLockLastElStsFA)
{
    boolean rtb_LeCITR_b_DoorLockLastElStsFA_out_f;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_DoorLockLastElSts' */
    /* Chart: '<S381>/PokeCITR_e_DoorLockLastElStsChrt' incorporates:
     *  Constant: '<S975>/Calib'
     *  SignalConversion generated from: '<S381>/LeCITR_b_DoorLockLastElStsFA'
     *  SignalConversion generated from: '<S381>/LeCITR_e_DoorLockLastElSts'
     */
    /* Gateway: PokeCITR_e_DoorLockLastElSts/PokeCITR_e_DoorLockLastElStsChrt */
    /* During: PokeCITR_e_DoorLockLastElSts/PokeCITR_e_DoorLockLastElStsChrt */
    /* Entry Internal: PokeCITR_e_DoorLockLastElSts/PokeCITR_e_DoorLockLastElStsChrt */
    /* Transition: '<S976>:2' */
    if (!LeCITR_b_DoorLockLastElStsFA)
    {
        /* Transition: '<S976>:3' */
        /* Transition: '<S976>:15' */
        CITR_ac_B.LeCITR_e_DoorLockLastElSts_out = KaCITR_e_DoorLockLastElSts
            [(LeCITR_e_DoorLockLastElSts)];
        rtb_LeCITR_b_DoorLockLastElStsFA_out_f = false;
        CITR_ac_B.LeCITR_b_DoorLockLastElStsSgnl_Rcvd = true;

        /* Transition: '<S976>:18' */
    }
    else
    {
        /* Transition: '<S976>:4' */
        rtb_LeCITR_b_DoorLockLastElStsFA_out_f = true;
    }

    /* End of Chart: '<S381>/PokeCITR_e_DoorLockLastElStsChrt' */

    /* Merge: '<Root>/Merge_20' incorporates:
     *  SignalConversion generated from: '<S381>/VeCITR_b_DoorLockLastElStsFA_write'
     * */
    Rte_IrvWrite_PokeCITR_e_DoorLockLastElSts_DoorLockLastElSts_FA_Init_write_IRV
        (rtb_LeCITR_b_DoorLockLastElStsFA_out_f);

    /* Merge: '<Root>/Merge_10' incorporates:
     *  SignalConversion generated from: '<S381>/VeCITR_b_DoorLockLastElStsSgnl_Rcvd_write'
     * */
    Rte_IrvWrite_PokeCITR_e_DoorLockLastElSts_DoorLockLastElSts_SgnlRcvd_Init_write_IRV
        (CITR_ac_B.LeCITR_b_DoorLockLastElStsSgnl_Rcvd);

    /* Merge: '<Root>/Merge_1' incorporates:
     *  SignalConversion generated from: '<S381>/VeCITR_e_DoorLockLastElSts_write'
     * */
    Rte_IrvWrite_PokeCITR_e_DoorLockLastElSts_DoorLockLastElSts_Init_write_IRV
        (CITR_ac_B.LeCITR_e_DoorLockLastElSts_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_DoorLockLastElSts' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_DoorLockLastElSts_2(VAR(TeOBCR_e_DoorLockSts,
    AUTOMATIC) LeCITR_e_DoorLockLastElSts_2, VAR(boolean, AUTOMATIC)
    LeCITR_b_DoorLockLastElSts_2FA)
{
    boolean rtb_LeCITR_b_DoorLockLastElSts_2FA_out_c;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_DoorLockLastElSts_2' */
    /* Chart: '<S382>/PokeCITR_e_DoorLockLastElSts_2Chrt' incorporates:
     *  Constant: '<S977>/Calib'
     *  SignalConversion generated from: '<S382>/LeCITR_b_DoorLockLastElSts_2FA'
     *  SignalConversion generated from: '<S382>/LeCITR_e_DoorLockLastElSts_2'
     */
    /* Gateway: PokeCITR_e_DoorLockLastElSts_2/PokeCITR_e_DoorLockLastElSts_2Chrt */
    /* During: PokeCITR_e_DoorLockLastElSts_2/PokeCITR_e_DoorLockLastElSts_2Chrt */
    /* Entry Internal: PokeCITR_e_DoorLockLastElSts_2/PokeCITR_e_DoorLockLastElSts_2Chrt */
    /* Transition: '<S978>:2' */
    if (!LeCITR_b_DoorLockLastElSts_2FA)
    {
        /* Transition: '<S978>:3' */
        /* Transition: '<S978>:15' */
        CITR_ac_B.LeCITR_e_DoorLockLastElSts_2_out = KaCITR_e_DoorLockLastElSts
            [(LeCITR_e_DoorLockLastElSts_2)];
        rtb_LeCITR_b_DoorLockLastElSts_2FA_out_c = false;
        CITR_ac_B.LeCITR_b_DoorLockLastElSts_2Sgnl_Rcvd = true;

        /* Transition: '<S978>:18' */
    }
    else
    {
        /* Transition: '<S978>:4' */
        rtb_LeCITR_b_DoorLockLastElSts_2FA_out_c = true;
    }

    /* End of Chart: '<S382>/PokeCITR_e_DoorLockLastElSts_2Chrt' */

    /* Merge: '<Root>/Merge_21' incorporates:
     *  SignalConversion generated from: '<S382>/VeCITR_b_DoorLockLastElSts_2FA_write'
     * */
    Rte_IrvWrite_PokeCITR_e_DoorLockLastElSts_2_DoorLockLastElSts_2_FA_Init_write_IRV
        (rtb_LeCITR_b_DoorLockLastElSts_2FA_out_c);

    /* Merge: '<Root>/Merge_19' incorporates:
     *  SignalConversion generated from: '<S382>/VeCITR_b_DoorLockLastElSts_2Sgnl_Rcvd_write'
     * */
    Rte_IrvWrite_PokeCITR_e_DoorLockLastElSts_2_DoorLockLastElSts_2_SgnlRcvd_Init_write_IRV
        (CITR_ac_B.LeCITR_b_DoorLockLastElSts_2Sgnl_Rcvd);

    /* Merge: '<Root>/Merge_18' incorporates:
     *  SignalConversion generated from: '<S382>/VeCITR_e_DoorLockLastElSts_2_write'
     * */
    Rte_IrvWrite_PokeCITR_e_DoorLockLastElSts_2_DoorLockLastElSts_2_Init_write_IRV
        (CITR_ac_B.LeCITR_e_DoorLockLastElSts_2_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_DoorLockLastElSts_2' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_FOTA_Install_Type(VAR
    (TeCITR_e_FOTA_Install_Type, AUTOMATIC) LeCITR_e_FOTA_Install_Type)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_FOTA_Install_Type' */
    /* Outport: '<Root>/VeCITR_b_FOTA_Install_Type_FA' incorporates:
     *  Chart: '<S383>/PokeCITR_e_FOTA_Install_TypeChrt'
     *  SignalConversion generated from: '<S383>/VeCITR_b_FOTA_Install_TypeFA'
     */
    /* Gateway: PokeCITR_e_FOTA_Install_Type/PokeCITR_e_FOTA_Install_TypeChrt */
    /* During: PokeCITR_e_FOTA_Install_Type/PokeCITR_e_FOTA_Install_TypeChrt */
    /* Entry Internal: PokeCITR_e_FOTA_Install_Type/PokeCITR_e_FOTA_Install_TypeChrt */
    /* Transition: '<S979>:2' */
    (void)Rte_Write_VeCITR_b_FOTA_Install_Type_FA_Value(false);

    /* Outport: '<Root>/VeCITR_e_FOTA_Install_Type' incorporates:
     *  SignalConversion generated from: '<S383>/VeCITR_e_FOTA_Install_Type'
     *  SignalConversion generated from: '<S383>/LeCITR_e_FOTA_Install_Type'
     */
    (void)Rte_Write_VeCITR_e_FOTA_Install_Type_Value(LeCITR_e_FOTA_Install_Type);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_FOTA_Install_Type' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_FOTA_Installation_Status(VAR
    (TeCITR_e_FOTA_Install_Status, AUTOMATIC) LeCITR_e_FOTA_Installation_Status)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_FOTA_Installation_Status' */
    /* Outport: '<Root>/VeCITR_e_FOTA_Install_Status' incorporates:
     *  SignalConversion generated from: '<S384>/VeCITR_e_FOTA_Installation_Status'
     *  SignalConversion generated from: '<S384>/LeCITR_e_FOTA_Installation_Status'
     */
    /* Gateway: PokeCITR_e_FOTA_Installation_Status/PokeCITR_e_FOTA_Installation_StatusChrt */
    /* During: PokeCITR_e_FOTA_Installation_Status/PokeCITR_e_FOTA_Installation_StatusChrt */
    /* Entry Internal: PokeCITR_e_FOTA_Installation_Status/PokeCITR_e_FOTA_Installation_StatusChrt */
    /* Transition: '<S980>:2' */
    (void)Rte_Write_VeCITR_e_FOTA_Install_Status_Value
        (LeCITR_e_FOTA_Installation_Status);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_FOTA_Installation_Status' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_HU_ChrgSchedType1(VAR(TeCITR_e_ChrgScheduleType,
    AUTOMATIC) LeCITR_e_HU_ChrgSchedType1, VAR(boolean, AUTOMATIC)
    LeCITR_b_HU_ChrgSchedType1FA)
{
    boolean rtb_LeCITR_b_HU_ChrgSchedType1FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_HU_ChrgSchedType1' */
    /* Chart: '<S385>/PokeCITR_e_HU_ChrgSchedType1Chrt' incorporates:
     *  SignalConversion generated from: '<S385>/LeCITR_e_FOTA_Installation_Status1'
     *  SignalConversion generated from: '<S385>/LeCITR_e_FOTA_Installation_Status'
     */
    /* Gateway: PokeCITR_e_HU_ChrgSchedType1/PokeCITR_e_HU_ChrgSchedType1Chrt */
    /* During: PokeCITR_e_HU_ChrgSchedType1/PokeCITR_e_HU_ChrgSchedType1Chrt */
    /* Entry Internal: PokeCITR_e_HU_ChrgSchedType1/PokeCITR_e_HU_ChrgSchedType1Chrt */
    /* Transition: '<S981>:2' */
    if (!LeCITR_b_HU_ChrgSchedType1FA)
    {
        /* Transition: '<S981>:20' */
        /* Transition: '<S981>:23' */
        CITR_ac_B.LeCITR_e_HU_ChrgSchedType1_out = LeCITR_e_HU_ChrgSchedType1;
        rtb_LeCITR_b_HU_ChrgSchedType1FA_out = false;

        /* Transition: '<S981>:25' */
    }
    else
    {
        /* Transition: '<S981>:24' */
        rtb_LeCITR_b_HU_ChrgSchedType1FA_out = true;
    }

    /* End of Chart: '<S385>/PokeCITR_e_HU_ChrgSchedType1Chrt' */

    /* Outport: '<Root>/VeCITR_b_HU_ChrgSchedType1FA' incorporates:
     *  SignalConversion generated from: '<S385>/VeCITR_b_HU_ChrgSchedType1FA'
     */
    (void)Rte_Write_VeCITR_b_HU_ChrgSchedType1FA_Value
        (rtb_LeCITR_b_HU_ChrgSchedType1FA_out);

    /* Outport: '<Root>/VeCITR_e_HU_ChrgSchedType1' incorporates:
     *  SignalConversion generated from: '<S385>/VeCITR_e_HU_ChrgSchedType1'
     */
    (void)Rte_Write_VeCITR_e_HU_ChrgSchedType1_Value
        (CITR_ac_B.LeCITR_e_HU_ChrgSchedType1_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_HU_ChrgSchedType1' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_HU_ChrgSchedType2(VAR(TeCITR_e_ChrgScheduleType,
    AUTOMATIC) LeCITR_e_HU_ChrgSchedType2, VAR(boolean, AUTOMATIC)
    LeCITR_b_HU_ChrgSchedType2FA)
{
    boolean rtb_LeCITR_b_HU_ChrgSchedType2FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_HU_ChrgSchedType2' */
    /* Chart: '<S386>/PokeCITR_e_HU_ChrgSchedType2Chrt' incorporates:
     *  SignalConversion generated from: '<S386>/LeCITR_e_FOTA_Installation_Status1'
     *  SignalConversion generated from: '<S386>/LeCITR_e_FOTA_Installation_Status'
     */
    /* Gateway: PokeCITR_e_HU_ChrgSchedType2/PokeCITR_e_HU_ChrgSchedType2Chrt */
    /* During: PokeCITR_e_HU_ChrgSchedType2/PokeCITR_e_HU_ChrgSchedType2Chrt */
    /* Entry Internal: PokeCITR_e_HU_ChrgSchedType2/PokeCITR_e_HU_ChrgSchedType2Chrt */
    /* Transition: '<S982>:2' */
    if (!LeCITR_b_HU_ChrgSchedType2FA)
    {
        /* Transition: '<S982>:20' */
        /* Transition: '<S982>:23' */
        CITR_ac_B.LeCITR_e_HU_ChrgSchedType2_out = LeCITR_e_HU_ChrgSchedType2;
        rtb_LeCITR_b_HU_ChrgSchedType2FA_out = false;

        /* Transition: '<S982>:25' */
    }
    else
    {
        /* Transition: '<S982>:24' */
        rtb_LeCITR_b_HU_ChrgSchedType2FA_out = true;
    }

    /* End of Chart: '<S386>/PokeCITR_e_HU_ChrgSchedType2Chrt' */

    /* Outport: '<Root>/VeCITR_b_HU_ChrgSchedType2FA' incorporates:
     *  SignalConversion generated from: '<S386>/VeCITR_b_HU_ChrgSchedType2FA'
     */
    (void)Rte_Write_VeCITR_b_HU_ChrgSchedType2FA_Value
        (rtb_LeCITR_b_HU_ChrgSchedType2FA_out);

    /* Outport: '<Root>/VeCITR_e_HU_ChrgSchedType2' incorporates:
     *  SignalConversion generated from: '<S386>/VeCITR_e_HU_ChrgSchedType2'
     */
    (void)Rte_Write_VeCITR_e_HU_ChrgSchedType2_Value
        (CITR_ac_B.LeCITR_e_HU_ChrgSchedType2_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_HU_ChrgSchedType2' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_HU_Sch1_Type(VAR(TeCITR_e_SchType, AUTOMATIC)
    LeCITR_e_HU_Sch1_Type, VAR(boolean, AUTOMATIC) LeCITR_b_HU_Sch1_TypeFA)
{
    boolean rtb_LeCITR_b_HU_Sch1_TypeFA_out_n;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_HU_Sch1_Type' */
    /* Chart: '<S387>/PokeCITR_e_HU_Sch1_TypeChrt' incorporates:
     *  SignalConversion generated from: '<S387>/LeCITR_b_HU_Sch1_TypeFA'
     *  SignalConversion generated from: '<S387>/LeCITR_e_HU_Sch1_Type'
     */
    /* Gateway: PokeCITR_e_HU_Sch1_Type/PokeCITR_e_HU_Sch1_TypeChrt */
    /* During: PokeCITR_e_HU_Sch1_Type/PokeCITR_e_HU_Sch1_TypeChrt */
    /* Entry Internal: PokeCITR_e_HU_Sch1_Type/PokeCITR_e_HU_Sch1_TypeChrt */
    /* Transition: '<S983>:2' */
    if (!LeCITR_b_HU_Sch1_TypeFA)
    {
        /* Transition: '<S983>:3' */
        /* Transition: '<S983>:15' */
        CITR_ac_B.LeCITR_e_HU_Sch1_Type_out = LeCITR_e_HU_Sch1_Type;
        rtb_LeCITR_b_HU_Sch1_TypeFA_out_n = false;

        /* Transition: '<S983>:18' */
    }
    else
    {
        /* Transition: '<S983>:4' */
        rtb_LeCITR_b_HU_Sch1_TypeFA_out_n = true;
    }

    /* End of Chart: '<S387>/PokeCITR_e_HU_Sch1_TypeChrt' */

    /* Outport: '<Root>/VeCITR_b_HU_Sch1_TypeFA' incorporates:
     *  SignalConversion generated from: '<S387>/VeCITR_b_HU_Sch1_TypeFA'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch1_TypeFA_Value
        (rtb_LeCITR_b_HU_Sch1_TypeFA_out_n);

    /* Outport: '<Root>/VeCITR_e_HU_Sch1_Type' incorporates:
     *  SignalConversion generated from: '<S387>/VeCITR_e_HU_Sch1_Type'
     */
    (void)Rte_Write_VeCITR_e_HU_Sch1_Type_Value
        (CITR_ac_B.LeCITR_e_HU_Sch1_Type_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_HU_Sch1_Type' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_HU_Sch2_Type(VAR(TeCITR_e_SchType, AUTOMATIC)
    LeCITR_e_HU_Sch2_Type, VAR(boolean, AUTOMATIC) LeCITR_b_HU_Sch2_TypeFA)
{
    boolean rtb_LeCITR_b_HU_Sch2_TypeFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_HU_Sch2_Type' */
    /* Chart: '<S388>/PokeCITR_e_HU_Sch2_TypeChrt' incorporates:
     *  SignalConversion generated from: '<S388>/LeCITR_b_HU_Sch2_TypeFA'
     *  SignalConversion generated from: '<S388>/LeCITR_e_HU_Sch2_Type'
     */
    /* Gateway: PokeCITR_e_HU_Sch2_Type/PokeCITR_e_HU_Sch2_TypeChrt */
    /* During: PokeCITR_e_HU_Sch2_Type/PokeCITR_e_HU_Sch2_TypeChrt */
    /* Entry Internal: PokeCITR_e_HU_Sch2_Type/PokeCITR_e_HU_Sch2_TypeChrt */
    /* Transition: '<S984>:2' */
    if (!LeCITR_b_HU_Sch2_TypeFA)
    {
        /* Transition: '<S984>:3' */
        /* Transition: '<S984>:15' */
        CITR_ac_B.LeCITR_e_HU_Sch2_Type_out = LeCITR_e_HU_Sch2_Type;
        rtb_LeCITR_b_HU_Sch2_TypeFA_out = false;

        /* Transition: '<S984>:18' */
    }
    else
    {
        /* Transition: '<S984>:4' */
        rtb_LeCITR_b_HU_Sch2_TypeFA_out = true;
    }

    /* End of Chart: '<S388>/PokeCITR_e_HU_Sch2_TypeChrt' */

    /* Outport: '<Root>/VeCITR_b_HU_Sch2_TypeFA' incorporates:
     *  SignalConversion generated from: '<S388>/VeCITR_b_HU_Sch2_TypeFA'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch2_TypeFA_Value
        (rtb_LeCITR_b_HU_Sch2_TypeFA_out);

    /* Outport: '<Root>/VeCITR_e_HU_Sch2_Type' incorporates:
     *  SignalConversion generated from: '<S388>/VeCITR_e_HU_Sch2_Type'
     */
    (void)Rte_Write_VeCITR_e_HU_Sch2_Type_Value
        (CITR_ac_B.LeCITR_e_HU_Sch2_Type_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_HU_Sch2_Type' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_HU_Sch3_Allow(VAR(TeCITR_e_SchAllow, AUTOMATIC)
    LeCITR_e_HU_Sch3_Allow, VAR(boolean, AUTOMATIC) LeCITR_b_HU_Sch3_AllowFA)
{
    boolean rtb_LeCITR_b_HU_Sch3_AllowFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_HU_Sch3_Allow' */
    /* Chart: '<S389>/PokeCITR_e_HU_Sch3_AllowChrt' incorporates:
     *  SignalConversion generated from: '<S389>/LeCITR_b_HU_Sch3_AllowFA'
     *  SignalConversion generated from: '<S389>/LeCITR_e_HU_Sch3_Allow'
     */
    /* Gateway: PokeCITR_e_HU_Sch3_Allow/PokeCITR_e_HU_Sch3_AllowChrt */
    /* During: PokeCITR_e_HU_Sch3_Allow/PokeCITR_e_HU_Sch3_AllowChrt */
    /* Entry Internal: PokeCITR_e_HU_Sch3_Allow/PokeCITR_e_HU_Sch3_AllowChrt */
    /* Transition: '<S985>:2' */
    if (!LeCITR_b_HU_Sch3_AllowFA)
    {
        /* Transition: '<S985>:3' */
        /* Transition: '<S985>:15' */
        CITR_ac_B.LeCITR_e_HU_Sch3_Allow_out = LeCITR_e_HU_Sch3_Allow;
        rtb_LeCITR_b_HU_Sch3_AllowFA_out = false;

        /* Transition: '<S985>:18' */
    }
    else
    {
        /* Transition: '<S985>:4' */
        rtb_LeCITR_b_HU_Sch3_AllowFA_out = true;
    }

    /* End of Chart: '<S389>/PokeCITR_e_HU_Sch3_AllowChrt' */

    /* Outport: '<Root>/VeCITR_b_HU_Sch3_AllowFA' incorporates:
     *  SignalConversion generated from: '<S389>/VeCITR_b_HU_Sch3_AllowFA'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch3_AllowFA_Value
        (rtb_LeCITR_b_HU_Sch3_AllowFA_out);

    /* Outport: '<Root>/VeCITR_e_HU_Sch3_Allow' incorporates:
     *  SignalConversion generated from: '<S389>/VeCITR_e_HU_Sch3_Allow'
     */
    (void)Rte_Write_VeCITR_e_HU_Sch3_Allow_Value
        (CITR_ac_B.LeCITR_e_HU_Sch3_Allow_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_HU_Sch3_Allow' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_HU_Sch3_Type(VAR(TeCITR_e_SchType, AUTOMATIC)
    LeCITR_e_HU_Sch3_Type, VAR(boolean, AUTOMATIC) LeCITR_b_HU_Sch3_TypeFA)
{
    boolean rtb_LeCITR_b_HU_Sch3_TypeFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_HU_Sch3_Type' */
    /* Chart: '<S390>/PokeCITR_e_HU_Sch3_TypeChrt' incorporates:
     *  SignalConversion generated from: '<S390>/LeCITR_b_HU_Sch3_TypeFA'
     *  SignalConversion generated from: '<S390>/LeCITR_e_HU_Sch3_Type'
     */
    /* Gateway: PokeCITR_e_HU_Sch3_Type/PokeCITR_e_HU_Sch3_TypeChrt */
    /* During: PokeCITR_e_HU_Sch3_Type/PokeCITR_e_HU_Sch3_TypeChrt */
    /* Entry Internal: PokeCITR_e_HU_Sch3_Type/PokeCITR_e_HU_Sch3_TypeChrt */
    /* Transition: '<S986>:2' */
    if (!LeCITR_b_HU_Sch3_TypeFA)
    {
        /* Transition: '<S986>:3' */
        /* Transition: '<S986>:15' */
        CITR_ac_B.LeCITR_e_HU_Sch3_Type_out = LeCITR_e_HU_Sch3_Type;
        rtb_LeCITR_b_HU_Sch3_TypeFA_out = false;

        /* Transition: '<S986>:18' */
    }
    else
    {
        /* Transition: '<S986>:4' */
        rtb_LeCITR_b_HU_Sch3_TypeFA_out = true;
    }

    /* End of Chart: '<S390>/PokeCITR_e_HU_Sch3_TypeChrt' */

    /* Outport: '<Root>/VeCITR_b_HU_Sch3_TypeFA' incorporates:
     *  SignalConversion generated from: '<S390>/VeCITR_b_HU_Sch3_TypeFA'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch3_TypeFA_Value
        (rtb_LeCITR_b_HU_Sch3_TypeFA_out);

    /* Outport: '<Root>/VeCITR_e_HU_Sch3_Type' incorporates:
     *  SignalConversion generated from: '<S390>/VeCITR_e_HU_Sch3_Type'
     */
    (void)Rte_Write_VeCITR_e_HU_Sch3_Type_Value
        (CITR_ac_B.LeCITR_e_HU_Sch3_Type_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_HU_Sch3_Type' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_HU_Sch4_Allow(VAR(TeCITR_e_SchAllow, AUTOMATIC)
    LeCITR_e_HU_Sch4_Allow, VAR(boolean, AUTOMATIC) LeCITR_b_HU_Sch4_AllowFA)
{
    boolean rtb_LeCITR_b_HU_Sch4_AllowFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_HU_Sch4_Allow' */
    /* Chart: '<S391>/PokeCITR_e_HU_Sch4_AllowChrt' incorporates:
     *  SignalConversion generated from: '<S391>/LeCITR_b_HU_Sch4_AllowFA'
     *  SignalConversion generated from: '<S391>/LeCITR_e_HU_Sch4_Allow'
     */
    /* Gateway: PokeCITR_e_HU_Sch4_Allow/PokeCITR_e_HU_Sch4_AllowChrt */
    /* During: PokeCITR_e_HU_Sch4_Allow/PokeCITR_e_HU_Sch4_AllowChrt */
    /* Entry Internal: PokeCITR_e_HU_Sch4_Allow/PokeCITR_e_HU_Sch4_AllowChrt */
    /* Transition: '<S987>:2' */
    if (!LeCITR_b_HU_Sch4_AllowFA)
    {
        /* Transition: '<S987>:3' */
        /* Transition: '<S987>:15' */
        CITR_ac_B.LeCITR_e_HU_Sch4_Allow_out = LeCITR_e_HU_Sch4_Allow;
        rtb_LeCITR_b_HU_Sch4_AllowFA_out = false;

        /* Transition: '<S987>:18' */
    }
    else
    {
        /* Transition: '<S987>:4' */
        rtb_LeCITR_b_HU_Sch4_AllowFA_out = true;
    }

    /* End of Chart: '<S391>/PokeCITR_e_HU_Sch4_AllowChrt' */

    /* Outport: '<Root>/VeCITR_b_HU_Sch4_AllowFA' incorporates:
     *  SignalConversion generated from: '<S391>/VeCITR_b_HU_Sch4_AllowFA'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch4_AllowFA_Value
        (rtb_LeCITR_b_HU_Sch4_AllowFA_out);

    /* Outport: '<Root>/VeCITR_e_HU_Sch4_Allow' incorporates:
     *  SignalConversion generated from: '<S391>/VeCITR_e_HU_Sch4_Allow'
     */
    (void)Rte_Write_VeCITR_e_HU_Sch4_Allow_Value
        (CITR_ac_B.LeCITR_e_HU_Sch4_Allow_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_HU_Sch4_Allow' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_PP2Fault(VAR(TeVTLR_e_PowerPanel2_Fault,
    AUTOMATIC) LeCITR_e_PP2Fault, VAR(boolean, AUTOMATIC) LeCITR_b_PP2FaultFA)
{
    boolean rtb_LeCITR_b_PP2FaultFA_out_l;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_PP2Fault' */
    /* Chart: '<S392>/PokeCITR_e_PP2FaultChrt' incorporates:
     *  SignalConversion generated from: '<S392>/LeCITR_e_FOTA_Installation_Status1'
     *  SignalConversion generated from: '<S392>/LeCITR_e_FOTA_Installation_Status'
     */
    /* Gateway: PokeCITR_e_PP2Fault/PokeCITR_e_PP2FaultChrt */
    /* During: PokeCITR_e_PP2Fault/PokeCITR_e_PP2FaultChrt */
    /* Entry Internal: PokeCITR_e_PP2Fault/PokeCITR_e_PP2FaultChrt */
    /* Transition: '<S988>:2' */
    if (!LeCITR_b_PP2FaultFA)
    {
        /* Transition: '<S988>:20' */
        /* Transition: '<S988>:23' */
        CITR_ac_B.LeCITR_e_PP2Fault_out = LeCITR_e_PP2Fault;
        rtb_LeCITR_b_PP2FaultFA_out_l = false;

        /* Transition: '<S988>:25' */
    }
    else
    {
        /* Transition: '<S988>:24' */
        rtb_LeCITR_b_PP2FaultFA_out_l = true;
    }

    /* End of Chart: '<S392>/PokeCITR_e_PP2FaultChrt' */

    /* Outport: '<Root>/VeCITR_b_PP2FaultFA' incorporates:
     *  SignalConversion generated from: '<S392>/VeCITR_b_PP2FaultFA'
     */
    (void)Rte_Write_VeCITR_b_PP2FaultFA_Value(rtb_LeCITR_b_PP2FaultFA_out_l);

    /* Outport: '<Root>/VeCITR_e_PP2Fault' incorporates:
     *  SignalConversion generated from: '<S392>/VeCITR_e_PP2Fault'
     */
    (void)Rte_Write_VeCITR_e_PP2Fault_Value(CITR_ac_B.LeCITR_e_PP2Fault_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_PP2Fault' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_PP2FaultRsn(VAR(TeCITR_e_PPFaultRsn, AUTOMATIC)
    LeCITR_e_PP2FaultRsn, VAR(boolean, AUTOMATIC) LeCITR_b_PP2FaultRsnFA)
{
    boolean rtb_LeCITR_b_PP2FaultRsnFA_out_n;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_PP2FaultRsn' */
    /* Chart: '<S393>/PokeCITR_e_PP2FaultRsnChrt' incorporates:
     *  SignalConversion generated from: '<S393>/LeCITR_e_FOTA_Installation_Status1'
     *  SignalConversion generated from: '<S393>/LeCITR_e_FOTA_Installation_Status'
     */
    /* Gateway: PokeCITR_e_PP2FaultRsn/PokeCITR_e_PP2FaultRsnChrt */
    /* During: PokeCITR_e_PP2FaultRsn/PokeCITR_e_PP2FaultRsnChrt */
    /* Entry Internal: PokeCITR_e_PP2FaultRsn/PokeCITR_e_PP2FaultRsnChrt */
    /* Transition: '<S989>:2' */
    if (!LeCITR_b_PP2FaultRsnFA)
    {
        /* Transition: '<S989>:20' */
        /* Transition: '<S989>:23' */
        CITR_ac_B.LeCITR_e_PP2FaultRsn_out = LeCITR_e_PP2FaultRsn;
        rtb_LeCITR_b_PP2FaultRsnFA_out_n = false;

        /* Transition: '<S989>:25' */
    }
    else
    {
        /* Transition: '<S989>:24' */
        rtb_LeCITR_b_PP2FaultRsnFA_out_n = true;
    }

    /* End of Chart: '<S393>/PokeCITR_e_PP2FaultRsnChrt' */

    /* Outport: '<Root>/VeCITR_b_PP2FaultRsnFA' incorporates:
     *  SignalConversion generated from: '<S393>/VeCITR_b_PP2FaultRsnFA'
     */
    (void)Rte_Write_VeCITR_b_PP2FaultRsnFA_Value
        (rtb_LeCITR_b_PP2FaultRsnFA_out_n);

    /* Outport: '<Root>/VeCITR_e_PP2FaultRsn' incorporates:
     *  SignalConversion generated from: '<S393>/VeCITR_e_PP2FaultRsn'
     */
    (void)Rte_Write_VeCITR_e_PP2FaultRsn_Value
        (CITR_ac_B.LeCITR_e_PP2FaultRsn_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_PP2FaultRsn' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_PP2LEDFault(VAR(TeCITR_e_PP_LED_Fault,
    AUTOMATIC) LeCITR_e_PP2LEDFault, VAR(boolean, AUTOMATIC)
    LeCITR_b_PP2LEDFaultFA)
{
    boolean rtb_LeCITR_b_PP2LEDFaultFA_out_h;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_PP2LEDFault' */
    /* Chart: '<S394>/PokeCITR_e_PP2LEDFaultChrt' incorporates:
     *  SignalConversion generated from: '<S394>/LeCITR_e_FOTA_Installation_Status1'
     *  SignalConversion generated from: '<S394>/LeCITR_e_FOTA_Installation_Status'
     */
    /* Gateway: PokeCITR_e_PP2LEDFault/PokeCITR_e_PP2LEDFaultChrt */
    /* During: PokeCITR_e_PP2LEDFault/PokeCITR_e_PP2LEDFaultChrt */
    /* Entry Internal: PokeCITR_e_PP2LEDFault/PokeCITR_e_PP2LEDFaultChrt */
    /* Transition: '<S990>:2' */
    if (!LeCITR_b_PP2LEDFaultFA)
    {
        /* Transition: '<S990>:20' */
        /* Transition: '<S990>:23' */
        CITR_ac_B.LeCITR_e_PP2LEDFault_out = LeCITR_e_PP2LEDFault;
        rtb_LeCITR_b_PP2LEDFaultFA_out_h = false;

        /* Transition: '<S990>:25' */
    }
    else
    {
        /* Transition: '<S990>:24' */
        rtb_LeCITR_b_PP2LEDFaultFA_out_h = true;
    }

    /* End of Chart: '<S394>/PokeCITR_e_PP2LEDFaultChrt' */

    /* Outport: '<Root>/VeCITR_b_PP2LEDFaultFA' incorporates:
     *  SignalConversion generated from: '<S394>/VeCITR_b_PP2LEDFaultFA'
     */
    (void)Rte_Write_VeCITR_b_PP2LEDFaultFA_Value
        (rtb_LeCITR_b_PP2LEDFaultFA_out_h);

    /* Outport: '<Root>/VeCITR_e_PP2LEDFault' incorporates:
     *  SignalConversion generated from: '<S394>/VeCITR_e_PP2LEDFault'
     */
    (void)Rte_Write_VeCITR_e_PP2LEDFault_Value
        (CITR_ac_B.LeCITR_e_PP2LEDFault_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_PP2LEDFault' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_PP2_LED_A_ColorFeedback(VAR
    (TeCITR_e_PP_LED_Color_Fdbk, AUTOMATIC) LeCITR_e_PP2_LED_A_ColorFeedback,
    VAR(boolean, AUTOMATIC) LeCITR_b_PP2_LED_A_ColorFeedback_FA)
{
    boolean rtb_LeCITR_b_PP2_LED_A_ColorFeedback_F_p;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_PP2_LED_A_ColorFeedback' */
    /* Chart: '<S395>/PokeCITR_e_PP2_LED_A_ColorFeedbackChrt' incorporates:
     *  SignalConversion generated from: '<S395>/LeCITR_b_DistanceToChargeFA'
     *  SignalConversion generated from: '<S395>/LeCITR_l_DistanceToCharge'
     */
    /* Gateway: PokeCITR_e_PP2_LED_A_ColorFeedback/PokeCITR_e_PP2_LED_A_ColorFeedbackChrt */
    /* During: PokeCITR_e_PP2_LED_A_ColorFeedback/PokeCITR_e_PP2_LED_A_ColorFeedbackChrt */
    /* Entry Internal: PokeCITR_e_PP2_LED_A_ColorFeedback/PokeCITR_e_PP2_LED_A_ColorFeedbackChrt */
    /* Transition: '<S991>:2' */
    if (!LeCITR_b_PP2_LED_A_ColorFeedback_FA)
    {
        /* Transition: '<S991>:3' */
        /* Transition: '<S991>:15' */
        CITR_ac_B.LeCITR_e_PP2_LED_A_ColorFeedback_out =
            LeCITR_e_PP2_LED_A_ColorFeedback;
        rtb_LeCITR_b_PP2_LED_A_ColorFeedback_F_p = false;

        /* Transition: '<S991>:18' */
    }
    else
    {
        /* Transition: '<S991>:4' */
        rtb_LeCITR_b_PP2_LED_A_ColorFeedback_F_p = true;
    }

    /* End of Chart: '<S395>/PokeCITR_e_PP2_LED_A_ColorFeedbackChrt' */

    /* Outport: '<Root>/VeCITR_b_PP2_LED_A_Color_Feedback_FA' incorporates:
     *  SignalConversion generated from: '<S395>/VeCITR_b_PP2_LED_A_Color_Feedback_FA'
     */
    (void)Rte_Write_VeCITR_b_PP2_LED_A_Color_Feedback_FA_Value
        (rtb_LeCITR_b_PP2_LED_A_ColorFeedback_F_p);

    /* Outport: '<Root>/VeCITR_e_PP2_LED_A_Color_Feedback' incorporates:
     *  SignalConversion generated from: '<S395>/VeCITR_e_PP2_LED_A_Color_Feedback'
     */
    (void)Rte_Write_VeCITR_e_PP2_LED_A_Color_Feedback_Value
        (CITR_ac_B.LeCITR_e_PP2_LED_A_ColorFeedback_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_PP2_LED_A_ColorFeedback' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_PP2_LED_A_FailSts(VAR(TeCITR_e_CPIM_LED_Sts,
    AUTOMATIC) LeCITR_e_PP2_LED_A_FailSts, VAR(boolean, AUTOMATIC)
    LeCITR_b_PP2_LED_A_FailSts_FA)
{
    boolean rtb_LeCITR_b_PP2_LED_A_FailSts_FA_out_g;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_PP2_LED_A_FailSts' */
    /* Chart: '<S396>/PokeCITR_e_PP2_LED_A_FailStsChrt' incorporates:
     *  SignalConversion generated from: '<S396>/LeCITR_b_DistanceToChargeFA'
     *  SignalConversion generated from: '<S396>/LeCITR_l_DistanceToCharge'
     */
    /* Gateway: PokeCITR_e_PP2_LED_A_FailSts/PokeCITR_e_PP2_LED_A_FailStsChrt */
    /* During: PokeCITR_e_PP2_LED_A_FailSts/PokeCITR_e_PP2_LED_A_FailStsChrt */
    /* Entry Internal: PokeCITR_e_PP2_LED_A_FailSts/PokeCITR_e_PP2_LED_A_FailStsChrt */
    /* Transition: '<S992>:2' */
    if (!LeCITR_b_PP2_LED_A_FailSts_FA)
    {
        /* Transition: '<S992>:3' */
        /* Transition: '<S992>:15' */
        CITR_ac_B.LeCITR_e_PP2_LED_A_FailSts_out = LeCITR_e_PP2_LED_A_FailSts;
        rtb_LeCITR_b_PP2_LED_A_FailSts_FA_out_g = false;

        /* Transition: '<S992>:18' */
    }
    else
    {
        /* Transition: '<S992>:4' */
        rtb_LeCITR_b_PP2_LED_A_FailSts_FA_out_g = true;
    }

    /* End of Chart: '<S396>/PokeCITR_e_PP2_LED_A_FailStsChrt' */

    /* Outport: '<Root>/VeCITR_b_PP2_LED_A_FailStatus_FA' incorporates:
     *  SignalConversion generated from: '<S396>/VeCITR_b_PP2_LED_A_FailSts_FA'
     */
    (void)Rte_Write_VeCITR_b_PP2_LED_A_FailStatus_FA_Value
        (rtb_LeCITR_b_PP2_LED_A_FailSts_FA_out_g);

    /* Outport: '<Root>/VeCITR_e_PP2_LED_A_FailStatus' incorporates:
     *  SignalConversion generated from: '<S396>/VeCITR_e_PP2_LED_A_FailSts'
     */
    (void)Rte_Write_VeCITR_e_PP2_LED_A_FailStatus_Value
        (CITR_ac_B.LeCITR_e_PP2_LED_A_FailSts_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_PP2_LED_A_FailSts' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_PP2_LED_A_Feedback(VAR(TeCITR_e_CPIM_Indication,
    AUTOMATIC) LeCITR_e_PP2_LED_A_Feedback, VAR(boolean, AUTOMATIC)
    LeCITR_b_PP2_LED_A_Feedback)
{
    boolean rtb_LeCITR_b_PP2_LED_A_Feedback_FA_out_k;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_PP2_LED_A_Feedback' */
    /* Chart: '<S397>/PokeCITR_e_PP2_LED_A_FeedbackChrt' incorporates:
     *  SignalConversion generated from: '<S397>/LeCITR_b_DistanceToChargeFA'
     *  SignalConversion generated from: '<S397>/LeCITR_l_DistanceToCharge'
     */
    /* Gateway: PokeCITR_e_PP2_LED_A_Feedback/PokeCITR_e_PP2_LED_A_FeedbackChrt */
    /* During: PokeCITR_e_PP2_LED_A_Feedback/PokeCITR_e_PP2_LED_A_FeedbackChrt */
    /* Entry Internal: PokeCITR_e_PP2_LED_A_Feedback/PokeCITR_e_PP2_LED_A_FeedbackChrt */
    /* Transition: '<S993>:2' */
    if (!LeCITR_b_PP2_LED_A_Feedback)
    {
        /* Transition: '<S993>:3' */
        /* Transition: '<S993>:15' */
        CITR_ac_B.LeCITR_e_PP2_LED_A_Feedback_out = LeCITR_e_PP2_LED_A_Feedback;
        rtb_LeCITR_b_PP2_LED_A_Feedback_FA_out_k = false;

        /* Transition: '<S993>:18' */
    }
    else
    {
        /* Transition: '<S993>:4' */
        rtb_LeCITR_b_PP2_LED_A_Feedback_FA_out_k = true;
    }

    /* End of Chart: '<S397>/PokeCITR_e_PP2_LED_A_FeedbackChrt' */

    /* Outport: '<Root>/VeCITR_b_PP2_LED_A_Feedback_FA' incorporates:
     *  SignalConversion generated from: '<S397>/VeCITR_b_PP2_LED_A_Feedback_FA'
     */
    (void)Rte_Write_VeCITR_b_PP2_LED_A_Feedback_FA_Value
        (rtb_LeCITR_b_PP2_LED_A_Feedback_FA_out_k);

    /* Outport: '<Root>/VeCITR_e_PP2_LED_A_Feedback' incorporates:
     *  SignalConversion generated from: '<S397>/VeCITR_e_PP2_LED_A_Feedback'
     */
    (void)Rte_Write_VeCITR_e_PP2_LED_A_Feedback_Value
        (CITR_ac_B.LeCITR_e_PP2_LED_A_Feedback_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_PP2_LED_A_Feedback' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_PP2_LED_B_ColorFeedback(VAR
    (TeCITR_e_PP_LED_Color_Fdbk, AUTOMATIC) LeCITR_e_PP2_LED_B_ColorFeedback,
    VAR(boolean, AUTOMATIC) LeCITR_b_PP2_LED_B_ColorFeedback_FA)
{
    boolean rtb_LeCITR_b_PP2_LED_B_ColorFeedback_F_l;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_PP2_LED_B_ColorFeedback' */
    /* Chart: '<S398>/PokeCITR_e_PP2_LED_B_ColorFeedbackChrt' incorporates:
     *  SignalConversion generated from: '<S398>/LeCITR_b_DistanceToChargeFA'
     *  SignalConversion generated from: '<S398>/LeCITR_l_DistanceToCharge'
     */
    /* Gateway: PokeCITR_e_PP2_LED_B_ColorFeedback/PokeCITR_e_PP2_LED_B_ColorFeedbackChrt */
    /* During: PokeCITR_e_PP2_LED_B_ColorFeedback/PokeCITR_e_PP2_LED_B_ColorFeedbackChrt */
    /* Entry Internal: PokeCITR_e_PP2_LED_B_ColorFeedback/PokeCITR_e_PP2_LED_B_ColorFeedbackChrt */
    /* Transition: '<S994>:2' */
    if (!LeCITR_b_PP2_LED_B_ColorFeedback_FA)
    {
        /* Transition: '<S994>:3' */
        /* Transition: '<S994>:15' */
        CITR_ac_B.LeCITR_e_PP2_LED_B_ColorFeedback_out =
            LeCITR_e_PP2_LED_B_ColorFeedback;
        rtb_LeCITR_b_PP2_LED_B_ColorFeedback_F_l = false;

        /* Transition: '<S994>:18' */
    }
    else
    {
        /* Transition: '<S994>:4' */
        rtb_LeCITR_b_PP2_LED_B_ColorFeedback_F_l = true;
    }

    /* End of Chart: '<S398>/PokeCITR_e_PP2_LED_B_ColorFeedbackChrt' */

    /* Outport: '<Root>/VeCITR_b_PP2_LED_B_Color_Feedback_FA' incorporates:
     *  SignalConversion generated from: '<S398>/VeCITR_b_PP2_LED_B_Color_Feedback_FA'
     */
    (void)Rte_Write_VeCITR_b_PP2_LED_B_Color_Feedback_FA_Value
        (rtb_LeCITR_b_PP2_LED_B_ColorFeedback_F_l);

    /* Outport: '<Root>/VeCITR_e_PP2_LED_B_Color_Feedback' incorporates:
     *  SignalConversion generated from: '<S398>/VeCITR_e_PP2_LED_B_Color_Feedback'
     */
    (void)Rte_Write_VeCITR_e_PP2_LED_B_Color_Feedback_Value
        (CITR_ac_B.LeCITR_e_PP2_LED_B_ColorFeedback_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_PP2_LED_B_ColorFeedback' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_PP2_LED_B_FailSts(VAR(TeCITR_e_CPIM_LED_Sts,
    AUTOMATIC) LeCITR_e_PP2_LED_B_FailSts, VAR(boolean, AUTOMATIC)
    LeCITR_b_PP2_LED_B_FailSts_FA)
{
    boolean rtb_LeCITR_b_PP2_LED_B_FailSts_FA_out_l;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_PP2_LED_B_FailSts' */
    /* Chart: '<S399>/PokeCITR_e_PP2_LED_B_FailStsChrt' incorporates:
     *  SignalConversion generated from: '<S399>/LeCITR_b_DistanceToChargeFA'
     *  SignalConversion generated from: '<S399>/LeCITR_l_DistanceToCharge'
     */
    /* Gateway: PokeCITR_e_PP2_LED_B_FailSts/PokeCITR_e_PP2_LED_B_FailStsChrt */
    /* During: PokeCITR_e_PP2_LED_B_FailSts/PokeCITR_e_PP2_LED_B_FailStsChrt */
    /* Entry Internal: PokeCITR_e_PP2_LED_B_FailSts/PokeCITR_e_PP2_LED_B_FailStsChrt */
    /* Transition: '<S995>:2' */
    if (!LeCITR_b_PP2_LED_B_FailSts_FA)
    {
        /* Transition: '<S995>:3' */
        /* Transition: '<S995>:15' */
        CITR_ac_B.LeCITR_e_PP2_LED_B_FailSts_out = LeCITR_e_PP2_LED_B_FailSts;
        rtb_LeCITR_b_PP2_LED_B_FailSts_FA_out_l = false;

        /* Transition: '<S995>:18' */
    }
    else
    {
        /* Transition: '<S995>:4' */
        rtb_LeCITR_b_PP2_LED_B_FailSts_FA_out_l = true;
    }

    /* End of Chart: '<S399>/PokeCITR_e_PP2_LED_B_FailStsChrt' */

    /* Outport: '<Root>/VeCITR_b_PP2_LED_B_FailStatus_FA' incorporates:
     *  SignalConversion generated from: '<S399>/VeCITR_b_PP2_LED_B_FailSts_FA'
     */
    (void)Rte_Write_VeCITR_b_PP2_LED_B_FailStatus_FA_Value
        (rtb_LeCITR_b_PP2_LED_B_FailSts_FA_out_l);

    /* Outport: '<Root>/VeCITR_e_PP2_LED_B_FailStatus' incorporates:
     *  SignalConversion generated from: '<S399>/VeCITR_e_PP2_LED_B_FailSts'
     */
    (void)Rte_Write_VeCITR_e_PP2_LED_B_FailStatus_Value
        (CITR_ac_B.LeCITR_e_PP2_LED_B_FailSts_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_PP2_LED_B_FailSts' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_PP2_LED_B_Feedback(VAR(TeCITR_e_CPIM_Indication,
    AUTOMATIC) LeCITR_e_PP2_LED_B_Feedback, VAR(boolean, AUTOMATIC)
    LeCITR_b_PP2_LED_B_Feedback)
{
    boolean rtb_LeCITR_b_PP2_LED_B_Feedback_FA_out_a;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_PP2_LED_B_Feedback' */
    /* Chart: '<S400>/PokeCITR_e_PP2_LED_B_FeedbackChrt' incorporates:
     *  SignalConversion generated from: '<S400>/LeCITR_b_DistanceToChargeFA'
     *  SignalConversion generated from: '<S400>/LeCITR_l_DistanceToCharge'
     */
    /* Gateway: PokeCITR_e_PP2_LED_B_Feedback/PokeCITR_e_PP2_LED_B_FeedbackChrt */
    /* During: PokeCITR_e_PP2_LED_B_Feedback/PokeCITR_e_PP2_LED_B_FeedbackChrt */
    /* Entry Internal: PokeCITR_e_PP2_LED_B_Feedback/PokeCITR_e_PP2_LED_B_FeedbackChrt */
    /* Transition: '<S996>:2' */
    if (!LeCITR_b_PP2_LED_B_Feedback)
    {
        /* Transition: '<S996>:3' */
        /* Transition: '<S996>:15' */
        CITR_ac_B.LeCITR_e_PP2_LED_B_Feedback_out = LeCITR_e_PP2_LED_B_Feedback;
        rtb_LeCITR_b_PP2_LED_B_Feedback_FA_out_a = false;

        /* Transition: '<S996>:18' */
    }
    else
    {
        /* Transition: '<S996>:4' */
        rtb_LeCITR_b_PP2_LED_B_Feedback_FA_out_a = true;
    }

    /* End of Chart: '<S400>/PokeCITR_e_PP2_LED_B_FeedbackChrt' */

    /* Outport: '<Root>/VeCITR_b_PP2_LED_B_Feedback_FA' incorporates:
     *  SignalConversion generated from: '<S400>/VeCITR_b_PP2_LED_B_Feedback_FA'
     */
    (void)Rte_Write_VeCITR_b_PP2_LED_B_Feedback_FA_Value
        (rtb_LeCITR_b_PP2_LED_B_Feedback_FA_out_a);

    /* Outport: '<Root>/VeCITR_e_PP2_LED_B_Feedback' incorporates:
     *  SignalConversion generated from: '<S400>/VeCITR_e_PP2_LED_B_Feedback'
     */
    (void)Rte_Write_VeCITR_e_PP2_LED_B_Feedback_Value
        (CITR_ac_B.LeCITR_e_PP2_LED_B_Feedback_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_PP2_LED_B_Feedback' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_PPFault(VAR(TeVTLR_e_PowerPanel1_Fault,
    AUTOMATIC) LeCITR_e_PPFault, VAR(boolean, AUTOMATIC) LeCITR_b_PPFaultFA)
{
    boolean rtb_LeCITR_b_PPFaultFA_out_e;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_PPFault' */
    /* Chart: '<S401>/PokeCITR_e_PPFaultChrt' incorporates:
     *  SignalConversion generated from: '<S401>/LeCITR_e_FOTA_Installation_Status1'
     *  SignalConversion generated from: '<S401>/LeCITR_e_FOTA_Installation_Status'
     */
    /* Gateway: PokeCITR_e_PPFault/PokeCITR_e_PPFaultChrt */
    /* During: PokeCITR_e_PPFault/PokeCITR_e_PPFaultChrt */
    /* Entry Internal: PokeCITR_e_PPFault/PokeCITR_e_PPFaultChrt */
    /* Transition: '<S997>:2' */
    if (!LeCITR_b_PPFaultFA)
    {
        /* Transition: '<S997>:20' */
        /* Transition: '<S997>:23' */
        CITR_ac_B.LeCITR_e_PPFault_out = LeCITR_e_PPFault;
        rtb_LeCITR_b_PPFaultFA_out_e = false;

        /* Transition: '<S997>:25' */
    }
    else
    {
        /* Transition: '<S997>:24' */
        rtb_LeCITR_b_PPFaultFA_out_e = true;
    }

    /* End of Chart: '<S401>/PokeCITR_e_PPFaultChrt' */

    /* Outport: '<Root>/VeCITR_b_PPFaultFA' incorporates:
     *  SignalConversion generated from: '<S401>/VeCITR_b_PPFaultFA'
     */
    (void)Rte_Write_VeCITR_b_PPFaultFA_Value(rtb_LeCITR_b_PPFaultFA_out_e);

    /* Outport: '<Root>/VeCITR_e_PPFault' incorporates:
     *  SignalConversion generated from: '<S401>/VeCITR_e_PPFault'
     */
    (void)Rte_Write_VeCITR_e_PPFault_Value(CITR_ac_B.LeCITR_e_PPFault_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_PPFault' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_PPFaultRsn(VAR(TeCITR_e_PPFaultRsn, AUTOMATIC)
    LeCITR_e_PPFaultRsn, VAR(boolean, AUTOMATIC) LeCITR_b_PPFaultRsnFA)
{
    boolean rtb_LeCITR_b_PPFaultRsnFA_out_d;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_PPFaultRsn' */
    /* Chart: '<S402>/PokeCITR_e_PPFaultRsnChrt' incorporates:
     *  SignalConversion generated from: '<S402>/LeCITR_e_FOTA_Installation_Status1'
     *  SignalConversion generated from: '<S402>/LeCITR_e_FOTA_Installation_Status'
     */
    /* Gateway: PokeCITR_e_PPFaultRsn/PokeCITR_e_PPFaultRsnChrt */
    /* During: PokeCITR_e_PPFaultRsn/PokeCITR_e_PPFaultRsnChrt */
    /* Entry Internal: PokeCITR_e_PPFaultRsn/PokeCITR_e_PPFaultRsnChrt */
    /* Transition: '<S998>:2' */
    if (!LeCITR_b_PPFaultRsnFA)
    {
        /* Transition: '<S998>:20' */
        /* Transition: '<S998>:23' */
        CITR_ac_B.LeCITR_e_PPFaultRsn_out = LeCITR_e_PPFaultRsn;
        rtb_LeCITR_b_PPFaultRsnFA_out_d = false;

        /* Transition: '<S998>:25' */
    }
    else
    {
        /* Transition: '<S998>:24' */
        rtb_LeCITR_b_PPFaultRsnFA_out_d = true;
    }

    /* End of Chart: '<S402>/PokeCITR_e_PPFaultRsnChrt' */

    /* Outport: '<Root>/VeCITR_b_PPFaultRsnFA' incorporates:
     *  SignalConversion generated from: '<S402>/VeCITR_b_PPFaultRsnFA'
     */
    (void)Rte_Write_VeCITR_b_PPFaultRsnFA_Value(rtb_LeCITR_b_PPFaultRsnFA_out_d);

    /* Outport: '<Root>/VeCITR_e_PPFaultRsn' incorporates:
     *  SignalConversion generated from: '<S402>/VeCITR_e_PPFaultRsn'
     */
    (void)Rte_Write_VeCITR_e_PPFaultRsn_Value(CITR_ac_B.LeCITR_e_PPFaultRsn_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_PPFaultRsn' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_PPLEDFault(VAR(TeCITR_e_PP_LED_Fault, AUTOMATIC)
    LeCITR_e_PPLEDFault, VAR(boolean, AUTOMATIC) LeCITR_b_PPLEDFaultFA)
{
    boolean rtb_LeCITR_b_PPLEDFaultFA_out_k;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_PPLEDFault' */
    /* Chart: '<S403>/PokeCITR_e_PPLEDFaultChrt' incorporates:
     *  SignalConversion generated from: '<S403>/LeCITR_e_FOTA_Installation_Status1'
     *  SignalConversion generated from: '<S403>/LeCITR_e_FOTA_Installation_Status'
     */
    /* Gateway: PokeCITR_e_PPLEDFault/PokeCITR_e_PPLEDFaultChrt */
    /* During: PokeCITR_e_PPLEDFault/PokeCITR_e_PPLEDFaultChrt */
    /* Entry Internal: PokeCITR_e_PPLEDFault/PokeCITR_e_PPLEDFaultChrt */
    /* Transition: '<S999>:2' */
    if (!LeCITR_b_PPLEDFaultFA)
    {
        /* Transition: '<S999>:20' */
        /* Transition: '<S999>:23' */
        CITR_ac_B.LeCITR_e_PPLEDFault_out = LeCITR_e_PPLEDFault;
        rtb_LeCITR_b_PPLEDFaultFA_out_k = false;

        /* Transition: '<S999>:25' */
    }
    else
    {
        /* Transition: '<S999>:24' */
        rtb_LeCITR_b_PPLEDFaultFA_out_k = true;
    }

    /* End of Chart: '<S403>/PokeCITR_e_PPLEDFaultChrt' */

    /* Outport: '<Root>/VeCITR_b_PPLEDFaultFA' incorporates:
     *  SignalConversion generated from: '<S403>/VeCITR_b_PPLEDFaultFA'
     */
    (void)Rte_Write_VeCITR_b_PPLEDFaultFA_Value(rtb_LeCITR_b_PPLEDFaultFA_out_k);

    /* Outport: '<Root>/VeCITR_e_PPLEDFault' incorporates:
     *  SignalConversion generated from: '<S403>/VeCITR_e_PPLEDFault'
     */
    (void)Rte_Write_VeCITR_e_PPLEDFault_Value(CITR_ac_B.LeCITR_e_PPLEDFault_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_PPLEDFault' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_PP_LED_A_ColorFeedback(VAR
    (TeCITR_e_PP_LED_Color_Fdbk, AUTOMATIC) LeCITR_e_PP_LED_A_ColorFeedback, VAR
    (boolean, AUTOMATIC) LeCITR_b_PP_LED_A_ColorFeedback_FA)
{
    boolean rtb_LeCITR_b_PP_LED_A_ColorFeedback_FA_g;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_PP_LED_A_ColorFeedback' */
    /* Chart: '<S404>/PokeCITR_e_PP_LED_A_ColorFeedbackChrt' incorporates:
     *  SignalConversion generated from: '<S404>/LeCITR_b_DistanceToChargeFA'
     *  SignalConversion generated from: '<S404>/LeCITR_l_DistanceToCharge'
     */
    /* Gateway: PokeCITR_e_PP_LED_A_ColorFeedback/PokeCITR_e_PP_LED_A_ColorFeedbackChrt */
    /* During: PokeCITR_e_PP_LED_A_ColorFeedback/PokeCITR_e_PP_LED_A_ColorFeedbackChrt */
    /* Entry Internal: PokeCITR_e_PP_LED_A_ColorFeedback/PokeCITR_e_PP_LED_A_ColorFeedbackChrt */
    /* Transition: '<S1000>:2' */
    if (!LeCITR_b_PP_LED_A_ColorFeedback_FA)
    {
        /* Transition: '<S1000>:3' */
        /* Transition: '<S1000>:15' */
        CITR_ac_B.LeCITR_e_PP_LED_A_ColorFeedback_out =
            LeCITR_e_PP_LED_A_ColorFeedback;
        rtb_LeCITR_b_PP_LED_A_ColorFeedback_FA_g = false;

        /* Transition: '<S1000>:18' */
    }
    else
    {
        /* Transition: '<S1000>:4' */
        rtb_LeCITR_b_PP_LED_A_ColorFeedback_FA_g = true;
    }

    /* End of Chart: '<S404>/PokeCITR_e_PP_LED_A_ColorFeedbackChrt' */

    /* Outport: '<Root>/VeCITR_b_PP_LED_A_Color_Feedback_FA' incorporates:
     *  SignalConversion generated from: '<S404>/VeCITR_b_PP_LED_A_Color_Feedback_FA'
     */
    (void)Rte_Write_VeCITR_b_PP_LED_A_Color_Feedback_FA_Value
        (rtb_LeCITR_b_PP_LED_A_ColorFeedback_FA_g);

    /* Outport: '<Root>/VeCITR_e_PP_LED_A_Color_Feedback' incorporates:
     *  SignalConversion generated from: '<S404>/VeCITR_e_PP_LED_A_Color_Feedback'
     */
    (void)Rte_Write_VeCITR_e_PP_LED_A_Color_Feedback_Value
        (CITR_ac_B.LeCITR_e_PP_LED_A_ColorFeedback_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_PP_LED_A_ColorFeedback' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_PP_LED_A_FailSts(VAR(TeCITR_e_CPIM_LED_Sts,
    AUTOMATIC) LeCITR_e_PP_LED_A_FailSts, VAR(boolean, AUTOMATIC)
    LeCITR_b_PP_LED_A_FailSts_FA)
{
    boolean rtb_LeCITR_b_PP_LED_A_FailSts_FA_out_g;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_PP_LED_A_FailSts' */
    /* Chart: '<S405>/PokeCITR_e_PP_LED_A_FailStsChrt' incorporates:
     *  SignalConversion generated from: '<S405>/LeCITR_b_DistanceToChargeFA'
     *  SignalConversion generated from: '<S405>/LeCITR_l_DistanceToCharge'
     */
    /* Gateway: PokeCITR_e_PP_LED_A_FailSts/PokeCITR_e_PP_LED_A_FailStsChrt */
    /* During: PokeCITR_e_PP_LED_A_FailSts/PokeCITR_e_PP_LED_A_FailStsChrt */
    /* Entry Internal: PokeCITR_e_PP_LED_A_FailSts/PokeCITR_e_PP_LED_A_FailStsChrt */
    /* Transition: '<S1001>:2' */
    if (!LeCITR_b_PP_LED_A_FailSts_FA)
    {
        /* Transition: '<S1001>:3' */
        /* Transition: '<S1001>:15' */
        CITR_ac_B.LeCITR_e_PP_LED_A_FailSts_out = LeCITR_e_PP_LED_A_FailSts;
        rtb_LeCITR_b_PP_LED_A_FailSts_FA_out_g = false;

        /* Transition: '<S1001>:18' */
    }
    else
    {
        /* Transition: '<S1001>:4' */
        rtb_LeCITR_b_PP_LED_A_FailSts_FA_out_g = true;
    }

    /* End of Chart: '<S405>/PokeCITR_e_PP_LED_A_FailStsChrt' */

    /* Outport: '<Root>/VeCITR_b_PP_LED_A_FailStatus_FA' incorporates:
     *  SignalConversion generated from: '<S405>/VeCITR_b_PP_LED_A_FailSts_FA'
     */
    (void)Rte_Write_VeCITR_b_PP_LED_A_FailStatus_FA_Value
        (rtb_LeCITR_b_PP_LED_A_FailSts_FA_out_g);

    /* Outport: '<Root>/VeCITR_e_PP_LED_A_FailStatus' incorporates:
     *  SignalConversion generated from: '<S405>/VeCITR_e_PP_LED_A_FailSts'
     */
    (void)Rte_Write_VeCITR_e_PP_LED_A_FailStatus_Value
        (CITR_ac_B.LeCITR_e_PP_LED_A_FailSts_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_PP_LED_A_FailSts' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_PP_LED_A_Feedback(VAR(TeCITR_e_CPIM_Indication,
    AUTOMATIC) LeCITR_e_PP_LED_A_Feedback, VAR(boolean, AUTOMATIC)
    LeCITR_b_PP_LED_A_Feedback)
{
    boolean rtb_LeCITR_b_PP_LED_A_Feedback_FA_out_m;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_PP_LED_A_Feedback' */
    /* Chart: '<S406>/PokeCITR_e_PP_LED_A_FeedbackChrt' incorporates:
     *  SignalConversion generated from: '<S406>/LeCITR_b_DistanceToChargeFA'
     *  SignalConversion generated from: '<S406>/LeCITR_l_DistanceToCharge'
     */
    /* Gateway: PokeCITR_e_PP_LED_A_Feedback/PokeCITR_e_PP_LED_A_FeedbackChrt */
    /* During: PokeCITR_e_PP_LED_A_Feedback/PokeCITR_e_PP_LED_A_FeedbackChrt */
    /* Entry Internal: PokeCITR_e_PP_LED_A_Feedback/PokeCITR_e_PP_LED_A_FeedbackChrt */
    /* Transition: '<S1002>:2' */
    if (!LeCITR_b_PP_LED_A_Feedback)
    {
        /* Transition: '<S1002>:3' */
        /* Transition: '<S1002>:15' */
        CITR_ac_B.LeCITR_e_PP_LED_A_Feedback_out = LeCITR_e_PP_LED_A_Feedback;
        rtb_LeCITR_b_PP_LED_A_Feedback_FA_out_m = false;

        /* Transition: '<S1002>:18' */
    }
    else
    {
        /* Transition: '<S1002>:4' */
        rtb_LeCITR_b_PP_LED_A_Feedback_FA_out_m = true;
    }

    /* End of Chart: '<S406>/PokeCITR_e_PP_LED_A_FeedbackChrt' */

    /* Outport: '<Root>/VeCITR_b_PP_LED_A_Feedback_FA' incorporates:
     *  SignalConversion generated from: '<S406>/VeCITR_b_PP_LED_A_Feedback_FA'
     */
    (void)Rte_Write_VeCITR_b_PP_LED_A_Feedback_FA_Value
        (rtb_LeCITR_b_PP_LED_A_Feedback_FA_out_m);

    /* Outport: '<Root>/VeCITR_e_PP_LED_A_Feedback' incorporates:
     *  SignalConversion generated from: '<S406>/VeCITR_e_PP_LED_A_Feedback'
     */
    (void)Rte_Write_VeCITR_e_PP_LED_A_Feedback_Value
        (CITR_ac_B.LeCITR_e_PP_LED_A_Feedback_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_PP_LED_A_Feedback' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_PP_LED_B_ColorFeedback(VAR
    (TeCITR_e_PP_LED_Color_Fdbk, AUTOMATIC) LeCITR_e_PP_LED_B_ColorFeedback, VAR
    (boolean, AUTOMATIC) LeCITR_b_PP_LED_B_ColorFeedback_FA)
{
    boolean rtb_LeCITR_b_PP_LED_B_ColorFeedback_FA_j;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_PP_LED_B_ColorFeedback' */
    /* Chart: '<S407>/PokeCITR_e_PP_LED_B_ColorFeedbackChrt' incorporates:
     *  SignalConversion generated from: '<S407>/LeCITR_b_DistanceToChargeFA'
     *  SignalConversion generated from: '<S407>/LeCITR_l_DistanceToCharge'
     */
    /* Gateway: PokeCITR_e_PP_LED_B_ColorFeedback/PokeCITR_e_PP_LED_B_ColorFeedbackChrt */
    /* During: PokeCITR_e_PP_LED_B_ColorFeedback/PokeCITR_e_PP_LED_B_ColorFeedbackChrt */
    /* Entry Internal: PokeCITR_e_PP_LED_B_ColorFeedback/PokeCITR_e_PP_LED_B_ColorFeedbackChrt */
    /* Transition: '<S1003>:2' */
    if (!LeCITR_b_PP_LED_B_ColorFeedback_FA)
    {
        /* Transition: '<S1003>:3' */
        /* Transition: '<S1003>:15' */
        CITR_ac_B.LeCITR_e_PP_LED_B_ColorFeedback_out =
            LeCITR_e_PP_LED_B_ColorFeedback;
        rtb_LeCITR_b_PP_LED_B_ColorFeedback_FA_j = false;

        /* Transition: '<S1003>:18' */
    }
    else
    {
        /* Transition: '<S1003>:4' */
        rtb_LeCITR_b_PP_LED_B_ColorFeedback_FA_j = true;
    }

    /* End of Chart: '<S407>/PokeCITR_e_PP_LED_B_ColorFeedbackChrt' */

    /* Outport: '<Root>/VeCITR_b_PP_LED_B_Color_Feedback_FA' incorporates:
     *  SignalConversion generated from: '<S407>/VeCITR_b_PP_LED_B_Color_Feedback_FA'
     */
    (void)Rte_Write_VeCITR_b_PP_LED_B_Color_Feedback_FA_Value
        (rtb_LeCITR_b_PP_LED_B_ColorFeedback_FA_j);

    /* Outport: '<Root>/VeCITR_e_PP_LED_B_Color_Feedback' incorporates:
     *  SignalConversion generated from: '<S407>/VeCITR_e_PP_LED_B_Color_Feedback'
     */
    (void)Rte_Write_VeCITR_e_PP_LED_B_Color_Feedback_Value
        (CITR_ac_B.LeCITR_e_PP_LED_B_ColorFeedback_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_PP_LED_B_ColorFeedback' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_PP_LED_B_FailSts(VAR(TeCITR_e_CPIM_LED_Sts,
    AUTOMATIC) LeCITR_e_PP_LED_B_FailSts, VAR(boolean, AUTOMATIC)
    LeCITR_b_PP_LED_B_FailSts_FA)
{
    boolean rtb_LeCITR_b_PP_LED_B_FailSts_FA_out_k;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_PP_LED_B_FailSts' */
    /* Chart: '<S408>/PokeCITR_e_PP_LED_B_FailStsChrt' incorporates:
     *  SignalConversion generated from: '<S408>/LeCITR_b_DistanceToChargeFA'
     *  SignalConversion generated from: '<S408>/LeCITR_l_DistanceToCharge'
     */
    /* Gateway: PokeCITR_e_PP_LED_B_FailSts/PokeCITR_e_PP_LED_B_FailStsChrt */
    /* During: PokeCITR_e_PP_LED_B_FailSts/PokeCITR_e_PP_LED_B_FailStsChrt */
    /* Entry Internal: PokeCITR_e_PP_LED_B_FailSts/PokeCITR_e_PP_LED_B_FailStsChrt */
    /* Transition: '<S1004>:2' */
    if (!LeCITR_b_PP_LED_B_FailSts_FA)
    {
        /* Transition: '<S1004>:3' */
        /* Transition: '<S1004>:15' */
        CITR_ac_B.LeCITR_e_PP_LED_B_FailSts_out = LeCITR_e_PP_LED_B_FailSts;
        rtb_LeCITR_b_PP_LED_B_FailSts_FA_out_k = false;

        /* Transition: '<S1004>:18' */
    }
    else
    {
        /* Transition: '<S1004>:4' */
        rtb_LeCITR_b_PP_LED_B_FailSts_FA_out_k = true;
    }

    /* End of Chart: '<S408>/PokeCITR_e_PP_LED_B_FailStsChrt' */

    /* Outport: '<Root>/VeCITR_b_PP_LED_B_FailStatus_FA' incorporates:
     *  SignalConversion generated from: '<S408>/VeCITR_b_PP_LED_B_FailSts_FA'
     */
    (void)Rte_Write_VeCITR_b_PP_LED_B_FailStatus_FA_Value
        (rtb_LeCITR_b_PP_LED_B_FailSts_FA_out_k);

    /* Outport: '<Root>/VeCITR_e_PP_LED_B_FailStatus' incorporates:
     *  SignalConversion generated from: '<S408>/VeCITR_e_PP_LED_B_FailSts'
     */
    (void)Rte_Write_VeCITR_e_PP_LED_B_FailStatus_Value
        (CITR_ac_B.LeCITR_e_PP_LED_B_FailSts_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_PP_LED_B_FailSts' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_PP_LED_B_Feedback(VAR(TeCITR_e_CPIM_Indication,
    AUTOMATIC) LeCITR_e_PP_LED_B_Feedback, VAR(boolean, AUTOMATIC)
    LeCITR_b_PP_LED_B_Feedback)
{
    boolean rtb_LeCITR_b_PP_LED_B_Feedback_FA_out_e;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_PP_LED_B_Feedback' */
    /* Chart: '<S409>/PokeCITR_e_PP_LED_B_FeedbackChrt' incorporates:
     *  SignalConversion generated from: '<S409>/LeCITR_b_DistanceToChargeFA'
     *  SignalConversion generated from: '<S409>/LeCITR_l_DistanceToCharge'
     */
    /* Gateway: PokeCITR_e_PP_LED_B_Feedback/PokeCITR_e_PP_LED_B_FeedbackChrt */
    /* During: PokeCITR_e_PP_LED_B_Feedback/PokeCITR_e_PP_LED_B_FeedbackChrt */
    /* Entry Internal: PokeCITR_e_PP_LED_B_Feedback/PokeCITR_e_PP_LED_B_FeedbackChrt */
    /* Transition: '<S1005>:2' */
    if (!LeCITR_b_PP_LED_B_Feedback)
    {
        /* Transition: '<S1005>:3' */
        /* Transition: '<S1005>:15' */
        CITR_ac_B.LeCITR_e_PP_LED_B_Feedback_out = LeCITR_e_PP_LED_B_Feedback;
        rtb_LeCITR_b_PP_LED_B_Feedback_FA_out_e = false;

        /* Transition: '<S1005>:18' */
    }
    else
    {
        /* Transition: '<S1005>:4' */
        rtb_LeCITR_b_PP_LED_B_Feedback_FA_out_e = true;
    }

    /* End of Chart: '<S409>/PokeCITR_e_PP_LED_B_FeedbackChrt' */

    /* Outport: '<Root>/VeCITR_b_PP_LED_B_Feedback_FA' incorporates:
     *  SignalConversion generated from: '<S409>/VeCITR_b_PP_LED_B_Feedback_FA'
     */
    (void)Rte_Write_VeCITR_b_PP_LED_B_Feedback_FA_Value
        (rtb_LeCITR_b_PP_LED_B_Feedback_FA_out_e);

    /* Outport: '<Root>/VeCITR_e_PP_LED_B_Feedback' incorporates:
     *  SignalConversion generated from: '<S409>/VeCITR_e_PP_LED_B_Feedback'
     */
    (void)Rte_Write_VeCITR_e_PP_LED_B_Feedback_Value
        (CITR_ac_B.LeCITR_e_PP_LED_B_Feedback_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_PP_LED_B_Feedback' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_PP_LED_C_ColorFeedback(VAR
    (TeCITR_e_PP_LED_Color_Fdbk, AUTOMATIC) LeCITR_e_PP_LED_C_ColorFeedback, VAR
    (boolean, AUTOMATIC) LeCITR_b_PP_LED_C_ColorFeedback_FA)
{
    boolean rtb_LeCITR_b_PP_LED_C_ColorFeedback_FA_n;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_PP_LED_C_ColorFeedback' */
    /* Chart: '<S410>/PokeCITR_e_PP_LED_C_ColorFeedbackChrt' incorporates:
     *  SignalConversion generated from: '<S410>/LeCITR_b_DistanceToChargeFA'
     *  SignalConversion generated from: '<S410>/LeCITR_l_DistanceToCharge'
     */
    /* Gateway: PokeCITR_e_PP_LED_C_ColorFeedback/PokeCITR_e_PP_LED_C_ColorFeedbackChrt */
    /* During: PokeCITR_e_PP_LED_C_ColorFeedback/PokeCITR_e_PP_LED_C_ColorFeedbackChrt */
    /* Entry Internal: PokeCITR_e_PP_LED_C_ColorFeedback/PokeCITR_e_PP_LED_C_ColorFeedbackChrt */
    /* Transition: '<S1006>:2' */
    if (!LeCITR_b_PP_LED_C_ColorFeedback_FA)
    {
        /* Transition: '<S1006>:3' */
        /* Transition: '<S1006>:15' */
        CITR_ac_B.LeCITR_e_PP_LED_C_ColorFeedback_out =
            LeCITR_e_PP_LED_C_ColorFeedback;
        rtb_LeCITR_b_PP_LED_C_ColorFeedback_FA_n = false;

        /* Transition: '<S1006>:18' */
    }
    else
    {
        /* Transition: '<S1006>:4' */
        rtb_LeCITR_b_PP_LED_C_ColorFeedback_FA_n = true;
    }

    /* End of Chart: '<S410>/PokeCITR_e_PP_LED_C_ColorFeedbackChrt' */

    /* Outport: '<Root>/VeCITR_b_PP_LED_C_Color_Feedback_FA' incorporates:
     *  SignalConversion generated from: '<S410>/VeCITR_b_PP_LED_C_Color_Feedback_FA'
     */
    (void)Rte_Write_VeCITR_b_PP_LED_C_Color_Feedback_FA_Value
        (rtb_LeCITR_b_PP_LED_C_ColorFeedback_FA_n);

    /* Outport: '<Root>/VeCITR_e_PP_LED_C_Color_Feedback' incorporates:
     *  SignalConversion generated from: '<S410>/VeCITR_e_PP_LED_C_Color_Feedback'
     */
    (void)Rte_Write_VeCITR_e_PP_LED_C_Color_Feedback_Value
        (CITR_ac_B.LeCITR_e_PP_LED_C_ColorFeedback_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_PP_LED_C_ColorFeedback' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_PP_LED_C_FailSts(VAR(TeCITR_e_CPIM_LED_Sts,
    AUTOMATIC) LeCITR_e_PP_LED_C_FailSts, VAR(boolean, AUTOMATIC)
    LeCITR_b_PP_LED_C_FailSts_FA)
{
    boolean rtb_LeCITR_b_PP_LED_C_FailSts_FA_out_b;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_PP_LED_C_FailSts' */
    /* Chart: '<S411>/PokeCITR_e_PP_LED_C_FailStsChrt' incorporates:
     *  SignalConversion generated from: '<S411>/LeCITR_b_DistanceToChargeFA'
     *  SignalConversion generated from: '<S411>/LeCITR_l_DistanceToCharge'
     */
    /* Gateway: PokeCITR_e_PP_LED_C_FailSts/PokeCITR_e_PP_LED_C_FailStsChrt */
    /* During: PokeCITR_e_PP_LED_C_FailSts/PokeCITR_e_PP_LED_C_FailStsChrt */
    /* Entry Internal: PokeCITR_e_PP_LED_C_FailSts/PokeCITR_e_PP_LED_C_FailStsChrt */
    /* Transition: '<S1007>:2' */
    if (!LeCITR_b_PP_LED_C_FailSts_FA)
    {
        /* Transition: '<S1007>:3' */
        /* Transition: '<S1007>:15' */
        CITR_ac_B.LeCITR_e_PP_LED_C_FailSts_out = LeCITR_e_PP_LED_C_FailSts;
        rtb_LeCITR_b_PP_LED_C_FailSts_FA_out_b = false;

        /* Transition: '<S1007>:18' */
    }
    else
    {
        /* Transition: '<S1007>:4' */
        rtb_LeCITR_b_PP_LED_C_FailSts_FA_out_b = true;
    }

    /* End of Chart: '<S411>/PokeCITR_e_PP_LED_C_FailStsChrt' */

    /* Outport: '<Root>/VeCITR_b_PP_LED_C_FailStatus_FA' incorporates:
     *  SignalConversion generated from: '<S411>/VeCITR_b_PP_LED_C_FailSts_FA'
     */
    (void)Rte_Write_VeCITR_b_PP_LED_C_FailStatus_FA_Value
        (rtb_LeCITR_b_PP_LED_C_FailSts_FA_out_b);

    /* Outport: '<Root>/VeCITR_e_PP_LED_C_FailStatus' incorporates:
     *  SignalConversion generated from: '<S411>/VeCITR_e_PP_LED_C_FailSts'
     */
    (void)Rte_Write_VeCITR_e_PP_LED_C_FailStatus_Value
        (CITR_ac_B.LeCITR_e_PP_LED_C_FailSts_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_PP_LED_C_FailSts' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_PP_LED_C_Feedback(VAR(TeCITR_e_CPIM_Indication,
    AUTOMATIC) LeCITR_e_PP_LED_C_Feedback, VAR(boolean, AUTOMATIC)
    LeCITR_b_PP_LED_C_Feedback)
{
    boolean rtb_LeCITR_b_PP_LED_C_Feedback_FA_out_k;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_PP_LED_C_Feedback' */
    /* Chart: '<S412>/PokeCITR_e_PP_LED_C_FeedbackChrt' incorporates:
     *  SignalConversion generated from: '<S412>/LeCITR_b_DistanceToChargeFA'
     *  SignalConversion generated from: '<S412>/LeCITR_l_DistanceToCharge'
     */
    /* Gateway: PokeCITR_e_PP_LED_C_Feedback/PokeCITR_e_PP_LED_C_FeedbackChrt */
    /* During: PokeCITR_e_PP_LED_C_Feedback/PokeCITR_e_PP_LED_C_FeedbackChrt */
    /* Entry Internal: PokeCITR_e_PP_LED_C_Feedback/PokeCITR_e_PP_LED_C_FeedbackChrt */
    /* Transition: '<S1008>:2' */
    if (!LeCITR_b_PP_LED_C_Feedback)
    {
        /* Transition: '<S1008>:3' */
        /* Transition: '<S1008>:15' */
        CITR_ac_B.LeCITR_e_PP_LED_C_Feedback_out = LeCITR_e_PP_LED_C_Feedback;
        rtb_LeCITR_b_PP_LED_C_Feedback_FA_out_k = false;

        /* Transition: '<S1008>:18' */
    }
    else
    {
        /* Transition: '<S1008>:4' */
        rtb_LeCITR_b_PP_LED_C_Feedback_FA_out_k = true;
    }

    /* End of Chart: '<S412>/PokeCITR_e_PP_LED_C_FeedbackChrt' */

    /* Outport: '<Root>/VeCITR_b_PP_LED_C_Feedback_FA' incorporates:
     *  SignalConversion generated from: '<S412>/VeCITR_b_PP_LED_C_Feedback_FA'
     */
    (void)Rte_Write_VeCITR_b_PP_LED_C_Feedback_FA_Value
        (rtb_LeCITR_b_PP_LED_C_Feedback_FA_out_k);

    /* Outport: '<Root>/VeCITR_e_PP_LED_C_Feedback' incorporates:
     *  SignalConversion generated from: '<S412>/VeCITR_e_PP_LED_C_Feedback'
     */
    (void)Rte_Write_VeCITR_e_PP_LED_C_Feedback_Value
        (CITR_ac_B.LeCITR_e_PP_LED_C_Feedback_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_PP_LED_C_Feedback' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_PowerLimit_Req(VAR(TeOBCR_e_PwrLimReq,
    AUTOMATIC) LeCITR_e_PowerLimit_Req, VAR(boolean, AUTOMATIC)
    LeCITR_b_PowerLimit_ReqFA)
{
    boolean rtb_LeCITR_b_PowerLimit_ReqFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_PowerLimit_Req' */
    /* Chart: '<S413>/PokeCITR_e_PowerLimit_ReqChrt' incorporates:
     *  Constant: '<S1009>/Calib'
     *  SignalConversion generated from: '<S413>/LeCITR_b_PowerLimit_ReqFA'
     *  SignalConversion generated from: '<S413>/LeCITR_e_PowerLimit_Req'
     */
    /* Gateway: PokeCITR_e_PowerLimit_Req/PokeCITR_e_PowerLimit_ReqChrt */
    /* During: PokeCITR_e_PowerLimit_Req/PokeCITR_e_PowerLimit_ReqChrt */
    /* Entry Internal: PokeCITR_e_PowerLimit_Req/PokeCITR_e_PowerLimit_ReqChrt */
    /* Transition: '<S1010>:2' */
    if (!LeCITR_b_PowerLimit_ReqFA)
    {
        /* Transition: '<S1010>:3' */
        /* Transition: '<S1010>:15' */
        CITR_ac_B.LeCITR_e_PowerLimit_Req_out = KaCITR_e_PowerLimit_Req
            [(LeCITR_e_PowerLimit_Req)];
        rtb_LeCITR_b_PowerLimit_ReqFA_out = false;
        CITR_ac_B.LeCITR_b_PowerLimit_ReqSgnl_Rcvd = true;

        /* Transition: '<S1010>:18' */
    }
    else
    {
        /* Transition: '<S1010>:4' */
        rtb_LeCITR_b_PowerLimit_ReqFA_out = true;
    }

    /* End of Chart: '<S413>/PokeCITR_e_PowerLimit_ReqChrt' */

    /* Merge: '<Root>/Merge_31' incorporates:
     *  SignalConversion generated from: '<S413>/VeCITR_b_PowerLimit_ReqFA_write'
     * */
    Rte_IrvWrite_PokeCITR_e_PowerLimit_Req_PwrLimReq_FA_Init_write_IRV
        (rtb_LeCITR_b_PowerLimit_ReqFA_out);

    /* Merge: '<Root>/Merge_32' incorporates:
     *  SignalConversion generated from: '<S413>/VeCITR_b_PowerLimit_ReqSgnl_Rcvd_write'
     * */
    Rte_IrvWrite_PokeCITR_e_PowerLimit_Req_PwrLimReq_SgnlRcvd_Init_write_IRV
        (CITR_ac_B.LeCITR_b_PowerLimit_ReqSgnl_Rcvd);

    /* Merge: '<Root>/Merge_11' incorporates:
     *  SignalConversion generated from: '<S413>/VeCITR_e_PowerLimit_Req_write'
     * */
    Rte_IrvWrite_PokeCITR_e_PowerLimit_Req_PwrLimReq_Init_write_IRV
        (CITR_ac_B.LeCITR_e_PowerLimit_Req_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_PowerLimit_Req' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_PowerLimit_Req_2(VAR(TeOBCR_e_PwrLimReq,
    AUTOMATIC) LeCITR_e_PowerLimit_Req_2, VAR(boolean, AUTOMATIC)
    LeCITR_b_PowerLimit_Req_2FA)
{
    boolean rtb_LeCITR_b_PowerLimit_Req_2FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_PowerLimit_Req_2' */
    /* Chart: '<S414>/PokeCITR_e_PowerLimit_Req_2Chrt' incorporates:
     *  Constant: '<S1011>/Calib'
     *  SignalConversion generated from: '<S414>/LeCITR_b_PowerLimit_Req_2FA'
     *  SignalConversion generated from: '<S414>/LeCITR_e_PowerLimit_Req_2'
     */
    /* Gateway: PokeCITR_e_PowerLimit_Req_2/PokeCITR_e_PowerLimit_Req_2Chrt */
    /* During: PokeCITR_e_PowerLimit_Req_2/PokeCITR_e_PowerLimit_Req_2Chrt */
    /* Entry Internal: PokeCITR_e_PowerLimit_Req_2/PokeCITR_e_PowerLimit_Req_2Chrt */
    /* Transition: '<S1012>:2' */
    if (!LeCITR_b_PowerLimit_Req_2FA)
    {
        /* Transition: '<S1012>:3' */
        /* Transition: '<S1012>:15' */
        CITR_ac_B.LeCITR_e_PowerLimit_Req_2_out = KaCITR_e_PowerLimit_Req
            [(LeCITR_e_PowerLimit_Req_2)];
        rtb_LeCITR_b_PowerLimit_Req_2FA_out = false;
        CITR_ac_B.LeCITR_b_PowerLimit_ReqSgnl_2Rcvd = true;

        /* Transition: '<S1012>:18' */
    }
    else
    {
        /* Transition: '<S1012>:4' */
        rtb_LeCITR_b_PowerLimit_Req_2FA_out = true;
    }

    /* End of Chart: '<S414>/PokeCITR_e_PowerLimit_Req_2Chrt' */

    /* Merge: '<Root>/Merge_24' incorporates:
     *  SignalConversion generated from: '<S414>/VeCITR_b_PowerLimit_ReqSgnl_2Rcvd_write'
     * */
    Rte_IrvWrite_PokeCITR_e_PowerLimit_Req_2_PwrLimReq_SgnlRcvd_2_Init_write_IRV
        (CITR_ac_B.LeCITR_b_PowerLimit_ReqSgnl_2Rcvd);

    /* Merge: '<Root>/Merge_25' incorporates:
     *  SignalConversion generated from: '<S414>/VeCITR_b_PowerLimit_Req_2FA_write'
     * */
    Rte_IrvWrite_PokeCITR_e_PowerLimit_Req_2_PwrLimReq_FA_2_Init_write_IRV
        (rtb_LeCITR_b_PowerLimit_Req_2FA_out);

    /* Merge: '<Root>/Merge_23' incorporates:
     *  SignalConversion generated from: '<S414>/VeCITR_e_PowerLimit_Req_2_write'
     * */
    Rte_IrvWrite_PokeCITR_e_PowerLimit_Req_2_PwrLimReq_2_Init_write_IRV
        (CITR_ac_B.LeCITR_e_PowerLimit_Req_2_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_PowerLimit_Req_2' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_RmtChrgPortLkCmd(VAR(TeCITR_e_RmtChargePortCmd,
    AUTOMATIC) LeCITR_e_RmtChrgPortLkCmd, VAR(boolean, AUTOMATIC)
    LeCITR_b_RmtChrgPortLkCmdFA)
{
    boolean rtb_LeCITR_b_RmtChrgPortLkCmdFA_out_h;
    boolean rtb_LeCITR_b_RmtChrgPortLkCmd_SgnlRcvd_a;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_RmtChrgPortLkCmd' */
    /* Chart: '<S415>/PokeCITR_e_RmtChrgPortLkCmdChrt' incorporates:
     *  SignalConversion generated from: '<S415>/LeCITR_e_FOTA_Installation_Status1'
     *  SignalConversion generated from: '<S415>/LeCITR_e_FOTA_Installation_Status'
     */
    /* Gateway: PokeCITR_e_RmtChrgPortLkCmd/PokeCITR_e_RmtChrgPortLkCmdChrt */
    /* During: PokeCITR_e_RmtChrgPortLkCmd/PokeCITR_e_RmtChrgPortLkCmdChrt */
    /* Entry Internal: PokeCITR_e_RmtChrgPortLkCmd/PokeCITR_e_RmtChrgPortLkCmdChrt */
    /* Transition: '<S1013>:2' */
    if (!LeCITR_b_RmtChrgPortLkCmdFA)
    {
        /* Transition: '<S1013>:20' */
        /* Transition: '<S1013>:23' */
        CITR_ac_B.LeCITR_e_RmtChrgPortLkCmd_out = LeCITR_e_RmtChrgPortLkCmd;
        rtb_LeCITR_b_RmtChrgPortLkCmdFA_out_h = false;
        rtb_LeCITR_b_RmtChrgPortLkCmd_SgnlRcvd_a = true;

        /* Transition: '<S1013>:25' */
    }
    else
    {
        /* Transition: '<S1013>:24' */
        rtb_LeCITR_b_RmtChrgPortLkCmdFA_out_h = true;
        rtb_LeCITR_b_RmtChrgPortLkCmd_SgnlRcvd_a = false;
    }

    /* End of Chart: '<S415>/PokeCITR_e_RmtChrgPortLkCmdChrt' */

    /* Outport: '<Root>/VeCITR_b_RmtChrgPortLkCmd_SgnlRcvd' incorporates:
     *  SignalConversion generated from: '<S415>/VeCITR_RmtChrgPortLkCmd_SgnlRcvd'
     */
    (void)Rte_Write_VeCITR_b_RmtChrgPortLkCmd_SgnlRcvd_Value
        (rtb_LeCITR_b_RmtChrgPortLkCmd_SgnlRcvd_a);

    /* Outport: '<Root>/VeCITR_b_RmtChrgPortLkCmdFA' incorporates:
     *  SignalConversion generated from: '<S415>/VeCITR_b_RmtChrgPortLkCmdFA'
     */
    (void)Rte_Write_VeCITR_b_RmtChrgPortLkCmdFA_Value
        (rtb_LeCITR_b_RmtChrgPortLkCmdFA_out_h);

    /* Outport: '<Root>/VeCITR_e_RmtChrgPortLkCmd' incorporates:
     *  SignalConversion generated from: '<S415>/VeCITR_e_RmtChrgPortLkCmd'
     */
    (void)Rte_Write_VeCITR_e_RmtChrgPortLkCmd_Value
        (CITR_ac_B.LeCITR_e_RmtChrgPortLkCmd_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_RmtChrgPortLkCmd' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_TBM_ChrgSchedType1(VAR
    (TeCITR_e_ChrgScheduleType, AUTOMATIC) LeCITR_e_TBM_ChrgSchedType1, VAR
    (boolean, AUTOMATIC) LeCITR_b_TBM_ChrgSchedType1FA)
{
    boolean rtb_LeCITR_b_TBM_ChrgSchedType1FA_out_b;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_TBM_ChrgSchedType1' */
    /* Chart: '<S416>/PokeCITR_e_TBM_ChrgSchedType1Chrt' incorporates:
     *  SignalConversion generated from: '<S416>/LeCITR_e_FOTA_Installation_Status1'
     *  SignalConversion generated from: '<S416>/LeCITR_e_FOTA_Installation_Status'
     */
    /* Gateway: PokeCITR_e_TBM_ChrgSchedType1/PokeCITR_e_TBM_ChrgSchedType1Chrt */
    /* During: PokeCITR_e_TBM_ChrgSchedType1/PokeCITR_e_TBM_ChrgSchedType1Chrt */
    /* Entry Internal: PokeCITR_e_TBM_ChrgSchedType1/PokeCITR_e_TBM_ChrgSchedType1Chrt */
    /* Transition: '<S1014>:2' */
    if (!LeCITR_b_TBM_ChrgSchedType1FA)
    {
        /* Transition: '<S1014>:20' */
        /* Transition: '<S1014>:23' */
        CITR_ac_B.LeCITR_e_TBM_ChrgSchedType1_out = LeCITR_e_TBM_ChrgSchedType1;
        rtb_LeCITR_b_TBM_ChrgSchedType1FA_out_b = false;

        /* Transition: '<S1014>:25' */
    }
    else
    {
        /* Transition: '<S1014>:24' */
        rtb_LeCITR_b_TBM_ChrgSchedType1FA_out_b = true;
    }

    /* End of Chart: '<S416>/PokeCITR_e_TBM_ChrgSchedType1Chrt' */

    /* Outport: '<Root>/VeCITR_b_TBM_ChrgSchedType1FA' incorporates:
     *  SignalConversion generated from: '<S416>/VeCITR_b_TBM_ChrgSchedType1FA'
     */
    (void)Rte_Write_VeCITR_b_TBM_ChrgSchedType1FA_Value
        (rtb_LeCITR_b_TBM_ChrgSchedType1FA_out_b);

    /* Outport: '<Root>/VeCITR_e_TBM_ChrgSchedType1' incorporates:
     *  SignalConversion generated from: '<S416>/VeCITR_e_TBM_ChrgSchedType1'
     */
    (void)Rte_Write_VeCITR_e_TBM_ChrgSchedType1_Value
        (CITR_ac_B.LeCITR_e_TBM_ChrgSchedType1_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_TBM_ChrgSchedType1' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_TBM_ChrgSchedType2(VAR
    (TeCITR_e_ChrgScheduleType, AUTOMATIC) LeCITR_e_TBM_ChrgSchedType2, VAR
    (boolean, AUTOMATIC) LeCITR_b_TBM_ChrgSchedType2FA)
{
    boolean rtb_LeCITR_b_TBM_ChrgSchedType2FA_out_n;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_TBM_ChrgSchedType2' */
    /* Chart: '<S417>/PokeCITR_e_TBM_ChrgSchedType2Chrt' incorporates:
     *  SignalConversion generated from: '<S417>/LeCITR_e_FOTA_Installation_Status1'
     *  SignalConversion generated from: '<S417>/LeCITR_e_FOTA_Installation_Status'
     */
    /* Gateway: PokeCITR_e_TBM_ChrgSchedType2/PokeCITR_e_TBM_ChrgSchedType2Chrt */
    /* During: PokeCITR_e_TBM_ChrgSchedType2/PokeCITR_e_TBM_ChrgSchedType2Chrt */
    /* Entry Internal: PokeCITR_e_TBM_ChrgSchedType2/PokeCITR_e_TBM_ChrgSchedType2Chrt */
    /* Transition: '<S1015>:2' */
    if (!LeCITR_b_TBM_ChrgSchedType2FA)
    {
        /* Transition: '<S1015>:20' */
        /* Transition: '<S1015>:23' */
        CITR_ac_B.LeCITR_e_TBM_ChrgSchedType2_out = LeCITR_e_TBM_ChrgSchedType2;
        rtb_LeCITR_b_TBM_ChrgSchedType2FA_out_n = false;

        /* Transition: '<S1015>:25' */
    }
    else
    {
        /* Transition: '<S1015>:24' */
        rtb_LeCITR_b_TBM_ChrgSchedType2FA_out_n = true;
    }

    /* End of Chart: '<S417>/PokeCITR_e_TBM_ChrgSchedType2Chrt' */

    /* Outport: '<Root>/VeCITR_b_TBM_ChrgSchedType2FA' incorporates:
     *  SignalConversion generated from: '<S417>/VeCITR_b_TBM_ChrgSchedType2FA'
     */
    (void)Rte_Write_VeCITR_b_TBM_ChrgSchedType2FA_Value
        (rtb_LeCITR_b_TBM_ChrgSchedType2FA_out_n);

    /* Outport: '<Root>/VeCITR_e_TBM_ChrgSchedType2' incorporates:
     *  SignalConversion generated from: '<S417>/VeCITR_e_TBM_ChrgSchedType2'
     */
    (void)Rte_Write_VeCITR_e_TBM_ChrgSchedType2_Value
        (CITR_ac_B.LeCITR_e_TBM_ChrgSchedType2_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_TBM_ChrgSchedType2' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_TBM_Sch1_Type(VAR(TeCITR_e_SchType, AUTOMATIC)
    LeCITR_e_TBM_Sch1_Type, VAR(boolean, AUTOMATIC) LeCITR_b_TBM_Sch1_TypeFA)
{
    boolean rtb_LeCITR_b_TBM_Sch1_TypeFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_TBM_Sch1_Type' */
    /* Chart: '<S418>/PokeCITR_e_TBM_Sch1_TypeChrt' incorporates:
     *  SignalConversion generated from: '<S418>/LeCITR_b_TBM_Sch1_TypeFA'
     *  SignalConversion generated from: '<S418>/LeCITR_e_TBM_Sch1_Type'
     */
    /* Gateway: PokeCITR_e_TBM_Sch1_Type/PokeCITR_e_TBM_Sch1_TypeChrt */
    /* During: PokeCITR_e_TBM_Sch1_Type/PokeCITR_e_TBM_Sch1_TypeChrt */
    /* Entry Internal: PokeCITR_e_TBM_Sch1_Type/PokeCITR_e_TBM_Sch1_TypeChrt */
    /* Transition: '<S1016>:2' */
    if (!LeCITR_b_TBM_Sch1_TypeFA)
    {
        /* Transition: '<S1016>:3' */
        /* Transition: '<S1016>:15' */
        CITR_ac_B.LeCITR_e_TBM_Sch1_Type_out = LeCITR_e_TBM_Sch1_Type;
        rtb_LeCITR_b_TBM_Sch1_TypeFA_out = false;

        /* Transition: '<S1016>:18' */
    }
    else
    {
        /* Transition: '<S1016>:4' */
        rtb_LeCITR_b_TBM_Sch1_TypeFA_out = true;
    }

    /* End of Chart: '<S418>/PokeCITR_e_TBM_Sch1_TypeChrt' */

    /* Outport: '<Root>/VeCITR_b_TBM_Sch1_TypeFA' incorporates:
     *  SignalConversion generated from: '<S418>/VeCITR_b_TBM_Sch1_TypeFA'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch1_TypeFA_Value
        (rtb_LeCITR_b_TBM_Sch1_TypeFA_out);

    /* Outport: '<Root>/VeCITR_e_TBM_Sch1_Type' incorporates:
     *  SignalConversion generated from: '<S418>/VeCITR_e_TBM_Sch1_Type'
     */
    (void)Rte_Write_VeCITR_e_TBM_Sch1_Type_Value
        (CITR_ac_B.LeCITR_e_TBM_Sch1_Type_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_TBM_Sch1_Type' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_TBM_Sch2_Type(VAR(TeCITR_e_SchType, AUTOMATIC)
    LeCITR_e_TBM_Sch2_Type, VAR(boolean, AUTOMATIC) LeCITR_b_TBM_Sch2_TypeFA)
{
    boolean rtb_LeCITR_b_TBM_Sch2_TypeFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_TBM_Sch2_Type' */
    /* Chart: '<S419>/PokeCITR_e_TBM_Sch2_TypeChrt' incorporates:
     *  SignalConversion generated from: '<S419>/LeCITR_b_TBM_Sch2_TypeFA'
     *  SignalConversion generated from: '<S419>/LeCITR_e_TBM_Sch2_Type'
     */
    /* Gateway: PokeCITR_e_TBM_Sch2_Type/PokeCITR_e_TBM_Sch2_TypeChrt */
    /* During: PokeCITR_e_TBM_Sch2_Type/PokeCITR_e_TBM_Sch2_TypeChrt */
    /* Entry Internal: PokeCITR_e_TBM_Sch2_Type/PokeCITR_e_TBM_Sch2_TypeChrt */
    /* Transition: '<S1017>:2' */
    if (!LeCITR_b_TBM_Sch2_TypeFA)
    {
        /* Transition: '<S1017>:3' */
        /* Transition: '<S1017>:15' */
        CITR_ac_B.LeCITR_e_TBM_Sch2_Type_out = LeCITR_e_TBM_Sch2_Type;
        rtb_LeCITR_b_TBM_Sch2_TypeFA_out = false;

        /* Transition: '<S1017>:18' */
    }
    else
    {
        /* Transition: '<S1017>:4' */
        rtb_LeCITR_b_TBM_Sch2_TypeFA_out = true;
    }

    /* End of Chart: '<S419>/PokeCITR_e_TBM_Sch2_TypeChrt' */

    /* Outport: '<Root>/VeCITR_b_TBM_Sch2_TypeFA' incorporates:
     *  SignalConversion generated from: '<S419>/VeCITR_b_TBM_Sch2_TypeFA'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch2_TypeFA_Value
        (rtb_LeCITR_b_TBM_Sch2_TypeFA_out);

    /* Outport: '<Root>/VeCITR_e_TBM_Sch2_Type' incorporates:
     *  SignalConversion generated from: '<S419>/VeCITR_e_TBM_Sch2_Type'
     */
    (void)Rte_Write_VeCITR_e_TBM_Sch2_Type_Value
        (CITR_ac_B.LeCITR_e_TBM_Sch2_Type_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_TBM_Sch2_Type' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_TBM_Sch3_Allow(VAR(TeCITR_e_SchAllow, AUTOMATIC)
    LeCITR_e_TBM_Sch3_Allow, VAR(boolean, AUTOMATIC) LeCITR_b_TBM_Sch3_AllowFA)
{
    boolean rtb_LeCITR_b_TBM_Sch3_AllowFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_TBM_Sch3_Allow' */
    /* Chart: '<S420>/PokeCITR_e_TBM_Sch3_AllowChrt' incorporates:
     *  SignalConversion generated from: '<S420>/LeCITR_b_TBM_Sch3_AllowFA'
     *  SignalConversion generated from: '<S420>/LeCITR_e_TBM_Sch3_Allow'
     */
    /* Gateway: PokeCITR_e_TBM_Sch3_Allow/PokeCITR_e_TBM_Sch3_AllowChrt */
    /* During: PokeCITR_e_TBM_Sch3_Allow/PokeCITR_e_TBM_Sch3_AllowChrt */
    /* Entry Internal: PokeCITR_e_TBM_Sch3_Allow/PokeCITR_e_TBM_Sch3_AllowChrt */
    /* Transition: '<S1018>:2' */
    if (!LeCITR_b_TBM_Sch3_AllowFA)
    {
        /* Transition: '<S1018>:3' */
        /* Transition: '<S1018>:15' */
        CITR_ac_B.LeCITR_e_TBM_Sch3_Allow_out = LeCITR_e_TBM_Sch3_Allow;
        rtb_LeCITR_b_TBM_Sch3_AllowFA_out = false;

        /* Transition: '<S1018>:18' */
    }
    else
    {
        /* Transition: '<S1018>:4' */
        rtb_LeCITR_b_TBM_Sch3_AllowFA_out = true;
    }

    /* End of Chart: '<S420>/PokeCITR_e_TBM_Sch3_AllowChrt' */

    /* Outport: '<Root>/VeCITR_b_TBM_Sch3_AllowFA' incorporates:
     *  SignalConversion generated from: '<S420>/VeCITR_b_TBM_Sch3_AllowFA'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch3_AllowFA_Value
        (rtb_LeCITR_b_TBM_Sch3_AllowFA_out);

    /* Outport: '<Root>/VeCITR_e_TBM_Sch3_Allow' incorporates:
     *  SignalConversion generated from: '<S420>/VeCITR_e_TBM_Sch3_Allow'
     */
    (void)Rte_Write_VeCITR_e_TBM_Sch3_Allow_Value
        (CITR_ac_B.LeCITR_e_TBM_Sch3_Allow_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_TBM_Sch3_Allow' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_TBM_Sch3_Type(VAR(TeCITR_e_SchType, AUTOMATIC)
    LeCITR_e_TBM_Sch3_Type, VAR(boolean, AUTOMATIC) LeCITR_b_TBM_Sch3_TypeFA)
{
    boolean rtb_LeCITR_b_TBM_Sch3_TypeFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_TBM_Sch3_Type' */
    /* Chart: '<S421>/PokeCITR_e_TBM_Sch3_TypeChrt' incorporates:
     *  SignalConversion generated from: '<S421>/LeCITR_b_TBM_Sch3_TypeFA'
     *  SignalConversion generated from: '<S421>/LeCITR_e_TBM_Sch3_Type'
     */
    /* Gateway: PokeCITR_e_TBM_Sch3_Type/PokeCITR_e_TBM_Sch3_TypeChrt */
    /* During: PokeCITR_e_TBM_Sch3_Type/PokeCITR_e_TBM_Sch3_TypeChrt */
    /* Entry Internal: PokeCITR_e_TBM_Sch3_Type/PokeCITR_e_TBM_Sch3_TypeChrt */
    /* Transition: '<S1019>:2' */
    if (!LeCITR_b_TBM_Sch3_TypeFA)
    {
        /* Transition: '<S1019>:3' */
        /* Transition: '<S1019>:15' */
        CITR_ac_B.LeCITR_e_TBM_Sch3_Type_out = LeCITR_e_TBM_Sch3_Type;
        rtb_LeCITR_b_TBM_Sch3_TypeFA_out = false;

        /* Transition: '<S1019>:18' */
    }
    else
    {
        /* Transition: '<S1019>:4' */
        rtb_LeCITR_b_TBM_Sch3_TypeFA_out = true;
    }

    /* End of Chart: '<S421>/PokeCITR_e_TBM_Sch3_TypeChrt' */

    /* Outport: '<Root>/VeCITR_b_TBM_Sch3_TypeFA' incorporates:
     *  SignalConversion generated from: '<S421>/VeCITR_b_TBM_Sch3_TypeFA'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch3_TypeFA_Value
        (rtb_LeCITR_b_TBM_Sch3_TypeFA_out);

    /* Outport: '<Root>/VeCITR_e_TBM_Sch3_Type' incorporates:
     *  SignalConversion generated from: '<S421>/VeCITR_e_TBM_Sch3_Type'
     */
    (void)Rte_Write_VeCITR_e_TBM_Sch3_Type_Value
        (CITR_ac_B.LeCITR_e_TBM_Sch3_Type_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_TBM_Sch3_Type' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_e_TBM_Sch4_Allow(VAR(TeCITR_e_SchAllow, AUTOMATIC)
    LeCITR_e_TBM_Sch4_Allow, VAR(boolean, AUTOMATIC) LeCITR_b_TBM_Sch4_AllowFA)
{
    boolean rtb_LeCITR_b_TBM_Sch4_AllowFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_e_TBM_Sch4_Allow' */
    /* Chart: '<S422>/PokeCITR_e_TBM_Sch4_AllowChrt' incorporates:
     *  SignalConversion generated from: '<S422>/LeCITR_b_TBM_Sch4_AllowFA'
     *  SignalConversion generated from: '<S422>/LeCITR_e_TBM_Sch4_Allow'
     */
    /* Gateway: PokeCITR_e_TBM_Sch4_Allow/PokeCITR_e_TBM_Sch4_AllowChrt */
    /* During: PokeCITR_e_TBM_Sch4_Allow/PokeCITR_e_TBM_Sch4_AllowChrt */
    /* Entry Internal: PokeCITR_e_TBM_Sch4_Allow/PokeCITR_e_TBM_Sch4_AllowChrt */
    /* Transition: '<S1020>:2' */
    if (!LeCITR_b_TBM_Sch4_AllowFA)
    {
        /* Transition: '<S1020>:3' */
        /* Transition: '<S1020>:15' */
        CITR_ac_B.LeCITR_e_TBM_Sch4_Allow_out = LeCITR_e_TBM_Sch4_Allow;
        rtb_LeCITR_b_TBM_Sch4_AllowFA_out = false;

        /* Transition: '<S1020>:18' */
    }
    else
    {
        /* Transition: '<S1020>:4' */
        rtb_LeCITR_b_TBM_Sch4_AllowFA_out = true;
    }

    /* End of Chart: '<S422>/PokeCITR_e_TBM_Sch4_AllowChrt' */

    /* Outport: '<Root>/VeCITR_b_TBM_Sch4_AllowFA' incorporates:
     *  SignalConversion generated from: '<S422>/VeCITR_b_TBM_Sch4_AllowFA'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch4_AllowFA_Value
        (rtb_LeCITR_b_TBM_Sch4_AllowFA_out);

    /* Outport: '<Root>/VeCITR_e_TBM_Sch4_Allow' incorporates:
     *  SignalConversion generated from: '<S422>/VeCITR_e_TBM_Sch4_Allow'
     */
    (void)Rte_Write_VeCITR_e_TBM_Sch4_Allow_Value
        (CITR_ac_B.LeCITR_e_TBM_Sch4_Allow_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_e_TBM_Sch4_Allow' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_l_DistanceToCharge(VAR(uint8, AUTOMATIC)
    LeCITR_l_DistanceToCharge, VAR(boolean, AUTOMATIC)
    LeCITR_b_DistanceToChargeFA)
{
    boolean rtb_LeCITR_b_DistanceToChargeFA_out_f;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_l_DistanceToCharge' */
    /* Chart: '<S423>/PokeCITR_l_DistanceToChargeChrt' incorporates:
     *  SignalConversion generated from: '<S423>/LeCITR_b_DistanceToChargeFA'
     *  SignalConversion generated from: '<S423>/LeCITR_l_DistanceToCharge'
     */
    /* Gateway: PokeCITR_l_DistanceToCharge/PokeCITR_l_DistanceToChargeChrt */
    /* During: PokeCITR_l_DistanceToCharge/PokeCITR_l_DistanceToChargeChrt */
    /* Entry Internal: PokeCITR_l_DistanceToCharge/PokeCITR_l_DistanceToChargeChrt */
    /* Transition: '<S1021>:2' */
    if (!LeCITR_b_DistanceToChargeFA)
    {
        /* Transition: '<S1021>:3' */
        /* Transition: '<S1021>:15' */
        CITR_ac_B.LeCITR_l_DistanceToCharge_out = LeCITR_l_DistanceToCharge;
        rtb_LeCITR_b_DistanceToChargeFA_out_f = false;

        /* Transition: '<S1021>:18' */
    }
    else
    {
        /* Transition: '<S1021>:4' */
        rtb_LeCITR_b_DistanceToChargeFA_out_f = true;
    }

    /* End of Chart: '<S423>/PokeCITR_l_DistanceToChargeChrt' */

    /* Outport: '<Root>/VeCITR_b_DistanceToCharge_FA' incorporates:
     *  SignalConversion generated from: '<S423>/VeCITR_b_DistanceToChargeFA'
     */
    (void)Rte_Write_VeCITR_b_DistanceToCharge_FA_Value
        (rtb_LeCITR_b_DistanceToChargeFA_out_f);

    /* Outport: '<Root>/VeCITR_l_DistanceToCharge' incorporates:
     *  SignalConversion generated from: '<S423>/VeCITR_l_DistanceToCharge'
     */
    (void)Rte_Write_VeCITR_l_DistanceToCharge_Value
        (CITR_ac_B.LeCITR_l_DistanceToCharge_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_l_DistanceToCharge' */
}

/* Output function */
FUNC(void, CITR_CODE) PokeCITR_t_TimeToCharge(VAR(uint8, AUTOMATIC)
    LeCITR_t_TimeToCharge, VAR(boolean, AUTOMATIC) LeCITR_b_TimeToChargeFA)
{
    boolean rtb_LeCITR_b_TimeToChargeFA_out_k;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCITR_t_TimeToCharge' */
    /* Chart: '<S424>/PokeCITR_t_TimeToChargeChrt' incorporates:
     *  SignalConversion generated from: '<S424>/LeCITR_b_TimeToChargeFA'
     *  SignalConversion generated from: '<S424>/LeCITR_t_TimeToCharge'
     */
    /* Gateway: PokeCITR_t_TimeToCharge/PokeCITR_t_TimeToChargeChrt */
    /* During: PokeCITR_t_TimeToCharge/PokeCITR_t_TimeToChargeChrt */
    /* Entry Internal: PokeCITR_t_TimeToCharge/PokeCITR_t_TimeToChargeChrt */
    /* Transition: '<S1022>:2' */
    if (!LeCITR_b_TimeToChargeFA)
    {
        /* Transition: '<S1022>:3' */
        /* Transition: '<S1022>:15' */
        CITR_ac_B.LeCITR_t_TimeToCharge_out = LeCITR_t_TimeToCharge;
        rtb_LeCITR_b_TimeToChargeFA_out_k = false;

        /* Transition: '<S1022>:18' */
    }
    else
    {
        /* Transition: '<S1022>:4' */
        rtb_LeCITR_b_TimeToChargeFA_out_k = true;
    }

    /* End of Chart: '<S424>/PokeCITR_t_TimeToChargeChrt' */

    /* Outport: '<Root>/VeCITR_b_TimeToCharge_FA' incorporates:
     *  SignalConversion generated from: '<S424>/VeCITR_b_TimeToChargeFA'
     */
    (void)Rte_Write_VeCITR_b_TimeToCharge_FA_Value
        (rtb_LeCITR_b_TimeToChargeFA_out_k);

    /* Outport: '<Root>/VeCITR_t_TimeToCharge' incorporates:
     *  SignalConversion generated from: '<S424>/VeCITR_t_TimeToCharge'
     */
    (void)Rte_Write_VeCITR_t_TimeToCharge_Value
        (CITR_ac_B.LeCITR_t_TimeToCharge_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCITR_t_TimeToCharge' */
}

/* Output function */
FUNC(void, CITR_CODE) CITR_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/CITR_PwrOff'
     */
    /* Outport: '<Root>/NeCITR_b_Lock_Status_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeCITR_b_Lock_Status'
     */
    (void)Rte_Write_NeCITR_b_Lock_Status_NeCITR_b_Lock_Status
        (CITR_ac_DW.NeCITR_b_Lock_Status);

    /* Outport: '<Root>/NeCITR_b_PortLockBCM_Cmd_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeCITR_b_PortLockBCM_Cmd'
     */
    (void)Rte_Write_NeCITR_b_PortLockBCM_Cmd_NeCITR_b_PortLockBCM_Cmd
        (CITR_ac_DW.NeCITR_b_PortLockBCM_Cmd);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Output function */
FUNC(void, CITR_CODE) CITR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/CITR_PwrOn'
     */
    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/DSM_Init'
     */
    /* DataStoreWrite: '<S490>/NeCITR_b_PortLockBCM_Cmd' incorporates:
     *  Inport: '<Root>/NeCITR_b_PortLockBCM_Cmd_PM_In'
     */
    (void)Rte_Read_NeCITR_b_PortLockBCM_Cmd_Rx_NeCITR_b_PortLockBCM_Cmd
        (&CITR_ac_DW.NeCITR_b_PortLockBCM_Cmd);

    /* DataStoreWrite: '<S490>/NeCITR_b_Lock_Status' incorporates:
     *  Inport: '<Root>/NeCITR_b_Lock_Status_PM_In'
     */
    (void)Rte_Read_NeCITR_b_Lock_Status_Rx_NeCITR_b_Lock_Status
        (&CITR_ac_DW.NeCITR_b_Lock_Status);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/InitBlock'
     */
    /* SignalConversion: '<S493>/Signal Conversion' incorporates:
     *  Constant: '<S520>/Calib'
     */
    CITR_ac_B.SignalConversion = KeCITR_e_DoorLkSts_Init;

    /* SignalConversion: '<S493>/Signal Conversion1' incorporates:
     *  Constant: '<S520>/Calib'
     */
    CITR_ac_B.SignalConversion1 = KeCITR_e_DoorLkSts_Init;

    /* SignalConversion generated from: '<S493>/DoorLockLastElSts_FA_Init' */
    CITR_ac_B.OutportBufferForDoorLockLastElSts_FA_Ini = false;

    /* SignalConversion generated from: '<S493>/DoorLockLastElSts_SgnlRcvd_Init' */
    CITR_ac_B.OutportBufferForDoorLockLastElSts_SgnlRc = false;

    /* SignalConversion generated from: '<S493>/DoorLockLastElSts_2_FA_Init' */
    CITR_ac_B.OutportBufferForDoorLockLastElSts_2_FA_I = false;

    /* SignalConversion generated from: '<S493>/DoorLockLastElSts_2_SgnlRcvd_Init' */
    CITR_ac_B.OutportBufferForDoorLockLastElSts_2_Sgnl = false;

    /* SignalConversion generated from: '<S493>/ChrgPort_BCM_Cmd_Init' */
    CITR_ac_B.OutportBufferForChrgPort_BCM_Cmd_Init = false;

    /* SignalConversion generated from: '<S493>/ChrgPort_BCM_Cmd_SgnlRcvd_Init' */
    CITR_ac_B.OutportBufferForChrgPort_BCM_Cmd_SgnlRcv = false;

    /* SignalConversion generated from: '<S493>/Drv_Dr_Unlocking_Init' */
    CITR_ac_B.OutportBufferForDrv_Dr_Unlocking_Init = false;

    /* SignalConversion generated from: '<S493>/ChrgPort_Sense_Init' */
    CITR_ac_B.OutportBufferForChrgPort_Sense_Init = false;

    /* SignalConversion generated from: '<S493>/ChrgPortLock_StsB_Init' */
    CITR_ac_B.OutportBufferForChrgPortLock_StsB_Init = 0.0F;

    /* SignalConversion generated from: '<S493>/ChrgPortLock_StsB_FA_Init' */
    CITR_ac_B.OutportBufferForChrgPortLock_StsB_FA_Ini = false;

    /* SignalConversion generated from: '<S493>/ChrgPortLock_StsC_Init' */
    CITR_ac_B.OutportBufferForChrgPortLock_StsC_Init = false;

    /* SignalConversion generated from: '<S493>/ChrgPortLock_StsC_FA_Init' */
    CITR_ac_B.OutportBufferForChrgPortLock_StsC_FA_Ini = false;

    /* SignalConversion generated from: '<S493>/ChrgPortButton_Sts_Init' */
    CITR_ac_B.OutportBufferForChrgPortButton_Sts_Init = false;

    /* SignalConversion generated from: '<S493>/ChrgPortButton_FailSts_Init' */
    CITR_ac_B.OutportBufferForChrgPortButton_FailSts_I = false;

    /* SignalConversion: '<S493>/Signal Conversion2' incorporates:
     *  Constant: '<S521>/Calib'
     */
    CITR_ac_B.SignalConversion2 = KeCITR_e_PwrLimReq_Init;

    /* SignalConversion: '<S493>/Signal Conversion3' incorporates:
     *  Constant: '<S521>/Calib'
     */
    CITR_ac_B.SignalConversion3 = KeCITR_e_PwrLimReq_Init;

    /* SignalConversion generated from: '<S493>/PwrLimReq_FA_Init' */
    CITR_ac_B.OutportBufferForPwrLimReq_FA_Init = false;

    /* SignalConversion generated from: '<S493>/PwrLimReq_SgnlRcvd_Init' */
    CITR_ac_B.OutportBufferForPwrLimReq_SgnlRcvd_Init = false;

    /* SignalConversion generated from: '<S493>/PwrLimReq_FA_2_Init' */
    CITR_ac_B.OutportBufferForPwrLimReq_FA_2_Init = false;

    /* SignalConversion generated from: '<S493>/PwrLimReq_SgnlRcvd_2_Init' */
    CITR_ac_B.OutportBufferForPwrLimReq_SgnlRcvd_2_Ini = false;

    /* SignalConversion generated from: '<S493>/ChrgPortLock_FailSts_Init' incorporates:
     *  Constant: '<S513>/Constant'
     */
    CITR_ac_B.OutportBufferForChrgPortLock_FailSts_Ini =
        CITR_ac_ConstB.Constant_by;

    /* SignalConversion generated from: '<S493>/RRM_VP_Level_Init' incorporates:
     *  Constant: '<S514>/Constant'
     */
    CITR_ac_B.OutportBufferForRRM_VP_Level_Init = CITR_ac_ConstB.Constant_bi;

    /* SignalConversion generated from: '<S493>/ChrgPortDoorSts_Init' incorporates:
     *  Constant: '<S515>/Constant'
     */
    CITR_ac_B.OutportBufferForChrgPortDoorSts_Init = CITR_ac_ConstB.Constant_m0;

    /* SignalConversion generated from: '<S493>/ChrgPortHbridgeFlt_Init' */
    CITR_ac_B.OutportBufferForChrgPortHbridgeFlt_Init = 0;

    /* SignalConversion generated from: '<S493>/ChrgPortLock_FailStsFA' */
    CITR_ac_B.OutportBufferForChrgPortLock_FailStsFA = false;

    /* SignalConversion generated from: '<S493>/DVC_ChrgPort_IO_Init' incorporates:
     *  Constant: '<S516>/Constant'
     */
    CITR_ac_B.OutportBufferForDVC_ChrgPort_IO_Init = CITR_ac_ConstB.Constant_l;

    /* SignalConversion generated from: '<S493>/DVC_ChrgPortRq_Init' */
    CITR_ac_B.OutportBufferForDVC_ChrgPortRq_Init = false;

    /* SignalConversion generated from: '<S493>/DCChrg_TestSts_Init' incorporates:
     *  Constant: '<S517>/Constant'
     */
    CITR_ac_B.OutportBufferForDCChrg_TestSts_Init = CITR_ac_ConstB.Constant_h;

    /* SignalConversion generated from: '<S493>/DCEOL_SgnlRcvd_Init' */
    CITR_ac_B.OutportBufferForDCEOL_SgnlRcvd_Init = 0U;

    /* SignalConversion generated from: '<S493>/SOC_Max_Lev_Init' incorporates:
     *  Constant: '<S519>/Calib'
     */
    CITR_ac_B.OutportBufferForSOC_Max_Lev_Init = KeCITR_b_SOC_Max_Lev_Init;

    /* SignalConversion generated from: '<S493>/SOC_Max_Lev_FA_Init' */
    CITR_ac_B.OutportBufferForSOC_Max_Lev_FA_Init = false;

    /* SignalConversion generated from: '<S493>/DC_PwrLev_Init' */
    CITR_ac_B.OutportBufferForDC_PwrLev_Init = false;

    /* SignalConversion generated from: '<S493>/DC_PwrLev_FA_Init' */
    CITR_ac_B.OutportBufferForDC_PwrLev_FA_Init = false;

    /* SignalConversion generated from: '<S493>/DC_PwrLev_SgnlRcvd_Init' */
    CITR_ac_B.OutportBufferForDC_PwrLev_SgnlRcvd_Init = false;

    /* SignalConversion generated from: '<S493>/ChrgrFlapSts_Init' incorporates:
     *  Constant: '<S518>/Constant'
     */
    CITR_ac_B.OutportBufferForChrgrFlapSts_Init = CITR_ac_ConstB.Constant_fs;

    /* SignalConversion generated from: '<S493>/ChrgrFlapSts_FA_Init' */
    CITR_ac_B.OutportBufferForChrgrFlapSts_FA_Init = false;

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/LEDInd_Pokes__InitBlock'
     */
    /* SignalConversion generated from: '<S495>/CPIM_RedLED_Sts_Init' */
    CITR_ac_B.OutportBufferForCPIM_RedLED_Sts_Init = false;

    /* SignalConversion generated from: '<S495>/CPIM_GreenLED_Sts_Init' */
    CITR_ac_B.OutportBufferForCPIM_GreenLED_Sts_Init = false;

    /* SignalConversion generated from: '<S495>/CPIM_BlueLED_Sts_Init' */
    CITR_ac_B.OutportBufferForCPIM_BlueLED_Sts_Init = false;

    /* SignalConversion generated from: '<S495>/CPIM_RedLED_FailSts_Init' incorporates:
     *  Constant: '<S540>/Constant'
     */
    CITR_ac_B.OutportBufferForCPIM_RedLED_FailSts_Init =
        CITR_ac_ConstB.Constant_kr;

    /* SignalConversion generated from: '<S495>/CPIM_GreenLED_FailSts_Init' incorporates:
     *  Constant: '<S541>/Constant'
     */
    CITR_ac_B.OutportBufferForCPIM_GreenLED_FailSts_In =
        CITR_ac_ConstB.Constant_ev;

    /* SignalConversion generated from: '<S495>/CPIM_BlueLED_FailSts_Init' incorporates:
     *  Constant: '<S552>/Constant'
     */
    CITR_ac_B.OutportBufferForCPIM_BlueLED_FailSts_Ini =
        CITR_ac_ConstB.Constant_jeh;

    /* SignalConversion generated from: '<S495>/CPIM_UnderVolt_Init' */
    CITR_ac_B.OutportBufferForCPIM_UnderVolt_Init = false;

    /* SignalConversion generated from: '<S495>/CPIM_OverTemp_Init' */
    CITR_ac_B.OutportBufferForCPIM_OverTemp_Init = false;

    /* SignalConversion generated from: '<S495>/CPIM_LINParityErr_Init' */
    CITR_ac_B.OutportBufferForCPIM_LINParityErr_Init = false;

    /* SignalConversion generated from: '<S495>/CPIM_LINChkSumErr_Init' */
    CITR_ac_B.OutportBufferForCPIM_LINChkSumErr_Init = false;

    /* SignalConversion generated from: '<S495>/CPIM_LINDataErr_Init' */
    CITR_ac_B.OutportBufferForCPIM_LINDataErr_Init = false;

    /* SignalConversion generated from: '<S495>/CPIM_Ind1_Fdbk' incorporates:
     *  Constant: '<S565>/Constant'
     */
    CITR_ac_B.OutportBufferForCPIM_Ind1_Fdbk = CITR_ac_ConstB.Constant_fw;

    /* SignalConversion generated from: '<S495>/CPIM_Ind2_Fdbk' incorporates:
     *  Constant: '<S566>/Constant'
     */
    CITR_ac_B.OutportBufferForCPIM_Ind2_Fdbk = CITR_ac_ConstB.Constant_lj;

    /* SignalConversion generated from: '<S495>/CPIM_Ind3_Fdbk' incorporates:
     *  Constant: '<S542>/Constant'
     */
    CITR_ac_B.OutportBufferForCPIM_Ind3_Fdbk = CITR_ac_ConstB.Constant_d5;

    /* SignalConversion generated from: '<S495>/CPIM_Ind4_Fdbk' incorporates:
     *  Constant: '<S543>/Constant'
     */
    CITR_ac_B.OutportBufferForCPIM_Ind4_Fdbk = CITR_ac_ConstB.Constant_cz;

    /* SignalConversion generated from: '<S495>/CPIM_Ind5_Fdbk' incorporates:
     *  Constant: '<S544>/Constant'
     */
    CITR_ac_B.OutportBufferForCPIM_Ind5_Fdbk = CITR_ac_ConstB.Constant_oz;

    /* SignalConversion generated from: '<S495>/CPIM_Ind1_FailSts' incorporates:
     *  Constant: '<S560>/Constant'
     */
    CITR_ac_B.OutportBufferForCPIM_Ind1_FailSts = CITR_ac_ConstB.Constant_c3;

    /* SignalConversion generated from: '<S495>/CPIM_Ind2_FailSts' incorporates:
     *  Constant: '<S561>/Constant'
     */
    CITR_ac_B.OutportBufferForCPIM_Ind2_FailSts = CITR_ac_ConstB.Constant_er;

    /* SignalConversion generated from: '<S495>/CPIM_Ind3_FailSts' incorporates:
     *  Constant: '<S562>/Constant'
     */
    CITR_ac_B.OutportBufferForCPIM_Ind3_FailSts = CITR_ac_ConstB.Constant_hx;

    /* SignalConversion generated from: '<S495>/CPIM_Ind4_FailSts' incorporates:
     *  Constant: '<S563>/Constant'
     */
    CITR_ac_B.OutportBufferForCPIM_Ind4_FailSts = CITR_ac_ConstB.Constant_m2;

    /* SignalConversion generated from: '<S495>/CPIM_Ind5_FailSts' incorporates:
     *  Constant: '<S564>/Constant'
     */
    CITR_ac_B.OutportBufferForCPIM_Ind5_FailSts = CITR_ac_ConstB.Constant_es;

    /* SignalConversion generated from: '<S495>/CPIM_Ind_Ind_Color_Fdbk' incorporates:
     *  Constant: '<S545>/Constant'
     */
    CITR_ac_B.OutportBufferForCPIM_Ind_Ind_Color_Fdbk =
        CITR_ac_ConstB.Constant_cp;

    /* SignalConversion generated from: '<S495>/CPIM_Icon1_Sts' incorporates:
     *  Constant: '<S546>/Constant'
     */
    CITR_ac_B.OutportBufferForCPIM_Icon1_Sts = CITR_ac_ConstB.Constant_li;

    /* SignalConversion generated from: '<S495>/CPIM_Icon2_Sts' incorporates:
     *  Constant: '<S547>/Constant'
     */
    CITR_ac_B.OutportBufferForCPIM_Icon2_Sts = CITR_ac_ConstB.Constant_cg;

    /* SignalConversion generated from: '<S495>/CPIM_Icon1_FailSts' */
    CITR_ac_B.OutportBufferForCPIM_Icon1_FailSts = false;

    /* SignalConversion generated from: '<S495>/CPIM_Icon2_FailSts' */
    CITR_ac_B.OutportBufferForCPIM_Icon2_FailSts = false;

    /* SignalConversion generated from: '<S495>/BCIM_UnderVolt_Init' */
    CITR_ac_B.OutportBufferForBCIM_UnderVolt_Init = false;

    /* SignalConversion generated from: '<S495>/BCIM_OverTemp_Init' */
    CITR_ac_B.OutportBufferForBCIM_OverTemp_Init = false;

    /* SignalConversion generated from: '<S495>/BCIM_LINParityErr_Init' */
    CITR_ac_B.OutportBufferForBCIM_LINParityErr_Init = false;

    /* SignalConversion generated from: '<S495>/BCIM_LINChkSumErr_Init' */
    CITR_ac_B.OutportBufferForBCIM_LINChkSumErr_Init = false;

    /* SignalConversion generated from: '<S495>/BCIM_LINDataErr_Init' */
    CITR_ac_B.OutportBufferForBCIM_LINDataErr_Init = false;

    /* SignalConversion generated from: '<S495>/BCIM_Ind1_Fdbk' incorporates:
     *  Constant: '<S548>/Constant'
     */
    CITR_ac_B.OutportBufferForBCIM_Ind1_Fdbk = CITR_ac_ConstB.Constant_hl;

    /* SignalConversion generated from: '<S495>/BCIM_Ind2_Fdbk' incorporates:
     *  Constant: '<S549>/Constant'
     */
    CITR_ac_B.OutportBufferForBCIM_Ind2_Fdbk = CITR_ac_ConstB.Constant_k0;

    /* SignalConversion generated from: '<S495>/BCIM_Ind3_Fdbk' incorporates:
     *  Constant: '<S551>/Constant'
     */
    CITR_ac_B.OutportBufferForBCIM_Ind3_Fdbk = CITR_ac_ConstB.Constant_niv;

    /* SignalConversion generated from: '<S495>/BCIM_Ind4_Fdbk' incorporates:
     *  Constant: '<S553>/Constant'
     */
    CITR_ac_B.OutportBufferForBCIM_Ind4_Fdbk = CITR_ac_ConstB.Constant_ic;

    /* SignalConversion generated from: '<S495>/BCIM_Ind5_Fdbk' incorporates:
     *  Constant: '<S554>/Constant'
     */
    CITR_ac_B.OutportBufferForBCIM_Ind5_Fdbk = CITR_ac_ConstB.Constant_j3;

    /* SignalConversion generated from: '<S495>/BCIM_Ind1_FailSts' incorporates:
     *  Constant: '<S555>/Constant'
     */
    CITR_ac_B.OutportBufferForBCIM_Ind1_FailSts = CITR_ac_ConstB.Constant_nz;

    /* SignalConversion generated from: '<S495>/BCIM_Ind2_FailSts' incorporates:
     *  Constant: '<S556>/Constant'
     */
    CITR_ac_B.OutportBufferForBCIM_Ind2_FailSts = CITR_ac_ConstB.Constant_il;

    /* SignalConversion generated from: '<S495>/BCIM_Ind3_FailSts' incorporates:
     *  Constant: '<S557>/Constant'
     */
    CITR_ac_B.OutportBufferForBCIM_Ind3_FailSts = CITR_ac_ConstB.Constant_e0;

    /* SignalConversion generated from: '<S495>/BCIM_Ind4_FailSts' incorporates:
     *  Constant: '<S558>/Constant'
     */
    CITR_ac_B.OutportBufferForBCIM_Ind4_FailSts = CITR_ac_ConstB.Constant_gs;

    /* SignalConversion generated from: '<S495>/BCIM_Ind5_FailSts' incorporates:
     *  Constant: '<S550>/Constant'
     */
    CITR_ac_B.OutportBufferForBCIM_Ind5_FailSts = CITR_ac_ConstB.Constant_de;

    /* SignalConversion generated from: '<S495>/CPIM_Ind1_FdbkFA' */
    CITR_ac_B.OutportBufferForCPIM_Ind1_FdbkFA = false;

    /* SignalConversion generated from: '<S495>/CPIM_Ind2_FdbkFA' */
    CITR_ac_B.OutportBufferForCPIM_Ind2_FdbkFA = false;

    /* SignalConversion generated from: '<S495>/CPIM_Ind3_FdbkFA' */
    CITR_ac_B.OutportBufferForCPIM_Ind3_FdbkFA = false;

    /* SignalConversion generated from: '<S495>/CPIM_Ind4_FdbkFA' */
    CITR_ac_B.OutportBufferForCPIM_Ind4_FdbkFA = false;

    /* SignalConversion generated from: '<S495>/CPIM_Ind5_FdbkFA' */
    CITR_ac_B.OutportBufferForCPIM_Ind5_FdbkFA = false;

    /* SignalConversion generated from: '<S495>/CPIM_Ind_Ind_Color_FdbkFA' */
    CITR_ac_B.OutportBufferForCPIM_Ind_Ind_Color_FdbkF = false;

    /* SignalConversion generated from: '<S495>/CPIM_Icon1_StsFA' */
    CITR_ac_B.OutportBufferForCPIM_Icon1_StsFA = false;

    /* SignalConversion generated from: '<S495>/CPIM_Icon2_StsFA' */
    CITR_ac_B.OutportBufferForCPIM_Icon2_StsFA = false;

    /* SignalConversion generated from: '<S495>/BCIM_Ind1_FdbkFA' */
    CITR_ac_B.OutportBufferForBCIM_Ind1_FdbkFA = false;

    /* SignalConversion generated from: '<S495>/BCIM_Ind2_FdbkFA' */
    CITR_ac_B.OutportBufferForBCIM_Ind2_FdbkFA = false;

    /* SignalConversion generated from: '<S495>/BCIM_Ind3_FdbkFA' */
    CITR_ac_B.OutportBufferForBCIM_Ind3_FdbkFA = false;

    /* SignalConversion generated from: '<S495>/BCIM_Ind4_FdbkFA' */
    CITR_ac_B.OutportBufferForBCIM_Ind4_FdbkFA = false;

    /* SignalConversion generated from: '<S495>/BCIM_Ind5_FdbkFA' */
    CITR_ac_B.OutportBufferForBCIM_Ind5_FdbkFA = false;

    /* SignalConversion generated from: '<S495>/BCIM_Ind_Color_Fdbk' incorporates:
     *  Constant: '<S559>/Constant'
     */
    CITR_ac_B.OutportBufferForBCIM_Ind_Color_Fdbk = CITR_ac_ConstB.Constant_k1;

    /* SignalConversion generated from: '<S495>/BCIM_Ind_Color_FdbkFA' */
    CITR_ac_B.OutportBufferForBCIM_Ind_Color_FdbkFA = false;

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/InitBlock1'
     */
    /* SignalConversion generated from: '<S494>/BCIM_IO_Init' incorporates:
     *  Constant: '<S538>/Constant'
     */
    CITR_ac_B.OutportBufferForBCIM_IO_Init = CITR_ac_ConstB.Constant_k;

    /* SignalConversion generated from: '<S494>/BCIM_Ind1_Init' incorporates:
     *  Constant: '<S529>/Constant'
     */
    CITR_ac_B.OutportBufferForBCIM_Ind1_Init = CITR_ac_ConstB.Constant_ms;

    /* SignalConversion generated from: '<S494>/BCIM_Ind2_Init' incorporates:
     *  Constant: '<S532>/Constant'
     */
    CITR_ac_B.OutportBufferForBCIM_Ind2_Init = CITR_ac_ConstB.Constant_gf;

    /* SignalConversion generated from: '<S494>/BCIM_Ind3_Init' incorporates:
     *  Constant: '<S533>/Constant'
     */
    CITR_ac_B.OutportBufferForBCIM_Ind3_Init = CITR_ac_ConstB.Constant_ne;

    /* SignalConversion generated from: '<S494>/BCIM_Ind4_Init' incorporates:
     *  Constant: '<S534>/Constant'
     */
    CITR_ac_B.OutportBufferForBCIM_Ind4_Init = CITR_ac_ConstB.Constant_hc;

    /* SignalConversion generated from: '<S494>/BCIM_Ind5_Init' incorporates:
     *  Constant: '<S535>/Constant'
     */
    CITR_ac_B.OutportBufferForBCIM_Ind5_Init = CITR_ac_ConstB.Constant_id;

    /* SignalConversion generated from: '<S494>/BCIM_BlinkRate_Init' incorporates:
     *  Constant: '<S536>/Constant'
     */
    CITR_ac_B.OutportBufferForBCIM_BlinkRate_Init = CITR_ac_ConstB.Constant_k2;

    /* SignalConversion generated from: '<S494>/BCIM_Color_Init' incorporates:
     *  Constant: '<S531>/Constant'
     */
    CITR_ac_B.OutportBufferForBCIM_Color_Init = CITR_ac_ConstB.Constant_ok;

    /* SignalConversion generated from: '<S494>/CPIM_IO_Init' incorporates:
     *  Constant: '<S537>/Constant'
     */
    CITR_ac_B.OutportBufferForCPIM_IO_Init = CITR_ac_ConstB.Constant_n;

    /* SignalConversion generated from: '<S494>/DVC_CPIM_Ind1_Init' incorporates:
     *  Constant: '<S539>/Constant'
     */
    CITR_ac_B.OutportBufferForDVC_CPIM_Ind1_Init = CITR_ac_ConstB.Constant_gl;

    /* SignalConversion generated from: '<S494>/DVC_CPIM_Ind2_Init' incorporates:
     *  Constant: '<S523>/Constant'
     */
    CITR_ac_B.OutportBufferForDVC_CPIM_Ind2_Init = CITR_ac_ConstB.Constant_lq;

    /* SignalConversion generated from: '<S494>/DVC_CPIM_Ind3_Init' incorporates:
     *  Constant: '<S524>/Constant'
     */
    CITR_ac_B.OutportBufferForDVC_CPIM_Ind3_Init = CITR_ac_ConstB.Constant_p;

    /* SignalConversion generated from: '<S494>/DVC_CPIM_Ind4_Init' incorporates:
     *  Constant: '<S525>/Constant'
     */
    CITR_ac_B.OutportBufferForDVC_CPIM_Ind4_Init = CITR_ac_ConstB.Constant_eo;

    /* SignalConversion generated from: '<S494>/DVC_CPIM_Ind5_Init' incorporates:
     *  Constant: '<S528>/Constant'
     */
    CITR_ac_B.OutportBufferForDVC_CPIM_Ind5_Init = CITR_ac_ConstB.Constant_nx;

    /* SignalConversion generated from: '<S494>/DVC_CPIM_BlinkRate_Init' incorporates:
     *  Constant: '<S522>/Constant'
     */
    CITR_ac_B.OutportBufferForDVC_CPIM_BlinkRate_Init =
        CITR_ac_ConstB.Constant_m3;

    /* SignalConversion generated from: '<S494>/DVC_CPIM_Color_Init' incorporates:
     *  Constant: '<S526>/Constant'
     */
    CITR_ac_B.OutportBufferForDVC_CPIM_Color_Init = CITR_ac_ConstB.Constant_f2;

    /* SignalConversion generated from: '<S494>/DVC_CPIM_IconI1_Init' incorporates:
     *  Constant: '<S530>/Constant'
     */
    CITR_ac_B.OutportBufferForDVC_CPIM_IconI1_Init = CITR_ac_ConstB.Constant_ng;

    /* SignalConversion generated from: '<S494>/DVC_CPIM_IconI2_Init' incorporates:
     *  Constant: '<S527>/Constant'
     */
    CITR_ac_B.OutportBufferForDVC_CPIM_IconI2_Init = CITR_ac_ConstB.Constant_os;

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Init'
     */
    /* SignalConversion generated from: '<S491>/Sch1_HU_Priority_Init' */
    CITR_ac_B.OutportBufferForSch1_HU_Priority_Init = false;

    /* SignalConversion generated from: '<S491>/Sch1_HU_ChargeUntilFull_Init' */
    CITR_ac_B.OutportBufferForSch1_HU_ChargeUntilFull_ = false;

    /* SignalConversion generated from: '<S491>/Sch1_HU_Do_Not_Repeat_Init' */
    CITR_ac_B.OutportBufferForSch1_HU_Do_Not_Repeat_In = false;

    /* SignalConversion generated from: '<S491>/Sch1_HU_Enbl_Init' */
    CITR_ac_B.OutportBufferForSch1_HU_Enbl_Init = false;

    /* SignalConversion generated from: '<S491>/Sch1_HU_Submit_Init' */
    CITR_ac_B.OutportBufferForSch1_HU_Submit_Init = false;

    /* SignalConversion generated from: '<S491>/Sch1_HU_Start_Time_Hr_Init' */
    CITR_ac_B.OutportBufferForSch1_HU_Start_Time_Hr_In = 0;

    /* SignalConversion generated from: '<S491>/Sch1_HU_Start_Time_Min_Init' */
    CITR_ac_B.OutportBufferForSch1_HU_Start_Time_Min_I = 0;

    /* SignalConversion generated from: '<S491>/Sch1_HU_End_Time_Hr_Init' */
    CITR_ac_B.OutportBufferForSch1_HU_End_Time_Hr_Init = 0;

    /* SignalConversion generated from: '<S491>/Sch1_HU_End_Time_Min_Init' */
    CITR_ac_B.OutportBufferForSch1_HU_End_Time_Min_Ini = 0;

    /* SignalConversion generated from: '<S491>/Sch1_HU_Type_Init' incorporates:
     *  Constant: '<S511>/Constant'
     */
    CITR_ac_B.OutportBufferForSch1_HU_Type_Init = CITR_ac_ConstB.Constant_f;

    /* SignalConversion generated from: '<S491>/Sch1_HU_Day_Init' */
    CITR_ac_B.OutportBufferForSch1_HU_Day_Init = 0U;

    /* SignalConversion generated from: '<S491>/Sch1_HU_Day_FA_Init' */
    CITR_ac_B.OutportBufferForSch1_HU_Day_FA_Init = false;

    /* SignalConversion generated from: '<S491>/Sch1_HU_Day_SgnlRcvd_Init' */
    CITR_ac_B.OutportBufferForSch1_HU_Day_SgnlRcvd_Ini = false;

    /* SignalConversion generated from: '<S491>/HU_Sch1_Start_Time_HrFA_Init' */
    CITR_ac_B.OutportBufferForHU_Sch1_Start_Time_HrFA_ = false;

    /* SignalConversion generated from: '<S491>/HU_Sch1_Start_Time_MinFA_Init' */
    CITR_ac_B.OutportBufferForHU_Sch1_Start_Time_MinFA = false;

    /* SignalConversion generated from: '<S491>/HU_Sch1_End_Time_HrFA_Init' */
    CITR_ac_B.OutportBufferForHU_Sch1_End_Time_HrFA_In = false;

    /* SignalConversion generated from: '<S491>/HU_Sch1_End_Time_MinFA_Init' */
    CITR_ac_B.OutportBufferForHU_Sch1_End_Time_MinFA_I = false;

    /* SignalConversion generated from: '<S491>/HU_Sch1_TypeFA_Init' */
    CITR_ac_B.OutportBufferForHU_Sch1_TypeFA_Init = false;

    /* SignalConversion generated from: '<S491>/HU_Sch1_Temperature_Init' */
    CITR_ac_B.OutportBufferForHU_Sch1_Temperature_Init = 22.0F;

    /* SignalConversion generated from: '<S491>/HU_Sch1_TemperatureFA_Init' */
    CITR_ac_B.OutportBufferForHU_Sch1_TemperatureFA_In = false;

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Schdule2__Init'
     */
    /* SignalConversion generated from: '<S497>/Sch2_HU_Priority_Init' */
    CITR_ac_B.OutportBufferForSch2_HU_Priority_Init = false;

    /* SignalConversion generated from: '<S497>/Sch2_HU_ChargeUntilFull_Init' */
    CITR_ac_B.OutportBufferForSch2_HU_ChargeUntilFull_ = false;

    /* SignalConversion generated from: '<S497>/Sch2_HU_Do_Not_Repeat_Init' */
    CITR_ac_B.OutportBufferForSch2_HU_Do_Not_Repeat_In = false;

    /* SignalConversion generated from: '<S497>/Sch2_HU_Enbl_Init' */
    CITR_ac_B.OutportBufferForSch2_HU_Enbl_Init = false;

    /* SignalConversion generated from: '<S497>/Sch2_HU_Submit_Init' */
    CITR_ac_B.OutportBufferForSch2_HU_Submit_Init = false;

    /* SignalConversion generated from: '<S497>/Sch2_HU_Start_Time_Hr_Init' */
    CITR_ac_B.OutportBufferForSch2_HU_Start_Time_Hr_In = 0;

    /* SignalConversion generated from: '<S497>/Sch2_HU_Start_Time_Min_Init' */
    CITR_ac_B.OutportBufferForSch2_HU_Start_Time_Min_I = 0;

    /* SignalConversion generated from: '<S497>/Sch2_HU_End_Time_Hr_Init' */
    CITR_ac_B.OutportBufferForSch2_HU_End_Time_Hr_Init = 0;

    /* SignalConversion generated from: '<S497>/Sch2_HU_End_Time_Min_Init' */
    CITR_ac_B.OutportBufferForSch2_HU_End_Time_Min_Ini = 0;

    /* SignalConversion generated from: '<S497>/Sch2_HU_Type_Init' incorporates:
     *  Constant: '<S588>/Constant'
     */
    CITR_ac_B.OutportBufferForSch2_HU_Type_Init = CITR_ac_ConstB.Constant_d;

    /* SignalConversion generated from: '<S497>/Sch2_HU_Day_Init' */
    CITR_ac_B.OutportBufferForSch2_HU_Day_Init = 0U;

    /* SignalConversion generated from: '<S497>/Sch2_HU_Day_FA_Init' */
    CITR_ac_B.OutportBufferForSch2_HU_Day_FA_Init = false;

    /* SignalConversion generated from: '<S497>/Sch2_HU_Day_SgnlRcvd_Init' */
    CITR_ac_B.OutportBufferForSch2_HU_Day_SgnlRcvd_Ini = false;

    /* SignalConversion generated from: '<S497>/HU_Sch2_Start_Time_HrFA_Init' */
    CITR_ac_B.OutportBufferForHU_Sch2_Start_Time_HrFA_ = false;

    /* SignalConversion generated from: '<S497>/HU_Sch2_Start_Time_MinFA_Init' */
    CITR_ac_B.OutportBufferForHU_Sch2_Start_Time_MinFA = false;

    /* SignalConversion generated from: '<S497>/HU_Sch2_End_Time_HrFA_Init' */
    CITR_ac_B.OutportBufferForHU_Sch2_End_Time_HrFA_In = false;

    /* SignalConversion generated from: '<S497>/HU_Sch2_End_Time_MinFA_Init' */
    CITR_ac_B.OutportBufferForHU_Sch2_End_Time_MinFA_I = false;

    /* SignalConversion generated from: '<S497>/HU_Sch2_TypeFA_Init' */
    CITR_ac_B.OutportBufferForHU_Sch2_TypeFA_Init = false;

    /* SignalConversion generated from: '<S497>/HU_Sch2_Temperature_Init' */
    CITR_ac_B.OutportBufferForHU_Sch2_Temperature_Init = 22.0F;

    /* SignalConversion generated from: '<S497>/HU_Sch2_TemperatureFA_Init' */
    CITR_ac_B.OutportBufferForHU_Sch2_TemperatureFA_In = false;

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Schdule3__Init'
     */
    /* SignalConversion generated from: '<S499>/Sch3_HU_Priority_Init' */
    CITR_ac_B.OutportBufferForSch3_HU_Priority_Init = false;

    /* SignalConversion generated from: '<S499>/Sch3_HU_ChargeUntilFull_Init' */
    CITR_ac_B.OutportBufferForSch3_HU_ChargeUntilFull_ = false;

    /* SignalConversion generated from: '<S499>/Sch3_HU_Do_Not_Repeat_Init' */
    CITR_ac_B.OutportBufferForSch3_HU_Do_Not_Repeat_In = false;

    /* SignalConversion generated from: '<S499>/Sch3_HU_Enbl_Init' */
    CITR_ac_B.OutportBufferForSch3_HU_Enbl_Init = false;

    /* SignalConversion generated from: '<S499>/Sch3_HU_Submit_Init' */
    CITR_ac_B.OutportBufferForSch3_HU_Submit_Init = false;

    /* SignalConversion generated from: '<S499>/Sch3_HU_Start_Time_Hr_Init' */
    CITR_ac_B.OutportBufferForSch3_HU_Start_Time_Hr_In = 0;

    /* SignalConversion generated from: '<S499>/Sch3_HU_Start_Time_Min_Init' */
    CITR_ac_B.OutportBufferForSch3_HU_Start_Time_Min_I = 0;

    /* SignalConversion generated from: '<S499>/Sch3_HU_End_Time_Hr_Init' */
    CITR_ac_B.OutportBufferForSch3_HU_End_Time_Hr_Init = 0;

    /* SignalConversion generated from: '<S499>/Sch3_HU_End_Time_Min_Init' */
    CITR_ac_B.OutportBufferForSch3_HU_End_Time_Min_Ini = 0;

    /* SignalConversion generated from: '<S499>/Sch3_HU_Type_Init' incorporates:
     *  Constant: '<S590>/Constant'
     */
    CITR_ac_B.OutportBufferForSch3_HU_Type_Init = CITR_ac_ConstB.Constant_e;

    /* SignalConversion generated from: '<S499>/Sch3_HU_Day_Init' */
    CITR_ac_B.OutportBufferForSch3_HU_Day_Init = 0U;

    /* SignalConversion generated from: '<S499>/Sch3_HU_Day_FA_Init' */
    CITR_ac_B.OutportBufferForSch3_HU_Day_FA_Init = false;

    /* SignalConversion generated from: '<S499>/Sch3_HU_Day_SgnlRcvd_Init' */
    CITR_ac_B.OutportBufferForSch3_HU_Day_SgnlRcvd_Ini = false;

    /* SignalConversion generated from: '<S499>/HU_Sch3_Start_Time_HrFA_Init' */
    CITR_ac_B.OutportBufferForHU_Sch3_Start_Time_HrFA_ = false;

    /* SignalConversion generated from: '<S499>/HU_Sch3_Start_Time_MinFA_Init' */
    CITR_ac_B.OutportBufferForHU_Sch3_Start_Time_MinFA = false;

    /* SignalConversion generated from: '<S499>/HU_Sch3_End_Time_HrFA_Init' */
    CITR_ac_B.OutportBufferForHU_Sch3_End_Time_HrFA_In = false;

    /* SignalConversion generated from: '<S499>/HU_Sch3_End_Time_MinFA_Init' */
    CITR_ac_B.OutportBufferForHU_Sch3_End_Time_MinFA_I = false;

    /* SignalConversion generated from: '<S499>/HU_Sch3_TypeFA_Init' */
    CITR_ac_B.OutportBufferForHU_Sch3_TypeFA_Init = false;

    /* SignalConversion generated from: '<S499>/HU_Sch3_Temperature_Init' */
    CITR_ac_B.OutportBufferForHU_Sch3_Temperature_Init = 22.0F;

    /* SignalConversion generated from: '<S499>/HU_Sch3_TemperatureFA_Init' */
    CITR_ac_B.OutportBufferForHU_Sch3_TemperatureFA_In = false;

    /* SignalConversion generated from: '<S499>/HU_Sch3_Allow_Init' incorporates:
     *  Constant: '<S591>/Constant'
     */
    CITR_ac_B.OutportBufferForHU_Sch3_Allow_Init = CITR_ac_ConstB.Constant_jy;

    /* SignalConversion generated from: '<S499>/HU_Sch3_AllowFA_Init' */
    CITR_ac_B.OutportBufferForHU_Sch3_AllowFA_Init = false;

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Schdule4__Init'
     */
    /* SignalConversion generated from: '<S501>/Sch4_HU_Enbl_Init' */
    CITR_ac_B.OutportBufferForSch4_HU_Enbl_Init = false;

    /* SignalConversion generated from: '<S501>/Sch4_HU_Submit_Init' */
    CITR_ac_B.OutportBufferForSch4_HU_Submit_Init = false;

    /* SignalConversion generated from: '<S501>/Sch4_HU_Start_Time_Hr_Init' */
    CITR_ac_B.OutportBufferForSch4_HU_Start_Time_Hr_In = 0;

    /* SignalConversion generated from: '<S501>/Sch4_HU_Start_Time_Min_Init' */
    CITR_ac_B.OutportBufferForSch4_HU_Start_Time_Min_I = 0;

    /* SignalConversion generated from: '<S501>/Sch4_HU_Day_Init' */
    CITR_ac_B.OutportBufferForSch4_HU_Day_Init = 0U;

    /* SignalConversion generated from: '<S501>/Sch4_HU_Day_FA_Init' */
    CITR_ac_B.OutportBufferForSch4_HU_Day_FA_Init = false;

    /* SignalConversion generated from: '<S501>/Sch4_HU_Day_SgnlRcvd_Init' */
    CITR_ac_B.OutportBufferForSch4_HU_Day_SgnlRcvd_Ini = false;

    /* SignalConversion generated from: '<S501>/HU_Sch4_Start_Time_HrFA_Init' */
    CITR_ac_B.OutportBufferForHU_Sch4_Start_Time_HrFA_ = false;

    /* SignalConversion generated from: '<S501>/HU_Sch4_Start_Time_MinFA_Init' */
    CITR_ac_B.OutportBufferForHU_Sch4_Start_Time_MinFA = false;

    /* SignalConversion generated from: '<S501>/HU_Sch4_Temperature_Init' */
    CITR_ac_B.OutportBufferForHU_Sch4_Temperature_Init = 22.0F;

    /* SignalConversion generated from: '<S501>/HU_Sch4_TemperatureFA_Init' */
    CITR_ac_B.OutportBufferForHU_Sch4_TemperatureFA_In = false;

    /* SignalConversion generated from: '<S501>/HU_Sch4_Allow_Init' incorporates:
     *  Constant: '<S594>/Constant'
     */
    CITR_ac_B.OutportBufferForHU_Sch4_Allow_Init = CITR_ac_ConstB.Constant_o;

    /* SignalConversion generated from: '<S501>/HU_Sch4_AllowFA_Init' */
    CITR_ac_B.OutportBufferForHU_Sch4_AllowFA_Init = false;

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Init1'
     */
    /* SignalConversion generated from: '<S492>/Sch1_TBM_Priority_Init' */
    CITR_ac_B.OutportBufferForSch1_TBM_Priority_Init = false;

    /* SignalConversion generated from: '<S492>/Sch1_TBM_ChargeUntilFull_Init' */
    CITR_ac_B.OutportBufferForSch1_TBM_ChargeUntilFull = false;

    /* SignalConversion generated from: '<S492>/Sch1_TBM_Do_Not_Repeat_Init' */
    CITR_ac_B.OutportBufferForSch1_TBM_Do_Not_Repeat_I = false;

    /* SignalConversion generated from: '<S492>/Sch1_TBM_Enbl_Init' */
    CITR_ac_B.OutportBufferForSch1_TBM_Enbl_Init = false;

    /* SignalConversion generated from: '<S492>/Sch1_TBM_Submit_Init' */
    CITR_ac_B.OutportBufferForSch1_TBM_Submit_Init = false;

    /* SignalConversion generated from: '<S492>/Sch1_TBM_Start_Time_Hr_Init' */
    CITR_ac_B.OutportBufferForSch1_TBM_Start_Time_Hr_I = 0;

    /* SignalConversion generated from: '<S492>/Sch1_TBM_Start_Time_Min_Init' */
    CITR_ac_B.OutportBufferForSch1_TBM_Start_Time_Min_ = 0;

    /* SignalConversion generated from: '<S492>/Sch1_TBM_End_Time_Hr_Init' */
    CITR_ac_B.OutportBufferForSch1_TBM_End_Time_Hr_Ini = 0;

    /* SignalConversion generated from: '<S492>/Sch1_TBM_End_Time_Min_Init' */
    CITR_ac_B.OutportBufferForSch1_TBM_End_Time_Min_In = 0;

    /* SignalConversion generated from: '<S492>/Sch1_TBM_Type_Init' incorporates:
     *  Constant: '<S512>/Constant'
     */
    CITR_ac_B.OutportBufferForSch1_TBM_Type_Init = CITR_ac_ConstB.Constant_js;

    /* SignalConversion generated from: '<S492>/Sch1_TBM_Day_Init' */
    CITR_ac_B.OutportBufferForSch1_TBM_Day_Init = 0U;

    /* SignalConversion generated from: '<S492>/Sch1_TBM_Day_FA_Init' */
    CITR_ac_B.OutportBufferForSch1_TBM_Day_FA_Init = false;

    /* SignalConversion generated from: '<S492>/Sch1_TBM_Day_SgnlRcvd_Init' */
    CITR_ac_B.OutportBufferForSch1_TBM_Day_SgnlRcvd_In = false;

    /* SignalConversion generated from: '<S492>/TBM_Sch1_Start_Time_HrFA_Init' */
    CITR_ac_B.OutportBufferForTBM_Sch1_Start_Time_HrFA = false;

    /* SignalConversion generated from: '<S492>/TBM_Sch1_Start_Time_MinFA_Init' */
    CITR_ac_B.OutportBufferForTBM_Sch1_Start_Time_MinF = false;

    /* SignalConversion generated from: '<S492>/TBM_Sch1_End_Time_HrFA_Init' */
    CITR_ac_B.OutportBufferForTBM_Sch1_End_Time_HrFA_I = false;

    /* SignalConversion generated from: '<S492>/TBM_Sch1_End_Time_MinFA_Init' */
    CITR_ac_B.OutportBufferForTBM_Sch1_End_Time_MinFA_ = false;

    /* SignalConversion generated from: '<S492>/TBM_Sch1_TypeFA_Init' */
    CITR_ac_B.OutportBufferForTBM_Sch1_TypeFA_Init = false;

    /* SignalConversion generated from: '<S492>/TBM_Sch1_Temperature_Init' */
    CITR_ac_B.OutportBufferForTBM_Sch1_Temperature_Ini = 22.0F;

    /* SignalConversion generated from: '<S492>/TBM_Sch1_TemperatureFA_Init' */
    CITR_ac_B.OutportBufferForTBM_Sch1_TemperatureFA_I = false;

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Schdule2__Init1'
     */
    /* SignalConversion generated from: '<S498>/Sch2_TBM_Priority_Init' */
    CITR_ac_B.OutportBufferForSch2_TBM_Priority_Init = false;

    /* SignalConversion generated from: '<S498>/Sch2_TBM_ChargeUntilFull_Init' */
    CITR_ac_B.OutportBufferForSch2_TBM_ChargeUntilFull = false;

    /* SignalConversion generated from: '<S498>/Sch2_TBM_Do_Not_Repeat_Init' */
    CITR_ac_B.OutportBufferForSch2_TBM_Do_Not_Repeat_I = false;

    /* SignalConversion generated from: '<S498>/Sch2_TBM_Enbl_Init' */
    CITR_ac_B.OutportBufferForSch2_TBM_Enbl_Init = false;

    /* SignalConversion generated from: '<S498>/Sch2_TBM_Submit_Init' */
    CITR_ac_B.OutportBufferForSch2_TBM_Submit_Init = false;

    /* SignalConversion generated from: '<S498>/Sch2_TBM_Start_Time_Hr_Init' */
    CITR_ac_B.OutportBufferForSch2_TBM_Start_Time_Hr_I = 0;

    /* SignalConversion generated from: '<S498>/Sch2_TBM_Start_Time_Min_Init' */
    CITR_ac_B.OutportBufferForSch2_TBM_Start_Time_Min_ = 0;

    /* SignalConversion generated from: '<S498>/Sch2_TBM_End_Time_Hr_Init' */
    CITR_ac_B.OutportBufferForSch2_TBM_End_Time_Hr_Ini = 0;

    /* SignalConversion generated from: '<S498>/Sch2_TBM_End_Time_Min_Init' */
    CITR_ac_B.OutportBufferForSch2_TBM_End_Time_Min_In = 0;

    /* SignalConversion generated from: '<S498>/Sch2_TBM_Type_Init' incorporates:
     *  Constant: '<S589>/Constant'
     */
    CITR_ac_B.OutportBufferForSch2_TBM_Type_Init = CITR_ac_ConstB.Constant_b;

    /* SignalConversion generated from: '<S498>/Sch2_TBM_Day_Init' */
    CITR_ac_B.OutportBufferForSch2_TBM_Day_Init = 0U;

    /* SignalConversion generated from: '<S498>/Sch2_TBM_Day_FA_Init' */
    CITR_ac_B.OutportBufferForSch2_TBM_Day_FA_Init = false;

    /* SignalConversion generated from: '<S498>/Sch2_TBM_Day_SgnlRcvd_Init' */
    CITR_ac_B.OutportBufferForSch2_TBM_Day_SgnlRcvd_In = false;

    /* SignalConversion generated from: '<S498>/TBM_Sch2_Start_Time_HrFA_Init' */
    CITR_ac_B.OutportBufferForTBM_Sch2_Start_Time_HrFA = false;

    /* SignalConversion generated from: '<S498>/TBM_Sch2_Start_Time_MinFA_Init' */
    CITR_ac_B.OutportBufferForTBM_Sch2_Start_Time_MinF = false;

    /* SignalConversion generated from: '<S498>/TBM_Sch2_End_Time_HrFA_Init' */
    CITR_ac_B.OutportBufferForTBM_Sch2_End_Time_HrFA_I = false;

    /* SignalConversion generated from: '<S498>/TBM_Sch2_End_Time_MinFA_Init' */
    CITR_ac_B.OutportBufferForTBM_Sch2_End_Time_MinFA_ = false;

    /* SignalConversion generated from: '<S498>/TBM_Sch2_TypeFA_Init' */
    CITR_ac_B.OutportBufferForTBM_Sch2_TypeFA_Init = false;

    /* SignalConversion generated from: '<S498>/TBM_Sch2_Temperature_Init' */
    CITR_ac_B.OutportBufferForTBM_Sch2_Temperature_Ini = 22.0F;

    /* SignalConversion generated from: '<S498>/TBM_Sch2_TemperatureFA_Init' */
    CITR_ac_B.OutportBufferForTBM_Sch2_TemperatureFA_I = false;

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Schdule3__Init1'
     */
    /* SignalConversion generated from: '<S500>/Sch3_TBM_Priority_Init' */
    CITR_ac_B.OutportBufferForSch3_TBM_Priority_Init = false;

    /* SignalConversion generated from: '<S500>/Sch3_TBM_ChargeUntilFull_Init' */
    CITR_ac_B.OutportBufferForSch3_TBM_ChargeUntilFull = false;

    /* SignalConversion generated from: '<S500>/Sch3_TBM_Do_Not_Repeat_Init' */
    CITR_ac_B.OutportBufferForSch3_TBM_Do_Not_Repeat_I = false;

    /* SignalConversion generated from: '<S500>/Sch3_TBM_Enbl_Init' */
    CITR_ac_B.OutportBufferForSch3_TBM_Enbl_Init = false;

    /* SignalConversion generated from: '<S500>/Sch3_TBM_Submit_Init' */
    CITR_ac_B.OutportBufferForSch3_TBM_Submit_Init = false;

    /* SignalConversion generated from: '<S500>/Sch3_TBM_Start_Time_Hr_Init' */
    CITR_ac_B.OutportBufferForSch3_TBM_Start_Time_Hr_I = 0;

    /* SignalConversion generated from: '<S500>/Sch3_TBM_Start_Time_Min_Init' */
    CITR_ac_B.OutportBufferForSch3_TBM_Start_Time_Min_ = 0;

    /* SignalConversion generated from: '<S500>/Sch3_TBM_End_Time_Hr_Init' */
    CITR_ac_B.OutportBufferForSch3_TBM_End_Time_Hr_Ini = 0;

    /* SignalConversion generated from: '<S500>/Sch3_TBM_End_Time_Min_Init' */
    CITR_ac_B.OutportBufferForSch3_TBM_End_Time_Min_In = 0;

    /* SignalConversion generated from: '<S500>/Sch3_TBM_Type_Init' incorporates:
     *  Constant: '<S592>/Constant'
     */
    CITR_ac_B.OutportBufferForSch3_TBM_Type_Init = CITR_ac_ConstB.Constant_j;

    /* SignalConversion generated from: '<S500>/Sch3_TBM_Day_Init' */
    CITR_ac_B.OutportBufferForSch3_TBM_Day_Init = 0U;

    /* SignalConversion generated from: '<S500>/Sch3_TBM_Day_FA_Init' */
    CITR_ac_B.OutportBufferForSch3_TBM_Day_FA_Init = false;

    /* SignalConversion generated from: '<S500>/Sch3_TBM_Day_SgnlRcvd_Init' */
    CITR_ac_B.OutportBufferForSch3_TBM_Day_SgnlRcvd_In = false;

    /* SignalConversion generated from: '<S500>/TBM_Sch3_Start_Time_HrFA_Init' */
    CITR_ac_B.OutportBufferForTBM_Sch3_Start_Time_HrFA = false;

    /* SignalConversion generated from: '<S500>/TBM_Sch3_Start_Time_MinFA_Init' */
    CITR_ac_B.OutportBufferForTBM_Sch3_Start_Time_MinF = false;

    /* SignalConversion generated from: '<S500>/TBM_Sch3_End_Time_HrFA_Init' */
    CITR_ac_B.OutportBufferForTBM_Sch3_End_Time_HrFA_I = false;

    /* SignalConversion generated from: '<S500>/TBM_Sch3_End_Time_MinFA_Init' */
    CITR_ac_B.OutportBufferForTBM_Sch3_End_Time_MinFA_ = false;

    /* SignalConversion generated from: '<S500>/TBM_Sch3_TypeFA_Init' */
    CITR_ac_B.OutportBufferForTBM_Sch3_TypeFA_Init = false;

    /* SignalConversion generated from: '<S500>/TBM_Sch3_Temperature_Init' */
    CITR_ac_B.OutportBufferForTBM_Sch3_Temperature_Ini = 22.0F;

    /* SignalConversion generated from: '<S500>/TBM_Sch3_TemperatureFA_Init' */
    CITR_ac_B.OutportBufferForTBM_Sch3_TemperatureFA_I = false;

    /* SignalConversion generated from: '<S500>/TBM_Sch3_Allow_Init' incorporates:
     *  Constant: '<S593>/Constant'
     */
    CITR_ac_B.OutportBufferForTBM_Sch3_Allow_Init = CITR_ac_ConstB.Constant_cd;

    /* SignalConversion generated from: '<S500>/TBM_Sch3_AllowFA_Init' */
    CITR_ac_B.OutportBufferForTBM_Sch3_AllowFA_Init = false;

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Schdule4__Init1'
     */
    /* SignalConversion generated from: '<S502>/Sch4_TBM_Enbl_Init' */
    CITR_ac_B.OutportBufferForSch4_TBM_Enbl_Init = false;

    /* SignalConversion generated from: '<S502>/Sch4_TBM_Submit_Init' */
    CITR_ac_B.OutportBufferForSch4_TBM_Submit_Init = false;

    /* SignalConversion generated from: '<S502>/Sch4_TBM_Start_Time_Hr_Init' */
    CITR_ac_B.OutportBufferForSch4_TBM_Start_Time_Hr_I = 0;

    /* SignalConversion generated from: '<S502>/Sch4_TBM_Start_Time_Min_Init' */
    CITR_ac_B.OutportBufferForSch4_TBM_Start_Time_Min_ = 0;

    /* SignalConversion generated from: '<S502>/Sch4_TBM_Day_Init' */
    CITR_ac_B.OutportBufferForSch4_TBM_Day_Init = 0U;

    /* SignalConversion generated from: '<S502>/Sch4_TBM_Day_FA_Init' */
    CITR_ac_B.OutportBufferForSch4_TBM_Day_FA_Init = false;

    /* SignalConversion generated from: '<S502>/Sch4_TBM_Day_SgnlRcvd_Init' */
    CITR_ac_B.OutportBufferForSch4_TBM_Day_SgnlRcvd_In = false;

    /* SignalConversion generated from: '<S502>/TBM_Sch4_Start_Time_HrFA_Init' */
    CITR_ac_B.OutportBufferForTBM_Sch4_Start_Time_HrFA = false;

    /* SignalConversion generated from: '<S502>/TBM_Sch4_Start_Time_MinFA_Init' */
    CITR_ac_B.OutportBufferForTBM_Sch4_Start_Time_MinF = false;

    /* SignalConversion generated from: '<S502>/TBM_Sch4_Temperature_Init' */
    CITR_ac_B.OutportBufferForTBM_Sch4_Temperature_Ini = 22.0F;

    /* SignalConversion generated from: '<S502>/TBM_Sch4_TemperatureFA_Init' */
    CITR_ac_B.OutportBufferForTBM_Sch4_TemperatureFA_I = false;

    /* SignalConversion generated from: '<S502>/TBM_Sch4_Allow_Init' incorporates:
     *  Constant: '<S595>/Constant'
     */
    CITR_ac_B.OutportBufferForTBM_Sch4_Allow_Init = CITR_ac_ConstB.Constant_c;

    /* SignalConversion generated from: '<S502>/TBM_Sch4_AllowFA_Init' */
    CITR_ac_B.OutportBufferForTBM_Sch4_AllowFA_Init = false;

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/VehicleDateTime__Init'
     */
    /* SignalConversion generated from: '<S504>/Date_Day1_Init' */
    CITR_ac_B.OutportBufferForDate_Day1_Init = 0.0F;

    /* SignalConversion generated from: '<S504>/Date_Day1_FA_Init' */
    CITR_ac_B.OutportBufferForDate_Day1_FA_Init = false;

    /* SignalConversion generated from: '<S504>/Date_Day1_SgnlRcvd_Init' */
    CITR_ac_B.OutportBufferForDate_Day1_SgnlRcvd_Init = false;

    /* SignalConversion generated from: '<S504>/Date_Day2_Init' */
    CITR_ac_B.OutportBufferForDate_Day2_Init = 0.0F;

    /* SignalConversion generated from: '<S504>/Date_Month1_Init' */
    CITR_ac_B.OutportBufferForDate_Month1_Init = 0.0F;

    /* SignalConversion generated from: '<S504>/Date_Month2_Init' */
    CITR_ac_B.OutportBufferForDate_Month2_Init = 0.0F;

    /* SignalConversion generated from: '<S504>/Date_Year1_Init' */
    CITR_ac_B.OutportBufferForDate_Year1_Init = 0.0F;

    /* SignalConversion generated from: '<S504>/Date_Year2_Init' */
    CITR_ac_B.OutportBufferForDate_Year2_Init = 0.0F;

    /* SignalConversion generated from: '<S504>/Date_Year3_Init' */
    CITR_ac_B.OutportBufferForDate_Year3_Init = 0.0F;

    /* SignalConversion generated from: '<S504>/Date_Year4_Init' */
    CITR_ac_B.OutportBufferForDate_Year4_Init = 0.0F;

    /* SignalConversion generated from: '<S504>/Time_Hr1_Init' */
    CITR_ac_B.OutportBufferForTime_Hr1_Init = 0.0F;

    /* SignalConversion generated from: '<S504>/Time_Hr2_Init' */
    CITR_ac_B.OutportBufferForTime_Hr2_Init = 0.0F;

    /* SignalConversion generated from: '<S504>/Time_Min1_Init' */
    CITR_ac_B.OutportBufferForTime_Min1_Init = 0.0F;

    /* SignalConversion generated from: '<S504>/Time_Min2_Init' */
    CITR_ac_B.OutportBufferForTime_Min2_Init = 0.0F;

    /* SignalConversion generated from: '<S504>/ChrgNow_Init' */
    CITR_ac_B.OutportBufferForChrgNow_Init = false;

    /* SignalConversion generated from: '<S504>/TBM_ChrgNow_Init' */
    CITR_ac_B.OutportBufferForTBM_ChrgNow_Init = false;

    /* SignalConversion generated from: '<S504>/DateTmDay_Init' */
    CITR_ac_B.OutportBufferForDateTmDay_Init = 0.0F;

    /* SignalConversion generated from: '<S504>/DateTmDay_FA_Init' */
    CITR_ac_B.OutportBufferForDateTmDay_FA_Init = false;

    /* SignalConversion generated from: '<S504>/DateTmDay_SgnlRcvd_Init' */
    CITR_ac_B.OutportBufferForDateTmDay_SgnlRcvd_Init = false;

    /* SignalConversion generated from: '<S504>/DateTmMon_Init' */
    CITR_ac_B.OutportBufferForDateTmMon_Init = 0.0F;

    /* SignalConversion generated from: '<S504>/DateTmYear_Init' */
    CITR_ac_B.OutportBufferForDateTmYear_Init = 0.0F;

    /* SignalConversion generated from: '<S504>/DateTmHour_Init' */
    CITR_ac_B.OutportBufferForDateTmHour_Init = 0.0F;

    /* SignalConversion generated from: '<S504>/DateTmMin_Init' */
    CITR_ac_B.OutportBufferForDateTmMin_Init = 0.0F;

    /* SignalConversion generated from: '<S504>/DateTmSec_Init' */
    CITR_ac_B.OutportBufferForDateTmSec_Init = 0.0F;

    /* SignalConversion generated from: '<S504>/DateTmFormat_Init' incorporates:
     *  Constant: '<S596>/Constant'
     */
    CITR_ac_B.OutportBufferForDateTmFormat_Init = CITR_ac_ConstB.Constant_ni;

    /* SignalConversion generated from: '<S504>/DateTmFormat_FA_Init' */
    CITR_ac_B.OutportBufferForDateTmFormat_FA_Init = false;

    /* SignalConversion generated from: '<S504>/ChargingDestinationPwr_Init' */
    CITR_ac_B.OutportBufferForChargingDestinationPwr_I = 630.0F;

    /* SignalConversion generated from: '<S504>/ChargingDestinationPwr_FA_Init' */
    CITR_ac_B.OutportBufferForChargingDestinationPwr_F = false;

    /* SignalConversion generated from: '<S504>/DistanceToCharge_Init' */
    CITR_ac_B.OutportBufferForDistanceToCharge_Init = 127U;

    /* SignalConversion generated from: '<S504>/DistanceToCharge_FA_Init' */
    CITR_ac_B.OutportBufferForDistanceToCharge_FA_Init = false;

    /* SignalConversion generated from: '<S504>/TimeToCharge_Init' */
    CITR_ac_B.OutportBufferForTimeToCharge_Init = MAX_uint8_T;

    /* SignalConversion generated from: '<S504>/TimeToCharge_FA_Init' */
    CITR_ac_B.OutportBufferForTimeToCharge_FA_Init = false;

    /* SignalConversion generated from: '<S504>/FOTA_Install_Type_Init' incorporates:
     *  Constant: '<S597>/Constant'
     */
    CITR_ac_B.OutportBufferForFOTA_Install_Type_Init =
        CITR_ac_ConstB.Constant_i0;

    /* SignalConversion generated from: '<S504>/FOTA_Install_Type_FA_Init' */
    CITR_ac_B.OutportBufferForFOTA_Install_Type_FA_Ini = false;

    /* SignalConversion generated from: '<S504>/FOTA_Install_Status_Init' incorporates:
     *  Constant: '<S598>/Constant'
     */
    CITR_ac_B.OutportBufferForFOTA_Install_Status_Init =
        CITR_ac_ConstB.Constant_gq;

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Cooperative_Charging_Init'
     */
    /* SignalConversion generated from: '<S489>/HU_ChrgSchedType1_Init' incorporates:
     *  Constant: '<S506>/Constant'
     */
    CITR_ac_B.OutportBufferForHU_ChrgSchedType1_Init =
        CITR_ac_ConstB.Constant_le;

    /* SignalConversion generated from: '<S489>/HU_ChrgSchedType1_FA_Init' */
    CITR_ac_B.OutportBufferForHU_ChrgSchedType1_FA_Ini = false;

    /* SignalConversion generated from: '<S489>/HU_ChrgSchedType2_Init' incorporates:
     *  Constant: '<S505>/Constant'
     */
    CITR_ac_B.OutportBufferForHU_ChrgSchedType2_Init =
        CITR_ac_ConstB.Constant_kf;

    /* SignalConversion generated from: '<S489>/HU_ChrgSchedType2_FA_Init' */
    CITR_ac_B.OutportBufferForHU_ChrgSchedType2_FA_Ini = false;

    /* SignalConversion generated from: '<S489>/HU_ExtChrgTarget1_Init' */
    CITR_ac_B.OutportBufferForHU_ExtChrgTarget1_Init = 0.0F;

    /* SignalConversion generated from: '<S489>/HU_ExtChrgTarget1_FA_Init' */
    CITR_ac_B.OutportBufferForHU_ExtChrgTarget1_FA_Ini = false;

    /* SignalConversion generated from: '<S489>/HU_ExtChrgTarget2_Init' */
    CITR_ac_B.OutportBufferForHU_ExtChrgTarget2_Init = 0.0F;

    /* SignalConversion generated from: '<S489>/HU_ExtChrgTarget2_FA_Init' */
    CITR_ac_B.OutportBufferForHU_ExtChrgTarget2_FA_Ini = false;

    /* SignalConversion generated from: '<S489>/HU_ImmChrgTarget1_Init' */
    CITR_ac_B.OutportBufferForHU_ImmChrgTarget1_Init = 0.0F;

    /* SignalConversion generated from: '<S489>/HU_ImmChrgTarget1_FA_Init' */
    CITR_ac_B.OutportBufferForHU_ImmChrgTarget1_FA_Ini = false;

    /* SignalConversion generated from: '<S489>/HU_ImmChrgTarget2_Init' */
    CITR_ac_B.OutportBufferForHU_ImmChrgTarget2_Init = 0.0F;

    /* SignalConversion generated from: '<S489>/HU_ImmChrgTarget2_FA_Init' */
    CITR_ac_B.OutportBufferForHU_ImmChrgTarget2_FA_Ini = false;

    /* SignalConversion generated from: '<S489>/CoopCh_VehLocation_Init' */
    CITR_ac_B.OutportBufferForCoopCh_VehLocation_Init = false;

    /* SignalConversion generated from: '<S489>/CoopCh_VehLocation_FA_Init' */
    CITR_ac_B.OutportBufferForCoopCh_VehLocation_FA_In = false;

    /* SignalConversion generated from: '<S489>/RmtChrgPortLkCmd_Init' incorporates:
     *  Constant: '<S507>/Constant'
     */
    CITR_ac_B.OutportBufferForRmtChrgPortLkCmd_Init = CITR_ac_ConstB.Constant_ig;

    /* SignalConversion generated from: '<S489>/RmtChrgPortLkCmd_FA_Init' */
    CITR_ac_B.OutportBufferForRmtChrgPortLkCmd_FA_Init = false;

    /* SignalConversion generated from: '<S489>/RmtChrgPortLkCmd_SgnlRcvd_Init' */
    CITR_ac_B.OutportBufferForRmtChrgPortLkCmd_SgnlRcv = false;

    /* SignalConversion generated from: '<S489>/CoopCh_ChrgCmd_Init' incorporates:
     *  Constant: '<S508>/Constant'
     */
    CITR_ac_B.OutportBufferForCoopCh_ChrgCmd_Init = CITR_ac_ConstB.Constant_em;

    /* SignalConversion generated from: '<S489>/CoopCh_ChrgCmd_FA_Init' */
    CITR_ac_B.OutportBufferForCoopCh_ChrgCmd_FA_Init = false;

    /* SignalConversion generated from: '<S489>/TBMStopChrg_Init' */
    CITR_ac_B.OutportBufferForTBMStopChrg_Init = false;

    /* SignalConversion generated from: '<S489>/TBMStopChrg_FA_Init' */
    CITR_ac_B.OutportBufferForTBMStopChrg_FA_Init = false;

    /* SignalConversion generated from: '<S489>/TBM_ChrgSchedType1_Init' incorporates:
     *  Constant: '<S509>/Constant'
     */
    CITR_ac_B.OutportBufferForTBM_ChrgSchedType1_Init =
        CITR_ac_ConstB.Constant_in;

    /* SignalConversion generated from: '<S489>/TBM_ChrgSchedType1_FA_Init' */
    CITR_ac_B.OutportBufferForTBM_ChrgSchedType1_FA_In = false;

    /* SignalConversion generated from: '<S489>/TBM_ChrgSchedType2_Init' incorporates:
     *  Constant: '<S510>/Constant'
     */
    CITR_ac_B.OutportBufferForTBM_ChrgSchedType2_Init =
        CITR_ac_ConstB.Constant_m;

    /* SignalConversion generated from: '<S489>/TBM_ChrgSchedType2_FA_Init' */
    CITR_ac_B.OutportBufferForTBM_ChrgSchedType2_FA_In = false;

    /* SignalConversion generated from: '<S489>/TBM_ExtChrgTarget1_Init' */
    CITR_ac_B.OutportBufferForTBM_ExtChrgTarget1_Init = 0.0F;

    /* SignalConversion generated from: '<S489>/TBM_ExtChrgTarget1_FA_Init' */
    CITR_ac_B.OutportBufferForTBM_ExtChrgTarget1_FA_In = false;

    /* SignalConversion generated from: '<S489>/TBM_ExtChrgTarget2_Init' */
    CITR_ac_B.OutportBufferForTBM_ExtChrgTarget2_Init = 0.0F;

    /* SignalConversion generated from: '<S489>/TBM_ExtChrgTarget2_FA_Init' */
    CITR_ac_B.OutportBufferForTBM_ExtChrgTarget2_FA_In = false;

    /* SignalConversion generated from: '<S489>/TBM_ImmChrgTarget1_Init' */
    CITR_ac_B.OutportBufferForTBM_ImmChrgTarget1_Init = 0.0F;

    /* SignalConversion generated from: '<S489>/TBM_ImmChrgTarget1_FA_Init' */
    CITR_ac_B.OutportBufferForTBM_ImmChrgTarget1_FA_In = false;

    /* SignalConversion generated from: '<S489>/TBM_ImmChrgTarget2_Init' */
    CITR_ac_B.OutportBufferForTBM_ImmChrgTarget2_Init = 0.0F;

    /* SignalConversion generated from: '<S489>/TBM_ImmChrgTarget2_FA_Init' */
    CITR_ac_B.OutportBufferForTBM_ImmChrgTarget2_FA_In = false;

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S503>/VeCITR_e_DoorLockLastElSts_Out_Init' incorporates:
     *  Constant: '<S503>/Const1'
     */
    CITR_ac_B.OutportBufferForVeCITR_e_DoorLockLastElS = CITR_ac_ConstB.Const1;

    /* SignalConversion generated from: '<S503>/VeCITR_b_DoorLockLastElSts_Rcvd_Out_Init' */
    CITR_ac_B.OutportBufferForVeCITR_b_DoorLockLastElS = false;

    /* SignalConversion generated from: '<S503>/VeCITR_b_Lock_Sense_Out_Init' */
    CITR_ac_B.OutportBufferForVeCITR_b_Lock_Sense_Out_ = false;

    /* SignalConversion generated from: '<S503>/VeCITR_e_PwrLimReq_Out_Init' incorporates:
     *  Constant: '<S503>/Const4'
     */
    CITR_ac_B.OutportBufferForVeCITR_e_PwrLimReq_Out_I = CITR_ac_ConstB.Const4;

    /* SignalConversion generated from: '<S503>/VeCITR_b_PwrLimReq_FA_Out_Init' */
    CITR_ac_B.OutportBufferForVeCITR_b_PwrLimReq_FA_Ou = false;

    /* SignalConversion generated from: '<S503>/VeCITR_b_PwrLimReq_SgnlRcvd_Out_Init' */
    CITR_ac_B.OutportBufferForVeCITR_b_PwrLimReq_SgnlR = false;

    /* SignalConversion generated from: '<S503>/VeCITR_b_ChrgPortDoorSts_Out_Init' */
    CITR_ac_B.OutportBufferForVeCITR_b_ChrgPortDoorSts = false;

    /* SignalConversion generated from: '<S503>/VeCITR_b_PortLockBCM_Cmd_Out_Init' */
    CITR_ac_B.OutportBufferForVeCITR_b_PortLockBCM_Cmd = false;

    /* SignalConversion generated from: '<S503>/VeCITR_e_ChrgPortLock_StsB_Out_Init' incorporates:
     *  Constant: '<S503>/Const9'
     */
    CITR_ac_B.OutportBufferForVeCITR_e_ChrgPortLock_St = CITR_ac_ConstB.Const9;

    /* SignalConversion generated from: '<S503>/VeCITR_b_HBridge_ChrgPortLck_Cal_Out_Init' */
    CITR_ac_B.OutportBufferForVeCITR_b_HBridge_ChrgPor = false;

    /* SignalConversion generated from: '<S503>/VeCITR_b_ChrgPortLockSts_Out_Init' */
    CITR_ac_B.OutportBufferForVeCITR_b_ChrgPortLockSts = false;

    /* SignalConversion generated from: '<S503>/VeCITR_b_ChrgPortLockSts_FA_Out_Init' */
    CITR_ac_B.OutportBufferForVeCITR_b_ChrgPortLockS_k = false;

    /* SignalConversion generated from: '<S503>/VeCITR_b_ChrgPortSts_Out_Init' */
    CITR_ac_B.OutportBufferForVeCITR_b_ChrgPortSts_Out = false;

    /* SignalConversion generated from: '<S503>/LockSense_write' */
    CITR_ac_B.OutportBufferForLockSense_write = false;

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/PowerPanel_Init'
     */
    /* SignalConversion generated from: '<S496>/V2HModeReq_Init' */
    CITR_ac_B.OutportBufferForV2HModeReq_Init = false;

    /* SignalConversion generated from: '<S496>/V2HModeReq_FA_Init' */
    CITR_ac_B.OutportBufferForV2HModeReq_FA_Init = false;

    /* SignalConversion generated from: '<S496>/V2HReq_Init' */
    CITR_ac_B.OutportBufferForV2HReq_Init = false;

    /* SignalConversion generated from: '<S496>/V2HReq_FA_Init' */
    CITR_ac_B.OutportBufferForV2HReq_FA_Init = false;

    /* SignalConversion generated from: '<S496>/V2HRsrvBatt_Init' */
    CITR_ac_B.OutportBufferForV2HRsrvBatt_Init = 0.0F;

    /* SignalConversion generated from: '<S496>/V2HRsrvBatt_FA_Init' */
    CITR_ac_B.OutportBufferForV2HRsrvBatt_FA_Init = false;

    /* SignalConversion generated from: '<S496>/V2HSubmit_Init' */
    CITR_ac_B.OutportBufferForV2HSubmit_Init = false;

    /* SignalConversion generated from: '<S496>/V2HSubmit_FA_Init' */
    CITR_ac_B.OutportBufferForV2HSubmit_FA_Init = false;

    /* SignalConversion generated from: '<S496>/V2L_AllReq_Init' */
    CITR_ac_B.OutportBufferForV2L_AllReq_Init = false;

    /* SignalConversion generated from: '<S496>/V2L_AllReq_FA_Init' */
    CITR_ac_B.OutportBufferForV2L_AllReq_FA_Init = false;

    /* SignalConversion generated from: '<S496>/V2L_FrunkReq_Init' */
    CITR_ac_B.OutportBufferForV2L_FrunkReq_Init = false;

    /* SignalConversion generated from: '<S496>/V2L_FrunkReq_FA_Init' */
    CITR_ac_B.OutportBufferForV2L_FrunkReq_FA_Init = false;

    /* SignalConversion generated from: '<S496>/V2LModeReq_Init' */
    CITR_ac_B.OutportBufferForV2LModeReq_Init = false;

    /* SignalConversion generated from: '<S496>/V2LModeReq_FA_Init' */
    CITR_ac_B.OutportBufferForV2LModeReq_FA_Init = false;

    /* SignalConversion generated from: '<S496>/V2LRsrvBatt_Init' */
    CITR_ac_B.OutportBufferForV2LRsrvBatt_Init = 0.0F;

    /* SignalConversion generated from: '<S496>/V2LRsrvBatt_FA_Init' */
    CITR_ac_B.OutportBufferForV2LRsrvBatt_FA_Init = false;

    /* SignalConversion generated from: '<S496>/V2LSubmit_Init' */
    CITR_ac_B.OutportBufferForV2LSubmit_Init = false;

    /* SignalConversion generated from: '<S496>/V2LSubmit_FA_Init' */
    CITR_ac_B.OutportBufferForV2LSubmit_FA_Init = false;

    /* SignalConversion generated from: '<S496>/V2LTrunkReq_Init' */
    CITR_ac_B.OutportBufferForV2LTrunkReq_Init = false;

    /* SignalConversion generated from: '<S496>/V2LTrunkReq_FA_Init' */
    CITR_ac_B.OutportBufferForV2LTrunkReq_FA_Init = false;

    /* SignalConversion generated from: '<S496>/V2VModeReq_Init' */
    CITR_ac_B.OutportBufferForV2VModeReq_Init = false;

    /* SignalConversion generated from: '<S496>/V2VModeReq_FA_Init' */
    CITR_ac_B.OutportBufferForV2VModeReq_FA_Init = false;

    /* SignalConversion generated from: '<S496>/V2VReq_Init' */
    CITR_ac_B.OutportBufferForV2VReq_Init = false;

    /* SignalConversion generated from: '<S496>/V2VReq_FA_Init' */
    CITR_ac_B.OutportBufferForV2VReq_FA_Init = false;

    /* SignalConversion generated from: '<S496>/V2VRsrvBatt_Init' */
    CITR_ac_B.OutportBufferForV2VRsrvBatt_Init = 0.0F;

    /* SignalConversion generated from: '<S496>/V2VRsrvBatt_FA_Init' */
    CITR_ac_B.OutportBufferForV2VRsrvBatt_FA_Init = false;

    /* SignalConversion generated from: '<S496>/V2VSubmit_Init' */
    CITR_ac_B.OutportBufferForV2VSubmit_Init = false;

    /* SignalConversion generated from: '<S496>/V2VSubmit_FA_Init' */
    CITR_ac_B.OutportBufferForV2VSubmit_FA_Init = false;

    /* SignalConversion generated from: '<S496>/PPCurrentDrawSens1_Init' */
    CITR_ac_B.OutportBufferForPPCurrentDrawSens1_Init = 0.0F;

    /* SignalConversion generated from: '<S496>/PPCurrentDrawSens1_FA_Init' */
    CITR_ac_B.OutportBufferForPPCurrentDrawSens1_FA_In = false;

    /* SignalConversion generated from: '<S496>/PPButtonSts_Init' */
    CITR_ac_B.OutportBufferForPPButtonSts_Init = false;

    /* SignalConversion generated from: '<S496>/PPButtonSts_FA_Init' */
    CITR_ac_B.OutportBufferForPPButtonSts_FA_Init = false;

    /* SignalConversion generated from: '<S496>/PPLidSwitchSts120A_Init' */
    CITR_ac_B.OutportBufferForPPLidSwitchSts120A_Init = false;

    /* SignalConversion generated from: '<S496>/PPLidSwitchSts120A_FA_Init' */
    CITR_ac_B.OutportBufferForPPLidSwitchSts120A_FA_In = false;

    /* SignalConversion generated from: '<S496>/PPLidSwitchSts120B_Init' */
    CITR_ac_B.OutportBufferForPPLidSwitchSts120B_Init = false;

    /* SignalConversion generated from: '<S496>/PPLidSwitchSts120B_FA_Init' */
    CITR_ac_B.OutportBufferForPPLidSwitchSts120B_FA_In = false;

    /* SignalConversion generated from: '<S496>/PPLidSwitchSts240_Init' */
    CITR_ac_B.OutportBufferForPPLidSwitchSts240_Init = false;

    /* SignalConversion generated from: '<S496>/PPLidSwitchSts240_FA_Init' */
    CITR_ac_B.OutportBufferForPPLidSwitchSts240_FA_Ini = false;

    /* SignalConversion generated from: '<S496>/PPACPresentSens1_Init' */
    CITR_ac_B.OutportBufferForPPACPresentSens1_Init = false;

    /* SignalConversion generated from: '<S496>/PPACPresentSens1_FA_Init' */
    CITR_ac_B.OutportBufferForPPACPresentSens1_FA_Init = false;

    /* SignalConversion generated from: '<S496>/PPACPresentSens2_Init' */
    CITR_ac_B.OutportBufferForPPACPresentSens2_Init = false;

    /* SignalConversion generated from: '<S496>/PPACPresentSens2_FA_Init' */
    CITR_ac_B.OutportBufferForPPACPresentSens2_FA_Init = false;

    /* SignalConversion generated from: '<S496>/PPCurrentDrawSens2_Init' */
    CITR_ac_B.OutportBufferForPPCurrentDrawSens2_Init = 0.0F;

    /* SignalConversion generated from: '<S496>/PPCurrentDrawSens2_FA_Init' */
    CITR_ac_B.OutportBufferForPPCurrentDrawSens2_FA_In = false;

    /* SignalConversion generated from: '<S496>/PPFaultRsn_Init' incorporates:
     *  Constant: '<S585>/Constant'
     */
    CITR_ac_B.OutportBufferForPPFaultRsn_Init = CITR_ac_ConstB.Constant_a;

    /* SignalConversion generated from: '<S496>/PPFaultRsn_FA_Init' */
    CITR_ac_B.OutportBufferForPPFaultRsn_FA_Init = false;

    /* SignalConversion generated from: '<S496>/PPFault_Init' incorporates:
     *  Constant: '<S567>/Constant'
     */
    CITR_ac_B.OutportBufferForPPFault_Init = CITR_ac_ConstB.Constant_i;

    /* SignalConversion generated from: '<S496>/PPFault_FA_Init' */
    CITR_ac_B.OutportBufferForPPFault_FA_Init = false;

    /* SignalConversion generated from: '<S496>/PPLEDFault_Init' incorporates:
     *  Constant: '<S578>/Constant'
     */
    CITR_ac_B.OutportBufferForPPLEDFault_Init = CITR_ac_ConstB.Constant_g;

    /* SignalConversion generated from: '<S496>/PPLEDFault_FA_Init' */
    CITR_ac_B.OutportBufferForPPLEDFault_FA_Init = false;

    /* SignalConversion generated from: '<S496>/RsErrSPP_Init' */
    CITR_ac_B.OutportBufferForRsErrSPP_Init = false;

    /* SignalConversion generated from: '<S496>/RsErrSPP_FA_Init' */
    CITR_ac_B.OutportBufferForRsErrSPP_FA_Init = false;

    /* SignalConversion generated from: '<S496>/PPRatedPower_Init' */
    CITR_ac_B.OutportBufferForPPRatedPower_Init = 0.0F;

    /* SignalConversion generated from: '<S496>/PPRatedPower_FA_Init' */
    CITR_ac_B.OutportBufferForPPRatedPower_FA_Init = false;

    /* SignalConversion generated from: '<S496>/PP2CurrentDrawSens1_Init' */
    CITR_ac_B.OutportBufferForPP2CurrentDrawSens1_Init = 0.0F;

    /* SignalConversion generated from: '<S496>/PP2CurrentDrawSens1_FA_Init' */
    CITR_ac_B.OutportBufferForPP2CurrentDrawSens1_FA_I = false;

    /* SignalConversion generated from: '<S496>/PP2ButtonSts_Init' */
    CITR_ac_B.OutportBufferForPP2ButtonSts_Init = false;

    /* SignalConversion generated from: '<S496>/PP2ButtonSts_FA_Init' */
    CITR_ac_B.OutportBufferForPP2ButtonSts_FA_Init = false;

    /* SignalConversion generated from: '<S496>/PP2LidSwitchSts120A_Init' */
    CITR_ac_B.OutportBufferForPP2LidSwitchSts120A_Init = false;

    /* SignalConversion generated from: '<S496>/PP2LidSwitchSts120A_FA_Init' */
    CITR_ac_B.OutportBufferForPP2LidSwitchSts120A_FA_I = false;

    /* SignalConversion generated from: '<S496>/PP2LidSwitchSts120B_Init' */
    CITR_ac_B.OutportBufferForPP2LidSwitchSts120B_Init = false;

    /* SignalConversion generated from: '<S496>/PP2LidSwitchSts120B_FA_Init' */
    CITR_ac_B.OutportBufferForPP2LidSwitchSts120B_FA_I = false;

    /* SignalConversion generated from: '<S496>/PP2LidSwitchSts240_Init' */
    CITR_ac_B.OutportBufferForPP2LidSwitchSts240_Init = false;

    /* SignalConversion generated from: '<S496>/PP2LidSwitchSts240_FA_Init' */
    CITR_ac_B.OutportBufferForPP2LidSwitchSts240_FA_In = false;

    /* SignalConversion generated from: '<S496>/PP2ACPresentSens1_Init' */
    CITR_ac_B.OutportBufferForPP2ACPresentSens1_Init = false;

    /* SignalConversion generated from: '<S496>/PP2ACPresentSens1_FA_Init' */
    CITR_ac_B.OutportBufferForPP2ACPresentSens1_FA_Ini = false;

    /* SignalConversion generated from: '<S496>/PP2ACPresentSens2_Init' */
    CITR_ac_B.OutportBufferForPP2ACPresentSens2_Init = false;

    /* SignalConversion generated from: '<S496>/PP2ACPresentSens2_FA_Init' */
    CITR_ac_B.OutportBufferForPP2ACPresentSens2_FA_Ini = false;

    /* SignalConversion generated from: '<S496>/PP2CurrentDrawSens2_Init' */
    CITR_ac_B.OutportBufferForPP2CurrentDrawSens2_Init = 0.0F;

    /* SignalConversion generated from: '<S496>/PP2CurrentDrawSens2_FA_Init' */
    CITR_ac_B.OutportBufferForPP2CurrentDrawSens2_FA_I = false;

    /* SignalConversion generated from: '<S496>/PP2FaultRsn_Init' incorporates:
     *  Constant: '<S583>/Constant'
     */
    CITR_ac_B.OutportBufferForPP2FaultRsn_Init = CITR_ac_ConstB.Constant_iv;

    /* SignalConversion generated from: '<S496>/PP2FaultRsn_FA_Init' */
    CITR_ac_B.OutportBufferForPP2FaultRsn_FA_Init = false;

    /* SignalConversion generated from: '<S496>/PP2Fault_Init' incorporates:
     *  Constant: '<S581>/Constant'
     */
    CITR_ac_B.OutportBufferForPP2Fault_Init = CITR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S496>/PP2Fault_FA_Init' */
    CITR_ac_B.OutportBufferForPP2Fault_FA_Init = false;

    /* SignalConversion generated from: '<S496>/PP2LEDFault_Init' incorporates:
     *  Constant: '<S582>/Constant'
     */
    CITR_ac_B.OutportBufferForPP2LEDFault_Init = CITR_ac_ConstB.Constant_c0;

    /* SignalConversion generated from: '<S496>/PP2LEDFault_FA_Init' */
    CITR_ac_B.OutportBufferForPP2LEDFault_FA_Init = false;

    /* SignalConversion generated from: '<S496>/RsErrSPP2_Init' */
    CITR_ac_B.OutportBufferForRsErrSPP2_Init = false;

    /* SignalConversion generated from: '<S496>/RsErrSPP2_FA_Init' */
    CITR_ac_B.OutportBufferForRsErrSPP2_FA_Init = false;

    /* SignalConversion generated from: '<S496>/PP2RatedPower_Init' */
    CITR_ac_B.OutportBufferForPP2RatedPower_Init = 0.0F;

    /* SignalConversion generated from: '<S496>/PP2RatedPower_FA_Init' */
    CITR_ac_B.OutportBufferForPP2RatedPower_FA_Init = false;

    /* SignalConversion generated from: '<S496>/PP_LED_A_Feedback_Init' incorporates:
     *  Constant: '<S584>/Constant'
     */
    CITR_ac_B.OutportBufferForPP_LED_A_Feedback_Init =
        CITR_ac_ConstB.Constant_cm;

    /* SignalConversion generated from: '<S496>/PP_LED_A_Feedback_FA_Init' */
    CITR_ac_B.OutportBufferForPP_LED_A_Feedback_FA_Ini = false;

    /* SignalConversion generated from: '<S496>/PP_LED_B_Feedback_Init' incorporates:
     *  Constant: '<S586>/Constant'
     */
    CITR_ac_B.OutportBufferForPP_LED_B_Feedback_Init =
        CITR_ac_ConstB.Constant_nu;

    /* SignalConversion generated from: '<S496>/PP_LED_B_Feedback_FA_Init' */
    CITR_ac_B.OutportBufferForPP_LED_B_Feedback_FA_Ini = false;

    /* SignalConversion generated from: '<S496>/PP_LED_C_Feedback_Init' incorporates:
     *  Constant: '<S587>/Constant'
     */
    CITR_ac_B.OutportBufferForPP_LED_C_Feedback_Init =
        CITR_ac_ConstB.Constant_h3;

    /* SignalConversion generated from: '<S496>/PP_LED_C_Feedback_FA_Init' */
    CITR_ac_B.OutportBufferForPP_LED_C_Feedback_FA_Ini = false;

    /* SignalConversion generated from: '<S496>/PP_LED_A_ FailStatus_Init' incorporates:
     *  Constant: '<S568>/Constant'
     */
    CITR_ac_B.OutportBufferForPP_LED_A_FailStatus_Init =
        CITR_ac_ConstB.Constant_hb;

    /* SignalConversion generated from: '<S496>/PP_LED_A_ FailStatus_FA_Init' */
    CITR_ac_B.OutportBufferForPP_LED_A_FailStatus_FA_I = false;

    /* SignalConversion generated from: '<S496>/PP_LED_B_ FailStatus_Init' incorporates:
     *  Constant: '<S569>/Constant'
     */
    CITR_ac_B.OutportBufferForPP_LED_B_FailStatus_Init =
        CITR_ac_ConstB.Constant_im;

    /* SignalConversion generated from: '<S496>/PP_LED_B_ FailStatus_FA_Init' */
    CITR_ac_B.OutportBufferForPP_LED_B_FailStatus_FA_I = false;

    /* SignalConversion generated from: '<S496>/PP_LED_C_ FailStatus_Init' incorporates:
     *  Constant: '<S570>/Constant'
     */
    CITR_ac_B.OutportBufferForPP_LED_C_FailStatus_Init =
        CITR_ac_ConstB.Constant_ge;

    /* SignalConversion generated from: '<S496>/PP_LED_C_ FailStatus_FA_Init' */
    CITR_ac_B.OutportBufferForPP_LED_C_FailStatus_FA_I = false;

    /* SignalConversion generated from: '<S496>/PP_LED_A_Color_Feedback_Init' incorporates:
     *  Constant: '<S571>/Constant'
     */
    CITR_ac_B.OutportBufferForPP_LED_A_Color_Feedbac_j =
        CITR_ac_ConstB.Constant_gy;

    /* SignalConversion generated from: '<S496>/PP_LED_A_Color_Feedback_FA_Init' */
    CITR_ac_B.OutportBufferForPP_LED_A_Color_Feedback_ = false;

    /* SignalConversion generated from: '<S496>/PP_LED_B_Color_Feedback_Init' incorporates:
     *  Constant: '<S572>/Constant'
     */
    CITR_ac_B.OutportBufferForPP_LED_B_Color_Feedbac_j =
        CITR_ac_ConstB.Constant_ou;

    /* SignalConversion generated from: '<S496>/PP_LED_B_Color_Feedback_FA_Init' */
    CITR_ac_B.OutportBufferForPP_LED_B_Color_Feedback_ = false;

    /* SignalConversion generated from: '<S496>/PP_LED_C_Color_Feedback_Init' incorporates:
     *  Constant: '<S573>/Constant'
     */
    CITR_ac_B.OutportBufferForPP_LED_C_Color_Feedbac_c =
        CITR_ac_ConstB.Constant_dj;

    /* SignalConversion generated from: '<S496>/PP_LED_C_Color_Feedback_FA_Init' */
    CITR_ac_B.OutportBufferForPP_LED_C_Color_Feedback_ = false;

    /* SignalConversion generated from: '<S496>/PP_LIN_Checksum_Error_Init' */
    CITR_ac_B.OutportBufferForPP_LIN_Checksum_Error_In = false;

    /* SignalConversion generated from: '<S496>/PP_LIN_Checksum_Error_FA_Init' */
    CITR_ac_B.OutportBufferForPP_LIN_Checksum_Error_FA = false;

    /* SignalConversion generated from: '<S496>/PP_LIN_Data_Error_Init' */
    CITR_ac_B.OutportBufferForPP_LIN_Data_Error_Init = false;

    /* SignalConversion generated from: '<S496>/PP_LIN_Data_Error_FA_Init' */
    CITR_ac_B.OutportBufferForPP_LIN_Data_Error_FA_Ini = false;

    /* SignalConversion generated from: '<S496>/PP_LIN_Parity_Error_Init' */
    CITR_ac_B.OutportBufferForPP_LIN_Parity_Error_Init = false;

    /* SignalConversion generated from: '<S496>/PP_LIN_Parity_Error_FA_Init' */
    CITR_ac_B.OutportBufferForPP_LIN_Parity_Error_FA_I = false;

    /* SignalConversion generated from: '<S496>/PP_Gnd_Fault_Detected_Init' */
    CITR_ac_B.OutportBufferForPP_Gnd_Fault_Detected_In = false;

    /* SignalConversion generated from: '<S496>/PP_Gnd_Fault_Detected_FA_Init' */
    CITR_ac_B.OutportBufferForPP_Gnd_Fault_Detected_FA = false;

    /* SignalConversion generated from: '<S496>/PP2_LED_A_Feedback_Init' incorporates:
     *  Constant: '<S574>/Constant'
     */
    CITR_ac_B.OutportBufferForPP2_LED_A_Feedback_Init =
        CITR_ac_ConstB.Constant_cr;

    /* SignalConversion generated from: '<S496>/PP2_LED_A_Feedback_FA_Init' */
    CITR_ac_B.OutportBufferForPP2_LED_A_Feedback_FA_In = false;

    /* SignalConversion generated from: '<S496>/PP2_LED_B_Feedback_Init' incorporates:
     *  Constant: '<S575>/Constant'
     */
    CITR_ac_B.OutportBufferForPP2_LED_B_Feedback_Init =
        CITR_ac_ConstB.Constant_am;

    /* SignalConversion generated from: '<S496>/PP2_LED_B_Feedback_FA_Init' */
    CITR_ac_B.OutportBufferForPP2_LED_B_Feedback_FA_In = false;

    /* SignalConversion generated from: '<S496>/PP2_LED_A_ FailStatus_Init' incorporates:
     *  Constant: '<S576>/Constant'
     */
    CITR_ac_B.OutportBufferForPP2_LED_A_FailStatus_Ini =
        CITR_ac_ConstB.Constant_nh;

    /* SignalConversion generated from: '<S496>/PP2_LED_A_ FailStatus_FA_Init' */
    CITR_ac_B.OutportBufferForPP2_LED_A_FailStatus_FA_ = false;

    /* SignalConversion generated from: '<S496>/PP2_LED_B_ FailStatus_Init' incorporates:
     *  Constant: '<S577>/Constant'
     */
    CITR_ac_B.OutportBufferForPP2_LED_B_FailStatus_Ini =
        CITR_ac_ConstB.Constant_kx;

    /* SignalConversion generated from: '<S496>/PP2_LED_B_ FailStatus_FA_Init' */
    CITR_ac_B.OutportBufferForPP2_LED_B_FailStatus_FA_ = false;

    /* SignalConversion generated from: '<S496>/PP2_LED_A_Color_Feedback_Init' incorporates:
     *  Constant: '<S579>/Constant'
     */
    CITR_ac_B.OutportBufferForPP2_LED_A_Color_Feedba_p =
        CITR_ac_ConstB.Constant_fr;

    /* SignalConversion generated from: '<S496>/PP2_LED_A_Color_Feedback_FA_Init' */
    CITR_ac_B.OutportBufferForPP2_LED_A_Color_Feedback = false;

    /* SignalConversion generated from: '<S496>/PP2_LED_B_Color_Feedback_Init' incorporates:
     *  Constant: '<S580>/Constant'
     */
    CITR_ac_B.OutportBufferForPP2_LED_B_Color_Feedba_g =
        CITR_ac_ConstB.Constant_je;

    /* SignalConversion generated from: '<S496>/PP2_LED_B_Color_Feedback_FA_Init' */
    CITR_ac_B.OutportBufferForPP2_LED_B_Color_Feedback = false;

    /* SignalConversion generated from: '<S496>/PP2_LIN_Checksum_Error_Init' */
    CITR_ac_B.OutportBufferForPP2_LIN_Checksum_Error_I = false;

    /* SignalConversion generated from: '<S496>/PP2_LIN_Checksum_Error_FA_Init' */
    CITR_ac_B.OutportBufferForPP2_LIN_Checksum_Error_F = false;

    /* SignalConversion generated from: '<S496>/PP2_LIN_Data_Error_Init' */
    CITR_ac_B.OutportBufferForPP2_LIN_Data_Error_Init = false;

    /* SignalConversion generated from: '<S496>/PP2_LIN_Data_Error_FA_Init' */
    CITR_ac_B.OutportBufferForPP2_LIN_Data_Error_FA_In = false;

    /* SignalConversion generated from: '<S496>/PP2_LIN_Parity_Error_Init' */
    CITR_ac_B.OutportBufferForPP2_LIN_Parity_Error_Ini = false;

    /* SignalConversion generated from: '<S496>/PP2_LIN_Parity_Error_FA_Init' */
    CITR_ac_B.OutportBufferForPP2_LIN_Parity_Error_FA_ = false;

    /* SignalConversion generated from: '<S496>/PP2_Gnd_Fault_Detected_Init' */
    CITR_ac_B.OutportBufferForPP2_Gnd_Fault_Detected_I = false;

    /* SignalConversion generated from: '<S496>/PP2_Gnd_Fault_Detected_FA_Init' */
    CITR_ac_B.OutportBufferForPP2_Gnd_Fault_Detected_F = false;

    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Outport: '<Root>/VeCITR_e_DVC_BCIM_BlinkRate' incorporates:
     *  SignalConversion generated from: '<S494>/BCIM_BlinkRate_Init'
     *  SignalConversion generated from: '<S4>/BCIM_BlinkRate_Init'
     */
    (void)Rte_Write_VeCITR_e_DVC_BCIM_BlinkRate_Value
        (CITR_ac_B.OutportBufferForBCIM_BlinkRate_Init);

    /* Outport: '<Root>/VeCITR_e_DVC_BCIM_Color' incorporates:
     *  SignalConversion generated from: '<S494>/BCIM_Color_Init'
     *  SignalConversion generated from: '<S4>/BCIM_Color_Init'
     */
    (void)Rte_Write_VeCITR_e_DVC_BCIM_Color_Value
        (CITR_ac_B.OutportBufferForBCIM_Color_Init);

    /* Outport: '<Root>/VeCITR_e_DVC_BCIM_IO' incorporates:
     *  SignalConversion generated from: '<S494>/BCIM_IO_Init'
     *  SignalConversion generated from: '<S4>/BCIM_IO_Init'
     */
    (void)Rte_Write_VeCITR_e_DVC_BCIM_IO_Value
        (CITR_ac_B.OutportBufferForBCIM_IO_Init);

    /* Outport: '<Root>/VeCITR_e_BCIM_Ind1_FailSts' incorporates:
     *  SignalConversion generated from: '<S495>/BCIM_Ind1_FailSts'
     *  SignalConversion generated from: '<S4>/BCIM_Ind1_FailSts'
     */
    (void)Rte_Write_VeCITR_e_BCIM_Ind1_FailSts_Value
        (CITR_ac_B.OutportBufferForBCIM_Ind1_FailSts);

    /* Outport: '<Root>/VeCITR_e_BCIM_Ind1_Fdbk' incorporates:
     *  SignalConversion generated from: '<S495>/BCIM_Ind1_Fdbk'
     *  SignalConversion generated from: '<S4>/BCIM_Ind1_Fdbk'
     */
    (void)Rte_Write_VeCITR_e_BCIM_Ind1_Fdbk_Value
        (CITR_ac_B.OutportBufferForBCIM_Ind1_Fdbk);

    /* Outport: '<Root>/VeCITR_b_BCIM_Ind1_FdbkFA' incorporates:
     *  SignalConversion generated from: '<S4>/BCIM_Ind1_FdbkFA'
     */
    (void)Rte_Write_VeCITR_b_BCIM_Ind1_FdbkFA_Value
        (CITR_ac_B.OutportBufferForBCIM_Ind1_FdbkFA);

    /* Outport: '<Root>/VeCITR_e_DVC_BCIM_Ind1' incorporates:
     *  SignalConversion generated from: '<S494>/BCIM_Ind1_Init'
     *  SignalConversion generated from: '<S4>/BCIM_Ind1_Init'
     */
    (void)Rte_Write_VeCITR_e_DVC_BCIM_Ind1_Value
        (CITR_ac_B.OutportBufferForBCIM_Ind1_Init);

    /* Outport: '<Root>/VeCITR_e_BCIM_Ind2_FailSts' incorporates:
     *  SignalConversion generated from: '<S495>/BCIM_Ind2_FailSts'
     *  SignalConversion generated from: '<S4>/BCIM_Ind2_FailSts'
     */
    (void)Rte_Write_VeCITR_e_BCIM_Ind2_FailSts_Value
        (CITR_ac_B.OutportBufferForBCIM_Ind2_FailSts);

    /* Outport: '<Root>/VeCITR_e_BCIM_Ind2_Fdbk' incorporates:
     *  SignalConversion generated from: '<S495>/BCIM_Ind2_Fdbk'
     *  SignalConversion generated from: '<S4>/BCIM_Ind2_Fdbk'
     */
    (void)Rte_Write_VeCITR_e_BCIM_Ind2_Fdbk_Value
        (CITR_ac_B.OutportBufferForBCIM_Ind2_Fdbk);

    /* Outport: '<Root>/VeCITR_b_BCIM_Ind2_FdbkFA' incorporates:
     *  SignalConversion generated from: '<S4>/BCIM_Ind2_FdbkFA'
     */
    (void)Rte_Write_VeCITR_b_BCIM_Ind2_FdbkFA_Value
        (CITR_ac_B.OutportBufferForBCIM_Ind2_FdbkFA);

    /* Outport: '<Root>/VeCITR_e_DVC_BCIM_Ind2' incorporates:
     *  SignalConversion generated from: '<S494>/BCIM_Ind2_Init'
     *  SignalConversion generated from: '<S4>/BCIM_Ind2_Init'
     */
    (void)Rte_Write_VeCITR_e_DVC_BCIM_Ind2_Value
        (CITR_ac_B.OutportBufferForBCIM_Ind2_Init);

    /* Outport: '<Root>/VeCITR_e_BCIM_Ind3_FailSts' incorporates:
     *  SignalConversion generated from: '<S495>/BCIM_Ind3_FailSts'
     *  SignalConversion generated from: '<S4>/BCIM_Ind3_FailSts'
     */
    (void)Rte_Write_VeCITR_e_BCIM_Ind3_FailSts_Value
        (CITR_ac_B.OutportBufferForBCIM_Ind3_FailSts);

    /* Outport: '<Root>/VeCITR_e_BCIM_Ind3_Fdbk' incorporates:
     *  SignalConversion generated from: '<S495>/BCIM_Ind3_Fdbk'
     *  SignalConversion generated from: '<S4>/BCIM_Ind3_Fdbk'
     */
    (void)Rte_Write_VeCITR_e_BCIM_Ind3_Fdbk_Value
        (CITR_ac_B.OutportBufferForBCIM_Ind3_Fdbk);

    /* Outport: '<Root>/VeCITR_b_BCIM_Ind3_FdbkFA' incorporates:
     *  SignalConversion generated from: '<S4>/BCIM_Ind3_FdbkFA'
     */
    (void)Rte_Write_VeCITR_b_BCIM_Ind3_FdbkFA_Value
        (CITR_ac_B.OutportBufferForBCIM_Ind3_FdbkFA);

    /* Outport: '<Root>/VeCITR_e_DVC_BCIM_Ind3' incorporates:
     *  SignalConversion generated from: '<S494>/BCIM_Ind3_Init'
     *  SignalConversion generated from: '<S4>/BCIM_Ind3_Init'
     */
    (void)Rte_Write_VeCITR_e_DVC_BCIM_Ind3_Value
        (CITR_ac_B.OutportBufferForBCIM_Ind3_Init);

    /* Outport: '<Root>/VeCITR_e_BCIM_Ind4_FailSts' incorporates:
     *  SignalConversion generated from: '<S495>/BCIM_Ind4_FailSts'
     *  SignalConversion generated from: '<S4>/BCIM_Ind4_FailSts'
     */
    (void)Rte_Write_VeCITR_e_BCIM_Ind4_FailSts_Value
        (CITR_ac_B.OutportBufferForBCIM_Ind4_FailSts);

    /* Outport: '<Root>/VeCITR_e_BCIM_Ind4_Fdbk' incorporates:
     *  SignalConversion generated from: '<S495>/BCIM_Ind4_Fdbk'
     *  SignalConversion generated from: '<S4>/BCIM_Ind4_Fdbk'
     */
    (void)Rte_Write_VeCITR_e_BCIM_Ind4_Fdbk_Value
        (CITR_ac_B.OutportBufferForBCIM_Ind4_Fdbk);

    /* Outport: '<Root>/VeCITR_b_BCIM_Ind4_FdbkFA' incorporates:
     *  SignalConversion generated from: '<S4>/BCIM_Ind4_FdbkFA'
     */
    (void)Rte_Write_VeCITR_b_BCIM_Ind4_FdbkFA_Value
        (CITR_ac_B.OutportBufferForBCIM_Ind4_FdbkFA);

    /* Outport: '<Root>/VeCITR_e_DVC_BCIM_Ind4' incorporates:
     *  SignalConversion generated from: '<S494>/BCIM_Ind4_Init'
     *  SignalConversion generated from: '<S4>/BCIM_Ind4_Init'
     */
    (void)Rte_Write_VeCITR_e_DVC_BCIM_Ind4_Value
        (CITR_ac_B.OutportBufferForBCIM_Ind4_Init);

    /* Outport: '<Root>/VeCITR_e_BCIM_Ind5_FailSts' incorporates:
     *  SignalConversion generated from: '<S495>/BCIM_Ind5_FailSts'
     *  SignalConversion generated from: '<S4>/BCIM_Ind5_FailSts'
     */
    (void)Rte_Write_VeCITR_e_BCIM_Ind5_FailSts_Value
        (CITR_ac_B.OutportBufferForBCIM_Ind5_FailSts);

    /* Outport: '<Root>/VeCITR_e_BCIM_Ind5_Fdbk' incorporates:
     *  SignalConversion generated from: '<S495>/BCIM_Ind5_Fdbk'
     *  SignalConversion generated from: '<S4>/BCIM_Ind5_Fdbk'
     */
    (void)Rte_Write_VeCITR_e_BCIM_Ind5_Fdbk_Value
        (CITR_ac_B.OutportBufferForBCIM_Ind5_Fdbk);

    /* Outport: '<Root>/VeCITR_b_BCIM_Ind5_FdbkFA' incorporates:
     *  SignalConversion generated from: '<S4>/BCIM_Ind5_FdbkFA'
     */
    (void)Rte_Write_VeCITR_b_BCIM_Ind5_FdbkFA_Value
        (CITR_ac_B.OutportBufferForBCIM_Ind5_FdbkFA);

    /* Outport: '<Root>/VeCITR_e_DVC_BCIM_Ind5' incorporates:
     *  SignalConversion generated from: '<S494>/BCIM_Ind5_Init'
     *  SignalConversion generated from: '<S4>/BCIM_Ind5_Init'
     */
    (void)Rte_Write_VeCITR_e_DVC_BCIM_Ind5_Value
        (CITR_ac_B.OutportBufferForBCIM_Ind5_Init);

    /* Outport: '<Root>/VeCITR_e_BCIM_Ind_Color_Fdbk' incorporates:
     *  SignalConversion generated from: '<S495>/BCIM_Ind_Color_Fdbk'
     *  SignalConversion generated from: '<S4>/BCIM_Ind_Color_Fdbk'
     */
    (void)Rte_Write_VeCITR_e_BCIM_Ind_Color_Fdbk_Value
        (CITR_ac_B.OutportBufferForBCIM_Ind_Color_Fdbk);

    /* Outport: '<Root>/VeCITR_b_BCIM_Ind_Color_FdbkFA' incorporates:
     *  SignalConversion generated from: '<S4>/BCIM_Ind_Color_FdbkFA'
     */
    (void)Rte_Write_VeCITR_b_BCIM_Ind_Color_FdbkFA_Value
        (CITR_ac_B.OutportBufferForBCIM_Ind_Color_FdbkFA);

    /* Outport: '<Root>/VeCITR_b_BCIM_LINChkSumErr' incorporates:
     *  SignalConversion generated from: '<S4>/BCIM_LINChkSumErr_Init'
     */
    (void)Rte_Write_VeCITR_b_BCIM_LINChkSumErr_Value
        (CITR_ac_B.OutportBufferForBCIM_LINChkSumErr_Init);

    /* Outport: '<Root>/VeCITR_b_BCIM_LINDataErr' incorporates:
     *  SignalConversion generated from: '<S4>/BCIM_LINDataErr_Init'
     */
    (void)Rte_Write_VeCITR_b_BCIM_LINDataErr_Value
        (CITR_ac_B.OutportBufferForBCIM_LINDataErr_Init);

    /* Outport: '<Root>/VeCITR_b_BCIM_LINParityErr' incorporates:
     *  SignalConversion generated from: '<S4>/BCIM_LINParityErr_Init'
     */
    (void)Rte_Write_VeCITR_b_BCIM_LINParityErr_Value
        (CITR_ac_B.OutportBufferForBCIM_LINParityErr_Init);

    /* Outport: '<Root>/VeCITR_b_BCIM_OverTemp' incorporates:
     *  SignalConversion generated from: '<S4>/BCIM_OverTemp_Init'
     */
    (void)Rte_Write_VeCITR_b_BCIM_OverTemp_Value
        (CITR_ac_B.OutportBufferForBCIM_OverTemp_Init);

    /* Outport: '<Root>/VeCITR_b_BCIM_UnderVolt' incorporates:
     *  SignalConversion generated from: '<S4>/BCIM_UnderVolt_Init'
     */
    (void)Rte_Write_VeCITR_b_BCIM_UnderVolt_Value
        (CITR_ac_B.OutportBufferForBCIM_UnderVolt_Init);

    /* Outport: '<Root>/VeCITR_e_CPIM_BlueLED_FailSts' incorporates:
     *  SignalConversion generated from: '<S495>/CPIM_BlueLED_FailSts_Init'
     *  SignalConversion generated from: '<S4>/CPIM_BlueLED_FailSts_Init'
     */
    (void)Rte_Write_VeCITR_e_CPIM_BlueLED_FailSts_Value
        (CITR_ac_B.OutportBufferForCPIM_BlueLED_FailSts_Ini);

    /* Outport: '<Root>/VeCITR_b_CPIM_BlueLED_Sts' incorporates:
     *  SignalConversion generated from: '<S4>/CPIM_BlueLED_Sts_Init'
     */
    (void)Rte_Write_VeCITR_b_CPIM_BlueLED_Sts_Value
        (CITR_ac_B.OutportBufferForCPIM_BlueLED_Sts_Init);

    /* Outport: '<Root>/VeCITR_e_CPIM_GreenLED_FailSts' incorporates:
     *  SignalConversion generated from: '<S495>/CPIM_GreenLED_FailSts_Init'
     *  SignalConversion generated from: '<S4>/CPIM_GreenLED_FailSts_Init'
     */
    (void)Rte_Write_VeCITR_e_CPIM_GreenLED_FailSts_Value
        (CITR_ac_B.OutportBufferForCPIM_GreenLED_FailSts_In);

    /* Outport: '<Root>/VeCITR_b_CPIM_GreenLED_Sts' incorporates:
     *  SignalConversion generated from: '<S4>/CPIM_GreenLED_Sts_Init'
     */
    (void)Rte_Write_VeCITR_b_CPIM_GreenLED_Sts_Value
        (CITR_ac_B.OutportBufferForCPIM_GreenLED_Sts_Init);

    /* Outport: '<Root>/VeCITR_e_DVC_CPIM_IO' incorporates:
     *  SignalConversion generated from: '<S494>/CPIM_IO_Init'
     *  SignalConversion generated from: '<S4>/CPIM_IO_Init'
     */
    (void)Rte_Write_VeCITR_e_DVC_CPIM_IO_Value
        (CITR_ac_B.OutportBufferForCPIM_IO_Init);

    /* Outport: '<Root>/VeCITR_b_CPIM_Icon1_FailSts' incorporates:
     *  SignalConversion generated from: '<S4>/CPIM_Icon1_FailSts'
     */
    (void)Rte_Write_VeCITR_b_CPIM_Icon1_FailSts_Value
        (CITR_ac_B.OutportBufferForCPIM_Icon1_FailSts);

    /* Outport: '<Root>/VeCITR_e_CPIM_Icon1_Sts' incorporates:
     *  SignalConversion generated from: '<S495>/CPIM_Icon1_Sts'
     *  SignalConversion generated from: '<S4>/CPIM_Icon1_Sts'
     */
    (void)Rte_Write_VeCITR_e_CPIM_Icon1_Sts_Value
        (CITR_ac_B.OutportBufferForCPIM_Icon1_Sts);

    /* Outport: '<Root>/VeCITR_b_CPIM_Icon1_StsFA' incorporates:
     *  SignalConversion generated from: '<S4>/CPIM_Icon1_StsFA'
     */
    (void)Rte_Write_VeCITR_b_CPIM_Icon1_StsFA_Value
        (CITR_ac_B.OutportBufferForCPIM_Icon1_StsFA);

    /* Outport: '<Root>/VeCITR_b_CPIM_Icon2_FailSts' incorporates:
     *  SignalConversion generated from: '<S4>/CPIM_Icon2_FailSts'
     */
    (void)Rte_Write_VeCITR_b_CPIM_Icon2_FailSts_Value
        (CITR_ac_B.OutportBufferForCPIM_Icon2_FailSts);

    /* Outport: '<Root>/VeCITR_e_CPIM_Icon2_Sts' incorporates:
     *  SignalConversion generated from: '<S495>/CPIM_Icon2_Sts'
     *  SignalConversion generated from: '<S4>/CPIM_Icon2_Sts'
     */
    (void)Rte_Write_VeCITR_e_CPIM_Icon2_Sts_Value
        (CITR_ac_B.OutportBufferForCPIM_Icon2_Sts);

    /* Outport: '<Root>/VeCITR_b_CPIM_Icon2_StsFA' incorporates:
     *  SignalConversion generated from: '<S4>/CPIM_Icon2_StsFA'
     */
    (void)Rte_Write_VeCITR_b_CPIM_Icon2_StsFA_Value
        (CITR_ac_B.OutportBufferForCPIM_Icon2_StsFA);

    /* Outport: '<Root>/VeCITR_e_CPIM_Ind1_FailSts' incorporates:
     *  SignalConversion generated from: '<S495>/CPIM_Ind1_FailSts'
     *  SignalConversion generated from: '<S4>/CPIM_Ind1_FailSts'
     */
    (void)Rte_Write_VeCITR_e_CPIM_Ind1_FailSts_Value
        (CITR_ac_B.OutportBufferForCPIM_Ind1_FailSts);

    /* Outport: '<Root>/VeCITR_e_CPIM_Ind1_Fdbk' incorporates:
     *  SignalConversion generated from: '<S495>/CPIM_Ind1_Fdbk'
     *  SignalConversion generated from: '<S4>/CPIM_Ind1_Fdbk'
     */
    (void)Rte_Write_VeCITR_e_CPIM_Ind1_Fdbk_Value
        (CITR_ac_B.OutportBufferForCPIM_Ind1_Fdbk);

    /* Outport: '<Root>/VeCITR_b_CPIM_Ind1_FdbkFA' incorporates:
     *  SignalConversion generated from: '<S4>/CPIM_Ind1_FdbkFA'
     */
    (void)Rte_Write_VeCITR_b_CPIM_Ind1_FdbkFA_Value
        (CITR_ac_B.OutportBufferForCPIM_Ind1_FdbkFA);

    /* Outport: '<Root>/VeCITR_e_CPIM_Ind2_FailSts' incorporates:
     *  SignalConversion generated from: '<S495>/CPIM_Ind2_FailSts'
     *  SignalConversion generated from: '<S4>/CPIM_Ind2_FailSts'
     */
    (void)Rte_Write_VeCITR_e_CPIM_Ind2_FailSts_Value
        (CITR_ac_B.OutportBufferForCPIM_Ind2_FailSts);

    /* Outport: '<Root>/VeCITR_e_CPIM_Ind2_Fdbk' incorporates:
     *  SignalConversion generated from: '<S495>/CPIM_Ind2_Fdbk'
     *  SignalConversion generated from: '<S4>/CPIM_Ind2_Fdbk'
     */
    (void)Rte_Write_VeCITR_e_CPIM_Ind2_Fdbk_Value
        (CITR_ac_B.OutportBufferForCPIM_Ind2_Fdbk);

    /* Outport: '<Root>/VeCITR_b_CPIM_Ind2_FdbkFA' incorporates:
     *  SignalConversion generated from: '<S4>/CPIM_Ind2_FdbkFA'
     */
    (void)Rte_Write_VeCITR_b_CPIM_Ind2_FdbkFA_Value
        (CITR_ac_B.OutportBufferForCPIM_Ind2_FdbkFA);

    /* Outport: '<Root>/VeCITR_e_CPIM_Ind3_FailSts' incorporates:
     *  SignalConversion generated from: '<S495>/CPIM_Ind3_FailSts'
     *  SignalConversion generated from: '<S4>/CPIM_Ind3_FailSts'
     */
    (void)Rte_Write_VeCITR_e_CPIM_Ind3_FailSts_Value
        (CITR_ac_B.OutportBufferForCPIM_Ind3_FailSts);

    /* Outport: '<Root>/VeCITR_e_CPIM_Ind3_Fdbk' incorporates:
     *  SignalConversion generated from: '<S495>/CPIM_Ind3_Fdbk'
     *  SignalConversion generated from: '<S4>/CPIM_Ind3_Fdbk'
     */
    (void)Rte_Write_VeCITR_e_CPIM_Ind3_Fdbk_Value
        (CITR_ac_B.OutportBufferForCPIM_Ind3_Fdbk);

    /* Outport: '<Root>/VeCITR_b_CPIM_Ind3_FdbkFA' incorporates:
     *  SignalConversion generated from: '<S4>/CPIM_Ind3_FdbkFA'
     */
    (void)Rte_Write_VeCITR_b_CPIM_Ind3_FdbkFA_Value
        (CITR_ac_B.OutportBufferForCPIM_Ind3_FdbkFA);

    /* Outport: '<Root>/VeCITR_e_CPIM_Ind4_FailSts' incorporates:
     *  SignalConversion generated from: '<S495>/CPIM_Ind4_FailSts'
     *  SignalConversion generated from: '<S4>/CPIM_Ind4_FailSts'
     */
    (void)Rte_Write_VeCITR_e_CPIM_Ind4_FailSts_Value
        (CITR_ac_B.OutportBufferForCPIM_Ind4_FailSts);

    /* Outport: '<Root>/VeCITR_e_CPIM_Ind4_Fdbk' incorporates:
     *  SignalConversion generated from: '<S495>/CPIM_Ind4_Fdbk'
     *  SignalConversion generated from: '<S4>/CPIM_Ind4_Fdbk'
     */
    (void)Rte_Write_VeCITR_e_CPIM_Ind4_Fdbk_Value
        (CITR_ac_B.OutportBufferForCPIM_Ind4_Fdbk);

    /* Outport: '<Root>/VeCITR_b_CPIM_Ind4_FdbkFA' incorporates:
     *  SignalConversion generated from: '<S4>/CPIM_Ind4_FdbkFA'
     */
    (void)Rte_Write_VeCITR_b_CPIM_Ind4_FdbkFA_Value
        (CITR_ac_B.OutportBufferForCPIM_Ind4_FdbkFA);

    /* Outport: '<Root>/VeCITR_e_CPIM_Ind5_FailSts' incorporates:
     *  SignalConversion generated from: '<S495>/CPIM_Ind5_FailSts'
     *  SignalConversion generated from: '<S4>/CPIM_Ind5_FailSts'
     */
    (void)Rte_Write_VeCITR_e_CPIM_Ind5_FailSts_Value
        (CITR_ac_B.OutportBufferForCPIM_Ind5_FailSts);

    /* Outport: '<Root>/VeCITR_e_CPIM_Ind5_Fdbk' incorporates:
     *  SignalConversion generated from: '<S495>/CPIM_Ind5_Fdbk'
     *  SignalConversion generated from: '<S4>/CPIM_Ind5_Fdbk'
     */
    (void)Rte_Write_VeCITR_e_CPIM_Ind5_Fdbk_Value
        (CITR_ac_B.OutportBufferForCPIM_Ind5_Fdbk);

    /* Outport: '<Root>/VeCITR_b_CPIM_Ind5_FdbkFA' incorporates:
     *  SignalConversion generated from: '<S4>/CPIM_Ind5_FdbkFA'
     */
    (void)Rte_Write_VeCITR_b_CPIM_Ind5_FdbkFA_Value
        (CITR_ac_B.OutportBufferForCPIM_Ind5_FdbkFA);

    /* Outport: '<Root>/VeCITR_e_CPIM_Ind_Color_Fdbk' incorporates:
     *  SignalConversion generated from: '<S495>/CPIM_Ind_Ind_Color_Fdbk'
     *  SignalConversion generated from: '<S4>/CPIM_Ind_Ind_Color_Fdbk'
     */
    (void)Rte_Write_VeCITR_e_CPIM_Ind_Color_Fdbk_Value
        (CITR_ac_B.OutportBufferForCPIM_Ind_Ind_Color_Fdbk);

    /* Outport: '<Root>/VeCITR_b_CPIM_Ind_Color_FdbkFA' incorporates:
     *  SignalConversion generated from: '<S4>/CPIM_Ind_Ind_Color_FdbkFA'
     */
    (void)Rte_Write_VeCITR_b_CPIM_Ind_Color_FdbkFA_Value
        (CITR_ac_B.OutportBufferForCPIM_Ind_Ind_Color_FdbkF);

    /* Outport: '<Root>/VeCITR_b_CPIM_LINChkSumErr' incorporates:
     *  SignalConversion generated from: '<S4>/CPIM_LINChkSumErr_Init'
     */
    (void)Rte_Write_VeCITR_b_CPIM_LINChkSumErr_Value
        (CITR_ac_B.OutportBufferForCPIM_LINChkSumErr_Init);

    /* Outport: '<Root>/VeCITR_b_CPIM_LINDataErr' incorporates:
     *  SignalConversion generated from: '<S4>/CPIM_LINDataErr_Init'
     */
    (void)Rte_Write_VeCITR_b_CPIM_LINDataErr_Value
        (CITR_ac_B.OutportBufferForCPIM_LINDataErr_Init);

    /* Outport: '<Root>/VeCITR_b_CPIM_LINParityErr' incorporates:
     *  SignalConversion generated from: '<S4>/CPIM_LINParityErr_Init'
     */
    (void)Rte_Write_VeCITR_b_CPIM_LINParityErr_Value
        (CITR_ac_B.OutportBufferForCPIM_LINParityErr_Init);

    /* Outport: '<Root>/VeCITR_b_CPIM_OverTemp' incorporates:
     *  SignalConversion generated from: '<S4>/CPIM_OverTemp_Init'
     */
    (void)Rte_Write_VeCITR_b_CPIM_OverTemp_Value
        (CITR_ac_B.OutportBufferForCPIM_OverTemp_Init);

    /* Outport: '<Root>/VeCITR_e_CPIM_RedLED_FailSts' incorporates:
     *  SignalConversion generated from: '<S495>/CPIM_RedLED_FailSts_Init'
     *  SignalConversion generated from: '<S4>/CPIM_RedLED_FailSts_Init'
     */
    (void)Rte_Write_VeCITR_e_CPIM_RedLED_FailSts_Value
        (CITR_ac_B.OutportBufferForCPIM_RedLED_FailSts_Init);

    /* Outport: '<Root>/VeCITR_b_CPIM_RedLED_Sts' incorporates:
     *  SignalConversion generated from: '<S4>/CPIM_RedLED_Sts_Init'
     */
    (void)Rte_Write_VeCITR_b_CPIM_RedLED_Sts_Value
        (CITR_ac_B.OutportBufferForCPIM_RedLED_Sts_Init);

    /* Outport: '<Root>/VeCITR_b_CPIM_UnderVolt' incorporates:
     *  SignalConversion generated from: '<S4>/CPIM_UnderVolt_Init'
     */
    (void)Rte_Write_VeCITR_b_CPIM_UnderVolt_Value
        (CITR_ac_B.OutportBufferForCPIM_UnderVolt_Init);

    /* Outport: '<Root>/VeCITR_b_ChargingDestinationPwr_FA' incorporates:
     *  SignalConversion generated from: '<S4>/ChargingDestinationPwr_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_ChargingDestinationPwr_FA_Value
        (CITR_ac_B.OutportBufferForChargingDestinationPwr_F);

    /* Outport: '<Root>/VeCITR_P_ChargingDestinationPwr' incorporates:
     *  SignalConversion generated from: '<S4>/ChargingDestinationPwr_Init'
     */
    (void)Rte_Write_VeCITR_P_ChargingDestinationPwr_Value
        (CITR_ac_B.OutportBufferForChargingDestinationPwr_I);

    /* Outport: '<Root>/VeCITR_b_ChargeNow' incorporates:
     *  SignalConversion generated from: '<S4>/ChrgNow_Init'
     */
    (void)Rte_Write_VeCITR_b_ChargeNow_Value
        (CITR_ac_B.OutportBufferForChrgNow_Init);

    /* Outport: '<Root>/VeCITR_b_ChrgPortButton_FailSts' incorporates:
     *  SignalConversion generated from: '<S4>/ChrgPortButton_FailSts_Init'
     */
    (void)Rte_Write_VeCITR_b_ChrgPortButton_FailSts_Value
        (CITR_ac_B.OutportBufferForChrgPortButton_FailSts_I);

    /* Outport: '<Root>/VeCITR_b_ChrgPortButton_Sts' incorporates:
     *  SignalConversion generated from: '<S4>/ChrgPortButton_Sts_Init'
     */
    (void)Rte_Write_VeCITR_b_ChrgPortButton_Sts_Value
        (CITR_ac_B.OutportBufferForChrgPortButton_Sts_Init);

    /* Outport: '<Root>/VeCITR_d_ChrgPortHbridgeFlt' incorporates:
     *  SignalConversion generated from: '<S4>/ChrgPortHbridgeFlt_Init'
     */
    (void)Rte_Write_VeCITR_d_ChrgPortHbridgeFlt_Value
        (CITR_ac_B.OutportBufferForChrgPortHbridgeFlt_Init);

    /* Outport: '<Root>/VeCITR_b_ChrgPortLock_FailStsFA' incorporates:
     *  SignalConversion generated from: '<S4>/ChrgPortLock_FailStsFA'
     */
    (void)Rte_Write_VeCITR_b_ChrgPortLock_FailStsFA_Value
        (CITR_ac_B.OutportBufferForChrgPortLock_FailStsFA);

    /* Outport: '<Root>/VeCITR_e_CPIM_ChrgPortLock_FailSts' incorporates:
     *  SignalConversion generated from: '<S493>/ChrgPortLock_FailSts_Init'
     *  SignalConversion generated from: '<S4>/ChrgPortLock_FailSts_Init'
     */
    (void)Rte_Write_VeCITR_e_CPIM_ChrgPortLock_FailSts_Value
        (CITR_ac_B.OutportBufferForChrgPortLock_FailSts_Ini);

    /* Outport: '<Root>/VeCITR_b_ChrgPortLock_StsB_FA' incorporates:
     *  SignalConversion generated from: '<S4>/ChrgPortLock_StsB_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_ChrgPortLock_StsB_FA_Value
        (CITR_ac_B.OutportBufferForChrgPortLock_StsB_FA_Ini);

    /* Outport: '<Root>/VeCITR_U_ChrgPortLock_StsB' incorporates:
     *  SignalConversion generated from: '<S4>/ChrgPortLock_StsB_Init'
     */
    (void)Rte_Write_VeCITR_U_ChrgPortLock_StsB_Value
        (CITR_ac_B.OutportBufferForChrgPortLock_StsB_Init);

    /* Outport: '<Root>/VeCITR_b_ChrgPortLock_StsC_FA' incorporates:
     *  SignalConversion generated from: '<S4>/ChrgPortLock_StsC_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_ChrgPortLock_StsC_FA_Value
        (CITR_ac_B.OutportBufferForChrgPortLock_StsC_FA_Ini);

    /* Outport: '<Root>/VeCITR_b_ChrgPortLock_StsC' incorporates:
     *  SignalConversion generated from: '<S4>/ChrgPortLock_StsC_Init'
     */
    (void)Rte_Write_VeCITR_b_ChrgPortLock_StsC_Value
        (CITR_ac_B.OutportBufferForChrgPortLock_StsC_Init);

    /* Outport: '<Root>/VeCITR_b_ChrgPort_BCM_Cmd_Out' incorporates:
     *  SignalConversion generated from: '<S4>/ChrgPort_BCM_Cmd_Init'
     */
    (void)Rte_Write_VeCITR_b_ChrgPort_BCM_Cmd_Out_Value
        (CITR_ac_B.OutportBufferForChrgPort_BCM_Cmd_Init);

    /* Outport: '<Root>/VeCITR_b_ChrgPort_BCM_Cmd_Rcvd' incorporates:
     *  SignalConversion generated from: '<S4>/ChrgPort_BCM_Cmd_SgnlRcvd_Init'
     */
    (void)Rte_Write_VeCITR_b_ChrgPort_BCM_Cmd_Rcvd_Value
        (CITR_ac_B.OutportBufferForChrgPort_BCM_Cmd_SgnlRcv);

    /* Outport: '<Root>/VeCITR_b_ChrgrFlapSts_FA' incorporates:
     *  SignalConversion generated from: '<S4>/ChrgrFlapSts_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_ChrgrFlapSts_FA_Value
        (CITR_ac_B.OutportBufferForChrgrFlapSts_FA_Init);

    /* Outport: '<Root>/VeCITR_e_ChrgrFlapSts' incorporates:
     *  SignalConversion generated from: '<S493>/ChrgrFlapSts_Init'
     *  SignalConversion generated from: '<S4>/ChrgrFlapSts_Init'
     */
    (void)Rte_Write_VeCITR_e_ChrgrFlapSts_Value
        (CITR_ac_B.OutportBufferForChrgrFlapSts_Init);

    /* Outport: '<Root>/VeCITR_b_CoopCh_ChrgCmdFA' incorporates:
     *  SignalConversion generated from: '<S4>/CoopCh_ChrgCmd_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_CoopCh_ChrgCmdFA_Value
        (CITR_ac_B.OutportBufferForCoopCh_ChrgCmd_FA_Init);

    /* Outport: '<Root>/VeCITR_e_CoopCh_ChrgCmd' incorporates:
     *  SignalConversion generated from: '<S489>/CoopCh_ChrgCmd_Init'
     *  SignalConversion generated from: '<S4>/CoopCh_ChrgCmd_Init'
     */
    (void)Rte_Write_VeCITR_e_CoopCh_ChrgCmd_Value
        (CITR_ac_B.OutportBufferForCoopCh_ChrgCmd_Init);

    /* Outport: '<Root>/VeCITR_b_CoopCh_VehLocationFA' incorporates:
     *  SignalConversion generated from: '<S4>/CoopCh_VehLocation_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_CoopCh_VehLocationFA_Value
        (CITR_ac_B.OutportBufferForCoopCh_VehLocation_FA_In);

    /* Outport: '<Root>/VeCITR_b_CoopCh_VehLocation' incorporates:
     *  SignalConversion generated from: '<S4>/CoopCh_VehLocation_Init'
     */
    (void)Rte_Write_VeCITR_b_CoopCh_VehLocation_Value
        (CITR_ac_B.OutportBufferForCoopCh_VehLocation_Init);

    /* Outport: '<Root>/VeCITR_e_DCChrg_TestSts' incorporates:
     *  SignalConversion generated from: '<S493>/DCChrg_TestSts_Init'
     *  SignalConversion generated from: '<S4>/DCChrg_TestSts_Init'
     */
    (void)Rte_Write_VeCITR_e_DCChrg_TestSts_Value
        (CITR_ac_B.OutportBufferForDCChrg_TestSts_Init);

    /* Outport: '<Root>/VeCITR_Cnt_DCEOL_SgnlRcvd' incorporates:
     *  SignalConversion generated from: '<S4>/DCEOL_SgnlRcvd_Init'
     */
    (void)Rte_Write_VeCITR_Cnt_DCEOL_SgnlRcvd_Value
        (CITR_ac_B.OutportBufferForDCEOL_SgnlRcvd_Init);

    /* Outport: '<Root>/VeCITR_b_DC_PwrLev_FA' incorporates:
     *  SignalConversion generated from: '<S4>/DC_PwrLev_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_DC_PwrLev_FA_Value
        (CITR_ac_B.OutportBufferForDC_PwrLev_FA_Init);

    /* Outport: '<Root>/VeCITR_b_DC_PwrLev' incorporates:
     *  SignalConversion generated from: '<S4>/DC_PwrLev_Init'
     */
    (void)Rte_Write_VeCITR_b_DC_PwrLev_Value
        (CITR_ac_B.OutportBufferForDC_PwrLev_Init);

    /* Outport: '<Root>/VeCITR_b_DC_PwrLev_SgnlRcvd' incorporates:
     *  SignalConversion generated from: '<S4>/DC_PwrLev_SgnlRcvd_Init'
     */
    (void)Rte_Write_VeCITR_b_DC_PwrLev_SgnlRcvd_Value
        (CITR_ac_B.OutportBufferForDC_PwrLev_SgnlRcvd_Init);

    /* Outport: '<Root>/VeCITR_e_DVC_CPIMBlinkRate' incorporates:
     *  SignalConversion generated from: '<S494>/DVC_CPIM_BlinkRate_Init'
     *  SignalConversion generated from: '<S4>/DVC_CPIM_BlinkRate_Init'
     */
    (void)Rte_Write_VeCITR_e_DVC_CPIMBlinkRate_Value
        (CITR_ac_B.OutportBufferForDVC_CPIM_BlinkRate_Init);

    /* Outport: '<Root>/VeCITR_e_DVC_CPIM_Color' incorporates:
     *  SignalConversion generated from: '<S494>/DVC_CPIM_Color_Init'
     *  SignalConversion generated from: '<S4>/DVC_CPIM_Color_Init'
     */
    (void)Rte_Write_VeCITR_e_DVC_CPIM_Color_Value
        (CITR_ac_B.OutportBufferForDVC_CPIM_Color_Init);

    /* Outport: '<Root>/VeCITR_e_DVC_CPIM_IconI1' incorporates:
     *  SignalConversion generated from: '<S494>/DVC_CPIM_IconI1_Init'
     *  SignalConversion generated from: '<S4>/DVC_CPIM_IconI1_Init'
     */
    (void)Rte_Write_VeCITR_e_DVC_CPIM_IconI1_Value
        (CITR_ac_B.OutportBufferForDVC_CPIM_IconI1_Init);

    /* Outport: '<Root>/VeCITR_e_DVC_CPIM_IconI2' incorporates:
     *  SignalConversion generated from: '<S494>/DVC_CPIM_IconI2_Init'
     *  SignalConversion generated from: '<S4>/DVC_CPIM_IconI2_Init'
     */
    (void)Rte_Write_VeCITR_e_DVC_CPIM_IconI2_Value
        (CITR_ac_B.OutportBufferForDVC_CPIM_IconI2_Init);

    /* Outport: '<Root>/VeCITR_e_DVC_CPIM_Ind1' incorporates:
     *  SignalConversion generated from: '<S494>/DVC_CPIM_Ind1_Init'
     *  SignalConversion generated from: '<S4>/DVC_CPIM_Ind1_Init'
     */
    (void)Rte_Write_VeCITR_e_DVC_CPIM_Ind1_Value
        (CITR_ac_B.OutportBufferForDVC_CPIM_Ind1_Init);

    /* Outport: '<Root>/VeCITR_e_DVC_CPIM_Ind2' incorporates:
     *  SignalConversion generated from: '<S494>/DVC_CPIM_Ind2_Init'
     *  SignalConversion generated from: '<S4>/DVC_CPIM_Ind2_Init'
     */
    (void)Rte_Write_VeCITR_e_DVC_CPIM_Ind2_Value
        (CITR_ac_B.OutportBufferForDVC_CPIM_Ind2_Init);

    /* Outport: '<Root>/VeCITR_e_DVC_CPIM_Ind3' incorporates:
     *  SignalConversion generated from: '<S494>/DVC_CPIM_Ind3_Init'
     *  SignalConversion generated from: '<S4>/DVC_CPIM_Ind3_Init'
     */
    (void)Rte_Write_VeCITR_e_DVC_CPIM_Ind3_Value
        (CITR_ac_B.OutportBufferForDVC_CPIM_Ind3_Init);

    /* Outport: '<Root>/VeCITR_e_DVC_CPIM_Ind4' incorporates:
     *  SignalConversion generated from: '<S494>/DVC_CPIM_Ind4_Init'
     *  SignalConversion generated from: '<S4>/DVC_CPIM_Ind4_Init'
     */
    (void)Rte_Write_VeCITR_e_DVC_CPIM_Ind4_Value
        (CITR_ac_B.OutportBufferForDVC_CPIM_Ind4_Init);

    /* Outport: '<Root>/VeCITR_e_DVC_CPIM_Ind5' incorporates:
     *  SignalConversion generated from: '<S494>/DVC_CPIM_Ind5_Init'
     *  SignalConversion generated from: '<S4>/DVC_CPIM_Ind5_Init'
     */
    (void)Rte_Write_VeCITR_e_DVC_CPIM_Ind5_Value
        (CITR_ac_B.OutportBufferForDVC_CPIM_Ind5_Init);

    /* Outport: '<Root>/VeCITR_b_DVC_ChrgPortRq' incorporates:
     *  SignalConversion generated from: '<S4>/DVC_ChrgPortRq_Init'
     */
    (void)Rte_Write_VeCITR_b_DVC_ChrgPortRq_Value
        (CITR_ac_B.OutportBufferForDVC_ChrgPortRq_Init);

    /* Outport: '<Root>/VeCITR_e_DVC_ChrgPort_IO' incorporates:
     *  SignalConversion generated from: '<S493>/DVC_ChrgPort_IO_Init'
     *  SignalConversion generated from: '<S4>/DVC_ChrgPort_IO_Init'
     */
    (void)Rte_Write_VeCITR_e_DVC_ChrgPort_IO_Value
        (CITR_ac_B.OutportBufferForDVC_ChrgPort_IO_Init);

    /* Outport: '<Root>/VeCITR_b_DateTmDay_FA' incorporates:
     *  SignalConversion generated from: '<S4>/DateTmDay_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_DateTmDay_FA_Value
        (CITR_ac_B.OutportBufferForDateTmDay_FA_Init);

    /* Outport: '<Root>/VeCITR_K_DateTmDay' incorporates:
     *  SignalConversion generated from: '<S4>/DateTmDay_Init'
     */
    (void)Rte_Write_VeCITR_K_DateTmDay_Value
        (CITR_ac_B.OutportBufferForDateTmDay_Init);

    /* Outport: '<Root>/VeCITR_b_DateTmDay_SgnlRcvd' incorporates:
     *  SignalConversion generated from: '<S4>/DateTmDay_SgnlRcvd_Init'
     */
    (void)Rte_Write_VeCITR_b_DateTmDay_SgnlRcvd_Value
        (CITR_ac_B.OutportBufferForDateTmDay_SgnlRcvd_Init);

    /* Outport: '<Root>/VeCITR_b_DateTmFormat_FA' incorporates:
     *  SignalConversion generated from: '<S4>/DateTmFormat_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_DateTmFormat_FA_Value
        (CITR_ac_B.OutportBufferForDateTmFormat_FA_Init);

    /* Outport: '<Root>/VeCITR_e_DateTmFormat' incorporates:
     *  SignalConversion generated from: '<S4>/DateTmFormat_Init'
     *  SignalConversion generated from: '<S504>/DateTmFormat_Init'
     */
    (void)Rte_Write_VeCITR_e_DateTmFormat_Value
        (CITR_ac_B.OutportBufferForDateTmFormat_Init);

    /* Outport: '<Root>/VeCITR_K_DateTmHour' incorporates:
     *  SignalConversion generated from: '<S4>/DateTmHour_Init'
     */
    (void)Rte_Write_VeCITR_K_DateTmHour_Value
        (CITR_ac_B.OutportBufferForDateTmHour_Init);

    /* Outport: '<Root>/VeCITR_K_DateTmMin' incorporates:
     *  SignalConversion generated from: '<S4>/DateTmMin_Init'
     */
    (void)Rte_Write_VeCITR_K_DateTmMin_Value
        (CITR_ac_B.OutportBufferForDateTmMin_Init);

    /* Outport: '<Root>/VeCITR_K_DateTmMon' incorporates:
     *  SignalConversion generated from: '<S4>/DateTmMon_Init'
     */
    (void)Rte_Write_VeCITR_K_DateTmMon_Value
        (CITR_ac_B.OutportBufferForDateTmMon_Init);

    /* Outport: '<Root>/VeCITR_K_DateTmSec' incorporates:
     *  SignalConversion generated from: '<S4>/DateTmSec_Init'
     */
    (void)Rte_Write_VeCITR_K_DateTmSec_Value
        (CITR_ac_B.OutportBufferForDateTmSec_Init);

    /* Outport: '<Root>/VeCITR_K_DateTmYear' incorporates:
     *  SignalConversion generated from: '<S4>/DateTmYear_Init'
     */
    (void)Rte_Write_VeCITR_K_DateTmYear_Value
        (CITR_ac_B.OutportBufferForDateTmYear_Init);

    /* Outport: '<Root>/VeCITR_b_Date_Day1_FA' incorporates:
     *  SignalConversion generated from: '<S4>/Date_Day1_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_Date_Day1_FA_Value
        (CITR_ac_B.OutportBufferForDate_Day1_FA_Init);

    /* Outport: '<Root>/VeCITR_K_Date_Day1' incorporates:
     *  SignalConversion generated from: '<S4>/Date_Day1_Init'
     */
    (void)Rte_Write_VeCITR_K_Date_Day1_Value
        (CITR_ac_B.OutportBufferForDate_Day1_Init);

    /* Outport: '<Root>/VeCITR_b_Date_Day1_SgnlRcvd' incorporates:
     *  SignalConversion generated from: '<S4>/Date_Day1_SgnlRcvd_Init'
     */
    (void)Rte_Write_VeCITR_b_Date_Day1_SgnlRcvd_Value
        (CITR_ac_B.OutportBufferForDate_Day1_SgnlRcvd_Init);

    /* Outport: '<Root>/VeCITR_K_Date_Day2' incorporates:
     *  SignalConversion generated from: '<S4>/Date_Day2_Init'
     */
    (void)Rte_Write_VeCITR_K_Date_Day2_Value
        (CITR_ac_B.OutportBufferForDate_Day2_Init);

    /* Outport: '<Root>/VeCITR_K_Date_Month1' incorporates:
     *  SignalConversion generated from: '<S4>/Date_Month1_Init'
     */
    (void)Rte_Write_VeCITR_K_Date_Month1_Value
        (CITR_ac_B.OutportBufferForDate_Month1_Init);

    /* Outport: '<Root>/VeCITR_K_Date_Month2' incorporates:
     *  SignalConversion generated from: '<S4>/Date_Month2_Init'
     */
    (void)Rte_Write_VeCITR_K_Date_Month2_Value
        (CITR_ac_B.OutportBufferForDate_Month2_Init);

    /* Outport: '<Root>/VeCITR_K_Date_Year1' incorporates:
     *  SignalConversion generated from: '<S4>/Date_Year1_Init'
     */
    (void)Rte_Write_VeCITR_K_Date_Year1_Value
        (CITR_ac_B.OutportBufferForDate_Year1_Init);

    /* Outport: '<Root>/VeCITR_K_Date_Year2' incorporates:
     *  SignalConversion generated from: '<S4>/Date_Year2_Init'
     */
    (void)Rte_Write_VeCITR_K_Date_Year2_Value
        (CITR_ac_B.OutportBufferForDate_Year2_Init);

    /* Outport: '<Root>/VeCITR_K_Date_Year3' incorporates:
     *  SignalConversion generated from: '<S4>/Date_Year3_Init'
     */
    (void)Rte_Write_VeCITR_K_Date_Year3_Value
        (CITR_ac_B.OutportBufferForDate_Year3_Init);

    /* Outport: '<Root>/VeCITR_K_Date_Year4' incorporates:
     *  SignalConversion generated from: '<S4>/Date_Year4_Init'
     */
    (void)Rte_Write_VeCITR_K_Date_Year4_Value
        (CITR_ac_B.OutportBufferForDate_Year4_Init);

    /* Outport: '<Root>/VeCITR_b_DistanceToCharge_FA' incorporates:
     *  SignalConversion generated from: '<S4>/DistanceToCharge_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_DistanceToCharge_FA_Value
        (CITR_ac_B.OutportBufferForDistanceToCharge_FA_Init);

    /* Outport: '<Root>/VeCITR_l_DistanceToCharge' incorporates:
     *  SignalConversion generated from: '<S4>/DistanceToCharge_Init'
     */
    (void)Rte_Write_VeCITR_l_DistanceToCharge_Value
        (CITR_ac_B.OutportBufferForDistanceToCharge_Init);

    /* Outport: '<Root>/VeCITR_b_Drv_Dr_Unlocking' incorporates:
     *  SignalConversion generated from: '<S4>/Drv_Dr_Unlocking_Init'
     */
    (void)Rte_Write_VeCITR_b_Drv_Dr_Unlocking_Value
        (CITR_ac_B.OutportBufferForDrv_Dr_Unlocking_Init);

    /* Outport: '<Root>/VeCITR_e_FOTA_Install_Status' incorporates:
     *  SignalConversion generated from: '<S4>/FOTA_Install_Status_Init'
     *  SignalConversion generated from: '<S504>/FOTA_Install_Status_Init'
     */
    (void)Rte_Write_VeCITR_e_FOTA_Install_Status_Value
        (CITR_ac_B.OutportBufferForFOTA_Install_Status_Init);

    /* Outport: '<Root>/VeCITR_b_FOTA_Install_Type_FA' incorporates:
     *  SignalConversion generated from: '<S4>/FOTA_Install_Type_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_FOTA_Install_Type_FA_Value
        (CITR_ac_B.OutportBufferForFOTA_Install_Type_FA_Ini);

    /* Outport: '<Root>/VeCITR_e_FOTA_Install_Type' incorporates:
     *  SignalConversion generated from: '<S4>/FOTA_Install_Type_Init'
     *  SignalConversion generated from: '<S504>/FOTA_Install_Type_Init'
     */
    (void)Rte_Write_VeCITR_e_FOTA_Install_Type_Value
        (CITR_ac_B.OutportBufferForFOTA_Install_Type_Init);

    /* Outport: '<Root>/VeCITR_b_HU_ChrgSchedType1FA' incorporates:
     *  SignalConversion generated from: '<S4>/HU_ChrgSchedType1_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_ChrgSchedType1FA_Value
        (CITR_ac_B.OutportBufferForHU_ChrgSchedType1_FA_Ini);

    /* Outport: '<Root>/VeCITR_e_HU_ChrgSchedType1' incorporates:
     *  SignalConversion generated from: '<S489>/HU_ChrgSchedType1_Init'
     *  SignalConversion generated from: '<S4>/HU_ChrgSchedType1_Init'
     */
    (void)Rte_Write_VeCITR_e_HU_ChrgSchedType1_Value
        (CITR_ac_B.OutportBufferForHU_ChrgSchedType1_Init);

    /* Outport: '<Root>/VeCITR_b_HU_ChrgSchedType2FA' incorporates:
     *  SignalConversion generated from: '<S4>/HU_ChrgSchedType2_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_ChrgSchedType2FA_Value
        (CITR_ac_B.OutportBufferForHU_ChrgSchedType2_FA_Ini);

    /* Outport: '<Root>/VeCITR_e_HU_ChrgSchedType2' incorporates:
     *  SignalConversion generated from: '<S489>/HU_ChrgSchedType2_Init'
     *  SignalConversion generated from: '<S4>/HU_ChrgSchedType2_Init'
     */
    (void)Rte_Write_VeCITR_e_HU_ChrgSchedType2_Value
        (CITR_ac_B.OutportBufferForHU_ChrgSchedType2_Init);

    /* Outport: '<Root>/VeCITR_b_HU_ExtChrgTarget1FA' incorporates:
     *  SignalConversion generated from: '<S4>/HU_ExtChrgTarget1_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_ExtChrgTarget1FA_Value
        (CITR_ac_B.OutportBufferForHU_ExtChrgTarget1_FA_Ini);

    /* Outport: '<Root>/VeCITR_Pct_HU_ExtChrgTarget1' incorporates:
     *  SignalConversion generated from: '<S4>/HU_ExtChrgTarget1_Init'
     */
    (void)Rte_Write_VeCITR_Pct_HU_ExtChrgTarget1_Value
        (CITR_ac_B.OutportBufferForHU_ExtChrgTarget1_Init);

    /* Outport: '<Root>/VeCITR_b_HU_ExtChrgTarget2FA' incorporates:
     *  SignalConversion generated from: '<S4>/HU_ExtChrgTarget2_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_ExtChrgTarget2FA_Value
        (CITR_ac_B.OutportBufferForHU_ExtChrgTarget2_FA_Ini);

    /* Outport: '<Root>/VeCITR_Pct_HU_ExtChrgTarget2' incorporates:
     *  SignalConversion generated from: '<S4>/HU_ExtChrgTarget2_Init'
     */
    (void)Rte_Write_VeCITR_Pct_HU_ExtChrgTarget2_Value
        (CITR_ac_B.OutportBufferForHU_ExtChrgTarget2_Init);

    /* Outport: '<Root>/VeCITR_b_HU_ImmChrgTarget1FA' incorporates:
     *  SignalConversion generated from: '<S4>/HU_ImmChrgTarget1_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_ImmChrgTarget1FA_Value
        (CITR_ac_B.OutportBufferForHU_ImmChrgTarget1_FA_Ini);

    /* Outport: '<Root>/VeCITR_Pct_HU_ImmChrgTarget1' incorporates:
     *  SignalConversion generated from: '<S4>/HU_ImmChrgTarget1_Init'
     */
    (void)Rte_Write_VeCITR_Pct_HU_ImmChrgTarget1_Value
        (CITR_ac_B.OutportBufferForHU_ImmChrgTarget1_Init);

    /* Outport: '<Root>/VeCITR_b_HU_ImmChrgTarget2FA' incorporates:
     *  SignalConversion generated from: '<S4>/HU_ImmChrgTarget2_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_ImmChrgTarget2FA_Value
        (CITR_ac_B.OutportBufferForHU_ImmChrgTarget2_FA_Ini);

    /* Outport: '<Root>/VeCITR_Pct_HU_ImmChrgTarget2' incorporates:
     *  SignalConversion generated from: '<S4>/HU_ImmChrgTarget2_Init'
     */
    (void)Rte_Write_VeCITR_Pct_HU_ImmChrgTarget2_Value
        (CITR_ac_B.OutportBufferForHU_ImmChrgTarget2_Init);

    /* Outport: '<Root>/VeCITR_b_HU_Sch1_End_Time_HrFA' incorporates:
     *  SignalConversion generated from: '<S4>/HU_Sch1_End_Time_HrFA_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch1_End_Time_HrFA_Value
        (CITR_ac_B.OutportBufferForHU_Sch1_End_Time_HrFA_In);

    /* Outport: '<Root>/VeCITR_b_HU_Sch1_End_Time_MinFA' incorporates:
     *  SignalConversion generated from: '<S4>/HU_Sch1_End_Time_MinFA_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch1_End_Time_MinFA_Value
        (CITR_ac_B.OutportBufferForHU_Sch1_End_Time_MinFA_I);

    /* Outport: '<Root>/VeCITR_b_HU_Sch1_Start_Time_HrFA' incorporates:
     *  SignalConversion generated from: '<S4>/HU_Sch1_Start_Time_HrFA_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch1_Start_Time_HrFA_Value
        (CITR_ac_B.OutportBufferForHU_Sch1_Start_Time_HrFA_);

    /* Outport: '<Root>/VeCITR_b_HU_Sch1_Start_Time_MinFA' incorporates:
     *  SignalConversion generated from: '<S4>/HU_Sch1_Start_Time_MinFA_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch1_Start_Time_MinFA_Value
        (CITR_ac_B.OutportBufferForHU_Sch1_Start_Time_MinFA);

    /* Outport: '<Root>/VeCITR_b_HU_Sch1_TemperatureFA' incorporates:
     *  SignalConversion generated from: '<S4>/HU_Sch1_TemperatureFA_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch1_TemperatureFA_Value
        (CITR_ac_B.OutportBufferForHU_Sch1_TemperatureFA_In);

    /* Outport: '<Root>/VeCITR_T_HU_Sch1_Temperature' incorporates:
     *  SignalConversion generated from: '<S4>/HU_Sch1_Temperature_Init'
     */
    (void)Rte_Write_VeCITR_T_HU_Sch1_Temperature_Value
        (CITR_ac_B.OutportBufferForHU_Sch1_Temperature_Init);

    /* Outport: '<Root>/VeCITR_b_HU_Sch1_TypeFA' incorporates:
     *  SignalConversion generated from: '<S4>/HU_Sch1_TypeFA_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch1_TypeFA_Value
        (CITR_ac_B.OutportBufferForHU_Sch1_TypeFA_Init);

    /* Outport: '<Root>/VeCITR_b_HU_Sch2_End_Time_HrFA' incorporates:
     *  SignalConversion generated from: '<S4>/HU_Sch2_End_Time_HrFA_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch2_End_Time_HrFA_Value
        (CITR_ac_B.OutportBufferForHU_Sch2_End_Time_HrFA_In);

    /* Outport: '<Root>/VeCITR_b_HU_Sch2_End_Time_MinFA' incorporates:
     *  SignalConversion generated from: '<S4>/HU_Sch2_End_Time_MinFA_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch2_End_Time_MinFA_Value
        (CITR_ac_B.OutportBufferForHU_Sch2_End_Time_MinFA_I);

    /* Outport: '<Root>/VeCITR_b_HU_Sch2_Start_Time_HrFA' incorporates:
     *  SignalConversion generated from: '<S4>/HU_Sch2_Start_Time_HrFA_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch2_Start_Time_HrFA_Value
        (CITR_ac_B.OutportBufferForHU_Sch2_Start_Time_HrFA_);

    /* Outport: '<Root>/VeCITR_b_HU_Sch2_Start_Time_MinFA' incorporates:
     *  SignalConversion generated from: '<S4>/HU_Sch2_Start_Time_MinFA_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch2_Start_Time_MinFA_Value
        (CITR_ac_B.OutportBufferForHU_Sch2_Start_Time_MinFA);

    /* Outport: '<Root>/VeCITR_b_HU_Sch2_TemperatureFA' incorporates:
     *  SignalConversion generated from: '<S4>/HU_Sch2_TemperatureFA_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch2_TemperatureFA_Value
        (CITR_ac_B.OutportBufferForHU_Sch2_TemperatureFA_In);

    /* Outport: '<Root>/VeCITR_T_HU_Sch2_Temperature' incorporates:
     *  SignalConversion generated from: '<S4>/HU_Sch2_Temperature_Init'
     */
    (void)Rte_Write_VeCITR_T_HU_Sch2_Temperature_Value
        (CITR_ac_B.OutportBufferForHU_Sch2_Temperature_Init);

    /* Outport: '<Root>/VeCITR_b_HU_Sch2_TypeFA' incorporates:
     *  SignalConversion generated from: '<S4>/HU_Sch2_TypeFA_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch2_TypeFA_Value
        (CITR_ac_B.OutportBufferForHU_Sch2_TypeFA_Init);

    /* Outport: '<Root>/VeCITR_b_HU_Sch3_AllowFA' incorporates:
     *  SignalConversion generated from: '<S4>/HU_Sch3_AllowFA_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch3_AllowFA_Value
        (CITR_ac_B.OutportBufferForHU_Sch3_AllowFA_Init);

    /* Outport: '<Root>/VeCITR_e_HU_Sch3_Allow' incorporates:
     *  SignalConversion generated from: '<S499>/HU_Sch3_Allow_Init'
     *  SignalConversion generated from: '<S4>/HU_Sch3_Allow_Init'
     */
    (void)Rte_Write_VeCITR_e_HU_Sch3_Allow_Value
        (CITR_ac_B.OutportBufferForHU_Sch3_Allow_Init);

    /* Outport: '<Root>/VeCITR_b_HU_Sch3_End_Time_HrFA' incorporates:
     *  SignalConversion generated from: '<S4>/HU_Sch3_End_Time_HrFA_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch3_End_Time_HrFA_Value
        (CITR_ac_B.OutportBufferForHU_Sch3_End_Time_HrFA_In);

    /* Outport: '<Root>/VeCITR_b_HU_Sch3_End_Time_MinFA' incorporates:
     *  SignalConversion generated from: '<S4>/HU_Sch3_End_Time_MinFA_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch3_End_Time_MinFA_Value
        (CITR_ac_B.OutportBufferForHU_Sch3_End_Time_MinFA_I);

    /* Outport: '<Root>/VeCITR_b_HU_Sch3_Start_Time_HrFA' incorporates:
     *  SignalConversion generated from: '<S4>/HU_Sch3_Start_Time_HrFA_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch3_Start_Time_HrFA_Value
        (CITR_ac_B.OutportBufferForHU_Sch3_Start_Time_HrFA_);

    /* Outport: '<Root>/VeCITR_b_HU_Sch3_Start_Time_MinFA' incorporates:
     *  SignalConversion generated from: '<S4>/HU_Sch3_Start_Time_MinFA_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch3_Start_Time_MinFA_Value
        (CITR_ac_B.OutportBufferForHU_Sch3_Start_Time_MinFA);

    /* Outport: '<Root>/VeCITR_b_HU_Sch3_TemperatureFA' incorporates:
     *  SignalConversion generated from: '<S4>/HU_Sch3_TemperatureFA_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch3_TemperatureFA_Value
        (CITR_ac_B.OutportBufferForHU_Sch3_TemperatureFA_In);

    /* Outport: '<Root>/VeCITR_T_HU_Sch3_Temperature' incorporates:
     *  SignalConversion generated from: '<S4>/HU_Sch3_Temperature_Init'
     */
    (void)Rte_Write_VeCITR_T_HU_Sch3_Temperature_Value
        (CITR_ac_B.OutportBufferForHU_Sch3_Temperature_Init);

    /* Outport: '<Root>/VeCITR_b_HU_Sch3_TypeFA' incorporates:
     *  SignalConversion generated from: '<S4>/HU_Sch3_TypeFA_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch3_TypeFA_Value
        (CITR_ac_B.OutportBufferForHU_Sch3_TypeFA_Init);

    /* Outport: '<Root>/VeCITR_b_HU_Sch4_AllowFA' incorporates:
     *  SignalConversion generated from: '<S4>/HU_Sch4_AllowFA_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch4_AllowFA_Value
        (CITR_ac_B.OutportBufferForHU_Sch4_AllowFA_Init);

    /* Outport: '<Root>/VeCITR_e_HU_Sch4_Allow' incorporates:
     *  SignalConversion generated from: '<S4>/HU_Sch4_Allow_Init'
     *  SignalConversion generated from: '<S501>/HU_Sch4_Allow_Init'
     */
    (void)Rte_Write_VeCITR_e_HU_Sch4_Allow_Value
        (CITR_ac_B.OutportBufferForHU_Sch4_Allow_Init);

    /* Outport: '<Root>/VeCITR_b_HU_Sch4_Start_Time_HrFA' incorporates:
     *  SignalConversion generated from: '<S4>/HU_Sch4_Start_Time_HrFA_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch4_Start_Time_HrFA_Value
        (CITR_ac_B.OutportBufferForHU_Sch4_Start_Time_HrFA_);

    /* Outport: '<Root>/VeCITR_b_HU_Sch4_Start_Time_MinFA' incorporates:
     *  SignalConversion generated from: '<S4>/HU_Sch4_Start_Time_MinFA_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch4_Start_Time_MinFA_Value
        (CITR_ac_B.OutportBufferForHU_Sch4_Start_Time_MinFA);

    /* Outport: '<Root>/VeCITR_b_HU_Sch4_TemperatureFA' incorporates:
     *  SignalConversion generated from: '<S4>/HU_Sch4_TemperatureFA_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch4_TemperatureFA_Value
        (CITR_ac_B.OutportBufferForHU_Sch4_TemperatureFA_In);

    /* Outport: '<Root>/VeCITR_T_HU_Sch4_Temperature' incorporates:
     *  SignalConversion generated from: '<S4>/HU_Sch4_Temperature_Init'
     */
    (void)Rte_Write_VeCITR_T_HU_Sch4_Temperature_Value
        (CITR_ac_B.OutportBufferForHU_Sch4_Temperature_Init);

    /* Outport: '<Root>/VeCITR_b_PP2ACPresentSens1FA' incorporates:
     *  SignalConversion generated from: '<S4>/PP2ACPresentSens1_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_PP2ACPresentSens1FA_Value
        (CITR_ac_B.OutportBufferForPP2ACPresentSens1_FA_Ini);

    /* Outport: '<Root>/VeCITR_b_PP2ACPresentSens1' incorporates:
     *  SignalConversion generated from: '<S4>/PP2ACPresentSens1_Init'
     */
    (void)Rte_Write_VeCITR_b_PP2ACPresentSens1_Value
        (CITR_ac_B.OutportBufferForPP2ACPresentSens1_Init);

    /* Outport: '<Root>/VeCITR_b_PP2ACPresentSens2FA' incorporates:
     *  SignalConversion generated from: '<S4>/PP2ACPresentSens2_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_PP2ACPresentSens2FA_Value
        (CITR_ac_B.OutportBufferForPP2ACPresentSens2_FA_Ini);

    /* Outport: '<Root>/VeCITR_b_PP2ACPresentSens2' incorporates:
     *  SignalConversion generated from: '<S4>/PP2ACPresentSens2_Init'
     */
    (void)Rte_Write_VeCITR_b_PP2ACPresentSens2_Value
        (CITR_ac_B.OutportBufferForPP2ACPresentSens2_Init);

    /* Outport: '<Root>/VeCITR_b_PP2ButtonStsFA' incorporates:
     *  SignalConversion generated from: '<S4>/PP2ButtonSts_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_PP2ButtonStsFA_Value
        (CITR_ac_B.OutportBufferForPP2ButtonSts_FA_Init);

    /* Outport: '<Root>/VeCITR_b_PP2ButtonSts' incorporates:
     *  SignalConversion generated from: '<S4>/PP2ButtonSts_Init'
     */
    (void)Rte_Write_VeCITR_b_PP2ButtonSts_Value
        (CITR_ac_B.OutportBufferForPP2ButtonSts_Init);

    /* Outport: '<Root>/VeCITR_b_PP2CurrentDrawSens1FA' incorporates:
     *  SignalConversion generated from: '<S4>/PP2CurrentDrawSens1_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_PP2CurrentDrawSens1FA_Value
        (CITR_ac_B.OutportBufferForPP2CurrentDrawSens1_FA_I);

    /* Outport: '<Root>/VeCITR_I_PP2CurrentDrawSens1' incorporates:
     *  SignalConversion generated from: '<S4>/PP2CurrentDrawSens1_Init'
     */
    (void)Rte_Write_VeCITR_I_PP2CurrentDrawSens1_Value
        (CITR_ac_B.OutportBufferForPP2CurrentDrawSens1_Init);

    /* Outport: '<Root>/VeCITR_b_PP2CurrentDrawSens2FA' incorporates:
     *  SignalConversion generated from: '<S4>/PP2CurrentDrawSens2_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_PP2CurrentDrawSens2FA_Value
        (CITR_ac_B.OutportBufferForPP2CurrentDrawSens2_FA_I);

    /* Outport: '<Root>/VeCITR_I_PP2CurrentDrawSens2' incorporates:
     *  SignalConversion generated from: '<S4>/PP2CurrentDrawSens2_Init'
     */
    (void)Rte_Write_VeCITR_I_PP2CurrentDrawSens2_Value
        (CITR_ac_B.OutportBufferForPP2CurrentDrawSens2_Init);

    /* Outport: '<Root>/VeCITR_b_PP2FaultRsnFA' incorporates:
     *  SignalConversion generated from: '<S4>/PP2FaultRsn_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_PP2FaultRsnFA_Value
        (CITR_ac_B.OutportBufferForPP2FaultRsn_FA_Init);

    /* Outport: '<Root>/VeCITR_e_PP2FaultRsn' incorporates:
     *  SignalConversion generated from: '<S496>/PP2FaultRsn_Init'
     *  SignalConversion generated from: '<S4>/PP2FaultRsn_Init'
     */
    (void)Rte_Write_VeCITR_e_PP2FaultRsn_Value
        (CITR_ac_B.OutportBufferForPP2FaultRsn_Init);

    /* Outport: '<Root>/VeCITR_b_PP2FaultFA' incorporates:
     *  SignalConversion generated from: '<S4>/PP2Fault_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_PP2FaultFA_Value
        (CITR_ac_B.OutportBufferForPP2Fault_FA_Init);

    /* Outport: '<Root>/VeCITR_e_PP2Fault' incorporates:
     *  SignalConversion generated from: '<S496>/PP2Fault_Init'
     *  SignalConversion generated from: '<S4>/PP2Fault_Init'
     */
    (void)Rte_Write_VeCITR_e_PP2Fault_Value
        (CITR_ac_B.OutportBufferForPP2Fault_Init);

    /* Outport: '<Root>/VeCITR_b_PP2LEDFaultFA' incorporates:
     *  SignalConversion generated from: '<S4>/PP2LEDFault_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_PP2LEDFaultFA_Value
        (CITR_ac_B.OutportBufferForPP2LEDFault_FA_Init);

    /* Outport: '<Root>/VeCITR_e_PP2LEDFault' incorporates:
     *  SignalConversion generated from: '<S496>/PP2LEDFault_Init'
     *  SignalConversion generated from: '<S4>/PP2LEDFault_Init'
     */
    (void)Rte_Write_VeCITR_e_PP2LEDFault_Value
        (CITR_ac_B.OutportBufferForPP2LEDFault_Init);

    /* Outport: '<Root>/VeCITR_b_PP2LidSwitchSts120AFA' incorporates:
     *  SignalConversion generated from: '<S4>/PP2LidSwitchSts120A_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_PP2LidSwitchSts120AFA_Value
        (CITR_ac_B.OutportBufferForPP2LidSwitchSts120A_FA_I);

    /* Outport: '<Root>/VeCITR_b_PP2LidSwitchSts120A' incorporates:
     *  SignalConversion generated from: '<S4>/PP2LidSwitchSts120A_Init'
     */
    (void)Rte_Write_VeCITR_b_PP2LidSwitchSts120A_Value
        (CITR_ac_B.OutportBufferForPP2LidSwitchSts120A_Init);

    /* Outport: '<Root>/VeCITR_b_PP2LidSwitchSts120BFA' incorporates:
     *  SignalConversion generated from: '<S4>/PP2LidSwitchSts120B_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_PP2LidSwitchSts120BFA_Value
        (CITR_ac_B.OutportBufferForPP2LidSwitchSts120B_FA_I);

    /* Outport: '<Root>/VeCITR_b_PP2LidSwitchSts120B' incorporates:
     *  SignalConversion generated from: '<S4>/PP2LidSwitchSts120B_Init'
     */
    (void)Rte_Write_VeCITR_b_PP2LidSwitchSts120B_Value
        (CITR_ac_B.OutportBufferForPP2LidSwitchSts120B_Init);

    /* Outport: '<Root>/VeCITR_b_PP2LidSwitchSts240FA' incorporates:
     *  SignalConversion generated from: '<S4>/PP2LidSwitchSts240_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_PP2LidSwitchSts240FA_Value
        (CITR_ac_B.OutportBufferForPP2LidSwitchSts240_FA_In);

    /* Outport: '<Root>/VeCITR_b_PP2LidSwitchSts240' incorporates:
     *  SignalConversion generated from: '<S4>/PP2LidSwitchSts240_Init'
     */
    (void)Rte_Write_VeCITR_b_PP2LidSwitchSts240_Value
        (CITR_ac_B.OutportBufferForPP2LidSwitchSts240_Init);

    /* Outport: '<Root>/VeCITR_b_PP2RatedPowerFA' incorporates:
     *  SignalConversion generated from: '<S4>/PP2RatedPower_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_PP2RatedPowerFA_Value
        (CITR_ac_B.OutportBufferForPP2RatedPower_FA_Init);

    /* Outport: '<Root>/VeCITR_P_PP2RatedPower' incorporates:
     *  SignalConversion generated from: '<S4>/PP2RatedPower_Init'
     */
    (void)Rte_Write_VeCITR_P_PP2RatedPower_Value
        (CITR_ac_B.OutportBufferForPP2RatedPower_Init);

    /* Outport: '<Root>/VeCITR_b_PP2_Gnd_Fault_Detected_FA' incorporates:
     *  SignalConversion generated from: '<S4>/PP2_Gnd_Fault_Detected_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_PP2_Gnd_Fault_Detected_FA_Value
        (CITR_ac_B.OutportBufferForPP2_Gnd_Fault_Detected_F);

    /* Outport: '<Root>/VeCITR_b_PP2_Gnd_Fault_Detected' incorporates:
     *  SignalConversion generated from: '<S4>/PP2_Gnd_Fault_Detected_Init'
     */
    (void)Rte_Write_VeCITR_b_PP2_Gnd_Fault_Detected_Value
        (CITR_ac_B.OutportBufferForPP2_Gnd_Fault_Detected_I);

    /* Outport: '<Root>/VeCITR_b_PP2_LED_A_FailStatus_FA' incorporates:
     *  SignalConversion generated from: '<S4>/PP2_LED_A_ FailStatus_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_PP2_LED_A_FailStatus_FA_Value
        (CITR_ac_B.OutportBufferForPP2_LED_A_FailStatus_FA_);

    /* Outport: '<Root>/VeCITR_e_PP2_LED_A_FailStatus' incorporates:
     *  SignalConversion generated from: '<S496>/PP2_LED_A_ FailStatus_Init'
     *  SignalConversion generated from: '<S4>/PP2_LED_A_ FailStatus_Init'
     */
    (void)Rte_Write_VeCITR_e_PP2_LED_A_FailStatus_Value
        (CITR_ac_B.OutportBufferForPP2_LED_A_FailStatus_Ini);

    /* Outport: '<Root>/VeCITR_b_PP2_LED_A_Color_Feedback_FA' incorporates:
     *  SignalConversion generated from: '<S4>/PP2_LED_A_Color_Feedback_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_PP2_LED_A_Color_Feedback_FA_Value
        (CITR_ac_B.OutportBufferForPP2_LED_A_Color_Feedback);

    /* Outport: '<Root>/VeCITR_e_PP2_LED_A_Color_Feedback' incorporates:
     *  SignalConversion generated from: '<S496>/PP2_LED_A_Color_Feedback_Init'
     *  SignalConversion generated from: '<S4>/PP2_LED_A_Color_Feedback_Init'
     */
    (void)Rte_Write_VeCITR_e_PP2_LED_A_Color_Feedback_Value
        (CITR_ac_B.OutportBufferForPP2_LED_A_Color_Feedba_p);

    /* Outport: '<Root>/VeCITR_b_PP2_LED_A_Feedback_FA' incorporates:
     *  SignalConversion generated from: '<S4>/PP2_LED_A_Feedback_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_PP2_LED_A_Feedback_FA_Value
        (CITR_ac_B.OutportBufferForPP2_LED_A_Feedback_FA_In);

    /* Outport: '<Root>/VeCITR_e_PP2_LED_A_Feedback' incorporates:
     *  SignalConversion generated from: '<S496>/PP2_LED_A_Feedback_Init'
     *  SignalConversion generated from: '<S4>/PP2_LED_A_Feedback_Init'
     */
    (void)Rte_Write_VeCITR_e_PP2_LED_A_Feedback_Value
        (CITR_ac_B.OutportBufferForPP2_LED_A_Feedback_Init);

    /* Outport: '<Root>/VeCITR_b_PP2_LED_B_FailStatus_FA' incorporates:
     *  SignalConversion generated from: '<S4>/PP2_LED_B_ FailStatus_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_PP2_LED_B_FailStatus_FA_Value
        (CITR_ac_B.OutportBufferForPP2_LED_B_FailStatus_FA_);

    /* Outport: '<Root>/VeCITR_e_PP2_LED_B_FailStatus' incorporates:
     *  SignalConversion generated from: '<S496>/PP2_LED_B_ FailStatus_Init'
     *  SignalConversion generated from: '<S4>/PP2_LED_B_ FailStatus_Init'
     */
    (void)Rte_Write_VeCITR_e_PP2_LED_B_FailStatus_Value
        (CITR_ac_B.OutportBufferForPP2_LED_B_FailStatus_Ini);

    /* Outport: '<Root>/VeCITR_b_PP2_LED_B_Color_Feedback_FA' incorporates:
     *  SignalConversion generated from: '<S4>/PP2_LED_B_Color_Feedback_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_PP2_LED_B_Color_Feedback_FA_Value
        (CITR_ac_B.OutportBufferForPP2_LED_B_Color_Feedback);

    /* Outport: '<Root>/VeCITR_e_PP2_LED_B_Color_Feedback' incorporates:
     *  SignalConversion generated from: '<S496>/PP2_LED_B_Color_Feedback_Init'
     *  SignalConversion generated from: '<S4>/PP2_LED_B_Color_Feedback_Init'
     */
    (void)Rte_Write_VeCITR_e_PP2_LED_B_Color_Feedback_Value
        (CITR_ac_B.OutportBufferForPP2_LED_B_Color_Feedba_g);

    /* Outport: '<Root>/VeCITR_b_PP2_LED_B_Feedback_FA' incorporates:
     *  SignalConversion generated from: '<S4>/PP2_LED_B_Feedback_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_PP2_LED_B_Feedback_FA_Value
        (CITR_ac_B.OutportBufferForPP2_LED_B_Feedback_FA_In);

    /* Outport: '<Root>/VeCITR_e_PP2_LED_B_Feedback' incorporates:
     *  SignalConversion generated from: '<S496>/PP2_LED_B_Feedback_Init'
     *  SignalConversion generated from: '<S4>/PP2_LED_B_Feedback_Init'
     */
    (void)Rte_Write_VeCITR_e_PP2_LED_B_Feedback_Value
        (CITR_ac_B.OutportBufferForPP2_LED_B_Feedback_Init);

    /* Outport: '<Root>/VeCITR_b_PP2_LIN_Checksum_Error_FA' incorporates:
     *  SignalConversion generated from: '<S4>/PP2_LIN_Checksum_Error_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_PP2_LIN_Checksum_Error_FA_Value
        (CITR_ac_B.OutportBufferForPP2_LIN_Checksum_Error_F);

    /* Outport: '<Root>/VeCITR_b_PP2_LIN_Checksum_Error' incorporates:
     *  SignalConversion generated from: '<S4>/PP2_LIN_Checksum_Error_Init'
     */
    (void)Rte_Write_VeCITR_b_PP2_LIN_Checksum_Error_Value
        (CITR_ac_B.OutportBufferForPP2_LIN_Checksum_Error_I);

    /* Outport: '<Root>/VeCITR_b_PP2_LIN_Data_Error_FA' incorporates:
     *  SignalConversion generated from: '<S4>/PP2_LIN_Data_Error_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_PP2_LIN_Data_Error_FA_Value
        (CITR_ac_B.OutportBufferForPP2_LIN_Data_Error_FA_In);

    /* Outport: '<Root>/VeCITR_b_PP2_LIN_Data_Error' incorporates:
     *  SignalConversion generated from: '<S4>/PP2_LIN_Data_Error_Init'
     */
    (void)Rte_Write_VeCITR_b_PP2_LIN_Data_Error_Value
        (CITR_ac_B.OutportBufferForPP2_LIN_Data_Error_Init);

    /* Outport: '<Root>/VeCITR_b_PP2_LIN_Parity_Error_FA' incorporates:
     *  SignalConversion generated from: '<S4>/PP2_LIN_Parity_Error_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_PP2_LIN_Parity_Error_FA_Value
        (CITR_ac_B.OutportBufferForPP2_LIN_Parity_Error_FA_);

    /* Outport: '<Root>/VeCITR_b_PP2_LIN_Parity_Error' incorporates:
     *  SignalConversion generated from: '<S4>/PP2_LIN_Parity_Error_Init'
     */
    (void)Rte_Write_VeCITR_b_PP2_LIN_Parity_Error_Value
        (CITR_ac_B.OutportBufferForPP2_LIN_Parity_Error_Ini);

    /* Outport: '<Root>/VeCITR_b_PPACPresentSens1FA' incorporates:
     *  SignalConversion generated from: '<S4>/PPACPresentSens1_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_PPACPresentSens1FA_Value
        (CITR_ac_B.OutportBufferForPPACPresentSens1_FA_Init);

    /* Outport: '<Root>/VeCITR_b_PPACPresentSens1' incorporates:
     *  SignalConversion generated from: '<S4>/PPACPresentSens1_Init'
     */
    (void)Rte_Write_VeCITR_b_PPACPresentSens1_Value
        (CITR_ac_B.OutportBufferForPPACPresentSens1_Init);

    /* Outport: '<Root>/VeCITR_b_PPACPresentSens2FA' incorporates:
     *  SignalConversion generated from: '<S4>/PPACPresentSens2_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_PPACPresentSens2FA_Value
        (CITR_ac_B.OutportBufferForPPACPresentSens2_FA_Init);

    /* Outport: '<Root>/VeCITR_b_PPACPresentSens2' incorporates:
     *  SignalConversion generated from: '<S4>/PPACPresentSens2_Init'
     */
    (void)Rte_Write_VeCITR_b_PPACPresentSens2_Value
        (CITR_ac_B.OutportBufferForPPACPresentSens2_Init);

    /* Outport: '<Root>/VeCITR_b_PPButtonStsFA' incorporates:
     *  SignalConversion generated from: '<S4>/PPButtonSts_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_PPButtonStsFA_Value
        (CITR_ac_B.OutportBufferForPPButtonSts_FA_Init);

    /* Outport: '<Root>/VeCITR_b_PPButtonSts' incorporates:
     *  SignalConversion generated from: '<S4>/PPButtonSts_Init'
     */
    (void)Rte_Write_VeCITR_b_PPButtonSts_Value
        (CITR_ac_B.OutportBufferForPPButtonSts_Init);

    /* Outport: '<Root>/VeCITR_b_PPCurrentDrawSens1FA' incorporates:
     *  SignalConversion generated from: '<S4>/PPCurrentDrawSens1_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_PPCurrentDrawSens1FA_Value
        (CITR_ac_B.OutportBufferForPPCurrentDrawSens1_FA_In);

    /* Outport: '<Root>/VeCITR_I_PPCurrentDrawSens1' incorporates:
     *  SignalConversion generated from: '<S4>/PPCurrentDrawSens1_Init'
     */
    (void)Rte_Write_VeCITR_I_PPCurrentDrawSens1_Value
        (CITR_ac_B.OutportBufferForPPCurrentDrawSens1_Init);

    /* Outport: '<Root>/VeCITR_b_PPCurrentDrawSens2FA' incorporates:
     *  SignalConversion generated from: '<S4>/PPCurrentDrawSens2_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_PPCurrentDrawSens2FA_Value
        (CITR_ac_B.OutportBufferForPPCurrentDrawSens2_FA_In);

    /* Outport: '<Root>/VeCITR_I_PPCurrentDrawSens2' incorporates:
     *  SignalConversion generated from: '<S4>/PPCurrentDrawSens2_Init'
     */
    (void)Rte_Write_VeCITR_I_PPCurrentDrawSens2_Value
        (CITR_ac_B.OutportBufferForPPCurrentDrawSens2_Init);

    /* Outport: '<Root>/VeCITR_b_PPFaultRsnFA' incorporates:
     *  SignalConversion generated from: '<S4>/PPFaultRsn_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_PPFaultRsnFA_Value
        (CITR_ac_B.OutportBufferForPPFaultRsn_FA_Init);

    /* Outport: '<Root>/VeCITR_e_PPFaultRsn' incorporates:
     *  SignalConversion generated from: '<S496>/PPFaultRsn_Init'
     *  SignalConversion generated from: '<S4>/PPFaultRsn_Init'
     */
    (void)Rte_Write_VeCITR_e_PPFaultRsn_Value
        (CITR_ac_B.OutportBufferForPPFaultRsn_Init);

    /* Outport: '<Root>/VeCITR_b_PPFaultFA' incorporates:
     *  SignalConversion generated from: '<S4>/PPFault_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_PPFaultFA_Value
        (CITR_ac_B.OutportBufferForPPFault_FA_Init);

    /* Outport: '<Root>/VeCITR_e_PPFault' incorporates:
     *  SignalConversion generated from: '<S496>/PPFault_Init'
     *  SignalConversion generated from: '<S4>/PPFault_Init'
     */
    (void)Rte_Write_VeCITR_e_PPFault_Value
        (CITR_ac_B.OutportBufferForPPFault_Init);

    /* Outport: '<Root>/VeCITR_b_PPLEDFaultFA' incorporates:
     *  SignalConversion generated from: '<S4>/PPLEDFault_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_PPLEDFaultFA_Value
        (CITR_ac_B.OutportBufferForPPLEDFault_FA_Init);

    /* Outport: '<Root>/VeCITR_e_PPLEDFault' incorporates:
     *  SignalConversion generated from: '<S496>/PPLEDFault_Init'
     *  SignalConversion generated from: '<S4>/PPLEDFault_Init'
     */
    (void)Rte_Write_VeCITR_e_PPLEDFault_Value
        (CITR_ac_B.OutportBufferForPPLEDFault_Init);

    /* Outport: '<Root>/VeCITR_b_PPLidSwitchSts120AFA' incorporates:
     *  SignalConversion generated from: '<S4>/PPLidSwitchSts120A_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_PPLidSwitchSts120AFA_Value
        (CITR_ac_B.OutportBufferForPPLidSwitchSts120A_FA_In);

    /* Outport: '<Root>/VeCITR_b_PPLidSwitchSts120A' incorporates:
     *  SignalConversion generated from: '<S4>/PPLidSwitchSts120A_Init'
     */
    (void)Rte_Write_VeCITR_b_PPLidSwitchSts120A_Value
        (CITR_ac_B.OutportBufferForPPLidSwitchSts120A_Init);

    /* Outport: '<Root>/VeCITR_b_PPLidSwitchSts120BFA' incorporates:
     *  SignalConversion generated from: '<S4>/PPLidSwitchSts120B_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_PPLidSwitchSts120BFA_Value
        (CITR_ac_B.OutportBufferForPPLidSwitchSts120B_FA_In);

    /* Outport: '<Root>/VeCITR_b_PPLidSwitchSts120B' incorporates:
     *  SignalConversion generated from: '<S4>/PPLidSwitchSts120B_Init'
     */
    (void)Rte_Write_VeCITR_b_PPLidSwitchSts120B_Value
        (CITR_ac_B.OutportBufferForPPLidSwitchSts120B_Init);

    /* Outport: '<Root>/VeCITR_b_PPLidSwitchSts240FA' incorporates:
     *  SignalConversion generated from: '<S4>/PPLidSwitchSts240_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_PPLidSwitchSts240FA_Value
        (CITR_ac_B.OutportBufferForPPLidSwitchSts240_FA_Ini);

    /* Outport: '<Root>/VeCITR_b_PPLidSwitchSts240' incorporates:
     *  SignalConversion generated from: '<S4>/PPLidSwitchSts240_Init'
     */
    (void)Rte_Write_VeCITR_b_PPLidSwitchSts240_Value
        (CITR_ac_B.OutportBufferForPPLidSwitchSts240_Init);

    /* Outport: '<Root>/VeCITR_b_PPRatedPowerFA' incorporates:
     *  SignalConversion generated from: '<S4>/PPRatedPower_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_PPRatedPowerFA_Value
        (CITR_ac_B.OutportBufferForPPRatedPower_FA_Init);

    /* Outport: '<Root>/VeCITR_P_PPRatedPower' incorporates:
     *  SignalConversion generated from: '<S4>/PPRatedPower_Init'
     */
    (void)Rte_Write_VeCITR_P_PPRatedPower_Value
        (CITR_ac_B.OutportBufferForPPRatedPower_Init);

    /* Outport: '<Root>/VeCITR_b_PP_Gnd_Fault_Detected_FA' incorporates:
     *  SignalConversion generated from: '<S4>/PP_Gnd_Fault_Detected_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_PP_Gnd_Fault_Detected_FA_Value
        (CITR_ac_B.OutportBufferForPP_Gnd_Fault_Detected_FA);

    /* Outport: '<Root>/VeCITR_b_PP_Gnd_Fault_Detected' incorporates:
     *  SignalConversion generated from: '<S4>/PP_Gnd_Fault_Detected_Init'
     */
    (void)Rte_Write_VeCITR_b_PP_Gnd_Fault_Detected_Value
        (CITR_ac_B.OutportBufferForPP_Gnd_Fault_Detected_In);

    /* Outport: '<Root>/VeCITR_b_PP_LED_A_FailStatus_FA' incorporates:
     *  SignalConversion generated from: '<S4>/PP_LED_A_ FailStatus_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_PP_LED_A_FailStatus_FA_Value
        (CITR_ac_B.OutportBufferForPP_LED_A_FailStatus_FA_I);

    /* Outport: '<Root>/VeCITR_e_PP_LED_A_FailStatus' incorporates:
     *  SignalConversion generated from: '<S496>/PP_LED_A_ FailStatus_Init'
     *  SignalConversion generated from: '<S4>/PP_LED_A_ FailStatus_Init'
     */
    (void)Rte_Write_VeCITR_e_PP_LED_A_FailStatus_Value
        (CITR_ac_B.OutportBufferForPP_LED_A_FailStatus_Init);

    /* Outport: '<Root>/VeCITR_b_PP_LED_A_Color_Feedback_FA' incorporates:
     *  SignalConversion generated from: '<S4>/PP_LED_A_Color_Feedback_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_PP_LED_A_Color_Feedback_FA_Value
        (CITR_ac_B.OutportBufferForPP_LED_A_Color_Feedback_);

    /* Outport: '<Root>/VeCITR_e_PP_LED_A_Color_Feedback' incorporates:
     *  SignalConversion generated from: '<S496>/PP_LED_A_Color_Feedback_Init'
     *  SignalConversion generated from: '<S4>/PP_LED_A_Color_Feedback_Init'
     */
    (void)Rte_Write_VeCITR_e_PP_LED_A_Color_Feedback_Value
        (CITR_ac_B.OutportBufferForPP_LED_A_Color_Feedbac_j);

    /* Outport: '<Root>/VeCITR_b_PP_LED_A_Feedback_FA' incorporates:
     *  SignalConversion generated from: '<S4>/PP_LED_A_Feedback_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_PP_LED_A_Feedback_FA_Value
        (CITR_ac_B.OutportBufferForPP_LED_A_Feedback_FA_Ini);

    /* Outport: '<Root>/VeCITR_e_PP_LED_A_Feedback' incorporates:
     *  SignalConversion generated from: '<S496>/PP_LED_A_Feedback_Init'
     *  SignalConversion generated from: '<S4>/PP_LED_A_Feedback_Init'
     */
    (void)Rte_Write_VeCITR_e_PP_LED_A_Feedback_Value
        (CITR_ac_B.OutportBufferForPP_LED_A_Feedback_Init);

    /* Outport: '<Root>/VeCITR_b_PP_LED_B_FailStatus_FA' incorporates:
     *  SignalConversion generated from: '<S4>/PP_LED_B_ FailStatus_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_PP_LED_B_FailStatus_FA_Value
        (CITR_ac_B.OutportBufferForPP_LED_B_FailStatus_FA_I);

    /* Outport: '<Root>/VeCITR_e_PP_LED_B_FailStatus' incorporates:
     *  SignalConversion generated from: '<S496>/PP_LED_B_ FailStatus_Init'
     *  SignalConversion generated from: '<S4>/PP_LED_B_ FailStatus_Init'
     */
    (void)Rte_Write_VeCITR_e_PP_LED_B_FailStatus_Value
        (CITR_ac_B.OutportBufferForPP_LED_B_FailStatus_Init);

    /* Outport: '<Root>/VeCITR_b_PP_LED_B_Color_Feedback_FA' incorporates:
     *  SignalConversion generated from: '<S4>/PP_LED_B_Color_Feedback_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_PP_LED_B_Color_Feedback_FA_Value
        (CITR_ac_B.OutportBufferForPP_LED_B_Color_Feedback_);

    /* Outport: '<Root>/VeCITR_e_PP_LED_B_Color_Feedback' incorporates:
     *  SignalConversion generated from: '<S496>/PP_LED_B_Color_Feedback_Init'
     *  SignalConversion generated from: '<S4>/PP_LED_B_Color_Feedback_Init'
     */
    (void)Rte_Write_VeCITR_e_PP_LED_B_Color_Feedback_Value
        (CITR_ac_B.OutportBufferForPP_LED_B_Color_Feedbac_j);

    /* Outport: '<Root>/VeCITR_b_PP_LED_B_Feedback_FA' incorporates:
     *  SignalConversion generated from: '<S4>/PP_LED_B_Feedback_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_PP_LED_B_Feedback_FA_Value
        (CITR_ac_B.OutportBufferForPP_LED_B_Feedback_FA_Ini);

    /* Outport: '<Root>/VeCITR_e_PP_LED_B_Feedback' incorporates:
     *  SignalConversion generated from: '<S496>/PP_LED_B_Feedback_Init'
     *  SignalConversion generated from: '<S4>/PP_LED_B_Feedback_Init'
     */
    (void)Rte_Write_VeCITR_e_PP_LED_B_Feedback_Value
        (CITR_ac_B.OutportBufferForPP_LED_B_Feedback_Init);

    /* Outport: '<Root>/VeCITR_b_PP_LED_C_FailStatus_FA' incorporates:
     *  SignalConversion generated from: '<S4>/PP_LED_C_ FailStatus_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_PP_LED_C_FailStatus_FA_Value
        (CITR_ac_B.OutportBufferForPP_LED_C_FailStatus_FA_I);

    /* Outport: '<Root>/VeCITR_e_PP_LED_C_FailStatus' incorporates:
     *  SignalConversion generated from: '<S496>/PP_LED_C_ FailStatus_Init'
     *  SignalConversion generated from: '<S4>/PP_LED_C_ FailStatus_Init'
     */
    (void)Rte_Write_VeCITR_e_PP_LED_C_FailStatus_Value
        (CITR_ac_B.OutportBufferForPP_LED_C_FailStatus_Init);

    /* Outport: '<Root>/VeCITR_b_PP_LED_C_Color_Feedback_FA' incorporates:
     *  SignalConversion generated from: '<S4>/PP_LED_C_Color_Feedback_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_PP_LED_C_Color_Feedback_FA_Value
        (CITR_ac_B.OutportBufferForPP_LED_C_Color_Feedback_);

    /* Outport: '<Root>/VeCITR_e_PP_LED_C_Color_Feedback' incorporates:
     *  SignalConversion generated from: '<S496>/PP_LED_C_Color_Feedback_Init'
     *  SignalConversion generated from: '<S4>/PP_LED_C_Color_Feedback_Init'
     */
    (void)Rte_Write_VeCITR_e_PP_LED_C_Color_Feedback_Value
        (CITR_ac_B.OutportBufferForPP_LED_C_Color_Feedbac_c);

    /* Outport: '<Root>/VeCITR_b_PP_LED_C_Feedback_FA' incorporates:
     *  SignalConversion generated from: '<S4>/PP_LED_C_Feedback_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_PP_LED_C_Feedback_FA_Value
        (CITR_ac_B.OutportBufferForPP_LED_C_Feedback_FA_Ini);

    /* Outport: '<Root>/VeCITR_e_PP_LED_C_Feedback' incorporates:
     *  SignalConversion generated from: '<S496>/PP_LED_C_Feedback_Init'
     *  SignalConversion generated from: '<S4>/PP_LED_C_Feedback_Init'
     */
    (void)Rte_Write_VeCITR_e_PP_LED_C_Feedback_Value
        (CITR_ac_B.OutportBufferForPP_LED_C_Feedback_Init);

    /* Outport: '<Root>/VeCITR_b_PP_LIN_Checksum_Error_FA' incorporates:
     *  SignalConversion generated from: '<S4>/PP_LIN_Checksum_Error_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_PP_LIN_Checksum_Error_FA_Value
        (CITR_ac_B.OutportBufferForPP_LIN_Checksum_Error_FA);

    /* Outport: '<Root>/VeCITR_b_PP_LIN_Checksum_Error' incorporates:
     *  SignalConversion generated from: '<S4>/PP_LIN_Checksum_Error_Init'
     */
    (void)Rte_Write_VeCITR_b_PP_LIN_Checksum_Error_Value
        (CITR_ac_B.OutportBufferForPP_LIN_Checksum_Error_In);

    /* Outport: '<Root>/VeCITR_b_PP_LIN_Data_Error_FA' incorporates:
     *  SignalConversion generated from: '<S4>/PP_LIN_Data_Error_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_PP_LIN_Data_Error_FA_Value
        (CITR_ac_B.OutportBufferForPP_LIN_Data_Error_FA_Ini);

    /* Outport: '<Root>/VeCITR_b_PP_LIN_Data_Error' incorporates:
     *  SignalConversion generated from: '<S4>/PP_LIN_Data_Error_Init'
     */
    (void)Rte_Write_VeCITR_b_PP_LIN_Data_Error_Value
        (CITR_ac_B.OutportBufferForPP_LIN_Data_Error_Init);

    /* Outport: '<Root>/VeCITR_b_PP_LIN_Parity_Error_FA' incorporates:
     *  SignalConversion generated from: '<S4>/PP_LIN_Parity_Error_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_PP_LIN_Parity_Error_FA_Value
        (CITR_ac_B.OutportBufferForPP_LIN_Parity_Error_FA_I);

    /* Outport: '<Root>/VeCITR_b_PP_LIN_Parity_Error' incorporates:
     *  SignalConversion generated from: '<S4>/PP_LIN_Parity_Error_Init'
     */
    (void)Rte_Write_VeCITR_b_PP_LIN_Parity_Error_Value
        (CITR_ac_B.OutportBufferForPP_LIN_Parity_Error_Init);

    /* Outport: '<Root>/VeCITR_e_RRM_VP_Level' incorporates:
     *  SignalConversion generated from: '<S493>/RRM_VP_Level_Init'
     *  SignalConversion generated from: '<S4>/RRM_VP_Level_Init'
     */
    (void)Rte_Write_VeCITR_e_RRM_VP_Level_Value
        (CITR_ac_B.OutportBufferForRRM_VP_Level_Init);

    /* Outport: '<Root>/VeCITR_b_RmtChrgPortLkCmdFA' incorporates:
     *  SignalConversion generated from: '<S4>/RmtChrgPortLkCmd_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_RmtChrgPortLkCmdFA_Value
        (CITR_ac_B.OutportBufferForRmtChrgPortLkCmd_FA_Init);

    /* Outport: '<Root>/VeCITR_e_RmtChrgPortLkCmd' incorporates:
     *  SignalConversion generated from: '<S489>/RmtChrgPortLkCmd_Init'
     *  SignalConversion generated from: '<S4>/RmtChrgPortLkCmd_Init'
     */
    (void)Rte_Write_VeCITR_e_RmtChrgPortLkCmd_Value
        (CITR_ac_B.OutportBufferForRmtChrgPortLkCmd_Init);

    /* Outport: '<Root>/VeCITR_b_RmtChrgPortLkCmd_SgnlRcvd' incorporates:
     *  SignalConversion generated from: '<S4>/RmtChrgPortLkCmd_SgnlRcvd_Init'
     */
    (void)Rte_Write_VeCITR_b_RmtChrgPortLkCmd_SgnlRcvd_Value
        (CITR_ac_B.OutportBufferForRmtChrgPortLkCmd_SgnlRcv);

    /* Outport: '<Root>/VeCITR_b_RsErrSPP2FA' incorporates:
     *  SignalConversion generated from: '<S4>/RsErrSPP2_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_RsErrSPP2FA_Value
        (CITR_ac_B.OutportBufferForRsErrSPP2_FA_Init);

    /* Outport: '<Root>/VeCITR_b_RsErrSPP2' incorporates:
     *  SignalConversion generated from: '<S4>/RsErrSPP2_Init'
     */
    (void)Rte_Write_VeCITR_b_RsErrSPP2_Value
        (CITR_ac_B.OutportBufferForRsErrSPP2_Init);

    /* Outport: '<Root>/VeCITR_b_RsErrSPPFA' incorporates:
     *  SignalConversion generated from: '<S4>/RsErrSPP_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_RsErrSPPFA_Value
        (CITR_ac_B.OutportBufferForRsErrSPP_FA_Init);

    /* Outport: '<Root>/VeCITR_b_RsErrSPP' incorporates:
     *  SignalConversion generated from: '<S4>/RsErrSPP_Init'
     */
    (void)Rte_Write_VeCITR_b_RsErrSPP_Value
        (CITR_ac_B.OutportBufferForRsErrSPP_Init);

    /* Outport: '<Root>/VeCITR_b_SOC_Max_Lev_FA' incorporates:
     *  SignalConversion generated from: '<S4>/SOC_Max_Lev_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_SOC_Max_Lev_FA_Value
        (CITR_ac_B.OutportBufferForSOC_Max_Lev_FA_Init);

    /* Outport: '<Root>/VeCITR_b_SOC_Max_Lev' incorporates:
     *  SignalConversion generated from: '<S4>/SOC_Max_Lev_Init'
     */
    (void)Rte_Write_VeCITR_b_SOC_Max_Lev_Value
        (CITR_ac_B.OutportBufferForSOC_Max_Lev_Init);

    /* Outport: '<Root>/VeCITR_b_HU_Sch1_ChargeUntilFull' incorporates:
     *  SignalConversion generated from: '<S4>/Sch1_HU_ChargeUntilFull_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch1_ChargeUntilFull_Value
        (CITR_ac_B.OutportBufferForSch1_HU_ChargeUntilFull_);

    /* Outport: '<Root>/VeCITR_b_HU_Sch1_Day_FA' incorporates:
     *  SignalConversion generated from: '<S4>/Sch1_HU_Day_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch1_Day_FA_Value
        (CITR_ac_B.OutportBufferForSch1_HU_Day_FA_Init);

    /* Outport: '<Root>/VeCITR_K_HU_Sch1_Day' incorporates:
     *  SignalConversion generated from: '<S4>/Sch1_HU_Day_Init'
     */
    (void)Rte_Write_VeCITR_K_HU_Sch1_Day_Value
        (CITR_ac_B.OutportBufferForSch1_HU_Day_Init);

    /* Outport: '<Root>/VeCITR_b_HU_Sch1_Day_SgnlRcvd' incorporates:
     *  SignalConversion generated from: '<S4>/Sch1_HU_Day_SgnlRcvd_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch1_Day_SgnlRcvd_Value
        (CITR_ac_B.OutportBufferForSch1_HU_Day_SgnlRcvd_Ini);

    /* Outport: '<Root>/VeCITR_b_HU_Sch1_Do_Not_Repeat' incorporates:
     *  SignalConversion generated from: '<S4>/Sch1_HU_Do_Not_Repeat_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch1_Do_Not_Repeat_Value
        (CITR_ac_B.OutportBufferForSch1_HU_Do_Not_Repeat_In);

    /* Outport: '<Root>/VeCITR_b_HU_Sch1_Enbl' incorporates:
     *  SignalConversion generated from: '<S4>/Sch1_HU_Enbl_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch1_Enbl_Value
        (CITR_ac_B.OutportBufferForSch1_HU_Enbl_Init);

    /* Outport: '<Root>/VeCITR_K_HU_Sch1_End_Time_Hr' incorporates:
     *  SignalConversion generated from: '<S4>/Sch1_HU_End_Time_Hr_Init'
     */
    (void)Rte_Write_VeCITR_K_HU_Sch1_End_Time_Hr_Value
        (CITR_ac_B.OutportBufferForSch1_HU_End_Time_Hr_Init);

    /* Outport: '<Root>/VeCITR_K_HU_Sch1_End_Time_Min' incorporates:
     *  SignalConversion generated from: '<S4>/Sch1_HU_End_Time_Min_Init'
     */
    (void)Rte_Write_VeCITR_K_HU_Sch1_End_Time_Min_Value
        (CITR_ac_B.OutportBufferForSch1_HU_End_Time_Min_Ini);

    /* Outport: '<Root>/VeCITR_b_HU_Sch1_Priority' incorporates:
     *  SignalConversion generated from: '<S4>/Sch1_HU_Priority_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch1_Priority_Value
        (CITR_ac_B.OutportBufferForSch1_HU_Priority_Init);

    /* Outport: '<Root>/VeCITR_K_HU_Sch1_Start_Time_Hr' incorporates:
     *  SignalConversion generated from: '<S4>/Sch1_HU_Start_Time_Hr_Init'
     */
    (void)Rte_Write_VeCITR_K_HU_Sch1_Start_Time_Hr_Value
        (CITR_ac_B.OutportBufferForSch1_HU_Start_Time_Hr_In);

    /* Outport: '<Root>/VeCITR_K_HU_Sch1_Start_Time_Min' incorporates:
     *  SignalConversion generated from: '<S4>/Sch1_HU_Start_Time_Min_Init'
     */
    (void)Rte_Write_VeCITR_K_HU_Sch1_Start_Time_Min_Value
        (CITR_ac_B.OutportBufferForSch1_HU_Start_Time_Min_I);

    /* Outport: '<Root>/VeCITR_b_HU_Sch1_Submit' incorporates:
     *  SignalConversion generated from: '<S4>/Sch1_HU_Submit_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch1_Submit_Value
        (CITR_ac_B.OutportBufferForSch1_HU_Submit_Init);

    /* Outport: '<Root>/VeCITR_e_HU_Sch1_Type' incorporates:
     *  SignalConversion generated from: '<S491>/Sch1_HU_Type_Init'
     *  SignalConversion generated from: '<S4>/Sch1_HU_Type_Init'
     */
    (void)Rte_Write_VeCITR_e_HU_Sch1_Type_Value
        (CITR_ac_B.OutportBufferForSch1_HU_Type_Init);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch1_ChargeUntilFull' incorporates:
     *  SignalConversion generated from: '<S4>/Sch1_TBM_ChargeUntilFull_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch1_ChargeUntilFull_Value
        (CITR_ac_B.OutportBufferForSch1_TBM_ChargeUntilFull);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch1_Day_FA' incorporates:
     *  SignalConversion generated from: '<S4>/Sch1_TBM_Day_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch1_Day_FA_Value
        (CITR_ac_B.OutportBufferForSch1_TBM_Day_FA_Init);

    /* Outport: '<Root>/VeCITR_K_TBM_Sch1_Day' incorporates:
     *  SignalConversion generated from: '<S4>/Sch1_TBM_Day_Init'
     */
    (void)Rte_Write_VeCITR_K_TBM_Sch1_Day_Value
        (CITR_ac_B.OutportBufferForSch1_TBM_Day_Init);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch1_Day_SgnlRcvd' incorporates:
     *  SignalConversion generated from: '<S4>/Sch1_TBM_Day_SgnlRcvd_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch1_Day_SgnlRcvd_Value
        (CITR_ac_B.OutportBufferForSch1_TBM_Day_SgnlRcvd_In);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch1_Do_Not_Repeat' incorporates:
     *  SignalConversion generated from: '<S4>/Sch1_TBM_Do_Not_Repeat_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch1_Do_Not_Repeat_Value
        (CITR_ac_B.OutportBufferForSch1_TBM_Do_Not_Repeat_I);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch1_Enbl' incorporates:
     *  SignalConversion generated from: '<S4>/Sch1_TBM_Enbl_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch1_Enbl_Value
        (CITR_ac_B.OutportBufferForSch1_TBM_Enbl_Init);

    /* Outport: '<Root>/VeCITR_K_TBM_Sch1_End_Time_Hr' incorporates:
     *  SignalConversion generated from: '<S4>/Sch1_TBM_End_Time_Hr_Init'
     */
    (void)Rte_Write_VeCITR_K_TBM_Sch1_End_Time_Hr_Value
        (CITR_ac_B.OutportBufferForSch1_TBM_End_Time_Hr_Ini);

    /* Outport: '<Root>/VeCITR_K_TBM_Sch1_End_Time_Min' incorporates:
     *  SignalConversion generated from: '<S4>/Sch1_TBM_End_Time_Min_Init'
     */
    (void)Rte_Write_VeCITR_K_TBM_Sch1_End_Time_Min_Value
        (CITR_ac_B.OutportBufferForSch1_TBM_End_Time_Min_In);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch1_Priority' incorporates:
     *  SignalConversion generated from: '<S4>/Sch1_TBM_Priority_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch1_Priority_Value
        (CITR_ac_B.OutportBufferForSch1_TBM_Priority_Init);

    /* Outport: '<Root>/VeCITR_K_TBM_Sch1_Start_Time_Hr' incorporates:
     *  SignalConversion generated from: '<S4>/Sch1_TBM_Start_Time_Hr_Init'
     */
    (void)Rte_Write_VeCITR_K_TBM_Sch1_Start_Time_Hr_Value
        (CITR_ac_B.OutportBufferForSch1_TBM_Start_Time_Hr_I);

    /* Outport: '<Root>/VeCITR_K_TBM_Sch1_Start_Time_Min' incorporates:
     *  SignalConversion generated from: '<S4>/Sch1_TBM_Start_Time_Min_Init'
     */
    (void)Rte_Write_VeCITR_K_TBM_Sch1_Start_Time_Min_Value
        (CITR_ac_B.OutportBufferForSch1_TBM_Start_Time_Min_);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch1_Submit' incorporates:
     *  SignalConversion generated from: '<S4>/Sch1_TBM_Submit_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch1_Submit_Value
        (CITR_ac_B.OutportBufferForSch1_TBM_Submit_Init);

    /* Outport: '<Root>/VeCITR_e_TBM_Sch1_Type' incorporates:
     *  SignalConversion generated from: '<S492>/Sch1_TBM_Type_Init'
     *  SignalConversion generated from: '<S4>/Sch1_TBM_Type_Init'
     */
    (void)Rte_Write_VeCITR_e_TBM_Sch1_Type_Value
        (CITR_ac_B.OutportBufferForSch1_TBM_Type_Init);

    /* Outport: '<Root>/VeCITR_b_HU_Sch2_ChargeUntilFull' incorporates:
     *  SignalConversion generated from: '<S4>/Sch2_HU_ChargeUntilFull_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch2_ChargeUntilFull_Value
        (CITR_ac_B.OutportBufferForSch2_HU_ChargeUntilFull_);

    /* Outport: '<Root>/VeCITR_b_HU_Sch2_Day_FA' incorporates:
     *  SignalConversion generated from: '<S4>/Sch2_HU_Day_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch2_Day_FA_Value
        (CITR_ac_B.OutportBufferForSch2_HU_Day_FA_Init);

    /* Outport: '<Root>/VeCITR_K_HU_Sch2_Day' incorporates:
     *  SignalConversion generated from: '<S4>/Sch2_HU_Day_Init'
     */
    (void)Rte_Write_VeCITR_K_HU_Sch2_Day_Value
        (CITR_ac_B.OutportBufferForSch2_HU_Day_Init);

    /* Outport: '<Root>/VeCITR_b_HU_Sch2_Day_SgnlRcvd' incorporates:
     *  SignalConversion generated from: '<S4>/Sch2_HU_Day_SgnlRcvd_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch2_Day_SgnlRcvd_Value
        (CITR_ac_B.OutportBufferForSch2_HU_Day_SgnlRcvd_Ini);

    /* Outport: '<Root>/VeCITR_b_HU_Sch2_Do_Not_Repeat' incorporates:
     *  SignalConversion generated from: '<S4>/Sch2_HU_Do_Not_Repeat_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch2_Do_Not_Repeat_Value
        (CITR_ac_B.OutportBufferForSch2_HU_Do_Not_Repeat_In);

    /* Outport: '<Root>/VeCITR_b_HU_Sch2_Enbl' incorporates:
     *  SignalConversion generated from: '<S4>/Sch2_HU_Enbl_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch2_Enbl_Value
        (CITR_ac_B.OutportBufferForSch2_HU_Enbl_Init);

    /* Outport: '<Root>/VeCITR_K_HU_Sch2_End_Time_Hr' incorporates:
     *  SignalConversion generated from: '<S4>/Sch2_HU_End_Time_Hr_Init'
     */
    (void)Rte_Write_VeCITR_K_HU_Sch2_End_Time_Hr_Value
        (CITR_ac_B.OutportBufferForSch2_HU_End_Time_Hr_Init);

    /* Outport: '<Root>/VeCITR_K_HU_Sch2_End_Time_Min' incorporates:
     *  SignalConversion generated from: '<S4>/Sch2_HU_End_Time_Min_Init'
     */
    (void)Rte_Write_VeCITR_K_HU_Sch2_End_Time_Min_Value
        (CITR_ac_B.OutportBufferForSch2_HU_End_Time_Min_Ini);

    /* Outport: '<Root>/VeCITR_b_HU_Sch2_Priority' incorporates:
     *  SignalConversion generated from: '<S4>/Sch2_HU_Priority_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch2_Priority_Value
        (CITR_ac_B.OutportBufferForSch2_HU_Priority_Init);

    /* Outport: '<Root>/VeCITR_K_HU_Sch2_Start_Time_Hr' incorporates:
     *  SignalConversion generated from: '<S4>/Sch2_HU_Start_Time_Hr_Init'
     */
    (void)Rte_Write_VeCITR_K_HU_Sch2_Start_Time_Hr_Value
        (CITR_ac_B.OutportBufferForSch2_HU_Start_Time_Hr_In);

    /* Outport: '<Root>/VeCITR_K_HU_Sch2_Start_Time_Min' incorporates:
     *  SignalConversion generated from: '<S4>/Sch2_HU_Start_Time_Min_Init'
     */
    (void)Rte_Write_VeCITR_K_HU_Sch2_Start_Time_Min_Value
        (CITR_ac_B.OutportBufferForSch2_HU_Start_Time_Min_I);

    /* Outport: '<Root>/VeCITR_b_HU_Sch2_Submit' incorporates:
     *  SignalConversion generated from: '<S4>/Sch2_HU_Submit_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch2_Submit_Value
        (CITR_ac_B.OutportBufferForSch2_HU_Submit_Init);

    /* Outport: '<Root>/VeCITR_e_HU_Sch2_Type' incorporates:
     *  SignalConversion generated from: '<S497>/Sch2_HU_Type_Init'
     *  SignalConversion generated from: '<S4>/Sch2_HU_Type_Init'
     */
    (void)Rte_Write_VeCITR_e_HU_Sch2_Type_Value
        (CITR_ac_B.OutportBufferForSch2_HU_Type_Init);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch2_ChargeUntilFull' incorporates:
     *  SignalConversion generated from: '<S4>/Sch2_TBM_ChargeUntilFull_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch2_ChargeUntilFull_Value
        (CITR_ac_B.OutportBufferForSch2_TBM_ChargeUntilFull);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch2_Day_FA' incorporates:
     *  SignalConversion generated from: '<S4>/Sch2_TBM_Day_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch2_Day_FA_Value
        (CITR_ac_B.OutportBufferForSch2_TBM_Day_FA_Init);

    /* Outport: '<Root>/VeCITR_K_TBM_Sch2_Day' incorporates:
     *  SignalConversion generated from: '<S4>/Sch2_TBM_Day_Init'
     */
    (void)Rte_Write_VeCITR_K_TBM_Sch2_Day_Value
        (CITR_ac_B.OutportBufferForSch2_TBM_Day_Init);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch2_Day_SgnlRcvd' incorporates:
     *  SignalConversion generated from: '<S4>/Sch2_TBM_Day_SgnlRcvd_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch2_Day_SgnlRcvd_Value
        (CITR_ac_B.OutportBufferForSch2_TBM_Day_SgnlRcvd_In);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch2_Do_Not_Repeat' incorporates:
     *  SignalConversion generated from: '<S4>/Sch2_TBM_Do_Not_Repeat_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch2_Do_Not_Repeat_Value
        (CITR_ac_B.OutportBufferForSch2_TBM_Do_Not_Repeat_I);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch2_Enbl' incorporates:
     *  SignalConversion generated from: '<S4>/Sch2_TBM_Enbl_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch2_Enbl_Value
        (CITR_ac_B.OutportBufferForSch2_TBM_Enbl_Init);

    /* Outport: '<Root>/VeCITR_K_TBM_Sch2_End_Time_Hr' incorporates:
     *  SignalConversion generated from: '<S4>/Sch2_TBM_End_Time_Hr_Init'
     */
    (void)Rte_Write_VeCITR_K_TBM_Sch2_End_Time_Hr_Value
        (CITR_ac_B.OutportBufferForSch2_TBM_End_Time_Hr_Ini);

    /* Outport: '<Root>/VeCITR_K_TBM_Sch2_End_Time_Min' incorporates:
     *  SignalConversion generated from: '<S4>/Sch2_TBM_End_Time_Min_Init'
     */
    (void)Rte_Write_VeCITR_K_TBM_Sch2_End_Time_Min_Value
        (CITR_ac_B.OutportBufferForSch2_TBM_End_Time_Min_In);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch2_Priority' incorporates:
     *  SignalConversion generated from: '<S4>/Sch2_TBM_Priority_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch2_Priority_Value
        (CITR_ac_B.OutportBufferForSch2_TBM_Priority_Init);

    /* Outport: '<Root>/VeCITR_K_TBM_Sch2_Start_Time_Hr' incorporates:
     *  SignalConversion generated from: '<S4>/Sch2_TBM_Start_Time_Hr_Init'
     */
    (void)Rte_Write_VeCITR_K_TBM_Sch2_Start_Time_Hr_Value
        (CITR_ac_B.OutportBufferForSch2_TBM_Start_Time_Hr_I);

    /* Outport: '<Root>/VeCITR_K_TBM_Sch2_Start_Time_Min' incorporates:
     *  SignalConversion generated from: '<S4>/Sch2_TBM_Start_Time_Min_Init'
     */
    (void)Rte_Write_VeCITR_K_TBM_Sch2_Start_Time_Min_Value
        (CITR_ac_B.OutportBufferForSch2_TBM_Start_Time_Min_);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch2_Submit' incorporates:
     *  SignalConversion generated from: '<S4>/Sch2_TBM_Submit_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch2_Submit_Value
        (CITR_ac_B.OutportBufferForSch2_TBM_Submit_Init);

    /* Outport: '<Root>/VeCITR_e_TBM_Sch2_Type' incorporates:
     *  SignalConversion generated from: '<S498>/Sch2_TBM_Type_Init'
     *  SignalConversion generated from: '<S4>/Sch2_TBM_Type_Init'
     */
    (void)Rte_Write_VeCITR_e_TBM_Sch2_Type_Value
        (CITR_ac_B.OutportBufferForSch2_TBM_Type_Init);

    /* Outport: '<Root>/VeCITR_b_HU_Sch3_ChargeUntilFull' incorporates:
     *  SignalConversion generated from: '<S4>/Sch3_HU_ChargeUntilFull_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch3_ChargeUntilFull_Value
        (CITR_ac_B.OutportBufferForSch3_HU_ChargeUntilFull_);

    /* Outport: '<Root>/VeCITR_b_HU_Sch3_Day_FA' incorporates:
     *  SignalConversion generated from: '<S4>/Sch3_HU_Day_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch3_Day_FA_Value
        (CITR_ac_B.OutportBufferForSch3_HU_Day_FA_Init);

    /* Outport: '<Root>/VeCITR_K_HU_Sch3_Day' incorporates:
     *  SignalConversion generated from: '<S4>/Sch3_HU_Day_Init'
     */
    (void)Rte_Write_VeCITR_K_HU_Sch3_Day_Value
        (CITR_ac_B.OutportBufferForSch3_HU_Day_Init);

    /* Outport: '<Root>/VeCITR_b_HU_Sch3_Day_SgnlRcvd' incorporates:
     *  SignalConversion generated from: '<S4>/Sch3_HU_Day_SgnlRcvd_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch3_Day_SgnlRcvd_Value
        (CITR_ac_B.OutportBufferForSch3_HU_Day_SgnlRcvd_Ini);

    /* Outport: '<Root>/VeCITR_b_HU_Sch3_Do_Not_Repeat' incorporates:
     *  SignalConversion generated from: '<S4>/Sch3_HU_Do_Not_Repeat_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch3_Do_Not_Repeat_Value
        (CITR_ac_B.OutportBufferForSch3_HU_Do_Not_Repeat_In);

    /* Outport: '<Root>/VeCITR_b_HU_Sch3_Enbl' incorporates:
     *  SignalConversion generated from: '<S4>/Sch3_HU_Enbl_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch3_Enbl_Value
        (CITR_ac_B.OutportBufferForSch3_HU_Enbl_Init);

    /* Outport: '<Root>/VeCITR_K_HU_Sch3_End_Time_Hr' incorporates:
     *  SignalConversion generated from: '<S4>/Sch3_HU_End_Time_Hr_Init'
     */
    (void)Rte_Write_VeCITR_K_HU_Sch3_End_Time_Hr_Value
        (CITR_ac_B.OutportBufferForSch3_HU_End_Time_Hr_Init);

    /* Outport: '<Root>/VeCITR_K_HU_Sch3_End_Time_Min' incorporates:
     *  SignalConversion generated from: '<S4>/Sch3_HU_End_Time_Min_Init'
     */
    (void)Rte_Write_VeCITR_K_HU_Sch3_End_Time_Min_Value
        (CITR_ac_B.OutportBufferForSch3_HU_End_Time_Min_Ini);

    /* Outport: '<Root>/VeCITR_b_HU_Sch3_Priority' incorporates:
     *  SignalConversion generated from: '<S4>/Sch3_HU_Priority_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch3_Priority_Value
        (CITR_ac_B.OutportBufferForSch3_HU_Priority_Init);

    /* Outport: '<Root>/VeCITR_K_HU_Sch3_Start_Time_Hr' incorporates:
     *  SignalConversion generated from: '<S4>/Sch3_HU_Start_Time_Hr_Init'
     */
    (void)Rte_Write_VeCITR_K_HU_Sch3_Start_Time_Hr_Value
        (CITR_ac_B.OutportBufferForSch3_HU_Start_Time_Hr_In);

    /* Outport: '<Root>/VeCITR_K_HU_Sch3_Start_Time_Min' incorporates:
     *  SignalConversion generated from: '<S4>/Sch3_HU_Start_Time_Min_Init'
     */
    (void)Rte_Write_VeCITR_K_HU_Sch3_Start_Time_Min_Value
        (CITR_ac_B.OutportBufferForSch3_HU_Start_Time_Min_I);

    /* Outport: '<Root>/VeCITR_b_HU_Sch3_Submit' incorporates:
     *  SignalConversion generated from: '<S4>/Sch3_HU_Submit_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch3_Submit_Value
        (CITR_ac_B.OutportBufferForSch3_HU_Submit_Init);

    /* Outport: '<Root>/VeCITR_e_HU_Sch3_Type' incorporates:
     *  SignalConversion generated from: '<S499>/Sch3_HU_Type_Init'
     *  SignalConversion generated from: '<S4>/Sch3_HU_Type_Init'
     */
    (void)Rte_Write_VeCITR_e_HU_Sch3_Type_Value
        (CITR_ac_B.OutportBufferForSch3_HU_Type_Init);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch3_ChargeUntilFull' incorporates:
     *  SignalConversion generated from: '<S4>/Sch3_TBM_ChargeUntilFull_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch3_ChargeUntilFull_Value
        (CITR_ac_B.OutportBufferForSch3_TBM_ChargeUntilFull);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch3_Day_FA' incorporates:
     *  SignalConversion generated from: '<S4>/Sch3_TBM_Day_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch3_Day_FA_Value
        (CITR_ac_B.OutportBufferForSch3_TBM_Day_FA_Init);

    /* Outport: '<Root>/VeCITR_K_TBM_Sch3_Day' incorporates:
     *  SignalConversion generated from: '<S4>/Sch3_TBM_Day_Init'
     */
    (void)Rte_Write_VeCITR_K_TBM_Sch3_Day_Value
        (CITR_ac_B.OutportBufferForSch3_TBM_Day_Init);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch3_Day_SgnlRcvd' incorporates:
     *  SignalConversion generated from: '<S4>/Sch3_TBM_Day_SgnlRcvd_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch3_Day_SgnlRcvd_Value
        (CITR_ac_B.OutportBufferForSch3_TBM_Day_SgnlRcvd_In);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch3_Do_Not_Repeat' incorporates:
     *  SignalConversion generated from: '<S4>/Sch3_TBM_Do_Not_Repeat_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch3_Do_Not_Repeat_Value
        (CITR_ac_B.OutportBufferForSch3_TBM_Do_Not_Repeat_I);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch3_Enbl' incorporates:
     *  SignalConversion generated from: '<S4>/Sch3_TBM_Enbl_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch3_Enbl_Value
        (CITR_ac_B.OutportBufferForSch3_TBM_Enbl_Init);

    /* Outport: '<Root>/VeCITR_K_TBM_Sch3_End_Time_Hr' incorporates:
     *  SignalConversion generated from: '<S4>/Sch3_TBM_End_Time_Hr_Init'
     */
    (void)Rte_Write_VeCITR_K_TBM_Sch3_End_Time_Hr_Value
        (CITR_ac_B.OutportBufferForSch3_TBM_End_Time_Hr_Ini);

    /* Outport: '<Root>/VeCITR_K_TBM_Sch3_End_Time_Min' incorporates:
     *  SignalConversion generated from: '<S4>/Sch3_TBM_End_Time_Min_Init'
     */
    (void)Rte_Write_VeCITR_K_TBM_Sch3_End_Time_Min_Value
        (CITR_ac_B.OutportBufferForSch3_TBM_End_Time_Min_In);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch3_Priority' incorporates:
     *  SignalConversion generated from: '<S4>/Sch3_TBM_Priority_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch3_Priority_Value
        (CITR_ac_B.OutportBufferForSch3_TBM_Priority_Init);

    /* Outport: '<Root>/VeCITR_K_TBM_Sch3_Start_Time_Hr' incorporates:
     *  SignalConversion generated from: '<S4>/Sch3_TBM_Start_Time_Hr_Init'
     */
    (void)Rte_Write_VeCITR_K_TBM_Sch3_Start_Time_Hr_Value
        (CITR_ac_B.OutportBufferForSch3_TBM_Start_Time_Hr_I);

    /* Outport: '<Root>/VeCITR_K_TBM_Sch3_Start_Time_Min' incorporates:
     *  SignalConversion generated from: '<S4>/Sch3_TBM_Start_Time_Min_Init'
     */
    (void)Rte_Write_VeCITR_K_TBM_Sch3_Start_Time_Min_Value
        (CITR_ac_B.OutportBufferForSch3_TBM_Start_Time_Min_);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch3_Submit' incorporates:
     *  SignalConversion generated from: '<S4>/Sch3_TBM_Submit_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch3_Submit_Value
        (CITR_ac_B.OutportBufferForSch3_TBM_Submit_Init);

    /* Outport: '<Root>/VeCITR_e_TBM_Sch3_Type' incorporates:
     *  SignalConversion generated from: '<S4>/Sch3_TBM_Type_Init'
     *  SignalConversion generated from: '<S500>/Sch3_TBM_Type_Init'
     */
    (void)Rte_Write_VeCITR_e_TBM_Sch3_Type_Value
        (CITR_ac_B.OutportBufferForSch3_TBM_Type_Init);

    /* Outport: '<Root>/VeCITR_b_HU_Sch4_Day_FA' incorporates:
     *  SignalConversion generated from: '<S4>/Sch4_HU_Day_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch4_Day_FA_Value
        (CITR_ac_B.OutportBufferForSch4_HU_Day_FA_Init);

    /* Outport: '<Root>/VeCITR_K_HU_Sch4_Day' incorporates:
     *  SignalConversion generated from: '<S4>/Sch4_HU_Day_Init'
     */
    (void)Rte_Write_VeCITR_K_HU_Sch4_Day_Value
        (CITR_ac_B.OutportBufferForSch4_HU_Day_Init);

    /* Outport: '<Root>/VeCITR_b_HU_Sch4_Day_SgnlRcvd' incorporates:
     *  SignalConversion generated from: '<S4>/Sch4_HU_Day_SgnlRcvd_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch4_Day_SgnlRcvd_Value
        (CITR_ac_B.OutportBufferForSch4_HU_Day_SgnlRcvd_Ini);

    /* Outport: '<Root>/VeCITR_b_HU_Sch4_Enbl' incorporates:
     *  SignalConversion generated from: '<S4>/Sch4_HU_Enbl_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch4_Enbl_Value
        (CITR_ac_B.OutportBufferForSch4_HU_Enbl_Init);

    /* Outport: '<Root>/VeCITR_K_HU_Sch4_Start_Time_Hr' incorporates:
     *  SignalConversion generated from: '<S4>/Sch4_HU_Start_Time_Hr_Init'
     */
    (void)Rte_Write_VeCITR_K_HU_Sch4_Start_Time_Hr_Value
        (CITR_ac_B.OutportBufferForSch4_HU_Start_Time_Hr_In);

    /* Outport: '<Root>/VeCITR_K_HU_Sch4_Start_Time_Min' incorporates:
     *  SignalConversion generated from: '<S4>/Sch4_HU_Start_Time_Min_Init'
     */
    (void)Rte_Write_VeCITR_K_HU_Sch4_Start_Time_Min_Value
        (CITR_ac_B.OutportBufferForSch4_HU_Start_Time_Min_I);

    /* Outport: '<Root>/VeCITR_b_HU_Sch4_Submit' incorporates:
     *  SignalConversion generated from: '<S4>/Sch4_HU_Submit_Init'
     */
    (void)Rte_Write_VeCITR_b_HU_Sch4_Submit_Value
        (CITR_ac_B.OutportBufferForSch4_HU_Submit_Init);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch4_Day_FA' incorporates:
     *  SignalConversion generated from: '<S4>/Sch4_TBM_Day_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch4_Day_FA_Value
        (CITR_ac_B.OutportBufferForSch4_TBM_Day_FA_Init);

    /* Outport: '<Root>/VeCITR_K_TBM_Sch4_Day' incorporates:
     *  SignalConversion generated from: '<S4>/Sch4_TBM_Day_Init'
     */
    (void)Rte_Write_VeCITR_K_TBM_Sch4_Day_Value
        (CITR_ac_B.OutportBufferForSch4_TBM_Day_Init);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch4_Day_SgnlRcvd' incorporates:
     *  SignalConversion generated from: '<S4>/Sch4_TBM_Day_SgnlRcvd_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch4_Day_SgnlRcvd_Value
        (CITR_ac_B.OutportBufferForSch4_TBM_Day_SgnlRcvd_In);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch4_Enbl' incorporates:
     *  SignalConversion generated from: '<S4>/Sch4_TBM_Enbl_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch4_Enbl_Value
        (CITR_ac_B.OutportBufferForSch4_TBM_Enbl_Init);

    /* Outport: '<Root>/VeCITR_K_TBM_Sch4_Start_Time_Hr' incorporates:
     *  SignalConversion generated from: '<S4>/Sch4_TBM_Start_Time_Hr_Init'
     */
    (void)Rte_Write_VeCITR_K_TBM_Sch4_Start_Time_Hr_Value
        (CITR_ac_B.OutportBufferForSch4_TBM_Start_Time_Hr_I);

    /* Outport: '<Root>/VeCITR_K_TBM_Sch4_Start_Time_Min' incorporates:
     *  SignalConversion generated from: '<S4>/Sch4_TBM_Start_Time_Min_Init'
     */
    (void)Rte_Write_VeCITR_K_TBM_Sch4_Start_Time_Min_Value
        (CITR_ac_B.OutportBufferForSch4_TBM_Start_Time_Min_);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch4_Submit' incorporates:
     *  SignalConversion generated from: '<S4>/Sch4_TBM_Submit_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch4_Submit_Value
        (CITR_ac_B.OutportBufferForSch4_TBM_Submit_Init);

    /* Outport: '<Root>/VeCITR_b_TBMStopChrgFA' incorporates:
     *  SignalConversion generated from: '<S4>/TBMStopChrg_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_TBMStopChrgFA_Value
        (CITR_ac_B.OutportBufferForTBMStopChrg_FA_Init);

    /* Outport: '<Root>/VeCITR_b_TBMStopChrg' incorporates:
     *  SignalConversion generated from: '<S4>/TBMStopChrg_Init'
     */
    (void)Rte_Write_VeCITR_b_TBMStopChrg_Value
        (CITR_ac_B.OutportBufferForTBMStopChrg_Init);

    /* Outport: '<Root>/VeCITR_b_TBM_ChargeNow' incorporates:
     *  SignalConversion generated from: '<S4>/TBM_ChrgNow_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_ChargeNow_Value
        (CITR_ac_B.OutportBufferForTBM_ChrgNow_Init);

    /* Outport: '<Root>/VeCITR_b_TBM_ChrgSchedType1FA' incorporates:
     *  SignalConversion generated from: '<S4>/TBM_ChrgSchedType1_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_ChrgSchedType1FA_Value
        (CITR_ac_B.OutportBufferForTBM_ChrgSchedType1_FA_In);

    /* Outport: '<Root>/VeCITR_e_TBM_ChrgSchedType1' incorporates:
     *  SignalConversion generated from: '<S489>/TBM_ChrgSchedType1_Init'
     *  SignalConversion generated from: '<S4>/TBM_ChrgSchedType1_Init'
     */
    (void)Rte_Write_VeCITR_e_TBM_ChrgSchedType1_Value
        (CITR_ac_B.OutportBufferForTBM_ChrgSchedType1_Init);

    /* Outport: '<Root>/VeCITR_b_TBM_ChrgSchedType2FA' incorporates:
     *  SignalConversion generated from: '<S4>/TBM_ChrgSchedType2_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_ChrgSchedType2FA_Value
        (CITR_ac_B.OutportBufferForTBM_ChrgSchedType2_FA_In);

    /* Outport: '<Root>/VeCITR_e_TBM_ChrgSchedType2' incorporates:
     *  SignalConversion generated from: '<S489>/TBM_ChrgSchedType2_Init'
     *  SignalConversion generated from: '<S4>/TBM_ChrgSchedType2_Init'
     */
    (void)Rte_Write_VeCITR_e_TBM_ChrgSchedType2_Value
        (CITR_ac_B.OutportBufferForTBM_ChrgSchedType2_Init);

    /* Outport: '<Root>/VeCITR_b_TBM_ExtChrgTarget1FA' incorporates:
     *  SignalConversion generated from: '<S4>/TBM_ExtChrgTarget1_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_ExtChrgTarget1FA_Value
        (CITR_ac_B.OutportBufferForTBM_ExtChrgTarget1_FA_In);

    /* Outport: '<Root>/VeCITR_Pct_TBM_ExtChrgTarget1' incorporates:
     *  SignalConversion generated from: '<S4>/TBM_ExtChrgTarget1_Init'
     */
    (void)Rte_Write_VeCITR_Pct_TBM_ExtChrgTarget1_Value
        (CITR_ac_B.OutportBufferForTBM_ExtChrgTarget1_Init);

    /* Outport: '<Root>/VeCITR_b_TBM_ExtChrgTarget2FA' incorporates:
     *  SignalConversion generated from: '<S4>/TBM_ExtChrgTarget2_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_ExtChrgTarget2FA_Value
        (CITR_ac_B.OutportBufferForTBM_ExtChrgTarget2_FA_In);

    /* Outport: '<Root>/VeCITR_Pct_TBM_ExtChrgTarget2' incorporates:
     *  SignalConversion generated from: '<S4>/TBM_ExtChrgTarget2_Init'
     */
    (void)Rte_Write_VeCITR_Pct_TBM_ExtChrgTarget2_Value
        (CITR_ac_B.OutportBufferForTBM_ExtChrgTarget2_Init);

    /* Outport: '<Root>/VeCITR_b_TBM_ImmChrgTarget1FA' incorporates:
     *  SignalConversion generated from: '<S4>/TBM_ImmChrgTarget1_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_ImmChrgTarget1FA_Value
        (CITR_ac_B.OutportBufferForTBM_ImmChrgTarget1_FA_In);

    /* Outport: '<Root>/VeCITR_Pct_TBM_ImmChrgTarget1' incorporates:
     *  SignalConversion generated from: '<S4>/TBM_ImmChrgTarget1_Init'
     */
    (void)Rte_Write_VeCITR_Pct_TBM_ImmChrgTarget1_Value
        (CITR_ac_B.OutportBufferForTBM_ImmChrgTarget1_Init);

    /* Outport: '<Root>/VeCITR_b_TBM_ImmChrgTarget2FA' incorporates:
     *  SignalConversion generated from: '<S4>/TBM_ImmChrgTarget2_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_ImmChrgTarget2FA_Value
        (CITR_ac_B.OutportBufferForTBM_ImmChrgTarget2_FA_In);

    /* Outport: '<Root>/VeCITR_Pct_TBM_ImmChrgTarget2' incorporates:
     *  SignalConversion generated from: '<S4>/TBM_ImmChrgTarget2_Init'
     */
    (void)Rte_Write_VeCITR_Pct_TBM_ImmChrgTarget2_Value
        (CITR_ac_B.OutportBufferForTBM_ImmChrgTarget2_Init);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch1_End_Time_HrFA' incorporates:
     *  SignalConversion generated from: '<S4>/TBM_Sch1_End_Time_HrFA_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch1_End_Time_HrFA_Value
        (CITR_ac_B.OutportBufferForTBM_Sch1_End_Time_HrFA_I);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch1_End_Time_MinFA' incorporates:
     *  SignalConversion generated from: '<S4>/TBM_Sch1_End_Time_MinFA_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch1_End_Time_MinFA_Value
        (CITR_ac_B.OutportBufferForTBM_Sch1_End_Time_MinFA_);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch1_Start_Time_HrFA' incorporates:
     *  SignalConversion generated from: '<S4>/TBM_Sch1_Start_Time_HrFA_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch1_Start_Time_HrFA_Value
        (CITR_ac_B.OutportBufferForTBM_Sch1_Start_Time_HrFA);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch1_Start_Time_MinFA' incorporates:
     *  SignalConversion generated from: '<S4>/TBM_Sch1_Start_Time_MinFA_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch1_Start_Time_MinFA_Value
        (CITR_ac_B.OutportBufferForTBM_Sch1_Start_Time_MinF);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch1_TemperatureFA' incorporates:
     *  SignalConversion generated from: '<S4>/TBM_Sch1_TemperatureFA_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch1_TemperatureFA_Value
        (CITR_ac_B.OutportBufferForTBM_Sch1_TemperatureFA_I);

    /* Outport: '<Root>/VeCITR_T_TBM_Sch1_Temperature' incorporates:
     *  SignalConversion generated from: '<S4>/TBM_Sch1_Temperature_Init'
     */
    (void)Rte_Write_VeCITR_T_TBM_Sch1_Temperature_Value
        (CITR_ac_B.OutportBufferForTBM_Sch1_Temperature_Ini);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch1_TypeFA' incorporates:
     *  SignalConversion generated from: '<S4>/TBM_Sch1_TypeFA_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch1_TypeFA_Value
        (CITR_ac_B.OutportBufferForTBM_Sch1_TypeFA_Init);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch2_End_Time_HrFA' incorporates:
     *  SignalConversion generated from: '<S4>/TBM_Sch2_End_Time_HrFA_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch2_End_Time_HrFA_Value
        (CITR_ac_B.OutportBufferForTBM_Sch2_End_Time_HrFA_I);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch2_End_Time_MinFA' incorporates:
     *  SignalConversion generated from: '<S4>/TBM_Sch2_End_Time_MinFA_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch2_End_Time_MinFA_Value
        (CITR_ac_B.OutportBufferForTBM_Sch2_End_Time_MinFA_);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch2_Start_Time_HrFA' incorporates:
     *  SignalConversion generated from: '<S4>/TBM_Sch2_Start_Time_HrFA_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch2_Start_Time_HrFA_Value
        (CITR_ac_B.OutportBufferForTBM_Sch2_Start_Time_HrFA);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch2_Start_Time_MinFA' incorporates:
     *  SignalConversion generated from: '<S4>/TBM_Sch2_Start_Time_MinFA_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch2_Start_Time_MinFA_Value
        (CITR_ac_B.OutportBufferForTBM_Sch2_Start_Time_MinF);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch2_TemperatureFA' incorporates:
     *  SignalConversion generated from: '<S4>/TBM_Sch2_TemperatureFA_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch2_TemperatureFA_Value
        (CITR_ac_B.OutportBufferForTBM_Sch2_TemperatureFA_I);

    /* Outport: '<Root>/VeCITR_T_TBM_Sch2_Temperature' incorporates:
     *  SignalConversion generated from: '<S4>/TBM_Sch2_Temperature_Init'
     */
    (void)Rte_Write_VeCITR_T_TBM_Sch2_Temperature_Value
        (CITR_ac_B.OutportBufferForTBM_Sch2_Temperature_Ini);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch2_TypeFA' incorporates:
     *  SignalConversion generated from: '<S4>/TBM_Sch2_TypeFA_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch2_TypeFA_Value
        (CITR_ac_B.OutportBufferForTBM_Sch2_TypeFA_Init);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch3_AllowFA' incorporates:
     *  SignalConversion generated from: '<S4>/TBM_Sch3_AllowFA_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch3_AllowFA_Value
        (CITR_ac_B.OutportBufferForTBM_Sch3_AllowFA_Init);

    /* Outport: '<Root>/VeCITR_e_TBM_Sch3_Allow' incorporates:
     *  SignalConversion generated from: '<S4>/TBM_Sch3_Allow_Init'
     *  SignalConversion generated from: '<S500>/TBM_Sch3_Allow_Init'
     */
    (void)Rte_Write_VeCITR_e_TBM_Sch3_Allow_Value
        (CITR_ac_B.OutportBufferForTBM_Sch3_Allow_Init);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch3_End_Time_HrFA' incorporates:
     *  SignalConversion generated from: '<S4>/TBM_Sch3_End_Time_HrFA_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch3_End_Time_HrFA_Value
        (CITR_ac_B.OutportBufferForTBM_Sch3_End_Time_HrFA_I);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch3_End_Time_MinFA' incorporates:
     *  SignalConversion generated from: '<S4>/TBM_Sch3_End_Time_MinFA_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch3_End_Time_MinFA_Value
        (CITR_ac_B.OutportBufferForTBM_Sch3_End_Time_MinFA_);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch3_Start_Time_HrFA' incorporates:
     *  SignalConversion generated from: '<S4>/TBM_Sch3_Start_Time_HrFA_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch3_Start_Time_HrFA_Value
        (CITR_ac_B.OutportBufferForTBM_Sch3_Start_Time_HrFA);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch3_Start_Time_MinFA' incorporates:
     *  SignalConversion generated from: '<S4>/TBM_Sch3_Start_Time_MinFA_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch3_Start_Time_MinFA_Value
        (CITR_ac_B.OutportBufferForTBM_Sch3_Start_Time_MinF);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch3_TemperatureFA' incorporates:
     *  SignalConversion generated from: '<S4>/TBM_Sch3_TemperatureFA_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch3_TemperatureFA_Value
        (CITR_ac_B.OutportBufferForTBM_Sch3_TemperatureFA_I);

    /* Outport: '<Root>/VeCITR_T_TBM_Sch3_Temperature' incorporates:
     *  SignalConversion generated from: '<S4>/TBM_Sch3_Temperature_Init'
     */
    (void)Rte_Write_VeCITR_T_TBM_Sch3_Temperature_Value
        (CITR_ac_B.OutportBufferForTBM_Sch3_Temperature_Ini);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch3_TypeFA' incorporates:
     *  SignalConversion generated from: '<S4>/TBM_Sch3_TypeFA_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch3_TypeFA_Value
        (CITR_ac_B.OutportBufferForTBM_Sch3_TypeFA_Init);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch4_AllowFA' incorporates:
     *  SignalConversion generated from: '<S4>/TBM_Sch4_AllowFA_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch4_AllowFA_Value
        (CITR_ac_B.OutportBufferForTBM_Sch4_AllowFA_Init);

    /* Outport: '<Root>/VeCITR_e_TBM_Sch4_Allow' incorporates:
     *  SignalConversion generated from: '<S4>/TBM_Sch4_Allow_Init'
     *  SignalConversion generated from: '<S502>/TBM_Sch4_Allow_Init'
     */
    (void)Rte_Write_VeCITR_e_TBM_Sch4_Allow_Value
        (CITR_ac_B.OutportBufferForTBM_Sch4_Allow_Init);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch4_Start_Time_HrFA' incorporates:
     *  SignalConversion generated from: '<S4>/TBM_Sch4_Start_Time_HrFA_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch4_Start_Time_HrFA_Value
        (CITR_ac_B.OutportBufferForTBM_Sch4_Start_Time_HrFA);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch4_Start_Time_MinFA' incorporates:
     *  SignalConversion generated from: '<S4>/TBM_Sch4_Start_Time_MinFA_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch4_Start_Time_MinFA_Value
        (CITR_ac_B.OutportBufferForTBM_Sch4_Start_Time_MinF);

    /* Outport: '<Root>/VeCITR_b_TBM_Sch4_TemperatureFA' incorporates:
     *  SignalConversion generated from: '<S4>/TBM_Sch4_TemperatureFA_Init'
     */
    (void)Rte_Write_VeCITR_b_TBM_Sch4_TemperatureFA_Value
        (CITR_ac_B.OutportBufferForTBM_Sch4_TemperatureFA_I);

    /* Outport: '<Root>/VeCITR_T_TBM_Sch4_Temperature' incorporates:
     *  SignalConversion generated from: '<S4>/TBM_Sch4_Temperature_Init'
     */
    (void)Rte_Write_VeCITR_T_TBM_Sch4_Temperature_Value
        (CITR_ac_B.OutportBufferForTBM_Sch4_Temperature_Ini);

    /* Outport: '<Root>/VeCITR_b_TimeToCharge_FA' incorporates:
     *  SignalConversion generated from: '<S4>/TimeToCharge_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_TimeToCharge_FA_Value
        (CITR_ac_B.OutportBufferForTimeToCharge_FA_Init);

    /* Outport: '<Root>/VeCITR_t_TimeToCharge' incorporates:
     *  SignalConversion generated from: '<S4>/TimeToCharge_Init'
     */
    (void)Rte_Write_VeCITR_t_TimeToCharge_Value
        (CITR_ac_B.OutportBufferForTimeToCharge_Init);

    /* Outport: '<Root>/VeCITR_K_Time_Hour1' incorporates:
     *  SignalConversion generated from: '<S4>/Time_Hr1_Init'
     */
    (void)Rte_Write_VeCITR_K_Time_Hour1_Value
        (CITR_ac_B.OutportBufferForTime_Hr1_Init);

    /* Outport: '<Root>/VeCITR_K_Time_Hour2' incorporates:
     *  SignalConversion generated from: '<S4>/Time_Hr2_Init'
     */
    (void)Rte_Write_VeCITR_K_Time_Hour2_Value
        (CITR_ac_B.OutportBufferForTime_Hr2_Init);

    /* Outport: '<Root>/VeCITR_K_Time_Minute1' incorporates:
     *  SignalConversion generated from: '<S4>/Time_Min1_Init'
     */
    (void)Rte_Write_VeCITR_K_Time_Minute1_Value
        (CITR_ac_B.OutportBufferForTime_Min1_Init);

    /* Outport: '<Root>/VeCITR_K_Time_Minute2' incorporates:
     *  SignalConversion generated from: '<S4>/Time_Min2_Init'
     */
    (void)Rte_Write_VeCITR_K_Time_Minute2_Value
        (CITR_ac_B.OutportBufferForTime_Min2_Init);

    /* Outport: '<Root>/VeCITR_b_V2HModeReqFA' incorporates:
     *  SignalConversion generated from: '<S4>/V2HModeReq_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_V2HModeReqFA_Value
        (CITR_ac_B.OutportBufferForV2HModeReq_FA_Init);

    /* Outport: '<Root>/VeCITR_b_V2HModeReq' incorporates:
     *  SignalConversion generated from: '<S4>/V2HModeReq_Init'
     */
    (void)Rte_Write_VeCITR_b_V2HModeReq_Value
        (CITR_ac_B.OutportBufferForV2HModeReq_Init);

    /* Outport: '<Root>/VeCITR_b_V2HReqFA' incorporates:
     *  SignalConversion generated from: '<S4>/V2HReq_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_V2HReqFA_Value
        (CITR_ac_B.OutportBufferForV2HReq_FA_Init);

    /* Outport: '<Root>/VeCITR_b_V2HReq' incorporates:
     *  SignalConversion generated from: '<S4>/V2HReq_Init'
     */
    (void)Rte_Write_VeCITR_b_V2HReq_Value(CITR_ac_B.OutportBufferForV2HReq_Init);

    /* Outport: '<Root>/VeCITR_b_V2HRsrvBattFA' incorporates:
     *  SignalConversion generated from: '<S4>/V2HRsrvBatt_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_V2HRsrvBattFA_Value
        (CITR_ac_B.OutportBufferForV2HRsrvBatt_FA_Init);

    /* Outport: '<Root>/VeCITR_Pct_V2HRsrvBatt' incorporates:
     *  SignalConversion generated from: '<S4>/V2HRsrvBatt_Init'
     */
    (void)Rte_Write_VeCITR_Pct_V2HRsrvBatt_Value
        (CITR_ac_B.OutportBufferForV2HRsrvBatt_Init);

    /* Outport: '<Root>/VeCITR_b_V2HSubmitFA' incorporates:
     *  SignalConversion generated from: '<S4>/V2HSubmit_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_V2HSubmitFA_Value
        (CITR_ac_B.OutportBufferForV2HSubmit_FA_Init);

    /* Outport: '<Root>/VeCITR_b_V2HSubmit' incorporates:
     *  SignalConversion generated from: '<S4>/V2HSubmit_Init'
     */
    (void)Rte_Write_VeCITR_b_V2HSubmit_Value
        (CITR_ac_B.OutportBufferForV2HSubmit_Init);

    /* Outport: '<Root>/VeCITR_b_V2LModeReqFA' incorporates:
     *  SignalConversion generated from: '<S4>/V2LModeReq_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_V2LModeReqFA_Value
        (CITR_ac_B.OutportBufferForV2LModeReq_FA_Init);

    /* Outport: '<Root>/VeCITR_b_V2LModeReq' incorporates:
     *  SignalConversion generated from: '<S4>/V2LModeReq_Init'
     */
    (void)Rte_Write_VeCITR_b_V2LModeReq_Value
        (CITR_ac_B.OutportBufferForV2LModeReq_Init);

    /* Outport: '<Root>/VeCITR_b_V2LRsrvBattFA' incorporates:
     *  SignalConversion generated from: '<S4>/V2LRsrvBatt_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_V2LRsrvBattFA_Value
        (CITR_ac_B.OutportBufferForV2LRsrvBatt_FA_Init);

    /* Outport: '<Root>/VeCITR_Pct_V2LRsrvBatt' incorporates:
     *  SignalConversion generated from: '<S4>/V2LRsrvBatt_Init'
     */
    (void)Rte_Write_VeCITR_Pct_V2LRsrvBatt_Value
        (CITR_ac_B.OutportBufferForV2LRsrvBatt_Init);

    /* Outport: '<Root>/VeCITR_b_V2LSubmitFA' incorporates:
     *  SignalConversion generated from: '<S4>/V2LSubmit_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_V2LSubmitFA_Value
        (CITR_ac_B.OutportBufferForV2LSubmit_FA_Init);

    /* Outport: '<Root>/VeCITR_b_V2LSubmit' incorporates:
     *  SignalConversion generated from: '<S4>/V2LSubmit_Init'
     */
    (void)Rte_Write_VeCITR_b_V2LSubmit_Value
        (CITR_ac_B.OutportBufferForV2LSubmit_Init);

    /* Outport: '<Root>/VeCITR_b_V2LTrunkReqFA' incorporates:
     *  SignalConversion generated from: '<S4>/V2LTrunkReq_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_V2LTrunkReqFA_Value
        (CITR_ac_B.OutportBufferForV2LTrunkReq_FA_Init);

    /* Outport: '<Root>/VeCITR_b_V2LTrunkReq' incorporates:
     *  SignalConversion generated from: '<S4>/V2LTrunkReq_Init'
     */
    (void)Rte_Write_VeCITR_b_V2LTrunkReq_Value
        (CITR_ac_B.OutportBufferForV2LTrunkReq_Init);

    /* Outport: '<Root>/VeCITR_b_V2L_AllReqFA' incorporates:
     *  SignalConversion generated from: '<S4>/V2L_AllReq_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_V2L_AllReqFA_Value
        (CITR_ac_B.OutportBufferForV2L_AllReq_FA_Init);

    /* Outport: '<Root>/VeCITR_b_V2L_AllReq' incorporates:
     *  SignalConversion generated from: '<S4>/V2L_AllReq_Init'
     */
    (void)Rte_Write_VeCITR_b_V2L_AllReq_Value
        (CITR_ac_B.OutportBufferForV2L_AllReq_Init);

    /* Outport: '<Root>/VeCITR_b_V2L_FrunkReqFA' incorporates:
     *  SignalConversion generated from: '<S4>/V2L_FrunkReq_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_V2L_FrunkReqFA_Value
        (CITR_ac_B.OutportBufferForV2L_FrunkReq_FA_Init);

    /* Outport: '<Root>/VeCITR_b_V2L_FrunkReq' incorporates:
     *  SignalConversion generated from: '<S4>/V2L_FrunkReq_Init'
     */
    (void)Rte_Write_VeCITR_b_V2L_FrunkReq_Value
        (CITR_ac_B.OutportBufferForV2L_FrunkReq_Init);

    /* Outport: '<Root>/VeCITR_b_V2VModeReqFA' incorporates:
     *  SignalConversion generated from: '<S4>/V2VModeReq_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_V2VModeReqFA_Value
        (CITR_ac_B.OutportBufferForV2VModeReq_FA_Init);

    /* Outport: '<Root>/VeCITR_b_V2VModeReq' incorporates:
     *  SignalConversion generated from: '<S4>/V2VModeReq_Init'
     */
    (void)Rte_Write_VeCITR_b_V2VModeReq_Value
        (CITR_ac_B.OutportBufferForV2VModeReq_Init);

    /* Outport: '<Root>/VeCITR_b_V2VReqFA' incorporates:
     *  SignalConversion generated from: '<S4>/V2VReq_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_V2VReqFA_Value
        (CITR_ac_B.OutportBufferForV2VReq_FA_Init);

    /* Outport: '<Root>/VeCITR_b_V2VReq' incorporates:
     *  SignalConversion generated from: '<S4>/V2VReq_Init'
     */
    (void)Rte_Write_VeCITR_b_V2VReq_Value(CITR_ac_B.OutportBufferForV2VReq_Init);

    /* Outport: '<Root>/VeCITR_b_V2VRsrvBattFA' incorporates:
     *  SignalConversion generated from: '<S4>/V2VRsrvBatt_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_V2VRsrvBattFA_Value
        (CITR_ac_B.OutportBufferForV2VRsrvBatt_FA_Init);

    /* Outport: '<Root>/VeCITR_Pct_V2VRsrvBatt' incorporates:
     *  SignalConversion generated from: '<S4>/V2VRsrvBatt_Init'
     */
    (void)Rte_Write_VeCITR_Pct_V2VRsrvBatt_Value
        (CITR_ac_B.OutportBufferForV2VRsrvBatt_Init);

    /* Outport: '<Root>/VeCITR_b_V2VSubmitFA' incorporates:
     *  SignalConversion generated from: '<S4>/V2VSubmit_FA_Init'
     */
    (void)Rte_Write_VeCITR_b_V2VSubmitFA_Value
        (CITR_ac_B.OutportBufferForV2VSubmit_FA_Init);

    /* Outport: '<Root>/VeCITR_b_V2VSubmit' incorporates:
     *  SignalConversion generated from: '<S4>/V2VSubmit_Init'
     */
    (void)Rte_Write_VeCITR_b_V2VSubmit_Value
        (CITR_ac_B.OutportBufferForV2VSubmit_Init);

    /* Outport: '<Root>/VeCITR_b_ChrgPortDoorSts' incorporates:
     *  SignalConversion generated from: '<S4>/VeCITR_b_ChrgPortDoorSts_Out_Init'
     */
    (void)Rte_Write_VeCITR_b_ChrgPortDoorSts_Value
        (CITR_ac_B.OutportBufferForVeCITR_b_ChrgPortDoorSts);

    /* Outport: '<Root>/VeCITR_b_ChrgPortLockSts_FA' incorporates:
     *  SignalConversion generated from: '<S4>/VeCITR_b_ChrgPortLockSts_FA_Out_Init'
     */
    (void)Rte_Write_VeCITR_b_ChrgPortLockSts_FA_Value
        (CITR_ac_B.OutportBufferForVeCITR_b_ChrgPortLockS_k);

    /* Outport: '<Root>/VeCITR_b_ChrgPortLockSts' incorporates:
     *  SignalConversion generated from: '<S4>/VeCITR_b_ChrgPortLockSts_Out_Init'
     */
    (void)Rte_Write_VeCITR_b_ChrgPortLockSts_Value
        (CITR_ac_B.OutportBufferForVeCITR_b_ChrgPortLockSts);

    /* Outport: '<Root>/VeCITR_b_ChrgPortSts' incorporates:
     *  SignalConversion generated from: '<S4>/VeCITR_b_ChrgPortSts_Out_Init'
     */
    (void)Rte_Write_VeCITR_b_ChrgPortSts_Value
        (CITR_ac_B.OutportBufferForVeCITR_b_ChrgPortSts_Out);

    /* Outport: '<Root>/VeCITR_b_DoorLockLastElSts_Rcvd' incorporates:
     *  SignalConversion generated from: '<S4>/VeCITR_b_DoorLockLastElSts_Rcvd_Out_Init'
     */
    (void)Rte_Write_VeCITR_b_DoorLockLastElSts_Rcvd_Value
        (CITR_ac_B.OutportBufferForVeCITR_b_DoorLockLastElS);

    /* Outport: '<Root>/VeCITR_b_HBridge_ChrgPortLck_Cal' incorporates:
     *  SignalConversion generated from: '<S4>/VeCITR_b_HBridge_ChrgPortLck_Cal_Out_Init'
     */
    (void)Rte_Write_VeCITR_b_HBridge_ChrgPortLck_Cal_Value
        (CITR_ac_B.OutportBufferForVeCITR_b_HBridge_ChrgPor);

    /* Outport: '<Root>/VeCITR_b_Lock_Sense' incorporates:
     *  SignalConversion generated from: '<S4>/VeCITR_b_Lock_Sense_Out_Init'
     */
    (void)Rte_Write_VeCITR_b_Lock_Sense_Value
        (CITR_ac_B.OutportBufferForVeCITR_b_Lock_Sense_Out_);

    /* Outport: '<Root>/VeCITR_b_PortLockBCM_Cmd' incorporates:
     *  SignalConversion generated from: '<S4>/VeCITR_b_PortLockBCM_Cmd_Out_Init'
     */
    (void)Rte_Write_VeCITR_b_PortLockBCM_Cmd_Value
        (CITR_ac_B.OutportBufferForVeCITR_b_PortLockBCM_Cmd);

    /* Outport: '<Root>/VeCITR_b_PwrLimReq_FA' incorporates:
     *  SignalConversion generated from: '<S4>/VeCITR_b_PwrLimReq_FA_Out_Init'
     */
    (void)Rte_Write_VeCITR_b_PwrLimReq_FA_Value
        (CITR_ac_B.OutportBufferForVeCITR_b_PwrLimReq_FA_Ou);

    /* Outport: '<Root>/VeCITR_b_PwrLimReq_SgnlRcvd' incorporates:
     *  SignalConversion generated from: '<S4>/VeCITR_b_PwrLimReq_SgnlRcvd_Out_Init'
     */
    (void)Rte_Write_VeCITR_b_PwrLimReq_SgnlRcvd_Value
        (CITR_ac_B.OutportBufferForVeCITR_b_PwrLimReq_SgnlR);

    /* Outport: '<Root>/VeCITR_e_ChrgPortLock_StsB' incorporates:
     *  SignalConversion generated from: '<S4>/VeCITR_e_ChrgPortLock_StsB_Out_Init'
     *  SignalConversion generated from: '<S503>/VeCITR_e_ChrgPortLock_StsB_Out_Init'
     */
    (void)Rte_Write_VeCITR_e_ChrgPortLock_StsB_Value
        (CITR_ac_B.OutportBufferForVeCITR_e_ChrgPortLock_St);

    /* Outport: '<Root>/VeCITR_e_DoorLockLastElSts' incorporates:
     *  SignalConversion generated from: '<S4>/VeCITR_e_DoorLockLastElSts_Out_Init'
     *  SignalConversion generated from: '<S503>/VeCITR_e_DoorLockLastElSts_Out_Init'
     */
    (void)Rte_Write_VeCITR_e_DoorLockLastElSts_Value
        (CITR_ac_B.OutportBufferForVeCITR_e_DoorLockLastElS);

    /* Outport: '<Root>/VeCITR_e_PwrLimReq' incorporates:
     *  SignalConversion generated from: '<S4>/VeCITR_e_PwrLimReq_Out_Init'
     *  SignalConversion generated from: '<S503>/VeCITR_e_PwrLimReq_Out_Init'
     */
    (void)Rte_Write_VeCITR_e_PwrLimReq_Value
        (CITR_ac_B.OutportBufferForVeCITR_e_PwrLimReq_Out_I);

    /* Merge: '<Root>/Merge_9' incorporates:
     *  SignalConversion generated from: '<S493>/ChrgPortDoorSts_Init'
     *  SignalConversion generated from: '<S4>/ChrgPortDoorSts_Init_write'
     * */
    Rte_IrvWrite_CITR_PwrOn_ChrgPortDoorSts_Init_write_IRV
        (CITR_ac_B.OutportBufferForChrgPortDoorSts_Init);

    /* Merge: '<Root>/Merge_5_Irv' incorporates:
     *  SignalConversion generated from: '<S4>/ChrgPortLock_StsB_FA_Init_write'
     * */
    Rte_IrvWrite_CITR_PwrOn_ChrgPortLock_StsB_FA_Init_write_IRV
        (CITR_ac_B.OutportBufferForChrgPortLock_StsB_FA_Ini);

    /* Merge: '<Root>/Merge_4_Irv' incorporates:
     *  SignalConversion generated from: '<S4>/ChrgPortLock_StsB_Init_write'
     * */
    Rte_IrvWrite_CITR_PwrOn_ChrgPortLock_StsB_Init_write_IRV
        (CITR_ac_B.OutportBufferForChrgPortLock_StsB_Init);

    /* Merge: '<Root>/Merge_7_Irv' incorporates:
     *  SignalConversion generated from: '<S4>/ChrgPortLock_StsC_FA_Init_write'
     * */
    Rte_IrvWrite_CITR_PwrOn_ChrgPortLock_StsC_FA_Init_write_IRV
        (CITR_ac_B.OutportBufferForChrgPortLock_StsC_FA_Ini);

    /* Merge: '<Root>/Merge_6_Irv' incorporates:
     *  SignalConversion generated from: '<S4>/ChrgPortLock_StsC_Init_write'
     * */
    Rte_IrvWrite_CITR_PwrOn_ChrgPortLock_StsC_Init_write_IRV
        (CITR_ac_B.OutportBufferForChrgPortLock_StsC_Init);

    /* Merge: '<Root>/Merge_34_Irv' incorporates:
     *  SignalConversion generated from: '<S4>/ChrgPort_BCM_Cmd_Init_write'
     * */
    Rte_IrvWrite_CITR_PwrOn_ChrgPort_BCM_Cmd_Init_write_IRV
        (CITR_ac_B.OutportBufferForChrgPort_BCM_Cmd_Init);

    /* Merge: '<Root>/Merge_8_Irv' incorporates:
     *  SignalConversion generated from: '<S4>/ChrgPort_BCM_Cmd_SgnlRcvd_Init_write'
     * */
    Rte_IrvWrite_CITR_PwrOn_ChrgPort_BCM_Cmd_SgnlRcvd_Init_write_IRV
        (CITR_ac_B.OutportBufferForChrgPort_BCM_Cmd_SgnlRcv);

    /* Merge: '<Root>/Merge_3' incorporates:
     *  SignalConversion generated from: '<S4>/ChrgPort_Sense_Init_write'
     * */
    Rte_IrvWrite_CITR_PwrOn_ChrgPort_Sense_Init_write_IRV
        (CITR_ac_B.OutportBufferForChrgPort_Sense_Init);

    /* Merge: '<Root>/Merge_21' incorporates:
     *  SignalConversion generated from: '<S4>/DoorLockLastElSts_2_FA_Init_write'
     * */
    Rte_IrvWrite_CITR_PwrOn_DoorLockLastElSts_2_FA_Init_write_IRV
        (CITR_ac_B.OutportBufferForDoorLockLastElSts_2_FA_I);

    /* Merge: '<Root>/Merge_18' incorporates:
     *  SignalConversion: '<S493>/Signal Conversion1'
     *  SignalConversion generated from: '<S4>/DoorLockLastElSts_2_Init_write'
     * */
    Rte_IrvWrite_CITR_PwrOn_DoorLockLastElSts_2_Init_write_IRV
        (CITR_ac_B.SignalConversion1);

    /* Merge: '<Root>/Merge_19' incorporates:
     *  SignalConversion generated from: '<S4>/DoorLockLastElSts_2_SgnlRcvd_Init_write'
     * */
    Rte_IrvWrite_CITR_PwrOn_DoorLockLastElSts_2_SgnlRcvd_Init_write_IRV
        (CITR_ac_B.OutportBufferForDoorLockLastElSts_2_Sgnl);

    /* Merge: '<Root>/Merge_20' incorporates:
     *  SignalConversion generated from: '<S4>/DoorLockLastElSts_FA_Init_write'
     * */
    Rte_IrvWrite_CITR_PwrOn_DoorLockLastElSts_FA_Init_write_IRV
        (CITR_ac_B.OutportBufferForDoorLockLastElSts_FA_Ini);

    /* Merge: '<Root>/Merge_1' incorporates:
     *  SignalConversion: '<S493>/Signal Conversion'
     *  SignalConversion generated from: '<S4>/DoorLockLastElSts_Init_write'
     * */
    Rte_IrvWrite_CITR_PwrOn_DoorLockLastElSts_Init_write_IRV
        (CITR_ac_B.SignalConversion);

    /* Merge: '<Root>/Merge_10' incorporates:
     *  SignalConversion generated from: '<S4>/DoorLockLastElSts_SgnlRcvd_Init_write'
     * */
    Rte_IrvWrite_CITR_PwrOn_DoorLockLastElSts_SgnlRcvd_Init_write_IRV
        (CITR_ac_B.OutportBufferForDoorLockLastElSts_SgnlRc);

    /* Merge: '<Root>/LockSense_IRV_Merge1' incorporates:
     *  SignalConversion generated from: '<S4>/LockSense_write'
     * */
    Rte_IrvWrite_CITR_PwrOn_LockSense_write_IRV
        (CITR_ac_B.OutportBufferForLockSense_write);

    /* Merge: '<Root>/Merge_23' incorporates:
     *  SignalConversion: '<S493>/Signal Conversion3'
     *  SignalConversion generated from: '<S4>/PwrLimReq_2_Init_write'
     * */
    Rte_IrvWrite_CITR_PwrOn_PwrLimReq_2_Init_write_IRV
        (CITR_ac_B.SignalConversion3);

    /* Merge: '<Root>/Merge_25' incorporates:
     *  SignalConversion generated from: '<S4>/PwrLimReq_FA_2_Init_write'
     * */
    Rte_IrvWrite_CITR_PwrOn_PwrLimReq_FA_2_Init_write_IRV
        (CITR_ac_B.OutportBufferForPwrLimReq_FA_2_Init);

    /* Merge: '<Root>/Merge_31' incorporates:
     *  SignalConversion generated from: '<S4>/PwrLimReq_FA_Init_write'
     * */
    Rte_IrvWrite_CITR_PwrOn_PwrLimReq_FA_Init_write_IRV
        (CITR_ac_B.OutportBufferForPwrLimReq_FA_Init);

    /* Merge: '<Root>/Merge_11' incorporates:
     *  SignalConversion: '<S493>/Signal Conversion2'
     *  SignalConversion generated from: '<S4>/PwrLimReq_Init_write'
     * */
    Rte_IrvWrite_CITR_PwrOn_PwrLimReq_Init_write_IRV(CITR_ac_B.SignalConversion2);

    /* Merge: '<Root>/Merge_24' incorporates:
     *  SignalConversion generated from: '<S4>/PwrLimReq_SgnlRcvd_2_Init_write'
     * */
    Rte_IrvWrite_CITR_PwrOn_PwrLimReq_SgnlRcvd_2_Init_write_IRV
        (CITR_ac_B.OutportBufferForPwrLimReq_SgnlRcvd_2_Ini);

    /* Merge: '<Root>/Merge_32' incorporates:
     *  SignalConversion generated from: '<S4>/PwrLimReq_SgnlRcvd_Init_write'
     * */
    Rte_IrvWrite_CITR_PwrOn_PwrLimReq_SgnlRcvd_Init_write_IRV
        (CITR_ac_B.OutportBufferForPwrLimReq_SgnlRcvd_Init);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Output function */
FUNC(void, CITR_CODE) TmotCITR_b_ChrgPort_BCM_Cmd(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotCITR_b_ChrgPort_BCM_Cmd' */
    /* Outport: '<Root>/VeCITR_b_ChrgPort_BCM_Cmd_Rcvd' incorporates:
     *  Chart: '<S427>/TmotCITR_b_ChrgPort_BCM_CmdChrt'
     *  SignalConversion generated from: '<S427>/VeCITR_b_ChrgPort_BCM_CmdSgnl_Rcvd'
     */
    /* Gateway: TmotCITR_b_ChrgPort_BCM_Cmd/TmotCITR_b_ChrgPort_BCM_CmdChrt */
    /* During: TmotCITR_b_ChrgPort_BCM_Cmd/TmotCITR_b_ChrgPort_BCM_CmdChrt */
    /* Entry Internal: TmotCITR_b_ChrgPort_BCM_Cmd/TmotCITR_b_ChrgPort_BCM_CmdChrt */
    /* Transition: '<S1030>:2' */
    (void)Rte_Write_VeCITR_b_ChrgPort_BCM_Cmd_Rcvd_Value(false);

    /* Merge: '<Root>/Merge_8_Irv' incorporates:
     *  Chart: '<S427>/TmotCITR_b_ChrgPort_BCM_CmdChrt'
     *  SignalConversion generated from: '<S427>/VeCITR_b_ChrgPort_BCM_CmdSgnl_Rcvd_write'
     */
    Rte_IrvWrite_TmotCITR_b_ChrgPort_BCM_Cmd_ChrgPort_BCM_Cmd_SgnlRcvd_Init_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotCITR_b_ChrgPort_BCM_Cmd' */
}

/* Output function */
FUNC(void, CITR_CODE) TmotCITR_b_DC_PwrLev(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotCITR_b_DC_PwrLev' */
    /* Outport: '<Root>/VeCITR_b_DC_PwrLev_SgnlRcvd' incorporates:
     *  Chart: '<S428>/TmotCITR_b_DC_PwrLevChrt'
     *  SignalConversion generated from: '<S428>/VeCITR_b_DC_PwrLevSgnl_Rcvd'
     */
    /* Gateway: TmotCITR_b_DC_PwrLev/TmotCITR_b_DC_PwrLevChrt */
    /* During: TmotCITR_b_DC_PwrLev/TmotCITR_b_DC_PwrLevChrt */
    /* Entry Internal: TmotCITR_b_DC_PwrLev/TmotCITR_b_DC_PwrLevChrt */
    /* Transition: '<S1031>:2' */
    (void)Rte_Write_VeCITR_b_DC_PwrLev_SgnlRcvd_Value(false);

    /* End of Outputs for SubSystem: '<Root>/TmotCITR_b_DC_PwrLev' */
}

/* Output function */
FUNC(void, CITR_CODE) TmotCITR_b_DateTmDay(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotCITR_b_DateTmDay' */
    /* Outport: '<Root>/VeCITR_b_DateTmDay_SgnlRcvd' incorporates:
     *  Chart: '<S429>/TmotCITR_b_DateTmDayChrt'
     *  SignalConversion generated from: '<S429>/VeCITR_b_DateTmDaySgnl_Rcvd'
     */
    /* Gateway: TmotCITR_b_DateTmDay/TmotCITR_b_DateTmDayChrt */
    /* During: TmotCITR_b_DateTmDay/TmotCITR_b_DateTmDayChrt */
    /* Entry Internal: TmotCITR_b_DateTmDay/TmotCITR_b_DateTmDayChrt */
    /* Transition: '<S1032>:2' */
    (void)Rte_Write_VeCITR_b_DateTmDay_SgnlRcvd_Value(false);

    /* End of Outputs for SubSystem: '<Root>/TmotCITR_b_DateTmDay' */
}

/* Output function */
FUNC(void, CITR_CODE) TmotCITR_b_Date_Day1(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotCITR_b_Date_Day1' */
    /* Outport: '<Root>/VeCITR_b_Date_Day1_SgnlRcvd' incorporates:
     *  Chart: '<S430>/TmotCITR_b_Date_Day1Chrt'
     *  SignalConversion generated from: '<S430>/VeCITR_b_Date_Day1Sgnl_Rcvd'
     */
    /* Gateway: TmotCITR_b_Date_Day1/TmotCITR_b_Date_Day1Chrt */
    /* During: TmotCITR_b_Date_Day1/TmotCITR_b_Date_Day1Chrt */
    /* Entry Internal: TmotCITR_b_Date_Day1/TmotCITR_b_Date_Day1Chrt */
    /* Transition: '<S1033>:2' */
    (void)Rte_Write_VeCITR_b_Date_Day1_SgnlRcvd_Value(false);

    /* End of Outputs for SubSystem: '<Root>/TmotCITR_b_Date_Day1' */
}

/* Output function */
FUNC(void, CITR_CODE) TmotCITR_b_HU_Sch1_Day(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotCITR_b_HU_Sch1_Day' */
    /* Outport: '<Root>/VeCITR_b_HU_Sch1_Day_SgnlRcvd' incorporates:
     *  Chart: '<S431>/TmotCITR_b_HU_Sch1_DayChrt'
     *  SignalConversion generated from: '<S431>/VeCITR_b_HU_Sch1_DaySgnl_Rcvd'
     */
    /* Gateway: TmotCITR_b_HU_Sch1_Day/TmotCITR_b_HU_Sch1_DayChrt */
    /* During: TmotCITR_b_HU_Sch1_Day/TmotCITR_b_HU_Sch1_DayChrt */
    /* Entry Internal: TmotCITR_b_HU_Sch1_Day/TmotCITR_b_HU_Sch1_DayChrt */
    /* Transition: '<S1034>:2' */
    (void)Rte_Write_VeCITR_b_HU_Sch1_Day_SgnlRcvd_Value(false);

    /* End of Outputs for SubSystem: '<Root>/TmotCITR_b_HU_Sch1_Day' */
}

/* Output function */
FUNC(void, CITR_CODE) TmotCITR_b_HU_Sch2_Day(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotCITR_b_HU_Sch2_Day' */
    /* Outport: '<Root>/VeCITR_b_HU_Sch2_Day_SgnlRcvd' incorporates:
     *  Chart: '<S432>/TmotCITR_b_HU_Sch2_DayChrt'
     *  SignalConversion generated from: '<S432>/VeCITR_b_HU_Sch2_DaySgnl_Rcvd'
     */
    /* Gateway: TmotCITR_b_HU_Sch2_Day/TmotCITR_b_HU_Sch2_DayChrt */
    /* During: TmotCITR_b_HU_Sch2_Day/TmotCITR_b_HU_Sch2_DayChrt */
    /* Entry Internal: TmotCITR_b_HU_Sch2_Day/TmotCITR_b_HU_Sch2_DayChrt */
    /* Transition: '<S1035>:2' */
    (void)Rte_Write_VeCITR_b_HU_Sch2_Day_SgnlRcvd_Value(false);

    /* End of Outputs for SubSystem: '<Root>/TmotCITR_b_HU_Sch2_Day' */
}

/* Output function */
FUNC(void, CITR_CODE) TmotCITR_b_HU_Sch3_Day(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotCITR_b_HU_Sch3_Day' */
    /* Outport: '<Root>/VeCITR_b_HU_Sch3_Day_SgnlRcvd' incorporates:
     *  Chart: '<S433>/TmotCITR_b_HU_Sch3_DayChrt'
     *  SignalConversion generated from: '<S433>/VeCITR_b_HU_Sch3_DaySgnl_Rcvd'
     */
    /* Gateway: TmotCITR_b_HU_Sch3_Day/TmotCITR_b_HU_Sch3_DayChrt */
    /* During: TmotCITR_b_HU_Sch3_Day/TmotCITR_b_HU_Sch3_DayChrt */
    /* Entry Internal: TmotCITR_b_HU_Sch3_Day/TmotCITR_b_HU_Sch3_DayChrt */
    /* Transition: '<S1036>:2' */
    (void)Rte_Write_VeCITR_b_HU_Sch3_Day_SgnlRcvd_Value(false);

    /* End of Outputs for SubSystem: '<Root>/TmotCITR_b_HU_Sch3_Day' */
}

/* Output function */
FUNC(void, CITR_CODE) TmotCITR_b_HU_Sch4_Day(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotCITR_b_HU_Sch4_Day' */
    /* Outport: '<Root>/VeCITR_b_HU_Sch4_Day_SgnlRcvd' incorporates:
     *  Chart: '<S434>/TmotCITR_b_HU_Sch4_DayChrt'
     *  SignalConversion generated from: '<S434>/VeCITR_b_HU_Sch4_DaySgnl_Rcvd'
     */
    /* Gateway: TmotCITR_b_HU_Sch4_Day/TmotCITR_b_HU_Sch4_DayChrt */
    /* During: TmotCITR_b_HU_Sch4_Day/TmotCITR_b_HU_Sch4_DayChrt */
    /* Entry Internal: TmotCITR_b_HU_Sch4_Day/TmotCITR_b_HU_Sch4_DayChrt */
    /* Transition: '<S1037>:2' */
    (void)Rte_Write_VeCITR_b_HU_Sch4_Day_SgnlRcvd_Value(false);

    /* End of Outputs for SubSystem: '<Root>/TmotCITR_b_HU_Sch4_Day' */
}

/* Output function */
FUNC(void, CITR_CODE) TmotCITR_b_TBM_Sch1_Day(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotCITR_b_TBM_Sch1_Day' */
    /* Outport: '<Root>/VeCITR_b_TBM_Sch1_Day_SgnlRcvd' incorporates:
     *  Chart: '<S435>/TmotCITR_b_TBM_Sch1_DayChrt'
     *  SignalConversion generated from: '<S435>/VeCITR_b_TBM_Sch1_DaySgnl_Rcvd'
     */
    /* Gateway: TmotCITR_b_TBM_Sch1_Day/TmotCITR_b_TBM_Sch1_DayChrt */
    /* During: TmotCITR_b_TBM_Sch1_Day/TmotCITR_b_TBM_Sch1_DayChrt */
    /* Entry Internal: TmotCITR_b_TBM_Sch1_Day/TmotCITR_b_TBM_Sch1_DayChrt */
    /* Transition: '<S1038>:2' */
    (void)Rte_Write_VeCITR_b_TBM_Sch1_Day_SgnlRcvd_Value(false);

    /* End of Outputs for SubSystem: '<Root>/TmotCITR_b_TBM_Sch1_Day' */
}

/* Output function */
FUNC(void, CITR_CODE) TmotCITR_b_TBM_Sch2_Day(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotCITR_b_TBM_Sch2_Day' */
    /* Outport: '<Root>/VeCITR_b_TBM_Sch2_Day_SgnlRcvd' incorporates:
     *  Chart: '<S436>/TmotCITR_b_TBM_Sch2_DayChrt'
     *  SignalConversion generated from: '<S436>/VeCITR_b_TBM_Sch2_DaySgnl_Rcvd'
     */
    /* Gateway: TmotCITR_b_TBM_Sch2_Day/TmotCITR_b_TBM_Sch2_DayChrt */
    /* During: TmotCITR_b_TBM_Sch2_Day/TmotCITR_b_TBM_Sch2_DayChrt */
    /* Entry Internal: TmotCITR_b_TBM_Sch2_Day/TmotCITR_b_TBM_Sch2_DayChrt */
    /* Transition: '<S1039>:2' */
    (void)Rte_Write_VeCITR_b_TBM_Sch2_Day_SgnlRcvd_Value(false);

    /* End of Outputs for SubSystem: '<Root>/TmotCITR_b_TBM_Sch2_Day' */
}

/* Output function */
FUNC(void, CITR_CODE) TmotCITR_b_TBM_Sch3_Day(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotCITR_b_TBM_Sch3_Day' */
    /* Outport: '<Root>/VeCITR_b_TBM_Sch3_Day_SgnlRcvd' incorporates:
     *  Chart: '<S437>/TmotCITR_b_TBM_Sch3_DayChrt'
     *  SignalConversion generated from: '<S437>/VeCITR_b_TBM_Sch3_DaySgnl_Rcvd'
     */
    /* Gateway: TmotCITR_b_TBM_Sch3_Day/TmotCITR_b_TBM_Sch3_DayChrt */
    /* During: TmotCITR_b_TBM_Sch3_Day/TmotCITR_b_TBM_Sch3_DayChrt */
    /* Entry Internal: TmotCITR_b_TBM_Sch3_Day/TmotCITR_b_TBM_Sch3_DayChrt */
    /* Transition: '<S1040>:2' */
    (void)Rte_Write_VeCITR_b_TBM_Sch3_Day_SgnlRcvd_Value(false);

    /* End of Outputs for SubSystem: '<Root>/TmotCITR_b_TBM_Sch3_Day' */
}

/* Output function */
FUNC(void, CITR_CODE) TmotCITR_b_TBM_Sch4_Day(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotCITR_b_TBM_Sch4_Day' */
    /* Outport: '<Root>/VeCITR_b_TBM_Sch4_Day_SgnlRcvd' incorporates:
     *  Chart: '<S438>/TmotCITR_b_TBM_Sch4_DayChrt'
     *  SignalConversion generated from: '<S438>/VeCITR_b_TBM_Sch4_DaySgnl_Rcvd'
     */
    /* Gateway: TmotCITR_b_TBM_Sch4_Day/TmotCITR_b_TBM_Sch4_DayChrt */
    /* During: TmotCITR_b_TBM_Sch4_Day/TmotCITR_b_TBM_Sch4_DayChrt */
    /* Entry Internal: TmotCITR_b_TBM_Sch4_Day/TmotCITR_b_TBM_Sch4_DayChrt */
    /* Transition: '<S1041>:2' */
    (void)Rte_Write_VeCITR_b_TBM_Sch4_Day_SgnlRcvd_Value(false);

    /* End of Outputs for SubSystem: '<Root>/TmotCITR_b_TBM_Sch4_Day' */
}

/* Output function */
FUNC(void, CITR_CODE) TmotCITR_e_DoorLockLastElSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotCITR_e_DoorLockLastElSts' */
    /* Merge: '<Root>/Merge_10' incorporates:
     *  Chart: '<S439>/TmotCITR_e_DoorLockLastElStsChrt'
     *  SignalConversion generated from: '<S439>/VeCITR_b_DoorLockLastElStsSgnl_Rcvd_write'
     */
    /* Gateway: TmotCITR_e_DoorLockLastElSts/TmotCITR_e_DoorLockLastElStsChrt */
    /* During: TmotCITR_e_DoorLockLastElSts/TmotCITR_e_DoorLockLastElStsChrt */
    /* Entry Internal: TmotCITR_e_DoorLockLastElSts/TmotCITR_e_DoorLockLastElStsChrt */
    /* Transition: '<S1042>:2' */
    Rte_IrvWrite_TmotCITR_e_DoorLockLastElSts_DoorLockLastElSts_SgnlRcvd_Init_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotCITR_e_DoorLockLastElSts' */
}

/* Output function */
FUNC(void, CITR_CODE) TmotCITR_e_DoorLockLastElSts_2(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotCITR_e_DoorLockLastElSts_2' */
    /* Merge: '<Root>/Merge_19' incorporates:
     *  Chart: '<S440>/TmotCITR_e_DoorLockLastElSts_2Chrt'
     *  SignalConversion generated from: '<S440>/VeCITR_b_DoorLockLastElSts_2Sgnl_Rcvd_write'
     */
    /* Gateway: TmotCITR_e_DoorLockLastElSts_2/TmotCITR_e_DoorLockLastElSts_2Chrt */
    /* During: TmotCITR_e_DoorLockLastElSts_2/TmotCITR_e_DoorLockLastElSts_2Chrt */
    /* Entry Internal: TmotCITR_e_DoorLockLastElSts_2/TmotCITR_e_DoorLockLastElSts_2Chrt */
    /* Transition: '<S1043>:2' */
    Rte_IrvWrite_TmotCITR_e_DoorLockLastElSts_2_DoorLockLastElSts_2_SgnlRcvd_Init_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotCITR_e_DoorLockLastElSts_2' */
}

/* Output function */
FUNC(void, CITR_CODE) TmotCITR_e_PowerLimitReq(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotCITR_e_PowerLimitReq' */
    /* Merge: '<Root>/Merge_32' incorporates:
     *  Chart: '<S441>/TmotCITR_e_PowerLimitReqChrt'
     *  SignalConversion generated from: '<S441>/VeCITR_e_PowerLimitReqSgnl_Rcvd_write'
     */
    /* Gateway: TmotCITR_e_PowerLimitReq/TmotCITR_e_PowerLimitReqChrt */
    /* During: TmotCITR_e_PowerLimitReq/TmotCITR_e_PowerLimitReqChrt */
    /* Entry Internal: TmotCITR_e_PowerLimitReq/TmotCITR_e_PowerLimitReqChrt */
    /* Transition: '<S1044>:2' */
    Rte_IrvWrite_TmotCITR_e_PowerLimitReq_PwrLimReq_SgnlRcvd_Init_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotCITR_e_PowerLimitReq' */
}

/* Output function */
FUNC(void, CITR_CODE) TmotCITR_e_PowerLimitReq_2(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotCITR_e_PowerLimitReq_2' */
    /* Merge: '<Root>/Merge_24' incorporates:
     *  Chart: '<S442>/TmotCITR_e_PowerLimitReq_2Chrt'
     *  SignalConversion generated from: '<S442>/VeCITR_e_PowerLimitReqSgnl_2Rcvd_write'
     */
    /* Gateway: TmotCITR_e_PowerLimitReq_2/TmotCITR_e_PowerLimitReq_2Chrt */
    /* During: TmotCITR_e_PowerLimitReq_2/TmotCITR_e_PowerLimitReq_2Chrt */
    /* Entry Internal: TmotCITR_e_PowerLimitReq_2/TmotCITR_e_PowerLimitReq_2Chrt */
    /* Transition: '<S1045>:2' */
    Rte_IrvWrite_TmotCITR_e_PowerLimitReq_2_PwrLimReq_SgnlRcvd_2_Init_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotCITR_e_PowerLimitReq_2' */
}

/* Output function */
FUNC(void, CITR_CODE) TmotCITR_e_RmtChrgPortLkCmd(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotCITR_e_RmtChrgPortLkCmd' */
    /* Outport: '<Root>/VeCITR_b_RmtChrgPortLkCmd_SgnlRcvd' incorporates:
     *  Chart: '<S443>/TmotCITR_e_RmtChrgPortLkCmdChrt'
     *  SignalConversion generated from: '<S443>/VeCITR_b_RmtChrgPortLkCmdSgnl_Rcvd'
     */
    /* Gateway: TmotCITR_e_RmtChrgPortLkCmd/TmotCITR_e_RmtChrgPortLkCmdChrt */
    /* During: TmotCITR_e_RmtChrgPortLkCmd/TmotCITR_e_RmtChrgPortLkCmdChrt */
    /* Entry Internal: TmotCITR_e_RmtChrgPortLkCmd/TmotCITR_e_RmtChrgPortLkCmdChrt */
    /* Transition: '<S1046>:2' */
    (void)Rte_Write_VeCITR_b_RmtChrgPortLkCmd_SgnlRcvd_Value(false);

    /* End of Outputs for SubSystem: '<Root>/TmotCITR_e_RmtChrgPortLkCmd' */
}

/* Model initialize function */
FUNC(void, CITR_CODE) CITR_ac_Init(void)
{
    /* Registration code */

    /* block I/O */
    {
        CITR_ac_B.LeCITR_e_PowerLimit_Req_2_out = CeOBCR_e_PwrLimReq_SNA;
        CITR_ac_B.LeCITR_e_PowerLimit_Req_out = CeOBCR_e_PwrLimReq_SNA;
        CITR_ac_B.OutportBufferForVeCITR_e_PwrLimReq_Out_I =
            CeOBCR_e_PwrLimReq_SNA;
        CITR_ac_B.SignalConversion2 = CeOBCR_e_PwrLimReq_SNA;
        CITR_ac_B.SignalConversion3 = CeOBCR_e_PwrLimReq_SNA;
    }

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/CITR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/InitBlock'
     */
    /* SystemInitialize for SignalConversion: '<S493>/Signal Conversion' incorporates:
     *  Constant: '<S520>/Calib'
     */
    CITR_ac_B.SignalConversion = KeCITR_e_DoorLkSts_Init;

    /* SystemInitialize for SignalConversion: '<S493>/Signal Conversion1' incorporates:
     *  Constant: '<S520>/Calib'
     */
    CITR_ac_B.SignalConversion1 = KeCITR_e_DoorLkSts_Init;

    /* SystemInitialize for SignalConversion: '<S493>/Signal Conversion2' incorporates:
     *  Constant: '<S521>/Calib'
     */
    CITR_ac_B.SignalConversion2 = KeCITR_e_PwrLimReq_Init;

    /* SystemInitialize for SignalConversion: '<S493>/Signal Conversion3' incorporates:
     *  Constant: '<S521>/Calib'
     */
    CITR_ac_B.SignalConversion3 = KeCITR_e_PwrLimReq_Init;

    /* SystemInitialize for SignalConversion generated from: '<S493>/ChrgPortLock_FailSts_Init' incorporates:
     *  Constant: '<S513>/Constant'
     */
    CITR_ac_B.OutportBufferForChrgPortLock_FailSts_Ini =
        CITR_ac_ConstB.Constant_by;

    /* SystemInitialize for SignalConversion generated from: '<S493>/RRM_VP_Level_Init' incorporates:
     *  Constant: '<S514>/Constant'
     */
    CITR_ac_B.OutportBufferForRRM_VP_Level_Init = CITR_ac_ConstB.Constant_bi;

    /* SystemInitialize for SignalConversion generated from: '<S493>/ChrgPortDoorSts_Init' incorporates:
     *  Constant: '<S515>/Constant'
     */
    CITR_ac_B.OutportBufferForChrgPortDoorSts_Init = CITR_ac_ConstB.Constant_m0;

    /* SystemInitialize for SignalConversion generated from: '<S493>/DVC_ChrgPort_IO_Init' incorporates:
     *  Constant: '<S516>/Constant'
     */
    CITR_ac_B.OutportBufferForDVC_ChrgPort_IO_Init = CITR_ac_ConstB.Constant_l;

    /* SystemInitialize for SignalConversion generated from: '<S493>/DCChrg_TestSts_Init' incorporates:
     *  Constant: '<S517>/Constant'
     */
    CITR_ac_B.OutportBufferForDCChrg_TestSts_Init = CITR_ac_ConstB.Constant_h;

    /* SystemInitialize for SignalConversion generated from: '<S493>/SOC_Max_Lev_Init' incorporates:
     *  Constant: '<S519>/Calib'
     */
    CITR_ac_B.OutportBufferForSOC_Max_Lev_Init = KeCITR_b_SOC_Max_Lev_Init;

    /* SystemInitialize for SignalConversion generated from: '<S493>/ChrgrFlapSts_Init' incorporates:
     *  Constant: '<S518>/Constant'
     */
    CITR_ac_B.OutportBufferForChrgrFlapSts_Init = CITR_ac_ConstB.Constant_fs;

    /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/LEDInd_Pokes__InitBlock'
     */
    /* SystemInitialize for SignalConversion generated from: '<S495>/CPIM_RedLED_FailSts_Init' incorporates:
     *  Constant: '<S540>/Constant'
     */
    CITR_ac_B.OutportBufferForCPIM_RedLED_FailSts_Init =
        CITR_ac_ConstB.Constant_kr;

    /* SystemInitialize for SignalConversion generated from: '<S495>/CPIM_GreenLED_FailSts_Init' incorporates:
     *  Constant: '<S541>/Constant'
     */
    CITR_ac_B.OutportBufferForCPIM_GreenLED_FailSts_In =
        CITR_ac_ConstB.Constant_ev;

    /* SystemInitialize for SignalConversion generated from: '<S495>/CPIM_BlueLED_FailSts_Init' incorporates:
     *  Constant: '<S552>/Constant'
     */
    CITR_ac_B.OutportBufferForCPIM_BlueLED_FailSts_Ini =
        CITR_ac_ConstB.Constant_jeh;

    /* SystemInitialize for SignalConversion generated from: '<S495>/CPIM_Ind1_Fdbk' incorporates:
     *  Constant: '<S565>/Constant'
     */
    CITR_ac_B.OutportBufferForCPIM_Ind1_Fdbk = CITR_ac_ConstB.Constant_fw;

    /* SystemInitialize for SignalConversion generated from: '<S495>/CPIM_Ind2_Fdbk' incorporates:
     *  Constant: '<S566>/Constant'
     */
    CITR_ac_B.OutportBufferForCPIM_Ind2_Fdbk = CITR_ac_ConstB.Constant_lj;

    /* SystemInitialize for SignalConversion generated from: '<S495>/CPIM_Ind3_Fdbk' incorporates:
     *  Constant: '<S542>/Constant'
     */
    CITR_ac_B.OutportBufferForCPIM_Ind3_Fdbk = CITR_ac_ConstB.Constant_d5;

    /* SystemInitialize for SignalConversion generated from: '<S495>/CPIM_Ind4_Fdbk' incorporates:
     *  Constant: '<S543>/Constant'
     */
    CITR_ac_B.OutportBufferForCPIM_Ind4_Fdbk = CITR_ac_ConstB.Constant_cz;

    /* SystemInitialize for SignalConversion generated from: '<S495>/CPIM_Ind5_Fdbk' incorporates:
     *  Constant: '<S544>/Constant'
     */
    CITR_ac_B.OutportBufferForCPIM_Ind5_Fdbk = CITR_ac_ConstB.Constant_oz;

    /* SystemInitialize for SignalConversion generated from: '<S495>/CPIM_Ind1_FailSts' incorporates:
     *  Constant: '<S560>/Constant'
     */
    CITR_ac_B.OutportBufferForCPIM_Ind1_FailSts = CITR_ac_ConstB.Constant_c3;

    /* SystemInitialize for SignalConversion generated from: '<S495>/CPIM_Ind2_FailSts' incorporates:
     *  Constant: '<S561>/Constant'
     */
    CITR_ac_B.OutportBufferForCPIM_Ind2_FailSts = CITR_ac_ConstB.Constant_er;

    /* SystemInitialize for SignalConversion generated from: '<S495>/CPIM_Ind3_FailSts' incorporates:
     *  Constant: '<S562>/Constant'
     */
    CITR_ac_B.OutportBufferForCPIM_Ind3_FailSts = CITR_ac_ConstB.Constant_hx;

    /* SystemInitialize for SignalConversion generated from: '<S495>/CPIM_Ind4_FailSts' incorporates:
     *  Constant: '<S563>/Constant'
     */
    CITR_ac_B.OutportBufferForCPIM_Ind4_FailSts = CITR_ac_ConstB.Constant_m2;

    /* SystemInitialize for SignalConversion generated from: '<S495>/CPIM_Ind5_FailSts' incorporates:
     *  Constant: '<S564>/Constant'
     */
    CITR_ac_B.OutportBufferForCPIM_Ind5_FailSts = CITR_ac_ConstB.Constant_es;

    /* SystemInitialize for SignalConversion generated from: '<S495>/CPIM_Ind_Ind_Color_Fdbk' incorporates:
     *  Constant: '<S545>/Constant'
     */
    CITR_ac_B.OutportBufferForCPIM_Ind_Ind_Color_Fdbk =
        CITR_ac_ConstB.Constant_cp;

    /* SystemInitialize for SignalConversion generated from: '<S495>/CPIM_Icon1_Sts' incorporates:
     *  Constant: '<S546>/Constant'
     */
    CITR_ac_B.OutportBufferForCPIM_Icon1_Sts = CITR_ac_ConstB.Constant_li;

    /* SystemInitialize for SignalConversion generated from: '<S495>/CPIM_Icon2_Sts' incorporates:
     *  Constant: '<S547>/Constant'
     */
    CITR_ac_B.OutportBufferForCPIM_Icon2_Sts = CITR_ac_ConstB.Constant_cg;

    /* SystemInitialize for SignalConversion generated from: '<S495>/BCIM_Ind1_Fdbk' incorporates:
     *  Constant: '<S548>/Constant'
     */
    CITR_ac_B.OutportBufferForBCIM_Ind1_Fdbk = CITR_ac_ConstB.Constant_hl;

    /* SystemInitialize for SignalConversion generated from: '<S495>/BCIM_Ind2_Fdbk' incorporates:
     *  Constant: '<S549>/Constant'
     */
    CITR_ac_B.OutportBufferForBCIM_Ind2_Fdbk = CITR_ac_ConstB.Constant_k0;

    /* SystemInitialize for SignalConversion generated from: '<S495>/BCIM_Ind3_Fdbk' incorporates:
     *  Constant: '<S551>/Constant'
     */
    CITR_ac_B.OutportBufferForBCIM_Ind3_Fdbk = CITR_ac_ConstB.Constant_niv;

    /* SystemInitialize for SignalConversion generated from: '<S495>/BCIM_Ind4_Fdbk' incorporates:
     *  Constant: '<S553>/Constant'
     */
    CITR_ac_B.OutportBufferForBCIM_Ind4_Fdbk = CITR_ac_ConstB.Constant_ic;

    /* SystemInitialize for SignalConversion generated from: '<S495>/BCIM_Ind5_Fdbk' incorporates:
     *  Constant: '<S554>/Constant'
     */
    CITR_ac_B.OutportBufferForBCIM_Ind5_Fdbk = CITR_ac_ConstB.Constant_j3;

    /* SystemInitialize for SignalConversion generated from: '<S495>/BCIM_Ind1_FailSts' incorporates:
     *  Constant: '<S555>/Constant'
     */
    CITR_ac_B.OutportBufferForBCIM_Ind1_FailSts = CITR_ac_ConstB.Constant_nz;

    /* SystemInitialize for SignalConversion generated from: '<S495>/BCIM_Ind2_FailSts' incorporates:
     *  Constant: '<S556>/Constant'
     */
    CITR_ac_B.OutportBufferForBCIM_Ind2_FailSts = CITR_ac_ConstB.Constant_il;

    /* SystemInitialize for SignalConversion generated from: '<S495>/BCIM_Ind3_FailSts' incorporates:
     *  Constant: '<S557>/Constant'
     */
    CITR_ac_B.OutportBufferForBCIM_Ind3_FailSts = CITR_ac_ConstB.Constant_e0;

    /* SystemInitialize for SignalConversion generated from: '<S495>/BCIM_Ind4_FailSts' incorporates:
     *  Constant: '<S558>/Constant'
     */
    CITR_ac_B.OutportBufferForBCIM_Ind4_FailSts = CITR_ac_ConstB.Constant_gs;

    /* SystemInitialize for SignalConversion generated from: '<S495>/BCIM_Ind5_FailSts' incorporates:
     *  Constant: '<S550>/Constant'
     */
    CITR_ac_B.OutportBufferForBCIM_Ind5_FailSts = CITR_ac_ConstB.Constant_de;

    /* SystemInitialize for SignalConversion generated from: '<S495>/BCIM_Ind_Color_Fdbk' incorporates:
     *  Constant: '<S559>/Constant'
     */
    CITR_ac_B.OutportBufferForBCIM_Ind_Color_Fdbk = CITR_ac_ConstB.Constant_k1;

    /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/InitBlock1'
     */
    /* SystemInitialize for SignalConversion generated from: '<S494>/BCIM_IO_Init' incorporates:
     *  Constant: '<S538>/Constant'
     */
    CITR_ac_B.OutportBufferForBCIM_IO_Init = CITR_ac_ConstB.Constant_k;

    /* SystemInitialize for SignalConversion generated from: '<S494>/BCIM_Ind1_Init' incorporates:
     *  Constant: '<S529>/Constant'
     */
    CITR_ac_B.OutportBufferForBCIM_Ind1_Init = CITR_ac_ConstB.Constant_ms;

    /* SystemInitialize for SignalConversion generated from: '<S494>/BCIM_Ind2_Init' incorporates:
     *  Constant: '<S532>/Constant'
     */
    CITR_ac_B.OutportBufferForBCIM_Ind2_Init = CITR_ac_ConstB.Constant_gf;

    /* SystemInitialize for SignalConversion generated from: '<S494>/BCIM_Ind3_Init' incorporates:
     *  Constant: '<S533>/Constant'
     */
    CITR_ac_B.OutportBufferForBCIM_Ind3_Init = CITR_ac_ConstB.Constant_ne;

    /* SystemInitialize for SignalConversion generated from: '<S494>/BCIM_Ind4_Init' incorporates:
     *  Constant: '<S534>/Constant'
     */
    CITR_ac_B.OutportBufferForBCIM_Ind4_Init = CITR_ac_ConstB.Constant_hc;

    /* SystemInitialize for SignalConversion generated from: '<S494>/BCIM_Ind5_Init' incorporates:
     *  Constant: '<S535>/Constant'
     */
    CITR_ac_B.OutportBufferForBCIM_Ind5_Init = CITR_ac_ConstB.Constant_id;

    /* SystemInitialize for SignalConversion generated from: '<S494>/BCIM_BlinkRate_Init' incorporates:
     *  Constant: '<S536>/Constant'
     */
    CITR_ac_B.OutportBufferForBCIM_BlinkRate_Init = CITR_ac_ConstB.Constant_k2;

    /* SystemInitialize for SignalConversion generated from: '<S494>/BCIM_Color_Init' incorporates:
     *  Constant: '<S531>/Constant'
     */
    CITR_ac_B.OutportBufferForBCIM_Color_Init = CITR_ac_ConstB.Constant_ok;

    /* SystemInitialize for SignalConversion generated from: '<S494>/CPIM_IO_Init' incorporates:
     *  Constant: '<S537>/Constant'
     */
    CITR_ac_B.OutportBufferForCPIM_IO_Init = CITR_ac_ConstB.Constant_n;

    /* SystemInitialize for SignalConversion generated from: '<S494>/DVC_CPIM_Ind1_Init' incorporates:
     *  Constant: '<S539>/Constant'
     */
    CITR_ac_B.OutportBufferForDVC_CPIM_Ind1_Init = CITR_ac_ConstB.Constant_gl;

    /* SystemInitialize for SignalConversion generated from: '<S494>/DVC_CPIM_Ind2_Init' incorporates:
     *  Constant: '<S523>/Constant'
     */
    CITR_ac_B.OutportBufferForDVC_CPIM_Ind2_Init = CITR_ac_ConstB.Constant_lq;

    /* SystemInitialize for SignalConversion generated from: '<S494>/DVC_CPIM_Ind3_Init' incorporates:
     *  Constant: '<S524>/Constant'
     */
    CITR_ac_B.OutportBufferForDVC_CPIM_Ind3_Init = CITR_ac_ConstB.Constant_p;

    /* SystemInitialize for SignalConversion generated from: '<S494>/DVC_CPIM_Ind4_Init' incorporates:
     *  Constant: '<S525>/Constant'
     */
    CITR_ac_B.OutportBufferForDVC_CPIM_Ind4_Init = CITR_ac_ConstB.Constant_eo;

    /* SystemInitialize for SignalConversion generated from: '<S494>/DVC_CPIM_Ind5_Init' incorporates:
     *  Constant: '<S528>/Constant'
     */
    CITR_ac_B.OutportBufferForDVC_CPIM_Ind5_Init = CITR_ac_ConstB.Constant_nx;

    /* SystemInitialize for SignalConversion generated from: '<S494>/DVC_CPIM_BlinkRate_Init' incorporates:
     *  Constant: '<S522>/Constant'
     */
    CITR_ac_B.OutportBufferForDVC_CPIM_BlinkRate_Init =
        CITR_ac_ConstB.Constant_m3;

    /* SystemInitialize for SignalConversion generated from: '<S494>/DVC_CPIM_Color_Init' incorporates:
     *  Constant: '<S526>/Constant'
     */
    CITR_ac_B.OutportBufferForDVC_CPIM_Color_Init = CITR_ac_ConstB.Constant_f2;

    /* SystemInitialize for SignalConversion generated from: '<S494>/DVC_CPIM_IconI1_Init' incorporates:
     *  Constant: '<S530>/Constant'
     */
    CITR_ac_B.OutportBufferForDVC_CPIM_IconI1_Init = CITR_ac_ConstB.Constant_ng;

    /* SystemInitialize for SignalConversion generated from: '<S494>/DVC_CPIM_IconI2_Init' incorporates:
     *  Constant: '<S527>/Constant'
     */
    CITR_ac_B.OutportBufferForDVC_CPIM_IconI2_Init = CITR_ac_ConstB.Constant_os;

    /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S491>/Sch1_HU_Type_Init' incorporates:
     *  Constant: '<S511>/Constant'
     */
    CITR_ac_B.OutportBufferForSch1_HU_Type_Init = CITR_ac_ConstB.Constant_f;

    /* SystemInitialize for SignalConversion generated from: '<S491>/HU_Sch1_Temperature_Init' */
    CITR_ac_B.OutportBufferForHU_Sch1_Temperature_Init = 22.0F;

    /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Schdule2__Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S497>/Sch2_HU_Type_Init' incorporates:
     *  Constant: '<S588>/Constant'
     */
    CITR_ac_B.OutportBufferForSch2_HU_Type_Init = CITR_ac_ConstB.Constant_d;

    /* SystemInitialize for SignalConversion generated from: '<S497>/HU_Sch2_Temperature_Init' */
    CITR_ac_B.OutportBufferForHU_Sch2_Temperature_Init = 22.0F;

    /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Schdule3__Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S499>/Sch3_HU_Type_Init' incorporates:
     *  Constant: '<S590>/Constant'
     */
    CITR_ac_B.OutportBufferForSch3_HU_Type_Init = CITR_ac_ConstB.Constant_e;

    /* SystemInitialize for SignalConversion generated from: '<S499>/HU_Sch3_Temperature_Init' */
    CITR_ac_B.OutportBufferForHU_Sch3_Temperature_Init = 22.0F;

    /* SystemInitialize for SignalConversion generated from: '<S499>/HU_Sch3_Allow_Init' incorporates:
     *  Constant: '<S591>/Constant'
     */
    CITR_ac_B.OutportBufferForHU_Sch3_Allow_Init = CITR_ac_ConstB.Constant_jy;

    /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Schdule4__Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S501>/HU_Sch4_Temperature_Init' */
    CITR_ac_B.OutportBufferForHU_Sch4_Temperature_Init = 22.0F;

    /* SystemInitialize for SignalConversion generated from: '<S501>/HU_Sch4_Allow_Init' incorporates:
     *  Constant: '<S594>/Constant'
     */
    CITR_ac_B.OutportBufferForHU_Sch4_Allow_Init = CITR_ac_ConstB.Constant_o;

    /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Init1'
     */
    /* SystemInitialize for SignalConversion generated from: '<S492>/Sch1_TBM_Type_Init' incorporates:
     *  Constant: '<S512>/Constant'
     */
    CITR_ac_B.OutportBufferForSch1_TBM_Type_Init = CITR_ac_ConstB.Constant_js;

    /* SystemInitialize for SignalConversion generated from: '<S492>/TBM_Sch1_Temperature_Init' */
    CITR_ac_B.OutportBufferForTBM_Sch1_Temperature_Ini = 22.0F;

    /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Schdule2__Init1'
     */
    /* SystemInitialize for SignalConversion generated from: '<S498>/Sch2_TBM_Type_Init' incorporates:
     *  Constant: '<S589>/Constant'
     */
    CITR_ac_B.OutportBufferForSch2_TBM_Type_Init = CITR_ac_ConstB.Constant_b;

    /* SystemInitialize for SignalConversion generated from: '<S498>/TBM_Sch2_Temperature_Init' */
    CITR_ac_B.OutportBufferForTBM_Sch2_Temperature_Ini = 22.0F;

    /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Schdule3__Init1'
     */
    /* SystemInitialize for SignalConversion generated from: '<S500>/Sch3_TBM_Type_Init' incorporates:
     *  Constant: '<S592>/Constant'
     */
    CITR_ac_B.OutportBufferForSch3_TBM_Type_Init = CITR_ac_ConstB.Constant_j;

    /* SystemInitialize for SignalConversion generated from: '<S500>/TBM_Sch3_Temperature_Init' */
    CITR_ac_B.OutportBufferForTBM_Sch3_Temperature_Ini = 22.0F;

    /* SystemInitialize for SignalConversion generated from: '<S500>/TBM_Sch3_Allow_Init' incorporates:
     *  Constant: '<S593>/Constant'
     */
    CITR_ac_B.OutportBufferForTBM_Sch3_Allow_Init = CITR_ac_ConstB.Constant_cd;

    /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Schdule4__Init1'
     */
    /* SystemInitialize for SignalConversion generated from: '<S502>/TBM_Sch4_Temperature_Init' */
    CITR_ac_B.OutportBufferForTBM_Sch4_Temperature_Ini = 22.0F;

    /* SystemInitialize for SignalConversion generated from: '<S502>/TBM_Sch4_Allow_Init' incorporates:
     *  Constant: '<S595>/Constant'
     */
    CITR_ac_B.OutportBufferForTBM_Sch4_Allow_Init = CITR_ac_ConstB.Constant_c;

    /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/VehicleDateTime__Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S504>/DateTmFormat_Init' incorporates:
     *  Constant: '<S596>/Constant'
     */
    CITR_ac_B.OutportBufferForDateTmFormat_Init = CITR_ac_ConstB.Constant_ni;

    /* SystemInitialize for SignalConversion generated from: '<S504>/ChargingDestinationPwr_Init' */
    CITR_ac_B.OutportBufferForChargingDestinationPwr_I = 630.0F;

    /* SystemInitialize for SignalConversion generated from: '<S504>/DistanceToCharge_Init' */
    CITR_ac_B.OutportBufferForDistanceToCharge_Init = 127U;

    /* SystemInitialize for SignalConversion generated from: '<S504>/TimeToCharge_Init' */
    CITR_ac_B.OutportBufferForTimeToCharge_Init = MAX_uint8_T;

    /* SystemInitialize for SignalConversion generated from: '<S504>/FOTA_Install_Type_Init' incorporates:
     *  Constant: '<S597>/Constant'
     */
    CITR_ac_B.OutportBufferForFOTA_Install_Type_Init =
        CITR_ac_ConstB.Constant_i0;

    /* SystemInitialize for SignalConversion generated from: '<S504>/FOTA_Install_Status_Init' incorporates:
     *  Constant: '<S598>/Constant'
     */
    CITR_ac_B.OutportBufferForFOTA_Install_Status_Init =
        CITR_ac_ConstB.Constant_gq;

    /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Cooperative_Charging_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S489>/HU_ChrgSchedType1_Init' incorporates:
     *  Constant: '<S506>/Constant'
     */
    CITR_ac_B.OutportBufferForHU_ChrgSchedType1_Init =
        CITR_ac_ConstB.Constant_le;

    /* SystemInitialize for SignalConversion generated from: '<S489>/HU_ChrgSchedType2_Init' incorporates:
     *  Constant: '<S505>/Constant'
     */
    CITR_ac_B.OutportBufferForHU_ChrgSchedType2_Init =
        CITR_ac_ConstB.Constant_kf;

    /* SystemInitialize for SignalConversion generated from: '<S489>/RmtChrgPortLkCmd_Init' incorporates:
     *  Constant: '<S507>/Constant'
     */
    CITR_ac_B.OutportBufferForRmtChrgPortLkCmd_Init = CITR_ac_ConstB.Constant_ig;

    /* SystemInitialize for SignalConversion generated from: '<S489>/CoopCh_ChrgCmd_Init' incorporates:
     *  Constant: '<S508>/Constant'
     */
    CITR_ac_B.OutportBufferForCoopCh_ChrgCmd_Init = CITR_ac_ConstB.Constant_em;

    /* SystemInitialize for SignalConversion generated from: '<S489>/TBM_ChrgSchedType1_Init' incorporates:
     *  Constant: '<S509>/Constant'
     */
    CITR_ac_B.OutportBufferForTBM_ChrgSchedType1_Init =
        CITR_ac_ConstB.Constant_in;

    /* SystemInitialize for SignalConversion generated from: '<S489>/TBM_ChrgSchedType2_Init' incorporates:
     *  Constant: '<S510>/Constant'
     */
    CITR_ac_B.OutportBufferForTBM_ChrgSchedType2_Init =
        CITR_ac_ConstB.Constant_m;

    /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S503>/VeCITR_e_DoorLockLastElSts_Out_Init' incorporates:
     *  Constant: '<S503>/Const1'
     */
    CITR_ac_B.OutportBufferForVeCITR_e_DoorLockLastElS = CITR_ac_ConstB.Const1;

    /* SystemInitialize for SignalConversion generated from: '<S503>/VeCITR_e_PwrLimReq_Out_Init' incorporates:
     *  Constant: '<S503>/Const4'
     */
    CITR_ac_B.OutportBufferForVeCITR_e_PwrLimReq_Out_I = CITR_ac_ConstB.Const4;

    /* SystemInitialize for SignalConversion generated from: '<S503>/VeCITR_e_ChrgPortLock_StsB_Out_Init' incorporates:
     *  Constant: '<S503>/Const9'
     */
    CITR_ac_B.OutportBufferForVeCITR_e_ChrgPortLock_St = CITR_ac_ConstB.Const9;

    /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/PowerPanel_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S496>/PPFaultRsn_Init' incorporates:
     *  Constant: '<S585>/Constant'
     */
    CITR_ac_B.OutportBufferForPPFaultRsn_Init = CITR_ac_ConstB.Constant_a;

    /* SystemInitialize for SignalConversion generated from: '<S496>/PPFault_Init' incorporates:
     *  Constant: '<S567>/Constant'
     */
    CITR_ac_B.OutportBufferForPPFault_Init = CITR_ac_ConstB.Constant_i;

    /* SystemInitialize for SignalConversion generated from: '<S496>/PPLEDFault_Init' incorporates:
     *  Constant: '<S578>/Constant'
     */
    CITR_ac_B.OutportBufferForPPLEDFault_Init = CITR_ac_ConstB.Constant_g;

    /* SystemInitialize for SignalConversion generated from: '<S496>/PP2FaultRsn_Init' incorporates:
     *  Constant: '<S583>/Constant'
     */
    CITR_ac_B.OutportBufferForPP2FaultRsn_Init = CITR_ac_ConstB.Constant_iv;

    /* SystemInitialize for SignalConversion generated from: '<S496>/PP2Fault_Init' incorporates:
     *  Constant: '<S581>/Constant'
     */
    CITR_ac_B.OutportBufferForPP2Fault_Init = CITR_ac_ConstB.Constant;

    /* SystemInitialize for SignalConversion generated from: '<S496>/PP2LEDFault_Init' incorporates:
     *  Constant: '<S582>/Constant'
     */
    CITR_ac_B.OutportBufferForPP2LEDFault_Init = CITR_ac_ConstB.Constant_c0;

    /* SystemInitialize for SignalConversion generated from: '<S496>/PP_LED_A_Feedback_Init' incorporates:
     *  Constant: '<S584>/Constant'
     */
    CITR_ac_B.OutportBufferForPP_LED_A_Feedback_Init =
        CITR_ac_ConstB.Constant_cm;

    /* SystemInitialize for SignalConversion generated from: '<S496>/PP_LED_B_Feedback_Init' incorporates:
     *  Constant: '<S586>/Constant'
     */
    CITR_ac_B.OutportBufferForPP_LED_B_Feedback_Init =
        CITR_ac_ConstB.Constant_nu;

    /* SystemInitialize for SignalConversion generated from: '<S496>/PP_LED_C_Feedback_Init' incorporates:
     *  Constant: '<S587>/Constant'
     */
    CITR_ac_B.OutportBufferForPP_LED_C_Feedback_Init =
        CITR_ac_ConstB.Constant_h3;

    /* SystemInitialize for SignalConversion generated from: '<S496>/PP_LED_A_ FailStatus_Init' incorporates:
     *  Constant: '<S568>/Constant'
     */
    CITR_ac_B.OutportBufferForPP_LED_A_FailStatus_Init =
        CITR_ac_ConstB.Constant_hb;

    /* SystemInitialize for SignalConversion generated from: '<S496>/PP_LED_B_ FailStatus_Init' incorporates:
     *  Constant: '<S569>/Constant'
     */
    CITR_ac_B.OutportBufferForPP_LED_B_FailStatus_Init =
        CITR_ac_ConstB.Constant_im;

    /* SystemInitialize for SignalConversion generated from: '<S496>/PP_LED_C_ FailStatus_Init' incorporates:
     *  Constant: '<S570>/Constant'
     */
    CITR_ac_B.OutportBufferForPP_LED_C_FailStatus_Init =
        CITR_ac_ConstB.Constant_ge;

    /* SystemInitialize for SignalConversion generated from: '<S496>/PP_LED_A_Color_Feedback_Init' incorporates:
     *  Constant: '<S571>/Constant'
     */
    CITR_ac_B.OutportBufferForPP_LED_A_Color_Feedbac_j =
        CITR_ac_ConstB.Constant_gy;

    /* SystemInitialize for SignalConversion generated from: '<S496>/PP_LED_B_Color_Feedback_Init' incorporates:
     *  Constant: '<S572>/Constant'
     */
    CITR_ac_B.OutportBufferForPP_LED_B_Color_Feedbac_j =
        CITR_ac_ConstB.Constant_ou;

    /* SystemInitialize for SignalConversion generated from: '<S496>/PP_LED_C_Color_Feedback_Init' incorporates:
     *  Constant: '<S573>/Constant'
     */
    CITR_ac_B.OutportBufferForPP_LED_C_Color_Feedbac_c =
        CITR_ac_ConstB.Constant_dj;

    /* SystemInitialize for SignalConversion generated from: '<S496>/PP2_LED_A_Feedback_Init' incorporates:
     *  Constant: '<S574>/Constant'
     */
    CITR_ac_B.OutportBufferForPP2_LED_A_Feedback_Init =
        CITR_ac_ConstB.Constant_cr;

    /* SystemInitialize for SignalConversion generated from: '<S496>/PP2_LED_B_Feedback_Init' incorporates:
     *  Constant: '<S575>/Constant'
     */
    CITR_ac_B.OutportBufferForPP2_LED_B_Feedback_Init =
        CITR_ac_ConstB.Constant_am;

    /* SystemInitialize for SignalConversion generated from: '<S496>/PP2_LED_A_ FailStatus_Init' incorporates:
     *  Constant: '<S576>/Constant'
     */
    CITR_ac_B.OutportBufferForPP2_LED_A_FailStatus_Ini =
        CITR_ac_ConstB.Constant_nh;

    /* SystemInitialize for SignalConversion generated from: '<S496>/PP2_LED_B_ FailStatus_Init' incorporates:
     *  Constant: '<S577>/Constant'
     */
    CITR_ac_B.OutportBufferForPP2_LED_B_FailStatus_Ini =
        CITR_ac_ConstB.Constant_kx;

    /* SystemInitialize for SignalConversion generated from: '<S496>/PP2_LED_A_Color_Feedback_Init' incorporates:
     *  Constant: '<S579>/Constant'
     */
    CITR_ac_B.OutportBufferForPP2_LED_A_Color_Feedba_p =
        CITR_ac_ConstB.Constant_fr;

    /* SystemInitialize for SignalConversion generated from: '<S496>/PP2_LED_B_Color_Feedback_Init' incorporates:
     *  Constant: '<S580>/Constant'
     */
    CITR_ac_B.OutportBufferForPP2_LED_B_Color_Feedba_g =
        CITR_ac_ConstB.Constant_je;

    /* End of SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeCITR_e_PowerLimit_Req' incorporates:
     *  SubSystem: '<Root>/PokeCITR_e_PowerLimit_Req'
     */
    /* SystemInitialize for Chart: '<S413>/PokeCITR_e_PowerLimit_ReqChrt' */
    CITR_ac_B.LeCITR_e_PowerLimit_Req_out = CeOBCR_e_PwrLimReq_SNA;

    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeCITR_e_PowerLimit_Req' */

    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeCITR_e_PowerLimit_Req_2' incorporates:
     *  SubSystem: '<Root>/PokeCITR_e_PowerLimit_Req_2'
     */
    /* SystemInitialize for Chart: '<S414>/PokeCITR_e_PowerLimit_Req_2Chrt' */
    CITR_ac_B.LeCITR_e_PowerLimit_Req_2_out = CeOBCR_e_PwrLimReq_SNA;

    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeCITR_e_PowerLimit_Req_2' */

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/CITR_MedTED'
     */
    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/ChrgPort'
     */
    /* SystemInitialize for SignalConversion generated from: '<S452>/HBridge_ChrgPortLck_Cal' incorporates:
     *  Constant: '<S477>/Calib'
     */
    CITR_ac_B.OutportBufferForHBridge_ChrgPortLck_Cal =
        KeCITR_b_HBridge_ChrgPortLck;

    /* End of SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_DoorLockLastElSts' incorporates:
     *  Merge: '<Root>/Merge_Outport_1'
     */
    (void)Rte_Write_VeCITR_e_DoorLockLastElSts_Value(CeOBCR_e_LKD);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_CPIM_RedLED_FailSts' incorporates:
     *  Merge: '<Root>/Merge_73'
     */
    (void)Rte_Write_VeCITR_e_CPIM_RedLED_FailSts_Value(CeCITR_e_CPIM_LEDNormal);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_CPIM_GreenLED_FailSts' incorporates:
     *  Merge: '<Root>/Merge_84'
     */
    (void)Rte_Write_VeCITR_e_CPIM_GreenLED_FailSts_Value(CeCITR_e_CPIM_LEDNormal);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_CPIM_BlueLED_FailSts' incorporates:
     *  Merge: '<Root>/Merge_95'
     */
    (void)Rte_Write_VeCITR_e_CPIM_BlueLED_FailSts_Value(CeCITR_e_CPIM_LEDNormal);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_CPIM_Ind1_Fdbk' incorporates:
     *  Merge: '<Root>/Merge_60'
     */
    (void)Rte_Write_VeCITR_e_CPIM_Ind1_Fdbk_Value(CeCITR_e_CPIM_Ind_Off);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_CPIM_Ind2_Fdbk' incorporates:
     *  Merge: '<Root>/Merge_61'
     */
    (void)Rte_Write_VeCITR_e_CPIM_Ind2_Fdbk_Value(CeCITR_e_CPIM_Ind_Off);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_CPIM_Ind3_Fdbk' incorporates:
     *  Merge: '<Root>/Merge_63'
     */
    (void)Rte_Write_VeCITR_e_CPIM_Ind3_Fdbk_Value(CeCITR_e_CPIM_Ind_Off);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_CPIM_Ind4_Fdbk' incorporates:
     *  Merge: '<Root>/Merge_64'
     */
    (void)Rte_Write_VeCITR_e_CPIM_Ind4_Fdbk_Value(CeCITR_e_CPIM_Ind_Off);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_CPIM_Ind5_Fdbk' incorporates:
     *  Merge: '<Root>/Merge_55'
     */
    (void)Rte_Write_VeCITR_e_CPIM_Ind5_Fdbk_Value(CeCITR_e_CPIM_Ind_Off);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_CPIM_Ind1_FailSts' incorporates:
     *  Merge: '<Root>/Merge_53'
     */
    (void)Rte_Write_VeCITR_e_CPIM_Ind1_FailSts_Value(CeCITR_e_CPIM_LEDNormal);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_CPIM_Ind2_FailSts' incorporates:
     *  Merge: '<Root>/Merge_54'
     */
    (void)Rte_Write_VeCITR_e_CPIM_Ind2_FailSts_Value(CeCITR_e_CPIM_LEDNormal);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_CPIM_Ind3_FailSts' incorporates:
     *  Merge: '<Root>/Merge_56'
     */
    (void)Rte_Write_VeCITR_e_CPIM_Ind3_FailSts_Value(CeCITR_e_CPIM_LEDNormal);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_CPIM_Ind4_FailSts' incorporates:
     *  Merge: '<Root>/Merge_57'
     */
    (void)Rte_Write_VeCITR_e_CPIM_Ind4_FailSts_Value(CeCITR_e_CPIM_LEDNormal);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_CPIM_Ind5_FailSts' incorporates:
     *  Merge: '<Root>/Merge_58'
     */
    (void)Rte_Write_VeCITR_e_CPIM_Ind5_FailSts_Value(CeCITR_e_CPIM_LEDNormal);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_CPIM_Ind_Color_Fdbk' incorporates:
     *  Merge: '<Root>/Merge_59'
     */
    (void)Rte_Write_VeCITR_e_CPIM_Ind_Color_Fdbk_Value(CeCITR_e_CPIM_NoColor);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_BCIM_Ind1_Fdbk' incorporates:
     *  Merge: '<Root>/Merge_69'
     */
    (void)Rte_Write_VeCITR_e_BCIM_Ind1_Fdbk_Value(CeCITR_e_BCIM_Ind_Off);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_BCIM_Ind2_Fdbk' incorporates:
     *  Merge: '<Root>/Merge_70'
     */
    (void)Rte_Write_VeCITR_e_BCIM_Ind2_Fdbk_Value(CeCITR_e_BCIM_Ind_Off);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_BCIM_Ind3_Fdbk' incorporates:
     *  Merge: '<Root>/Merge_71'
     */
    (void)Rte_Write_VeCITR_e_BCIM_Ind3_Fdbk_Value(CeCITR_e_BCIM_Ind_Off);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_BCIM_Ind4_Fdbk' incorporates:
     *  Merge: '<Root>/Merge_72'
     */
    (void)Rte_Write_VeCITR_e_BCIM_Ind4_Fdbk_Value(CeCITR_e_BCIM_Ind_Off);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_BCIM_Ind5_Fdbk' incorporates:
     *  Merge: '<Root>/Merge_74'
     */
    (void)Rte_Write_VeCITR_e_BCIM_Ind5_Fdbk_Value(CeCITR_e_BCIM_Ind_Off);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_BCIM_Ind1_FailSts' incorporates:
     *  Merge: '<Root>/Merge_75'
     */
    (void)Rte_Write_VeCITR_e_BCIM_Ind1_FailSts_Value(CeCITR_e_BCIM_LEDNormal);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_BCIM_Ind2_FailSts' incorporates:
     *  Merge: '<Root>/Merge_76'
     */
    (void)Rte_Write_VeCITR_e_BCIM_Ind2_FailSts_Value(CeCITR_e_BCIM_LEDNormal);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_BCIM_Ind3_FailSts' incorporates:
     *  Merge: '<Root>/Merge_77'
     */
    (void)Rte_Write_VeCITR_e_BCIM_Ind3_FailSts_Value(CeCITR_e_BCIM_LEDNormal);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_BCIM_Ind4_FailSts' incorporates:
     *  Merge: '<Root>/Merge_78'
     */
    (void)Rte_Write_VeCITR_e_BCIM_Ind4_FailSts_Value(CeCITR_e_BCIM_LEDNormal);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_BCIM_Ind5_FailSts' incorporates:
     *  Merge: '<Root>/Merge_79'
     */
    (void)Rte_Write_VeCITR_e_BCIM_Ind5_FailSts_Value(CeCITR_e_BCIM_LEDNormal);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_PwrLimReq' incorporates:
     *  Merge: '<Root>/Merge_Outport_52'
     */
    (void)Rte_Write_VeCITR_e_PwrLimReq_Value(CeOBCR_e_PwrLimReq_SNA);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_CPIM_Icon1_Sts' incorporates:
     *  Merge: '<Root>/Merge_65'
     */
    (void)Rte_Write_VeCITR_e_CPIM_Icon1_Sts_Value(CeCITR_e_CPIM_Icon_OFF);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_CPIM_Icon2_Sts' incorporates:
     *  Merge: '<Root>/Merge_66'
     */
    (void)Rte_Write_VeCITR_e_CPIM_Icon2_Sts_Value(CeCITR_e_CPIM_Icon_OFF);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_HU_Sch1_Type' incorporates:
     *  Merge: '<Root>/Merge_149'
     */
    (void)Rte_Write_VeCITR_e_HU_Sch1_Type_Value(CeCITR_e_SchType_NoSelection);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_TBM_Sch1_Type' incorporates:
     *  Merge: '<Root>/Merge_154'
     */
    (void)Rte_Write_VeCITR_e_TBM_Sch1_Type_Value(CeCITR_e_SchType_NoSelection);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_HU_Sch2_Type' incorporates:
     *  Merge: '<Root>/Merge_205'
     */
    (void)Rte_Write_VeCITR_e_HU_Sch2_Type_Value(CeCITR_e_SchType_NoSelection);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_TBM_Sch2_Type' incorporates:
     *  Merge: '<Root>/Merge_210'
     */
    (void)Rte_Write_VeCITR_e_TBM_Sch2_Type_Value(CeCITR_e_SchType_NoSelection);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_HU_Sch3_Type' incorporates:
     *  Merge: '<Root>/Merge_262'
     */
    (void)Rte_Write_VeCITR_e_HU_Sch3_Type_Value(CeCITR_e_SchType_NoSelection);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_TBM_Sch3_Type' incorporates:
     *  Merge: '<Root>/Merge_267'
     */
    (void)Rte_Write_VeCITR_e_TBM_Sch3_Type_Value(CeCITR_e_SchType_NoSelection);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_CPIM_ChrgPortLock_FailSts' incorporates:
     *  Merge: '<Root>/Merge_33'
     */
    (void)Rte_Write_VeCITR_e_CPIM_ChrgPortLock_FailSts_Value
        (CeCITR_e_CPIMLock_Nofailure);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_RRM_VP_Level' incorporates:
     *  Merge: '<Root>/Merge_35'
     */
    (void)Rte_Write_VeCITR_e_RRM_VP_Level_Value(CeCITR_e_RRM_VP_Absent);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_DateTmFormat' incorporates:
     *  Merge: '<Root>/Merge_369'
     */
    (void)Rte_Write_VeCITR_e_DateTmFormat_Value(CeCITR_e_DateTm_NotDef);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_DVC_ChrgPort_IO' incorporates:
     *  Merge: '<Root>/Merge_15'
     */
    (void)Rte_Write_VeCITR_e_DVC_ChrgPort_IO_Value(CeODCR_e_Return_ECU_Cntrl);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_DCChrg_TestSts' incorporates:
     *  Merge: '<Root>/Merge_17'
     */
    (void)Rte_Write_VeCITR_e_DCChrg_TestSts_Value
        (CeOBCR_e_DCChrg_TestSts_NotInit);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_ChrgPortLock_StsB' incorporates:
     *  Merge: '<Root>/Merge_Outport_214'
     */
    (void)Rte_Write_VeCITR_e_ChrgPortLock_StsB_Value(CeOBCR_e_DefaultLock_Sts);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_DVC_BCIM_IO' incorporates:
     *  Merge: '<Root>/Merge_100'
     */
    (void)Rte_Write_VeCITR_e_DVC_BCIM_IO_Value(CeODCR_e_Return_ECU_Cntrl);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_DVC_BCIM_Ind1' incorporates:
     *  Merge: '<Root>/Merge_101'
     */
    (void)Rte_Write_VeCITR_e_DVC_BCIM_Ind1_Value(CeCITR_e_BCIM_Ind_Off);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_DVC_BCIM_Ind2' incorporates:
     *  Merge: '<Root>/Merge_102'
     */
    (void)Rte_Write_VeCITR_e_DVC_BCIM_Ind2_Value(CeCITR_e_BCIM_Ind_Off);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_DVC_BCIM_Ind3' incorporates:
     *  Merge: '<Root>/Merge_103'
     */
    (void)Rte_Write_VeCITR_e_DVC_BCIM_Ind3_Value(CeCITR_e_BCIM_Ind_Off);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_DVC_BCIM_Ind4' incorporates:
     *  Merge: '<Root>/Merge_104'
     */
    (void)Rte_Write_VeCITR_e_DVC_BCIM_Ind4_Value(CeCITR_e_BCIM_Ind_Off);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_DVC_BCIM_Ind5' incorporates:
     *  Merge: '<Root>/Merge_105'
     */
    (void)Rte_Write_VeCITR_e_DVC_BCIM_Ind5_Value(CeCITR_e_BCIM_Ind_Off);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_DVC_CPIM_IO' incorporates:
     *  Merge: '<Root>/Merge_108'
     */
    (void)Rte_Write_VeCITR_e_DVC_CPIM_IO_Value(CeODCR_e_Return_ECU_Cntrl);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_DVC_CPIM_Ind1' incorporates:
     *  Merge: '<Root>/Merge_109'
     */
    (void)Rte_Write_VeCITR_e_DVC_CPIM_Ind1_Value(CeCITR_e_CPIM_Ind_Off);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_DVC_CPIM_Ind2' incorporates:
     *  Merge: '<Root>/Merge_110'
     */
    (void)Rte_Write_VeCITR_e_DVC_CPIM_Ind2_Value(CeCITR_e_CPIM_Ind_Off);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_DVC_CPIM_Ind3' incorporates:
     *  Merge: '<Root>/Merge_111'
     */
    (void)Rte_Write_VeCITR_e_DVC_CPIM_Ind3_Value(CeCITR_e_CPIM_Ind_Off);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_DVC_CPIM_Ind4' incorporates:
     *  Merge: '<Root>/Merge_112'
     */
    (void)Rte_Write_VeCITR_e_DVC_CPIM_Ind4_Value(CeCITR_e_CPIM_Ind_Off);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_DVC_CPIM_Ind5' incorporates:
     *  Merge: '<Root>/Merge_113'
     */
    (void)Rte_Write_VeCITR_e_DVC_CPIM_Ind5_Value(CeCITR_e_CPIM_Ind_Off);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_DVC_CPIMBlinkRate' incorporates:
     *  Merge: '<Root>/Merge_114'
     */
    (void)Rte_Write_VeCITR_e_DVC_CPIMBlinkRate_Value(CeCITR_e_CPIM_NoBlink);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_DVC_CPIM_Color' incorporates:
     *  Merge: '<Root>/Merge_115'
     */
    (void)Rte_Write_VeCITR_e_DVC_CPIM_Color_Value(CeCITR_e_CPIM_NoColor);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_DVC_CPIM_IconI1' incorporates:
     *  Merge: '<Root>/Merge_116'
     */
    (void)Rte_Write_VeCITR_e_DVC_CPIM_IconI1_Value(CeCITR_e_CPIM_Icon_OFF);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_DVC_CPIM_IconI2' incorporates:
     *  Merge: '<Root>/Merge_118'
     */
    (void)Rte_Write_VeCITR_e_DVC_CPIM_IconI2_Value(CeCITR_e_CPIM_Icon_OFF);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_DVC_BCIM_BlinkRate' incorporates:
     *  Merge: '<Root>/Merge_107'
     */
    (void)Rte_Write_VeCITR_e_DVC_BCIM_BlinkRate_Value(CeCITR_e_BCIM_NoBlink);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_HU_Sch3_Allow' incorporates:
     *  Merge: '<Root>/Merge_294'
     */
    (void)Rte_Write_VeCITR_e_HU_Sch3_Allow_Value(CeCITR_e_AnyTime);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_TBM_Sch3_Allow' incorporates:
     *  Merge: '<Root>/Merge_296'
     */
    (void)Rte_Write_VeCITR_e_TBM_Sch3_Allow_Value(CeCITR_e_AnyTime);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_HU_Sch4_Allow' incorporates:
     *  Merge: '<Root>/Merge_337'
     */
    (void)Rte_Write_VeCITR_e_HU_Sch4_Allow_Value(CeCITR_e_AnyTime);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_TBM_Sch4_Allow' incorporates:
     *  Merge: '<Root>/Merge_339'
     */
    (void)Rte_Write_VeCITR_e_TBM_Sch4_Allow_Value(CeCITR_e_AnyTime);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_FOTA_Install_Type' incorporates:
     *  Merge: '<Root>/Merge_376'
     */
    (void)Rte_Write_VeCITR_e_FOTA_Install_Type_Value(CeCITR_e_NoFOTA);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_FOTA_Install_Status' incorporates:
     *  Merge: '<Root>/Merge_378'
     */
    (void)Rte_Write_VeCITR_e_FOTA_Install_Status_Value
        (CeCITR_e_Installation_Default);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_ChrgrFlapSts' incorporates:
     *  Merge: '<Root>/Merge_29'
     */
    (void)Rte_Write_VeCITR_e_ChrgrFlapSts_Value(CeCITR_e_ChrgrFlap_Closed);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_BCIM_Ind_Color_Fdbk' incorporates:
     *  Merge: '<Root>/Merge_119'
     */
    (void)Rte_Write_VeCITR_e_BCIM_Ind_Color_Fdbk_Value(CeCITR_e_BCIM_NoColor);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_DVC_BCIM_Color' incorporates:
     *  Merge: '<Root>/Merge_121'
     */
    (void)Rte_Write_VeCITR_e_DVC_BCIM_Color_Value(CeCITR_e_BCIM_NoColor);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_HU_ChrgSchedType1' incorporates:
     *  Merge: '<Root>/Merge_187'
     */
    (void)Rte_Write_VeCITR_e_HU_ChrgSchedType1_Value(CeCITR_e_No_Selection);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_HU_ChrgSchedType2' incorporates:
     *  Merge: '<Root>/Merge_37'
     */
    (void)Rte_Write_VeCITR_e_HU_ChrgSchedType2_Value(CeCITR_e_No_Selection);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_RmtChrgPortLkCmd' incorporates:
     *  Merge: '<Root>/Merge_49'
     */
    (void)Rte_Write_VeCITR_e_RmtChrgPortLkCmd_Value(CeCITR_e_Default);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_CoopCh_ChrgCmd' incorporates:
     *  Merge: '<Root>/Merge_126'
     */
    (void)Rte_Write_VeCITR_e_CoopCh_ChrgCmd_Value(CeCITR_e_DEFAULT);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_TBM_ChrgSchedType1' incorporates:
     *  Merge: '<Root>/Merge_130'
     */
    (void)Rte_Write_VeCITR_e_TBM_ChrgSchedType1_Value(CeCITR_e_No_Selection);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_TBM_ChrgSchedType2' incorporates:
     *  Merge: '<Root>/Merge_132'
     */
    (void)Rte_Write_VeCITR_e_TBM_ChrgSchedType2_Value(CeCITR_e_No_Selection);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_PPFaultRsn' incorporates:
     *  Merge: '<Root>/Merge_312'
     */
    (void)Rte_Write_VeCITR_e_PPFaultRsn_Value(CeCITR_e_No_Fault);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_PPFault' incorporates:
     *  Merge: '<Root>/Merge_314'
     */
    (void)Rte_Write_VeCITR_e_PPFault_Value(CeVTLR_e_NoFault);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_PPLEDFault' incorporates:
     *  Merge: '<Root>/Merge_316'
     */
    (void)Rte_Write_VeCITR_e_PPLEDFault_Value(CeCITR_e_LED_No_Fault);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_PP2FaultRsn' incorporates:
     *  Merge: '<Root>/Merge_399'
     */
    (void)Rte_Write_VeCITR_e_PP2FaultRsn_Value(CeCITR_e_No_Fault);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_PP2Fault' incorporates:
     *  Merge: '<Root>/Merge_401'
     */
    (void)Rte_Write_VeCITR_e_PP2Fault_Value(CeVTLR_e_NoFaultPP2);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_PP2LEDFault' incorporates:
     *  Merge: '<Root>/Merge_403'
     */
    (void)Rte_Write_VeCITR_e_PP2LEDFault_Value(CeCITR_e_LED_No_Fault);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_PP_LED_A_Feedback' incorporates:
     *  Merge: '<Root>/Merge_434'
     */
    (void)Rte_Write_VeCITR_e_PP_LED_A_Feedback_Value(CeCITR_e_CPIM_Ind_Off);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_PP_LED_B_Feedback' incorporates:
     *  Merge: '<Root>/Merge_435'
     */
    (void)Rte_Write_VeCITR_e_PP_LED_B_Feedback_Value(CeCITR_e_CPIM_Ind_Off);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_PP_LED_C_Feedback' incorporates:
     *  Merge: '<Root>/Merge_436'
     */
    (void)Rte_Write_VeCITR_e_PP_LED_C_Feedback_Value(CeCITR_e_CPIM_Ind_Off);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_PP_LED_A_FailStatus' incorporates:
     *  Merge: '<Root>/Merge_437'
     */
    (void)Rte_Write_VeCITR_e_PP_LED_A_FailStatus_Value(CeCITR_e_CPIM_LEDNormal);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_PP_LED_B_FailStatus' incorporates:
     *  Merge: '<Root>/Merge_438'
     */
    (void)Rte_Write_VeCITR_e_PP_LED_B_FailStatus_Value(CeCITR_e_CPIM_LEDNormal);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_PP_LED_C_FailStatus' incorporates:
     *  Merge: '<Root>/Merge_439'
     */
    (void)Rte_Write_VeCITR_e_PP_LED_C_FailStatus_Value(CeCITR_e_CPIM_LEDNormal);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_PP_LED_A_Color_Feedback' incorporates:
     *  Merge: '<Root>/Merge_440'
     */
    (void)Rte_Write_VeCITR_e_PP_LED_A_Color_Feedback_Value
        (CeCITR_e_PP_LED_Color_Init);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_PP_LED_B_Color_Feedback' incorporates:
     *  Merge: '<Root>/Merge_441'
     */
    (void)Rte_Write_VeCITR_e_PP_LED_B_Color_Feedback_Value
        (CeCITR_e_PP_LED_Color_Init);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_PP_LED_C_Color_Feedback' incorporates:
     *  Merge: '<Root>/Merge_442'
     */
    (void)Rte_Write_VeCITR_e_PP_LED_C_Color_Feedback_Value
        (CeCITR_e_PP_LED_Color_Init);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_PP2_LED_A_Feedback' incorporates:
     *  Merge: '<Root>/Merge_447'
     */
    (void)Rte_Write_VeCITR_e_PP2_LED_A_Feedback_Value(CeCITR_e_CPIM_Ind_Off);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_PP2_LED_B_Feedback' incorporates:
     *  Merge: '<Root>/Merge_448'
     */
    (void)Rte_Write_VeCITR_e_PP2_LED_B_Feedback_Value(CeCITR_e_CPIM_Ind_Off);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_PP2_LED_A_FailStatus' incorporates:
     *  Merge: '<Root>/Merge_449'
     */
    (void)Rte_Write_VeCITR_e_PP2_LED_A_FailStatus_Value(CeCITR_e_CPIM_LEDNormal);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_PP2_LED_B_FailStatus' incorporates:
     *  Merge: '<Root>/Merge_450'
     */
    (void)Rte_Write_VeCITR_e_PP2_LED_B_FailStatus_Value(CeCITR_e_CPIM_LEDNormal);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_PP2_LED_A_Color_Feedback' incorporates:
     *  Merge: '<Root>/Merge_451'
     */
    (void)Rte_Write_VeCITR_e_PP2_LED_A_Color_Feedback_Value
        (CeCITR_e_PP_LED_Color_Init);

    /* SystemInitialize for Outport: '<Root>/VeCITR_e_PP2_LED_B_Color_Feedback' incorporates:
     *  Merge: '<Root>/Merge_452'
     */
    (void)Rte_Write_VeCITR_e_PP2_LED_B_Color_Feedback_Value
        (CeCITR_e_PP_LED_Color_Init);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
